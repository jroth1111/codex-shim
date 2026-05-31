
void FUN_1013e84e8(undefined1 *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (uVar4 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + uVar4);
      if (0x22 < bVar1) {
LAB_1013e87f4:
        uVar2 = FUN_108832208(param_2,&lStack_38,&UNK_10b24ecd8);
        uVar2 = FUN_108832da4(uVar2,param_2);
        *(undefined8 *)(param_1 + 8) = uVar2;
        uVar5 = 1;
LAB_1013e87d8:
        *param_1 = uVar5;
        return;
      }
      if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar1 != 0x22) goto LAB_1013e87f4;
        *(ulong *)(param_2 + 0x28) = uVar4 + 1;
        *(undefined8 *)(param_2 + 0x10) = 0;
        __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                  (&lStack_38);
        if (lStack_38 != 2) {
          if (lStack_28 < 0x21) {
            if (lStack_28 == 0x12) {
              if ((*plStack_30 != 0x6d696c5f65746172 || plStack_30[1] != 0x68636165725f7469) ||
                  (short)plStack_30[2] != 0x6465) goto LAB_1013e87cc;
              uVar3 = 0;
            }
            else if ((lStack_28 == 0x20) &&
                    (((*plStack_30 == 0x636170736b726f77 && plStack_30[1] == 0x5f72656e776f5f65) &&
                     plStack_30[2] == 0x5f73746964657263) && plStack_30[3] == 0x646574656c706564)) {
              uVar3 = 1;
            }
            else {
LAB_1013e87cc:
              uVar3 = 5;
            }
          }
          else if (lStack_28 == 0x21) {
            if ((((*plStack_30 != 0x636170736b726f77 || plStack_30[1] != 0x7265626d656d5f65) ||
                 plStack_30[2] != 0x737469646572635f) || plStack_30[3] != 0x6574656c7065645f) ||
                (char)plStack_30[4] != 'd') goto LAB_1013e87cc;
            uVar3 = 2;
          }
          else if (lStack_28 == 0x23) {
            if ((((*plStack_30 != 0x636170736b726f77 || plStack_30[1] != 0x5f72656e776f5f65) ||
                 plStack_30[2] != 0x696c5f6567617375) || plStack_30[3] != 0x636165725f74696d) ||
                *(long *)((long)plStack_30 + 0x1b) != 0x646568636165725f) goto LAB_1013e87cc;
            uVar3 = 3;
          }
          else {
            if ((lStack_28 != 0x24) ||
               ((((*plStack_30 != 0x636170736b726f77 || plStack_30[1] != 0x7265626d656d5f65) ||
                 plStack_30[2] != 0x6c5f65676173755f) || plStack_30[3] != 0x6165725f74696d69) ||
                (int)plStack_30[4] != 0x64656863)) goto LAB_1013e87cc;
            uVar3 = 4;
          }
          uVar5 = 0;
          param_1[1] = uVar3;
          goto LAB_1013e87d8;
        }
        *(long **)(param_1 + 8) = plStack_30;
        goto LAB_1013e858c;
      }
      uVar4 = uVar4 + 1;
      *(ulong *)(param_2 + 0x28) = uVar4;
    } while (*(ulong *)(param_2 + 0x20) != uVar4);
  }
  lStack_38 = 5;
  uVar2 = FUN_108831e8c(param_2,&lStack_38);
  *(undefined8 *)(param_1 + 8) = uVar2;
LAB_1013e858c:
  *param_1 = 1;
  return;
}

