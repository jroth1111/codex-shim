
void FUN_103da2320(ulong *param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  lVar5 = *(long *)param_1[0x1c];
  *(long *)param_1[0x1c] = lVar5 + -1;
  LORelease();
  if (lVar5 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
  }
  if (param_1[0xf] == 0x8000000000000000 || param_1[0xf] == 0) {
    sVar2 = (short)param_1[0x14];
  }
  else {
    _free(param_1[0x10]);
    sVar2 = (short)param_1[0x14];
  }
  if (sVar2 != 0x1f) {
    FUN_103d996fc();
  }
  lVar5 = 2;
  if (1 < *param_1) {
    lVar5 = *param_1 - 2;
  }
  if (lVar5 == 0) {
    plVar7 = (long *)param_1[1];
    puVar9 = (undefined8 *)param_1[2];
    if ((code *)*puVar9 != (code *)0x0) {
      (*(code *)*puVar9)(plVar7);
    }
LAB_103dae9a4:
    if (puVar9[1] == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  if (lVar5 != 1) {
    if (lVar5 != 2) {
      return;
    }
    __ZN5tokio7runtime4time5entry1_91__LT_impl_u20_core__ops__drop__Drop_u20_for_u20_tokio__runtime__time__entry__TimerEntry_GT_4drop17h26943950b468e207E
              ();
    if (*param_1 == 0) {
      plVar7 = (long *)param_1[1];
      lVar5 = *plVar7;
      *plVar7 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5d09165fe82724aaE();
      }
    }
    else {
      plVar7 = (long *)param_1[1];
      lVar5 = *plVar7;
      *plVar7 = lVar5 + -1;
      LORelease();
      if (lVar5 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7465ca48b9444ac5E();
      }
    }
    if ((param_1[2] != 0) && (param_1[7] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000103dabeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[7] + 0x18))(param_1[8]);
      return;
    }
    return;
  }
  puVar8 = param_1 + 1;
  if ((ushort)*puVar8 == 0x20) {
    return;
  }
  if ((ushort)*puVar8 == 0x1f) {
    plVar7 = (long *)param_1[2];
    puVar9 = (undefined8 *)param_1[3];
    if ((code *)*puVar9 != (code *)0x0) {
      (*(code *)*puVar9)(plVar7);
    }
    goto LAB_103dae9a4;
  }
  uVar1 = (ushort)*puVar8;
  iVar3 = uVar1 - 0x11;
  if (uVar1 < 0x11) {
    iVar3 = 2;
  }
  switch(iVar3) {
  case 0:
    if ((char)param_1[2] != '\0') {
      return;
    }
    plVar7 = (long *)param_1[3];
    puVar9 = (undefined8 *)param_1[4];
    if ((code *)*puVar9 != (code *)0x0) {
      (*(code *)*puVar9)(plVar7);
    }
    break;
  case 1:
    uVar10 = param_1[2];
    if ((uVar10 & 3) != 1) {
      return;
    }
    plVar7 = (long *)(uVar10 - 1);
    puVar9 = (undefined8 *)*plVar7;
    puVar11 = *(undefined8 **)(uVar10 + 7);
    pcVar6 = (code *)*puVar11;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(puVar9);
    }
    if (puVar11[1] == 0) goto code_r0x000108aa97c4;
    goto code_r0x000103d997b0;
  case 2:
    uVar4 = uVar1 - 0xe;
    if (uVar1 < 0xe) {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      return;
    }
    if ((uVar4 & 0xffff) != 1) goto LAB_103d9981c;
    switch((ushort)*puVar8) {
    case 0:
      uVar10 = param_1[2];
      if ((uVar10 & 3) != 1) {
        return;
      }
      plVar7 = (long *)(uVar10 - 1);
      puVar9 = (undefined8 *)*plVar7;
      puVar11 = *(undefined8 **)(uVar10 + 7);
      pcVar6 = (code *)*puVar11;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(puVar9);
      }
      if (puVar11[1] == 0) break;
      goto code_r0x000103db4af0;
    case 1:
      if (param_1[4] == 0) {
        return;
      }
      plVar7 = (long *)param_1[5];
      break;
    case 2:
      if (param_1[2] != 0) {
        _free(param_1[3]);
      }
      uVar10 = param_1[5];
      lVar5 = 9;
      if (8 < uVar10) {
        lVar5 = uVar10 - 9;
      }
      if (lVar5 < 6) {
        if (lVar5 == 2) {
          uVar10 = param_1[6];
          if ((uVar10 & 3) != 1) {
            return;
          }
          plVar7 = (long *)(uVar10 - 1);
          lVar5 = *plVar7;
          puVar9 = *(undefined8 **)(uVar10 + 7);
          pcVar6 = (code *)*puVar9;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(lVar5);
          }
          if (puVar9[1] == 0) break;
code_r0x000103dac01c:
          _free(lVar5);
          break;
        }
        if (lVar5 == 3) {
          plVar7 = (long *)param_1[6];
          if (plVar7 == (long *)0x0) {
            return;
          }
          func_0x000103da86b8(plVar7);
          break;
        }
        if (lVar5 != 5) {
          return;
        }
        uVar10 = param_1[6];
        lVar5 = uVar10 - 3;
        if (uVar10 < 3) {
          lVar5 = 8;
        }
        if (lVar5 == 0xb) {
          plVar7 = (long *)param_1[7];
          if (*plVar7 != 0) {
            (**(code **)(*plVar7 + 0x20))(plVar7 + 3,plVar7[1],plVar7[2]);
          }
          break;
        }
        if (lVar5 != 8) {
          return;
        }
        if ((uVar10 != 0) && (uVar10 != 1)) {
          return;
        }
        uVar10 = param_1[8];
      }
      else {
        if (lVar5 < 9) {
          if (lVar5 == 6) {
            plVar7 = (long *)param_1[6];
            if ((*plVar7 != 4) || ((short)plVar7[5] != 0x12)) {
              (**(code **)(plVar7[1] + 0x20))(plVar7 + 4,plVar7[2],plVar7[3]);
            }
            break;
          }
          if (lVar5 != 7) {
            return;
          }
        }
        else {
          if (lVar5 != 9) {
            if (lVar5 != 10) {
              return;
            }
            plVar7 = (long *)param_1[6];
            func_0x000103dad9f8(plVar7);
            func_0x000103da4abc(plVar7[0xc]);
            if (plVar7[0xe] == -0x8000000000000000 || plVar7[0xe] == 0) break;
            lVar5 = plVar7[0xf];
            goto code_r0x000103dac01c;
          }
          if ((uVar10 < 8) && ((1L << (uVar10 & 0x3f) & 0x7bU) != 0)) {
            return;
          }
        }
        uVar10 = param_1[6];
      }
      if (uVar10 == 0) {
        return;
      }
      plVar7 = (long *)param_1[7];
      break;
    case 3:
    case 4:
      return;
    case 5:
    case 7:
    case 8:
    case 0xb:
    case 0xc:
      if (param_1[2] == 0) {
        return;
      }
      plVar7 = (long *)param_1[3];
      break;
    case 6:
      plVar7 = (long *)param_1[2];
      if (*plVar7 == 1) {
        uVar10 = plVar7[1];
        if ((uVar10 & 3) != 1) break;
        puVar9 = (undefined8 *)(uVar10 - 1);
        uVar12 = *puVar9;
        puVar11 = *(undefined8 **)(uVar10 + 7);
        pcVar6 = (code *)*puVar11;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(uVar12);
        }
        if (puVar11[1] != 0) {
          _free(uVar12);
        }
      }
      else {
        if ((*plVar7 != 0) || (plVar7[2] == 0)) break;
        puVar9 = (undefined8 *)plVar7[1];
      }
code_r0x000103db4af0:
      _free(puVar9);
      break;
    case 9:
      if (param_1[3] == 0) {
        return;
      }
      plVar7 = (long *)param_1[4];
      break;
    case 10:
      if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
        uVar10 = param_1[5];
      }
      else {
        _free(param_1[3]);
        uVar10 = param_1[5];
      }
      if (uVar10 == 0) {
        return;
      }
      plVar7 = (long *)param_1[6];
      break;
    default:
      plVar7 = (long *)param_1[2];
      func_0x000103da939c(plVar7);
    }
    goto code_r0x000108aa97c4;
  case 3:
  case 6:
  case 7:
  case 10:
  case 0xb:
    goto LAB_103d99850;
  case 4:
  case 5:
    if (param_1[2] == 0x8000000000000000 || param_1[2] == 0) {
      return;
    }
    goto code_r0x000103d99824;
  case 8:
    plVar7 = (long *)param_1[3];
    if (plVar7 == (long *)0x0) {
      return;
    }
    puVar9 = (undefined8 *)param_1[4];
    if ((code *)*puVar9 != (code *)0x0) {
      (*(code *)*puVar9)(plVar7);
    }
    break;
  case 9:
    plVar7 = (long *)param_1[2];
    if (*plVar7 == 1) {
      uVar10 = plVar7[1];
      if ((uVar10 & 3) != 1) goto code_r0x000108aa97c4;
      puVar9 = (undefined8 *)(uVar10 - 1);
      uVar12 = *puVar9;
      puVar11 = *(undefined8 **)(uVar10 + 7);
      pcVar6 = (code *)*puVar11;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(uVar12);
      }
      if (puVar11[1] != 0) {
        _free(uVar12);
      }
    }
    else {
      if ((*plVar7 != 0) || (plVar7[2] == 0)) goto code_r0x000108aa97c4;
      puVar9 = (undefined8 *)plVar7[1];
    }
code_r0x000103d997b0:
    _free(puVar9);
    goto code_r0x000108aa97c4;
  case 0xc:
    switch((char)param_1[2]) {
    case '\0':
    case '\a':
    case '\b':
    case '\v':
      return;
    default:
      if (param_1[3] == 0) {
        return;
      }
      plVar7 = (long *)param_1[4];
      break;
    case '\x04':
      plVar7 = (long *)param_1[3];
      func_0x000103da939c();
    }
    goto code_r0x000108aa97c4;
  default:
LAB_103d9981c:
    if (param_1[2] == 0) {
      return;
    }
code_r0x000103d99824:
    plVar7 = (long *)param_1[3];
    goto code_r0x000108aa97c4;
  }
  if (puVar9[1] == 0) {
LAB_103d99850:
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar7);
  return;
}

