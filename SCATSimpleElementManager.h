/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementManager.h>

@class NSArray;

@interface SCATSimpleElementManager : SCATElementManager

@property (nonatomic,readonly) NSArray * allElements; 
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)numberOfItemsInCurrentScanCycle;
-(NSArray *)allElements;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3 ;
-(BOOL)containsElement:(id)arg1 ;
-(id)identifier;
@end

