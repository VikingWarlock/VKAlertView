//
//  VKAlertView.h
//  VKAlertView
//
//  Created by viking warlock on 5/23/15.
//  Copyright (c) 2015 VikingWarlock. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VKAlertView;

typedef void(^VKAlertViewActionHandler)(VKAlertView *alertView);


@interface VKAlertView : UIView


@property(nonatomic,copy)NSString *title;
@property(nonatomic,copy)NSString *message;
@property(nonatomic,readonly)UILabel *textLabel;
@property(nonatomic,readonly)UILabel *titleLabel;
@property(nonatomic,readonly)UITextField *textfield;

/**
 *An array of VKAlertActions
 */
@property(nonatomic,readonly)NSArray *Actions;


@end
