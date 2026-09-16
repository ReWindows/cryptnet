#pragma once
#include "../windissect_forwards.h"

// Reconstructed from cryptnet.dll by Windissect. 4 member(s).
class CObjectRetrievalManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CObjectRetrievalManager@@UEAAXXZ
    virtual void AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CObjectRetrievalManager@@UEAAXXZ
    virtual void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveObjectByUrl@CObjectRetrievalManager@@QEAAHPEBGPEBDKKPEAPEAXPEAXPEAU_CRYPT_CREDENTIALS@@3PEAU_CRYPT_RETRIEVE_AUX_INFO@@@Z
    int RetrieveObjectByUrl(unsigned short const *, char const *, unsigned long, unsigned long, void * *, void *, _CRYPT_CREDENTIALS *, void *, _CRYPT_RETRIEVE_AUX_INFO *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadProviders@CObjectRetrievalManager@@AEAAHPEBGPEBD@Z
    int LoadProviders(unsigned short const *, char const *);
};
