/************************************************************
 *  * Hyphenate CONFIDENTIAL
 * __________________
 * Copyright (C) 2016 Hyphenate Inc. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Hyphenate Inc.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Hyphenate Inc.
 */

#ifndef EaseLocalDefine_h
#define EaseLocalDefine_h

#import "EaseChineseToPinyin.h"

#define iPhoneX_BOTTOM_HEIGHT  ([UIScreen mainScreen].bounds.size.height==812?34:0)

#define NSEaseLocalizedString(key, comment) [[NSBundle bundleWithURL:[[NSBundle bundleForClass:[EaseChineseToPinyin class]] URLForResource:@"EaseUIResource.bundle" withExtension:nil]] localizedStringForKey:(key) value:@"" table:nil]

#define ImageBundle [NSBundle bundleWithURL:[[NSBundle bundleForClass:[EaseChineseToPinyin class]] URLForResource:@"EaseUIResource" withExtension:@"bundle"]]

#define ImageWithName(name) [UIImage imageWithContentsOfFile:[ImageBundle pathForResource:[NSString stringWithFormat:@"%@@2x",(name)] ofType:@"png"]]

#endif /* EaseLocalDefine_h */
