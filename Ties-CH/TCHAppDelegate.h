//
//  TCHAppDelegate.h
//  Ties-CH
//
//  Created by  on 6/3/14.
//  Copyright (c) 2014 Human Services Hub, Corp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSLoading.h"
#import "TCHCurrentLocationHelper.h"
#import "WXApi.h"

@interface TCHAppDelegate : UIResponder <UIApplicationDelegate, WXApiDelegate> {
    NSLoading *process;

}

@property (nonatomic, strong) TCHCurrentLocationHelper *tchCurrentLocationHelper;
@property (nonatomic, retain) CLLocation *bestEffortAtLocation;

@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (strong, nonatomic) IBOutlet UINavigationController *navigationController;

@property (strong, nonatomic) NSString *numOfUnreadMessages;

-(void)showLoading;
-(void)stopLoading;

-(NSString *)codeForGender:(NSInteger)code;
-(NSString *) distanceFromTargetLocation: (CLLocation *) location;
-(NSString *)dateTimeDifference:(NSString *)dateString;

-(UIImage *)previewImage:(UIImage *)sourceImage;

@end
