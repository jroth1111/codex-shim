
/* WARNING: Possible PIC construction at 0x0001033977cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103397828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103397910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033978dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033977a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010338ef00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033ae268: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010338ef04) */
/* WARNING: Removing unreachable block (ram,0x0001033977ac) */
/* WARNING: Removing unreachable block (ram,0x0001033978e0) */
/* WARNING: Removing unreachable block (ram,0x000103397914) */
/* WARNING: Removing unreachable block (ram,0x0001033977d0) */
/* WARNING: Removing unreachable block (ram,0x0001033ae26c) */
/* WARNING: Removing unreachable block (ram,0x0001033ae284) */
/* WARNING: Removing unreachable block (ram,0x0001033ae278) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10338ee2c(long *param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  ulong uVar7;
  long *unaff_x22;
  long lVar8;
  long *unaff_x23;
  long lVar9;
  long unaff_x24;
  undefined8 *puVar10;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar2 = &stack0xfffffffffffffff0;
  lVar8 = 0;
  if (*param_1 != 0) {
    lVar8 = *param_1 + -1;
  }
  if (1 < lVar8) {
    if (lVar8 == 2) {
      if (param_1[0x17] != 0) {
        _free(param_1[0x18]);
      }
      if (param_1[0x1a] != 0) {
        _free(param_1[0x1b]);
      }
      puVar2 = (undefined1 *)register0x00000008;
      plVar4 = param_1 + 1;
      plVar3 = unaff_x19;
      goto SUB_103397704;
    }
    if (lVar8 == 3) {
      if (param_1[1] == 0) {
        return;
      }
      unaff_x20 = (long *)param_1[2];
      goto code_r0x000108aa97c4;
    }
    if (lVar8 == 4) {
      lVar8 = param_1[4];
      if ((lVar8 != -0x7fffffffffffffff) && (lVar8 != -0x8000000000000000)) {
        lVar6 = param_1[5];
        lVar9 = param_1[6];
        if (lVar9 != 0) {
          puVar10 = (undefined8 *)(lVar6 + 8);
          do {
            if (puVar10[-1] != 0) {
              _free(*puVar10);
            }
            puVar10 = puVar10 + 3;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (lVar8 != 0) {
          _free(lVar6);
        }
      }
      lVar8 = param_1[7];
      if (lVar8 != -0x7fffffffffffffff) {
        if ((lVar8 != -0x8000000000000000) && (lVar8 != 0)) {
          _free(param_1[8]);
        }
        if ((param_1[10] != -0x8000000000000000) && (param_1[10] != 0)) {
          _free(param_1[0xb]);
        }
        if ((param_1[0xd] != -0x8000000000000000) && (param_1[0xd] != 0)) {
          _free(param_1[0xe]);
        }
        if ((param_1[0x10] != -0x8000000000000000) && (param_1[0x10] != 0)) {
          _free(param_1[0x11]);
        }
      }
      lVar8 = param_1[1];
      if (lVar8 == -0x8000000000000000) {
        return;
      }
      unaff_x20 = (long *)param_1[2];
      lVar6 = param_1[3];
      if (lVar6 != 0) {
        plVar3 = unaff_x20 + 1;
        do {
          if (plVar3[-1] != 0) {
            _free(*plVar3);
          }
          plVar3 = plVar3 + 3;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (lVar8 == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
LAB_10338ef6c:
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    if (param_1[7] != 0) {
      _free(param_1[8]);
    }
    if (param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if (param_1[0xd] == 0) {
      return;
    }
    unaff_x20 = (long *)param_1[0xe];
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  }
  plVar3 = param_1;
  if (lVar8 != 0) {
    if (lVar8 != 1) goto LAB_10338ef6c;
    if (param_1[1] != 0) {
      _free(param_1[2]);
    }
    if (param_1[4] != 0) {
      _free(param_1[5]);
    }
    unaff_x20 = (long *)param_1[8];
    unaff_x23 = (long *)param_1[9];
    if (unaff_x23 == (long *)0x0) {
      if (param_1[7] == 0) {
        return;
      }
      goto code_r0x000108aa97c4;
    }
    unaff_x22 = unaff_x20 + 0x26;
    unaff_x30 = 0x10338ef04;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    plVar3 = unaff_x20;
    unaff_x19 = param_1;
    unaff_x29 = puVar2;
  }
  puVar2 = (undefined1 *)((long)register0x00000008 + -0x20);
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
  if (plVar3[0x16] != 0) {
    _free(plVar3[0x17]);
  }
  if (plVar3[0x19] != 0) {
    _free(plVar3[0x1a]);
  }
  unaff_x20 = (long *)0x8000000000000005;
  unaff_x30 = 0x1033ae26c;
  plVar4 = plVar3;
SUB_103397704:
  do {
    *(undefined8 *)(puVar2 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar2 + -0x48) = unaff_x25;
    *(long *)(puVar2 + -0x40) = unaff_x24;
    *(long **)(puVar2 + -0x38) = unaff_x23;
    *(long **)(puVar2 + -0x30) = unaff_x22;
    *(long **)(puVar2 + -0x28) = unaff_x21;
    *(long **)(puVar2 + -0x20) = unaff_x20;
    *(long **)(puVar2 + -0x18) = plVar3;
    *(undefined1 **)(puVar2 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    unaff_x29 = puVar2 + -0x10;
    if (plVar4[0x10] < -0x7ffffffffffffffe || plVar4[0x10] == 0) {
      if (plVar4[4] == -0x8000000000000000 || plVar4[4] == 0) goto LAB_103397750;
LAB_10339777c:
      _free(plVar4[5]);
      unaff_x23 = (long *)plVar4[7];
    }
    else {
      _free(plVar4[0x11]);
      if (plVar4[4] != -0x8000000000000000 && plVar4[4] != 0) goto LAB_10339777c;
LAB_103397750:
      unaff_x23 = (long *)plVar4[7];
    }
    if (unaff_x23 != (long *)0x8000000000000000) {
      puVar1 = (ulong *)plVar4[8];
      if (plVar4[9] != 0) {
        *(long *)(puVar2 + -0x100) = plVar4[9];
        *(long **)(puVar2 + -0xf8) = unaff_x23;
        *(ulong **)(puVar2 + -0xf0) = puVar1 + 9;
        *(ulong **)(puVar2 + -0xe8) = puVar1;
        *(undefined8 *)(puVar2 + -0xe0) = 0x8000000000000000;
        *(long **)(puVar2 + -0xd8) = plVar4;
        *(undefined1 **)(puVar2 + -0xd0) = unaff_x29;
        *(undefined8 *)(puVar2 + -200) = 0x1033977ac;
        uVar7 = *puVar1;
        uVar5 = uVar7 ^ 0x8000000000000000;
        if (-1 < (long)uVar7) {
          uVar5 = 5;
        }
        if (uVar5 < 3) {
          return;
        }
        if (uVar5 == 3) {
          if (puVar1[1] == 0) {
            return;
          }
          unaff_x20 = (long *)puVar1[2];
        }
        else {
          if (uVar5 == 4) {
            unaff_x20 = (long *)puVar1[2];
            lVar8 = puVar1[3] + 1;
            plVar3 = unaff_x20;
            while (lVar8 = lVar8 + -1, lVar8 != 0) {
              func_0x000103382b94(plVar3);
              plVar3 = plVar3 + 9;
            }
            uVar7 = puVar1[1];
          }
          else {
            uVar5 = puVar1[4];
            if ((uVar5 != 0) && (uVar5 * 9 != -0x11)) {
              _free(puVar1[3] + uVar5 * -8 + -8);
            }
            unaff_x20 = (long *)puVar1[1];
            FUN_1032aa3b0(unaff_x20,puVar1[2]);
          }
          if (uVar7 == 0) {
            return;
          }
        }
        goto code_r0x000108aa97c4;
      }
      unaff_x24 = 0;
      if (unaff_x23 != (long *)0x0) {
        _free(puVar1);
      }
    }
    unaff_x20 = (long *)0x8000000000000000;
    unaff_x21 = (long *)plVar4[0x15];
    plVar3 = plVar4;
    if (unaff_x21 == (long *)0x0) {
      if (*plVar4 == 0) {
LAB_103397864:
        lVar8 = plVar4[10];
        if (lVar8 != -0x8000000000000000) {
          unaff_x20 = (long *)plVar4[0xb];
          lVar6 = plVar4[0xc];
          if (lVar6 != 0) {
            unaff_x23 = unaff_x20 + 1;
            do {
              if (unaff_x23[-1] != 0) {
                _free(*unaff_x23);
              }
              unaff_x23 = unaff_x23 + 3;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          unaff_x22 = (long *)0x0;
          if (lVar8 != 0) {
            _free(unaff_x20);
          }
        }
        if ((char)plVar4[0x13] == '\x02' || (char)plVar4[0x13] == '\0') {
          unaff_x22 = (long *)plVar4[0xd];
          if (unaff_x22 == (long *)0x8000000000000000) {
            return;
          }
          unaff_x21 = (long *)plVar4[0xe];
          unaff_x23 = (long *)plVar4[0xf];
          if (unaff_x23 == (long *)0x0) {
            if (unaff_x22 != (long *)0x0) {
              _free(unaff_x21);
            }
            return;
          }
          unaff_x30 = 0x103397914;
          puVar2 = puVar2 + -0xc0;
          plVar4 = unaff_x21;
          plVar3 = unaff_x21 + 0x16;
        }
        else {
          unaff_x21 = (long *)plVar4[0x14];
          unaff_x30 = 0x1033978e0;
          puVar2 = puVar2 + -0xc0;
          plVar4 = unaff_x21;
        }
      }
      else {
        lVar8 = plVar4[1];
        if (lVar8 == 0) {
          lVar6 = 0;
        }
        else {
          lVar9 = plVar4[2];
          lVar6 = plVar4[3];
          *(undefined8 *)(puVar2 + -0xb0) = 0;
          *(long *)(puVar2 + -0xa8) = lVar8;
          *(long *)(puVar2 + -0xa0) = lVar9;
          *(undefined8 *)(puVar2 + -0x90) = 0;
          *(long *)(puVar2 + -0x88) = lVar8;
          *(long *)(puVar2 + -0x80) = lVar9;
        }
        uVar5 = (ulong)(lVar8 != 0);
        *(ulong *)(puVar2 + -0xb8) = uVar5;
        *(ulong *)(puVar2 + -0x98) = uVar5;
        unaff_x20 = (long *)(puVar2 + -0xb8);
        unaff_x21 = (long *)0x18;
        unaff_x22 = (long *)0xb0;
        *(long *)(puVar2 + -0x78) = lVar6;
        FUN_1034bee1c(puVar2 + -0x70,puVar2 + -0xb8);
        unaff_x23 = *(long **)(puVar2 + -0x70);
        if (unaff_x23 == (long *)0x0) goto LAB_103397864;
        unaff_x24 = *(long *)(puVar2 + -0x60);
        *(long **)(puVar2 + -0x58) = unaff_x20;
        if (unaff_x23[unaff_x24 * 3 + 0xf3] != 0) {
          _free(unaff_x23[unaff_x24 * 3 + 0xf4]);
        }
        unaff_x30 = 0x10339782c;
        puVar2 = puVar2 + -0xc0;
        plVar4 = unaff_x23 + unaff_x24 * 0x16;
      }
    }
    else {
      unaff_x30 = 0x1033977d0;
      puVar2 = puVar2 + -0xc0;
      plVar4 = unaff_x21;
    }
  } while( true );
}

