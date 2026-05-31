
void __ZN14rama_http_core4body8incoming6Sender17try_send_trailers17h91738be27cd6e316E
               (long *param_1,long *param_2,long *param_3)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 in_wzr;
  long lVar6;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *param_2;
  *param_2 = 0;
  if (lVar4 == 0) {
    *param_1 = 3;
    if (param_3[10] != 0) {
      _free(param_3[9]);
    }
    lVar4 = param_3[4];
    FUN_105aafbb8(lVar4,param_3[5]);
    if (param_3[3] != 0) {
      _free(lVar4);
    }
    lVar5 = param_3[7];
    lVar4 = param_3[8] + 1;
    lVar3 = lVar5 + 0x38;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      (**(code **)(*(long *)(lVar3 + -0x18) + 0x20))
                (lVar3,*(undefined8 *)(lVar3 + -0x10),*(undefined8 *)(lVar3 + -8));
      lVar3 = lVar3 + 0x48;
    }
    if (param_3[6] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar5);
      return;
    }
    return;
  }
  if (*(char *)(lVar4 + 0xa8) == '\0') {
    LOAcquire();
    cVar1 = *(char *)(lVar4 + 0x70);
    *(char *)(lVar4 + 0x70) = '\x01';
    LORelease();
    if (cVar1 != '\0') goto LAB_105a9dbb0;
    if (*(long *)(lVar4 + 0x10) != 3) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b15610,0x20,&UNK_10b406130);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x105a9dd0c);
      (*pcVar2)();
    }
    lVar5 = param_3[4];
    lVar6 = param_3[7];
    lVar3 = param_3[6];
    *(long *)(lVar4 + 0x38) = param_3[5];
    *(long *)(lVar4 + 0x30) = lVar5;
    *(long *)(lVar4 + 0x48) = lVar6;
    *(long *)(lVar4 + 0x40) = lVar3;
    lVar5 = param_3[8];
    lVar6 = param_3[0xb];
    lVar3 = param_3[10];
    *(long *)(lVar4 + 0x58) = param_3[9];
    *(long *)(lVar4 + 0x50) = lVar5;
    *(long *)(lVar4 + 0x68) = lVar6;
    *(long *)(lVar4 + 0x60) = lVar3;
    lVar5 = *param_3;
    lVar6 = param_3[3];
    lVar3 = param_3[2];
    *(long *)(lVar4 + 0x18) = param_3[1];
    *(long *)(lVar4 + 0x10) = lVar5;
    *(long *)(lVar4 + 0x28) = lVar6;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(undefined1 *)(lVar4 + 0x70) = in_wzr;
    if (*(char *)(lVar4 + 0xa8) == '\0') {
LAB_105a9dc6c:
      FUN_105aaf61c(&stack0xffffffffffffffc8);
      lVar5 = 4;
      goto LAB_105a9dcd8;
    }
    LOAcquire();
    cVar1 = *(char *)(lVar4 + 0x70);
    *(char *)(lVar4 + 0x70) = '\x01';
    LORelease();
    if (cVar1 != '\0') goto LAB_105a9dc6c;
    lVar5 = *(long *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = 3;
    if (lVar5 == 3) {
      *(undefined1 *)(lVar4 + 0x70) = in_wzr;
      goto LAB_105a9dc6c;
    }
    lStack_68 = *(long *)(lVar4 + 0x40);
    lStack_70 = *(long *)(lVar4 + 0x38);
    lStack_58 = *(long *)(lVar4 + 0x50);
    lStack_60 = *(long *)(lVar4 + 0x48);
    lStack_48 = *(long *)(lVar4 + 0x60);
    lStack_50 = *(long *)(lVar4 + 0x58);
    lVar3 = *(long *)(lVar4 + 0x68);
    lStack_88 = *(long *)(lVar4 + 0x20);
    lStack_90 = *(long *)(lVar4 + 0x18);
    lStack_78 = *(long *)(lVar4 + 0x30);
    lStack_80 = *(long *)(lVar4 + 0x28);
    *(undefined1 *)(lVar4 + 0x70) = in_wzr;
    FUN_105aaf61c(&stack0xffffffffffffffc8);
  }
  else {
LAB_105a9dbb0:
    lVar5 = *param_3;
    lStack_68 = param_3[6];
    lStack_70 = param_3[5];
    lStack_58 = param_3[8];
    lStack_60 = param_3[7];
    lStack_48 = param_3[10];
    lStack_50 = param_3[9];
    lVar3 = param_3[0xb];
    lStack_88 = param_3[2];
    lStack_90 = param_3[1];
    lStack_78 = param_3[4];
    lStack_80 = param_3[3];
    FUN_105aaf61c(&stack0xffffffffffffffc8);
    if (lVar5 == 3) {
      lVar5 = 4;
      goto LAB_105a9dcd8;
    }
  }
  param_1[6] = lStack_68;
  param_1[5] = lStack_70;
  param_1[8] = lStack_58;
  param_1[7] = lStack_60;
  param_1[10] = lStack_48;
  param_1[9] = lStack_50;
  param_1[0xb] = lVar3;
  param_1[2] = lStack_88;
  param_1[1] = lStack_90;
  param_1[4] = lStack_78;
  param_1[3] = lStack_80;
LAB_105a9dcd8:
  *param_1 = lVar5;
  return;
}

