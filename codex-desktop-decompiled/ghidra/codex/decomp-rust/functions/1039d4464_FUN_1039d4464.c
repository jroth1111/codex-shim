
void FUN_1039d4464(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x23;
  undefined1 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lStack_1c0;
  long lStack_1a0;
  long lStack_170;
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
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  
  uVar13 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    lVar6 = _malloc(lVar2);
    if (lVar6 != 0) goto LAB_1039d44ac;
    func_0x0001087c9084(1,lVar2);
LAB_1039d4be0:
    func_0x0001087c9084(1,unaff_x23);
    goto LAB_1039d4c3c;
  }
  lVar6 = 1;
LAB_1039d44ac:
  _memcpy(lVar6,uVar13,lVar2);
  lVar11 = *(long *)(param_2 + 0x20);
  unaff_x23 = *(long *)(param_2 + 0x28);
  if (unaff_x23 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = _malloc(unaff_x23);
    if (lVar7 == 0) goto LAB_1039d4be0;
  }
  _memcpy(lVar7,lVar11,unaff_x23);
  lVar14 = -0x8000000000000000;
  lVar16 = lVar2;
  if (*(long *)(param_2 + 0x48) == -0x8000000000000000) {
    lStack_1a0 = -0x8000000000000000;
    lStack_130 = *(long *)(param_2 + 0xb0);
    if (lStack_130 == -0x8000000000000000) goto LAB_1039d47d0;
LAB_1039d4520:
    if (lStack_130 != -0x7fffffffffffffff) {
      lStack_c8 = *(long *)(param_2 + 0xb8);
      lStack_130 = *(long *)(param_2 + 0xc0);
      if (lStack_130 == 0) {
        lStack_128 = 1;
      }
      else {
        lStack_128 = _malloc(lStack_130);
        if (lStack_128 == 0) {
          func_0x0001087c9084(1,lStack_130);
          goto LAB_1039d4c3c;
        }
      }
      _memcpy(lStack_128,lStack_c8,lStack_130);
      lVar12 = *(long *)(param_2 + 200);
      goto joined_r0x0001039d48c4;
    }
    lStack_130 = -0x7fffffffffffffff;
    lVar11 = lVar7;
    plVar19 = param_1;
    if (*(long *)(param_2 + 0x60) == -0x8000000000000000) goto LAB_1039d4a60;
LAB_1039d4548:
    lStack_90 = *(long *)(param_2 + 0x70);
    if (lStack_90 == 0) {
      lStack_80 = 0;
      lStack_78 = 8;
    }
    else {
      lVar14 = *(long *)(param_2 + 0x68);
      lStack_78 = _malloc();
      if (lStack_78 == 0) {
        func_0x0001087c9084(8,lStack_90 * 0x90);
        goto LAB_1039d4c3c;
      }
      lVar20 = 0;
      lVar21 = 0;
      lVar12 = lVar14;
      do {
        lStack_80 = lStack_90;
        if (lStack_90 * 0x90 == lVar20) break;
        uVar13 = *(undefined8 *)(lVar12 + 8);
        lVar3 = *(long *)(lVar12 + 0x10);
        if (lVar3 == 0) {
          lVar8 = 1;
        }
        else {
          lVar8 = _malloc(lVar3);
          if (lVar8 == 0) {
            func_0x0001087c9084(1,lVar3);
            goto LAB_1039d4c3c;
          }
        }
        _memcpy(lVar8,uVar13,lVar3);
        uVar13 = *(undefined8 *)(lVar12 + 0x20);
        lVar11 = *(long *)(lVar12 + 0x28);
        if (lVar11 == 0) {
          lVar9 = 1;
        }
        else {
          lVar9 = _malloc(lVar11);
          if (lVar9 == 0) {
            func_0x0001087c9084(1,lVar11);
            goto LAB_1039d4c3c;
          }
        }
        _memcpy(lVar9,uVar13,lVar11);
        plVar19 = (long *)0x8000000000000000;
        lVar17 = -0x8000000000000000;
        if (*(long *)(lVar12 + 0x30) != -0x8000000000000000) {
          uVar13 = *(undefined8 *)(lVar14 + lVar20 + 0x38);
          lVar17 = *(long *)(lVar14 + lVar20 + 0x40);
          if (lVar17 == 0) {
            lStack_158 = 1;
          }
          else {
            lStack_158 = _malloc(lVar17);
            if (lStack_158 == 0) {
              func_0x0001087c9084(1,lVar17);
              goto LAB_1039d4c3c;
            }
          }
          _memcpy(lStack_158,uVar13,lVar17);
        }
        if (*(long *)(lVar12 + 0x48) != -0x8000000000000000) {
          uVar13 = *(undefined8 *)(lVar14 + lVar20 + 0x50);
          plVar19 = *(long **)(lVar14 + lVar20 + 0x58);
          if (plVar19 == (long *)0x0) {
            lStack_160 = 1;
          }
          else {
            lStack_160 = _malloc(plVar19);
            if (lStack_160 == 0) {
              func_0x0001087c9084(1,plVar19);
              goto LAB_1039d4c3c;
            }
          }
          _memcpy(lStack_160,uVar13,plVar19);
        }
        lVar15 = -0x8000000000000000;
        lVar16 = -0x8000000000000000;
        lVar10 = lVar8;
        if (*(long *)(lVar12 + 0x60) != -0x8000000000000000) {
          uVar13 = *(undefined8 *)(lVar14 + lVar20 + 0x68);
          lVar16 = *(long *)(lVar14 + lVar20 + 0x70);
          if (lVar16 == 0) {
            lVar10 = 1;
          }
          else {
            lVar10 = _malloc(lVar16);
            if (lVar10 == 0) {
              func_0x0001087c9084(1,lVar16);
              goto LAB_1039d4c3c;
            }
          }
          _memcpy(lVar10,uVar13,lVar16);
        }
        if (*(long *)(lVar12 + 0x78) != -0x8000000000000000) {
          uVar13 = *(undefined8 *)(lVar14 + lVar20 + 0x80);
          lVar15 = *(long *)(lVar14 + lVar20 + 0x88);
          if (lVar15 == 0) {
            lStack_170 = 1;
          }
          else {
            lStack_170 = _malloc(lVar15);
            if (lStack_170 == 0) {
              func_0x0001087c9084(1,lVar15);
              goto LAB_1039d4c3c;
            }
          }
          _memcpy(lStack_170,uVar13,lVar15);
          lStack_168 = lVar15;
        }
        lVar12 = lVar12 + 0x90;
        lVar21 = lVar21 + 1;
        plVar1 = (long *)(lStack_78 + lVar20);
        *plVar1 = lVar3;
        plVar1[1] = lVar8;
        plVar1[2] = lVar3;
        plVar1[3] = lVar11;
        plVar1[4] = lVar9;
        plVar1[5] = lVar11;
        plVar1[6] = lVar17;
        plVar1[7] = lStack_158;
        plVar1[8] = lVar17;
        plVar1[9] = (long)plVar19;
        plVar1[10] = lStack_160;
        plVar1[0xb] = (long)plVar19;
        plVar1[0xc] = lVar16;
        plVar1[0xd] = lVar10;
        plVar1[0xe] = lVar16;
        plVar1[0xf] = lVar15;
        lVar20 = lVar20 + 0x90;
        plVar1[0x10] = lStack_170;
        plVar1[0x11] = lStack_168;
      } while (lStack_90 != lVar21);
    }
    uVar18 = SUB81(plVar19,0);
    lStack_98 = lStack_78;
    lStack_a0 = lStack_80;
    if (*(long *)(param_2 + 0x78) == -0x8000000000000000) goto LAB_1039d4a74;
LAB_1039d4854:
    uVar18 = *(undefined1 *)(param_2 + 0x90);
    uVar13 = *(undefined8 *)(param_2 + 0x80);
    lVar14 = *(long *)(param_2 + 0x88);
    if (lVar14 == 0) {
      lVar16 = 1;
    }
    else {
      lVar16 = _malloc(lVar14);
      if (lVar16 == 0) {
        func_0x0001087c9084(1,lVar14);
        goto LAB_1039d4c3c;
      }
    }
    _memcpy(lVar16,uVar13,lVar14);
    uVar13 = *(undefined8 *)(param_2 + 0x38);
    lVar12 = *(long *)(param_2 + 0x40);
    if (lVar12 != 0) goto LAB_1039d4a7c;
LAB_1039d489c:
    lVar21 = 1;
  }
  else {
    lVar11 = *(long *)(param_2 + 0x50);
    lStack_1a0 = *(long *)(param_2 + 0x58);
    if (lStack_1a0 == 0) {
      lStack_1c0 = 1;
    }
    else {
      lStack_1c0 = _malloc(lStack_1a0);
      if (lStack_1c0 == 0) {
        func_0x0001087c9084(1,lStack_1a0);
        goto LAB_1039d4c3c;
      }
    }
    _memcpy(lStack_1c0,lVar11,lStack_1a0);
    lStack_130 = *(long *)(param_2 + 0xb0);
    if (lStack_130 != -0x8000000000000000) goto LAB_1039d4520;
LAB_1039d47d0:
    lVar12 = *(long *)(param_2 + 200);
    lStack_c8 = lVar11;
    lStack_128 = lStack_138;
joined_r0x0001039d48c4:
    if (lVar12 == -0x8000000000000000) {
      lVar11 = -0x8000000000000000;
      lVar12 = *(long *)(param_2 + 0xe0);
      lStack_110 = lStack_140;
    }
    else {
      lStack_c8 = *(long *)(param_2 + 0xd0);
      lVar11 = *(long *)(param_2 + 0xd8);
      if (lVar11 == 0) {
        lStack_110 = 1;
      }
      else {
        lStack_110 = _malloc(lVar11);
        if (lStack_110 == 0) {
          func_0x0001087c9084(1,lVar11);
          goto LAB_1039d4c3c;
        }
      }
      _memcpy(lStack_110,lStack_c8,lVar11);
      lVar12 = *(long *)(param_2 + 0xe0);
    }
    if (lVar12 == -0x8000000000000000) {
      lStack_100 = -0x8000000000000000;
      if (*(long *)(param_2 + 0xf8) != -0x8000000000000000) goto LAB_1039d4954;
LAB_1039d4800:
      lStack_e8 = -0x8000000000000000;
      if (*(long *)(param_2 + 0x110) != -0x8000000000000000) goto LAB_1039d4998;
LAB_1039d4810:
      plVar19 = (long *)0x8000000000000000;
      if (*(long *)(param_2 + 0x128) != -0x8000000000000000) goto LAB_1039d49dc;
LAB_1039d4824:
      lStack_b8 = -0x8000000000000000;
    }
    else {
      lStack_c8 = *(long *)(param_2 + 0xe8);
      lStack_100 = *(long *)(param_2 + 0xf0);
      if (lStack_100 == 0) {
        lStack_148 = 1;
      }
      else {
        lStack_148 = _malloc(lStack_100);
        if (lStack_148 == 0) {
          func_0x0001087c9084(1,lStack_100);
          goto LAB_1039d4c3c;
        }
      }
      _memcpy(lStack_148,lStack_c8,lStack_100);
      if (*(long *)(param_2 + 0xf8) == -0x8000000000000000) goto LAB_1039d4800;
LAB_1039d4954:
      lStack_c8 = *(long *)(param_2 + 0x100);
      lStack_e8 = *(long *)(param_2 + 0x108);
      if (lStack_e8 == 0) {
        lStack_150 = 1;
      }
      else {
        lStack_150 = _malloc(lStack_e8);
        if (lStack_150 == 0) {
          func_0x0001087c9084(1,lStack_e8);
          goto LAB_1039d4c3c;
        }
      }
      _memcpy(lStack_150,lStack_c8,lStack_e8);
      if (*(long *)(param_2 + 0x110) == -0x8000000000000000) goto LAB_1039d4810;
LAB_1039d4998:
      lVar14 = *(long *)(param_2 + 0x118);
      plVar19 = *(long **)(param_2 + 0x120);
      if (plVar19 == (long *)0x0) {
        lStack_c8 = 1;
      }
      else {
        lStack_c8 = _malloc(plVar19);
        if (lStack_c8 == 0) {
          func_0x0001087c9084(1,plVar19);
          goto LAB_1039d4c3c;
        }
      }
      _memcpy(lStack_c8,lVar14,plVar19);
      if (*(long *)(param_2 + 0x128) == -0x8000000000000000) goto LAB_1039d4824;
LAB_1039d49dc:
      lVar16 = *(long *)(param_2 + 0x130);
      lStack_b8 = *(long *)(param_2 + 0x138);
      if (lStack_b8 == 0) {
        lVar14 = 1;
      }
      else {
        lVar14 = _malloc(lStack_b8);
        if (lVar14 == 0) {
          func_0x0001087c9084(1,lStack_b8);
          goto LAB_1039d4c3c;
        }
      }
      _memcpy(lVar14,lVar16,lStack_b8);
    }
    lStack_e0 = lStack_150;
    lStack_f8 = lStack_148;
    lStack_120 = lStack_130;
    lStack_118 = lVar11;
    lStack_108 = lVar11;
    lStack_f0 = lStack_100;
    lStack_d8 = lStack_e8;
    plStack_d0 = plVar19;
    plStack_c0 = plVar19;
    lStack_b0 = lVar14;
    lStack_a8 = lStack_b8;
    if (*(long *)(param_2 + 0x60) != -0x8000000000000000) goto LAB_1039d4548;
LAB_1039d4a60:
    uVar18 = SUB81(plVar19,0);
    lStack_a0 = -0x8000000000000000;
    if (*(long *)(param_2 + 0x78) != -0x8000000000000000) goto LAB_1039d4854;
LAB_1039d4a74:
    lVar14 = -0x8000000000000000;
    uVar13 = *(undefined8 *)(param_2 + 0x38);
    lVar12 = *(long *)(param_2 + 0x40);
    if (lVar12 == 0) goto LAB_1039d489c;
LAB_1039d4a7c:
    lVar21 = _malloc(lVar12);
    if (lVar21 == 0) {
      func_0x0001087c9084(1,lVar12);
      goto LAB_1039d4c3c;
    }
  }
  _memcpy(lVar21,uVar13,lVar12);
  uVar4 = *(undefined1 *)(param_2 + 0x140);
  lVar20 = -0x8000000000000000;
  if (*(long *)(param_2 + 0x98) != -0x8000000000000000) {
    uVar13 = *(undefined8 *)(param_2 + 0xa0);
    lVar20 = *(long *)(param_2 + 0xa8);
    if (lVar20 == 0) {
      lVar11 = 1;
    }
    else {
      lVar11 = _malloc(lVar20);
      if (lVar11 == 0) {
        func_0x0001087c9084(1,lVar20);
LAB_1039d4c3c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1039d4c40);
        (*pcVar5)();
      }
    }
    _memcpy(lVar11,uVar13,lVar20);
  }
  *param_1 = lVar2;
  param_1[1] = lVar6;
  param_1[2] = lVar2;
  param_1[3] = unaff_x23;
  param_1[4] = lVar7;
  param_1[5] = unaff_x23;
  param_1[10] = lStack_1c0;
  param_1[0xb] = lStack_1a0;
  param_1[0x23] = lStack_c8;
  param_1[0x22] = (long)plStack_d0;
  param_1[0x25] = lStack_b8;
  param_1[0x24] = (long)plStack_c0;
  param_1[0x27] = lStack_a8;
  param_1[0x26] = lStack_b0;
  param_1[0x1b] = lStack_108;
  param_1[0x1a] = lStack_110;
  param_1[0x1d] = lStack_f8;
  param_1[0x1c] = lStack_100;
  param_1[0x1f] = lStack_e8;
  param_1[0x1e] = lStack_f0;
  param_1[0x21] = lStack_d8;
  param_1[0x20] = lStack_e0;
  param_1[0x17] = lStack_128;
  param_1[0x16] = lStack_130;
  param_1[0x19] = lStack_118;
  param_1[0x18] = lStack_120;
  param_1[0xd] = lStack_98;
  param_1[0xc] = lStack_a0;
  param_1[0xe] = lStack_90;
  param_1[0xf] = lVar14;
  param_1[0x10] = lVar16;
  param_1[0x11] = lVar14;
  *(undefined1 *)(param_1 + 0x12) = uVar18;
  param_1[6] = lVar12;
  param_1[7] = lVar21;
  param_1[8] = lVar12;
  param_1[9] = lStack_1a0;
  *(undefined1 *)(param_1 + 0x28) = uVar4;
  param_1[0x13] = lVar20;
  param_1[0x14] = lVar11;
  param_1[0x15] = lVar20;
  return;
}

