// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from billing_address_list.djinni

#import "WALBillingAddressVm.h"
#import <Foundation/Foundation.h>
@protocol WALBillingAddressCallback;


@interface WALBillingAddressListPresenter : NSObject

- (void)reloadBusinessAddressesWithCallback:(nullable id<WALBillingAddressCallback>)callback;

- (void)reloadBusinessAddresses;

- (void)addBusinessAddress;

- (void)deleteBusinessAddress:(nonnull WALBillingAddressVm *)billingAddress;

- (void)selectBusinessAddress:(nonnull WALBillingAddressVm *)billingAddress;

@end
