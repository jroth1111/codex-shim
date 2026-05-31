
void FUN_103ec89f8(long *param_1,long param_2)

{
  char *pcVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  char cStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  pcVar1 = *(char **)(param_2 + 0x28);
  if (pcVar1 != *(char **)(param_2 + 0x38)) {
    cStack_78 = *pcVar1;
    *(char **)(param_2 + 0x28) = pcVar1 + 0x40;
    if (cStack_78 != '\x16') {
      *(long *)(param_2 + 0x40) = *(long *)(param_2 + 0x40) + 1;
      uStack_6f = (undefined7)*(undefined8 *)(pcVar1 + 9);
      uStack_77 = (undefined7)*(undefined8 *)(pcVar1 + 1);
      uStack_70 = (undefined1)((ulong)*(undefined8 *)(pcVar1 + 1) >> 0x38);
      lStack_60 = *(long *)(pcVar1 + 0x18);
      uStack_a8 = *(undefined8 *)(pcVar1 + 0x28);
      uStack_b0 = *(undefined8 *)(pcVar1 + 0x20);
      uStack_68 = (undefined1)*(undefined8 *)(pcVar1 + 0x10);
      uStack_67 = (undefined7)((ulong)*(undefined8 *)(pcVar1 + 0x10) >> 8);
      uStack_98 = *(undefined8 *)(pcVar1 + 0x38);
      uStack_a0 = *(undefined8 *)(pcVar1 + 0x30);
      FUN_103d20208(&lStack_90,&cStack_78);
      if (lStack_90 == -0x8000000000000000) {
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = lStack_88;
        func_0x000103db23f4(&uStack_b0);
        return;
      }
      func_0x000103d1f184(&cStack_78,&uStack_b0);
      if (CONCAT71(uStack_77,cStack_78) == -0x7ffffffffffffffb) {
        *param_1 = -0x7fffffffffffffff;
        param_1[1] = CONCAT71(uStack_6f,uStack_70);
        if (lStack_90 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(lStack_88);
        return;
      }
      param_1[6] = lStack_60;
      param_1[5] = CONCAT71(uStack_67,uStack_68);
      param_1[8] = lStack_50;
      param_1[7] = lStack_58;
      param_1[10] = lStack_40;
      param_1[9] = lStack_48;
      param_1[0xb] = lStack_38;
      param_1[4] = CONCAT71(uStack_6f,uStack_70);
      param_1[3] = CONCAT71(uStack_77,cStack_78);
      *param_1 = lStack_90;
      param_1[1] = lStack_88;
      param_1[2] = lStack_80;
      return;
    }
  }
  *param_1 = -0x8000000000000000;
  return;
}

