
void FUN_1013ef7b0(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long lStack_149;
  char cStack_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  char cStack_118;
  undefined8 uStack_117;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_68;
  long *plVar8;
  
  lStack_178 = 0;
  lStack_170 = 8;
  lStack_168 = 0;
  plVar4 = *(long **)(param_2 + 0x18);
  if (*(long **)(param_2 + 8) != plVar4) {
    puVar5 = (undefined8 *)((ulong)&cStack_140 | 1);
    plVar7 = *(long **)(param_2 + 8);
    do {
      plVar8 = plVar7 + 0xc;
      lVar3 = *plVar7;
      *(long **)(param_2 + 8) = plVar8;
      if (lVar3 == -0x7ffffffffffffffa) break;
      lStack_a8 = plVar7[4];
      uStack_b0 = (undefined7)plVar7[3];
      uStack_a9 = (undefined1)((ulong)plVar7[3] >> 0x38);
      lStack_98 = plVar7[6];
      lStack_a0 = plVar7[5];
      lStack_88 = plVar7[8];
      lStack_90 = plVar7[7];
      lStack_80 = plVar7[9];
      uStack_b8 = (undefined7)plVar7[2];
      uStack_b1 = (undefined1)((ulong)plVar7[2] >> 0x38);
      uStack_c0 = (undefined7)plVar7[1];
      uStack_b9 = (undefined1)((ulong)plVar7[1] >> 0x38);
      lStack_70 = plVar7[0xb];
      lStack_78 = plVar7[10];
      uStack_c8 = (undefined7)lVar3;
      uStack_c1 = (undefined1)((ulong)lVar3 >> 0x38);
      uStack_68 = 0;
      FUN_1015f3754(&lStack_120,&uStack_c8);
      lVar6 = lStack_168;
      lVar3 = lStack_170;
      uStack_160 = uStack_117;
      lStack_149 = lStack_100;
      if (lStack_120 != 2) {
        param_1[6] = lStack_f0;
        param_1[5] = lStack_f8;
        param_1[8] = lStack_e0;
        param_1[7] = lStack_e8;
        param_1[10] = lStack_d0;
        param_1[9] = lStack_d8;
        *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_108,uStack_10f);
        *(undefined8 *)((long)param_1 + 9) = uStack_117;
        *param_1 = lStack_120;
        *(char *)(param_1 + 1) = cStack_118;
        lVar6 = lStack_168 + 1;
        param_1[4] = lStack_100;
        param_1[3] = CONCAT71(uStack_107,uStack_108);
        lVar2 = lStack_170;
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
          FUN_100e077ec(lVar2);
          lVar2 = lVar2 + 0x20;
        }
        if (lStack_178 != 0) {
          _free(lVar3);
        }
        goto LAB_1013ef918;
      }
      if (cStack_118 == '\x16') break;
      cStack_140 = cStack_118;
      puVar5[1] = CONCAT17(uStack_108,uStack_10f);
      *puVar5 = uStack_117;
      *(long *)((long)puVar5 + 0x17) = lStack_100;
      *(ulong *)((long)puVar5 + 0xf) = CONCAT71(uStack_107,uStack_108);
      if (lStack_168 == lStack_178) {
        func_0x000108a1efa8(&lStack_178);
      }
      puVar1 = (undefined8 *)(lStack_170 + lVar6 * 0x20);
      puVar1[1] = uStack_138;
      *puVar1 = CONCAT71(uStack_13f,cStack_140);
      puVar1[3] = uStack_128;
      puVar1[2] = uStack_130;
      lStack_168 = lVar6 + 1;
      plVar7 = plVar8;
    } while (plVar8 != plVar4);
  }
  uStack_b9 = (undefined1)lStack_170;
  uStack_b8 = (undefined7)((ulong)lStack_170 >> 8);
  uStack_c1 = (undefined1)lStack_178;
  uStack_c0 = (undefined7)((ulong)lStack_178 >> 8);
  uStack_b1 = (undefined1)lStack_168;
  uStack_b0 = (undefined7)((ulong)lStack_168 >> 8);
  *(undefined1 *)(param_1 + 1) = 0x14;
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_b9,uStack_c0);
  *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_c1,uStack_c8);
  param_1[4] = lStack_168;
  param_1[3] = lStack_170;
  *param_1 = 2;
LAB_1013ef918:
  FUN_100e1fcd4(param_2);
  return;
}

