
undefined8 FUN_1089a7e6c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 uVar8;
  long lVar9;
  uint uVar10;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar7 = &lStack_70;
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  if (uVar2 <= uVar3) {
LAB_1089a8150:
    lStack_38 = 10;
    uVar6 = FUN_1089a7aec(param_1,&lStack_38);
LAB_1089a8164:
    uVar6 = func_0x0001089a8294(uVar6,param_1);
    return uVar6;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  bVar4 = *(byte *)(lVar9 + uVar3);
  uVar10 = (uint)bVar4;
  if (bVar4 < 0x66) {
    if (uVar10 == 0x22) {
      *(ulong *)(param_1 + 0x28) = uVar3 + 1;
      *(undefined8 *)(param_1 + 0x10) = 0;
      __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                (&lStack_50,param_1 + 0x18);
      if (lStack_50 == 2) {
        return uStack_48;
      }
      uStack_30 = uStack_48;
      uStack_28 = uStack_40;
      lStack_38 = CONCAT71(lStack_38._1_7_,5);
    }
    else {
      if (uVar10 == 0x2d) {
        *(ulong *)(param_1 + 0x28) = uVar3 + 1;
        FUN_104a564c0(&lStack_70,param_1,0);
        if (lStack_70 == 3) {
          return uStack_68;
        }
LAB_1089a810c:
        uVar6 = __ZN10serde_json2de12ParserNumber12invalid_type17h14d036a9e6dabf62E
                          (plVar7,param_2,&UNK_10b342f18);
        goto LAB_1089a8164;
      }
      if (bVar4 != 0x5b) goto LAB_1089a8118;
      uVar8 = 10;
LAB_1089a80b8:
      lStack_38 = CONCAT71(lStack_38._1_7_,uVar8);
    }
LAB_1089a80c8:
    uVar6 = func_0x000108a4a50c(&lStack_38,param_2,&UNK_10b342f18);
    goto LAB_1089a8164;
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
          if (uVar2 == uVar1) goto LAB_1089a8034;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'l') {
            if (uVar1 == uVar2) goto LAB_1089a8034;
            cVar5 = *(char *)(lVar9 + uVar1);
            uVar1 = uVar3 + 4;
            *(ulong *)(param_1 + 0x28) = uVar1;
            if (cVar5 == 's') {
              if (uVar1 == uVar2) goto LAB_1089a8034;
              cVar5 = *(char *)(lVar9 + uVar1);
              *(ulong *)(param_1 + 0x28) = uVar3 + 5;
              if (cVar5 == 'e') {
                lStack_38 = (ulong)lStack_38._2_6_ << 0x10;
                goto LAB_1089a80c8;
              }
            }
          }
        }
LAB_1089a80d0:
        lStack_38 = 9;
        goto LAB_1089a8038;
      }
    }
    else {
      if (uVar10 != 0x6e) goto LAB_1089a8118;
      uVar1 = uVar3 + 1;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (uVar1 < uVar2) {
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 2;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'u') {
          if (uVar2 == uVar1) goto LAB_1089a8034;
          cVar5 = *(char *)(lVar9 + uVar1);
          uVar1 = uVar3 + 3;
          *(ulong *)(param_1 + 0x28) = uVar1;
          if (cVar5 == 'l') {
            if (uVar1 == uVar2) goto LAB_1089a8034;
            cVar5 = *(char *)(lVar9 + uVar1);
            *(ulong *)(param_1 + 0x28) = uVar3 + 4;
            if (cVar5 == 'l') {
              uVar8 = 7;
              goto LAB_1089a80b8;
            }
          }
        }
        goto LAB_1089a80d0;
      }
    }
  }
  else {
    if (uVar10 != 0x74) {
      if (bVar4 == 0x7b) {
        uVar8 = 0xb;
        goto LAB_1089a80b8;
      }
LAB_1089a8118:
      if (uVar10 - 0x30 < 10) {
        FUN_104a564c0(&lStack_60,param_1,1);
        if (lStack_60 == 3) {
          return uStack_58;
        }
        plVar7 = &lStack_60;
        goto LAB_1089a810c;
      }
      goto LAB_1089a8150;
    }
    uVar1 = uVar3 + 1;
    *(ulong *)(param_1 + 0x28) = uVar1;
    if (uVar1 < uVar2) {
      cVar5 = *(char *)(lVar9 + uVar1);
      uVar1 = uVar3 + 2;
      *(ulong *)(param_1 + 0x28) = uVar1;
      if (cVar5 == 'r') {
        if (uVar2 == uVar1) goto LAB_1089a8034;
        cVar5 = *(char *)(lVar9 + uVar1);
        uVar1 = uVar3 + 3;
        *(ulong *)(param_1 + 0x28) = uVar1;
        if (cVar5 == 'u') {
          if (uVar1 == uVar2) goto LAB_1089a8034;
          cVar5 = *(char *)(lVar9 + uVar1);
          *(ulong *)(param_1 + 0x28) = uVar3 + 4;
          if (cVar5 == 'e') {
            lStack_38 = CONCAT62(lStack_38._2_6_,0x100);
            goto LAB_1089a80c8;
          }
        }
      }
      goto LAB_1089a80d0;
    }
  }
LAB_1089a8034:
  lStack_38 = 5;
LAB_1089a8038:
  uVar6 = func_0x0001089a818c(param_1,&lStack_38);
  return uVar6;
}

