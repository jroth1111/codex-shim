
void FUN_102f7f3a4(ulong *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  if (param_3 - param_2 == 0) {
    uVar9 = 0;
    uStack_98 = 0;
    puStack_90 = (undefined8 *)0x8;
  }
  else {
    uVar9 = (ulong)(param_3 - param_2) / 0x48;
    puVar3 = (undefined8 *)_malloc(uVar9 * 0x18);
    if (puVar3 == (undefined8 *)0x0) {
      uVar5 = func_0x0001087c9084(8,uVar9 * 0x18);
      FUN_1033a3920(&uStack_98);
      uVar5 = __Unwind_Resume(uVar5);
      FUN_1033a3920(&uStack_98);
      auVar11 = __Unwind_Resume(uVar5);
      puVar3 = auVar11._8_8_;
      puVar6 = auVar11._0_8_;
      uStack_1c8 = puVar3[8];
      lVar7 = uStack_1c8 * 0x18;
      if (0x555555555555555 < uStack_1c8) {
        uVar5 = 0;
LAB_102f7f538:
        func_0x0001087c9084(uVar5,lVar7);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102f7f540);
        (*pcVar2)();
      }
      if (lVar7 == 0) {
        uStack_1c8 = 0;
        uStack_1c0 = 8;
      }
      else {
        uStack_1c0 = _malloc(lVar7);
        if (uStack_1c0 == 0) {
          uVar5 = 8;
          goto LAB_102f7f538;
        }
      }
      uStack_1b8 = 0;
      uStack_188 = puVar3[5];
      uStack_190 = puVar3[4];
      uStack_178 = puVar3[7];
      uStack_180 = puVar3[6];
      uStack_170 = puVar3[8];
      uStack_1a8 = puVar3[1];
      uStack_1b0 = *puVar3;
      uStack_198 = puVar3[3];
      uStack_1a0 = puVar3[2];
      if (uStack_1c8 < uStack_170) {
        FUN_10893e30c(&uStack_1c8,0,uStack_170,8,0x18);
      }
      uStack_138 = puVar3[5];
      uStack_140 = puVar3[4];
      uStack_128 = puVar3[7];
      uStack_130 = puVar3[6];
      uStack_120 = puVar3[8];
      uStack_158 = puVar3[1];
      uStack_160 = *puVar3;
      uStack_148 = puVar3[3];
      uStack_150 = puVar3[2];
      uVar9 = uStack_1b8;
      plVar8 = (long *)(uStack_1c0 + uStack_1b8 * 0x18 + 8);
      while (FUN_1034bf764(&lStack_110,&uStack_160), lStack_110 != 0) {
        lVar7 = lStack_110 + lStack_100 * 0x18;
        if (*(long *)(lVar7 + 8) == -0x8000000000000000) break;
        lStack_108 = *(long *)(lVar7 + 0x18);
        lStack_110 = *(long *)(lVar7 + 0x10);
        plVar8[-1] = *(long *)(lVar7 + 8);
        plVar8[1] = lStack_108;
        *plVar8 = lStack_110;
        uVar9 = uVar9 + 1;
        plVar8 = plVar8 + 3;
      }
      while (uStack_1b8 = uVar9, FUN_1034bf764(&lStack_110,&uStack_160), lStack_110 != 0) {
        lVar7 = lStack_110 + lStack_100 * 0x18;
        uVar9 = uStack_1b8;
        if (*(long *)(lVar7 + 8) != 0) {
          _free(*(undefined8 *)(lVar7 + 0x10));
          uVar9 = uStack_1b8;
        }
      }
      puVar6[1] = uStack_1c0;
      *puVar6 = uStack_1c8;
      puVar6[2] = uStack_1b8;
      return;
    }
    uVar10 = 0;
    plVar8 = (long *)(param_2 + 0x10);
    uStack_98 = uVar9;
    puStack_90 = puVar3;
    do {
      lVar7 = plVar8[-1];
      lVar1 = *plVar8;
      if (lVar1 == 0) {
        lVar4 = 1;
      }
      else {
        lVar4 = _malloc(lVar1);
        if (lVar4 == 0) {
          func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102f7f4bc);
          (*pcVar2)();
        }
      }
      _memcpy(lVar4,lVar7,lVar1);
      lStack_68 = lVar1;
      lStack_60 = lVar4;
      lStack_58 = lVar1;
      FUN_102d936f0(&uStack_80,&lStack_68);
      plVar8 = plVar8 + 9;
      puVar3[1] = uStack_78;
      *puVar3 = uStack_80;
      puVar3[2] = uStack_70;
      uVar10 = uVar10 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar9 != uVar10);
  }
  param_1[1] = (ulong)puStack_90;
  *param_1 = uStack_98;
  param_1[2] = uVar9;
  return;
}

