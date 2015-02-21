//
//  PKAlertAction.h
//  Pods
//
//  Created by Satoshi Ohki on 2015/02/21.
//
//

#import <Foundation/Foundation.h>

#import "PKAlertUtility.h"

@interface PKAlertAction : NSObject <NSCopying>

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, copy) PKActionHandler handler;

+ (instancetype)actionWithTitle:(NSString *)title handler:(PKActionHandler)handler;
+ (instancetype)cancelAction;
+ (instancetype)cancelActionWithHandler:(void(^)(PKAlertAction *))handler;
+ (instancetype)okAction;
+ (instancetype)okActionWithHandler:(void(^)(PKAlertAction *))handler;
+ (instancetype)doneAction;
+ (instancetype)doneActionWithHandler:(void(^)(PKAlertAction *))handler;

@end
