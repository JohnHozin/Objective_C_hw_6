//
//  Robot.h
//  Objective_C_hw_6
//
//  Created by умпет on 24.09.2023.
//  Copyright © 2023 Evgen. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Robot : NSObject<NSCoding, NSSecureCoding>
@property (nonatomic) NSInteger x;
@property (nonatomic) NSInteger y;
@property (nonatomic, strong) NSString* name;

-(instancetype) init:(NSString *) name x: (NSInteger) x y: (NSInteger) y;
-(void) encodeWithCoder:(NSCoder *) coder;
-(id) initWithCoder:(NSCoder *) coder;
-(NSString *) info;
@end

NS_ASSUME_NONNULL_END
