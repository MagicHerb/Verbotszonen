//
//  PIRWebViewController.h
//  Verbotszonen
//
//  Created by tomen on 11.11.12.
//  Copyright (c) 2012 Piratenpartei Österreichs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PIRWebViewController : UIViewController

@property (nonatomic, strong) NSString *urlPath;
@property (weak, nonatomic) IBOutlet UIWebView *webView;

@end
