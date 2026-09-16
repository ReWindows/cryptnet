#pragma once
#include "../windissect_forwards.h"

// Reconstructed from cryptnet.dll by Windissect. 6 member(s).
class CLdapStore {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseStore@CLdapStore@@QEAAXK@Z
    void CloseStore(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenStore@CLdapStore@@QEAAHPEBDK_KKPEBXPEAXPEAU_CERT_STORE_PROV_INFO@@@Z
    int OpenStore(char const *, unsigned long, uint64_t, unsigned long, void const *, void *, _CERT_STORE_PROV_INFO *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillCacheStore@CLdapStore@@AEAAHH@Z
    int FillCacheStore(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCommit@CLdapStore@@AEAAHK@Z
    int InternalCommit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteCheckSetDirtyWithLock@CLdapStore@@AEAAHPEBDPEAXK@Z
    int WriteCheckSetDirtyWithLock(char const *, void *, unsigned long);
};
