
void FUN_100cbc29c(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  bVar1 = *(byte *)((long)param_1 + 0xb6);
  if (bVar1 < 7) {
    if (bVar1 < 5) {
      if (bVar1 == 3) {
        if ((char)param_1[0x27] != '\x03') {
          return;
        }
        if ((char)param_1[0x26] != '\x03') {
          return;
        }
        if ((char)param_1[0x25] != '\x03') {
          return;
        }
        if ((char)param_1[0x24] != '\x03') {
          if ((char)param_1[0x24] != '\0') {
            return;
          }
          if (param_1[0x20] == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(param_1[0x21]);
          return;
        }
        plVar3 = (long *)param_1[0x23];
        if (*plVar3 == 0xcc) {
          *plVar3 = 0x84;
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000100cbc55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(plVar3[2] + 0x20))();
        return;
      }
      if (bVar1 != 4) {
        return;
      }
      if (*(char *)((long)param_1 + 0x621) == '\x03') {
        FUN_100cf2ae0(param_1 + 0x21);
        if (param_1[0x17] != 0) {
          _free(param_1[0x18]);
        }
        if (param_1[0x1a] != 0) {
          _free(param_1[0x1b]);
        }
        if (param_1[0x1d] != 0) {
          _free(param_1[0x1e]);
        }
        *(undefined1 *)(param_1 + 0xc4) = 0;
      }
      goto LAB_100cbc4ec;
    }
    if (bVar1 == 5) {
      if ((char)param_1[0x158] == '\x03') {
        FUN_100e76fbc(param_1 + 0x29);
        FUN_100de8a5c(param_1 + 0x1b);
      }
    }
    else {
      if (bVar1 != 6) {
        return;
      }
      FUN_100e8ab10(param_1 + 0x17);
    }
    goto LAB_100cbc4a4;
  }
  if (bVar1 < 9) {
    if (bVar1 != 7) {
      if (bVar1 != 8) {
        return;
      }
      FUN_100cad858(param_1 + 0x17);
      goto LAB_100cbc474;
    }
    if (*(char *)((long)param_1 + 0xe9) != '\x04') {
      if ((*(char *)((long)param_1 + 0xe9) != '\x03') || ((char)param_1[0x29] != '\x03'))
      goto LAB_100cbc4a4;
      if ((char)param_1[0x28] == '\x03') {
        plVar3 = (long *)param_1[0x27];
        if (*plVar3 == 0xcc) {
          *plVar3 = 0x84;
        }
        else {
          (**(code **)(plVar3[2] + 0x20))();
        }
        goto LAB_100cbc4a4;
      }
      if (((char)param_1[0x28] != '\0') || (param_1[0x24] == 0)) goto LAB_100cbc4a4;
      lVar2 = param_1[0x25];
      goto LAB_100cbc4a0;
    }
    func_0x000100d02b68(param_1 + 0x1e);
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  else {
    if (bVar1 == 9) {
      if (((char)param_1[0x141] == '\x03') && ((char)param_1[0x140] == '\x03')) {
        FUN_100cb10ec(param_1 + 0x27);
        if (param_1[0x1d] != 0) {
          _free(param_1[0x1e]);
        }
        if (param_1[0x20] != 0) {
          _free(param_1[0x21]);
        }
        if (param_1[0x23] != 0) {
          _free(param_1[0x24]);
        }
      }
    }
    else {
      if (bVar1 != 10) {
        return;
      }
      FUN_100e8ab10(param_1 + 0x17);
    }
LAB_100cbc474:
    if (param_1[10] != 0) {
      _free(param_1[0xb]);
    }
    if (param_1[0xd] != 0) {
      _free(param_1[0xe]);
    }
    if (param_1[0x10] != 0) {
      lVar2 = param_1[0x11];
LAB_100cbc4a0:
      _free(lVar2);
    }
  }
LAB_100cbc4a4:
  if ((*param_1 != -0x8000000000000000) && ((*(byte *)((long)param_1 + 0xb5) & 1) != 0)) {
    if (*param_1 != 0) {
      _free(param_1[1]);
    }
    if (param_1[3] != 0) {
      _free(param_1[4]);
    }
    if (param_1[6] != 0) {
      _free(param_1[7]);
    }
  }
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
LAB_100cbc4ec:
  *(undefined2 *)((long)param_1 + 0xb4) = 0;
  return;
}

