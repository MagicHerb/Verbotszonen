//
//  PIRMainViewController.h
//  Verbotszonen
//
//  Created by tomen on 10.11.12.
//  Copyright (c) 2012 Piratenpartei Österreichs. All rights reserved.
//

#import "PIRFlipsideViewController.h"
#import <MapKit/MapKit.h>
#import "PIRFirstTimeViewController.h"

@interface PIRMainViewController : UITableViewController <PIRFlipsideViewControllerDelegate, UIPopoverControllerDelegate, MKMapViewDelegate, PIRFirstTimeViewControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;
@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end
