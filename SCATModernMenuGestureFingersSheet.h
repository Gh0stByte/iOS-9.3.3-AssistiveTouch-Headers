/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuFingerItemsViewDelegate;
@interface SCATModernMenuGestureFingersSheet : SCATModernMenuGesturesSheetBase {

	id<SCATMenuFingerItemsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuFingerItemsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(void)setDelegate:(id<SCATMenuFingerItemsViewDelegate>)arg1 ;
-(id<SCATMenuFingerItemsViewDelegate>)delegate;
@end

