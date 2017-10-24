//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerObserver.h"

@class NSString, SBDisableActiveInterfaceOrientationChangeAssertion, SBStarkScreenController, SBUIAnimationController;

@interface SBRelaunchAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerObserver>
{
    SBUIAnimationController *_animationController;
    _Bool _relaunchSuspended;
    _Bool _willBeOccluded;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    SBStarkScreenController *_starkScreenController;
}

@property(retain, nonatomic) SBStarkScreenController *starkScreenController; // @synthesize starkScreenController=_starkScreenController;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)_handleAppRelaunch:(id)arg1;
- (void)_didComplete;
- (void)_begin;
- (void)_endAnimation;
- (id)_setupAnimationForApp:(id)arg1;
- (id)_animationForApp:(id)arg1;
- (_Bool)shouldToggleSpringBoardStatusBarOnCleanup;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1 application:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

