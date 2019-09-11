// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from payment_check_vm.djinni

#import <Foundation/Foundation.h>

@interface WALPaymentCheckVm : NSObject
- (nonnull instancetype)initWithTransactionId:(int64_t)transactionId
                                     statusId:(int64_t)statusId
                                statusMessage:(nonnull NSString *)statusMessage
                                        error:(BOOL)error
                            authorizationCode:(nonnull NSString *)authorizationCode
                                  finalStatus:(BOOL)finalStatus
                                       acsUrl:(nonnull NSString *)acsUrl;
+ (nonnull instancetype)paymentCheckVmWithTransactionId:(int64_t)transactionId
                                               statusId:(int64_t)statusId
                                          statusMessage:(nonnull NSString *)statusMessage
                                                  error:(BOOL)error
                                      authorizationCode:(nonnull NSString *)authorizationCode
                                            finalStatus:(BOOL)finalStatus
                                                 acsUrl:(nonnull NSString *)acsUrl;

@property (nonatomic, readonly) int64_t transactionId;

@property (nonatomic, readonly) int64_t statusId;

@property (nonatomic, readonly, nonnull) NSString * statusMessage;

@property (nonatomic, readonly) BOOL error;

@property (nonatomic, readonly, nonnull) NSString * authorizationCode;

@property (nonatomic, readonly) BOOL finalStatus;

@property (nonatomic, readonly, nonnull) NSString * acsUrl;

@end
