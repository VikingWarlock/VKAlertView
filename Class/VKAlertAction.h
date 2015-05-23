//
//  VKAlertAction.h
//  VKAlertView
//
//  Created by viking warlock on 5/23/15.
//  Copyright (c) 2015 VikingWarlock. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VKAlertView.h"

typedef NS_ENUM(NSInteger, VKAlertActionStyle)
{
    /**
     *Plain System_Blue
     */
    VKAlertActionStyleDefault=0,
    /**
     *Bold System_Blue
     */
    VKAlertActionStyleEmphasize=1,
    /**
     *Bold VK_Red
     */
    VKAlertActionStyleWarn=2,
    /**
     *Same as Default
     */
    VKAlertActionStyleCustom=0
};


@interface VKAlertAction : NSObject

@property(nonatomic,copy)NSString *title;
@property(nonatomic,assign)VKAlertActionStyle style;
@property(nonatomic,copy)VKAlertViewActionHandler action;


+(instancetype)actionWithTitle:(NSString*)title AndStyle:(VKAlertActionStyle)style AndAction:(VKAlertViewActionHandler)action;

+(instancetype)actionWithTitle:(NSString*)title AndAction:(VKAlertViewActionHandler)action;



@end
