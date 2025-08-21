// exports_shim.c  (compiled into the main xash binary)
#ifdef __cplusplus
extern "C" {
#endif

// Use varargs to avoid cdecl cleanup mismatches on i386.
__attribute__((visibility("default"), weak))
int SV_SaveGameComment(...) {
    return 0; // “not provided”
}

__attribute__((visibility("default"), weak))
int Server_GetPhysicsInterface(...) {
    return 0; // “no physics interface”
}

__attribute__((visibility("default"), weak))
int Server_GetBlendingInterface(...) {
    return 0; // “no blending interface”
}

#ifdef __cplusplus
}
#endif
