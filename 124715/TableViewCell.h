//
//  TableViewCell.h
//  124715
//
//  Created by Yormo on 27/7/2017.
//  Copyright © 2017 yormo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *tag;
@property (weak, nonatomic) IBOutlet UILabel *content;

@end
