//
//  BlurEffectMenu.h
//  joinup_iphone
//
//  Created by shen_gh on 16/2/1.
//  Copyright © 2016年 com.joinup. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BlurEffectMenu,BlurEffectMenuItem;
//协议
@protocol BlurEffectMenuDelegate <NSObject>

//点击背景dismiss
- (void)blurEffectMenuDidTapOnBackground:(BlurEffectMenu *)menu;
//点击item
- (void)blurEffectMenu:(BlurEffectMenu *)menu didTapOnItem:(BlurEffectMenuItem *)item;

@end
//模型
@interface BlurEffectMenuItem : NSObject

@property (nonatomic,copy) NSString *title;//标题
@property (nonatomic,strong) UIImage *icon;//图标
@end

@interface BlurEffectMenu : UIViewController

@property (nonatomic,assign) id<BlurEffectMenuDelegate>delegate;
@property (nonatomic,copy) NSArray *menuItemArr;
//copy修饰 新指针
//初始化
- (instancetype)initWithMenus:(NSArray *)menus;

@end
