
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN14rama_http_core2h25proto7streams5state5State10send_close17hc3f40adbf787e2bbE
               (byte *****param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  byte *pbVar11;
  undefined8 *extraout_x8;
  byte unaff_w20;
  undefined1 uStack_1b8;
  byte bStack_1b7;
  undefined2 uStack_1b6;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  byte bStack_151;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte *****pppppbStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char ****ppppcStack_110;
  byte *****pppppbStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  char *****pppppcStack_f0;
  char *****pppppcStack_e8;
  byte *****pppppbStack_e0;
  undefined *puStack_d8;
  byte ****ppppbStack_d0;
  byte *****pppppbStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char *pcStack_80;
  char *****pppppcStack_78;
  char *****pppppcStack_70;
  char *****pppppcStack_68;
  byte *****pppppbStack_60;
  undefined *puStack_58;
  
  cVar4 = *(byte *)param_1 - 7;
  if (*(byte *)param_1 < 7) {
    cVar4 = '\x06';
  }
  if (cVar4 == '\x03') {
    bStack_151 = *(byte *)((long)param_1 + 2);
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
        ((bVar9 = bRam000000010b638610, bRam000000010b638610 - 1 < 2 ||
         ((bRam000000010b638610 != 0 &&
          (bVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b638600), bVar9 != 0)))))) &&
       (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b638600,bVar9), iVar10 != 0)) {
      lStack_b8 = lRam000000010b638600 + 0x30;
      pppppbStack_60 = (byte *****)&bStack_151;
      puStack_58 = &DAT_105ab95a4;
      pppppcStack_68 = (char *****)&pppppbStack_60;
      pppppcStack_70 = (char *****)s__send_close__Open__>_HalfClosedL_108b17080;
      pppppbStack_e0 = (byte *****)&pppppcStack_70;
      puStack_d8 = &UNK_10b3f92b0;
      pppppbStack_c8 = (byte *****)&pppppbStack_e0;
      ppppbStack_d0 = (byte ****)0x1;
      uStack_c0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (lRam000000010b638600,&ppppbStack_d0);
      lVar6 = lRam000000010b638600;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppbStack_108 = *(byte ******)(lRam000000010b638600 + 0x20);
        uStack_100 = *(undefined8 *)(lRam000000010b638600 + 0x28);
        ppppcStack_110 = (char ****)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppcStack_110);
        if (iVar10 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar6,puVar2,puVar1,&ppppcStack_110,&ppppbStack_d0);
        }
      }
    }
    else {
      lVar6 = lRam000000010b638600;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_148 = *(undefined8 *)(lRam000000010b638600 + 0x20);
        uStack_140 = *(undefined8 *)(lRam000000010b638600 + 0x28);
        uStack_150 = 5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_150);
        if (iVar10 != 0) {
          lStack_f8 = lRam000000010b638600 + 0x30;
          pppppbStack_e0 = (byte *****)&bStack_151;
          puStack_d8 = &DAT_105ab95a4;
          pppppcStack_e8 = (char *****)&pppppbStack_e0;
          pppppcStack_f0 = (char *****)s__send_close__Open__>_HalfClosedL_108b17080;
          pppppbStack_138 = (byte *****)&pppppcStack_f0;
          puStack_130 = &UNK_10b3f92b0;
          pppppbStack_108 = (byte *****)&pppppbStack_138;
          ppppcStack_110 = (char ****)0x1;
          uStack_100 = 1;
          lStack_b0 = *(long *)(lVar6 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar6 + 0x68);
          pppppbStack_c8 = *(byte ******)(lVar6 + 0x50);
          uStack_c0 = *(undefined8 *)(lVar6 + 0x58);
          ppppbStack_d0 = (byte ****)0x1;
          if ((byte ******)pppppbStack_c8 == (byte ******)0x0) {
            ppppbStack_d0 = (byte ****)0x2;
          }
          uStack_88 = *(undefined4 *)(lVar6 + 8);
          uStack_84 = *(undefined4 *)(lVar6 + 0xc);
          pppppcStack_70 = &ppppcStack_110;
          pppppcStack_68 = (char *****)CONCAT71(pppppcStack_68._1_7_,1);
          pppppbStack_60 = (byte *****)&pppppcStack_70;
          puStack_58 = &DAT_1061c2098;
          lStack_b8 = 1;
          if (lStack_b0 == 0) {
            lStack_b8 = 2;
          }
          uStack_98 = uStack_148;
          uStack_a0 = uStack_150;
          uStack_90 = uStack_140;
          pppppcStack_78 = (char *****)&pppppbStack_60;
          pcStack_80 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppppbStack_d0);
        }
      }
    }
    bVar7 = bStack_151;
    bVar9 = *(byte *)param_1;
    if (5 < bVar9 - 7 && bVar9 < 4) {
      if (bVar9 == 2) {
        if (((ulong)param_1[1] & 0x7fffffffffffffff) != 0) {
          _free(param_1[2]);
        }
      }
      else if (bVar9 == 1) {
        (*(code *)param_1[1][4])(param_1 + 4,param_1[2],param_1[3]);
      }
    }
    *(byte *)param_1 = 0xb;
    *(byte *)((long)param_1 + 1) = bVar7;
  }
  else {
    if (cVar4 != '\x05') {
      ppppbStack_d0 = (byte ****)&ppppcStack_110;
      pppppbStack_c8 = (byte *****)&DAT_105aa9e60;
      ppppcStack_110 = (char ****)param_1;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_send_close__unexpected_state_108b170a9,&ppppbStack_d0,&UNK_10b3ff920);
      *(byte *)param_1 = 0xb;
      *(byte *)((long)param_1 + 1) = unaff_w20;
      __Unwind_Resume();
      *(byte *)param_1 = 4;
      pbVar11 = (byte *)__Unwind_Resume();
      bVar9 = *pbVar11;
      uVar5 = bVar9 - 7;
      if (bVar9 < 7) {
        uVar5 = 6;
      }
      if (uVar5 != 1 && (uVar5 & 0xff) != 5) {
        if ((uVar5 & 0xff) != 6) {
          *(undefined2 *)extraout_x8 = 0x104;
          return;
        }
        uVar5 = bVar9 - 4;
        if (bVar9 < 4) {
          uVar5 = 1;
        }
        if (uVar5 != 0) {
          if ((uVar5 & 0xff) != 1) {
            uVar3 = *(undefined4 *)(pbVar11 + 4);
            *(undefined2 *)extraout_x8 = 0x101;
            *(undefined4 *)((long)extraout_x8 + 4) = uVar3;
            extraout_x8[1] = &UNK_10b3fb1a0;
            extraout_x8[2] = 1;
            extraout_x8[3] = 0;
            extraout_x8[4] = 0;
            return;
          }
          if (bVar9 < 2) {
            if (bVar9 == 0) {
              uStack_1b4 = (undefined4)*(undefined8 *)(pbVar11 + 4);
              uStack_1b0 = (undefined4)((ulong)*(undefined8 *)(pbVar11 + 4) >> 0x20);
              uStack_1b8 = 0;
              bStack_1b7 = pbVar11[1];
            }
            else {
              (*(code *)**(undefined8 **)(pbVar11 + 8))
                        (&uStack_1b0,pbVar11 + 0x20,*(undefined8 *)(pbVar11 + 0x10),
                         *(undefined8 *)(pbVar11 + 0x18));
              uStack_1b4 = *(undefined4 *)(pbVar11 + 4);
              uStack_1b8 = 1;
              bStack_1b7 = pbVar11[1];
            }
          }
          else if (bVar9 == 2) {
            bVar9 = pbVar11[1];
            uVar3 = 0;
            uVar8 = 0x80000000;
            if (*(long *)(pbVar11 + 8) != -0x8000000000000000) {
              func_0x000100025ae8(&uStack_1b8);
              uStack_190 = CONCAT44(uStack_1ac,uStack_1b0);
              uStack_188 = uStack_1a8;
              uVar3 = CONCAT22(uStack_1b6,CONCAT11(bStack_1b7,uStack_1b8));
              uVar8 = uStack_1b4;
            }
            uStack_1ac = uVar8;
            uStack_1b0 = uVar3;
            uStack_1a0 = uStack_188;
            uStack_1a8 = uStack_190;
            uStack_1b8 = 2;
            bStack_1b7 = bVar9;
          }
          else {
            bStack_1b7 = pbVar11[1];
            uStack_1b8 = 3;
          }
          extraout_x8[1] = CONCAT44(uStack_1ac,uStack_1b0);
          *extraout_x8 = CONCAT44(uStack_1b4,CONCAT22(uStack_1b6,CONCAT11(bStack_1b7,uStack_1b8)));
          extraout_x8[3] = uStack_1a0;
          extraout_x8[2] = uStack_1a8;
          extraout_x8[4] = uStack_198;
          return;
        }
      }
      *(undefined2 *)extraout_x8 = 4;
      return;
    }
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E == 0) &&
       (((bVar9 = bRam000000010b638628, bRam000000010b638628 - 1 < 2 ||
         ((bRam000000010b638628 != 0 &&
          (bVar9 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b638618), bVar9 != 0)))) &&
        (iVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (lRam000000010b638618,bVar9), iVar10 != 0)))) {
      lStack_b8 = lRam000000010b638618 + 0x30;
      pppppbStack_60 = (byte *****)&UNK_109b0d81a;
      puStack_58 = (undefined *)0x4d;
      pppppcStack_70 = (char *****)&pppppbStack_60;
      pppppcStack_68 = (char *****)&UNK_10b3f92b0;
      pppppbStack_c8 = (byte *****)&pppppcStack_70;
      ppppbStack_d0 = (byte ****)0x1;
      uStack_c0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (lRam000000010b638618,&ppppbStack_d0);
      lVar6 = lRam000000010b638618;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pppppbStack_108 = *(byte ******)(lRam000000010b638618 + 0x20);
        uStack_100 = *(undefined8 *)(lRam000000010b638618 + 0x28);
        ppppcStack_110 = (char ****)0x5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&ppppcStack_110);
        if (iVar10 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar6,puVar2,puVar1,&ppppcStack_110,&ppppbStack_d0);
        }
      }
    }
    else {
      lVar6 = lRam000000010b638618;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_120 = *(undefined8 *)(lRam000000010b638618 + 0x20);
        uStack_118 = *(undefined8 *)(lRam000000010b638618 + 0x28);
        uStack_128 = 5;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar10 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_128);
        if (iVar10 != 0) {
          lStack_f8 = lRam000000010b638618 + 0x30;
          pppppbStack_e0 = (byte *****)&UNK_109b0d81a;
          puStack_d8 = (undefined *)0x4d;
          pppppcStack_f0 = (char *****)&pppppbStack_e0;
          pppppcStack_e8 = (char *****)&UNK_10b3f92b0;
          pppppbStack_108 = (byte *****)&pppppcStack_f0;
          ppppcStack_110 = (char ****)0x1;
          uStack_100 = 1;
          lStack_b0 = *(long *)(lVar6 + 0x60);
          uStack_a8 = *(undefined8 *)(lVar6 + 0x68);
          pppppbStack_c8 = *(byte ******)(lVar6 + 0x50);
          uStack_c0 = *(undefined8 *)(lVar6 + 0x58);
          ppppbStack_d0 = (byte ****)0x1;
          if ((byte ******)pppppbStack_c8 == (byte ******)0x0) {
            ppppbStack_d0 = (byte ****)0x2;
          }
          uStack_88 = *(undefined4 *)(lVar6 + 8);
          uStack_84 = *(undefined4 *)(lVar6 + 0xc);
          pppppcStack_70 = &ppppcStack_110;
          pppppcStack_68 = (char *****)CONCAT71(pppppcStack_68._1_7_,1);
          pppppbStack_60 = (byte *****)&pppppcStack_70;
          puStack_58 = &DAT_1061c2098;
          lStack_b8 = 1;
          if (lStack_b0 == 0) {
            lStack_b8 = 2;
          }
          uStack_98 = uStack_120;
          uStack_a0 = uStack_128;
          uStack_90 = uStack_118;
          pppppcStack_78 = (char *****)&pppppbStack_60;
          pcStack_80 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&ppppbStack_d0);
        }
      }
    }
    bVar9 = *(byte *)param_1;
    if ((5 < bVar9 - 7) && (bVar9 < 4)) {
      if (bVar9 == 2) {
        if (((ulong)param_1[1] & 0x7fffffffffffffff) != 0) {
          _free(param_1[2]);
        }
      }
      else if (bVar9 == 1) {
        (*(code *)param_1[1][4])(param_1 + 4,param_1[2],param_1[3]);
      }
    }
    *(byte *)param_1 = 4;
  }
  return;
}

