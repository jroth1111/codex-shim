
void __ZN133__LT_toml__de__error__TomlSink_LT_core__option__Option_LT_toml__de__error__Error_GT__GT__u20_as_u20_toml_parser__error__ErrorSink_GT_12report_error17h355e32dfae56ca12E
               (ulong *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte *****pppppbVar3;
  ulong uVar4;
  undefined4 uVar5;
  byte *****pppppbVar6;
  code *pcVar7;
  long lVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  byte *****pppppbVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  uint *puVar18;
  uint *puVar19;
  byte ***pppbStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined4 *puStack_100;
  ulong uStack_f8;
  byte ****ppppbStack_f0;
  byte ****ppppbStack_e8;
  ulong uStack_e0;
  undefined4 uStack_cc;
  undefined4 uStack_b8;
  undefined4 uStack_a4;
  undefined4 uStack_90;
  ulong uStack_8c;
  undefined4 *puStack_84;
  byte ****ppppbStack_78;
  long lStack_70;
  
  if (*param_1 == 2) {
    plVar17 = (long *)param_1[0xd];
    if (plVar17 == (long *)0x0) {
      uVar13 = param_1[0xc];
      if (0x7fffffffffffffe8 < uVar13) {
        func_0x000108a07a3c(&UNK_108c518a8,0x2b,&ppppbStack_f0,&UNK_10b1d2480,&UNK_10b1d2530);
        goto LAB_10611f378;
      }
      uVar15 = param_1[0xb];
      plVar17 = (long *)_malloc(uVar13 + 0x17 & 0x7ffffffffffffff8);
      if (plVar17 == (long *)0x0) {
        func_0x0001087c906c(8,uVar13 + 0x17 & 0x7ffffffffffffff8);
        goto LAB_10611f378;
      }
      plVar17[1] = 1;
      *plVar17 = 1;
      _memcpy(plVar17 + 2,uVar15,uVar13);
      param_1[0xd] = (ulong)plVar17;
      param_1[0xe] = uVar13;
    }
    lVar8 = *plVar17;
    *plVar17 = lVar8 + 1;
    if (lVar8 < 0) {
LAB_10611f378:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10611f37c);
      (*pcVar7)();
    }
    uVar13 = param_1[0xe];
    pppbStack_120 = (byte ***)0x0;
    uStack_118 = 1;
    uStack_110 = 0;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    lVar8 = *(long *)(param_2 + 0x40);
    if (lVar8 != 0) {
      FUN_108a8c380(&pppbStack_120,0,lVar8,1,1);
    }
    uVar16 = uStack_110;
    uVar15 = uStack_118;
    _memcpy(uStack_118 + uStack_110,uVar2,lVar8);
    uStack_110 = uVar16 + lVar8;
    puVar19 = *(uint **)(param_2 + 0x48);
    if (puVar19 != (uint *)0x0) {
      lVar8 = *(long *)(param_2 + 0x50);
      if ((long)pppbStack_120 - uStack_110 < 0xb) {
        FUN_108a8c380(&pppbStack_120,uStack_110,0xb,1,1);
        uVar15 = uStack_118;
      }
      *(undefined8 *)(uVar15 + uStack_110) = 0x746365707865202c;
      *(undefined4 *)((long)(uVar15 + uStack_110) + 7) = 0x20646574;
      uVar16 = uStack_110 + 0xb;
      uStack_110 = uVar16;
      if (lVar8 == 0) {
        if ((long)pppbStack_120 - uVar16 < 7) {
          FUN_108a8c380(&pppbStack_120,uVar16,7,1,1);
          uVar15 = uStack_118;
        }
        *(undefined4 *)((long)(uVar15 + uStack_110) + 3) = 0x676e6968;
        *(undefined4 *)(uVar15 + uStack_110) = 0x68746f6e;
        uStack_110 = uStack_110 + 7;
      }
      else {
        lVar14 = 0;
        puVar18 = puVar19 + lVar8 * 6;
        do {
          if (lVar14 != 0) {
            if ((long)pppbStack_120 - uVar16 < 2) {
              FUN_108a8c380(&pppbStack_120,uVar16,2,1,1);
              uVar15 = uStack_118;
              uVar16 = uStack_110;
            }
            *(undefined2 *)(uVar15 + uVar16) = 0x202c;
            uVar16 = uVar16 + 2;
            uStack_110 = uVar16;
          }
          if ((*puVar19 & 1) == 0) {
            pppppbVar3 = *(byte ******)(puVar19 + 2);
            lVar8 = *(long *)(puVar19 + 4);
            if (lVar8 == 1) {
              if (*(byte *)pppppbVar3 == 0x60) {
                puVar9 = (undefined4 *)_malloc(3);
                uVar11 = 3;
                if (puVar9 == (undefined4 *)0x0) {
LAB_10611f338:
                  func_0x0001087c9084(1,uVar11);
                  goto LAB_10611f378;
                }
                *(undefined1 *)((long)puVar9 + 2) = 0x27;
                *(undefined2 *)puVar9 = 0x6027;
                uStack_108 = 3;
                puStack_100 = puVar9;
                uStack_f8 = uStack_108;
              }
              else {
                if (*(byte *)pppppbVar3 != 10) goto LAB_10611ef7c;
                puVar9 = (undefined4 *)_malloc(7);
                uVar11 = 7;
                if (puVar9 == (undefined4 *)0x0) goto LAB_10611f338;
                *(undefined4 *)((long)puVar9 + 3) = 0x656e696c;
                *puVar9 = 0x6c77656e;
                uStack_108 = 7;
                puStack_100 = puVar9;
                uStack_f8 = uStack_108;
              }
            }
            else {
LAB_10611ef7c:
              pppppbVar12 = pppppbVar3;
              do {
                if (pppppbVar12 == (byte *****)((long)pppppbVar3 + lVar8)) {
LAB_10611f05c:
                  pppppbVar12 = pppppbVar3;
                  uVar5 = 0;
                  if (lVar8 != 0) {
                    pppppbVar12 = (byte *****)((long)pppppbVar3 + 1);
                    uVar10 = (uint)*(byte *)pppppbVar3;
                    if ((char)*(byte *)pppppbVar3 < '\0') {
                      uVar1 = *(byte *)((long)pppppbVar3 + 1) & 0x3f;
                      if (uVar10 < 0xe0) {
                        pppppbVar12 = (byte *****)((long)pppppbVar3 + 2);
                        uVar10 = uVar1 | (uVar10 & 0x1f) << 6;
                      }
                      else {
                        uVar1 = *(byte *)((long)pppppbVar3 + 2) & 0x3f | uVar1 << 6;
                        if (uVar10 < 0xf0) {
                          pppppbVar12 = (byte *****)((long)pppppbVar3 + 3);
                          uVar10 = uVar1 | (uVar10 & 0x1f) << 0xc;
                        }
                        else {
                          pppppbVar12 = (byte *****)((long)pppppbVar3 + 4);
                          uVar10 = *(byte *)((long)pppppbVar3 + 3) & 0x3f | uVar1 << 6 |
                                   (uVar10 & 7) << 0x12;
                        }
                      }
                    }
                    FUN_1055bf5bc(&uStack_108,uVar10,0x10101);
                    uVar5 = 1;
                  }
                  uStack_90 = uVar5;
                  uStack_e0 = uStack_e0 & 0xffffffff00000000;
                  uStack_cc = 0;
                  uStack_b8 = 0;
                  uStack_a4 = 0;
                  ppppbStack_78 = (byte ****)&ppppbStack_f0;
                  puStack_84 = puStack_100;
                  uStack_8c = uStack_108;
                  lStack_70 = 0x1055c1e58;
                  ppppbStack_f0 = (byte ****)pppppbVar12;
                  ppppbStack_e8 = (byte ****)((long)pppppbVar3 + lVar8);
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&uStack_108,s_____108ad9d60,&ppppbStack_78);
                  goto LAB_10611f15c;
                }
                uVar10 = (uint)*(byte *)pppppbVar12;
                pppppbVar6 = (byte *****)((long)pppppbVar12 + 1);
                if ((char)*(byte *)pppppbVar12 < '\0') {
                  uVar1 = *(byte *)((long)pppppbVar12 + 1) & 0x3f;
                  if (uVar10 < 0xe0) {
                    uVar10 = uVar1 | (uVar10 & 0x1f) << 6;
                    pppppbVar6 = (byte *****)((long)pppppbVar12 + 2);
                  }
                  else {
                    uVar1 = *(byte *)((long)pppppbVar12 + 2) & 0x3f | uVar1 << 6;
                    if (uVar10 < 0xf0) {
                      uVar10 = uVar1 | (uVar10 & 0x1f) << 0xc;
                      pppppbVar6 = (byte *****)((long)pppppbVar12 + 3);
                    }
                    else {
                      uVar10 = *(byte *)((long)pppppbVar12 + 3) & 0x3f | uVar1 << 6 |
                               (uVar10 & 7) << 0x12;
                      if (uVar10 == 0x110000) goto LAB_10611f05c;
                      pppppbVar6 = (byte *****)((long)pppppbVar12 + 4);
                    }
                  }
                }
                pppppbVar12 = pppppbVar6;
              } while ((uVar10 < 0x20) || (uVar10 == 0x7f));
              ppppbStack_f0 = (byte ****)&ppppbStack_78;
              ppppbStack_e8 = (byte ****)&DAT_10611f8fc;
              ppppbStack_78 = (byte ****)pppppbVar3;
              lStack_70 = lVar8;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&uStack_108,s_____108ad9d60,&ppppbStack_f0);
            }
LAB_10611f15c:
            uVar4 = uStack_f8;
            puVar9 = puStack_100;
            if ((long)pppbStack_120 - uVar16 < uStack_f8) {
              FUN_108a8c380(&pppbStack_120,uVar16,uStack_f8,1,1);
              uVar16 = uStack_110;
            }
            uVar15 = uStack_118;
            _memcpy(uStack_118 + uVar16,puVar9,uVar4);
            uVar16 = uVar16 + uVar4;
            uStack_110 = uVar16;
            if (uStack_108 != 0) {
              _free(puVar9);
            }
          }
          else {
            uVar11 = *(undefined8 *)(puVar19 + 2);
            uVar4 = *(ulong *)(puVar19 + 4);
            if ((long)pppbStack_120 - uVar16 < uVar4) {
              FUN_108a8c380(&pppbStack_120,uVar16,uVar4,1,1);
              uVar16 = uStack_110;
            }
            uVar15 = uStack_118;
            _memcpy(uStack_118 + uVar16,uVar11,uVar4);
            uVar16 = uVar16 + uVar4;
            uStack_110 = uVar16;
          }
          puVar19 = puVar19 + 6;
          lVar14 = lVar14 + 1;
        } while (puVar19 != puVar18);
      }
    }
    uVar15 = *(ulong *)(param_2 + 0x18);
    uVar4 = *(ulong *)(param_2 + 0x20);
    ppppbStack_e8 = (byte ****)uStack_118;
    ppppbStack_f0 = (byte ****)pppbStack_120;
    uStack_e0 = uStack_110;
    uVar16 = *(ulong *)(param_2 + 0x28);
    if ((*(ulong *)(param_2 + 0x30) & 0x7fffffffffffffff) != 0) {
      _free(uVar2);
    }
    *param_1 = uVar15 & 1;
    param_1[1] = uVar4;
    param_1[2] = uVar16;
    param_1[4] = (ulong)ppppbStack_e8;
    param_1[3] = (ulong)ppppbStack_f0;
    param_1[5] = uStack_e0;
    param_1[6] = 0;
    param_1[7] = 8;
    param_1[8] = 0;
    param_1[9] = (ulong)plVar17;
    param_1[10] = uVar13;
  }
  else if ((*(ulong *)(param_2 + 0x30) & 0x7fffffffffffffff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)(param_2 + 0x38));
    return;
  }
  return;
}

