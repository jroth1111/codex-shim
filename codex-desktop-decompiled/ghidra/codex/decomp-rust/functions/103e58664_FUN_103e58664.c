
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e58664(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar2 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar2 + 0x48) != '\x01') {
    if (*(char *)(lVar2 + 0x48) == '\x02') {
      uVar7 = 0;
      iVar1 = *(int *)(param_1 + 0x10);
      goto joined_r0x000103e58730;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = uVar5;
  iVar1 = *(int *)(param_1 + 0x10);
joined_r0x000103e58730:
  if (iVar1 == 1) {
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar6 = *(long *)(param_1 + 0x20), lVar6 != 0)) {
      puVar4 = *(undefined8 **)(param_1 + 0x28);
      pcVar3 = (code *)*puVar4;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(lVar6);
      }
      if (puVar4[1] != 0) {
        _free(lVar6);
      }
    }
  }
  else if (iVar1 == 0) {
    func_0x000103da4c68(param_1 + 0x18);
  }
  uVar5 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(param_1 + 0x18) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  *(undefined8 *)(param_1 + 0x60) = param_2[10];
  uVar5 = param_2[6];
  uVar9 = param_2[9];
  uVar8 = param_2[8];
  *(undefined8 *)(param_1 + 0x48) = param_2[7];
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  uVar5 = param_2[4];
  *(undefined8 *)(param_1 + 0x38) = param_2[5];
  *(undefined8 *)(param_1 + 0x30) = uVar5;
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

