// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core_params_interface.djinni

#import "WALHttpSessionTokenType.h"
#import <Foundation/Foundation.h>
@protocol WALCoreViewsBuilder;
@protocol WALDeviceInformations;
@protocol WALEventLoop;
@protocol WALHttp;
@protocol WALI18n;
@protocol WALLogger;
@protocol WALPreferences;
@protocol WALThreadLauncher;
@protocol WALUiNativeRouter;


@protocol WALCoreParamsInterface

- (nullable id<WALHttp>)getHttp;

- (nullable id<WALEventLoop>)getUiThread;

- (nullable id<WALThreadLauncher>)getThreadLauncher;

- (nullable id<WALUiNativeRouter>)getUiNativeRouter;

- (nullable id<WALCoreViewsBuilder>)getCoreViewsBuilder;

- (nullable id<WALI18n>)getI18n;

- (nullable id<WALLogger>)getLogger;

- (nullable id<WALPreferences>)getPreferences;

- (nonnull NSString *)getBaseUrl;

- (nonnull NSString *)getApiPrefix;

- (nonnull NSString *)getApiVersion;

- (nullable NSString *)getJsonRootObject;

- (nonnull NSString *)getDocumentsPath;

- (WALHttpSessionTokenType)getSessionTokenType;

- (nullable id<WALDeviceInformations>)getDevice;

@end