
void FUN_100f233f4(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  byte *pbVar5;
  undefined8 uVar6;
  char *pcVar7;
  char cVar8;
  byte bVar9;
  byte *pbVar10;
  long lVar11;
  byte extraout_w9;
  uint uVar12;
  undefined4 extraout_w9_00;
  undefined4 uVar13;
  int *unaff_x19;
  int *unaff_x20;
  long *plVar14;
  long *plVar15;
  byte bVar16;
  long *plVar17;
  byte unaff_w25;
  undefined1 auVar18 [16];
  byte bStack_d0;
  byte bStack_cf;
  undefined6 uStack_ce;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_31;
  
  pbVar5 = (byte *)*param_2;
  if (pbVar5 == (byte *)param_2[1]) {
    *(char *)param_1 = '\x17';
    return;
  }
  *param_2 = (long)(pbVar5 + 0x40);
  param_2[2] = (long)(pbVar5 + 0x20);
  param_2[3] = param_2[3] + 1;
  bVar9 = *pbVar5;
  uVar12 = (uint)bVar9;
  if (0xc < bVar9) {
    if (bVar9 == 0xd) {
      unaff_x19 = *(int **)(pbVar5 + 8);
      unaff_x20 = *(int **)(pbVar5 + 0x10);
      uVar12 = 0xd;
      if ((unaff_x20 != (int *)0x7) ||
         (uVar12 = *(uint *)((long)unaff_x19 + 3), *unaff_x19 != 0x6e6f736a || uVar12 != 0x6370726e)
         ) {
        bVar9 = (byte)uVar12;
        cVar8 = '\r';
        goto LAB_100f23668;
      }
    }
    else {
      if (bVar9 == 0xe) {
        pcVar7 = *(char **)(pbVar5 + 0x10);
        unaff_x19 = *(int **)(pbVar5 + 0x18);
        if (unaff_x19 == (int *)0x0) {
          unaff_x20 = (int *)0x1;
        }
        else {
          if ((((unaff_x19 == (int *)0x7) && (*pcVar7 == 'j')) && (pcVar7[1] == 's')) &&
             (((pcVar7[2] == 'o' && (pcVar7[3] == 'n')) &&
              ((pcVar7[4] == 'r' && ((pcVar7[5] == 'p' && (pcVar7[6] == 'c'))))))))
          goto LAB_100f23664;
          unaff_x20 = (int *)_malloc(unaff_x19);
          if (unaff_x20 == (int *)0x0) {
LAB_100f236b4:
            func_0x0001087c9084(1,unaff_x19);
LAB_100f236c0:
            auVar18 = func_0x0001087c9084(1,7);
            pcVar7 = auVar18._8_8_;
            pbVar5 = auVar18._0_8_;
            pbVar10 = *(byte **)(pcVar7 + 0x28);
            if (pbVar10 != *(byte **)(pcVar7 + 0x38)) {
              bVar9 = *pbVar10;
              *(byte **)(pcVar7 + 0x28) = pbVar10 + 0x40;
              if (bVar9 != 0x16) {
                *(long *)(pcVar7 + 0x40) = *(long *)(pcVar7 + 0x40) + 1;
                uVar6 = *(undefined8 *)(pbVar10 + 1);
                uStack_c7 = (undefined7)*(undefined8 *)(pbVar10 + 9);
                bStack_cf = (byte)uVar6;
                uStack_ce = (undefined6)((ulong)uVar6 >> 8);
                uStack_c8 = (undefined1)((ulong)uVar6 >> 0x38);
                plStack_b8 = *(long **)(pbVar10 + 0x18);
                uStack_a8 = *(undefined8 *)(pbVar10 + 0x28);
                uStack_b0 = *(undefined8 *)(pbVar10 + 0x20);
                uStack_c0 = (undefined1)*(undefined8 *)(pbVar10 + 0x10);
                uStack_bf = (undefined7)((ulong)*(undefined8 *)(pbVar10 + 0x10) >> 8);
                uStack_98 = *(undefined8 *)(pbVar10 + 0x38);
                uStack_a0 = *(undefined8 *)(pbVar10 + 0x30);
                bStack_d0 = bVar9;
                if (*pcVar7 != '\x16') {
                  FUN_100e077ec(pcVar7);
                }
                plVar15 = plStack_b8;
                *(undefined8 *)(pcVar7 + 8) = uStack_a8;
                *(undefined8 *)pcVar7 = uStack_b0;
                *(undefined8 *)(pcVar7 + 0x18) = uStack_98;
                *(undefined8 *)(pcVar7 + 0x10) = uStack_a0;
                plVar3 = (long *)CONCAT71(uStack_c7,uStack_c8);
                plVar14 = (long *)CONCAT71(uStack_bf,uStack_c0);
                if (bVar9 < 0xd) {
                  unaff_w25 = bStack_cf;
                  if ((bVar9 != 1) && (bVar9 != 4)) {
                    if (bVar9 != 0xc) {
LAB_100f23a74:
                      uVar6 = FUN_108855b04(&bStack_d0,&uStack_b0,&UNK_10b20efe0);
                      *(undefined8 *)(pbVar5 + 8) = uVar6;
                      bVar9 = 0x18;
                      goto LAB_100f23718;
                    }
                    if (plStack_b8 != (long *)0x0) {
                      if (plStack_b8 == (long *)0xb) {
                        if (*plVar14 == 0x697461746f6e6e61 &&
                            *(long *)((long)plVar14 + 3) == 0x736e6f697461746f) goto LAB_100f23948;
                        param_1 = (long *)_malloc(0xb);
                        plVar17 = (long *)0xb;
                        if (param_1 != (long *)0x0) {
                          lVar11 = *plVar14;
                          *(undefined4 *)((long)param_1 + 7) = *(undefined4 *)((long)plVar14 + 7);
                          *param_1 = lVar11;
                          bVar16 = 0xc;
                          bVar9 = 0xc;
                          goto joined_r0x000100f239e4;
                        }
                      }
                      else {
                        param_1 = (long *)_malloc(plStack_b8);
                        plVar17 = plVar15;
                        if (param_1 != (long *)0x0) goto LAB_100f23a0c;
                      }
                      func_0x0001087c9084(1,plVar17);
LAB_100f23aa4:
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100f23aa8);
                      (*pcVar4)();
                    }
                    param_1 = (long *)0x1;
LAB_100f23a0c:
                    _memcpy(param_1,plVar14,plVar15);
                    bVar16 = 0xc;
                    bVar9 = 0xc;
joined_r0x000100f239e4:
                    if (plVar3 != (long *)0x0) {
                      _free(plVar14);
                      bVar9 = bVar16;
                    }
                    goto LAB_100f23a48;
                  }
                }
                else if (bVar9 == 0xd) {
                  if (plVar14 == (long *)0xb) {
                    if (*plVar3 == 0x697461746f6e6e61 &&
                        *(long *)((long)plVar3 + 3) == 0x736e6f697461746f) {
LAB_100f23a34:
                      bVar9 = 0x16;
                    }
                    else {
                      bVar9 = 0xd;
                      plVar14 = (long *)0xb;
                    }
                  }
                  else {
                    bVar9 = 0xd;
                  }
                }
                else {
                  if (bVar9 == 0xe) {
                    if (plStack_b8 == (long *)0x0) {
                      param_1 = (long *)0x1;
                    }
                    else {
                      if ((((plStack_b8 == (long *)0xb) && ((char)*plVar14 == 'a')) &&
                          (*(char *)((long)plVar14 + 1) == 'n')) &&
                         (((*(char *)((long)plVar14 + 2) == 'n' &&
                           (*(char *)((long)plVar14 + 3) == 'o')) &&
                          ((((*(char *)((long)plVar14 + 4) == 't' &&
                             ((*(char *)((long)plVar14 + 5) == 'a' &&
                              (*(char *)((long)plVar14 + 6) == 't')))) &&
                            (*(char *)((long)plVar14 + 7) == 'i')) &&
                           ((((char)plVar14[1] == 'o' && (*(char *)((long)plVar14 + 9) == 'n')) &&
                            (*(char *)((long)plVar14 + 10) == 's')))))))) {
LAB_100f23948:
                        bVar16 = 0x16;
                        bVar9 = 0x16;
                        goto joined_r0x000100f239e4;
                      }
                      param_1 = (long *)_malloc(plStack_b8);
                      if (param_1 == (long *)0x0) {
                        func_0x0001087c9084(1,plVar15);
                        goto LAB_100f23aa4;
                      }
                    }
                    _memcpy(param_1,plVar14,plVar15);
                    bVar16 = 0xe;
                    bVar9 = 0xe;
                    goto joined_r0x000100f239e4;
                  }
                  if (bVar9 != 0xf) goto LAB_100f23a74;
                  if (plVar14 == (long *)0xb) {
                    if ((char)*plVar3 == 'a') {
                      bVar9 = 0xf;
                      plVar14 = (long *)0xb;
                      if ((*(char *)((long)plVar3 + 1) == 'n') &&
                         (*(char *)((long)plVar3 + 2) == 'n')) {
                        if (((*(char *)((long)plVar3 + 3) == 'o') &&
                            ((*(char *)((long)plVar3 + 4) == 't' &&
                             (*(char *)((long)plVar3 + 5) == 'a')))) &&
                           ((*(char *)((long)plVar3 + 6) == 't' &&
                            ((((*(char *)((long)plVar3 + 7) == 'i' && ((char)plVar3[1] == 'o')) &&
                              (*(char *)((long)plVar3 + 9) == 'n')) &&
                             (*(char *)((long)plVar3 + 10) == 's')))))) goto LAB_100f23a34;
                        plVar14 = (long *)0xb;
                      }
                    }
                    else {
                      bVar9 = 0xf;
                      plVar14 = (long *)0xb;
                    }
                  }
                  else {
                    bVar9 = 0xf;
                  }
                }
                FUN_100e077ec(&bStack_d0);
                plVar15 = plVar3;
                param_1 = plVar14;
LAB_100f23a48:
                *pbVar5 = bVar9;
                pbVar5[1] = unaff_w25;
                *(long **)(pbVar5 + 8) = plVar15;
                *(long **)(pbVar5 + 0x10) = param_1;
                *(long **)(pbVar5 + 0x18) = plVar15;
                return;
              }
            }
            bVar9 = 0x17;
LAB_100f23718:
            *pbVar5 = bVar9;
            return;
          }
        }
        _memcpy(unaff_x20,pcVar7,unaff_x19);
        cVar8 = '\x0e';
        bVar9 = extraout_w9;
        goto LAB_100f23668;
      }
      if (bVar9 != 0xf) goto LAB_100f2368c;
      unaff_x19 = *(int **)(pbVar5 + 8);
      unaff_x20 = *(int **)(pbVar5 + 0x10);
      if (((((unaff_x20 != (int *)0x7) || ((char)*unaff_x19 != 'j')) ||
           (*(char *)((long)unaff_x19 + 1) != 's')) ||
          ((*(char *)((long)unaff_x19 + 2) != 'o' || (*(char *)((long)unaff_x19 + 3) != 'n')))) ||
         (((char)unaff_x19[1] != 'r' ||
          ((*(char *)((long)unaff_x19 + 5) != 'p' || (*(char *)((long)unaff_x19 + 6) != 'c')))))) {
        cVar8 = '\x0f';
        goto LAB_100f23668;
      }
    }
LAB_100f23664:
    bVar9 = (byte)uVar12;
    cVar8 = '\x16';
    goto LAB_100f23668;
  }
  if (bVar9 == 1) {
    bVar9 = pbVar5[1];
    cVar8 = '\x01';
    goto LAB_100f23668;
  }
  if (bVar9 == 4) {
    unaff_x19 = *(int **)(pbVar5 + 8);
    cVar8 = '\x04';
    goto LAB_100f23668;
  }
  if (bVar9 != 0xc) {
LAB_100f2368c:
    lVar11 = FUN_108855c40(pbVar5,&uStack_31,&UNK_10b214ba8);
    param_1[1] = lVar11;
    *(char *)param_1 = '\x18';
    return;
  }
  piVar1 = *(int **)(pbVar5 + 0x10);
  unaff_x19 = *(int **)(pbVar5 + 0x18);
  if (unaff_x19 == (int *)0x0) {
    unaff_x20 = (int *)0x1;
LAB_100f23648:
    _memcpy(unaff_x20,piVar1,unaff_x19);
    uVar13 = extraout_w9_00;
  }
  else {
    if (unaff_x19 != (int *)0x7) {
      unaff_x20 = (int *)_malloc(unaff_x19);
      if (unaff_x20 == (int *)0x0) goto LAB_100f236b4;
      goto LAB_100f23648;
    }
    uVar12 = *(uint *)((long)piVar1 + 3);
    if (*piVar1 == 0x6e6f736a && uVar12 == 0x6370726e) goto LAB_100f23664;
    unaff_x20 = (int *)_malloc(7);
    if (unaff_x20 == (int *)0x0) goto LAB_100f236c0;
    iVar2 = *piVar1;
    uVar13 = *(undefined4 *)((long)piVar1 + 3);
    *(undefined4 *)((long)unaff_x20 + 3) = uVar13;
    *unaff_x20 = iVar2;
  }
  bVar9 = (byte)uVar13;
  cVar8 = '\f';
LAB_100f23668:
  *(char *)param_1 = cVar8;
  *(byte *)((long)param_1 + 1) = bVar9;
  param_1[1] = (long)unaff_x19;
  param_1[2] = (long)unaff_x20;
  param_1[3] = (long)unaff_x19;
  return;
}

