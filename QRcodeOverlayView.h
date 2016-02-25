//
//  QRcodeOverlayView.h
//  AVITOTT
//
//  Created by avit on 1/6/16.
//
//

#import <UIKit/UIKit.h>

@interface QRcodeOverlayView : UIView
{
}

@property (nonatomic, assign) CGRect transparentArea; //扫描框

- (void)startAnimation;
- (void)stopAnimation;

@end
