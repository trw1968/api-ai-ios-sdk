//
//  ResultViewController.h
//  ApiAIDemo
//
//  Created by Kuragin Dmitriy on 26/01/15.
//  Copyright (c) 2015 Kuragin Dmitriy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ResultViewController : UIViewController

@property(nonatomic, weak) IBOutlet UITextView *textView;

@property(nonatomic, copy) id response;

@end
