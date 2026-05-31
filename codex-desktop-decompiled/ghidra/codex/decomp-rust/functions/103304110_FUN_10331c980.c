
/* WARNING: Possible PIC construction at 0x0001033041e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c6144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033af3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033af404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103382c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033c2340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033af880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010339510c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103395138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b4c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010339cb7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010339cbc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338d8f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103397430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338d8f8) */
/* WARNING: Removing unreachable block (ram,0x00010338d904) */
/* WARNING: Removing unreachable block (ram,0x00010338d908) */
/* WARNING: Removing unreachable block (ram,0x00010338d91c) */
/* WARNING: Removing unreachable block (ram,0x00010338d90c) */
/* WARNING: Removing unreachable block (ram,0x00010338d930) */
/* WARNING: Removing unreachable block (ram,0x00010338d934) */
/* WARNING: Removing unreachable block (ram,0x00010338d918) */
/* WARNING: Removing unreachable block (ram,0x00010339cb80) */
/* WARNING: Removing unreachable block (ram,0x00010339cb90) */
/* WARNING: Removing unreachable block (ram,0x00010339cb94) */
/* WARNING: Removing unreachable block (ram,0x00010339cb9c) */
/* WARNING: Removing unreachable block (ram,0x00010339cba8) */
/* WARNING: Removing unreachable block (ram,0x00010339cbac) */
/* WARNING: Removing unreachable block (ram,0x00010339cbb4) */
/* WARNING: Removing unreachable block (ram,0x00010339cbcc) */
/* WARNING: Removing unreachable block (ram,0x00010339cbe8) */
/* WARNING: Removing unreachable block (ram,0x00010339cbd8) */
/* WARNING: Removing unreachable block (ram,0x00010339cbc8) */
/* WARNING: Removing unreachable block (ram,0x0001033b6094) */
/* WARNING: Removing unreachable block (ram,0x000103395110) */
/* WARNING: Removing unreachable block (ram,0x0001033c2344) */
/* WARNING: Removing unreachable block (ram,0x0001033c234c) */
/* WARNING: Removing unreachable block (ram,0x0001033c2360) */
/* WARNING: Removing unreachable block (ram,0x0001033c2368) */
/* WARNING: Removing unreachable block (ram,0x0001033c2354) */
/* WARNING: Removing unreachable block (ram,0x0001033c2374) */
/* WARNING: Removing unreachable block (ram,0x0001033c237c) */
/* WARNING: Removing unreachable block (ram,0x0001033c2384) */
/* WARNING: Removing unreachable block (ram,0x0001033c2390) */
/* WARNING: Removing unreachable block (ram,0x0001033c2394) */
/* WARNING: Removing unreachable block (ram,0x0001033c23bc) */
/* WARNING: Removing unreachable block (ram,0x0001033c2398) */
/* WARNING: Removing unreachable block (ram,0x000103382c04) */
/* WARNING: Removing unreachable block (ram,0x0001033c6148) */
/* WARNING: Removing unreachable block (ram,0x0001033c6154) */
/* WARNING: Removing unreachable block (ram,0x0001033c6158) */
/* WARNING: Removing unreachable block (ram,0x0001033c616c) */
/* WARNING: Removing unreachable block (ram,0x0001033c615c) */
/* WARNING: Removing unreachable block (ram,0x0001033c6180) */
/* WARNING: Removing unreachable block (ram,0x0001033c6184) */
/* WARNING: Removing unreachable block (ram,0x0001033c6168) */
/* WARNING: Removing unreachable block (ram,0x0001033c6194) */
/* WARNING: Removing unreachable block (ram,0x0001033041e8) */
/* WARNING: Removing unreachable block (ram,0x000103397434) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10331c980(long param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x19;
  undefined8 uVar13;
  ulong *unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  ulong *unaff_x21;
  long *plVar16;
  ulong *unaff_x22;
  undefined8 *puVar17;
  long *plVar18;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  ulong *unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar19;
  undefined1 *unaff_x29;
  undefined8 uVar20;
  undefined8 unaff_x30;
  undefined8 uVar21;
  undefined *puVar22;
  
  cVar2 = *(char *)(param_1 + 0x40);
  if (cVar2 == '\x03') {
    if ((((*(char *)(param_1 + 0xf8) == '\x03') && (*(char *)(param_1 + 0xf0) == '\x03')) &&
        (*(char *)(param_1 + 0xe8) == '\x03')) && (*(char *)(param_1 + 0xa0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xa8);
      if (*(long *)(param_1 + 0xb0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010331ca78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0xb0) + 0x18))(*(undefined8 *)(param_1 + 0xb8));
        return;
      }
    }
    return;
  }
  if (cVar2 == '\x04') {
    if (*(char *)(param_1 + 0x600) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x5f8) == '\x03') {
      FUN_1032b8e6c(param_1 + 0x90);
    }
    unaff_x20 = *(ulong **)(param_1 + 0x68);
    lVar10 = *(long *)(param_1 + 0x70) + 1;
    puVar6 = unaff_x20;
    while (lVar10 = lVar10 + -1, lVar10 != 0) {
      FUN_10339aa40(puVar6);
      puVar6 = puVar6 + 0x3c;
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  if (cVar2 != '\x05') {
    return;
  }
  if (*(char *)(param_1 + 0x1978) != '\x03') {
    return;
  }
  puVar4 = &stack0xfffffffffffffff0;
  bVar1 = *(byte *)(param_1 + 0x630);
  if (bVar1 < 5) {
    puVar6 = (ulong *)(param_1 + 0x88);
    if (bVar1 != 0) {
      if (bVar1 == 3) {
        FUN_10330a58c(param_1 + 0x638);
      }
      else {
        if (bVar1 != 4) {
          return;
        }
        unaff_x20 = (ulong *)(param_1 + 0x1088);
        if (*(char *)(param_1 + 0x1971) == '\x03') {
          FUN_103327e8c(param_1 + 0x638);
          *(undefined1 *)(param_1 + 0x1970) = 0;
        }
      }
      goto LAB_1033041e0;
    }
  }
  else {
    if (bVar1 == 5) {
      FUN_10332a0c0(param_1 + 0x638);
    }
    else if (bVar1 == 6) {
      if (*(char *)(param_1 + 0x650) == '\x04') {
        FUN_1032fb238(param_1 + 0x658);
      }
      else if (*(char *)(param_1 + 0x650) == '\x03') {
        FUN_1032f457c(param_1 + 0x658);
      }
    }
    else {
      if (bVar1 != 7) {
        return;
      }
      FUN_10330a58c(param_1 + 0x830);
      *(undefined1 *)(param_1 + 0x631) = 0;
      FUN_1033e4b14(param_1 + 0x810);
    }
LAB_1033041e0:
    unaff_x30 = 0x1033041e8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    puVar6 = (ulong *)(param_1 + 0x458);
    unaff_x19 = (ulong *)(param_1 + 0x88);
    unaff_x29 = puVar4;
  }
SUB_103391f3c:
  puVar4 = (undefined1 *)register0x00000008;
  switch((int)*puVar6) {
  case 0:
    goto code_r0x00010339204c;
  case 1:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 2:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 3:
    if ((puVar6[1] & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 4:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar15 = puVar6[1];
    uVar9 = uVar15 ^ 0x8000000000000000;
    if (-1 < (long)uVar15) {
      uVar9 = 0xc;
    }
    switch(uVar9) {
    case 0:
    case 6:
      if (puVar6[2] != 0) {
        _free(puVar6[3]);
      }
      if (puVar6[5] == 0x8000000000000000 || puVar6[5] == 0) {
        return;
      }
      break;
    case 1:
    case 7:
    case 8:
    case 9:
      uVar9 = puVar6[2] & 0x7fffffffffffffff;
      goto joined_r0x00010339f134;
    default:
      uVar9 = puVar6[2];
joined_r0x00010339f134:
      if (uVar9 == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar6[3];
      goto code_r0x000108aa97c4;
    case 10:
      puVar4 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar22 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
      puVar7 = *(ulong **)((long)register0x00000008 + -0x18);
      puVar6 = puVar6 + 2;
      goto SUB_103382b94;
    case 0xc:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if (puVar6[1] != 0) {
        _free(puVar6[2]);
      }
      if (puVar6[4] != 0) {
        _free(puVar6[5]);
      }
      if (puVar6[7] != 0) {
        _free(puVar6[8]);
      }
      unaff_x20 = (ulong *)puVar6[0xb];
      uVar9 = puVar6[0xc];
      if (uVar9 != 0) {
        puVar7 = unaff_x20 + 4;
        do {
          if (puVar7[-4] != 0) {
            _free(puVar7[-3]);
          }
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 6;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (puVar6[10] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    case 0xd:
      if (puVar6[2] != 0) {
        _free(puVar6[3]);
      }
      if (puVar6[5] == 0) {
        return;
      }
    }
    unaff_x20 = (ulong *)puVar6[6];
    break;
  case 5:
    if ((puVar6[1] & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 6:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 7:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[5];
    break;
  case 8:
  case 9:
  case 10:
  case 0x34:
    goto code_r0x000103391f60;
  case 0xb:
    if (puVar6[5] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[6];
    break;
  case 0xc:
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[0x12] != 0x8000000000000000 && puVar6[0x12] != 0) {
      _free(puVar6[0x13]);
    }
    uVar15 = puVar6[0x1b];
    uVar9 = uVar15;
    if (uVar15 < 0x8000000000000001) {
      uVar9 = 0;
    }
    if ((uVar9 & 0x7fffffffffffffff) != 0 || uVar15 == 0x8000000000000000)
    goto code_r0x0001033b6310;
    puVar5 = (ulong *)puVar6[0x1c];
    uVar9 = puVar6[0x1d];
    puVar7 = puVar5;
    goto joined_r0x0001033b63b4;
  case 0xd:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[7] != 0) {
      _free(puVar6[8]);
    }
    if (puVar6[10] == 0x8000000000000000 || puVar6[10] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0xb];
    break;
  case 0xe:
    if (puVar6[0xd] == 3) {
      return;
    }
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[0x17] == 0x8000000000000000 || puVar6[0x17] == 0) {
      if (puVar6[0x1a] != 0x8000000000000000 && puVar6[0x1a] != 0) {
code_r0x0001033a591c:
        _free(puVar6[0x1b]);
      }
    }
    else {
      _free(puVar6[0x18]);
      if (puVar6[0x1a] != 0x8000000000000000 && puVar6[0x1a] != 0) goto code_r0x0001033a591c;
    }
    if ((long)puVar6[0x1d] < -0x7ffffffffffffffe || puVar6[0x1d] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0x1e];
    break;
  case 0xf:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    puVar6 = puVar6 + 4;
    if (*puVar6 == 0x8000000000000000) {
      return;
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
    goto DAT_1033b480c;
  case 0x10:
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    uVar9 = puVar6[0x10];
    if (uVar9 != 0x8000000000000000) {
      uVar15 = puVar6[0x11];
      uVar11 = puVar6[0x12];
      if (uVar11 != 0) {
        puVar17 = (undefined8 *)(uVar15 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar9 != 0) {
        _free(uVar15);
      }
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    uVar9 = puVar6[8];
    uVar15 = puVar6[9];
    if (uVar15 != 0) {
      puVar17 = (undefined8 *)(uVar9 + 8);
      do {
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 3;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (puVar6[7] != 0) {
      _free(uVar9);
    }
    if (puVar6[10] != 0) {
      _free(puVar6[0xb]);
    }
    unaff_x20 = (ulong *)puVar6[0xe];
    uVar9 = puVar6[0xf];
    if (uVar9 != 0) {
      puVar7 = unaff_x20 + 1;
      do {
        if ((puVar7[-1] & 0x7fffffffffffffff) != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 5;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (puVar6[0xd] == 0) {
      return;
    }
    break;
  case 0x11:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 0x12:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 0x13:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 0x14:
    puVar7 = puVar6 + 1;
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (puVar6[10] == 0x8000000000000000 || puVar6[10] == 0) {
      uVar9 = *puVar7;
    }
    else {
      _free(puVar6[0xb]);
      uVar9 = *puVar7;
    }
    if (uVar9 != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[0xd] != 0x8000000000000000 && puVar6[0xd] != 0) {
      _free(puVar6[0xe]);
    }
    uVar15 = puVar6[0x22];
    uVar9 = uVar15;
    if (uVar15 < 0x8000000000000001) {
      uVar9 = 0;
    }
    if ((uVar9 & 0x7fffffffffffffff) == 0 && uVar15 != 0x8000000000000000) {
      puVar5 = (ulong *)puVar6[0x23];
      uVar9 = puVar6[0x24];
      if (uVar9 != 0) {
        unaff_x25 = 5;
        unaff_x26 = puVar5;
        do {
          uVar11 = *unaff_x26;
          lVar10 = uVar11 + 0x7ffffffffffffffb;
          if (uVar11 < 0x8000000000000005) {
            lVar10 = 2;
          }
          if ((lVar10 == 0) || (lVar10 == 1)) {
            uVar11 = unaff_x26[1];
joined_r0x0001033b6150:
            if (uVar11 != 0) {
              lVar10 = 0x10;
LAB_1033b6158:
              _free(*(undefined8 *)((long)unaff_x26 + lVar10));
            }
          }
          else {
            uVar12 = uVar11 ^ 0x8000000000000000;
            if (-1 < (long)uVar11) {
              uVar12 = 5;
            }
            if (uVar12 < 5) {
              if (uVar12 == 2) {
                uVar11 = unaff_x26[1] & 0x7fffffffffffffff;
                goto joined_r0x0001033b6150;
              }
            }
            else {
              if (uVar11 != 0) {
                _free(unaff_x26[1]);
              }
              if ((unaff_x26[3] & 0x7fffffffffffffff) != 0) {
                lVar10 = 0x20;
                goto LAB_1033b6158;
              }
            }
          }
          unaff_x26 = unaff_x26 + 7;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar15 != 0) {
        _free(puVar5);
      }
    }
    if (puVar6[0x10] != 0x8000000000000000) {
      if (puVar6[0x10] != 0) {
        _free(puVar6[0x11]);
      }
      if ((puVar6[0x13] != 0x8000000000000000) && (puVar6[0x13] != 0)) {
        _free(puVar6[0x14]);
      }
    }
    if (puVar6[7] != 0) {
      _free(puVar6[8]);
    }
    unaff_x23 = puVar6[0x16];
    unaff_x21 = (ulong *)0x8000000000000000;
    if (unaff_x23 == 0x8000000000000000) {
LAB_1033b60a8:
      if (puVar6[0x19] != 0x8000000000000000) {
        if (puVar6[0x19] != 0) {
          _free(puVar6[0x1a]);
        }
        if (puVar6[0x1c] != 0) {
          _free(puVar6[0x1d]);
        }
      }
      if (puVar6[0x1f] == 0x8000000000000000 || puVar6[0x1f] == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar6[0x20];
      break;
    }
    unaff_x20 = (ulong *)puVar6[0x17];
    unaff_x24 = puVar6[0x18];
    if (unaff_x24 == 0) {
      if (unaff_x23 != 0) {
        _free(unaff_x20);
      }
      goto LAB_1033b60a8;
    }
    unaff_x22 = unaff_x20 + 0x3b;
    unaff_x30 = 0x1033b6094;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    puVar6 = unaff_x20;
    unaff_x19 = puVar7;
    goto SUB_103391f3c;
  case 0x15:
    if (puVar6[0xd] == 0x8000000000000000 || puVar6[0xd] == 0) {
      uVar9 = puVar6[3];
    }
    else {
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      _free(puVar6[0xe]);
      uVar9 = puVar6[3];
    }
    if (uVar9 == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[4];
    break;
  case 0x16:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if ((long)puVar6[4] < 1) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[5];
    break;
  case 0x17:
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar9 = puVar6[2];
    uVar15 = puVar6[3];
    if (uVar15 != 0) {
      puVar17 = (undefined8 *)(uVar9 + 8);
      do {
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 3;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (puVar6[1] != 0) {
      _free(uVar9);
    }
    uVar9 = puVar6[5];
    uVar15 = puVar6[6];
    if (uVar15 != 0) {
      puVar17 = (undefined8 *)(uVar9 + 0x20);
      do {
        if (puVar17[-4] != 0) {
          _free(puVar17[-3]);
        }
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 6;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (puVar6[4] != 0) {
      _free(uVar9);
    }
    unaff_x20 = (ulong *)puVar6[8];
    uVar9 = puVar6[9];
    if (uVar9 != 0) {
      puVar7 = unaff_x20 + 1;
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (puVar6[7] == 0) {
      return;
    }
    break;
  case 0x18:
    puVar7 = puVar6 + 1;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*puVar7 != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] != 0) {
      _free(puVar6[8]);
    }
    if (puVar6[10] != 0x8000000000000005) {
      puVar22 = &UNK_1033b4c44;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
      puVar6 = puVar6 + 10;
      goto SUB_103382b94;
    }
    if ((puVar6[0x13] != 0x8000000000000000) && (puVar6[0x13] != 0)) {
      _free(puVar6[0x14]);
    }
    if ((puVar6[0x16] == 0x8000000000000000) || (puVar6[0x16] == 0)) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0x17];
    break;
  case 0x19:
    puVar7 = puVar6 + 1;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*puVar7 != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] != 0) {
      _free(puVar6[8]);
    }
    if (puVar6[10] != 0x8000000000000005) {
      puVar22 = &UNK_1033af884;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
      puVar6 = puVar6 + 10;
      goto SUB_103382b94;
    }
    if ((puVar6[0x13] != 0x8000000000000000) && (puVar6[0x13] != 0)) {
      _free(puVar6[0x14]);
    }
    if ((puVar6[0x16] != 0x8000000000000000) && (puVar6[0x16] != 0)) {
      _free(puVar6[0x17]);
    }
    puVar7 = puVar6 + 0x19;
    if (*puVar7 == 0x8000000000000000) {
      if (puVar6[0x1a] == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar6[0x1b];
      break;
    }
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
    unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) =
         *(undefined8 *)((long)register0x00000008 + -0x28);
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x23 = 0x8000000000000005;
    unaff_x21 = (ulong *)puVar6[0x1a];
    unaff_x24 = puVar6[0x1b];
    if (unaff_x24 == 0) {
      if (*puVar7 != 0) {
        _free(unaff_x21);
      }
      if (puVar6[0x1c] == 0x8000000000000005) {
        if (puVar6[0x25] == 0x8000000000000005) {
          return;
        }
        puVar4 = *(undefined1 **)((long)register0x00000008 + -0x10);
        puVar22 = *(undefined **)((long)register0x00000008 + -8);
        unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
        puVar7 = *(ulong **)((long)register0x00000008 + -0x18);
        unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
        unaff_x24 = *(ulong *)((long)register0x00000008 + -0x40);
        unaff_x23 = *(ulong *)((long)register0x00000008 + -0x38);
        puVar6 = puVar6 + 0x25;
      }
      else {
        puVar22 = (undefined *)0x10339513c;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
        puVar6 = puVar6 + 0x1c;
      }
    }
    else {
      unaff_x22 = unaff_x21 + 9;
      puVar22 = (undefined *)0x103395110;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
      puVar6 = unaff_x21;
    }
    goto SUB_103382b94;
  case 0x1a:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 0x1b:
    puVar7 = puVar6 + 1;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[8] != 0) {
      _free(puVar6[9]);
    }
    if (puVar6[0xb] != 0) {
      _free(puVar6[0xc]);
    }
    uVar20 = *(undefined8 *)((long)register0x00000008 + -0x10);
    uVar21 = *(undefined8 *)((long)register0x00000008 + -8);
    uVar14 = *(undefined8 *)((long)register0x00000008 + -0x20);
    uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
DAT_10339eea8:
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = uVar14;
    *(undefined8 *)((long)register0x00000008 + -0x18) = uVar13;
    *(undefined8 *)((long)register0x00000008 + -0x10) = uVar20;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar21;
    uVar9 = *puVar7;
    if ((long)uVar9 < 2) {
      if (uVar9 == 0) {
        if (puVar7[1] == 0x8000000000000000 || puVar7[1] == 0) {
          uVar9 = puVar7[4];
        }
        else {
          _free(puVar7[2]);
          uVar9 = puVar7[4];
        }
        if (uVar9 == 0x8000000000000000) {
          return;
        }
        unaff_x20 = (ulong *)puVar7[5];
        uVar15 = puVar7[6];
        if (uVar15 != 0) {
          puVar6 = unaff_x20 + 1;
          do {
            if (puVar6[-1] != 0) {
              _free(*puVar6);
            }
            puVar6 = puVar6 + 3;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (uVar9 == 0) {
          return;
        }
      }
      else {
        if ((puVar7[1] & 0x7fffffffffffffff) == 0) {
          return;
        }
        unaff_x20 = (ulong *)puVar7[2];
      }
    }
    else {
      if (uVar9 != 2) {
        return;
      }
      if (puVar7[1] == 0x8000000000000000 || puVar7[1] == 0) {
        uVar9 = puVar7[4];
      }
      else {
        _free(puVar7[2]);
        uVar9 = puVar7[4];
      }
      if ((uVar9 & 0x7fffffffffffffff) == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar7[5];
    }
    break;
  case 0x1c:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 0x1d:
    puVar6 = puVar6 + 1;
DAT_1033a86e8:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (*puVar6 != 0) {
      _free(puVar6[1]);
    }
    if (puVar6[3] != 0) {
      _free(puVar6[4]);
    }
    if (puVar6[9] == 0x8000000000000000 || puVar6[9] == 0) {
      uVar9 = puVar6[6];
    }
    else {
      _free(puVar6[10]);
      uVar9 = puVar6[6];
    }
    if (uVar9 != 0) {
      _free(puVar6[7]);
    }
    if ((puVar6[0xc] & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0xd];
    break;
  case 0x1e:
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[0x10] == 0x8000000000000000 || puVar6[0x10] == 0) {
      uVar9 = puVar6[4];
    }
    else {
      _free(puVar6[0x11]);
      uVar9 = puVar6[4];
    }
    if (uVar9 != 0) {
      _free(puVar6[5]);
    }
    uVar9 = puVar6[8];
    uVar15 = puVar6[9];
    if (uVar15 != 0) {
      puVar17 = (undefined8 *)(uVar9 + 8);
      do {
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 3;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (puVar6[7] != 0) {
      _free(uVar9);
    }
    if (puVar6[10] != 0) {
      _free(puVar6[0xb]);
    }
    uVar15 = puVar6[0xe];
    uVar9 = uVar15;
    for (uVar11 = puVar6[0xf]; uVar11 != 0; uVar11 = uVar11 - 1) {
      func_0x0001033adf58(uVar9);
      uVar9 = uVar9 + 0x50;
    }
    if (puVar6[0xd] != 0) {
      _free(uVar15);
    }
    if (puVar6[0x13] == 0x8000000000000000 || puVar6[0x13] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0x14];
    break;
  case 0x1f:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[5];
    break;
  case 0x20:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[8];
    break;
  case 0x21:
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[0x1c] == 0x8000000000000000 || puVar6[0x1c] == 0) {
      uVar9 = puVar6[4];
    }
    else {
      _free(puVar6[0x1d]);
      uVar9 = puVar6[4];
    }
    if (uVar9 != 0) {
      _free(puVar6[5]);
    }
    uVar9 = puVar6[8];
    uVar15 = puVar6[9];
    if (uVar15 != 0) {
      puVar17 = (undefined8 *)(uVar9 + 8);
      do {
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 3;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (puVar6[7] != 0) {
      _free(uVar9);
    }
    if (puVar6[10] != 0) {
      _free(puVar6[0xb]);
    }
    uVar15 = puVar6[0xe];
    uVar9 = uVar15;
    for (uVar11 = puVar6[0xf]; uVar11 != 0; uVar11 = uVar11 - 1) {
      func_0x0001033adf58(uVar9);
      uVar9 = uVar9 + 0x50;
    }
    if (puVar6[0xd] != 0) {
      _free(uVar15);
    }
    if (puVar6[0x1f] == 0x8000000000000000 || puVar6[0x1f] == 0) {
      uVar9 = puVar6[0x10];
    }
    else {
      _free(puVar6[0x20]);
      uVar9 = puVar6[0x10];
    }
    if (uVar9 != 0) {
      _free(puVar6[0x11]);
    }
    if (puVar6[0x13] != 0) {
      _free(puVar6[0x14]);
    }
    if (puVar6[0x16] != 0) {
      _free(puVar6[0x17]);
    }
    if (puVar6[0x19] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0x1a];
    break;
  case 0x22:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[5];
    break;
  case 0x23:
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[0x10] == 0x8000000000000000 || puVar6[0x10] == 0) {
      uVar9 = puVar6[4];
    }
    else {
      _free(puVar6[0x11]);
      uVar9 = puVar6[4];
    }
    if (uVar9 != 0) {
      _free(puVar6[5]);
    }
    uVar9 = puVar6[8];
    uVar15 = puVar6[9];
    if (uVar15 != 0) {
      puVar17 = (undefined8 *)(uVar9 + 8);
      do {
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        puVar17 = puVar17 + 3;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (puVar6[7] != 0) {
      _free(uVar9);
    }
    if (puVar6[10] != 0) {
      _free(puVar6[0xb]);
    }
    if ((puVar6[0x13] != 0x8000000000000000) && (puVar6[0x13] != 0)) {
      _free(puVar6[0x14]);
    }
    if ((puVar6[0x16] & 0x7fffffffffffffff) == 0) {
      uVar9 = puVar6[0x1a];
    }
    else {
      _free(puVar6[0x17]);
      uVar9 = puVar6[0x1a];
    }
    if (uVar9 != 0x8000000000000000) {
      uVar15 = puVar6[0x1b];
      uVar11 = puVar6[0x1c];
      if (uVar11 != 0) {
        puVar17 = (undefined8 *)(uVar15 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar9 != 0) {
        _free(uVar15);
      }
    }
    uVar9 = puVar6[0x1d];
    if (uVar9 != 0x8000000000000000) {
      uVar15 = puVar6[0x1e];
      uVar11 = puVar6[0x1f];
      if (uVar11 != 0) {
        puVar17 = (undefined8 *)(uVar15 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar9 != 0) {
        _free(uVar15);
      }
    }
    uVar9 = puVar6[0x23];
    if (-0x7fffffffffffffff < (long)uVar9) {
      puVar5 = (ulong *)puVar6[0x24];
      puVar7 = puVar5;
      for (uVar15 = puVar6[0x25]; uVar15 != 0; uVar15 = uVar15 - 1) {
        uVar11 = *puVar7;
        lVar10 = uVar11 + 0x7ffffffffffffffb;
        if (uVar11 < 0x8000000000000005) {
          lVar10 = 2;
        }
        if ((lVar10 == 0) || (lVar10 == 1)) {
          uVar11 = puVar7[1];
joined_r0x0001033bc9d8:
          if (uVar11 != 0) {
            lVar10 = 0x10;
code_r0x0001033bc9e0:
            _free(*(undefined8 *)((long)puVar7 + lVar10));
          }
        }
        else {
          uVar12 = uVar11 ^ 0x8000000000000000;
          if (-1 < (long)uVar11) {
            uVar12 = 5;
          }
          if (uVar12 < 5) {
            if (uVar12 == 2) {
              uVar11 = puVar7[1] & 0x7fffffffffffffff;
              goto joined_r0x0001033bc9d8;
            }
          }
          else {
            if (uVar11 != 0) {
              _free(puVar7[1]);
            }
            if ((puVar7[3] & 0x7fffffffffffffff) != 0) {
              lVar10 = 0x20;
              goto code_r0x0001033bc9e0;
            }
          }
        }
        puVar7 = puVar7 + 7;
      }
      if (uVar9 != 0) {
        _free(puVar5);
      }
    }
    if (puVar6[0x20] != 0x8000000000000000) {
      func_0x0001033cde60();
    }
    unaff_x20 = (ulong *)puVar6[0xe];
    puVar7 = unaff_x20;
    for (uVar9 = puVar6[0xf]; uVar9 != 0; uVar9 = uVar9 - 1) {
      func_0x0001033adf58(puVar7);
      puVar7 = puVar7 + 10;
    }
    if (puVar6[0xd] == 0) {
      return;
    }
    break;
  case 0x24:
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] == 0x8000000000000000 || puVar6[7] == 0) {
      uVar9 = puVar6[10];
    }
    else {
      _free(puVar6[8]);
      uVar9 = puVar6[10];
    }
    if (uVar9 == 0x8000000000000000) goto code_r0x0001033ca0d0;
    puVar5 = (ulong *)puVar6[0xb];
    uVar15 = puVar6[0xc];
    puVar7 = puVar5;
    goto joined_r0x0001033ca01c;
  case 0x25:
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    unaff_x20 = (ulong *)puVar6[8];
    puVar7 = unaff_x20;
    for (uVar9 = puVar6[9]; uVar9 != 0; uVar9 = uVar9 - 1) {
      func_0x0001033ca110(puVar7);
      puVar7 = puVar7 + 0xd;
    }
    if (puVar6[7] == 0) {
      return;
    }
    break;
  case 0x26:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[10] == 0x8000000000000000 || puVar6[10] == 0) {
      uVar9 = puVar6[7];
    }
    else {
      _free(puVar6[0xb]);
      uVar9 = puVar6[7];
    }
    if (uVar9 != 0) {
      _free(puVar6[8]);
    }
    puVar4 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar22 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
    puVar7 = *(ulong **)((long)register0x00000008 + -0x18);
    puVar6 = puVar6 + 0xd;
    goto SUB_103382b94;
  case 0x27:
    puVar7 = puVar6 + 1;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*puVar7 != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[0xd] == 0x8000000000000000 || puVar6[0xd] == 0) {
      uVar9 = puVar6[7];
    }
    else {
      _free(puVar6[0xe]);
      uVar9 = puVar6[7];
    }
    if (uVar9 != 0) {
      _free(puVar6[8]);
    }
    puVar22 = &UNK_1033c2344;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
    puVar6 = puVar6 + 0x13;
    goto SUB_103382b94;
  case 0x28:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[4] == 0x8000000000000000 || puVar6[4] == 0) {
      uVar9 = puVar6[1];
    }
    else {
      _free(puVar6[5]);
      uVar9 = puVar6[1];
    }
    if (uVar9 != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[7] != 0x8000000000000000 && puVar6[7] != 0) {
      _free(puVar6[8]);
    }
    puVar7 = puVar6 + 10;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
    unaff_x20 = (ulong *)*puVar7;
    if (unaff_x20 != (ulong *)0x8000000000000000) {
      if (puVar6[0x16] == 0x8000000000000005) {
        if (unaff_x20 != (ulong *)0x0) {
          _free(puVar6[0xb]);
        }
        puVar4 = *(undefined1 **)((long)register0x00000008 + -0x10);
        puVar22 = *(undefined **)((long)register0x00000008 + -8);
        unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
        puVar6 = puVar6 + 0xd;
        puVar7 = *(ulong **)((long)register0x00000008 + -0x18);
      }
      else {
        puVar22 = &UNK_1033af408;
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
        puVar6 = puVar6 + 0x16;
      }
      goto SUB_103382b94;
    }
    if (puVar6[0x14] != 0x8000000000000005) {
      puVar22 = &UNK_1033af3c0;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
      puVar6 = puVar6 + 0x14;
      goto SUB_103382b94;
    }
    if (puVar6[0xb] != 0) {
      _free(puVar6[0xc]);
    }
    if (puVar6[0xe] != 0) {
      _free(puVar6[0xf]);
    }
    if (puVar6[0x11] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0x12];
    break;
  case 0x29:
    puVar7 = puVar6 + 1;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x20);
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar19 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*puVar7 != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    puVar6 = puVar6 + 0xd;
    puVar22 = &UNK_1033c6148;
    goto code_r0x0001032d81b4;
  case 0x2a:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[3] != 0) {
      _free(puVar6[4]);
    }
    if (puVar6[9] == 0x8000000000000000 || puVar6[9] == 0) {
      uVar9 = puVar6[6];
    }
    else {
      _free(puVar6[10]);
      uVar9 = puVar6[6];
    }
    if (uVar9 != 0) {
      _free(puVar6[7]);
    }
    if (puVar6[0xc] != 0x8000000000000000 && puVar6[0xc] != 0) {
      _free(puVar6[0xd]);
    }
    *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    uVar15 = puVar6[0xf];
    uVar9 = uVar15 ^ 0x8000000000000000;
    if (-1 < (long)uVar15) {
      uVar9 = 4;
    }
    if ((long)uVar9 < 2) {
      if (uVar9 == 0) {
code_r0x0001033bcb70:
        if (puVar6[0x10] != 0) {
          _free(puVar6[0x11]);
        }
        if (puVar6[0x13] == 0) {
          return;
        }
        unaff_x20 = (ulong *)puVar6[0x14];
        break;
      }
      if (uVar9 == 1) {
        if (puVar6[0x10] != 0) {
          _free(puVar6[0x11]);
        }
        uVar9 = puVar6[0x14];
        uVar15 = puVar6[0x15];
        if (uVar15 != 0) {
          puVar17 = (undefined8 *)(uVar9 + 8);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 3;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        if (puVar6[0x13] != 0) {
          _free(uVar9);
        }
        if (puVar6[0x16] == 0) {
          return;
        }
        unaff_x20 = (ulong *)puVar6[0x17];
        break;
      }
    }
    else {
      if (uVar9 == 2) {
        if (puVar6[0x10] != 0) {
          _free(puVar6[0x11]);
        }
        unaff_x20 = (ulong *)puVar6[0x14];
        uVar9 = puVar6[0x15];
        if (uVar9 != 0) {
          puVar7 = unaff_x20 + 1;
          do {
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (puVar6[0x13] == 0) {
          return;
        }
        break;
      }
      if (uVar9 == 3) goto code_r0x0001033bcb70;
      if (uVar9 == 4) {
        if (uVar15 != 0) {
          _free(puVar6[0x10]);
        }
        if (puVar6[0x12] != 0) {
          _free(puVar6[0x13]);
        }
        if ((puVar6[0x15] != 0x8000000000000000) && (puVar6[0x15] != 0)) {
          _free(puVar6[0x16]);
        }
        if ((puVar6[0x18] != 0x8000000000000000) && (puVar6[0x18] != 0)) {
          _free(puVar6[0x19]);
        }
        if ((puVar6[0x1b] & 0x7fffffffffffffff) == 0) {
          return;
        }
        unaff_x20 = (ulong *)puVar6[0x1c];
        break;
      }
    }
    if (puVar6[0x10] == 0x8000000000000000 || puVar6[0x10] == 0) {
      uVar9 = puVar6[0x13];
    }
    else {
      _free(puVar6[0x11]);
      uVar9 = puVar6[0x13];
    }
    if (uVar9 == 0x8000000000000000) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0x14];
    uVar15 = puVar6[0x15];
    puVar6 = unaff_x20;
    goto joined_r0x0001033bcc38;
  case 0x2b:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] == 0x8000000000000000 || puVar6[4] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[5];
    break;
  case 0x2c:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] == 0x8000000000000000 || puVar6[4] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[5];
    break;
  case 0x2d:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    puVar6 = puVar6 + 7;
    puVar19 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar22 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
    puVar7 = *(ulong **)((long)register0x00000008 + -0x18);
    goto code_r0x0001032d81b4;
  case 0x2e:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    puVar6 = puVar6 + 4;
    puVar19 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar22 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
    puVar7 = *(ulong **)((long)register0x00000008 + -0x18);
    goto code_r0x0001032d81b4;
  case 0x2f:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] != 0) {
      _free(puVar6[8]);
    }
    if (puVar6[10] != 0) {
      _free(puVar6[0xb]);
    }
    puVar6 = puVar6 + 0xd;
    puVar19 = *(undefined1 **)((long)register0x00000008 + -0x10);
    puVar22 = *(undefined **)((long)register0x00000008 + -8);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
    puVar7 = *(ulong **)((long)register0x00000008 + -0x18);
code_r0x0001032d81b4:
    *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
    *(ulong **)(puVar4 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
    *(ulong *)(puVar4 + -0x40) = unaff_x24;
    *(ulong *)(puVar4 + -0x38) = unaff_x23;
    *(ulong **)(puVar4 + -0x30) = unaff_x22;
    *(ulong **)(puVar4 + -0x28) = unaff_x21;
    *(ulong **)(puVar4 + -0x20) = unaff_x20;
    *(ulong **)(puVar4 + -0x18) = puVar7;
    *(undefined1 **)(puVar4 + -0x10) = puVar19;
    *(undefined **)(puVar4 + -8) = puVar22;
    uVar9 = puVar6[1];
    if (uVar9 == 0) {
      return;
    }
    uVar15 = puVar6[3];
    if (uVar15 == 0) goto code_r0x0001032d82a8;
    plVar16 = (long *)*puVar6;
    plVar18 = plVar16 + 1;
    lVar10 = *plVar16;
    uVar11 = CONCAT17(-(-1 < lVar10),
                      CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                               CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                        CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                 CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                          CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                0x10)),
                                                                   CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
             0x8080808080808080;
    goto joined_r0x0001032d822c;
  case 0x30:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 0x31:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[5];
    break;
  case 0x32:
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[4] == 0x8000000000000000 || puVar6[4] == 0) {
      unaff_x20 = (ulong *)puVar6[2];
      uVar9 = puVar6[3];
    }
    else {
      _free(puVar6[5]);
      unaff_x20 = (ulong *)puVar6[2];
      uVar9 = puVar6[3];
    }
    if (uVar9 != 0) {
      puVar7 = unaff_x20 + 1;
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (puVar6[1] == 0) {
      return;
    }
    break;
  case 0x33:
    if ((puVar6[5] & 0x7fffffffffffffff) == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[6];
    break;
  case 0x35:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar15 = puVar6[4];
    uVar9 = uVar15 ^ 0x8000000000000000;
    if (-1 < (long)uVar15) {
      uVar9 = 2;
    }
    if (uVar9 != 0) {
      if ((uVar9 == 1) || (uVar9 != 2)) {
        if (puVar6[5] != 0) {
          lVar10 = 0x10;
          goto code_r0x00010339f298;
        }
      }
      else {
        if (uVar15 != 0) {
          _free(puVar6[5]);
        }
        if ((puVar6[7] & 0x7fffffffffffffff) != 0) {
          lVar10 = 0x20;
code_r0x00010339f298:
          _free(*(undefined8 *)((long)(puVar6 + 4) + lVar10));
        }
      }
    }
    if (puVar6[1] == 0x8000000000000000 || puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  case 0x36:
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar9 = puVar6[1];
    if (uVar9 == 0x8000000000000000) {
      return;
    }
    uVar15 = puVar6[2];
    uVar11 = puVar6[3];
    if (uVar11 != 0) {
      puVar17 = (undefined8 *)(uVar15 + 0x20);
      do {
        if (puVar17[-4] != 0) {
          _free(puVar17[-3]);
        }
        if (puVar17[-1] != 0) {
          _free(*puVar17);
        }
        if (puVar17[2] != 0) {
          _free(puVar17[3]);
        }
        puVar17 = puVar17 + 0xb;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar9 != 0) {
      _free(uVar15);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[8];
    break;
  case 0x37:
    puVar7 = puVar6 + 1;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar10 = 2;
    if (1 < *puVar7) {
      lVar10 = *puVar7 - 2;
    }
    switch(lVar10) {
    case 0:
      if (puVar6[8] != 0x8000000000000000 && puVar6[8] != 0) {
        _free(puVar6[9]);
      }
      if (puVar6[2] != 0) {
        _free(puVar6[3]);
      }
      unaff_x20 = (ulong *)puVar6[6];
      uVar9 = puVar6[7];
      puVar7 = unaff_x20;
      goto joined_r0x000103397054;
    case 1:
      if (puVar6[2] != 0) {
        _free(puVar6[3]);
      }
      uVar9 = puVar6[6];
      uVar15 = puVar6[7];
      if (uVar15 != 0) {
        puVar17 = (undefined8 *)(uVar9 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (puVar6[5] != 0) {
        _free(uVar9);
      }
      uVar9 = puVar6[8];
      if (uVar9 != 0x8000000000000000) {
        uVar15 = puVar6[9];
        uVar11 = puVar6[10];
        if (uVar11 != 0) {
          puVar17 = (undefined8 *)(uVar15 + 0x10);
          do {
            if (puVar17[-1] != 0) {
              _free(*puVar17);
            }
            puVar17 = puVar17 + 4;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (uVar9 != 0) {
          _free(uVar15);
        }
      }
      if (puVar6[0xb] == 0x8000000000000000 || puVar6[0xb] == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar6[0xc];
      goto code_r0x000108aa97c4;
    case 2:
      if (puVar6[0x12] != 0x8000000000000000 && puVar6[0x12] != 0) {
        _free(puVar6[0x13]);
      }
      if (puVar6[0x15] != 0x8000000000000000 && puVar6[0x15] != 0) {
        _free(puVar6[0x16]);
      }
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
      uVar9 = puVar6[4];
      uVar15 = puVar6[5];
      if (uVar15 != 0) {
        puVar17 = (undefined8 *)(uVar9 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (puVar6[3] != 0) {
        _free(uVar9);
      }
      if (puVar6[6] == 0x8000000000000000 || puVar6[6] == 0) {
        uVar9 = puVar6[0xc];
      }
      else {
        _free(puVar6[7]);
        uVar9 = puVar6[0xc];
      }
      if (uVar9 != 0) {
        FUN_1032b5104();
      }
      if ((puVar6[9] == 0x8000000000000000) || (puVar6[9] == 0)) {
        return;
      }
      unaff_x20 = (ulong *)puVar6[10];
      goto code_r0x000108aa97c4;
    case 3:
      if (puVar6[0xb] != 0x8000000000000000 && puVar6[0xb] != 0) {
        _free(puVar6[0xc]);
      }
      if (puVar6[2] != 0) {
        _free(puVar6[3]);
      }
      if ((puVar6[0xe] != 0x8000000000000000) && (puVar6[0xe] != 0)) {
        uVar9 = puVar6[0xf];
code_r0x0001033974fc:
        _free(uVar9);
      }
      break;
    case 4:
      if (puVar6[5] == 0x8000000000000000 || puVar6[5] == 0) {
        if (puVar6[8] == 0x8000000000000000 || puVar6[8] == 0) goto code_r0x000103397108;
code_r0x000103397484:
        _free(puVar6[9]);
        uVar9 = puVar6[0xb];
      }
      else {
        _free(puVar6[6]);
        if (puVar6[8] != 0x8000000000000000 && puVar6[8] != 0) goto code_r0x000103397484;
code_r0x000103397108:
        uVar9 = puVar6[0xb];
      }
      if ((uVar9 != 0x8000000000000000) && (uVar9 != 0)) {
        _free(puVar6[0xc]);
      }
      if (puVar6[2] != 0) {
        _free(puVar6[3]);
      }
      puVar4 = *(undefined1 **)((long)register0x00000008 + -0x10);
      puVar22 = *(undefined **)((long)register0x00000008 + -8);
      unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
      puVar7 = *(ulong **)((long)register0x00000008 + -0x18);
      unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
      unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
      unaff_x24 = *(ulong *)((long)register0x00000008 + -0x40);
      unaff_x23 = *(ulong *)((long)register0x00000008 + -0x38);
      puVar6 = puVar6 + 0xe;
      goto SUB_103382b94;
    case 5:
      if (puVar6[7] != 0) {
        _free(puVar6[8]);
      }
      if (puVar6[2] == 0) goto code_r0x000103397530;
      unaff_x20 = (ulong *)puVar6[4];
      uVar9 = puVar6[5];
      puVar7 = unaff_x20;
      goto joined_r0x000103397150;
    case 6:
      if (puVar6[0xb] == 0x8000000000000000 || puVar6[0xb] == 0) {
        if (puVar6[0xe] == 0x8000000000000000 || puVar6[0xe] == 0) goto code_r0x00010339730c;
code_r0x0001033974e8:
        _free(puVar6[0xf]);
        uVar9 = puVar6[2];
      }
      else {
        _free(puVar6[0xc]);
        if (puVar6[0xe] != 0x8000000000000000 && puVar6[0xe] != 0) goto code_r0x0001033974e8;
code_r0x00010339730c:
        uVar9 = puVar6[2];
      }
      if (uVar9 != 0) {
        uVar9 = puVar6[3];
        goto code_r0x0001033974fc;
      }
      break;
    case 7:
      if (puVar6[7] != 0) {
        _free(puVar6[8]);
      }
      if (puVar6[10] == 0x8000000000000000 || puVar6[10] == 0) {
        uVar9 = puVar6[2];
      }
      else {
        _free(puVar6[0xb]);
        uVar9 = puVar6[2];
      }
      if (uVar9 != 0) {
        unaff_x20 = (ulong *)puVar6[4];
        uVar9 = puVar6[5];
        puVar7 = unaff_x20;
        goto joined_r0x000103397348;
      }
code_r0x000103397530:
      if (puVar6[3] == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar6[4];
      goto code_r0x000108aa97c4;
    case 8:
      if (puVar6[0xb] != 0x8000000000000000 && puVar6[0xb] != 0) {
        _free(puVar6[0xc]);
      }
      if (puVar6[2] != 0) {
        _free(puVar6[3]);
      }
      if (puVar6[5] != 0) {
        _free(puVar6[6]);
      }
      unaff_x20 = (ulong *)puVar6[9];
      unaff_x23 = puVar6[10];
      if (unaff_x23 == 0) {
        uVar9 = puVar6[8];
        goto joined_r0x0001033973a0;
      }
      unaff_x22 = unaff_x20 + 9;
      puVar22 = &UNK_103397434;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
      puVar6 = unaff_x20;
      goto SUB_103382b94;
    case 9:
      if (puVar6[9] == 0x8000000000000000 || puVar6[9] == 0) {
        if (puVar6[0xc] == 0x8000000000000000 || puVar6[0xc] == 0) goto code_r0x0001033973cc;
code_r0x00010339756c:
        _free(puVar6[0xd]);
        uVar9 = puVar6[2];
      }
      else {
        _free(puVar6[10]);
        if (puVar6[0xc] != 0x8000000000000000 && puVar6[0xc] != 0) goto code_r0x00010339756c;
code_r0x0001033973cc:
        uVar9 = puVar6[2];
      }
      if (uVar9 == 4) {
        return;
      }
      puVar7 = puVar6 + 2;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
      unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
      goto DAT_10339eea8;
    case 10:
      if (puVar6[2] != 0) {
        _free(puVar6[3]);
      }
      if (puVar6[5] != 0) {
        _free(puVar6[6]);
      }
      if (puVar6[0xb] != 0x8000000000000000 && puVar6[0xb] != 0) {
        uVar9 = puVar6[0xc];
        goto code_r0x00010339750c;
      }
      goto code_r0x000103397510;
    case 0xb:
      if (puVar6[2] == 0) {
        return;
      }
      goto code_r0x0001033971b0;
    default:
      return;
    case 0xd:
      if (puVar6[2] == 0x8000000000000000 || puVar6[2] == 0) {
        return;
      }
code_r0x0001033971b0:
      unaff_x20 = (ulong *)puVar6[3];
      goto code_r0x000108aa97c4;
    }
    if (puVar6[5] != 0) {
      uVar9 = puVar6[6];
code_r0x00010339750c:
      _free(uVar9);
    }
code_r0x000103397510:
    if (puVar6[8] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[9];
    break;
  case 0x38:
  case 0x39:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    puVar7 = puVar6 + 4;
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
    puVar4 = (undefined1 *)((long)register0x00000008 + -0x30);
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    puVar19 = (undefined1 *)((long)register0x00000008 + -0x10);
    uVar9 = *puVar7 ^ 0x8000000000000000;
    if (-1 < (long)*puVar7) {
      uVar9 = 9;
    }
    switch(uVar9) {
    case 0:
      if (puVar6[5] != 0) {
        _free(puVar6[6]);
      }
      unaff_x20 = (ulong *)puVar6[9];
      puVar7 = unaff_x20;
      for (uVar9 = puVar6[10]; uVar9 != 0; uVar9 = uVar9 - 1) {
        FUN_10339ad74(puVar7);
        puVar7 = puVar7 + 7;
      }
code_r0x00010338d864:
      if (puVar6[8] == 0) {
        return;
      }
      break;
    case 1:
      if (puVar6[5] != 0) {
        _free(puVar6[6]);
      }
      unaff_x20 = (ulong *)puVar6[9];
      uVar9 = puVar6[10];
      if (uVar9 != 0) {
        puVar7 = unaff_x20 + 4;
        do {
          if (puVar7[-4] != 0) {
            _free(puVar7[-3]);
          }
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 6;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      goto code_r0x00010338d864;
    case 2:
      if (puVar6[5] != 0) {
        _free(puVar6[6]);
      }
      uVar9 = puVar6[9];
      uVar15 = puVar6[10];
      if (uVar15 != 0) {
        puVar17 = (undefined8 *)(uVar9 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (puVar6[8] != 0) {
        _free(uVar9);
      }
      puVar6 = puVar6 + 0xb;
      if (*puVar6 == 0x8000000000000000) {
        return;
      }
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
      unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
DAT_1033b480c:
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar14;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar20;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar21;
      uVar9 = puVar6[1];
      uVar15 = puVar6[2];
      if (uVar15 != 0) {
        puVar17 = (undefined8 *)(uVar9 + 0x20);
        do {
          if (puVar17[-4] != 0) {
            _free(puVar17[-3]);
          }
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 7;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (*puVar6 != 0) {
        _free(uVar9);
      }
      unaff_x20 = (ulong *)puVar6[4];
      uVar9 = puVar6[5];
      if (uVar9 != 0) {
        puVar7 = unaff_x20 + 1;
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (puVar6[3] == 0) {
        return;
      }
      break;
    case 3:
    case 6:
      if (puVar6[5] != 0) {
        _free(puVar6[6]);
      }
      if (puVar6[8] == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar6[9];
      break;
    case 4:
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
      if (puVar6[5] != 0) {
        _free(puVar6[6]);
      }
      uVar9 = puVar6[9];
      uVar15 = puVar6[10];
      if (uVar15 != 0) {
        puVar17 = (undefined8 *)(uVar9 + 8);
        do {
          if (puVar17[-1] != 0) {
            _free(*puVar17);
          }
          puVar17 = puVar17 + 3;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      if (puVar6[8] != 0) {
        _free(uVar9);
      }
      unaff_x20 = (ulong *)puVar6[0xc];
      uVar9 = puVar6[0xd];
      if (uVar9 != 0) {
        puVar7 = unaff_x20 + 1;
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 3;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (puVar6[0xb] == 0) {
        return;
      }
      break;
    case 5:
      if (puVar6[0xc] != 0) {
        _free(puVar6[0xd]);
      }
      if (puVar6[0xf] != 0) {
        _free(puVar6[0x10]);
      }
      puVar7 = puVar6 + 5;
      uVar20 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar14 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x18);
      unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
      unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
      goto DAT_10339eea8;
    case 7:
      puVar6 = puVar6 + 5;
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
      unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
      unaff_x19 = *(ulong **)((long)register0x00000008 + -0x18);
      goto DAT_1033a86e8;
    case 8:
      if (puVar6[5] != 0) {
        _free(puVar6[6]);
      }
      puVar6 = puVar6 + 0xe;
      puVar22 = &UNK_10338d8f8;
      goto code_r0x0001032d81b4;
    case 9:
      unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
      unaff_x22 = *(ulong **)((long)register0x00000008 + -0x30);
      unaff_x21 = *(ulong **)((long)register0x00000008 + -0x28);
      *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
      if (*puVar7 != 0) {
        _free(puVar6[5]);
      }
      if (puVar6[7] != 0) {
        _free(puVar6[8]);
      }
      if (puVar6[10] != 0) {
        _free(puVar6[0xb]);
      }
      puVar22 = &UNK_10339cb80;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
      puVar6 = puVar6 + 0x2c;
      goto SUB_103382b94;
    default:
      if (puVar6[5] == 0) {
        return;
      }
      unaff_x20 = (ulong *)puVar6[6];
      break;
    }
    break;
  case 0x3a:
  case 0x3b:
    if (puVar6[0x14] != 0x8000000000000000 && puVar6[0x14] != 0) {
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      _free(puVar6[0x15]);
      unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
      unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
      unaff_x20 = *(ulong **)((long)register0x00000008 + -0x20);
      unaff_x19 = *(ulong **)((long)register0x00000008 + -0x18);
    }
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[5] != 0) {
      _free(puVar6[6]);
    }
    if (puVar6[8] != 0) {
      _free(puVar6[9]);
    }
    if (puVar6[0xe] == 0x8000000000000000 || puVar6[0xe] == 0) {
      unaff_x20 = (ulong *)puVar6[0xc];
      uVar9 = puVar6[0xd];
    }
    else {
      _free(puVar6[0xf]);
      unaff_x20 = (ulong *)puVar6[0xc];
      uVar9 = puVar6[0xd];
    }
    if (uVar9 != 0) {
      puVar7 = unaff_x20 + 1;
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (puVar6[0xb] == 0) {
      return;
    }
    break;
  case 0x3c:
  case 0x3d:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] != 0) {
      _free(puVar6[8]);
    }
    if (puVar6[10] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0xb];
    break;
  case 0x3e:
  case 0x3f:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] != 0) {
      _free(puVar6[8]);
    }
    if (puVar6[10] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[0xb];
    break;
  case 0x40:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] != 0) {
      _free(puVar6[5]);
    }
    if (puVar6[7] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[8];
    break;
  case 0x41:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[5] != 0) {
      _free(puVar6[6]);
    }
    if (puVar6[0xe] == 0x8000000000000000 || puVar6[0xe] == 0) {
      if (puVar6[0x11] == 0x8000000000000000 || puVar6[0x11] == 0) goto code_r0x0001033ba1c4;
code_r0x0001033ba240:
      _free(puVar6[0x12]);
      uVar9 = puVar6[8];
    }
    else {
      _free(puVar6[0xf]);
      if (puVar6[0x11] != 0x8000000000000000 && puVar6[0x11] != 0) goto code_r0x0001033ba240;
code_r0x0001033ba1c4:
      uVar9 = puVar6[8];
    }
    if (uVar9 != 0) {
      _free(puVar6[9]);
    }
    if (puVar6[0xb] != 0) {
      _free(puVar6[0xc]);
    }
    if (puVar6[1] == 3) {
      uVar9 = puVar6[2] & 0x7fffffffffffffff;
    }
    else {
      if (puVar6[1] != 4) {
        return;
      }
      uVar9 = puVar6[2];
    }
    if (uVar9 == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[3];
    break;
  case 0x42:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[5];
    break;
  case 0x43:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[5] != 0) {
      _free(puVar6[6]);
    }
    if (puVar6[0xb] == 0x8000000000000000 || puVar6[0xb] == 0) {
      if (puVar6[0xe] == 0x8000000000000000 || puVar6[0xe] == 0) goto code_r0x0001033c4bc4;
code_r0x0001033c4c30:
      _free(puVar6[0xf]);
      uVar9 = puVar6[8];
    }
    else {
      _free(puVar6[0xc]);
      if (puVar6[0xe] != 0x8000000000000000 && puVar6[0xe] != 0) goto code_r0x0001033c4c30;
code_r0x0001033c4bc4:
      uVar9 = puVar6[8];
    }
    if (uVar9 != 0) {
      _free(puVar6[9]);
    }
    if (puVar6[1] == 3) {
      uVar9 = puVar6[2] & 0x7fffffffffffffff;
    }
    else {
      if (puVar6[1] != 4) {
        return;
      }
      uVar9 = puVar6[2];
    }
    if (uVar9 == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[3];
    break;
  case 0x44:
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    uVar9 = puVar6[5];
    uVar15 = puVar6[6];
    if (uVar15 == 0) goto code_r0x0001033b7bec;
    puVar17 = (undefined8 *)(uVar9 + 0x20);
    goto code_r0x0001033b7ba4;
  case 0x45:
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    uVar9 = puVar6[5];
    uVar15 = puVar6[6];
    if (uVar15 == 0) goto code_r0x0001033b4998;
    plVar16 = (long *)(uVar9 + 0x20);
    goto code_r0x0001033b491c;
  case 0x46:
    if (puVar6[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[2];
    break;
  default:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[5] != 0) {
      _free(puVar6[6]);
    }
    if (puVar6[8] == 0x8000000000000000 || puVar6[8] == 0) {
      if (puVar6[0xb] == 0x8000000000000000 || puVar6[0xb] == 0) goto LAB_1033af654;
LAB_1033af698:
      _free(puVar6[0xc]);
      uVar9 = puVar6[1];
      if (uVar9 == 3) goto LAB_1033af6ac;
LAB_1033af660:
      if (uVar9 != 4) {
        return;
      }
      uVar9 = puVar6[2];
    }
    else {
      _free(puVar6[9]);
      if (puVar6[0xb] != 0x8000000000000000 && puVar6[0xb] != 0) goto LAB_1033af698;
LAB_1033af654:
      uVar9 = puVar6[1];
      if (uVar9 != 3) goto LAB_1033af660;
LAB_1033af6ac:
      uVar9 = puVar6[2] & 0x7fffffffffffffff;
    }
    if (uVar9 == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar6[3];
    break;
  case 0x48:
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    if (puVar6[1] != 0) {
      _free(puVar6[2]);
    }
    if (puVar6[4] == 0x8000000000000000 || puVar6[4] == 0) {
      if (puVar6[7] == 0x8000000000000000 || puVar6[7] == 0) {
        return;
      }
    }
    else {
      _free(puVar6[5]);
      if (puVar6[7] == 0x8000000000000000 || puVar6[7] == 0) {
        return;
      }
    }
    unaff_x20 = (ulong *)puVar6[8];
  }
  goto code_r0x000108aa97c4;
code_r0x0001033b7ba4:
  do {
    if (puVar17[-4] == -0x8000000000000000 || puVar17[-4] == 0) {
      if (puVar17[-1] != -0x8000000000000000 && puVar17[-1] != 0) {
code_r0x0001033b7be0:
        _free(*puVar17);
      }
    }
    else {
      _free(puVar17[-3]);
      if (puVar17[-1] != -0x8000000000000000 && puVar17[-1] != 0) goto code_r0x0001033b7be0;
    }
    puVar17 = puVar17 + 8;
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0);
code_r0x0001033b7bec:
  if (puVar6[4] != 0) {
    _free(uVar9);
  }
  if (puVar6[7] == 0) {
    return;
  }
  unaff_x20 = (ulong *)puVar6[8];
  goto code_r0x000108aa97c4;
joined_r0x000103397348:
  if (uVar9 == 0) goto code_r0x00010339739c;
  uVar11 = *puVar7;
  uVar15 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar15 = 1;
  }
  if ((uVar15 == 0) || (uVar15 != 1)) {
    if (puVar7[1] != 0) {
      lVar10 = 0x10;
      goto code_r0x00010339735c;
    }
  }
  else if (uVar11 != 0) {
    lVar10 = 8;
code_r0x00010339735c:
    _free(*(undefined8 *)((long)puVar7 + lVar10));
  }
  puVar7 = puVar7 + 4;
  uVar9 = uVar9 - 1;
  goto joined_r0x000103397348;
joined_r0x000103397150:
  if (uVar9 == 0) goto code_r0x00010339739c;
  uVar11 = *puVar7;
  uVar15 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar15 = 1;
  }
  if ((uVar15 == 0) || (uVar15 != 1)) {
    if (puVar7[1] != 0) {
      lVar10 = 0x10;
      goto code_r0x00010339715c;
    }
  }
  else if (uVar11 != 0) {
    lVar10 = 8;
code_r0x00010339715c:
    _free(*(undefined8 *)((long)puVar7 + lVar10));
  }
  puVar7 = puVar7 + 4;
  uVar9 = uVar9 - 1;
  goto joined_r0x000103397150;
code_r0x00010339739c:
  uVar9 = puVar6[3];
  goto joined_r0x0001033973a0;
joined_r0x000103397054:
  if (uVar9 == 0) goto code_r0x000103397200;
  uVar11 = *puVar7;
  uVar15 = uVar11 ^ 0x8000000000000000;
  if (-1 < (long)uVar11) {
    uVar15 = 1;
  }
  if ((uVar15 == 0) || (uVar15 != 1)) {
    if (puVar7[1] != 0) {
      lVar10 = 0x10;
      goto code_r0x000103397068;
    }
  }
  else if (uVar11 != 0) {
    lVar10 = 8;
code_r0x000103397068:
    _free(*(undefined8 *)((long)puVar7 + lVar10));
  }
  puVar7 = puVar7 + 4;
  uVar9 = uVar9 - 1;
  goto joined_r0x000103397054;
code_r0x000103397200:
  uVar9 = puVar6[5];
joined_r0x0001033973a0:
  if (uVar9 == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
joined_r0x0001033bcc38:
  if (uVar15 == 0) goto code_r0x0001033bcce0;
  uVar11 = *puVar6;
  lVar10 = uVar11 + 0x7ffffffffffffffb;
  if (uVar11 < 0x8000000000000005) {
    lVar10 = 2;
  }
  if ((lVar10 == 0) || (lVar10 == 1)) {
    uVar11 = puVar6[1];
joined_r0x0001033bcc58:
    if (uVar11 != 0) {
      lVar10 = 0x10;
code_r0x0001033bcc60:
      _free(*(undefined8 *)((long)puVar6 + lVar10));
    }
  }
  else {
    uVar12 = uVar11 ^ 0x8000000000000000;
    if (-1 < (long)uVar11) {
      uVar12 = 5;
    }
    if (uVar12 < 5) {
      if (uVar12 == 2) {
        uVar11 = puVar6[1] & 0x7fffffffffffffff;
        goto joined_r0x0001033bcc58;
      }
    }
    else {
      if (uVar11 != 0) {
        _free(puVar6[1]);
      }
      if ((puVar6[3] & 0x7fffffffffffffff) != 0) {
        lVar10 = 0x20;
        goto code_r0x0001033bcc60;
      }
    }
  }
  puVar6 = puVar6 + 7;
  uVar15 = uVar15 - 1;
  goto joined_r0x0001033bcc38;
code_r0x0001033bcce0:
  if (uVar9 == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
joined_r0x0001032d822c:
  do {
    while (uVar11 == 0) {
      lVar10 = *plVar18;
      plVar16 = plVar16 + -0x48;
      plVar18 = plVar18 + 1;
      uVar11 = CONCAT17(-(-1 < lVar10),
                        CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
               0x8080808080808080;
    }
    uVar12 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    iVar3 = (int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
    if (plVar16[(long)-iVar3 * 9 + -9] != 0) {
      _free(plVar16[(long)-iVar3 * 9 + -8]);
    }
    uVar8 = plVar16[(long)-iVar3 * 9 + -6];
    uVar12 = uVar8 ^ 0x8000000000000000;
    if (-1 < (long)uVar8) {
      uVar12 = 2;
    }
    if ((uVar12 == 0) || (uVar12 == 1)) {
      if (plVar16[(long)-iVar3 * 9 + -5] != 0) {
        lVar10 = 0x10;
        goto code_r0x0001032d8214;
      }
    }
    else {
      if (uVar8 != 0) {
        _free(plVar16[(long)-iVar3 * 9 + -5]);
      }
      if ((plVar16[(long)-iVar3 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
        lVar10 = 0x20;
code_r0x0001032d8214:
        _free(*(undefined8 *)((long)(plVar16 + (long)-iVar3 * 9 + -6) + lVar10));
      }
    }
    uVar11 = uVar11 - 1 & uVar11;
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0);
code_r0x0001032d82a8:
  if (uVar9 * 0x49 == -0x51) {
    return;
  }
  unaff_x20 = (ulong *)(*puVar6 + uVar9 * -0x48 + -0x48);
  goto code_r0x000108aa97c4;
joined_r0x0001033ca01c:
  if (uVar15 == 0) goto code_r0x0001033ca0c4;
  uVar11 = *puVar7;
  lVar10 = uVar11 + 0x7ffffffffffffffb;
  if (uVar11 < 0x8000000000000005) {
    lVar10 = 2;
  }
  if ((lVar10 == 0) || (lVar10 == 1)) {
    uVar11 = puVar7[1];
joined_r0x0001033ca03c:
    if (uVar11 != 0) {
      lVar10 = 0x10;
code_r0x0001033ca044:
      _free(*(undefined8 *)((long)puVar7 + lVar10));
    }
  }
  else {
    uVar12 = uVar11 ^ 0x8000000000000000;
    if (-1 < (long)uVar11) {
      uVar12 = 5;
    }
    if (uVar12 < 5) {
      if (uVar12 == 2) {
        uVar11 = puVar7[1] & 0x7fffffffffffffff;
        goto joined_r0x0001033ca03c;
      }
    }
    else {
      if (uVar11 != 0) {
        _free(puVar7[1]);
      }
      if ((puVar7[3] & 0x7fffffffffffffff) != 0) {
        lVar10 = 0x20;
        goto code_r0x0001033ca044;
      }
    }
  }
  puVar7 = puVar7 + 7;
  uVar15 = uVar15 - 1;
  goto joined_r0x0001033ca01c;
code_r0x0001033ca0c4:
  if (uVar9 != 0) {
    _free(puVar5);
  }
code_r0x0001033ca0d0:
  if ((puVar6[0xf] & 0x7fffffffffffffff) == 0) {
    return;
  }
  unaff_x20 = (ulong *)puVar6[0x10];
  goto code_r0x000108aa97c4;
joined_r0x0001033b63b4:
  if (uVar9 == 0) goto code_r0x0001033b645c;
  uVar11 = *puVar7;
  lVar10 = uVar11 + 0x7ffffffffffffffb;
  if (uVar11 < 0x8000000000000005) {
    lVar10 = 2;
  }
  if ((lVar10 == 0) || (lVar10 == 1)) {
    uVar11 = puVar7[1];
joined_r0x0001033b63d4:
    if (uVar11 != 0) {
      lVar10 = 0x10;
code_r0x0001033b63dc:
      _free(*(undefined8 *)((long)puVar7 + lVar10));
    }
  }
  else {
    uVar12 = uVar11 ^ 0x8000000000000000;
    if (-1 < (long)uVar11) {
      uVar12 = 5;
    }
    if (uVar12 < 5) {
      if (uVar12 == 2) {
        uVar11 = puVar7[1] & 0x7fffffffffffffff;
        goto joined_r0x0001033b63d4;
      }
    }
    else {
      if (uVar11 != 0) {
        _free(puVar7[1]);
      }
      if ((puVar7[3] & 0x7fffffffffffffff) != 0) {
        lVar10 = 0x20;
        goto code_r0x0001033b63dc;
      }
    }
  }
  puVar7 = puVar7 + 7;
  uVar9 = uVar9 - 1;
  goto joined_r0x0001033b63b4;
code_r0x0001033b645c:
  if (uVar15 != 0) {
    _free(puVar5);
  }
code_r0x0001033b6310:
  if (puVar6[0x15] != 0x8000000000000000) {
    if (puVar6[0x15] != 0) {
      _free(puVar6[0x16]);
    }
    if ((puVar6[0x18] != 0x8000000000000000) && (puVar6[0x18] != 0)) {
      _free(puVar6[0x19]);
    }
  }
  if (puVar6[7] != 0) {
    _free(puVar6[8]);
  }
  if (puVar6[10] != 0) {
    _free(puVar6[0xb]);
  }
  if ((puVar6[0xd] == 0x8000000000000000) || (puVar6[0xd] == 0)) {
    return;
  }
  unaff_x20 = (ulong *)puVar6[0xe];
  goto code_r0x000108aa97c4;
SUB_103382b94:
  puVar5 = puVar6;
  *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = puVar7;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar4;
  *(undefined **)((long)register0x00000008 + -8) = puVar22;
  puVar4 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar15 = *puVar5;
  uVar9 = uVar15 ^ 0x8000000000000000;
  if (-1 < (long)uVar15) {
    uVar9 = 5;
  }
  if (uVar9 < 3) {
    return;
  }
  if (uVar9 == 3) {
    if (puVar5[1] == 0) {
      return;
    }
    unaff_x20 = (ulong *)puVar5[2];
    goto code_r0x000108aa97c4;
  }
  if (uVar9 != 4) {
    uVar9 = puVar5[4];
    if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
      _free(puVar5[3] + uVar9 * -8 + -8);
    }
    unaff_x20 = (ulong *)puVar5[1];
    FUN_1032aa3b0(unaff_x20,puVar5[2]);
    goto joined_r0x000103382c50;
  }
  unaff_x20 = (ulong *)puVar5[2];
  unaff_x23 = puVar5[3];
  if (unaff_x23 == 0) goto LAB_103382c58;
  unaff_x22 = unaff_x20 + 9;
  puVar22 = (undefined *)0x103382c04;
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
  puVar6 = unaff_x20;
  puVar7 = puVar5;
  goto SUB_103382b94;
code_r0x00010339204c:
  if (puVar6[1] == 0) {
code_r0x000103391f60:
    return;
  }
  unaff_x20 = (ulong *)puVar6[2];
  goto code_r0x000108aa97c4;
code_r0x0001033b491c:
  do {
    if (*plVar16 == -0x8000000000000000 || *plVar16 == 0) {
      if (plVar16[3] == -0x8000000000000000 || plVar16[3] == 0) goto code_r0x0001033b493c;
code_r0x0001033b4974:
      _free(plVar16[4]);
      lVar10 = plVar16[-4];
      if (lVar10 == 3) goto code_r0x0001033b4988;
code_r0x0001033b4948:
      if (lVar10 == 4) {
        uVar11 = plVar16[-3];
        goto joined_r0x0001033b4990;
      }
    }
    else {
      _free(plVar16[1]);
      if (plVar16[3] != -0x8000000000000000 && plVar16[3] != 0) goto code_r0x0001033b4974;
code_r0x0001033b493c:
      lVar10 = plVar16[-4];
      if (lVar10 != 3) goto code_r0x0001033b4948;
code_r0x0001033b4988:
      uVar11 = plVar16[-3] & 0x7fffffffffffffff;
joined_r0x0001033b4990:
      if (uVar11 != 0) {
        _free(plVar16[-2]);
      }
    }
    plVar16 = plVar16 + 0xc;
    uVar15 = uVar15 - 1;
  } while (uVar15 != 0);
code_r0x0001033b4998:
  if (puVar6[4] != 0) {
    _free(uVar9);
  }
  *(ulong **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) =
       *(undefined8 *)((long)register0x00000008 + -0x40);
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
  *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
  uVar9 = puVar6[8];
  if (uVar9 != 0) {
    uVar15 = puVar6[10];
    if (uVar15 != 0) {
      plVar16 = (long *)puVar6[7];
      plVar18 = plVar16 + 1;
      lVar10 = *plVar16;
      uVar11 = CONCAT17(-(-1 < lVar10),
                        CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar10 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
               0x8080808080808080;
      do {
        while (uVar11 == 0) {
          lVar10 = *plVar18;
          plVar16 = plVar16 + -0x30;
          plVar18 = plVar18 + 1;
          uVar11 = CONCAT17(-(-1 < lVar10),
                            CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar10 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar10 >> 8)),
                                                           -(-1 < (char)lVar10)))))))) &
                   0x8080808080808080;
        }
        uVar12 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        iVar3 = (int)((ulong)LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) >> 3);
        if (plVar16[(long)-iVar3 * 6 + -4] == 3) {
          uVar12 = plVar16[(long)-iVar3 * 6 + -3] & 0x7fffffffffffffff;
joined_r0x000103303648:
          if (uVar12 != 0) {
            _free(plVar16[(long)-iVar3 * 6 + -2]);
          }
        }
        else if (plVar16[(long)-iVar3 * 6 + -4] == 4) {
          uVar12 = plVar16[(long)-iVar3 * 6 + -3];
          goto joined_r0x000103303648;
        }
        uVar11 = uVar11 - 1 & uVar11;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    if (uVar9 * 0x31 != -0x39) {
      unaff_x20 = (ulong *)(puVar6[7] + uVar9 * -0x30 + -0x30);
      goto code_r0x000108aa97c4;
    }
  }
  return;
LAB_103382c58:
  uVar15 = puVar5[1];
joined_r0x000103382c50:
  if (uVar15 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(unaff_x20);
  return;
}

