//! Evidence-labelled vftable metadata and raw slot access.
//! Slot calls remain the consumer's responsibility until a signature is unique.

use core::ffi::c_void;

#[derive(Clone, Copy, Debug)]
pub struct VTableInfo { pub name: &'static str, pub rva: u32, pub first_slot: usize, pub slot_count: usize, pub confidence: &'static str }

#[derive(Clone, Copy, Debug)]
pub struct VTableSlot { pub table_rva: u32, pub slot: u32, pub byte_offset: u32, pub target_rva: u32, pub target_id: Option<&'static str>, pub target_name: Option<&'static str>, pub ambiguous: bool, pub this_adjustment: Option<i32> }

pub static VTABLES: &[VTableInfo] = &[
    VTableInfo { name: "const CObjectRetrievalManager::`vftable'", rva: 0x2B000, first_slot: 0, slot_count: 2, confidence: "likely" },
    VTableInfo { name: "const CInetSynchronousRetriever::`vftable'", rva: 0x2B210, first_slot: 2, slot_count: 3, confidence: "likely" },
    VTableInfo { name: "const CLdapSynchronousRetriever::`vftable'", rva: 0x2B228, first_slot: 5, slot_count: 3, confidence: "likely" },
    VTableInfo { name: "const wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::`vftable'", rva: 0x2B2E0, first_slot: 8, slot_count: 5, confidence: "likely" },
    VTableInfo { name: "const wistd::__function::__base<bool __cdecl (void *, uint64_t, void *, uint64_t, unsigned int)>::`vftable'", rva: 0x2B308, first_slot: 13, slot_count: 5, confidence: "likely" },
    VTableInfo { name: "const CFileSynchronousRetriever::`vftable'", rva: 0x2B330, first_slot: 18, slot_count: 3, confidence: "likely" },
];

pub static VTABLE_SLOTS: &[VTableSlot] = &[
    VTableSlot { table_rva: 0x2B000, slot: 0, byte_offset: 0, target_rva: 0x27610, target_id: Some("?AddRef@CObjectRetrievalManager@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl CObjectRetrievalManager::AddRef(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B000, slot: 1, byte_offset: 8, target_rva: 0x1A180, target_id: Some("?Release@CObjectRetrievalManager@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl CObjectRetrievalManager::Release(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B210, slot: 0, byte_offset: 0, target_rva: 0x27610, target_id: Some("?AddRef@CInetSynchronousRetriever@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl CInetSynchronousRetriever::AddRef(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B210, slot: 1, byte_offset: 8, target_rva: 0x1A110, target_id: Some("?Release@CInetSynchronousRetriever@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl CInetSynchronousRetriever::Release(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B210, slot: 2, byte_offset: 16, target_rva: 0x8270, target_id: Some("?RetrieveObjectByUrl@CInetSynchronousRetriever@@UEAAHPEBGPEBDKKPEAU_CRYPT_BLOB_ARRAY@@PEAP6AX12PEAX@ZPEAPEAX3PEAU_CRYPT_CREDENTIALS@@PEAU_CRYPT_RETRIEVE_AUX_INFO@@@Z"), target_name: Some("public: virtual int __cdecl CInetSynchronousRetriever::RetrieveObjectByUrl(unsigned short const *, char const *, unsigned long, unsigned long, struct _CRYPT_BLOB_ARRAY *, void (__cdecl * *)(char const *, struct _CRYPT_BLOB_ARRAY *, void *), void * *, void *, struct _CRYPT_CREDENTIALS *, struct _CRYPT_RETRIEVE_AUX_INFO *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B228, slot: 0, byte_offset: 0, target_rva: 0x27610, target_id: Some("?AddRef@CLdapSynchronousRetriever@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl CLdapSynchronousRetriever::AddRef(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B228, slot: 1, byte_offset: 8, target_rva: 0x1C370, target_id: Some("?Release@CLdapSynchronousRetriever@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl CLdapSynchronousRetriever::Release(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B228, slot: 2, byte_offset: 16, target_rva: 0x1BE50, target_id: Some("?RetrieveObjectByUrl@CLdapSynchronousRetriever@@UEAAHPEBGPEBDKKPEAU_CRYPT_BLOB_ARRAY@@PEAP6AX12PEAX@ZPEAPEAX3PEAU_CRYPT_CREDENTIALS@@PEAU_CRYPT_RETRIEVE_AUX_INFO@@@Z"), target_name: Some("public: virtual int __cdecl CLdapSynchronousRetriever::RetrieveObjectByUrl(unsigned short const *, char const *, unsigned long, unsigned long, struct _CRYPT_BLOB_ARRAY *, void (__cdecl * *)(char const *, struct _CRYPT_BLOB_ARRAY *, void *), void * *, void *, struct _CRYPT_CREDENTIALS *, struct _CRYPT_RETRIEVE_AUX_INFO *)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B2E0, slot: 0, byte_offset: 0, target_rva: 0x22D50, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x2B2E0, slot: 1, byte_offset: 8, target_rva: 0x269E0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x2B2E0, slot: 2, byte_offset: 16, target_rva: 0x269E0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x2B2E0, slot: 3, byte_offset: 24, target_rva: 0x26AD0, target_id: Some("?destroy@?$__func@V<lambda_8db0ce862824541f40dfb767113f1e28>@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::destroy(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B2E0, slot: 4, byte_offset: 32, target_rva: 0x22CE0, target_id: Some("??R?$__func@V<lambda_8db0ce862824541f40dfb767113f1e28>@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z"), target_name: Some("public: virtual bool __cdecl wistd::__function::__func<class <lambda_8db0ce862824541f40dfb767113f1e28>, bool __cdecl (void *, uint64_t, class <lambda_8db0ce862824541f40dfb767113f1e28>, void *, unsigned int)>::operator()(void * &&, uint64_t &&, void * &&, uint64_t &&, unsigned int &&)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B308, slot: 0, byte_offset: 0, target_rva: 0x22D50, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x2B308, slot: 1, byte_offset: 8, target_rva: 0x1DDB0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x2B308, slot: 2, byte_offset: 16, target_rva: 0x1DDB0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x2B308, slot: 3, byte_offset: 24, target_rva: 0x1DDB0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x2B308, slot: 4, byte_offset: 32, target_rva: 0x1DDB0, target_id: None, target_name: None, ambiguous: true, this_adjustment: None },
    VTableSlot { table_rva: 0x2B330, slot: 0, byte_offset: 0, target_rva: 0x27610, target_id: Some("?AddRef@CFileSynchronousRetriever@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl CFileSynchronousRetriever::AddRef(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B330, slot: 1, byte_offset: 8, target_rva: 0x28750, target_id: Some("?Release@CFileSynchronousRetriever@@UEAAXXZ"), target_name: Some("public: virtual void __cdecl CFileSynchronousRetriever::Release(void)"), ambiguous: false, this_adjustment: None },
    VTableSlot { table_rva: 0x2B330, slot: 2, byte_offset: 16, target_rva: 0x1C3B0, target_id: Some("?RetrieveObjectByUrl@CFileSynchronousRetriever@@UEAAHPEBGPEBDKKPEAU_CRYPT_BLOB_ARRAY@@PEAP6AX12PEAX@ZPEAPEAX3PEAU_CRYPT_CREDENTIALS@@PEAU_CRYPT_RETRIEVE_AUX_INFO@@@Z"), target_name: Some("public: virtual int __cdecl CFileSynchronousRetriever::RetrieveObjectByUrl(unsigned short const *, char const *, unsigned long, unsigned long, struct _CRYPT_BLOB_ARRAY *, void (__cdecl * *)(char const *, struct _CRYPT_BLOB_ARRAY *, void *), void * *, void *, struct _CRYPT_CREDENTIALS *, struct _CRYPT_RETRIEVE_AUX_INFO *)"), ambiguous: false, this_adjustment: None },
];

/// Reads a raw function pointer from an object's primary vftable.
///
/// # Safety
/// `object` must point to a live object with a readable primary vftable,
/// and `slot` must be valid for that concrete object. This function does
/// not invent or transmute a callable signature.
pub unsafe fn raw_object_slot(object: *const c_void, slot: usize) -> Option<*const ()> {
if object.is_null() { return None; }
let table = unsafe { *(object.cast::<*const *const ()>()) };
if table.is_null() { return None; }
let target = unsafe { *table.add(slot) };
(!target.is_null()).then_some(target)
}
