//
//  F3Stepper.h
//  Flight Test Toolbox
//
//  Created by Brad Benson on 1/10/13.
//  Copyright (c) 2013 Brad Benson. All rights reserved.
//

//===[ Required Headers ]================================================

// Cocoa
#import <UIKit/UIKit.h>



//-----------------------------------------------------------------------
//-----------------------------------------------------------------------
//---------------|  F3Stepper class implementation  |--------------------
//-----------------------------------------------------------------------
//-----------------------------------------------------------------------

@interface F3Stepper : UIControl

// Properties
@property (readwrite, nonatomic) float              minValue;           // Minimum stepper value
@property (readwrite, nonatomic) float              maxValue;           // Maximum stepper value
@property (readwrite, nonatomic) float              stepValue;          // Step up/down value
@property (readwrite, nonatomic) float              value;              // Currently displayed value
@property (readwrite, nonatomic, retain) NSString   *formatString;      // String for formatting display
@property (readwrite, nonatomic, retain) UIFont     *labelFont;         // Font for label
@property (readwrite, nonatomic, retain) UIColor    *textColor;         // Color of text
@property (readwrite, nonatomic, retain) UIColor    *borderColor;       // Color of border
@property (readwrite, nonatomic, retain) UIColor    *backgroundColor;   // Color of background

// Supported initializers
- (id)initWithFrame:(CGRect)a_frame;
- (id) initWithCoder:(NSCoder *)aDecoder;

// Accessors
- (void) setFont:(UIFont *)a_font;

@end

