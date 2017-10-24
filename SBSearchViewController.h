//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBReachabilityObserver.h"
#import "SBSearchGestureObserver.h"
#import "SBSearchHeaderDelegate.h"
#import "SBSearchResultsActionManagerDelegate.h"
#import "SBUIActiveOrientationObserver.h"
#import "SPSearchAgentDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, SBSearchFirstTimeViewController, SBSearchHeader, SBSearchResultsActionManager, SBSearchResultsBackdropView, UIGestureRecognizer, UILabel, UINavigationController, UIPanGestureRecognizer, UITableView, UITapGestureRecognizer, UIWindow;

@interface SBSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, SPSearchAgentDelegate, SBSearchGestureObserver, UISearchBarDelegate, SBSearchResultsActionManagerDelegate, UIGestureRecognizerDelegate, UINavigationControllerDelegate, SBUIActiveOrientationObserver, SBReachabilityObserver, UITextFieldDelegate, SBSearchHeaderDelegate>
{
    UINavigationController *_navigationController;
    UIViewController *_mainViewController;
    SBSearchFirstTimeViewController *_firstTimeViewController;
    UITableView *_tableView;
    SBSearchHeader *_searchHeader;
    SBSearchResultsBackdropView *_tableBackdrop;
    SBSearchResultsActionManager *_actionManager;
    UIWindow *_presentingWindow;
    long long _presentingWindowOrientation;
    UILabel *_noResultsLabel;
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    void *_addressBook;
    double _lastContentOffsetY;
    _Bool _scrollDown;
    long long _visibility;
    double _headerHeight;
    _Bool _hasShownBackgroundSinceLastClear;
    long long _firstTimeViewShowCount;
    _Bool _canShowFirstTimeView;
    double _triggerTimestamp;
    struct CGPoint _preReachabilityTableViewOrigin;
    struct CGPoint _reachabilityTableViewOrigin;
    _Bool _showingForReachability;
    UIGestureRecognizer *_cancelRecognizer;
    CDUnknownBlockType _fadeOutCompletionBlock;
}

+ (id)sharedInstance;
- (void)handleCancelReachabilityGesture:(id)arg1;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityModeActivated;
- (void)_animateForReachabilityDeactivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)_animateForReachabilityActivatedWithHandler:(CDUnknownBlockType)arg1;
- (void)_performReachabilityTransactionForActivate:(_Bool)arg1 immediately:(_Bool)arg2;
- (void)_lockScreenUIWillLock:(id)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_rotatePresentingWindowIfNecessaryTo:(long long)arg1 withDuration:(double)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)actionManager:(id)arg1 sendFeedback:(id)arg2;
- (struct UIEdgeInsets)actionManagerDetailsViewEdgeInsets:(id)arg1;
- (void)actionManager:(id)arg1 dismissViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 animated:(_Bool)arg4;
- (void)actionManager:(id)arg1 presentViewController:(id)arg2 completion:(CDUnknownBlockType)arg3 modally:(_Bool)arg4;
- (void)actionManager:(id)arg1 dismissAnimated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelButtonPressed;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)_searchFieldReturnPressed;
- (void)_searchFieldEditingChanged;
- (void)searchGesture:(id)arg1 completedShowing:(_Bool)arg2;
- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_updateCellClipping:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_handlePanRecognizer:(id)arg1;
- (void)_handleTapRecognizer:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleDismissGesture;
- (void)_sendAbandonmentFeedbackForReason:(unsigned long long)arg1;
- (void)_fadeOutAndHideKeyboardAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_fadeForLaunchWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)attributionButtonTapped:(id)arg1;
- (void)_sendFeedback:(id)arg1;
- (void)_updateClipping;
- (void)_updateHeaderHeightIfNeeded;
- (void)_deselectTableViewCell;
- (id)_actionManager;
- (void)_updateTableContents;
- (void)_setFirstTimeViewVisible:(_Bool)arg1;
- (_Bool)_showFirstTimeView;
- (_Bool)_hasNoResultsForQuery;
- (_Bool)_hasResults;
- (_Bool)_hasNoQuery;
- (_Bool)_showingKeyboard;
- (void)_setShowingKeyboard:(_Bool)arg1;
- (void)_setVisibility:(long long)arg1;
@property(readonly, nonatomic, getter=isFadingOut) _Bool fadingOut;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)dismissAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (struct UIEdgeInsets)searchBorderMarginsForSearchField:(_Bool)arg1 cancelMargins:(struct UIEdgeInsets *)arg2;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

