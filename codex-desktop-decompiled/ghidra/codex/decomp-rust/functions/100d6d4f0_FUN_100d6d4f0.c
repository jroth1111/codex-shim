
/* WARNING: Type propagation algorithm not settling */

void FUN_100d6d4f0(ulong *param_1)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  bVar1 = *(byte *)((long)param_1 + 0x2a1);
  if (bVar1 < 5) {
    if (bVar1 != 3) {
      if (bVar1 != 4) {
        return;
      }
      if ((char)param_1[0x376] == '\x03') {
        FUN_100d1ddbc(param_1 + 0x58);
      }
      goto LAB_100d6d58c;
    }
    func_0x000100d50dec(param_1 + 0x55);
  }
  else {
    if (bVar1 == 5) {
      FUN_100d4e420(param_1 + 0x55);
    }
    else {
      if (bVar1 != 6) {
        return;
      }
      if (((char)param_1[0x151] == '\x03') && ((char)param_1[0x150] == '\x03')) {
        FUN_100c97ff8(param_1 + 0x57);
      }
    }
LAB_100d6d58c:
    if ((param_1[0x54] & 1) != 0) {
      FUN_100df5b9c(param_1 + 0x18);
    }
    *(undefined1 *)(param_1 + 0x54) = 0;
  }
  lVar6 = 2;
  if (1 < *param_1) {
    lVar6 = *param_1 - 2;
  }
  switch(lVar6) {
  case 0:
    if (param_1[7] != 0x8000000000000000 && param_1[7] != 0) {
      _free(param_1[8]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    puVar4 = (ulong *)param_1[5];
    puVar2 = puVar4;
    for (uVar3 = param_1[6]; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar5 = *puVar2;
      uVar7 = uVar5 ^ 0x8000000000000000;
      if (-1 < (long)uVar5) {
        uVar7 = 1;
      }
      if ((uVar7 == 0) || (uVar7 != 1)) {
        if (puVar2[1] != 0) {
          lVar6 = 0x10;
          goto code_r0x000100e02ab0;
        }
      }
      else if (uVar5 != 0) {
        lVar6 = 8;
code_r0x000100e02ab0:
        _free(*(undefined8 *)((long)puVar2 + lVar6));
      }
      puVar2 = puVar2 + 4;
    }
    uVar3 = param_1[4];
    goto joined_r0x000100e02e88;
  case 1:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar3 = param_1[5];
    uVar7 = param_1[6];
    if (uVar7 != 0) {
      puVar8 = (undefined8 *)(uVar3 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (param_1[4] != 0) {
      _free(uVar3);
    }
    uVar3 = param_1[7];
    if (uVar3 != 0x8000000000000000) {
      uVar7 = param_1[8];
      uVar5 = param_1[9];
      if (uVar5 != 0) {
        puVar8 = (undefined8 *)(uVar7 + 0x10);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar3 != 0) {
        _free(uVar7);
      }
    }
    if (param_1[10] == 0x8000000000000000 || param_1[10] == 0) {
      return;
    }
    puVar4 = (ulong *)param_1[0xb];
    break;
  case 2:
    if (param_1[0x11] != 0x8000000000000000 && param_1[0x11] != 0) {
      _free(param_1[0x12]);
    }
    if (param_1[0x14] != 0x8000000000000000 && param_1[0x14] != 0) {
      _free(param_1[0x15]);
    }
    uVar3 = param_1[3];
    uVar7 = param_1[4];
    if (uVar7 != 0) {
      puVar8 = (undefined8 *)(uVar3 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (param_1[2] != 0) {
      _free(uVar3);
    }
    if (param_1[5] == 0x8000000000000000 || param_1[5] == 0) {
      uVar3 = param_1[0xb];
    }
    else {
      _free(param_1[6]);
      uVar3 = param_1[0xb];
    }
    if (uVar3 != 0) {
      FUN_100cb56bc();
    }
    if ((param_1[8] == 0x8000000000000000) || (param_1[8] == 0)) {
      return;
    }
    puVar4 = (ulong *)param_1[9];
    break;
  case 3:
    if (param_1[10] != 0x8000000000000000 && param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((param_1[0xd] != 0x8000000000000000) && (param_1[0xd] != 0)) {
      uVar3 = param_1[0xe];
code_r0x000100e02f44:
      _free(uVar3);
    }
    goto code_r0x000100e02f48;
  case 4:
    if (param_1[4] == 0x8000000000000000 || param_1[4] == 0) {
      if (param_1[7] == 0x8000000000000000 || param_1[7] == 0) goto code_r0x000100e02b50;
code_r0x000100e02ecc:
      _free(param_1[8]);
      uVar3 = param_1[10];
    }
    else {
      _free(param_1[5]);
      if (param_1[7] != 0x8000000000000000 && param_1[7] != 0) goto code_r0x000100e02ecc;
code_r0x000100e02b50:
      uVar3 = param_1[10];
    }
    if ((uVar3 != 0x8000000000000000) && (uVar3 != 0)) {
      _free(param_1[0xb]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar7 = param_1[0xd];
    uVar3 = uVar7 ^ 0x8000000000000000;
    if (-1 < (long)uVar7) {
      uVar3 = 5;
    }
    if (uVar3 < 3) {
      return;
    }
    if (uVar3 == 3) {
      if (param_1[0xe] == 0) {
        return;
      }
      puVar4 = (ulong *)param_1[0xf];
    }
    else if (uVar3 == 4) {
      puVar4 = (ulong *)param_1[0xf];
      lVar6 = param_1[0x10] + 1;
      puVar2 = puVar4;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
        FUN_100de6690(puVar2);
        puVar2 = puVar2 + 9;
      }
      if (param_1[0xe] == 0) {
        return;
      }
    }
    else {
      uVar3 = param_1[0x11];
      if ((uVar3 != 0) && (uVar3 * 9 != -0x11)) {
        _free(param_1[0x10] + uVar3 * -8 + -8);
      }
      puVar4 = (ulong *)param_1[0xe];
      lVar6 = param_1[0xf] + 1;
      puVar2 = puVar4;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
        if (*puVar2 != 0) {
          _free(puVar2[1]);
        }
        FUN_100de6690(puVar2 + 3);
        puVar2 = puVar2 + 0xd;
      }
      if (param_1[0xd] == 0) {
        return;
      }
    }
    break;
  case 5:
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    if (param_1[1] == 0) {
code_r0x000100e02f78:
      if (param_1[2] == 0) {
        return;
      }
      puVar4 = (ulong *)param_1[3];
      break;
    }
    puVar4 = (ulong *)param_1[3];
    puVar2 = puVar4;
    for (uVar3 = param_1[4]; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar5 = *puVar2;
      uVar7 = uVar5 ^ 0x8000000000000000;
      if (-1 < (long)uVar5) {
        uVar7 = 1;
      }
      if ((uVar7 == 0) || (uVar7 != 1)) {
        if (puVar2[1] != 0) {
          lVar6 = 0x10;
          goto code_r0x000100e02ba4;
        }
      }
      else if (uVar5 != 0) {
        lVar6 = 8;
code_r0x000100e02ba4:
        _free(*(undefined8 *)((long)puVar2 + lVar6));
      }
      puVar2 = puVar2 + 4;
    }
    goto code_r0x000100e02de4;
  case 6:
    if (param_1[10] == 0x8000000000000000 || param_1[10] == 0) {
      if (param_1[0xd] == 0x8000000000000000 || param_1[0xd] == 0) goto code_r0x000100e02d54;
code_r0x000100e02f30:
      _free(param_1[0xe]);
      uVar3 = param_1[1];
    }
    else {
      _free(param_1[0xb]);
      if (param_1[0xd] != 0x8000000000000000 && param_1[0xd] != 0) goto code_r0x000100e02f30;
code_r0x000100e02d54:
      uVar3 = param_1[1];
    }
    if (uVar3 != 0) {
      uVar3 = param_1[2];
      goto code_r0x000100e02f44;
    }
code_r0x000100e02f48:
    if (param_1[4] != 0) {
      uVar3 = param_1[5];
code_r0x000100e02f54:
      _free(uVar3);
    }
code_r0x000100e02f58:
    if (param_1[7] == 0) {
      return;
    }
    puVar4 = (ulong *)param_1[8];
    break;
  case 7:
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    if (param_1[9] == 0x8000000000000000 || param_1[9] == 0) {
      uVar3 = param_1[1];
    }
    else {
      _free(param_1[10]);
      uVar3 = param_1[1];
    }
    if (uVar3 == 0) goto code_r0x000100e02f78;
    puVar4 = (ulong *)param_1[3];
    puVar2 = puVar4;
    for (uVar3 = param_1[4]; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar5 = *puVar2;
      uVar7 = uVar5 ^ 0x8000000000000000;
      if (-1 < (long)uVar5) {
        uVar7 = 1;
      }
      if ((uVar7 == 0) || (uVar7 != 1)) {
        if (puVar2[1] != 0) {
          lVar6 = 0x10;
          goto code_r0x000100e02da4;
        }
      }
      else if (uVar5 != 0) {
        lVar6 = 8;
code_r0x000100e02da4:
        _free(*(undefined8 *)((long)puVar2 + lVar6));
      }
      puVar2 = puVar2 + 4;
    }
code_r0x000100e02de4:
    uVar3 = param_1[2];
    goto joined_r0x000100e02e88;
  case 8:
    if (param_1[10] != 0x8000000000000000 && param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    puVar4 = (ulong *)param_1[8];
    lVar6 = param_1[9] + 1;
    puVar2 = puVar4;
    while (lVar6 = lVar6 + -1, lVar6 != 0) {
      FUN_100de6690(puVar2);
      puVar2 = puVar2 + 9;
    }
    uVar3 = param_1[7];
joined_r0x000100e02e88:
    if (uVar3 == 0) {
LAB_100e02fc8:
      return;
    }
    break;
  case 9:
    if (param_1[8] == 0x8000000000000000 || param_1[8] == 0) {
      if (param_1[0xb] == 0x8000000000000000 || param_1[0xb] == 0) goto code_r0x000100e02e14;
code_r0x000100e02fb4:
      _free(param_1[0xc]);
      uVar3 = param_1[1];
    }
    else {
      _free(param_1[9]);
      if (param_1[0xb] != 0x8000000000000000 && param_1[0xb] != 0) goto code_r0x000100e02fb4;
code_r0x000100e02e14:
      uVar3 = param_1[1];
    }
    if (uVar3 == 4) {
      return;
    }
    uVar3 = param_1[1];
    if (1 < (long)uVar3) {
      if (uVar3 == 2) {
        if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
          uVar3 = param_1[5];
        }
        else {
          _free(param_1[3]);
          uVar3 = param_1[5];
        }
        if ((uVar3 & 0x7fffffffffffffff) != 0) {
          puVar4 = (ulong *)param_1[6];
          break;
        }
      }
      return;
    }
    if (uVar3 == 0) {
      if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
        uVar3 = param_1[5];
      }
      else {
        _free(param_1[3]);
        uVar3 = param_1[5];
      }
      if (uVar3 == 0x8000000000000000) {
        return;
      }
      puVar4 = (ulong *)param_1[6];
      uVar7 = param_1[7];
      if (uVar7 != 0) {
        puVar2 = puVar4 + 1;
        do {
          if (puVar2[-1] != 0) {
            _free(*puVar2);
          }
          puVar2 = puVar2 + 3;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if (uVar3 == 0) {
        return;
      }
    }
    else {
      if ((param_1[2] & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar4 = (ulong *)param_1[3];
    }
    break;
  case 10:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[10] != 0x8000000000000000 && param_1[10] != 0) {
      uVar3 = param_1[0xb];
      goto code_r0x000100e02f54;
    }
    goto code_r0x000100e02f58;
  case 0xb:
    if (param_1[1] == 0) {
      return;
    }
    goto code_r0x000100e02bf8;
  default:
    goto LAB_100e02fc8;
  case 0xd:
    if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
      return;
    }
code_r0x000100e02bf8:
    puVar4 = (ulong *)param_1[2];
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar4);
  return;
}

