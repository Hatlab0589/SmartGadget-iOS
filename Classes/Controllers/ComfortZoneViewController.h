//
//  ComfortZoneViewController.h
//  smartgadgetapp
//
//  Copyright (c) 2013 Sensirion AG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GraphView.h"

@interface ComfortZoneViewController : UIViewController
@property(weak, nonatomic) IBOutlet UILabel *logoLabel;
@property(weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property(weak, nonatomic) IBOutlet UIView *graphContainerView;
@property(weak, nonatomic) IBOutlet GraphView *graphView;

@property(weak, nonatomic) IBOutlet UIButton *colorIndicator;
@property(weak, nonatomic) IBOutlet UILabel *nameLabel;
@property(weak, nonatomic) IBOutlet UILabel *tempLabel;
@property(weak, nonatomic) IBOutlet UILabel *rhLabel;

- (IBAction)onTapGraph:(id)sender;

@end
