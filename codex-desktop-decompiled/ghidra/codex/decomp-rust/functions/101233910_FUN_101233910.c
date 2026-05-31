
/* WARNING: Removing unreachable block (ram,0x000101233a8c) */

void FUN_101233910(undefined1 *param_1,byte *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined2 uStack_50;
  ulong uStack_48;
  undefined1 uStack_31;
  
  bVar1 = *param_2;
  if (bVar1 - 0xc < 2) {
    pbVar8 = (byte *)0x0;
joined_r0x0001012339dc:
    if (bVar1 < 0xd) {
      if (bVar1 == 1) {
        bVar1 = param_2[1];
        uStack_48 = (ulong)bVar1;
        if (bVar1 == 0) goto LAB_101233adc;
        if ((bVar1 == 1) || (bVar1 == 2)) goto LAB_101233ac4;
LAB_101233a54:
        uStack_50 = CONCAT11(uStack_50._1_1_,1);
        uStack_48 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                              (&uStack_50,&UNK_10b229e80,&UNK_10b20a590);
      }
      else {
        if (bVar1 == 4) {
          uStack_48 = *(ulong *)(param_2 + 8);
          if (uStack_48 != 0) {
            if ((uStack_48 != 1) && (uStack_48 != 2)) goto LAB_101233a54;
LAB_101233ac4:
            uStack_50 = (ushort)(byte)uStack_48 << 8;
            goto LAB_101233b24;
          }
LAB_101233adc:
          uStack_50 = 0;
LAB_101233b24:
          if (uStack_50._1_1_ == '\0') {
            if ((pbVar8 == (byte *)0x0) || (*pbVar8 == 0x12)) {
              uVar6 = 0;
              param_1[1] = 0;
              goto LAB_101233b88;
            }
          }
          else if (uStack_50._1_1_ == '\x01') {
            if ((pbVar8 == (byte *)0x0) || (*pbVar8 == 0x12)) {
              uVar7 = 1;
LAB_101233b84:
              uVar6 = 0;
              param_1[1] = uVar7;
              goto LAB_101233b88;
            }
          }
          else if ((pbVar8 == (byte *)0x0) || (*pbVar8 == 0x12)) {
            uVar7 = 2;
            goto LAB_101233b84;
          }
          uVar3 = FUN_108855c40(pbVar8,&uStack_31,&UNK_10b20a5c0);
          goto LAB_101233bfc;
        }
        if (bVar1 == 0xc) {
          piVar2 = *(int **)(param_2 + 0x10);
          lVar4 = *(long *)(param_2 + 0x18);
          if (lVar4 == 7) goto LAB_101233a9c;
          goto LAB_101233968;
        }
LAB_101233c08:
        uStack_48 = FUN_108855c40(param_2,&uStack_31,&UNK_10b215388);
      }
    }
    else if (bVar1 == 0xd) {
      piVar2 = *(int **)(param_2 + 8);
      lVar4 = *(long *)(param_2 + 0x10);
      if (lVar4 == 7) {
LAB_101233a9c:
        if (*piVar2 == 0x6c636564 && *(int *)((long)piVar2 + 3) == 0x656e696c) {
          uStack_48 = 1;
          goto LAB_101233ac4;
        }
      }
      else {
LAB_101233968:
        if (lVar4 == 6) {
          if (*piVar2 == 0x65636361 && (short)piVar2[1] == 0x7470) goto LAB_101233adc;
          if (*piVar2 == 0x636e6163 && (short)piVar2[1] == 0x6c65) {
            uStack_48 = 2;
            goto LAB_101233ac4;
          }
        }
      }
      uStack_48 = FUN_1087e4494(piVar2,lVar4,&UNK_10b229ee0,3);
    }
    else {
      if (bVar1 == 0xe) {
        uVar3 = *(undefined8 *)(param_2 + 0x10);
        uVar5 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        if (bVar1 != 0xf) goto LAB_101233c08;
        uVar3 = *(undefined8 *)(param_2 + 8);
        uVar5 = *(undefined8 *)(param_2 + 0x10);
      }
      FUN_1009ee844(&uStack_50,uVar3,uVar5);
      if ((char)uStack_50 != '\x01') goto LAB_101233b24;
    }
    *(ulong *)(param_1 + 8) = uStack_48;
    uVar6 = 1;
  }
  else {
    if (bVar1 == 0x15) {
      if (*(long *)(param_2 + 0x18) == 1) {
        param_2 = *(byte **)(param_2 + 0x10);
        pbVar8 = param_2 + 0x20;
        bVar1 = *param_2;
        goto joined_r0x0001012339dc;
      }
      uStack_50 = CONCAT11(uStack_50._1_1_,0xb);
      uVar3 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                        (&uStack_50,&UNK_10b20a580,&UNK_10b20a590);
    }
    else {
      FUN_1088556a8(&uStack_50);
      uVar3 = func_0x000108a4a50c(&uStack_50,&UNK_10b20a5b0,&UNK_10b20a590);
    }
LAB_101233bfc:
    *(undefined8 *)(param_1 + 8) = uVar3;
    uVar6 = 1;
  }
LAB_101233b88:
  *param_1 = uVar6;
  return;
}

