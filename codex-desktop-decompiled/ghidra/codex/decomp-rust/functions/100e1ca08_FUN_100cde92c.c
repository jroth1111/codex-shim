
/* WARNING: Possible PIC construction at 0x000100cdeae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100cdeb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e46474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e4649c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e46478) */
/* WARNING: Removing unreachable block (ram,0x000100cdeb24) */
/* WARNING: Removing unreachable block (ram,0x000100cdeb30) */
/* WARNING: Removing unreachable block (ram,0x000100cdeae8) */
/* WARNING: Removing unreachable block (ram,0x000100cdeaf4) */
/* WARNING: Removing unreachable block (ram,0x000100cdeafc) */
/* WARNING: Removing unreachable block (ram,0x000100e464a0) */
/* WARNING: Removing unreachable block (ram,0x000100e46484) */
/* WARNING: Removing unreachable block (ram,0x000100e464ac) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca08) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca24) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca2c) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca38) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca3c) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca5c) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca6c) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca70) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca40) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca48) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca4c) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca74) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca50) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca84) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca98) */
/* WARNING: Removing unreachable block (ram,0x000100e1caa0) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca8c) */
/* WARNING: Removing unreachable block (ram,0x000100e1ca58) */
/* WARNING: Removing unreachable block (ram,0x000100e1caac) */
/* WARNING: Removing unreachable block (ram,0x000100e1cab4) */
/* WARNING: Removing unreachable block (ram,0x000100e1cabc) */
/* WARNING: Removing unreachable block (ram,0x000100e1caf0) */
/* WARNING: Removing unreachable block (ram,0x000100e1cac8) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb04) */
/* WARNING: Removing unreachable block (ram,0x000100e1cad4) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb18) */
/* WARNING: Removing unreachable block (ram,0x000100e1cae0) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb2c) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb54) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb5c) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb70) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb78) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb64) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb30) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb38) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb3c) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb50) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb84) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb8c) */
/* WARNING: Removing unreachable block (ram,0x000100e1caec) */
/* WARNING: Removing unreachable block (ram,0x000100e1cb94) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100cde92c(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar7;
  undefined8 *puVar8;
  undefined8 unaff_x22;
  long *unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar9;
  
  bVar1 = *(byte *)(param_1 + 0x8a0);
  if (bVar1 < 4) {
    if (bVar1 != 0) {
      if (bVar1 != 3) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x8b0);
      if (*plVar3 == 0xcc) {
        *plVar3 = 0x84;
      }
      else {
        (**(code **)(plVar3[2] + 0x20))();
      }
      goto LAB_100cdeac8;
    }
    puVar2 = &stack0xffffffffffffffe0;
    if (*(long *)(param_1 + 0x218) != 0) {
      _free(*(undefined8 *)(param_1 + 0x220));
    }
    if (*(long *)(param_1 + 0x230) != 0) {
      _free(*(undefined8 *)(param_1 + 0x238));
    }
    if (*(long *)(param_1 + 0x248) == -0x8000000000000000) {
      if (*(long *)(param_1 + 0x250) != 0) {
        lVar6 = 0x10;
LAB_100e46458:
        _free(*(undefined8 *)(param_1 + 0x248 + lVar6));
      }
    }
    else {
      if (*(long *)(param_1 + 0x248) != 0) {
        _free(*(undefined8 *)(param_1 + 0x250));
      }
      unaff_x20 = (long *)0x8000000000000000;
      if ((*(long *)(param_1 + 0x260) != -0x8000000000000000) && (*(long *)(param_1 + 0x260) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x268));
      }
      if ((*(long *)(param_1 + 0x278) != -0x8000000000000000) && (*(long *)(param_1 + 0x278) != 0))
      {
        _free(*(undefined8 *)(param_1 + 0x280));
      }
      if ((*(ulong *)(param_1 + 0x290) & 0x7fffffffffffffff) != 0) {
        lVar6 = 0x50;
        goto LAB_100e46458;
      }
    }
    if ((*(ulong *)(param_1 + 0x2a8) & 0x7fffffffffffffff) == 0) {
      plVar3 = (long *)(param_1 + 0x2c8);
      uVar9 = 0x100e46478;
      puVar2 = &stack0xffffffffffffffe0;
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x2b0));
      plVar3 = (long *)(param_1 + 0x2c8);
      uVar9 = 0x100e464a0;
    }
  }
  else {
    if (bVar1 == 4) {
      if (*(char *)(param_1 + 0x911) == '\x03') {
        if (*(char *)(param_1 + 0x908) == '\x03') {
          plVar3 = *(long **)(param_1 + 0x900);
          if (*plVar3 == 0xcc) {
            *plVar3 = 0x84;
          }
          else {
            (**(code **)(plVar3[2] + 0x20))();
          }
          *(undefined1 *)(param_1 + 0x909) = 0;
        }
        else if (*(char *)(param_1 + 0x908) == '\0') {
          unaff_x20 = *(long **)(param_1 + 0x8e0);
          lVar6 = *(long *)(param_1 + 0x8e8);
          if (lVar6 != 0) {
            unaff_x22 = 0x8000000000000000;
            unaff_x23 = unaff_x20;
            do {
              if (*unaff_x23 != 0) {
                if (*unaff_x23 == -0x8000000000000000) {
                  if (unaff_x23[1] == 0) goto LAB_100cdea1c;
                  lVar4 = 0x10;
                }
                else {
                  lVar4 = 8;
                }
                _free(*(undefined8 *)((long)unaff_x23 + lVar4));
              }
LAB_100cdea1c:
              unaff_x23 = unaff_x23 + 4;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          unaff_x21 = 0;
          if (*(long *)(param_1 + 0x8d8) != 0) {
            _free(unaff_x20);
          }
        }
        *(undefined1 *)(param_1 + 0x912) = 0;
      }
      else if ((*(char *)(param_1 + 0x911) == '\0') && (*(long *)(param_1 + 0x8b0) != 0)) {
        _free(*(undefined8 *)(param_1 + 0x8b8));
      }
    }
    else {
      if (bVar1 != 5) {
        return;
      }
      FUN_100cce6fc(param_1 + 0x8d0);
      FUN_100e205b4(param_1 + 0x8b0);
      *(undefined1 *)(param_1 + 0x8a4) = 0;
    }
    if (*(long *)(param_1 + 0x840) != 0) {
      _free(*(undefined8 *)(param_1 + 0x848));
    }
    if (*(long *)(param_1 + 0x858) != 0) {
      _free(*(undefined8 *)(param_1 + 0x860));
    }
    if (*(long *)(param_1 + 0x870) != 0) {
      _free(*(undefined8 *)(param_1 + 0x878));
    }
    if (*(long *)(param_1 + 0x888) != 0) {
      _free(*(undefined8 *)(param_1 + 0x890));
    }
LAB_100cdeac8:
    *(undefined1 *)(param_1 + 0x8a9) = 0;
    *(undefined4 *)(param_1 + 0x8a5) = 0;
    if ((*(ulong *)(param_1 + 0x6d0) & 0x7fffffffffffffff) == 0) {
      plVar3 = (long *)(param_1 + 0x6f0);
      uVar9 = 0x100cdeae8;
      puVar2 = &stack0xffffffffffffffc0;
    }
    else {
      _free(*(undefined8 *)(param_1 + 0x6d8));
      plVar3 = (long *)(param_1 + 0x6f0);
      uVar9 = 0x100cdeb24;
      puVar2 = &stack0xffffffffffffffc0;
    }
  }
  *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
  *(long **)(puVar2 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(long **)(puVar2 + -0x20) = unaff_x20;
  *(long *)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar2 + -8) = uVar9;
  lVar6 = *plVar3;
  if (lVar6 == -0x8000000000000000) {
    return;
  }
  if (plVar3[6] == -0x8000000000000000 || plVar3[6] == 0) {
    if (plVar3[9] == -0x8000000000000000 || plVar3[9] == 0) goto LAB_100ca3aa8;
LAB_100ca3ae4:
    _free(plVar3[10]);
    if (plVar3[0xc] != -0x8000000000000000 && plVar3[0xc] != 0) goto LAB_100ca3afc;
  }
  else {
    _free(plVar3[7]);
    if (plVar3[9] != -0x8000000000000000 && plVar3[9] != 0) goto LAB_100ca3ae4;
LAB_100ca3aa8:
    if (plVar3[0xc] != -0x8000000000000000 && plVar3[0xc] != 0) {
LAB_100ca3afc:
      _free(plVar3[0xd]);
      lVar4 = plVar3[0xf];
      goto joined_r0x000100ca3b0c;
    }
  }
  lVar4 = plVar3[0xf];
joined_r0x000100ca3b0c:
  if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
    _free(plVar3[0x10]);
  }
  if ((plVar3[0x12] != -0x8000000000000000) && (plVar3[0x12] != 0)) {
    _free(plVar3[0x13]);
  }
  lVar4 = plVar3[1];
  lVar7 = plVar3[2];
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(lVar4 + 8);
    do {
      if (puVar8[-1] != 0) {
        _free(*puVar8);
      }
      puVar8 = puVar8 + 3;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (lVar6 != 0) {
    _free(lVar4);
  }
  if (plVar3[0x15] == -0x8000000000000000 || plVar3[0x15] == 0) {
    lVar6 = plVar3[0x18];
  }
  else {
    _free(plVar3[0x16]);
    lVar6 = plVar3[0x18];
  }
  if ((lVar6 != -0x8000000000000000) && (lVar6 != 0)) {
    _free(plVar3[0x19]);
  }
  if ((plVar3[0x1b] != -0x8000000000000000) && (plVar3[0x1b] != 0)) {
    _free(plVar3[0x1c]);
  }
  lVar6 = plVar3[0x1e];
  if (lVar6 != -0x8000000000000000) {
    lVar4 = plVar3[0x1f];
    lVar7 = plVar3[0x20];
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar6 != 0) {
      _free(lVar4);
    }
  }
  if (plVar3[0x21] == -0x8000000000000000 || plVar3[0x21] == 0) {
    uVar5 = plVar3[0x24];
  }
  else {
    _free(plVar3[0x22]);
    uVar5 = plVar3[0x24];
  }
  if ((uVar5 & 0x7fffffffffffffff) == 0) {
    uVar5 = plVar3[0x27];
  }
  else {
    _free(plVar3[0x25]);
    uVar5 = plVar3[0x27];
  }
  if ((uVar5 & 0x7fffffffffffffff) == 0) {
    lVar6 = plVar3[4];
    lVar4 = plVar3[5];
  }
  else {
    _free(plVar3[0x28]);
    lVar6 = plVar3[4];
    lVar4 = plVar3[5];
  }
  if (lVar4 != 0) {
    puVar8 = (undefined8 *)(lVar6 + 8);
    do {
      if (puVar8[-1] != 0) {
        _free(*puVar8);
      }
      puVar8 = puVar8 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (plVar3[3] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(lVar6);
  return;
}

