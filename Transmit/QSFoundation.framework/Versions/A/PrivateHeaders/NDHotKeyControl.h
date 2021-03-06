/*!
	@header NDHotKeyControl.h
	@abstract Header file for a subclass of NSTextField for getting hot key combinations from the user.
	@discussion The <tt>NDHotKeyControl</tt> can be used to get a  <tt>NDHotKeyEvent</tt> for the last key combination pressed by the user.
 
	Created by Nathan Day on Wed Mar 05 2003.
	Copyright (c) 2002 Nathan Day. All rights reserved.
 */

#import <AppKit/AppKit.h>

@class	NDHotKeyEvent;

/*!
	@class NDHotKeyControl
	@abstract Subclass of NSTextField for getting hot key combinations from the user.
	@discussion The <tt>NDHotKeyControl</tt> can be used to get a  <tt>NDHotKeyEvent</tt> for the last key combination pressed by the user.
 */
@interface NDHotKeyControl : NSTextField
{
@private
	unsigned short		keyCode;
	unichar				character;
	unsigned long		modifierFlags;
}

/*!
	@method keyCode
	@abstract Get key code.
	@discussion Returns the key code for the last key combination the user pressed while the reciever was active.
	@result A <tt>unsigned short</tt> containing key code.
 */
- (unsigned short)keyCode;

/*!
	@method character
	@abstract Get unicode character.
	@discussion Returns the unicode character for the last key combination the user pressed while the reciever was active.
	@result A <tt>unichar</tt> containing character.
 */
- (unichar)character;

/*!
	@method modifierFlags
	@abstract Get modifer flags.
	@discussion Returns the modifer flags for the last key combination the user pressed while the reciever was active.
	@result A <tt>unsigned long</tt> containing modifer flags.
 */
- (unsigned long)modifierFlags;

/*!
	@method hotKeyEvent
	@abstract Get <tt>NDHotKeyEvent</tt>
	@discussion Returns the <tt>NDHotKeyEvent</tt> instance for the last key combination the user pressed while the reciever was active. The <tt>NDHotKeyEvent</tt> returned will either be one that has already been created or a newly created one otherwise.
	@result A <tt>NDHotKeyEvent</tt> for the hot key event.
 */
- (NDHotKeyEvent *)hotKeyEvent;

@end
