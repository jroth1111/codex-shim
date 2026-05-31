
/* WARNING: Possible PIC construction at 0x000100db0c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100db0c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100db0c9c) */
/* WARNING: Removing unreachable block (ram,0x000100db0c40) */

void FUN_100db0b50(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  bVar4 = *(byte *)(param_1 + 0x8b);
  if (bVar4 < 4) {
    if (bVar4 == 0) {
      lVar7 = param_1[1];
      lVar6 = lVar7;
      for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
        FUN_100e0f8ec(lVar6);
        lVar6 = lVar6 + 0x98;
      }
      if (*param_1 != 0) {
        _free(lVar7);
      }
      if ((char)param_1[0x88] == '\x03') {
        plVar5 = param_1 + 0x1a;
        cVar3 = (char)param_1[0x3c];
        if (cVar3 != '\0') {
          if (cVar3 == '\x03') {
            FUN_100e78604(param_1 + 0x3d);
          }
          else {
            if (cVar3 != '\x04') {
              return;
            }
            if ((char)param_1[0x7e] == '\x03') {
              FUN_100ccec20(param_1 + 0x43);
            }
            else if ((char)param_1[0x7e] == '\0') {
              lVar6 = param_1[0x3e];
              lVar7 = param_1[0x3f];
              if (lVar7 != 0) {
                puVar8 = (undefined8 *)(lVar6 + 8);
                do {
                  if (puVar8[-1] != 0) {
                    _free(*puVar8);
                  }
                  puVar8 = puVar8 + 3;
                  lVar7 = lVar7 + -1;
                } while (lVar7 != 0);
              }
              if (param_1[0x3d] != 0) {
                _free(lVar6);
              }
            }
            lVar7 = param_1[0x33];
            lVar6 = lVar7;
            for (lVar2 = param_1[0x34]; lVar2 != 0; lVar2 = lVar2 + -1) {
              if (*(long *)(lVar6 + 0x98) != -0x8000000000000000 && *(long *)(lVar6 + 0x98) != 0) {
                _free(*(undefined8 *)(lVar6 + 0xa0));
              }
              FUN_100e0f8ec(lVar6);
              lVar6 = lVar6 + 0xb0;
            }
            if (param_1[0x32] != 0) {
              _free(lVar7);
            }
            if ((param_1[0x38] != -0x8000000000000000) && (param_1[0x38] != 0)) {
              _free(param_1[0x39]);
            }
          }
          *(undefined1 *)((long)param_1 + 0x1e1) = 0;
          return;
        }
      }
      else {
        if ((char)param_1[0x88] != '\0') {
          return;
        }
        plVar5 = param_1 + 5;
      }
      goto SUB_100e56be0;
    }
    if (bVar4 != 3) {
      return;
    }
    FUN_100c9749c(param_1 + 0x8c);
  }
  else if (bVar4 == 4) {
    if ((char)param_1[0x10f] == '\x03') {
      FUN_100ccb48c(param_1 + 0xa1);
    }
    else if ((char)param_1[0x10f] == '\0') {
      plVar5 = param_1 + 0x8c;
      unaff_x30 = 0x100db0c40;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
      goto SUB_100e56be0;
    }
  }
  else {
    if (bVar4 != 5) {
      return;
    }
    FUN_100ca19bc(param_1 + 0x93);
    unaff_x20 = param_1[0x90];
    lVar6 = param_1[0x91];
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(unaff_x20 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (param_1[0x8f] != 0) {
      _free(unaff_x20);
    }
  }
  if ((*(byte *)((long)param_1 + 0x459) & 1) != 0) {
    if ((char)param_1[0x44c] == '\x03') {
      FUN_100ccb48c(param_1 + 0x3de);
    }
    else if ((char)param_1[0x44c] == '\0') {
      plVar5 = param_1 + 0x3c9;
      unaff_x30 = 0x100db0c9c;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      unaff_x19 = param_1;
      unaff_x29 = puVar1;
SUB_100e56be0:
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      if (*plVar5 != 0) {
        _free(plVar5[1]);
      }
      if (plVar5[3] != 0) {
        _free(plVar5[4]);
      }
      if (plVar5[0xf] == -0x8000000000000000 || plVar5[0xf] == 0) {
        lVar6 = plVar5[6];
      }
      else {
        _free(plVar5[0x10]);
        lVar6 = plVar5[6];
      }
      if (lVar6 != 0) {
        _free(plVar5[7]);
      }
      if (plVar5[9] != 0) {
        _free(plVar5[10]);
      }
      if (plVar5[0xc] == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar5[0xd]);
      return;
    }
  }
  *(undefined1 *)((long)param_1 + 0x459) = 0;
  return;
}

