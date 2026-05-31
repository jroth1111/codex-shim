
/* WARNING: Possible PIC construction at 0x00010195b854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101947df4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010195b858) */
/* WARNING: Removing unreachable block (ram,0x000101947df8) */

void FUN_10195b808(ulong *param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar5;
  ulong *unaff_x21;
  ulong *unaff_x22;
  long lVar6;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar5 = (ulong *)param_1[0x12];
  puVar3 = (ulong *)((param_1[0x14] - (long)puVar5 >> 4) * -0x71c71c71c71c71c7);
  if (puVar3 == (ulong *)0x0) {
    if (param_1[0x13] != 0) {
      _free(param_1[0x11]);
    }
    if (*param_1 == 0x8000000000000001) {
      return;
    }
    if ((*param_1 & 0x7fffffffffffffff) != 0) {
      _free(param_1[1]);
    }
    puVar2 = (undefined1 *)register0x00000008;
    puVar1 = param_1 + 5;
  }
  else {
    if ((*puVar5 & 0x7fffffffffffffff) != 0) {
      _free(puVar5[1]);
    }
    unaff_x30 = 0x10195b858;
    puVar2 = &stack0xffffffffffffffc0;
    puVar1 = puVar5 + 5;
    unaff_x19 = param_1;
    unaff_x20 = puVar5;
    unaff_x21 = puVar5 + 0x12;
    unaff_x22 = puVar3;
    unaff_x29 = &stack0xfffffffffffffff0;
  }
  do {
    puVar3 = puVar1;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(ulong *)(puVar2 + -0x38) = unaff_x23;
    *(ulong **)(puVar2 + -0x30) = unaff_x22;
    *(ulong **)(puVar2 + -0x28) = unaff_x21;
    *(ulong **)(puVar2 + -0x20) = unaff_x20;
    *(ulong **)(puVar2 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    uVar4 = *puVar3 ^ 0x8000000000000000;
    if (-1 < (long)*puVar3) {
      uVar4 = 6;
    }
    if ((long)uVar4 < 3) {
      if (uVar4 == 0) {
        if (puVar3[1] == 0x8000000000000000 || puVar3[1] == 0) {
          return;
        }
      }
      else {
        if ((uVar4 != 1) && (uVar4 != 2)) goto LAB_101951ae8;
        if ((puVar3[1] & 0x7fffffffffffffff) == 0) {
          return;
        }
      }
      unaff_x19 = (ulong *)puVar3[2];
      goto code_r0x000108aa97c4;
    }
    if (uVar4 - 3 < 2) {
      return;
    }
    if (uVar4 == 5) {
      unaff_x19 = (ulong *)puVar3[2];
      lVar6 = puVar3[3] + 1;
      puVar5 = unaff_x19;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
        func_0x000101951a3c(puVar5);
        puVar5 = puVar5 + 0xc;
      }
      if (puVar3[1] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
LAB_101951ae8:
    uVar4 = puVar3[4];
    if ((uVar4 != 0) && (uVar4 * 9 != -0x11)) {
      _free(puVar3[3] + uVar4 * -8 + -8);
    }
    unaff_x24 = *(undefined8 *)(puVar2 + -0x40);
    *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar2 + -0x38) = *(undefined8 *)(puVar2 + -0x38);
    *(undefined8 *)(puVar2 + -0x30) = *(undefined8 *)(puVar2 + -0x30);
    *(undefined8 *)(puVar2 + -0x28) = *(undefined8 *)(puVar2 + -0x28);
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)(puVar2 + -0x20);
    *(undefined8 *)(puVar2 + -0x18) = *(undefined8 *)(puVar2 + -0x18);
    *(undefined8 *)(puVar2 + -0x10) = *(undefined8 *)(puVar2 + -0x10);
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    unaff_x29 = puVar2 + -0x10;
    unaff_x19 = (ulong *)puVar3[1];
    unaff_x23 = puVar3[2];
    if (unaff_x23 == 0) {
      if (*puVar3 == 0) {
        return;
      }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(unaff_x19);
      return;
    }
    if ((*unaff_x19 & 0x7fffffffffffffff) != 0) {
      _free(unaff_x19[1]);
    }
    unaff_x22 = unaff_x19 + 0x12;
    unaff_x30 = 0x101947df8;
    puVar2 = puVar2 + -0x40;
    puVar1 = unaff_x19 + 5;
    unaff_x20 = puVar3;
    unaff_x21 = unaff_x19;
  } while( true );
}

