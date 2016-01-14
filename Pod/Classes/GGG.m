//
//  HelloTinyEmbed.m
//  Pods
//
//  Created by xiangfp on 16/1/12.
//
//

#import "GGG.h"

@implementation GGG

- (id)initWithElement:(Element*)element{
    if (self = [super initWithElement:element]) {
        
        self.backgroundColor = [UIColor yellowColor];
    }
    return self;
}

-(void)console
{
    NSLog(@"HelloTinyEmbedHelloTinyEmbedHelloTinyEmbed");
}


- (void)layout {
    [super layout];
    
    Box *box = _context.box;
    
    //page & control
    float fixedWidth = box.fixedWidth;
    float fixedHeight = box.fixedHeight;
    
    CGSize size = CGSizeMake(320, 320);
    if (fixedWidth >= 0) {
        size.width = fixedWidth;
    }
    if (fixedHeight >= 0) {
        size.height = fixedHeight;
    }
    size = [box sizeOutsetPadding:size];
    self.frame = (CGRect){self.frame.origin, size};
}

@end
