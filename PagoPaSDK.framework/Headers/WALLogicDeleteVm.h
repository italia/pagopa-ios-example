// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from logic_delete_vm.djinni

#import <Foundation/Foundation.h>

@interface WALLogicDeleteVm : NSObject
- (nonnull instancetype)initWithEmail:(nonnull NSString *)email
                       userStatusEnum:(nonnull NSArray<NSString *> *)userStatusEnum;
+ (nonnull instancetype)logicDeleteVmWithEmail:(nonnull NSString *)email
                                userStatusEnum:(nonnull NSArray<NSString *> *)userStatusEnum;

@property (nonatomic, readonly, nonnull) NSString * email;

@property (nonatomic, readonly, nonnull) NSArray<NSString *> * userStatusEnum;

@end