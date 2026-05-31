
void FUN_1011ddf58(long *param_1,long *param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  char cStack_48;
  byte bStack_47;
  undefined6 uStack_46;
  long lStack_40;
  long lStack_38;
  
  FUN_1011dda68(&cStack_48);
  if (cStack_48 == '\x01') {
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = lStack_40;
    return;
  }
  if ((bStack_47 & 1) == 0) {
    lVar6 = -0x8000000000000000;
  }
  else {
    lVar6 = *param_2;
    *(long *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + 1;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    __ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
              (&cStack_48,lVar6 + 0x18);
    lVar3 = lStack_40;
    if (CONCAT62(uStack_46,CONCAT11(bStack_47,cStack_48)) != 2) {
      if (lStack_38 == 0) {
        lVar3 = 1;
        _memcpy(1,lStack_40,0);
LAB_1011de03c:
        *param_1 = lStack_38;
        param_1[1] = lVar3;
        param_1[2] = lStack_38;
        return;
      }
      lVar3 = _malloc(lStack_38);
      if (lVar3 == 0) {
        auVar8 = func_0x0001087c9084(1,lStack_38);
        lVar6 = auVar8._8_8_;
        plVar4 = auVar8._0_8_;
        uVar1 = *(ulong *)(lVar6 + 0x20);
        uVar7 = *(ulong *)(lVar6 + 0x28);
        if (uVar7 < uVar1) {
          do {
            bVar2 = *(byte *)(*(long *)(lVar6 + 0x18) + uVar7);
            if (0x3a < bVar2) {
LAB_1011de1c0:
              uStack_98 = 6;
              goto LAB_1011de10c;
            }
            if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
              if ((ulong)bVar2 != 0x3a) goto LAB_1011de1c0;
              uVar7 = uVar7 + 1;
              *(ulong *)(lVar6 + 0x28) = uVar7;
              if (uVar1 <= uVar7) goto LAB_1011de108;
              goto LAB_1011de0e0;
            }
            uVar7 = uVar7 + 1;
            *(ulong *)(lVar6 + 0x28) = uVar7;
          } while (uVar1 != uVar7);
        }
        uStack_98 = 3;
        goto LAB_1011de10c;
      }
      _memcpy(lVar3,lStack_40,lStack_38);
      if (lStack_38 != -0x8000000000000000) goto LAB_1011de03c;
    }
    lVar6 = -0x7fffffffffffffff;
    param_1[1] = lVar3;
  }
  *param_1 = lVar6;
  return;
joined_r0x0001011de16c:
  if (lVar6 != 0) goto LAB_1011de198;
  func_0x0001087c9084(1,lStack_88);
LAB_1011de17c:
  if (lStack_88 == 0) goto LAB_1011de194;
  lVar6 = _malloc(lStack_88);
  goto joined_r0x0001011de16c;
LAB_1011de194:
  lVar6 = 1;
LAB_1011de198:
  _memcpy(lVar6,lStack_90,lStack_88);
  *plVar4 = lVar6;
  plVar4[1] = lStack_88;
  return;
  while( true ) {
    uVar7 = uVar7 + 1;
    *(ulong *)(lVar6 + 0x28) = uVar7;
    if (uVar1 == uVar7) break;
LAB_1011de0e0:
    bVar2 = *(byte *)(*(long *)(lVar6 + 0x18) + uVar7);
    if (0x22 < bVar2) {
LAB_1011de1c8:
      uVar5 = FUN_108832208(lVar6,&uStack_98,&UNK_10b20a6c0);
      lVar6 = FUN_108832da4(uVar5,lVar6);
      goto LAB_1011de11c;
    }
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x22) goto LAB_1011de1c8;
      *(ulong *)(lVar6 + 0x28) = uVar7 + 1;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                (&uStack_98);
      if (uStack_98 == 2) {
        plVar4[1] = lStack_90;
        goto LAB_1011de150;
      }
      if ((uStack_98 & 1) == 0) goto LAB_1011de17c;
      if (lStack_88 == 0) goto LAB_1011de194;
      lVar6 = _malloc(lStack_88);
      goto joined_r0x0001011de16c;
    }
  }
LAB_1011de108:
  uStack_98 = 5;
LAB_1011de10c:
  lVar6 = FUN_108831e8c(lVar6,&uStack_98);
LAB_1011de11c:
  plVar4[1] = lVar6;
LAB_1011de150:
  *plVar4 = 0;
  return;
}

