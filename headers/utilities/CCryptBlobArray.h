#pragma once
#include "../windissect_forwards.h"

// Reconstructed from cryptnet.dll by Windissect. 5 member(s).
class CCryptBlobArray {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBlob@CCryptBlobArray@@QEAAHKPEAEH@Z
    int AddBlob(unsigned long, unsigned char *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCryptBlobArray@@QEAA@KKAEAH@Z
    CCryptBlobArray(unsigned long, unsigned long, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeArray@CCryptBlobArray@@QEAAXH@Z
    void FreeArray(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrayInSingleBufferEncodedForm@CCryptBlobArray@@QEAAHPEAPEAU_CRYPT_BLOB_ARRAY@@PEAK@Z
    int GetArrayInSingleBufferEncodedForm(_CRYPT_BLOB_ARRAY * *, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GrowArray@CCryptBlobArray@@AEAAHXZ
    int GrowArray();
};
