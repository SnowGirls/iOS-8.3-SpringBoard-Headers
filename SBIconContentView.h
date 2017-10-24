//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface SBIconContentView : UIView
{
    long long _orientation;
    NSMutableArray *_folderContentViews;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (struct CGRect)_frameForFolderView:(id)arg1;
- (id)_folderViews;
- (void)clearAllFolderContentViews;
- (void)popFolderContentView:(id)arg1;
- (void)pushFolderContentView:(id)arg1;
- (void)updateLayoutWithDuration:(double)arg1;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1;

@end

