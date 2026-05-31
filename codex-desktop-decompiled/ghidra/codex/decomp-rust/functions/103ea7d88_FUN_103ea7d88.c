
void FUN_103ea7d88(char *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long *plVar8;
  long lVar9;
  long extraout_x1;
  ulong unaff_x19;
  long unaff_x20;
  char *unaff_x21;
  long *unaff_x22;
  long *unaff_x26;
  long lVar10;
  ulong uVar11;
  
  if (*param_1 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff38);
    lVar9 = extraout_x1;
LAB_103ea7ed4:
    FUN_10897c4d0(unaff_x22,lVar9,1,1,1);
    lVar9 = unaff_x22[2];
  }
  else {
    unaff_x26 = *(long **)(param_1 + 8);
    unaff_x22 = (long *)*unaff_x26;
    if (param_1[1] != '\x01') {
      lVar9 = unaff_x22[2];
      if ((ulong)(*unaff_x22 - lVar9) < 2) {
        FUN_10897c4d0(unaff_x22,lVar9,2,1,1);
        lVar9 = unaff_x22[2];
      }
      *(undefined2 *)(unaff_x22[1] + lVar9) = 0xa2c;
      lVar9 = lVar9 + 2;
      unaff_x22[2] = lVar9;
      lVar10 = unaff_x26[3];
      goto joined_r0x000103ea7df8;
    }
    lVar9 = unaff_x22[2];
    unaff_x19 = param_3;
    unaff_x20 = param_2;
    unaff_x21 = param_1;
    if (*unaff_x22 == lVar9) goto LAB_103ea7ed4;
  }
  *(undefined1 *)(unaff_x22[1] + lVar9) = 10;
  lVar9 = lVar9 + 1;
  unaff_x22[2] = lVar9;
  lVar10 = unaff_x26[3];
  param_3 = unaff_x19;
  param_2 = unaff_x20;
  param_1 = unaff_x21;
joined_r0x000103ea7df8:
  if (lVar10 != 0) {
    lVar3 = unaff_x26[1];
    uVar1 = unaff_x26[2];
    do {
      if ((ulong)(*unaff_x22 - lVar9) < uVar1) {
        FUN_10897c4d0(unaff_x22,lVar9,uVar1,1,1);
        lVar9 = unaff_x22[2];
      }
      _memcpy(unaff_x22[1] + lVar9,lVar3,uVar1);
      lVar9 = lVar9 + uVar1;
      unaff_x22[2] = lVar9;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  param_1[1] = '\x02';
  plVar8 = (long *)*unaff_x26;
  lVar9 = plVar8[2];
  if (*plVar8 == lVar9) {
    FUN_10897c4d0(plVar8,lVar9,1,1,1);
    lVar9 = plVar8[2];
  }
  *(undefined1 *)(plVar8[1] + lVar9) = 0x22;
  lVar9 = lVar9 + 1;
  plVar8[2] = lVar9;
  do {
    uVar1 = 0;
    do {
      uVar11 = uVar1;
      if (param_3 == uVar11) {
        if (param_3 != 0) {
          if ((ulong)(*plVar8 - lVar9) < param_3) {
            FUN_10897c4d0(plVar8,lVar9,param_3,1,1);
            lVar9 = plVar8[2];
          }
          _memcpy(plVar8[1] + lVar9,param_2,param_3);
          lVar9 = lVar9 + param_3;
          plVar8[2] = lVar9;
        }
        if (*plVar8 == lVar9) {
          FUN_10897c4d0(plVar8,lVar9,1,1,1);
          lVar9 = plVar8[2];
        }
        *(undefined1 *)(plVar8[1] + lVar9) = 0x22;
        plVar8[2] = lVar9 + 1;
        return;
      }
      bVar4 = *(byte *)(param_2 + uVar11);
      cVar5 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar4];
      uVar1 = uVar11 + 1;
    } while (cVar5 == '\0');
    if (uVar11 != 0) {
      if ((ulong)(*plVar8 - lVar9) < uVar11) {
        FUN_10897c4d0(plVar8,lVar9,uVar11,1,1);
        lVar9 = plVar8[2];
      }
      _memcpy(plVar8[1] + lVar9,param_2,uVar11);
      lVar9 = lVar9 + uVar1 + -1;
      plVar8[2] = lVar9;
    }
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
    if (cVar5 == 'u') {
      uVar6 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [bVar4 >> 4];
      uVar7 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [(ulong)bVar4 & 0xf];
      if ((ulong)(*plVar8 - lVar9) < 6) {
        FUN_10897c4d0(plVar8,lVar9,6,1,1);
        lVar9 = plVar8[2];
      }
      puVar2 = (undefined4 *)(plVar8[1] + lVar9);
      *puVar2 = 0x3030755c;
      *(undefined1 *)(puVar2 + 1) = uVar6;
      *(undefined1 *)((long)puVar2 + 5) = uVar7;
      lVar9 = lVar9 + 6;
      plVar8[2] = lVar9;
    }
    else {
      if ((ulong)(*plVar8 - lVar9) < 2) {
        FUN_10897c4d0(plVar8,lVar9,2,1,1);
        lVar9 = plVar8[2];
      }
      lVar10 = plVar8[1];
      *(undefined1 *)(lVar10 + lVar9) = 0x5c;
      ((undefined1 *)(lVar10 + lVar9))[1] = cVar5;
      lVar9 = lVar9 + 2;
      plVar8[2] = lVar9;
    }
  } while( true );
}

