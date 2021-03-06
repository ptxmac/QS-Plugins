//
//  QSProcessManipulationPlugInSource.m
//  QSProcessManipulationPlugIn
//
//  Created by Nicholas Jitkoff on 9/23/05.
//  Copyright __MyCompanyName__ 2005. All rights reserved.
//

#import "QSProcessManipulationPlugInSource.h"
#import <QSCore/QSObject.h>


@implementation QSProcessManipulationPlugInSource
- (BOOL)indexIsValidFromDate:(NSDate *)indexDate forEntry:(NSDictionary *)theEntry{
    return YES;
}

- (NSImage *) iconForEntry:(NSDictionary *)dict{
    return nil;
}

- (NSString *)identifierForObject:(id <QSObject>)object{
    return nil;
}
- (NSArray *) objectsForEntry:(NSDictionary *)theEntry{
    NSMutableArray *objects=[NSMutableArray arrayWithCapacity:1];
    QSObject *newObject;
	
	newObject=[QSObject objectWithName:@"TestObject"];
	[newObject setObject:@"" forType:QSProcessManipulationPlugInType];
	[newObject setPrimaryType:QSProcessManipulationPlugInType];
	[objects addObject:newObject];
  
    return objects;
    
}


// Object Handler Methods

/*
- (void)setQuickIconForObject:(QSObject *)object{
    [object setIcon:nil]; // An icon that is either already in memory or easy to load
}
- (BOOL)loadIconForObject:(QSObject *)object{
	return NO;
    id data=[object objectForType:QSProcessManipulationPlugInType];
	[object setIcon:nil];
    return YES;
}
*/
@end
