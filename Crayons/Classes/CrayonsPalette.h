//
//  CrayonsPalette.h
//  Crayons
//
//  Created by Fabio on 10/11/2015.
//  Copyright © 2015 orange in a day. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IDEFoundation.h"

@interface CrayonsPalette : NSObject

@property (nonatomic, readonly) NSMutableDictionary<NSString *, id> *colors;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *objcClassName;
@property (nonatomic, readonly) IDEIndexClassSymbol *classSymbol;
@property (assign, getter=isValid) BOOL valid;

+ (instancetype)paletteWithClassSymbol:(IDEIndexClassSymbol *)classSymbol;
- (void)invalidate;

@end
