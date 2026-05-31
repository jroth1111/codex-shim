
void FUN_103d32524(char *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long extraout_x1;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long *plVar6;
  long lVar7;
  
  if (*param_1 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff38);
    lVar5 = extraout_x1;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    unaff_x20 = *(undefined8 **)(param_1 + 8);
    plVar6 = (long *)*unaff_x20;
    if (param_1[1] == '\x01') {
      lVar5 = plVar6[2];
      if (*plVar6 == lVar5) {
        FUN_10897c4d0(plVar6,lVar5,1,1,1);
        lVar5 = plVar6[2];
      }
      *(undefined1 *)(plVar6[1] + lVar5) = 10;
      lVar5 = lVar5 + 1;
      plVar6[2] = lVar5;
      lVar7 = unaff_x20[3];
    }
    else {
      lVar5 = plVar6[2];
      if ((ulong)(*plVar6 - lVar5) < 2) {
        FUN_10897c4d0(plVar6,lVar5,2,1,1);
        lVar5 = plVar6[2];
      }
      *(undefined2 *)(plVar6[1] + lVar5) = 0xa2c;
      lVar5 = lVar5 + 2;
      plVar6[2] = lVar5;
      lVar7 = unaff_x20[3];
    }
    if (lVar7 != 0) {
      uVar2 = unaff_x20[1];
      uVar4 = unaff_x20[2];
      do {
        if ((ulong)(*plVar6 - lVar5) < uVar4) {
          FUN_10897c4d0(plVar6,lVar5,uVar4,1,1);
          lVar5 = plVar6[2];
        }
        _memcpy(plVar6[1] + lVar5,uVar2,uVar4);
        lVar5 = lVar5 + uVar4;
        plVar6[2] = lVar5;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    param_1[1] = '\x02';
    func_0x000103d1d504(*unaff_x20,uVar1,uVar3);
    unaff_x21 = (long *)*unaff_x20;
    lVar5 = unaff_x21[2];
    unaff_x19 = param_3;
    if (1 < (ulong)(*unaff_x21 - lVar5)) goto LAB_103d32658;
  }
  FUN_10897c4d0(unaff_x21,lVar5,2,1,1);
  lVar5 = unaff_x21[2];
LAB_103d32658:
  *(undefined2 *)(unaff_x21[1] + lVar5) = 0x203a;
  unaff_x21[2] = lVar5 + 2;
  func_0x000103d38c64(unaff_x19,unaff_x20);
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return;
}

