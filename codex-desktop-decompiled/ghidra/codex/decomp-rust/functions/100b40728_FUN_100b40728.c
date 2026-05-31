
void FUN_100b40728(undefined2 *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 9) {
    if (param_3 == 6) {
      if ((int)*param_2 == 0x696e6564 && *(short *)((long)param_2 + 4) == 0x6465) {
        *(undefined1 *)((long)param_1 + 1) = 2;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if (param_3 == 8) {
      if (*param_2 == 0x6465766f72707061) {
        *(undefined1 *)((long)param_1 + 1) = 1;
        *(undefined1 *)param_1 = 0;
        return;
      }
    }
    else if ((param_3 == 7) &&
            ((int)*param_2 == 0x726f6261 && *(int *)((long)param_2 + 3) == 0x64657472)) {
      *(undefined1 *)((long)param_1 + 1) = 4;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if (param_3 == 9) {
    if (*param_2 == 0x756f5f64656d6974 && (char)param_2[1] == 't') {
      *(undefined1 *)((long)param_1 + 1) = 3;
      *(undefined1 *)param_1 = 0;
      return;
    }
  }
  else if ((param_3 == 0xb) &&
          (*param_2 == 0x72676f72705f6e69 && *(long *)((long)param_2 + 3) == 0x73736572676f7270)) {
    *param_1 = 0;
    return;
  }
  uVar1 = FUN_1087e4494(param_2,param_3,&UNK_10b2230f8,5);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  return;
}

