
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10151b600(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  char cStack_42;
  char cStack_41;
  
  lStack_68 = 1;
  lVar1 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar1 + 0x48) != '\x01') {
    if (*(char *)(lVar1 + 0x48) == '\x02') {
      cVar4 = '\0';
      cVar3 = '\0';
      goto LAB_10151b69c;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar1,&DAT_100c35d48);
    *(undefined1 *)(lVar1 + 0x48) = 1;
  }
  cVar4 = *(char *)(lVar1 + 0x44);
  cVar3 = *(char *)(lVar1 + 0x45);
  cVar2 = cVar3;
  if (cVar4 == '\x01') {
    if (cVar3 == '\0') {
      FUN_10610bbb4(*param_3,param_3[1]);
      *param_1 = 1;
      return;
    }
    cVar2 = cVar3 + -1;
  }
  *(char *)(lVar1 + 0x45) = cVar2;
LAB_10151b69c:
  cStack_42 = cVar4;
  cStack_41 = cVar3;
  (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(param_2,&lStack_68);
  param_1[1] = lStack_60;
  *param_1 = lStack_68;
  param_1[3] = lStack_50;
  param_1[2] = lStack_58;
  if ((lStack_68 != 0) && (cVar4 != '\0')) {
    if (*(char *)(lVar1 + 0x48) != '\x01') {
      if (*(char *)(lVar1 + 0x48) == '\x02') {
        return;
      }
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar1,&DAT_1060edbcc);
      *(undefined1 *)(lVar1 + 0x48) = 1;
    }
    *(undefined1 *)(lVar1 + 0x44) = 1;
    *(char *)(lVar1 + 0x45) = cVar3;
  }
  return;
}

