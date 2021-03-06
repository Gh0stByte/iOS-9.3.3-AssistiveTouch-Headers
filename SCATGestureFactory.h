/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <assistivetouchd/assistivetouchd-Structs.h>
@interface SCATGestureFactory : NSObject
+(id)tapGestureAtPoint:(CGPoint)arg1 isDoubleTap:(BOOL)arg2 numberOfFingers:(unsigned long long)arg3 unnamedValue:(double)arg4 ;
+(id)flickGestureAtPoint:(CGPoint)arg1 angle:(double)arg2 numberOfFingers:(unsigned long long)arg3 distance:(int)arg4 ;
+(id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3 ;
+(id)flickGestureStartingAtPoint:(CGPoint)arg1 endingAtPoint:(CGPoint)arg2 numberOfFingers:(unsigned long long)arg3 ;
+(id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 numberOfFingers:(unsigned long long)arg3 initialHoldDuration:(double)arg4 ;
+(void)_addAllFingerPointsForPoint:(CGPoint)arg1 toFingerPointArrays:(id)arg2 ;
+(id)tapGestureAtPoint:(CGPoint)arg1 ;
+(id)flickGestureAtPoint:(CGPoint)arg1 angle:(double)arg2 distance:(int)arg3 ;
+(id)lineGestureBetweenPoints:(id)arg1 duration:(double)arg2 ;
+(id)orbPopGesture:(CGPoint)arg1 ;
+(id)orbPeekGesture:(CGPoint)arg1 ;
@end

