
void FUN_1004f3b94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 unaff_x24;
  undefined1 auVar12 [16];
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined3 uStack_64;
  
  bVar3 = *(byte *)((long)param_2 + 0xd1);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        FUN_107c05cc0(&UNK_10b215a40);
      }
      FUN_107c05cc4();
LAB_1004f3fec:
      FUN_107c03c64(1,unaff_x24);
LAB_1004f4018:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004f401c);
      (*pcVar5)();
    }
    *(undefined1 *)(param_2 + 0x1a) = 0;
    param_2[0x14] = (long *)param_2[0x17];
    param_2[0x15] = (long *)param_2[0x18];
    if (*(long *)param_2[0x19] == -0x7ffffffffffffffb) {
      param_2[0x16] = (long *)param_2[0x19] + 1;
      lVar6 = *(long *)param_2[0x17];
      uVar11 = *(undefined8 *)(lVar6 + 0x3d8);
      param_2[0x22] = *(undefined8 *)(lVar6 + 0x3e0);
      param_2[0x21] = uVar11;
      lVar6 = *(long *)param_2[0x18];
      uVar11 = *(undefined8 *)(lVar6 + 0x248);
      lVar6 = *(long *)(lVar6 + 0x250);
      if (lVar6 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar6);
        if (lVar7 == 0) {
          FUN_107c03c64(1,lVar6);
          goto LAB_1004f4018;
        }
      }
      _memcpy(lVar7,uVar11,lVar6);
      param_2[0x1b] = lVar6;
      param_2[0x1c] = lVar7;
      param_2[0x1d] = lVar6;
      uVar11 = *(undefined8 *)(*(long *)param_2[0x15] + 0x3a8);
      lVar6 = *(long *)(*(long *)param_2[0x15] + 0x3b0);
      if (lVar6 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar6);
        if (lVar7 == 0) {
          FUN_107c03c64(1,lVar6);
          goto LAB_1004f4018;
        }
      }
      _memcpy(lVar7,uVar11,lVar6);
      param_2[0x1e] = lVar6;
      param_2[0x1f] = lVar7;
      param_2[0x20] = lVar6;
      param_2[0x23] = *(long *)param_2[0x14] + 0x10;
      *(undefined1 *)(param_2 + 0x25) = 0;
      goto LAB_1004f3cd4;
    }
    plVar10 = (long *)0x0;
    uStack_a0 = 0;
    uStack_98._0_1_ = 0;
    uVar11 = 8;
  }
  else {
    if (bVar3 == 3) {
LAB_1004f3cd4:
      func_0x0001005a7878(&plStack_b0,param_2 + 0x23);
      uVar4 = uStack_a0;
      uVar11 = uStack_a8;
      plVar10 = plStack_b0;
      if (plStack_b0 == (long *)0x8000000000000001) {
        *param_1 = 0x8000000000000000;
        uVar9 = 3;
        goto LAB_1004f3fb0;
      }
      FUN_100d3e874(param_2 + 0x23);
      uVar2 = *(undefined8 *)(*(long *)param_2[0x15] + 0x48);
      lVar6 = *(long *)(*(long *)param_2[0x15] + 0x50);
      if (lVar6 == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = _malloc(lVar6);
        if (lVar7 == 0) {
          FUN_107c03c64(1,lVar6);
          goto LAB_1004f4018;
        }
      }
      _memcpy(lVar7,uVar2,lVar6);
      bVar3 = *(byte *)(*(long *)param_2[0x15] + 0x790);
      unaff_x24 = 7;
      if (5 < bVar3) {
        unaff_x24 = 0x11;
      }
      lVar8 = _malloc(unaff_x24);
      if (lVar8 == 0) goto LAB_1004f3fec;
      puVar1 = &UNK_108d524f0;
      if (5 < bVar3) {
        puVar1 = &UNK_108d537b8;
      }
      _memcpy(lVar8,puVar1,unaff_x24);
      __ZN14codex_protocol5items15UserMessageItem3new17h295426dc9a779359E
                (&plStack_b0,*(undefined8 *)(param_2[0x16] + 8),
                 *(undefined8 *)(param_2[0x16] + 0x10));
      func_0x00010491957c(&plStack_80,&plStack_b0);
      *(undefined1 *)(param_2 + 0x1a) = 1;
      param_2[0x13] = param_2[0x22];
      param_2[0x12] = param_2[0x21];
      param_2[1] = param_2[0x1c];
      *param_2 = param_2[0x1b];
      param_2[2] = param_2[0x1d];
      param_2[4] = param_2[0x1f];
      param_2[3] = param_2[0x1e];
      param_2[0x10] = uVar11;
      param_2[0x11] = uVar4;
      param_2[5] = param_2[0x20];
      param_2[6] = lVar6;
      param_2[7] = lVar7;
      param_2[8] = lVar6;
      param_2[9] = unaff_x24;
      param_2[10] = lVar8;
      param_2[0xb] = unaff_x24;
      param_2[0xd] = uStack_78;
      param_2[0xc] = plStack_80;
      param_2[0xe] = uStack_70;
      param_2[0xf] = plVar10;
      lVar6 = lStack_90;
      lVar7 = lStack_88;
      if (plStack_b0 != (long *)0x0) {
        _free(uStack_a8);
        lVar6 = lStack_90;
        lVar7 = lStack_88;
      }
      for (; lVar7 != 0; lVar7 = lVar7 + -1) {
        FUN_100e06c08(lVar6);
        lVar6 = lVar6 + 0x38;
      }
      if (CONCAT44(uStack_94,uStack_98) != 0) {
        _free(lStack_90);
      }
      plStack_b0 = (long *)(*(long *)param_2[0x14] + 0x4f0);
      auVar12 = FUN_1037cc704(&plStack_b0);
      plVar10 = auVar12._8_8_;
      plStack_b0 = auVar12._0_8_;
      uStack_a8 = 0;
      if (plVar10 != (long *)0x0) {
        lVar6 = *plStack_b0;
        *plStack_b0 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1004f4018;
        if ((long *)*plVar10 == plStack_b0 + 2) {
          *plVar10 = 3;
        }
        else {
          lVar6 = *plStack_b0;
          *plStack_b0 = lVar6 + -1;
          LORelease();
          plStack_80 = plStack_b0;
          if (lVar6 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&plStack_80);
          }
        }
      }
      param_2[0x1b] = plStack_b0;
      func_0x000103c99450(&plStack_80,plStack_b0 + 2,param_2);
      *(undefined1 *)(param_2 + 0x1a) = 0;
      param_2[0x1d] = uStack_78;
      param_2[0x1c] = plStack_80;
      param_2[0x1e] = uStack_70;
      param_2[0x20] = param_2[0x15];
      param_2[0x1f] = param_2[0x14];
      param_2[0x2e] = param_2[0xd];
      param_2[0x2d] = param_2[0xc];
      param_2[0x30] = param_2[0xf];
      param_2[0x2f] = param_2[0xe];
      param_2[0x32] = param_2[0x11];
      param_2[0x31] = param_2[0x10];
      param_2[0x34] = param_2[0x13];
      param_2[0x33] = param_2[0x12];
      param_2[0x26] = param_2[5];
      param_2[0x25] = param_2[4];
      param_2[0x28] = param_2[7];
      param_2[0x27] = param_2[6];
      param_2[0x2a] = param_2[9];
      param_2[0x29] = param_2[8];
      param_2[0x2c] = param_2[0xb];
      param_2[0x2b] = param_2[10];
      param_2[0x22] = param_2[1];
      param_2[0x21] = *param_2;
      param_2[0x24] = param_2[3];
      param_2[0x23] = param_2[2];
      param_2[0x35] = param_2[0x1b] + 0x10;
      *(undefined1 *)(param_2 + 0xa4) = 0;
      *(undefined1 *)(param_2 + 0xa7) = 0;
    }
    func_0x0001004f6de8(&plStack_b0,param_2 + 0x1c,param_3);
    uVar11 = uStack_a8;
    plVar10 = plStack_b0;
    if (plStack_b0 == (long *)0x8000000000000000) {
      *param_1 = 0x8000000000000000;
      uVar9 = 4;
      goto LAB_1004f3fb0;
    }
    uStack_68._0_3_ = (undefined3)((uint)uStack_98 >> 8);
    uStack_68._3_1_ = (undefined1)uStack_94;
    uStack_64 = (undefined3)((uint)uStack_94 >> 8);
    func_0x000100db0b50(param_2 + 0x1c);
    lVar6 = *(long *)param_2[0x1b];
    *(long *)param_2[0x1b] = lVar6 + -1;
    LORelease();
    if (lVar6 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E();
    }
    *(undefined1 *)(param_2 + 0x1a) = 0;
  }
  *param_1 = plVar10;
  param_1[1] = uVar11;
  param_1[2] = uStack_a0;
  *(undefined1 *)(param_1 + 3) = (undefined1)uStack_98;
  *(undefined4 *)((long)param_1 + 0x19) = uStack_68;
  *(uint *)((long)param_1 + 0x1c) = CONCAT31(uStack_64,uStack_68._3_1_);
  uVar9 = 1;
LAB_1004f3fb0:
  *(undefined1 *)((long)param_2 + 0xd1) = uVar9;
  return;
}

