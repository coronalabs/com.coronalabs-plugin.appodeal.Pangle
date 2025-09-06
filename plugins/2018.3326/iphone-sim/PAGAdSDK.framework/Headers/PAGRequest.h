//
//  PAGRequest.h
//  Pangle Ads SDK
//
//  Copyright 2022 ByteDance Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol PAGMAdNetworkExtras;
@interface PAGRequest : NSObject

/// Ad string that represents an ad response. The SDK will render this ad and ignore all other
/// targeting information set on this request.
@property (nonatomic, copy) NSString *adString;

/// extra info
@property (nonatomic, copy, nullable) NSDictionary *extraInfo;

+ (nullable instancetype)request;

- (void)registerAdNetworkExtras:(id<PAGMAdNetworkExtras>)extras;

@end

NS_ASSUME_NONNULL_END
