
void __ZN14codex_protocol6models17PermissionProfile41from_runtime_permissions_with_enforcement17hc0af54cc5e3b578bE
               (long *param_1,uint param_2,int *param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong *extraout_x8;
  undefined8 **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  ulong *puStack_1b8;
  undefined8 *puStack_1b0;
  char cStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined1 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  if ((char)param_3[10] == '\0') {
    lVar7 = *(long *)(param_3 + 8);
    if (lVar7 == 0) {
      puStack_98 = (undefined8 *)0x8;
    }
    else {
      lVar14 = *(long *)(param_3 + 6);
      lVar13 = lVar7 * 0x38;
      puVar2 = (undefined8 *)_malloc(lVar13);
      if (puVar2 == (undefined8 *)0x0) {
        uVar3 = func_0x0001087c9084(8,lVar13);
        FUN_1049a918c(&lStack_a0);
        auVar18 = __Unwind_Resume(uVar3);
        puVar4 = auVar18._0_8_;
        uVar17 = *puVar4;
        uVar6 = uVar17;
        if (uVar17 < 0x8000000000000001) {
          uVar6 = 0;
        }
        if ((uVar6 & 0x7fffffffffffffff) == 0) {
          uVar6 = puVar4[4];
          if (uVar17 == 0x8000000000000000) {
            puVar11 = (undefined8 *)0x0;
            puStack_1a0 = (undefined8 *)0x0;
            ppuVar8 = &puStack_180;
            puStack_190 = (undefined8 *)0x0;
            puStack_188 = (undefined8 *)0x8;
            uStack_178 = 1;
          }
          else {
            puVar2 = (undefined8 *)puVar4[2];
            puVar11 = (undefined8 *)puVar4[3];
            if (puVar2 == (undefined8 *)0x0) {
              puStack_1d0 = (undefined8 *)0x0;
              puStack_1c8 = (undefined8 *)0x8;
            }
            else {
              uVar9 = puVar4[1];
              lVar7 = (long)puVar2 * 0x38;
              puVar5 = (undefined8 *)_malloc(lVar7);
              if (puVar5 == (undefined8 *)0x0) {
                func_0x0001087c9084(8,lVar7);
                goto LAB_104923238;
              }
              puVar12 = (undefined8 *)0x0;
              puStack_1d0 = puVar2;
              puStack_1c8 = puVar5;
              do {
                if (lVar7 == 0) break;
                FUN_1049d0944(&uStack_158,uVar9);
                uStack_128 = *(undefined1 *)(uVar9 + 0x30);
                puVar5[1] = uStack_150;
                *puVar5 = uStack_158;
                puVar5[3] = uStack_140;
                puVar5[2] = uStack_148;
                puVar12 = (undefined8 *)((long)puVar12 + 1);
                uVar9 = uVar9 + 0x38;
                puVar5[5] = uStack_130;
                puVar5[4] = uStack_138;
                puVar5[6] = CONCAT71(uStack_127,uStack_128);
                lVar7 = lVar7 + -0x38;
                puVar5 = puVar5 + 7;
              } while (puVar2 != puVar12);
            }
            uStack_178 = 0;
            ppuVar8 = &puStack_198;
            puStack_188 = puStack_1c8;
            puStack_190 = puStack_1d0;
            puStack_1a0 = (undefined8 *)(ulong)(puVar11 != (undefined8 *)0x0);
            puStack_180 = puVar2;
          }
          *ppuVar8 = puVar11;
          func_0x0001048fe0c0(&puStack_1d0,&puStack_1a0,auVar18._8_8_);
          if (cStack_1a8 == '\0') {
            if (puStack_1b0 == (undefined8 *)0x0) {
              puStack_198 = (undefined8 *)0x8;
            }
            else {
              lVar7 = (long)puStack_1b0 * 0x38;
              puVar2 = (undefined8 *)_malloc(lVar7);
              if (puVar2 == (undefined8 *)0x0) {
                func_0x0001087c9084(8,lVar7);
                goto LAB_104923238;
              }
              puVar11 = (undefined8 *)0x0;
              puStack_1a0 = puStack_1b0;
              puVar15 = puStack_1b8;
              puStack_198 = puVar2;
              do {
                if (lVar7 == 0) break;
                FUN_1049d0944(&uStack_158,puVar15);
                uStack_128 = (undefined1)puVar15[6];
                puVar2[1] = uStack_150;
                *puVar2 = uStack_158;
                puVar2[3] = uStack_140;
                puVar2[2] = uStack_148;
                puVar11 = (undefined8 *)((long)puVar11 + 1);
                puVar15 = puVar15 + 7;
                puVar2[5] = uStack_130;
                puVar2[4] = uStack_138;
                puVar2[6] = CONCAT71(uStack_127,uStack_128);
                lVar7 = lVar7 + -0x38;
                puVar2 = puVar2 + 7;
              } while (puStack_1b0 != puVar11);
            }
            puStack_190 = puStack_1b0;
            puStack_168 = puStack_1b0;
            puStack_170 = puStack_198;
            puVar2 = puStack_1c8;
            puVar11 = puStack_1b0;
            if ((int)puStack_1d0 == 0) {
              puVar2 = (undefined8 *)0x0;
            }
          }
          else {
            if (cStack_1a8 != '\x01') {
              __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108e54fc3,0xeb,&UNK_10b33f960);
LAB_104923238:
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10492323c);
              (*pcVar1)();
            }
            puVar2 = (undefined8 *)0x1;
            puVar11 = (undefined8 *)0x8000000000000000;
          }
          *extraout_x8 = (ulong)puVar11;
          extraout_x8[2] = (ulong)puStack_168;
          extraout_x8[1] = (ulong)puStack_170;
          extraout_x8[3] = (ulong)puVar2;
          *(char *)(extraout_x8 + 4) = (char)uVar6;
          puVar15 = puStack_1b8;
          for (puVar2 = puStack_1b0; puVar2 != (undefined8 *)0x0;
              puVar2 = (undefined8 *)((long)puVar2 - 1)) {
            uVar6 = *puVar15;
            lVar7 = uVar6 + 0x7ffffffffffffffb;
            if (uVar6 < 0x8000000000000005) {
              lVar7 = 2;
            }
            if ((lVar7 == 0) || (lVar7 == 1)) {
              uVar6 = puVar15[1];
joined_r0x000104923068:
              if (uVar6 != 0) {
                lVar7 = 0x10;
LAB_104923070:
                _free(*(undefined8 *)((long)puVar15 + lVar7));
              }
            }
            else {
              uVar9 = uVar6 ^ 0x8000000000000000;
              if (-1 < (long)uVar6) {
                uVar9 = 5;
              }
              if (uVar9 < 5) {
                if (uVar9 == 2) {
                  uVar6 = puVar15[1] & 0x7fffffffffffffff;
                  goto joined_r0x000104923068;
                }
              }
              else {
                if (uVar6 != 0) {
                  _free(puVar15[1]);
                }
                if ((puVar15[3] & 0x7fffffffffffffff) != 0) {
                  lVar7 = 0x20;
                  goto LAB_104923070;
                }
              }
            }
            puVar15 = puVar15 + 7;
          }
          if (lStack_1c0 != 0) {
            _free(puStack_1b8);
          }
          if (uVar17 != 0x8000000000000000) {
            puVar15 = (ulong *)puVar4[1];
            uVar6 = puVar4[2];
            puVar4 = puVar15;
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              uVar9 = *puVar4;
              lVar7 = uVar9 + 0x7ffffffffffffffb;
              if (uVar9 < 0x8000000000000005) {
                lVar7 = 2;
              }
              if ((lVar7 == 0) || (lVar7 == 1)) {
                uVar9 = puVar4[1];
joined_r0x000104923130:
                if (uVar9 != 0) {
                  lVar7 = 0x10;
LAB_104923138:
                  _free(*(undefined8 *)((long)puVar4 + lVar7));
                }
              }
              else {
                uVar10 = uVar9 ^ 0x8000000000000000;
                if (-1 < (long)uVar9) {
                  uVar10 = 5;
                }
                if (uVar10 < 5) {
                  if (uVar10 == 2) {
                    uVar9 = puVar4[1] & 0x7fffffffffffffff;
                    goto joined_r0x000104923130;
                  }
                }
                else {
                  if (uVar9 != 0) {
                    _free(puVar4[1]);
                  }
                  if ((puVar4[3] & 0x7fffffffffffffff) != 0) {
                    lVar7 = 0x20;
                    goto LAB_104923138;
                  }
                }
              }
              puVar4 = puVar4 + 7;
            }
            if (uVar17 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__free_10b61b0a8)(puVar15);
              return;
            }
          }
        }
        else if ((uVar6 & 0x7fffffffffffffff) == 1) {
          *extraout_x8 = 0x8000000000000001;
        }
        else {
          uVar6 = *puVar4;
          uVar9 = puVar4[3];
          uVar17 = puVar4[2];
          extraout_x8[1] = puVar4[1];
          *extraout_x8 = uVar6;
          extraout_x8[3] = uVar9;
          extraout_x8[2] = uVar17;
          extraout_x8[4] = puVar4[4];
        }
        return;
      }
      lVar16 = 0;
      lStack_a0 = lVar7;
      puStack_98 = puVar2;
      do {
        if (lVar13 == 0) break;
        FUN_1049d0944(&uStack_88,lVar14);
        lVar16 = lVar16 + 1;
        uStack_58 = *(undefined1 *)(lVar14 + 0x30);
        lVar14 = lVar14 + 0x38;
        puVar2[1] = uStack_80;
        *puVar2 = uStack_88;
        puVar2[3] = uStack_70;
        puVar2[2] = uStack_78;
        puVar2[5] = uStack_60;
        puVar2[4] = uStack_68;
        puVar2[6] = CONCAT71(uStack_57,uStack_58);
        lVar13 = lVar13 + -0x38;
        puVar2 = puVar2 + 7;
      } while (lVar7 != lVar16);
    }
    puStack_b0 = puStack_98;
    uVar6 = *(ulong *)(param_3 + 2);
    lStack_a8 = lVar7;
    if (*param_3 == 0) {
      uVar6 = 0;
    }
LAB_104922db8:
    *param_1 = lVar7;
    param_1[2] = lStack_a8;
    param_1[1] = (long)puStack_b0;
    param_1[3] = uVar6;
    *(undefined1 *)(param_1 + 4) = param_4;
  }
  else {
    if ((char)param_3[10] == '\x01') {
      uVar6 = (ulong)(param_2 & 0xff);
      if ((param_2 & 0xff) != 1) {
        lVar7 = -0x8000000000000000;
        goto LAB_104922db8;
      }
      lVar7 = -0x7fffffffffffffff;
    }
    else {
      *(undefined1 *)(param_1 + 1) = param_4;
      lVar7 = -0x7ffffffffffffffe;
    }
    *param_1 = lVar7;
  }
  return;
}

