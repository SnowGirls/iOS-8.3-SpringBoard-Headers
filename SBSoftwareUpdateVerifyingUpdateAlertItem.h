//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBBaseSoftwareUpdateAlertItem.h"

@class SBSoftwareUpdateVerifyingUpdateAlertViewController;

@interface SBSoftwareUpdateVerifyingUpdateAlertItem : SBBaseSoftwareUpdateAlertItem
{
    SBSoftwareUpdateVerifyingUpdateAlertViewController *_activityViewController;
}

- (_Bool)dismissesAutomatically;
- (_Bool)dismissOnLock;
- (_Bool)allowMenuButtonDismissal;
- (_Bool)shouldShowInLockScreen;
- (_Bool)undimsScreen;
- (_Bool)behavesSuperModally;
- (_Bool)reappearsAfterLock;
- (_Bool)reappearsAfterUnlock;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

@end

