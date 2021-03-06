/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UIView.h>

@class SCATModernMenuBackgroundContainerView, _UIBackdropView;

@interface SCATModernMenuBackgroundView : UIView {

	CGPathRef _menuBorderPath;
	BOOL _shouldRoundMenuCorners;
	SCATModernMenuBackgroundContainerView* _containerView;
	_UIBackdropView* _backdropView;
	long long _tip;
	double _normalizedHorizontalTipCenter;

}

@property (nonatomic,retain) _UIBackdropView * backdropView;                                     //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) SCATModernMenuBackgroundContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) long long tip;                                                      //@synthesize tip=_tip - In the implementation block
@property (assign,nonatomic) BOOL shouldRoundMenuCorners;                                        //@synthesize shouldRoundMenuCorners=_shouldRoundMenuCorners - In the implementation block
@property (assign,nonatomic) double normalizedHorizontalTipCenter;                               //@synthesize normalizedHorizontalTipCenter=_normalizedHorizontalTipCenter - In the implementation block
@property (assign,nonatomic) CGPathRef menuBorderPath; 
-(BOOL)scatSupportsAction:(int)arg1 ;
-(void)setMenuBorderPath:(CGPathRef)arg1 ;
-(double)_menuTipHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 includeTip:(BOOL)arg2 ;
-(CGPathRef)_copyMenuPathWithNoTipForRect:(CGRect)arg1 ;
-(CGPathRef)_copyMenuPathWithTipForRect:(CGRect)arg1 ;
-(void)_updateBackdropWithPath:(CGPathRef)arg1 ;
-(BOOL)shouldRoundMenuCorners;
-(double)normalizedHorizontalTipCenter;
-(double)_menuCornerRadius;
-(double)_menuTipBase;
-(double)_menuTipBaseCornerRadius;
-(double)_adjustedXAnchorPositionToClearCornersOfRect:(CGRect)arg1 ;
-(double)_menuTipCornerRadius;
-(CGPathRef)menuBorderPath;
-(void)setTip:(long long)arg1 ;
-(void)setNormalizedHorizontalTipCenter:(double)arg1 ;
-(id)scatSpeakableDescription;
-(CGPathRef)scatPath;
-(BOOL)scatPerformAction:(int)arg1 ;
-(id)scatOverrideCursorTheme;
-(void)setShouldRoundMenuCorners:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SCATModernMenuBackgroundContainerView *)containerView;
-(_UIBackdropView *)backdropView;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(void)setContainerView:(SCATModernMenuBackgroundContainerView *)arg1 ;
-(long long)tip;
@end

