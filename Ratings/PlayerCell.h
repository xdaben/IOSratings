//
//  PlayerCell.h
//  Ratings
//
//  Created by IOS on 4/10/13.
//  Copyright (c) 2013 IOS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic,strong) IBOutlet UILabel *nameLabel;
@property (nonatomic,strong) IBOutlet UILabel *gameLabel;
@property (nonatomic,strong) IBOutlet UIImageView *ratingImageView;

@end
