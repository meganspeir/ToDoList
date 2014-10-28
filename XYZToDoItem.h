//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Megan on 10/22/14.
//  Copyright (c) 2014 ListHub. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;


@end
