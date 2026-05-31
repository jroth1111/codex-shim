
void FUN_103e2e828(long *param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long *plVar6;
  int *piVar7;
  char *pcVar8;
  undefined1 auVar9 [16];
  undefined1 uStack_91;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  char cStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  cStack_80 = *param_2;
  *param_2 = '\x16';
  if (cStack_80 != '\x16') {
    uStack_77 = (undefined7)*(undefined8 *)(param_2 + 9);
    uStack_7f = (undefined7)*(undefined8 *)(param_2 + 1);
    uStack_78 = (undefined1)((ulong)*(undefined8 *)(param_2 + 1) >> 0x38);
    uStack_68 = *(undefined8 *)(param_2 + 0x18);
    uStack_70 = (undefined1)*(undefined8 *)(param_2 + 0x10);
    uStack_6f = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x10) >> 8);
    if (cStack_80 != '\x10') {
      if (cStack_80 == '\x11') {
        plVar6 = (long *)CONCAT71(uStack_77,uStack_78);
        lStack_58 = plVar6[1];
        lStack_60 = *plVar6;
        lStack_48 = plVar6[3];
        lStack_50 = plVar6[2];
        FUN_103d20208(&lStack_38,&lStack_60);
        if (lStack_38 == -0x8000000000000000) {
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lStack_30;
        }
        else {
          param_1[1] = lStack_30;
          *param_1 = lStack_38;
          param_1[2] = lStack_28;
        }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(plVar6);
        return;
      }
      if (cStack_80 != '\x12') {
        FUN_103d20208(&lStack_60,&cStack_80);
        if (lStack_60 == -0x8000000000000000) {
          *param_1 = -0x7fffffffffffffff;
          param_1[1] = lStack_58;
          return;
        }
        param_1[1] = lStack_58;
        *param_1 = lStack_60;
        param_1[2] = lStack_50;
        return;
      }
    }
    *param_1 = -0x8000000000000000;
    func_0x000103db23f4(&cStack_80);
    return;
  }
  uVar4 = func_0x000108a079f0(&UNK_108dc11c5,0x2c,&UNK_10b3004a0);
  _free();
  auVar9 = __Unwind_Resume(uVar4);
  plVar6 = auVar9._8_8_;
  puVar5 = auVar9._0_8_;
  pbVar1 = (byte *)*plVar6;
  if (pbVar1 == (byte *)plVar6[1]) {
    puVar5[1] = 2;
    *puVar5 = 0;
    return;
  }
  *plVar6 = (long)(pbVar1 + 0x40);
  plVar6[2] = (long)(pbVar1 + 0x20);
  plVar6[3] = plVar6[3] + 1;
  bVar2 = *pbVar1;
  if (bVar2 < 0xd) {
    if (bVar2 == 1) {
      puVar5[1] = pbVar1[1] != 0;
      *puVar5 = 0;
      return;
    }
    if (bVar2 == 4) {
      puVar5[1] = *(long *)(pbVar1 + 8) != 0;
      *puVar5 = 0;
      return;
    }
    if (bVar2 != 0xc) {
LAB_103e2eb30:
      uStack_88 = 0x103e2e964;
      puStack_90 = &stack0xfffffffffffffff0;
      uVar4 = func_0x00010897c93c(pbVar1,&uStack_91,&UNK_10b2f8a18);
      *(undefined8 *)(puVar5 + 8) = uVar4;
      *puVar5 = 1;
      return;
    }
    if (*(long *)(pbVar1 + 0x18) == 6) {
      piVar7 = *(int **)(pbVar1 + 0x10);
LAB_103e2eaec:
      puVar5[1] = *piVar7 != 0x6874656d || (short)piVar7[1] != 0x646f;
      *puVar5 = 0;
      return;
    }
  }
  else if (bVar2 == 0xd) {
    if (*(long *)(pbVar1 + 0x10) == 6) {
      piVar7 = *(int **)(pbVar1 + 8);
      goto LAB_103e2eaec;
    }
  }
  else {
    if (bVar2 == 0xe) {
      if ((((*(long *)(pbVar1 + 0x18) != 6) || (pcVar8 = *(char **)(pbVar1 + 0x10), *pcVar8 != 'm'))
          || (pcVar8[1] != 'e')) || ((pcVar8[2] != 't' || (pcVar8[3] != 'h')))) goto LAB_103e2eb1c;
      cVar3 = pcVar8[4];
    }
    else {
      if (bVar2 != 0xf) goto LAB_103e2eb30;
      if (((*(long *)(pbVar1 + 0x10) != 6) || (pcVar8 = *(char **)(pbVar1 + 8), *pcVar8 != 'm')) ||
         ((pcVar8[1] != 'e' || ((pcVar8[2] != 't' || (pcVar8[3] != 'h')))))) goto LAB_103e2eb1c;
      cVar3 = pcVar8[4];
    }
    if (cVar3 == 'o') {
      puVar5[1] = pcVar8[5] != 'd';
      *puVar5 = 0;
      return;
    }
  }
LAB_103e2eb1c:
  puVar5[1] = 1;
  *puVar5 = 0;
  return;
}

