//
//  XZKVOInfo.m
//  XZCustomKVO
//
//  Created by Alan on 4/29/20.
//  Copyright © 2020 zhaixingzhi. All rights reserved.
//

#import "XZKVOInfo.h"

@implementation XZKVOInfo
- (instancetype)initWitObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(XZKeyValueObservingOptions)options andBlock:(XZKVOBlock)block
{
    self = [super init];
    if (self) {
        self.observer = observer;
        self.keyPath  = keyPath;
        self.options  = options;
        self.kvoBlock = block;
    }
    return self;
}

@end
