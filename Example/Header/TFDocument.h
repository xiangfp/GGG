//
//  TFDocument.h
//  TinyFrame
//
//  Created by xiangfp on 15/11/6.
//  Copyright © 2015年 Sunline. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DocumentContext.h"
#import "TFrame.h"


@interface TFDocument : NSObject

- (void)loadContext:(DocumentContext *)context;

@property(nonatomic, strong) TFrame *frame;

@property(nonatomic, strong) DocumentContext *context;

@end
