
/* WARNING: Removing unreachable block (ram,0x000101289004) */

void FUN_1012890bc(void)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar6;
  
  plVar2 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000060);
  if (unaff_x22 != 0) {
    _free();
  }
  if (*plVar2 == 1) {
    uVar4 = plVar2[1];
    if ((uVar4 & 3) != 1) goto LAB_101288960;
    puVar1 = (undefined8 *)(uVar4 - 1);
    uVar5 = *puVar1;
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
    if ((*plVar2 != 0) || (plVar2[2] == 0)) goto LAB_101288960;
    puVar1 = (undefined8 *)plVar2[1];
  }
  _free(puVar1);
LAB_101288960:
  _free(plVar2);
                    /* WARNING: Could not recover jumptable at 0x00010128897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_101288980 + (ulong)*(ushort *)(&UNK_108c9faea + unaff_x23 * 2) * 4))();
  return;
}

