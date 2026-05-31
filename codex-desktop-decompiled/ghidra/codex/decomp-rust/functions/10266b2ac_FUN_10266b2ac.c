
/* WARNING: Possible PIC construction at 0x00010266b350: Changing call to branch */
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
/* WARNING: Removing unreachable block (ram,0x00010266b354) */
/* WARNING: Removing unreachable block (ram,0x00010266b360) */
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

ulong * FUN_10266b2ac(long *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  ulong *puVar10;
  ulong *extraout_x1;
  long lVar11;
  long extraout_x8;
  long lVar12;
  ulong uVar13;
  undefined4 uVar14;
  ulong uVar15;
  long *plVar16;
  ulong *unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  code *pcStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulong *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong auStack_d8 [9];
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar16 = &lStack_140;
  puVar17 = &stack0xfffffffffffffff0;
  if (*param_1 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d330d4,0x28,&UNK_10b283110);
    puVar7 = param_4;
  }
  else {
    puVar7 = param_4;
    puVar3 = (ulong *)_malloc(param_3);
    unaff_x20 = param_4;
    unaff_x21 = param_3;
    unaff_x23 = param_2;
    if (puVar3 != (ulong *)0x0) {
      _memcpy(puVar3,param_2,param_3);
      if ((param_1[9] & 0x7fffffffffffffffU) != 0) {
        _free(param_1[10]);
      }
      unaff_x23 = 0x8000000000000005;
      param_1[10] = (long)puVar3;
      param_1[0xb] = (long)param_3;
      param_1[9] = -0x8000000000000000;
      lStack_e0 = param_1[0xb];
      lStack_e8 = param_1[10];
      puStack_f0 = param_3;
      if (*param_4 == 0x8000000000000005) {
        auStack_d8[0] = 0x8000000000000000;
        func_0x0001026ea188(auStack_90,param_1,&puStack_f0,auStack_d8);
        uStack_138 = uStack_80;
        lStack_140 = lStack_88;
        uStack_128 = uStack_70;
        uStack_130 = uStack_78;
        uStack_118 = uStack_60;
        uStack_120 = uStack_68;
        uStack_108 = uStack_50;
        uStack_110 = uStack_58;
        uStack_100 = uStack_48;
        if (lStack_88 != -0x7ffffffffffffffb) {
          func_0x0001026a9020(&lStack_140);
        }
        return (ulong *)0x0;
      }
      puVar7 = auStack_d8;
      uVar19 = 0x10266b354;
      plVar5 = &lStack_140;
      puVar4 = param_4;
      goto SUB_102672220;
    }
  }
  puVar4 = (ulong *)func_0x0001087c9084(1,unaff_x21);
  _free(lStack_e8);
  plVar5 = (long *)__Unwind_Resume(puVar4);
  pcStack_148 = FUN_10266b414;
  puVar6 = (ulong *)FUN_1026bbe6c();
  if ((char)*plVar5 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d330d4,0x28,&UNK_10b283170);
    puVar10 = extraout_x1;
    lVar11 = extraout_x8;
  }
  else {
    puVar10 = (ulong *)plVar5[1];
    plVar5 = (long *)*puVar10;
    lVar11 = plVar5[2];
    if (*plVar5 != lVar11) goto LAB_10266b454;
  }
  puVar6 = (ulong *)FUN_1088e879c(plVar5,lVar11,1,1,1);
  lVar11 = plVar5[2];
LAB_10266b454:
  *(undefined1 *)(plVar5[1] + lVar11) = 0x3a;
  plVar5[2] = lVar11 + 1;
  puVar3 = unaff_x22;
  if (*puVar7 == 0x8000000000000005) {
    plVar16 = (long *)*puVar10;
    lVar11 = plVar16[2];
    if ((ulong)(*plVar16 - lVar11) < 4) {
      puVar6 = (ulong *)FUN_1088e879c(plVar16,lVar11,4,1,1);
      lVar11 = plVar16[2];
    }
    *(undefined4 *)(plVar16[1] + lVar11) = 0x6c6c756e;
    plVar16[2] = lVar11 + 4;
    return puVar6;
  }
SUB_102671a98:
  do {
    *(undefined8 *)((long)plVar16 + -0x60) = unaff_x28;
    *(undefined8 *)((long)plVar16 + -0x58) = unaff_x27;
    *(undefined8 *)((long)plVar16 + -0x50) = unaff_x26;
    *(undefined8 *)((long)plVar16 + -0x48) = unaff_x25;
    *(ulong *)((long)plVar16 + -0x40) = unaff_x24;
    *(ulong *)((long)plVar16 + -0x38) = unaff_x23;
    *(ulong **)((long)plVar16 + -0x30) = puVar3;
    *(ulong **)((long)plVar16 + -0x28) = unaff_x21;
    *(ulong **)((long)plVar16 + -0x20) = unaff_x20;
    *(ulong **)((long)plVar16 + -0x18) = puVar4;
    *(undefined1 **)((long)plVar16 + -0x10) = puVar17;
    *(code **)((long)plVar16 + -8) = pcStack_148;
    puVar17 = (undefined1 *)((long)plVar16 + -0x10);
    uVar15 = *puVar7 ^ 0x8000000000000000;
    if (-1 < (long)*puVar7) {
      uVar15 = 5;
    }
    if ((long)uVar15 < 3) {
      if (uVar15 == 0) {
        param_1 = (long *)*puVar10;
      }
      else {
        if (uVar15 == 1) {
          param_1 = (long *)*puVar10;
          if ((puVar7[1] & 1) == 0) {
            lVar11 = param_1[2];
            if ((ulong)(*param_1 - lVar11) < 5) {
              puVar7 = (ulong *)FUN_1088e879c(param_1,lVar11,5,1,1);
              lVar11 = param_1[2];
            }
            lVar12 = param_1[1];
            *(undefined4 *)(lVar12 + lVar11) = 0x736c6166;
            *(undefined1 *)((undefined4 *)(lVar12 + lVar11) + 1) = 0x65;
            param_1[2] = lVar11 + 5;
            return puVar7;
          }
          lVar11 = param_1[2];
          if ((ulong)(*param_1 - lVar11) < 4) {
            puVar7 = (ulong *)FUN_1088e879c(param_1,lVar11,4,1,1);
            lVar11 = param_1[2];
          }
          lVar12 = param_1[1];
          uVar14 = 0x65757274;
          goto LAB_102671b70;
        }
        param_1 = (long *)*puVar10;
        if (puVar7[1] == 0) {
          lVar11 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                             (puVar7[2],(undefined1 *)((long)plVar16 + -0x88));
          uVar15 = 0x14 - lVar11;
          lVar12 = param_1[2];
          if ((ulong)(*param_1 - lVar12) < uVar15) {
            FUN_1088e879c(param_1,lVar12,uVar15,1,1);
            lVar12 = param_1[2];
          }
          puVar7 = (ulong *)_memcpy(param_1[1] + lVar12,
                                    (undefined1 *)((long)plVar16 + lVar11 + -0x88),uVar15);
          param_1[2] = lVar12 + uVar15;
          return puVar7;
        }
        if (puVar7[1] == 1) {
          param_3 = (ulong *)puVar7[2];
          puVar7 = (ulong *)-(long)param_3;
          if (-1 < (long)param_3) {
            puVar7 = param_3;
          }
          puVar4 = (ulong *)__ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                                      (puVar7,(undefined1 *)((long)plVar16 + -0x88));
          if ((long)param_3 < 0) {
            puVar4 = (ulong *)((long)puVar4 + -1);
            if ((ulong *)0x13 < puVar4) {
              uVar19 = 0x102672220;
              auVar22 = func_0x000108a07bdc(puVar4,0x14,&UNK_10b282890);
              param_4 = auVar22._8_8_;
              puVar7 = auVar22._0_8_;
              plVar5 = (long *)((long)plVar16 + -0x90);
SUB_102672220:
              do {
                auVar22._8_8_ = param_4;
                auVar22._0_8_ = puVar7;
                *(undefined8 *)((long)plVar5 + -0x50) = unaff_x26;
                *(undefined8 *)((long)plVar5 + -0x48) = unaff_x25;
                *(ulong *)((long)plVar5 + -0x40) = unaff_x24;
                *(ulong *)((long)plVar5 + -0x38) = unaff_x23;
                *(ulong **)((long)plVar5 + -0x30) = puVar3;
                *(ulong **)((long)plVar5 + -0x28) = param_3;
                *(ulong **)((long)plVar5 + -0x20) = puVar4;
                *(long **)((long)plVar5 + -0x18) = param_1;
                *(undefined1 **)((long)plVar5 + -0x10) = puVar17;
                *(undefined8 *)((long)plVar5 + -8) = uVar19;
                uVar15 = *param_4 ^ 0x8000000000000000;
                if (-1 < (long)*param_4) {
                  uVar15 = 5;
                }
                if ((long)uVar15 < 3) {
                  if (uVar15 == 0) {
                    *puVar7 = 0x8000000000000000;
                    return puVar7;
                  }
                  if (uVar15 == 1) {
                    uVar15 = param_4[1];
                    *puVar7 = 0x8000000000000001;
                    *(char *)(puVar7 + 1) = (char)uVar15;
                    return puVar7;
                  }
LAB_1026722e0:
                  lVar11 = auVar22._8_8_;
                  puVar3 = auVar22._0_8_;
                  if (*(long *)(lVar11 + 8) == 0) {
                    uVar15 = *(ulong *)(lVar11 + 0x10);
                    puVar7[1] = 0;
                    *puVar7 = 0x8000000000000002;
                    puVar7[2] = uVar15;
                    return puVar3;
                  }
                  if (*(long *)(lVar11 + 8) == 1) {
                    uVar15 = *(ulong *)(lVar11 + 0x10);
                    *puVar7 = 0x8000000000000002;
                    puVar7[1] = uVar15 >> 0x3f;
                    puVar7[2] = uVar15;
                    return puVar3;
                  }
                  uVar15 = *(ulong *)(lVar11 + 0x10);
                  *(undefined8 *)((long)plVar5 + -0xb0) = 0x8000000000000000;
                  if (0x7fefffffffffffff < (uVar15 & 0x7fffffffffffffff)) {
                    uVar15 = *(ulong *)((long)plVar5 + -0x90);
                    uVar13 = *(ulong *)((long)plVar5 + -0x78);
                    uVar9 = *(ulong *)((long)plVar5 + -0x80);
                    puVar7[5] = *(ulong *)((long)plVar5 + -0x88);
                    puVar7[4] = uVar15;
                    puVar7[7] = uVar13;
                    puVar7[6] = uVar9;
                    puVar7[8] = *(ulong *)((long)plVar5 + -0x70);
                    uVar13 = *(ulong *)((long)plVar5 + -0xb0);
                    uVar9 = *(ulong *)((long)plVar5 + -0x98);
                    uVar15 = *(ulong *)((long)plVar5 + -0xa0);
                    puVar7[1] = *(ulong *)((long)plVar5 + -0xa8);
                    *puVar7 = uVar13;
                    puVar7[3] = uVar9;
                    puVar7[2] = uVar15;
                    return puVar3;
                  }
                  puVar7[2] = uVar15;
                  puVar7[1] = 2;
                  *puVar7 = 0x8000000000000002;
                  puVar7 = (ulong *)FUN_105dc6c20((undefined1 *)((long)plVar5 + -0xb0));
                  return puVar7;
                }
                if (uVar15 == 3) {
                  uVar15 = param_4[2];
                  uVar9 = param_4[3];
                  if (uVar9 == 0) {
                    uVar13 = 1;
                  }
                  else {
                    uVar13 = _malloc(uVar9);
                    if (uVar13 == 0) {
                      auVar22 = func_0x0001087c9084(1,uVar9);
                      goto LAB_1026722e0;
                    }
                  }
                  puVar3 = (ulong *)_memcpy(uVar13,uVar15,uVar9);
                  *puVar7 = 0x8000000000000003;
                  puVar7[1] = uVar9;
                  puVar7[2] = uVar13;
                  puVar7[3] = uVar9;
                  return puVar3;
                }
                if (uVar15 != 4) {
                  auVar22 = (*
                            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                            )(&
                              __ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                              ,param_4[6]);
                  pauVar8 = auVar22._0_8_;
                  if (pauVar8[1][0] == '\x01') {
                    auVar20 = *pauVar8;
                  }
                  else {
                    auVar20 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                    *(long *)(*pauVar8 + 8) = auVar20._8_8_;
                    pauVar8[1][0] = 1;
                  }
                  *(long *)*pauVar8 = auVar20._0_8_ + 1;
                  puVar3 = (ulong *)FUN_105dc99f8((undefined1 *)((long)plVar5 + -0xb0),auVar22._8_8_
                                                  ,auVar20._0_8_,auVar20._8_8_);
                  *(undefined8 *)((long)plVar5 + -0x68) = 0x8000000000000000;
                  if (*(long *)((long)plVar5 + -0xb0) == -0x7fffffffffffffff) {
                    uVar15 = *(ulong *)((long)plVar5 + -0xa8);
                    *puVar7 = 0x8000000000000005;
                    puVar7[1] = uVar15;
                    return puVar3;
                  }
                  *(undefined8 *)((long)plVar5 + -0xe8) = *(undefined8 *)((long)plVar5 + -0x88);
                  *(undefined8 *)((long)plVar5 + -0xf0) = *(undefined8 *)((long)plVar5 + -0x90);
                  *(undefined8 *)((long)plVar5 + -0xd8) = *(undefined8 *)((long)plVar5 + -0x78);
                  *(undefined8 *)((long)plVar5 + -0xe0) = *(undefined8 *)((long)plVar5 + -0x80);
                  *(undefined8 *)((long)plVar5 + -200) = *(undefined8 *)((long)plVar5 + -0x68);
                  *(undefined8 *)((long)plVar5 + -0xd0) = *(undefined8 *)((long)plVar5 + -0x70);
                  *(undefined8 *)((long)plVar5 + -0xb8) = *(undefined8 *)((long)plVar5 + -0x58);
                  *(undefined8 *)((long)plVar5 + -0xc0) = *(undefined8 *)((long)plVar5 + -0x60);
                  uVar15 = param_4[1];
                  lVar11 = param_4[2] * 0x68;
                  *(undefined8 *)((long)plVar5 + -0x108) = *(undefined8 *)((long)plVar5 + -0xa8);
                  *(undefined8 *)((long)plVar5 + -0x110) = *(undefined8 *)((long)plVar5 + -0xb0);
                  *(undefined8 *)((long)plVar5 + -0xf8) = *(undefined8 *)((long)plVar5 + -0x98);
                  *(undefined8 *)((long)plVar5 + -0x100) = *(undefined8 *)((long)plVar5 + -0xa0);
                  goto LAB_102672398;
                }
                auVar20._8_8_ = param_4 + 1;
                auVar20._0_8_ = puVar7;
                uVar19 = *(undefined8 *)((long)plVar5 + -0x30);
                unaff_x24 = *(ulong *)((long)plVar5 + -0x40);
                unaff_x26 = *(undefined8 *)((long)plVar5 + -0x50);
                unaff_x25 = *(undefined8 *)((long)plVar5 + -0x48);
                plVar16 = (long *)((long)plVar5 + -0xa0);
                *(ulong *)((long)plVar5 + -0x40) = unaff_x24;
                *(undefined8 *)((long)plVar5 + -0x38) = *(undefined8 *)((long)plVar5 + -0x38);
                *(undefined8 *)((long)plVar5 + -0x30) = uVar19;
                *(undefined8 *)((long)plVar5 + -0x28) = *(undefined8 *)((long)plVar5 + -0x28);
                *(undefined8 *)((long)plVar5 + -0x20) = *(undefined8 *)((long)plVar5 + -0x20);
                *(undefined8 *)((long)plVar5 + -0x18) = *(undefined8 *)((long)plVar5 + -0x18);
                *(undefined8 *)((long)plVar5 + -0x10) = *(undefined8 *)((long)plVar5 + -0x10);
                *(undefined8 *)((long)plVar5 + -8) = *(undefined8 *)((long)plVar5 + -8);
                puVar17 = (undefined1 *)((long)plVar5 + -0x10);
                unaff_x23 = param_4[3];
                param_1 = (long *)(unaff_x23 * 0x48);
                if (0x1c71c71c71c71c7 < unaff_x23) {
                  auVar20 = func_0x0001087c9084(0,param_1);
                }
                puVar4 = auVar20._0_8_;
                param_4 = *(ulong **)(auVar20._8_8_ + 8);
                if (param_1 == (long *)0x0) {
                  puVar7 = (ulong *)0x8;
                  *(undefined8 *)((long)plVar5 + -0xa0) = 0;
                  *(undefined8 *)((long)plVar5 + -0x98) = 8;
                  *(undefined8 *)((long)plVar5 + -0x90) = 0;
                }
                else {
                  puVar7 = (ulong *)_malloc(param_1);
                  if (puVar7 == (ulong *)0x0) goto LAB_10266a6d8;
                  *(ulong *)((long)plVar5 + -0xa0) = unaff_x23;
                  *(ulong **)((long)plVar5 + -0x98) = puVar7;
                  *(undefined8 *)((long)plVar5 + -0x90) = 0;
                }
                if (unaff_x23 == 0) {
                  uVar15 = *(ulong *)((long)plVar5 + -0xa0);
                  puVar4[2] = *(ulong *)((long)plVar5 + -0x98);
                  puVar4[1] = uVar15;
                  puVar4[3] = *(ulong *)((long)plVar5 + -0x90);
                  *puVar4 = 0x8000000000000004;
                  return puVar7;
                }
                puVar3 = (ulong *)0x8000000000000005;
                unaff_x23 = 0x48;
                puVar7 = (ulong *)((long)plVar5 + -0x88);
                uVar19 = 0x10266a658;
                plVar5 = (long *)((long)plVar5 + -0xa0);
                param_3 = param_4;
              } while( true );
            }
            ((undefined1 *)((long)plVar16 + -0x88))[(long)puVar4] = 0x2d;
          }
          uVar15 = 0x14 - (long)puVar4;
          lVar11 = param_1[2];
          if ((ulong)(*param_1 - lVar11) < uVar15) {
            FUN_1088e879c(param_1,lVar11,uVar15,1,1);
            lVar11 = param_1[2];
          }
          puVar7 = (ulong *)_memcpy(param_1[1] + lVar11,
                                    (undefined1 *)((long)plVar16 + -0x88) + (long)puVar4,uVar15);
          param_1[2] = lVar11 + uVar15;
          return puVar7;
        }
        if ((puVar7[2] & 0x7fffffffffffffff) < 0x7ff0000000000000) {
          lVar11 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                             ((undefined1 *)((long)plVar16 + -0x88));
          uVar15 = lVar11 - (long)((long)plVar16 + -0x88);
          lVar11 = param_1[2];
          if ((ulong)(*param_1 - lVar11) < uVar15) {
            FUN_1088e879c(param_1,lVar11,uVar15,1,1);
            lVar11 = param_1[2];
          }
          puVar7 = (ulong *)_memcpy(param_1[1] + lVar11,(undefined1 *)((long)plVar16 + -0x88),uVar15
                                   );
          param_1[2] = lVar11 + uVar15;
          return puVar7;
        }
      }
      lVar11 = param_1[2];
      if ((ulong)(*param_1 - lVar11) < 4) {
        puVar7 = (ulong *)FUN_1088e879c(param_1,lVar11,4,1,1);
        lVar11 = param_1[2];
      }
      lVar12 = param_1[1];
      uVar14 = 0x6c6c756e;
LAB_102671b70:
      *(undefined4 *)(lVar12 + lVar11) = uVar14;
      param_1[2] = lVar11 + 4;
      return puVar7;
    }
    if (uVar15 == 3) {
      uVar15 = puVar7[2];
      uVar9 = puVar7[3];
      plVar16 = (long *)*puVar10;
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        FUN_1088e879c(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
      plVar16[2] = lVar11 + 1;
      puVar7 = (ulong *)FUN_102670a0c(plVar16,uVar15,uVar9);
      lVar11 = plVar16[2];
      if (*plVar16 == lVar11) {
        puVar7 = (ulong *)FUN_1088e879c(plVar16,lVar11,1,1,1);
        lVar11 = plVar16[2];
      }
      *(undefined1 *)(plVar16[1] + lVar11) = 0x22;
      plVar16[2] = lVar11 + 1;
      return puVar7;
    }
    if (uVar15 == 4) {
      auVar21._8_8_ = puVar7 + 1;
      auVar21._0_8_ = puVar10;
      puVar17 = *(undefined1 **)((long)plVar16 + -0x10);
      uVar18 = *(undefined8 *)((long)plVar16 + -8);
      puVar4 = *(ulong **)((long)plVar16 + -0x20);
      uVar2 = *(undefined8 *)((long)plVar16 + -0x18);
      uVar19 = *(undefined8 *)((long)plVar16 + -0x30);
      param_4 = *(ulong **)((long)plVar16 + -0x28);
      unaff_x24 = *(ulong *)((long)plVar16 + -0x40);
      unaff_x23 = *(ulong *)((long)plVar16 + -0x38);
      unaff_x26 = *(undefined8 *)((long)plVar16 + -0x50);
      unaff_x25 = *(undefined8 *)((long)plVar16 + -0x48);
      unaff_x28 = *(undefined8 *)((long)plVar16 + -0x60);
      unaff_x27 = *(undefined8 *)((long)plVar16 + -0x58);
      goto LAB_10266a72c;
    }
    uVar9 = puVar7[6];
    unaff_x20 = (ulong *)*puVar10;
    uVar15 = unaff_x20[2];
    if (*unaff_x20 == uVar15) {
      FUN_1088e879c(unaff_x20,uVar15,1,1,1);
      uVar15 = unaff_x20[2];
      *(undefined1 *)(unaff_x20[1] + uVar15) = 0x7b;
      uVar15 = uVar15 + 1;
      unaff_x20[2] = uVar15;
      if (uVar9 == 0) goto LAB_102672020;
LAB_102671c90:
      if (puVar7[2] == 0) {
        uVar15 = unaff_x20[2];
        if (*unaff_x20 == uVar15) {
          puVar7 = (ulong *)FUN_1088e879c(unaff_x20,uVar15,1,1,1);
          uVar15 = unaff_x20[2];
        }
        *(undefined1 *)(unaff_x20[1] + uVar15) = 0x7d;
        unaff_x20[2] = uVar15 + 1;
        return puVar7;
      }
      unaff_x21 = (ulong *)puVar7[1];
      puVar3 = unaff_x21 + puVar7[2] * 0xd;
      uVar9 = unaff_x21[1];
      uVar13 = unaff_x21[2];
      if (*unaff_x20 == uVar15) {
LAB_102672084:
        FUN_1088e879c(unaff_x20,uVar15,1,1,1);
        uVar15 = unaff_x20[2];
        unaff_x24 = uVar13;
      }
    }
    else {
      *(undefined1 *)(unaff_x20[1] + uVar15) = 0x7b;
      uVar15 = uVar15 + 1;
      unaff_x20[2] = uVar15;
      if (uVar9 != 0) goto LAB_102671c90;
LAB_102672020:
      if (*unaff_x20 == uVar15) {
        FUN_1088e879c(unaff_x20,uVar15,1,1,1);
        uVar15 = unaff_x20[2];
      }
      *(undefined1 *)(unaff_x20[1] + uVar15) = 0x7d;
      uVar15 = uVar15 + 1;
      unaff_x20[2] = uVar15;
      if (puVar7[2] == 0) {
        return puVar7;
      }
      unaff_x21 = (ulong *)puVar7[1];
      puVar3 = unaff_x21 + puVar7[2] * 0xd;
      uVar9 = unaff_x21[1];
      uVar13 = unaff_x21[2];
      if (*unaff_x20 == uVar15) {
        FUN_1088e879c(unaff_x20,uVar15,1,1,1);
        uVar15 = unaff_x20[2];
        unaff_x24 = uVar13;
      }
      *(undefined1 *)(unaff_x20[1] + uVar15) = 0x2c;
      uVar15 = uVar15 + 1;
      unaff_x20[2] = uVar15;
      if (*unaff_x20 == uVar15) goto LAB_102672084;
    }
    *(undefined1 *)(unaff_x20[1] + uVar15) = 0x22;
    unaff_x20[2] = uVar15 + 1;
    FUN_102670a0c(unaff_x20,uVar9,uVar13);
    uVar15 = unaff_x20[2];
    if (*unaff_x20 == uVar15) {
      FUN_1088e879c(unaff_x20,uVar15,1,1,1);
      uVar15 = unaff_x20[2];
    }
    *(undefined1 *)(unaff_x20[1] + uVar15) = 0x22;
    uVar15 = uVar15 + 1;
    unaff_x20[2] = uVar15;
    if (*unaff_x20 == uVar15) {
      FUN_1088e879c(unaff_x20,uVar15,1,1,1);
      uVar15 = unaff_x20[2];
    }
    unaff_x23 = 0x3a;
    *(undefined1 *)(unaff_x20[1] + uVar15) = 0x3a;
    unaff_x20[2] = uVar15 + 1;
    puVar7 = unaff_x21 + 3;
    pcStack_148 = (code *)0x102671d20;
    plVar16 = (long *)((long)plVar16 + -0x90);
    puVar4 = puVar10;
  } while( true );
LAB_10266a6d8:
  uVar2 = func_0x0001087c9084(8,param_1);
  if (*(long *)((long)plVar5 + -0xa0) != 0) {
    _free(puVar4);
    uVar2 = __Unwind_Resume(uVar2);
    func_0x0001026a9020((undefined1 *)((long)plVar5 + -0x88));
    FUN_1026aab20((undefined1 *)((long)plVar5 + -0xa0));
  }
  __Unwind_Resume(uVar2);
  uVar18 = 0x10266a72c;
  auVar21 = func_0x000108a07bc4();
LAB_10266a72c:
  puVar10 = auVar21._0_8_;
  *(ulong *)((long)plVar16 + -0x40) = unaff_x24;
  *(ulong *)((long)plVar16 + -0x38) = unaff_x23;
  *(undefined8 *)((long)plVar16 + -0x30) = uVar19;
  *(ulong **)((long)plVar16 + -0x28) = param_4;
  *(ulong **)((long)plVar16 + -0x20) = puVar4;
  *(undefined8 *)((long)plVar16 + -0x18) = uVar2;
  *(undefined1 **)((long)plVar16 + -0x10) = puVar17;
  *(undefined8 *)((long)plVar16 + -8) = uVar18;
  puVar17 = (undefined1 *)((long)plVar16 + -0x10);
  puVar7 = *(ulong **)(auVar21._8_8_ + 8);
  puVar3 = *(ulong **)(auVar21._8_8_ + 0x10);
  puVar4 = (ulong *)*puVar10;
  uVar15 = puVar4[2];
  if (*puVar4 == uVar15) {
    puVar6 = (ulong *)FUN_1088e879c(puVar4,uVar15,1,1,1);
    uVar15 = puVar4[2];
    *(undefined1 *)(puVar4[1] + uVar15) = 0x5b;
    uVar15 = uVar15 + 1;
    puVar4[2] = uVar15;
  }
  else {
    *(undefined1 *)(puVar4[1] + uVar15) = 0x5b;
    uVar15 = uVar15 + 1;
    puVar4[2] = uVar15;
    puVar6 = puVar10;
  }
  if (puVar3 == (ulong *)0x0) {
    if (*puVar4 == uVar15) {
      puVar6 = (ulong *)FUN_1088e879c(puVar4,uVar15,1,1,1);
      uVar15 = puVar4[2];
    }
    *(undefined1 *)(puVar4[1] + uVar15) = 0x5d;
    puVar4[2] = uVar15 + 1;
    return puVar6;
  }
  pcStack_148 = (code *)0x10266a780;
  plVar16 = (long *)((long)plVar16 + -0x40);
  unaff_x20 = puVar10;
  unaff_x21 = puVar7;
  goto SUB_102671a98;
  while( true ) {
    if (*(long *)((long)plVar5 + -0x110) == -0x8000000000000000) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d330d4,0x28,&UNK_10b283110);
      goto LAB_1026725f8;
    }
    lVar12 = *(long *)(uVar15 + 0x10);
    if (lVar12 == 0) {
      uVar9 = 1;
      uVar13 = *(ulong *)((long)plVar5 + -200);
    }
    else {
      uVar19 = *(undefined8 *)(uVar15 + 8);
      uVar9 = _malloc(lVar12);
      if (uVar9 == 0) {
        func_0x0001087c9084(1,lVar12);
        goto LAB_1026725f8;
      }
      _memcpy(uVar9,uVar19,lVar12);
      if (lVar12 == -0x8000000000000000) {
        *puVar7 = 0x8000000000000005;
        puVar7[1] = uVar9;
        goto LAB_102672550;
      }
      uVar13 = *(ulong *)((long)plVar5 + -200);
    }
    if ((uVar13 & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)((long)plVar5 + -0xc0));
    }
    *(long *)((long)plVar5 + -200) = lVar12;
    *(ulong *)((long)plVar5 + -0xc0) = uVar9;
    *(long *)((long)plVar5 + -0xb8) = lVar12;
    puVar4 = (ulong *)FUN_1026bb9b0((undefined1 *)((long)plVar5 + -0x110),uVar15 + 0x18);
    uVar15 = uVar15 + 0x68;
    lVar11 = lVar11 + -0x68;
    puVar3 = (ulong *)0x0;
    if (puVar4 != (ulong *)0x0) break;
LAB_102672398:
    if (lVar11 == 0) {
      *(undefined8 *)((long)plVar5 + -0x88) = *(undefined8 *)((long)plVar5 + -0xe8);
      *(undefined8 *)((long)plVar5 + -0x90) = *(undefined8 *)((long)plVar5 + -0xf0);
      *(undefined8 *)((long)plVar5 + -0x78) = *(undefined8 *)((long)plVar5 + -0xd8);
      *(undefined8 *)((long)plVar5 + -0x80) = *(undefined8 *)((long)plVar5 + -0xe0);
      *(undefined8 *)((long)plVar5 + -0x68) = *(undefined8 *)((long)plVar5 + -200);
      *(undefined8 *)((long)plVar5 + -0x70) = *(undefined8 *)((long)plVar5 + -0xd0);
      *(undefined8 *)((long)plVar5 + -0x58) = *(undefined8 *)((long)plVar5 + -0xb8);
      *(undefined8 *)((long)plVar5 + -0x60) = *(undefined8 *)((long)plVar5 + -0xc0);
      *(undefined8 *)((long)plVar5 + -0xa8) = *(undefined8 *)((long)plVar5 + -0x108);
      *(undefined8 *)((long)plVar5 + -0xb0) = *(undefined8 *)((long)plVar5 + -0x110);
      *(undefined8 *)((long)plVar5 + -0x98) = *(undefined8 *)((long)plVar5 + -0xf8);
      *(undefined8 *)((long)plVar5 + -0xa0) = *(undefined8 *)((long)plVar5 + -0x100);
      if (*(long *)((long)plVar5 + -0xb0) == -0x8000000000000000) {
        __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_1026725f8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026725fc);
        (*pcVar1)();
      }
      uVar15 = *(ulong *)((long)plVar5 + -0xf0);
      uVar13 = *(ulong *)((long)plVar5 + -0xd8);
      uVar9 = *(ulong *)((long)plVar5 + -0xe0);
      puVar7[5] = *(ulong *)((long)plVar5 + -0xe8);
      puVar7[4] = uVar15;
      puVar7[7] = uVar13;
      puVar7[6] = uVar9;
      puVar7[8] = *(ulong *)((long)plVar5 + -0xd0);
      uVar13 = *(ulong *)((long)plVar5 + -0x110);
      uVar9 = *(ulong *)((long)plVar5 + -0xf8);
      uVar15 = *(ulong *)((long)plVar5 + -0x100);
      puVar7[1] = *(ulong *)((long)plVar5 + -0x108);
      *puVar7 = uVar13;
      puVar7[3] = uVar9;
      puVar7[2] = uVar15;
      if ((*(ulong *)((long)plVar5 + -0x68) & 0x7fffffffffffffff) == 0) {
        return puVar3;
      }
      uVar19 = *(undefined8 *)((long)plVar5 + -0x60);
      goto LAB_102672568;
    }
  }
  lVar11 = *(long *)((long)plVar5 + -0x110);
  *puVar7 = 0x8000000000000005;
  puVar7[1] = (ulong)puVar4;
  if (lVar11 == -0x8000000000000000) {
    if (*(long *)((long)plVar5 + -0x108) != -0x7ffffffffffffffb) {
      puVar4 = (ulong *)func_0x0001026a9020((ulong)((long)plVar5 + -0x110) | 8);
    }
  }
  else {
LAB_102672550:
    puVar4 = (ulong *)FUN_1026af7cc((undefined1 *)((long)plVar5 + -0x110));
    if ((*(ulong *)((long)plVar5 + -200) & 0x7fffffffffffffff) != 0) {
      uVar19 = *(undefined8 *)((long)plVar5 + -0xc0);
LAB_102672568:
      puVar4 = (ulong *)_free(uVar19);
    }
  }
  return puVar4;
}

