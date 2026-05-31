
void __ZN10codex_core7compact21content_items_to_text17h1d45701eed767767E
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_70 = 0;
  lStack_68 = 8;
  lStack_60 = 0;
  if (param_3 != 0) {
    lVar2 = 0;
    param_3 = param_3 << 5;
    puVar3 = (undefined8 *)(param_2 + 0x10);
    do {
      if (((long)puVar3[-2] < 0) && (lVar4 = puVar3[1], lVar4 != 0)) {
        uVar5 = *puVar3;
        if (lVar2 == lStack_70) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hb1844cc8a69bdc2dE(&lStack_70);
        }
        puVar1 = (undefined8 *)(lStack_68 + lVar2 * 0x10);
        *puVar1 = uVar5;
        puVar1[1] = lVar4;
        lVar2 = lVar2 + 1;
        lStack_60 = lVar2;
      }
      puVar3 = puVar3 + 4;
      param_3 = param_3 + -0x20;
    } while (param_3 != 0);
    if (lVar2 != 0) {
      FUN_1034c1e9c(&uStack_58,lStack_68,lVar2,&UNK_108d5275f,1);
      param_1[1] = uStack_50;
      *param_1 = uStack_58;
      param_1[2] = uStack_48;
      goto joined_r0x000102e89a80;
    }
  }
  *param_1 = 0x8000000000000000;
joined_r0x000102e89a80:
  if (lStack_70 != 0) {
    _free(lStack_68);
  }
  return;
}

