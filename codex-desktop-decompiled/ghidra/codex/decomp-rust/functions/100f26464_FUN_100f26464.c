
void FUN_100f26464(long *param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  long unaff_x20;
  long unaff_x23;
  char cStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  pcVar2 = *(char **)(param_2 + 8);
  if (pcVar2 == *(char **)(param_2 + 0x18)) {
LAB_100f264a0:
    *param_1 = -0x7fffffffffffffff;
    return;
  }
  cStack_a0 = *pcVar2;
  *(char **)(param_2 + 8) = pcVar2 + 0x20;
  if (cStack_a0 == '\x16') goto LAB_100f264a0;
  uStack_97 = (undefined7)*(undefined8 *)(pcVar2 + 9);
  uStack_9f = (undefined7)*(undefined8 *)(pcVar2 + 1);
  uStack_98 = (undefined1)((ulong)*(undefined8 *)(pcVar2 + 1) >> 0x38);
  uStack_88 = *(undefined8 *)(pcVar2 + 0x18);
  uStack_90 = (undefined1)*(undefined8 *)(pcVar2 + 0x10);
  uStack_8f = (undefined7)((ulong)*(undefined8 *)(pcVar2 + 0x10) >> 8);
  *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + 1;
  if (cStack_a0 != '\x10') {
    if (cStack_a0 == '\x11') {
      plVar1 = (long *)CONCAT71(uStack_97,uStack_98);
      lStack_78 = plVar1[1];
      lStack_80 = *plVar1;
      lStack_68 = plVar1[3];
      lStack_70 = plVar1[2];
      FUN_1004b5b34(&lStack_58,&lStack_80);
      if (lStack_58 == -0x8000000000000000) {
        _free(plVar1);
        lStack_78 = lStack_50;
LAB_100f2655c:
        *param_1 = -0x7ffffffffffffffe;
        param_1[1] = lStack_78;
        return;
      }
      _free(plVar1);
      unaff_x20 = lStack_50;
      unaff_x23 = lStack_48;
      goto LAB_100f264f4;
    }
    if (cStack_a0 != '\x12') {
      FUN_1004b5b34(&lStack_80,&cStack_a0);
      unaff_x20 = lStack_78;
      lStack_58 = lStack_80;
      unaff_x23 = lStack_70;
      if (lStack_80 == -0x8000000000000000) goto LAB_100f2655c;
      goto LAB_100f264f4;
    }
  }
  FUN_100e077ec(&cStack_a0);
  lStack_58 = -0x8000000000000000;
LAB_100f264f4:
  *param_1 = lStack_58;
  param_1[1] = unaff_x20;
  param_1[2] = unaff_x23;
  return;
}

