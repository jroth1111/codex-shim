
byte FUN_10179bc90(undefined8 *param_1,long **param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined1 uStack_61;
  long **pplStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar9 = (long *)*param_1;
  if (*plVar9 == -0x8000000000000000) {
    plStack_80 = plVar9 + 1;
    bVar3 = (*(code *)param_2[1][3])(*param_2,&UNK_108ce5aba,7);
    uStack_58._0_2_ = (ushort)bVar3;
    pplStack_60 = param_2;
    __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
              (&pplStack_60,&UNK_108ce5d96,7,plVar9 + 4,&UNK_10b25aa10);
    __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
              (&pplStack_60,&UNK_108c78a78,8,&plStack_80,&UNK_10b25aa30);
    bVar3 = uStack_58._1_1_ | (byte)uStack_58;
    if ((uStack_58._1_1_ != 1) || (((ulong)uStack_58 & 1) != 0)) goto LAB_10179bf78;
    if (*(char *)((long)pplStack_60 + 0x12) < '\0') {
      plVar9 = *pplStack_60;
      pcVar8 = (code *)pplStack_60[1][3];
      puVar6 = &UNK_108f5894b;
LAB_10179bf6c:
      uVar7 = 1;
    }
    else {
      plVar9 = *pplStack_60;
      pcVar8 = (code *)pplStack_60[1][3];
      puVar6 = &UNK_108f5894c;
      uVar7 = 2;
    }
    bVar3 = (*pcVar8)(plVar9,puVar6,uVar7);
  }
  else {
    plVar1 = *param_2;
    plVar2 = param_2[1];
    pcVar8 = (code *)plVar2[3];
    uVar5 = (*pcVar8)(plVar1,&UNK_108ce61c3,3);
    if ((uVar5 & 1) == 0) {
      if (*(char *)((long)param_2 + 0x12) < '\0') {
        uVar5 = (*pcVar8)(plVar1,&UNK_108f5892f,2);
        bVar3 = 1;
        if ((uVar5 & 1) != 0) goto LAB_10179bf78;
        uStack_61 = 1;
        puStack_70 = &uStack_61;
        plStack_50 = param_2[2];
        pplStack_60 = &plStack_80;
        uStack_58 = &UNK_10b392408;
        plStack_48 = plVar9 + 7;
        plStack_80 = plVar1;
        plStack_78 = plVar2;
        iVar4 = __ZN4core3fmt9Formatter26debug_struct_field4_finish17h025fb636ae9b0f9aE
                          (&pplStack_60,&UNK_108ce62bc,0x11,&UNK_108ce62cd,10,plVar9,&UNK_10b25aa90,
                           &UNK_108ce62d7,0x13,plVar9 + 0xd,&UNK_10b25a950,&UNK_108ce62ea,0xb,
                           plVar9 + 10,&UNK_10b25aab0,&UNK_108ce62f5,10,&plStack_48,&UNK_10b25aad0);
        if (iVar4 != 0) goto LAB_10179bd88;
        uVar5 = (**(code **)(uStack_58 + 0x18))(pplStack_60,&UNK_108f5892c,2);
      }
      else {
        bVar3 = 1;
        uVar5 = (*pcVar8)(plVar1,&UNK_108f5892e,1);
        if ((uVar5 & 1) != 0) goto LAB_10179bf78;
        pplStack_60 = (long **)(plVar9 + 7);
        uVar5 = __ZN4core3fmt9Formatter26debug_struct_field4_finish17h025fb636ae9b0f9aE
                          (param_2,&UNK_108ce62bc,0x11,&UNK_108ce62cd,10,plVar9,&UNK_10b25aa90,
                           &UNK_108ce62d7,0x13,plVar9 + 0xd,&UNK_10b25a950,&UNK_108ce62ea,0xb,
                           plVar9 + 10,&UNK_10b25aab0,&UNK_108ce62f5,10,&pplStack_60,&UNK_10b25aad0)
        ;
      }
      if ((uVar5 & 1) == 0) {
        plVar9 = *param_2;
        pcVar8 = (code *)param_2[1][3];
        puVar6 = &UNK_108f58934;
        goto LAB_10179bf6c;
      }
    }
LAB_10179bd88:
    bVar3 = 1;
  }
LAB_10179bf78:
  return bVar3 & 1;
}

