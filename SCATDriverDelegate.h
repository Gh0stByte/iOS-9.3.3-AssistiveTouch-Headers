/*
* This header is generated by classdump-dyld 1.0
* on Monday, August 15, 2016 at 11:35:25 AM Eastern Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCATDriverDelegate <NSObject>
@optional
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2;
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2;
-(void)driverDidPause:(id)arg1;
-(void)driverDidBecomeInactive:(id)arg1;
-(void)driverDidBecomeActive:(id)arg1;

@required
-(id)activeElementManagerForDriver:(id)arg1;
-(id)activeScannerDriver;
-(void)driver:(id)arg1 indicateDwellScanningWillAbort:(BOOL)arg2;

@end

