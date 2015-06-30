//
//  EasyUIButton.h
//  EasyUIControl
//
//  Created by 孙昕 on 15/6/26.
//  Copyright (c) 2015年 孙昕. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EasyUIButton : UIButton
/**
 *  圆角的度数
 */
@property (assign,nonatomic) CGFloat radius;
/**
 *  边框额宽度
 */
@property (assign,nonatomic) CGFloat borderWidth;
/**
 *  边框的颜色
 */
@property (strong,nonatomic) UIColor* borderColor;
/**
 *  是否显示顶部的分割线
 */
@property (assign,nonatomic) BOOL bTopGap;
/**
 *  是否显示底部的分割线
 */
@property (assign,nonatomic) BOOL bBottomGap;
/**
 *  placeholder文字，类似于textfield的placeholder
 */
@property (strong,nonatomic) NSString* placeholder;
@end
