
void FUN_100d0338c(long param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  
  bVar2 = *(byte *)(param_1 + 0x20);
  if (4 < bVar2) {
    if (bVar2 == 5) {
      if (((*(char *)(param_1 + 0xb0) == '\x03') && (*(char *)(param_1 + 0xa8) == '\x03')) &&
         (*(char *)(param_1 + 0xa0) == '\x03')) {
        if (*(char *)(param_1 + 0x98) == '\x03') {
          plVar4 = *(long **)(param_1 + 0x90);
          if (*plVar4 != 0xcc) goto LAB_100d034cc;
          *plVar4 = 0x84;
        }
        else if ((*(char *)(param_1 + 0x98) == '\0') && (*(long *)(param_1 + 0x78) != 0)) {
          uVar3 = *(undefined8 *)(param_1 + 0x80);
          goto _free;
        }
      }
    }
    else if ((bVar2 == 6) && (*(char *)(param_1 + 0x70) == '\x03')) {
      if (*(char *)(param_1 + 0x68) == '\x03') {
        plVar4 = *(long **)(param_1 + 0x60);
        if (*plVar4 != 0xcc) {
LAB_100d034cc:
                    /* WARNING: Could not recover jumptable at 0x000100d034dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(plVar4[2] + 0x20))();
          return;
        }
        *plVar4 = 0x84;
      }
      else if ((*(char *)(param_1 + 0x68) == '\0') && (*(long *)(param_1 + 0x48) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x50);
        goto _free;
      }
    }
    return;
  }
  if (bVar2 != 3) {
    if (bVar2 != 4) {
      return;
    }
    if (*(char *)(param_1 + 0x110) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x108) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x101) != '\x03') {
      return;
    }
    FUN_100deb62c(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x100) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x168) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xd4) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 200) != '\x03') {
      if (*(char *)(param_1 + 200) != '\0') {
        return;
      }
      if (*(long *)(param_1 + 0xa0) == 0) {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      goto _free;
    }
  }
  else {
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0xc0) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0xb8) != '\x03') {
        if (*(char *)(param_1 + 0xb8) != '\0') {
          return;
        }
        if (*(long *)(param_1 + 0x98) == 0) {
          return;
        }
        uVar3 = *(undefined8 *)(param_1 + 0xa0);
        goto _free;
      }
      plVar4 = *(long **)(param_1 + 0xb0);
      if (*plVar4 == 0xcc) {
        *plVar4 = 0x84;
        return;
      }
      goto LAB_100ca8100;
    }
    if (cVar1 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0xd2) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 200) != '\x03') {
      if (*(char *)(param_1 + 200) != '\0') {
        return;
      }
      if (*(long *)(param_1 + 0xa0) == 0) {
        return;
      }
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(uVar3);
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0xc0);
  if (*plVar4 == 0xcc) {
    *plVar4 = 0x84;
    return;
  }
LAB_100ca8100:
                    /* WARNING: Could not recover jumptable at 0x000100ca8108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar4[2] + 0x20))();
  return;
}

