//
//  ViewController.h
//  Guidebox
//
//  Created by Luke Solomon on 10/8/15.
//  Copyright © 2015 Luke Solomon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) NSString *titleText;
@property (nonatomic) NSString *details;
@property (nonatomic) NSString *imageURL;
@property (nonatomic) NSString *showID;

@end

