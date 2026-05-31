
void FUN_1039ea404(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  do {
    uVar1 = 0;
    do {
      uVar9 = uVar1;
      if (param_3 == uVar9) {
        if (param_3 != 0) {
          lVar8 = param_1[2];
          if ((ulong)(*param_1 - lVar8) < param_3) {
            FUN_1089576c4(param_1,lVar8,param_3,1,1);
            lVar8 = param_1[2];
          }
          _memcpy(param_1[1] + lVar8,param_2,param_3);
          param_1[2] = lVar8 + param_3;
        }
        return;
      }
      bVar3 = *(byte *)(param_2 + uVar9);
      cVar4 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar3];
      uVar1 = uVar9 + 1;
    } while (cVar4 == '\0');
    if (uVar9 != 0) {
      lVar8 = param_1[2];
      if ((ulong)(*param_1 - lVar8) < uVar9) {
        FUN_1089576c4(param_1,lVar8,uVar9,1,1);
        lVar8 = param_1[2];
      }
      _memcpy(param_1[1] + lVar8,param_2,uVar9);
      param_1[2] = lVar8 + uVar1 + -1;
    }
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
    if (cVar4 == 'u') {
      uVar5 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [bVar3 >> 4];
      uVar6 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [(ulong)bVar3 & 0xf];
      lVar8 = param_1[2];
      if ((ulong)(*param_1 - lVar8) < 6) {
        FUN_1089576c4(param_1,lVar8,6,1,1);
        lVar8 = param_1[2];
      }
      puVar2 = (undefined4 *)(param_1[1] + lVar8);
      *puVar2 = 0x3030755c;
      *(undefined1 *)(puVar2 + 1) = uVar5;
      *(undefined1 *)((long)puVar2 + 5) = uVar6;
      param_1[2] = lVar8 + 6;
    }
    else {
      lVar8 = param_1[2];
      if ((ulong)(*param_1 - lVar8) < 2) {
        FUN_1089576c4(param_1,lVar8,2,1,1);
        lVar8 = param_1[2];
      }
      lVar7 = param_1[1];
      *(undefined1 *)(lVar7 + lVar8) = 0x5c;
      ((undefined1 *)(lVar7 + lVar8))[1] = cVar4;
      param_1[2] = lVar8 + 2;
    }
  } while( true );
}

