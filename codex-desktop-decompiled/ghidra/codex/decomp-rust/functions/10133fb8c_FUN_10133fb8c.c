
/* WARNING: Removing unreachable block (ram,0x00010133fde4) */

void FUN_10133fb8c(undefined1 *param_1,byte *param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined2 uStack_50;
  ulong uStack_48;
  undefined1 uStack_31;
  
  bVar3 = *param_2;
  if (bVar3 - 0xc < 2) {
    pbVar8 = (byte *)0x0;
joined_r0x00010133fc54:
    if (bVar3 < 0xd) {
      if (bVar3 == 1) {
        bVar3 = param_2[1];
        uStack_48 = (ulong)bVar3;
        if (bVar3 != 0) {
          if (bVar3 != 1) {
LAB_10133fd34:
            uStack_50 = CONCAT11(uStack_50._1_1_,1);
            uStack_48 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (&uStack_50,&UNK_10b2242c0,&UNK_10b20a590);
            goto LAB_10133fd00;
          }
LAB_10133fc88:
          uStack_50 = 0x100;
          goto LAB_10133fc9c;
        }
      }
      else {
        if (bVar3 != 4) {
          if (bVar3 != 0xc) goto LAB_10133fe6c;
          plVar1 = *(long **)(param_2 + 0x10);
          lVar2 = *(long *)(param_2 + 0x18);
          goto joined_r0x00010133fbdc;
        }
        uStack_48 = *(ulong *)(param_2 + 8);
        if (uStack_48 != 0) {
          if (uStack_48 != 1) goto LAB_10133fd34;
          goto LAB_10133fc88;
        }
      }
LAB_10133fd7c:
      uStack_50 = 0;
LAB_10133fc9c:
      if (uStack_50._1_1_ == '\0') {
        if ((pbVar8 != (byte *)0x0) && (*pbVar8 != 0x12)) goto LAB_10133fe44;
        uVar7 = 0;
      }
      else {
        if ((pbVar8 != (byte *)0x0) && (*pbVar8 != 0x12)) {
LAB_10133fe44:
          uVar4 = FUN_108855c40(pbVar8,&uStack_31,&UNK_10b20a5c0);
          *(undefined8 *)(param_1 + 8) = uVar4;
          goto LAB_10133fd08;
        }
        uVar7 = 1;
      }
      uVar6 = 0;
      param_1[1] = uVar7;
      goto LAB_10133fd0c;
    }
    if (bVar3 == 0xd) {
      plVar1 = *(long **)(param_2 + 8);
      lVar2 = *(long *)(param_2 + 0x10);
joined_r0x00010133fbdc:
      if (lVar2 == 4) {
        if ((int)*plVar1 == 0x72657375) goto LAB_10133fd7c;
      }
      else if ((lVar2 == 9) && (*plVar1 == 0x6e61747369737361 && (char)plVar1[1] == 't')) {
        uStack_50 = 0x100;
        goto LAB_10133fc9c;
      }
      uStack_48 = FUN_1087e4494(plVar1,lVar2,&UNK_10b2242a0,2);
    }
    else {
      if (bVar3 == 0xe) {
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        uVar5 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        if (bVar3 != 0xf) {
LAB_10133fe6c:
          uStack_48 = FUN_108855c40(param_2,&uStack_31,&UNK_10b2145c8);
          goto LAB_10133fd00;
        }
        uVar4 = *(undefined8 *)(param_2 + 8);
        uVar5 = *(undefined8 *)(param_2 + 0x10);
      }
      FUN_10086d378(&uStack_50,uVar4,uVar5);
      if ((char)uStack_50 != '\x01') goto LAB_10133fc9c;
    }
LAB_10133fd00:
    *(ulong *)(param_1 + 8) = uStack_48;
  }
  else {
    if (bVar3 == 0x15) {
      if (*(long *)(param_2 + 0x18) == 1) {
        param_2 = *(byte **)(param_2 + 0x10);
        pbVar8 = param_2 + 0x20;
        bVar3 = *param_2;
        goto joined_r0x00010133fc54;
      }
      uStack_50 = CONCAT11(uStack_50._1_1_,0xb);
      uVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (&uStack_50,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      FUN_1088556a8(&uStack_50);
      uVar4 = func_0x000108a4a50c(&uStack_50,&UNK_10b20a5b0,&UNK_10b20a590);
    }
    *(undefined8 *)(param_1 + 8) = uVar4;
  }
LAB_10133fd08:
  uVar6 = 1;
LAB_10133fd0c:
  *param_1 = uVar6;
  return;
}

