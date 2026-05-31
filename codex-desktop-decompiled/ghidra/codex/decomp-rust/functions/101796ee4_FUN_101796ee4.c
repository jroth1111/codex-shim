
undefined8 FUN_101796ee4(undefined8 param_1,long param_2,long *param_3)

{
  ulong extraout_x1;
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_70 = 0;
  uStack_78 = 0x20;
  uStack_68 = 0x20;
  puStack_80 = &uStack_a0;
  auVar7 = FUN_1060f8cbc(param_1,param_2,&puStack_80);
  uVar1 = auVar7._8_8_;
  if ((auVar7._0_8_ & 1) == 0) {
    uVar4 = 1;
    do {
      if (uVar1 == 0) {
        if (uStack_78 < uStack_70) {
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                    (0,uStack_70,uStack_78,&UNK_10b2594d0);
          uVar1 = extraout_x1;
LAB_101797094:
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar1,0x20,&UNK_10b259c88);
        }
        else {
          uVar1 = uStack_70;
          if (0x20 < uStack_70) goto LAB_101797094;
          param_2 = param_3[2];
          uVar4 = uStack_70;
          if (uStack_70 <= (ulong)(*param_3 - param_2)) goto LAB_10179703c;
        }
        FUN_108880448(param_3,param_2,uVar4,1,1);
        param_2 = param_3[2];
LAB_10179703c:
        _memcpy(param_3[1] + param_2,&uStack_a0,uVar4);
        param_3[2] = param_2 + uVar4;
        return 0;
      }
      uVar2 = uVar1 & 3;
      if (uVar2 < 2) {
        if (uVar2 == 0) {
          if (*(char *)(uVar1 + 0x10) != '#') {
            return 1;
          }
        }
        else {
          if (*(char *)(uVar1 + 0xf) != '#') {
            return 1;
          }
          uVar5 = *(undefined8 *)(uVar1 - 1);
          puVar6 = *(undefined8 **)(uVar1 + 7);
          pcVar3 = (code *)*puVar6;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(uVar5);
          }
          if (puVar6[1] != 0) {
            _free(uVar5);
          }
          _free(uVar1 - 1);
        }
      }
      else if (uVar2 == 2) {
        if (uVar1 >> 0x20 != 4) {
          return 1;
        }
      }
      else if (uVar1 >> 0x20 != 0x23) {
        return 1;
      }
      uStack_70 = 0;
      uStack_78 = 0x20;
      uStack_68 = 0x20;
      puStack_80 = &uStack_a0;
      auVar7 = FUN_1060f8cbc(param_1,param_2,&puStack_80);
      uVar1 = auVar7._8_8_;
    } while ((auVar7._0_8_ & 1) == 0);
  }
  return 1;
}

