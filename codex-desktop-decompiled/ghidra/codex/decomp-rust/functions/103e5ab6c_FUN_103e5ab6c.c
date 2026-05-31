
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5ab6c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uStack_1650;
  undefined8 uStack_1648;
  undefined8 uStack_1640;
  undefined8 uStack_1638;
  undefined8 uStack_1630;
  undefined8 uStack_1050;
  undefined8 uStack_b58;
  undefined4 auStack_b50 [702];
  undefined8 uStack_58;
  
  uStack_1050 = 0;
  uStack_1650 = 0;
  auStack_b50[0] = 2;
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar2 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar2 + 0x48) == '\x01') {
LAB_103e5ac48:
    uStack_58 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 == 1) goto LAB_103e5abe4;
LAB_103e5ac64:
    uVar5 = uStack_58;
    if (iVar1 == 0) {
      FUN_103dbc954(param_1 + 0x18);
    }
  }
  else {
    if (*(char *)(lVar2 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar2,&DAT_1060edbcc);
      *(undefined1 *)(lVar2 + 0x48) = 1;
      goto LAB_103e5ac48;
    }
    uStack_58 = 0;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 1) goto LAB_103e5ac64;
LAB_103e5abe4:
    uVar5 = uStack_58;
    if (*(long *)(param_1 + 0x18) == -0x7ffffffffffffffd) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 != 0) {
        puVar8 = *(undefined8 **)(param_1 + 0x30);
        pcVar3 = (code *)*puVar8;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(lVar6);
        }
        if (puVar8[1] != 0) {
          _free(lVar6);
        }
      }
    }
    else {
      func_0x000103dc018c();
    }
  }
  _memcpy(param_1 + 0x10,auStack_b50,0xaf8);
  cVar4 = *(char *)(lVar2 + 0x48);
  uStack_1630 = extraout_x1;
  if (cVar4 == '\x01') {
LAB_103e5acac:
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
    cVar4 = '\x01';
  }
  else if (cVar4 != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
    uStack_1630 = extraout_x1_00;
    goto LAB_103e5acac;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  uStack_1648 = 0x8000000000000003;
  uStack_1638 = 0;
  uStack_1650 = CONCAT44(uStack_1650._4_4_,1);
  uStack_1640 = uVar5;
  if (cVar4 != '\x01') {
    if (cVar4 == '\x02') {
      uStack_b58 = 0;
      iVar1 = *(int *)(param_1 + 0x10);
      uVar7 = uStack_b58;
      goto joined_r0x000103e5ad74;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = uVar5;
  iVar1 = *(int *)(param_1 + 0x10);
joined_r0x000103e5ad74:
  uStack_b58 = uVar7;
  if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x18) == -0x7ffffffffffffffd) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 != 0) {
        puVar8 = *(undefined8 **)(param_1 + 0x30);
        pcVar3 = (code *)*puVar8;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(lVar6);
        }
        if (puVar8[1] != 0) {
          _free(lVar6);
        }
      }
    }
    else {
      func_0x000103dc018c();
    }
  }
  else if (iVar1 == 0) {
    FUN_103dbc954(param_1 + 0x18);
  }
  _memcpy(param_1 + 0x10,&uStack_1650,0xaf8);
  if (*(char *)(lVar2 + 0x48) != '\x01') {
    if (*(char *)(lVar2 + 0x48) == '\x02') {
      return;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  *(undefined8 *)(lVar2 + 0x30) = uVar7;
  return;
}

