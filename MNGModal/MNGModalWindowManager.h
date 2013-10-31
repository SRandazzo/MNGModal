//
//  MNGModalWindowManager.h
//  MNGModal
//
//  Created by Paperless Post on 10/31/13.
//
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSUInteger, MNGModalViewControllerOptions) {
	MNGModalAnimationShouldDarken               = 1 << 0,
	
    MNGModalAnimationNone                       = 0 << 2,
	MNGModalAnimationSlideFromRight             = 1 << 2, 
    MNGModalAnimationSlideFromLeft              = 2 << 2,
    MNGModalAnimationSlideFromTop               = 3 << 2,
    MNGModalAnimationSlideFromBottom            = 4 << 2,
	MNGModalAnimationFade                       = 5 << 2,
};

@interface MNGModalWindowManager : NSObject

+ (MNGModalWindowManager *)manager;

-(void)presentViewController:(UIViewController *)viewControllerToPresent frame:(CGRect)frame options:(MNGModalViewControllerOptions)options completion:(void (^)(void))completion;

- (void)dismissModalViewControllerWithCompletion:(void (^)(void))completion;

@end
