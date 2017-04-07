//
//  SavingSalaryRecordViewController.h
//  EGBankP2B
//
//  Created by fuwenqiang on 16/12/15.
//  Copyright © 2016年 HFBank. All rights reserved.
//

#import "UIViewControllerBase.h"
#import "PassWordViewController.h"


@interface SavingSalaryRecordViewController : PassWordViewController

@property (strong,nonatomic) HFR371Res * hfr371res; // 在进入此页的时候传入，
@property (strong,nonatomic) UIViewController * backViewController;
//try to change
@end
