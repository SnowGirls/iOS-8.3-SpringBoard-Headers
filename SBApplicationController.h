//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBUIApplicationServiceDelegate.h"
#import "SBApplicationLifecycleObserver.h"
#import "SBApplicationRestrictionControllerDelegate.h"
#import "SBApplicationRestrictionDataSource.h"

@class BKSApplicationStateMonitor, FBApplicationInfo, FBApplicationLibrary, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSString, SBApplicationLibraryObserver, SBApplicationRestrictionController, SBReverseCountedSemaphore;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, SBApplicationLifecycleObserver, FBUIApplicationServiceDelegate, SBApplicationRestrictionControllerDelegate>
{
    NSMutableDictionary *_applicationsByBundleIdentifer;
    NSMutableSet *_applicationsPlayingMutedAudioSinceLastLock;
    NSDictionary *_backgroundDisplayDict;
    NSLock *_applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    _Bool _visibilityOverridesAreDirty;
    BKSApplicationStateMonitor *_appStateMonitor;
    _Bool _booting;
    NSMutableSet *_appsToAutoLaunchAfterBoot;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBApplicationLibrary *_appLibrary;
    FBApplicationInfo *_systemAppInfo;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
}

+ (void)_setClearSystemAppSnapshotsWhenLoaded:(_Bool)arg1;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void)refreshVisiblityOverrides;
- (void)applicationService:(id)arg1 setNextWakeDate:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)applicationsRemoved:(id)arg1;
- (void)applicationsModified:(id)arg1;
- (void)applicationsAdded:(id)arg1;
- (void)_setVisibilityOverridesAreDirty:(_Bool)arg1;
- (void)_reloadBackgroundIDsDict;
- (Class)_applicationClassForInfoDictionary:(id)arg1;
- (void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 reveal:(_Bool)arg3;
- (void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(_Bool)arg2 popIn:(_Bool)arg3 reloadAllIcons:(_Bool)arg4;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1;
- (id)_loadApplications:(id)arg1 removed:(id)arg2;
- (id)_appInfosToBundleIDs:(id)arg1;
- (void)_loadApplicationFromInfo:(id)arg1 withBundle:(id)arg2;
- (void)_loadApplicationFromApplicationInfo:(id)arg1;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_preLoadApplications;
- (void)_memoryWarningReceived;
- (void)_lockStateChanged:(id)arg1;
- (void)_unusuallyMutedAudioPlaying:(id)arg1;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_deviceFirstUnlocked;
- (void)_finishDeferredMajorVersionMigrationTasks;
- (id)_lock_applicationWithBundleIdentifier:(id)arg1;
- (_Bool)_loadApplicationWithoutMutatingIconState:(id)arg1;
- (void)_autoLaunchAppsIfNecessaryAfterBoot;
- (id)restrictionController;
- (_Bool)updateAppIconVisibilityOverridesShowing:(id *)arg1 hiding:(id *)arg2;
- (int)appVisibilityOverrideForBundleIdentifier:(id)arg1;
- (id)newsstandApps;
- (id)webApplications;
- (id)iPodOutApplication;
- (id)cameraApplication;
- (id)clockApplication;
- (id)faceTimeApp;
- (id)mobilePhone;
- (id)setupApplication;
- (id)dataActivation;
- (id)musicApplication;
- (void)waitForUninstallsToComplete;
- (void)uninstallApplication:(id)arg1;
- (id)applicationWithPid:(int)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)allApplications;
- (id)allBundleIdentifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

