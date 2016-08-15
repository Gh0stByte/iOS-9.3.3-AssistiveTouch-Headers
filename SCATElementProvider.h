/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:25 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCATElementProvider <NSObject>
@property (nonatomic,readonly) BOOL providesElements; 
@required
-(id)lastElementWithOptions:(int*)arg1;
-(id)firstElementWithOptions:(int*)arg1;
-(BOOL)providesElements;
-(id)elementAfter:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3;
-(id)elementBefore:(id)arg1 didWrap:(BOOL*)arg2 options:(int*)arg3;
-(BOOL)containsElement:(id)arg1;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;

@end

