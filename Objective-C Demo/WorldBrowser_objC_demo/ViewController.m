//
//  ViewController.m
//  WorldBrowser_objC_demo
//
//  Created by TechnoMac-14 on 15/03/18.
//  Copyright © 2018 TechnoMac-14. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)viewDidAppear:(BOOL)animated
{
    [self presentViewController:[DetectionViewController sharedManager] animated:true completion:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
