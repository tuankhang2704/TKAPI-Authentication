#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TKAPIKey : NSObject

//Khởi tạo và xử lý
- (void)startLoading; // Khởi tạo chạy hàm
- (void)paid:(void (^)(void))execute; // Hàm bọc menu
- (void)setPackageToken:(NSString *)token; // Set Token của Package
+ (instancetype)sharedAPIClient;

// Thông Tin và Ứng Dụng
- (NSString *)getKey;
- (NSString *)getUDID;
- (NSString *)getDeviceModel;
- (NSString *)getExpiryDate;
- (NSString *)osVersion;
- (NSString *)ipAddress;
- (UIImage *)getAppIcon;
- (NSString *)getAppName;

@end

NS_ASSUME_NONNULL_END