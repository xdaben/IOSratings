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

- (IBAction)sliderUpTouch:(id)sender;
@property (strong, nonatomic) IBOutlet UIImageView *myImage;
@property (nonatomic,weak) id <PlayerDetailsViewControllerDelegate> delegate;
@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UILabel *detailLabel;
@property (strong, nonatomic) IBOutlet UITextField *rateTextField;
@property (strong, nonatomic) IBOutlet UISegmentedControl *segmentedRate;
@property (strong, nonatomic) IBOutlet UISlider *mySlider;


- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;
- (IBAction)sliderchanged:(id)sender;



@end