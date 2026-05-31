
long FUN_108a49304(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  undefined1 uVar8;
  long lVar9;
  uint uVar10;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long alStack_38 [3];
  
  plVar6 = &lStack_70;
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar2 <= uVar3) {
LAB_108a495f8:
    alStack_38[0] = 10;
    lVar9 = FUN_108a492a4(param_1,alStack_38);
LAB_108a4960c:
    lVar7 = lVar9;
    if (*(long *)(lVar9 + 0x18) == 0) {
      lVar7 = FUN_108a499a0(param_1,lVar9);
      _free(lVar9);
    }
    return lVar7;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  bVar4 = *(byte *)(lVar9 + uVar3);
  uVar10 = (uint)bVar4;
  if (bVar4 < 0x66) {
    if (uVar10 == 0x22) {
      *(ulong *)(param_1 + 0x28) = uVar3 + 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
      __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                (&lStack_50,param_1 + 0x18);
      if (lStack_50 == 2) {
        return lStack_48;
      }
      alStack_38[0] = CONCAT71(alStack_38[0]._1_7_,5);
    }
    else {
      if (uVar10 == 0x2d) {
        *(ulong *)(param_1 + 0x28) = uVar3 + 1;
        FUN_105dc4078(&lStack_70,param_1,0);
        if (lStack_70 == 3) {
          return lStack_68;
        }
LAB_108a49590:
        lVar9 = __ZN10serde_json2de12ParserNumber12invalid_type17h14d036a9e6dabf62E
                          (plVar6,param_2,&UNK_10b46a5f0);
        goto LAB_108a4960c;
      }
      if (bVar4 != 0x5b) goto LAB_108a495c0;
      uVar8 = 10;
LAB_108a4953c:
      alStack_38[0] = CONCAT71(alStack_38[0]._1_7_,uVar8);
    }
LAB_108a4954c:
    lVar9 = func_0x000108a4a50c(alStack_38,param_2,&UNK_10b46a5f0);
    goto LAB_108a4960c;
  }
  if (uVar10 == 0x73 || bVar4 < 0x73) {
    if (bVar4 == 0x66) {
      uVar1 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 2;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'a') {
          if (uVar2 == uVar1) goto LAB_108a494cc;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'l') {
            if (uVar1 == uVar2) goto LAB_108a494cc;
            cVar5 = *(char *)(lVar9 + uVar1);
            uVar1 = uVar3 + 4;
            *(ulong *)(param_1 + 0x28) = uVar1;
            if (cVar5 == 's') {
              if (uVar1 == uVar2) goto LAB_108a494cc;
              cVar5 = *(char *)(lVar9 + uVar1);
              *(ulong *)(param_1 + 0x28) = uVar3 + 5;
              if (cVar5 == 'e') {
                alStack_38[0] = (ulong)alStack_38[0]._2_6_ << 0x10;
                goto LAB_108a4954c;
              }
            }
          }
        }
LAB_108a49554:
        alStack_38[0] = 9;
        goto LAB_108a494d0;
      }
    }
    else {
      if (uVar10 != 0x6e) goto LAB_108a495c0;
      uVar1 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 2;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'u') {
          if (uVar2 == uVar1) goto LAB_108a494cc;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'l') {
            if (uVar1 == uVar2) goto LAB_108a494cc;
            cVar5 = *(char *)(lVar9 + uVar1);
            *(ulong *)(param_1 + 0x28) = uVar3 + 4;
            if (cVar5 == 'l') {
              uVar8 = 7;
              goto LAB_108a4953c;
            }
          }
        }
        goto LAB_108a49554;
      }
    }
  }
  else {
    if (uVar10 != 0x74) {
      if (bVar4 == 0x7b) {
        uVar8 = 0xb;
        goto LAB_108a4953c;
      }
LAB_108a495c0:
      if (uVar10 - 0x30 < 10) {
        FUN_105dc4078(&lStack_60,param_1,1);
        if (lStack_60 == 3) {
          return lStack_58;
        }
        plVar6 = &lStack_60;
        goto LAB_108a49590;
      }
      goto LAB_108a495f8;
    }
    uVar1 = uVar3 + 1;
    *(ulong *)(param_1 + 0x28) = uVar1;
    if (uVar1 < uVar2) {
      cVar5 = *(char *)(lVar9 + uVar1);
      uVar1 = uVar3 + 2;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (cVar5 == 'r') {
        if (uVar2 == uVar1) goto LAB_108a494cc;
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 3;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'u') {
          if (uVar1 == uVar2) goto LAB_108a494cc;
          cVar5 = *(char *)(lVar9 + uVar1);
          *(ulong *)(param_1 + 0x28) = uVar3 + 4;
          if (cVar5 == 'e') {
            alStack_38[0] = CONCAT62(alStack_38[0]._2_6_,0x100);
            goto LAB_108a4954c;
          }
        }
      }
      goto LAB_108a49554;
    }
  }
LAB_108a494cc:
  alStack_38[0] = 5;
LAB_108a494d0:
  lVar9 = FUN_108a499a0(param_1,alStack_38);
  return lVar9;
}

