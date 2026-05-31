
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN10codex_core10connectors33read_cached_accessible_connectors17h055d66996cd3a601E
               (long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x23;
  undefined1 auVar6 [12];
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  if (lRam000000010b629890 == 0) {
    if (lRam000000010b629898 == 0) goto LAB_102cd7f58;
LAB_102cd7ce4:
    iVar2 = _pthread_mutex_lock();
    if (iVar2 != 0) goto LAB_102cd7f6c;
LAB_102cd7cec:
    unaff_x23 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) != 0) goto LAB_102cd7f70;
    uVar3 = 0;
  }
  else {
    uStack_68 = 0x10b629890;
    puStack_80 = &uStack_68;
    __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
              (0x10b629890,1,&puStack_80,&UNK_10b2c0940,&UNK_10b2c0900);
    if (lRam000000010b629898 != 0) goto LAB_102cd7ce4;
LAB_102cd7f58:
    FUN_10893b764(0x10b629898);
    iVar2 = _pthread_mutex_lock();
    if (iVar2 == 0) goto LAB_102cd7cec;
LAB_102cd7f6c:
    FUN_108a81ad4();
LAB_102cd7f70:
    uVar3 = func_0x000108a82c0c();
    uVar3 = uVar3 ^ 1;
  }
  auVar6 = func_0x000106032954(8);
  lVar1 = lRam000000010b629910;
  lVar4 = auVar6._0_8_;
  if (lRam000000010b6298a8 != -0x8000000000000000) {
    if (lVar4 == lRam000000010b629910) {
      if (auVar6._8_4_ < uRam000000010b629918) {
LAB_102cd7d58:
        if (((cRam000000010b6298f0 == *(char *)(param_2 + 0x48)) &&
            (lRam000000010b6298b8 == *(long *)(param_2 + 0x10))) &&
           (iVar2 = _memcmp(uRam000000010b6298b0,*(undefined8 *)(param_2 + 8)), iVar2 == 0)) {
          if (lRam000000010b6298c0 == -0x8000000000000000) {
            if (*(long *)(param_2 + 0x18) == -0x8000000000000000) {
LAB_102cd7e48:
              if ((lRam000000010b6298d8 == -0x8000000000000000) ||
                 (*(long *)(param_2 + 0x30) == -0x8000000000000000)) {
                if ((lRam000000010b6298d8 == -0x8000000000000000) &&
                   (*(long *)(param_2 + 0x30) == -0x8000000000000000)) goto LAB_102cd7ef4;
              }
              else if ((lRam000000010b6298e8 == *(long *)(param_2 + 0x40)) &&
                      (iVar2 = _memcmp(uRam000000010b6298e0,*(undefined8 *)(param_2 + 0x38)),
                      iVar2 == 0)) {
LAB_102cd7ef4:
                func_0x00010373e75c(&puStack_80,uRam000000010b629900,uRam000000010b629908);
                param_1[1] = lStack_78;
                *param_1 = (long)puStack_80;
                param_1[2] = lStack_70;
                goto joined_r0x000102cd7dec;
              }
            }
          }
          else if (((*(long *)(param_2 + 0x18) != -0x8000000000000000) &&
                   (lRam000000010b6298d0 == *(long *)(param_2 + 0x28))) &&
                  (iVar2 = _memcmp(uRam000000010b6298c8,*(undefined8 *)(param_2 + 0x20)), iVar2 == 0
                  )) goto LAB_102cd7e48;
        }
        if (lVar4 != lVar1) {
          if (lVar4 < lVar1) goto LAB_102cd7de8;
          goto LAB_102cd7dd0;
        }
      }
      if (auVar6._8_4_ < uRam000000010b629918) goto LAB_102cd7de8;
    }
    else if (lVar4 < lRam000000010b629910) goto LAB_102cd7d58;
LAB_102cd7dd0:
    func_0x0001033f5738(0x10b6298a8);
    lRam000000010b6298a8 = -0x8000000000000000;
  }
LAB_102cd7de8:
  *param_1 = -0x8000000000000000;
joined_r0x000102cd7dec:
  if ((((uVar3 & 1) == 0) && ((*unaff_x23 & 0x7fffffffffffffff) != 0)) &&
     (uVar5 = func_0x000108a82c0c(), (uVar5 & 1) == 0)) {
    uRam000000010b6298a0 = 1;
  }
  _pthread_mutex_unlock(lRam000000010b629898);
  return;
}

