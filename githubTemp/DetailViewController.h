//
//  DetailViewController.h
//  githubTemp
//
//  Created by cyy on 16/5/30.
//  Copyright © 2016年 yyt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

