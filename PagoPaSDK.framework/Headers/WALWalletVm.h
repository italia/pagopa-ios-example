// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_vm.djinni

#import "WALPpaWalletType.h"
#import <Foundation/Foundation.h>

@interface WALWalletVm : NSObject
- (nonnull instancetype)initWithIdWallet:(int64_t)idWallet
                               favourite:(BOOL)favourite
                                   alias:(nonnull NSString *)alias
                                 logoUrl:(nonnull NSString *)logoUrl
                               lastUsage:(nonnull NSString *)lastUsage
                                  number:(nonnull NSString *)number
                             expireMonth:(int64_t)expireMonth
                              expireYear:(int64_t)expireYear
                                  holder:(nonnull NSString *)holder
                         additionalText1:(nonnull NSString *)additionalText1
                              walletType:(WALPpaWalletType)walletType;
+ (nonnull instancetype)walletVmWithIdWallet:(int64_t)idWallet
                                   favourite:(BOOL)favourite
                                       alias:(nonnull NSString *)alias
                                     logoUrl:(nonnull NSString *)logoUrl
                                   lastUsage:(nonnull NSString *)lastUsage
                                      number:(nonnull NSString *)number
                                 expireMonth:(int64_t)expireMonth
                                  expireYear:(int64_t)expireYear
                                      holder:(nonnull NSString *)holder
                             additionalText1:(nonnull NSString *)additionalText1
                                  walletType:(WALPpaWalletType)walletType;

@property (nonatomic, readonly) int64_t idWallet;

@property (nonatomic, readonly) BOOL favourite;

@property (nonatomic, readonly, nonnull) NSString * alias;

@property (nonatomic, readonly, nonnull) NSString * logoUrl;

@property (nonatomic, readonly, nonnull) NSString * lastUsage;

@property (nonatomic, readonly, nonnull) NSString * number;

@property (nonatomic, readonly) int64_t expireMonth;

@property (nonatomic, readonly) int64_t expireYear;

@property (nonatomic, readonly, nonnull) NSString * holder;

@property (nonatomic, readonly, nonnull) NSString * additionalText1;

@property (nonatomic, readonly) WALPpaWalletType walletType;

@end