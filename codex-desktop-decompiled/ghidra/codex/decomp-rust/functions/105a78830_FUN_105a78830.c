
undefined8 * FUN_105a78830(undefined8 *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong extraout_x8;
  ulong extraout_x8_00;
  code *pcVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_88;
  undefined8 *puStack_80;
  byte bStack_78;
  byte bStack_77;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_27;
  undefined8 uVar5;
  
  if (*param_2 == 2) {
    *(undefined1 *)(param_1 + 4) = 2;
    return param_1;
  }
  if ((*param_2 & 1) == 0) {
    uVar8 = param_2[5];
    uVar3 = *(ulong *)(param_2[4] + 0x28);
    if (uVar3 <= uVar8) goto LAB_105a7898c;
    piVar10 = (int *)(*(long *)(param_2[4] + 0x20) + uVar8 * 0x68);
    if (param_2[2] == 0) {
      *param_2 = 2;
      param_2[2] = 2;
      piVar10 = piVar10 + 6;
LAB_105a78920:
      puVar4 = (undefined8 *)
               (*(code *)**(undefined8 **)piVar10)
                         (&uStack_48,piVar10 + 6,*(undefined8 *)(piVar10 + 2),
                          *(undefined8 *)(piVar10 + 4));
      iVar1 = piVar10[8];
      param_1[1] = uStack_40;
      *param_1 = uStack_48;
      param_1[3] = uStack_30;
      param_1[2] = uStack_38;
      param_1[4] = CONCAT71(uStack_27,(char)iVar1);
      return puVar4;
    }
    if (*piVar10 == 1) {
      uVar8 = *(ulong *)(piVar10 + 2);
      *param_2 = 1;
      param_2[1] = uVar8;
      piVar10 = piVar10 + 6;
      goto LAB_105a78920;
    }
    uVar3 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b1564d,0x28,&UNK_10b407cc0);
    uVar8 = extraout_x8;
  }
  else {
    uVar3 = param_2[1];
    uVar8 = *(ulong *)(param_2[4] + 0x40);
    if (uVar3 < uVar8) {
      lVar9 = *(long *)(param_2[4] + 0x38) + uVar3 * 0x48;
      if ((param_2[2] == 1) && (uVar3 == param_2[3])) {
        *param_2 = 2;
        param_2[2] = 2;
      }
      else if ((*(uint *)(lVar9 + 0x10) & 1) == 0) {
        *param_2 = 2;
      }
      else {
        uVar8 = *(ulong *)(lVar9 + 0x18);
        *param_2 = 1;
        param_2[1] = uVar8;
      }
      piVar10 = (int *)(lVar9 + 0x20);
      goto LAB_105a78920;
    }
  }
  uVar8 = func_0x000108a07bdc(uVar3,uVar8,&UNK_10b407cd8);
  uVar3 = extraout_x8_00;
LAB_105a7898c:
  auVar12 = func_0x000108a07bdc(uVar8,uVar3,&UNK_10b407ca8);
  puVar4 = auVar12._8_8_;
  uStack_88 = auVar12._0_8_;
  bStack_78 = (**(code **)(puVar4[1] + 0x18))(*puVar4,&UNK_109b075a9,0x14);
  bStack_77 = 0;
  puStack_80 = puVar4;
  __ZN4core3fmt8builders11DebugStruct5field17h58caabf81ace0911E
            (&puStack_80,&UNK_109b075bd,0xf,&uStack_88,&UNK_10b3f9ac8);
  uVar2 = (uint)(bStack_77 | bStack_78);
  if ((bStack_77 == 1) && ((bStack_78 & 1) == 0)) {
    if (*(char *)((long)puStack_80 + 0x12) < '\0') {
      uVar5 = *puStack_80;
      pcVar11 = *(code **)(puStack_80[1] + 0x18);
      puVar6 = &UNK_108f5894b;
      uVar7 = 1;
    }
    else {
      uVar5 = *puStack_80;
      pcVar11 = *(code **)(puStack_80[1] + 0x18);
      puVar6 = &UNK_108f5894c;
      uVar7 = 2;
    }
    uVar2 = (*pcVar11)(uVar5,puVar6,uVar7);
  }
  return (undefined8 *)(ulong)(uVar2 & 1);
}

