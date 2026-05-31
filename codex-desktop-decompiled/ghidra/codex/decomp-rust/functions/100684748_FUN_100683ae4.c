
/* WARNING: Possible PIC construction at 0x00010063463c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100684514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100684274: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100684518) */
/* WARNING: Removing unreachable block (ram,0x000100684540) */
/* WARNING: Removing unreachable block (ram,0x000100684568) */
/* WARNING: Removing unreachable block (ram,0x0001006844c8) */
/* WARNING: Removing unreachable block (ram,0x00010068452c) */
/* WARNING: Removing unreachable block (ram,0x000100684500) */
/* WARNING: Removing unreachable block (ram,0x00010068453c) */
/* WARNING: Removing unreachable block (ram,0x0001006845e4) */
/* WARNING: Removing unreachable block (ram,0x0001006845fc) */
/* WARNING: Removing unreachable block (ram,0x000100684614) */
/* WARNING: Removing unreachable block (ram,0x00010068461c) */
/* WARNING: Removing unreachable block (ram,0x000100684604) */
/* WARNING: Removing unreachable block (ram,0x000100634640) */
/* WARNING: Removing unreachable block (ram,0x000100634684) */
/* WARNING: Removing unreachable block (ram,0x000100634698) */
/* WARNING: Removing unreachable block (ram,0x0001006346b0) */
/* WARNING: Removing unreachable block (ram,0x0001006346b8) */
/* WARNING: Removing unreachable block (ram,0x0001006346a0) */
/* WARNING: Removing unreachable block (ram,0x00010063464c) */
/* WARNING: Removing unreachable block (ram,0x00010063465c) */
/* WARNING: Removing unreachable block (ram,0x0001006345f8) */
/* WARNING: Removing unreachable block (ram,0x000100684278) */
/* WARNING: Removing unreachable block (ram,0x0001006842a4) */
/* WARNING: Removing unreachable block (ram,0x0001006842ec) */
/* WARNING: Removing unreachable block (ram,0x000100684284) */
/* WARNING: Removing unreachable block (ram,0x000100684428) */
/* WARNING: Removing unreachable block (ram,0x000100684430) */
/* WARNING: Removing unreachable block (ram,0x000100684438) */
/* WARNING: Removing unreachable block (ram,0x000100684448) */
/* WARNING: Removing unreachable block (ram,0x000100684458) */
/* WARNING: Removing unreachable block (ram,0x000100684468) */
/* WARNING: Removing unreachable block (ram,0x000100684480) */
/* WARNING: Removing unreachable block (ram,0x000100684484) */
/* WARNING: Removing unreachable block (ram,0x000100684294) */
/* WARNING: Removing unreachable block (ram,0x000100684298) */
/* WARNING: Removing unreachable block (ram,0x0001006841f4) */
/* WARNING: Removing unreachable block (ram,0x000100684328) */
/* WARNING: Removing unreachable block (ram,0x000100684360) */
/* WARNING: Removing unreachable block (ram,0x000100684364) */
/* WARNING: Removing unreachable block (ram,0x000100684380) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100683ae4(ulong *param_1,long *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x1;
  ulong *extraout_x1_00;
  ulong *puVar11;
  long lVar12;
  undefined4 uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x22;
  undefined1 *unaff_x23;
  long *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *puVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_70 [7];
  char acStack_69 [9];
  long *plStack_60;
  
  puVar17 = &stack0xfffffffffffffff0;
  uVar14 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar14 = 5;
  }
  if (2 < (long)uVar14) {
    if (uVar14 == 3) {
      uVar14 = param_1[2];
      uVar16 = param_1[3];
      plVar15 = (long *)*param_2;
      lVar10 = plVar15[2];
      if (*plVar15 == lVar10) {
        thunk_FUN_108855060(plVar15,lVar10,1,1,1);
        lVar10 = plVar15[2];
      }
      *(undefined1 *)(plVar15[1] + lVar10) = 0x22;
      plVar15[2] = lVar10 + 1;
      FUN_100657654(plVar15,uVar14,uVar16);
      lVar10 = plVar15[2];
      if (*plVar15 == lVar10) {
        thunk_FUN_108855060(plVar15,lVar10,1,1,1);
        lVar10 = plVar15[2];
      }
      *(undefined1 *)(plVar15[1] + lVar10) = 0x22;
    }
    else {
      if (uVar14 == 4) {
        uVar14 = param_1[2];
        uVar16 = param_1[3];
        plVar15 = (long *)*param_2;
        lVar10 = plVar15[2];
        if (*plVar15 == lVar10) {
          thunk_FUN_108855060(plVar15,lVar10,1,1,1);
          lVar10 = plVar15[2];
          *(undefined1 *)(plVar15[1] + lVar10) = 0x5b;
          lVar10 = lVar10 + 1;
          plVar15[2] = lVar10;
        }
        else {
          *(undefined1 *)(plVar15[1] + lVar10) = 0x5b;
          lVar10 = lVar10 + 1;
          plVar15[2] = lVar10;
        }
        if (uVar16 != 0) {
          FUN_100683ae4(uVar14,param_2);
          plVar15 = (long *)*param_2;
          if (uVar16 != 1) {
            lVar10 = uVar16 * 0x48 + -0x48;
            do {
              uVar14 = uVar14 + 0x48;
              lVar12 = plVar15[2];
              if (*plVar15 == lVar12) {
                thunk_FUN_108855060(plVar15,lVar12,1,1,1);
                lVar12 = plVar15[2];
              }
              *(undefined1 *)(plVar15[1] + lVar12) = 0x2c;
              plVar15[2] = lVar12 + 1;
              FUN_100683ae4(uVar14,param_2);
              plVar15 = (long *)*param_2;
              lVar10 = lVar10 + -0x48;
            } while (lVar10 != 0);
          }
          lVar10 = plVar15[2];
        }
        if (*plVar15 == lVar10) {
          thunk_FUN_108855060(plVar15,lVar10,1,1,1);
          lVar10 = plVar15[2];
        }
        *(undefined1 *)(plVar15[1] + lVar10) = 0x5d;
        plVar15[2] = lVar10 + 1;
        return;
      }
      uVar14 = param_1[6];
      plVar15 = (long *)*param_2;
      lVar10 = plVar15[2];
      if (*plVar15 == lVar10) {
        thunk_FUN_108855060(plVar15,lVar10,1,1,1);
        lVar10 = plVar15[2];
        *(undefined1 *)(plVar15[1] + lVar10) = 0x7b;
        lVar10 = lVar10 + 1;
        plVar15[2] = lVar10;
        if (uVar14 != 0) goto LAB_100683cbc;
LAB_100683e5c:
        if (*plVar15 == lVar10) {
          thunk_FUN_108855060(plVar15,lVar10,1,1,1);
          lVar10 = plVar15[2];
        }
        *(undefined1 *)(plVar15[1] + lVar10) = 0x7d;
        plVar15[2] = lVar10 + 1;
        acStack_69[2] = '\0';
        uVar14 = param_1[2];
      }
      else {
        *(undefined1 *)(plVar15[1] + lVar10) = 0x7b;
        lVar10 = lVar10 + 1;
        plVar15[2] = lVar10;
        if (uVar14 == 0) goto LAB_100683e5c;
LAB_100683cbc:
        acStack_69[2] = '\x01';
        uVar14 = param_1[2];
      }
      acStack_69[1] = '\0';
      plStack_60 = param_2;
      if (uVar14 != 0) {
        acStack_69[1] = '\0';
        lVar10 = uVar14 * 0x68;
        plVar15 = param_2;
        lVar12 = param_1[1] + 0x18;
        do {
          FUN_1013fdcdc(acStack_69 + 1,*(undefined8 *)(lVar12 + -0x10),*(undefined8 *)(lVar12 + -8))
          ;
          param_2 = plStack_60;
          if (acStack_69[1] == '\x01') {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
            lVar10 = extraout_x1;
            goto LAB_100683f84;
          }
          plVar15 = (long *)*plStack_60;
          lVar9 = plVar15[2];
          if (*plVar15 == lVar9) {
            thunk_FUN_108855060(plVar15,lVar9,1,1,1);
            lVar9 = plVar15[2];
          }
          *(undefined1 *)(plVar15[1] + lVar9) = 0x3a;
          plVar15[2] = lVar9 + 1;
          FUN_100683ae4(lVar12,param_2);
          lVar10 = lVar10 + -0x68;
          plVar15 = param_2;
          lVar12 = lVar12 + 0x68;
        } while (lVar10 != 0);
      }
      if (acStack_69[2] == '\0') {
        return;
      }
      plVar15 = (long *)*param_2;
      lVar10 = plVar15[2];
      if (*plVar15 == lVar10) {
LAB_100683f84:
        thunk_FUN_108855060(plVar15,lVar10,1,1,1);
        lVar10 = plVar15[2];
      }
      *(undefined1 *)(plVar15[1] + lVar10) = 0x7d;
    }
    lVar10 = lVar10 + 1;
    goto LAB_100683f50;
  }
  if (uVar14 == 0) {
    plVar15 = (long *)*param_2;
LAB_100683b8c:
    lVar10 = plVar15[2];
    if ((ulong)(*plVar15 - lVar10) < 4) {
      thunk_FUN_108855060(plVar15,lVar10,4,1,1);
      lVar10 = plVar15[2];
    }
    lVar12 = plVar15[1];
    uVar13 = 0x6c6c756e;
  }
  else {
    if (uVar14 != 1) {
      plVar15 = (long *)*param_2;
      if (param_1[1] == 0) {
        lVar12 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                           (param_1[2],acStack_69 + 1);
        uVar14 = 0x14 - lVar12;
        lVar10 = plVar15[2];
        if ((ulong)(*plVar15 - lVar10) < uVar14) {
          thunk_FUN_108855060(plVar15,lVar10,uVar14,1,1);
          lVar10 = plVar15[2];
        }
        _memcpy(plVar15[1] + lVar10,acStack_69 + lVar12 + 1,uVar14);
        lVar10 = lVar10 + uVar14;
        goto LAB_100683f50;
      }
      if (param_1[1] == 1) {
        uVar16 = param_1[2];
        uVar14 = -uVar16;
        if (-1 < (long)uVar16) {
          uVar14 = uVar16;
        }
        puVar5 = (undefined8 *)
                 __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                           (uVar14,acStack_69 + 1);
        if ((long)uVar16 < 0) {
          puVar5 = (undefined8 *)((long)puVar5 + -1);
          if ((undefined8 *)0x13 < puVar5) {
            uVar18 = 0x100684078;
            auVar23 = FUN_107c05cd0(puVar5,0x14,&UNK_10b2364b8);
            puVar2 = auStack_70;
            while( true ) {
              puVar11 = auVar23._8_8_;
              plVar6 = auVar23._0_8_;
              *(long *)(puVar2 + -0x60) = unaff_x28;
              *(undefined8 *)(puVar2 + -0x58) = unaff_x27;
              *(undefined1 **)(puVar2 + -0x50) = unaff_x26;
              *(undefined1 **)(puVar2 + -0x48) = unaff_x25;
              *(long **)(puVar2 + -0x40) = unaff_x24;
              *(undefined1 **)(puVar2 + -0x38) = unaff_x23;
              *(ulong *)(puVar2 + -0x30) = unaff_x22;
              *(ulong *)(puVar2 + -0x28) = uVar16;
              *(undefined8 **)(puVar2 + -0x20) = puVar5;
              *(long **)(puVar2 + -0x18) = plVar15;
              *(undefined1 **)(puVar2 + -0x10) = puVar17;
              *(undefined8 *)(puVar2 + -8) = uVar18;
              puVar17 = puVar2 + -0x10;
              uVar14 = *puVar11 ^ 0x8000000000000000;
              if (-1 < (long)*puVar11) {
                uVar14 = 5;
              }
              if ((long)uVar14 < 3) break;
              if (uVar14 == 3) {
                uVar16 = puVar11[2];
                puVar5 = (undefined8 *)puVar11[3];
                if (puVar5 == (undefined8 *)0x0) {
                  lVar10 = 1;
LAB_100684388:
                  _memcpy(lVar10,uVar16,puVar5);
                  *plVar6 = -0x8000000000000000;
                  plVar6[1] = (long)puVar5;
                  plVar6[2] = lVar10;
                  plVar6[3] = (long)puVar5;
                  return;
                }
                lVar10 = _malloc(puVar5);
                if (lVar10 != 0) goto LAB_100684388;
                FUN_107c03c64(1,puVar5);
                unaff_x22 = 0;
                puVar11 = extraout_x1_00;
                goto LAB_100684158;
              }
              unaff_x24 = (long *)(puVar2 + -0x140);
              plVar15 = plVar6;
              if (uVar14 == 4) {
                unaff_x22 = puVar11[3];
                uVar16 = unaff_x22 * 0x50;
                if (0x199999999999999 < unaff_x22) {
                  FUN_107c03c64(0,uVar16);
                  goto LAB_100684114;
                }
                puVar5 = (undefined8 *)puVar11[2];
                if (uVar16 != 0) {
                  lVar10 = _malloc(uVar16);
                  if (lVar10 != 0) {
                    *(ulong *)(puVar2 + -0x140) = unaff_x22;
                    *(long *)(puVar2 + -0x138) = lVar10;
                    *(undefined8 *)(puVar2 + -0x130) = 0;
                    goto joined_r0x0001006844a8;
                  }
                  FUN_107c03c64(8,uVar16);
                  goto LAB_10068468c;
                }
                *(undefined8 *)(puVar2 + -0x140) = 0;
                *(undefined8 *)(puVar2 + -0x138) = 8;
                *(undefined8 *)(puVar2 + -0x130) = 0;
joined_r0x0001006844a8:
                if (unaff_x22 == 0) {
                  lVar10 = *unaff_x24;
                  plVar6[2] = *(long *)(puVar2 + -0x138);
                  plVar6[1] = lVar10;
                  plVar6[3] = *(long *)(puVar2 + -0x130);
                  *plVar6 = -0x7ffffffffffffffb;
                  return;
                }
                uVar16 = 0x8000000000000006;
                unaff_x22 = unaff_x22 * 0x48;
                unaff_x23 = puVar2 + -0xd0;
                unaff_x25 = puVar2 + -0x208;
                unaff_x26 = (undefined1 *)0x8000000000000004;
                unaff_x27 = 0x50;
                auVar23._8_8_ = puVar5;
                auVar23._0_8_ = puVar2 + -0xd0;
                uVar18 = 0x100684518;
                puVar2 = puVar2 + -0x210;
              }
              else {
                auVar23 = (*
                          ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                          )();
                pauVar7 = auVar23._0_8_;
                if (pauVar7[1][0] == '\x01') {
                  auVar24 = *pauVar7;
                }
                else {
                  auVar24 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                  *(long *)(*pauVar7 + 8) = auVar24._8_8_;
                  pauVar7[1][0] = 1;
                }
                *(undefined8 *)(puVar2 + -0x1e8) = 0;
                *(undefined **)(puVar2 + -0x1f0) = &UNK_109beca68;
                *(undefined8 *)(puVar2 + -0x1d8) = 0;
                *(undefined8 *)(puVar2 + -0x1e0) = 0;
                *(long *)*pauVar7 = auVar24._0_8_ + 1;
                *(undefined8 *)(puVar2 + -0x208) = 0;
                *(undefined8 *)(puVar2 + -0x200) = 8;
                *(undefined8 *)(puVar2 + -0x1f8) = 0;
                *(undefined1 (*) [16])(puVar2 + -0x1d0) = auVar24;
                *(undefined2 *)(puVar2 + -0x1c0) = 0;
                puVar2[-0x1be] = 0;
                unaff_x27 = 0x8000000000000000;
                *(undefined8 *)(puVar2 + -0x1b8) = 0x8000000000000000;
                lVar10 = *(long *)(auVar23._8_8_ + 0x10);
                if (lVar10 == 0) {
                  *(undefined8 *)(puVar2 + -200) = *(undefined8 *)(puVar2 + -0x1e0);
                  *(undefined8 *)(puVar2 + -0xd0) = *(undefined8 *)(puVar2 + -0x1e8);
                  *(undefined8 *)(puVar2 + -0xb8) = *(undefined8 *)(puVar2 + -0x1d0);
                  *(undefined8 *)(puVar2 + -0xc0) = *(undefined8 *)(puVar2 + -0x1d8);
                  *(undefined8 *)(puVar2 + -0xa8) = *(undefined8 *)(puVar2 + -0x1c0);
                  *(undefined8 *)(puVar2 + -0xb0) = *(undefined8 *)(puVar2 + -0x1c8);
                  lVar10 = *(long *)(puVar2 + -0x200);
                  plVar6[2] = *(long *)(puVar2 + -0x1f8);
                  plVar6[1] = lVar10;
                  plVar6[3] = *(long *)(puVar2 + -0x1f0);
                  lVar10 = *(long *)(puVar2 + -0xd0);
                  lVar9 = *(long *)(puVar2 + -0xb8);
                  lVar12 = *(long *)(puVar2 + -0xc0);
                  plVar6[5] = *(long *)(puVar2 + -200);
                  plVar6[4] = lVar10;
                  plVar6[7] = lVar9;
                  plVar6[6] = lVar12;
                  lVar10 = *(long *)(puVar2 + -0xb0);
                  plVar6[9] = *(long *)(puVar2 + -0xa8);
                  plVar6[8] = lVar10;
                  *plVar6 = 0;
                  return;
                }
                unaff_x28 = lVar10 * 0x68;
                lVar10 = *(long *)(auVar23._8_8_ + 8);
                unaff_x25 = (undefined1 *)0x8000000000000006;
                unaff_x26 = puVar2 + -0xd0;
                puVar5 = (undefined8 *)(lVar10 + 0x18);
                unaff_x23 = *(undefined1 **)(lVar10 + 8);
                uVar16 = *(ulong *)(lVar10 + 0x10);
                if (uVar16 == 0) {
                  unaff_x22 = 1;
                }
                else {
                  unaff_x22 = _malloc(uVar16);
                  if (unaff_x22 == 0) {
                    FUN_107c03c64(1,uVar16);
                    goto LAB_10068467c;
                  }
                }
                _memcpy(unaff_x22,unaff_x23,uVar16);
                if (*(long *)(puVar2 + -0x1b8) == -0x8000000000000000 ||
                    *(long *)(puVar2 + -0x1b8) == 0) {
                  *(ulong *)(puVar2 + -0x1b0) = unaff_x22;
                  *(ulong *)(puVar2 + -0x1a8) = uVar16;
                  *(undefined8 *)(puVar2 + -0x1b8) = 0x8000000000000000;
                }
                else {
                  _free(*(undefined8 *)(puVar2 + -0x1b0));
                  *(ulong *)(puVar2 + -0x1b0) = unaff_x22;
                  *(ulong *)(puVar2 + -0x1a8) = uVar16;
                  *(undefined8 *)(puVar2 + -0x1b8) = 0x8000000000000000;
                }
                if (uVar16 == 0x8000000000000000) {
                  FUN_107c05cac(&UNK_108cd2aad,0x2b,&UNK_10b24a320);
LAB_10068467c:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100684680);
                  (*pcVar1)();
                }
                auVar23._8_8_ = puVar5;
                auVar23._0_8_ = puVar2 + -400;
                uVar18 = 0x100684278;
                puVar2 = puVar2 + -0x210;
              }
            }
            if (uVar14 == 0) {
LAB_100684114:
              plVar6[2] = (long)&UNK_108cde568;
              plVar6[3] = 4;
              lVar10 = -0x8000000000000000;
              goto LAB_10068412c;
            }
            if (uVar14 == 1) {
              uVar14 = puVar11[1];
              *plVar6 = -0x7ffffffffffffffd;
              *(char *)(plVar6 + 1) = (char)uVar14;
              return;
            }
LAB_100684158:
            if (puVar11[1] != 0) {
              if (puVar11[1] != 1) {
                dVar19 = (double)puVar11[2];
                dVar20 = ABS(dVar19);
                if (!NAN(dVar19)) {
                  dVar20 = dVar19;
                }
                *plVar6 = -0x7ffffffffffffffe;
                plVar6[1] = (long)dVar20;
                return;
              }
              uVar14 = puVar11[2];
LAB_1006843f4:
              *plVar6 = -0x7fffffffffffffff;
              plVar6[1] = uVar14;
              return;
            }
            uVar14 = puVar11[2];
            if (-1 < (long)uVar14) goto LAB_1006843f4;
            puVar8 = (undefined8 *)_malloc(0x17);
            if (puVar8 != (undefined8 *)0x0) {
              puVar8[1] = 0x6f74207361772065;
              *puVar8 = 0x756c617620343675;
              *(undefined8 *)((long)puVar8 + 0xf) = 0x656772616c206f6f;
              plVar6[2] = (long)puVar8;
              plVar6[3] = 0x17;
              lVar10 = 0x17;
LAB_10068412c:
              plVar6[1] = lVar10;
              *plVar6 = -0x7ffffffffffffffa;
              return;
            }
LAB_10068468c:
            lVar10 = FUN_107c03c64(1,0x17);
            if ((*(ulong *)(puVar2 + -0x1b8) & 0x7fffffffffffffff) != 0) {
              puVar5 = *(undefined8 **)(puVar2 + -0x1b0);
              _free(puVar5);
              __Unwind_Resume(lVar10);
              lVar10 = FUN_107c05ccc();
              FUN_100e11a90(puVar2 + -0x140);
            }
            __Unwind_Resume(lVar10);
            uVar18 = 0x100684748;
            auVar24 = FUN_107c05ccc();
            puVar2 = puVar2 + -0x210;
            do {
              puVar11 = auVar24._8_8_;
              puVar8 = auVar24._0_8_;
              *(undefined1 **)(puVar2 + -0x50) = unaff_x26;
              *(undefined1 **)(puVar2 + -0x48) = unaff_x25;
              *(long **)(puVar2 + -0x40) = unaff_x24;
              *(undefined1 **)(puVar2 + -0x38) = unaff_x23;
              *(ulong *)(puVar2 + -0x30) = unaff_x22;
              *(ulong *)(puVar2 + -0x28) = uVar16;
              *(undefined8 **)(puVar2 + -0x20) = puVar5;
              *(long *)(puVar2 + -0x18) = lVar10;
              *(undefined1 **)(puVar2 + -0x10) = puVar17;
              *(undefined8 *)(puVar2 + -8) = uVar18;
              uVar14 = *puVar11 ^ 0x8000000000000000;
              if (-1 < (long)*puVar11) {
                uVar14 = 5;
              }
              if ((long)uVar14 < 3) {
                if (uVar14 == 0) {
                  *puVar8 = 0x8000000000000000;
                  return;
                }
                if (uVar14 == 1) {
                  uVar14 = puVar11[1];
                  *puVar8 = 0x8000000000000001;
                  *(char *)(puVar8 + 1) = (char)uVar14;
                  return;
                }
LAB_100684804:
                lVar10 = auVar24._8_8_;
                puVar5 = auVar24._0_8_;
                if (*(long *)(lVar10 + 8) == 0) {
                  uVar18 = *(undefined8 *)(lVar10 + 0x10);
                  puVar5[1] = 0;
                  *puVar5 = 0x8000000000000002;
                  puVar5[2] = uVar18;
                  return;
                }
                if (*(long *)(lVar10 + 8) != 1) {
                  uVar14 = *(ulong *)(lVar10 + 0x10);
                  *(undefined8 *)(puVar2 + -0xb0) = 0x8000000000000000;
                  if ((uVar14 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
                    puVar5[2] = uVar14;
                    puVar5[1] = 2;
                    *puVar5 = 0x8000000000000002;
                    FUN_105dc6c20(puVar2 + -0xb0);
                    return;
                  }
                  uVar18 = *(undefined8 *)(puVar2 + -0x90);
                  uVar21 = *(undefined8 *)(puVar2 + -0x78);
                  uVar3 = *(undefined8 *)(puVar2 + -0x80);
                  puVar5[5] = *(undefined8 *)(puVar2 + -0x88);
                  puVar5[4] = uVar18;
                  puVar5[7] = uVar21;
                  puVar5[6] = uVar3;
                  puVar5[8] = *(undefined8 *)(puVar2 + -0x70);
                  uVar21 = *(undefined8 *)(puVar2 + -0xb0);
                  uVar3 = *(undefined8 *)(puVar2 + -0x98);
                  uVar18 = *(undefined8 *)(puVar2 + -0xa0);
                  puVar5[1] = *(undefined8 *)(puVar2 + -0xa8);
                  *puVar5 = uVar21;
                  puVar5[3] = uVar3;
                  puVar5[2] = uVar18;
                  return;
                }
                uVar14 = *(ulong *)(lVar10 + 0x10);
                *puVar5 = 0x8000000000000002;
                puVar5[1] = uVar14 >> 0x3f;
                puVar5[2] = uVar14;
                return;
              }
              if (uVar14 == 3) {
                uVar14 = puVar11[2];
                uVar16 = puVar11[3];
                if (uVar16 == 0) {
                  lVar10 = 1;
                }
                else {
                  lVar10 = _malloc(uVar16);
                  if (lVar10 == 0) {
                    auVar24 = FUN_107c03c64(1,uVar16);
                    goto LAB_100684804;
                  }
                }
                _memcpy(lVar10,uVar14,uVar16);
                *puVar8 = 0x8000000000000003;
                puVar8[1] = uVar16;
                puVar8[2] = lVar10;
                puVar8[3] = uVar16;
                return;
              }
              if (uVar14 != 4) {
                auVar23 = (*
                          ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                          )(&
                            __ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                            ,puVar11[6]);
                pauVar7 = auVar23._0_8_;
                if (pauVar7[1][0] == '\x01') {
                  auVar24 = *pauVar7;
                }
                else {
                  auVar24 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
                  *(long *)(*pauVar7 + 8) = auVar24._8_8_;
                  pauVar7[1][0] = 1;
                }
                *(long *)*pauVar7 = auVar24._0_8_ + 1;
                FUN_105dc99f8(puVar2 + -0xb0,auVar23._8_8_,auVar24._0_8_,auVar24._8_8_);
                *(undefined8 *)(puVar2 + -0x68) = 0x8000000000000000;
                if (*(long *)(puVar2 + -0xb0) == -0x7fffffffffffffff) {
                  uVar18 = *(undefined8 *)(puVar2 + -0xa8);
                  *puVar8 = 0x8000000000000005;
                  puVar8[1] = uVar18;
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
                uVar14 = puVar11[1];
                lVar10 = puVar11[2] * 0x68;
                *(undefined8 *)(puVar2 + -0x108) = *(undefined8 *)(puVar2 + -0xa8);
                *(undefined8 *)(puVar2 + -0x110) = *(undefined8 *)(puVar2 + -0xb0);
                *(undefined8 *)(puVar2 + -0xf8) = *(undefined8 *)(puVar2 + -0x98);
                *(undefined8 *)(puVar2 + -0x100) = *(undefined8 *)(puVar2 + -0xa0);
                goto LAB_1006848c0;
              }
              auVar22._8_8_ = puVar11 + 1;
              auVar22._0_8_ = puVar8;
              uVar18 = *(undefined8 *)(puVar2 + -0x30);
              unaff_x24 = *(long **)(puVar2 + -0x40);
              unaff_x26 = *(undefined1 **)(puVar2 + -0x50);
              unaff_x25 = *(undefined1 **)(puVar2 + -0x48);
              *(long **)(puVar2 + -0x40) = unaff_x24;
              *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
              *(undefined8 *)(puVar2 + -0x30) = uVar18;
              *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
              *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
              *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
              *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
              *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
              puVar17 = puVar2 + -0x10;
              uVar14 = puVar11[3];
              lVar10 = uVar14 * 0x48;
              if (0x1c71c71c71c71c7 < uVar14) {
                auVar22 = FUN_107c03c64(0,lVar10);
              }
              puVar5 = auVar22._0_8_;
              uVar16 = *(ulong *)(auVar22._8_8_ + 8);
              if (lVar10 == 0) {
                *(undefined8 *)(puVar2 + -0xa0) = 0;
                *(undefined8 *)(puVar2 + -0x98) = 8;
                *(undefined8 *)(puVar2 + -0x90) = 0;
              }
              else {
                lVar12 = _malloc(lVar10);
                if (lVar12 == 0) {
                  uVar3 = FUN_107c03c64(8,lVar10);
                  FUN_100de6690(puVar2 + -0x88);
                  FUN_100e238ac(puVar2 + -0xa0);
                  __Unwind_Resume(uVar3);
                  auVar23 = FUN_107c05ccc();
                  plVar15 = auVar23._0_8_;
                  *(long *)(puVar2 + -0xe0) = unaff_x28;
                  *(undefined8 *)(puVar2 + -0xd8) = unaff_x27;
                  *(undefined8 *)(puVar2 + -0xd0) = uVar18;
                  *(ulong *)(puVar2 + -200) = uVar16;
                  *(undefined8 **)(puVar2 + -0xc0) = puVar5;
                  *(undefined8 *)(puVar2 + -0xb8) = uVar3;
                  *(undefined1 **)(puVar2 + -0xb0) = puVar17;
                  *(undefined8 *)(puVar2 + -0xa8) = 0x10063474c;
                  if (*plVar15 == -0x8000000000000000) {
                    __ZN4core9panicking5panic17h30f5ec71e3af4326E
                              (&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
                  }
                  else {
                    puVar8 = (undefined8 *)_malloc(0x10);
                    puVar5 = auVar23._8_8_;
                    if (puVar8 != (undefined8 *)0x0) {
                      puVar8[1] = 0x6e65657263735f65;
                      *puVar8 = 0x74616e7265746c61;
                      if (plVar15[9] != -0x8000000000000000 && plVar15[9] != 0) {
                        _free(plVar15[10]);
                      }
                      plVar15[10] = (long)puVar8;
                      plVar15[0xb] = 0x10;
                      plVar15[9] = -0x8000000000000000;
                      lVar10 = plVar15[10];
                      *(long *)(puVar2 + -0x180) = plVar15[0xb];
                      *(long *)(puVar2 + -0x188) = lVar10;
                      *(undefined8 *)(puVar2 + -400) = 0x10;
                      if (((ulong)auVar23._8_8_ & 0xff) == 0) {
                        puVar5 = (undefined8 *)0x4;
                        puVar4 = (undefined4 *)_malloc(4);
                        if (puVar4 != (undefined4 *)0x0) {
                          *puVar4 = 0x6f747561;
                          uVar18 = 4;
                          goto LAB_100634860;
                        }
                      }
                      else if ((auVar23._8_4_ & 0xff) == 1) {
                        puVar5 = (undefined8 *)0x6;
                        puVar4 = (undefined4 *)_malloc(6);
                        if (puVar4 != (undefined4 *)0x0) {
                          *(undefined2 *)(puVar4 + 1) = 0x7379;
                          *puVar4 = 0x61776c61;
                          uVar18 = 6;
LAB_100634860:
                          *(undefined8 *)(puVar2 + -0x178) = 0x8000000000000003;
                          *(undefined8 *)(puVar2 + -0x170) = uVar18;
                          *(undefined4 **)(puVar2 + -0x168) = puVar4;
                          *(undefined8 *)(puVar2 + -0x160) = uVar18;
                          FUN_101497a9c(puVar2 + -0x130,plVar15,puVar2 + -400,puVar2 + -0x178);
                          *(undefined8 *)(puVar2 + -0x1d8) = *(undefined8 *)(puVar2 + -0x120);
                          *(undefined8 *)(puVar2 + -0x1e0) = *(undefined8 *)(puVar2 + -0x128);
                          *(undefined8 *)(puVar2 + -0x1c8) = *(undefined8 *)(puVar2 + -0x110);
                          *(undefined8 *)(puVar2 + -0x1d0) = *(undefined8 *)(puVar2 + -0x118);
                          *(undefined8 *)(puVar2 + -0x1b8) = *(undefined8 *)(puVar2 + -0x100);
                          *(undefined8 *)(puVar2 + -0x1c0) = *(undefined8 *)(puVar2 + -0x108);
                          *(undefined8 *)(puVar2 + -0x1a8) = *(undefined8 *)(puVar2 + -0xf0);
                          *(undefined8 *)(puVar2 + -0x1b0) = *(undefined8 *)(puVar2 + -0xf8);
                          *(undefined8 *)(puVar2 + -0x1a0) = *(undefined8 *)(puVar2 + -0xe8);
                          if (*(long *)(puVar2 + -0x1e0) != -0x7ffffffffffffffb) {
                            FUN_100de6690(puVar2 + -0x1e0);
                          }
                          return;
                        }
                      }
                      else {
                        puVar5 = (undefined8 *)0x5;
                        puVar4 = (undefined4 *)_malloc(5);
                        if (puVar4 != (undefined4 *)0x0) {
                          *(undefined1 *)(puVar4 + 1) = 0x72;
                          *puVar4 = 0x6576656e;
                          uVar18 = 5;
                          goto LAB_100634860;
                        }
                      }
                      goto LAB_1006348fc;
                    }
                  }
                  FUN_107c03c64(1,0x10);
LAB_1006348fc:
                  FUN_107c03c64(1,puVar5);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063490c);
                  (*pcVar1)();
                }
                *(ulong *)(puVar2 + -0xa0) = uVar14;
                *(long *)(puVar2 + -0x98) = lVar12;
                *(undefined8 *)(puVar2 + -0x90) = 0;
              }
              if (uVar14 == 0) {
                uVar18 = *(undefined8 *)(puVar2 + -0xa0);
                puVar5[2] = *(undefined8 *)(puVar2 + -0x98);
                puVar5[1] = uVar18;
                puVar5[3] = *(undefined8 *)(puVar2 + -0x90);
                *puVar5 = 0x8000000000000004;
                return;
              }
              unaff_x22 = 0x8000000000000005;
              unaff_x23 = (undefined1 *)0x48;
              auVar24._8_8_ = uVar16;
              auVar24._0_8_ = puVar2 + -0x88;
              uVar18 = 0x100634640;
              puVar2 = puVar2 + -0xa0;
            } while( true );
          }
          (acStack_69 + 1)[(long)puVar5] = '-';
        }
        uVar14 = 0x14 - (long)puVar5;
        lVar10 = plVar15[2];
        if ((ulong)(*plVar15 - lVar10) < uVar14) {
          thunk_FUN_108855060(plVar15,lVar10,uVar14,1,1);
          lVar10 = plVar15[2];
        }
        _memcpy(plVar15[1] + lVar10,acStack_69 + 1 + (long)puVar5,uVar14);
        lVar10 = lVar10 + uVar14;
        goto LAB_100683f50;
      }
      if ((param_1[2] & 0x7fffffffffffffff) < 0x7ff0000000000000) {
        lVar10 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                           (acStack_69 + 1);
        uVar14 = lVar10 - (long)(acStack_69 + 1);
        lVar10 = plVar15[2];
        if ((ulong)(*plVar15 - lVar10) < uVar14) {
          thunk_FUN_108855060(plVar15,lVar10,uVar14,1,1);
          lVar10 = plVar15[2];
        }
        _memcpy(plVar15[1] + lVar10,acStack_69 + 1,uVar14);
        lVar10 = lVar10 + uVar14;
        goto LAB_100683f50;
      }
      goto LAB_100683b8c;
    }
    plVar15 = (long *)*param_2;
    if ((param_1[1] & 1) == 0) {
      lVar10 = plVar15[2];
      if ((ulong)(*plVar15 - lVar10) < 5) {
        thunk_FUN_108855060(plVar15,lVar10,5,1,1);
        lVar10 = plVar15[2];
      }
      lVar12 = plVar15[1];
      *(undefined4 *)(lVar12 + lVar10) = 0x736c6166;
      *(undefined1 *)((undefined4 *)(lVar12 + lVar10) + 1) = 0x65;
      lVar10 = lVar10 + 5;
      goto LAB_100683f50;
    }
    lVar10 = plVar15[2];
    if ((ulong)(*plVar15 - lVar10) < 4) {
      thunk_FUN_108855060(plVar15,lVar10,4,1,1);
      lVar10 = plVar15[2];
    }
    lVar12 = plVar15[1];
    uVar13 = 0x65757274;
  }
  *(undefined4 *)(lVar12 + lVar10) = uVar13;
  lVar10 = lVar10 + 4;
LAB_100683f50:
  plVar15[2] = lVar10;
  return;
  while( true ) {
    *(long *)(puVar2 + -200) = lVar12;
    *(long *)(puVar2 + -0xc0) = lVar9;
    *(long *)(puVar2 + -0xb8) = lVar12;
    lVar9 = func_0x0001013ec844(puVar2 + -0x110,uVar14 + 0x18);
    uVar14 = uVar14 + 0x68;
    lVar10 = lVar10 + -0x68;
    if (lVar9 != 0) break;
LAB_1006848c0:
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
      if (*(long *)(puVar2 + -0xb0) != -0x8000000000000000) {
        uVar18 = *(undefined8 *)(puVar2 + -0xf0);
        uVar21 = *(undefined8 *)(puVar2 + -0xd8);
        uVar3 = *(undefined8 *)(puVar2 + -0xe0);
        puVar8[5] = *(undefined8 *)(puVar2 + -0xe8);
        puVar8[4] = uVar18;
        puVar8[7] = uVar21;
        puVar8[6] = uVar3;
        puVar8[8] = *(undefined8 *)(puVar2 + -0xd0);
        uVar21 = *(undefined8 *)(puVar2 + -0x110);
        uVar3 = *(undefined8 *)(puVar2 + -0xf8);
        uVar18 = *(undefined8 *)(puVar2 + -0x100);
        puVar8[1] = *(undefined8 *)(puVar2 + -0x108);
        *puVar8 = uVar21;
        puVar8[3] = uVar3;
        puVar8[2] = uVar18;
        if ((*(ulong *)(puVar2 + -0x68) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(puVar2 + -0x60));
          return;
        }
        return;
      }
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a4e0);
LAB_100684ae4:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100684ae8);
      (*pcVar1)();
    }
    if (*(long *)(puVar2 + -0x110) == -0x8000000000000000) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
      goto LAB_100684ae4;
    }
    lVar12 = *(long *)(uVar14 + 0x10);
    if (lVar12 == 0) {
      lVar9 = 1;
      if (*(long *)(puVar2 + -200) != -0x8000000000000000 && *(long *)(puVar2 + -200) != 0) {
LAB_10068494c:
        _free(*(undefined8 *)(puVar2 + -0xc0));
      }
    }
    else {
      uVar18 = *(undefined8 *)(uVar14 + 8);
      lVar9 = _malloc(lVar12);
      if (lVar9 == 0) {
        FUN_107c03c64(1,lVar12);
        goto LAB_100684ae4;
      }
      _memcpy(lVar9,uVar18,lVar12);
      if (lVar12 == -0x8000000000000000) break;
      if (*(long *)(puVar2 + -200) != -0x8000000000000000 && *(long *)(puVar2 + -200) != 0)
      goto LAB_10068494c;
    }
  }
  *puVar8 = 0x8000000000000005;
  puVar8[1] = lVar9;
  FUN_100e040f0(puVar2 + -0x110);
  return;
}

