
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e57ff4(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar2 + 0x48) == '\x01') {
LAB_103e580d4:
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    if (*(char *)(lVar2 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar2,&DAT_1060edbcc);
      *(undefined1 *)(lVar2 + 0x48) = 1;
      goto LAB_103e580d4;
    }
    uVar6 = 0;
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (iVar1 == 1) {
    if (*(ulong *)(param_1 + 0x18) == 3) {
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 == 0) goto LAB_103e580fc;
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(lVar5);
      }
    }
    else {
      if ((*(ulong *)(param_1 + 0x18) < 2) || (lVar5 = *(long *)(param_1 + 0x28), lVar5 == 0))
      goto LAB_103e580fc;
      puVar4 = *(undefined8 **)(param_1 + 0x30);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)(lVar5);
      }
    }
    if (puVar4[1] != 0) {
      _free(lVar5);
    }
  }
  else if (iVar1 == 0) {
    func_0x000103da8a48(param_1 + 0x18);
  }
LAB_103e580fc:
  _memcpy(param_1 + 0x10,param_2,0x238);
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

