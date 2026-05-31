
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e59ffc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar3;
  undefined8 extraout_x1_04;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined4 uStack_13c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_60;
  
  uVar7 = *(undefined8 *)(param_1 + 8);
  auVar10 = (*
            ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
            )();
  uVar3 = auVar10._8_8_;
  lVar2 = auVar10._0_8_;
  if (*(char *)(lVar2 + 0x48) == '\x01') {
LAB_103e5a0d0:
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x30) = uVar7;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 1) goto LAB_103e5a06c;
LAB_103e5a0f0:
    if (iVar1 == 0) {
      FUN_103db1014(param_1 + 0x18);
      uVar3 = extraout_x1_03;
    }
  }
  else {
    if (*(char *)(lVar2 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar2,&DAT_1060edbcc);
      *(undefined1 *)(lVar2 + 0x48) = 1;
      uVar3 = extraout_x1_02;
      goto LAB_103e5a0d0;
    }
    uVar6 = 0;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 1) goto LAB_103e5a0f0;
LAB_103e5a06c:
    if (*(long *)(param_1 + 0x18) == -0x7ffffffffffffffd) {
      lVar8 = *(long *)(param_1 + 0x28);
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(param_1 + 0x30);
        pcVar4 = (code *)*puVar9;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(lVar8);
          uVar3 = extraout_x1;
        }
        if (puVar9[1] != 0) {
          _free(lVar8);
          uVar3 = extraout_x1_00;
        }
      }
    }
    else {
      func_0x000103dc018c();
      uVar3 = extraout_x1_01;
    }
  }
  *(undefined8 *)(param_1 + 0x18) = uStack_c0;
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_c4,2);
  *(undefined8 *)(param_1 + 0x28) = uStack_b0;
  *(undefined8 *)(param_1 + 0x20) = uStack_b8;
  *(undefined8 *)(param_1 + 0x68) = uStack_70;
  *(undefined8 *)(param_1 + 0x60) = uStack_78;
  *(undefined8 *)(param_1 + 0x78) = uStack_60;
  *(undefined8 *)(param_1 + 0x70) = uStack_68;
  *(undefined8 *)(param_1 + 0x48) = uStack_90;
  *(undefined8 *)(param_1 + 0x40) = uStack_98;
  *(undefined8 *)(param_1 + 0x58) = uStack_80;
  *(undefined8 *)(param_1 + 0x50) = uStack_88;
  *(undefined8 *)(param_1 + 0x38) = uStack_a0;
  *(undefined8 *)(param_1 + 0x30) = uStack_a8;
  cVar5 = *(char *)(lVar2 + 0x48);
  if (cVar5 == '\x01') {
LAB_103e5a148:
    *(undefined8 *)(lVar2 + 0x30) = uVar6;
    cVar5 = '\x01';
  }
  else if (cVar5 != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
    uVar3 = extraout_x1_04;
    goto LAB_103e5a148;
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  if (cVar5 != '\x01') {
    if (cVar5 == '\x02') {
      uVar6 = 0;
      iVar1 = *(int *)(param_1 + 0x10);
      goto joined_r0x000103e5a210;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = uVar7;
  iVar1 = *(int *)(param_1 + 0x10);
joined_r0x000103e5a210:
  if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x18) == -0x7ffffffffffffffd) {
      lVar8 = *(long *)(param_1 + 0x28);
      if (lVar8 != 0) {
        puVar9 = *(undefined8 **)(param_1 + 0x30);
        pcVar4 = (code *)*puVar9;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(lVar8);
        }
        if (puVar9[1] != 0) {
          _free(lVar8);
        }
      }
    }
    else {
      func_0x000103dc018c();
    }
  }
  else if (iVar1 == 0) {
    FUN_103db1014(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000000003;
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_13c,1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + 0x68) = uStack_e8;
  *(undefined8 *)(param_1 + 0x60) = uStack_f0;
  *(undefined8 *)(param_1 + 0x78) = uStack_d8;
  *(undefined8 *)(param_1 + 0x70) = uStack_e0;
  *(undefined8 *)(param_1 + 0x48) = uStack_108;
  *(undefined8 *)(param_1 + 0x40) = uStack_110;
  *(undefined8 *)(param_1 + 0x58) = uStack_f8;
  *(undefined8 *)(param_1 + 0x50) = uStack_100;
  *(undefined8 *)(param_1 + 0x38) = uStack_118;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  if (*(char *)(lVar2 + 0x48) != '\x01') {
    if (*(char *)(lVar2 + 0x48) == '\x02') {
      return;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  *(undefined8 *)(lVar2 + 0x30) = uVar6;
  return;
}

