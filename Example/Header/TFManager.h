//
//  TinyFrameManager.h
//  TinyFrame
//
//  Created by xiangfp on 15/11/5.
//  Copyright © 2015年 Sunline. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TFManager : UIViewController

+ (TFManager *)tfManager;

- (void)openFrameWithURL:(NSString *)url;


@end
