#pragma once
#include "../windissect_forwards.h"

// Reconstructed from cryptnet.dll by Windissect. 11 member(s).
class CTVOAgent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoFlush@CTVOAgent@@QEAAHPEAKH@Z
    int AutoFlush(unsigned long *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteActiveRetrieval@CTVOAgent@@QEAAXPEAU_TVO_ACTIVE_ENTRY@@KHPEAX@Z
    void CompleteActiveRetrieval(_TVO_ACTIVE_ENTRY *, unsigned long, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushTimeValidObject@CTVOAgent@@QEAAHPEBDPEAX0PEBU_CERT_CONTEXT@@K1@Z
    int FlushTimeValidObject(char const *, void *, char const *, _CERT_CONTEXT const *, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushTimeValidOriginIdentifier@CTVOAgent@@QEAAHPEAXPEBDPEBU_CERT_CONTEXT@@QEAE@Z
    int FlushTimeValidOriginIdentifier(void *, char const *, _CERT_CONTEXT const *, unsigned char * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushTimeValidUrlCacheEntry@CTVOAgent@@QEAAHPEAXPEBDPEBU_CERT_CONTEXT@@PEBG@Z
    int FlushTimeValidUrlCacheEntry(void *, char const *, _CERT_CONTEXT const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeValidObject@CTVOAgent@@QEAAHPEBDPEAX0PEBU_CERT_CONTEXT@@PEAU_FILETIME@@KKPEAPEAXPEAU_CRYPT_CREDENTIALS@@PEAU_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO@@@Z
    int GetTimeValidObject(char const *, void *, char const *, _CERT_CONTEXT const *, _FILETIME *, unsigned long, unsigned long, void * *, _CRYPT_CREDENTIALS *, _CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeValidObjectByUrl@CTVOAgent@@QEAAHKPEAU_CRYPT_URL_ARRAY@@KPEBDPEBU_CERT_CONTEXT@@PEAXQEAEPEAU_FILETIME@@KKPEAPEAXPEAU_CRYPT_CREDENTIALS@@PEAHPEAU_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO@@PEAU_TVO_ACTIVE_ENTRY@@@Z
    int GetTimeValidObjectByUrl(unsigned long, _CRYPT_URL_ARRAY *, unsigned long, char const *, _CERT_CONTEXT const *, void *, unsigned char * const, _FILETIME *, unsigned long, unsigned long, void * *, _CRYPT_CREDENTIALS *, int *, _CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO *, _TVO_ACTIVE_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreFetchCrl@CTVOAgent@@QEAAXPEAU_CRL_PRE_FETCH_ENTRY@@@Z
    void PreFetchCrl(_CRL_PRE_FETCH_ENTRY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActiveRetrieval@CTVOAgent@@QEAAJPEBD0PEAXPEAU_FILETIME@@KPEAPEAXPEAU_CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO@@QEAE5PEAPEAU_TVO_ACTIVE_ENTRY@@@Z
    long StartActiveRetrieval(char const *, char const *, void *, _FILETIME *, unsigned long, void * *, _CRYPT_GET_TIME_VALID_OBJECT_EXTRA_INFO *, unsigned char * const, unsigned char * const, _TVO_ACTIVE_ENTRY * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTVOAgent@@QEAA@XZ
    ~CTVOAgent();
};
