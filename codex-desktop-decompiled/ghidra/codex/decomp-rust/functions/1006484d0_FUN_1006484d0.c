
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006484d0(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  ulong uStack_168;
  undefined4 *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined4 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 *puStack_78;
  undefined8 uStack_70;
  
  pauVar3 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar3[1][0] == '\x01') {
    auVar7 = *pauVar3;
  }
  else {
    auVar7 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar3 + 8) = auVar7._8_8_;
    pauVar3[1][0] = 1;
  }
  *(long *)*pauVar3 = auVar7._0_8_ + 1;
  FUN_105dc99f8(&lStack_150,2,auVar7._0_8_,auVar7._8_8_);
  uStack_108 = 0x8000000000000000;
  if (lStack_150 == -0x7fffffffffffffff) {
    *param_1 = -0x7ffffffffffffffb;
    param_1[1] = lStack_148;
    return;
  }
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  uStack_168 = 0x8000000000000000;
  lStack_170 = lStack_110;
  uStack_158 = uStack_f8;
  puStack_160 = puStack_100;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  lStack_1b0 = lStack_150;
  lStack_1a8 = lStack_148;
  if (lStack_150 != -0x8000000000000000) {
    lVar4 = FUN_10063fe00(&lStack_1b0,&UNK_108c73770,4,*(undefined8 *)(param_2 + 8),
                          *(undefined8 *)(param_2 + 0x10));
    if (lVar4 != 0) goto LAB_1006485a8;
    if (lStack_1b0 != -0x8000000000000000) {
      bVar1 = *(byte *)(param_2 + 0x18);
      puVar5 = (undefined4 *)_malloc(6);
      if (puVar5 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar5 + 1) = 0x6e6f;
        *puVar5 = 0x69746361;
        if ((uStack_168 != 0x8000000000000000) && (uStack_168 != 0)) {
          _free(puStack_160);
        }
        uStack_158 = 6;
        uStack_168 = 0x8000000000000000;
        uStack_90 = 6;
        uStack_a0 = 6;
        puStack_160 = puVar5;
        puStack_98 = puVar5;
        if ((bVar1 & 1) == 0) {
          uVar6 = 5;
          puVar5 = (undefined4 *)_malloc(5);
          if (puVar5 == (undefined4 *)0x0) goto LAB_1006487b8;
          *(undefined1 *)(puVar5 + 1) = 0x77;
          *puVar5 = 0x6f6c6c61;
          uStack_80 = 5;
        }
        else {
          uVar6 = 4;
          puVar5 = (undefined4 *)_malloc(4);
          if (puVar5 == (undefined4 *)0x0) {
LAB_1006487b8:
            FUN_107c03c64(1,uVar6);
            goto LAB_1006487c4;
          }
          *puVar5 = 0x796e6564;
          uStack_80 = 4;
        }
        uStack_88 = 0x8000000000000003;
        puStack_78 = puVar5;
        uStack_70 = uStack_80;
        FUN_101497a9c(&lStack_150,&lStack_1b0,&uStack_a0,&uStack_88);
        lStack_e8 = lStack_140;
        lStack_f0 = lStack_148;
        lStack_d8 = lStack_130;
        lStack_e0 = lStack_138;
        lStack_c8 = lStack_120;
        lStack_d0 = lStack_128;
        lStack_b8 = lStack_110;
        lStack_c0 = lStack_118;
        uStack_b0 = uStack_108;
        if (lStack_148 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_f0);
        }
        if (lStack_1b0 != -0x8000000000000000) {
          *param_1 = lStack_1b0;
          param_1[1] = lStack_1a8;
          param_1[3] = lStack_198;
          param_1[2] = lStack_1a0;
          param_1[5] = lStack_188;
          param_1[4] = lStack_190;
          param_1[7] = lStack_178;
          param_1[6] = lStack_180;
          param_1[8] = lStack_170;
          if ((uStack_168 & 0x7fffffffffffffff) == 0) {
            return;
          }
          _free(puStack_160);
          return;
        }
        if (lStack_1a8 != -0x7ffffffffffffffb) {
          param_1[2] = lStack_198;
          param_1[1] = lStack_1a0;
          param_1[4] = lStack_188;
          param_1[3] = lStack_190;
          param_1[6] = lStack_178;
          param_1[5] = lStack_180;
          param_1[7] = lStack_170;
          param_1[8] = uStack_168;
          *param_1 = lStack_1a8;
          return;
        }
        FUN_107c05cac(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
      }
      FUN_107c03c64(1,6);
LAB_1006487c4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006487c8);
      (*pcVar2)();
    }
  }
  lStack_150 = 10;
  lVar4 = FUN_107c05dbc(&lStack_150,0,0);
LAB_1006485a8:
  *param_1 = -0x7ffffffffffffffb;
  param_1[1] = lVar4;
  FUN_100e040f0(&lStack_1b0);
  return;
}

