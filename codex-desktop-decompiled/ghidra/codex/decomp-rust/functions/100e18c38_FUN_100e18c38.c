
void FUN_100e18c38(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  
  if (*param_1 == 0x8000000000000005) {
    puVar6 = (ulong *)param_1[2];
    puVar1 = puVar6;
    for (uVar5 = param_1[3]; uVar5 != 0; uVar5 = uVar5 - 1) {
      FUN_100e06c08(puVar1);
      puVar1 = puVar1 + 7;
    }
    if (param_1[1] == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  uVar2 = *param_1;
  uVar5 = uVar2 ^ 0x8000000000000000;
  if (-1 < (long)uVar2) {
    uVar5 = 2;
  }
  if ((long)uVar5 < 2) {
    if (uVar5 == 0) {
      if (param_1[1] != 0) {
        _free(param_1[2]);
      }
      puVar6 = (ulong *)param_1[5];
      puVar1 = puVar6;
      for (uVar5 = param_1[6]; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar3 = *puVar1;
        uVar2 = uVar3 ^ 0x8000000000000000;
        if (-1 < (long)uVar3) {
          uVar2 = 1;
        }
        if ((uVar2 == 0) || (uVar2 != 1)) {
          if (puVar1[1] != 0) {
            lVar4 = 0x10;
            goto LAB_100e13bbc;
          }
        }
        else if (uVar3 != 0) {
          lVar4 = 8;
LAB_100e13bbc:
          _free(*(undefined8 *)((long)puVar1 + lVar4));
        }
        puVar1 = puVar1 + 4;
      }
      if (param_1[4] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    if (uVar5 == 1) {
      if (param_1[6] != 0) {
        _free(param_1[7]);
      }
      if (param_1[1] == 0) {
LAB_100e13c38:
        if (param_1[2] == 0) {
          return;
        }
        puVar6 = (ulong *)param_1[3];
        goto code_r0x000108aa97c4;
      }
      puVar6 = (ulong *)param_1[3];
      puVar1 = puVar6;
      for (uVar5 = param_1[4]; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar3 = *puVar1;
        uVar2 = uVar3 ^ 0x8000000000000000;
        if (-1 < (long)uVar3) {
          uVar2 = 1;
        }
        if ((uVar2 == 0) || (uVar2 != 1)) {
          if (puVar1[1] != 0) {
            lVar4 = 0x10;
            goto LAB_100e13a5c;
          }
        }
        else if (uVar3 != 0) {
          lVar4 = 8;
LAB_100e13a5c:
          _free(*(undefined8 *)((long)puVar1 + lVar4));
        }
        puVar1 = puVar1 + 4;
      }
      goto LAB_100e13b34;
    }
LAB_100e13b40:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    puVar6 = (ulong *)param_1[0xb];
    lVar4 = param_1[0xc] + 1;
    puVar1 = puVar6;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100de6690(puVar1);
      puVar1 = puVar1 + 9;
    }
    uVar5 = param_1[10];
  }
  else {
    if (uVar5 == 2) {
      if (uVar2 != 0) {
        _free(param_1[1]);
      }
      uVar5 = param_1[4];
      lVar4 = param_1[5] + 1;
      uVar2 = uVar5;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        FUN_100de6690(uVar2);
        uVar2 = uVar2 + 0x48;
      }
      if (param_1[3] != 0) {
        _free(uVar5);
      }
      if (param_1[6] != 0x8000000000000005) {
        FUN_100de6690();
      }
      puVar1 = param_1 + 0xf;
      if (*puVar1 == 0x8000000000000005) {
        return;
      }
      uVar5 = *puVar1 ^ 0x8000000000000000;
      if (-1 < (long)*puVar1) {
        uVar5 = 5;
      }
      if (uVar5 < 3) {
        return;
      }
      if (uVar5 == 3) {
        if (param_1[0x10] == 0) {
          return;
        }
        puVar6 = (ulong *)param_1[0x11];
      }
      else if (uVar5 == 4) {
        puVar6 = (ulong *)param_1[0x11];
        lVar4 = param_1[0x12] + 1;
        puVar1 = puVar6;
        while (lVar4 = lVar4 + -1, lVar4 != 0) {
          FUN_100de6690(puVar1);
          puVar1 = puVar1 + 9;
        }
        if (param_1[0x10] == 0) {
          return;
        }
      }
      else {
        uVar5 = param_1[0x13];
        if ((uVar5 != 0) && (uVar5 * 9 != -0x11)) {
          _free(param_1[0x12] + uVar5 * -8 + -8);
        }
        puVar6 = (ulong *)param_1[0x10];
        lVar4 = param_1[0x11] + 1;
        puVar7 = puVar6;
        while (lVar4 = lVar4 + -1, lVar4 != 0) {
          if (*puVar7 != 0) {
            _free(puVar7[1]);
          }
          FUN_100de6690(puVar7 + 3);
          puVar7 = puVar7 + 0xd;
        }
        if (*puVar1 == 0) {
          return;
        }
      }
      goto code_r0x000108aa97c4;
    }
    if (uVar5 != 3) goto LAB_100e13b40;
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
    if ((param_1[9] != 0x8000000000000000) && (param_1[9] != 0)) {
      _free(param_1[10]);
    }
    if (param_1[1] == 0) goto LAB_100e13c38;
    puVar6 = (ulong *)param_1[3];
    puVar1 = puVar6;
    for (uVar5 = param_1[4]; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar3 = *puVar1;
      uVar2 = uVar3 ^ 0x8000000000000000;
      if (-1 < (long)uVar3) {
        uVar2 = 1;
      }
      if ((uVar2 == 0) || (uVar2 != 1)) {
        if (puVar1[1] != 0) {
          lVar4 = 0x10;
          goto LAB_100e13af8;
        }
      }
      else if (uVar3 != 0) {
        lVar4 = 8;
LAB_100e13af8:
        _free(*(undefined8 *)((long)puVar1 + lVar4));
      }
      puVar1 = puVar1 + 4;
    }
LAB_100e13b34:
    uVar5 = param_1[2];
  }
  if (uVar5 == 0) {
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(puVar6);
  return;
}

