//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCDBCorruptReport : NSObject
{
    _Bool m_hasDirectReport;
    unsigned int m_corruptNum;
}

@property _Bool m_hasDirectReport; // @synthesize m_hasDirectReport;
@property unsigned int m_corruptNum; // @synthesize m_corruptNum;
- (void)reportCorruptOnMainThread:(id)arg1;
- (void)ClearCorruptNumWithDBID:(unsigned int)arg1;
- (void)DirectReportCorruptWithDBID:(unsigned int)arg1 dbPath:(id)arg2 errorCode:(unsigned int)arg3 important:(_Bool)arg4;
- (void)RecordCorruptWithDBID:(unsigned int)arg1 dbPath:(id)arg2 errorCode:(unsigned int)arg3 important:(_Bool)arg4;

@end
