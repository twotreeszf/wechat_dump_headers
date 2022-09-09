//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayThirdInfo : NSObject
{
    int _m_templateID;
    int _m_sceneID;
    NSString *_m_iconUrl;
    NSString *_m_miniIconUrl;
    NSString *_m_receiverTitle;
    NSString *_m_receiverDes;
    NSString *_m_senderTitle;
    NSString *_m_senderDes;
    NSString *_senderurl;
    NSString *_receiverurl;
    NSString *_sendernativeurl;
    NSString *_receivernativeurl;
    NSString *_titlecolor;
    NSString *_senderscenetext;
    NSString *_receiverscenetext;
    NSString *_scenetextcolor;
    NSString *_descolor;
    NSString *_paymsgid;
    NSString *_senderbackgroundurl;
    NSString *_receiverbackgroundurl;
    NSString *_senderbackgroundname;
    NSString *_receiverbackgroundname;
}

+ (id)getTextFrom:(struct XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *receiverbackgroundname; // @synthesize receiverbackgroundname=_receiverbackgroundname;
@property(retain, nonatomic) NSString *senderbackgroundname; // @synthesize senderbackgroundname=_senderbackgroundname;
@property(retain, nonatomic) NSString *receiverbackgroundurl; // @synthesize receiverbackgroundurl=_receiverbackgroundurl;
@property(retain, nonatomic) NSString *senderbackgroundurl; // @synthesize senderbackgroundurl=_senderbackgroundurl;
@property(retain, nonatomic) NSString *paymsgid; // @synthesize paymsgid=_paymsgid;
@property(retain, nonatomic) NSString *descolor; // @synthesize descolor=_descolor;
@property(retain, nonatomic) NSString *scenetextcolor; // @synthesize scenetextcolor=_scenetextcolor;
@property(retain, nonatomic) NSString *receiverscenetext; // @synthesize receiverscenetext=_receiverscenetext;
@property(retain, nonatomic) NSString *senderscenetext; // @synthesize senderscenetext=_senderscenetext;
@property(retain, nonatomic) NSString *titlecolor; // @synthesize titlecolor=_titlecolor;
@property(copy, nonatomic) NSString *receivernativeurl; // @synthesize receivernativeurl=_receivernativeurl;
@property(copy, nonatomic) NSString *sendernativeurl; // @synthesize sendernativeurl=_sendernativeurl;
@property(copy, nonatomic) NSString *receiverurl; // @synthesize receiverurl=_receiverurl;
@property(copy, nonatomic) NSString *senderurl; // @synthesize senderurl=_senderurl;
@property(nonatomic) int m_sceneID; // @synthesize m_sceneID=_m_sceneID;
@property(retain, nonatomic) NSString *m_senderDes; // @synthesize m_senderDes=_m_senderDes;
@property(retain, nonatomic) NSString *m_senderTitle; // @synthesize m_senderTitle=_m_senderTitle;
@property(retain, nonatomic) NSString *m_receiverDes; // @synthesize m_receiverDes=_m_receiverDes;
@property(retain, nonatomic) NSString *m_receiverTitle; // @synthesize m_receiverTitle=_m_receiverTitle;
@property(retain, nonatomic) NSString *m_miniIconUrl; // @synthesize m_miniIconUrl=_m_miniIconUrl;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl=_m_iconUrl;
@property(nonatomic) int m_templateID; // @synthesize m_templateID=_m_templateID;
- (id)toXML;
- (void)fromNode:(struct XmlReaderNode_t *)arg1;

@end

