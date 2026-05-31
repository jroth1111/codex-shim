
void FUN_100e20fec(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  lVar3 = *param_1 - 7;
  if (*param_1 < 7) {
    lVar3 = 2;
  }
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      plVar4 = (long *)param_1[2];
      if (plVar4 != (long *)0x0) {
        puVar5 = (undefined8 *)param_1[3];
        pcVar2 = (code *)*puVar5;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(plVar4);
        }
        if (puVar5[1] != 0) goto code_r0x000108aa97c4;
      }
      return;
    }
    uVar1 = *param_1;
    if ((long)uVar1 < 3) {
      if (((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) {
LAB_100df2fcc:
        plVar4 = (long *)param_1[1];
        (*(code *)**(undefined8 **)plVar4[7])();
        if (*plVar4 == 0) {
          lVar3 = *(long *)plVar4[1];
          *(long *)plVar4[1] = lVar3 + -1;
          LORelease();
          if (lVar3 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h8afa8b18ab5ccae7E();
          }
        }
        FUN_100e0aaac(plVar4 + 3);
        goto code_r0x000108aa97c4;
      }
LAB_100df2fbc:
      uVar1 = param_1[1];
    }
    else {
      if (uVar1 == 3) goto LAB_100df2fbc;
      if (uVar1 == 4) {
        uVar1 = param_1[9];
        uVar6 = param_1[10];
        if (uVar6 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (param_1[8] != 0) {
          _free(uVar1);
        }
        uVar1 = param_1[0xc];
        uVar6 = param_1[0xd];
        if (uVar6 != 0) {
          puVar5 = (undefined8 *)(uVar1 + 8);
          do {
            if (puVar5[-1] != 0) {
              _free(*puVar5);
            }
            puVar5 = puVar5 + 3;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (param_1[0xb] != 0) {
LAB_100df3088:
          _free(uVar1);
        }
      }
      else {
        if (uVar1 != 5) goto LAB_100df2fcc;
        if (param_1[8] != 0) {
          _free(param_1[9]);
        }
        if (param_1[0xb] != 0) {
          uVar1 = param_1[0xc];
          goto LAB_100df3088;
        }
      }
      uVar1 = param_1[1] & 0x7fffffffffffffff;
    }
    if (uVar1 == 0) {
      return;
    }
    plVar4 = (long *)param_1[2];
    goto code_r0x000108aa97c4;
  }
  if (param_1[6] != 0) {
    _free(param_1[7]);
  }
  switch(param_1[1]) {
  case 0:
    return;
  case 1:
  case 2:
    if (param_1[2] == 0) {
      return;
    }
    plVar4 = (long *)param_1[3];
    goto code_r0x000108aa97c4;
  case 3:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    uVar1 = param_1[2];
    if ((uVar1 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar1 - 1);
    puVar5 = (undefined8 *)*plVar4;
    puVar8 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar5);
    }
    break;
  case 4:
    plVar4 = (long *)param_1[2];
    lVar3 = *plVar4;
    if (lVar3 != 1) goto code_r0x000100e005bc;
    uVar1 = plVar4[1];
    if ((uVar1 & 3) != 1) goto code_r0x000108aa97c4;
    puVar5 = (undefined8 *)(uVar1 - 1);
    uVar7 = *puVar5;
    puVar8 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(uVar7);
    }
code_r0x000100e0070c:
    if (puVar8[1] != 0) {
      _free(uVar7);
    }
    goto code_r0x000100e00740;
  case 5:
    plVar4 = (long *)param_1[2];
    lVar3 = *plVar4;
    if (lVar3 == 1) {
      uVar1 = plVar4[1];
      if ((uVar1 & 3) != 1) goto code_r0x000108aa97c4;
      puVar5 = (undefined8 *)(uVar1 - 1);
      uVar7 = *puVar5;
      puVar8 = *(undefined8 **)(uVar1 + 7);
      if ((code *)*puVar8 != (code *)0x0) {
        (*(code *)*puVar8)(uVar7);
      }
      goto code_r0x000100e0070c;
    }
code_r0x000100e005bc:
    if ((lVar3 != 0) || (plVar4[2] == 0)) goto code_r0x000108aa97c4;
    puVar5 = (undefined8 *)plVar4[1];
    goto code_r0x000100e00740;
  case 6:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    uVar1 = param_1[2];
    if ((uVar1 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar1 - 1);
    puVar5 = (undefined8 *)*plVar4;
    puVar8 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar5);
    }
    break;
  case 7:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    uVar1 = param_1[2];
    if ((uVar1 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar1 - 1);
    puVar5 = (undefined8 *)*plVar4;
    puVar8 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar5);
    }
    break;
  case 8:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    uVar1 = param_1[2];
    if ((uVar1 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar1 - 1);
    puVar5 = (undefined8 *)*plVar4;
    puVar8 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar5);
    }
    break;
  case 9:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    uVar1 = param_1[2];
    if ((uVar1 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar1 - 1);
    puVar5 = (undefined8 *)*plVar4;
    puVar8 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar5);
    }
    break;
  case 10:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    uVar1 = param_1[2];
    if ((uVar1 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar1 - 1);
    puVar5 = (undefined8 *)*plVar4;
    puVar8 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar5);
    }
    break;
  default:
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    uVar1 = param_1[2];
    if ((uVar1 & 3) != 1) {
      return;
    }
    plVar4 = (long *)(uVar1 - 1);
    puVar5 = (undefined8 *)*plVar4;
    puVar8 = *(undefined8 **)(uVar1 + 7);
    if ((code *)*puVar8 != (code *)0x0) {
      (*(code *)*puVar8)(puVar5);
    }
  }
  if (puVar8[1] != 0) {
code_r0x000100e00740:
    _free(puVar5);
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar4);
  return;
}

