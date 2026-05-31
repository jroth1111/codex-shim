
void FUN_100e241d4(long *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar1 = *param_1;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      lVar1 = param_1[1];
      if (lVar1 < 3) {
        if (lVar1 == 0) {
          uVar2 = param_1[4];
          if ((uVar2 & 3) != 1) {
            return;
          }
          plVar5 = (long *)(uVar2 - 1);
          lVar1 = *plVar5;
          puVar6 = *(undefined8 **)(uVar2 + 7);
          pcVar3 = (code *)*puVar6;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1);
          }
          if (puVar6[1] != 0) {
            _free(lVar1);
          }
          goto code_r0x000108aa97c4;
        }
        if ((lVar1 != 1) && (lVar1 == 2)) goto LAB_100e29cc4;
      }
      else {
        if ((lVar1 == 3) || (lVar1 == 4)) {
LAB_100e29cc4:
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          if (param_1[5] == 0) {
            return;
          }
          plVar5 = (long *)param_1[6];
          goto code_r0x000108aa97c4;
        }
        if (lVar1 == 5) {
          return;
        }
      }
      if (param_1[2] == 0) {
        return;
      }
      plVar5 = (long *)param_1[3];
      goto code_r0x000108aa97c4;
    }
    if (lVar1 == 1) {
      uVar4 = param_1[1];
      uVar2 = uVar4 ^ 0x8000000000000000;
      if (-1 < (long)uVar4) {
        uVar2 = 6;
      }
      if ((long)uVar2 < 5) {
        if (uVar2 < 2) {
          return;
        }
        if (uVar2 - 3 < 2) {
          return;
        }
        if (uVar2 == 2) {
          uVar2 = param_1[2];
          if ((uVar2 & 3) != 1) {
            return;
          }
          plVar5 = (long *)(uVar2 - 1);
          puVar6 = (undefined8 *)*plVar5;
          puVar7 = *(undefined8 **)(uVar2 + 7);
          pcVar3 = (code *)*puVar7;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(puVar6);
          }
          if (puVar7[1] == 0) goto code_r0x000108aa97c4;
LAB_100e4b6f4:
          _free(puVar6);
          goto code_r0x000108aa97c4;
        }
      }
      else if ((long)uVar2 < 7) {
        if (uVar2 == 5) {
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          plVar5 = (long *)param_1[5];
          FUN_100de20f8(plVar5);
          goto code_r0x000108aa97c4;
        }
        if (uVar2 == 6) {
          if (uVar4 != 0) {
            _free(param_1[2]);
          }
          if (param_1[4] == 0) {
            return;
          }
          plVar5 = (long *)param_1[5];
          goto code_r0x000108aa97c4;
        }
      }
      else {
        if (uVar2 == 7) {
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          plVar5 = (long *)param_1[5];
          if (*plVar5 == 1) {
            uVar2 = plVar5[1];
            if ((uVar2 & 3) != 1) goto code_r0x000108aa97c4;
            puVar6 = (undefined8 *)(uVar2 - 1);
            uVar8 = *puVar6;
            puVar7 = *(undefined8 **)(uVar2 + 7);
            pcVar3 = (code *)*puVar7;
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)(uVar8);
            }
            if (puVar7[1] != 0) {
              _free(uVar8);
            }
          }
          else {
            if ((*plVar5 != 0) || (plVar5[2] == 0)) goto code_r0x000108aa97c4;
            puVar6 = (undefined8 *)plVar5[1];
          }
          goto LAB_100e4b6f4;
        }
        if (uVar2 == 8) {
          if (param_1[2] != 0) {
            _free(param_1[3]);
          }
          if (param_1[5] == 0) {
            return;
          }
          plVar5 = (long *)param_1[6];
          goto code_r0x000108aa97c4;
        }
      }
      if (param_1[2] == 0) {
        return;
      }
      plVar5 = (long *)param_1[3];
      goto code_r0x000108aa97c4;
    }
  }
  else {
    if (lVar1 == 2) {
      if (param_1[1] == 0) {
        uVar2 = param_1[4];
        if ((uVar2 & 3) != 1) {
          return;
        }
        plVar5 = (long *)(uVar2 - 1);
        lVar1 = *plVar5;
        puVar6 = *(undefined8 **)(uVar2 + 7);
        pcVar3 = (code *)*puVar6;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(lVar1);
        }
        if (puVar6[1] != 0) {
          _free(lVar1);
        }
      }
      else {
        if (param_1[2] == 0) {
          return;
        }
        plVar5 = (long *)param_1[3];
      }
      goto code_r0x000108aa97c4;
    }
    if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000100e24238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)param_1[1])();
      return;
    }
  }
  plVar5 = (long *)param_1[2];
  if (plVar5 != (long *)0x0) {
    puVar6 = (undefined8 *)param_1[3];
    pcVar3 = (code *)*puVar6;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(plVar5);
    }
    if (puVar6[1] != 0) {
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar5);
      return;
    }
  }
  return;
}

