/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVItem, MPInlineVideoController, MPSwipableView, NSTimer, UIActivityIndicatorView, UIPinchGestureRecognizer, UITapGestureRecognizer, UIView<MPVideoOverlay>;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {
    BOOL _disableTaps;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    NSTimer *_idleTimer;
    BOOL _isAnimatingOverlay;
    MPAVItem *_item;
    UIActivityIndicatorView *_loadingIndicator;
    MPInlineVideoController *_masterController;
    UIView<MPVideoOverlay> *_overlayView;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    float _savedWindowLevel;
    BOOL _shouldForwardRotationEvents;
    MPSwipableView *_swipableView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain) MPAVItem * item;
@property MPInlineVideoController * masterController;

- (void)_hideOverlayAnimated:(BOOL)arg1;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2;
- (void)_overlayIdleTimerFired:(id)arg1;
- (void)_setStatusBarStyle;
- (void)_showOverlayDidEnd;
- (void)_viewWasPinched:(id)arg1;
- (void)_viewWasTapped:(id)arg1;
- (void)_windowWillRotate:(id)arg1;
- (void)cancelOverlayIdleTimer;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)hideLoadingIndicator;
- (id)init;
- (id)item;
- (void)loadView;
- (id)masterController;
- (void)overlayDidBeginScrubbing:(id)arg1;
- (void)overlayDidDismissAlternateTracksPopover:(id)arg1;
- (void)overlayDidEndScrubbing:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (void)overlayTappedScaleModeButton:(id)arg1;
- (void)prepareForTransitionFromFullscreen;
- (void)resetOverlayIdleTimer;
- (void)setItem:(id)arg1;
- (void)setMasterController:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showAlternateTracks;
- (void)showLoadingIndicator;
- (void)showOverlayAnimated:(BOOL)arg1;
- (void)swipableViewHadActivity:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)updateOverlayView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsFullScreenLayout;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end