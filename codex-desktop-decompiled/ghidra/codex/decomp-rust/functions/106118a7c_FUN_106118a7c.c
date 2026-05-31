
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106118a7c(long *param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_68 = 4;
  lVar2 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar2 + 0x48) != '\x01') {
    if (*(char *)(lVar2 + 0x48) == '\x02') {
      uVar4 = 0;
      goto LAB_106118b1c;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar2,&DAT_1060edbcc);
    *(undefined1 *)(lVar2 + 0x48) = 1;
  }
  bVar1 = *(byte *)(lVar2 + 0x45);
  bVar3 = bVar1;
  if (*(byte *)(lVar2 + 0x44) == 1) {
    if (bVar1 == 0) {
      FUN_10610bbb4(*param_3,param_3[1]);
      *param_1 = 4;
      return;
    }
    bVar3 = bVar1 - 1;
  }
  *(byte *)(lVar2 + 0x45) = bVar3;
  uVar4 = (uint)*(byte *)(lVar2 + 0x44) << 8 | (uint)bVar1 << 0x10;
LAB_106118b1c:
  (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(param_2,&lStack_68);
  param_1[1] = lStack_60;
  *param_1 = lStack_68;
  param_1[3] = lStack_50;
  param_1[2] = lStack_58;
  param_1[5] = lStack_40;
  param_1[4] = lStack_48;
  param_1[6] = lStack_38;
  if ((lStack_68 == 4) && ((uVar4 >> 8 & 1) != 0)) {
    if (*(char *)(lVar2 + 0x48) != '\x01') {
      if (*(char *)(lVar2 + 0x48) == '\x02') {
        return;
      }
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar2,&DAT_1060edbcc);
      *(undefined1 *)(lVar2 + 0x48) = 1;
    }
    *(undefined1 *)(lVar2 + 0x44) = 1;
    *(char *)(lVar2 + 0x45) = (char)(uVar4 >> 0x10);
  }
  return;
}

