//
//  Player.h
//  Ratings
//
//  Created by IOS on 4/8/13.
//  Copyright (c) 2013 IOS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Player : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *game;
@property (nonatomic, assign) int rating;

@end
