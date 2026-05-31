
uint __ZN3std5panic19get_backtrace_style17hf1e68ecb2afa3e09E(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lStack_38;
  int *piStack_30;
  long lStack_28;
  
  if ((bRam000000010b6fde61 - 1 & 0xff) < 3) {
    return bRam000000010b6fde61 - 1;
  }
  __ZN3std3env7_var_os17h6bd9111edd9950c4E(&lStack_38,&UNK_109bd6679,0xe);
  if (lStack_38 == -0x8000000000000000) {
    bVar3 = 3;
    uVar2 = 2;
    goto LAB_106038e8c;
  }
  if (lStack_28 == 4) {
    if (*piStack_30 != 0x6c6c7566) goto LAB_106038e74;
    bVar4 = 2;
    bVar3 = 2;
    uVar5 = 1;
    uVar2 = 1;
  }
  else if ((lStack_28 == 1) && ((char)*piStack_30 == '0')) {
    bVar4 = 3;
    bVar3 = 3;
    uVar5 = 2;
    uVar2 = 2;
  }
  else {
LAB_106038e74:
    uVar5 = 0;
    uVar2 = 0;
    bVar4 = 1;
    bVar3 = 1;
  }
  if (lStack_38 != 0) {
    _free();
    bVar3 = bVar4;
    uVar2 = uVar5;
  }
LAB_106038e8c:
  bVar4 = bRam000000010b6fde61;
  if (bRam000000010b6fde61 == 0) {
    bRam000000010b6fde61 = bVar3;
  }
  uVar1 = (uint)bVar4;
  uVar5 = 0x2010003 >> (ulong)((uVar1 & 3) << 3);
  if (3 < uVar1) {
    uVar5 = 3;
  }
  if (uVar1 != 0) {
    uVar2 = uVar5;
  }
  return uVar2;
}

