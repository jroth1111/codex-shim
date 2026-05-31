
/* WARNING: Possible PIC construction at 0x000100d1de90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e09984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d1de94) */
/* WARNING: Removing unreachable block (ram,0x000100e26f74) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100d12094(long param_1)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  int *piVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *unaff_x19;
  undefined8 uVar17;
  long *unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 unaff_x21;
  long lVar20;
  undefined8 uVar21;
  long *unaff_x22;
  long *plVar22;
  long *plVar23;
  long unaff_x23;
  long unaff_x24;
  long lVar24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  undefined *puVar26;
  long lVar27;
  
  bVar2 = *(byte *)(param_1 + 0x40);
  if (5 < bVar2) {
    if (bVar2 == 6) {
      if ((*(char *)(param_1 + 0x678) != '\x03') ||
         (FUN_100d666fc(param_1 + 0x70), *(long *)(param_1 + 0x58) == 0)) {
        return;
      }
      puVar9 = *(ulong **)(param_1 + 0x60);
      goto code_r0x000108aa97c4;
    }
    if (bVar2 == 7) {
      if (*(char *)(param_1 + 0x6d9) == '\x03') {
        if ((*(char *)(param_1 + 0x6c8) == '\x03') &&
           (FUN_100d666fc(param_1 + 0xc0), *(long *)(param_1 + 0xa8) != 0)) {
          _free(*(undefined8 *)(param_1 + 0xb0));
        }
        FUN_100e24ac8(param_1 + 0x48);
        *(undefined1 *)(param_1 + 0x6d8) = 0;
        if (*(long *)(param_1 + 0x80) != 0) {
          puVar9 = *(ulong **)(param_1 + 0x88);
          goto code_r0x000108aa97c4;
        }
      }
      return;
    }
    if (bVar2 != 8) {
      return;
    }
    if (*(char *)(param_1 + 0x68) == '\x03') {
      if ((((*(char *)(param_1 + 0x118) == '\x03') && (*(char *)(param_1 + 0x110) == '\x03')) &&
          (*(char *)(param_1 + 0x108) == '\x03')) && (*(char *)(param_1 + 0xc0) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 200);
        if (*(long *)(param_1 + 0xd0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d61040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(param_1 + 0xd0) + 0x18))(*(undefined8 *)(param_1 + 0xd8));
          return;
        }
      }
      return;
    }
    if (*(char *)(param_1 + 0x68) != '\x04') {
      return;
    }
    if (((*(char *)(param_1 + 0xe8) == '\x03') && (*(char *)(param_1 + 0xe0) == '\x03')) &&
       (*(char *)(param_1 + 0x98) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xa0);
      if (*(long *)(param_1 + 0xa8) != 0) {
        (**(code **)(*(long *)(param_1 + 0xa8) + 0x18))(*(undefined8 *)(param_1 + 0xb0));
      }
    }
    puVar16 = (undefined8 *)(param_1 + 0x70);
    lVar14 = *(long *)*puVar16;
    *(long *)*puVar16 = lVar14 + -1;
    LORelease();
    if (lVar14 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
__ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9e1be2aef8f89c1cE:
    puVar9 = (ulong *)*puVar16;
    FUN_103391b2c(puVar9 + 7);
    if (puVar9 != (ulong *)0xffffffffffffffff) {
      uVar7 = puVar9[1];
      puVar9[1] = uVar7 - 1;
      LORelease();
      if (uVar7 == 1) {
        DataMemoryBarrier(2,1);
        goto code_r0x000108aa97c4;
      }
    }
    return;
  }
  if (bVar2 == 3) {
    cVar3 = *(char *)(param_1 + 0x88);
    if (cVar3 == '\x03') {
      if (((*(char *)(param_1 + 0x140) == '\x03') && (*(char *)(param_1 + 0x138) == '\x03')) &&
         ((*(char *)(param_1 + 0x130) == '\x03' && (*(char *)(param_1 + 0xe8) == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xf0);
        if (*(long *)(param_1 + 0xf8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d50ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(param_1 + 0xf8) + 0x18))(*(undefined8 *)(param_1 + 0x100));
          return;
        }
      }
      return;
    }
    if (cVar3 == '\x04') {
      if (*(char *)(param_1 + 0x648) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0x640) == '\x03') {
        FUN_100cba81c(param_1 + 0xd8);
      }
      puVar9 = *(ulong **)(param_1 + 0xb0);
      lVar14 = *(long *)(param_1 + 0xb8) + 1;
      puVar11 = puVar9;
      while (lVar14 = lVar14 + -1, lVar14 != 0) {
        FUN_100e068b8(puVar11);
        puVar11 = puVar11 + 0x3c;
      }
      if (*(long *)(param_1 + 0xa8) == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (cVar3 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x19c0) != '\x03') {
      return;
    }
    puVar25 = &stack0xfffffffffffffff0;
    bVar2 = *(byte *)(param_1 + 0x678);
    if (bVar2 < 5) {
      plVar12 = (long *)(param_1 + 0xd0);
      if (bVar2 != 0) {
        if (bVar2 == 3) {
          FUN_100d28c3c(param_1 + 0x680);
        }
        else {
          if (bVar2 != 4) {
            return;
          }
          unaff_x20 = (long *)(param_1 + 0x10d0);
          if (*(char *)(param_1 + 0x19b9) == '\x03') {
            FUN_100d65ad8(param_1 + 0x680);
            *(undefined1 *)(param_1 + 0x19b8) = 0;
          }
        }
        goto LAB_100d1de8c;
      }
    }
    else {
      if (bVar2 == 5) {
        FUN_100d68960(param_1 + 0x680);
      }
      else if (bVar2 == 6) {
        if (*(char *)(param_1 + 0x698) == '\x04') {
          FUN_100d11d00(param_1 + 0x6a0);
        }
        else if (*(char *)(param_1 + 0x698) == '\x03') {
          FUN_100d05bf8(param_1 + 0x6a0);
        }
      }
      else {
        if (bVar2 != 7) {
          return;
        }
        FUN_100d28c3c(param_1 + 0x878);
        *(undefined1 *)(param_1 + 0x679) = 0;
        FUN_100e76a44(param_1 + 0x858);
      }
LAB_100d1de8c:
      unaff_x30 = 0x100d1de94;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
      plVar12 = (long *)(param_1 + 0x4a0);
      unaff_x19 = (long *)(param_1 + 0xd0);
      unaff_x29 = puVar25;
    }
SUB_100dfc74c:
    switch((int)*plVar12) {
    case 0:
      goto code_r0x000100dfc85c;
    case 1:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 2:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 3:
      if ((plVar12[1] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 4:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar15 = plVar12[1];
      uVar7 = uVar15 ^ 0x8000000000000000;
      if (-1 < (long)uVar15) {
        uVar7 = 0xc;
      }
      switch(uVar7) {
      case 0:
      case 6:
        if (plVar12[2] != 0) {
          _free(plVar12[3]);
        }
        if (plVar12[5] == -0x8000000000000000 || plVar12[5] == 0) {
          return;
        }
        break;
      case 1:
      case 7:
      case 8:
      case 9:
        uVar7 = plVar12[2] & 0x7fffffffffffffff;
        goto joined_r0x000100e0cc14;
      default:
        uVar7 = plVar12[2];
joined_r0x000100e0cc14:
        if (uVar7 == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[3];
        goto code_r0x000108aa97c4;
      case 10:
        puVar11 = (ulong *)(plVar12 + 2);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
        goto code_r0x000100de6690;
      case 0xc:
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        if (plVar12[1] != 0) {
          _free(plVar12[2]);
        }
        if (plVar12[4] != 0) {
          _free(plVar12[5]);
        }
        if (plVar12[7] != 0) {
          _free(plVar12[8]);
        }
        puVar9 = (ulong *)plVar12[0xb];
        lVar14 = plVar12[0xc];
        if (lVar14 != 0) {
          puVar11 = puVar9 + 4;
          do {
            if (puVar11[-4] != 0) {
              _free(puVar11[-3]);
            }
            if (puVar11[-1] != 0) {
              _free(*puVar11);
            }
            puVar11 = puVar11 + 6;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (plVar12[10] == 0) {
          return;
        }
        goto code_r0x000108aa97c4;
      case 0xd:
        if (plVar12[2] != 0) {
          _free(plVar12[3]);
        }
        if (plVar12[5] == 0) {
          return;
        }
      }
      puVar9 = (ulong *)plVar12[6];
      break;
    case 5:
      if ((plVar12[1] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 6:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 7:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[5];
      break;
    case 8:
    case 9:
    case 10:
    case 0x34:
      goto code_r0x000100dfc770;
    case 0xb:
      if (plVar12[5] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[6];
      break;
    case 0xc:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[0x12] != -0x8000000000000000 && plVar12[0x12] != 0) {
        _free(plVar12[0x13]);
      }
      uVar7 = plVar12[0x1b];
      bVar6 = uVar7 != 0x8000000000000000;
      if (uVar7 < 0x8000000000000001) {
        uVar7 = 0;
      }
      if (bVar6 && (uVar7 & 0x7fffffffffffffff) == 0) {
        FUN_100e79780();
      }
      if (plVar12[0x15] != -0x8000000000000000) {
        if (plVar12[0x15] != 0) {
          _free(plVar12[0x16]);
        }
        if ((plVar12[0x18] != -0x8000000000000000) && (plVar12[0x18] != 0)) {
          _free(plVar12[0x19]);
        }
      }
      if (plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      if (plVar12[10] != 0) {
        _free(plVar12[0xb]);
      }
      if ((plVar12[0xd] == -0x8000000000000000) || (plVar12[0xd] == 0)) {
        return;
      }
      puVar9 = (ulong *)plVar12[0xe];
      break;
    case 0xd:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      if (plVar12[10] == -0x8000000000000000 || plVar12[10] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0xb];
      break;
    case 0xe:
      if (plVar12[0xd] == 3) {
        return;
      }
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[0x17] == -0x8000000000000000 || plVar12[0x17] == 0) {
        if (plVar12[0x1a] != -0x8000000000000000 && plVar12[0x1a] != 0) {
code_r0x000100e13e7c:
          _free(plVar12[0x1b]);
        }
      }
      else {
        _free(plVar12[0x18]);
        if (plVar12[0x1a] != -0x8000000000000000 && plVar12[0x1a] != 0) goto code_r0x000100e13e7c;
      }
      if (plVar12[0x1d] < -0x7ffffffffffffffe || plVar12[0x1d] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0x1e];
      break;
    case 0xf:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      plVar12 = plVar12 + 4;
      if (*plVar12 == -0x8000000000000000) {
        return;
      }
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100e24ac8;
    case 0x10:
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      lVar14 = plVar12[0x10];
      if (lVar14 != -0x8000000000000000) {
        lVar20 = plVar12[0x11];
        lVar27 = plVar12[0x12];
        if (lVar27 != 0) {
          puVar16 = (undefined8 *)(lVar20 + 8);
          do {
            if (puVar16[-1] != 0) {
              _free(*puVar16);
            }
            puVar16 = puVar16 + 3;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if (lVar14 != 0) {
          _free(lVar20);
        }
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      lVar14 = plVar12[8];
      lVar20 = plVar12[9];
      if (lVar20 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (plVar12[7] != 0) {
        _free(lVar14);
      }
      if (plVar12[10] != 0) {
        _free(plVar12[0xb]);
      }
      puVar9 = (ulong *)plVar12[0xe];
      lVar14 = plVar12[0xf];
      if (lVar14 != 0) {
        puVar11 = puVar9 + 1;
        do {
          if ((puVar11[-1] & 0x7fffffffffffffff) != 0) {
            _free(*puVar11);
          }
          puVar11 = puVar11 + 5;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (plVar12[0xd] == 0) {
        return;
      }
      break;
    case 0x11:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 0x12:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 0x13:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 0x14:
      plVar22 = plVar12 + 1;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      if (plVar12[10] == -0x8000000000000000 || plVar12[10] == 0) {
        lVar14 = *plVar22;
      }
      else {
        _free(plVar12[0xb]);
        lVar14 = *plVar22;
      }
      if (lVar14 != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[0xd] == -0x8000000000000000 || plVar12[0xd] == 0) {
        uVar15 = plVar12[0x22];
        uVar7 = uVar15;
        if (uVar15 < 0x8000000000000001) {
          uVar7 = 0;
        }
      }
      else {
        _free(plVar12[0xe]);
        uVar15 = plVar12[0x22];
        uVar7 = uVar15;
        if (uVar15 < 0x8000000000000001) {
          uVar7 = 0;
        }
      }
      if ((uVar15 != 0x8000000000000000) && ((uVar7 & 0x7fffffffffffffff) == 0)) {
        FUN_100e79780(plVar12 + 0x22);
      }
      if (plVar12[0x10] != -0x8000000000000000) {
        if (plVar12[0x10] != 0) {
          _free(plVar12[0x11]);
        }
        if ((plVar12[0x13] != -0x8000000000000000) && (plVar12[0x13] != 0)) {
          _free(plVar12[0x14]);
        }
      }
      if (plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      unaff_x23 = plVar12[0x16];
      unaff_x21 = 0x8000000000000000;
      if (unaff_x23 == -0x8000000000000000) {
LAB_100e26f88:
        if (plVar12[0x19] != -0x8000000000000000) {
          if (plVar12[0x19] != 0) {
            _free(plVar12[0x1a]);
          }
          if (plVar12[0x1c] != 0) {
            _free(plVar12[0x1d]);
          }
        }
        if (plVar12[0x1f] == -0x8000000000000000 || plVar12[0x1f] == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[0x20];
        break;
      }
      unaff_x20 = (long *)plVar12[0x17];
      unaff_x24 = plVar12[0x18];
      if (unaff_x24 == 0) {
        if (unaff_x23 != 0) {
          _free(unaff_x20);
        }
        goto LAB_100e26f88;
      }
      unaff_x22 = unaff_x20 + 0x3b;
      unaff_x30 = 0x100e26f74;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
      plVar12 = unaff_x20;
      unaff_x19 = plVar22;
      goto SUB_100dfc74c;
    case 0x15:
      if (plVar12[0xd] == -0x8000000000000000 || plVar12[0xd] == 0) {
        lVar14 = plVar12[3];
      }
      else {
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        _free(plVar12[0xe]);
        lVar14 = plVar12[3];
      }
      if (lVar14 == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[4];
      break;
    case 0x16:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] < 1) {
        return;
      }
      puVar9 = (ulong *)plVar12[5];
      break;
    case 0x17:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar14 = plVar12[2];
      lVar20 = plVar12[3];
      if (lVar20 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (plVar12[1] != 0) {
        _free(lVar14);
      }
      lVar14 = plVar12[5];
      lVar20 = plVar12[6];
      if (lVar20 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 0x20);
        do {
          if (puVar16[-4] != 0) {
            _free(puVar16[-3]);
          }
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 6;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (plVar12[4] != 0) {
        _free(lVar14);
      }
      puVar9 = (ulong *)plVar12[8];
      lVar14 = plVar12[9];
      if (lVar14 != 0) {
        puVar11 = puVar9 + 1;
        do {
          if (puVar11[-1] != 0) {
            _free(*puVar11);
          }
          puVar11 = puVar11 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (plVar12[7] == 0) {
        return;
      }
      break;
    case 0x18:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      if (plVar12[10] != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if ((plVar12[0x13] != -0x8000000000000000) && (plVar12[0x13] != 0)) {
        _free(plVar12[0x14]);
      }
      if ((plVar12[0x16] == -0x8000000000000000) || (plVar12[0x16] == 0)) {
        return;
      }
      puVar9 = (ulong *)plVar12[0x17];
      break;
    case 0x19:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      if (plVar12[10] != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if ((plVar12[0x13] != -0x8000000000000000) && (plVar12[0x13] != 0)) {
        _free(plVar12[0x14]);
      }
      if ((plVar12[0x16] != -0x8000000000000000) && (plVar12[0x16] != 0)) {
        _free(plVar12[0x17]);
      }
      plVar22 = plVar12 + 0x19;
      if (*plVar22 == -0x8000000000000000) {
        if (plVar12[0x1a] == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[0x1b];
      }
      else {
        puVar25 = *(undefined1 **)((long)register0x00000008 + -0x10);
        puVar26 = *(undefined **)((long)register0x00000008 + -8);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -0x20);
        puVar9 = *(ulong **)((long)register0x00000008 + -0x18);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x28);
SUB_100e00868:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
        *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(undefined8 *)((long)register0x00000008 + -0x30) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar18;
        *(ulong **)((long)register0x00000008 + -0x18) = puVar9;
        *(undefined1 **)((long)register0x00000008 + -0x10) = puVar25;
        *(undefined **)((long)register0x00000008 + -8) = puVar26;
        lVar20 = plVar22[1];
        lVar14 = plVar22[2] + 1;
        lVar27 = lVar20;
        while (lVar14 = lVar14 + -1, lVar14 != 0) {
          FUN_100de6690(lVar27);
          lVar27 = lVar27 + 0x48;
        }
        if (*plVar22 != 0) {
          _free(lVar20);
        }
        if (plVar22[3] != -0x7ffffffffffffffb) {
          FUN_100de6690();
        }
        puVar11 = (ulong *)(plVar22 + 0xc);
        if (*puVar11 == 0x8000000000000005) {
          return;
        }
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        unaff_x24 = *(long *)((long)register0x00000008 + -0x40);
        unaff_x23 = *(long *)((long)register0x00000008 + -0x38);
code_r0x000100de6690:
        *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
        *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x18) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x10) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar18;
        uVar7 = *puVar11 ^ 0x8000000000000000;
        if (-1 < (long)*puVar11) {
          uVar7 = 5;
        }
        if (uVar7 < 3) {
          return;
        }
        if (uVar7 == 3) {
          if (puVar11[1] == 0) {
            return;
          }
          puVar9 = (ulong *)puVar11[2];
        }
        else if (uVar7 == 4) {
          puVar9 = (ulong *)puVar11[2];
          lVar14 = puVar11[3] + 1;
          puVar10 = puVar9;
          while (lVar14 = lVar14 + -1, lVar14 != 0) {
            FUN_100de6690(puVar10);
            puVar10 = puVar10 + 9;
          }
          if (puVar11[1] == 0) {
            return;
          }
        }
        else {
          uVar7 = puVar11[4];
          if ((uVar7 != 0) && (uVar7 * 9 != -0x11)) {
            _free(puVar11[3] + uVar7 * -8 + -8);
          }
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
          *(undefined8 *)((long)register0x00000008 + -8) =
               *(undefined8 *)((long)register0x00000008 + -8);
          puVar9 = (ulong *)puVar11[1];
          lVar14 = puVar11[2] + 1;
          puVar10 = puVar9;
          while (lVar14 = lVar14 + -1, lVar14 != 0) {
            if (*puVar10 != 0) {
              _free(puVar10[1]);
            }
            FUN_100de6690(puVar10 + 3);
            puVar10 = puVar10 + 0xd;
          }
          if (*puVar11 == 0) {
            return;
          }
        }
      }
      break;
    case 0x1a:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 0x1b:
      plVar22 = plVar12 + 1;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[8] != 0) {
        _free(plVar12[9]);
      }
      if (plVar12[0xb] != 0) {
        _free(plVar12[0xc]);
      }
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
FUN_100e0c988:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar19;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar21;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar18;
      lVar14 = *plVar22;
      if (lVar14 < 2) {
        if (lVar14 == 0) {
          if (plVar22[1] == -0x8000000000000000 || plVar22[1] == 0) {
            lVar14 = plVar22[4];
          }
          else {
            _free(plVar22[2]);
            lVar14 = plVar22[4];
          }
          if (lVar14 == -0x8000000000000000) {
            return;
          }
          puVar9 = (ulong *)plVar22[5];
          lVar20 = plVar22[6];
          if (lVar20 != 0) {
            puVar11 = puVar9 + 1;
            do {
              if (puVar11[-1] != 0) {
                _free(*puVar11);
              }
              puVar11 = puVar11 + 3;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (lVar14 == 0) {
            return;
          }
        }
        else {
          if ((plVar22[1] & 0x7fffffffffffffffU) == 0) {
            return;
          }
          puVar9 = (ulong *)plVar22[2];
        }
      }
      else {
        if (lVar14 != 2) {
          return;
        }
        if (plVar22[1] == -0x8000000000000000 || plVar22[1] == 0) {
          uVar7 = plVar22[4];
        }
        else {
          _free(plVar22[2]);
          uVar7 = plVar22[4];
        }
        if ((uVar7 & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar9 = (ulong *)plVar22[5];
      }
      break;
    case 0x1c:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 0x1d:
      plVar12 = plVar12 + 1;
DAT_100e17134:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*plVar12 != 0) {
        _free(plVar12[1]);
      }
      if (plVar12[3] != 0) {
        _free(plVar12[4]);
      }
      if (plVar12[9] == -0x8000000000000000 || plVar12[9] == 0) {
        lVar14 = plVar12[6];
      }
      else {
        _free(plVar12[10]);
        lVar14 = plVar12[6];
      }
      if (lVar14 != 0) {
        _free(plVar12[7]);
      }
      if ((plVar12[0xc] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0xd];
      break;
    case 0x1e:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[0x10] == -0x8000000000000000 || plVar12[0x10] == 0) {
        lVar14 = plVar12[4];
      }
      else {
        _free(plVar12[0x11]);
        lVar14 = plVar12[4];
      }
      if (lVar14 != 0) {
        _free(plVar12[5]);
      }
      lVar14 = plVar12[8];
      lVar20 = plVar12[9];
      if (lVar20 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (plVar12[7] != 0) {
        _free(lVar14);
      }
      if (plVar12[10] != 0) {
        _free(plVar12[0xb]);
      }
      lVar20 = plVar12[0xe];
      lVar14 = lVar20;
      for (lVar27 = plVar12[0xf]; lVar27 != 0; lVar27 = lVar27 + -1) {
        FUN_100e1d024(lVar14);
        lVar14 = lVar14 + 0x50;
      }
      if (plVar12[0xd] != 0) {
        _free(lVar20);
      }
      if (plVar12[0x13] == -0x8000000000000000 || plVar12[0x13] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0x14];
      break;
    case 0x1f:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[5];
      break;
    case 0x20:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[8];
      break;
    case 0x21:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[0x1c] == -0x8000000000000000 || plVar12[0x1c] == 0) {
        lVar14 = plVar12[4];
      }
      else {
        _free(plVar12[0x1d]);
        lVar14 = plVar12[4];
      }
      if (lVar14 != 0) {
        _free(plVar12[5]);
      }
      lVar14 = plVar12[8];
      lVar20 = plVar12[9];
      if (lVar20 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (plVar12[7] != 0) {
        _free(lVar14);
      }
      if (plVar12[10] != 0) {
        _free(plVar12[0xb]);
      }
      lVar20 = plVar12[0xe];
      lVar14 = lVar20;
      for (lVar27 = plVar12[0xf]; lVar27 != 0; lVar27 = lVar27 + -1) {
        FUN_100e1d024(lVar14);
        lVar14 = lVar14 + 0x50;
      }
      if (plVar12[0xd] != 0) {
        _free(lVar20);
      }
      if (plVar12[0x1f] == -0x8000000000000000 || plVar12[0x1f] == 0) {
        lVar14 = plVar12[0x10];
      }
      else {
        _free(plVar12[0x20]);
        lVar14 = plVar12[0x10];
      }
      if (lVar14 != 0) {
        _free(plVar12[0x11]);
      }
      if (plVar12[0x13] != 0) {
        _free(plVar12[0x14]);
      }
      if (plVar12[0x16] != 0) {
        _free(plVar12[0x17]);
      }
      if (plVar12[0x19] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0x1a];
      break;
    case 0x22:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[5];
      break;
    case 0x23:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[0x10] == -0x8000000000000000 || plVar12[0x10] == 0) {
        lVar14 = plVar12[4];
      }
      else {
        _free(plVar12[0x11]);
        lVar14 = plVar12[4];
      }
      if (lVar14 != 0) {
        _free(plVar12[5]);
      }
      lVar14 = plVar12[8];
      lVar20 = plVar12[9];
      if (lVar20 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 3;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (plVar12[7] != 0) {
        _free(lVar14);
      }
      if (plVar12[10] != 0) {
        _free(plVar12[0xb]);
      }
      if ((plVar12[0x13] != -0x8000000000000000) && (plVar12[0x13] != 0)) {
        _free(plVar12[0x14]);
      }
      if ((plVar12[0x16] & 0x7fffffffffffffffU) == 0) {
        lVar14 = plVar12[0x1a];
      }
      else {
        _free(plVar12[0x17]);
        lVar14 = plVar12[0x1a];
      }
      if (lVar14 != -0x8000000000000000) {
        lVar20 = plVar12[0x1b];
        lVar27 = plVar12[0x1c];
        if (lVar27 != 0) {
          puVar16 = (undefined8 *)(lVar20 + 8);
          do {
            if (puVar16[-1] != 0) {
              _free(*puVar16);
            }
            puVar16 = puVar16 + 3;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if (lVar14 != 0) {
          _free(lVar20);
        }
      }
      lVar14 = plVar12[0x1d];
      if (lVar14 != -0x8000000000000000) {
        lVar20 = plVar12[0x1e];
        lVar27 = plVar12[0x1f];
        if (lVar27 != 0) {
          puVar16 = (undefined8 *)(lVar20 + 8);
          do {
            if (puVar16[-1] != 0) {
              _free(*puVar16);
            }
            puVar16 = puVar16 + 4;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if (lVar14 != 0) {
          _free(lVar20);
        }
      }
      if (-0x7fffffffffffffff < plVar12[0x23]) {
        FUN_100e79780(plVar12 + 0x23);
      }
      lVar14 = plVar12[0x20];
      if (lVar14 != -0x8000000000000000) {
        lVar20 = plVar12[0x21];
        lVar27 = plVar12[0x22];
        if (lVar27 != 0) {
          lVar24 = 0;
          do {
            puVar9 = (ulong *)(lVar20 + lVar24 * 0x20);
            uVar15 = *puVar9;
            uVar7 = uVar15 ^ 0x8000000000000000;
            if (-1 < (long)uVar15) {
              uVar7 = 3;
            }
            if (uVar7 == 3) {
              if (uVar15 != 0) {
                uVar7 = puVar9[1];
LAB_100e31464:
                _free(uVar7);
              }
            }
            else if (uVar7 == 1) {
              uVar7 = puVar9[2];
              uVar15 = puVar9[3];
              if (uVar15 != 0) {
                puVar16 = (undefined8 *)(uVar7 + 8);
                do {
                  if (puVar16[-1] != 0) {
                    _free(*puVar16);
                  }
                  puVar16 = puVar16 + 3;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              if (puVar9[1] != 0) goto LAB_100e31464;
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 != lVar27);
        }
        if (lVar14 != 0) {
          _free(lVar20);
        }
      }
      puVar9 = (ulong *)plVar12[0xe];
      puVar11 = puVar9;
      for (lVar14 = plVar12[0xf]; lVar14 != 0; lVar14 = lVar14 + -1) {
        FUN_100e1d024(puVar11);
        puVar11 = puVar11 + 10;
      }
      if (plVar12[0xd] == 0) {
        return;
      }
      break;
    case 0x24:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] == -0x8000000000000000 || plVar12[7] == 0) {
        if (plVar12[10] == -0x8000000000000000) goto LAB_100e4b89c;
LAB_100e4b8cc:
        FUN_100e79780();
        uVar7 = plVar12[0xf];
      }
      else {
        _free(plVar12[8]);
        if (plVar12[10] != -0x8000000000000000) goto LAB_100e4b8cc;
LAB_100e4b89c:
        uVar7 = plVar12[0xf];
      }
      if ((uVar7 & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0x10];
      break;
    case 0x25:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      puVar9 = (ulong *)plVar12[8];
      puVar11 = puVar9;
      for (lVar14 = plVar12[9]; lVar14 != 0; lVar14 = lVar14 + -1) {
        FUN_100e4b8ec(puVar11);
        puVar11 = puVar11 + 0xd;
      }
      if (plVar12[7] == 0) {
        return;
      }
      break;
    case 0x26:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[10] == -0x8000000000000000 || plVar12[10] == 0) {
        lVar14 = plVar12[7];
      }
      else {
        _free(plVar12[0xb]);
        lVar14 = plVar12[7];
      }
      if (lVar14 != 0) {
        _free(plVar12[8]);
      }
      puVar11 = (ulong *)(plVar12 + 0xd);
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100de6690;
    case 0x27:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[0xd] == -0x8000000000000000 || plVar12[0xd] == 0) {
        lVar14 = plVar12[7];
      }
      else {
        _free(plVar12[0xe]);
        lVar14 = plVar12[7];
      }
      if (lVar14 != 0) {
        _free(plVar12[8]);
      }
      FUN_100de6690(plVar12 + 0x13);
      lVar14 = plVar12[0xb];
      lVar20 = plVar12[0xc];
      if (lVar20 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 0x10);
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 4;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (plVar12[10] != 0) {
        _free(lVar14);
      }
      if (plVar12[0x10] == -0x8000000000000000 || plVar12[0x10] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0x11];
      break;
    case 0x28:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[4] == -0x8000000000000000 || plVar12[4] == 0) {
        lVar14 = plVar12[1];
      }
      else {
        _free(plVar12[5]);
        lVar14 = plVar12[1];
      }
      if (lVar14 != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[7] != -0x8000000000000000 && plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar14 = plVar12[10];
      if (lVar14 != -0x8000000000000000) {
        if (plVar12[0x16] != -0x7ffffffffffffffb) {
          FUN_100de6690();
        }
        if (lVar14 != 0) {
          _free(plVar12[0xb]);
        }
        puVar11 = (ulong *)(plVar12 + 0xd);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
        goto code_r0x000100de6690;
      }
      if (plVar12[0x14] != -0x7ffffffffffffffb) {
        FUN_100de6690();
      }
      if (plVar12[0xb] != 0) {
        _free(plVar12[0xc]);
      }
      if (plVar12[0xe] != 0) {
        _free(plVar12[0xf]);
      }
      if (plVar12[0x11] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0x12];
      break;
    case 0x29:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      FUN_100cdf624(plVar12 + 0xd);
      if (plVar12[7] == -0x8000000000000000 || plVar12[7] == 0) {
        lVar14 = plVar12[10];
      }
      else {
        _free(plVar12[8]);
        lVar14 = plVar12[10];
      }
      if ((lVar14 == -0x8000000000000000) || (lVar14 == 0)) {
        return;
      }
      puVar9 = (ulong *)plVar12[0xb];
      break;
    case 0x2a:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[3] != 0) {
        _free(plVar12[4]);
      }
      if (plVar12[9] == -0x8000000000000000 || plVar12[9] == 0) {
        lVar14 = plVar12[6];
      }
      else {
        _free(plVar12[10]);
        lVar14 = plVar12[6];
      }
      if (lVar14 != 0) {
        _free(plVar12[7]);
      }
      if (plVar12[0xc] != -0x8000000000000000 && plVar12[0xc] != 0) {
        _free(plVar12[0xd]);
      }
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar15 = plVar12[0xf];
      uVar7 = uVar15 ^ 0x8000000000000000;
      if (-1 < (long)uVar15) {
        uVar7 = 4;
      }
      if ((long)uVar7 < 2) {
        if (uVar7 == 0) {
LAB_100e3165c:
          if (plVar12[0x10] != 0) {
            _free(plVar12[0x11]);
          }
          if (plVar12[0x13] == 0) {
            return;
          }
          puVar9 = (ulong *)plVar12[0x14];
          break;
        }
        if (uVar7 == 1) {
          if (plVar12[0x10] != 0) {
            _free(plVar12[0x11]);
          }
          lVar14 = plVar12[0x14];
          lVar20 = plVar12[0x15];
          if (lVar20 != 0) {
            puVar16 = (undefined8 *)(lVar14 + 8);
            do {
              if (puVar16[-1] != 0) {
                _free(*puVar16);
              }
              puVar16 = puVar16 + 3;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (plVar12[0x13] != 0) {
            _free(lVar14);
          }
          if (plVar12[0x16] == 0) {
            return;
          }
          puVar9 = (ulong *)plVar12[0x17];
          break;
        }
      }
      else {
        if (uVar7 == 2) {
          if (plVar12[0x10] != 0) {
            _free(plVar12[0x11]);
          }
          puVar9 = (ulong *)plVar12[0x14];
          lVar14 = plVar12[0x15];
          if (lVar14 != 0) {
            puVar11 = puVar9 + 1;
            do {
              if (puVar11[-1] != 0) {
                _free(*puVar11);
              }
              puVar11 = puVar11 + 3;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (plVar12[0x13] == 0) {
            return;
          }
          break;
        }
        if (uVar7 == 3) goto LAB_100e3165c;
        if (uVar7 == 4) {
          if (uVar15 != 0) {
            _free(plVar12[0x10]);
          }
          if (plVar12[0x12] != 0) {
            _free(plVar12[0x13]);
          }
          if ((plVar12[0x15] != -0x8000000000000000) && (plVar12[0x15] != 0)) {
            _free(plVar12[0x16]);
          }
          if ((plVar12[0x18] != -0x8000000000000000) && (plVar12[0x18] != 0)) {
            _free(plVar12[0x19]);
          }
          if (plVar12[0x1b] == -0x8000000000000000) {
            return;
          }
          if (plVar12[0x1b] == 0) {
            return;
          }
          puVar9 = (ulong *)plVar12[0x1c];
          break;
        }
      }
      if (plVar12[0x10] == -0x8000000000000000 || plVar12[0x10] == 0) {
        lVar14 = plVar12[0x13];
      }
      else {
        _free(plVar12[0x11]);
        lVar14 = plVar12[0x13];
      }
      if (lVar14 == -0x8000000000000000) {
        return;
      }
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
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
      puVar9 = (ulong *)plVar12[0x14];
      lVar14 = plVar12[0x15];
      puVar11 = puVar9;
      goto joined_r0x000100e797a0;
    case 0x2b:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] == -0x8000000000000000 || plVar12[4] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[5];
      break;
    case 0x2c:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] == -0x8000000000000000 || plVar12[4] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[5];
      break;
    case 0x2d:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      plVar12 = plVar12 + 7;
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100cdf624;
    case 0x2e:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      plVar12 = plVar12 + 4;
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
      goto code_r0x000100cdf624;
    case 0x2f:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      if (plVar12[10] != 0) {
        _free(plVar12[0xb]);
      }
      plVar12 = plVar12 + 0xd;
      uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
      uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
      uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
code_r0x000100cdf624:
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) = uVar19;
      *(undefined8 *)((long)register0x00000008 + -0x18) = uVar17;
      *(undefined8 *)((long)register0x00000008 + -0x10) = uVar21;
      *(undefined8 *)((long)register0x00000008 + -8) = uVar18;
      lVar14 = plVar12[1];
      if (lVar14 == 0) {
        return;
      }
      lVar20 = plVar12[3];
      if (lVar20 == 0) goto LAB_100cdf718;
      plVar22 = (long *)*plVar12;
      plVar23 = plVar22 + 1;
      lVar27 = *plVar22;
      uVar7 = CONCAT17(-(-1 < lVar27),
                       CONCAT16(-(-1 < (char)((ulong)lVar27 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar27 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar27 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar27 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar27 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar27 >> 8)),-(-1 < (char)lVar27)))))))) &
              0x8080808080808080;
      goto joined_r0x000100cdf69c;
    case 0x30:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 0x31:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[5];
      break;
    case 0x32:
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[4] == -0x8000000000000000 || plVar12[4] == 0) {
        puVar9 = (ulong *)plVar12[2];
        lVar14 = plVar12[3];
      }
      else {
        _free(plVar12[5]);
        puVar9 = (ulong *)plVar12[2];
        lVar14 = plVar12[3];
      }
      if (lVar14 != 0) {
        puVar11 = puVar9 + 1;
        do {
          if (puVar11[-1] != 0) {
            _free(*puVar11);
          }
          puVar11 = puVar11 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (plVar12[1] == 0) {
        return;
      }
      break;
    case 0x33:
      if ((plVar12[5] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[6];
      break;
    case 0x35:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      uVar15 = plVar12[4];
      uVar7 = uVar15 ^ 0x8000000000000000;
      if (-1 < (long)uVar15) {
        uVar7 = 2;
      }
      if (uVar7 != 0) {
        if ((uVar7 == 1) || (uVar7 != 2)) {
          if (plVar12[5] != 0) {
            lVar14 = 0x10;
            goto LAB_100e0cd78;
          }
        }
        else {
          if (uVar15 != 0) {
            _free(plVar12[5]);
          }
          if ((plVar12[7] & 0x7fffffffffffffffU) != 0) {
            lVar14 = 0x20;
LAB_100e0cd78:
            _free(*(undefined8 *)((long)(plVar12 + 4) + lVar14));
          }
        }
      }
      if (plVar12[1] == -0x8000000000000000 || plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    case 0x36:
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar14 = plVar12[1];
      if (lVar14 == -0x8000000000000000) {
        return;
      }
      lVar20 = plVar12[2];
      lVar27 = plVar12[3];
      if (lVar27 != 0) {
        puVar16 = (undefined8 *)(lVar20 + 0x20);
        do {
          if (puVar16[-4] != 0) {
            _free(puVar16[-3]);
          }
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          if (puVar16[2] != 0) {
            _free(puVar16[3]);
          }
          puVar16 = puVar16 + 0xb;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      if (lVar14 != 0) {
        _free(lVar20);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[8];
      break;
    case 0x37:
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      lVar14 = 2;
      if (1 < (ulong)plVar12[1]) {
        lVar14 = plVar12[1] - 2;
      }
      switch(lVar14) {
      case 0:
        if (plVar12[8] != -0x8000000000000000 && plVar12[8] != 0) {
          _free(plVar12[9]);
        }
        if (plVar12[2] != 0) {
          _free(plVar12[3]);
        }
        puVar9 = (ulong *)plVar12[6];
        lVar14 = plVar12[7];
        puVar11 = puVar9;
        goto joined_r0x000100e02a9c;
      case 1:
        if (plVar12[2] != 0) {
          _free(plVar12[3]);
        }
        lVar14 = plVar12[6];
        lVar20 = plVar12[7];
        if (lVar20 != 0) {
          puVar16 = (undefined8 *)(lVar14 + 8);
          do {
            if (puVar16[-1] != 0) {
              _free(*puVar16);
            }
            puVar16 = puVar16 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (plVar12[5] != 0) {
          _free(lVar14);
        }
        lVar14 = plVar12[8];
        if (lVar14 != -0x8000000000000000) {
          lVar20 = plVar12[9];
          lVar27 = plVar12[10];
          if (lVar27 != 0) {
            puVar16 = (undefined8 *)(lVar20 + 0x10);
            do {
              if (puVar16[-1] != 0) {
                _free(*puVar16);
              }
              puVar16 = puVar16 + 4;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          if (lVar14 != 0) {
            _free(lVar20);
          }
        }
        if (plVar12[0xb] == -0x8000000000000000 || plVar12[0xb] == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[0xc];
        goto code_r0x000108aa97c4;
      case 2:
        if (plVar12[0x12] != -0x8000000000000000 && plVar12[0x12] != 0) {
          _free(plVar12[0x13]);
        }
        if (plVar12[0x15] != -0x8000000000000000 && plVar12[0x15] != 0) {
          _free(plVar12[0x16]);
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
        lVar14 = plVar12[4];
        lVar20 = plVar12[5];
        if (lVar20 != 0) {
          puVar16 = (undefined8 *)(lVar14 + 8);
          do {
            if (puVar16[-1] != 0) {
              _free(*puVar16);
            }
            puVar16 = puVar16 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (plVar12[3] != 0) {
          _free(lVar14);
        }
        if (plVar12[6] == -0x8000000000000000 || plVar12[6] == 0) {
          lVar14 = plVar12[0xc];
        }
        else {
          _free(plVar12[7]);
          lVar14 = plVar12[0xc];
        }
        if (lVar14 != 0) {
          FUN_100cb56bc();
        }
        if ((plVar12[9] == -0x8000000000000000) || (plVar12[9] == 0)) {
          return;
        }
        puVar9 = (ulong *)plVar12[10];
        goto code_r0x000108aa97c4;
      case 3:
        if (plVar12[0xb] != -0x8000000000000000 && plVar12[0xb] != 0) {
          _free(plVar12[0xc]);
        }
        if (plVar12[2] != 0) {
          _free(plVar12[3]);
        }
        if ((plVar12[0xe] != -0x8000000000000000) && (plVar12[0xe] != 0)) {
          lVar14 = plVar12[0xf];
code_r0x000100e02f44:
          _free(lVar14);
        }
        break;
      case 4:
        if (plVar12[5] == -0x8000000000000000 || plVar12[5] == 0) {
          if (plVar12[8] == -0x8000000000000000 || plVar12[8] == 0) goto code_r0x000100e02b50;
code_r0x000100e02ecc:
          _free(plVar12[9]);
          lVar14 = plVar12[0xb];
        }
        else {
          _free(plVar12[6]);
          if (plVar12[8] != -0x8000000000000000 && plVar12[8] != 0) goto code_r0x000100e02ecc;
code_r0x000100e02b50:
          lVar14 = plVar12[0xb];
        }
        if ((lVar14 != -0x8000000000000000) && (lVar14 != 0)) {
          _free(plVar12[0xc]);
        }
        if (plVar12[2] != 0) {
          _free(plVar12[3]);
        }
        puVar11 = (ulong *)(plVar12 + 0xe);
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        unaff_x24 = *(long *)((long)register0x00000008 + -0x40);
        unaff_x23 = *(long *)((long)register0x00000008 + -0x38);
        goto code_r0x000100de6690;
      case 5:
        if (plVar12[7] != 0) {
          _free(plVar12[8]);
        }
        if (plVar12[2] == 0) goto code_r0x000100e02f78;
        puVar9 = (ulong *)plVar12[4];
        lVar14 = plVar12[5];
        puVar11 = puVar9;
        goto joined_r0x000100e02b98;
      case 6:
        if (plVar12[0xb] == -0x8000000000000000 || plVar12[0xb] == 0) {
          if (plVar12[0xe] == -0x8000000000000000 || plVar12[0xe] == 0) goto code_r0x000100e02d54;
code_r0x000100e02f30:
          _free(plVar12[0xf]);
          lVar14 = plVar12[2];
        }
        else {
          _free(plVar12[0xc]);
          if (plVar12[0xe] != -0x8000000000000000 && plVar12[0xe] != 0) goto code_r0x000100e02f30;
code_r0x000100e02d54:
          lVar14 = plVar12[2];
        }
        if (lVar14 != 0) {
          lVar14 = plVar12[3];
          goto code_r0x000100e02f44;
        }
        break;
      case 7:
        if (plVar12[7] != 0) {
          _free(plVar12[8]);
        }
        if (plVar12[10] == -0x8000000000000000 || plVar12[10] == 0) {
          lVar14 = plVar12[2];
        }
        else {
          _free(plVar12[0xb]);
          lVar14 = plVar12[2];
        }
        if (lVar14 != 0) {
          puVar9 = (ulong *)plVar12[4];
          lVar14 = plVar12[5];
          puVar11 = puVar9;
          goto joined_r0x000100e02d90;
        }
code_r0x000100e02f78:
        if (plVar12[3] == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[4];
        goto code_r0x000108aa97c4;
      case 8:
        if (plVar12[0xb] != -0x8000000000000000 && plVar12[0xb] != 0) {
          _free(plVar12[0xc]);
        }
        if (plVar12[2] != 0) {
          _free(plVar12[3]);
        }
        if (plVar12[5] != 0) {
          _free(plVar12[6]);
        }
        puVar9 = (ulong *)plVar12[9];
        lVar14 = plVar12[10] + 1;
        puVar11 = puVar9;
        while (lVar14 = lVar14 + -1, lVar14 != 0) {
          FUN_100de6690(puVar11);
          puVar11 = puVar11 + 9;
        }
        lVar14 = plVar12[8];
        goto joined_r0x000100e02e88;
      case 9:
        if (plVar12[9] == -0x8000000000000000 || plVar12[9] == 0) {
          if (plVar12[0xc] == -0x8000000000000000 || plVar12[0xc] == 0) goto code_r0x000100e02e14;
code_r0x000100e02fb4:
          _free(plVar12[0xd]);
          lVar14 = plVar12[2];
        }
        else {
          _free(plVar12[10]);
          if (plVar12[0xc] != -0x8000000000000000 && plVar12[0xc] != 0) goto code_r0x000100e02fb4;
code_r0x000100e02e14:
          lVar14 = plVar12[2];
        }
        if (lVar14 == 4) {
          return;
        }
        plVar22 = plVar12 + 2;
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        goto FUN_100e0c988;
      case 10:
        if (plVar12[2] != 0) {
          _free(plVar12[3]);
        }
        if (plVar12[5] != 0) {
          _free(plVar12[6]);
        }
        if (plVar12[0xb] != -0x8000000000000000 && plVar12[0xb] != 0) {
          lVar14 = plVar12[0xc];
          goto code_r0x000100e02f54;
        }
        goto code_r0x000100e02f58;
      case 0xb:
        if (plVar12[2] == 0) {
          return;
        }
        goto code_r0x000100e02bf8;
      default:
        return;
      case 0xd:
        if (plVar12[2] == -0x8000000000000000 || plVar12[2] == 0) {
          return;
        }
code_r0x000100e02bf8:
        puVar9 = (ulong *)plVar12[3];
        goto code_r0x000108aa97c4;
      }
      if (plVar12[5] != 0) {
        lVar14 = plVar12[6];
code_r0x000100e02f54:
        _free(lVar14);
      }
code_r0x000100e02f58:
      if (plVar12[8] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[9];
      break;
    case 0x38:
    case 0x39:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      puVar9 = (ulong *)(plVar12 + 4);
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      uVar7 = *puVar9 ^ 0x8000000000000000;
      if (-1 < (long)*puVar9) {
        uVar7 = 9;
      }
      switch(uVar7) {
      case 0:
        if (plVar12[5] != 0) {
          _free(plVar12[6]);
        }
        puVar9 = (ulong *)plVar12[9];
        puVar11 = puVar9;
        for (lVar14 = plVar12[10]; lVar14 != 0; lVar14 = lVar14 + -1) {
          FUN_100e06c08(puVar11);
          puVar11 = puVar11 + 7;
        }
code_r0x000100df5d10:
        if (plVar12[8] == 0) {
          return;
        }
        break;
      case 1:
        if (plVar12[5] != 0) {
          _free(plVar12[6]);
        }
        puVar9 = (ulong *)plVar12[9];
        lVar14 = plVar12[10];
        if (lVar14 != 0) {
          puVar11 = puVar9 + 4;
          do {
            if (puVar11[-4] != 0) {
              _free(puVar11[-3]);
            }
            if (puVar11[-1] != 0) {
              _free(*puVar11);
            }
            puVar11 = puVar11 + 6;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        goto code_r0x000100df5d10;
      case 2:
        if (plVar12[5] != 0) {
          _free(plVar12[6]);
        }
        lVar14 = plVar12[9];
        lVar20 = plVar12[10];
        if (lVar20 != 0) {
          puVar16 = (undefined8 *)(lVar14 + 8);
          do {
            if (puVar16[-1] != 0) {
              _free(*puVar16);
            }
            puVar16 = puVar16 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (plVar12[8] != 0) {
          _free(lVar14);
        }
        plVar12 = plVar12 + 0xb;
        if (*plVar12 == -0x8000000000000000) {
          return;
        }
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
code_r0x000100e24ac8:
        *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(undefined8 *)((long)register0x00000008 + -0x20) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x18) = uVar17;
        *(undefined8 *)((long)register0x00000008 + -0x10) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar18;
        lVar14 = plVar12[1];
        lVar20 = plVar12[2];
        if (lVar20 != 0) {
          puVar16 = (undefined8 *)(lVar14 + 0x20);
          do {
            if (puVar16[-4] != 0) {
              _free(puVar16[-3]);
            }
            if (puVar16[-1] != 0) {
              _free(*puVar16);
            }
            puVar16 = puVar16 + 7;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (*plVar12 != 0) {
          _free(lVar14);
        }
        puVar9 = (ulong *)plVar12[4];
        lVar14 = plVar12[5];
        if (lVar14 != 0) {
          puVar11 = puVar9 + 1;
          do {
            if (puVar11[-1] != 0) {
              _free(*puVar11);
            }
            puVar11 = puVar11 + 3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (plVar12[3] == 0) {
          return;
        }
        break;
      case 3:
      case 6:
        if (plVar12[5] != 0) {
          _free(plVar12[6]);
        }
        if (plVar12[8] == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[9];
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
        if (plVar12[5] != 0) {
          _free(plVar12[6]);
        }
        lVar14 = plVar12[9];
        lVar20 = plVar12[10];
        if (lVar20 != 0) {
          puVar16 = (undefined8 *)(lVar14 + 8);
          do {
            if (puVar16[-1] != 0) {
              _free(*puVar16);
            }
            puVar16 = puVar16 + 3;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        if (plVar12[8] != 0) {
          _free(lVar14);
        }
        puVar9 = (ulong *)plVar12[0xc];
        lVar14 = plVar12[0xd];
        if (lVar14 != 0) {
          puVar11 = puVar9 + 1;
          do {
            if (puVar11[-1] != 0) {
              _free(*puVar11);
            }
            puVar11 = puVar11 + 3;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (plVar12[0xb] == 0) {
          return;
        }
        break;
      case 5:
        if (plVar12[0xc] != 0) {
          _free(plVar12[0xd]);
        }
        if (plVar12[0xf] != 0) {
          _free(plVar12[0x10]);
        }
        plVar22 = plVar12 + 5;
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x10);
        uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x20);
        uVar17 = *(undefined8 *)((long)register0x00000008 + -0x18);
        unaff_x22 = *(long **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        goto FUN_100e0c988;
      case 7:
        plVar12 = plVar12 + 5;
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
        unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
        goto DAT_100e17134;
      case 8:
        if (plVar12[5] != 0) {
          _free(plVar12[6]);
        }
        FUN_100cdf624(plVar12 + 0xe);
        if (plVar12[8] == -0x8000000000000000 || plVar12[8] == 0) {
          lVar14 = plVar12[0xb];
        }
        else {
          _free(plVar12[9]);
          lVar14 = plVar12[0xb];
        }
        if (lVar14 == -0x8000000000000000) {
          return;
        }
        if (lVar14 == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[0xc];
        break;
      case 9:
        uVar21 = *(undefined8 *)((long)register0x00000008 + -0x30);
        uVar19 = *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x30) = uVar21;
        *(undefined8 *)((long)register0x00000008 + -0x28) = uVar19;
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        puVar25 = (undefined1 *)((long)register0x00000008 + -0x10);
        if (*puVar9 != 0) {
          _free(plVar12[5]);
        }
        if (plVar12[7] != 0) {
          _free(plVar12[8]);
        }
        if (plVar12[10] != 0) {
          _free(plVar12[0xb]);
        }
        FUN_100de6690(plVar12 + 0x2c);
        uVar18 = 0x8000000000000000;
        if ((plVar12[0xd] != -0x8000000000000000) && (plVar12[0xd] != 0)) {
          _free(plVar12[0xe]);
        }
        if ((plVar12[0x10] != -0x8000000000000000) && (plVar12[0x10] != 0)) {
          _free(plVar12[0x11]);
        }
        plVar22 = plVar12 + 0x13;
        if (*plVar22 != -0x8000000000000000) {
          puVar26 = &UNK_100e09988;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x30);
          goto SUB_100e00868;
        }
        if ((plVar12[0x29] & 0x7fffffffffffffffU) == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[0x2a];
        break;
      default:
        if (plVar12[5] == 0) {
          return;
        }
        puVar9 = (ulong *)plVar12[6];
      }
      break;
    case 0x3a:
    case 0x3b:
      if (plVar12[0x14] != -0x8000000000000000 && plVar12[0x14] != 0) {
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        _free(plVar12[0x15]);
        unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -8);
        unaff_x20 = *(long **)((long)register0x00000008 + -0x20);
        unaff_x19 = *(long **)((long)register0x00000008 + -0x18);
      }
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[5] != 0) {
        _free(plVar12[6]);
      }
      if (plVar12[8] != 0) {
        _free(plVar12[9]);
      }
      if (plVar12[0xe] == -0x8000000000000000 || plVar12[0xe] == 0) {
        puVar9 = (ulong *)plVar12[0xc];
        lVar14 = plVar12[0xd];
      }
      else {
        _free(plVar12[0xf]);
        puVar9 = (ulong *)plVar12[0xc];
        lVar14 = plVar12[0xd];
      }
      if (lVar14 != 0) {
        puVar11 = puVar9 + 1;
        do {
          if (puVar11[-1] != 0) {
            _free(*puVar11);
          }
          puVar11 = puVar11 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (plVar12[0xb] == 0) {
        return;
      }
      break;
    case 0x3c:
    case 0x3d:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      if (plVar12[10] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0xb];
      break;
    case 0x3e:
    case 0x3f:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] != 0) {
        _free(plVar12[8]);
      }
      if (plVar12[10] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[0xb];
      break;
    case 0x40:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] != 0) {
        _free(plVar12[5]);
      }
      if (plVar12[7] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[8];
      break;
    case 0x41:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[5] != 0) {
        _free(plVar12[6]);
      }
      if (plVar12[0xe] == -0x8000000000000000 || plVar12[0xe] == 0) {
        if (plVar12[0x11] == -0x8000000000000000 || plVar12[0x11] == 0) goto LAB_100e2de44;
LAB_100e2dec0:
        _free(plVar12[0x12]);
        lVar14 = plVar12[8];
      }
      else {
        _free(plVar12[0xf]);
        if (plVar12[0x11] != -0x8000000000000000 && plVar12[0x11] != 0) goto LAB_100e2dec0;
LAB_100e2de44:
        lVar14 = plVar12[8];
      }
      if (lVar14 != 0) {
        _free(plVar12[9]);
      }
      if (plVar12[0xb] != 0) {
        _free(plVar12[0xc]);
      }
      if (plVar12[1] == 3) {
        uVar7 = plVar12[2] & 0x7fffffffffffffff;
      }
      else {
        if (plVar12[1] != 4) {
          return;
        }
        uVar7 = plVar12[2];
      }
      if (uVar7 == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[3];
      break;
    case 0x42:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[5];
      break;
    case 0x43:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[5] != 0) {
        _free(plVar12[6]);
      }
      if (plVar12[0xb] == -0x8000000000000000 || plVar12[0xb] == 0) {
        if (plVar12[0xe] == -0x8000000000000000 || plVar12[0xe] == 0) goto LAB_100e41664;
LAB_100e416d0:
        _free(plVar12[0xf]);
        lVar14 = plVar12[8];
      }
      else {
        _free(plVar12[0xc]);
        if (plVar12[0xe] != -0x8000000000000000 && plVar12[0xe] != 0) goto LAB_100e416d0;
LAB_100e41664:
        lVar14 = plVar12[8];
      }
      if (lVar14 != 0) {
        _free(plVar12[9]);
      }
      if (plVar12[1] == 3) {
        uVar7 = plVar12[2] & 0x7fffffffffffffff;
      }
      else {
        if (plVar12[1] != 4) {
          return;
        }
        uVar7 = plVar12[2];
      }
      if (uVar7 == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[3];
      break;
    case 0x44:
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      lVar14 = plVar12[5];
      lVar20 = plVar12[6];
      if (lVar20 == 0) goto code_r0x000100e2afac;
      puVar16 = (undefined8 *)(lVar14 + 0x20);
      goto code_r0x000100e2af64;
    case 0x45:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      FUN_100e6ca64(plVar12 + 4);
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      lVar14 = plVar12[8];
      if (lVar14 == 0) {
        return;
      }
      lVar20 = plVar12[10];
      if (lVar20 == 0) goto LAB_100d1c730;
      plVar22 = (long *)plVar12[7];
      plVar23 = plVar22 + 1;
      lVar27 = *plVar22;
      uVar7 = CONCAT17(-(-1 < lVar27),
                       CONCAT16(-(-1 < (char)((ulong)lVar27 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar27 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar27 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar27 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar27 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar27 >> 8)),-(-1 < (char)lVar27)))))))) &
              0x8080808080808080;
      goto joined_r0x000100d1c6d4;
    case 0x46:
      if (plVar12[1] == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[2];
      break;
    default:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[5] != 0) {
        _free(plVar12[6]);
      }
      if (plVar12[8] == -0x8000000000000000 || plVar12[8] == 0) {
        if (plVar12[0xb] == -0x8000000000000000 || plVar12[0xb] == 0) goto LAB_100e1f094;
LAB_100e1f0d8:
        _free(plVar12[0xc]);
        lVar14 = plVar12[1];
        if (lVar14 == 3) goto LAB_100e1f0ec;
LAB_100e1f0a0:
        if (lVar14 != 4) {
          return;
        }
        uVar7 = plVar12[2];
      }
      else {
        _free(plVar12[9]);
        if (plVar12[0xb] != -0x8000000000000000 && plVar12[0xb] != 0) goto LAB_100e1f0d8;
LAB_100e1f094:
        lVar14 = plVar12[1];
        if (lVar14 != 3) goto LAB_100e1f0a0;
LAB_100e1f0ec:
        uVar7 = plVar12[2] & 0x7fffffffffffffff;
      }
      if (uVar7 == 0) {
        return;
      }
      puVar9 = (ulong *)plVar12[3];
      break;
    case 0x48:
      *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (plVar12[1] != 0) {
        _free(plVar12[2]);
      }
      if (plVar12[4] == -0x8000000000000000 || plVar12[4] == 0) {
        if (plVar12[7] == -0x8000000000000000 || plVar12[7] == 0) {
          return;
        }
      }
      else {
        _free(plVar12[5]);
        if (plVar12[7] == -0x8000000000000000 || plVar12[7] == 0) {
          return;
        }
      }
      puVar9 = (ulong *)plVar12[8];
    }
    goto code_r0x000108aa97c4;
  }
  if (bVar2 == 4) {
    if (*(char *)(param_1 + 0x70) == '\x03') {
      if ((((*(char *)(param_1 + 0x120) == '\x03') && (*(char *)(param_1 + 0x118) == '\x03')) &&
          (*(char *)(param_1 + 0x110) == '\x03')) && (*(char *)(param_1 + 200) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0xd0);
        if (*(long *)(param_1 + 0xd8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d09844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(param_1 + 0xd8) + 0x18))(*(undefined8 *)(param_1 + 0xe0));
          return;
        }
      }
      return;
    }
    if (*(char *)(param_1 + 0x70) != '\x04') {
      return;
    }
    if (((*(char *)(param_1 + 0xf0) == '\x03') && (*(char *)(param_1 + 0xe8) == '\x03')) &&
       (*(char *)(param_1 + 0xa0) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0xa8);
      if (*(long *)(param_1 + 0xb0) != 0) {
        (**(code **)(*(long *)(param_1 + 0xb0) + 0x18))(*(undefined8 *)(param_1 + 0xb8));
      }
    }
    puVar16 = (undefined8 *)(param_1 + 0x78);
    lVar14 = *(long *)*puVar16;
    *(long *)*puVar16 = lVar14 + -1;
    LORelease();
    if (lVar14 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    goto __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9e1be2aef8f89c1cE;
  }
  if (bVar2 != 5) {
    return;
  }
  if (*(char *)(param_1 + 0x6b8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x6b0) != '\x03') {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x129);
  if (bVar2 < 6) {
    if (bVar2 != 3) {
      if (bVar2 == 4) {
        if (*(char *)(param_1 + 0x178) == '\x03') {
          uVar21 = *(undefined8 *)(param_1 + 0x168);
          puVar16 = *(undefined8 **)(param_1 + 0x170);
          if ((code *)*puVar16 != (code *)0x0) {
            (*(code *)*puVar16)(uVar21);
          }
LAB_100d732ec:
          if (puVar16[1] != 0) {
            _free(uVar21);
          }
        }
        else if (*(char *)(param_1 + 0x178) == '\0') {
          FUN_100d99140(param_1 + 0x130);
        }
      }
      else {
        if (bVar2 != 5) {
          return;
        }
        FUN_100d07e80(param_1 + 0x130);
      }
      goto LAB_100d732fc;
    }
    FUN_100cd638c(param_1 + 0x130);
  }
  else {
    if (bVar2 == 6) {
      if (*(char *)(param_1 + 0x1b8) == '\0') {
        lVar14 = 0x98;
LAB_100d73288:
        FUN_100d99140(param_1 + 0x98 + lVar14);
      }
      else if (*(char *)(param_1 + 0x1b8) == '\x03') {
        if (*(char *)(param_1 + 0x1b0) == '\x03') {
          uVar21 = *(undefined8 *)(param_1 + 0x1a0);
          puVar16 = *(undefined8 **)(param_1 + 0x1a8);
          if ((code *)*puVar16 != (code *)0x0) {
            (*(code *)*puVar16)(uVar21);
          }
          goto LAB_100d732ec;
        }
        if (*(char *)(param_1 + 0x1b0) == '\0') {
          lVar14 = 0xd0;
          goto LAB_100d73288;
        }
      }
    }
    else if (bVar2 == 7) {
      if (*(char *)(param_1 + 0x191) == '\x03') {
        if (*(char *)(param_1 + 0x178) == '\x03') {
          uVar21 = *(undefined8 *)(param_1 + 0x168);
          puVar16 = *(undefined8 **)(param_1 + 0x170);
          pcVar5 = (code *)*puVar16;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar21);
          }
          if (puVar16[1] != 0) {
            _free(uVar21);
          }
        }
        else if (*(char *)(param_1 + 0x178) == '\0') {
          FUN_100d99140(param_1 + 0x130);
        }
        *(undefined1 *)(param_1 + 400) = 0;
      }
    }
    else {
      if (bVar2 != 8) {
        return;
      }
      FUN_100d07e80(param_1 + 0x130);
    }
LAB_100d732fc:
    if ((*(byte *)(param_1 + 0x128) & 1) != 0) {
      piVar1 = (int *)(param_1 + 0xd8);
      if (*(char *)(param_1 + 0x118) == '\x01') {
        if (*piVar1 == 4) {
          piVar8 = *(int **)(param_1 + 0xe0);
        }
        else {
          piVar8 = piVar1;
          if (*piVar1 == 3) {
            func_0x000108a079f0(&UNK_108ca1579,0x24,&UNK_10b209070);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100d73398);
            (*pcVar5)();
          }
        }
        __ZN113__LT_sqlx_sqlite__transaction__SqliteTransactionManager_u20_as_u20_sqlx_core__transaction__TransactionManager_GT_14start_rollback17h281f626b15aff32dE
                  (piVar8);
      }
      if (*piVar1 != 4) {
        func_0x000100c9f240(piVar1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x128) = 0;
  if (*(long *)(param_1 + 0xc0) == 0) {
    return;
  }
  puVar9 = *(ulong **)(param_1 + 200);
  goto code_r0x000108aa97c4;
joined_r0x000100d1c6d4:
  do {
    while (uVar7 == 0) {
      lVar27 = *plVar23;
      plVar22 = plVar22 + -0x30;
      plVar23 = plVar23 + 1;
      uVar7 = CONCAT17(-(-1 < lVar27),
                       CONCAT16(-(-1 < (char)((ulong)lVar27 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar27 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar27 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar27 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar27 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar27 >> 8)),-(-1 < (char)lVar27)))))))) &
              0x8080808080808080;
    }
    uVar15 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    iVar4 = (int)((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
    if (plVar22[(long)-iVar4 * 6 + -4] == 3) {
      uVar15 = plVar22[(long)-iVar4 * 6 + -3] & 0x7fffffffffffffff;
joined_r0x000100d1c728:
      if (uVar15 != 0) {
        _free(plVar22[(long)-iVar4 * 6 + -2]);
      }
    }
    else if (plVar22[(long)-iVar4 * 6 + -4] == 4) {
      uVar15 = plVar22[(long)-iVar4 * 6 + -3];
      goto joined_r0x000100d1c728;
    }
    uVar7 = uVar7 - 1 & uVar7;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
LAB_100d1c730:
  if (lVar14 * 0x31 == -0x39) {
    return;
  }
  puVar9 = (ulong *)(plVar12[7] + lVar14 * -0x30 + -0x30);
  goto code_r0x000108aa97c4;
code_r0x000100e2af64:
  do {
    if (puVar16[-4] == -0x8000000000000000 || puVar16[-4] == 0) {
      if (puVar16[-1] != -0x8000000000000000 && puVar16[-1] != 0) {
code_r0x000100e2afa0:
        _free(*puVar16);
      }
    }
    else {
      _free(puVar16[-3]);
      if (puVar16[-1] != -0x8000000000000000 && puVar16[-1] != 0) goto code_r0x000100e2afa0;
    }
    puVar16 = puVar16 + 8;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
code_r0x000100e2afac:
  if (plVar12[4] != 0) {
    _free(lVar14);
  }
  if (plVar12[7] == 0) {
    return;
  }
  puVar9 = (ulong *)plVar12[8];
  goto code_r0x000108aa97c4;
joined_r0x000100e02d90:
  if (lVar14 == 0) goto code_r0x000100e02de4;
  uVar15 = *puVar11;
  uVar7 = uVar15 ^ 0x8000000000000000;
  if (-1 < (long)uVar15) {
    uVar7 = 1;
  }
  if ((uVar7 == 0) || (uVar7 != 1)) {
    if (puVar11[1] != 0) {
      lVar20 = 0x10;
      goto code_r0x000100e02da4;
    }
  }
  else if (uVar15 != 0) {
    lVar20 = 8;
code_r0x000100e02da4:
    _free(*(undefined8 *)((long)puVar11 + lVar20));
  }
  puVar11 = puVar11 + 4;
  lVar14 = lVar14 + -1;
  goto joined_r0x000100e02d90;
joined_r0x000100e02b98:
  if (lVar14 == 0) goto code_r0x000100e02de4;
  uVar15 = *puVar11;
  uVar7 = uVar15 ^ 0x8000000000000000;
  if (-1 < (long)uVar15) {
    uVar7 = 1;
  }
  if ((uVar7 == 0) || (uVar7 != 1)) {
    if (puVar11[1] != 0) {
      lVar20 = 0x10;
      goto code_r0x000100e02ba4;
    }
  }
  else if (uVar15 != 0) {
    lVar20 = 8;
code_r0x000100e02ba4:
    _free(*(undefined8 *)((long)puVar11 + lVar20));
  }
  puVar11 = puVar11 + 4;
  lVar14 = lVar14 + -1;
  goto joined_r0x000100e02b98;
code_r0x000100e02de4:
  lVar14 = plVar12[3];
  goto joined_r0x000100e02e88;
joined_r0x000100e02a9c:
  if (lVar14 == 0) goto code_r0x000100e02c48;
  uVar15 = *puVar11;
  uVar7 = uVar15 ^ 0x8000000000000000;
  if (-1 < (long)uVar15) {
    uVar7 = 1;
  }
  if ((uVar7 == 0) || (uVar7 != 1)) {
    if (puVar11[1] != 0) {
      lVar20 = 0x10;
      goto code_r0x000100e02ab0;
    }
  }
  else if (uVar15 != 0) {
    lVar20 = 8;
code_r0x000100e02ab0:
    _free(*(undefined8 *)((long)puVar11 + lVar20));
  }
  puVar11 = puVar11 + 4;
  lVar14 = lVar14 + -1;
  goto joined_r0x000100e02a9c;
code_r0x000100e02c48:
  lVar14 = plVar12[5];
joined_r0x000100e02e88:
  if (lVar14 == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
joined_r0x000100e797a0:
  if (lVar14 == 0) goto LAB_100e79848;
  uVar7 = *puVar11;
  lVar20 = uVar7 + 0x7ffffffffffffffb;
  if (uVar7 < 0x8000000000000005) {
    lVar20 = 2;
  }
  if ((lVar20 == 0) || (lVar20 == 1)) {
    uVar7 = puVar11[1];
joined_r0x000100e797c0:
    if (uVar7 != 0) {
      lVar20 = 0x10;
LAB_100e797c8:
      _free(*(undefined8 *)((long)puVar11 + lVar20));
    }
  }
  else {
    uVar15 = uVar7 ^ 0x8000000000000000;
    if (-1 < (long)uVar7) {
      uVar15 = 5;
    }
    if (uVar15 < 5) {
      if (uVar15 == 2) {
        uVar7 = puVar11[1] & 0x7fffffffffffffff;
        goto joined_r0x000100e797c0;
      }
    }
    else {
      if (uVar7 != 0) {
        _free(puVar11[1]);
      }
      if ((puVar11[3] & 0x7fffffffffffffff) != 0) {
        lVar20 = 0x20;
        goto LAB_100e797c8;
      }
    }
  }
  puVar11 = puVar11 + 7;
  lVar14 = lVar14 + -1;
  goto joined_r0x000100e797a0;
LAB_100e79848:
  if (plVar12[0x13] == 0) {
    return;
  }
  goto code_r0x000108aa97c4;
code_r0x000100dfc85c:
  if (plVar12[1] == 0) {
code_r0x000100dfc770:
    return;
  }
  puVar9 = (ulong *)plVar12[2];
  goto code_r0x000108aa97c4;
joined_r0x000100cdf69c:
  do {
    while (uVar7 == 0) {
      lVar27 = *plVar23;
      plVar22 = plVar22 + -0x48;
      plVar23 = plVar23 + 1;
      uVar7 = CONCAT17(-(-1 < lVar27),
                       CONCAT16(-(-1 < (char)((ulong)lVar27 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar27 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar27 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar27 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar27 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar27 >> 8)),-(-1 < (char)lVar27)))))))) &
              0x8080808080808080;
    }
    uVar15 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    iVar4 = (int)((ulong)LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) >> 3);
    if (plVar22[(long)-iVar4 * 9 + -9] != 0) {
      _free(plVar22[(long)-iVar4 * 9 + -8]);
    }
    uVar13 = plVar22[(long)-iVar4 * 9 + -6];
    uVar15 = uVar13 ^ 0x8000000000000000;
    if (-1 < (long)uVar13) {
      uVar15 = 2;
    }
    if ((uVar15 == 0) || (uVar15 == 1)) {
      if (plVar22[(long)-iVar4 * 9 + -5] != 0) {
        lVar27 = 0x10;
        goto LAB_100cdf684;
      }
    }
    else {
      if (uVar13 != 0) {
        _free(plVar22[(long)-iVar4 * 9 + -5]);
      }
      if ((plVar22[(long)-iVar4 * 9 + -3] & 0x7fffffffffffffffU) != 0) {
        lVar27 = 0x20;
LAB_100cdf684:
        _free(*(undefined8 *)((long)(plVar22 + (long)-iVar4 * 9 + -6) + lVar27));
      }
    }
    uVar7 = uVar7 - 1 & uVar7;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
LAB_100cdf718:
  if (lVar14 * 0x49 == -0x51) {
    return;
  }
  puVar9 = (ulong *)(*plVar12 + lVar14 * -0x48 + -0x48);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar9);
  return;
}

