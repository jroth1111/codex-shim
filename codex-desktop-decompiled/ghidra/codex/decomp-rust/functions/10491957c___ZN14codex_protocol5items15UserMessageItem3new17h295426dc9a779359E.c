
void __ZN14codex_protocol5items15UserMessageItem3new17h295426dc9a779359E
               (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *extraout_x8;
  ulong *extraout_x8_00;
  ulong *extraout_x8_01;
  ulong *puVar10;
  undefined4 *extraout_x8_02;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  long unaff_x24;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined1 auVar22 [16];
  long lStack_258;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long in_stack_ffffffffffffff18;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined4 uStack_48;
  
  uStack_80 = 0;
  uStack_78 = 0;
  iVar3 = _getentropy(&uStack_80,0x10);
  if (iVar3 == 0) {
    uVar19 = (uStack_80 & 0x3f00ff00ff00ff00 | 0x8000000000000000) >> 8 |
             (uStack_80 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uStack_88 = uVar19 >> 0x20 | uVar19 << 0x20;
    uVar19 = (uStack_78 & 0xff00ff00ff000f00 | 0x4000) >> 8 | (uStack_78 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uStack_90 = uVar19 >> 0x20 | uVar19 << 0x20;
    uStack_80 = 0;
    uStack_78 = 1;
    lStack_70 = 0;
    FUN_10624142c(&puStack_68,&uStack_90,0);
    FUN_1089a4f48(&uStack_80,0,0x24,1,1);
    lVar11 = lStack_70;
    uVar17 = uStack_78;
    uVar19 = uStack_80;
    puVar10 = (ulong *)(uStack_78 + lStack_70);
    puVar10[1] = (ulong)puStack_60;
    *puVar10 = (ulong)puStack_68;
    puVar10[3] = uStack_50;
    puVar10[2] = uStack_58;
    *(undefined4 *)(puVar10 + 4) = uStack_48;
    func_0x0001049d6fa4(&puStack_68,param_2,param_3);
    *param_1 = uVar19;
    param_1[1] = uVar17;
    param_1[2] = lVar11 + 0x24;
    param_1[4] = (ulong)puStack_60;
    param_1[3] = (ulong)puStack_68;
    param_1[5] = uStack_58;
    return;
  }
  uVar4 = __ZN9getrandom8backends10getentropy9util_libc13last_os_error17h2459205b658a582bE();
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
  puStack_60 = &
               __ZN62__LT_getrandom__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hbded66845035e9f5E
  ;
  puStack_68 = (undefined1 *)&uStack_90;
  uVar5 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                    (s__could_not_retrieve_random_bytes_108b3c856,&puStack_68,&UNK_10b4dc178);
  if (unaff_x24 != 0) {
    _free();
  }
  lVar6 = __Unwind_Resume(uVar5);
  lVar11 = *(long *)(lVar6 + 0x28);
  if (lVar11 == 0) {
    lStack_f8 = 0;
    lStack_f0 = 8;
LAB_104919638:
    lVar6 = lStack_f0;
    lStack_108 = lStack_f0;
    lStack_110 = lStack_f8;
    lStack_100 = lVar11;
    FUN_1049b804c(&lStack_f8,lStack_f0,lVar11,1,0);
    extraout_x8[1] = lStack_f0;
    *extraout_x8 = lStack_f8;
    extraout_x8[2] = in_stack_ffffffffffffff18;
    if (lVar11 != 0) {
      puVar13 = (undefined8 *)(lVar6 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (lStack_110 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar6);
      return;
    }
    return;
  }
  lVar6 = *(long *)(lVar6 + 0x20);
  lStack_f0 = _malloc(lVar11 * 0x18);
  if (lStack_f0 != 0) {
    lVar16 = 0;
    plVar12 = (long *)(lVar6 + 0x18);
    plVar20 = (long *)(lStack_f0 + 8);
    lStack_f8 = lVar11;
    do {
      if ((char)plVar12[-3] == '\0') {
        lVar8 = plVar12[-1];
        lVar6 = *plVar12;
        if (lVar6 == 0) {
          lVar7 = 1;
        }
        else {
          lVar7 = _malloc(lVar6);
          if (lVar7 == 0) {
            func_0x0001087c9084(1,lVar6);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1049196f0);
            (*pcVar2)();
          }
        }
        _memcpy(lVar7,lVar8,lVar6);
      }
      else {
        lVar6 = 0;
        lVar7 = 1;
      }
      plVar20[-1] = lVar6;
      *plVar20 = lVar7;
      plVar20[1] = lVar6;
      lVar16 = lVar16 + 1;
      plVar12 = plVar12 + 7;
      plVar20 = plVar20 + 3;
    } while (lVar11 != lVar16);
    goto LAB_104919638;
  }
  uVar5 = func_0x0001087c9084(8,lVar11 * 0x18);
  FUN_1049a4dc8(&lStack_110);
  uVar5 = __Unwind_Resume(uVar5);
  FUN_1049a4dc8(&lStack_f8);
  lVar11 = __Unwind_Resume(uVar5);
  uVar19 = *(ulong *)(lVar11 + 0x28);
  auVar22._8_8_ = uVar19 * 0x1d8;
  auVar22._0_8_ = lVar11;
  puVar10 = extraout_x8_00;
  if (0x456c797dd49c34 < uVar19) {
    auVar22 = func_0x0001087c9084(0);
    puVar10 = extraout_x8_01;
  }
  lVar16 = auVar22._8_8_;
  lVar6 = auVar22._0_8_;
  lVar11 = *(long *)(lVar6 + 0x20);
  if (lVar16 == 0) {
    uStack_1e8 = 0;
    uStack_1e0 = 8;
joined_r0x0001049197b0:
    if (uVar19 != 0) {
      uVar1 = *(undefined1 *)(lVar6 + 0x60);
      if (*(long *)(lVar6 + 0x30) == -0x8000000000000000) {
        uVar17 = 0;
        puVar15 = (undefined1 *)(uStack_1e0 + 0x50);
        plVar12 = (long *)(lVar11 + 0x10);
        do {
          lVar11 = plVar12[-1];
          lVar6 = *plVar12;
          if (lVar6 == 0) {
            lVar16 = 1;
          }
          else {
            lVar16 = _malloc(lVar6);
            if (lVar16 == 0) {
              func_0x0001087c9084(1,lVar6);
LAB_10491991c:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x104919920);
              (*pcVar2)();
            }
          }
          plVar12 = plVar12 + 3;
          _memcpy(lVar16,lVar11,lVar6);
          *(undefined4 *)(puVar15 + -0x50) = 0xf;
          *(long *)(puVar15 + -0x48) = lVar6;
          *(long *)(puVar15 + -0x40) = lVar16;
          uVar17 = uVar17 + 1;
          *(long *)(puVar15 + -0x38) = lVar6;
          *(undefined8 *)(puVar15 + -0x30) = 0x8000000000000000;
          *puVar15 = uVar1;
          puVar15 = puVar15 + 0x1d8;
        } while (uVar19 != uVar17);
      }
      else {
        uVar17 = 0;
        puVar15 = (undefined1 *)(uStack_1e0 + 0x50);
        plVar12 = (long *)(lVar11 + 0x10);
        do {
          lVar11 = plVar12[-1];
          lVar16 = *plVar12;
          if (lVar16 == 0) {
            lVar7 = 1;
          }
          else {
            lVar7 = _malloc(lVar16);
            if (lVar7 == 0) {
              func_0x0001087c9084(1,lVar16);
              goto LAB_10491991c;
            }
          }
          _memcpy(lVar7,lVar11,lVar16);
          FUN_1049d4be4(&uStack_1a0,(long *)(lVar6 + 0x30));
          plVar12 = plVar12 + 3;
          *(undefined4 *)(puVar15 + -0x50) = 0xf;
          *(long *)(puVar15 + -0x48) = lVar16;
          *(long *)(puVar15 + -0x40) = lVar7;
          *(long *)(puVar15 + -0x38) = lVar16;
          *(undefined8 *)(puVar15 + -0x30) = uStack_1a0;
          *(undefined8 *)(puVar15 + -8) = uStack_178;
          *(undefined8 *)(puVar15 + -0x10) = uStack_180;
          *(undefined8 *)(puVar15 + -0x18) = uStack_188;
          *(undefined8 *)(puVar15 + -0x20) = uStack_190;
          *(undefined8 *)(puVar15 + -0x28) = uStack_198;
          *puVar15 = uVar1;
          uVar17 = uVar17 + 1;
          puVar15 = puVar15 + 0x1d8;
        } while (uVar19 != uVar17);
      }
    }
    puVar10[1] = uStack_1e0;
    *puVar10 = uStack_1e8;
    puVar10[2] = uVar19;
    return;
  }
  uStack_1e0 = _malloc(lVar16);
  uStack_1e8 = uVar19;
  if (uStack_1e0 != 0) goto joined_r0x0001049197b0;
  uVar5 = func_0x0001087c9084(8,lVar16);
  func_0x0001049a73e8(&uStack_1e8);
  __Unwind_Resume(uVar5);
  lVar16 = func_0x000108a07bc4();
  uVar5 = *(undefined8 *)(lVar16 + 8);
  lVar6 = *(long *)(lVar16 + 0x10);
  if (lVar6 != 0) {
    lVar7 = _malloc(lVar6);
    if (lVar7 != 0) {
      _memcpy(lVar7,uVar5,lVar6);
      uVar5 = *(undefined8 *)(lVar16 + 0x20);
      lVar11 = *(long *)(lVar16 + 0x28);
      goto joined_r0x0001049199b0;
    }
    func_0x0001087c9084(1,lVar6);
LAB_104919b2c:
    func_0x0001087c9084(1,lVar11);
    goto LAB_104919b50;
  }
  lVar7 = 1;
  _memcpy(1,uVar5,0);
  uVar5 = *(undefined8 *)(lVar16 + 0x20);
  lVar11 = *(long *)(lVar16 + 0x28);
joined_r0x0001049199b0:
  if (lVar11 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = _malloc(lVar11);
    if (lVar8 == 0) goto LAB_104919b2c;
  }
  _memcpy(lVar8,uVar5,lVar11);
  lVar18 = -0x8000000000000000;
  if (*(long *)(lVar16 + 0x48) == -0x8000000000000000) {
    uVar5 = *(undefined8 *)(lVar16 + 0x38);
    lVar21 = *(long *)(lVar16 + 0x40);
    if (lVar21 != 0) goto LAB_104919a10;
LAB_104919a68:
    lVar9 = 1;
  }
  else {
    uVar5 = *(undefined8 *)(lVar16 + 0x50);
    lVar18 = *(long *)(lVar16 + 0x58);
    if (lVar18 == 0) {
      lStack_258 = 1;
    }
    else {
      lStack_258 = _malloc(lVar18);
      if (lStack_258 == 0) {
        func_0x0001087c9084(1,lVar18);
        goto LAB_104919b50;
      }
    }
    _memcpy(lStack_258,uVar5,lVar18);
    uVar5 = *(undefined8 *)(lVar16 + 0x38);
    lVar21 = *(long *)(lVar16 + 0x40);
    if (lVar21 == 0) goto LAB_104919a68;
LAB_104919a10:
    lVar9 = _malloc(lVar21);
    if (lVar9 == 0) {
      func_0x0001087c9084(1,lVar21);
      goto LAB_104919b50;
    }
  }
  _memcpy(lVar9,uVar5,lVar21);
  lVar14 = -0x8000000000000000;
  if (*(long *)(lVar16 + 0x60) != -0x8000000000000000) {
    uVar5 = *(undefined8 *)(lVar16 + 0x68);
    lVar14 = *(long *)(lVar16 + 0x70);
    if (lVar14 == 0) {
      lVar16 = 1;
    }
    else {
      lVar16 = _malloc(lVar14);
      if (lVar16 == 0) {
        func_0x0001087c9084(1,lVar14);
LAB_104919b50:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x104919b54);
        (*pcVar2)();
      }
    }
    _memcpy(lVar16,uVar5,lVar14);
  }
  *(long *)(extraout_x8_02 + 2) = lVar6;
  *(long *)(extraout_x8_02 + 4) = lVar7;
  *(long *)(extraout_x8_02 + 6) = lVar6;
  *(long *)(extraout_x8_02 + 8) = lVar11;
  *(long *)(extraout_x8_02 + 10) = lVar8;
  *(long *)(extraout_x8_02 + 0xc) = lVar11;
  *(long *)(extraout_x8_02 + 0xe) = lVar21;
  *(long *)(extraout_x8_02 + 0x10) = lVar9;
  *(long *)(extraout_x8_02 + 0x12) = lVar21;
  *(long *)(extraout_x8_02 + 0x14) = lVar18;
  *(long *)(extraout_x8_02 + 0x16) = lStack_258;
  *(long *)(extraout_x8_02 + 0x18) = lVar18;
  *(long *)(extraout_x8_02 + 0x1a) = lVar14;
  *(long *)(extraout_x8_02 + 0x1c) = lVar16;
  *(long *)(extraout_x8_02 + 0x1e) = lVar14;
  *extraout_x8_02 = 0x1d;
  return;
}

