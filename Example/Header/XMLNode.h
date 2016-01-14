//
//  XMLNode.h
//  Breeze
//
//  Created by  on 12-7-18.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol XMLNode <NSObject>
- (NSString*)xml;
- (NSString*)xmlWithIndentLevel:(NSUInteger)indentLevel;
@end
