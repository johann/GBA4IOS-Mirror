//
//  GBAROM_Private.h
//  GBA4iOS
//
//  Created by Riley Testut on 11/10/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import "GBAROM.h"

extern NSString *const GBAROMConflictedStateChanged;
extern NSString *const GBAROMSyncingDisabledStateChanged;

@interface GBAROM ()

@property (readwrite, assign, nonatomic) BOOL syncingDisabled;
@property (readwrite, assign, nonatomic) BOOL conflicted;

@end
