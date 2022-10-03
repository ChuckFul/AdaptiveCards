//
//  ACRActionToggleVisibilityRenderer
//  ACRActionToggleVisibilityRenderer.h
//
//  Copyright © 2018 Microsoft. All rights reserved.
//

#ifdef USE_AC_SWIFT_PACKAGE
#import "ACRBaseActionElementRenderer.h"
#else
#import <AdaptiveCards/ACRBaseActionElementRenderer.h>
#endif

@interface ACRActionToggleVisibilityRenderer : ACRBaseActionElementRenderer

+ (ACRActionToggleVisibilityRenderer *)getInstance;

@end
