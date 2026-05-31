
/* WARNING: Type propagation algorithm not settling */

void FUN_1048ee73c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long extraout_x1;
  long extraout_x1_00;
  long *******ppppppplVar9;
  long *******ppppppplVar10;
  long *******ppppppplVar11;
  long ******pppppplVar12;
  long *******ppppppplVar13;
  long *****ppppplVar14;
  long lVar15;
  long *******ppppppplVar16;
  long *****ppppplVar17;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  undefined8 *******pppppppuStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  ulong uStack_98;
  uint uStack_88;
  undefined4 uStack_84;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  long *******ppppppplStack_70;
  
  lVar15 = *param_2;
  lVar7 = param_2[1];
  if (lVar15 != lVar7) {
    do {
      lVar8 = lVar15 + 0x30;
      *param_2 = lVar8;
      uVar1 = *(undefined8 *)(lVar15 + 0x20);
      lVar3 = *(long *)(lVar15 + 0x28);
      func_0x0001049a9934(uVar1,lVar3);
      if (extraout_x1 != 0) {
        uVar2 = *(undefined8 *)(lVar15 + 8);
        lVar15 = *(long *)(lVar15 + 0x10);
        func_0x0001049a9934(uVar1,lVar3);
        if (extraout_x1_00 != 0) {
          if (lVar15 != 0) {
            lVar7 = _malloc(lVar15);
            if (lVar7 != 0) {
              _memcpy(lVar7,uVar2,lVar15);
              goto joined_r0x0001048ee7f0;
            }
            func_0x0001087c9084(1,lVar15);
LAB_1048ef094:
            func_0x0001087c9084(1,lVar3);
            goto LAB_1048ef0a0;
          }
          lVar7 = 1;
          _memcpy(1,uVar2,0);
joined_r0x0001048ee7f0:
          if (lVar3 == 0) {
            lVar8 = 1;
          }
          else {
            lVar8 = _malloc(lVar3);
            if (lVar8 == 0) goto LAB_1048ef094;
          }
          _memcpy(lVar8,uVar1,lVar3);
          ppppppplStack_190 = (long *******)0x0;
          ppppppplStack_188 = (long *******)0x1;
          pppppppuStack_178 = &ppppppplStack_190;
          ppppppplStack_180 = (long *******)0x0;
          lStack_1c0 = lVar3;
          lStack_1b8 = lVar8;
          lStack_1b0 = lVar3;
          lStack_1a8 = lVar15;
          lStack_1a0 = lVar7;
          lStack_198 = lVar15;
          func_0x000105a1b790(&uStack_88,&UNK_108e5424b,0xb);
          ppppppplVar13 = (long *******)CONCAT44(uStack_84,uStack_88);
          ppppppplVar11 = ppppppplStack_70;
          ppppppplVar16 = ppppppplStack_80;
          ppppppplVar9 = ppppppplStack_78;
          if (ppppppplVar13 == (long *******)0x5) {
            ppppppplStack_c8 = (long *******)CONCAT35(ppppppplStack_c8._5_3_,0x100010000);
            ppppppplStack_d0 = (long *******)&pppppppuStack_178;
            ppppppplStack_100 = (long *******)0x8000000000000000;
            ppppppplStack_c0 = ppppppplStack_80;
            ppppppplStack_b8 = ppppppplStack_78;
            func_0x000105a1b620(&ppppppplStack_100);
            ppppppplVar11 = ppppppplStack_d0;
            pppppplVar12 = *ppppppplStack_d0;
            ppppplVar14 = pppppplVar12[2];
            ppppplVar17 = ppppplVar14;
            if (*pppppplVar12 == ppppplVar14) {
              FUN_1089a4f48(pppppplVar12,ppppplVar14,1,1,1);
              ppppplVar17 = pppppplVar12[2];
            }
            ppppppplVar16 = ppppppplStack_b8;
            ppppppplVar13 = ppppppplStack_c0;
            *(undefined1 *)((long)pppppplVar12[1] + (long)ppppplVar17) = 0x3c;
            pppppplVar12[2] = (long *****)((long)ppppplVar14 + 1);
            pppppplVar12 = *ppppppplVar11;
            ppppplVar17 = pppppplVar12[2];
            if ((long *******)((long)*pppppplVar12 - (long)ppppplVar17) < ppppppplStack_b8) {
              FUN_1089a4f48(pppppplVar12,ppppplVar17,ppppppplStack_b8,1,1);
              ppppplVar17 = pppppplVar12[2];
            }
            _memcpy((long)pppppplVar12[1] + (long)ppppplVar17,ppppppplVar13,ppppppplVar16);
            pppppplVar12[2] = (long *****)((long)ppppplVar17 + (long)ppppppplVar16);
            ppppppplStack_110 = ppppppplStack_b8;
            ppppppplStack_118 = ppppppplStack_c0;
            ppppppplStack_120 = ppppppplStack_c8;
            ppppppplStack_128 = ppppppplStack_d0;
            ppppppplStack_130 = ppppppplStack_d8;
            ppppppplStack_138 = ppppppplStack_e0;
            ppppppplStack_140 = ppppppplStack_e8;
            ppppppplStack_148 = ppppppplStack_f0;
            ppppppplStack_168 = (long *******)0x1;
            ppppppplStack_170 = (long *******)0x0;
            ppppppplStack_160 = (long *******)0x0;
            ppppppplStack_150 = ppppppplStack_f8;
            ppppppplStack_158 = ppppppplStack_100;
            uStack_108 = 1;
            func_0x000104a09e38(&ppppppplStack_100,&ppppppplStack_170,&UNK_108e54256,0xc,lVar8,lVar3
                               );
            if ((ppppppplStack_100 != (long *******)0x5) ||
               (func_0x000104a09e38(&ppppppplStack_100,&ppppppplStack_170,&UNK_108e54262,5,lVar7,
                                    lVar15), ppppppplVar16 = ppppppplStack_128,
               ppppppplVar4 = ppppppplStack_158, ppppppplVar13 = ppppppplStack_160,
               ppppppplStack_100 != (long *******)0x5)) {
              ppppppplVar11 = ppppppplStack_e8;
              ppppppplVar9 = ppppppplStack_f0;
              ppppppplVar16 = ppppppplStack_f8;
              ppppppplVar13 = ppppppplStack_100;
              if (0 < (long)ppppppplStack_158) {
                _free(ppppppplStack_150);
              }
              if (ppppppplStack_170 != (long *******)0x0) {
                _free(ppppppplStack_168);
              }
              goto LAB_1048eeb40;
            }
            ppppppplStack_b8 = ppppppplStack_128;
            ppppppplStack_c0 = ppppppplStack_130;
            ppppppplStack_a8 = ppppppplStack_118;
            ppppppplStack_b0 = ppppppplStack_120;
            uStack_98 = CONCAT71(uStack_107,uStack_108);
            ppppppplStack_a0 = ppppppplStack_110;
            ppppppplStack_f8 = ppppppplStack_168;
            ppppppplStack_100 = ppppppplStack_170;
            ppppppplStack_e8 = ppppppplStack_158;
            ppppppplStack_f0 = ppppppplStack_160;
            ppppppplStack_d8 = ppppppplStack_148;
            ppppppplStack_e0 = ppppppplStack_150;
            ppppppplStack_c8 = ppppppplStack_138;
            ppppppplStack_d0 = ppppppplStack_140;
            ppppppplVar11 = (long *******)((ulong)ppppppplStack_158 ^ 0x8000000000000000);
            if (-1 < (long)ppppppplStack_158) {
              ppppppplVar11 = (long *******)0x1;
            }
            if (ppppppplVar11 == (long *******)0x0) {
LAB_1048ee9ec:
              if (ppppppplStack_160 != (long *******)0x0) goto LAB_1048ee9f4;
LAB_1048eec0c:
              pppppplVar12 = *ppppppplStack_128;
              if (((ulong)ppppppplStack_120 & 0x1000000) != 0) {
                ppppplVar17 = pppppplVar12[2];
                if ((ulong)((long)*pppppplVar12 - (long)ppppplVar17) < 3) {
                  FUN_1089a4f48(pppppplVar12,ppppplVar17,3,1,1);
                  ppppplVar17 = pppppplVar12[2];
                }
                ppppppplVar13 = ppppppplStack_a0;
                ppppppplVar11 = ppppppplStack_a8;
                ppppplVar14 = pppppplVar12[1];
                *(undefined2 *)((long)ppppplVar14 + (long)ppppplVar17) = 0x3c3e;
                *(undefined1 *)((undefined2 *)((long)ppppplVar14 + (long)ppppplVar17) + 1) = 0x2f;
                pppppplVar12[2] = (long *****)((long)ppppplVar17 + 3);
                pppppplVar12 = *ppppppplVar16;
                ppppplVar17 = pppppplVar12[2];
                if ((long *******)((long)*pppppplVar12 - (long)ppppplVar17) < ppppppplStack_a0) {
                  FUN_1089a4f48(pppppplVar12,ppppplVar17,ppppppplStack_a0,1,1);
                  ppppplVar17 = pppppplVar12[2];
                }
                _memcpy((long)pppppplVar12[1] + (long)ppppplVar17,ppppppplVar11,ppppppplVar13);
                pppppplVar12[2] = (long *****)((long)ppppplVar17 + (long)ppppppplVar13);
                pppppplVar12 = *ppppppplVar16;
                ppppplVar14 = pppppplVar12[2];
                ppppplVar17 = ppppplVar14;
                if (*pppppplVar12 == ppppplVar14) {
                  FUN_1089a4f48(pppppplVar12,ppppplVar14,1,1,1);
                  goto LAB_1048eef74;
                }
                goto LAB_1048eee38;
              }
              ppppplVar17 = pppppplVar12[2];
              if ((ulong)((long)*pppppplVar12 - (long)ppppplVar17) < 2) {
                FUN_1089a4f48(pppppplVar12,ppppplVar17,2,1,1);
                ppppplVar17 = pppppplVar12[2];
              }
              *(undefined2 *)((long)pppppplVar12[1] + (long)ppppplVar17) = 0x3e2f;
              pppppplVar12[2] = (long *****)((long)ppppplVar17 + 2);
            }
            else {
              if (ppppppplVar11 == (long *******)0x1) {
                ppppppplStack_c8 = (long *******)0x0;
                if (ppppppplStack_140 <= ppppppplStack_138) {
                  ppppppplStack_c8 =
                       (long *******)((long)ppppppplStack_138 - (long)ppppppplStack_140);
                }
                goto LAB_1048ee9ec;
              }
              pppppplVar12 = (long ******)0x0;
              if (ppppppplStack_150[3] <= ppppppplStack_150[4]) {
                pppppplVar12 = (long ******)
                               ((long)ppppppplStack_150[4] - (long)ppppppplStack_150[3]);
              }
              ppppppplStack_150[4] = pppppplVar12;
              if (ppppppplStack_160 == (long *******)0x0) goto LAB_1048eec0c;
LAB_1048ee9f4:
              pppppplVar12 = *ppppppplStack_128;
              ppppplVar14 = pppppplVar12[2];
              ppppplVar17 = ppppplVar14;
              if (*pppppplVar12 == ppppplVar14) {
                FUN_1089a4f48(pppppplVar12,ppppplVar14,1,1,1);
                ppppplVar17 = pppppplVar12[2];
              }
              ppppppplVar5 = ppppppplStack_f8;
              *(undefined1 *)((long)pppppplVar12[1] + (long)ppppplVar17) = 0x3e;
              pppppplVar12[2] = (long *****)((long)ppppplVar14 + 1);
              pppppplVar12 = *ppppppplVar16;
              ppppplVar17 = pppppplVar12[2];
              if ((long *******)((long)*pppppplVar12 - (long)ppppplVar17) < ppppppplVar13) {
                FUN_1089a4f48(pppppplVar12,ppppplVar17,ppppppplVar13,1,1);
                ppppplVar17 = pppppplVar12[2];
              }
              _memcpy((long)pppppplVar12[1] + (long)ppppplVar17,ppppppplVar5,ppppppplVar13);
              pppppplVar12[2] = (long *****)((long)ppppplVar17 + (long)ppppppplVar13);
              if (((uStack_98 & 1) != 0) && (ppppppplVar11 != (long *******)0x0)) {
                if (ppppppplVar11 == (long *******)0x1) {
                  pppppplVar12 = *ppppppplVar16;
                  ppppplVar14 = pppppplVar12[2];
                  ppppplVar17 = ppppplVar14;
                  if (*pppppplVar12 == ppppplVar14) {
                    FUN_1089a4f48(pppppplVar12,ppppplVar14,1,1,1);
                    ppppplVar17 = pppppplVar12[2];
                  }
                  ppppppplVar13 = ppppppplStack_e0;
                  *(undefined1 *)((long)pppppplVar12[1] + (long)ppppplVar17) = 10;
                  pppppplVar12[2] = (long *****)((long)ppppplVar14 + 1);
                  ppppppplVar9 = ppppppplStack_c8;
                  ppppppplVar10 = ppppppplStack_d8;
                  if (ppppppplStack_d8 < ppppppplStack_c8) {
LAB_1048ef074:
                    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                              (0,ppppppplVar9,ppppppplVar10,&UNK_10b3f4628);
LAB_1048ef0a0:
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x1048ef0a4);
                    (*pcVar6)();
                  }
                  func_0x0001055bf348(&uStack_88,ppppppplStack_e0);
                  ppppppplVar10 = ppppppplStack_78;
                  ppppppplVar9 = ppppppplStack_80;
                  if ((uStack_88 & 1) != 0) {
LAB_1048eed4c:
                    ppppppplVar9 = ppppppplStack_78;
                    ppppppplVar16 = ppppppplStack_80;
                    if (0 < (long)ppppppplVar4) {
                      _free(ppppppplVar13);
                    }
                    if (ppppppplStack_100 != (long *******)0x0) {
                      _free(ppppppplVar5);
                    }
                    ppppppplVar13 = (long *******)0x4;
                    goto LAB_1048eeb40;
                  }
                  pppppplVar12 = *ppppppplVar16;
                  ppppplVar17 = pppppplVar12[2];
                  if ((long *******)((long)*pppppplVar12 - (long)ppppplVar17) < ppppppplStack_78) {
                    FUN_1089a4f48(pppppplVar12,ppppplVar17,ppppppplStack_78,1,1);
LAB_1048ef02c:
                    ppppplVar17 = pppppplVar12[2];
                  }
                }
                else {
                  pppppplVar12 = *ppppppplVar16;
                  ppppplVar14 = pppppplVar12[2];
                  ppppplVar17 = ppppplVar14;
                  if (*pppppplVar12 == ppppplVar14) {
                    FUN_1089a4f48(pppppplVar12,ppppplVar14,1,1,1);
                    ppppplVar17 = pppppplVar12[2];
                  }
                  ppppppplVar13 = ppppppplStack_e0;
                  *(undefined1 *)((long)pppppplVar12[1] + (long)ppppplVar17) = 10;
                  pppppplVar12[2] = (long *****)((long)ppppplVar14 + 1);
                  ppppppplVar9 = (long *******)ppppppplStack_e0[4];
                  ppppppplVar10 = (long *******)ppppppplStack_e0[2];
                  if (ppppppplVar10 < ppppppplVar9) goto LAB_1048ef074;
                  func_0x0001055bf348(&uStack_88,ppppppplStack_e0[1]);
                  ppppppplVar10 = ppppppplStack_78;
                  ppppppplVar9 = ppppppplStack_80;
                  if ((uStack_88 & 1) != 0) goto LAB_1048eed4c;
                  pppppplVar12 = *ppppppplVar16;
                  ppppplVar17 = pppppplVar12[2];
                  if ((long *******)((long)*pppppplVar12 - (long)ppppplVar17) < ppppppplStack_78) {
                    FUN_1089a4f48(pppppplVar12,ppppplVar17,ppppppplStack_78,1,1);
                    goto LAB_1048ef02c;
                  }
                }
                _memcpy((long)pppppplVar12[1] + (long)ppppplVar17,ppppppplVar9,ppppppplVar10);
                pppppplVar12[2] = (long *****)((long)ppppplVar17 + (long)ppppppplVar10);
              }
              pppppplVar12 = *ppppppplVar16;
              ppppplVar17 = pppppplVar12[2];
              if ((ulong)((long)*pppppplVar12 - (long)ppppplVar17) < 2) {
                FUN_1089a4f48(pppppplVar12,ppppplVar17,2,1,1);
                ppppplVar17 = pppppplVar12[2];
              }
              ppppppplVar13 = ppppppplStack_a0;
              ppppppplVar11 = ppppppplStack_a8;
              *(undefined2 *)((long)pppppplVar12[1] + (long)ppppplVar17) = 0x2f3c;
              pppppplVar12[2] = (long *****)((long)ppppplVar17 + 2);
              pppppplVar12 = *ppppppplVar16;
              ppppplVar17 = pppppplVar12[2];
              if ((long *******)((long)*pppppplVar12 - (long)ppppplVar17) < ppppppplStack_a0) {
                FUN_1089a4f48(pppppplVar12,ppppplVar17,ppppppplStack_a0,1,1);
                ppppplVar17 = pppppplVar12[2];
              }
              _memcpy((long)pppppplVar12[1] + (long)ppppplVar17,ppppppplVar11,ppppppplVar13);
              pppppplVar12[2] = (long *****)((long)ppppplVar17 + (long)ppppppplVar13);
              pppppplVar12 = *ppppppplVar16;
              ppppplVar14 = pppppplVar12[2];
              ppppplVar17 = ppppplVar14;
              if (*pppppplVar12 == ppppplVar14) {
                FUN_1089a4f48(pppppplVar12,ppppplVar14,1,1,1);
LAB_1048eef74:
                ppppplVar14 = pppppplVar12[2];
              }
LAB_1048eee38:
              *(undefined1 *)((long)pppppplVar12[1] + (long)ppppplVar14) = 0x3e;
              pppppplVar12[2] = (long *****)((long)ppppplVar17 + 1);
            }
            if (0 < (long)ppppppplVar4) {
              _free(ppppppplStack_e0);
            }
            ppppppplVar11 = ppppppplStack_190;
            ppppppplStack_218 = ppppppplStack_180;
            ppppppplStack_210 = ppppppplStack_188;
            ppppppplVar13 = ppppppplStack_190;
            ppppppplVar16 = ppppppplStack_188;
            ppppppplVar9 = ppppppplStack_180;
            if (ppppppplStack_100 != (long *******)0x0) {
              _free(ppppppplStack_f8);
              ppppppplVar11 = ppppppplStack_190;
              ppppppplStack_218 = ppppppplStack_180;
              ppppppplStack_210 = ppppppplStack_188;
              ppppppplVar13 = ppppppplStack_190;
              ppppppplVar16 = ppppppplStack_188;
              ppppppplVar9 = ppppppplStack_180;
            }
          }
          else {
LAB_1048eeb40:
            ppppppplStack_1d8 = ppppppplVar16;
            ppppppplStack_1d0 = ppppppplVar9;
            ppppppplStack_1c8 = ppppppplVar11;
            if (ppppppplStack_190 != (long *******)0x0) {
              _free(ppppppplStack_188);
            }
            if (ppppppplVar13 == (long *******)0x3) {
              ppppppplVar11 = (long *******)((ulong)ppppppplStack_1d8 & 0x7fffffffffffffff);
joined_r0x0001048eebc4:
              if (ppppppplVar11 != (long *******)0x0) {
                _free(ppppppplVar9);
              }
            }
            else if (ppppppplVar13 == (long *******)0x1) {
              pppppplVar12 = *ppppppplStack_1d8;
              *ppppppplStack_1d8 = (long ******)((long)pppppplVar12 + -1);
              LORelease();
              if (pppppplVar12 == (long ******)0x1) {
                DataMemoryBarrier(2,1);
                func_0x000105a1a6bc(&ppppppplStack_1d8);
              }
            }
            else {
              ppppppplVar11 = ppppppplStack_1d8;
              if (ppppppplVar13 == (long *******)0x0) goto joined_r0x0001048eebc4;
            }
            ppppppplVar11 = (long *******)0x8000000000000000;
            ppppppplVar13 = ppppppplStack_1d8;
            ppppppplVar16 = ppppppplStack_1d0;
            ppppppplVar9 = ppppppplStack_1c8;
          }
          ppppppplStack_1c8 = ppppppplVar9;
          ppppppplStack_1d0 = ppppppplVar16;
          ppppppplStack_1d8 = ppppppplVar13;
          if (lVar3 != 0) {
            _free(lVar8);
          }
          if (lVar15 != 0) {
            _free(lVar7);
          }
          if (ppppppplVar11 != (long *******)0x8000000000000000) {
            *param_1 = 0x8000000000000000;
            param_1[1] = ppppppplVar11;
            param_1[2] = ppppppplStack_210;
            param_1[3] = ppppppplStack_218;
            return;
          }
          lVar7 = param_2[1];
          lVar8 = *param_2;
        }
      }
      lVar15 = lVar8;
    } while (lVar15 != lVar7);
  }
  *param_1 = 0x8000000000000003;
  return;
}

