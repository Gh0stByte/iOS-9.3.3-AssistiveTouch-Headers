/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/HNDView.h>

@protocol HNDRockerButtonDataSource;
@class NSString, UILabel, UIImageView, NSBundle, UIImage;

@interface HNDRockerButton : HNDView {

	/*^block*/id _downBlock;
	/*^block*/id _upBlock;
	NSString* _title;
	BOOL _selected;
	BOOL _highlighted;
	UILabel* _label;
	NSString* _imageName;
	UIImageView* _imageView;
	BOOL _isEmptyFavorite;
	BOOL _customTitle;
	BOOL _isBackButton;
	BOOL _showWithGuidedAccess;
	BOOL isEmptyFavorite;
	BOOL customTitle;
	BOOL isModalDown;
	BOOL _continueHighlightAfterTouch;
	BOOL _ignoreImageHeightForTextOffset;
	BOOL _disabled;
	CGPathRef hitPath;
	unsigned long long _maxNumberOfLines;
	NSBundle* _imageBundle;
	/*^block*/id _substantialTransitionOccurredBlock;
	NSString* _location;
	id<HNDRockerButtonDataSource> _dataSource;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	CGPoint _textOffset;

}

@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id upBlock;                                              //@synthesize upBlock=_upBlock - In the implementation block
@property (nonatomic,copy) id downBlock;                                            //@synthesize downBlock=_downBlock - In the implementation block
@property (nonatomic,copy) id substantialTransitionOccurredBlock;                   //@synthesize substantialTransitionOccurredBlock=_substantialTransitionOccurredBlock - In the implementation block
@property (assign,nonatomic) BOOL isModalDown; 
@property (assign,nonatomic) BOOL selected;                                         //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                      //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) CGPathRef hitPath; 
@property (assign,nonatomic) BOOL isEmptyFavorite; 
@property (assign,nonatomic) BOOL customTitle; 
@property (assign,nonatomic) unsigned long long maxNumberOfLines;                   //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (nonatomic,retain) NSString * location;                                   //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL isBackButton;                                     //@synthesize isBackButton=_isBackButton - In the implementation block
@property (assign,nonatomic) CGPoint textOffset;                                    //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) BOOL ignoreImageHeightForTextOffset;                   //@synthesize ignoreImageHeightForTextOffset=_ignoreImageHeightForTextOffset - In the implementation block
@property (assign,nonatomic) id<HNDRockerButtonDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL continueHighlightAfterTouch;                      //@synthesize continueHighlightAfterTouch=_continueHighlightAfterTouch - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                         //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL showWithGuidedAccess;                             //@synthesize showWithGuidedAccess=_showWithGuidedAccess - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                  //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) NSBundle * imageBundle;                                //@synthesize imageBundle=_imageBundle - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                               //@synthesize selectedImage=_selectedImage - In the implementation block
@property (nonatomic,retain) UIImage * unselectedImage;                             //@synthesize unselectedImage=_unselectedImage - In the implementation block
+(id)buttonWithTitle:(id)arg1 imageName:(id)arg2 downBlock:(/*^block*/id)arg3 upBlock:(/*^block*/id)arg4 dataSource:(id)arg5 showWithGuidedAccess:(BOOL)arg6 ;
-(BOOL)isModalDown;
-(void)handleRealUpEvent:(CGPoint)arg1 maxOrc:(double)arg2 ;
-(void)handleRealCancelEvent:(CGPoint)arg1 ;
-(void)handleFingerDriftedAway;
-(void)handleRealDownEvent:(CGPoint)arg1 ;
-(void)setIsBackButton:(BOOL)arg1 ;
-(CGPathRef)hitPath;
-(void)performPress:(BOOL)arg1 ;
-(void)setUpBlock:(id)arg1 ;
-(void)setDownBlock:(id)arg1 ;
-(void)setIsModalDown:(BOOL)arg1 ;
-(void)setMaxNumberOfLines:(unsigned long long)arg1 ;
-(void)setSubstantialTransitionOccurredBlock:(id)arg1 ;
-(void)setContinueHighlightAfterTouch:(BOOL)arg1 ;
-(void)setIsEmptyFavorite:(BOOL)arg1 ;
-(CGRect)adjustTextForActualFrame:(CGRect)arg1 withSuggestedFrame:(CGRect)arg2 ;
-(BOOL)isEmptyFavorite;
-(void)setHitPath:(CGPathRef)arg1 ;
-(void)setIgnoreImageHeightForTextOffset:(BOOL)arg1 ;
-(id)downBlock;
-(id)upBlock;
-(BOOL)showWithGuidedAccess;
-(id)initWithImageName:(id)arg1 ;
-(void)setShowWithGuidedAccess:(BOOL)arg1 ;
-(void)_updateFont;
-(void)_substantialTransition:(id)arg1 ;
-(id)substantialTransitionOccurredBlock;
-(void)resetImages;
-(BOOL)continueHighlightAfterTouch;
-(BOOL)_inSelectedState;
-(id)getDeviceSpecificImage;
-(NSBundle *)imageBundle;
-(void)updateTextColor;
-(BOOL)ignoreImageHeightForTextOffset;
-(unsigned long long)maxNumberOfLines;
-(void)_drawPixels;
-(void)setImageBundle:(NSBundle *)arg1 ;
-(void)setDataSource:(id<HNDRockerButtonDataSource>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id<HNDRockerButtonDataSource>)dataSource;
-(NSString *)title;
-(id)accessibilityLabel;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)selectedImage;
-(UIImage *)unselectedImage;
-(UIImageView *)imageView;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)location;
-(id)currentImage;
-(BOOL)highlighted;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(BOOL)selected;
-(BOOL)isBackButton;
-(void)setTextOffset:(CGPoint)arg1 ;
-(CGPoint)textOffset;
-(void)setUnselectedImage:(UIImage *)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)setLocation:(NSString *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(BOOL)customTitle;
-(void)setCustomTitle:(BOOL)arg1 ;
-(void)_updateImage;
-(NSString *)imageName;
@end

