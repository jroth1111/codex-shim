
undefined * FUN_104270f30(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puVar7 = &UNK_108dceb2b;
  uVar9 = 0x3d;
  while( true ) {
    while( true ) {
      uVar4 = uVar9;
      if (0x7ffffffe < uVar9) {
        uVar4 = 0x7fffffff;
      }
      uVar4 = _write(2,puVar7,uVar4);
      if (uVar4 != 0xffffffffffffffff) break;
      piVar3 = (int *)___error();
      if (*piVar3 != 4) {
        return (undefined *)((long)*piVar3 << 0x20 | 2);
      }
      if (uVar9 == 0) {
        return (undefined *)0x0;
      }
    }
    if (uVar4 == 0) {
      return &UNK_10b316288;
    }
    uVar5 = uVar9 - uVar4;
    if (uVar9 < uVar4) break;
    puVar7 = puVar7 + uVar4;
    uVar9 = uVar5;
    if (uVar5 == 0) {
      return (undefined *)0x0;
    }
  }
  uVar5 = uVar9;
  auVar11 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                      (uVar4,uVar9,uVar9,&UNK_10b3162a0);
  uStack_70 = auVar11._0_8_;
  uStack_60 = 0x7fffffff;
  puStack_48 = &UNK_10b316288;
  uStack_38 = 0x104270fdc;
  puStack_68 = (undefined *)0x0;
  uStack_58 = uVar9;
  puStack_50 = puVar7;
  puStack_40 = &stack0xfffffffffffffff0;
  iVar2 = __ZN4core3fmt5write17h64810b21425781ecE(&uStack_70,&UNK_10b3161b0,auVar11._8_8_,uVar5);
  if (iVar2 == 0) {
    if (((ulong)puStack_68 & 3) == 1) {
      puVar6 = (undefined8 *)(puStack_68 + -1);
      uVar8 = *puVar6;
      puVar10 = *(undefined8 **)(puStack_68 + 7);
      pcVar1 = (code *)*puVar10;
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(uVar8);
      }
      if (puVar10[1] != 0) {
        _free(uVar8);
      }
      _free(puVar6);
    }
    puStack_68 = (undefined *)0x0;
  }
  else if (puStack_68 == (undefined *)0x0) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108df5aa7,0xad,&UNK_10b316198);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104271038);
    (*pcVar1)();
  }
  return puStack_68;
}

