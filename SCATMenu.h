/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementManager.h>

@protocol SCATMenuDelegate, SCATElement;
@class SCATModernMenuViewController, NSHashTable, AXElement, NSValue, SCATPointPicker, SCATAggregateElementProvider;

@interface SCATMenu : SCATElementManager {

	BOOL _shouldNotResetPointPickerRefinement;
	BOOL _wasPresentedWithTip;
	BOOL _transitioning;
	BOOL _didActivateElement;
	SCATModernMenuViewController* _modernMenuViewController;
	id<SCATMenuDelegate> _delegate;
	NSHashTable* _menuObservers;
	AXElement* _textElement;
	long long _tipObject;
	NSValue* _screenPoint;
	SCATPointPicker* _pointPicker;
	long long _popoverPosition;
	long long _dockPosition;
	SCATAggregateElementProvider* _elementProvider;
	id<SCATElement> _element;

}

@property (assign,nonatomic) id<SCATMenuDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<SCATElement> element;                                              //@synthesize element=_element - In the implementation block
@property (nonatomic,retain) AXElement * textElement;                                              //@synthesize textElement=_textElement - In the implementation block
@property (nonatomic,retain) SCATPointPicker * pointPicker;                                        //@synthesize pointPicker=_pointPicker - In the implementation block
@property (nonatomic,retain) NSValue * screenPoint;                                                //@synthesize screenPoint=_screenPoint - In the implementation block
@property (nonatomic,retain) SCATModernMenuViewController * modernMenuViewController;              //@synthesize modernMenuViewController=_modernMenuViewController - In the implementation block
@property (nonatomic,readonly) long long tipObject;                                                //@synthesize tipObject=_tipObject - In the implementation block
@property (nonatomic,readonly) BOOL isVisible; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                            //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic) BOOL shouldNotResetPointPickerRefinement;                             //@synthesize shouldNotResetPointPickerRefinement=_shouldNotResetPointPickerRefinement - In the implementation block
@property (assign,nonatomic) long long popoverPosition;                                            //@synthesize popoverPosition=_popoverPosition - In the implementation block
@property (assign,nonatomic) long long dockPosition;                                               //@synthesize dockPosition=_dockPosition - In the implementation block
@property (assign,nonatomic) BOOL wasPresentedWithTip;                                             //@synthesize wasPresentedWithTip=_wasPresentedWithTip - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideMenuCursor; 
@property (assign,nonatomic) BOOL didActivateElement;                                              //@synthesize didActivateElement=_didActivateElement - In the implementation block
@property (nonatomic,retain) NSHashTable * menuObservers;                                          //@synthesize menuObservers=_menuObservers - In the implementation block
@property (nonatomic,retain) SCATAggregateElementProvider * elementProvider;                       //@synthesize elementProvider=_elementProvider - In the implementation block
-(SCATPointPicker *)pointPicker;
-(NSValue *)screenPoint;
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2 ;
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2 ;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(void)hideWithCompletion:(/*^block*/id)arg1 ;
-(void)presentWithElement:(id)arg1 ;
-(BOOL)shouldKeepScannerAwake;
-(void)handleMenuWasActivatedByScanner;
-(SCATAggregateElementProvider *)elementProvider;
-(void)closeCurrentScanningContext;
-(BOOL)canBeActiveElementManager;
-(void)groupingEnabledDidChange;
-(SCATModernMenuViewController *)modernMenuViewController;
-(void)reloadFromCurrentSheet;
-(void)menuTipObjectDidChange;
-(void)willTransitionToSheet:(id)arg1 ;
-(void)didTransitionToSheet:(id)arg1 ;
-(long long)dockPosition;
-(long long)tipObject;
-(BOOL)wasPresentedWithTip;
-(long long)popoverPosition;
-(BOOL)allowsDwellSelection;
-(BOOL)allowsDwellScanningToAbortAfterTimeout;
-(void)registerMenuObserver:(id)arg1 ;
-(void)unregisterMenuObserver:(id)arg1 ;
-(BOOL)containsGestureSheet;
-(void)presentWithRootLevelSheet:(id)arg1 useCurrentElementAndPoint:(BOOL)arg2 ;
-(void)slidePopoverToPosition:(long long)arg1 ;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(BOOL)didActivateElement;
-(void)appTransitionDidOccur:(id)arg1 ;
-(void)alertDidAppear:(id)arg1 ;
-(void)setMenuObservers:(NSHashTable *)arg1 ;
-(void)setModernMenuViewController:(SCATModernMenuViewController *)arg1 ;
-(void)setTextElement:(AXElement *)arg1 ;
-(void)setScreenPoint:(NSValue *)arg1 ;
-(void)setPointPicker:(SCATPointPicker *)arg1 ;
-(void)setElementProvider:(SCATAggregateElementProvider *)arg1 ;
-(void)_presentWithElement:(id)arg1 pointPicker:(id)arg2 useMenuTip:(BOOL)arg3 sheetToShow:(id)arg4 ;
-(void)_notifyMenuObserversWithSelector:(SEL)arg1 ;
-(void)setDockPosition:(long long)arg1 ;
-(void)setPopoverPosition:(long long)arg1 ;
-(void)setWasPresentedWithTip:(BOOL)arg1 ;
-(void)setDidActivateElement:(BOOL)arg1 ;
-(void)_flushScannableMenuElements;
-(BOOL)shouldNotResetPointPickerRefinement;
-(void)setShouldNotResetPointPickerRefinement:(BOOL)arg1 ;
-(id)_restorationInfoForElement:(id)arg1 ;
-(void)_updateWithElement:(id)arg1 ;
-(id)_elementWithRestorationInfo:(id)arg1 options:(int*)arg2 ;
-(BOOL)_isCurrentSheetValidForElement:(id)arg1 ;
-(void)_prepareMenuForScanningIfNeeded;
-(void)_updateOptionsIfNeeded:(int*)arg1 withResultElement:(id)arg2 ;
-(void)_updateForGeometryChange;
-(void)_slideToPositionWithMode:(unsigned long long)arg1 positionIndex:(long long)arg2 ;
-(NSHashTable *)menuObservers;
-(id)_siblingOfElement:(id)arg1 inDirection:(BOOL)arg2 didWrap:(BOOL*)arg3 options:(int*)arg4 ;
-(void)_prepareMenuForScanning;
-(id)exitActionElement;
-(BOOL)shouldHideMenuCursor;
-(void)presentWithPointPicker:(id)arg1 ;
-(void)presentAutoscrollMenu;
-(id)updateAfterFetchWithCurrentlyScannedElement:(id)arg1 options:(int*)arg2 ;
-(void)slideDockToPosition:(long long)arg1 ;
-(void)unregisterAllMenuObservers;
-(void)_notifyMenuObserversWithSelector:(SEL)arg1 object:(id)arg2 ;
-(id)arrayByShiftingItemsInArray:(id)arg1 leftByNumberOfPositions:(unsigned long long)arg2 ;
-(BOOL)_viewIsSuitableScannerElement:(id)arg1 ;
-(AXElement *)textElement;
-(void)setDelegate:(id<SCATMenuDelegate>)arg1 ;
-(void)dealloc;
-(id<SCATMenuDelegate>)delegate;
-(id)identifier;
-(BOOL)isTransitioning;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isVisible;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)isGroupingEnabled;
-(void)orientationDidChange:(id)arg1 ;
-(id<SCATElement>)element;
-(void)setElement:(id<SCATElement>)arg1 ;
@end

