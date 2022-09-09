//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FLEXArgumentInputTextView.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface FLEXArgumentInputFontsPickerView : FLEXArgumentInputTextView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    NSMutableArray *_availableFonts;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *availableFonts; // @synthesize availableFonts=_availableFonts;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)createAvailableFonts;
- (id)createFontsPicker;
- (id)inputValue;
- (void)setInputValue:(id)arg1;
- (id)initWithArgumentTypeEncoding:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

