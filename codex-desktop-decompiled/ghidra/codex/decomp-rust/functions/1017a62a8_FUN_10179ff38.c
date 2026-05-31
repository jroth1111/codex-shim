
/* WARNING: Type propagation algorithm not settling */

void FUN_10179ff38(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  
  if (*param_1 == 0x11) {
    puVar5 = (ulong *)param_1[1];
    FUN_1017a4f34(puVar5);
    goto code_r0x000108aa97c4;
  }
  lVar3 = 2;
  if (1 < *param_1) {
    lVar3 = *param_1 - 2;
  }
  switch(lVar3) {
  case 0:
    if (param_1[7] != 0x8000000000000000 && param_1[7] != 0) {
      _free(param_1[8]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    puVar5 = (ulong *)param_1[5];
    puVar6 = puVar5;
    for (uVar1 = param_1[6]; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = *puVar6;
      uVar4 = uVar2 ^ 0x8000000000000000;
      if (-1 < (long)uVar2) {
        uVar4 = 1;
      }
      if ((uVar4 == 0) || (uVar4 != 1)) {
        if (puVar6[1] != 0) {
          lVar3 = 0x10;
          goto code_r0x0001017a632c;
        }
      }
      else if (uVar2 != 0) {
        lVar3 = 8;
code_r0x0001017a632c:
        _free(*(undefined8 *)((long)puVar6 + lVar3));
      }
      puVar6 = puVar6 + 4;
    }
    uVar1 = param_1[4];
    goto joined_r0x0001017a66f8;
  case 1:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar1 = param_1[5];
    uVar4 = param_1[6];
    if (uVar4 != 0) {
      puVar7 = (undefined8 *)(uVar1 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[4] != 0) {
      _free(uVar1);
    }
    uVar1 = param_1[7];
    if (uVar1 != 0x8000000000000000) {
      uVar4 = param_1[8];
      uVar2 = param_1[9];
      if (uVar2 != 0) {
        puVar7 = (undefined8 *)(uVar4 + 0x10);
        do {
          if (puVar7[-1] != 0) {
            _free(*puVar7);
          }
          puVar7 = puVar7 + 4;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      if (uVar1 != 0) {
        _free(uVar4);
      }
    }
    if (param_1[10] == 0x8000000000000000 || param_1[10] == 0) {
      return;
    }
    puVar5 = (ulong *)param_1[0xb];
    break;
  case 2:
    if (param_1[0x11] != 0x8000000000000000 && param_1[0x11] != 0) {
      _free(param_1[0x12]);
    }
    if (param_1[0x14] != 0x8000000000000000 && param_1[0x14] != 0) {
      _free(param_1[0x15]);
    }
    uVar1 = param_1[3];
    uVar4 = param_1[4];
    if (uVar4 != 0) {
      puVar7 = (undefined8 *)(uVar1 + 8);
      do {
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        puVar7 = puVar7 + 3;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[2] != 0) {
      _free(uVar1);
    }
    if (param_1[5] == 0x8000000000000000 || param_1[5] == 0) {
      uVar1 = param_1[0xb];
    }
    else {
      _free(param_1[6]);
      uVar1 = param_1[0xb];
    }
    if (uVar1 != 0) {
      FUN_10179fa2c();
    }
    if ((param_1[8] == 0x8000000000000000) || (param_1[8] == 0)) {
      return;
    }
    puVar5 = (ulong *)param_1[9];
    break;
  case 3:
    if (param_1[10] != 0x8000000000000000 && param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if ((param_1[0xd] != 0x8000000000000000) && (param_1[0xd] != 0)) {
      uVar1 = param_1[0xe];
code_r0x0001017a67b4:
      _free(uVar1);
    }
    goto code_r0x0001017a67b8;
  case 4:
    if (param_1[4] == 0x8000000000000000 || param_1[4] == 0) {
      if (param_1[7] == 0x8000000000000000 || param_1[7] == 0) goto code_r0x0001017a63d8;
code_r0x0001017a673c:
      _free(param_1[8]);
      uVar1 = param_1[10];
    }
    else {
      _free(param_1[5]);
      if (param_1[7] != 0x8000000000000000 && param_1[7] != 0) goto code_r0x0001017a673c;
code_r0x0001017a63d8:
      uVar1 = param_1[10];
    }
    if ((uVar1 != 0x8000000000000000) && (uVar1 != 0)) {
      _free(param_1[0xb]);
    }
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    uVar4 = param_1[0xd];
    uVar1 = uVar4 ^ 0x8000000000000000;
    if (-1 < (long)uVar4) {
      uVar1 = 5;
    }
    if (uVar1 < 3) {
      return;
    }
    if (uVar1 == 3) {
      if (param_1[0xe] == 0) {
        return;
      }
      puVar5 = (ulong *)param_1[0xf];
    }
    else if (uVar1 == 4) {
      puVar5 = (ulong *)param_1[0xf];
      FUN_1017a5c10(puVar5,param_1[0x10]);
      if (param_1[0xe] == 0) {
        return;
      }
    }
    else {
      uVar1 = param_1[0x11];
      if ((uVar1 != 0) && (uVar1 * 9 != -0x11)) {
        _free(param_1[0x10] + uVar1 * -8 + -8);
      }
      puVar5 = (ulong *)param_1[0xe];
      lVar3 = param_1[0xf] + 1;
      puVar6 = puVar5;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
        if (*puVar6 != 0) {
          _free(puVar6[1]);
        }
        FUN_1017a4698(puVar6 + 3);
        puVar6 = puVar6 + 0xd;
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
code_r0x0001017a67e8:
      if (param_1[2] == 0) {
        return;
      }
      puVar5 = (ulong *)param_1[3];
      break;
    }
    puVar5 = (ulong *)param_1[3];
    puVar6 = puVar5;
    for (uVar1 = param_1[4]; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = *puVar6;
      uVar4 = uVar2 ^ 0x8000000000000000;
      if (-1 < (long)uVar2) {
        uVar4 = 1;
      }
      if ((uVar4 == 0) || (uVar4 != 1)) {
        if (puVar6[1] != 0) {
          lVar3 = 0x10;
          goto code_r0x0001017a642c;
        }
      }
      else if (uVar2 != 0) {
        lVar3 = 8;
code_r0x0001017a642c:
        _free(*(undefined8 *)((long)puVar6 + lVar3));
      }
      puVar6 = puVar6 + 4;
    }
    goto code_r0x0001017a666c;
  case 6:
    if (param_1[10] == 0x8000000000000000 || param_1[10] == 0) {
      if (param_1[0xd] == 0x8000000000000000 || param_1[0xd] == 0) goto code_r0x0001017a65dc;
code_r0x0001017a67a0:
      _free(param_1[0xe]);
      uVar1 = param_1[1];
    }
    else {
      _free(param_1[0xb]);
      if (param_1[0xd] != 0x8000000000000000 && param_1[0xd] != 0) goto code_r0x0001017a67a0;
code_r0x0001017a65dc:
      uVar1 = param_1[1];
    }
    if (uVar1 != 0) {
      uVar1 = param_1[2];
      goto code_r0x0001017a67b4;
    }
code_r0x0001017a67b8:
    if (param_1[4] != 0) {
      uVar1 = param_1[5];
code_r0x0001017a67c4:
      _free(uVar1);
    }
code_r0x0001017a67c8:
    if (param_1[7] == 0) {
      return;
    }
    puVar5 = (ulong *)param_1[8];
    break;
  case 7:
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    if (param_1[9] == 0x8000000000000000 || param_1[9] == 0) {
      uVar1 = param_1[1];
    }
    else {
      _free(param_1[10]);
      uVar1 = param_1[1];
    }
    if (uVar1 == 0) goto code_r0x0001017a67e8;
    puVar5 = (ulong *)param_1[3];
    puVar6 = puVar5;
    for (uVar1 = param_1[4]; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = *puVar6;
      uVar4 = uVar2 ^ 0x8000000000000000;
      if (-1 < (long)uVar2) {
        uVar4 = 1;
      }
      if ((uVar4 == 0) || (uVar4 != 1)) {
        if (puVar6[1] != 0) {
          lVar3 = 0x10;
          goto code_r0x0001017a6630;
        }
      }
      else if (uVar2 != 0) {
        lVar3 = 8;
code_r0x0001017a6630:
        _free(*(undefined8 *)((long)puVar6 + lVar3));
      }
      puVar6 = puVar6 + 4;
    }
code_r0x0001017a666c:
    uVar1 = param_1[2];
    goto joined_r0x0001017a66f8;
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
    puVar5 = (ulong *)param_1[8];
    FUN_1017a5c10(puVar5,param_1[9]);
    uVar1 = param_1[7];
joined_r0x0001017a66f8:
    if (uVar1 == 0) {
LAB_1017a6838:
      return;
    }
    break;
  case 9:
    if (param_1[8] == 0x8000000000000000 || param_1[8] == 0) {
      if (param_1[0xb] == 0x8000000000000000 || param_1[0xb] == 0) goto code_r0x0001017a669c;
code_r0x0001017a6824:
      _free(param_1[0xc]);
      uVar1 = param_1[1];
    }
    else {
      _free(param_1[9]);
      if (param_1[0xb] != 0x8000000000000000 && param_1[0xb] != 0) goto code_r0x0001017a6824;
code_r0x0001017a669c:
      uVar1 = param_1[1];
    }
    if (uVar1 == 4) {
      return;
    }
    uVar1 = param_1[1];
    if (1 < (long)uVar1) {
      if (uVar1 == 2) {
        if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
          uVar1 = param_1[5];
        }
        else {
          _free(param_1[3]);
          uVar1 = param_1[5];
        }
        if ((uVar1 & 0x7fffffffffffffff) != 0) {
          puVar5 = (ulong *)param_1[6];
          break;
        }
      }
      return;
    }
    if (uVar1 == 0) {
      if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
        uVar1 = param_1[5];
      }
      else {
        _free(param_1[3]);
        uVar1 = param_1[5];
      }
      if (uVar1 == 0x8000000000000000) {
        return;
      }
      puVar5 = (ulong *)param_1[6];
      uVar4 = param_1[7];
      if (uVar4 != 0) {
        puVar6 = puVar5 + 1;
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uVar1 == 0) {
        return;
      }
    }
    else {
      if ((param_1[2] & 0x7fffffffffffffff) == 0) {
        return;
      }
      puVar5 = (ulong *)param_1[3];
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
      uVar1 = param_1[0xb];
      goto code_r0x0001017a67c4;
    }
    goto code_r0x0001017a67c8;
  case 0xb:
    if (param_1[1] == 0) {
      return;
    }
    goto code_r0x0001017a6480;
  default:
    goto LAB_1017a6838;
  case 0xd:
    if (param_1[1] == 0x8000000000000000 || param_1[1] == 0) {
      return;
    }
code_r0x0001017a6480:
    puVar5 = (ulong *)param_1[2];
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar5);
  return;
}

