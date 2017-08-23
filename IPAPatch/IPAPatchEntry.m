#import "IPAPatchEntry.h"
#import <UIKit/UIKit.h>
#import "RedEnvelop.h"
@implementation IPAPatchEntry

+ (void)load
{
    // DO YOUR WORKS...
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        NSDictionary *dic = [[NSBundle mainBundle]infoDictionary];
        [dic setValue:@"com.tencent.xin" forKey:@"CFBundleIdentifier"];
    });
    
    [RedEnvelop setupAutoEnvelop];

}

+ (void)for_example_showAlert
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        UIAlertController * alertController = [UIAlertController alertControllerWithTitle:@"Hacked" message:@"Hacked with IPAPatch" preferredStyle:UIAlertControllerStyleAlert];
        [alertController addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleCancel handler:NULL]];
        UIViewController * controller = [UIApplication sharedApplication].keyWindow.rootViewController;
        while (controller.presentedViewController) {
            controller = controller.presentedViewController;
        }
        [controller presentViewController:alertController animated:YES completion:NULL];
    });
}

@end
