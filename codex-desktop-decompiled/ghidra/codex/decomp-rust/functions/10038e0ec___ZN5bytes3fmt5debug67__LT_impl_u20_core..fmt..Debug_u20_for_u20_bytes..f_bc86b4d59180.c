
undefined8
__ZN5bytes3fmt5debug67__LT_impl_u20_core__fmt__Debug_u20_for_u20_bytes__fmt__BytesRef_GT_3fmt17hfa5452faa8515fa4E
          (undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  code *pcVar7;
  byte bStack_75;
  uint uStack_74;
  uint *puStack_70;
  undefined1 *puStack_68;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  pcVar7 = *(code **)(lVar1 + 0x18);
  uVar2 = (*pcVar7)(uVar3,&UNK_108c8bc10,2);
  if ((uVar2 & 1) == 0) {
    lVar5 = param_1[1];
    if (lVar5 != 0) {
      pbVar6 = (byte *)*param_1;
      do {
        bStack_75 = *pbVar6;
        uVar4 = (uint)bStack_75;
        if (bStack_75 < 0xd) {
          if (uVar4 == 0) {
            uVar2 = (*pcVar7)(uVar3,&UNK_108c8bc1e,2);
          }
          else if (uVar4 == 9) {
            uVar2 = (*pcVar7)(uVar3,&UNK_108c8bc20,2);
          }
          else {
            if (uVar4 != 10) goto LAB_10038e1e8;
            uVar2 = (*pcVar7)(uVar3,&UNK_108c8bc24,2);
          }
        }
        else if (bStack_75 == 0xd) {
          uVar2 = (*pcVar7)(uVar3,&UNK_108c8bc22,2);
        }
        else if ((uVar4 == 0x22) || (uVar4 == 0x5c)) {
          puStack_68 = &__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hccc65653b32ebe4fE;
          uStack_74 = uVar4;
          puStack_70 = &uStack_74;
          uVar2 = __ZN4core3fmt5write17h64810b21425781ecE(uVar3,lVar1,s___108abd36b,&puStack_70);
        }
        else {
LAB_10038e1e8:
          if (uVar4 - 0x20 < 0x5f) {
            puStack_68 = &__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hccc65653b32ebe4fE;
            uStack_74 = uVar4;
            puStack_70 = &uStack_74;
            uVar2 = __ZN4core3fmt5write17h64810b21425781ecE(uVar3,lVar1,s__108b1bd74,&puStack_70);
          }
          else {
            puStack_70 = (uint *)&bStack_75;
            puStack_68 = &
                         __ZN4core3fmt3num52__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_u8_GT_3fmt17h1af3ec5dbe43683cE
            ;
            uVar2 = __ZN4core3fmt5write17h64810b21425781ecE(uVar3,lVar1,&UNK_108c8bc13,&puStack_70);
          }
        }
        if ((uVar2 & 1) != 0) goto LAB_10038e130;
        lVar5 = lVar5 + -1;
        pbVar6 = pbVar6 + 1;
      } while (lVar5 != 0);
    }
    uVar3 = (*pcVar7)(uVar3,&UNK_108c8bc12,1);
  }
  else {
LAB_10038e130:
    uVar3 = 1;
  }
  return uVar3;
}

