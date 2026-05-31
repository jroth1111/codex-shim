
void FUN_100f2f6c0(long *param_1,long *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  long lStack_79;
  long lStack_68;
  char cStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_57;
  undefined8 uStack_4f;
  undefined8 uStack_47;
  undefined8 uStack_3f;
  undefined8 uStack_37;
  undefined8 uStack_2f;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  long lStack_18;
  
  pcVar2 = (char *)*param_2;
  if (pcVar2 == (char *)param_2[1]) {
    *(undefined1 *)(param_1 + 1) = 3;
    *param_1 = 2;
    return;
  }
  *param_2 = (long)(pcVar2 + 0x20);
  param_2[2] = param_2[2] + 1;
  cVar1 = *pcVar2;
  cVar3 = '\x02';
  if (cVar1 == '\x10') goto LAB_100f2f79c;
  if (cVar1 == '\x11') {
    pcVar2 = *(char **)(pcVar2 + 8);
    if (*pcVar2 != '\0') goto LAB_100f2f718;
LAB_100f2f78c:
    cStack_60 = pcVar2[1];
    lStack_68 = 2;
  }
  else {
    if (cVar1 == '\x12') goto LAB_100f2f79c;
    if (cVar1 == '\0') goto LAB_100f2f78c;
LAB_100f2f718:
    FUN_108855bf0(&lStack_68,pcVar2,&uStack_c0,&UNK_10b20a560);
    if (lStack_68 != 2) {
      uStack_98 = uStack_37;
      uStack_a0 = uStack_3f;
      uStack_88 = uStack_27;
      uStack_90 = uStack_2f;
      lStack_79 = lStack_18;
      uStack_81 = uStack_20;
      uStack_80 = uStack_1f;
      uStack_b8 = uStack_57;
      uStack_c0 = uStack_5f;
      uStack_a8 = uStack_47;
      uStack_b0 = uStack_4f;
    }
  }
  cVar3 = cStack_60;
  if (lStack_68 != 2) {
    *(undefined8 *)((long)param_1 + 0x21) = uStack_a8;
    *(undefined8 *)((long)param_1 + 0x19) = uStack_b0;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_98;
    *(undefined8 *)((long)param_1 + 0x29) = uStack_a0;
    *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_81,uStack_88);
    *(undefined8 *)((long)param_1 + 0x39) = uStack_90;
    param_1[10] = lStack_79;
    param_1[9] = CONCAT71(uStack_80,uStack_81);
    *(undefined8 *)((long)param_1 + 0x11) = uStack_b8;
    *(undefined8 *)((long)param_1 + 9) = uStack_c0;
    *param_1 = lStack_68;
    *(char *)(param_1 + 1) = cStack_60;
    return;
  }
LAB_100f2f79c:
  *(char *)(param_1 + 1) = cVar3;
  *param_1 = 2;
  return;
}

