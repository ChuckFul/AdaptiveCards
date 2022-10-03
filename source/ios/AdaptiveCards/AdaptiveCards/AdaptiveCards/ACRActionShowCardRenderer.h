//
//  ACRActionShowCardRenderer
//  ACRActionShowCardRenderer.h
//
//  Copyright © 2017 Microsoft. All rights reserved.
//

#ifdef USE_AC_SWIFT_PACKAGE
#import "ACRBaseActionElementRenderer.h"
#else
#import <AdaptiveCards/ACRBaseActionElementRenderer.h>
#endif

@interface ACRActionShowCardRenderer : ACRBaseActionElementRenderer

+ (ACRActionShowCardRenderer *)getInstance;

@end
