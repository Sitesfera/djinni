// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#import "TXSSortItems.h"
#import "TXSTextboxListener.h"
#import <Foundation/Foundation.h>
@class TXSItemList;


@protocol TXSSortItems

- (void)sort:(TXSItemList *)items;

+ (id <TXSSortItems>)createWithListener:(id <TXSTextboxListener>)listener;

@end
