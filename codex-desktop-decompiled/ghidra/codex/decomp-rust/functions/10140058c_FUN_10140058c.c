
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10140058c(long *param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  char cVar13;
  char cVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  bVar2 = *param_2;
  if (0xd < bVar2) {
    if (bVar2 == 0xe) {
      uStack_48 = *(undefined8 *)(param_2 + 0x10);
      uStack_40 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      if (bVar2 != 0xf) goto LAB_1014006f4;
      uStack_48 = *(undefined8 *)(param_2 + 8);
      uStack_40 = *(undefined8 *)(param_2 + 0x10);
    }
    auStack_50[0] = 6;
    lVar12 = func_0x000108a4a50c(auStack_50,&uStack_31,&UNK_10b20a6a0);
LAB_1014006a0:
    lVar4 = -0x7fffffffffffffff;
    param_1[1] = lVar12;
LAB_1014006a8:
    *param_1 = lVar4;
    return;
  }
  if (bVar2 == 0xc) {
    plVar10 = *(long **)(param_2 + 0x10);
    plVar8 = *(long **)(param_2 + 0x18);
    if (plVar8 == (long *)0x0) goto LAB_1014005c8;
LAB_1014005f0:
    if (plVar8 == (long *)0x1e) {
      if (((*plVar10 == 0x6a5f656472657324 && plVar10[1] == 0x6972703a3a6e6f73) &&
          plVar10[2] == 0x61523a3a65746176) && *(long *)((long)plVar10 + 0x16) == 0x65756c6156776152
         ) {
        lVar4 = -0x8000000000000000;
        goto LAB_1014006a8;
      }
      plVar11 = (long *)_malloc(0x1e);
      if (plVar11 != (long *)0x0) {
        lVar4 = plVar10[1];
        lVar12 = *plVar10;
        uVar15 = *(undefined8 *)((long)plVar10 + 0xe);
        *(undefined8 *)((long)plVar11 + 0x16) = *(undefined8 *)((long)plVar10 + 0x16);
        *(undefined8 *)((long)plVar11 + 0xe) = uVar15;
        plVar11[1] = lVar4;
        *plVar11 = lVar12;
        goto LAB_1014006d0;
      }
LAB_101400718:
      auVar16 = func_0x0001087c9084(1,0x1e);
      lVar12 = *auVar16._8_8_;
      if (lVar12 == 0) {
        param_3 = (long *)&UNK_10b24d460;
        lVar4 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cd5b1c,0x2b);
LAB_1014007bc:
        auVar16._8_8_ = plVar8;
        auVar16._0_8_ = param_1;
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (lVar4,&DAT_100c35d48);
        *(undefined1 *)(lVar4 + 0x48) = 1;
LAB_1014007e0:
        plVar8 = auVar16._0_8_;
        cVar14 = *(char *)(lVar4 + 0x44);
        cVar13 = *(char *)(lVar4 + 0x45);
        cVar5 = cVar13;
        if (cVar14 == '\x01') {
          if (cVar13 == '\0') {
            FUN_10610bbb4(*param_3,param_3[1]);
            goto LAB_101400928;
          }
          cVar5 = cVar13 + -1;
        }
        *(char *)(lVar4 + 0x45) = cVar5;
        uVar6 = (uint)*(undefined8 *)(lVar12 + 0x30);
      }
      else {
        plVar10 = (long *)0x8000000000000005;
        lVar4 = (*
                ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                )();
        if (*(char *)(lVar4 + 0x48) == '\x01') goto LAB_1014007e0;
        param_1 = auVar16._0_8_;
        plVar8 = auVar16._8_8_;
        if (*(char *)(lVar4 + 0x48) != '\x02') goto LAB_1014007bc;
        cVar14 = '\0';
        cVar13 = '\0';
        uVar6 = (uint)*(undefined8 *)(lVar12 + 0x30);
      }
      plVar8 = auVar16._0_8_;
      if ((uVar6 >> 1 & 1) != 0) {
LAB_1014008f8:
        plVar7 = *(long **)(lVar12 + 0x38);
        *(undefined8 *)(lVar12 + 0x38) = 0x8000000000000005;
        plVar11 = (long *)0x8000000000000005;
        if (plVar7 != plVar10) {
          lStack_e8 = *(long *)(lVar12 + 0x48);
          lStack_f0 = *(long *)(lVar12 + 0x40);
          lStack_d8 = *(long *)(lVar12 + 0x58);
          lStack_e0 = *(long *)(lVar12 + 0x50);
          lStack_c8 = *(long *)(lVar12 + 0x68);
          lStack_d0 = *(long *)(lVar12 + 0x60);
          lStack_b8 = *(long *)(lVar12 + 0x78);
          lStack_c0 = *(long *)(lVar12 + 0x70);
          plVar11 = plVar7;
          if (plVar7 == (long *)((long)plVar10 + 1)) goto LAB_101400928;
        }
LAB_101400934:
        puVar9 = auVar16._8_8_;
        plVar10 = (long *)*puVar9;
        if (plVar10 != (long *)0x0) {
          lVar12 = *plVar10;
          *plVar10 = lVar12 + -1;
          LORelease();
          if (lVar12 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a6c7a360bc05152E(puVar9);
          }
        }
        *puVar9 = 0;
        plVar8[5] = lStack_d0;
        plVar8[4] = lStack_d8;
        plVar8[7] = lStack_c0;
        plVar8[6] = lStack_c8;
        plVar8[8] = lStack_b8;
        plVar8[1] = lStack_f0;
        *plVar8 = (long)plVar11;
        plVar8[3] = lStack_e0;
        plVar8[2] = lStack_e8;
        return;
      }
      plVar11 = (long *)0x8000000000000005;
      if ((uVar6 >> 2 & 1) != 0) goto LAB_101400934;
      if ((uVar6 & 1) == 0) {
LAB_101400870:
        auVar17 = (**(code **)*param_3)(param_3[1]);
        *(undefined1 (*) [16])(lVar12 + 0x20) = auVar17;
        LOAcquire();
        uVar3 = *(ulong *)(lVar12 + 0x30);
        *(ulong *)(lVar12 + 0x30) = uVar3 | 1;
        LORelease();
        if (((uint)uVar3 >> 1 & 1) != 0) goto LAB_1014008f8;
      }
      else if ((*(long *)(lVar12 + 0x28) != param_3[1]) || (*(long *)(lVar12 + 0x20) != *param_3)) {
        puVar1 = (ulong *)(lVar12 + 0x30);
        LOAcquire();
        uVar3 = *puVar1;
        *puVar1 = uVar3 & 0xfffffffffffffffe;
        LORelease();
        if (((uint)uVar3 >> 1 & 1) != 0) {
          LOAcquire();
          *puVar1 = *puVar1 | 1;
          LORelease();
          goto LAB_1014008f8;
        }
        (**(code **)(*(long *)(lVar12 + 0x20) + 0x18))(*(undefined8 *)(lVar12 + 0x28));
        goto LAB_101400870;
      }
      if (cVar14 != '\0') {
        if (*(char *)(lVar4 + 0x48) != '\x01') {
          if (*(char *)(lVar4 + 0x48) == '\x02') goto LAB_101400928;
          __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                    (lVar4,&DAT_1060edbcc);
          *(undefined1 *)(lVar4 + 0x48) = 1;
        }
        *(undefined1 *)(lVar4 + 0x44) = 1;
        *(char *)(lVar4 + 0x45) = cVar13;
      }
LAB_101400928:
      *plVar8 = (long)plVar10 + 1;
      return;
    }
    plVar11 = (long *)_malloc(plVar8);
    if (plVar11 == (long *)0x0) {
      func_0x0001087c9084(1,plVar8);
      goto LAB_101400718;
    }
  }
  else {
    if (bVar2 != 0xd) {
LAB_1014006f4:
      lVar12 = FUN_108855c40(param_2,&uStack_31,&UNK_10b20a6a0);
      goto LAB_1014006a0;
    }
    plVar10 = *(long **)(param_2 + 8);
    plVar8 = *(long **)(param_2 + 0x10);
    if (plVar8 != (long *)0x0) goto LAB_1014005f0;
LAB_1014005c8:
    plVar11 = (long *)0x1;
  }
  _memcpy(plVar11,plVar10,plVar8);
LAB_1014006d0:
  *param_1 = (long)plVar8;
  param_1[1] = (long)plVar11;
  param_1[2] = (long)plVar8;
  return;
}

