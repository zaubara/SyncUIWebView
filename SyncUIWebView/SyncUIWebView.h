//
//  SyncUIWebView.h
//  SyncUIWebView
//
//  Created by Martin Puza on 03.05.16.
//  Copyright © 2016 Zetes Austria. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for SyncUIWebView.
FOUNDATION_EXPORT double SyncUIWebViewVersionNumber;

//! Project version string for SyncUIWebView.
FOUNDATION_EXPORT const unsigned char SyncUIWebViewVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <SyncUIWebView/PublicHeader.h>

@interface SyncUIWebView : UIWebView <UIWebViewDelegate>
{
    id anotherDelegate;
}

@end


