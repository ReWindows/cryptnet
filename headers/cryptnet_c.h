// Flat C exports observed in cryptnet.dll. Unknown ABIs are intentionally not declared.
// Validated dialects: ISO C17/C23/C26 draft and Windissect C20 (C ABI under C++20).
#pragma once
#ifndef CRYPTNET_C_H
#define CRYPTNET_C_H
#if defined(__cplusplus)
#  if __cplusplus < 202002L
#    define WINDISSECT_C20_PROFILE 0
#  else
#    define WINDISSECT_C20_PROFILE 1
#  endif
extern "C" {
#else
#  if defined(__STDC_VERSION__) && __STDC_VERSION__ < 201710L
#    error "Windissect C output requires C17 or newer"
#  endif
#  define WINDISSECT_C20_PROFILE 0
#  define WINDISSECT_C_STANDARD __STDC_VERSION__
#endif

// Export: CryptRetrieveObjectByUrlW (ABI unverified)
// Export: I_CryptNetEnumUrlCacheEntry (ABI unverified)
// Export: I_CryptNetGetConnectivity (ABI unverified)
// Export: I_CryptNetSetUrlCachePreFetchInfo (ABI unverified)
// Export: I_CryptNetSetUrlCacheFlushInfo (ABI unverified)
// Export: I_CryptConvertIriToAsciiOrUnicodeWithFlags (ABI unverified)
// Export: CryptGetTimeValidObject (ABI unverified)
// Export: CryptGetObjectUrl (ABI unverified)
// Export: CertDllVerifyRevocation (ABI unverified)
// Export: I_CryptNetAutoFlush (ABI unverified)
// Export: DllRegisterServer (ABI unverified)
// Export: DllUnregisterServer (ABI unverified)
// Export: CertDllVerifyCTLUsage (ABI unverified)
// Export: I_CryptConvertIriToAsciiOrUnicode (ABI unverified)
// Export: I_CryptNetGetHostNameFromUrl (ABI unverified)
// Export: LdapProvOpenStore (ABI unverified)
// Export: I_CryptNetGetUserDsStoreUrl (ABI unverified)
// Export: CryptCancelAsyncRetrieval (ABI unverified)
// Export: CryptRetrieveObjectByUrlA (ABI unverified)
// Export: CryptFlushTimeValidObject (ABI unverified)
// Export: CryptInstallCancelRetrieval (ABI unverified)
// Export: CryptUninstallCancelRetrieval (ABI unverified)
// Export: I_CryptNetFlushOfflineUrl (ABI unverified)

#ifdef __cplusplus
} // extern "C"
#endif
#endif // CRYPTNET_C_H
