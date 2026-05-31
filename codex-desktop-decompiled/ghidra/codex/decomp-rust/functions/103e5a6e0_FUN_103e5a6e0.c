
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e5a6e0(long param_1)

{
  long lVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_1690;
  undefined2 uStack_1688;
  undefined8 uStack_1680;
  undefined8 uStack_1678;
  undefined8 uStack_1670;
  undefined8 uStack_1040;
  undefined8 uStack_b70;
  undefined4 auStack_b68 [712];
  undefined8 uStack_48;
  
  uStack_1040 = 0;
  uStack_1690 = 0;
  auStack_b68[0] = 2;
  uVar4 = *(undefined8 *)(param_1 + 8);
  lVar1 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar1 + 0x48) == '\x01') {
LAB_103e5a75c:
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = uVar4;
  }
  else {
    if (*(char *)(lVar1 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar1,&DAT_1060edbcc);
      *(undefined1 *)(lVar1 + 0x48) = 1;
      goto LAB_103e5a75c;
    }
    uVar3 = 0;
  }
  uStack_48 = uVar3;
  FUN_103da6208(param_1 + 0x10);
  _memcpy(param_1 + 0x10,auStack_b68,0xb20);
  cVar2 = *(char *)(lVar1 + 0x48);
  uStack_1670 = extraout_x1;
  if (cVar2 == '\x01') {
LAB_103e5a7ac:
    *(undefined8 *)(lVar1 + 0x30) = uVar3;
    cVar2 = '\x01';
  }
  else if (cVar2 != '\x02') {
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar1,&DAT_1060edbcc);
    *(undefined1 *)(lVar1 + 0x48) = 1;
    uStack_1670 = extraout_x1_00;
    goto LAB_103e5a7ac;
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
  uStack_1688 = 0x20;
  uStack_1678 = 0;
  uStack_1690 = CONCAT44(uStack_1690._4_4_,1);
  uStack_1680 = uVar4;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      uVar3 = 0;
      goto LAB_103e5a80c;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar1,&DAT_1060edbcc);
    *(undefined1 *)(lVar1 + 0x48) = 1;
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = uVar4;
LAB_103e5a80c:
  uStack_b70 = uVar3;
  FUN_103da6208(param_1 + 0x10);
  _memcpy(param_1 + 0x10,&uStack_1690,0xb20);
  if (*(char *)(lVar1 + 0x48) != '\x01') {
    if (*(char *)(lVar1 + 0x48) == '\x02') {
      return;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar1,&DAT_1060edbcc);
    *(undefined1 *)(lVar1 + 0x48) = 1;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar3;
  return;
}

