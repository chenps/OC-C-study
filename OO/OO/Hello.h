//
//  Hello.h
//  OO
//
//  Created by 陈培升 on 16/3/14.
//  Copyright © 2016年 陈培升. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Hello : NSObject

-(void)sayHello;

+(void)staticSayHello;

-(void)sayHelloTo:(NSString *)name name2:(NSString *)name1;

@end
