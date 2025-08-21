#if defined(__i386__) || defined(__i386) || defined(i386)
extern void SV_SaveGameComment(void);
extern void Server_GetPhysicsInterface(void);
extern void Server_GetBlendingInterface(void);

// Make sure the linker keeps these objects and exports the symbols
__attribute__((used, visibility("default")))
static void *xash_export_keep[] = {
    (void*)SV_SaveGameComment,
    (void*)Server_GetPhysicsInterface,
    (void*)Server_GetBlendingInterface,
};
#endif
