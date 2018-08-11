//
//  ShowMicroLocationVC.h
//  tf_camera_example
//
//  Created by TechnoMac-1 on 11/01/18.
//  Copyright © 2018 Google. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShowActionsVC.h"
#import "DiscountViewController.h"

@interface ShowMicroLocationVC : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    UIView *viewHeader;
    UILabel *lblHeader;
    UIButton *backButton;
    UIButton *infoButton;
    UIButton *allButton;
    UIButton *dealButton;
    UIButton *WarningButton;
    
    UILabel *lblinfobtnLine;
    UILabel *lblallbtnLine;
    UILabel *lbldealbtnLine;
    UILabel *lblwarningbtnLine;
    
    UIView *viewShowLocaitonCount;
    UILabel *lblLcoationCount;
    
    UITableView *tblLocationInformation;
    NSMutableArray *ArrDispMicroLocations;
    NSArray *arrAllMicrolocations;
    NSArray *arrInfoMicrolocations;
    NSArray *arrDealMicrolocations;
    NSArray *arrWarningMicrolocations;
}
@end
