// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ppa_saved_payment_methods.djinni

#import "WALWalletVm.h"
#import <Foundation/Foundation.h>


@interface WALPpaSavedPaymentMethodsPresenter : NSObject

- (void)selectPaymentMethod:(nonnull WALWalletVm *)paymentMethod;

- (void)addPaymentMethod;

- (void)newFavouriteMethod:(int64_t)walletId;

- (void)deleteMethod:(int64_t)walletId;

@end
