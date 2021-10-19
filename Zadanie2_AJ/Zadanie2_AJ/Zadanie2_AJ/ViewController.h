//
//  ViewController.h
//  Zadanie2_AJ
//
//  Created by student on 12/10/2021.
//  Copyright © 2021 PBWI. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
@property (nonatomic, weak) IBOutlet UITextField *inputSurnameField;

-(IBAction)enter;
-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender;

@end

