//
//  CameraViewController.h
//  Vizov
//
//  Created by MiriKunisada on 1/16/15.
//  Copyright (c) 2015 Miri Kunisada. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FUIButton.h"
#import "UIColor+FlatUI.h"
#import "UIFont+FlatUI.h"
#import "UIImage+FlatUI.h"
#import "NSString+Icons.h"
#import "FUITextField.h"
#import "FUISegmentedControl.h"
#import "UITableViewCell+FlatUI.h"
#import "FUICellBackgroundView.h"


@interface CameraViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIImageView *cameraPic;

@property (weak, nonatomic) IBOutlet UITextView *textView;


@property (strong, nonatomic) IBOutlet UIScrollView *ScrollView;


- (IBAction)selectPhoto:(UIBarButtonItem *)sender;




@end
