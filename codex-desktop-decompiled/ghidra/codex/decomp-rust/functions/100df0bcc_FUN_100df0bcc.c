
void FUN_100df0bcc(long *param_1)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      return;
    }
    bVar1 = *(byte *)(param_1 + 0xae);
    if (bVar1 < 4) {
      if (bVar1 == 0) {
        if ((param_1[5] & 0x7fffffffffffffffU) == 0) {
          return;
        }
        plVar5 = (long *)param_1[6];
        goto code_r0x000108aa97c4;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_100ca52a0(param_1 + 0xb0);
    }
    else {
      if (bVar1 == 4) {
        if ((char)param_1[0xb6] == '\x03') {
          lVar8 = param_1[0xb4];
          puVar9 = (undefined8 *)param_1[0xb5];
          pcVar2 = (code *)*puVar9;
          if (pcVar2 != (code *)0x0) {
            (*pcVar2)(lVar8);
          }
          if (puVar9[1] != 0) {
            _free(lVar8);
          }
        }
      }
      else {
        if (bVar1 != 5) {
          return;
        }
        FUN_100d5c898(param_1 + 0xe6);
        if ((param_1[0xd3] != -0x8000000000000000) &&
           (FUN_100e502dc(param_1 + 0xd3), param_1[0xe3] != 0)) {
          _free(param_1[0xe4]);
        }
        FUN_100cd34e8(param_1 + 0xb0);
      }
      if ((*(byte *)((long)param_1 + 0x572) & 1) != 0) {
        FUN_100def764(param_1 + 0xa2);
      }
      *(undefined1 *)((long)param_1 + 0x572) = 0;
      FUN_100dfc150(param_1 + 0x86);
      *(undefined1 *)((long)param_1 + 0x577) = 0;
      if ((param_1[0x83] != -0x8000000000000000) && (param_1[0x83] != 0)) {
        _free(param_1[0x84]);
      }
      if ((param_1[0x80] != -0x8000000000000000) && (param_1[0x80] != 0)) {
        _free(param_1[0x81]);
      }
      *(undefined1 *)(param_1 + 0xaf) = 0;
      lVar7 = param_1[0x7e];
      lVar8 = param_1[0x7f] + 1;
      lVar6 = lVar7;
      while (lVar8 = lVar8 + -1, lVar8 != 0) {
        FUN_100e02a24(lVar6);
        lVar6 = lVar6 + 0xc0;
      }
      if (param_1[0x7d] != 0) {
        _free(lVar7);
      }
      if (param_1[0x7a] != 0) {
        _free(param_1[0x7b]);
      }
      if (param_1[0x77] != 0) {
        _free(param_1[0x78]);
      }
      if (param_1[0x56] != 0) {
        _free(param_1[0x57]);
      }
      lVar6 = param_1[0x5a];
      lVar8 = param_1[0x5b];
      if (lVar8 != 0) {
        puVar9 = (undefined8 *)(lVar6 + 8);
        do {
          if (puVar9[-1] != 0) {
            _free(*puVar9);
          }
          puVar9 = puVar9 + 3;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (param_1[0x59] != 0) {
        _free(lVar6);
      }
      if (param_1[0x70] != 0) {
        FUN_100cb56bc(param_1 + 0x70);
      }
      *(undefined4 *)((long)param_1 + 0x57c) = 0;
      *(undefined4 *)((long)param_1 + 0x579) = 0;
      if ((*(byte *)((long)param_1 + 0x573) & 1) != 0) {
        lVar8 = *(long *)param_1[0xb1];
        *(long *)param_1[0xb1] = lVar8 + -1;
        LORelease();
        if (lVar8 == 1) {
          DataMemoryBarrier(2,1);
          func_0x0001046b10a8(param_1 + 0xb1);
        }
      }
      *(undefined1 *)((long)param_1 + 0x573) = 0;
      if ((*(byte *)((long)param_1 + 0x574) & 1) != 0) {
        lVar8 = *(long *)param_1[0xb0];
        *(long *)param_1[0xb0] = lVar8 + -1;
        LORelease();
        if (lVar8 == 1) {
          DataMemoryBarrier(2,1);
          func_0x000105c30fe4(param_1 + 0xb0);
        }
      }
      *(undefined1 *)((long)param_1 + 0x574) = 0;
      if (param_1[0x35] != -0x7ffffffffffffffd) {
        FUN_100e0609c(param_1 + 0x35);
      }
      if ((*(byte *)((long)param_1 + 0x576) & 1) != 0) {
        if (param_1[0x23] != 0) {
          _free(param_1[0x24]);
        }
        if (param_1[0x26] != 0) {
          _free(param_1[0x27]);
        }
        if (param_1[0x2f] != 0) {
          FUN_100cb56bc(param_1 + 0x2f);
        }
        FUN_100def764(param_1 + 0x17);
      }
      if ((*(byte *)((long)param_1 + 0x575) & 1) != 0) {
        lVar8 = *(long *)param_1[0x48];
        *(long *)param_1[0x48] = lVar8 + -1;
        LORelease();
        if (lVar8 == 1) {
          DataMemoryBarrier(2,1);
          func_0x0001046b10a8(param_1 + 0x48);
        }
      }
    }
    *(undefined2 *)((long)param_1 + 0x575) = 0;
    if ((((*(byte *)((long)param_1 + 0x571) & 1) != 0) && (param_1[0x11] != -0x8000000000000000)) &&
       (param_1[0x11] != 0)) {
      _free(param_1[0x12]);
    }
    *(undefined1 *)((long)param_1 + 0x571) = 0;
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if ((char)param_1[0x29] == '\x03') {
    if ((((char)param_1[0x28] == '\x03') && ((char)param_1[0x27] == '\x03')) &&
       (((char)param_1[0x26] == '\x03' && ((char)param_1[0x1d] == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x1e);
      if (param_1[0x1f] != 0) {
        (**(code **)(param_1[0x1f] + 0x18))(param_1[0x20]);
      }
    }
  }
  else if ((char)param_1[0x29] != '\0') {
    return;
  }
  uVar3 = param_1[1];
  uVar4 = uVar3 ^ 0x8000000000000000;
  if (-1 < (long)uVar3) {
    uVar4 = 10;
  }
  switch(uVar4) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x18:
    break;
  case 1:
  case 0xb:
  case 0xf:
  case 0x19:
  case 0x1a:
  case 0x1b:
    if (param_1[2] == 0) {
      return;
    }
    goto code_r0x000100df5794;
  case 10:
    if (uVar3 != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != -0x8000000000000000 && param_1[4] != 0) {
      _free(param_1[5]);
    }
    if ((param_1[7] != -0x8000000000000000) && (param_1[7] != 0)) {
      _free(param_1[8]);
    }
    if ((param_1[10] != -0x8000000000000000) && (param_1[10] != 0)) {
      _free(param_1[0xb]);
    }
    if ((param_1[0xd] != -0x8000000000000000) && (param_1[0xd] != 0)) {
      _free(param_1[0xe]);
    }
    if ((param_1[0x10] & 0x7fffffffffffffffU) != 0) {
      plVar5 = (long *)param_1[0x11];
      goto code_r0x000108aa97c4;
    }
    break;
  case 0xd:
    if (-0x7fffffffffffffff < param_1[5] && param_1[5] != 0) {
      _free(param_1[6]);
    }
    lVar8 = param_1[8];
    if (lVar8 != 0) {
      if (*(long *)(lVar8 + 0x50) != -0x8000000000000000 && *(long *)(lVar8 + 0x50) != 0) {
        _free(*(undefined8 *)(lVar8 + 0x58));
      }
      if (*(long *)(lVar8 + 0x68) != -0x8000000000000000 && *(long *)(lVar8 + 0x68) != 0) {
        _free(*(undefined8 *)(lVar8 + 0x70));
      }
      if (-0x7fffffffffffffff < *(long *)(lVar8 + 0x80) && *(long *)(lVar8 + 0x80) != 0) {
        _free(*(undefined8 *)(lVar8 + 0x88));
      }
      _free(lVar8);
    }
  case 0x15:
    if ((param_1[2] & 0x7fffffffffffffffU) != 0) {
code_r0x000100df5794:
      plVar5 = (long *)param_1[3];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar5);
      return;
    }
    break;
  case 0x10:
    lVar8 = param_1[5];
    FUN_100de20f8(lVar8);
    _free(lVar8);
    if ((param_1[2] & 0x7fffffffffffffffU) != 0) {
      plVar5 = (long *)param_1[3];
      goto code_r0x000108aa97c4;
    }
    break;
  case 0x11:
    plVar5 = (long *)param_1[2];
    FUN_100de20f8(plVar5);
    goto code_r0x000108aa97c4;
  case 0x17:
    uVar4 = param_1[2];
    lVar8 = 0;
    if (0x8000000000000000 < uVar4) {
      lVar8 = uVar4 + 0x7fffffffffffffff;
    }
    if (lVar8 == 1) {
      plVar5 = (long *)param_1[3];
      if (*plVar5 != 0) {
        _free(plVar5[1]);
      }
      if (plVar5[4] != 0) {
        _free(plVar5[5]);
      }
      if (plVar5[8] != 0) {
        _free(plVar5[9]);
      }
      goto code_r0x000108aa97c4;
    }
    if (lVar8 == 0) {
      plVar5 = (long *)param_1[9];
      if (*plVar5 != 0) {
        _free(plVar5[1]);
      }
      if (plVar5[4] != 0) {
        _free(plVar5[5]);
      }
      if (plVar5[8] != 0) {
        _free(plVar5[9]);
      }
      _free(plVar5);
      if (uVar4 != 0x8000000000000001) {
        if ((uVar4 != 0x8000000000000000) && (uVar4 != 0)) {
          _free(param_1[3]);
        }
        if ((param_1[5] & 0x7fffffffffffffffU) != 0) {
          plVar5 = (long *)param_1[6];
          goto code_r0x000108aa97c4;
        }
      }
    }
    break;
  case 0x1c:
    uVar4 = param_1[2];
    if ((uVar4 & 3) == 1) {
      plVar5 = (long *)(uVar4 - 1);
      lVar8 = *plVar5;
      puVar9 = *(undefined8 **)(uVar4 + 7);
      pcVar2 = (code *)*puVar9;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(lVar8);
      }
      if (puVar9[1] != 0) {
        _free(lVar8);
      }
      goto code_r0x000108aa97c4;
    }
    break;
  case 0x1d:
    plVar5 = (long *)param_1[2];
    if (*plVar5 == 1) {
      FUN_100de21d4(plVar5 + 1);
    }
    else if ((*plVar5 == 0) && (plVar5[2] != 0)) {
      _free(plVar5[1]);
    }
    goto code_r0x000108aa97c4;
  case 0x1e:
    plVar5 = (long *)param_1[3];
    if (plVar5 != (long *)0x0) {
      puVar9 = (undefined8 *)param_1[4];
      pcVar2 = (code *)*puVar9;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(plVar5);
      }
      if (puVar9[1] != 0) goto code_r0x000108aa97c4;
    }
    break;
  default:
    if (param_1[2] != 0) {
      _free(param_1[3]);
    }
    if ((param_1[5] & 0x7fffffffffffffffU) != 0) {
      plVar5 = (long *)param_1[6];
      goto code_r0x000108aa97c4;
    }
  }
  return;
}

