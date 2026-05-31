
void FUN_1012888e4(void)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x23;
  undefined8 *puVar6;
  
  plVar1 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000060);
  if (*plVar1 == 1) {
    uVar4 = plVar1[1];
    if ((uVar4 & 3) != 1) goto LAB_101288960;
    puVar2 = (undefined8 *)(uVar4 - 1);
    uVar5 = *puVar2;
    puVar6 = *(undefined8 **)(uVar4 + 7);
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar5);
    }
    if (puVar6[1] != 0) {
      _free(uVar5);
    }
  }
  else {
    if ((*plVar1 != 0) || (plVar1[2] == 0)) goto LAB_101288960;
    puVar2 = (undefined8 *)plVar1[1];
  }
  _free(puVar2);
LAB_101288960:
  _free(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010128897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_101288980 + (ulong)*(ushort *)(&UNK_108c9faea + unaff_x23 * 2) * 4))();
  return;
}

