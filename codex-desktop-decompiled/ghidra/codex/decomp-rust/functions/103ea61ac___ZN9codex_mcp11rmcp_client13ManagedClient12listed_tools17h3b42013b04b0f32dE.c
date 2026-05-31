
void __ZN9codex_mcp11rmcp_client13ManagedClient12listed_tools17h3b42013b04b0f32dE
               (long *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 extraout_x1;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong unaff_x22;
  long unaff_x24;
  long lVar20;
  ulong unaff_x27;
  long lVar21;
  undefined1 auVar22 [16];
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  long lStack_298;
  long lStack_288;
  long lStack_280;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_68;
  int in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 in_stack_ffffffffffffffc8;
  
  func_0x000106032954(8);
  if (*(long *)(param_2 + 0x30) != -0x8000000000000000) {
    FUN_103ec9214(&lStack_80);
    if (-1 < lStack_80) {
      uStack_68 = func_0x000106032954(8);
      func_0x000106032878(&stack0xffffffffffffffb8,&uStack_68,&stack0xffffffffffffffa8);
      uVar1 = 0;
      if (in_stack_ffffffffffffffb8 == 0) {
        uVar1 = in_stack_ffffffffffffffc8;
      }
      uVar13 = 0;
      if (in_stack_ffffffffffffffb8 == 0) {
        uVar13 = in_stack_ffffffffffffffc0;
      }
      __ZN9codex_mcp7runtime13emit_duration17h6c89d37871e82e89E
                (&UNK_108dc70a5,0x20,uVar13,uVar1,&UNK_10b300520,1);
      __ZN9codex_mcp5tools12filter_tools17h1b594aa700001faaE(param_1,&lStack_80,param_2 + 0x98);
      return;
    }
    uStack_68 = func_0x000106032954(8);
    func_0x000106032878(&stack0xffffffffffffffb8,&uStack_68,&stack0xffffffffffffffa8);
    uVar1 = 0;
    if (in_stack_ffffffffffffffb8 == 0) {
      uVar1 = in_stack_ffffffffffffffc8;
    }
    uVar13 = 0;
    if (in_stack_ffffffffffffffb8 == 0) {
      uVar13 = in_stack_ffffffffffffffc0;
    }
    __ZN9codex_mcp7runtime13emit_duration17h6c89d37871e82e89E
              (&UNK_108dc70a5,0x20,uVar13,uVar1,&UNK_10b300540,1);
  }
  lVar15 = *(long *)(param_2 + 8);
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    lStack_288 = 0;
    lStack_280 = 8;
LAB_103ea6540:
    param_1[1] = lStack_280;
    *param_1 = lStack_288;
    param_1[2] = lVar5;
    return;
  }
  lVar16 = lVar5;
  lVar8 = _malloc(lVar5 * 0x1a8);
  if (lVar8 != 0) {
    lVar21 = 0;
    lVar16 = lVar15;
    lStack_288 = lVar5;
    lStack_280 = lVar8;
    do {
      if (lVar5 * 0x1a8 == lVar21) break;
      uVar13 = *(undefined8 *)(lVar16 + 8);
      lVar2 = *(long *)(lVar16 + 0x10);
      if (lVar2 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = _malloc(lVar2);
        if (lVar9 == 0) {
          func_0x0001087c9084(1,lVar2);
          goto LAB_103ea65f4;
        }
      }
      _memcpy(lVar9,uVar13,lVar2);
      uVar6 = *(undefined1 *)(lVar16 + 0x1a0);
      lVar18 = -0x8000000000000000;
      if (*(long *)(lVar16 + 0x60) != -0x8000000000000000) {
        uVar13 = *(undefined8 *)(lVar15 + lVar21 + 0x68);
        lVar18 = *(long *)(lVar15 + lVar21 + 0x70);
        if (lVar18 == 0) {
          lStack_2c8 = 1;
        }
        else {
          lStack_2c8 = _malloc(lVar18);
          if (lStack_2c8 == 0) {
            func_0x0001087c9084(1,lVar18);
            goto LAB_103ea65f4;
          }
        }
        _memcpy(lStack_2c8,uVar13,lVar18);
      }
      uVar13 = *(undefined8 *)(lVar16 + 0x20);
      lVar3 = *(long *)(lVar16 + 0x28);
      if (lVar3 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar3);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar3);
          goto LAB_103ea65f4;
        }
      }
      _memcpy(lVar10,uVar13,lVar3);
      lVar12 = *(long *)(lVar16 + 0x38);
      lVar4 = *(long *)(lVar16 + 0x40);
      if (lVar4 == 0) {
        lVar11 = 1;
      }
      else {
        lVar11 = _malloc(lVar4);
        if (lVar11 == 0) {
          func_0x0001087c9084(1,lVar4);
          goto LAB_103ea65f4;
        }
      }
      _memcpy(lVar11,lVar12,lVar4);
      lVar20 = -0x8000000000000000;
      if (*(long *)(lVar16 + 0x78) != -0x8000000000000000) {
        lVar12 = *(long *)(lVar15 + lVar21 + 0x80);
        lVar20 = *(long *)(lVar15 + lVar21 + 0x88);
        if (lVar20 == 0) {
          lStack_2d0 = 1;
        }
        else {
          lStack_2d0 = _malloc(lVar20);
          if (lStack_2d0 == 0) {
            func_0x0001087c9084(1,lVar20);
            goto LAB_103ea65f4;
          }
        }
        _memcpy(lStack_2d0,lVar12,lVar20);
      }
      FUN_103e637c0(&lStack_168,lVar16 + 0x90);
      lVar17 = -0x8000000000000000;
      lVar19 = -0x8000000000000000;
      if (*(long *)(lVar16 + 0x170) != -0x8000000000000000) {
        lVar12 = *(long *)(lVar15 + lVar21 + 0x178);
        lVar19 = *(long *)(lVar15 + lVar21 + 0x180);
        if (lVar19 == 0) {
          lStack_2d8 = 1;
        }
        else {
          lStack_2d8 = _malloc(lVar19);
          if (lStack_2d8 == 0) {
            func_0x0001087c9084(1,lVar19);
            goto LAB_103ea65f4;
          }
        }
        _memcpy(lStack_2d8,lVar12,lVar19);
      }
      if (*(long *)(lVar16 + 0x188) != -0x8000000000000000) {
        uVar13 = *(undefined8 *)(lVar15 + lVar21 + 400);
        lVar17 = *(long *)(lVar15 + lVar21 + 0x198);
        if (lVar17 == 0) {
          lVar12 = 1;
        }
        else {
          lVar12 = _malloc(lVar17);
          if (lVar12 == 0) {
            func_0x0001087c9084(1,lVar17);
LAB_103ea65f4:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x103ea65f8);
            (*pcVar7)();
          }
        }
        _memcpy(lVar12,uVar13,lVar17);
      }
      FUN_103e6b9b8(&lStack_88,*(undefined8 *)(lVar16 + 0x50),*(undefined8 *)(lVar16 + 0x58));
      plVar14 = (long *)(lVar8 + lVar21);
      plVar14[10] = lStack_80;
      plVar14[9] = lStack_88;
      plVar14[0x13] = lStack_160;
      plVar14[0x12] = lStack_168;
      plVar14[0x15] = lStack_150;
      plVar14[0x14] = lStack_158;
      plVar14[0x1b] = lStack_120;
      plVar14[0x1a] = lStack_128;
      plVar14[0x1d] = lStack_110;
      plVar14[0x1c] = lStack_118;
      plVar14[0x17] = lStack_140;
      plVar14[0x16] = lStack_148;
      plVar14[0x19] = lStack_130;
      plVar14[0x18] = lStack_138;
      plVar14[0x23] = lStack_e0;
      plVar14[0x22] = lStack_e8;
      plVar14[0x25] = lStack_d0;
      plVar14[0x24] = lStack_d8;
      plVar14[0x1f] = lStack_100;
      plVar14[0x1e] = lStack_108;
      plVar14[0x21] = lStack_f0;
      plVar14[0x20] = lStack_f8;
      plVar14[0x2b] = lStack_a0;
      plVar14[0x2a] = lStack_a8;
      plVar14[0x2d] = lStack_90;
      plVar14[0x2c] = lStack_98;
      lVar16 = lVar16 + 0x1a8;
      *plVar14 = lVar2;
      plVar14[1] = lVar9;
      plVar14[2] = lVar2;
      plVar14[3] = lVar3;
      plVar14[4] = lVar10;
      plVar14[5] = lVar3;
      plVar14[6] = lVar4;
      plVar14[7] = lVar11;
      plVar14[8] = lVar4;
      plVar14[0xb] = lStack_78;
      plVar14[0xc] = lVar18;
      plVar14[0xd] = lStack_2c8;
      plVar14[0xe] = lVar18;
      plVar14[0xf] = lVar20;
      plVar14[0x10] = lStack_2d0;
      plVar14[0x11] = lVar20;
      plVar14[0x27] = lStack_c0;
      plVar14[0x26] = lStack_c8;
      plVar14[0x29] = lStack_b0;
      plVar14[0x28] = lStack_b8;
      plVar14[0x2e] = lVar19;
      plVar14[0x2f] = lStack_2d8;
      plVar14[0x30] = lVar19;
      plVar14[0x31] = lVar17;
      plVar14[0x32] = lVar12;
      plVar14[0x33] = lVar17;
      lVar21 = lVar21 + 0x1a8;
      *(undefined1 *)(plVar14 + 0x34) = uVar6;
    } while (lVar5 * 0x1a8 != lVar21);
    goto LAB_103ea6540;
  }
  uVar13 = func_0x0001087c9084(8,lVar5 * 0x1a8);
  if ((unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(lStack_2d8);
  }
  FUN_103daa59c(&lStack_168);
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free(lStack_2d0);
  }
  if (unaff_x24 != 0) {
    _free();
  }
  if (lStack_2b0 != 0) {
    _free(uStack_2b8);
  }
  if ((uStack_2a0 & 0x7fffffffffffffff) != 0) {
    _free(lStack_2c8);
  }
  if (lStack_298 != 0) {
    _free(uStack_2a8);
  }
  FUN_103db8e94(&lStack_288);
  __Unwind_Resume(uVar13);
  auVar22 = func_0x000108a07bc4();
  uVar13 = auVar22._8_8_;
  plVar14 = auVar22._0_8_;
  if (lVar16 != 0) {
    lVar15 = _malloc(lVar16);
    if (lVar15 != 0) goto LAB_103ea6728;
    func_0x0001087c9084(1,lVar16);
    uVar13 = extraout_x1;
  }
  lVar15 = 1;
LAB_103ea6728:
  *plVar14 = lVar16;
  plVar14[1] = lVar15;
  _memcpy(lVar15,uVar13,lVar16);
  plVar14[2] = lVar16;
  return;
}

