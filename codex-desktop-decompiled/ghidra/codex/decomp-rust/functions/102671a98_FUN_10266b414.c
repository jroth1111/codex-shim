
/* WARNING: Possible PIC construction at 0x00010266a654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010266a77c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010266a7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102671d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102671dc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102671d20) */
/* WARNING: Removing unreachable block (ram,0x000102671d2c) */
/* WARNING: Removing unreachable block (ram,0x00010266a800) */
/* WARNING: Removing unreachable block (ram,0x00010266a80c) */
/* WARNING: Removing unreachable block (ram,0x00010266a780) */
/* WARNING: Removing unreachable block (ram,0x00010266a7c0) */
/* WARNING: Removing unreachable block (ram,0x00010266a7d4) */
/* WARNING: Removing unreachable block (ram,0x00010266a810) */
/* WARNING: Removing unreachable block (ram,0x00010266a7e4) */
/* WARNING: Removing unreachable block (ram,0x00010266a788) */
/* WARNING: Removing unreachable block (ram,0x00010266a658) */
/* WARNING: Removing unreachable block (ram,0x00010266a69c) */
/* WARNING: Removing unreachable block (ram,0x00010266a6b8) */
/* WARNING: Removing unreachable block (ram,0x00010266a664) */
/* WARNING: Removing unreachable block (ram,0x00010266a674) */
/* WARNING: Removing unreachable block (ram,0x00010266a610) */
/* WARNING: Removing unreachable block (ram,0x000102671dc8) */
/* WARNING: Removing unreachable block (ram,0x000102671d38) */
/* WARNING: Removing unreachable block (ram,0x000102671ddc) */
/* WARNING: Removing unreachable block (ram,0x000102671d4c) */
/* WARNING: Removing unreachable block (ram,0x000102671e0c) */
/* WARNING: Removing unreachable block (ram,0x000102671d68) */
/* WARNING: Removing unreachable block (ram,0x000102671e3c) */
/* WARNING: Removing unreachable block (ram,0x000102671d90) */
/* WARNING: Removing unreachable block (ram,0x000102671e58) */
/* WARNING: Removing unreachable block (ram,0x000102671dac) */
/* WARNING: Removing unreachable block (ram,0x000102671dd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10266b414(long *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  long *plVar8;
  long *extraout_x1;
  ulong *puVar9;
  ulong *extraout_x1_00;
  long lVar10;
  long extraout_x8;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  long *unaff_x19;
  long *unaff_x20;
  ulong *unaff_x21;
  ulong uVar14;
  ulong *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 uVar15;
  undefined8 unaff_x30;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  FUN_1026bbe6c();
  if ((char)*param_1 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d330d4,0x28,&UNK_10b283170);
    plVar8 = extraout_x1;
    lVar10 = extraout_x8;
  }
  else {
    plVar8 = (long *)param_1[1];
    param_1 = (long *)*plVar8;
    lVar10 = param_1[2];
    if (*param_1 != lVar10) goto LAB_10266b454;
  }
  FUN_1088e879c(param_1,lVar10,1,1,1);
  lVar10 = param_1[2];
LAB_10266b454:
  *(undefined1 *)(param_1[1] + lVar10) = 0x3a;
  param_1[2] = lVar10 + 1;
  if (*param_4 == 0x8000000000000005) {
    plVar8 = (long *)*plVar8;
    lVar10 = plVar8[2];
    if ((ulong)(*plVar8 - lVar10) < 4) {
      FUN_1088e879c(plVar8,lVar10,4,1,1);
      lVar10 = plVar8[2];
    }
    *(undefined4 *)(plVar8[1] + lVar10) = 0x6c6c756e;
    plVar8[2] = lVar10 + 4;
    return;
  }
SUB_102671a98:
  do {
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar13 = *param_4 ^ 0x8000000000000000;
    if (-1 < (long)*param_4) {
      uVar13 = 5;
    }
    if ((long)uVar13 < 3) {
      if (uVar13 == 0) {
        plVar8 = (long *)*plVar8;
      }
      else {
        if (uVar13 == 1) {
          plVar8 = (long *)*plVar8;
          if ((param_4[1] & 1) == 0) {
            lVar10 = plVar8[2];
            if ((ulong)(*plVar8 - lVar10) < 5) {
              FUN_1088e879c(plVar8,lVar10,5,1,1);
              lVar10 = plVar8[2];
            }
            lVar11 = plVar8[1];
            *(undefined4 *)(lVar11 + lVar10) = 0x736c6166;
            *(undefined1 *)((undefined4 *)(lVar11 + lVar10) + 1) = 0x65;
            plVar8[2] = lVar10 + 5;
            return;
          }
          lVar10 = plVar8[2];
          if ((ulong)(*plVar8 - lVar10) < 4) {
            FUN_1088e879c(plVar8,lVar10,4,1,1);
            lVar10 = plVar8[2];
          }
          lVar11 = plVar8[1];
          uVar12 = 0x65757274;
          goto LAB_102671b70;
        }
        plVar8 = (long *)*plVar8;
        if (param_4[1] == 0) {
          lVar10 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                             (param_4[2],(undefined1 *)((long)register0x00000008 + -0x88));
          uVar13 = 0x14 - lVar10;
          lVar11 = plVar8[2];
          if ((ulong)(*plVar8 - lVar11) < uVar13) {
            FUN_1088e879c(plVar8,lVar11,uVar13,1,1);
            lVar11 = plVar8[2];
          }
          _memcpy(plVar8[1] + lVar11,(undefined1 *)((long)register0x00000008 + lVar10 + -0x88),
                  uVar13);
          plVar8[2] = lVar11 + uVar13;
          return;
        }
        if (param_4[1] == 1) {
          uVar14 = param_4[2];
          uVar13 = -uVar14;
          if (-1 < (long)uVar14) {
            uVar13 = uVar14;
          }
          puVar4 = (undefined8 *)
                   __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                             (uVar13,(undefined1 *)((long)register0x00000008 + -0x88));
          if ((long)uVar14 < 0) {
            puVar4 = (undefined8 *)((long)puVar4 + -1);
            if ((undefined8 *)0x13 < puVar4) {
              uVar16 = 0x102672220;
              auVar19 = func_0x000108a07bdc(puVar4,0x14,&UNK_10b282890);
              puVar2 = (undefined1 *)((long)register0x00000008 + -0x90);
              do {
                puVar9 = auVar19._8_8_;
                puVar5 = auVar19._0_8_;
                *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
                *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
                *(ulong *)(puVar2 + -0x40) = unaff_x24;
                *(ulong *)(puVar2 + -0x38) = unaff_x23;
                *(ulong **)(puVar2 + -0x30) = unaff_x22;
                *(ulong *)(puVar2 + -0x28) = uVar14;
                *(undefined8 **)(puVar2 + -0x20) = puVar4;
                *(long **)(puVar2 + -0x18) = plVar8;
                *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
                *(undefined8 *)(puVar2 + -8) = uVar16;
                uVar13 = *puVar9 ^ 0x8000000000000000;
                if (-1 < (long)*puVar9) {
                  uVar13 = 5;
                }
                if ((long)uVar13 < 3) {
                  if (uVar13 == 0) {
                    *puVar5 = 0x8000000000000000;
                    return;
                  }
                  if (uVar13 == 1) {
                    uVar13 = puVar9[1];
                    *puVar5 = 0x8000000000000001;
                    *(char *)(puVar5 + 1) = (char)uVar13;
                    return;
                  }
LAB_1026722e0:
                  if (puVar9[1] == 0) {
                    uVar13 = puVar9[2];
                    puVar5[1] = 0;
                    *puVar5 = 0x8000000000000002;
                    puVar5[2] = uVar13;
                    return;
                  }
                  if (puVar9[1] == 1) {
                    uVar13 = puVar9[2];
                    *puVar5 = 0x8000000000000002;
                    puVar5[1] = uVar13 >> 0x3f;
                    puVar5[2] = uVar13;
                    return;
                  }
                  uVar13 = puVar9[2];
                  *(undefined8 *)(puVar2 + -0xb0) = 0x8000000000000000;
                  if (0x7fefffffffffffff < (uVar13 & 0x7fffffffffffffff)) {
                    uVar16 = *(undefined8 *)(puVar2 + -0x90);
                    uVar15 = *(undefined8 *)(puVar2 + -0x78);
                    uVar3 = *(undefined8 *)(puVar2 + -0x80);
                    puVar5[5] = *(undefined8 *)(puVar2 + -0x88);
                    puVar5[4] = uVar16;
                    puVar5[7] = uVar15;
                    puVar5[6] = uVar3;
                    puVar5[8] = *(undefined8 *)(puVar2 + -0x70);
                    uVar15 = *(undefined8 *)(puVar2 + -0xb0);
                    uVar3 = *(undefined8 *)(puVar2 + -0x98);
                    uVar16 = *(undefined8 *)(puVar2 + -0xa0);
                    puVar5[1] = *(undefined8 *)(puVar2 + -0xa8);
                    *puVar5 = uVar15;
                    puVar5[3] = uVar3;
                    puVar5[2] = uVar16;
                    return;
                  }
                  puVar5[2] = uVar13;
                  puVar5[1] = 2;
                  *puVar5 = 0x8000000000000002;
                  FUN_105dc6c20(puVar2 + -0xb0);
                  return;
                }
                if (uVar13 == 3) {
                  uVar13 = puVar9[2];
                  uVar14 = puVar9[3];
                  if (uVar14 == 0) {
                    lVar10 = 1;
                  }
                  else {
                    lVar10 = _malloc(uVar14);
                    if (lVar10 == 0) {
                      func_0x0001087c9084(1,uVar14);
                      puVar9 = extraout_x1_00;
                      goto LAB_1026722e0;
                    }
                  }
                  _memcpy(lVar10,uVar13,uVar14);
                  *puVar5 = 0x8000000000000003;
                  puVar5[1] = uVar14;
                  puVar5[2] = lVar10;
                  puVar5[3] = uVar14;
                  return;
                }
                if (uVar13 != 4) {
                  auVar19 = (*
                            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                            )(&
                              __ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                              ,puVar9[6]);
                  pauVar6 = auVar19._0_8_;
                  if (pauVar6[1][0] == '\x01') {
                    auVar17 = *pauVar6;
                  }
                  else {
                    auVar17 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                    *(long *)(*pauVar6 + 8) = auVar17._8_8_;
                    pauVar6[1][0] = 1;
                  }
                  *(long *)*pauVar6 = auVar17._0_8_ + 1;
                  FUN_105dc99f8(puVar2 + -0xb0,auVar19._8_8_,auVar17._0_8_,auVar17._8_8_);
                  *(undefined8 *)(puVar2 + -0x68) = 0x8000000000000000;
                  if (*(long *)(puVar2 + -0xb0) == -0x7fffffffffffffff) {
                    uVar16 = *(undefined8 *)(puVar2 + -0xa8);
                    *puVar5 = 0x8000000000000005;
                    puVar5[1] = uVar16;
                    return;
                  }
                  *(undefined8 *)(puVar2 + -0xe8) = *(undefined8 *)(puVar2 + -0x88);
                  *(undefined8 *)(puVar2 + -0xf0) = *(undefined8 *)(puVar2 + -0x90);
                  *(undefined8 *)(puVar2 + -0xd8) = *(undefined8 *)(puVar2 + -0x78);
                  *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)(puVar2 + -0x80);
                  *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(puVar2 + -0x68);
                  *(undefined8 *)(puVar2 + -0xd0) = *(undefined8 *)(puVar2 + -0x70);
                  *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0x58);
                  *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)(puVar2 + -0x60);
                  uVar13 = puVar9[1];
                  lVar10 = puVar9[2] * 0x68;
                  *(undefined8 *)(puVar2 + -0x108) = *(undefined8 *)(puVar2 + -0xa8);
                  *(undefined8 *)(puVar2 + -0x110) = *(undefined8 *)(puVar2 + -0xb0);
                  *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(puVar2 + -0x98);
                  *(undefined8 *)(puVar2 + -0x100) = *(undefined8 *)(puVar2 + -0xa0);
                  goto LAB_102672398;
                }
                auVar17._8_8_ = puVar9 + 1;
                auVar17._0_8_ = puVar5;
                uVar16 = *(undefined8 *)(puVar2 + -0x30);
                unaff_x24 = *(ulong *)(puVar2 + -0x40);
                unaff_x26 = *(undefined8 *)(puVar2 + -0x50);
                unaff_x25 = *(undefined8 *)(puVar2 + -0x48);
                register0x00000008 = (BADSPACEBASE *)(puVar2 + -0xa0);
                *(ulong *)(puVar2 + -0x40) = unaff_x24;
                *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
                *(undefined8 *)(puVar2 + -0x30) = uVar16;
                *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
                *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
                *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
                *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
                *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
                unaff_x29 = puVar2 + -0x10;
                unaff_x23 = puVar9[3];
                plVar8 = (long *)(unaff_x23 * 0x48);
                if (0x1c71c71c71c71c7 < unaff_x23) {
                  auVar17 = func_0x0001087c9084(0,plVar8);
                }
                puVar4 = auVar17._0_8_;
                uVar14 = *(ulong *)(auVar17._8_8_ + 8);
                if (plVar8 == (long *)0x0) {
                  *(undefined8 *)(puVar2 + -0xa0) = 0;
                  *(undefined8 *)(puVar2 + -0x98) = 8;
                  *(undefined8 *)(puVar2 + -0x90) = 0;
                }
                else {
                  lVar10 = _malloc(plVar8);
                  if (lVar10 == 0) goto LAB_10266a6d8;
                  *(ulong *)(puVar2 + -0xa0) = unaff_x23;
                  *(long *)(puVar2 + -0x98) = lVar10;
                  *(undefined8 *)(puVar2 + -0x90) = 0;
                }
                if (unaff_x23 == 0) {
                  uVar16 = *(undefined8 *)(puVar2 + -0xa0);
                  puVar4[2] = *(undefined8 *)(puVar2 + -0x98);
                  puVar4[1] = uVar16;
                  puVar4[3] = *(undefined8 *)(puVar2 + -0x90);
                  *puVar4 = 0x8000000000000004;
                  return;
                }
                unaff_x22 = (ulong *)0x8000000000000005;
                unaff_x23 = 0x48;
                auVar19._8_8_ = uVar14;
                auVar19._0_8_ = puVar2 + -0x88;
                uVar16 = 0x10266a658;
                puVar2 = puVar2 + -0xa0;
              } while( true );
            }
            ((undefined1 *)((long)register0x00000008 + -0x88))[(long)puVar4] = 0x2d;
          }
          uVar13 = 0x14 - (long)puVar4;
          lVar10 = plVar8[2];
          if ((ulong)(*plVar8 - lVar10) < uVar13) {
            FUN_1088e879c(plVar8,lVar10,uVar13,1,1);
            lVar10 = plVar8[2];
          }
          _memcpy(plVar8[1] + lVar10,(undefined1 *)((long)register0x00000008 + -0x88) + (long)puVar4
                  ,uVar13);
          plVar8[2] = lVar10 + uVar13;
          return;
        }
        if ((param_4[2] & 0x7fffffffffffffff) < 0x7ff0000000000000) {
          lVar10 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                             ((undefined1 *)((long)register0x00000008 + -0x88));
          uVar13 = lVar10 - (long)((long)register0x00000008 + -0x88);
          lVar10 = plVar8[2];
          if ((ulong)(*plVar8 - lVar10) < uVar13) {
            FUN_1088e879c(plVar8,lVar10,uVar13,1,1);
            lVar10 = plVar8[2];
          }
          _memcpy(plVar8[1] + lVar10,(undefined1 *)((long)register0x00000008 + -0x88),uVar13);
          plVar8[2] = lVar10 + uVar13;
          return;
        }
      }
      lVar10 = plVar8[2];
      if ((ulong)(*plVar8 - lVar10) < 4) {
        FUN_1088e879c(plVar8,lVar10,4,1,1);
        lVar10 = plVar8[2];
      }
      lVar11 = plVar8[1];
      uVar12 = 0x6c6c756e;
LAB_102671b70:
      *(undefined4 *)(lVar11 + lVar10) = uVar12;
      plVar8[2] = lVar10 + 4;
      return;
    }
    if (uVar13 == 3) {
      uVar13 = param_4[2];
      uVar14 = param_4[3];
      plVar8 = (long *)*plVar8;
      lVar10 = plVar8[2];
      if (*plVar8 == lVar10) {
        FUN_1088e879c(plVar8,lVar10,1,1,1);
        lVar10 = plVar8[2];
      }
      *(undefined1 *)(plVar8[1] + lVar10) = 0x22;
      plVar8[2] = lVar10 + 1;
      FUN_102670a0c(plVar8,uVar13,uVar14);
      lVar10 = plVar8[2];
      if (*plVar8 == lVar10) {
        FUN_1088e879c(plVar8,lVar10,1,1,1);
        lVar10 = plVar8[2];
      }
      *(undefined1 *)(plVar8[1] + lVar10) = 0x22;
      plVar8[2] = lVar10 + 1;
      return;
    }
    if (uVar13 == 4) {
      auVar18._8_8_ = param_4 + 1;
      auVar18._0_8_ = plVar8;
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      uVar15 = *(undefined8 *)((long)register0x00000008 + -8);
      puVar4 = *(undefined8 **)((long)register0x00000008 + -0x20);
      uVar3 = *(undefined8 *)((long)register0x00000008 + -0x18);
      uVar16 = *(undefined8 *)((long)register0x00000008 + -0x30);
      uVar14 = *(ulong *)((long)register0x00000008 + -0x28);
      unaff_x24 = *(ulong *)((long)register0x00000008 + -0x40);
      unaff_x23 = *(ulong *)((long)register0x00000008 + -0x38);
      unaff_x26 = *(undefined8 *)((long)register0x00000008 + -0x50);
      unaff_x25 = *(undefined8 *)((long)register0x00000008 + -0x48);
      unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0x60);
      unaff_x27 = *(undefined8 *)((long)register0x00000008 + -0x58);
      goto LAB_10266a72c;
    }
    uVar13 = param_4[6];
    unaff_x20 = (long *)*plVar8;
    lVar10 = unaff_x20[2];
    if (*unaff_x20 == lVar10) {
      FUN_1088e879c(unaff_x20,lVar10,1,1,1);
      lVar10 = unaff_x20[2];
      *(undefined1 *)(unaff_x20[1] + lVar10) = 0x7b;
      lVar10 = lVar10 + 1;
      unaff_x20[2] = lVar10;
      if (uVar13 == 0) goto LAB_102672020;
LAB_102671c90:
      if (param_4[2] == 0) {
        lVar10 = unaff_x20[2];
        if (*unaff_x20 == lVar10) {
          FUN_1088e879c(unaff_x20,lVar10,1,1,1);
          lVar10 = unaff_x20[2];
        }
        *(undefined1 *)(unaff_x20[1] + lVar10) = 0x7d;
        unaff_x20[2] = lVar10 + 1;
        return;
      }
      unaff_x21 = (ulong *)param_4[1];
      unaff_x22 = unaff_x21 + param_4[2] * 0xd;
      uVar13 = unaff_x21[1];
      uVar14 = unaff_x21[2];
      if (*unaff_x20 == lVar10) {
LAB_102672084:
        FUN_1088e879c(unaff_x20,lVar10,1,1,1);
        lVar10 = unaff_x20[2];
        unaff_x24 = uVar14;
      }
    }
    else {
      *(undefined1 *)(unaff_x20[1] + lVar10) = 0x7b;
      lVar10 = lVar10 + 1;
      unaff_x20[2] = lVar10;
      if (uVar13 != 0) goto LAB_102671c90;
LAB_102672020:
      if (*unaff_x20 == lVar10) {
        FUN_1088e879c(unaff_x20,lVar10,1,1,1);
        lVar10 = unaff_x20[2];
      }
      *(undefined1 *)(unaff_x20[1] + lVar10) = 0x7d;
      lVar10 = lVar10 + 1;
      unaff_x20[2] = lVar10;
      if (param_4[2] == 0) {
        return;
      }
      unaff_x21 = (ulong *)param_4[1];
      unaff_x22 = unaff_x21 + param_4[2] * 0xd;
      uVar13 = unaff_x21[1];
      uVar14 = unaff_x21[2];
      if (*unaff_x20 == lVar10) {
        FUN_1088e879c(unaff_x20,lVar10,1,1,1);
        lVar10 = unaff_x20[2];
        unaff_x24 = uVar14;
      }
      *(undefined1 *)(unaff_x20[1] + lVar10) = 0x2c;
      lVar10 = lVar10 + 1;
      unaff_x20[2] = lVar10;
      if (*unaff_x20 == lVar10) goto LAB_102672084;
    }
    *(undefined1 *)(unaff_x20[1] + lVar10) = 0x22;
    unaff_x20[2] = lVar10 + 1;
    FUN_102670a0c(unaff_x20,uVar13,uVar14);
    lVar10 = unaff_x20[2];
    if (*unaff_x20 == lVar10) {
      FUN_1088e879c(unaff_x20,lVar10,1,1,1);
      lVar10 = unaff_x20[2];
    }
    *(undefined1 *)(unaff_x20[1] + lVar10) = 0x22;
    lVar10 = lVar10 + 1;
    unaff_x20[2] = lVar10;
    if (*unaff_x20 == lVar10) {
      FUN_1088e879c(unaff_x20,lVar10,1,1,1);
      lVar10 = unaff_x20[2];
    }
    unaff_x23 = 0x3a;
    *(undefined1 *)(unaff_x20[1] + lVar10) = 0x3a;
    unaff_x20[2] = lVar10 + 1;
    param_4 = unaff_x21 + 3;
    unaff_x30 = 0x102671d20;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
    unaff_x19 = plVar8;
  } while( true );
LAB_10266a6d8:
  uVar3 = func_0x0001087c9084(8,plVar8);
  if (*(long *)(puVar2 + -0xa0) != 0) {
    _free(puVar4);
    uVar3 = __Unwind_Resume(uVar3);
    func_0x0001026a9020(puVar2 + -0x88);
    FUN_1026aab20(puVar2 + -0xa0);
  }
  __Unwind_Resume(uVar3);
  uVar15 = 0x10266a72c;
  auVar18 = func_0x000108a07bc4();
LAB_10266a72c:
  plVar8 = auVar18._0_8_;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = uVar16;
  *(ulong *)((long)register0x00000008 + -0x28) = uVar14;
  *(undefined8 **)((long)register0x00000008 + -0x20) = puVar4;
  *(undefined8 *)((long)register0x00000008 + -0x18) = uVar3;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = uVar15;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  param_4 = *(ulong **)(auVar18._8_8_ + 8);
  unaff_x22 = *(ulong **)(auVar18._8_8_ + 0x10);
  unaff_x19 = (long *)*plVar8;
  lVar10 = unaff_x19[2];
  if (*unaff_x19 == lVar10) {
    FUN_1088e879c(unaff_x19,lVar10,1,1,1);
    lVar10 = unaff_x19[2];
    *(undefined1 *)(unaff_x19[1] + lVar10) = 0x5b;
    lVar10 = lVar10 + 1;
    unaff_x19[2] = lVar10;
  }
  else {
    *(undefined1 *)(unaff_x19[1] + lVar10) = 0x5b;
    lVar10 = lVar10 + 1;
    unaff_x19[2] = lVar10;
  }
  if (unaff_x22 == (ulong *)0x0) {
    if (*unaff_x19 == lVar10) {
      FUN_1088e879c(unaff_x19,lVar10,1,1,1);
      lVar10 = unaff_x19[2];
    }
    *(undefined1 *)(unaff_x19[1] + lVar10) = 0x5d;
    unaff_x19[2] = lVar10 + 1;
    return;
  }
  unaff_x30 = 0x10266a780;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  unaff_x20 = plVar8;
  unaff_x21 = param_4;
  goto SUB_102671a98;
  while( true ) {
    if (*(long *)(puVar2 + -0x110) == -0x8000000000000000) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d330d4,0x28,&UNK_10b283110);
      goto LAB_1026725f8;
    }
    lVar11 = *(long *)(uVar13 + 0x10);
    if (lVar11 == 0) {
      lVar7 = 1;
      uVar14 = *(ulong *)(puVar2 + -200);
    }
    else {
      uVar16 = *(undefined8 *)(uVar13 + 8);
      lVar7 = _malloc(lVar11);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,lVar11);
        goto LAB_1026725f8;
      }
      _memcpy(lVar7,uVar16,lVar11);
      if (lVar11 == -0x8000000000000000) {
        *puVar5 = 0x8000000000000005;
        puVar5[1] = lVar7;
        goto LAB_102672550;
      }
      uVar14 = *(ulong *)(puVar2 + -200);
    }
    if ((uVar14 & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(puVar2 + -0xc0));
    }
    *(long *)(puVar2 + -200) = lVar11;
    *(long *)(puVar2 + -0xc0) = lVar7;
    *(long *)(puVar2 + -0xb8) = lVar11;
    lVar11 = FUN_1026bb9b0(puVar2 + -0x110,uVar13 + 0x18);
    uVar13 = uVar13 + 0x68;
    lVar10 = lVar10 + -0x68;
    if (lVar11 != 0) break;
LAB_102672398:
    if (lVar10 == 0) {
      *(undefined8 *)(puVar2 + -0x88) = *(undefined8 *)(puVar2 + -0xe8);
      *(undefined8 *)(puVar2 + -0x90) = *(undefined8 *)(puVar2 + -0xf0);
      *(undefined8 *)(puVar2 + -0x78) = *(undefined8 *)(puVar2 + -0xd8);
      *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)(puVar2 + -0xe0);
      *(undefined8 *)(puVar2 + -0x68) = *(undefined8 *)(puVar2 + -200);
      *(undefined8 *)(puVar2 + -0x70) = *(undefined8 *)(puVar2 + -0xd0);
      *(undefined8 *)(puVar2 + -0x58) = *(undefined8 *)(puVar2 + -0xb8);
      *(undefined8 *)(puVar2 + -0x60) = *(undefined8 *)(puVar2 + -0xc0);
      *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0x108);
      *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0x110);
      *(undefined8 *)(puVar2 + -0x98) = *(undefined8 *)(puVar2 + -0xf8);
      *(undefined8 *)(puVar2 + -0xa0) = *(undefined8 *)(puVar2 + -0x100);
      if (*(long *)(puVar2 + -0xb0) == -0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_1026725f8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026725fc);
        (*pcVar1)();
      }
      uVar16 = *(undefined8 *)(puVar2 + -0xf0);
      uVar15 = *(undefined8 *)(puVar2 + -0xd8);
      uVar3 = *(undefined8 *)(puVar2 + -0xe0);
      puVar5[5] = *(undefined8 *)(puVar2 + -0xe8);
      puVar5[4] = uVar16;
      puVar5[7] = uVar15;
      puVar5[6] = uVar3;
      puVar5[8] = *(undefined8 *)(puVar2 + -0xd0);
      uVar15 = *(undefined8 *)(puVar2 + -0x110);
      uVar3 = *(undefined8 *)(puVar2 + -0xf8);
      uVar16 = *(undefined8 *)(puVar2 + -0x100);
      puVar5[1] = *(undefined8 *)(puVar2 + -0x108);
      *puVar5 = uVar15;
      puVar5[3] = uVar3;
      puVar5[2] = uVar16;
      if ((*(ulong *)(puVar2 + -0x68) & 0x7fffffffffffffff) == 0) {
        return;
      }
      uVar16 = *(undefined8 *)(puVar2 + -0x60);
      goto LAB_102672568;
    }
  }
  lVar10 = *(long *)(puVar2 + -0x110);
  *puVar5 = 0x8000000000000005;
  puVar5[1] = lVar11;
  if (lVar10 == -0x8000000000000000) {
    if (*(long *)(puVar2 + -0x108) != -0x7ffffffffffffffb) {
      func_0x0001026a9020((ulong)(puVar2 + -0x110) | 8);
    }
  }
  else {
LAB_102672550:
    FUN_1026af7cc(puVar2 + -0x110);
    if ((*(ulong *)(puVar2 + -200) & 0x7fffffffffffffff) != 0) {
      uVar16 = *(undefined8 *)(puVar2 + -0xc0);
LAB_102672568:
      _free(uVar16);
    }
  }
  return;
}

