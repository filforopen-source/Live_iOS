//
//  LivePushCameraViewController.h
//  MLVB-API-Sample-OC
//
//  Created by bluedang on 2021/6/24.
//  Copyright © 2021 Tencent. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LivePushCameraPreviewController : UIPreViewController
- (instancetype)initWithStreamId:(NSString*)streamId isRTCPush:(BOOL)value audioQulity:(V2TXLiveAudioQuality)quality;
Preview_NS_ASSUME_NONNULL_BEGIN

NS_ASSUME_NONNULL_BEGIN
