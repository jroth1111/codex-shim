
void FUN_100b95d24(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  bool bVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  long *plVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined1 uVar22;
  undefined1 auVar23 [12];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  long lStack_178;
  undefined8 uStack_170;
  uint uStack_110;
  undefined4 uStack_10c;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  bVar1 = *(byte *)(param_2 + 2);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      param_2[1] = *param_2;
      param_2[3] = *param_2;
      *(undefined1 *)(param_2 + 5) = 0;
      goto LAB_100b95d74;
    }
    if (bVar1 == 1) {
      func_0x000108a07af4(&UNK_10b2310c0);
    }
    func_0x000108a07b10();
    *(undefined1 *)(param_2 + 2) = 2;
    param_1 = (undefined8 *)__Unwind_Resume();
    FUN_100cb7404(param_2 + 3);
    *(undefined1 *)(param_2 + 2) = 2;
    __Unwind_Resume(param_1);
  }
  else if (bVar1 == 3) {
LAB_100b95d74:
    FUN_100b96110(&uStack_110,param_2 + 3,param_3);
    uVar11 = uStack_a8;
    uVar10 = uStack_b0;
    uVar9 = uStack_b8;
    uVar8 = uStack_c0;
    uVar7 = uStack_c8;
    uVar6 = uStack_d0;
    uVar5 = uStack_d8;
    uVar4 = uStack_e0;
    uVar3 = uStack_e8;
    uVar2 = uStack_f0;
    uVar21 = uStack_f8;
    uVar18 = uStack_100;
    lVar14 = lStack_108;
    if ((uStack_110 & 1) == 0) {
      FUN_100cb7404(param_2 + 3);
      if (lVar14 != 0) {
        param_2[3] = lVar14;
        param_2[4] = uVar18;
        param_2[10] = uVar6;
        param_2[9] = uVar5;
        param_2[0xc] = uVar8;
        param_2[0xb] = uVar7;
        param_2[0xe] = uVar10;
        param_2[0xd] = uVar9;
        param_2[0xf] = uVar11;
        param_2[6] = uVar2;
        param_2[5] = uVar21;
        param_2[8] = uVar4;
        param_2[7] = uVar3;
        auVar23 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
        uVar20 = auVar23._8_4_;
        lVar16 = auVar23._0_8_;
        lVar14 = lVar16 + 0x4b;
        if (!SCARRY8(lVar16,0x4b)) {
          if (999999999 < uVar20) {
            bVar13 = SCARRY8(lVar14,1);
            lVar14 = lVar16 + 0x4c;
            if (bVar13) goto LAB_100b95e40;
            uVar20 = uVar20 + 0xc4653600;
          }
          param_2[0x10] = lVar14;
          *(uint *)(param_2 + 0x11) = uVar20;
          goto LAB_100b95ec4;
        }
LAB_100b95e40:
        func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef18);
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100b95e5c);
        (*pcVar12)();
      }
LAB_100b96078:
      uVar21 = 0;
LAB_100b9607c:
      param_1[8] = uStack_78;
      param_1[7] = uStack_80;
      param_1[10] = uStack_68;
      param_1[9] = uStack_70;
      param_1[0xc] = uStack_58;
      param_1[0xb] = uStack_60;
      param_1[4] = uStack_98;
      param_1[3] = uStack_a0;
      param_1[1] = uVar21;
      param_1[2] = uVar18;
      param_1[0xd] = uStack_50;
      param_1[6] = uStack_88;
      param_1[5] = uStack_90;
      uVar22 = 1;
      *param_1 = 0;
    }
    else {
      *param_1 = 1;
      uVar22 = 3;
    }
    goto LAB_100b960b0;
  }
  while (iVar15 = func_0x000106114748(param_2 + 0x12,param_3), iVar15 == 0) {
    FUN_100de8a5c(param_2 + 0x12);
LAB_100b95ec4:
    plVar19 = param_2 + 3;
    iVar15 = _flock(*(undefined4 *)(*plVar19 + 0x10),6);
    if (iVar15 == 0) {
      uVar21 = param_2[3];
      uVar18 = param_2[4];
      uStack_78 = param_2[10];
      uStack_80 = param_2[9];
      uStack_68 = param_2[0xc];
      uStack_70 = param_2[0xb];
      uStack_58 = param_2[0xe];
      uStack_60 = param_2[0xd];
      uStack_50 = param_2[0xf];
      uStack_98 = param_2[6];
      uStack_a0 = param_2[5];
      uStack_88 = param_2[8];
      uStack_90 = param_2[7];
      goto LAB_100b9607c;
    }
    piVar17 = (int *)___error();
    if (*piVar17 != 0x23) {
      uVar18 = FUN_1088c68c0((long)*piVar17 << 0x20 | 2,&UNK_108cf47da,0x1f);
LAB_100b96004:
      lVar14 = *(long *)*plVar19;
      *(long *)*plVar19 = lVar14 + -1;
      LORelease();
      if (lVar14 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h46a5c05d4d9b7d4fE(plVar19);
      }
      uVar21 = 0;
      lVar14 = param_2[9];
      if (lVar14 == -0x8000000000000000) goto LAB_100b9607c;
      plVar19 = (long *)param_2[10];
      if (lVar14 == -0x7fffffffffffffff) {
        if (*plVar19 == 0xcc) {
          *plVar19 = 0x84;
        }
        else {
          (**(code **)(plVar19[2] + 0x20))();
        }
      }
      else {
        if (lVar14 == 0) goto LAB_100b9607c;
        _free();
      }
      goto LAB_100b96078;
    }
    auVar23 = __ZN5tokio4time7instant7Instant3now17h0933a405225fc2efE();
    bVar13 = *(uint *)(param_2 + 0x11) <= auVar23._8_4_;
    if (auVar23._0_8_ != param_2[0x10]) {
      bVar13 = (long)param_2[0x10] <= auVar23._0_8_;
    }
    if (bVar13) {
      uStack_1a0 = *(undefined8 *)(param_2[1] + 0x50);
      uStack_198 = *(undefined8 *)(param_2[1] + 0x58);
      puStack_190 = &uStack_1a0;
      puStack_188 = &
                    __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_110,s__timed_out_waiting_for_daemon_op_108ad15ee,&puStack_190);
      lStack_178 = lStack_108;
      uStack_170 = uStack_100;
      uVar18 = FUN_108856624(auStack_180);
      goto LAB_100b96004;
    }
    __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E(&uStack_110,0,50000000,&UNK_10b2310d8);
    lStack_178 = lStack_108;
    uStack_170 = uStack_100;
    param_2[0x1b] = uStack_c8;
    param_2[0x1a] = uStack_d0;
    param_2[0x1d] = uStack_b8;
    param_2[0x1c] = uStack_c0;
    param_2[0x1f] = uStack_a8;
    param_2[0x1e] = uStack_b0;
    param_2[0x13] = lStack_108;
    param_2[0x12] = CONCAT44(uStack_10c,uStack_110);
    param_2[0x15] = uStack_f8;
    param_2[0x14] = uStack_100;
    param_2[0x17] = uStack_e8;
    param_2[0x16] = uStack_f0;
    param_2[0x19] = uStack_d8;
    param_2[0x18] = uStack_e0;
  }
  *param_1 = 1;
  uVar22 = 4;
LAB_100b960b0:
  *(undefined1 *)(param_2 + 2) = uVar22;
  return;
}

