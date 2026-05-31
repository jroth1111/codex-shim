
long * FUN_1049d6d68(undefined1 param_1 [16],undefined1 param_2 [16],long *param_3,long param_4,
                    long param_5)

{
  long lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *extraout_x8;
  undefined *puVar15;
  ulong extraout_x9;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *unaff_x24;
  long lVar20;
  undefined *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long lVar21;
  undefined1 auVar22 [16];
  long lStack_1e8;
  undefined8 *puStack_1e0;
  byte bStack_1d8;
  byte bStack_1d7;
  long lStack_180;
  long *plStack_178;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar14 = param_2._8_8_;
  uVar9 = param_2._0_8_;
  if (param_5 == 0) {
    lStack_c8 = 0;
    plStack_c0 = (long *)0x8;
    plVar8 = param_3;
  }
  else {
    lVar19 = param_5 * 0x48;
    lVar21 = param_5;
    plVar7 = (long *)_malloc(lVar19);
    if (plVar7 == (long *)0x0) {
      uVar9 = func_0x0001087c9084(8,lVar19);
      FUN_1049a54c0(&lStack_c8);
      __Unwind_Resume(uVar9);
      func_0x000108a07bc4();
      auVar22 = func_0x000108a07bc4();
      lVar19 = auVar22._8_8_;
      plVar8 = auVar22._0_8_;
      if (lVar21 == 0) {
        lStack_180 = 0;
        plStack_178 = (long *)0x8;
        plVar7 = plVar8;
      }
      else {
        lVar1 = lVar21 * 0x38;
        plVar10 = (long *)_malloc(lVar1);
        if (plVar10 == (long *)0x0) {
          uVar9 = func_0x0001087c9084(8,lVar1);
          FUN_1049a7af0(&lStack_180);
          auVar22 = __Unwind_Resume(uVar9);
          puVar12 = auVar22._8_8_;
          lStack_1e8 = auVar22._0_8_ + 0x18;
          bStack_1d8 = (**(code **)(puVar12[1] + 0x18))(*puVar12,&UNK_108e6425d,0xc);
          bStack_1d7 = 0;
          puStack_1e0 = puVar12;
          __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
                    (&puStack_1e0,&UNK_108e521f6,4,auVar22._0_8_,&UNK_10b3405b0);
          __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
                    (&puStack_1e0,&UNK_108e64269,0x15,&lStack_1e8,&UNK_10b3405d0);
          uVar6 = (uint)(bStack_1d7 | bStack_1d8);
          if ((bStack_1d7 == 1) && ((bStack_1d8 & 1) == 0)) {
            if (*(char *)((long)puStack_1e0 + 0x12) < '\0') {
              uVar9 = *puStack_1e0;
              pcVar5 = *(code **)(puStack_1e0[1] + 0x18);
              puVar13 = &UNK_108f5894b;
              uVar14 = 1;
            }
            else {
              uVar9 = *puStack_1e0;
              pcVar5 = *(code **)(puStack_1e0[1] + 0x18);
              puVar13 = &UNK_108f5894c;
              uVar14 = 2;
            }
            uVar6 = (*pcVar5)(uVar9,puVar13,uVar14);
          }
          return (long *)(ulong)(uVar6 & 1);
        }
        lVar17 = 0;
        plVar7 = plVar10;
        uVar16 = extraout_x9;
        lVar18 = lVar21;
        lStack_180 = lVar21;
        plStack_178 = plVar10;
        do {
          if (lVar1 == lVar17) break;
          bVar4 = *(byte *)(lVar19 + lVar17);
          if (bVar4 < 2) {
            if (bVar4 != 0) {
              uVar9 = *(undefined8 *)(lVar19 + lVar17 + 0x10);
              lVar20 = *(long *)(lVar19 + lVar17 + 0x18);
              if (lVar20 == 0) goto LAB_1049d7000;
              lVar11 = _malloc(lVar20);
              if (lVar11 != 0) goto LAB_1049d7004;
LAB_1049d7228:
              func_0x0001087c9084(1,lVar20);
LAB_1049d7264:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1049d7268);
              (*pcVar5)();
            }
            lVar18 = lVar19 + lVar17;
            uVar9 = *(undefined8 *)(lVar18 + 0x10);
            lVar20 = *(long *)(lVar18 + 0x18);
            if (lVar20 == 0) {
              lVar11 = 1;
            }
            else {
              lVar11 = _malloc(lVar20);
              if (lVar11 == 0) goto LAB_1049d7228;
            }
            _memcpy(lVar11,uVar9,lVar20);
            plVar7 = (long *)func_0x0001049bf7bc(&lStack_168,*(undefined8 *)(lVar18 + 0x28),
                                                 *(undefined8 *)(lVar18 + 0x30));
            lVar18 = lStack_168;
            unaff_x26 = lStack_158;
            unaff_x27 = lStack_160;
LAB_1049d71e4:
            uVar16 = uVar16 & 0xffffffff;
          }
          else {
            if (bVar4 != 2) {
              lVar18 = lVar19 + lVar17;
              if (bVar4 == 3) {
                uVar9 = *(undefined8 *)(lVar18 + 0x10);
                lVar20 = *(long *)(lVar18 + 0x18);
                if (lVar20 == 0) {
                  lVar11 = 1;
                  _memcpy(1,uVar9,0);
                  uVar9 = *(undefined8 *)(lVar18 + 0x28);
                  lVar18 = *(long *)(lVar18 + 0x30);
                }
                else {
                  lVar11 = _malloc(lVar20);
                  if (lVar11 == 0) goto LAB_1049d7228;
                  _memcpy(lVar11,uVar9,lVar20);
                  uVar9 = *(undefined8 *)(lVar18 + 0x28);
                  lVar18 = *(long *)(lVar18 + 0x30);
                }
                if (lVar18 == 0) {
LAB_1049d719c:
                  unaff_x27 = 1;
                }
                else {
                  unaff_x27 = _malloc(lVar18);
                  if (unaff_x27 == 0) {
                    func_0x0001087c9084(1,lVar18);
                    goto LAB_1049d7264;
                  }
                }
              }
              else {
                uVar9 = *(undefined8 *)(lVar18 + 0x10);
                lVar20 = *(long *)(lVar18 + 0x18);
                if (lVar20 == 0) {
                  lVar11 = 1;
                  _memcpy(1,uVar9,0);
                  uVar9 = *(undefined8 *)(lVar18 + 0x28);
                  lVar18 = *(long *)(lVar18 + 0x30);
                }
                else {
                  lVar11 = _malloc(lVar20);
                  if (lVar11 == 0) goto LAB_1049d7228;
                  _memcpy(lVar11,uVar9,lVar20);
                  uVar9 = *(undefined8 *)(lVar18 + 0x28);
                  lVar18 = *(long *)(lVar18 + 0x30);
                }
                if (lVar18 == 0) goto LAB_1049d719c;
                unaff_x27 = _malloc(lVar18);
                if (unaff_x27 == 0) {
                  func_0x0001087c9084(1,lVar18);
                  goto LAB_1049d7264;
                }
              }
              plVar7 = (long *)_memcpy(unaff_x27,uVar9,lVar18);
              unaff_x26 = lVar18;
              goto LAB_1049d71e4;
            }
            uVar9 = *(undefined8 *)(lVar19 + lVar17 + 0x10);
            lVar20 = *(long *)(lVar19 + lVar17 + 0x18);
            if (lVar20 == 0) {
LAB_1049d7000:
              lVar11 = 1;
            }
            else {
              lVar11 = _malloc(lVar20);
              if (lVar11 == 0) {
                func_0x0001087c9084(1,lVar20);
                goto LAB_1049d7264;
              }
            }
LAB_1049d7004:
            plVar7 = (long *)_memcpy(lVar11,uVar9,lVar20);
            uVar16 = (ulong)*(byte *)(lVar19 + lVar17 + 1);
          }
          pbVar2 = (byte *)((long)plVar10 + lVar17);
          *pbVar2 = bVar4;
          pbVar2[1] = (byte)uVar16;
          *(long *)(pbVar2 + 8) = lVar20;
          *(long *)(pbVar2 + 0x10) = lVar11;
          *(long *)(pbVar2 + 0x18) = lVar20;
          *(long *)(pbVar2 + 0x20) = lVar18;
          lVar17 = lVar17 + 0x38;
          *(long *)(pbVar2 + 0x28) = unaff_x27;
          *(long *)(pbVar2 + 0x30) = unaff_x26;
        } while (lVar1 != lVar17);
      }
      plVar8[1] = (long)plStack_178;
      *plVar8 = lStack_180;
      plVar8[2] = lVar21;
      return plVar7;
    }
    lVar21 = 0;
    plVar8 = plVar7;
    puVar13 = extraout_x8;
    lStack_c8 = param_5;
    plStack_c0 = plVar7;
    do {
      if (lVar19 - lVar21 == 0) break;
      puVar15 = *(undefined **)(param_4 + lVar21);
      uVar16 = (ulong)puVar15 ^ 0x8000000000000000;
      if (-1 < (long)puVar15) {
        uVar16 = 5;
      }
      if ((long)uVar16 < 3) {
        if (uVar16 == 0) {
          puVar15 = (undefined *)0x8000000000000000;
        }
        else {
          lVar1 = param_4 + lVar21;
          uStack_a8 = *(undefined8 *)(lVar1 + 0x28);
          uStack_b0 = *(undefined8 *)(lVar1 + 0x20);
          uStack_a0 = *(undefined8 *)(lVar1 + 0x30);
          puVar13 = *(undefined **)(lVar1 + 0x18);
          unaff_x24 = *(undefined **)(lVar1 + 8);
          unaff_x25 = *(undefined **)(lVar1 + 0x10);
LAB_1049d6eec:
          uVar14 = *(undefined8 *)(param_4 + lVar21 + 0x40);
          uVar9 = *(undefined8 *)(param_4 + lVar21 + 0x38);
        }
      }
      else if (uVar16 == 3) {
        uVar3 = *(undefined8 *)(param_4 + lVar21 + 0x10);
        puVar13 = *(undefined **)(param_4 + lVar21 + 0x18);
        if (puVar13 == (undefined *)0x0) {
          unaff_x25 = (undefined *)0x1;
        }
        else {
          unaff_x25 = (undefined *)_malloc(puVar13);
          if (unaff_x25 == (undefined *)0x0) {
            func_0x0001087c9084(1,puVar13);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1049d6f64);
            (*pcVar5)();
          }
        }
        plVar8 = (long *)_memcpy(unaff_x25,uVar3,puVar13);
        puVar15 = (undefined *)0x8000000000000003;
        unaff_x24 = puVar13;
      }
      else {
        if (uVar16 != 4) {
          uStack_78 = 0;
          puStack_80 = &UNK_108c56c70;
          uStack_68 = 0;
          uStack_70 = 0;
          puStack_98 = (undefined *)0x0;
          puStack_90 = (undefined *)0x8;
          puStack_88 = (undefined *)0x0;
          plVar8 = (long *)FUN_1049c8138(&puStack_98,param_4 + lVar21);
          uStack_a8 = uStack_70;
          uStack_b0 = uStack_78;
          uStack_a0 = uStack_68;
          puVar13 = puStack_80;
          puVar15 = puStack_98;
          unaff_x24 = puStack_90;
          unaff_x25 = puStack_88;
          goto LAB_1049d6eec;
        }
        plVar8 = (long *)FUN_1049d6d68(&puStack_98,*(undefined8 *)(param_4 + lVar21 + 0x10),
                                       *(undefined8 *)(param_4 + lVar21 + 0x18));
        puVar15 = (undefined *)0x8000000000000004;
        puVar13 = puStack_88;
        unaff_x24 = puStack_98;
        unaff_x25 = puStack_90;
      }
      puVar12 = (undefined8 *)((long)plVar7 + lVar21);
      *puVar12 = puVar15;
      puVar12[1] = unaff_x24;
      puVar12[2] = unaff_x25;
      puVar12[3] = puVar13;
      puVar12[5] = uStack_a8;
      puVar12[4] = uStack_b0;
      puVar12[6] = uStack_a0;
      puVar12[8] = uVar14;
      puVar12[7] = uVar9;
      lVar21 = lVar21 + 0x48;
    } while (lVar19 - lVar21 != 0);
  }
  param_3[1] = (long)plStack_c0;
  *param_3 = lStack_c8;
  param_3[2] = param_5;
  return plVar8;
}

