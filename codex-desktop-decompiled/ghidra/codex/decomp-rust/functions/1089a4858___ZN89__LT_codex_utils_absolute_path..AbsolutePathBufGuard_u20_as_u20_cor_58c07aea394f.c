
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN89__LT_codex_utils_absolute_path__AbsolutePathBufGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h327d108261752884E
               (void)

{
  ulong *puVar1;
  ulong *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  int aiStack_110 [2];
  long lStack_108;
  long lStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  char cStack_e8;
  undefined8 *puStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff70;
  undefined8 in_stack_ffffffffffffff78;
  
  plVar4 = (long *)(*
                   ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                   )();
  if ((char)plVar4[4] != '\x01') {
    if ((char)plVar4[4] == '\x02') {
      plVar4 = (long *)func_0x000108a82a50(&UNK_10b38f438);
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(plVar4,&DAT_1055621b8)
    ;
    *(undefined1 *)(plVar4 + 4) = 1;
  }
  if (*plVar4 == 0) {
    *plVar4 = -1;
    if ((plVar4[1] & 0x7fffffffffffffffU) == 0) {
      lVar6 = 0;
    }
    else {
      _free(plVar4[2]);
      lVar6 = *plVar4 + 1;
    }
    *plVar4 = lVar6;
    plVar4[1] = -0x8000000000000000;
    return;
  }
  lVar6 = __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b38f568);
  if (*(long *)(lVar6 + 0x18) == -0x8000000000000000) {
    plVar4 = *(long **)(lVar6 + 8);
    if (*(long *)(lVar6 + 0x10) == 10) {
      if (*plVar4 == 0x6e6f2d646165723a && (short)plVar4[1] == 0x796c) {
        puVar5 = (undefined8 *)_malloc(0x38);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = 0x8000000000000000;
          *(undefined1 *)(puVar5 + 6) = 0;
          *extraout_x8 = 1;
          extraout_x8[1] = (long)puVar5;
          extraout_x8[3] = 0;
          extraout_x8[2] = 1;
          *(undefined1 *)(extraout_x8 + 4) = 0;
          return;
        }
        plVar4 = (long *)func_0x0001087c906c(8,0x38);
        if (*plVar4 != 0) {
          _free(plVar4[1]);
        }
        if ((plVar4[3] & 0x7fffffffffffffffU) != 0) {
          _free(plVar4[4]);
        }
        uVar10 = plVar4[6];
        uVar8 = uVar10;
        if (uVar10 < 0x8000000000000001) {
          uVar8 = 0;
        }
        if ((uVar8 & 0x7fffffffffffffff) == 0 && uVar10 != 0x8000000000000000) {
          puVar11 = (ulong *)plVar4[7];
          puVar2 = puVar11;
          for (lVar6 = plVar4[8]; lVar6 != 0; lVar6 = lVar6 + -1) {
            uVar8 = *puVar2;
            lVar7 = uVar8 + 0x7ffffffffffffffb;
            if (uVar8 < 0x8000000000000005) {
              lVar7 = 2;
            }
            if ((lVar7 == 0) || (lVar7 == 1)) {
              uVar8 = puVar2[1];
joined_r0x000105563e44:
              if (uVar8 != 0) {
                lVar7 = 0x10;
LAB_105563e4c:
                _free(*(undefined8 *)((long)puVar2 + lVar7));
              }
            }
            else {
              uVar9 = uVar8 ^ 0x8000000000000000;
              if (-1 < (long)uVar8) {
                uVar9 = 5;
              }
              if (uVar9 < 5) {
                if (uVar9 == 2) {
                  uVar8 = puVar2[1] & 0x7fffffffffffffff;
                  goto joined_r0x000105563e44;
                }
              }
              else {
                if (uVar8 != 0) {
                  _free(puVar2[1]);
                }
                if ((puVar2[3] & 0x7fffffffffffffff) != 0) {
                  lVar7 = 0x20;
                  goto LAB_105563e4c;
                }
              }
            }
            puVar2 = puVar2 + 7;
          }
          puStack_f8 = puVar11;
          if (uVar10 != 0) goto code_r0x000108aa97c4;
        }
        return;
      }
      if (*plVar4 == 0x6170736b726f773a && (short)plVar4[1] == 0x6563) {
        func_0x0001089a3200(aiStack_110,8,0,0,0);
        puVar2 = puStack_f8;
        lVar6 = lStack_f0;
        if (cStack_e8 == '\0') {
          if (lStack_f0 == 0) {
            puStack_c8 = (undefined8 *)0x8;
          }
          else {
            lVar7 = lStack_f0 * 0x38;
            puVar5 = (undefined8 *)_malloc(lVar7);
            if (puVar5 == (undefined8 *)0x0) {
              func_0x0001087c9084(8,lVar7);
              goto LAB_1089a4a8c;
            }
            lVar12 = 0;
            lStack_d0 = lStack_f0;
            puVar11 = puStack_f8;
            puStack_c8 = puVar5;
            do {
              if (lVar7 == 0) break;
              FUN_1049d0944(&uStack_b8,puVar11);
              lVar12 = lVar12 + 1;
              puVar1 = puVar11 + 6;
              puVar11 = puVar11 + 7;
              in_stack_ffffffffffffff78 =
                   CONCAT71((int7)((ulong)in_stack_ffffffffffffff78 >> 8),(char)*puVar1);
              puVar5[1] = uStack_b0;
              *puVar5 = uStack_b8;
              puVar5[3] = in_stack_ffffffffffffff60;
              puVar5[2] = uStack_a8;
              puVar5[5] = in_stack_ffffffffffffff70;
              puVar5[4] = in_stack_ffffffffffffff68;
              puVar5[6] = in_stack_ffffffffffffff78;
              lVar7 = lVar7 + -0x38;
              puVar5 = puVar5 + 7;
            } while (lStack_f0 != lVar12);
          }
          if (aiStack_110[0] == 0) {
            lStack_108 = 0;
          }
          *extraout_x8 = lStack_f0;
          extraout_x8[2] = lStack_f0;
          extraout_x8[1] = (long)puStack_c8;
          extraout_x8[3] = lStack_108;
          *(undefined1 *)(extraout_x8 + 4) = 0;
          puStack_e0 = puStack_c8;
        }
        else {
          if (cStack_e8 != '\x01') {
            __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108e54fc3,0xeb,&UNK_10b33f960);
LAB_1089a4a8c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1089a4a90);
            (*pcVar3)();
          }
          *extraout_x8 = -0x8000000000000000;
          extraout_x8[2] = lStack_d8;
          extraout_x8[1] = (long)puStack_e0;
          extraout_x8[3] = 1;
          *(undefined1 *)(extraout_x8 + 4) = 0;
        }
        for (; lVar6 != 0; lVar6 = lVar6 + -1) {
          uVar8 = *puVar2;
          lVar7 = uVar8 + 0x7ffffffffffffffb;
          if (uVar8 < 0x8000000000000005) {
            lVar7 = 2;
          }
          if ((lVar7 == 0) || (lVar7 == 1)) {
            uVar8 = puVar2[1];
joined_r0x0001089a4998:
            if (uVar8 != 0) {
              lVar7 = 0x10;
LAB_1089a49a0:
              _free(*(undefined8 *)((long)puVar2 + lVar7));
            }
          }
          else {
            uVar10 = uVar8 ^ 0x8000000000000000;
            if (-1 < (long)uVar8) {
              uVar10 = 5;
            }
            if (uVar10 < 5) {
              if (uVar10 == 2) {
                uVar8 = puVar2[1] & 0x7fffffffffffffff;
                goto joined_r0x0001089a4998;
              }
            }
            else {
              if (uVar8 != 0) {
                _free(puVar2[1]);
              }
              if ((puVar2[3] & 0x7fffffffffffffff) != 0) {
                lVar7 = 0x20;
                goto LAB_1089a49a0;
              }
            }
          }
          puVar2 = puVar2 + 7;
        }
        if (lStack_100 == 0) {
          return;
        }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_10b61b0a8)(puStack_f8);
        return;
      }
    }
    else if ((*(long *)(lVar6 + 0x10) == 0x13) &&
            ((*plVar4 == 0x2d7265676e61643a && plVar4[1] == 0x6363612d6c6c7566) &&
             *(long *)((long)plVar4 + 0xb) == 0x7373656363612d6c)) {
      lVar6 = -0x7fffffffffffffff;
      goto LAB_105563d34;
    }
  }
  lVar6 = -0x7ffffffffffffffd;
LAB_105563d34:
  *extraout_x8 = lVar6;
  return;
}

