//
//  PlayerDetailsViewController.m
//  Ratings
//
//  Created by IOS on 4/15/13.
//  Copyright (c) 2013 IOS. All rights reserved.
//

#import "PlayerDetailsViewController.h"
#import "Player.h"

@interface PlayerDetailsViewController ()

@end

@implementation PlayerDetailsViewController
{
    NSString *game;
}

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    self.detailLabel.text = game;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

#pragma mark - Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (indexPath.section == 0) {
        [self.nameTextField becomeFirstResponder];
    }
//    if (indexPath.section == 2) {
//        [self.rateTextField becomeFirstResponder];
//    }
    

}

- (IBAction)cancel:(id)sender
{
    [self.delegate playerDetailsViewControllerDidCancel:self];
}
-(IBAction)done:(id)sender
{
    Player *player = [[Player alloc] init];
    player.name = self.nameTextField.text;
    player.rating = round(self.mySlider.value);
   // NSLog(self.rateTextField.text);
    player.game = game;
    //player.rating = 3;
    [self.delegate playerDetailsViewController:self didAddPlayer:player];
    
    //[self.delegate playerDetailsViewControllerDidSave:self];
}

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if([segue.identifier isEqualToString:@"PickGame"])
    {
        GamePickerViewController *gamePickerViewController = segue.destinationViewController;
        gamePickerViewController.delegate = self;
        gamePickerViewController.game = game;
    }
}

-(id)initWithCoder:(NSCoder *)aDecoder
{
    if ((self = [super initWithCoder:aDecoder])) {
        NSLog(@"init playerdetailsviewcontroller");
        game = @"chess";
    }
    return self;
}

-(void)gamePickerViewController: (GamePickerViewController *)controller didSelectGame:(NSString *)theGame
{
    game = theGame;
    self.detailLabel.text = game;
    [self.navigationController popViewControllerAnimated:YES];
    
    
}

-(IBAction)sliderchanged:(id)sender
{
    
    
    if (round(self.mySlider.value) == 1)
    {
        self.myImage.image = [UIImage imageNamed:@"1StarSmall.png"];
    }
    else if (round(self.mySlider.value) == 2)
    {
        self.myImage.image = [UIImage imageNamed:@"2StarsSmall.png"];
    }
else if (round(self.mySlider.value) == 3)
{
    self.myImage.image = [UIImage imageNamed:@"3StarsSmall.png"];
}
else if (round(self.mySlider.value) == 4)
{
    self.myImage.image = [UIImage imageNamed:@"4StarsSmall.png"];
}
else if (round(self.mySlider.value) == 5)
{
    self.myImage.image = [UIImage imageNamed:@"5StarsSmall.png"];
}
}


- (IBAction)sliderUpTouch:(id)sender {
    int value = round(self.mySlider.value);
    [self.mySlider setValue: value animated:YES];
}
@end
