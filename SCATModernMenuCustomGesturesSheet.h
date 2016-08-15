/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:25 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuCustomGestureItemsViewDelegate;
@class NSMutableArray;

@interface SCATModernMenuCustomGesturesSheet : SCATModernMenuGesturesSheetBase {

	NSMutableArray* _gestures;
	int _type;
	id<SCATMenuCustomGestureItemsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuCustomGestureItemsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int type;                                                       //@synthesize type=_type - In the implementation block
-(BOOL)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)backTitle;
-(id)initWithType:(int)arg1 menu:(id)arg2 ;
-(void)viewControllerViewWillAppear:(BOOL)arg1 ;
-(void)_loadGestures;
-(void)setDelegate:(id<SCATMenuCustomGestureItemsViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SCATMenuCustomGestureItemsViewDelegate>)delegate;
-(int)type;
@end

