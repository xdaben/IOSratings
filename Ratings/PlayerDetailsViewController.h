//
//  PlayerDetailsViewController.h
//  Ratings
//
//  Created by IOS on 4/15/13.
//  Copyright (c) 2013 IOS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Player.h"
#import "GamePickerViewController.h"
@class PlayerDetailsViewController;
@protocol PlayerDetailsViewControllerDelegate <NSObject>
- (void)playerDetailsViewControllerDidCancel:
(PlayerDetailsViewController *)controller;
-(void)playerDetailsViewController:(PlayerDetailsViewController *)controller didAddPlayer:(Player *)player;
@end

@interface PlayerDetailsViewController : UITableViewController <GamePickerViewControllerDelegate>
@property (nonatomic,weak) id <PlayerDetailsViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;
@property (strong, nonatomic) IBOutlet UITextField *rateTextField;


- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;



@end