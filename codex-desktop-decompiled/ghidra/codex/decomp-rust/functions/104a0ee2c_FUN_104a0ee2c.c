
void FUN_104a0ee2c(undefined8 *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  uint auStack_58 [2];
  undefined8 uStack_50;
  ulong uStack_48;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  if ((param_2[7] & 1) != 0) {
    uVar5 = *param_2 ^ 0x8000000000000000;
    if (-1 < (long)*param_2) {
      uVar5 = 1;
    }
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        plVar7 = (long *)param_2[6];
        lVar8 = plVar7[2];
        lVar9 = lVar8;
        if (*plVar7 == lVar8) goto LAB_104a0efa8;
        while( true ) {
          lVar3 = auVar10._8_8_;
          *(undefined1 *)(plVar7[1] + lVar8) = 10;
          plVar7[2] = lVar9 + 1;
          uVar6 = *(ulong *)(lVar3 + 0x20);
          uVar5 = *(ulong *)(lVar3 + 0x10);
          if (uVar6 <= uVar5) break;
LAB_104a0ef94:
          auVar10 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                              (0,uVar6,uVar5,&UNK_10b3f4628);
LAB_104a0efa8:
          FUN_1089a4f48(plVar7,lVar9,1,1,1);
          lVar8 = plVar7[2];
        }
        func_0x0001055bf348(auStack_58,*(undefined8 *)(lVar3 + 8),uVar6);
        uVar2 = uStack_50;
        uVar5 = uStack_48;
      }
      else {
        plVar7 = (long *)param_2[6];
        lVar9 = plVar7[2];
        lVar8 = lVar9;
        if (*plVar7 == lVar9) {
          FUN_1089a4f48(plVar7,lVar9,1,1,1);
          lVar8 = plVar7[2];
        }
        *(undefined1 *)(plVar7[1] + lVar8) = 10;
        plVar7[2] = lVar9 + 1;
        uVar4 = param_2[1];
        uVar6 = *(ulong *)(uVar4 + 0x20);
        uVar5 = *(ulong *)(uVar4 + 0x10);
        if (uVar5 < uVar6) goto LAB_104a0ef94;
        func_0x0001055bf348(auStack_58,*(undefined8 *)(uVar4 + 8),uVar6);
        uVar2 = uStack_50;
        uVar5 = uStack_48;
      }
      puVar1 = auVar10._0_8_;
      if ((auStack_58[0] & 1) != 0) {
        *puVar1 = 4;
        puVar1[1] = uVar2;
        puVar1[2] = uVar5;
        return;
      }
      lVar8 = plVar7[2];
      if ((ulong)(*plVar7 - lVar8) < uVar5) {
        FUN_1089a4f48(plVar7,lVar8,uVar5,1,1);
        lVar8 = plVar7[2];
      }
      _memcpy(plVar7[1] + lVar8,uVar2,uVar5);
      plVar7[2] = lVar8 + uVar5;
    }
    param_1 = auVar10._0_8_;
    *(undefined1 *)(auVar10._8_8_ + 0x38) = 0;
  }
  *param_1 = 5;
  return;
}

