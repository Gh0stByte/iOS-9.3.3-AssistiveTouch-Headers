/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@protocol HNDViewDelegateControl;
@interface HNDView : UIView {

	BOOL _active;
	id<HNDViewDelegateControl> _controlDelegate;
	BOOL _requiresRealUpEvent;

}

@property (assign) id<HNDViewDelegateControl> controlDelegate;              //@synthesize controlDelegate=_controlDelegate - In the implementation block
@property (assign,nonatomic) BOOL isActive; 
@property (assign) BOOL requiresRealUpEvent;                                //@synthesize requiresRealUpEvent=_requiresRealUpEvent - In the implementation block
-(void)setControlDelegate:(id<HNDViewDelegateControl>)arg1 ;
-(void)handleRealUpEvent:(CGPoint)arg1 maxOrc:(double)arg2 ;
-(void)handleRealCancelEvent:(CGPoint)arg1 ;
-(void)handleRealMoveEvent:(CGPoint)arg1 ;
-(void)handleFingerDriftedAway;
-(void)handleRealDownEvent:(CGPoint)arg1 ;
-(id<HNDViewDelegateControl>)controlDelegate;
-(BOOL)requiresRealUpEvent;
-(void)setRequiresRealUpEvent:(BOOL)arg1 ;
-(id)description;
-(BOOL)isActive;
-(void)setIsActive:(BOOL)arg1 ;
@end

