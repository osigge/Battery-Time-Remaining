//
//  MainMenu.h
//  Battery Time Remaining
//
//  Created by Oliver Sigge on 08.09.12.
//  Copyright (c) 2012 Pinky Brains. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MainMenu : NSMenu

- (NSMenuItem*)menuItemWithClassName:(NSString*)className;

@end