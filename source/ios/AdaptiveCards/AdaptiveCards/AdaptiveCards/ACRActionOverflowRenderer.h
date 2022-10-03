//
//  ACRActionOverflowRenderer
//  ACRActionOverflowRenderer.h
//
//  Copyright © 2021 Microsoft. All rights reserved.
//

#ifdef USE_AC_SWIFT_PACKAGE
#import "ACRBaseActionElementRenderer.h"
#else
#import <AdaptiveCards/ACRBaseActionElementRenderer.h>
#endif

@interface ACRActionOverflowRenderer : ACRBaseActionElementRenderer

+ (ACRActionOverflowRenderer *)getInstance;

@end
