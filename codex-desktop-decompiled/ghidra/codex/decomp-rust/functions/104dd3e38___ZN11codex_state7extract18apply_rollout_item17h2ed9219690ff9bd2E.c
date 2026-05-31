
/* WARNING: Possible PIC construction at 0x000104dd33d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dd38ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000104dd3434: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104dd38b0) */
/* WARNING: Removing unreachable block (ram,0x000104dd38b4) */
/* WARNING: Removing unreachable block (ram,0x000104dd38cc) */
/* WARNING: Removing unreachable block (ram,0x000104dd38e4) */
/* WARNING: Removing unreachable block (ram,0x000104dd38ec) */
/* WARNING: Removing unreachable block (ram,0x000104dd33dc) */
/* WARNING: Removing unreachable block (ram,0x000104dd34f8) */
/* WARNING: Removing unreachable block (ram,0x000104dd3508) */
/* WARNING: Removing unreachable block (ram,0x000104dd3510) */
/* WARNING: Removing unreachable block (ram,0x000104dd3868) */
/* WARNING: Removing unreachable block (ram,0x000104dd3884) */
/* WARNING: Removing unreachable block (ram,0x000104dd3890) */
/* WARNING: Removing unreachable block (ram,0x000104dd3878) */
/* WARNING: Removing unreachable block (ram,0x000104dd3518) */
/* WARNING: Removing unreachable block (ram,0x000104dd3524) */
/* WARNING: Removing unreachable block (ram,0x000104dd3844) */
/* WARNING: Removing unreachable block (ram,0x000104dd3850) */
/* WARNING: Removing unreachable block (ram,0x000104dd355c) */
/* WARNING: Removing unreachable block (ram,0x000104dd33e0) */
/* WARNING: Removing unreachable block (ram,0x000104dd33f4) */
/* WARNING: Removing unreachable block (ram,0x000104dd376c) */
/* WARNING: Removing unreachable block (ram,0x000104dd341c) */
/* WARNING: Removing unreachable block (ram,0x000104dd3560) */
/* WARNING: Removing unreachable block (ram,0x000104dd342c) */
/* WARNING: Removing unreachable block (ram,0x000104dd3580) */
/* WARNING: Removing unreachable block (ram,0x000104dd3780) */
/* WARNING: Removing unreachable block (ram,0x000104dd385c) */
/* WARNING: Removing unreachable block (ram,0x000104dd3788) */
/* WARNING: Removing unreachable block (ram,0x000104dd35a0) */
/* WARNING: Removing unreachable block (ram,0x000104dd3894) */
/* WARNING: Removing unreachable block (ram,0x000104dd389c) */
/* WARNING: Removing unreachable block (ram,0x000104dd38a4) */
/* WARNING: Removing unreachable block (ram,0x000104dd3438) */
/* WARNING: Removing unreachable block (ram,0x000104dd343c) */
/* WARNING: Removing unreachable block (ram,0x000104dd3450) */
/* WARNING: Removing unreachable block (ram,0x000104dd378c) */
/* WARNING: Removing unreachable block (ram,0x000104dd3794) */
/* WARNING: Removing unreachable block (ram,0x000104dd3470) */
/* WARNING: Type propagation algorithm not settling */

byte * __ZN11codex_state7extract18apply_rollout_item17h2ed9219690ff9bd2E
                 (byte *param_1,long *param_2,ulong param_3,long param_4)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 uVar9;
  byte *pbVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined *puVar15;
  undefined *extraout_x1;
  undefined *puVar17;
  undefined *puVar18;
  char *pcVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  uint extraout_w9;
  undefined *puVar23;
  undefined *extraout_x9;
  undefined *extraout_x9_00;
  byte *pbVar24;
  byte *pbVar25;
  undefined *puVar26;
  byte *pbVar27;
  uint uVar28;
  undefined *puVar29;
  long lVar30;
  undefined *puVar31;
  byte *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_4d0 [32];
  undefined1 auStack_4b0 [282];
  undefined1 uStack_396;
  undefined1 auStack_390 [8];
  long lStack_388;
  undefined8 uStack_380;
  undefined1 auStack_370 [168];
  ulong uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  long lStack_180;
  byte *pbStack_178;
  long *plStack_170;
  ulong uStack_168;
  undefined1 auStack_160 [16];
  undefined1 **ppuStack_150;
  undefined8 uStack_148;
  int aiStack_138 [2];
  undefined *puStack_130;
  byte bStack_120;
  undefined1 uStack_11f;
  byte bStack_11e;
  undefined5 uStack_11d;
  ulong uStack_118;
  undefined *puStack_110;
  undefined *puStack_100;
  long lStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  long *plStack_d0;
  ulong uStack_c8;
  byte *pbStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uVar16;
  
  lVar20 = *param_2;
  pbVar10 = param_1;
  if (lVar20 < 3) {
    if ((1 < lVar20 - 1U) &&
       (*(long *)(param_1 + 0x1a0) == param_2[0x2f] && *(long *)(param_1 + 0x198) == param_2[0x2e]))
    {
      lVar20 = param_2[0x2e];
      *(long *)(param_1 + 0x1a0) = param_2[0x2f];
      *(long *)(param_1 + 0x198) = lVar20;
      pbVar10 = (byte *)FUN_104dd2698(&lStack_68,param_2 + 0x22);
      if (*(long *)(param_1 + 0x18) != 0) {
        pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0x20));
      }
      *(undefined8 *)(param_1 + 0x20) = uStack_60;
      *(long *)(param_1 + 0x18) = lStack_68;
      *(undefined8 *)(param_1 + 0x28) = uStack_58;
      param_1[0x1d4] = *(byte *)((long)param_2 + 0x191);
      unaff_x23 = (byte *)0x8000000000000000;
      if (param_2[0xd] == -0x8000000000000000) {
        uVar21 = *(ulong *)(param_1 + 0xc0);
      }
      else {
        unaff_x25 = param_2[0xe];
        unaff_x23 = (byte *)param_2[0xf];
        if (unaff_x23 == (byte *)0x0) {
          lVar20 = 1;
        }
        else {
          lVar20 = _malloc(unaff_x23);
          if (lVar20 == 0) goto LAB_104dd3974;
        }
        pbVar10 = (byte *)_memcpy(lVar20,unaff_x25,unaff_x23);
        uVar21 = *(ulong *)(param_1 + 0xc0);
        unaff_x24 = lVar20;
      }
      if ((uVar21 & 0x7fffffffffffffff) != 0) {
        pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 200));
      }
      *(byte **)(param_1 + 0xc0) = unaff_x23;
      *(long *)(param_1 + 200) = unaff_x24;
      *(byte **)(param_1 + 0xd0) = unaff_x23;
      unaff_x23 = (byte *)0x8000000000000000;
      if (param_2[0x10] == -0x8000000000000000) {
        uVar21 = *(ulong *)(param_1 + 0xd8);
      }
      else {
        unaff_x25 = param_2[0x11];
        unaff_x23 = (byte *)param_2[0x12];
        if (unaff_x23 == (byte *)0x0) {
          lVar20 = 1;
        }
        else {
          lVar20 = _malloc(unaff_x23);
          if (lVar20 == 0) goto LAB_104dd3974;
        }
        pbVar10 = (byte *)_memcpy(lVar20,unaff_x25,unaff_x23);
        uVar21 = *(ulong *)(param_1 + 0xd8);
        unaff_x24 = lVar20;
      }
      if ((uVar21 & 0x7fffffffffffffff) != 0) {
        pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0xe0));
      }
      *(byte **)(param_1 + 0xd8) = unaff_x23;
      *(long *)(param_1 + 0xe0) = unaff_x24;
      *(byte **)(param_1 + 0xe8) = unaff_x23;
      unaff_x23 = (byte *)0x8000000000000000;
      if (param_2[0x13] == -0x8000000000000000) {
        lVar20 = unaff_x24;
        if ((*(ulong *)(param_1 + 0xf0) & 0x7fffffffffffffff) == 0) goto LAB_104dd3208;
LAB_104dd35e8:
        pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0xf8));
        *(byte **)(param_1 + 0xf0) = unaff_x23;
        *(long *)(param_1 + 0xf8) = lVar20;
        *(byte **)(param_1 + 0x100) = unaff_x23;
        unaff_x24 = lVar20;
        if (param_2[0x16] != -0x8000000000000000) goto LAB_104dd3608;
LAB_104dd3220:
        unaff_x23 = (byte *)param_2[0xc];
        lVar20 = unaff_x24;
        if (unaff_x23 == (byte *)0x0) goto LAB_104dd3228;
LAB_104dd3658:
        unaff_x25 = param_2[0xb];
        lVar20 = _malloc(unaff_x23);
        if (lVar20 == 0) goto LAB_104dd3974;
        pbVar10 = (byte *)_memcpy(lVar20,unaff_x25,unaff_x23);
        if (*(long *)(param_1 + 0x60) != 0) {
          pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0x68));
        }
        *(byte **)(param_1 + 0x60) = unaff_x23;
        *(long *)(param_1 + 0x68) = lVar20;
        *(byte **)(param_1 + 0x70) = unaff_x23;
        unaff_x23 = (byte *)param_2[6];
        unaff_x24 = lVar20;
        if (unaff_x23 != (byte *)0x0) goto LAB_104dd3698;
LAB_104dd3230:
        unaff_x23 = (byte *)param_2[0x33];
        unaff_x24 = lVar20;
        if (unaff_x23 != (byte *)0x8000000000000000) goto LAB_104dd3240;
LAB_104dd36e0:
        if ((*(ulong *)(param_1 + 0x150) & 0x7fffffffffffffff) == 0) goto LAB_104dd36ec;
LAB_104dd37c0:
        pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0x158));
        *(byte **)(param_1 + 0x150) = unaff_x23;
        *(long *)(param_1 + 0x158) = lVar20;
        *(byte **)(param_1 + 0x160) = unaff_x23;
        lVar22 = param_2[0x36];
        unaff_x24 = lVar20;
      }
      else {
        unaff_x25 = param_2[0x14];
        unaff_x23 = (byte *)param_2[0x15];
        if (unaff_x23 == (byte *)0x0) {
          lVar20 = 1;
        }
        else {
          lVar20 = _malloc(unaff_x23);
          if (lVar20 == 0) goto LAB_104dd3974;
        }
        pbVar10 = (byte *)_memcpy(lVar20,unaff_x25,unaff_x23);
        if ((*(ulong *)(param_1 + 0xf0) & 0x7fffffffffffffff) != 0) goto LAB_104dd35e8;
LAB_104dd3208:
        *(byte **)(param_1 + 0xf0) = unaff_x23;
        *(long *)(param_1 + 0xf8) = lVar20;
        *(byte **)(param_1 + 0x100) = unaff_x23;
        unaff_x24 = lVar20;
        if (param_2[0x16] == -0x8000000000000000) goto LAB_104dd3220;
LAB_104dd3608:
        unaff_x25 = param_2[0x17];
        unaff_x23 = (byte *)param_2[0x18];
        if (unaff_x23 == (byte *)0x0) {
          unaff_x24 = 1;
        }
        else {
          unaff_x24 = _malloc(unaff_x23);
          if (unaff_x24 == 0) goto LAB_104dd3974;
        }
        pbVar10 = (byte *)_memcpy(unaff_x24,unaff_x25,unaff_x23);
        if (*(long *)(param_1 + 0x30) != 0) {
          pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0x38));
        }
        *(byte **)(param_1 + 0x30) = unaff_x23;
        *(long *)(param_1 + 0x38) = unaff_x24;
        *(byte **)(param_1 + 0x40) = unaff_x23;
        unaff_x23 = (byte *)param_2[0xc];
        lVar20 = unaff_x24;
        if (unaff_x23 != (byte *)0x0) goto LAB_104dd3658;
LAB_104dd3228:
        unaff_x23 = (byte *)param_2[6];
        unaff_x24 = lVar20;
        if (unaff_x23 == (byte *)0x0) goto LAB_104dd3230;
LAB_104dd3698:
        unaff_x25 = param_2[5];
        lVar20 = _malloc(unaff_x23);
        if (lVar20 == 0) goto LAB_104dd3974;
        pbVar10 = (byte *)_memcpy(lVar20,unaff_x25,unaff_x23);
        if (*(long *)(param_1 + 0x48) != 0) {
          pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0x50));
        }
        *(byte **)(param_1 + 0x48) = unaff_x23;
        *(long *)(param_1 + 0x50) = lVar20;
        *(byte **)(param_1 + 0x58) = unaff_x23;
        unaff_x23 = (byte *)param_2[0x33];
        unaff_x24 = lVar20;
        if (unaff_x23 == (byte *)0x8000000000000000) goto LAB_104dd36e0;
LAB_104dd3240:
        if (unaff_x23 == (byte *)0x8000000000000001) goto LAB_104dd38f4;
        unaff_x25 = param_2[0x34];
        unaff_x23 = (byte *)param_2[0x35];
        if (unaff_x23 == (byte *)0x0) {
          lVar20 = 1;
        }
        else {
          lVar20 = _malloc(unaff_x23);
          if (lVar20 == 0) goto LAB_104dd3974;
        }
        pbVar10 = (byte *)_memcpy(lVar20,unaff_x25,unaff_x23);
        if ((*(ulong *)(param_1 + 0x150) & 0x7fffffffffffffff) != 0) goto LAB_104dd37c0;
LAB_104dd36ec:
        *(byte **)(param_1 + 0x150) = unaff_x23;
        *(long *)(param_1 + 0x158) = lVar20;
        *(byte **)(param_1 + 0x160) = unaff_x23;
        lVar22 = param_2[0x36];
        unaff_x24 = lVar20;
      }
      if (lVar22 == -0x8000000000000000) {
        unaff_x23 = (byte *)0x8000000000000000;
        uVar21 = *(ulong *)(param_1 + 0x168);
        lVar20 = unaff_x24;
      }
      else {
        unaff_x25 = param_2[0x37];
        unaff_x23 = (byte *)param_2[0x38];
        if (unaff_x23 == (byte *)0x0) {
          lVar20 = 1;
        }
        else {
          lVar20 = _malloc(unaff_x23);
          if (lVar20 == 0) goto LAB_104dd3974;
        }
        pbVar10 = (byte *)_memcpy(lVar20,unaff_x25,unaff_x23);
        uVar21 = *(ulong *)(param_1 + 0x168);
      }
      if ((uVar21 & 0x7fffffffffffffff) != 0) {
        pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0x170));
      }
      *(byte **)(param_1 + 0x168) = unaff_x23;
      *(long *)(param_1 + 0x170) = lVar20;
      *(byte **)(param_1 + 0x178) = unaff_x23;
      unaff_x23 = (byte *)0x8000000000000000;
      if (param_2[0x39] == -0x8000000000000000) {
        uVar21 = *(ulong *)(param_1 + 0x180);
        unaff_x24 = lVar20;
      }
      else {
        unaff_x24 = param_2[0x3a];
        unaff_x23 = (byte *)param_2[0x3b];
        if (unaff_x23 == (byte *)0x0) {
          plVar11 = (long *)0x1;
        }
        else {
          plVar11 = (long *)_malloc(unaff_x23);
          if (plVar11 == (long *)0x0) goto LAB_104dd3974;
        }
        pbVar10 = (byte *)_memcpy(plVar11,unaff_x24,unaff_x23);
        uVar21 = *(ulong *)(param_1 + 0x180);
        param_2 = plVar11;
      }
      if ((uVar21 & 0x7fffffffffffffff) != 0) {
        pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0x188));
      }
      *(byte **)(param_1 + 0x180) = unaff_x23;
      *(long **)(param_1 + 0x188) = param_2;
      *(byte **)(param_1 + 400) = unaff_x23;
    }
LAB_104dd38f4:
    if (*(long *)(param_1 + 0x40) != 0) {
      return pbVar10;
    }
    if (param_4 == 0) {
      lVar20 = 1;
      pbVar10 = (byte *)_memcpy(1,param_3,0);
      lVar22 = *(long *)(param_1 + 0x30);
joined_r0x000104dd396c:
      if (lVar22 != 0) {
        pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0x38));
      }
      *(long *)(param_1 + 0x30) = param_4;
      *(long *)(param_1 + 0x38) = lVar20;
      *(long *)(param_1 + 0x40) = param_4;
      return pbVar10;
    }
    lVar20 = _malloc(param_4);
    param_2 = (long *)0x0;
    if (lVar20 != 0) {
      pbVar10 = (byte *)_memcpy(lVar20,param_3,param_4);
      lVar22 = *(long *)(param_1 + 0x30);
      goto joined_r0x000104dd396c;
    }
LAB_104dd3980:
    func_0x0001087c9084(1,param_4);
    func_0x0001087c9084(1,param_2);
    func_0x0001087c9084(1,unaff_x25);
    param_4 = func_0x0001087c9084(1,7);
    if (unaff_x25 != -0x8000000000000000) {
      _free(param_2);
    }
    uVar32 = 0x104dd39d0;
    auVar33 = __Unwind_Resume(param_4);
  }
  else {
    if (lVar20 == 3) {
      if (*(long *)(param_1 + 0x58) != 0) {
        unaff_x25 = param_2[0xb];
        unaff_x23 = (byte *)param_2[0xc];
joined_r0x000104dd3310:
        if (unaff_x23 == (byte *)0x0) {
          lVar20 = 1;
        }
        else {
          lVar20 = _malloc(unaff_x23);
          if (lVar20 == 0) goto LAB_104dd3974;
        }
        unaff_x24 = lVar20;
        _memcpy(unaff_x24,unaff_x25,unaff_x23);
        if ((*(ulong *)(param_1 + 0x108) & 0x7fffffffffffffff) != 0) {
          _free(*(undefined8 *)(param_1 + 0x110));
        }
        *(byte **)(param_1 + 0x108) = unaff_x23;
        *(long *)(param_1 + 0x110) = unaff_x24;
        *(byte **)(param_1 + 0x118) = unaff_x23;
        param_1[0x1d5] = *(byte *)(param_2 + 0x2e);
        FUN_104dd1ab8(&lStack_68,param_2 + 0x24);
        unaff_x23 = param_1 + 0x90;
        if (*(long *)unaff_x23 != 0) {
          _free(*(undefined8 *)(param_1 + 0x98));
        }
        *(undefined8 *)(param_1 + 0x98) = uStack_60;
        *(long *)unaff_x23 = lStack_68;
        *(undefined8 *)(param_1 + 0xa0) = uStack_58;
        pbVar10 = (byte *)FUN_104dd1578(&lStack_68,(long)param_2 + 0x16b);
        if (*(long *)(param_1 + 0xa8) != 0) {
          pbVar10 = (byte *)_free(*(undefined8 *)(param_1 + 0xb0));
        }
        *(undefined8 *)(param_1 + 0xb0) = uStack_60;
        *(long *)(param_1 + 0xa8) = lStack_68;
        *(undefined8 *)(param_1 + 0xb8) = uStack_58;
        goto LAB_104dd38f4;
      }
      unaff_x25 = param_2[8];
      unaff_x23 = (byte *)param_2[9];
      if (unaff_x23 == (byte *)0x0) {
        unaff_x24 = 1;
        _memcpy(1,unaff_x25,0);
        lVar20 = *(long *)(param_1 + 0x48);
joined_r0x000104dd34cc:
        if (lVar20 != 0) {
          _free(*(undefined8 *)(param_1 + 0x50));
        }
        *(byte **)(param_1 + 0x48) = unaff_x23;
        *(long *)(param_1 + 0x50) = unaff_x24;
        *(byte **)(param_1 + 0x58) = unaff_x23;
        unaff_x25 = param_2[0xb];
        unaff_x23 = (byte *)param_2[0xc];
        goto joined_r0x000104dd3310;
      }
      unaff_x24 = _malloc(unaff_x23);
      if (unaff_x24 != 0) {
        _memcpy(unaff_x24,unaff_x25,unaff_x23);
        lVar20 = *(long *)(param_1 + 0x48);
        goto joined_r0x000104dd34cc;
      }
LAB_104dd3974:
      func_0x0001087c9084(1,unaff_x23);
      goto LAB_104dd3980;
    }
    iVar2 = (int)param_2[1];
    if (iVar2 == 0x15) {
      auVar33 = *(undefined1 (*) [16])(param_2 + 5);
      goto SUB_104dea428;
    }
    if (iVar2 != 0x10) {
      if ((iVar2 == 0xe) && (param_2[2] != 2)) {
        *(ulong *)(param_1 + 0x1a8) = param_2[8] & (param_2[8] >> 0x3f ^ 0xffffffffffffffffU);
      }
      goto LAB_104dd38f4;
    }
    unaff_x23 = *(byte **)*(undefined1 (*) [16])(param_2 + 3);
    unaff_x24 = param_2[4];
    auVar33 = *(undefined1 (*) [16])(param_2 + 3);
    uVar32 = 0x104dd33dc;
  }
  puVar15 = auVar33._8_8_;
  lVar20 = auVar33._0_8_;
  plStack_d0 = param_2;
  uStack_c8 = param_3;
  pbStack_c0 = param_1;
  lStack_b8 = param_4;
  puStack_b0 = &stack0xfffffffffffffff0;
  uStack_a8 = uVar32;
  __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
            (aiStack_138,lVar20,puVar15,&UNK_108ed2d47,0x18);
  auVar35._8_8_ = puStack_e8;
  auVar35._0_8_ = lStack_f0;
  if (aiStack_138[0] == 1) {
    puVar26 = puStack_d8 + -1;
    if (puStack_100 == (undefined *)0xffffffffffffffff) {
      puVar18 = puStack_110 + (long)puVar26;
      if (puVar18 < puStack_e8) {
        puVar23 = puStack_130;
        if (puStack_130 <= puStack_d8) {
          puVar23 = puStack_d8;
        }
        puVar12 = puStack_130 + -1;
        puVar17 = puStack_110;
        if (puVar12 < puStack_d8) {
LAB_104dd3b78:
          if ((uStack_118 >> ((ulong)(byte)puVar18[lStack_f0] & 0x3f) & 1) == 0) {
            puVar17 = puVar17 + (long)puStack_d8;
          }
          else {
            lVar30 = -(long)puVar17;
            puVar18 = puStack_130 + (long)puVar17;
            lVar22 = (long)puVar23 - (long)puStack_130;
            pcVar19 = puStack_130 + lStack_e0;
            do {
              if (lVar22 == 0) {
                puVar18 = puStack_130;
                goto LAB_104dd3bcc;
              }
              if (puStack_e8 <= puVar18) goto LAB_104dd3e14;
              cVar4 = *pcVar19;
              pcVar1 = puVar18 + lStack_f0;
              lVar30 = lVar30 + -1;
              puVar18 = puVar18 + 1;
              lVar22 = lVar22 + -1;
              pcVar19 = pcVar19 + 1;
            } while (cVar4 == *pcVar1);
            puVar17 = (undefined *)-lVar30;
          }
          goto LAB_104dd3b6c;
        }
        do {
          while (lVar22 = lStack_e0, puVar29 = puVar17, puVar31 = puVar23,
                (uStack_118 >> ((ulong)(byte)puVar18[lStack_f0] & 0x3f) & 1) != 0) {
            do {
              if (puStack_130 == puVar31) {
                if (puStack_130 != (undefined *)0x0) goto LAB_104dd3cfc;
                goto LAB_104dd3d8c;
              }
              if (puStack_e8 <= puStack_130 + (long)puVar29) goto LAB_104dd3e14;
              pcVar19 = puStack_130 + lVar22;
              pcVar1 = puStack_130 + lStack_f0 + (long)puVar29;
              puVar29 = puVar29 + 1;
              lVar22 = lVar22 + 1;
              puVar31 = puVar31 + -1;
            } while (*pcVar19 == *pcVar1);
            puVar18 = puVar29 + (long)puVar26;
            puVar17 = puVar29;
            if (puStack_e8 <= puVar18) goto SUB_104dea428;
          }
          puVar17 = puVar17 + (long)puStack_d8;
          puVar18 = puVar17 + (long)puVar26;
        } while (puVar18 < puStack_e8);
      }
    }
    else {
      puVar18 = puStack_110 + (long)puVar26;
      if (puVar18 < puStack_e8) {
        lVar22 = CONCAT53(uStack_11d,CONCAT12(bStack_11e,CONCAT11(uStack_11f,bStack_120)));
LAB_104dd3a90:
        if ((uStack_118 >> ((ulong)(byte)puVar18[lStack_f0] & 0x3f) & 1) == 0) {
          puStack_100 = (undefined *)0x0;
          puStack_110 = puStack_110 + (long)puStack_d8;
        }
        else {
          puVar18 = puStack_100;
          if (puStack_100 <= puStack_130) {
            puVar18 = puStack_130;
          }
          puVar17 = puStack_110 + (long)puVar18;
          puVar23 = puVar17 + -(long)puStack_130;
          pbVar10 = puVar18 + lStack_e0;
          lVar30 = 0;
          if (puVar18 <= puStack_d8) {
            lVar30 = (long)puStack_d8 - (long)puVar18;
          }
          do {
            puVar12 = puStack_130;
            if (lVar30 == 0) goto LAB_104dd3aec;
            if (puStack_e8 <= puVar17) {
              puVar15 = puStack_e8;
              if (puStack_e8 <= puVar18 + (long)puStack_110) {
                puVar15 = puVar18 + (long)puStack_110;
              }
              func_0x000108a07bdc(puVar15,puStack_e8,&UNK_10b35d100);
              puVar18 = extraout_x9;
              goto LAB_104dd3e04;
            }
            bVar3 = *pbVar10;
            pbVar24 = puVar17 + lStack_f0;
            param_3 = (ulong)*pbVar24;
            puVar23 = puVar23 + 1;
            puVar17 = puVar17 + 1;
            pbVar10 = pbVar10 + 1;
            lVar30 = lVar30 + -1;
          } while (bVar3 == *pbVar24);
          puStack_110 = puVar23;
          puStack_100 = (undefined *)0x0;
        }
        goto LAB_104dd3a80;
      }
    }
    goto SUB_104dea428;
  }
  if ((bStack_11e & 1) != 0) goto SUB_104dea428;
  if (puStack_130 != (undefined *)0x0) {
    if (puStack_130 < puStack_e8) {
      uVar9 = puStack_130[lStack_f0] == -0x40;
      if (-0x41 < (char)puStack_130[lStack_f0]) goto LAB_104dd3c04;
    }
    else {
      uVar9 = 0;
      if (puStack_130 == puStack_e8) goto LAB_104dd3c04;
    }
    goto LAB_104dd3d58;
  }
LAB_104dd3c04:
  puVar17 = puStack_130;
  if (puStack_130 == puStack_e8) {
    if ((bStack_120 & 1) == 0) goto SUB_104dea428;
  }
  else {
    pbVar10 = puStack_130 + lStack_f0;
    uVar28 = (uint)*pbVar10;
    if ((char)*pbVar10 < '\0') {
      if (uVar28 < 0xe0) {
        uVar28 = pbVar10[1] & 0x3f | (uVar28 & 0x1f) << 6;
      }
      else {
        uVar7 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (uVar28 < 0xf0) {
          uVar28 = uVar7 | (uVar28 & 0x1f) << 0xc;
        }
        else {
          uVar28 = pbVar10[3] & 0x3f | uVar7 << 6 | (uVar28 & 7) << 0x12;
        }
      }
    }
    if ((bStack_120 & 1) == 0) {
      if (0x7f < uVar28) goto LAB_104dd3d0c;
      lVar22 = 1;
      goto LAB_104dd3d38;
    }
  }
  goto LAB_104dd3d8c;
  while( true ) {
    auVar34._8_8_ = puStack_e8;
    auVar34._0_8_ = puVar17 + (long)puVar18 + -1;
    if (puStack_e8 <= puVar17 + (long)puVar18 + -1) goto LAB_104dd3e2c;
    pcVar19 = puVar18 + lStack_e0 + -1;
    puVar12 = puVar17 + lStack_f0 + (long)puVar18;
    puVar18 = puVar18 + -1;
    if (*pcVar19 != puVar12[-1]) break;
LAB_104dd3bcc:
    if (puVar18 == (undefined *)0x0) goto LAB_104dd3d8c;
  }
  puVar17 = puVar17 + CONCAT53(uStack_11d,CONCAT12(bStack_11e,CONCAT11(uStack_11f,bStack_120)));
LAB_104dd3b6c:
  puVar18 = puVar17 + (long)puVar26;
  if (puStack_e8 <= puVar18) goto SUB_104dea428;
  goto LAB_104dd3b78;
LAB_104dd3aec:
  do {
    puVar17 = puStack_110;
    if (puVar12 <= puStack_100) goto LAB_104dd3d8c;
    puVar12 = puVar12 + -1;
    if (puStack_d8 <= puVar12) goto LAB_104dd3cfc;
    puVar18 = puVar12 + (long)puStack_110;
    if (puStack_e8 <= puVar18) {
LAB_104dd3e04:
      puVar17 = &UNK_10b35d0e8;
      func_0x000108a07bdc(puVar18);
      puStack_e8 = extraout_x1;
      puStack_130 = extraout_x9_00;
LAB_104dd3e14:
      puVar15 = puStack_e8;
      if (puStack_e8 <= puVar17 + (long)puStack_130) {
        puVar15 = puVar17 + (long)puStack_130;
      }
      auVar34 = func_0x000108a07bdc(puVar15,puStack_e8,&UNK_10b35d100);
LAB_104dd3e2c:
      auVar35 = func_0x000108a07bdc(auVar34._0_8_,auVar34._8_8_,&UNK_10b35d0e8);
      uVar16 = auVar35._8_8_;
      uVar32 = auVar35._0_8_;
      uStack_148 = 0x104dd3e38;
      lStack_180 = unaff_x24;
      pbStack_178 = unaff_x23;
      plStack_170 = param_2;
      uStack_168 = param_3;
      ppuStack_150 = &puStack_b0;
      auStack_160 = auVar33;
      puVar13 = (undefined8 *)_malloc(0x78);
      if (puVar13 != (undefined8 *)0x0) {
        uStack_1c0 = 3;
        puStack_1b8 = puVar13;
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE(&uStack_1a8,uVar32,uVar16,&UNK_108ed2e30,0xe);
        puStack_190 = &UNK_108ed2e28;
        puVar13[4] = 8;
        puVar13[1] = uStack_1a0;
        *puVar13 = uStack_1a8;
        puVar13[3] = &UNK_108ed2e28;
        puVar13[2] = uStack_198;
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE(&uStack_1a8,uVar32,uVar16,&UNK_108ed2e05,0xd);
        puStack_190 = &UNK_108ed2dff;
        puVar13[6] = uStack_1a0;
        puVar13[5] = uStack_1a8;
        puVar13[9] = 6;
        puVar13[8] = &UNK_108ed2dff;
        puVar13[7] = uStack_198;
        pbVar10 = (byte *)__ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                                    (&uStack_1a8,uVar32,uVar16,&UNK_108ed2e1a,0xe);
        puVar13[0xe] = 8;
        puVar13[0xb] = uStack_1a0;
        puVar13[10] = uStack_1a8;
        puVar13[0xd] = &UNK_108ed2e12;
        puVar13[0xc] = uStack_198;
        extraout_x8_00[1] = puStack_1b8;
        *extraout_x8_00 = uStack_1c0;
        extraout_x8_00[2] = 3;
        return pbVar10;
      }
      uVar32 = func_0x0001087c9084(8,0x78);
      pbStack_1b0 = unaff_x23;
      FUN_104de9060(&uStack_1c0);
      auVar33 = __Unwind_Resume(uVar32);
      lVar20 = auVar33._8_8_;
      __ZN11sqlx_sqlite7options20SqliteConnectOptions3new17hc5b7d6e5d8ed5796E(auStack_390);
      if (lVar20 == 0) {
        lVar22 = 1;
      }
      else {
        lVar22 = _malloc(lVar20);
        if (lVar22 == 0) {
          func_0x0001087c9084(1,lVar20);
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x104dd3fd4);
          (*pcVar8)();
        }
      }
      _memcpy(lVar22,auVar33._0_8_,lVar20);
      if ((uStack_2c8 & 0x7fffffffffffffff) != 0) {
        _free(lStack_2c0);
      }
      uStack_2c8 = lVar20;
      lStack_2c0 = lVar22;
      lStack_2b8 = lVar20;
      _memcpy(auStack_4d0,auStack_390,0x140);
      uStack_396 = 1;
      puStack_230 = &UNK_109ba459c;
      uStack_228 = 0xc;
      uStack_238 = 0x8000000000000000;
      uStack_220 = 0x8000000000000000;
      puStack_218 = &UNK_109ba4599;
      uStack_210 = 3;
      FUN_105e1d3f8(auStack_390,auStack_4b0,&uStack_238,&uStack_220);
      if ((-0x7ffffffffffffffe < lStack_388) && (lStack_388 != 0)) {
        _free(uStack_380);
      }
      _memcpy(auStack_390,auStack_4d0,0x140);
      puStack_248 = &UNK_109ba457d;
      uStack_240 = 0xb;
      uStack_250 = 0x8000000000000000;
      uStack_238 = 0x8000000000000000;
      puStack_230 = &UNK_109ba4572;
      uStack_228 = 6;
      FUN_105e1d3f8(&uStack_220,auStack_370,&uStack_250,&uStack_238);
      if ((-0x7ffffffffffffffe < (long)puStack_218) && (puStack_218 != (undefined *)0x0)) {
        _free(uStack_210);
      }
      pbVar10 = (byte *)_memcpy(extraout_x8_01,auStack_390,0x140);
      extraout_x8_01[0x20] = 5;
      *(undefined4 *)(extraout_x8_01 + 0x21) = 0;
      *extraout_x8_01 = 0;
      return pbVar10;
    }
  } while (puVar12[lStack_e0] == puVar18[lStack_f0]);
  puStack_110 = puStack_110 + lVar22;
  puStack_100 = puStack_d8 + -lVar22;
LAB_104dd3a80:
  puVar18 = puStack_110 + (long)puVar26;
  if (puStack_e8 <= puVar18) goto SUB_104dea428;
  goto LAB_104dd3a90;
LAB_104dd3cfc:
  puVar26 = &UNK_10b35d0d0;
  auVar35 = func_0x000108a07bdc(puVar12,puStack_d8);
  puStack_130 = puVar26;
  uVar28 = extraout_w9;
LAB_104dd3d0c:
  if (uVar28 < 0x800) {
    lVar22 = 2;
  }
  else {
    lVar22 = 3;
    if (0xffff < uVar28) {
      lVar22 = 4;
    }
  }
LAB_104dd3d38:
  puStack_130 = puStack_130 + lVar22;
  if (puStack_130 != (undefined *)0x0) {
    uVar9 = puStack_130 == auVar35._8_8_;
    if (auVar35._8_8_ <= puStack_130) goto LAB_104dd3d68;
    uVar9 = puStack_130[auVar35._0_8_] == -0x40;
    if ((char)puStack_130[auVar35._0_8_] < -0x40) {
LAB_104dd3d58:
      do {
        auVar35 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                            (auVar35._0_8_,auVar35._8_8_,puStack_130,auVar35._8_8_,&UNK_10b35e090);
        puStack_130 = extraout_x8;
LAB_104dd3d68:
      } while (!(bool)uVar9);
    }
  }
  puVar17 = auVar35._8_8_;
  if (puStack_130 != auVar35._8_8_) {
    puVar17 = puStack_130;
  }
LAB_104dd3d8c:
  puVar17 = puVar17 + 0x18;
  if (puVar17 != (undefined *)0x0) {
    uVar9 = puVar15 == puVar17;
    if (puVar15 <= puVar17) goto LAB_104dd3dc0;
    uVar9 = puVar17[lVar20] == -0x41;
    if ((char)puVar17[lVar20] < -0x40) {
      do {
        __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar20,puVar15);
LAB_104dd3dc0:
      } while (!(bool)uVar9);
    }
  }
  auVar33._8_8_ = (long)puVar15 - (long)puVar17;
  auVar33._0_8_ = puVar17 + lVar20;
SUB_104dea428:
  pbVar14 = auVar33._0_8_;
  pbVar10 = pbVar14 + auVar33._8_8_;
  pbVar27 = (byte *)0x0;
  pbVar24 = pbVar14;
  if (auVar33._8_8_ != 0) {
    do {
      pbVar25 = pbVar24 + 1;
      uVar28 = (uint)*pbVar24;
      uVar21 = (ulong)uVar28;
      if ((char)*pbVar24 < '\0') {
        if (uVar28 < 0xe0) {
          pbVar25 = pbVar24 + 2;
          uVar21 = (ulong)(pbVar24[1] & 0x3f | (uVar28 & 0x1f) << 6);
        }
        else {
          uVar7 = pbVar24[2] & 0x3f | (pbVar24[1] & 0x3f) << 6;
          if (uVar28 < 0xf0) {
            pbVar25 = pbVar24 + 3;
            uVar21 = (ulong)(uVar7 | (uVar28 & 0x1f) << 0xc);
          }
          else {
            pbVar25 = pbVar24 + 4;
            uVar21 = (ulong)(pbVar24[3] & 0x3f | uVar7 << 6 | (uVar28 & 7) << 0x12);
          }
        }
      }
      lVar20 = (long)pbVar27 - (long)pbVar24;
      uVar28 = (uint)uVar21;
      if ((4 < uVar28 - 9) && (uVar28 != 0x20)) {
        if (uVar28 < 0x80) goto joined_r0x000104dea560;
        uVar7 = uVar28 >> 8;
        if (uVar7 < 0x20) {
          if (uVar7 == 0) {
            bVar3 = (&
                    __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                    )[uVar21 & 0xff];
joined_r0x000104dea538:
            if ((bVar3 & 1) == 0) goto joined_r0x000104dea560;
          }
          else if ((uVar7 != 0x16) || (uVar28 != 0x1680)) goto joined_r0x000104dea560;
        }
        else {
          if (uVar7 == 0x20) {
            bVar3 = (byte)(&
                          __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                          )[uVar21 & 0xff] >> 1;
            goto joined_r0x000104dea538;
          }
          if ((uVar7 != 0x30) || (uVar28 != 0x3000)) goto joined_r0x000104dea560;
        }
      }
      pbVar24 = pbVar25;
      pbVar27 = pbVar25 + lVar20;
    } while (pbVar25 != pbVar10);
    pbVar27 = (byte *)0x0;
LAB_104dea548:
    return pbVar14 + (long)pbVar27;
  }
  pbVar27 = (byte *)0x0;
  pbVar25 = pbVar14;
joined_r0x000104dea560:
  do {
    do {
      if (pbVar25 == pbVar10) goto LAB_104dea548;
      pbVar24 = pbVar10 + -1;
      bVar3 = *pbVar24;
      uVar21 = (ulong)(char)bVar3;
      if ((char)bVar3 < 0) {
        pbVar24 = pbVar10 + -2;
        bVar5 = *pbVar24;
        if ((char)bVar5 < -0x40) {
          pbVar24 = pbVar10 + -3;
          bVar6 = *pbVar24;
          if ((char)bVar6 < -0x40) {
            pbVar24 = pbVar10 + -4;
            uVar28 = bVar6 & 0x3f | (*pbVar24 & 7) << 6;
          }
          else {
            uVar28 = (int)(char)bVar6 & 0xf;
          }
          uVar28 = bVar5 & 0x3f | uVar28 << 6;
        }
        else {
          uVar28 = (int)(char)bVar5 & 0x1f;
        }
        uVar21 = (ulong)((int)(char)bVar3 & 0x3fU | uVar28 << 6);
      }
      uVar28 = (uint)uVar21;
      pbVar10 = pbVar24;
    } while ((uVar28 - 9 < 5) || (uVar28 == 0x20));
    if (uVar28 < 0x80) goto LAB_104dea658;
    uVar7 = uVar28 >> 8;
    if (0x1f < uVar7) {
      if (uVar7 == 0x20) {
        bVar3 = (byte)(&
                      __ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E
                      )[uVar21 & 0xff] >> 1;
joined_r0x000104dea654:
        if ((bVar3 & 1) == 0) {
LAB_104dea658:
          return pbVar14 + (long)pbVar27;
        }
      }
      else if ((uVar7 != 0x30) || (uVar28 != 0x3000)) goto LAB_104dea658;
      goto joined_r0x000104dea560;
    }
    if (uVar7 == 0) {
      bVar3 = (&__ZN4core7unicode12unicode_data11white_space14WHITESPACE_MAP17h395e3fa068a5bcc2E)
              [uVar21 & 0xff];
      goto joined_r0x000104dea654;
    }
    if ((uVar7 != 0x16) || (uVar28 != 0x1680)) goto LAB_104dea658;
  } while( true );
}

