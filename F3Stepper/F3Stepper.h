//
//  F3Stepper.h
//  Copyright (c) 2013 by Brad Benson
//  All rights reserved.
//  
//  Redistribution and use in source and binary forms, with or without 
//  modification, are permitted provided that the following 
//  conditions are met:
//    1.  Redistributions of source code must retain the above copyright
//        notice this list of conditions and the following disclaimer.
//    2.  Redistributions in binary form must reproduce the above copyright 
//        notice, this list of conditions and the following disclaimer in 
//        the documentation and/or other materials provided with the 
//        distribution.
//  
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
//  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
//  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
//  COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
//  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
//  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS 
//  OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
//  AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
//  OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF 
//  THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
//  OF SUCH DAMAGE.
//
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
@property (readwrite, nonatomic) float              repeatDelaySec;     // Delay before auto-repeat, in seconds
@property (readwrite, nonatomic) float              repeatRate;         // Number of updates per second for auto-repeat
@property (readwrite, nonatomic) BOOL               wraps;              // YES = value wraps from max to minimum & minimum to maximum.
@property (readwrite, nonatomic, retain) NSString   *formatString;      // String for formatting display
@property (readwrite, nonatomic, retain) UIFont     *font;              // Font for label
@property (readwrite, nonatomic, retain) UIColor    *textColor;         // Color of text
@property (readwrite, nonatomic, retain) UIColor    *borderColor;       // Color of border
@property (readwrite, nonatomic, retain) UIColor    *backgroundColor;   // Color of background

// Supported initializers
- (id)initWithFrame:(CGRect)a_frame;
- (id) initWithCoder:(NSCoder *)aDecoder;

// Accessors
- (void) setFont:(UIFont *)a_font;

@end

