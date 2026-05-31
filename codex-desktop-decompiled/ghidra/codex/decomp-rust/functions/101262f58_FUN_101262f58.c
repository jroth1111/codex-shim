
void FUN_101262f58(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar4;
  long unaff_x25;
  
  plVar2 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000030);
  *(char *)(unaff_x20 + 0x38) = *(char *)(unaff_x20 + 0x38) + '\x01';
  plVar1 = (long *)FUN_1006546a8();
  if (unaff_x21 == -0x8000000000000000) {
    plVar4 = plVar2;
    if (plVar1 != (long *)0x0) {
      if (*plVar1 == 1) {
        FUN_100de21d4(plVar1 + 1);
      }
      else if ((*plVar1 == 0) && (plVar1[2] != 0)) {
        _free(plVar1[1]);
      }
      _free(plVar1);
    }
  }
  else {
    if (plVar1 == (long *)0x0) {
      *unaff_x19 = unaff_x21;
      unaff_x19[1] = (long)plVar2;
      unaff_x19[2] = unaff_x25;
      return;
    }
    plVar4 = plVar1;
    if (unaff_x21 != 0) {
      _free(plVar2);
    }
  }
  lVar3 = FUN_108832dfc(plVar4);
  unaff_x19[1] = lVar3;
  *unaff_x19 = -0x7fffffffffffffff;
  return;
}

