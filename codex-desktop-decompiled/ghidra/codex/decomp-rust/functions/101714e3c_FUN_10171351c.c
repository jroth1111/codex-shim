
/* WARNING: Possible PIC construction at 0x00010171358c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101713590) */

void FUN_10171351c(char *param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined4 *puVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  ulong unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  ulong uVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_50 [8];
  ulong uStack_48;
  long lStack_40;
  char *pcStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*param_1 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cdff74,0x28,&UNK_10b258240);
    FUN_108875fcc();
    lVar9 = unaff_x21[2];
    *(undefined1 *)(unaff_x21[1] + lVar9) = 0x3a;
    unaff_x21[2] = lVar9 + 1;
    plVar10 = (long *)*unaff_x22;
    param_5 = unaff_x19;
    param_4 = unaff_x20;
  }
  else {
    unaff_x22 = *(long **)(param_1 + 8);
    plVar10 = (long *)*unaff_x22;
    if (param_1[1] != '\x01') {
      lVar9 = plVar10[2];
      if (*plVar10 == lVar9) {
        uStack_48 = param_3;
        lStack_40 = param_2;
        pcStack_38 = param_1;
        FUN_108875fcc(plVar10,lVar9,1,1,1);
        lVar9 = plVar10[2];
        param_1 = pcStack_38;
        param_2 = lStack_40;
        param_3 = uStack_48;
      }
      *(undefined1 *)(plVar10[1] + lVar9) = 0x2c;
      plVar10[2] = lVar9 + 1;
      plVar10 = (long *)*unaff_x22;
    }
    param_1[1] = '\x02';
    unaff_x30 = 0x101713590;
    register0x00000008 = (BADSPACEBASE *)auStack_50;
    unaff_x20 = param_2;
    unaff_x19 = param_3;
    unaff_x21 = plVar10;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = param_4;
  *(ulong *)((long)register0x00000008 + -0x18) = param_5;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar9 = plVar10[2];
  if (*plVar10 == lVar9) {
    FUN_108875fcc(plVar10,lVar9,1,1,1);
    lVar9 = plVar10[2];
  }
  *(undefined1 *)(plVar10[1] + lVar9) = 0x22;
  lVar9 = lVar9 + 1;
  plVar10[2] = lVar9;
  uVar12 = 0x3030755c;
  uVar13 = 0;
  do {
    uVar2 = 0;
    do {
      uVar11 = uVar2;
      if (unaff_x19 == uVar11) {
        if (unaff_x19 != 0) {
          if ((ulong)(*plVar10 - lVar9) < unaff_x19) {
            FUN_108875fcc(plVar10,lVar9,unaff_x19,1,1);
            lVar9 = plVar10[2];
          }
          _memcpy(plVar10[1] + lVar9);
          lVar9 = lVar9 + unaff_x19;
          plVar10[2] = lVar9;
        }
        if (*plVar10 == lVar9) {
          FUN_108875fcc(plVar10,lVar9,1,1,1);
          lVar9 = plVar10[2];
        }
        *(undefined1 *)(plVar10[1] + lVar9) = 0x22;
        plVar10[2] = lVar9 + 1;
        return;
      }
      bVar4 = *(byte *)(unaff_x20 + uVar11);
      cVar5 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar4];
      uVar2 = uVar11 + 1;
    } while (cVar5 == '\0');
    if (uVar11 != 0) {
      *(undefined8 *)((long)register0x00000008 + -0x68) = uVar13;
      *(undefined8 *)((long)register0x00000008 + -0x70) = uVar12;
      if ((ulong)(*plVar10 - lVar9) < uVar11) {
        FUN_108875fcc(plVar10,lVar9,uVar11,1,1);
        lVar9 = plVar10[2];
      }
      _memcpy(plVar10[1] + lVar9);
      lVar9 = lVar9 + uVar2 + -1;
      plVar10[2] = lVar9;
      uVar13 = *(undefined8 *)((long)register0x00000008 + -0x68);
      uVar12 = *(undefined8 *)((long)register0x00000008 + -0x70);
    }
    unaff_x20 = unaff_x20 + uVar2;
    unaff_x19 = unaff_x19 - uVar2;
    if (cVar5 == 'u') {
      uVar6 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [bVar4 >> 4];
      uVar7 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [(ulong)bVar4 & 0xf];
      if ((ulong)(*plVar10 - lVar9) < 6) {
        *(undefined8 *)((long)register0x00000008 + -0x68) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar12;
        FUN_108875fcc(plVar10,lVar9,6,1,1);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x68);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x70);
        lVar9 = plVar10[2];
      }
      puVar3 = (undefined4 *)(plVar10[1] + lVar9);
      *puVar3 = (int)uVar12;
      *(undefined1 *)(puVar3 + 1) = uVar6;
      *(undefined1 *)((long)puVar3 + 5) = uVar7;
      lVar9 = lVar9 + 6;
      plVar10[2] = lVar9;
    }
    else {
      if ((ulong)(*plVar10 - lVar9) < 2) {
        *(undefined8 *)((long)register0x00000008 + -0x68) = uVar13;
        *(undefined8 *)((long)register0x00000008 + -0x70) = uVar12;
        FUN_108875fcc(plVar10,lVar9,2,1,1);
        uVar13 = *(undefined8 *)((long)register0x00000008 + -0x68);
        uVar12 = *(undefined8 *)((long)register0x00000008 + -0x70);
        lVar9 = plVar10[2];
      }
      lVar8 = plVar10[1];
      *(undefined1 *)(lVar8 + lVar9) = 0x5c;
      ((undefined1 *)(lVar8 + lVar9))[1] = cVar5;
      lVar9 = lVar9 + 2;
      plVar10[2] = lVar9;
    }
  } while( true );
}

