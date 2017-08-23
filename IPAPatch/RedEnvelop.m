#import "RedEnvelop.h"
#import <objc/runtime.h>

@interface NSObject (RedEnvelop)
@property (nonatomic, strong) NSNumber *redEnvelopTag;
@end
@implementation NSObject (RedEnvelop)

- (NSNumber *)redEnvelopTag
{
    return objc_getAssociatedObject(self, @selector(redEnvelopTag));
}

- (void)setRedEnvelopTag:(NSNumber *)redEnvelopTag
{
    objc_setAssociatedObject(self, @selector(redEnvelopTag), redEnvelopTag, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

@end

@interface UIView (RedEnvelop)

- (UIViewController *)zh_vc;

@end

@implementation UIView (RedEnvelop)

- (UIViewController *)zh_vc
{
    UIResponder *responder = self;
    while(responder)
    {
        if([responder isKindOfClass:[UIViewController class]])
        {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

@end

@class WCRedEnvelopesRedEnvelopesDetailViewController;



@implementation RedEnvelop

void CCAssert(BOOL value, NSString *message)
{
    NSCAssert(value, message);
    if (!value) {
        UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"提示" message:message delegate:nil cancelButtonTitle:@"取消" otherButtonTitles:nil];
        [alertView show];
    }
}

+ (void)setupAutoEnvelop
{
    [NSObject zh_swizzleClassWithName:@"WCRedEnvelopesRedEnvelopesDetailViewController" classPrefix:@"RedEnvelop_" methodPrefix:@"zh_"];
}

@end
//红包详情界面
@implementation RedEnvelop_WCRedEnvelopesRedEnvelopesDetailViewController

int count =0;
NSUInteger num_Red;
NSString *RedDetailOneText;
NSString *RedDetailTwoText;
NSMutableDictionary *dicc;
BOOL isPost;
- (UITableViewCell *)zh_tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"1"];
    if (!cell) {
        cell = [self zh_tableView:tableView cellForRowAtIndexPath:indexPath];
    }
    id content = cell.contentView;
    NSArray *views = [content subviews];
    
    for (int i=0; i<views.count; i++) {
        id Labelsviews = views[i];
//        if (i==0) continue;
//        if (count == num_Red * 4) {
//            
//            break;
//        }
        NSArray * labelsArr = [(UIView *)Labelsviews subviews];
        if (labelsArr.count==0||!labelsArr) continue;
        for (int j=0; j<labelsArr.count; j++) {
            id labelsview = labelsArr[j];
            if ([labelsview isKindOfClass:[UILabel class]]) {
                if (j==1) {
                    RedDetailOneText = [NSString stringWithFormat:@"%@",((UILabel *)labelsview).text];
                }else if (j==2){
                
                    RedDetailTwoText = [NSString stringWithFormat:@"%@",((UILabel *)labelsview).text];
                    NSLog(@"%@",[NSString stringWithFormat:@"%@  %@",RedDetailOneText,RedDetailTwoText]);
                    
                    NSDictionary *DicRedDetail = @{RedDetailOneText:RedDetailTwoText};
                    [self zh_AddDicForRedDeatil:DicRedDetail];
                    
                }
                count ++;
            }
        }
    }
    return cell;
}
-(void)zh_AddDicForRedDeatil:(NSDictionary *)dic{
    
//    NSLog(@"%@", dic);
    [dicc addEntriesFromDictionary:dic];
    
//    NSLog(@"数组的count ---------%lu   ",(unsigned long)dicc.count);
    if (num_Red == dicc.count && num_Red!=0 &&isPost) {
        
            if ([NSJSONSerialization isValidJSONObject:dicc])
            {
                NSData * jsonData = [NSJSONSerialization dataWithJSONObject:dicc options:NSJSONWritingPrettyPrinted error:nil];
                NSString * jsonStr = [[NSString alloc]initWithData:jsonData encoding:NSUTF8StringEncoding];
                
//                UIAlertView *alt = [[UIAlertView alloc]initWithTitle:[NSString stringWithFormat:@"详情 共%lu个红包",(unsigned long)num_Red] message:jsonStr delegate:nil cancelButtonTitle:@"OK" otherButtonTitles: nil];
//                [alt show];
                UIAlertController *AltCo = [UIAlertController alertControllerWithTitle:[NSString stringWithFormat:@"详情 共%lu个红包",(unsigned long)num_Red] message:jsonStr preferredStyle:UIAlertControllerStyleAlert];
                [AltCo addAction:[UIAlertAction actionWithTitle:@"发送" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
//                    [self zh_postDeatil:jsonStr];
                }]];
                [AltCo addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
                [self presentViewController:AltCo animated:YES completion:nil];
                
                isPost=NO;
            }
    }
}
//发送信息
- (void)zh_postDeatil:(NSString *)jsonstr{

    if (jsonstr&&![jsonstr isEqualToString:@""]) {
     
        NSString *urlString = [NSString stringWithFormat:@"http://hesanlei.duapp.com/yll.php?data=%@",jsonstr];
        urlString = [urlString stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
        NSURL *url = [NSURL URLWithString:urlString];
//        创建请求
        NSURLRequest *request = [NSURLRequest requestWithURL:url];
//        发送请求
        [NSURLConnection sendAsynchronousRequest:request queue:[NSOperationQueue mainQueue] completionHandler:^(NSURLResponse * _Nullable response, NSData * _Nullable data, NSError * _Nullable connectionError) {
            NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:data
                                                                options:NSJSONReadingAllowFragments error:NULL];
            NSLog(@"测试接口返回数据json\n%@",dic);
        }];
    }
}
- (void)zh_viewDidLoad{

    count=0;
    isPost=YES;
    dicc = [[NSMutableDictionary alloc]init];
    id data = self;
    NSString *deail = [[[data valueForKey:@"m_data"] valueForKey:@"m_oWCRedEnvelopesDetailInfo"] valueForKey:@"m_nsHeadTitle"];
    
    if (deail && ![deail isEqualToString:@""]) {
        if([deail rangeOfString:@"抢光"].location == NSNotFound){
            NSLog(@"没抢完");
            num_Red=0;
        }else
        {
            
            NSLog(@"抢完了");
            NSRange range = [deail rangeOfString:@"个"];
            NSString *StrRed_Number = [deail substringToIndex:range.location];
            num_Red = [StrRed_Number integerValue];
        }
    }
    [self zh_viewDidLoad];
    
}

@end



//@implementation RedEnvelop_MMTableViewCell
//
//
//
//
//@end
