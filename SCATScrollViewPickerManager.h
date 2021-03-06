/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:25 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATSimpleElementManager.h>

@class NSArray, SCATScrollViewPickerViewController;

@interface SCATScrollViewPickerManager : SCATSimpleElementManager {

	int _scrollAction;
	NSArray* _scrollViews;
	NSArray* _elementsToScroll;
	SCATScrollViewPickerViewController* _pickerViewController;

}

@property (nonatomic,retain) NSArray * scrollViews;                                                  //@synthesize scrollViews=_scrollViews - In the implementation block
@property (nonatomic,retain) NSArray * elementsToScroll;                                             //@synthesize elementsToScroll=_elementsToScroll - In the implementation block
@property (assign,nonatomic) int scrollAction;                                                       //@synthesize scrollAction=_scrollAction - In the implementation block
@property (nonatomic,retain) SCATScrollViewPickerViewController * pickerViewController;              //@synthesize pickerViewController=_pickerViewController - In the implementation block
-(BOOL)handleInputAction:(long long)arg1 withElement:(id)arg2 ;
-(BOOL)canBeActiveElementManager;
-(id)allElements;
-(void)setPickerViewController:(SCATScrollViewPickerViewController *)arg1 ;
-(NSArray *)scrollViews;
-(NSArray *)elementsToScroll;
-(int)scrollAction;
-(void)setScrollViews:(NSArray *)arg1 ;
-(void)setElementsToScroll:(NSArray *)arg1 ;
-(void)setScrollAction:(int)arg1 ;
-(void)dealloc;
-(id)viewController;
-(SCATScrollViewPickerViewController *)pickerViewController;
@end

