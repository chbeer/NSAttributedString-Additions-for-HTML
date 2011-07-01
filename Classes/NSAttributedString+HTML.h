//
//  NSAttributedString+HTML.h
//  CoreTextExtensions
//
//  Created by Oliver Drobnik on 1/9/11.
//  Copyright 2011 Drobnik.com. All rights reserved.
//

#import <CoreText/CoreText.h>

@class NSAttributedString;

extern NSString *NSBaseURLDocumentOption;
extern NSString *NSTextEncodingNameDocumentOption;
extern NSString *NSTextSizeMultiplierDocumentOption;

extern NSString *DTMaxImageSize;
extern NSString *DTDefaultFontName;
extern NSString *DTDefaultFontFamily;
extern NSString *DTDefaultTextColor;
extern NSString *DTDefaultLinkColor;
extern NSString *DTDefaultLinkDecoration;
extern NSString *DTDefaultFontSize;
extern NSString *DTDefaultParagraphStyle;
extern NSString *DTDefaultTextAlignment;
extern NSString *DTDefaultLineHeightMultiplier;

CTParagraphStyleRef createDefaultParagraphStyle(void);
CTParagraphStyleRef createParagraphStyle(CGFloat paragraphSpacingBefore, CGFloat paragraphSpacing, CGFloat headIndent, NSArray *tabStops, CTTextAlignment alignment);


@interface NSAttributedString (HTML)

- (id)initWithHTML:(NSData *)data documentAttributes:(NSDictionary **)dict;
- (id)initWithHTML:(NSData *)data baseURL:(NSURL *)base documentAttributes:(NSDictionary **)dict;
- (id)initWithHTML:(NSData *)data options:(NSDictionary *)options documentAttributes:(NSDictionary **)dict;

// convenience methods
+ (NSAttributedString *)attributedStringWithHTML:(NSData *)data options:(NSDictionary *)options;


// utilities
+ (NSAttributedString *)synthesizedSmallCapsAttributedStringWithText:(NSString *)text attributes:(NSDictionary *)attributes;

@end
