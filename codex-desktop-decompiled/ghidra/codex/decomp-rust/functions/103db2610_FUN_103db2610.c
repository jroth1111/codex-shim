
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103db2610(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 auStack_a08 [624];
  undefined8 uStack_48;
  
  auStack_a08[0] = 2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar1 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar1 + 0x48) != '\x01') {
    if (*(char *)(lVar1 + 0x48) == '\x02') {
      uVar2 = 0;
      goto LAB_103db268c;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar1,&DAT_1060edbcc);
    *(undefined1 *)(lVar1 + 0x48) = 1;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
LAB_103db268c:
  uStack_48 = uVar2;
  FUN_103dac1cc(param_1 + 0x10);
  _memcpy(param_1 + 0x10,auStack_a08,0x9c0);
  if (*(char *)(lVar1 + 0x48) != '\x01') {
    if (*(char *)(lVar1 + 0x48) == '\x02') {
      return;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar1,&DAT_1060edbcc);
    *(undefined1 *)(lVar1 + 0x48) = 1;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  return;
}

