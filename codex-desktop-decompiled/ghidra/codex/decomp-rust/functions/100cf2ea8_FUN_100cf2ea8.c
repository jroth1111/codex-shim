
void FUN_100cf2ea8(long param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  cVar1 = *(char *)(param_1 + 0xa2);
  if (cVar1 == '\0') {
    plVar2 = *(long **)(param_1 + 0x78);
    if (*plVar2 != 0xcc) {
                    /* WARNING: Could not recover jumptable at 0x000100cf2fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar2[2] + 0x20))();
      return;
    }
    *plVar2 = 0x84;
  }
  else {
    if (cVar1 == '\x03') {
      plVar2 = *(long **)(param_1 + 0xa8);
      if (*plVar2 == 0xcc) {
        *plVar2 = 0x84;
      }
      else {
        (**(code **)(plVar2[2] + 0x20))();
      }
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      uStack_40 = *(undefined8 *)(param_1 + 200);
      lStack_38 = param_1 + 0x100;
      lStack_30 = param_1 + 0xd0;
      lStack_28 = param_1 + 0xd8;
      FUN_1060fb5d4(&uStack_40);
      if (*(long *)(param_1 + 0xe8) != 0) {
        (**(code **)(*(long *)(param_1 + 0xe8) + 0x18))(*(undefined8 *)(param_1 + 0xf0));
      }
      FUN_100de8a5c(param_1 + 0x108);
    }
    if ((*(byte *)(param_1 + 0xa0) & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x60);
      if (*plVar2 == 0xcc) {
        *plVar2 = 0x84;
      }
      else {
        (**(code **)(plVar2[2] + 0x20))();
      }
    }
    *(undefined2 *)(param_1 + 0xa0) = 0;
  }
  return;
}

