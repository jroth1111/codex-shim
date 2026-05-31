
bool FUN_1039d29fc(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  int iVar8;
  char *pcStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined2 uStack_78;
  undefined1 uStack_76;
  char *pcStack_70;
  long lStack_68;
  undefined1 uStack_60;
  undefined2 uStack_38;
  undefined1 uStack_36;
  
  uVar1 = 0x1000203U >> (ulong)((*(byte *)(param_1 + 0x140) & 3) << 3) & 3;
  uVar2 = 0x1000203U >> (ulong)((*(byte *)(param_2 + 0x140) & 3) << 3) & 3;
  cVar7 = uVar2 < uVar1;
  if (uVar1 < uVar2) {
    cVar7 = -1;
  }
  if (uVar1 == uVar2) {
    uVar5 = *(ulong *)(param_1 + 0x10);
    uVar6 = *(ulong *)(param_2 + 0x10);
    uVar3 = uVar5;
    if (uVar6 <= uVar5) {
      uVar3 = uVar6;
    }
    iVar8 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8),uVar3);
    lVar4 = uVar5 - uVar6;
    if (iVar8 != 0) {
      lVar4 = (long)iVar8;
    }
    cVar7 = 0 < lVar4;
    if (lVar4 < 0) {
      cVar7 = -1;
    }
  }
  if (cVar7 == '\0') {
    pcStack_b0 = *(char **)(param_1 + 0x38);
    lStack_a8 = *(long *)(param_1 + 0x40);
    pcStack_70 = *(char **)(param_2 + 0x38);
    lStack_68 = *(long *)(param_2 + 0x40);
    if (lStack_a8 == 0) {
      uStack_76 = false;
    }
    else {
      uStack_76 = *pcStack_b0 == '/';
    }
    uStack_a0 = 6;
    uStack_78 = 0x201;
    if (lStack_68 == 0) {
      uStack_36 = false;
    }
    else {
      uStack_36 = *pcStack_70 == '/';
    }
    uStack_60 = 6;
    uStack_38 = 0x201;
    cVar7 = func_0x00010603668c(&pcStack_b0,&pcStack_70);
  }
  return cVar7 == -1;
}

