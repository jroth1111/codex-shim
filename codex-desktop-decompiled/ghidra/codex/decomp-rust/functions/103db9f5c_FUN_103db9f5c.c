
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db9f5c(long param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uStack_b4;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar2 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar2 + 0x48) != '\x01') {
    if (*(char *)(lVar2 + 0x48) == '\x02') {
      uVar7 = 0;
      iVar1 = *(int *)(param_1 + 0x10);
      goto joined_r0x000103dba040;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = uVar5;
  iVar1 = *(int *)(param_1 + 0x10);
joined_r0x000103dba040:
  if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x18) == -0x7ffffffffffffffd) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 != 0) {
        puVar4 = *(undefined8 **)(param_1 + 0x30);
        pcVar3 = (code *)*puVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(lVar6);
        }
        if (puVar4[1] != 0) {
          _free(lVar6);
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
  *(undefined8 *)(param_1 + 0x18) = uStack_b0;
  *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_b4,2);
  *(undefined8 *)(param_1 + 0x28) = uStack_a0;
  *(undefined8 *)(param_1 + 0x20) = uStack_a8;
  *(undefined8 *)(param_1 + 0x68) = uStack_60;
  *(undefined8 *)(param_1 + 0x60) = uStack_68;
  *(undefined8 *)(param_1 + 0x78) = uStack_50;
  *(undefined8 *)(param_1 + 0x70) = uStack_58;
  *(undefined8 *)(param_1 + 0x38) = uStack_90;
  *(undefined8 *)(param_1 + 0x30) = uStack_98;
  *(undefined8 *)(param_1 + 0x48) = uStack_80;
  *(undefined8 *)(param_1 + 0x40) = uStack_88;
  *(undefined8 *)(param_1 + 0x58) = uStack_70;
  *(undefined8 *)(param_1 + 0x50) = uStack_78;
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

