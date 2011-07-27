//
//  NXOAuth2Account.h
//  OAuth2Client
//
//  Created by Tobias Kräntzer on 12.07.11.
//
//  Copyright 2011 nxtbgthng. All rights reserved.
//
//  Licenced under the new BSD-licence.
//  See README.md in this reprository for 
//  the full licence.
//

#import <Foundation/Foundation.h>

@class NXOAuth2Client;
@class NXOAuth2AccessToken;

#pragma mark Notifications

extern NSString * const NXOAuth2AccountDidChangeUserDataNotification;
extern NSString * const NXOAuth2AccountDidChangeAccessTokenNotification;
extern NSString * const NXOAuth2AccountDidLoseAccessTokenNotification;
extern NSString * const NXOAuth2AccountDidFailToGetAccessTokenNotification;

#pragma mark -

@interface NXOAuth2Account : NSObject {
@private
    NSString *accountType;
    NSString *identifier;
    id <NSObject, NSCoding, NSCopying> userData;
    NXOAuth2Client *oauthClient;
    NXOAuth2AccessToken *accessToken;
}

#pragma mark Accessors

@property (nonatomic, readonly) NSString *accountType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) id <NSObject, NSCoding, NSCopying> userData;

@property (nonatomic, readonly) NXOAuth2Client *oauthClient;
@property (nonatomic, readonly) NXOAuth2AccessToken *accessToken;

@end
