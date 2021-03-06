/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMOfficeArtMapper : CMDrawableMapper {
    WDAContent *mContent;
    unsigned int mCurrentPage;
    BOOL mFloating;
    BOOL mIsInsideGroup;
    BOOL mIsMapped;
}

- (id)blipAtIndex:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })expandedSizeForTextBox:(id)arg1 withState:(id)arg2;
- (id)initWithOadDrawable:(id)arg1 asFloating:(BOOL)arg2 parent:(id)arg3;
- (id)initWithWdOfficeArt:(id)arg1 parent:(id)arg2;
- (BOOL)isInsideGroup;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapDiagramAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtGroupAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtImageAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtShapeAt:(id)arg1 withState:(id)arg2;
- (void)mapOfficeArtTextboxAt:(id)arg1 withState:(id)arg2;
- (void)mapTextBoxAt:(id)arg1 withState:(id)arg2;
- (void)setBoundingBox;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setIsInsideGroup:(BOOL)arg1;
- (void)setWithClientData:(id)arg1 state:(id)arg2;

@end
