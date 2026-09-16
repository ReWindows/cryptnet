#pragma once
#include "../windissect_forwards.h"

// Reconstructed from cryptnet.dll by Windissect. 6 member(s).
class CCryptUrlArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddUrl@CCryptUrlArray@@QEAAHPEAGH@Z
    int AddUrl(unsigned short *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocUrl@CCryptUrlArray@@SAPEAGK@Z
    static unsigned short * AllocUrl(unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCryptUrlArray@@QEAA@KKAEAH@Z
    CCryptUrlArray(unsigned long, unsigned long, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeArray@CCryptUrlArray@@QEAAXH@Z
    void FreeArray(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrayInSingleBufferEncodedForm@CCryptUrlArray@@QEAAHPEAPEAU_CRYPT_URL_ARRAY@@PEAK@Z
    int GetArrayInSingleBufferEncodedForm(_CRYPT_URL_ARRAY * *, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrowArray@CCryptUrlArray@@AEAAHXZ
    int GrowArray();
};
