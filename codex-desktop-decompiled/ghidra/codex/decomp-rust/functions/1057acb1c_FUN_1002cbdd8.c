
void FUN_1002cbdd8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(long *)(param_1 + 0x80) == 3) {
    uVar6 = *(ulong *)(param_1 + 0xe8);
    lVar3 = uVar6 + 0x7ffffffffffffffd;
    if (uVar6 < 0x8000000000000003) {
      lVar3 = 1;
    }
    if (lVar3 == 2) {
      if (*(char *)(param_1 + 0x177) == '\x01') {
        if (((*(byte *)(param_1 + 0x118) != 0xb) && (9 < *(byte *)(param_1 + 0x118))) &&
           (*(long *)(param_1 + 0x128) != 0)) {
          _free(*(undefined8 *)(param_1 + 0x120));
        }
        *(undefined1 *)(param_1 + 0x118) = 0xb;
        *(undefined1 *)(param_1 + 0x177) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
        if (uVar6 < 0x8000000000000003) {
          FUN_1002c09f0(param_1 + 0xe8);
        }
        *(undefined8 *)(param_1 + 0xe8) = 0x8000000000000003;
        *(undefined1 *)(param_1 + 0x175) = 1;
        return;
      }
    }
    else if (lVar3 != 3) {
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x80) != 4) {
      return;
    }
    if (*(long *)(param_1 + 0xe8) != -0x7ffffffffffffffb) {
      return;
    }
  }
  if (((*(long *)(param_1 + 0x80) == 1) || (*(long *)(param_1 + 0x80) == 2)) &&
     (*(ulong *)(param_1 + 0x88) < 2 && *(long *)(param_1 + 0xb8) != 0)) {
    plVar4 = *(long **)(param_1 + 0xd0);
    if (((ulong)plVar4 & 1) == 0) {
      lVar3 = plVar4[4];
      plVar4[4] = lVar3 + -1;
      LORelease();
      if (lVar3 != 1) goto LAB_1057acbbc;
      if (*plVar4 != 0) {
        _free(plVar4[1]);
      }
    }
    else {
      if (*(long *)(param_1 + 200) + ((ulong)plVar4 >> 5) == 0) goto LAB_1057acbbc;
      plVar4 = (long *)(*(long *)(param_1 + 0xb8) - ((ulong)plVar4 >> 5));
    }
    _free(plVar4);
  }
LAB_1057acbbc:
  *(undefined8 *)(param_1 + 0x80) = 4;
  uVar6 = *(ulong *)(param_1 + 0xe8);
  if (uVar6 < 0x8000000000000003) {
    uVar1 = uVar6;
    if (uVar6 < 0x8000000000000001) {
      uVar1 = 0;
    }
    if (uVar6 != 0x8000000000000000 && (uVar1 & 0x7fffffffffffffff) == 0) {
      lVar2 = *(long *)(param_1 + 0xf0);
      lVar3 = *(long *)(param_1 + 0xf8) + 1;
      lVar5 = lVar2 + 0x18;
      while (lVar3 = lVar3 + -1, lVar3 != 0) {
        (**(code **)(*(long *)(lVar5 + -0x18) + 0x20))
                  (lVar5,*(undefined8 *)(lVar5 + -0x10),*(undefined8 *)(lVar5 + -8));
        lVar5 = lVar5 + 0x28;
      }
      if (uVar6 != 0) {
        _free(lVar2);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xe8) = 0x8000000000000006;
  *(undefined1 *)(param_1 + 0x177) = 2;
  return;
}

