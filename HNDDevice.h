/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:24 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HNDDeviceDelegate;
#import <assistivetouchd/assistivetouchd-Structs.h>
@interface HNDDevice : NSObject {

	IOHIDDeviceRef _hidDevice;
	id<HNDDeviceDelegate> _delegate;
	char* _hidReportBuffer;
	BOOL _isLoaded;
	BOOL _secondaryButton;
	BOOL _tertiaryButton;
	BOOL _wheel;
	double _minY;
	double _maxY;
	double _minX;
	double _maxX;

}

@property (nonatomic,readonly) BOOL isLoaded;                             //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,readonly) BOOL secondaryButton;                      //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,readonly) BOOL tertiaryButton;                       //@synthesize tertiaryButton=_tertiaryButton - In the implementation block
@property (nonatomic,readonly) BOOL wheel;                                //@synthesize wheel=_wheel - In the implementation block
@property (assign,nonatomic) id<HNDDeviceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)createNewDevice:(IOHIDDeviceRef)arg1 ;
-(BOOL)secondaryButton;
-(id)_initWithHIDDevice:(IOHIDDeviceRef)arg1 ;
-(void)handleReportCallback:(int)arg1 report:(char*)arg2 reportLength:(long long)arg3 ;
-(void)handleValueCallback:(IOHIDValueRef)arg1 ;
-(BOOL)tertiaryButton;
-(BOOL)wheel;
-(void)setDelegate:(id<HNDDeviceDelegate>)arg1 ;
-(void)dealloc;
-(id<HNDDeviceDelegate>)delegate;
-(BOOL)isLoaded;
-(BOOL)load;
-(void)unload;
@end

