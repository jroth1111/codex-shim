
void FUN_10120e7ec(long *param_1,byte *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  ushort *puVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  bVar2 = *param_2;
  if (bVar2 < 0xe) {
    if (bVar2 == 0xc) {
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      lVar3 = *(long *)(param_2 + 0x18);
joined_r0x00010120e84c:
      if (lVar3 == 0) {
        lVar5 = 1;
      }
      else {
        lVar5 = _malloc(lVar3);
        if (lVar5 == 0) {
          puVar4 = (ushort *)func_0x0001087c9084(1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010120e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10120e90c + (ulong)(byte)(&UNK_108c9f634)[*puVar4] * 4))(puVar4 + 1);
          return;
        }
      }
      _memcpy(lVar5,uVar1,lVar3);
      *param_1 = lVar5;
      param_1[1] = lVar3;
      return;
    }
    if (bVar2 == 0xd) {
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar3 = *(long *)(param_2 + 0x10);
      goto joined_r0x00010120e84c;
    }
LAB_10120e8b4:
    lVar3 = FUN_108855c40(param_2,&uStack_31,&UNK_10b20a6c0);
  }
  else {
    if (bVar2 == 0xe) {
      uStack_48 = *(undefined8 *)(param_2 + 0x10);
      uStack_40 = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      if (bVar2 != 0xf) goto LAB_10120e8b4;
      uStack_48 = *(undefined8 *)(param_2 + 8);
      uStack_40 = *(undefined8 *)(param_2 + 0x10);
    }
    auStack_50[0] = 6;
    lVar3 = func_0x000108a4a50c(auStack_50,&uStack_31,&UNK_10b20a6c0);
  }
  *param_1 = 0;
  param_1[1] = lVar3;
  return;
}

