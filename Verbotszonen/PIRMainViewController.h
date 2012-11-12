//
//  PIRMainViewController.h
//  Verbotszonen
//
//  Created by tomen on 10.11.12.
//  Copyright (c) 2012 Piratenpartei Österreichs. All rights reserved.
//

#import <MapKit/MapKit.h>
#import "PIRFirstTimeViewController.h"

@interface PIRMainViewController : UITableViewController <UIPopoverControllerDelegate, MKMapViewDelegate, PIRFirstTimeViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end
