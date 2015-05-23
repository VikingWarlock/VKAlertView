//
//  VKAlertAction.m
//  VKAlertView
//
//  Created by viking warlock on 5/23/15.
//  Copyright (c) 2015 VikingWarlock. All rights reserved.
//

#import "VKAlertAction.h"

@implementation VKAlertAction

+(instancetype)actionWithTitle:(NSString *)title AndAction:(VKAlertViewActionHandler)action
{
    return [VKAlertAction actionWithTitle:title AndStyle:VKAlertActionStyleDefault AndAction:action];
}

+(instancetype)actionWithTitle:(NSString *)title AndStyle:(VKAlertActionStyle)style AndAction:(VKAlertViewActionHandler)action
{
    VKAlertAction *item=[[VKAlertAction alloc]init];
    item.title=title;
    item.style=style;
    item.action=action;
    return item;
}

-(void)setTitle:(NSString *)title
{
    _title=title;
}

-(void)setStyle:(VKAlertActionStyle)style
{
    _style=style;
}

-(void)setAction:(VKAlertViewActionHandler)action
{
    _action=action;
}

@end
