F3Stepper
===========

Background
----------
Working on a new app, I wanted a way to allow the user to select a 
numeric value in an easy-to-use and familar manner.   I liked the
font size selection widget in iWorks but the ready-to-use custom
views for doing this didn't quite do what I needed them to.  The
formatting of the value was inflexible, or the view required
an entire framework project to support it, or one of several
other problems.   I decided it would be fun to roll my own
and maybe help others who have come across similar issues.

![Screenshot](https://raw.github.com/ChiefPilot/F3Stepper/master/F3Stepper.png "Screenshot of Component Demo App")

The resulting custom view can be used pretty easily as a drop in
control from Xcode's Interface Builder and although IB won't 
show the control in true WYSIWYG fashion you can wire up the 
actions directly as F3Stepper implements common UIControl events
just like "real" controls provided by Apple do.

If you find this control of use (or find bugs), I'd love to hear
from you!   Drop a note to brad@flightiii.com with questions, comments, 
or dissenting opinions.


Usage
-----
Adding this control to your XCode project is straightforward:

1. Add the files from the F3Stepper folder within the demo to your project.
2. Add a new blank subview to the nib, sized and positioned to match 
what the stepper should look like.
3. In the properties inspector for this subview, change the class to 
"F3Stepper"
4. Wire up events to the Editing Changed, Editing Did Begin,
Editing Did End, or Value Changed events as appropriate.   
See the demo implement for examples of each.
5. Update your code to set the value property as appropriate.

The F3StepperDemo project includes two examples of the stepper, 
showing custom coloring and other behavior.


Tips
----
- The stepper will automatically increment/decrement the value if the user taps and holds on the up/down side of the control.   When this is happening, the Editing Changed event will be fired for each discrete value, allowing you to dynamically update your app in real time.
- If you are not interested in the intermediate values, the Value Changed event will be fired once when the user removes their finger from the control.
- The default step value is one, however, you can specify your own increment value via the 'stepValue' property.
- You can specify how the value is displayed through the 'formatString' property.  Use normal printf markup for placing the floating point value.   @"%0.1f" will display the value with one decimal of precision, for example.   See the F3StepperDemo code for other examples.

License
-------
Copyright (c) 2013 by Brad Benson
All rights reserved.
  
Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following 
conditions are met:
  1.  Redistributions of source code must retain the above copyright
      notice this list of conditions and the following disclaimer.
  2.  Redistributions in binary form must reproduce the above copyright 
      notice, this list of conditions and the following disclaimer in 
      the documentation and/or other materials provided with the 
      distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS 
OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF 
THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
OF SUCH DAMAGE.
