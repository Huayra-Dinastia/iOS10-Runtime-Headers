/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPhoneNumber : NSObject <CNObjectValidation, CNUIURLDestinationID, NSCopying, NSSecureCoding> {
    struct __CFPhoneNumber { } * _phoneNumberRef;
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *digits;
@property (nonatomic, readonly, copy) NSString *formattedInternationalStringValue;
@property (nonatomic, readonly, copy) NSString *formattedStringValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *normalizedStringValue;
@property (nonatomic, readonly) struct __CFPhoneNumber { }*phoneNumberRef;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *unformattedInternationalStringValue;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)defaultCountryCode;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)digits;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedInternationalStringValue;
- (id)formattedStringValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)initWithStringValue:(id)arg1;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLikePhoneNumber:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)lastFourDigits;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)stringValue;
- (id)unformattedInternationalStringValue;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

- (id)normalizedStringValue;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (id)_cnui_URLDestinationID;

@end
