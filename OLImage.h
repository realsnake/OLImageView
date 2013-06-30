//
//  OLImage.h
//  MMT
//
//  Created by Diego Torres on 9/1/12.
//  Copyright (c) 2012 Onda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OLImage : UIImage

@property (nonatomic, readonly) NSTimeInterval *frameDurations;
@property (nonatomic, readonly) NSTimeInterval totalDuration;
@property (nonatomic, readonly) NSUInteger loopCount;

@end


@interface OLImage (IncrementalData)

+ (instancetype)imageWithIncrementalData:(NSData *)data;
- (void)updateWithData:(NSData *)data;
- (void)updateWithData:(NSData *)data final:(BOOL)finalize;

@property (nonatomic, readonly, getter = isPartial) BOOL partial;

@end