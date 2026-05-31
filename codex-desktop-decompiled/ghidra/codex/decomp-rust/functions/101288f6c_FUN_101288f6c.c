
/* WARNING: Removing unreachable block (ram,0x00010128902c) */

void FUN_101288f6c(void)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *unaff_x19;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  plVar1 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000060);
  if (*plVar1 == 1) {
    uVar3 = plVar1[1];
    if ((uVar3 & 3) != 1) goto LAB_101288fe4;
    puVar4 = (undefined8 *)(uVar3 - 1);
    uVar5 = *puVar4;
    puVar6 = *(undefined8 **)(uVar3 + 7);
    pcVar2 = (code *)*puVar6;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar5);
    }
    if (puVar6[1] != 0) {
      _free(uVar5);
    }
  }
  else {
    if ((*plVar1 != 0) || (plVar1[2] == 0)) goto LAB_101288fe4;
    puVar4 = (undefined8 *)plVar1[1];
  }
  _free(puVar4);
LAB_101288fe4:
  _free(plVar1);
  uVar5 = FUN_1088561c0(&UNK_108cc1d3a,0x4c);
  *unaff_x19 = 0x8000000000000001;
  unaff_x19[1] = uVar5;
  FUN_100e077ec();
  return;
}

