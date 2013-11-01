//
//  UIViewController+UIViewController_Modals.m
//  MNGModal
//
//  Created by Paperless Post on 10/29/13.
//
//

#import "UIViewController+CustomModals.h"

@implementation UIViewController (CustomModals)

-(void)presentViewController:(UIViewController *)viewControllerToPresent frame:(CGRect)frame options:(MNGModalViewControllerOptions)options completion:(void (^)(void))completion
{
    [[MNGModalManager manager] presentViewController:viewControllerToPresent frame:frame options:options completion:completion];
}

- (void)dismissModalViewControllerWithCompletion:(void (^)(void))completion
{
    [[MNGModalManager manager] dismissModalViewControllerWithCompletion:completion];
}

@end
