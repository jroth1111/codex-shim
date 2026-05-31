
void FUN_1035f124c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x23;
  long lVar10;
  long lVar11;
  long unaff_x27;
  long unaff_x28;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar9 = 0;
  if (*param_2 != 0) {
    lVar9 = *param_2 + -1;
  }
  if (lVar9 < 3) {
    if (lVar9 == 0) {
      lVar9 = param_2[0x17];
      lVar10 = param_2[0x18];
      if (lVar10 == 0) {
        lVar5 = 1;
        _memcpy(1,lVar9,0);
        lVar4 = param_2[0x1a];
        lVar9 = param_2[0x1b];
      }
      else {
        lVar5 = _malloc(lVar10);
        if (lVar5 == 0) {
          func_0x0001087c9084(1,lVar10);
          goto LAB_103638e00;
        }
        _memcpy(lVar5,lVar9,lVar10);
        lVar4 = param_2[0x1a];
        lVar9 = param_2[0x1b];
      }
      if (lVar9 == 0) {
        lVar8 = 1;
      }
      else {
        lVar8 = _malloc(lVar9);
        if (lVar8 == 0) {
LAB_103638e00:
          func_0x0001087c9084(1,lVar9);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103638e10);
          (*pcVar3)();
        }
      }
      _memcpy(lVar8,lVar4,lVar9);
      lVar4 = param_2[0x25];
      uVar2 = *(undefined1 *)((long)param_2 + 0x129);
      func_0x000103609eec(&uStack_1a0,param_2);
      lVar11 = -0x7ffffffffffffffb;
      if (param_2[0x1c] != -0x7ffffffffffffffb) {
        FUN_103595c90(&lStack_a8,param_2 + 0x1c);
        uStack_e8 = uStack_98;
        lStack_f0 = lStack_a0;
        lStack_d8 = lStack_88;
        lStack_e0 = lStack_90;
        uStack_c8 = uStack_78;
        uStack_d0 = uStack_80;
        lStack_b8 = lStack_68;
        uStack_c0 = uStack_70;
        lVar11 = lStack_a8;
      }
      param_1[0x16] = lVar10;
      param_1[0x17] = lVar5;
      param_1[0x18] = lVar10;
      param_1[0x19] = lVar9;
      param_1[0x1a] = lVar8;
      param_1[0x1b] = lVar9;
      *(char *)(param_1 + 0x25) = (char)lVar4;
      *(undefined1 *)((long)param_1 + 0x129) = uVar2;
      param_1[0x11] = lStack_118;
      param_1[0x10] = lStack_120;
      param_1[0x13] = uStack_108;
      param_1[0x12] = lStack_110;
      param_1[0x15] = uStack_f8;
      param_1[0x14] = uStack_100;
      param_1[9] = lStack_158;
      param_1[8] = lStack_160;
      param_1[0xb] = lStack_148;
      param_1[10] = lStack_150;
      param_1[0xd] = lStack_138;
      param_1[0xc] = lStack_140;
      param_1[0xf] = lStack_128;
      param_1[0xe] = lStack_130;
      param_1[1] = uStack_198;
      *param_1 = uStack_1a0;
      param_1[3] = uStack_188;
      param_1[2] = uStack_190;
      param_1[5] = lStack_178;
      param_1[4] = uStack_180;
      param_1[7] = lStack_168;
      param_1[6] = lStack_170;
      param_1[0x1c] = lVar11;
      param_1[0x1e] = uStack_e8;
      param_1[0x1d] = lStack_f0;
      param_1[0x20] = lStack_d8;
      param_1[0x1f] = lStack_e0;
      param_1[0x22] = uStack_c8;
      param_1[0x21] = uStack_d0;
      param_1[0x24] = lStack_b8;
      param_1[0x23] = uStack_c0;
      return;
    }
    if (lVar9 == 1) {
      func_0x00010374b2dc(param_1 + 1,param_2 + 1);
      *param_1 = 2;
      return;
    }
    unaff_x23 = param_2[0x18];
    lVar9 = param_2[0x19];
    if (lVar9 == 0) {
      lVar4 = 1;
      _memcpy(1,unaff_x23,0);
      lVar10 = param_2[0x1b];
      unaff_x23 = param_2[0x1c];
      if (unaff_x23 != 0) goto LAB_1035f13ac;
LAB_1035f141c:
      lVar5 = 1;
    }
    else {
      lVar4 = _malloc(lVar9);
      if (lVar4 == 0) {
LAB_1035f17c8:
        func_0x0001087c9084(1,lVar9);
        goto LAB_1035f17d4;
      }
      _memcpy(lVar4,unaff_x23,lVar9);
      lVar10 = param_2[0x1b];
      unaff_x23 = param_2[0x1c];
      if (unaff_x23 == 0) goto LAB_1035f141c;
LAB_1035f13ac:
      lVar5 = _malloc(unaff_x23);
      if (lVar5 == 0) goto LAB_1035f17e0;
    }
    _memcpy(lVar5,lVar10,unaff_x23);
    func_0x000103609eec(&lStack_168,param_2 + 1);
    param_1[0x10] = lStack_f0;
    param_1[0xf] = uStack_f8;
    param_1[0x12] = lStack_e0;
    param_1[0x11] = uStack_e8;
    param_1[0x14] = uStack_d0;
    param_1[0x13] = lStack_d8;
    param_1[0x16] = uStack_c0;
    param_1[0x15] = uStack_c8;
    param_1[8] = lStack_130;
    param_1[7] = lStack_138;
    param_1[10] = lStack_120;
    param_1[9] = lStack_128;
    param_1[0xc] = lStack_110;
    param_1[0xb] = lStack_118;
    param_1[0xe] = uStack_100;
    param_1[0xd] = uStack_108;
    param_1[2] = lStack_160;
    param_1[1] = lStack_168;
    param_1[4] = lStack_150;
    param_1[3] = lStack_158;
    param_1[0x17] = lVar9;
    param_1[0x18] = lVar4;
    param_1[0x19] = lVar9;
    param_1[0x1a] = unaff_x23;
    param_1[0x1b] = lVar5;
    param_1[0x1c] = unaff_x23;
    param_1[6] = lStack_140;
    param_1[5] = lStack_148;
    *param_1 = 3;
  }
  else {
    if (lVar9 != 3) {
      if (lVar9 == 4) {
        lVar9 = param_2[0x13];
        lStack_b8 = -0x7fffffffffffffff;
        if (param_2[4] != -0x7fffffffffffffff) {
          lStack_b8 = -0x8000000000000000;
          if (param_2[4] != -0x8000000000000000) {
            func_0x0001035ad330(&lStack_168,param_2[5],param_2[6]);
            lStack_88 = lStack_158;
            lStack_90 = lStack_160;
            lStack_b8 = lStack_168;
          }
          lStack_a8 = lStack_88;
          lStack_b0 = lStack_90;
        }
        lVar10 = -0x8000000000000000;
        if (param_2[7] == -0x8000000000000000) {
          lVar4 = -0x8000000000000000;
          lVar5 = -0x8000000000000000;
          if (param_2[10] != -0x8000000000000000) goto LAB_1035f164c;
LAB_1035f15e0:
          if (param_2[0xd] != -0x8000000000000000) goto LAB_1035f1698;
LAB_1035f15f4:
          lVar11 = -0x8000000000000000;
          lVar5 = param_2[0x10];
        }
        else {
          if (param_2[7] == -0x7fffffffffffffff) {
            lStack_168 = -0x7fffffffffffffff;
            uVar2 = *(undefined1 *)((long)param_2 + 0x99);
            lVar8 = param_2[1];
            lVar5 = lStack_90;
            goto joined_r0x0001035f1738;
          }
          lVar5 = param_2[8];
          lVar4 = param_2[9];
          if (lVar4 == 0) {
            lVar8 = 1;
          }
          else {
            lVar8 = _malloc(lVar4);
            if (lVar8 == 0) {
              func_0x0001087c9084(1,lVar4);
              goto LAB_1035f184c;
            }
          }
          lStack_170 = lVar8;
          _memcpy(lVar8,lVar5,lVar4);
          lVar5 = lVar4;
          if (param_2[10] == -0x8000000000000000) goto LAB_1035f15e0;
LAB_1035f164c:
          lVar4 = param_2[0xb];
          lVar10 = param_2[0xc];
          if (lVar10 == 0) {
            lVar8 = 1;
          }
          else {
            lVar8 = _malloc(lVar10);
            if (lVar8 == 0) {
              func_0x0001087c9084(1,lVar10);
              goto LAB_1035f184c;
            }
          }
          lStack_178 = lVar8;
          _memcpy(lVar8,lVar4,lVar10);
          lVar4 = lVar5;
          if (param_2[0xd] == -0x8000000000000000) goto LAB_1035f15f4;
LAB_1035f1698:
          unaff_x28 = param_2[0xe];
          lVar11 = param_2[0xf];
          if (lVar11 == 0) {
            unaff_x27 = 1;
          }
          else {
            unaff_x27 = _malloc(lVar11);
            if (unaff_x27 == 0) {
              func_0x0001087c9084(1,lVar11);
              goto LAB_1035f184c;
            }
          }
          _memcpy(unaff_x27,unaff_x28,lVar11);
          lVar5 = param_2[0x10];
        }
        if (lVar5 == -0x8000000000000000) {
          lVar5 = -0x8000000000000000;
        }
        else {
          lVar8 = param_2[0x11];
          lVar5 = param_2[0x12];
          if (lVar5 == 0) {
            unaff_x28 = 1;
          }
          else {
            unaff_x28 = _malloc(lVar5);
            if (unaff_x28 == 0) {
              func_0x0001087c9084(1,lVar5);
              goto LAB_1035f184c;
            }
          }
          _memcpy(unaff_x28,lVar8,lVar5);
        }
        uVar2 = *(undefined1 *)((long)param_2 + 0x99);
        lVar8 = param_2[1];
        lStack_120 = lVar5;
        lStack_110 = lVar5;
        lStack_118 = unaff_x28;
        lStack_160 = lStack_170;
        lStack_148 = lStack_178;
        lVar5 = lStack_90;
        lStack_138 = lVar11;
        lStack_128 = lVar11;
        lStack_168 = lVar4;
        lStack_158 = lVar4;
        lStack_150 = lVar10;
        lStack_140 = lVar10;
        lStack_130 = unaff_x27;
joined_r0x0001035f1738:
        lStack_90 = -0x8000000000000000;
        if (lVar8 != -0x8000000000000000) {
          lStack_90 = lVar5;
          func_0x0001035ad330(&lStack_90,param_2[2],param_2[3]);
          uStack_98 = uStack_80;
          lStack_a0 = lStack_88;
        }
        *(char *)(param_1 + 0x13) = (char)lVar9;
        param_1[0xc] = lStack_140;
        param_1[0xb] = lStack_148;
        param_1[0xe] = lStack_130;
        param_1[0xd] = lStack_138;
        param_1[0x10] = lStack_120;
        param_1[0xf] = lStack_128;
        param_1[0x12] = lStack_110;
        param_1[0x11] = lStack_118;
        param_1[8] = lStack_160;
        param_1[7] = lStack_168;
        param_1[6] = lStack_a8;
        param_1[10] = lStack_150;
        param_1[9] = lStack_158;
        *(undefined1 *)((long)param_1 + 0x99) = uVar2;
        param_1[3] = uStack_98;
        param_1[2] = lStack_a0;
        param_1[5] = lStack_b0;
        param_1[4] = lStack_b8;
        *param_1 = 5;
        param_1[1] = lStack_90;
        return;
      }
      lVar10 = param_2[2];
      lVar9 = param_2[3];
      if (lVar9 == 0) {
        lVar4 = 1;
      }
      else {
        lVar4 = _malloc(lVar9);
        if (lVar4 == 0) goto LAB_1035f17c8;
      }
      _memcpy(lVar4,lVar10,lVar9);
      lVar10 = param_2[5];
      lVar5 = param_2[6];
      lStack_170 = lVar4;
      if (lVar5 == 0) {
        lVar4 = 1;
      }
      else {
        lVar4 = _malloc(lVar5);
        if (lVar4 == 0) {
          func_0x0001087c9084(1,lVar5);
          goto LAB_1035f184c;
        }
      }
      _memcpy(lVar4,lVar10,lVar5);
      lVar10 = param_2[8];
      lVar8 = param_2[9];
      lStack_178 = lVar4;
      if (lVar8 == 0) {
        lVar11 = 1;
        _memcpy(1,lVar10,0);
        lVar10 = param_2[0xb];
        lVar4 = param_2[0xc];
        if (lVar4 != 0) goto LAB_1035f1524;
LAB_1035f1578:
        lVar6 = 1;
        _memcpy(1,lVar10,lVar4);
        lVar10 = param_2[0xe];
        lVar1 = param_2[0xf];
      }
      else {
        lVar11 = _malloc(lVar8);
        if (lVar11 == 0) {
          func_0x0001087c9084(1,lVar8);
          goto LAB_1035f184c;
        }
        _memcpy(lVar11,lVar10,lVar8);
        lVar10 = param_2[0xb];
        lVar4 = param_2[0xc];
        if (lVar4 == 0) goto LAB_1035f1578;
LAB_1035f1524:
        lVar6 = _malloc(lVar4);
        if (lVar6 == 0) {
          func_0x0001087c9084(1,lVar4);
          goto LAB_1035f184c;
        }
        _memcpy(lVar6,lVar10,lVar4);
        lVar10 = param_2[0xe];
        lVar1 = param_2[0xf];
      }
      if (lVar1 == 0) {
        lVar7 = 1;
LAB_1035f1598:
        _memcpy(lVar7,lVar10,lVar1);
        param_1[2] = lStack_170;
        param_1[3] = lVar9;
        param_1[4] = lVar5;
        param_1[5] = lStack_178;
        param_1[6] = lVar5;
        param_1[7] = lVar8;
        param_1[8] = lVar11;
        param_1[9] = lVar8;
        param_1[10] = lVar4;
        param_1[0xb] = lVar6;
        param_1[0xc] = lVar4;
        param_1[0xd] = lVar1;
        param_1[0xe] = lVar7;
        param_1[0xf] = lVar1;
        *param_1 = 6;
        param_1[1] = lVar9;
        return;
      }
      lVar7 = _malloc(lVar1);
      if (lVar7 != 0) goto LAB_1035f1598;
      func_0x0001087c9084(1,lVar1);
      goto LAB_1035f184c;
    }
    lVar9 = param_2[2];
    param_2 = (long *)param_2[3];
    if (param_2 == (long *)0x0) {
      lVar10 = 1;
    }
    else {
      lVar10 = _malloc(param_2);
      if (lVar10 == 0) {
LAB_1035f17d4:
        func_0x0001087c9084(1,param_2);
LAB_1035f17e0:
        func_0x0001087c9084(1,unaff_x23);
LAB_1035f184c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1035f1850);
        (*pcVar3)();
      }
    }
    _memcpy(lVar10,lVar9,param_2);
    param_1[2] = lVar10;
    param_1[3] = param_2;
    *param_1 = 4;
    param_1[1] = param_2;
  }
  return;
}

