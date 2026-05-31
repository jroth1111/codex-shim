
void FUN_1017a8d54(ulong *param_1)

{
  bool bVar1;
  ulong uVar2;
  uint *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar8 = *param_1;
  puVar10 = (ulong *)param_1[8];
  uVar2 = param_1[3];
  puVar3 = (uint *)param_1[4];
  puVar9 = (uint *)param_1[1];
  puVar12 = (ulong *)param_1[6];
  do {
    puVar11 = puVar12;
    if ((uVar8 & 1) == 0) {
      if (puVar12 == puVar10) {
LAB_1017a8e74:
        param_1[4] = 0;
        FUN_1017a9560(puVar11,((ulong)((long)puVar10 - (long)puVar11) >> 3) * 0x4ec4ec4ec4ec4ec5);
        if (param_1[7] != 0) {
          _free(param_1[5]);
        }
        uVar8 = param_1[3];
        lVar6 = param_1[4] + 1;
        lVar5 = uVar8 + 0x38;
        while (lVar6 = lVar6 + -1, lVar6 != 0) {
          (**(code **)(*(long *)(lVar5 + -0x18) + 0x20))
                    (lVar5,*(undefined8 *)(lVar5 + -0x10),*(undefined8 *)(lVar5 + -8));
          lVar5 = lVar5 + 0x48;
        }
        if (param_1[2] != 0) {
          _free(uVar8);
        }
        return;
      }
      puVar11 = puVar12 + 0xd;
      uVar8 = *puVar12;
      param_1[6] = (ulong)puVar11;
      if (uVar8 == 2) goto LAB_1017a8e74;
      puVar7 = (uint *)puVar12[1];
      uVar15 = puVar12[9];
      uVar14 = puVar12[8];
      uStack_90 = puVar12[0xb];
      uVar13 = puVar12[10];
      uStack_70 = puVar12[6];
      uStack_78 = puVar12[5];
      uStack_68 = puVar12[7];
      uStack_80 = puVar12[4];
      uStack_88 = puVar12[3];
      uVar8 = uVar8 & 1;
      *param_1 = uVar8;
      param_1[1] = (ulong)puVar7;
      if (uVar14 != 0) {
        (**(code **)(uVar14 + 0x20))(&uStack_90,uVar15,uVar13);
      }
    }
    else {
      if (puVar3 <= puVar9) {
        func_0x000108a07bdc(puVar9,puVar3,&UNK_10b25ad08);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1017a8f24);
        (*pcVar4)();
      }
      lVar6 = uVar2 + (long)puVar9 * 0x48;
      puVar7 = (uint *)(lVar6 + 0x10);
      bVar1 = (*puVar7 & 1) != 0;
      if (bVar1) {
        puVar7 = *(uint **)(lVar6 + 0x18);
      }
      uVar8 = (ulong)bVar1;
      *param_1 = uVar8;
      param_1[1] = (ulong)puVar7;
      lVar6 = uVar2 + (long)puVar9 * 0x48;
      uStack_68 = *(ulong *)(lVar6 + 0x40);
      uStack_80 = *(ulong *)(lVar6 + 0x28);
      uStack_88 = *(ulong *)(lVar6 + 0x20);
      uStack_70 = *(ulong *)(lVar6 + 0x38);
      uStack_78 = *(ulong *)(lVar6 + 0x30);
    }
    (**(code **)(uStack_88 + 0x20))(&uStack_70,uStack_80,uStack_78);
    puVar9 = puVar7;
    puVar12 = puVar11;
  } while( true );
}

