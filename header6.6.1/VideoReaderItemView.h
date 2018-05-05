//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderItemView.h"

#import "AsyncImageViewDelegate-Protocol.h"

@class CALayer, NSString, UIImageView, UIView;

@interface VideoReaderItemView : ReaderItemView <AsyncImageViewDelegate>
{
    UIImageView *m_playBtnView;
    UIView *m_titleTimeView;
    CALayer *m_maskLayer;
    unsigned int _playLength;
}

@property(nonatomic) unsigned int playLength; // @synthesize playLength=_playLength;
- (void).cxx_destruct;
- (void)onAsyncLoadImageOK:(id)arg1;
- (id)viewForTitleAndTimeLabel;
- (void)initPlayBtnView:(_Bool)arg1;
- (void)normalView;
- (void)topView;
- (void)setHighlighted:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
