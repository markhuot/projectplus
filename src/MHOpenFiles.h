//
//  MHOpenFiles.h
//  ProjectPlus
//
//  Created by Mark Huot on 5/13/11.
//  Copyright 2011 Home. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MHOpenFiles : NSObject <NSOutlineViewDelegate, NSOutlineViewDataSource> {
    NSMutableArray *openFiles;
    NSOutlineView *outlineView;
    NSOutlineView *fileBrowserView;
    NSImageView *imageView;
    id tabView;
}

+ (id)objectForTabs:(id)theTabs;
- (id)initForTabs:(id)theTabs;

- (void)setOutlineView:(NSOutlineView *)theOutlineView;
- (void)setFileBrowserView:(NSOutlineView *)theFileBrowserView;
- (void)setImageView:(NSImageView *)theImageView;

- (id)tabView;
- (void)setTabView:(id)theTabView;

- (void)addFile:(NSString *)path;
- (void)removeFile:(NSString *)path;

- (void)resizeViews;

@end