/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertLoopPlayer : NSObject {
    BOOL _observingPlayer;
    unsigned int _playbackState;
    AVQueuePlayer *_player;
}

@property (getter=_isObservingPlayer, setter=_setObservingPlayer:, nonatomic) BOOL _observingPlayer;
@property (setter=_setPlayer:, nonatomic, retain) AVQueuePlayer *_player;
@property (nonatomic) unsigned int playbackState;

- (BOOL)_isObservingPlayer;
- (void)_performBlockOnMainThread:(id /* block */)arg1;
- (id)_player;
- (void)_setObservingPlayer:(BOOL)arg1;
- (void)_setPlaybackState:(unsigned int)arg1;
- (void)_setPlayer:(id)arg1;
- (void)_startObservingPlayer;
- (void)_stopObservingPlayer;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned int)playbackState;
- (void)startPlayingRepeatedlyAssetWithURL:(id)arg1;
- (void)stopPlayingWithFadeOutDuration:(double)arg1;

@end
