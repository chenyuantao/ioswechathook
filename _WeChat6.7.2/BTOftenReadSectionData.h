//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTBaseSectionData.h"

@class BTOftenReadBarViewCell, NSArray;

@interface BTOftenReadSectionData : BTBaseSectionData
{
    NSArray *_brandContactArr;
    BTOftenReadBarViewCell *_barCellView;
}

@property(nonatomic) __weak BTOftenReadBarViewCell *barCellView; // @synthesize barCellView=_barCellView;
@property(retain, nonatomic) NSArray *brandContactArr; // @synthesize brandContactArr=_brandContactArr;
- (void).cxx_destruct;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;

@end

