//
//  EnterView.h
//  LiangCang
//
//  Created by qianfeng on 15/10/19.
//  Copyright (c) 2015年 11111111. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EnterViewdelegate <NSObject>

-(void)Enterview;

@end

@interface EnterView : UIView


@property (nonatomic,weak)id <EnterViewdelegate>delegate;

@end
