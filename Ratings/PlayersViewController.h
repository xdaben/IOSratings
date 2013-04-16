//
//  PlayersViewController.h
//  Ratings
//
//  Created by IOS on 4/8/13.
//  Copyright (c) 2013 IOS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>
@property (nonatomic, strong) NSMutableArray *players;
@end
