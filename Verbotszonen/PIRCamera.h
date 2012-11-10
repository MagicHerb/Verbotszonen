//
//  PIRCamera.h
//  Verbotszonen
//
//  Created by tomen on 10.11.12.
//  Copyright (c) 2012 Piratenpartei Österreichs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface PIRCamera : NSObject<MKAnnotation>

@property (nonatomic, strong) NSString *name;

-(id)initWithDict:(NSDictionary *)dict;
+(void)fetchAllOnComplete:(void(^)(NSArray *cameras))onComplete;

@end