// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V3
    #ifndef UNIFFI_SHARED_HEADER_V3
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V3
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V3
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V3 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V3 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

void ffi_bdk_5a21_OfflineWallet_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull bdk_5a21_OfflineWallet_new(
      RustBuffer descriptor,RustBuffer network,RustBuffer database_config,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer bdk_5a21_OfflineWallet_get_new_address(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
uint64_t bdk_5a21_OfflineWallet_get_balance(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void bdk_5a21_OfflineWallet_sign(
      void*_Nonnull ptr,void*_Nonnull psbt,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer bdk_5a21_OfflineWallet_get_transactions(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void ffi_bdk_5a21_OnlineWallet_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull bdk_5a21_OnlineWallet_new(
      RustBuffer descriptor,RustBuffer change_descriptor,RustBuffer network,RustBuffer database_config,RustBuffer blockchain_config,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer bdk_5a21_OnlineWallet_get_new_address(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
uint64_t bdk_5a21_OnlineWallet_get_balance(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void bdk_5a21_OnlineWallet_sign(
      void*_Nonnull ptr,void*_Nonnull psbt,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer bdk_5a21_OnlineWallet_get_transactions(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer bdk_5a21_OnlineWallet_get_network(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void bdk_5a21_OnlineWallet_sync(
      void*_Nonnull ptr,RustBuffer max_address_param,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer bdk_5a21_OnlineWallet_broadcast(
      void*_Nonnull ptr,void*_Nonnull psbt,
    RustCallStatus *_Nonnull out_status
    );
void ffi_bdk_5a21_PartiallySignedBitcoinTransaction_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull bdk_5a21_PartiallySignedBitcoinTransaction_new(
      void*_Nonnull wallet,RustBuffer recipient,uint64_t amount,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer bdk_5a21_generate_extended_key(
      RustBuffer network,RustBuffer mnemonic_type,RustBuffer password,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer bdk_5a21_restore_extended_key(
      RustBuffer network,RustBuffer mnemonic,RustBuffer password,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_bdk_5a21_rustbuffer_alloc(
      int32_t size,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_bdk_5a21_rustbuffer_from_bytes(
      ForeignBytes bytes,
    RustCallStatus *_Nonnull out_status
    );
void ffi_bdk_5a21_rustbuffer_free(
      RustBuffer buf,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_bdk_5a21_rustbuffer_reserve(
      RustBuffer buf,int32_t additional,
    RustCallStatus *_Nonnull out_status
    );
