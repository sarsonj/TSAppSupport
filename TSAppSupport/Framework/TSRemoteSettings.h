//
// Created by sarsonj on 5/30/12.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

#define NOTIFICATION_REMOTE_SETTINGS_UPDATED    @"com.tappytaps.remotesettings.updated"

@interface TSRemoteSettings : NSObject

@property(nonatomic, copy) NSString *urlString;
@property(strong, readonly) NSDictionary *settings;

- (void)reload;

- (void)reloadAndCallAfter:(void (^)(BOOL))emptyBlock;

-(BOOL)bKey:(NSString *)name default:(BOOL)deflt;
-(int)iKey:(NSString*)name default:(int)deflt;
-(NSString*)sKey:(NSString*)name default:(NSString *)deflt;

-(void)mergeWithPerUserSettings: (NSDictionary *)perUserSettings;

+(TSRemoteSettings*)sharedInstance;

@property NSString *appUrl;

@end


