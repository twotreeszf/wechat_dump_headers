//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol TRAE3AProcessorDelegate;

@interface TRAE3AProcessor : NSObject
{
    struct unique_ptr<txliteav::audio::AudioFrameRingBuffer, std::__1::default_delete<txliteav::audio::AudioFrameRingBuffer>> _captureBufferFor20MSLength;
    struct unique_ptr<txliteav::audio::TRAEAECANSProcessorInterface, std::__1::default_delete<txliteav::audio::TRAEAECANSProcessorInterface>> _AECANSProcessor;
    struct unique_ptr<txliteav::audio::SilkResampler, std::__1::default_delete<txliteav::audio::SilkResampler>> _resampler;
    struct AudioFrame _resamplerHelpBuffer;
    struct unique_ptr<txliteav::audio::TRAEAGCProcessorInterface, std::__1::default_delete<txliteav::audio::TRAEAGCProcessorInterface>> _AGCProcessor;
    struct unique_ptr<txliteav::audio::AudioFrameRingBuffer, std::__1::default_delete<txliteav::audio::AudioFrameRingBuffer>> _playBufferFor20MSLength;
    _Bool _isStarted;
    id <TRAE3AProcessorDelegate> _processedDataDelegate;
    NSOperationQueue *_operationQueue;
    struct TRAE3AStrategyResult _Trae3AStrategy;
    struct DataBasicDescription _inFrameDecription;
    struct DataBasicDescription _outFrameDecription;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property struct TRAE3AStrategyResult Trae3AStrategy; // @synthesize Trae3AStrategy=_Trae3AStrategy;
@property(nonatomic) struct DataBasicDescription outFrameDecription; // @synthesize outFrameDecription=_outFrameDecription;
@property(nonatomic) struct DataBasicDescription inFrameDecription; // @synthesize inFrameDecription=_inFrameDecription;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <TRAE3AProcessorDelegate> processedDataDelegate; // @synthesize processedDataDelegate=_processedDataDelegate;
- (_Bool)needAGC;
- (_Bool)needANS;
- (_Bool)needAEC;
- (_Bool)need3A;
- (_Bool)needAECOrANS;
- (void)sendPostprocessedData:(struct AudioFrame *)arg1;
- (int)getProcesseLengthBytes:(const struct AudioFrame *)arg1;
- (void)reinitialize;
- (void)handleInFrameDecriptionChanged:(const struct DataBasicDescription *)arg1;
- (void)AGCProcess:(struct AudioFrame *)arg1;
- (struct AudioFrame *)AECANSProcess:(struct AudioFrame *)arg1;
- (void)createResamplerIfNeeded:(const struct AudioFrame *)arg1;
- (struct AudioFrame *)resample:(struct AudioFrame *)arg1;
- (_Bool)needResample:(const struct AudioFrame *)arg1;
- (_Bool)hasValidFixedLength:(struct AudioFrame *)arg1;
- (void)processFixedLengthFrame:(struct AudioFrame *)arg1;
- (void)updateAECANSProcessor;
- (void)update3AProcessor;
- (void)update3AStrategy;
- (void)receivePlayedData:(const struct AudioFrame *)arg1;
- (void)processCaptureData:(struct AudioFrame *)arg1;
- (void)reset;
- (void)stop;
- (void)start:(const struct DataBasicDescription *)arg1;
- (void)asyncRun:(CDUnknownBlockType)arg1;
- (id)init;

@end

