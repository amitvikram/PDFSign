//
//  SmoothLineView.h
//  Smooth Line View
//
//  Created by Levi Nunnink on 8/15/11.
//  Copyright 2011 culturezoo. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface SmoothLineView_new : UIView {
@private
    CGPoint currentPoint;
    CGPoint previousPoint1;
    CGPoint previousPoint2;
    CGFloat lineWidth;
    UIColor *lineColor;
    UIImage *curImage;
    UIImage *backgroundImage;
	CGMutablePathRef path;
}

@property (nonatomic, retain) UIColor *lineColor;
@property (readwrite) CGFloat lineWidth;
@property (assign, nonatomic) BOOL empty;

- (id)initWithFrame:(CGRect)frame andImage:(UIImage *)image;

@end
