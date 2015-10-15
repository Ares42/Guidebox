//
//  CustomTableViewCell.h
//  Guidebox
//
//  Created by Luke Solomon on 10/9/15.
//  Copyright © 2015 Luke Solomon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell

@property (nonatomic) NSString *cellTitle;
@property (nonatomic) NSString *cellDetails;

-(void)setCellImage:(NSString *)cellTitle;

@end
