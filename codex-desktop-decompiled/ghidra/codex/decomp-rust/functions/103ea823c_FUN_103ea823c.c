
void FUN_103ea823c(char *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  long lVar5;
  
  if (*param_1 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff68);
  }
  else {
    if (param_1[1] == '\0') {
      return;
    }
    puVar4 = *(undefined8 **)(param_1 + 8);
    unaff_x19 = (long *)*puVar4;
    lVar5 = puVar4[3] + -1;
    puVar4[3] = lVar5;
    if ((*(byte *)(puVar4 + 4) & 1) == 0) {
      unaff_x20 = unaff_x19[2];
    }
    else {
      lVar3 = unaff_x19[2];
      if (*unaff_x19 == lVar3) {
        FUN_10897c4d0(unaff_x19,lVar3,1,1,1);
        lVar3 = unaff_x19[2];
        *(undefined1 *)(unaff_x19[1] + lVar3) = 10;
        unaff_x20 = lVar3 + 1;
        unaff_x19[2] = unaff_x20;
      }
      else {
        *(undefined1 *)(unaff_x19[1] + lVar3) = 10;
        unaff_x20 = lVar3 + 1;
        unaff_x19[2] = unaff_x20;
      }
      if (lVar5 != 0) {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        do {
          if ((ulong)(*unaff_x19 - unaff_x20) < uVar2) {
            FUN_10897c4d0(unaff_x19,unaff_x20,uVar2,1,1);
            unaff_x20 = unaff_x19[2];
          }
          _memcpy(unaff_x19[1] + unaff_x20,uVar1,uVar2);
          unaff_x20 = unaff_x20 + uVar2;
          unaff_x19[2] = unaff_x20;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    if (*unaff_x19 != unaff_x20) goto LAB_103ea8314;
  }
  FUN_10897c4d0(unaff_x19,unaff_x20,1,1,1);
  unaff_x20 = unaff_x19[2];
LAB_103ea8314:
  *(undefined1 *)(unaff_x19[1] + unaff_x20) = 0x7d;
  unaff_x19[2] = unaff_x20 + 1;
  return;
}

