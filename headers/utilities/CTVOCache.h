#pragma once
#include "../windissect_forwards.h"

// Reconstructed from cryptnet.dll by Windissect. 4 member(s).
class CTVOCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindCacheEntry@CTVOCache@@QEAAPEAU_TVO_CACHE_ENTRY@@QEAEPEBDPEAX@Z
    _TVO_CACHE_ENTRY * FindCacheEntry(unsigned char * const, char const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllCacheEntries@CTVOCache@@QEAAXXZ
    void RemoveAllCacheEntries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCacheEntry@CTVOCache@@QEAAXPEAU_TVO_CACHE_ENTRY@@H@Z
    void RemoveCacheEntry(_TVO_CACHE_ENTRY *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTVOCache@@QEAA@XZ
    ~CTVOCache();
};
