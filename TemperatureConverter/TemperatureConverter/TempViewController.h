//
//  TempViewController.h
//  TemperatureConverter
//
//  Created by Seema Kamath on 7/24/13.
//  Copyright (c) 2013 Y.CORP.YAHOO.COM\seemakam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TempViewController : UIViewController

@property (nonatomic, weak) IBOutlet UITextField *fahrenhiteField;
@property (nonatomic, weak) IBOutlet UITextField  *celsiusField;
@property (nonatomic, weak) IBOutlet UIButton *convertButton;

@end
