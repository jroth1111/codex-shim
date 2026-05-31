
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103d8f244(long param_1)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 auStack_b28 [696];
  undefined8 uStack_48;
  
  auStack_b28[0] = 2;
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar2 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar2 + 0x48) != '\x01') {
    if (*(char *)(lVar2 + 0x48) == '\x02') {
      uStack_48 = 0;
      iVar1 = *(int *)(param_1 + 0x10);
      uVar7 = uStack_48;
      goto joined_r0x000103d8f32c;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  uVar7 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined8 *)(lVar2 + 0x30) = uVar4;
  iVar1 = *(int *)(param_1 + 0x10);
joined_r0x000103d8f32c:
  uStack_48 = uVar7;
  if (iVar1 == 1) {
    if (*(long *)(param_1 + 0x18) == -0x7ffffffffffffffd) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (lVar6 != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x30);
        pcVar3 = (code *)*puVar5;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(lVar6);
        }
        if (puVar5[1] != 0) {
          _free(lVar6);
        }
      }
    }
    else {
      func_0x000103dc018c();
    }
  }
  else if (iVar1 == 0) {
    func_0x000103dbcaf0(param_1 + 0x18);
  }
  _memcpy(param_1 + 0x10,auStack_b28,0xae0);
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

