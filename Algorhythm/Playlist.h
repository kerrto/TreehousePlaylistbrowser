//
//  PLaylist.h
//  Algorhythm
//
//  Created by Kerry Toonen on 2015-11-09.
//  Copyright © 2015 Kerrto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface Playlist : NSObject

@property (strong, nonatomic) NSString *playlistTitle;
@property (strong, nonatomic) NSString  *playlistDescription;
@property (strong, nonatomic) UIImage *playlistIcon;
@property (strong, nonatomic) UIImage *playlistIconLarge;
@property (strong, nonatomic) NSArray *playlistArtists;
@property (strong, nonatomic) UIColor *backgroundColor;


- (instancetype)initWithIndex:(NSUInteger) index;

@end
