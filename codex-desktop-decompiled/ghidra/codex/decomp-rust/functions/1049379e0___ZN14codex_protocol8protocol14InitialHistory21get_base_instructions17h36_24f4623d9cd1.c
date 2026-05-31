
void __ZN14codex_protocol8protocol14InitialHistory21get_base_instructions17h365941ed2c1fdc63E
               (long *param_1,ulong *param_2)

{
  code *pcVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *extraout_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 extraout_w10;
  undefined1 uVar9;
  long lVar10;
  long unaff_x21;
  long lVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined8 unaff_x27;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined4 uStack_178;
  undefined3 uStack_174;
  ulong *puStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong *puStack_158;
  ulong uStack_150;
  ulong *puStack_148;
  ulong uStack_140;
  char cStack_138;
  ulong *puStack_130;
  ulong uStack_128;
  ulong uStack_118;
  ulong *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  long lStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  uVar7 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar7 = 2;
  }
  if (uVar7 < 2) goto LAB_104937918;
  lVar2 = unaff_x21;
  if (uVar7 != 2) {
    plVar16 = (long *)param_2[3];
    if (plVar16 == (long *)0x0) goto LAB_104937918;
    plVar17 = (long *)param_2[2];
    lVar15 = param_1[1];
    lVar13 = param_1[2];
    if ((*plVar17 == 0) && (plVar17[0x19] != -0x8000000000000000)) {
      lVar10 = plVar17[0x1b];
      if (lVar10 == 0) goto LAB_1049379bc;
      lVar19 = *param_1;
      lVar11 = plVar17[0x1a];
      lVar2 = _malloc(lVar10);
      if (lVar2 == 0) goto LAB_1049379cc;
      _memcpy(lVar2,lVar11,lVar10);
      lVar13 = -0x8000000000000000;
      lVar15 = lVar2;
      if (lVar10 != -0x8000000000000000) goto LAB_1049379b0;
    }
    if (plVar16 != (long *)0x1) {
      lVar10 = (long)plVar16 * 0x1e0;
      plVar16 = plVar17 + 0x57;
      plVar17 = (long *)(lVar10 - 0x1e0);
      unaff_x27 = 0x8000000000000000;
      lVar19 = -0x8000000000000000;
      unaff_x21 = lVar2;
      do {
        lVar2 = unaff_x21;
        if ((plVar16[-0x1b] == 0) && (plVar16[-2] != -0x8000000000000000)) {
          lVar10 = *plVar16;
          if (lVar10 == 0) goto LAB_1049379bc;
          lVar11 = plVar16[-1];
          lVar2 = _malloc(lVar10);
          if (lVar2 == 0) goto LAB_1049379cc;
          _memcpy(lVar2,lVar11,lVar10);
          lVar13 = -0x8000000000000000;
          lVar15 = lVar2;
          if (lVar10 != -0x8000000000000000) goto LAB_1049379b0;
        }
        plVar16 = plVar16 + 0x3c;
        plVar17 = plVar17 + -0x3c;
        unaff_x21 = lVar2;
      } while (plVar17 != (long *)0x0);
    }
LAB_104937914:
    param_1[1] = lVar15;
    param_1[2] = lVar13;
LAB_104937918:
    *param_1 = -0x8000000000000000;
    return;
  }
  plVar16 = (long *)param_2[2];
  if (plVar16 == (long *)0x0) goto LAB_104937918;
  plVar17 = (long *)param_2[1];
  lVar15 = param_1[1];
  lVar13 = param_1[2];
  if ((*plVar17 != 0) || (plVar17[0x19] == -0x8000000000000000)) {
LAB_104937828:
    if (plVar16 != (long *)0x1) {
      lVar10 = (long)plVar16 * 0x1e0;
      plVar16 = plVar17 + 0x57;
      plVar17 = (long *)(lVar10 - 0x1e0);
      unaff_x27 = 0x8000000000000000;
      lVar19 = -0x8000000000000000;
      unaff_x21 = lVar2;
      do {
        lVar2 = unaff_x21;
        if ((plVar16[-0x1b] == 0) && (plVar16[-2] != -0x8000000000000000)) {
          lVar10 = *plVar16;
          if (lVar10 == 0) goto LAB_1049379bc;
          lVar11 = plVar16[-1];
          lVar2 = _malloc(lVar10);
          if (lVar2 == 0) goto LAB_1049379cc;
          _memcpy(lVar2,lVar11,lVar10);
          lVar13 = -0x8000000000000000;
          lVar15 = lVar2;
          if (lVar10 != -0x8000000000000000) goto LAB_1049379b0;
        }
        plVar16 = plVar16 + 0x3c;
        plVar17 = plVar17 + -0x3c;
        unaff_x21 = lVar2;
      } while (plVar17 != (long *)0x0);
    }
    goto LAB_104937914;
  }
  lVar10 = plVar17[0x1b];
  if (lVar10 == 0) {
LAB_1049379bc:
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  lVar19 = *param_1;
  lVar11 = plVar17[0x1a];
  lVar2 = _malloc(lVar10);
  if (lVar2 != 0) {
    _memcpy(lVar2,lVar11,lVar10);
    lVar13 = -0x8000000000000000;
    lVar15 = lVar2;
    if (lVar10 != -0x8000000000000000) {
LAB_1049379b0:
      param_1[1] = lVar2;
      param_1[2] = lVar10;
      *param_1 = lVar10;
      return;
    }
    goto LAB_104937828;
  }
LAB_1049379cc:
  param_1[1] = lVar15;
  param_1[2] = lVar13;
  *param_1 = lVar19;
  puVar3 = (ulong *)func_0x0001087c9084(1,lVar10);
  uStack_68 = 0x1049379e0;
  uVar7 = puVar3[0x27];
  lStack_c0 = lVar19;
  uStack_b8 = unaff_x27;
  plStack_b0 = plVar17;
  plStack_a8 = plVar16;
  lStack_a0 = lVar15;
  lStack_98 = lVar13;
  lStack_90 = lVar11;
  lStack_88 = unaff_x21;
  lStack_80 = lVar10;
  plStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  if (uVar7 != 0x8000000000000003) {
    uVar8 = 0x8000000000000000;
    uVar6 = uVar7;
    if (uVar7 < 0x8000000000000001) {
      uVar6 = 0;
    }
    uVar6 = uVar6 & 0x7fffffffffffffff;
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        uVar8 = 0x8000000000000001;
        uVar9 = extraout_w10;
      }
      else {
        uStack_168 = puVar3[0x29];
        puStack_170 = (ulong *)puVar3[0x28];
        uVar6 = puVar3[0x2a];
        uVar9 = (undefined1)puVar3[0x2b];
        uStack_174 = (undefined3)((uint)*(undefined4 *)((long)puVar3 + 0x15c) >> 8);
        uStack_178 = *(undefined4 *)((long)puVar3 + 0x159);
        uVar8 = uVar7;
      }
      goto LAB_104937de8;
    }
    if (uVar7 != 0x8000000000000000) {
      uVar8 = puVar3[0x29];
      if (uVar8 == 0) {
        puStack_158 = (ulong *)0x8;
      }
      else {
        uVar7 = puVar3[0x28];
        lVar2 = uVar8 * 0x38;
        puVar4 = (ulong *)_malloc(lVar2);
        if (puVar4 == (ulong *)0x0) goto LAB_104937e2c;
        uVar6 = 0;
        uStack_160 = uVar8;
        puStack_158 = puVar4;
        do {
          if (lVar2 == 0) break;
          FUN_1049d0944(&uStack_100,uVar7);
          uVar6 = uVar6 + 1;
          uStack_d0 = *(undefined1 *)(uVar7 + 0x30);
          uVar7 = uVar7 + 0x38;
          puVar4[1] = uStack_f8;
          *puVar4 = uStack_100;
          puVar4[3] = uStack_e8;
          puVar4[2] = uStack_f0;
          puVar4[5] = uStack_d8;
          puVar4[4] = uStack_e0;
          puVar4[6] = CONCAT71(uStack_cf,uStack_d0);
          lVar2 = lVar2 + -0x38;
          puVar4 = puVar4 + 7;
        } while (uVar8 != uVar6);
      }
      puStack_170 = puStack_158;
      uVar6 = puVar3[0x2a];
      uStack_168 = uVar8;
    }
    uVar9 = (undefined1)puVar3[0x2b];
LAB_104937de8:
    *extraout_x8 = uVar8;
    extraout_x8[2] = uStack_168;
    extraout_x8[1] = (ulong)puStack_170;
    extraout_x8[3] = uVar6;
    *(undefined1 *)(extraout_x8 + 4) = uVar9;
    *(undefined4 *)((long)extraout_x8 + 0x21) = uStack_178;
    *(uint *)((long)extraout_x8 + 0x24) = CONCAT31(uStack_174,uStack_178._3_1_);
    return;
  }
  uVar7 = *puVar3;
  if (uVar7 == 2) {
    __ZN14codex_protocol11permissions23FileSystemSandboxPolicy34from_legacy_sandbox_policy_for_cwd17h74a0b781ff24ae74E
              (&uStack_160,puVar3 + 0x23,puVar3[7],puVar3[8]);
  }
  else {
    uVar6 = puVar3[5];
    uVar8 = puVar3[1];
    uVar18 = puVar3[4];
    if (uVar18 == 0) {
      uStack_118 = 0;
      puStack_110 = (ulong *)0x8;
    }
    else {
      uVar14 = puVar3[3];
      lVar2 = uVar18 * 0x38;
      puVar4 = (ulong *)_malloc(lVar2);
      if (puVar4 == (ulong *)0x0) {
LAB_104937e2c:
        func_0x0001087c9084(8,lVar2);
        goto LAB_104937e38;
      }
      uVar20 = 0;
      uStack_118 = uVar18;
      puStack_110 = puVar4;
      do {
        if (lVar2 == 0) break;
        FUN_1049d0944(&uStack_100,uVar14);
        uVar20 = uVar20 + 1;
        uStack_d0 = *(undefined1 *)(uVar14 + 0x30);
        uVar14 = uVar14 + 0x38;
        puVar4[1] = uStack_f8;
        *puVar4 = uStack_100;
        puVar4[3] = uStack_e8;
        puVar4[2] = uStack_f0;
        puVar4[5] = uStack_d8;
        puVar4[4] = uStack_e0;
        puVar4[6] = CONCAT71(uStack_cf,uStack_d0);
        lVar2 = lVar2 + -0x38;
        puVar4 = puVar4 + 7;
      } while (uVar18 != uVar20);
    }
    puStack_148 = puStack_110;
    uStack_150 = uStack_118;
    uStack_160 = uVar7;
    puStack_158 = (ulong *)uVar8;
    uStack_140 = uVar18;
    cStack_138 = (char)uVar6;
  }
  uVar6 = uStack_140;
  puVar4 = puStack_148;
  uVar7 = puVar3[0x23] ^ 0x8000000000000000;
  if (-1 < (long)puVar3[0x23]) {
    uVar7 = 3;
  }
  if (uVar7 - 1 < 2) {
    bVar12 = (byte)puVar3[0x24];
joined_r0x000104937c48:
    puVar3 = (ulong *)0x0;
    if (cStack_138 == '\0') goto LAB_104937b9c;
LAB_104937b68:
    puVar5 = puStack_148;
    uVar7 = uStack_140;
    if (cStack_138 != '\x01') {
      *(byte *)(extraout_x8 + 1) = bVar12 & 1;
      *extraout_x8 = 0x8000000000000002;
      goto joined_r0x000104937d10;
    }
    if ((int)puVar3 != 0) {
      *extraout_x8 = 0x8000000000000001;
      goto joined_r0x000104937d10;
    }
    uVar6 = 0x8000000000000000;
  }
  else {
    if (uVar7 != 0) {
      bVar12 = (byte)puVar3[0x26];
      goto joined_r0x000104937c48;
    }
    puVar3 = (ulong *)0x1;
    bVar12 = 1;
    if (cStack_138 != '\0') goto LAB_104937b68;
LAB_104937b9c:
    if (uStack_140 == 0) {
      puStack_110 = (ulong *)0x8;
    }
    else {
      puVar3 = (ulong *)(uStack_140 * 0x38);
      puVar5 = (ulong *)_malloc(puVar3);
      if (puVar5 == (ulong *)0x0) {
LAB_104937e38:
        func_0x0001087c9084(8,puVar3);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104937e48);
        (*pcVar1)();
      }
      uVar7 = 0;
      uStack_118 = uVar6;
      puStack_110 = puVar5;
      do {
        if (puVar3 == (ulong *)0x0) break;
        FUN_1049d0944(&uStack_100,puVar4);
        uVar7 = uVar7 + 1;
        uStack_d0 = (undefined1)puVar4[6];
        puVar4 = puVar4 + 7;
        puVar5[1] = uStack_f8;
        *puVar5 = uStack_100;
        puVar5[3] = uStack_e8;
        puVar5[2] = uStack_f0;
        puVar5[5] = uStack_d8;
        puVar5[4] = uStack_e0;
        puVar5[6] = CONCAT71(uStack_cf,uStack_d0);
        puVar3 = puVar3 + -7;
        puVar5 = puVar5 + 7;
      } while (uVar6 != uVar7);
    }
    uStack_108 = uVar6;
    uStack_128 = uVar6;
    puStack_130 = puStack_110;
    puVar3 = puStack_158;
    if ((int)uStack_160 == 0) {
      puVar3 = (ulong *)0x0;
    }
  }
  *extraout_x8 = uVar6;
  extraout_x8[2] = uStack_128;
  extraout_x8[1] = (ulong)puStack_130;
  extraout_x8[3] = (ulong)puVar3;
  *(byte *)(extraout_x8 + 4) = bVar12 & 1;
  puVar4 = puStack_148;
  puVar5 = puStack_148;
  uVar7 = uStack_140;
joined_r0x000104937d10:
  do {
    if (uVar7 == 0) {
      if (uStack_150 != 0) {
        _free(puVar5);
      }
      return;
    }
    uVar6 = *puVar4;
    lVar2 = uVar6 + 0x7ffffffffffffffb;
    if (uVar6 < 0x8000000000000005) {
      lVar2 = 2;
    }
    if ((lVar2 == 0) || (lVar2 == 1)) {
      uVar6 = puVar4[1];
joined_r0x000104937d30:
      if (uVar6 != 0) {
        lVar2 = 0x10;
LAB_104937d38:
        _free(*(undefined8 *)((long)puVar4 + lVar2));
      }
    }
    else {
      uVar8 = uVar6 ^ 0x8000000000000000;
      if (-1 < (long)uVar6) {
        uVar8 = 5;
      }
      if (uVar8 < 5) {
        if (uVar8 == 2) {
          uVar6 = puVar4[1] & 0x7fffffffffffffff;
          goto joined_r0x000104937d30;
        }
      }
      else {
        if (uVar6 != 0) {
          _free(puVar4[1]);
        }
        if ((puVar4[3] & 0x7fffffffffffffff) != 0) {
          lVar2 = 0x20;
          goto LAB_104937d38;
        }
      }
    }
    puVar4 = puVar4 + 7;
    uVar7 = uVar7 - 1;
  } while( true );
}

