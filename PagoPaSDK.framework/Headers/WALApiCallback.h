// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from network-interfaces.djinni

#import "WALHttpError.h"
#import <Foundation/Foundation.h>


@interface WALApiCallback : NSObject

- (void)onNetworkError:(nonnull WALHttpError *)error;

- (void)onSuccess:(int16_t)httpCode
             data:(nonnull NSString *)data;

@end