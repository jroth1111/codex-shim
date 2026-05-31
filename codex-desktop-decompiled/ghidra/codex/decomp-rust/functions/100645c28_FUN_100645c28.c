
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100645c28(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  long lVar5;
  undefined8 *extraout_x1;
  long lVar6;
  undefined8 uVar7;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = *param_2;
  if (lVar6 < 3) {
    if (lVar6 == 0) {
      puVar4 = (undefined8 *)_malloc(0xc);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar4 + 1) = 0x74696e69;
        *puVar4 = 0x5f676e69646e6570;
        param_1[1] = 0xc;
        *param_1 = 0x8000000000000003;
        uVar7 = 0xc;
        goto LAB_100645e54;
      }
      FUN_107c03c64(1,0xc);
      goto LAB_100645f54;
    }
    if (lVar6 == 1) {
      puVar4 = (undefined8 *)_malloc(7);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)((long)puVar4 + 3) = 0x676e696e;
        *(undefined4 *)puVar4 = 0x6e6e7572;
        param_1[1] = 7;
        *param_1 = 0x8000000000000003;
        uVar7 = 7;
        goto LAB_100645e54;
      }
      FUN_107c03c64(1,7);
      goto LAB_100645f70;
    }
    puVar4 = (undefined8 *)_malloc(0xb);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)((long)puVar4 + 7) = 0x64657470;
      *puVar4 = 0x7075727265746e69;
      param_1[1] = 0xb;
      *param_1 = 0x8000000000000003;
      uVar7 = 0xb;
      goto LAB_100645e54;
    }
  }
  else {
    if (lVar6 < 5) {
      if (lVar6 != 3) {
        lVar6 = param_2[2];
        lVar1 = param_2[3];
        pauVar3 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        if (pauVar3[1][0] == '\x01') {
          auStack_110 = *pauVar3;
        }
        else {
          auStack_110 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar3 + 8) = auStack_110._8_8_;
          pauVar3[1][0] = 1;
        }
        *(long *)*pauVar3 = auStack_110._0_8_ + 1;
        pcStack_148 = (code *)0x0;
        uStack_140 = 8;
        uStack_138 = 0;
        uStack_128 = 0;
        puStack_130 = &UNK_108c56c70;
        uStack_118 = 0;
        puStack_120 = (undefined *)0x0;
        lVar5 = _malloc(7);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,7);
LAB_1011e995c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1011e9960);
          (*pcVar2)();
        }
        _memcpy(lVar5,&UNK_108cafca3,7);
        uStack_b8 = 7;
        uStack_a8 = 7;
        lStack_b0 = lVar5;
        if (lVar1 == 0) {
          lVar5 = 1;
        }
        else {
          lVar5 = _malloc(lVar1);
          if (lVar5 == 0) {
            func_0x0001087c9084(1,lVar1);
            goto LAB_1011e995c;
          }
        }
        _memcpy(lVar5,lVar6,lVar1);
        *param_1 = 0x8000000000000003;
        param_1[1] = lVar1;
        param_1[2] = lVar5;
        param_1[3] = lVar1;
        FUN_101497a9c(&puStack_a0,&pcStack_148,&uStack_b8,param_1);
        auStack_100._8_8_ = uStack_90;
        auStack_100._0_8_ = lStack_98;
        uStack_e8 = uStack_80;
        lStack_f0 = lStack_88;
        uStack_d8 = uStack_70;
        uStack_e0 = uStack_78;
        uStack_c8 = uStack_60;
        uStack_d0 = uStack_68;
        uStack_c0 = uStack_58;
        if (lStack_98 != -0x7ffffffffffffffb) {
          FUN_100de6690(auStack_100);
        }
        param_1[5] = puStack_120;
        param_1[4] = uStack_128;
        param_1[7] = auStack_110._0_8_;
        param_1[6] = uStack_118;
        param_1[8] = auStack_110._8_8_;
        param_1[1] = uStack_140;
        *param_1 = pcStack_148;
        param_1[3] = puStack_130;
        param_1[2] = uStack_138;
        return;
      }
      pauVar3 = (undefined1 (*) [16])
                (*
                ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                )();
      if (pauVar3[1][0] == '\x01') {
        auStack_100 = *pauVar3;
      }
      else {
        auStack_100 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar3 + 8) = auStack_100._8_8_;
        pauVar3[1][0] = 1;
      }
      *(long *)*pauVar3 = auStack_100._0_8_ + 1;
      uStack_138 = 0;
      puStack_130 = (undefined *)0x8;
      uStack_128 = 0;
      uStack_118 = 0;
      puStack_120 = &UNK_108c56c70;
      auStack_110._8_8_ = 0;
      auStack_110._0_8_ = 0;
      puVar4 = (undefined8 *)_malloc(9);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined1 *)(puVar4 + 1) = 100;
        *puVar4 = 0x6574656c706d6f63;
        uStack_a8 = 9;
        lStack_98 = 9;
        puStack_a0 = puVar4;
        if (param_2[1] == -0x8000000000000000) {
          *param_1 = 0x8000000000000000;
        }
        else {
          lVar6 = param_2[2];
          lVar1 = param_2[3];
          if (lVar1 == 0) {
            lVar5 = 1;
          }
          else {
            lVar5 = _malloc(lVar1);
            if (lVar5 == 0) {
              FUN_107c03c64(1,lVar1);
              goto LAB_100645f60;
            }
          }
          _memcpy(lVar5,lVar6,lVar1);
          *param_1 = 0x8000000000000003;
          param_1[1] = lVar1;
          param_1[2] = lVar5;
          param_1[3] = lVar1;
        }
        FUN_101497a9c(&uStack_90,&uStack_138,&uStack_a8,param_1);
        uStack_e8 = uStack_80;
        lStack_f0 = lStack_88;
        uStack_d8 = uStack_70;
        uStack_e0 = uStack_78;
        uStack_c8 = uStack_60;
        uStack_d0 = uStack_68;
        uStack_c0 = uStack_58;
        if (lStack_88 != -0x7ffffffffffffffb) {
          FUN_100de6690(&lStack_f0);
        }
        param_1[5] = auStack_110._0_8_;
        param_1[4] = uStack_118;
        param_1[7] = auStack_100._0_8_;
        param_1[6] = auStack_110._8_8_;
        param_1[8] = auStack_100._8_8_;
        param_1[1] = puStack_130;
        *param_1 = uStack_138;
        param_1[3] = puStack_120;
        param_1[2] = uStack_128;
        return;
      }
LAB_100645f54:
      FUN_107c03c64(1,9);
LAB_100645f60:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100645f64);
      (*pcVar2)();
    }
    if (lVar6 != 5) {
      puVar4 = (undefined8 *)_malloc(9);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined1 *)(puVar4 + 1) = 100;
        *puVar4 = 0x6e756f665f746f6e;
        param_1[1] = 9;
        *param_1 = 0x8000000000000003;
        uVar7 = 9;
        goto LAB_100645e54;
      }
      goto LAB_100645f88;
    }
    puVar4 = (undefined8 *)_malloc(8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0x6e776f6474756873;
      param_1[1] = 8;
      *param_1 = 0x8000000000000003;
      uVar7 = 8;
LAB_100645e54:
      param_1[2] = puVar4;
      param_1[3] = uVar7;
      return;
    }
LAB_100645f70:
    FUN_107c03c64(1,8);
  }
  FUN_107c03c64(1,0xb);
LAB_100645f88:
  uVar7 = FUN_107c03c64(1,9);
  _free();
  FUN_100e8442c(&uStack_138);
  __Unwind_Resume(uVar7);
  FUN_107c05ccc();
  pcStack_148 = FUN_100645fbc;
                    /* WARNING: Could not recover jumptable at 0x000100645fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100645fec +
            (ulong)*(ushort *)(&UNK_108c9aaf2 + (ulong)*(uint *)*extraout_x1 * 2) * 4))();
  return;
}

