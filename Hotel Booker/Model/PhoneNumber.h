//
//  PhoneNumber.h
//  Hotel Booker
//
//  Created by Matt Graham on 10/06/2015.
//  Copyright (c) 2015 Travelport. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <RestKit/RestKit.h>

@interface PhoneNumber : NSObject

@property (nonatomic) NSString *type;
@property (nonatomic) NSString *number;

+ (RKObjectMapping *)rkMapping;

@end
