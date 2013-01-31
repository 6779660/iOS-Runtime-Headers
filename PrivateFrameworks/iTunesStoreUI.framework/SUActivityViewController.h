/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary, NSArray;

@interface SUActivityViewController : UIActivityViewController  {
    NSMutableDictionary *_customTitles;
    NSArray *_suActivityItems;
    int _transitionSafetyCount;
}


- (void)setTitle:(id)arg1 forActivityType:(id)arg2;
- (void)dealloc;
- (id)_titleForActivity:(id)arg1;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
- (void)_prepareActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end