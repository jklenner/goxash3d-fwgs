// exports_shim.c
// Build in the same package directory that has `import "C"`.
// We define weak, used stubs so they are exported and not GC’d.

#ifdef __cplusplus
extern "C" {
#endif

__attribute__((weak, used))
void SV_SaveGameComment(const char *comment) {
    (void)comment;
}

__attribute__((weak, used))
int Server_GetPhysicsInterface(int version, void *pphysiface, void *server) {
    (void)version; (void)pphysiface; (void)server;
    return 0; // “not provided”
}

__attribute__((weak, used))
int Server_GetBlendingInterface(int version, void *ppblendiface, void *server) {
    (void)version; (void)ppblendiface; (void)server;
    return 0; // “not provided”
}

/* Reference them so the linker definitely keeps them even with GC/LTO */
__attribute__((used))
static void *xash_export_keep[] = {
    (void*)&SV_SaveGameComment,
    (void*)&Server_GetPhysicsInterface,
    (void*)&Server_GetBlendingInterface,
};

#ifdef __cplusplus
}
#endif

