//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/EFLoggable-Protocol.h>

@class NSArray, NSError, NSString;
@protocol ECAuthenticationCredentials;

@interface ECSASLClient : NSObject <EFLoggable>
{
    char _userLanguageCode;
    char _authenticationName;
    char _authorizationName;
    struct sasl_secret _password;
    char _authenticationPersonID;
    char _authorizationPersonID;
    char _appleToken;
    char _machineID;
    char _oneTimePassword;
    char _clientInfo;
    char _oauthToken;
    BOOL _excludeAuthorizationName;
    BOOL _excludeInitialResponse;
    BOOL _mechanismUsesPlainText;
    BOOL _lastResponseIncludesCredential;
    unsigned int _encryptionBufferSize;
    id <ECAuthenticationCredentials> _credentials;
    long long _saslStatus;
    NSError *_saslError;
    NSString *_selectedMechanismName;
    NSArray *_mechanismNames;
    struct sasl_callback _callbacks;
    struct sasl_conn _saslConnection;
}

+ (id)installedMechanisms;
+ (id)log;
@property(nonatomic) BOOL lastResponseIncludesCredential; // @synthesize lastResponseIncludesCredential=_lastResponseIncludesCredential;
@property(nonatomic) BOOL mechanismUsesPlainText; // @synthesize mechanismUsesPlainText=_mechanismUsesPlainText;
@property(readonly, nonatomic) struct sasl_conn saslConnection; // @synthesize saslConnection=_saslConnection;
@property(readonly, nonatomic) struct sasl_callback callbacks; // @synthesize callbacks=_callbacks;
@property(copy, nonatomic) NSArray *mechanismNames; // @synthesize mechanismNames=_mechanismNames;
@property(nonatomic) unsigned int encryptionBufferSize; // @synthesize encryptionBufferSize=_encryptionBufferSize;
@property(nonatomic) BOOL excludeInitialResponse; // @synthesize excludeInitialResponse=_excludeInitialResponse;
@property(nonatomic) BOOL excludeAuthorizationName; // @synthesize excludeAuthorizationName=_excludeAuthorizationName;
@property(copy, nonatomic) NSString *selectedMechanismName; // @synthesize selectedMechanismName=_selectedMechanismName;
@property(retain, nonatomic) NSError *saslError; // @synthesize saslError=_saslError;
@property(nonatomic) long long saslStatus; // @synthesize saslStatus=_saslStatus;
@property(nonatomic) __weak id <ECAuthenticationCredentials> credentials; // @synthesize credentials=_credentials;
// - (void).cxx_destruct;
- (void)_handleNeedsUserInteraction:(struct sasl_interact )arg1;
- (void)_handleStartFailure:(int)arg1;
- (BOOL)_logGenericError:(int)arg1 saslConnection:(struct sasl_conn )arg2 description:(id)arg3 error:(id )arg4;
- (void)_handleGenericError:(int)arg1 description:(id)arg2;
- (void)_clearAuthenticationCallbackBuffers;
- (id)newDecryptedDataForBytes:(const char )arg1 length:(unsigned int)arg2;
- (id)newEncryptedDataForBytes:(const char )arg1 length:(unsigned int)arg2;
- (void)_retrieveEncryptionBufferSize;
@property(readonly, nonatomic) BOOL lastResponseIncludesPlainTextCredential;
- (id)responseForServerData:(id)arg1;
- (id)start;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithMechanismNames:(id)arg1 credentials:(id)arg2 externalSecurityLayer:(unsigned int)arg3 allowPlainText:(BOOL)arg4;

@end
