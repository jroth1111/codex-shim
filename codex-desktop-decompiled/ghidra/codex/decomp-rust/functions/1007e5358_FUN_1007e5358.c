
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007e5358(undefined8 *param_1,char param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_2 == '\0') {
    puVar1 = (undefined8 *)_malloc(9);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined1 *)(puVar1 + 1) = 100;
      *puVar1 = 0x6574656c706d6f63;
      uVar5 = 9;
      goto LAB_1007e53f0;
    }
LAB_1007e5414:
    func_0x0001087c9084(1,9);
  }
  else {
    if (param_2 == '\x01') {
      puVar1 = (undefined8 *)_malloc(6);
      if (puVar1 != (undefined8 *)0x0) {
        *(undefined2 *)((long)puVar1 + 4) = 0x6465;
        *(undefined4 *)puVar1 = 0x6c696166;
        uVar5 = 6;
        goto LAB_1007e53f0;
      }
      func_0x0001087c9084(1,6);
      goto LAB_1007e5414;
    }
    puVar1 = (undefined8 *)_malloc(8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0x64656e696c636564;
      uVar5 = 8;
LAB_1007e53f0:
      *param_1 = 0x8000000000000003;
      param_1[1] = uVar5;
      param_1[2] = puVar1;
      param_1[3] = uVar5;
      return;
    }
  }
  auVar6 = func_0x0001087c9084(1,8);
  lVar4 = auVar6._8_8_;
  puVar1 = auVar6._0_8_;
  pauVar2 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar2[1][0] == '\x01') {
    auVar6 = *pauVar2;
  }
  else {
    auVar6 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar2 + 8) = auVar6._8_8_;
    pauVar2[1][0] = 1;
  }
  *(long *)*pauVar2 = auVar6._0_8_ + 1;
  FUN_105dc99f8(&lStack_120,4,auVar6._0_8_,auVar6._8_8_);
  uStack_d8 = 0x8000000000000000;
  if (lStack_120 == -0x7fffffffffffffff) {
LAB_1007e5500:
    *puVar1 = 0x8000000000000005;
    puVar1[1] = lStack_118;
    return;
  }
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_88 = uStack_e8;
  uStack_90 = uStack_f0;
  uStack_78 = 0x8000000000000000;
  uStack_80 = uStack_e0;
  uStack_68 = uStack_c8;
  uStack_70 = uStack_d0;
  lStack_b8 = lStack_118;
  lStack_c0 = lStack_120;
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  lStack_118 = FUN_101483e28(&lStack_c0,*(undefined8 *)(param_3 + 0x20),
                             *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30),
                             *(undefined8 *)(param_3 + 0x38));
  if (lStack_118 != 0) {
    FUN_100e040f0(&lStack_c0);
    goto LAB_1007e5500;
  }
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  lStack_118 = lStack_b8;
  lStack_120 = lStack_c0;
  uStack_108 = uStack_a8;
  uStack_110 = uStack_b0;
  if (lStack_c0 == -0x7fffffffffffffff) goto LAB_1007e5500;
  uStack_148 = uStack_88;
  uStack_150 = uStack_90;
  uStack_138 = uStack_78;
  uStack_140 = uStack_80;
  uStack_128 = uStack_68;
  uStack_130 = uStack_70;
  lStack_180 = lStack_c0;
  lStack_178 = lStack_b8;
  uStack_168 = uStack_a8;
  uStack_170 = uStack_b0;
  uStack_158 = uStack_98;
  uStack_160 = uStack_a0;
  if (lStack_c0 != -0x8000000000000000) {
    lVar3 = FUN_10063fe00(&lStack_180,&UNK_108ca1064,7,*(undefined8 *)(lVar4 + 8),
                          *(undefined8 *)(lVar4 + 0x10));
    if ((lVar3 != 0) || (lVar3 = func_0x000101480910(&lStack_180,lVar4 + 0x30), lVar3 != 0))
    goto LAB_1007e559c;
    if (lStack_180 != -0x8000000000000000) {
      lVar3 = func_0x000100643448(&lStack_180,&UNK_108ca1209,0x12,lVar4 + 0x18);
      if (lVar3 == 0) {
        uStack_98 = uStack_158;
        uStack_a0 = uStack_160;
        uStack_88 = uStack_148;
        uStack_90 = uStack_150;
        uStack_78 = uStack_138;
        uStack_80 = uStack_140;
        uStack_68 = uStack_128;
        uStack_70 = uStack_130;
        lStack_b8 = lStack_178;
        lStack_c0 = lStack_180;
        uStack_a8 = uStack_168;
        uStack_b0 = uStack_170;
        __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                  (puVar1,&lStack_c0);
        return;
      }
      goto LAB_1007e559c;
    }
  }
  lStack_c0 = 10;
  lVar3 = FUN_107c05dbc(&lStack_c0,0,0);
LAB_1007e559c:
  *puVar1 = 0x8000000000000005;
  puVar1[1] = lVar3;
  FUN_100e040f0(&lStack_180);
  return;
}

