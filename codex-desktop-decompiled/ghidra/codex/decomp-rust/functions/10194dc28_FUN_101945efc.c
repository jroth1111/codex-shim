
/* WARNING: Possible PIC construction at 0x00010194dc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101938048: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010194dc98) */
/* WARNING: Removing unreachable block (ram,0x00010193804c) */

void FUN_101945efc(long *param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar5;
  long lVar6;
  ulong *unaff_x21;
  ulong *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  uVar5 = param_1[4];
  if ((uVar5 & 1) != 0) {
    (**(code **)(param_1[2] + 0x18))(param_1[3]);
  }
  if (((uint)uVar5 >> 3 & 1) != 0) {
    (**(code **)(*param_1 + 0x18))(param_1[1]);
  }
  lVar6 = param_1[5];
  if (lVar6 == -0x7fffffffffffffff) {
    return;
  }
  if (lVar6 == -0x8000000000000000) {
    puVar2 = (undefined1 *)register0x00000008;
    puVar1 = (ulong *)(param_1 + 6);
    while( true ) {
      while( true ) {
        puVar3 = puVar1;
        *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
        *(ulong *)(puVar2 + -0x38) = unaff_x23;
        *(ulong **)(puVar2 + -0x30) = unaff_x22;
        *(ulong **)(puVar2 + -0x28) = unaff_x21;
        *(ulong **)(puVar2 + -0x20) = unaff_x20;
        *(ulong **)(puVar2 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar2 + -8) = unaff_x30;
        unaff_x29 = puVar2 + -0x10;
        uVar5 = *puVar3 ^ 0x8000000000000000;
        if (-1 < (long)*puVar3) {
          uVar5 = 5;
        }
        if (uVar5 < 3) {
          return;
        }
        if (uVar5 == 3) {
          if (puVar3[1] == 0) {
            return;
          }
          puVar4 = (ulong *)puVar3[2];
          goto code_r0x000108aa97c4;
        }
        if (uVar5 == 4) break;
        uVar5 = puVar3[4];
        if ((uVar5 != 0) && (uVar5 * 9 != -0x11)) {
          _free(puVar3[3] + uVar5 * -8 + -8);
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
        puVar4 = (ulong *)puVar3[1];
        unaff_x23 = puVar3[2];
        if (unaff_x23 == 0) {
          if (*puVar3 == 0) {
            return;
          }
          goto code_r0x000108aa97c4;
        }
        if (*puVar4 != 0) {
          _free(puVar4[1]);
        }
        unaff_x22 = puVar4 + 0xd;
        unaff_x30 = 0x10193804c;
        puVar2 = puVar2 + -0x40;
        puVar1 = puVar4 + 3;
        unaff_x19 = puVar4;
        unaff_x20 = puVar3;
        unaff_x21 = puVar4;
      }
      puVar4 = (ulong *)puVar3[2];
      unaff_x23 = puVar3[3];
      if (unaff_x23 == 0) break;
      unaff_x22 = puVar4 + 9;
      unaff_x30 = 0x10194dc98;
      puVar2 = puVar2 + -0x40;
      puVar1 = puVar4;
      unaff_x19 = puVar3;
      unaff_x20 = puVar4;
    }
    if (puVar3[1] == 0) {
      return;
    }
  }
  else {
    if (param_1[8] != -0x7ffffffffffffffb) {
      func_0x00010194dc28();
    }
    if (lVar6 == 0) {
      return;
    }
    puVar4 = (ulong *)param_1[6];
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar4);
  return;
}

