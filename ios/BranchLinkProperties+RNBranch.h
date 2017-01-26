//
//  BranchLinkProperties+RNBranch.h
//  RNBranch
//
//  Created by Jimmy Dee on 1/26/17.
//  Copyright © 2017 Dispatcher. All rights reserved.
//

#import <Branch/Branch.h>

@class RNBranchProperty;

@interface BranchLinkProperties(RNBranch)

- (instancetype)initWithMap:(NSDictionary *)map;

+ (NSDictionary<NSString *, RNBranchProperty *> *) supportedProperties;
@end