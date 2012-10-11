//
//  ViewController.h
//  Sutris
//
//  Created by William Mecklenburg on 9/20/12.
//  Copyright (c) 2012 William Mecklenburg. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "SutrisModel.h"
#import "SudokuCell.h"

@interface SutrisViewController : UIViewController <SutrisModelDelegate>
{
    SutrisModel *model;

}

@property (nonatomic, retain) NSMutableArray *blocks;
@property (nonatomic, retain) UIImageView *activeBlock;

- (IBAction)moveActiveBlockLeft:(id)sender;
- (IBAction)moveActiveBlockRight:(id)sender;

@end
