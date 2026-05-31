
void FUN_103dafa60(int *param_1)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ushort *puVar10;
  code *pcVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong in_xzr;
  long alStack_350 [96];
  undefined8 uStack_50;
  int *piStack_48;
  
  if (*param_1 == 0) {
    cVar4 = *(char *)((long)param_1 + 0x211);
    if (cVar4 == '\0') {
      func_0x000103da2320(param_1 + 2);
      plVar13 = (long *)(param_1 + 0x3e);
      lVar14 = *plVar13;
      LOAcquire();
      lVar8 = *(long *)(lVar14 + 0x1f0);
      *(long *)(lVar14 + 0x1f0) = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        LOAcquire();
        lVar8 = *(long *)(lVar14 + 0x88);
        *(long *)(lVar14 + 0x88) = lVar8 + 1;
        lVar8 = func_0x000103e3366c(lVar14 + 0x80,lVar8);
        *(ulong *)(lVar8 + 0x6210) = *(ulong *)(lVar8 + 0x6210) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar14 + 0x110);
        LOAcquire();
        uVar9 = *puVar1;
        *puVar1 = uVar9 | 2;
        LORelease();
        if (uVar9 == 0) {
          lVar8 = *(long *)(lVar14 + 0x100);
          *(undefined8 *)(lVar14 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 8))(*(undefined8 *)(lVar14 + 0x108));
          }
        }
      }
      lVar8 = *(long *)*plVar13;
      *(long *)*plVar13 = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17haf4d1ee58cf8c660E(plVar13);
      }
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (param_1 + 0x40);
      lVar8 = **(long **)(param_1 + 0x40);
      **(long **)(param_1 + 0x40) = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        plVar13 = *(long **)(param_1 + 0x40);
        FUN_10611d000(plVar13 + 6);
        if (plVar13 != (long *)0xffffffffffffffff) {
          lVar8 = plVar13[1];
          plVar13[1] = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            goto code_r0x000108aa97c4;
          }
        }
        return;
      }
    }
    else {
      if (cVar4 == '\x03') {
        uStack_50 = *(undefined8 *)(param_1 + 0x8c);
        piStack_48 = param_1 + 0x9a;
        FUN_1060fb5d4(&uStack_50);
        if (*(long *)(param_1 + 0x94) != 0) {
          (**(code **)(*(long *)(param_1 + 0x94) + 0x18))(*(undefined8 *)(param_1 + 0x96));
        }
      }
      else {
        if (cVar4 != '\x04') {
          return;
        }
        func_0x000103d9d8cc(param_1 + 0x88);
        *(undefined1 *)((long)param_1 + 0x213) = 0;
      }
      func_0x000103da2320(param_1 + 0x48);
      __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
                (param_1 + 0x44);
      lVar8 = **(long **)(param_1 + 0x44);
      **(long **)(param_1 + 0x44) = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x44);
      }
      lVar14 = *(long *)(param_1 + 0x42);
      LOAcquire();
      lVar8 = *(long *)(lVar14 + 0x1f0);
      *(long *)(lVar14 + 0x1f0) = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        LOAcquire();
        lVar8 = *(long *)(lVar14 + 0x88);
        *(long *)(lVar14 + 0x88) = lVar8 + 1;
        lVar8 = func_0x000103e3366c(lVar14 + 0x80,lVar8);
        *(ulong *)(lVar8 + 0x6210) = *(ulong *)(lVar8 + 0x6210) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(lVar14 + 0x110);
        LOAcquire();
        uVar9 = *puVar1;
        *puVar1 = uVar9 | 2;
        LORelease();
        if (uVar9 == 0) {
          lVar8 = *(long *)(lVar14 + 0x100);
          *(undefined8 *)(lVar14 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar8 != 0) {
            (**(code **)(lVar8 + 8))(*(undefined8 *)(lVar14 + 0x108));
          }
        }
      }
      lVar8 = **(long **)(param_1 + 0x42);
      **(long **)(param_1 + 0x42) = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        plVar13 = *(long **)(param_1 + 0x42);
        uVar9 = plVar13[0x36];
        do {
          lVar8 = plVar13[0x34];
          uVar12 = *(ulong *)(lVar8 + 0x6200);
          while (uVar12 != (uVar9 & 0xffffffffffffffe0)) {
            lVar8 = *(long *)(lVar8 + 0x6208);
            if (lVar8 == 0) goto LAB_105ca7ab8;
            plVar13[0x34] = lVar8;
            InstructionSynchronizationBarrier();
            uVar12 = *(ulong *)(lVar8 + 0x6200);
          }
          lVar14 = plVar13[0x35];
          if (lVar14 == lVar8) {
            uVar9 = plVar13[0x36] & 0x1f;
            uVar12 = *(ulong *)(lVar8 + 0x6210) >> uVar9;
          }
          else {
            do {
              if (((*(ulong *)(lVar14 + 0x6210) >> 0x20 & 1) == 0) ||
                 ((ulong)plVar13[0x36] < *(ulong *)(lVar14 + 0x6218))) break;
              if (*(long *)(lVar14 + 0x6208) == 0) {
                func_0x000108a07a20(&UNK_10b4435c0);
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x105ca7b44);
                (*pcVar11)();
              }
              plVar13[0x35] = *(long *)(lVar14 + 0x6208);
              *(undefined8 *)(lVar14 + 0x6200) = 0;
              *(undefined8 *)(lVar14 + 0x6210) = 0;
              *(undefined8 *)(lVar14 + 0x6208) = 0;
              lVar8 = plVar13[0x10];
              *(long *)(lVar14 + 0x6200) = *(long *)(lVar8 + 0x6200) + 0x20;
              plVar2 = (long *)(lVar8 + 0x6208);
              lVar8 = *plVar2;
              if (lVar8 == 0) {
                *plVar2 = lVar14;
              }
              else {
                *(long *)(lVar14 + 0x6200) = *(long *)(lVar8 + 0x6200) + 0x20;
                lVar3 = *(long *)(lVar8 + 0x6208);
                if (lVar3 == 0) {
                  *(long *)(lVar8 + 0x6208) = lVar14;
                }
                else {
                  *(long *)(lVar14 + 0x6200) = *(long *)(lVar3 + 0x6200) + 0x20;
                  if (*(long *)(lVar3 + 0x6208) == 0) {
                    *(long *)(lVar3 + 0x6208) = lVar14;
                  }
                  else {
                    _free();
                  }
                }
              }
              InstructionSynchronizationBarrier();
              lVar14 = plVar13[0x35];
            } while (lVar14 != plVar13[0x34]);
            lVar8 = plVar13[0x34];
            uVar9 = plVar13[0x36] & 0x1f;
            uVar12 = *(ulong *)(lVar8 + 0x6210) >> uVar9;
          }
          if (((uVar12 & 1) == 0) ||
             (_memcpy(alStack_350,lVar8 + uVar9 * 0x310,0x310), alStack_350[0] - 0x15U < 2))
          goto LAB_105ca7ab8;
          uVar9 = plVar13[0x36] + 1;
          plVar13[0x36] = uVar9;
          FUN_105c9c774(alStack_350);
        } while( true );
      }
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  puVar10 = (ushort *)(param_1 + 2);
  if (*puVar10 == 0x1f) {
    return;
  }
  if (*puVar10 == 0x20) {
    plVar13 = *(long **)(param_1 + 6);
    if (plVar13 == (long *)0x0) {
      return;
    }
    puVar15 = *(undefined8 **)(param_1 + 8);
    pcVar11 = (code *)*puVar15;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(plVar13);
    }
    if (puVar15[1] == 0) {
      return;
    }
    goto code_r0x000108aa97c4;
  }
  uVar5 = *puVar10;
  iVar6 = uVar5 - 0x11;
  if (uVar5 < 0x11) {
    iVar6 = 2;
  }
  switch(iVar6) {
  case 0:
    if ((char)param_1[4] != '\0') {
      return;
    }
    plVar13 = *(long **)(param_1 + 6);
    puVar15 = *(undefined8 **)(param_1 + 8);
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(plVar13);
    }
    break;
  case 1:
    uVar9 = *(ulong *)(param_1 + 4);
    if ((uVar9 & 3) != 1) {
      return;
    }
    plVar13 = (long *)(uVar9 - 1);
    puVar15 = (undefined8 *)*plVar13;
    puVar16 = *(undefined8 **)(uVar9 + 7);
    pcVar11 = (code *)*puVar16;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(puVar15);
    }
    if (puVar16[1] == 0) goto code_r0x000108aa97c4;
    goto code_r0x000103d997b0;
  case 2:
    uVar7 = uVar5 - 0xe;
    if (uVar5 < 0xe) {
      uVar7 = 1;
    }
    if (uVar7 == 0) {
      return;
    }
    if ((uVar7 & 0xffff) != 1) goto LAB_103d9981c;
    switch(*puVar10) {
    case 0:
      uVar9 = *(ulong *)(param_1 + 4);
      if ((uVar9 & 3) != 1) {
        return;
      }
      plVar13 = (long *)(uVar9 - 1);
      puVar15 = (undefined8 *)*plVar13;
      puVar16 = *(undefined8 **)(uVar9 + 7);
      pcVar11 = (code *)*puVar16;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(puVar15);
      }
      if (puVar16[1] == 0) break;
      goto code_r0x000103db4af0;
    case 1:
      if (*(long *)(param_1 + 8) == 0) {
        return;
      }
      plVar13 = *(long **)(param_1 + 10);
      break;
    case 2:
      if (*(long *)(param_1 + 4) != 0) {
        _free(*(undefined8 *)(param_1 + 6));
      }
      uVar9 = *(ulong *)(param_1 + 10);
      lVar8 = 9;
      if (8 < uVar9) {
        lVar8 = uVar9 - 9;
      }
      if (lVar8 < 6) {
        if (lVar8 == 2) {
          uVar9 = *(ulong *)(param_1 + 0xc);
          if ((uVar9 & 3) != 1) {
            return;
          }
          plVar13 = (long *)(uVar9 - 1);
          lVar8 = *plVar13;
          puVar15 = *(undefined8 **)(uVar9 + 7);
          pcVar11 = (code *)*puVar15;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(lVar8);
          }
          if (puVar15[1] == 0) break;
code_r0x000103dac01c:
          _free(lVar8);
          break;
        }
        if (lVar8 == 3) {
          plVar13 = *(long **)(param_1 + 0xc);
          if (plVar13 == (long *)0x0) {
            return;
          }
          func_0x000103da86b8(plVar13);
          break;
        }
        if (lVar8 != 5) {
          return;
        }
        uVar9 = *(ulong *)(param_1 + 0xc);
        lVar8 = uVar9 - 3;
        if (uVar9 < 3) {
          lVar8 = 8;
        }
        if (lVar8 == 0xb) {
          plVar13 = *(long **)(param_1 + 0xe);
          if (*plVar13 != 0) {
            (**(code **)(*plVar13 + 0x20))(plVar13 + 3,plVar13[1],plVar13[2]);
          }
          break;
        }
        if (lVar8 != 8) {
          return;
        }
        if ((uVar9 != 0) && (uVar9 != 1)) {
          return;
        }
        lVar8 = *(long *)(param_1 + 0x10);
      }
      else {
        if (lVar8 < 9) {
          if (lVar8 == 6) {
            plVar13 = *(long **)(param_1 + 0xc);
            if ((*plVar13 != 4) || ((short)plVar13[5] != 0x12)) {
              (**(code **)(plVar13[1] + 0x20))(plVar13 + 4,plVar13[2],plVar13[3]);
            }
            break;
          }
          if (lVar8 != 7) {
            return;
          }
        }
        else {
          if (lVar8 != 9) {
            if (lVar8 != 10) {
              return;
            }
            plVar13 = *(long **)(param_1 + 0xc);
            func_0x000103dad9f8(plVar13);
            func_0x000103da4abc(plVar13[0xc]);
            if (plVar13[0xe] == -0x8000000000000000 || plVar13[0xe] == 0) break;
            lVar8 = plVar13[0xf];
            goto code_r0x000103dac01c;
          }
          if ((uVar9 < 8) && ((1L << (uVar9 & 0x3f) & 0x7bU) != 0)) {
            return;
          }
        }
        lVar8 = *(long *)(param_1 + 0xc);
      }
      if (lVar8 == 0) {
        return;
      }
      plVar13 = *(long **)(param_1 + 0xe);
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
      plVar13 = *(long **)(param_1 + 6);
      break;
    case 6:
      plVar13 = *(long **)(param_1 + 4);
      if (*plVar13 == 1) {
        uVar9 = plVar13[1];
        if ((uVar9 & 3) != 1) break;
        puVar15 = (undefined8 *)(uVar9 - 1);
        uVar17 = *puVar15;
        puVar16 = *(undefined8 **)(uVar9 + 7);
        pcVar11 = (code *)*puVar16;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar17);
        }
        if (puVar16[1] != 0) {
          _free(uVar17);
        }
      }
      else {
        if ((*plVar13 != 0) || (plVar13[2] == 0)) break;
        puVar15 = (undefined8 *)plVar13[1];
      }
code_r0x000103db4af0:
      _free(puVar15);
      break;
    case 9:
      if (*(long *)(param_1 + 6) == 0) {
        return;
      }
      plVar13 = *(long **)(param_1 + 8);
      break;
    case 10:
      if (*(long *)(param_1 + 4) == -0x8000000000000000 || *(long *)(param_1 + 4) == 0) {
        lVar8 = *(long *)(param_1 + 10);
      }
      else {
        _free(*(undefined8 *)(param_1 + 6));
        lVar8 = *(long *)(param_1 + 10);
      }
      if (lVar8 == 0) {
        return;
      }
      plVar13 = *(long **)(param_1 + 0xc);
      break;
    default:
      plVar13 = *(long **)(param_1 + 4);
      func_0x000103da939c(plVar13);
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
    plVar13 = *(long **)(param_1 + 6);
    if (plVar13 == (long *)0x0) {
      return;
    }
    puVar15 = *(undefined8 **)(param_1 + 8);
    if ((code *)*puVar15 != (code *)0x0) {
      (*(code *)*puVar15)(plVar13);
    }
    break;
  case 9:
    plVar13 = *(long **)(param_1 + 4);
    if (*plVar13 == 1) {
      uVar9 = plVar13[1];
      if ((uVar9 & 3) != 1) goto code_r0x000108aa97c4;
      puVar15 = (undefined8 *)(uVar9 - 1);
      uVar17 = *puVar15;
      puVar16 = *(undefined8 **)(uVar9 + 7);
      pcVar11 = (code *)*puVar16;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar17);
      }
      if (puVar16[1] != 0) {
        _free(uVar17);
      }
    }
    else {
      if ((*plVar13 != 0) || (plVar13[2] == 0)) goto code_r0x000108aa97c4;
      puVar15 = (undefined8 *)plVar13[1];
    }
code_r0x000103d997b0:
    _free(puVar15);
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
      plVar13 = *(long **)(param_1 + 8);
      break;
    case '\x04':
      plVar13 = *(long **)(param_1 + 6);
      func_0x000103da939c();
    }
    goto code_r0x000108aa97c4;
  default:
LAB_103d9981c:
    if (*(long *)(param_1 + 4) == 0) {
      return;
    }
code_r0x000103d99824:
    plVar13 = *(long **)(param_1 + 6);
    goto code_r0x000108aa97c4;
  }
  if (puVar15[1] == 0) {
LAB_103d99850:
    return;
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar13);
  return;
LAB_105ca7ab8:
  lVar8 = plVar13[0x35];
  do {
    lVar8 = *(long *)(lVar8 + 0x6208);
    _free();
  } while (lVar8 != 0);
  if (plVar13[0x20] != 0) {
    (**(code **)(plVar13[0x20] + 0x18))(plVar13[0x21]);
  }
  if (plVar13 != (long *)0xffffffffffffffff) {
    lVar8 = plVar13[1];
    plVar13[1] = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
      goto code_r0x000108aa97c4;
    }
  }
  return;
}

