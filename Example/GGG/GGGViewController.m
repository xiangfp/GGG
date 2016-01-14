//
//  GGGViewController.m
//  GGG
//
//  Created by xiangfp on 01/14/2016.
//  Copyright (c) 2016 xiangfp. All rights reserved.
//

#import "GGGViewController.h"
#import "TinyView.h"
#import "Request.h"

@interface GGGViewController ()

@end

@implementation GGGViewController

- (void)viewDidLoad
{
   
    
    TinyView *tinyView = [[TinyView alloc] init];
    [self.view addSubview:tinyView];
    tinyView.frame = CGRectMake(0, 0, 320, 200);
    
    NSString *str = @"file:///test.xml";
    NSMutableString *uri = [NSMutableString stringWithString:str];
    NSString *escaped = [uri stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    Request *request = [Request requestWithURIString:escaped relativeToURL:nil delegate:nil];
    request.method = RequestMethodPost;
    request.priority = QueuePriorityPageResource;
    
    [tinyView openWindowUnLockWithRequest:request];
    
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
