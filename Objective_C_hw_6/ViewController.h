//
//  ViewController.h
//  Objective_C_hw_6
//
//  Created by умпет on 24.09.2023.
//  Copyright © 2023 Evgen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (weak, nonatomic) IBOutlet UITextView *textViewForFile;

@property (nonatomic) NSUserDefaults *userDefaults;

-(instancetype) initWithCoder:(NSCoder *)coder;
-(instancetype) initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;
-(void) resetUserDefaults;

@end

