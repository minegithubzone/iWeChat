//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IFavAudioPlayerExt-Protocol.h"

@class FavAudioInfo, NSString, UIButton, UILabel, UISlider;
@protocol WNNoteVoicePlayViewDelegate;

@interface WNNoteVoicePlayView : UIView <IFavAudioPlayerExt>
{
    UIView *m_containerView;
    UIButton *m_playBtn;
    UILabel *m_timeLabel;
    UILabel *m_totalTimeLabel;
    UISlider *m_slider;
    _Bool m_dragSliderWhenPlaying;
    FavAudioInfo *_audioInfo;
    id <WNNoteVoicePlayViewDelegate> _playDelegate;
}

@property(nonatomic) __weak id <WNNoteVoicePlayViewDelegate> playDelegate; // @synthesize playDelegate=_playDelegate;
@property(retain, nonatomic) FavAudioInfo *audioInfo; // @synthesize audioInfo=_audioInfo;
- (void).cxx_destruct;
- (void)OnPlayError:(id)arg1;
- (void)OnEndPlay:(id)arg1 isForceStop:(_Bool)arg2;
- (void)updateProgress:(unsigned int)arg1 Animated:(_Bool)arg2;
- (void)OnAudioPlaying:(id)arg1 Offset:(unsigned int)arg2;
- (void)updateStatusPlaying:(_Bool)arg1;
- (void)pause;
- (void)stop;
- (void)play;
- (void)quit;
- (void)playBtnClicked;
- (void)endChangeProgress;
- (void)doChangeProgress;
- (void)willChangeProgress;
- (_Bool)isCurrentControllForPlayer;
- (void)layoutSubviews;
- (void)initView;
- (id)getTimeText:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithFavAudioInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
