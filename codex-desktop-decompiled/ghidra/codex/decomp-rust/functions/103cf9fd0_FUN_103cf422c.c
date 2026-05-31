
/* WARNING: Possible PIC construction at 0x000103cfa03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103cf57ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103cfa040) */
/* WARNING: Removing unreachable block (ram,0x000103cf57f0) */

void FUN_103cf422c(ulong *param_1)

{
  ulong *puVar1;
  code *pcVar2;
  ulong *unaff_x19;
  ulong *puVar3;
  ulong *unaff_x20;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *unaff_x21;
  undefined8 uVar6;
  ulong *unaff_x22;
  undefined8 *puVar7;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (*param_1 == 0x8000000000000005) {
    puVar3 = (ulong *)param_1[1];
    if (*puVar3 == 1) {
      uVar5 = puVar3[1];
      if ((uVar5 & 3) != 1) goto code_r0x000108aa97c4;
      puVar4 = (undefined8 *)(uVar5 - 1);
      uVar6 = *puVar4;
      puVar7 = *(undefined8 **)(uVar5 + 7);
      pcVar2 = (code *)*puVar7;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar6);
      }
      if (puVar7[1] != 0) {
        _free(uVar6);
      }
    }
    else {
      if ((*puVar3 != 0) || (puVar3[2] == 0)) goto code_r0x000108aa97c4;
      puVar4 = (undefined8 *)puVar3[1];
    }
    _free(puVar4);
  }
  else {
    while( true ) {
      while( true ) {
        puVar1 = param_1;
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        uVar5 = *puVar1 ^ 0x8000000000000000;
        if (-1 < (long)*puVar1) {
          uVar5 = 5;
        }
        if (uVar5 < 3) {
          return;
        }
        if (uVar5 == 3) {
          if (puVar1[1] == 0) {
            return;
          }
          puVar3 = (ulong *)puVar1[2];
          goto code_r0x000108aa97c4;
        }
        if (uVar5 == 4) break;
        uVar5 = puVar1[4];
        if ((uVar5 != 0) && (uVar5 * 9 != -0x11)) {
          _free(puVar1[3] + uVar5 * -8 + -8);
        }
        unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
        *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x38) =
             *(undefined8 *)((long)register0x00000008 + -0x38);
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
        puVar3 = (ulong *)puVar1[1];
        unaff_x23 = puVar1[2];
        if (unaff_x23 == 0) {
          if (*puVar1 == 0) {
            return;
          }
          goto code_r0x000108aa97c4;
        }
        if (*puVar3 != 0) {
          _free(puVar3[1]);
        }
        unaff_x22 = puVar3 + 0xd;
        unaff_x30 = 0x103cf57f0;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
        param_1 = puVar3 + 3;
        unaff_x19 = puVar3;
        unaff_x20 = puVar1;
        unaff_x21 = puVar3;
      }
      puVar3 = (ulong *)puVar1[2];
      unaff_x23 = puVar1[3];
      if (unaff_x23 == 0) break;
      unaff_x22 = puVar3 + 9;
      unaff_x30 = 0x103cfa040;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
      param_1 = puVar3;
      unaff_x19 = puVar1;
      unaff_x20 = puVar3;
    }
    if (puVar1[1] == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar3);
  return;
}

