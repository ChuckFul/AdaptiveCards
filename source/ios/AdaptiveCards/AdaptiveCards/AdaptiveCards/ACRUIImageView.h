//
//  ACRUIImageView.h
//  AdaptiveCards
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef USE_AC_SWIFT_PACKAGE
#import "ACOBaseCardElement.h"
#import "ACREnums.h"
#else
#import <AdaptiveCards/ACOBaseCardElement.h>
#import <AdaptiveCards/ACREnums.h>
#endif
#import <UIKit/UIKit.h>

@interface ACRUIImageView : UIImageView
@property BOOL isPersonStyle;
@property CGSize desiredSize;
@property ACRImageSize adaptiveImageSize;
@end
