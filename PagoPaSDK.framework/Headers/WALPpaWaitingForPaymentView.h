// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ppa_waiting_for_payment.djinni

#import "WALPpaPaymentStatus.h"
#import <Foundation/Foundation.h>
@class WALPpaWaitingForPaymentPresenter;


@protocol WALPpaWaitingForPaymentView

- (void)setPresenter:(nullable WALPpaWaitingForPaymentPresenter *)presenter;

- (void)openNativeWebBrowser:(nonnull NSString *)url;

- (void)setPaymentStatus:(WALPpaPaymentStatus)paymentStatus;

- (void)setPaymentDeferred:(BOOL)deferred;

@end
