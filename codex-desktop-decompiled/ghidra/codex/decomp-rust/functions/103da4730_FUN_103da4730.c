
void FUN_103da4730(int *param_1)

{
  ulong *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong in_xzr;
  
  if (*param_1 == 0) {
    cVar2 = (char)param_1[0x52];
    if (cVar2 == '\0') {
      func_0x000103dbe850(param_1 + 2);
      lVar6 = **(long **)(param_1 + 0x2e);
      **(long **)(param_1 + 0x2e) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
      lVar6 = **(long **)(param_1 + 0x32);
      **(long **)(param_1 + 0x32) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
      if ((*(long *)(param_1 + 0x22) != -0x8000000000000000) && (*(long *)(param_1 + 0x22) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x24));
      }
      lVar6 = **(long **)(param_1 + 0x36);
      **(long **)(param_1 + 0x36) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
      if ((*(long *)(param_1 + 0x28) != -0x8000000000000000) && (*(long *)(param_1 + 0x28) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x2a));
      }
      lVar6 = **(long **)(param_1 + 0x3a);
      **(long **)(param_1 + 0x3a) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
      }
      plVar10 = (long *)(param_1 + 0x3e);
      lVar14 = *plVar10;
      LOAcquire();
      lVar6 = *(long *)(lVar14 + 0x1f0);
      *(long *)(lVar14 + 0x1f0) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        LOAcquire();
        lVar6 = *(long *)(lVar14 + 0x88);
        *(long *)(lVar14 + 0x88) = lVar6 + 1;
        lVar6 = func_0x000103e3366c(lVar14 + 0x80,lVar6);
        *(ulong *)(lVar6 + 0x6210) = *(ulong *)(lVar6 + 0x6210) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar14 + 0x110);
        LOAcquire();
        uVar7 = *puVar1;
        *puVar1 = uVar7 | 2;
        LORelease();
        if (uVar7 == 0) {
          lVar6 = *(long *)(lVar14 + 0x100);
          *(undefined8 *)(lVar14 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar6 != 0) {
            (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar14 + 0x108));
          }
        }
      }
      lVar6 = *(long *)*plVar10;
      *(long *)*plVar10 = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(plVar10);
      }
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (param_1 + 0x40);
    }
    else {
      if (cVar2 == '\x03') {
        func_0x000103d9c628(param_1 + 0x54);
      }
      else {
        if (cVar2 != '\x04') {
          return;
        }
        func_0x000103da95e8(param_1 + 0x54);
      }
      *(undefined1 *)((long)param_1 + 0x149) = 0;
      func_0x000103dbe850(param_1 + 2);
      lVar6 = **(long **)(param_1 + 0x2e);
      **(long **)(param_1 + 0x2e) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
      lVar6 = **(long **)(param_1 + 0x32);
      **(long **)(param_1 + 0x32) = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
      }
      if ((*(long *)(param_1 + 0x22) != -0x8000000000000000) && (*(long *)(param_1 + 0x22) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x24));
      }
      if ((*(byte *)((long)param_1 + 0x14d) & 1) != 0) {
        lVar6 = **(long **)(param_1 + 0x36);
        **(long **)(param_1 + 0x36) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2a633a52a46b1fedE();
        }
      }
      if ((((*(byte *)(param_1 + 0x53) & 1) != 0) &&
          (*(long *)(param_1 + 0x28) != -0x8000000000000000)) && (*(long *)(param_1 + 0x28) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x2a));
      }
      if ((*(byte *)((long)param_1 + 0x14b) & 1) != 0) {
        lVar6 = **(long **)(param_1 + 0x3a);
        **(long **)(param_1 + 0x3a) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h90048d58d8a78d86E();
        }
      }
      if ((*(byte *)((long)param_1 + 0x14a) & 1) != 0) {
        plVar10 = (long *)(param_1 + 0x3e);
        lVar14 = *plVar10;
        LOAcquire();
        lVar6 = *(long *)(lVar14 + 0x1f0);
        *(long *)(lVar14 + 0x1f0) = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          LOAcquire();
          lVar6 = *(long *)(lVar14 + 0x88);
          *(long *)(lVar14 + 0x88) = lVar6 + 1;
          lVar6 = func_0x000103e3366c(lVar14 + 0x80,lVar6);
          *(ulong *)(lVar6 + 0x6210) = *(ulong *)(lVar6 + 0x6210) | 0x200000000;
          LORelease();
          puVar1 = (ulong *)(lVar14 + 0x110);
          LOAcquire();
          uVar7 = *puVar1;
          *puVar1 = uVar7 | 2;
          LORelease();
          if (uVar7 == 0) {
            lVar6 = *(long *)(lVar14 + 0x100);
            *(undefined8 *)(lVar14 + 0x100) = 0;
            *puVar1 = in_xzr;
            LORelease();
            if (lVar6 != 0) {
              (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar14 + 0x108));
            }
          }
        }
        lVar6 = *(long *)*plVar10;
        *(long *)*plVar10 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(plVar10);
        }
      }
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (param_1 + 0x40);
    }
    plVar10 = *(long **)(param_1 + 0x40);
    lVar6 = *plVar10;
    *plVar10 = lVar6 + -1;
    LORelease();
    if (lVar6 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    plVar10 = *(long **)(param_1 + 0x40);
    FUN_10611d000(plVar10 + 6);
    if (plVar10 != (long *)0xffffffffffffffff) {
      lVar6 = plVar10[1];
      plVar10[1] = lVar6 + -1;
      LORelease();
      if (lVar6 == 1) {
        DataMemoryBarrier(2,1);
        goto code_r0x000108aa97c4;
      }
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  puVar8 = (ushort *)(param_1 + 2);
  if (*puVar8 == 0x1f) {
    return;
  }
  if (*puVar8 == 0x20) {
    plVar10 = *(long **)(param_1 + 6);
    if (plVar10 == (long *)0x0) {
      return;
    }
    puVar11 = *(undefined8 **)(param_1 + 8);
    pcVar9 = (code *)*puVar11;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(plVar10);
    }
    if (puVar11[1] == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  uVar3 = *puVar8;
  iVar4 = uVar3 - 0x11;
  if (uVar3 < 0x11) {
    iVar4 = 2;
  }
  switch(iVar4) {
  case 0:
    if ((char)param_1[4] != '\0') {
      return;
    }
    plVar10 = *(long **)(param_1 + 6);
    puVar11 = *(undefined8 **)(param_1 + 8);
    if ((code *)*puVar11 != (code *)0x0) {
      (*(code *)*puVar11)(plVar10);
    }
    break;
  case 1:
    uVar7 = *(ulong *)(param_1 + 4);
    if ((uVar7 & 3) != 1) {
      return;
    }
    plVar10 = (long *)(uVar7 - 1);
    puVar11 = (undefined8 *)*plVar10;
    puVar12 = *(undefined8 **)(uVar7 + 7);
    pcVar9 = (code *)*puVar12;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(puVar11);
    }
    if (puVar12[1] == 0) goto code_r0x000108aa97c4;
    goto code_r0x000103d997b0;
  case 2:
    uVar5 = uVar3 - 0xe;
    if (uVar3 < 0xe) {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      return;
    }
    if ((uVar5 & 0xffff) != 1) goto LAB_103d9981c;
    switch(*puVar8) {
    case 0:
      uVar7 = *(ulong *)(param_1 + 4);
      if ((uVar7 & 3) != 1) {
        return;
      }
      plVar10 = (long *)(uVar7 - 1);
      puVar11 = (undefined8 *)*plVar10;
      puVar12 = *(undefined8 **)(uVar7 + 7);
      pcVar9 = (code *)*puVar12;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(puVar11);
      }
      if (puVar12[1] == 0) break;
      goto code_r0x000103db4af0;
    case 1:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      plVar10 = *(long **)(param_1 + 10);
      break;
    case 2:
      if (*(long *)(param_1 + 4) != 0) {
        _free(*(undefined8 *)(param_1 + 6));
      }
      uVar7 = *(ulong *)(param_1 + 10);
      lVar6 = 9;
      if (8 < uVar7) {
        lVar6 = uVar7 - 9;
      }
      if (lVar6 < 6) {
        if (lVar6 == 2) {
          uVar7 = *(ulong *)(param_1 + 0xc);
          if ((uVar7 & 3) != 1) {
            return;
          }
          plVar10 = (long *)(uVar7 - 1);
          lVar6 = *plVar10;
          puVar11 = *(undefined8 **)(uVar7 + 7);
          pcVar9 = (code *)*puVar11;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(lVar6);
          }
          if (puVar11[1] == 0) break;
code_r0x000103dac01c:
          _free(lVar6);
          break;
        }
        if (lVar6 == 3) {
          plVar10 = *(long **)(param_1 + 0xc);
          if (plVar10 == (long *)0x0) {
            return;
          }
          func_0x000103da86b8(plVar10);
          break;
        }
        if (lVar6 != 5) {
          return;
        }
        uVar7 = *(ulong *)(param_1 + 0xc);
        lVar6 = uVar7 - 3;
        if (uVar7 < 3) {
          lVar6 = 8;
        }
        if (lVar6 == 0xb) {
          plVar10 = *(long **)(param_1 + 0xe);
          if (*plVar10 != 0) {
            (**(code **)(*plVar10 + 0x20))(plVar10 + 3,plVar10[1],plVar10[2]);
          }
          break;
        }
        if (lVar6 != 8) {
          return;
        }
        if ((uVar7 != 0) && (uVar7 != 1)) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x10);
      }
      else {
        if (lVar6 < 9) {
          if (lVar6 == 6) {
            plVar10 = *(long **)(param_1 + 0xc);
            if ((*plVar10 != 4) || ((short)plVar10[5] != 0x12)) {
              (**(code **)(plVar10[1] + 0x20))(plVar10 + 4,plVar10[2],plVar10[3]);
            }
            break;
          }
          if (lVar6 != 7) {
            return;
          }
        }
        else {
          if (lVar6 != 9) {
            if (lVar6 != 10) {
              return;
            }
            plVar10 = *(long **)(param_1 + 0xc);
            func_0x000103dad9f8(plVar10);
            func_0x000103da4abc(plVar10[0xc]);
            if (plVar10[0xe] == -0x8000000000000000 || plVar10[0xe] == 0) break;
            lVar6 = plVar10[0xf];
            goto code_r0x000103dac01c;
          }
          if ((uVar7 < 8) && ((1L << (uVar7 & 0x3f) & 0x7bU) != 0)) {
            return;
          }
        }
        lVar6 = *(long *)(param_1 + 0xc);
      }
      if (lVar6 == 0) {
        return;
      }
      plVar10 = *(long **)(param_1 + 0xe);
      break;
    case 3:
    case 4:
      return;
    case 5:
    case 7:
    case 8:
    case 0xb:
    case 0xc:
      if (*(long *)(param_1 + 4) == 0) {
        return;
      }
      plVar10 = *(long **)(param_1 + 6);
      break;
    case 6:
      plVar10 = *(long **)(param_1 + 4);
      if (*plVar10 == 1) {
        uVar7 = plVar10[1];
        if ((uVar7 & 3) != 1) break;
        puVar11 = (undefined8 *)(uVar7 - 1);
        uVar13 = *puVar11;
        puVar12 = *(undefined8 **)(uVar7 + 7);
        pcVar9 = (code *)*puVar12;
        if (pcVar9 != (code *)0x0) {
          (*pcVar9)(uVar13);
        }
        if (puVar12[1] != 0) {
          _free(uVar13);
        }
      }
      else {
        if ((*plVar10 != 0) || (plVar10[2] == 0)) break;
        puVar11 = (undefined8 *)plVar10[1];
      }
code_r0x000103db4af0:
      _free(puVar11);
      break;
    case 9:
      if (*(long *)(param_1 + 6) == 0) {
        return;
      }
      plVar10 = *(long **)(param_1 + 8);
      break;
    case 10:
      if (*(long *)(param_1 + 4) == -0x8000000000000000 || *(long *)(param_1 + 4) == 0) {
        lVar6 = *(long *)(param_1 + 10);
      }
      else {
        _free(*(undefined8 *)(param_1 + 6));
        lVar6 = *(long *)(param_1 + 10);
      }
      if (lVar6 == 0) {
        return;
      }
      plVar10 = *(long **)(param_1 + 0xc);
      break;
    default:
      plVar10 = *(long **)(param_1 + 4);
      func_0x000103da939c(plVar10);
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
    if (*(long *)(param_1 + 4) == -0x8000000000000000 || *(long *)(param_1 + 4) == 0) {
      return;
    }
    goto code_r0x000103d99824;
  case 8:
    plVar10 = *(long **)(param_1 + 6);
    if (plVar10 == (long *)0x0) {
      return;
    }
    puVar11 = *(undefined8 **)(param_1 + 8);
    if ((code *)*puVar11 != (code *)0x0) {
      (*(code *)*puVar11)(plVar10);
    }
    break;
  case 9:
    plVar10 = *(long **)(param_1 + 4);
    if (*plVar10 == 1) {
      uVar7 = plVar10[1];
      if ((uVar7 & 3) != 1) goto code_r0x000108aa97c4;
      puVar11 = (undefined8 *)(uVar7 - 1);
      uVar13 = *puVar11;
      puVar12 = *(undefined8 **)(uVar7 + 7);
      pcVar9 = (code *)*puVar12;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar13);
      }
      if (puVar12[1] != 0) {
        _free(uVar13);
      }
    }
    else {
      if ((*plVar10 != 0) || (plVar10[2] == 0)) goto code_r0x000108aa97c4;
      puVar11 = (undefined8 *)plVar10[1];
    }
code_r0x000103d997b0:
    _free(puVar11);
    goto code_r0x000108aa97c4;
  case 0xc:
    switch((char)param_1[4]) {
    case '\0':
    case '\a':
    case '\b':
    case '\v':
      return;
    default:
      if (*(long *)(param_1 + 6) == 0) {
        return;
      }
      plVar10 = *(long **)(param_1 + 8);
      break;
    case '\x04':
      plVar10 = *(long **)(param_1 + 6);
      func_0x000103da939c();
    }
    goto code_r0x000108aa97c4;
  default:
LAB_103d9981c:
    if (*(long *)(param_1 + 4) == 0) {
      return;
    }
code_r0x000103d99824:
    plVar10 = *(long **)(param_1 + 6);
    goto code_r0x000108aa97c4;
  }
  if (puVar11[1] == 0) {
LAB_103d99850:
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar10);
  return;
}

