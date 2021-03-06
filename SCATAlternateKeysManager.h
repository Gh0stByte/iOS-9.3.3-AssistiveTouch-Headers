/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElementManager.h>
#import <assistivetouchd/HNDAccessibilityManagerObserver.h>

@protocol SCATAlternateKeysManagerDelegate, SCATElement;
@class NSArray, NSString;

@interface SCATAlternateKeysManager : SCATSimpleElementManager <HNDAccessibilityManagerObserver> {

	id<SCATAlternateKeysManagerDelegate> _delegate;
	id<SCATElement> _currentKeyForAlternates;
	NSArray* _alternateKeys;

}

@property (assign,nonatomic) id<SCATAlternateKeysManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SCATElement> currentKeyForAlternates;                    //@synthesize currentKeyForAlternates=_currentKeyForAlternates - In the implementation block
@property (nonatomic,retain) NSArray * alternateKeys;                                    //@synthesize alternateKeys=_alternateKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleInputAction:(long long)arg1 withElement:(id)arg2 ;
-(void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2 ;
-(BOOL)canBeActiveElementManager;
-(id)allElements;
-(void)didFetchElements:(id)arg1 foundNewElements:(BOOL)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(BOOL)arg4 ;
-(id<SCATElement>)currentKeyForAlternates;
-(void)setAlternateKeys:(NSArray *)arg1 ;
-(id)_eventManagerPointsForKey:(id)arg1 ;
-(void)setCurrentKeyForAlternates:(id<SCATElement>)arg1 ;
-(void)_cleanUpAlternateKeyOperations;
-(NSArray *)alternateKeys;
-(void)_releaseLastShownKey;
-(void)_selectAlternateKey:(id)arg1 ;
-(void)_updateAlternateKeys;
-(void)showAlternateKeysForKey:(id)arg1 ;
-(void)setDelegate:(id<SCATAlternateKeysManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SCATAlternateKeysManagerDelegate>)delegate;
-(void)orientationDidChange:(id)arg1 ;
@end

