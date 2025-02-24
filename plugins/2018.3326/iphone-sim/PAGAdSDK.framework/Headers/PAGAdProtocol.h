//
//  PAGAdProtocol.h
//  PangleSDK
//
//  Created by bytedance on 2022/4/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PAGAdProtocol <NSObject>

/// return extra info
- (nullable NSDictionary *)getMediaExtraInfo DEPRECATED_MSG_ATTRIBUTE("Use getExtraInfoWithKey: method instead.");

/// Returns the value corresponding to the specified key
/// - Parameter key: The value key
- (nullable id)getExtraInfoWithKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
