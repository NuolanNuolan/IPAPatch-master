#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NSObject+ZHAddForMethodSwizzing.h"
@interface RedEnvelop : NSObject

+ (void)setupAutoEnvelop;

@end

//提前声明类，因为你没有导入微信头文件的定义
@class  WCRedEnvelopesRedEnvelopesDetailViewController;

@interface RedEnvelop_WCPayC2CMessageCellView : UIView

- (BOOL)zh_isRedEnvelop;
- (BOOL)zh_isLastCell;

- (UITableViewCell *)zh_cell;

-(void)zh_AddDicForRedDeatil:(NSDictionary *)dic;

@end

//
//@interface RedEnvelop_CMessageWrap : NSObject
//
//@end
//
//@interface RedEnvelop_BaseMsgContentViewController : UIViewController
//
//@end
//
//@interface RedEnvelop_WCRedEnvelopesReceiveHomeView : UIView
//
//@end

@interface RedEnvelop_WCRedEnvelopesRedEnvelopesDetailViewController : UIViewController

@end

//@interface RedEnvelop_MMTableViewCell : UITableViewCell
//
//@end
