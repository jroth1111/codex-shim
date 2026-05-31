
undefined8 FUN_10611f954(undefined8 param_1,ushort *param_2,ulong param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulong uVar10;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if ((param_3 & 1) != 0) {
    uVar5 = (*(code *)&DAT_106126744)(param_1,param_2,param_3 >> 1);
    return uVar5;
  }
  bVar2 = (byte)*param_2;
  if (bVar2 != 0) {
    uVar10 = 0;
    do {
      puVar9 = (ushort *)((long)param_2 + 1);
      if ((char)bVar2 < '\0') {
        if (bVar2 == 0x80) {
          uVar3 = *(ushort *)((long)param_2 + 1);
          uVar4 = (*(code *)&DAT_106126744)(param_1,(byte *)((long)param_2 + 3),(ulong)uVar3);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          param_2 = (ushort *)((byte *)((long)param_2 + 3) + uVar3);
        }
        else {
          uStack_68 = param_1;
          if (bVar2 == 0xc0) {
            puVar1 = (undefined8 *)(param_3 + uVar10 * 0x10);
            puStack_60 = &UNK_10b4cf200;
            uStack_58 = 0x60000020;
            uVar4 = (*(code *)puVar1[1])(*puVar1,&uStack_68);
            param_2 = puVar9;
          }
          else {
            if ((bVar2 & 1) == 0) {
              uVar6 = 0x60000020;
              if ((bVar2 >> 1 & 1) == 0) goto LAB_1055b6c74;
LAB_1055b6c30:
              puVar8 = puVar9 + 1;
              uVar4 = (ulong)*puVar9;
              puVar9 = puVar8;
              if ((bVar2 >> 2 & 1) == 0) goto LAB_1055b6c7c;
LAB_1055b6c38:
              param_2 = puVar9 + 1;
              uVar7 = (ulong)*puVar9;
            }
            else {
              uVar6 = *(undefined4 *)((long)param_2 + 1);
              puVar9 = (ushort *)((long)param_2 + 5);
              if ((bVar2 >> 1 & 1) != 0) goto LAB_1055b6c30;
LAB_1055b6c74:
              uVar4 = 0;
              if ((bVar2 >> 2 & 1) != 0) goto LAB_1055b6c38;
LAB_1055b6c7c:
              uVar7 = 0;
              param_2 = puVar9;
            }
            if ((bVar2 >> 3 & 1) != 0) {
              uVar10 = (ulong)*param_2;
              param_2 = param_2 + 1;
            }
            if ((bVar2 >> 4 & 1) != 0) {
              uVar4 = (ulong)*(ushort *)(param_3 + uVar4 * 0x10 + 8);
            }
            if ((bVar2 >> 5 & 1) != 0) {
              uVar7 = (ulong)*(ushort *)(param_3 + uVar7 * 0x10 + 8);
            }
            puVar1 = (undefined8 *)(param_3 + uVar10 * 0x10);
            uStack_58 = CONCAT26((short)uVar7,CONCAT24((short)uVar4,uVar6));
            puStack_60 = &UNK_10b4cf200;
            uVar4 = (*(code *)puVar1[1])(*puVar1,&uStack_68);
          }
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          uVar10 = uVar10 + 1;
        }
      }
      else {
        uVar4 = (*(code *)&DAT_106126744)(param_1,puVar9,(ulong)bVar2);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        param_2 = (ushort *)((long)puVar9 + (ulong)bVar2);
      }
      bVar2 = (byte)*param_2;
    } while (bVar2 != 0);
  }
  return 0;
}

