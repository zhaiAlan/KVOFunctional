//
//  NSObject+XZKVO.h
//  XZCustomKVO
//
//  Created by Alan on 4/29/20.
//  Copyright © 2020 zhaixingzhi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XZKVOInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (XZKVO)
//添加观察者
- (void)xz_addObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(NSKeyValueObservingOptions)options context:(nullable void *)context handle:(XZKVOBlock)handle;

//移除观察者
- (void)xz_removeObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath;
@end

NS_ASSUME_NONNULL_END
