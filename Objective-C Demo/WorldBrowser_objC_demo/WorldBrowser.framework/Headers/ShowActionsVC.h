//
//  ShowActionsVC.h
//  tf_camera_example
//
//  Created by TechnoMac-1 on 11/01/18.
//  Copyright © 2018 Google. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DiscountViewController.h"
//#import <ARKit/ARKit.h>

@interface ShowActionsVC : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    UIView *viewHeader;
    UILabel *lblHeader;
    UIButton *backButton;
    UIImageView *imgLocation;
    
    UITableView *tblDeals;
}
@property (strong, nonatomic) NSArray *arractions;
@property (strong, nonatomic) NSDictionary *locationDict;
@end
