//
//  GTList.h
//  GTKit
//
//  Created   on 12-11-28.
// Tencent is pleased to support the open source community by making
// Tencent GT (Version 2.4 and subsequent versions) available.
//
// Notwithstanding anything to the contrary herein, any previous version
// of Tencent GT shall not be subject to the license hereunder.
// All right, title, and interest, including all intellectual property rights,
// in and to the previous version of Tencent GT (including any and all copies thereof)
// shall be owned and retained by Tencent and subject to the license under the
// Tencent GT End User License Agreement (http://gt.qq.com/wp-content/EULA_EN.html).
//
// Copyright (C) 2015 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the MIT License (the "License"); you may not use this file
// except in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
//
//
#ifndef GT_DEBUG_DISABLE

#import <Foundation/Foundation.h>
#import "GTDebugDef.h"


@interface GTList : NSObject <NSCopying>
{
    NSMutableArray      * _keys;
	NSMutableDictionary * _objs;
}

@property (nonatomic, retain) NSMutableArray      * keys;
@property (nonatomic, retain) NSMutableDictionary *	objs;

- (void)setObject:(id)object forKey:(NSString *)key;
- (id)objectForKey:(NSString *)key;
- (void)removeObjectForKey:(NSString *)key;

- (void)insertFrontForKey:(NSString *)key2 atKey:(NSString *)key1;
- (void)insertBackForKey:(NSString *)key2 atKey:(NSString *)key1;
- (void)insertTailForKey:(NSString *)key;

- (void)deleteAll;

@end
#endif
