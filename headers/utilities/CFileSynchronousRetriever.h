#pragma once
#include "../windissect_forwards.h"

// Reconstructed from cryptnet.dll by Windissect. 3 member(s).
class CFileSynchronousRetriever {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileSynchronousRetriever@@UEAAXXZ
    virtual void AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileSynchronousRetriever@@UEAAXXZ
    virtual void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveObjectByUrl@CFileSynchronousRetriever@@UEAAHPEBGPEBDKKPEAU_CRYPT_BLOB_ARRAY@@PEAP6AX12PEAX@ZPEAPEAX3PEAU_CRYPT_CREDENTIALS@@PEAU_CRYPT_RETRIEVE_AUX_INFO@@@Z
    virtual int RetrieveObjectByUrl(unsigned short const *, char const *, unsigned long, unsigned long, _CRYPT_BLOB_ARRAY *, void ( * *)(char const *, _CRYPT_BLOB_ARRAY *, void *), void * *, void *, _CRYPT_CREDENTIALS *, _CRYPT_RETRIEVE_AUX_INFO *);
};
