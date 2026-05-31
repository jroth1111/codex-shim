
/* WARNING: Possible PIC construction at 0x000100a4eb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a4eda8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a4eb64) */
/* WARNING: Removing unreachable block (ram,0x000100a4eb7c) */
/* WARNING: Removing unreachable block (ram,0x000100a4eb70) */
/* WARNING: Removing unreachable block (ram,0x000100a4edac) */
/* WARNING: Removing unreachable block (ram,0x000100a4edc4) */
/* WARNING: Removing unreachable block (ram,0x000100a4edb8) */
/* WARNING: Removing unreachable block (ram,0x000100a4f4a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4e90c(undefined8 *param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint3 *puVar5;
  short *psVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  code *pcVar15;
  undefined1 *puVar16;
  bool bVar17;
  int iVar18;
  long lVar20;
  long *plVar21;
  int *piVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined1 extraout_w8;
  undefined1 uVar26;
  byte bVar27;
  uint extraout_w8_00;
  undefined8 uVar28;
  long *plVar29;
  ulong uVar30;
  undefined1 *puVar31;
  long *extraout_x10;
  long *extraout_x10_00;
  long *plVar32;
  long lVar33;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x12;
  long *plVar34;
  uint uVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  char *unaff_x23;
  byte *pbVar38;
  undefined2 uVar39;
  ulong unaff_x24;
  ulong uVar40;
  long lVar41;
  long *unaff_x25;
  ulong uVar42;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  ulong uVar43;
  undefined8 unaff_x28;
  undefined8 *****pppppuVar44;
  undefined8 uVar45;
  long in_xzr;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uStack_19b0;
  long lStack_19a8;
  long *plStack_19a0;
  long alStack_1998 [199];
  undefined1 auStack_1360 [1552];
  long lStack_d50;
  long lStack_d48;
  long lStack_d40;
  long lStack_d38;
  undefined8 ****ppppuStack_d00;
  code *pcStack_cf8;
  undefined8 uStack_cf0;
  long alStack_ce8 [199];
  undefined1 auStack_6b0 [1552];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 ***pppuStack_50;
  undefined8 uStack_48;
  char *pcVar19;
  
  if (*(long *)(param_2 + 0x80) == 0) {
    uVar28 = 1;
    goto LAB_100a4e9d8;
  }
  auVar51 = __ZN4http3uri9authority4host17h55fa409134a3a823E(*(undefined8 *)(param_2 + 0x78));
  lVar33 = auVar51._8_8_;
  pcVar19 = auVar51._0_8_;
  if (lVar33 == 0) {
LAB_100a4e9b8:
    auVar51._8_8_ = lVar33;
    auVar51._0_8_ = pcVar19;
    lVar20 = 1;
LAB_100a4e9c4:
    uVar45 = auVar51._8_8_;
    _memcpy(lVar20,auVar51._0_8_,uVar45);
    param_1[1] = uVar45;
    param_1[2] = lVar20;
    uVar28 = 0x15;
    param_1[3] = uVar45;
LAB_100a4e9d8:
    *param_1 = uVar28;
    return;
  }
  if ((*pcVar19 != '[') || (pcVar19[lVar33 + -1] != ']')) {
    lVar20 = _malloc(lVar33);
joined_r0x000100a4e9a8:
    if (lVar20 == 0) {
      func_0x0001087c9084(1,lVar33);
      goto LAB_100a4e9b8;
    }
    goto LAB_100a4e9c4;
  }
  if ((lVar33 + -1 != 0) && (unaff_x23 = pcVar19 + 1, -0x41 < *unaff_x23)) {
    lVar33 = lVar33 + -2;
    auVar51._8_8_ = lVar33;
    auVar51._0_8_ = unaff_x23;
    auVar10._8_8_ = lVar33;
    auVar10._0_8_ = unaff_x23;
    if (lVar33 != 0) {
      lVar20 = _malloc(lVar33);
      auVar51 = auVar10;
      goto joined_r0x000100a4e9a8;
    }
    lVar20 = 1;
    goto LAB_100a4e9c4;
  }
  uVar28 = 1;
  auVar52 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                      (pcVar19,lVar33,1,lVar33 + -1,&UNK_10b22b318);
  plVar21 = auVar52._8_8_;
  puVar23 = auVar52._0_8_;
  uStack_48 = 0x100a4ea18;
  uStack_cf0 = 0;
  plVar29 = &lStack_a0;
  plVar34 = plVar21 + 0x400;
  bVar27 = *(byte *)((long)plVar21 + 0x2931);
  pppuStack_50 = (undefined8 ***)&stack0xfffffffffffffff0;
  if (bVar27 < 2) {
    if (bVar27 == 0) {
      plVar32 = plVar21 + 1;
      lVar33 = *plVar21;
      if (lVar33 == 3) {
        lStack_98 = plVar21[2];
        lStack_a0 = *plVar32;
        lStack_88 = plVar21[4];
        lStack_90 = plVar21[3];
        plVar21[0x27] = lStack_98;
        plVar21[0x26] = lStack_a0;
        plVar21[0x29] = lStack_88;
        plVar21[0x28] = lStack_90;
        plVar21[0x25] = 3;
        *puVar23 = 2;
        puVar23[2] = lStack_98;
        puVar23[1] = lStack_a0;
        puVar23[4] = lStack_88;
        puVar23[3] = lStack_90;
        _memcpy(puVar23 + 5,auStack_6b0,0x610);
        *(undefined1 *)((long)plVar21 + 0x2931) = 1;
        return;
      }
LAB_100a4ea94:
      plVar21[0x25] = lVar33;
      lVar33 = *plVar32;
      lVar41 = plVar32[3];
      lVar20 = plVar32[2];
      plVar21[0x27] = plVar32[1];
      plVar21[0x26] = lVar33;
      plVar21[0x29] = lVar41;
      plVar21[0x28] = lVar20;
      plVar21[0x2f] = plVar21[10];
      plVar21[0x2e] = plVar21[9];
      plVar21[0x31] = plVar21[0xc];
      plVar21[0x30] = plVar21[0xb];
      plVar21[0x2b] = plVar21[6];
      plVar21[0x2a] = plVar21[5];
      plVar21[0x2d] = plVar21[8];
      plVar21[0x2c] = plVar21[7];
      plVar21[0x37] = plVar21[0x12];
      plVar21[0x36] = plVar21[0x11];
      plVar21[0x39] = plVar21[0x14];
      plVar21[0x38] = plVar21[0x13];
      plVar21[0x33] = plVar21[0xe];
      plVar21[0x32] = plVar21[0xd];
      plVar21[0x35] = plVar21[0x10];
      plVar21[0x34] = plVar21[0xf];
      plVar21[0x3d] = plVar21[0x18];
      plVar21[0x3c] = plVar21[0x17];
      plVar21[0x3f] = plVar21[0x1a];
      plVar21[0x3e] = plVar21[0x19];
      plVar21[0x3b] = plVar21[0x16];
      plVar21[0x3a] = plVar21[0x15];
      plVar21[0x40] = plVar21[0x1b];
      plVar21[0x41] = 0;
      plVar21[0x58] = plVar21[0x3a];
      plVar21[0x57] = plVar21[0x39];
      plVar21[0x5a] = plVar21[0x3c];
      plVar21[0x59] = plVar21[0x3b];
      plVar21[0x5c] = plVar21[0x3e];
      plVar21[0x5b] = plVar21[0x3d];
      plVar21[0x5e] = plVar21[0x40];
      plVar21[0x5d] = plVar21[0x3f];
      plVar21[0x50] = plVar21[0x32];
      plVar21[0x4f] = plVar21[0x31];
      plVar21[0x52] = plVar21[0x34];
      plVar21[0x51] = plVar21[0x33];
      plVar21[0x54] = plVar21[0x36];
      plVar21[0x53] = plVar21[0x35];
      plVar21[0x56] = plVar21[0x38];
      plVar21[0x55] = plVar21[0x37];
      plVar21[0x48] = plVar21[0x2a];
      plVar21[0x47] = plVar21[0x29];
      plVar21[0x4a] = plVar21[0x2c];
      plVar21[0x49] = plVar21[0x2b];
      plVar21[0x4c] = plVar21[0x2e];
      plVar21[0x4b] = plVar21[0x2d];
      plVar21[0x4e] = plVar21[0x30];
      plVar21[0x4d] = plVar21[0x2f];
      plVar21[0x44] = plVar21[0x26];
      plVar21[0x43] = plVar21[0x25];
      plVar21[0x46] = plVar21[0x28];
      plVar21[0x45] = plVar21[0x27];
      plVar21[100] = plVar21[0x21];
      plVar21[99] = plVar21[0x20];
      plVar21[0x66] = plVar21[0x23];
      plVar21[0x65] = plVar21[0x22];
      plVar21[0x67] = plVar21[0x24];
      plVar21[0x60] = plVar21[0x1d];
      plVar21[0x5f] = plVar21[0x1c];
      plVar21[0x62] = plVar21[0x1f];
      plVar21[0x61] = plVar21[0x1e];
      *(char *)(plVar21 + 0x94) = (char)plVar21[0x526];
      *(undefined1 *)((long)plVar21 + 0x4a1) = 0;
      goto LAB_100a4eb58;
    }
    func_0x000108a07af4(&UNK_10b22b360);
    *(undefined1 *)((long)plVar21 + 0x2931) = 2;
    uVar45 = __Unwind_Resume();
    FUN_100e577e4(plVar21 + 0x41);
    *(undefined1 *)((long)plVar21 + 0x2931) = 2;
    __Unwind_Resume(uVar45);
    auVar52 = func_0x000108a07bc4();
    plVar21 = auVar52._8_8_;
    puVar25 = auVar52._0_8_;
    pcStack_cf8 = FUN_100a4ec18;
    pppppuVar44 = &ppppuStack_d00;
    puVar23 = &uStack_19b0;
    uStack_19b0 = 0;
    plVar29 = &lStack_d50;
    plVar34 = plVar21 + 0x400;
    bVar27 = *(byte *)((long)plVar21 + 0x2941);
    ppppuStack_d00 = &pppuStack_50;
    if (bVar27 < 2) {
      if (bVar27 == 0) {
        plVar32 = (long *)plVar21[1];
        lVar33 = plVar21[2];
        uVar26 = (undefined1)plVar21[0x528];
        *(undefined1 *)((long)plVar21 + 0x2942) = 1;
        lVar20 = *plVar21;
        lStack_19a8 = lVar20;
        plStack_19a0 = plVar32;
        if (lVar33 == 3) {
          lStack_d48 = plVar21[4];
          lStack_d50 = plVar21[3];
          lStack_d38 = plVar21[6];
          lStack_d40 = plVar21[5];
          plVar21[0x29] = lStack_d48;
          plVar21[0x28] = lStack_d50;
          plVar21[0x2b] = lStack_d38;
          plVar21[0x2a] = lStack_d40;
          plVar21[0x27] = 3;
          if ((lVar20 != 0) && (plVar32 != (long *)0x0)) {
            lVar33 = *plVar32;
            *plVar32 = lVar33 + -1;
            LORelease();
            if (lVar33 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4e229937a5e8886E(&plStack_19a0);
            }
          }
          *(undefined1 *)((long)plVar21 + 0x2942) = 0;
          *puVar25 = 2;
          puVar25[2] = lStack_d48;
          puVar25[1] = lStack_d50;
          puVar25[4] = lStack_d38;
          puVar25[3] = lStack_d40;
          _memcpy(puVar25 + 5,auStack_1360,0x610);
          *(undefined1 *)((long)plVar21 + 0x2941) = 1;
          return;
        }
LAB_100a4ecd4:
        plVar21[0x27] = lVar33;
        plVar21[0x29] = plVar21[4];
        plVar21[0x28] = plVar21[3];
        plVar21[0x2b] = plVar21[6];
        plVar21[0x2a] = plVar21[5];
        plVar21[0x31] = plVar21[0xc];
        plVar21[0x30] = plVar21[0xb];
        plVar21[0x33] = plVar21[0xe];
        plVar21[0x32] = plVar21[0xd];
        plVar21[0x2d] = plVar21[8];
        plVar21[0x2c] = plVar21[7];
        plVar21[0x2f] = plVar21[10];
        plVar21[0x2e] = plVar21[9];
        plVar21[0x39] = plVar21[0x14];
        plVar21[0x38] = plVar21[0x13];
        plVar21[0x3b] = plVar21[0x16];
        plVar21[0x3a] = plVar21[0x15];
        plVar21[0x35] = plVar21[0x10];
        plVar21[0x34] = plVar21[0xf];
        plVar21[0x37] = plVar21[0x12];
        plVar21[0x36] = plVar21[0x11];
        plVar21[0x3f] = plVar21[0x1a];
        plVar21[0x3e] = plVar21[0x19];
        plVar21[0x41] = plVar21[0x1c];
        plVar21[0x40] = plVar21[0x1b];
        plVar21[0x3d] = plVar21[0x18];
        plVar21[0x3c] = plVar21[0x17];
        plVar21[0x42] = plVar21[0x1d];
        *(undefined1 *)((long)plVar21 + 0x2942) = 0;
        plVar21[0x43] = lVar20;
        plVar21[0x44] = (long)plVar32;
        plVar21[0x5a] = plVar21[0x3c];
        plVar21[0x59] = plVar21[0x3b];
        plVar21[0x5c] = plVar21[0x3e];
        plVar21[0x5b] = plVar21[0x3d];
        plVar21[0x5e] = plVar21[0x40];
        plVar21[0x5d] = plVar21[0x3f];
        plVar21[0x60] = plVar21[0x42];
        plVar21[0x5f] = plVar21[0x41];
        plVar21[0x52] = plVar21[0x34];
        plVar21[0x51] = plVar21[0x33];
        plVar21[0x54] = plVar21[0x36];
        plVar21[0x53] = plVar21[0x35];
        plVar21[0x56] = plVar21[0x38];
        plVar21[0x55] = plVar21[0x37];
        plVar21[0x58] = plVar21[0x3a];
        plVar21[0x57] = plVar21[0x39];
        plVar21[0x4a] = plVar21[0x2c];
        plVar21[0x49] = plVar21[0x2b];
        plVar21[0x4c] = plVar21[0x2e];
        plVar21[0x4b] = plVar21[0x2d];
        plVar21[0x4e] = plVar21[0x30];
        plVar21[0x4d] = plVar21[0x2f];
        plVar21[0x50] = plVar21[0x32];
        plVar21[0x4f] = plVar21[0x31];
        plVar21[0x46] = plVar21[0x28];
        plVar21[0x45] = plVar21[0x27];
        plVar21[0x48] = plVar21[0x2a];
        plVar21[0x47] = plVar21[0x29];
        plVar21[0x66] = plVar21[0x23];
        plVar21[0x65] = plVar21[0x22];
        plVar21[0x68] = plVar21[0x25];
        plVar21[0x67] = plVar21[0x24];
        plVar21[0x69] = plVar21[0x26];
        plVar21[0x62] = plVar21[0x1f];
        plVar21[0x61] = plVar21[0x1e];
        plVar21[100] = plVar21[0x21];
        plVar21[99] = plVar21[0x20];
        *(undefined1 *)(plVar21 + 0x96) = uVar26;
        *(undefined1 *)((long)plVar21 + 0x4b1) = 0;
        goto LAB_100a4eda0;
      }
      func_0x000108a07af4(&UNK_10b22b378);
      *(undefined1 *)((long)plVar21 + 0x2942) = 0;
      *(undefined1 *)((long)plVar21 + 0x2941) = 2;
      uVar45 = __Unwind_Resume();
      auVar52._8_8_ = plVar21;
      auVar52._0_8_ = uVar45;
      if ((*(byte *)((long)plVar21 + 0x2942) & 1) != 0) {
        FUN_100e4dbc8(&lStack_19a8);
      }
      *(undefined1 *)((long)plVar21 + 0x2942) = 0;
      *(undefined1 *)((long)plVar21 + 0x2941) = 2;
      __Unwind_Resume(uVar45);
      uVar45 = 0x100a4ee84;
      auVar53 = func_0x000108a07bc4();
    }
    else {
      if (bVar27 != 3) {
        func_0x000108a07b10(&UNK_10b22b378);
        plVar32 = extraout_x10_00;
        lVar20 = extraout_x11_00;
        lVar33 = extraout_x12;
        uVar26 = extraout_w8;
        goto LAB_100a4ecd4;
      }
LAB_100a4eda0:
      auVar53._8_8_ = plVar21 + 0x43;
      auVar53._0_8_ = alStack_1998;
      uVar45 = 0x100a4edac;
      puVar23 = &uStack_19b0;
    }
  }
  else {
    if (bVar27 != 3) {
      func_0x000108a07b10(&UNK_10b22b360);
      plVar32 = extraout_x10;
      lVar33 = extraout_x11;
      goto LAB_100a4ea94;
    }
LAB_100a4eb58:
    auVar53._8_8_ = plVar21 + 0x41;
    auVar53._0_8_ = alStack_ce8;
    uVar45 = 0x100a4eb64;
    puVar23 = &uStack_cf0;
    pppppuVar44 = (undefined8 *****)&pppuStack_50;
  }
  puVar25 = auVar53._8_8_;
  plVar21 = auVar53._0_8_;
  *(undefined8 *)((long)puVar23 + -0x60) = unaff_x28;
  *(ulong *)((long)puVar23 + -0x58) = unaff_x27;
  *(undefined8 **)((long)puVar23 + -0x50) = unaff_x26;
  *(long **)((long)puVar23 + -0x48) = unaff_x25;
  *(ulong *)((long)puVar23 + -0x40) = unaff_x24;
  *(char **)((long)puVar23 + -0x38) = unaff_x23;
  *(long **)((long)puVar23 + -0x30) = plVar29;
  *(long **)((long)puVar23 + -0x28) = plVar34;
  *(long *)((long)puVar23 + -0x20) = auVar52._8_8_;
  *(long *)((long)puVar23 + -0x18) = auVar52._0_8_;
  *(undefined8 ******)((long)puVar23 + -0x10) = pppppuVar44;
  *(undefined8 *)((long)puVar23 + -8) = uVar45;
  puVar31 = (undefined1 *)((long)puVar23 + -0x60);
  do {
    puVar16 = puVar31;
    *(undefined8 *)(puVar16 + -0x1000) = 0;
    puVar31 = puVar16 + -0x1000;
  } while (puVar16 + -0x1000 != (undefined1 *)((long)puVar23 + -0x7060));
  *(undefined8 *)(puVar16 + -0x18d0) = 0;
  *(undefined8 *)(puVar16 + -0x1888) = uVar28;
  puVar23 = (undefined8 *)(puVar16 + -0xc80);
  pbVar38 = (byte *)(puVar25 + 0x4e3);
  bVar27 = *(byte *)((long)puVar25 + 0x299);
  if (2 < bVar27) {
    if (bVar27 == 3) {
      *(byte **)(puVar16 + -0x18a8) = pbVar38;
      pbVar38 = (byte *)((long)puVar25 + 0x3bd);
      bVar27 = *(byte *)((long)puVar25 + 0x3bd);
      uVar35 = (uint)bVar27;
      plVar34 = puVar25 + 0x54;
      if (2 < bVar27) {
        if (bVar27 != 3) {
          if (bVar27 != 4) {
LAB_100a4f56c:
            pbVar38 = (byte *)((long)puVar25 + 0x3bd);
            plVar34 = puVar25 + 0x54;
            FUN_100fc47a4(puVar16 + -0xc80,puVar25 + 0x78,*(undefined8 *)(puVar16 + -0x1888));
            uVar30 = *(ulong *)(puVar16 + -0xc80);
            if (uVar30 == 3) {
              bVar27 = 5;
              goto LAB_100a51e98;
            }
            unaff_x27 = *(ulong *)(puVar16 + -0xc78);
            unaff_x25 = *(long **)(puVar16 + -0xc70);
            unaff_x26 = *(undefined8 **)(puVar16 + -0xc68);
            func_0x000100cf0d94(puVar25 + 0x78);
            bVar17 = uVar30 == 2;
            uVar40 = 0xb;
            if (!bVar17) {
              uVar40 = uVar30;
            }
            goto LAB_100a4f178;
          }
          *(long *)(puVar16 + -0x18b0) = (long)puVar25 + 0x41a;
          bVar27 = *(byte *)((long)puVar25 + 0x41a);
          puVar36 = puVar25 + 0x78;
          if (bVar27 < 3) {
            if (bVar27 != 0) {
              if (bVar27 == 1) {
                func_0x000108a07af4(&UNK_10b22b2a0);
              }
              else {
                func_0x000108a07b10(&UNK_10b22b2a0);
              }
              goto LAB_100a52e04;
            }
            puVar36 = (undefined8 *)puVar25[0x7c];
            uVar28 = puVar25[0x7d];
            uVar45 = puVar25[0x7e];
            uVar39 = *(undefined2 *)(puVar25 + 0x83);
            goto LAB_100a4f864;
          }
          if (bVar27 == 3) {
            puVar31 = (undefined1 *)((long)puVar25 + 0x48c);
            bVar27 = *(byte *)((long)puVar25 + 0x48c);
            *(undefined8 **)(puVar16 + -0x18b8) = puVar25 + 0x84;
            if (bVar27 < 3) {
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              if (bVar27 != 0) {
                if (bVar27 == 1) {
                  func_0x000108a07af4(&UNK_10b22b270);
                }
                else {
                  func_0x000108a07b10(&UNK_10b22b270);
                }
                goto LAB_100a52e04;
              }
              puVar37 = (undefined8 *)puVar25[0x84];
              uVar28 = puVar25[0x85];
              uVar45 = puVar25[0x86];
              uVar39 = *(undefined2 *)(puVar25 + 0x91);
              unaff_x25 = (long *)puVar25[0x87];
              goto LAB_100a4f9f4;
            }
            if (bVar27 == 3) {
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              unaff_x26 = (undefined8 *)puVar25[0x94];
              goto LAB_100a4fd3c;
            }
            if (bVar27 == 4) {
              uVar28 = puVar25[0x88];
LAB_100a4fdb0:
              puVar25[0x92] = uVar28;
              *(undefined8 **)(puVar16 + -0x18c8) = puVar25 + 0xda;
              *(undefined1 *)(puVar25 + 0xda) = 0;
            }
            else {
              bVar27 = *(byte *)(puVar25 + 0xda);
              *(undefined8 **)(puVar16 + -0x18c8) = puVar25 + 0xda;
              if (1 < bVar27) {
                if (bVar27 == 3) {
                  puVar37 = (undefined8 *)puVar25[0xd8];
                  uVar45 = puVar25[0xd9];
                  uVar28 = puVar25[0xd7];
                  goto LAB_100a52ac8;
                }
                *(undefined1 **)(puVar16 + -0x18c0) = puVar31;
                *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
                func_0x000108a07b10(&UNK_10b22b2e8);
                goto LAB_100a52e04;
              }
              if (bVar27 != 0) {
                *(undefined1 **)(puVar16 + -0x18c0) = puVar31;
                *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
                func_0x000108a07af4(&UNK_10b22b2e8);
                goto LAB_100a52e04;
              }
              uVar28 = puVar25[0x92];
            }
            puVar31 = (undefined1 *)((long)puVar25 + 0x48c);
            puVar25[0x93] = uVar28;
            puVar25[0x94] = 0;
            puVar25[0x95] = 1;
            _bzero(puVar25 + 0x96,0x208);
            uVar30 = 0;
LAB_100a52c40:
            if (uVar30 < 0x2000) {
              uVar28 = puVar25[0x93];
              puVar37 = puVar25 + 0x97;
              puVar25[0xd7] = uVar28;
              puVar25[0xd8] = puVar37;
              uVar45 = 0x200;
              puVar25[0xd9] = 0x200;
LAB_100a52ac8:
              plVar34 = puVar25 + 0x54;
              pbVar38 = (byte *)((long)puVar25 + 0x3bd);
              *(undefined8 **)(puVar16 + -0xc80) = puVar37;
              *(undefined8 *)(puVar16 + -0xc78) = uVar45;
              *(undefined8 *)(puVar16 + -0xc70) = 0;
              *(undefined8 *)(puVar16 + -0xc68) = uVar45;
              auVar51 = func_0x0001060f8cbc(uVar28,*(undefined8 *)(puVar16 + -0x1888),
                                            puVar16 + -0xc80);
              uVar30 = auVar51._8_8_;
              if ((auVar51._0_8_ & 1) != 0) {
                **(undefined1 **)(puVar16 + -0x18c8) = 3;
                uVar26 = 5;
LAB_100a4fdec:
                pbVar38 = (byte *)((long)puVar25 + 0x3bd);
                *puVar31 = uVar26;
                uVar26 = 3;
                puVar31 = *(undefined1 **)(puVar16 + -0x18b0);
LAB_100a51e90:
                *puVar31 = uVar26;
                bVar27 = 4;
                goto LAB_100a51e98;
              }
              if (uVar30 == 0) {
                unaff_x25 = *(long **)(puVar16 + -0xc70);
                if (*(long **)(puVar16 + -0xc78) < unaff_x25) {
                  func_0x000108a07904(0,unaff_x25,*(long **)(puVar16 + -0xc78),&UNK_10b209248);
                }
                else {
                  if (unaff_x25 == (long *)0x0) {
                    *(undefined1 **)(puVar16 + -0x18c0) = puVar31;
                    piVar22 = (int *)puVar25[0x95];
                    uVar30 = puVar25[0x96];
                    goto LAB_100a52b84;
                  }
                  if (unaff_x25 < (long *)0x201) goto code_r0x000100a52b08;
                  *(undefined1 **)(puVar16 + -0x18c0) = puVar31;
                  *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
                  func_0x000108a07904(0,unaff_x25,0x200,&UNK_10b22b300);
                }
                goto LAB_100a52e04;
              }
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              uVar40 = 0xb;
              goto LAB_100a52d38;
            }
            unaff_x25 = (long *)_malloc(0x1f);
            *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
            if (unaff_x25 == (long *)0x0) {
              *(undefined1 **)(puVar16 + -0x18c0) = puVar31;
              func_0x0001087c9084(1,0x1f);
              goto LAB_100a52e04;
            }
            unaff_x25[1] = 0x736572205443454e;
            *unaff_x25 = 0x4e4f432050545448;
            *(undefined8 *)((long)unaff_x25 + 0x17) = 0x656772616c206f6f;
            *(undefined8 *)((long)unaff_x25 + 0xf) = 0x742065736e6f7073;
            uVar30 = 0x1f;
            uVar40 = 8;
LAB_100a52d38:
            if (puVar25[0x94] != 0) {
              _free(puVar25[0x95]);
            }
            **(undefined1 **)(puVar16 + -0x18c8) = 1;
            uVar35 = (uint)uVar30 & 0xffff;
            puVar23 = (undefined8 *)(uVar30 >> 0x10);
            unaff_x26 = (undefined8 *)0x1f;
            goto LAB_100a52a68;
          }
          bVar27 = *(byte *)((long)puVar25 + 0x47e);
          *(long *)(puVar16 + -0x18c0) = (long)puVar25 + 0x47e;
          *(undefined8 **)(puVar16 + -0x18b8) = puVar25 + 0x84;
          if (bVar27 < 5) {
            *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
            if (bVar27 < 3) {
              if (bVar27 != 0) {
                if (bVar27 == 1) {
                  func_0x000108a07af4(&UNK_10b22b288);
                }
                else {
                  func_0x000108a07b10(&UNK_10b22b288);
                }
                goto LAB_100a52e04;
              }
              puVar37 = (undefined8 *)puVar25[0x84];
              uVar28 = puVar25[0x85];
              uVar45 = puVar25[0x86];
              uVar39 = *(undefined2 *)(puVar25 + 0x8f);
              unaff_x25 = (long *)puVar25[0x87];
              goto LAB_100a4f8b4;
            }
            if (bVar27 == 3) {
              lVar33 = puVar25[0x93];
              goto LAB_100a4f92c;
            }
            lVar33 = puVar25[0x92];
LAB_100a4fe40:
            pbVar38 = (byte *)((long)puVar25 + 0x3bd);
            do {
              if (lVar33 == 0) {
                uVar28 = puVar25[0x88];
                puVar25[0x90] = uVar28;
                goto LAB_100a4fedc;
              }
              auVar51 = func_0x0001060f8f1c(puVar25[0x90],*(undefined8 *)(puVar16 + -0x1888),
                                            puVar25[0x91]);
              unaff_x27 = auVar51._8_8_;
              if (auVar51._0_8_ == 2) {
                uVar26 = 4;
                goto LAB_100a51e80;
              }
              if ((auVar51._0_8_ & 1) != 0) goto LAB_100a4fe98;
              lVar20 = puVar25[0x91];
              uVar30 = puVar25[0x92];
              puVar25[0x91] = 1;
              puVar25[0x92] = 0;
              lVar33 = uVar30 - unaff_x27;
              if (uVar30 < unaff_x27) {
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cc4086,0x13,&UNK_10b24e568);
                goto LAB_100a52e04;
              }
              puVar25[0x91] = lVar20 + unaff_x27;
              puVar25[0x92] = lVar33;
            } while (unaff_x27 != 0);
            goto LAB_100a4fe90;
          }
          if (bVar27 < 7) {
            *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
            if (bVar27 == 5) {
              uVar28 = puVar25[0x88];
LAB_100a4fedc:
              lVar33 = 0;
              *(undefined2 *)((long)puVar25 + 0x47c) = 0;
              puVar25[0x90] = uVar28;
              puVar25[0x91] = (long)puVar25 + 0x47c;
              puVar25[0x93] = 0;
              puVar25[0x92] = 2;
              lVar20 = 2;
              puVar25[0x94] = 2;
            }
            else {
              lVar20 = puVar25[0x92];
              lVar33 = puVar25[0x93];
            }
            pbVar38 = (byte *)((long)puVar25 + 0x3bd);
            plVar34 = puVar25 + 0x54;
            puVar23 = puVar25 + 0x90;
            do {
              lVar41 = lVar20 - lVar33;
              if (lVar20 == lVar33) {
                if (*(char *)((long)puVar25 + 0x47c) != '\x05') {
                  unaff_x25 = (long *)_malloc(0x20);
                  puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
                  if (unaff_x25 != (long *)0x0) {
                    unaff_x25[1] = 0x2064696c61766e69;
                    *unaff_x25 = 0x203a35534b434f53;
                    unaff_x25[3] = 0x6e6f697372657620;
                    unaff_x25[2] = 0x65736e6f70736572;
                    unaff_x27 = 0x20;
                    uVar40 = 8;
                    unaff_x26 = (undefined8 *)0x20;
                    goto LAB_100a4fea0;
                  }
                  func_0x0001087c9084(1,0x20);
                  goto LAB_100a52e04;
                }
                cVar7 = *(char *)((long)puVar25 + 0x47d);
                puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
                if (cVar7 == '\0') goto LAB_100a51ad4;
                if (cVar7 == '\x02') {
                  FUN_100e9be88(puVar16 + -0xc80,puVar25[0x8b]);
                  uVar40 = *(ulong *)(puVar16 + -0xc80);
                  unaff_x27 = *(ulong *)(puVar16 + -0xc78);
                  if (uVar40 == 0x15) {
                    uVar28 = puVar25[0x88];
                    puVar25[0x90] = uVar28;
                    puVar25[0x91] = unaff_x27;
                    *(undefined8 **)(puVar16 + -0x18c8) = puVar25 + 0x96;
                    *(undefined1 *)(puVar25 + 0x96) = 0;
                    puVar25[0x92] = uVar28;
                    unaff_x24 = *(ulong *)(unaff_x27 + 0x10);
                    unaff_x25 = *(long **)(unaff_x27 + 0x28);
                    uVar30 = (ulong)unaff_x25 | unaff_x24;
                    goto joined_r0x000100a4fbd0;
                  }
                  unaff_x25 = *(long **)(puVar16 + -0xc70);
                  unaff_x26 = *(undefined8 **)(puVar16 + -0xc68);
                }
                else {
                  if (cVar7 == -1) {
                    FUN_100f15358(puVar16 + -0xc80,&UNK_108cb5af3,0x2b);
                  }
                  else {
                    FUN_100f15358(puVar16 + -0xc80,&UNK_108cb5b1e,0x29);
                  }
                  unaff_x27 = *(ulong *)(puVar16 + -0xc80);
                  unaff_x25 = *(long **)(puVar16 + -0xc78);
                  uVar40 = 8;
                  unaff_x26 = *(undefined8 **)(puVar16 + -0xc70);
                }
                goto LAB_100a4fea0;
              }
              auVar51 = func_0x0001060f8cbc(*puVar23,*(undefined8 *)(puVar16 + -0x1888),
                                            puVar25 + 0x91);
              unaff_x27 = auVar51._8_8_;
              if ((auVar51._0_8_ & 1) != 0) {
                uVar26 = 6;
                goto LAB_100a51e80;
              }
              if (unaff_x27 != 0) goto LAB_100a4ff6c;
              lVar20 = puVar25[0x92];
              lVar33 = puVar25[0x93];
            } while (lVar20 - lVar33 != lVar41);
            unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
LAB_100a4ff6c:
            puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
            uVar40 = 0xb;
            goto LAB_100a4fea0;
          }
          if (bVar27 == 7) {
            *(undefined8 **)(puVar16 + -0x18c8) = puVar25 + 0x96;
            bVar27 = *(byte *)(puVar25 + 0x96);
            puVar23 = puVar25 + 0x90;
            if (2 < bVar27) {
              if (bVar27 != 3) {
                if (bVar27 == 4) {
                  uVar28 = puVar25[0x92];
LAB_100a516e8:
                  *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
                  lVar33 = 0;
                  *(undefined2 *)(puVar25 + 0x97) = 0;
                  puVar25[0x98] = uVar28;
                  puVar25[0x99] = puVar25 + 0x97;
                  puVar25[0x9b] = 0;
                  puVar25[0x9a] = 2;
                  lVar20 = 2;
                  puVar25[0x9c] = 2;
                }
                else {
                  *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
                  lVar20 = puVar25[0x9a];
                  lVar33 = puVar25[0x9b];
                }
LAB_100a51714:
                lVar41 = lVar20 - lVar33;
                if (lVar20 != lVar33) {
                  auVar51 = func_0x0001060f8cbc(puVar25[0x98],*(undefined8 *)(puVar16 + -0x1888),
                                                puVar25 + 0x99);
                  unaff_x27 = auVar51._8_8_;
                  if ((auVar51._0_8_ & 1) != 0) {
                    uVar26 = 5;
LAB_100a517dc:
                    **(undefined1 **)(puVar16 + -0x18c8) = uVar26;
                    uVar26 = 7;
                    goto LAB_100a51e80;
                  }
                  if (unaff_x27 == 0) goto code_r0x000100a51738;
                  goto LAB_100a51764;
                }
                if ((*(char *)(puVar25 + 0x97) == '\x01') &&
                   (*(char *)((long)puVar25 + 0x4b9) == '\0')) {
                  if (puVar25[0x93] != 0) {
                    _free(puVar25[0x94]);
                  }
                  **(undefined1 **)(puVar16 + -0x18c8) = 1;
                  puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
LAB_100a51ad4:
                  uVar28 = puVar25[0x88];
                  uVar45 = puVar25[0x89];
                  unaff_x27 = puVar25[0x8a];
                  uVar8 = *(ushort *)((long)puVar25 + 0x47a);
                  puVar25[0x90] = uVar28;
                  puVar25[0x91] = uVar45;
                  puVar25[0x92] = unaff_x27;
                  *(ushort *)((long)puVar25 + 0x4bc) = uVar8;
                  *(long *)(puVar16 + -0x18d0) = (long)puVar25 + 0x4be;
                  *(undefined1 *)((long)puVar25 + 0x4be) = 0;
                  goto LAB_100a51b04;
                }
                unaff_x25 = (long *)_malloc(0x1c);
                puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
                if (unaff_x25 != (long *)0x0) {
                  unaff_x25[1] = 0x6369746e65687475;
                  *unaff_x25 = 0x612035534b434f53;
                  *(undefined8 *)((long)unaff_x25 + 0x14) = 0x64656c696166206e;
                  *(undefined8 *)((long)unaff_x25 + 0xc) = 0x6f6974616369746e;
                  unaff_x27 = 0x1c;
                  uVar40 = 8;
                  goto LAB_100a517b8;
                }
                func_0x0001087c9084(1,0x1c);
                goto LAB_100a52e04;
              }
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              lVar33 = puVar25[0x99];
              goto LAB_100a5166c;
            }
            if (bVar27 != 0) {
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              if (bVar27 == 1) {
                func_0x000108a07af4(&UNK_10b22b2d0);
              }
              else {
                func_0x000108a07b10(&UNK_10b22b2d0);
              }
              goto LAB_100a52e04;
            }
            unaff_x27 = puVar25[0x91];
            puVar25[0x92] = puVar25[0x90];
            unaff_x24 = *(ulong *)(unaff_x27 + 0x10);
            unaff_x25 = *(long **)(unaff_x27 + 0x28);
            uVar30 = (ulong)unaff_x25 | unaff_x24;
joined_r0x000100a4fbd0:
            if (uVar30 < 0x100) {
              puVar23 = puVar25 + 0x90;
              pbVar38 = (byte *)((long)puVar25 + 0x3bd);
              plVar34 = puVar25 + 0x54;
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              unaff_x26 = *(undefined8 **)(unaff_x27 + 8);
              *(undefined8 *)(puVar16 + -0x18d0) = *(undefined8 *)(unaff_x27 + 0x20);
              lVar33 = (long)unaff_x25 + unaff_x24 + 3;
              puVar31 = (undefined1 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar33,1);
              if (puVar31 == (undefined1 *)0x0) {
                func_0x0001087c9084(1,lVar33);
                goto LAB_100a52e04;
              }
              puVar25[0x93] = lVar33;
              puVar25[0x94] = puVar31;
              *puVar31 = 1;
              puVar31[1] = (char)unaff_x24;
              lVar33 = 2;
              puVar25[0x95] = 2;
              if ((long)unaff_x25 + unaff_x24 + 1 < unaff_x24) goto LAB_100a52108;
              goto LAB_100a4fc24;
            }
            puVar23 = puVar25 + 0x90;
            pbVar38 = (byte *)((long)puVar25 + 0x3bd);
            plVar34 = puVar25 + 0x54;
            unaff_x25 = (long *)_malloc(0x20);
            if (unaff_x25 == (long *)0x0) {
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              func_0x0001087c9084(1,0x20);
              goto LAB_100a52e04;
            }
            unaff_x25[1] = 0x6465726320687475;
            *unaff_x25 = 0x612035534b434f53;
            unaff_x25[3] = 0x676e6f6c206f6f74;
            unaff_x25[2] = 0x20736c6169746e65;
            unaff_x27 = 0x20;
            uVar40 = 8;
            unaff_x26 = (undefined8 *)0x20;
            goto LAB_100a51864;
          }
          puVar23 = (undefined8 *)((long)puVar25 + 0x4be);
          bVar27 = *(byte *)((long)puVar25 + 0x4be);
          unaff_x26 = puVar25 + 0x90;
          if (bVar27 < 5) {
            if (bVar27 < 3) {
              *(undefined8 **)(puVar16 + -0x18d0) = puVar23;
              if (bVar27 != 0) {
                *(undefined8 **)(puVar16 + -0x18c8) = unaff_x26;
                *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
                if (bVar27 == 1) {
                  func_0x000108a07af4(&UNK_10b22b2b8);
                }
                else {
                  func_0x000108a07b10(&UNK_10b22b2b8);
                }
                goto LAB_100a52e04;
              }
              uVar28 = puVar25[0x90];
              uVar45 = puVar25[0x91];
              unaff_x27 = puVar25[0x92];
              uVar8 = *(ushort *)((long)puVar25 + 0x4bc);
LAB_100a51b04:
              *(undefined8 **)(puVar16 + -0x18c8) = puVar25 + 0x90;
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              puVar25[0x93] = uVar28;
              unaff_x25 = puVar25 + 0x94;
              puVar25[0x94] = 0;
              puVar25[0x95] = 1;
              puVar25[0x96] = 0;
              func_0x0001087c90b8(unaff_x25);
              *(undefined1 *)puVar25[0x95] = 5;
              puVar25[0x96] = 1;
              if (puVar25[0x94] == 1) {
                func_0x0001087c90b8(unaff_x25);
              }
              *(undefined1 *)(puVar25[0x95] + 1) = 1;
              puVar25[0x96] = 2;
              if (puVar25[0x94] == 2) {
                func_0x0001087c90b8(unaff_x25);
              }
              *(undefined1 *)(puVar25[0x95] + 2) = 0;
              puVar25[0x96] = 3;
              uVar30 = __ZN4core3net6parser85__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_core__net__ip_addr__Ipv4Addr_GT_8from_str17h054083979c684417E
                                 (uVar45,unaff_x27);
              if ((uVar30 & 1) == 0) {
                if (*unaff_x25 == 3) {
                  func_0x0001087c90b8(unaff_x25);
                }
                *(undefined1 *)(puVar25[0x95] + 3) = 1;
                lVar33 = 4;
                puVar25[0x96] = 4;
                if ((puVar25[0x94] & 0x7ffffffffffffffc) == 4) {
                  FUN_108855060(unaff_x25,4,4,1,1);
                  lVar33 = puVar25[0x96];
                }
                *(int *)(puVar25[0x95] + lVar33) = (int)(uVar30 >> 8);
                lVar33 = lVar33 + 4;
LAB_100a51c48:
                puVar25[0x96] = lVar33;
                unaff_x26 = *(undefined8 **)(puVar16 + -0x18c8);
              }
              else {
                __ZN4core3net6parser85__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_core__net__ip_addr__Ipv6Addr_GT_8from_str17h456bd53f42bcbd69E
                          (puVar16 + -0xc80,uVar45,unaff_x27);
                unaff_x26 = *(undefined8 **)(puVar16 + -0x18c8);
                if ((puVar16[-0xc80] & 1) != 0) {
                  if (unaff_x27 < 0x100) {
                    lVar33 = puVar25[0x96];
                    if (lVar33 == puVar25[0x94]) {
                      func_0x0001087c90b8(unaff_x25);
                    }
                    *(undefined1 *)(puVar25[0x95] + lVar33) = 3;
                    lVar20 = lVar33 + 1;
                    puVar25[0x96] = lVar20;
                    if (lVar20 == puVar25[0x94]) {
                      func_0x0001087c90b8(unaff_x25);
                    }
                    *(char *)(puVar25[0x95] + lVar20) = (char)unaff_x27;
                    lVar33 = lVar33 + 2;
                    puVar25[0x96] = lVar33;
                    if ((ulong)(puVar25[0x94] - lVar33) < unaff_x27) {
                      FUN_108855060(unaff_x25,lVar33,unaff_x27,1,1);
                      lVar33 = puVar25[0x96];
                    }
                    _memcpy(puVar25[0x95] + lVar33,uVar45,unaff_x27);
                    lVar33 = lVar33 + unaff_x27;
                    goto LAB_100a51c48;
                  }
                  unaff_x25 = (long *)_malloc(0x1b);
                  if (unaff_x25 == (long *)0x0) {
                    func_0x0001087c9084(1,0x1b);
                    goto LAB_100a52e04;
                  }
                  unaff_x25[1] = 0x616e206e69616d6f;
                  *unaff_x25 = 0x642035534b434f53;
                  *(undefined8 *)((long)unaff_x25 + 0x13) = 0x676e6f6c206f6f74;
                  *(undefined8 *)((long)unaff_x25 + 0xb) = 0x20656d616e206e69;
                  unaff_x27 = 0x1b;
                  unaff_x26 = (undefined8 *)0x1b;
LAB_100a51bf4:
                  uVar40 = 8;
                  puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
                  puVar23 = *(undefined8 **)(puVar16 + -0x18d0);
                  goto LAB_100a51dd4;
                }
                lVar33 = puVar25[0x96];
                if (lVar33 == puVar25[0x94]) {
                  func_0x0001087c90b8(unaff_x25);
                }
                *(undefined1 *)(puVar25[0x95] + lVar33) = 4;
                lVar33 = lVar33 + 1;
                puVar25[0x96] = lVar33;
                if ((ulong)(puVar25[0x94] - lVar33) < 0x10) {
                  FUN_108855060(unaff_x25,lVar33,0x10,1,1);
                  lVar33 = puVar25[0x96];
                  unaff_x26 = *(undefined8 **)(puVar16 + -0x18c8);
                }
                lVar20 = puVar25[0x95];
                uVar28 = *(undefined8 *)(puVar16 + -0xc7f);
                ((undefined8 *)(lVar20 + lVar33))[1] = *(undefined8 *)(puVar16 + -0xc77);
                *(undefined8 *)(lVar20 + lVar33) = uVar28;
                lVar33 = lVar33 + 0x10;
                puVar25[0x96] = lVar33;
              }
              if ((ulong)(*unaff_x25 - lVar33) < 2) {
                FUN_108855060(unaff_x25,lVar33,2,1,1);
                lVar33 = puVar25[0x96];
                unaff_x26 = *(undefined8 **)(puVar16 + -0x18c8);
              }
              *(ushort *)(lVar33 + puVar25[0x95]) = uVar8 >> 8 | uVar8 << 8;
              lVar33 = lVar33 + 2;
              puVar25[0x96] = lVar33;
              puVar25[0x98] = puVar25[0x93];
              puVar25[0x99] = puVar25[0x95];
              puVar25[0x9a] = lVar33;
              puVar23 = *(undefined8 **)(puVar16 + -0x18d0);
            }
            else {
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              if (bVar27 != 3) {
                uVar28 = puVar25[0x93];
LAB_100a51d50:
                lVar33 = 0;
                *(undefined4 *)(puVar25 + 0x97) = 0;
                puVar25[0x98] = uVar28;
                puVar25[0x99] = puVar25 + 0x97;
                puVar25[0x9b] = 0;
                puVar25[0x9a] = 4;
                lVar20 = 4;
                puVar25[0x9c] = 4;
                goto LAB_100a51d78;
              }
              lVar33 = puVar25[0x9a];
            }
            do {
              if (lVar33 == 0) {
                uVar28 = puVar25[0x93];
                puVar25[0x98] = uVar28;
                goto LAB_100a51d50;
              }
              auVar51 = func_0x0001060f8f1c(puVar25[0x98],*(undefined8 *)(puVar16 + -0x1888),
                                            puVar25[0x99]);
              unaff_x27 = auVar51._8_8_;
              if (auVar51._0_8_ == 2) {
                uVar26 = 3;
                goto LAB_100a51e78;
              }
              if ((auVar51._0_8_ & 1) != 0) goto LAB_100a51d3c;
              lVar20 = puVar25[0x99];
              uVar30 = puVar25[0x9a];
              puVar25[0x99] = 1;
              puVar25[0x9a] = 0;
              lVar33 = uVar30 - unaff_x27;
              if (uVar30 < unaff_x27) {
                *(undefined8 **)(puVar16 + -0x18d0) = puVar23;
                *(undefined8 **)(puVar16 + -0x18c8) = unaff_x26;
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cc4086,0x13,&UNK_10b24e568);
                goto LAB_100a52e04;
              }
              puVar25[0x99] = lVar20 + unaff_x27;
              puVar25[0x9a] = lVar33;
            } while (unaff_x27 != 0);
            unaff_x27 = 0x1700000003;
            goto LAB_100a51d3c;
          }
          *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
          if (bVar27 != 5) {
            if (bVar27 != 6) {
              unaff_x25 = (long *)puVar25[0x9d];
              plVar29 = (long *)puVar25[0x9e];
LAB_100a519c4:
              lVar33 = (long)unaff_x25 - (long)plVar29;
              if (unaff_x25 != plVar29) {
                auVar51 = func_0x0001060f8cbc(puVar25[0x9b],*(undefined8 *)(puVar16 + -0x1888),
                                              puVar25 + 0x9c);
                unaff_x27 = auVar51._8_8_;
                if ((auVar51._0_8_ & 1) != 0) {
                  uVar26 = 7;
LAB_100a51e78:
                  *(undefined1 *)puVar23 = uVar26;
                  uVar26 = 8;
LAB_100a51e80:
                  puVar31 = *(undefined1 **)(puVar16 + -0x18b0);
                  **(undefined1 **)(puVar16 + -0x18c0) = uVar26;
                  uVar26 = 4;
                  goto LAB_100a51e90;
                }
                if (unaff_x27 == 0) goto code_r0x000100a519e8;
                goto LAB_100a51a14;
              }
              if (puVar25[0x98] != 0) {
                _free(puVar25[0x99]);
              }
              puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
              if (puVar25[0x94] != 0) {
                uVar40 = 0x15;
                goto LAB_100a51ddc;
              }
              *(undefined1 *)puVar23 = 1;
              lVar33 = puVar25[0x8c];
              *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
              goto joined_r0x000100a51f64;
            }
            lVar20 = puVar25[0x9b];
            lVar33 = puVar25[0x9c];
LAB_100a5006c:
            lVar41 = lVar20 - lVar33;
            if (lVar20 != lVar33) {
              auVar51 = func_0x0001060f8cbc(puVar25[0x99],*(undefined8 *)(puVar16 + -0x1888),
                                            puVar25 + 0x9a);
              unaff_x27 = auVar51._8_8_;
              if ((auVar51._0_8_ & 1) != 0) {
                uVar26 = 6;
                goto LAB_100a51e78;
              }
              if (unaff_x27 != 0) goto LAB_100a51d3c;
              lVar20 = puVar25[0x9b];
              lVar33 = puVar25[0x9c];
              if (lVar20 - lVar33 == lVar41) goto code_r0x000100a500a4;
              goto LAB_100a5006c;
            }
            unaff_x25 = (long *)((ulong)*(byte *)(puVar25 + 0x98) + 2);
            lVar33 = __RNvCshXwFllX56pT_7___rustc19___rust_alloc_zeroed(unaff_x25,1);
            if (lVar33 != 0) goto LAB_100a5199c;
LAB_100a5206c:
            *(undefined8 **)(puVar16 + -0x18d0) = puVar23;
            *(undefined8 **)(puVar16 + -0x18c8) = unaff_x26;
            func_0x0001087c9084(1,unaff_x25);
            goto LAB_100a52e04;
          }
          lVar20 = puVar25[0x9a];
          lVar33 = puVar25[0x9b];
LAB_100a51d78:
          do {
            lVar41 = lVar20 - lVar33;
            if (lVar20 == lVar33) {
              if (*(char *)(puVar25 + 0x97) != '\x05') {
                unaff_x25 = (long *)_malloc(0x20);
                if (unaff_x25 != (long *)0x0) {
                  unaff_x25[1] = 0x2064696c61766e69;
                  *unaff_x25 = 0x203a35534b434f53;
                  unaff_x25[3] = 0x6e6f697372657620;
                  unaff_x25[2] = 0x65736e6f70736572;
                  unaff_x27 = 0x20;
                  uVar40 = 8;
                  unaff_x26 = (undefined8 *)0x20;
                  goto LAB_100a51d40;
                }
                *(undefined8 **)(puVar16 + -0x18d0) = puVar23;
                *(undefined8 **)(puVar16 + -0x18c8) = unaff_x26;
                func_0x0001087c9084(1,0x20);
                goto LAB_100a52e04;
              }
              cVar7 = *(char *)((long)puVar25 + 0x4b9);
              *(undefined8 **)(puVar16 + -0x18c8) = unaff_x26;
              if (cVar7 != '\0') {
                *(long *)(puVar16 + 0x3f78) = (long)puVar25 + 0x4b9;
                *(undefined **)(puVar16 + 0x3f80) =
                     &
                     __ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17haf97c475cbbdc210E
                ;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (puVar16 + -0xc80,s__SOCKS5__connection_failed_with_c_108acee33,
                           puVar16 + 0x3f78);
                unaff_x27 = *(ulong *)(puVar16 + -0xc80);
                unaff_x25 = *(long **)(puVar16 + -0xc78);
                uVar40 = 8;
                unaff_x26 = *(undefined8 **)(puVar16 + -0xc70);
                goto LAB_100a51d40;
              }
              *(undefined8 **)(puVar16 + -0x18d0) = puVar23;
              cVar7 = *(char *)((long)puVar25 + 0x4bb);
              if (cVar7 == '\x01') {
                unaff_x25 = (long *)0x6;
              }
              else {
                if (cVar7 == '\x03') {
                  lVar33 = 0;
                  *(undefined1 *)(puVar25 + 0x98) = 0;
                  puVar25[0x99] = puVar25[0x93];
                  puVar25[0x9a] = puVar25 + 0x98;
                  lVar20 = 1;
                  puVar25[0x9b] = 1;
                  puVar25[0x9d] = 1;
                  puVar25[0x9c] = 0;
                  puVar23 = *(undefined8 **)(puVar16 + -0x18d0);
                  unaff_x26 = *(undefined8 **)(puVar16 + -0x18c8);
                  goto LAB_100a5006c;
                }
                if (cVar7 != '\x04') {
                  FUN_100f15358(puVar16 + -0xc80,&UNK_108cb5bb1,0x1c);
                  unaff_x27 = *(ulong *)(puVar16 + -0xc80);
                  unaff_x25 = *(long **)(puVar16 + -0xc78);
                  unaff_x26 = *(undefined8 **)(puVar16 + -0xc70);
                  goto LAB_100a51bf4;
                }
                unaff_x25 = (long *)0x12;
              }
              puVar23 = *(undefined8 **)(puVar16 + -0x18d0);
              unaff_x26 = *(undefined8 **)(puVar16 + -0x18c8);
              lVar33 = __RNvCshXwFllX56pT_7___rustc19___rust_alloc_zeroed(unaff_x25,1);
              if (lVar33 == 0) goto LAB_100a5206c;
              goto LAB_100a5199c;
            }
            auVar51 = func_0x0001060f8cbc(puVar25[0x98],*(undefined8 *)(puVar16 + -0x1888),
                                          puVar25 + 0x99);
            unaff_x27 = auVar51._8_8_;
            if ((auVar51._0_8_ & 1) != 0) {
              uVar26 = 5;
              goto LAB_100a51e78;
            }
            if (unaff_x27 != 0) goto LAB_100a51dcc;
            lVar20 = puVar25[0x9a];
            lVar33 = puVar25[0x9b];
          } while (lVar20 - lVar33 != lVar41);
          unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
LAB_100a51dcc:
          puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
          uVar40 = 0xb;
          goto LAB_100a51dd4;
        }
LAB_100a4f730:
        pbVar38 = (byte *)((long)puVar25 + 0x3bd);
        plVar34 = puVar25 + 0x54;
        unaff_x25 = puVar25 + 0x78;
        FUN_100fc47a4(puVar16 + -0xc80,unaff_x25,*(undefined8 *)(puVar16 + -0x1888));
        lVar33 = *(long *)(puVar16 + -0xc80);
        if (lVar33 == 3) {
          bVar27 = 3;
LAB_100a51e98:
          *pbVar38 = bVar27;
          uVar26 = 3;
          *plVar21 = 3;
          goto LAB_100a51334;
        }
        *(undefined8 *)(puVar16 + -0x1898) = *(undefined8 *)(puVar16 + -0xc70);
        *(undefined8 *)(puVar16 + -0x18a0) = *(undefined8 *)(puVar16 + -0xc78);
        uVar28 = *(undefined8 *)(puVar16 + -0xc68);
        func_0x000100cf0d94(unaff_x25);
        if (lVar33 != 2) {
          *(long *)(puVar16 + 0x59c0) = lVar33;
          *(undefined8 *)(puVar16 + 0x59d0) = *(undefined8 *)(puVar16 + -0x1898);
          *(undefined8 *)(puVar16 + 0x59c8) = *(undefined8 *)(puVar16 + -0x18a0);
          *(undefined8 *)(puVar16 + 23000) = uVar28;
          *(undefined1 *)((long)puVar25 + 0x3bc) = 0;
          puVar36 = puVar25 + 0x6a;
          uVar28 = puVar25[0x54];
          uVar45 = puVar25[0x55];
          uVar39 = *(undefined2 *)((long)puVar25 + 0x3ba);
          lVar33 = *(long *)(puVar16 + 0x59c0);
          uVar47 = *(undefined8 *)(puVar16 + 23000);
          uVar46 = *(undefined8 *)(puVar16 + 0x59d0);
          puVar25[0x79] = *(undefined8 *)(puVar16 + 0x59c8);
          *unaff_x25 = lVar33;
          puVar25[0x7b] = uVar47;
          puVar25[0x7a] = uVar46;
          puVar25[0x7c] = puVar36;
          puVar25[0x7d] = uVar28;
          puVar25[0x7e] = uVar45;
          *(undefined2 *)(puVar25 + 0x83) = uVar39;
          *(long *)(puVar16 + -0x18b0) = (long)puVar25 + 0x41a;
          *(undefined1 *)((long)puVar25 + 0x41a) = 0;
LAB_100a4f864:
          puVar37 = puVar25 + 0x7f;
          uVar47 = puVar25[0x79];
          uVar46 = puVar25[0x78];
          uVar49 = puVar25[0x7b];
          uVar48 = puVar25[0x7a];
          *(undefined8 **)(puVar16 + -0x18a0) = puVar25 + 0x78;
          puVar25[0x80] = uVar47;
          *puVar37 = uVar46;
          puVar25[0x82] = uVar49;
          puVar25[0x81] = uVar48;
          cVar7 = *(char *)((long)puVar36 + 0x4a);
          unaff_x25 = (long *)0x0;
          if (puVar36[3] != -0x8000000000000000) {
            unaff_x25 = puVar36 + 3;
          }
          *(undefined8 **)(puVar16 + -0x18b8) = puVar25 + 0x84;
          puVar25[0x84] = puVar37;
          puVar25[0x85] = uVar28;
          puVar25[0x86] = uVar45;
          puVar25[0x87] = unaff_x25;
          if (cVar7 != '\0') {
            *(undefined2 *)(puVar25 + 0x8f) = uVar39;
            *(long *)(puVar16 + -0x18c0) = (long)puVar25 + 0x47e;
            *(undefined1 *)((long)puVar25 + 0x47e) = 0;
LAB_100a4f8b4:
            puVar25[0x88] = puVar37;
            puVar25[0x89] = uVar28;
            puVar25[0x8a] = uVar45;
            *(undefined2 *)((long)puVar25 + 0x47a) = uVar39;
            puVar25[0x8b] = unaff_x25;
            puVar31 = (undefined1 *)_malloc(1);
            if (puVar31 == (undefined1 *)0x0) {
              func_0x0001087c906c(1,1);
              goto LAB_100a52e04;
            }
            *puVar31 = 0;
            uVar26 = 1;
            puVar25[0x8c] = 1;
            puVar25[0x8d] = puVar31;
            puVar25[0x8e] = 1;
            if (unaff_x25 != (long *)0x0) {
              func_0x0001087c90b8(puVar25 + 0x8c);
              *(undefined1 *)(puVar25[0x8d] + 1) = 2;
              puVar25[0x8e] = 2;
              puVar37 = (undefined8 *)puVar25[0x88];
              uVar26 = 2;
            }
            *(undefined1 *)(puVar25 + 0x90) = 5;
            *(undefined1 *)((long)puVar25 + 0x481) = uVar26;
            puVar25[0x91] = puVar37;
            puVar25[0x92] = puVar25 + 0x90;
            lVar33 = 2;
            puVar25[0x93] = 2;
LAB_100a4f92c:
            pbVar38 = (byte *)((long)puVar25 + 0x3bd);
            do {
              if (lVar33 == 0) {
                lVar33 = puVar25[0x8e];
                puVar25[0x90] = puVar25[0x88];
                puVar25[0x91] = puVar25[0x8d];
                puVar25[0x92] = lVar33;
                goto LAB_100a4fe40;
              }
              auVar51 = func_0x0001060f8f1c(puVar25[0x91],*(undefined8 *)(puVar16 + -0x1888),
                                            puVar25[0x92]);
              unaff_x27 = auVar51._8_8_;
              if (auVar51._0_8_ == 2) {
                uVar26 = 3;
                goto LAB_100a51e80;
              }
              if ((auVar51._0_8_ & 1) != 0) goto LAB_100a4fe98;
              lVar20 = puVar25[0x92];
              uVar30 = puVar25[0x93];
              puVar25[0x92] = 1;
              puVar25[0x93] = 0;
              lVar33 = uVar30 - unaff_x27;
              if (uVar30 < unaff_x27) {
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cc4086,0x13,&UNK_10b24e568);
                goto LAB_100a52e04;
              }
              puVar25[0x92] = lVar20 + unaff_x27;
              puVar25[0x93] = lVar33;
            } while (unaff_x27 != 0);
LAB_100a4fe90:
            unaff_x27 = 0x1700000003;
LAB_100a4fe98:
            pbVar38 = (byte *)((long)puVar25 + 0x3bd);
            plVar34 = puVar25 + 0x54;
            uVar40 = 0xb;
            puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
            goto LAB_100a4fea0;
          }
          *(undefined2 *)(puVar25 + 0x91) = uVar39;
          *(undefined1 *)((long)puVar25 + 0x48c) = 0;
LAB_100a4f9f4:
          puVar31 = (undefined1 *)((long)puVar25 + 0x48c);
          puVar25[0x88] = puVar37;
          puVar25[0x89] = uVar28;
          puVar25[0x8a] = uVar45;
          *(undefined2 *)((long)puVar25 + 0x48a) = uVar39;
          *(undefined8 **)(puVar16 + -0xc80) = puVar25 + 0x89;
          *(undefined **)(puVar16 + -0xc78) = &DAT_100c7b3a0;
          *(long *)(puVar16 + -0xc70) = (long)puVar25 + 0x48a;
          *(undefined **)(puVar16 + -0xc68) =
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (puVar16 + 0x3f78,s___108ac02d4,puVar16 + -0xc80);
          puVar25[0x8d] = *(undefined8 *)(puVar16 + 0x3f88);
          uVar28 = *(undefined8 *)(puVar16 + 0x3f78);
          puVar25[0x8c] = *(undefined8 *)(puVar16 + 0x3f80);
          puVar25[0x8b] = uVar28;
          __ZN11tungstenite5proxy26build_http_connect_request17h610c854420147508E
                    (puVar16 + -0xc80,puVar25[0x8c],puVar25[0x8d],unaff_x25);
          uVar40 = *(ulong *)(puVar16 + -0xc80);
          uVar30 = *(ulong *)(puVar16 + -0xc78);
          unaff_x25 = *(long **)(puVar16 + -0xc70);
          unaff_x26 = *(undefined8 **)(puVar16 + -0xc68);
          if (uVar40 == 0x15) {
            puVar25[0x8e] = uVar30;
            puVar25[0x8f] = unaff_x25;
            puVar25[0x90] = unaff_x26;
            puVar25[0x92] = puVar25[0x88];
            puVar25[0x93] = unaff_x25;
            puVar25[0x94] = unaff_x26;
LAB_100a4fd3c:
            puVar31 = (undefined1 *)((long)puVar25 + 0x48c);
            do {
              if (unaff_x26 == (undefined8 *)0x0) {
                uVar28 = puVar25[0x88];
                puVar25[0x92] = uVar28;
                puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
                goto LAB_100a4fdb0;
              }
              auVar51 = func_0x0001060f8f1c(puVar25[0x92],*(undefined8 *)(puVar16 + -0x1888),
                                            puVar25[0x93],unaff_x26);
              uVar30 = auVar51._8_8_;
              if (auVar51._0_8_ == 2) {
                uVar26 = 3;
                goto LAB_100a4fdec;
              }
              if ((auVar51._0_8_ & 1) != 0) goto LAB_100a4fd94;
              lVar33 = puVar25[0x93];
              uVar40 = puVar25[0x94];
              puVar25[0x93] = 1;
              puVar25[0x94] = 0;
              unaff_x26 = (undefined8 *)(uVar40 - uVar30);
              if (uVar40 < uVar30) {
                *(undefined1 **)(puVar16 + -0x18c0) = puVar31;
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cc4086,0x13,&UNK_10b24e568);
                goto LAB_100a52e04;
              }
              puVar25[0x93] = lVar33 + uVar30;
              puVar25[0x94] = unaff_x26;
            } while (uVar30 != 0);
            uVar30 = 0x1700000003;
LAB_100a4fd94:
            uVar35 = (uint)uVar30 & 0xffff;
            puVar23 = (undefined8 *)(uVar30 >> 0x10);
            uVar40 = 0xb;
LAB_100a52a68:
            if (puVar25[0x8e] != 0) {
              _free(puVar25[0x8f]);
            }
          }
          else {
            uVar35 = (uint)uVar30 & 0xffff;
            puVar23 = (undefined8 *)(uVar30 >> 0x10);
          }
          pbVar38 = (byte *)((long)puVar25 + 0x3bd);
          plVar34 = puVar25 + 0x54;
          if (puVar25[0x8b] == 0) {
            unaff_x27 = (ulong)uVar35 | (long)puVar23 << 0x10;
            goto LAB_100a52ac0;
          }
          _free(puVar25[0x8c]);
          *(undefined1 *)((long)puVar25 + 0x48c) = 1;
          if (uVar40 == 0x15) goto LAB_100a52a98;
          pbVar38 = (byte *)((long)puVar25 + 0x3bd);
          plVar34 = puVar25 + 0x54;
          unaff_x27 = (ulong)uVar35 | (long)puVar23 << 0x10;
          goto LAB_100a52c18;
        }
        unaff_x27 = *(ulong *)(puVar16 + -0x18a0);
        bVar17 = true;
        uVar40 = 0xb;
        goto LAB_100a52a24;
      }
      if (bVar27 != 0) goto LAB_100a52170;
      puVar36 = (undefined8 *)puVar25[0x76];
      lVar33 = puVar25[0x74];
      uVar28 = puVar25[0x75];
      uVar39 = *(undefined2 *)(puVar25 + 0x77);
LAB_100a4f01c:
      pbVar38 = (byte *)((long)puVar25 + 0x3bd);
      *(undefined1 *)((long)puVar25 + 0x3bc) = 0;
      plVar34 = puVar25 + 0x54;
      *plVar34 = lVar33;
      puVar25[0x55] = uVar28;
      *(undefined2 *)((long)puVar25 + 0x3ba) = uVar39;
      __ZN11tungstenite5proxy11ProxyConfig8from_env17h8b64cd077db5e0a4E
                (puVar16 + -0xc80,puVar36 + 0xc);
      if (*(long *)(puVar16 + -0xc80) == -0x7fffffffffffffff) {
        uVar28 = *(undefined8 *)(puVar16 + -0xc78);
        uVar46 = *(undefined8 *)(puVar16 + -0xc60);
        uVar45 = *(undefined8 *)(puVar16 + -0xc68);
        puVar25[0x62] = *(undefined8 *)(puVar16 + -0xc70);
        puVar25[0x61] = uVar28;
        puVar25[100] = uVar46;
        puVar25[99] = uVar45;
        puVar25[0x60] = 0x8000000000000001;
      }
      else {
        plVar29 = puVar25 + 0x60;
        lVar33 = *(long *)(puVar16 + -0xc80);
        uVar45 = *(undefined8 *)(puVar16 + -0xc68);
        uVar28 = *(undefined8 *)(puVar16 + -0xc70);
        puVar25[0x61] = *(undefined8 *)(puVar16 + -0xc78);
        *plVar29 = lVar33;
        puVar25[99] = uVar45;
        puVar25[0x62] = uVar28;
        uVar28 = *(undefined8 *)(puVar16 + -0xc60);
        uVar46 = *(undefined8 *)(puVar16 + -0xc48);
        uVar45 = *(undefined8 *)(puVar16 + -0xc50);
        puVar25[0x65] = *(undefined8 *)(puVar16 + -0xc58);
        puVar25[100] = uVar28;
        puVar25[0x67] = uVar46;
        puVar25[0x66] = uVar45;
        uVar28 = *(undefined8 *)(puVar16 + -0xc40);
        puVar25[0x69] = *(undefined8 *)(puVar16 + -0xc38);
        puVar25[0x68] = uVar28;
        if (*plVar29 != -0x7fffffffffffffff) {
          puVar25[0x57] = puVar25[0x61];
          puVar25[0x56] = *plVar29;
          puVar25[0x59] = puVar25[99];
          puVar25[0x58] = puVar25[0x62];
          puVar25[0x5b] = puVar25[0x65];
          puVar25[0x5a] = puVar25[100];
          puVar25[0x5d] = puVar25[0x67];
          puVar25[0x5c] = puVar25[0x66];
          puVar25[0x5f] = puVar25[0x69];
          puVar25[0x5e] = puVar25[0x68];
          if (puVar25[0x56] == -0x8000000000000000) {
            *(long **)(puVar16 + -0xc80) = plVar34;
            *(undefined **)(puVar16 + -0xc78) = &DAT_100c7b3a0;
            *(long *)(puVar16 + -0xc70) = (long)puVar25 + 0x3ba;
            *(undefined **)(puVar16 + -0xc68) =
                 &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
            ;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (puVar16 + 0x3f78,s___108ac02d4,puVar16 + -0xc80);
            uVar45 = *(undefined8 *)(puVar16 + 0x3f78);
            *(undefined8 *)(puVar16 + 0x59c8) = *(undefined8 *)(puVar16 + 0x3f80);
            *(undefined8 *)(puVar16 + 0x59c0) = uVar45;
            uVar28 = *(undefined8 *)(puVar16 + 0x3f88);
            *(undefined8 *)(puVar16 + 0x59d0) = uVar28;
            puVar25[0x79] = *(undefined8 *)(puVar16 + 0x3f80);
            puVar25[0x78] = uVar45;
            puVar25[0x7a] = uVar28;
            *(undefined1 *)(puVar25 + 0x7b) = 0;
            goto LAB_100a4f56c;
          }
          puVar25[0x6f] = puVar25[0x65];
          puVar25[0x6e] = puVar25[100];
          puVar25[0x71] = puVar25[0x67];
          puVar25[0x70] = puVar25[0x66];
          puVar25[0x73] = puVar25[0x69];
          puVar25[0x72] = puVar25[0x68];
          puVar25[0x6b] = puVar25[0x61];
          puVar25[0x6a] = *plVar29;
          puVar25[0x6d] = puVar25[99];
          puVar25[0x6c] = puVar25[0x62];
          *(undefined8 **)(puVar16 + -0xc80) = puVar25 + 0x6a;
          *(undefined **)(puVar16 + -0xc78) = &DAT_1062153c4;
          *(undefined8 **)(puVar16 + -0xc70) = puVar25 + 0x73;
          *(undefined **)(puVar16 + -0xc68) =
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (puVar16 + 0x2800,s___108b3b062,puVar16 + -0xc80);
          uVar28 = *(undefined8 *)(puVar16 + 0x2800);
          puVar25[0x79] = *(undefined8 *)(puVar16 + 0x2808);
          puVar25[0x78] = uVar28;
          puVar25[0x7a] = *(undefined8 *)(puVar16 + 0x2810);
          *(undefined1 *)(puVar25 + 0x7b) = 0;
          goto LAB_100a4f730;
        }
      }
      unaff_x27 = puVar25[0x62];
      unaff_x25 = (long *)puVar25[99];
      bVar17 = true;
      unaff_x26 = (undefined8 *)puVar25[100];
      uVar40 = puVar25[0x61];
      goto LAB_100a4f178;
    }
    *(undefined8 **)(puVar16 + -0x18a0) = puVar25 + 0xaa;
    bVar27 = *(byte *)(puVar25 + 0xaa);
    puVar36 = puVar25 + 0x54;
    if (bVar27 < 4) {
      if (bVar27 < 2) {
        if (bVar27 != 0) {
          *(undefined8 **)(puVar16 + -0x18b0) = puVar36;
          func_0x000108a07af4(&UNK_10b22b258);
          goto LAB_100a52e04;
        }
        uVar30 = puVar25[0x58];
        uVar28 = puVar25[0x59];
        goto LAB_100a4f30c;
      }
      if (bVar27 != 3) {
        *(undefined8 **)(puVar16 + -0x18b0) = puVar36;
        func_0x000108a07b10(&UNK_10b22b258);
        goto LAB_100a52e04;
      }
      goto LAB_100a4f434;
    }
    if (bVar27 == 4) {
      *(undefined8 **)(puVar16 + -0x18b0) = puVar36;
      if (*(char *)((long)puVar25 + 0x579) != '\0') {
        if (*(char *)((long)puVar25 + 0x579) == '\x01') {
          func_0x000108a07af4(&UNK_10b22b228);
        }
        else {
          func_0x000108a07b10(&UNK_10b22b228);
        }
        goto LAB_100a52e04;
      }
      bVar27 = *(byte *)(puVar25 + 0xaf);
      uVar28 = puVar25[0xab];
      uVar46 = puVar25[0xae];
      uVar45 = puVar25[0xad];
      *(undefined8 *)(puVar16 + -0xc78) = puVar25[0xac];
      *(undefined8 *)(puVar16 + -0xc80) = uVar28;
      *(undefined8 *)(puVar16 + -0xc68) = uVar46;
      *(undefined8 *)(puVar16 + -0xc70) = uVar45;
      puVar36 = *(undefined8 **)(puVar16 + -0x18b0);
      if ((bVar27 & 1) != 0) goto LAB_100a4f484;
      goto LAB_100a5013c;
    }
    if (bVar27 == 5) goto LAB_100a4f088;
    *(undefined8 **)(puVar16 + -0x18b0) = puVar36;
    bVar27 = *(byte *)(puVar25 + 0x4e4);
    *(undefined8 **)(puVar16 + -0x18c8) = puVar25 + 0x4e4;
    *(undefined8 *)(puVar16 + -0x1888) = **(undefined8 **)(puVar16 + -0x1888);
    if (bVar27 < 2) {
      if (bVar27 != 0) {
        func_0x000108a07af4(&UNK_10b22b1f8);
        goto LAB_100a52e04;
      }
      goto LAB_100a5021c;
    }
    if (bVar27 != 3) {
      func_0x000108a07b10(&UNK_10b22b1f8);
      goto LAB_100a52e04;
    }
    bVar27 = *pbVar38;
    puVar23 = puVar25 + 0x159;
    if (bVar27 < 2) {
      if (bVar27 != 0) {
        *(undefined8 **)(puVar16 + -0x18c0) = puVar23;
        func_0x000108a07af4(&UNK_10b22b3a8);
        goto LAB_100a52e04;
      }
      goto LAB_100a502dc;
    }
    if (bVar27 != 3) {
      *(undefined8 **)(puVar16 + -0x18c0) = puVar23;
      func_0x000108a07b10(&UNK_10b22b3a8);
      goto LAB_100a52e04;
    }
    bVar27 = *(byte *)(puVar25 + 0x2b5);
    puVar36 = puVar25 + 0x207;
    if (bVar27 < 3) {
      if (bVar27 != 0) {
        *(undefined8 **)(puVar16 + -0x18c0) = puVar23;
        *(undefined8 **)(puVar16 + -0x18b8) = puVar36;
        *(byte **)(puVar16 + -0x18a8) = pbVar38;
        if (bVar27 == 1) {
          func_0x000108a07af4(&UNK_10b22b3f0);
        }
        else {
          func_0x000108a07b10(&UNK_10b22b3f0);
        }
        goto LAB_100a52e04;
      }
      goto LAB_100a50348;
    }
    if (bVar27 != 4) goto LAB_100a503a8;
    *(byte **)(puVar16 + -0x18a8) = pbVar38;
    uVar30 = puVar25[0x2b6];
    goto LAB_100a50930;
  }
  if (bVar27 != 0) {
    if (bVar27 == 1) {
      func_0x000108a07af4();
LAB_100a52108:
      FUN_108855060(puVar25 + 0x93,2,unaff_x24,1,1);
      lVar33 = puVar25[0x95];
      puVar31 = (undefined1 *)puVar25[0x94];
LAB_100a4fc24:
      _memcpy(puVar31 + lVar33,unaff_x26,unaff_x24);
      lVar33 = unaff_x24 + lVar33;
      puVar25[0x95] = lVar33;
      if (lVar33 == puVar25[0x93]) {
        func_0x0001087c90b8(puVar25 + 0x93);
      }
      *(char *)(lVar33 + puVar25[0x94]) = (char)unaff_x25;
      lVar33 = lVar33 + 1;
      puVar25[0x95] = lVar33;
      if ((long *)(puVar25[0x93] - lVar33) < unaff_x25) {
        FUN_108855060(puVar25 + 0x93,lVar33,unaff_x25,1,1);
        lVar33 = puVar25[0x95];
      }
      _memcpy(lVar33 + puVar25[0x94],*(undefined8 *)(puVar16 + -0x18d0),unaff_x25);
      lVar33 = lVar33 + (long)unaff_x25;
      puVar25[0x95] = lVar33;
      puVar25[0x97] = puVar25[0x92];
      puVar25[0x98] = puVar25[0x94];
      puVar25[0x99] = lVar33;
LAB_100a5166c:
      do {
        if (lVar33 == 0) {
          uVar28 = puVar25[0x92];
          puVar25[0x97] = uVar28;
          puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
          goto LAB_100a516e8;
        }
        auVar51 = func_0x0001060f8f1c(puVar25[0x97],*(undefined8 *)(puVar16 + -0x1888),puVar25[0x98]
                                     );
        unaff_x27 = auVar51._8_8_;
        if (auVar51._0_8_ == 2) {
          uVar26 = 3;
          goto LAB_100a517dc;
        }
        if ((auVar51._0_8_ & 1) != 0) goto LAB_100a516c0;
        lVar20 = puVar25[0x98];
        uVar30 = puVar25[0x99];
        puVar25[0x98] = 1;
        puVar25[0x99] = 0;
        lVar33 = uVar30 - unaff_x27;
        if (uVar30 < unaff_x27) {
          __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
          goto LAB_100a52e04;
        }
        puVar25[0x98] = lVar20 + unaff_x27;
        puVar25[0x99] = lVar33;
      } while (unaff_x27 != 0);
      unaff_x27 = 0x1700000003;
LAB_100a516c0:
      uVar40 = 0xb;
      puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
      goto LAB_100a517b8;
    }
    func_0x000108a07b10(&UNK_10b22b390);
    uVar35 = extraout_w8_00;
LAB_100a52170:
    if (uVar35 == 1) {
      func_0x000108a07af4(&UNK_10b22b348);
    }
    else {
      func_0x000108a07b10(&UNK_10b22b348);
    }
    goto LAB_100a52e04;
  }
  *(undefined1 *)((long)puVar25 + 0x29c) = 1;
  puVar36 = puVar25 + 0x27;
  puVar25[0x3c] = puVar25[0x17];
  puVar25[0x3b] = puVar25[0x16];
  puVar25[0x3e] = puVar25[0x19];
  puVar25[0x3d] = puVar25[0x18];
  puVar25[0x40] = puVar25[0x1b];
  puVar25[0x3f] = puVar25[0x1a];
  puVar25[0x42] = puVar25[0x1d];
  puVar25[0x41] = puVar25[0x1c];
  puVar25[0x34] = puVar25[0xf];
  puVar25[0x33] = puVar25[0xe];
  puVar25[0x36] = puVar25[0x11];
  puVar25[0x35] = puVar25[0x10];
  puVar25[0x38] = puVar25[0x13];
  puVar25[0x37] = puVar25[0x12];
  puVar25[0x3a] = puVar25[0x15];
  puVar25[0x39] = puVar25[0x14];
  puVar25[0x2c] = puVar25[7];
  puVar25[0x2b] = puVar25[6];
  puVar25[0x2e] = puVar25[9];
  puVar25[0x2d] = puVar25[8];
  puVar25[0x30] = puVar25[0xb];
  puVar25[0x2f] = puVar25[10];
  puVar25[0x32] = puVar25[0xd];
  puVar25[0x31] = puVar25[0xc];
  puVar25[0x28] = puVar25[3];
  *puVar36 = puVar25[2];
  puVar25[0x2a] = puVar25[5];
  puVar25[0x29] = puVar25[4];
  puVar25[0x48] = puVar25[0x23];
  puVar25[0x47] = puVar25[0x22];
  puVar25[0x4a] = puVar25[0x25];
  puVar25[0x49] = puVar25[0x24];
  puVar25[0x4b] = puVar25[0x26];
  puVar25[0x44] = puVar25[0x1f];
  puVar25[0x43] = puVar25[0x1e];
  puVar25[0x46] = puVar25[0x21];
  puVar25[0x45] = puVar25[0x20];
  *(undefined1 *)((long)puVar25 + 0x29a) = *(undefined1 *)(puVar25 + 0x53);
  *(undefined1 *)((long)puVar25 + 0x29b) = 1;
  puVar25[0xdb] = *puVar25;
  puVar25[0xdc] = puVar25[1];
  FUN_100a4e90c(puVar16 + -0xc80,puVar36);
  uVar40 = *(ulong *)(puVar16 + -0xc80);
  unaff_x27 = *(ulong *)(puVar16 + -0xc78);
  unaff_x25 = *(long **)(puVar16 + -0xc70);
  unaff_x26 = *(undefined8 **)(puVar16 + -0xc68);
  if (uVar40 == 0x15) {
    puVar25[0x4c] = unaff_x27;
    puVar25[0x4d] = unaff_x25;
    puVar25[0x4e] = unaff_x26;
    if ((puVar25[0x37] != 0) &&
       (func_0x0001057974a4(puVar16 + -0xc80,puVar25 + 0x35), *(long *)(puVar16 + -0xc80) != 0)) {
      uVar39 = *(undefined2 *)(puVar16 + -0xc70);
      *(undefined8 *)(puVar16 + -0xc80) = 3;
LAB_100a4efec:
      *(byte **)(puVar16 + -0x18a8) = pbVar38;
      FUN_100de8b24(puVar16 + -0xc80);
      lVar33 = puVar25[0x4d];
      uVar28 = puVar25[0x4e];
      puVar25[0x74] = lVar33;
      puVar25[0x75] = uVar28;
      puVar25[0x76] = puVar36;
      *(undefined2 *)(puVar25 + 0x77) = uVar39;
      *(undefined1 *)((long)puVar25 + 0x3bd) = 0;
      goto LAB_100a4f01c;
    }
    if (1 < *(byte *)(puVar25 + 0x33)) {
      puVar5 = *(uint3 **)(puVar25[0x34] + 8);
      lVar33 = *(long *)(puVar25[0x34] + 0x10);
      if (lVar33 == 2) {
        uVar8 = (ushort)*puVar5;
        uVar35 = ((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8) - 0x7773;
        uVar39 = 0x50;
      }
      else {
        if (lVar33 != 3) goto LAB_100a4f37c;
        uVar35 = (uint)*puVar5;
        uVar9 = uVar35 & 0xff00ff;
        uVar9 = uVar9 >> 8 | ((uVar35 & 0xff00ff00) >> 8 | uVar9 << 8) << 0x10;
        uVar35 = (uint)(0x77737300 < uVar9);
        if (uVar9 < 0x77737300) {
          uVar35 = 0xffffffff;
        }
        uVar39 = 0x1bb;
      }
      *(undefined8 *)(puVar16 + -0xc80) = 3;
      if (uVar35 == 0) goto LAB_100a4efec;
    }
LAB_100a4f37c:
    uVar40 = 3;
    if (puVar25[0x4c] == 0) goto LAB_100a4f1a0;
    goto LAB_100a4f198;
  }
  plVar34 = (long *)(unaff_x27 >> 0x10);
  goto LAB_100a4f1a0;
code_r0x000100a51738:
  lVar20 = puVar25[0x9a];
  lVar33 = puVar25[0x9b];
  if (lVar20 - lVar33 == lVar41) goto code_r0x000100a5174c;
  goto LAB_100a51714;
code_r0x000100a5174c:
  unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
LAB_100a51764:
  puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
  uVar40 = 0xb;
LAB_100a517b8:
  if (puVar25[0x93] != 0) {
    _free(puVar25[0x94]);
  }
  unaff_x26 = (undefined8 *)0x1c;
LAB_100a51864:
  **(undefined1 **)(puVar16 + -0x18c8) = 1;
  goto LAB_100a4fea0;
code_r0x000100a500a4:
  *(undefined8 **)(puVar16 + -0x18c8) = unaff_x26;
  unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
  goto LAB_100a51d3c;
LAB_100a5199c:
  plVar29 = (long *)0x0;
  puVar25[0x98] = unaff_x25;
  puVar25[0x99] = lVar33;
  puVar25[0x9a] = unaff_x25;
  puVar25[0x9b] = puVar25[0x93];
  puVar25[0x9c] = lVar33;
  puVar25[0x9d] = unaff_x25;
  puVar25[0x9e] = 0;
  puVar25[0x9f] = unaff_x25;
  goto LAB_100a519c4;
code_r0x000100a519e8:
  unaff_x25 = (long *)puVar25[0x9d];
  plVar29 = (long *)puVar25[0x9e];
  if ((long)unaff_x25 - (long)plVar29 == lVar33) goto code_r0x000100a519fc;
  goto LAB_100a519c4;
code_r0x000100a52b08:
  lVar33 = puVar25[0x96];
  if ((long *)(puVar25[0x94] - lVar33) < unaff_x25) {
    *(undefined1 **)(puVar16 + -0x18c0) = puVar31;
    *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
    FUN_108855060(puVar25 + 0x94,lVar33,unaff_x25,1,1);
    lVar33 = puVar25[0x96];
    puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
    puVar31 = *(undefined1 **)(puVar16 + -0x18c0);
  }
  _memcpy(puVar25[0x95] + lVar33,puVar25 + 0x97,unaff_x25);
  uVar30 = lVar33 + (long)unaff_x25;
  puVar25[0x96] = uVar30;
  if (3 < uVar30) {
    *(undefined1 **)(puVar16 + -0x18c0) = puVar31;
    piVar22 = (int *)puVar25[0x95];
    if (*piVar22 == 0xa0d0a0d) {
LAB_100a52b84:
      *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
      lVar33 = puVar25[0x94];
      *(undefined1 *)(puVar25 + 0xda) = 1;
      __ZN11tungstenite5proxy27parse_http_connect_response17hdb8c3dd74326ae8aE
                (puVar16 + -0xc80,piVar22,uVar30);
      uVar40 = *(ulong *)(puVar16 + -0xc80);
      uVar35 = (uint)*(ushort *)(puVar16 + -0xc78);
      if (uVar40 == 0x15) {
        *(ushort *)(puVar16 + 0x1670) = *(ushort *)(puVar16 + -0xc78);
        if (uVar35 - 200 < 100) {
          if (lVar33 != 0) {
            _free(piVar22);
          }
          if (puVar25[0x8e] != 0) {
            _free(puVar25[0x8f]);
          }
          puVar31 = *(undefined1 **)(puVar16 + -0x18c0);
          if (puVar25[0x8b] == 0) goto LAB_100a52d80;
          _free(puVar25[0x8c]);
          *(undefined1 *)((long)puVar25 + 0x48c) = 1;
          goto LAB_100a52a98;
        }
        *(long *)(puVar16 + -0x18c8) = lVar33;
        *(undefined1 **)(puVar16 + 0x3f78) = puVar16 + 0x1670;
        *(undefined **)(puVar16 + 0x3f80) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (puVar16 + -0xc80,s_HTTP_CONNECT_failed_with_status_108acee10,puVar16 + 0x3f78);
        unaff_x25 = *(long **)(puVar16 + -0xc78);
        unaff_x26 = *(undefined8 **)(puVar16 + -0xc70);
        uVar35 = (uint)*(ulong *)(puVar16 + -0xc80) & 0xffff;
        puVar23 = (undefined8 *)(*(ulong *)(puVar16 + -0xc80) >> 0x10);
        uVar40 = 8;
      }
      else {
        *(long *)(puVar16 + -0x18c8) = lVar33;
        puVar23 = (undefined8 *)(ulong)*(uint6 *)(puVar16 + -0xc76);
        unaff_x25 = *(long **)(puVar16 + -0xc70);
        unaff_x26 = *(undefined8 **)(puVar16 + -0xc68);
      }
      if (*(long *)(puVar16 + -0x18c8) != 0) {
        _free(piVar22);
      }
      puVar31 = *(undefined1 **)(puVar16 + -0x18c0);
      goto LAB_100a52a68;
    }
    uVar40 = lVar33 + (long)unaff_x25;
    lVar33 = 1;
    while (uVar40 = uVar40 - 1, 3 < uVar40) {
      piVar2 = (int *)((long)piVar22 + lVar33);
      lVar33 = lVar33 + 1;
      if (*piVar2 == 0xa0d0a0d) goto LAB_100a52b84;
    }
    puVar31 = *(undefined1 **)(puVar16 + -0x18c0);
  }
  goto LAB_100a52c40;
code_r0x000100a519fc:
  unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
LAB_100a51a14:
  if (puVar25[0x98] != 0) {
    _free(puVar25[0x99]);
  }
LAB_100a51d3c:
  uVar40 = 0xb;
LAB_100a51d40:
  puVar36 = *(undefined8 **)(puVar16 + -0x18a0);
LAB_100a51dd4:
  if (puVar25[0x94] == 0) {
    *(undefined1 *)puVar23 = 1;
LAB_100a4fea0:
    lVar33 = puVar25[0x8c];
    *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
    if (lVar33 == 0) {
      puVar31 = *(undefined1 **)(puVar16 + -0x18c0);
LAB_100a52ac0:
      *puVar31 = 1;
    }
    else {
LAB_100a4feac:
      _free(puVar25[0x8d]);
      *(undefined1 *)((long)puVar25 + 0x47e) = 1;
      if (uVar40 == 0x15) goto LAB_100a52a98;
    }
LAB_100a52c18:
    FUN_100deb62c(puVar25 + 0x7f);
    bVar17 = true;
  }
  else {
LAB_100a51ddc:
    _free(puVar25[0x95]);
    *(undefined1 *)((long)puVar25 + 0x4be) = 1;
    if (uVar40 != 0x15) goto LAB_100a4fea0;
    lVar33 = puVar25[0x8c];
    *(undefined8 **)(puVar16 + -0x18a0) = puVar36;
joined_r0x000100a51f64:
    if (lVar33 != 0) {
      uVar40 = 0x15;
      goto LAB_100a4feac;
    }
    puVar31 = *(undefined1 **)(puVar16 + -0x18c0);
LAB_100a52d80:
    *puVar31 = 1;
LAB_100a52a98:
    bVar17 = false;
    uVar40 = puVar25[0x7f];
    unaff_x27 = puVar25[0x80];
    unaff_x25 = (long *)puVar25[0x81];
    unaff_x26 = (undefined8 *)puVar25[0x82];
  }
  **(undefined1 **)(puVar16 + -0x18b0) = 1;
  FUN_100d193c4(*(undefined8 *)(puVar16 + -0x18a0));
LAB_100a52a24:
  *(undefined1 *)((long)puVar25 + 0x3bc) = 0;
  if (puVar25[0x6a] != 0) {
    _free(puVar25[0x6b]);
  }
  if (puVar25[0x6d] != -0x8000000000000000) {
    if (puVar25[0x6d] != 0) {
      _free(puVar25[0x6e]);
    }
    if (puVar25[0x70] != 0) {
      _free(puVar25[0x71]);
    }
  }
LAB_100a4f178:
  *pbVar38 = 1;
  FUN_100e7204c(plVar34);
  if (bVar17) {
    plVar34 = (long *)(unaff_x27 >> 0x10);
    lVar33 = puVar25[0x4c];
joined_r0x000100a4f7a8:
    if (lVar33 != 0) {
LAB_100a4f198:
      _free(puVar25[0x4d]);
    }
LAB_100a4f1a0:
    auVar11._8_8_ = unaff_x26;
    auVar11._0_8_ = unaff_x25;
    if ((puVar25[0xdb] != 0) && (plVar29 = (long *)puVar25[0xdc], plVar29 != (long *)0x0)) {
      lVar33 = *plVar29;
      *plVar29 = lVar33 + -1;
      LORelease();
      if (lVar33 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4e229937a5e8886E(puVar25 + 0xdc);
      }
    }
    *(undefined1 *)((long)puVar25 + 0x29b) = 0;
    FUN_100de01d8(puVar25 + 0x27);
    lVar33 = 2;
  }
  else {
    puVar25[0x4f] = uVar40;
    puVar25[0x50] = unaff_x27;
    puVar25[0x51] = unaff_x25;
    puVar25[0x52] = unaff_x26;
    if (*(char *)((long)puVar25 + 0x29a) == '\x01') {
      if ((int)unaff_x26 == -1) {
        func_0x000108a07a20(&UNK_10b4cd2b8);
        goto LAB_100a52e04;
      }
      *(undefined4 *)(puVar16 + -0xc80) = 1;
      iVar18 = _setsockopt(unaff_x26,6,1,puVar16 + -0xc80,4);
      if (iVar18 == -1) {
        piVar22 = (int *)___error();
        iVar18 = *piVar22;
        FUN_100deb62c(puVar25 + 0x4f);
        plVar34 = (long *)((long)iVar18 << 0x10);
        unaff_x27 = 2;
        uVar40 = 0xb;
        lVar33 = puVar25[0x4c];
        goto joined_r0x000100a4f7a8;
      }
    }
    *(undefined1 *)((long)puVar25 + 0x29c) = 0;
    uVar28 = puVar25[0x3b];
    uVar46 = puVar25[0x3e];
    uVar45 = puVar25[0x3d];
    *(undefined8 *)(puVar16 + -0x1788) = puVar25[0x3c];
    *(undefined8 *)(puVar16 + -0x1790) = uVar28;
    *(undefined8 *)(puVar16 + -0x1778) = uVar46;
    *(undefined8 *)(puVar16 + -0x1780) = uVar45;
    uVar28 = puVar25[0x3f];
    uVar46 = puVar25[0x42];
    uVar45 = puVar25[0x41];
    *(undefined8 *)(puVar16 + -0x1768) = puVar25[0x40];
    *(undefined8 *)(puVar16 + -6000) = uVar28;
    *(undefined8 *)(puVar16 + -0x1758) = uVar46;
    *(undefined8 *)(puVar16 + -0x1760) = uVar45;
    uVar28 = puVar25[0x33];
    uVar46 = puVar25[0x36];
    uVar45 = puVar25[0x35];
    *(undefined8 *)(puVar16 + -0x17c8) = puVar25[0x34];
    *(undefined8 *)(puVar16 + -0x17d0) = uVar28;
    *(undefined8 *)(puVar16 + -0x17b8) = uVar46;
    *(undefined8 *)(puVar16 + -0x17c0) = uVar45;
    uVar28 = puVar25[0x37];
    uVar46 = puVar25[0x3a];
    uVar45 = puVar25[0x39];
    *(undefined8 *)(puVar16 + -0x17a8) = puVar25[0x38];
    *(undefined8 *)(puVar16 + -0x17b0) = uVar28;
    *(undefined8 *)(puVar16 + -0x1798) = uVar46;
    *(undefined8 *)(puVar16 + -0x17a0) = uVar45;
    uVar28 = puVar25[0x2b];
    uVar46 = puVar25[0x2e];
    uVar45 = puVar25[0x2d];
    *(undefined8 *)(puVar16 + -0x1808) = puVar25[0x2c];
    *(undefined8 *)(puVar16 + -0x1810) = uVar28;
    *(undefined8 *)(puVar16 + -0x17f8) = uVar46;
    *(undefined8 *)(puVar16 + -0x1800) = uVar45;
    uVar28 = puVar25[0x2f];
    uVar46 = puVar25[0x32];
    uVar45 = puVar25[0x31];
    *(undefined8 *)(puVar16 + -0x17e8) = puVar25[0x30];
    *(undefined8 *)(puVar16 + -0x17f0) = uVar28;
    *(undefined8 *)(puVar16 + -0x17d8) = uVar46;
    *(undefined8 *)(puVar16 + -0x17e0) = uVar45;
    uVar28 = puVar25[0x27];
    uVar46 = puVar25[0x2a];
    uVar45 = puVar25[0x29];
    *(undefined8 *)(puVar16 + -0x1828) = puVar25[0x28];
    *(undefined8 *)(puVar16 + -0x1830) = uVar28;
    *(undefined8 *)(puVar16 + -0x1818) = uVar46;
    *(undefined8 *)(puVar16 + -0x1820) = uVar45;
    uVar28 = puVar25[0x47];
    uVar46 = puVar25[0x4a];
    uVar45 = puVar25[0x49];
    *(undefined8 *)(puVar16 + -0x1858) = puVar25[0x48];
    *(undefined8 *)(puVar16 + -0x1860) = uVar28;
    *(undefined8 *)(puVar16 + -0x1848) = uVar46;
    *(undefined8 *)(puVar16 + -0x1850) = uVar45;
    *(undefined8 *)(puVar16 + -0x1840) = puVar25[0x4b];
    uVar46 = puVar25[0x43];
    uVar45 = puVar25[0x46];
    uVar28 = puVar25[0x45];
    *(undefined8 *)(puVar16 + -0x1878) = puVar25[0x44];
    *(undefined8 *)(puVar16 + -0x1880) = uVar46;
    *(undefined8 *)(puVar16 + -0x1868) = uVar45;
    *(undefined8 *)(puVar16 + -0x1870) = uVar28;
    *(undefined1 *)((long)puVar25 + 0x29b) = 0;
    uVar30 = puVar25[0xdb];
    uVar28 = puVar25[0xdc];
    lVar33 = puVar25[0x4f];
    lVar41 = puVar25[0x52];
    lVar20 = puVar25[0x51];
    plVar34[1] = puVar25[0x50];
    *plVar34 = lVar33;
    plVar34[3] = lVar41;
    plVar34[2] = lVar20;
    puVar25[0x58] = uVar30;
    puVar25[0x59] = uVar28;
    uVar45 = *(undefined8 *)(puVar16 + -0x1790);
    uVar47 = *(undefined8 *)(puVar16 + -0x1778);
    uVar46 = *(undefined8 *)(puVar16 + -0x1780);
    puVar25[0x6f] = *(undefined8 *)(puVar16 + -0x1788);
    puVar25[0x6e] = uVar45;
    puVar25[0x71] = uVar47;
    puVar25[0x70] = uVar46;
    uVar45 = *(undefined8 *)(puVar16 + -6000);
    uVar47 = *(undefined8 *)(puVar16 + -0x1758);
    uVar46 = *(undefined8 *)(puVar16 + -0x1760);
    puVar25[0x73] = *(undefined8 *)(puVar16 + -0x1768);
    puVar25[0x72] = uVar45;
    puVar25[0x75] = uVar47;
    puVar25[0x74] = uVar46;
    uVar45 = *(undefined8 *)(puVar16 + -0x17d0);
    uVar47 = *(undefined8 *)(puVar16 + -0x17b8);
    uVar46 = *(undefined8 *)(puVar16 + -0x17c0);
    puVar25[0x67] = *(undefined8 *)(puVar16 + -0x17c8);
    puVar25[0x66] = uVar45;
    puVar25[0x69] = uVar47;
    puVar25[0x68] = uVar46;
    uVar45 = *(undefined8 *)(puVar16 + -0x17b0);
    uVar47 = *(undefined8 *)(puVar16 + -0x1798);
    uVar46 = *(undefined8 *)(puVar16 + -0x17a0);
    puVar25[0x6b] = *(undefined8 *)(puVar16 + -0x17a8);
    puVar25[0x6a] = uVar45;
    puVar25[0x6d] = uVar47;
    puVar25[0x6c] = uVar46;
    uVar45 = *(undefined8 *)(puVar16 + -0x1810);
    uVar47 = *(undefined8 *)(puVar16 + -0x17f8);
    uVar46 = *(undefined8 *)(puVar16 + -0x1800);
    puVar25[0x5f] = *(undefined8 *)(puVar16 + -0x1808);
    puVar25[0x5e] = uVar45;
    puVar25[0x61] = uVar47;
    puVar25[0x60] = uVar46;
    uVar45 = *(undefined8 *)(puVar16 + -0x17f0);
    uVar47 = *(undefined8 *)(puVar16 + -0x17d8);
    uVar46 = *(undefined8 *)(puVar16 + -0x17e0);
    puVar25[99] = *(undefined8 *)(puVar16 + -0x17e8);
    puVar25[0x62] = uVar45;
    puVar25[0x65] = uVar47;
    puVar25[100] = uVar46;
    uVar45 = *(undefined8 *)(puVar16 + -0x1830);
    uVar47 = *(undefined8 *)(puVar16 + -0x1818);
    uVar46 = *(undefined8 *)(puVar16 + -0x1820);
    puVar25[0x5b] = *(undefined8 *)(puVar16 + -0x1828);
    puVar25[0x5a] = uVar45;
    puVar25[0x5d] = uVar47;
    puVar25[0x5c] = uVar46;
    uVar45 = *(undefined8 *)(puVar16 + -0x1860);
    uVar47 = *(undefined8 *)(puVar16 + -0x1848);
    uVar46 = *(undefined8 *)(puVar16 + -0x1850);
    puVar25[0x7b] = *(undefined8 *)(puVar16 + -0x1858);
    puVar25[0x7a] = uVar45;
    puVar25[0x7d] = uVar47;
    puVar25[0x7c] = uVar46;
    puVar25[0x7e] = *(undefined8 *)(puVar16 + -0x1840);
    uVar47 = *(undefined8 *)(puVar16 + -0x1880);
    uVar46 = *(undefined8 *)(puVar16 + -0x1868);
    uVar45 = *(undefined8 *)(puVar16 + -0x1870);
    puVar25[0x77] = *(undefined8 *)(puVar16 + -0x1878);
    puVar25[0x76] = uVar47;
    puVar25[0x79] = uVar46;
    puVar25[0x78] = uVar45;
    *(undefined8 **)(puVar16 + -0x18a0) = puVar25 + 0xaa;
    *(undefined1 *)(puVar25 + 0xaa) = 0;
    pbVar38 = *(byte **)(puVar16 + -0x18a8);
LAB_100a4f30c:
    puVar36 = puVar25 + 0x54;
    *(undefined1 *)((long)puVar25 + 0x551) = 0;
    lVar33 = puVar25[0x5a];
    uVar40 = puVar25[0x5b];
    unaff_x27 = puVar25[0x5c];
    unaff_x25 = (long *)puVar25[0x5d];
    unaff_x26 = (undefined8 *)puVar25[0x5e];
    uVar45 = *puVar36;
    uVar47 = puVar25[0x57];
    uVar46 = puVar25[0x56];
    *(undefined8 *)(puVar16 + -0x1138) = puVar25[0x55];
    *(undefined8 *)(puVar16 + -0x1140) = uVar45;
    *(undefined8 *)(puVar16 + -0x1128) = uVar47;
    *(undefined8 *)(puVar16 + -0x1130) = uVar46;
    puVar25[0x84] = puVar25[0x7b];
    puVar25[0x83] = puVar25[0x7a];
    puVar25[0x86] = puVar25[0x7d];
    puVar25[0x85] = puVar25[0x7c];
    puVar25[0x87] = puVar25[0x7e];
    puVar25[0x80] = puVar25[0x77];
    puVar25[0x7f] = puVar25[0x76];
    puVar25[0x82] = puVar25[0x79];
    puVar25[0x81] = puVar25[0x78];
    *(undefined2 *)((long)puVar25 + 0x552) = 0x101;
    puVar25[0x88] = uVar30;
    puVar25[0x89] = uVar28;
    if (lVar33 == 3) {
      plVar34 = (long *)(unaff_x27 >> 8);
joined_r0x000100a4f650:
      if ((((uVar30 & 1) != 0) && ((*(byte *)((long)puVar25 + 0x552) & 1) != 0)) &&
         (plVar29 = (long *)puVar25[0x89], plVar29 != (long *)0x0)) {
        lVar33 = *plVar29;
        *plVar29 = lVar33 + -1;
        LORelease();
        if (lVar33 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4e229937a5e8886E();
        }
      }
      auVar11._8_8_ = unaff_x26;
      auVar11._0_8_ = unaff_x25;
      *(undefined1 *)((long)puVar25 + 0x552) = 0;
      if ((*(byte *)((long)puVar25 + 0x553) & 1) != 0) {
        FUN_100deb62c(puVar16 + -0x1140);
      }
      *(undefined1 *)((long)puVar25 + 0x553) = 0;
      lVar33 = 2;
    }
    else {
      puVar25[0x8a] = lVar33;
      puVar25[0x8b] = uVar40;
      puVar25[0x8c] = unaff_x27;
      puVar25[0x8d] = unaff_x25;
      puVar25[0x8e] = unaff_x26;
      puVar25[0xa5] = puVar25[0x75];
      puVar25[0xa0] = puVar25[0x70];
      puVar25[0x9f] = puVar25[0x6f];
      puVar25[0xa2] = puVar25[0x72];
      puVar25[0xa1] = puVar25[0x71];
      puVar25[0xa4] = puVar25[0x74];
      puVar25[0xa3] = puVar25[0x73];
      puVar25[0x98] = puVar25[0x68];
      puVar25[0x97] = puVar25[0x67];
      puVar25[0x9a] = puVar25[0x6a];
      puVar25[0x99] = puVar25[0x69];
      puVar25[0x9c] = puVar25[0x6c];
      puVar25[0x9b] = puVar25[0x6b];
      puVar25[0x9e] = puVar25[0x6e];
      puVar25[0x9d] = puVar25[0x6d];
      puVar25[0x90] = puVar25[0x60];
      puVar25[0x8f] = puVar25[0x5f];
      puVar25[0x92] = puVar25[0x62];
      puVar25[0x91] = puVar25[0x61];
      puVar25[0x94] = puVar25[100];
      puVar25[0x93] = puVar25[99];
      puVar25[0x96] = puVar25[0x66];
      puVar25[0x95] = puVar25[0x65];
      FUN_100a4e90c(puVar16 + -0xc80,puVar25 + 0x8a);
      uVar40 = *(ulong *)(puVar16 + -0xc80);
      unaff_x27 = *(ulong *)(puVar16 + -0xc78);
      unaff_x25 = *(long **)(puVar16 + -0xc70);
      unaff_x26 = *(undefined8 **)(puVar16 + -0xc68);
      if (uVar40 != 0x15) {
        plVar34 = (long *)(unaff_x27 >> 8);
LAB_100a4f640:
        *(undefined1 *)((long)puVar25 + 0x551) = 0;
        FUN_100de01d8(puVar25 + 0x8a);
        uVar30 = puVar25[0x88];
        goto joined_r0x000100a4f650;
      }
      *(undefined1 *)((long)puVar25 + 0x551) = 1;
      puVar25[0xa6] = unaff_x27;
      puVar25[0xa7] = unaff_x25;
      puVar25[0xa8] = unaff_x26;
      if (*(byte *)(puVar25 + 0x96) < 2) {
LAB_100a4f424:
        uVar40 = 3;
LAB_100a4f630:
        if (puVar25[0xa6] != 0) {
          _free(puVar25[0xa7]);
        }
        goto LAB_100a4f640;
      }
      psVar6 = *(short **)(puVar25[0x97] + 8);
      lVar33 = *(long *)(puVar25[0x97] + 0x10);
      if (lVar33 == 3) {
        if (*psVar6 != 0x7377 || (char)psVar6[1] != 's') goto LAB_100a4f424;
        bVar17 = true;
      }
      else {
        if ((lVar33 != 2) || (*psVar6 != 0x7377)) goto LAB_100a4f424;
        bVar17 = false;
      }
      if (*(int *)(puVar25 + 0x88) != 1) {
        *(undefined1 *)((long)puVar25 + 0x553) = 0;
        uVar46 = *(undefined8 *)(puVar16 + -0x1138);
        uVar45 = *(undefined8 *)(puVar16 + -0x1140);
        uVar48 = *(undefined8 *)(puVar16 + -0x1128);
        uVar47 = *(undefined8 *)(puVar16 + -0x1130);
        *(undefined1 *)((long)puVar25 + 0x551) = 0;
        uVar50 = puVar25[0xa7];
        uVar49 = puVar25[0xa6];
        uVar28 = puVar25[0xa8];
        *(undefined8 *)(puVar16 + 23000) = uVar48;
        *(undefined8 *)(puVar16 + 0x59d0) = uVar47;
        *(undefined8 *)(puVar16 + 0x59c8) = uVar46;
        *(undefined8 *)(puVar16 + 0x59c0) = uVar45;
        *(undefined8 *)(puVar16 + 0x59f0) = uVar28;
        *(undefined8 *)(puVar16 + 0x59e8) = uVar50;
        *(undefined8 *)(puVar16 + 0x59e0) = uVar49;
        puVar25[0xac] = uVar46;
        puVar25[0xab] = uVar45;
        puVar25[0xae] = uVar48;
        puVar25[0xad] = uVar47;
        puVar25[0xb0] = uVar50;
        puVar25[0xaf] = uVar49;
        puVar25[0xb1] = uVar28;
        puVar25[0xb2] = 0;
        *(bool *)(puVar25 + 0x141) = bVar17;
        *(undefined1 *)((long)puVar25 + 0xa09) = 0;
LAB_100a4f088:
        FUN_100a4c858(puVar16 + -0xc80,puVar25 + 0xab,*(undefined8 *)(puVar16 + -0x1888));
        lVar33 = *(long *)(puVar16 + -0xc80);
        if (lVar33 != 4) {
          uVar40 = *(ulong *)(puVar16 + -0xc78);
          unaff_x27 = *(ulong *)(puVar16 + -0xc70);
          unaff_x25 = *(long **)(puVar16 + -0xc68);
          unaff_x26 = *(undefined8 **)(puVar16 + -0xc60);
          _memcpy(puVar16 + -0x10a0,puVar16 + -0xc58,0x420);
          FUN_100d40240(puVar25 + 0xab);
LAB_100a4f61c:
          puVar36 = puVar25 + 0x54;
          if (lVar33 == 3) goto LAB_100a4f624;
          goto LAB_100a50160;
        }
        uVar26 = 5;
LAB_100a50d18:
        **(undefined1 **)(puVar16 + -0x18a0) = uVar26;
        *plVar21 = 3;
        uVar26 = 4;
        goto LAB_100a51334;
      }
      *(undefined1 *)((long)puVar25 + 0x552) = 0;
      lVar33 = puVar25[0x89];
      puVar25[0xa9] = lVar33;
      if (lVar33 != 0) {
        *(undefined1 *)((long)puVar25 + 0x553) = 0;
        uVar46 = *(undefined8 *)(puVar16 + -0x1138);
        uVar45 = *(undefined8 *)(puVar16 + -0x1140);
        uVar48 = *(undefined8 *)(puVar16 + -0x1128);
        uVar47 = *(undefined8 *)(puVar16 + -0x1130);
        *(undefined1 *)((long)puVar25 + 0x551) = 0;
        uVar50 = puVar25[0xa7];
        uVar49 = puVar25[0xa6];
        uVar28 = puVar25[0xa8];
        *(undefined8 *)(puVar16 + 23000) = uVar48;
        *(undefined8 *)(puVar16 + 0x59d0) = uVar47;
        *(undefined8 *)(puVar16 + 0x59c8) = uVar46;
        *(undefined8 *)(puVar16 + 0x59c0) = uVar45;
        *(undefined8 *)(puVar16 + 0x59f0) = uVar28;
        *(undefined8 *)(puVar16 + 0x59e8) = uVar50;
        *(undefined8 *)(puVar16 + 0x59e0) = uVar49;
        puVar25[0xac] = uVar46;
        puVar25[0xab] = uVar45;
        puVar25[0xae] = uVar48;
        puVar25[0xad] = uVar47;
        puVar25[0xb0] = uVar50;
        puVar25[0xaf] = uVar49;
        puVar25[0xb1] = uVar28;
        puVar25[0xb2] = lVar33;
        *(bool *)(puVar25 + 0x141) = bVar17;
        *(undefined1 *)((long)puVar25 + 0xa09) = 0;
LAB_100a4f434:
        FUN_100a4c858(puVar16 + -0xc80,puVar25 + 0xab,*(undefined8 *)(puVar16 + -0x1888));
        lVar33 = *(long *)(puVar16 + -0xc80);
        if (lVar33 != 4) {
          uVar40 = *(ulong *)(puVar16 + -0xc78);
          unaff_x27 = *(ulong *)(puVar16 + -0xc70);
          unaff_x25 = *(long **)(puVar16 + -0xc68);
          unaff_x26 = *(undefined8 **)(puVar16 + -0xc60);
          _memcpy(puVar16 + -0x10a0,puVar16 + -0xc58,0x420);
          FUN_100d40240(puVar25 + 0xab);
          goto LAB_100a4f61c;
        }
        uVar26 = 3;
        goto LAB_100a50d18;
      }
      *(undefined1 *)((long)puVar25 + 0x553) = 0;
      uVar45 = *(undefined8 *)(puVar16 + -0x1138);
      uVar28 = *(undefined8 *)(puVar16 + -0x1140);
      uVar47 = *(undefined8 *)(puVar16 + -0x1128);
      uVar46 = *(undefined8 *)(puVar16 + -0x1130);
      puVar25[0xac] = uVar45;
      puVar25[0xab] = uVar28;
      puVar25[0xae] = uVar47;
      puVar25[0xad] = uVar46;
      *(bool *)(puVar25 + 0xaf) = bVar17;
      *(undefined1 *)((long)puVar25 + 0x579) = 0;
      *(undefined8 *)(puVar16 + -0xc78) = uVar45;
      *(undefined8 *)(puVar16 + -0xc80) = uVar28;
      *(undefined8 *)(puVar16 + -0xc68) = uVar47;
      *(undefined8 *)(puVar16 + -0xc70) = uVar46;
      if (bVar17) {
LAB_100a4f484:
        puVar23 = (undefined8 *)((long)puVar25 + 0x579);
        FUN_100deb62c(puVar16 + -0xc80);
        uVar40 = 0;
        *(undefined1 *)puVar23 = 1;
LAB_100a4f624:
        plVar34 = (long *)(unaff_x27 >> 8);
        if ((*(byte *)((long)puVar25 + 0x551) & 1) == 0) goto LAB_100a4f640;
        goto LAB_100a4f630;
      }
LAB_100a5013c:
      uVar40 = *(ulong *)(puVar16 + -0xc80);
      unaff_x27 = puVar25[0xac];
      unaff_x25 = (long *)puVar25[0xad];
      lVar33 = 2;
      unaff_x26 = (undefined8 *)puVar25[0xae];
      *(undefined1 *)((long)puVar25 + 0x579) = 1;
LAB_100a50160:
      *(undefined8 **)(puVar16 + -0x18b0) = puVar36;
      puVar25[0xc0] = puVar25[0x9f];
      puVar25[0xbf] = puVar25[0x9e];
      puVar25[0xc2] = puVar25[0xa1];
      puVar25[0xc1] = puVar25[0xa0];
      puVar25[0xc4] = puVar25[0xa3];
      puVar25[0xc3] = puVar25[0xa2];
      puVar25[0xc6] = puVar25[0xa5];
      puVar25[0xc5] = puVar25[0xa4];
      puVar25[0xb8] = puVar25[0x97];
      puVar25[0xb7] = puVar25[0x96];
      puVar25[0xba] = puVar25[0x99];
      puVar25[0xb9] = puVar25[0x98];
      puVar25[0xbc] = puVar25[0x9b];
      puVar25[0xbb] = puVar25[0x9a];
      puVar25[0xbe] = puVar25[0x9d];
      puVar25[0xbd] = puVar25[0x9c];
      puVar25[0xb0] = puVar25[0x8f];
      puVar25[0xaf] = puVar25[0x8e];
      puVar25[0xb2] = puVar25[0x91];
      puVar25[0xb1] = puVar25[0x90];
      puVar25[0xb4] = puVar25[0x93];
      puVar25[0xb3] = puVar25[0x92];
      puVar25[0xb6] = puVar25[0x95];
      puVar25[0xb5] = puVar25[0x94];
      puVar25[0xac] = puVar25[0x8b];
      puVar25[0xab] = puVar25[0x8a];
      puVar25[0xae] = puVar25[0x8d];
      puVar25[0xad] = puVar25[0x8c];
      puVar25[199] = lVar33;
      puVar25[200] = uVar40;
      puVar25[0xc9] = unaff_x27;
      puVar25[0xca] = unaff_x25;
      puVar25[0xcb] = unaff_x26;
      _memcpy(puVar25 + 0xcc,puVar16 + -0x10a0,0x420);
      puVar25[0x153] = puVar25[0x82];
      puVar25[0x152] = puVar25[0x81];
      puVar25[0x155] = puVar25[0x84];
      puVar25[0x154] = puVar25[0x83];
      puVar25[0x157] = puVar25[0x86];
      puVar25[0x156] = puVar25[0x85];
      puVar25[0x158] = puVar25[0x87];
      puVar25[0x151] = puVar25[0x80];
      puVar25[0x150] = puVar25[0x7f];
      pbVar38[8] = 0;
      *(byte **)(puVar16 + -0x18c8) = pbVar38 + 8;
      *(undefined8 *)(puVar16 + -0x1888) = **(undefined8 **)(puVar16 + -0x1888);
LAB_100a5021c:
      uVar28 = puVar25[0xbf];
      uVar46 = puVar25[0xc2];
      uVar45 = puVar25[0xc1];
      *(undefined8 *)(puVar16 + 0x5a68) = puVar25[0xc0];
      *(undefined8 *)(puVar16 + 0x5a60) = uVar28;
      *(undefined8 *)(puVar16 + 0x5a78) = uVar46;
      *(undefined8 *)(puVar16 + 0x5a70) = uVar45;
      uVar28 = puVar25[0xc3];
      uVar46 = puVar25[0xc6];
      uVar45 = puVar25[0xc5];
      *(undefined8 *)(puVar16 + 0x5a88) = puVar25[0xc4];
      *(undefined8 *)(puVar16 + 0x5a80) = uVar28;
      *(undefined8 *)(puVar16 + 0x5a98) = uVar46;
      *(undefined8 *)(puVar16 + 0x5a90) = uVar45;
      uVar28 = puVar25[0xb7];
      uVar46 = puVar25[0xba];
      uVar45 = puVar25[0xb9];
      *(undefined8 *)(puVar16 + 0x5a28) = puVar25[0xb8];
      *(undefined8 *)(puVar16 + 0x5a20) = uVar28;
      *(undefined8 *)(puVar16 + 0x5a38) = uVar46;
      *(undefined8 *)(puVar16 + 0x5a30) = uVar45;
      uVar28 = puVar25[0xbb];
      uVar46 = puVar25[0xbe];
      uVar45 = puVar25[0xbd];
      *(undefined8 *)(puVar16 + 0x5a48) = puVar25[0xbc];
      *(undefined8 *)(puVar16 + 0x5a40) = uVar28;
      *(undefined8 *)(puVar16 + 0x5a58) = uVar46;
      *(undefined8 *)(puVar16 + 0x5a50) = uVar45;
      uVar28 = puVar25[0xaf];
      uVar46 = puVar25[0xb2];
      uVar45 = puVar25[0xb1];
      *(undefined8 *)(puVar16 + 0x59e8) = puVar25[0xb0];
      *(undefined8 *)(puVar16 + 0x59e0) = uVar28;
      *(undefined8 *)(puVar16 + 0x59f8) = uVar46;
      *(undefined8 *)(puVar16 + 0x59f0) = uVar45;
      uVar28 = puVar25[0xb3];
      uVar46 = puVar25[0xb6];
      uVar45 = puVar25[0xb5];
      *(undefined8 *)(puVar16 + 0x5a08) = puVar25[0xb4];
      *(undefined8 *)(puVar16 + 0x5a00) = uVar28;
      *(undefined8 *)(puVar16 + 0x5a18) = uVar46;
      *(undefined8 *)(puVar16 + 0x5a10) = uVar45;
      uVar28 = puVar25[0xab];
      uVar46 = puVar25[0xae];
      uVar45 = puVar25[0xad];
      *(undefined8 *)(puVar16 + 0x59c8) = puVar25[0xac];
      *(undefined8 *)(puVar16 + 0x59c0) = uVar28;
      *(undefined8 *)(puVar16 + 23000) = uVar46;
      *(undefined8 *)(puVar16 + 0x59d0) = uVar45;
      _memcpy(puVar16 + -0xc80,puVar25 + 199,0x448);
      uVar45 = puVar25[0x153];
      uVar28 = puVar25[0x152];
      uVar46 = puVar25[0x154];
      uVar48 = puVar25[0x157];
      uVar47 = puVar25[0x156];
      *(undefined8 *)(puVar16 + 0x5ac8) = puVar25[0x155];
      *(undefined8 *)(puVar16 + 0x5ac0) = uVar46;
      *(undefined8 *)(puVar16 + 0x5ad8) = uVar48;
      *(undefined8 *)(puVar16 + 0x5ad0) = uVar47;
      *(undefined8 *)(puVar16 + 0x5ae0) = puVar25[0x158];
      uVar47 = puVar25[0x151];
      uVar46 = puVar25[0x150];
      *(undefined8 *)(puVar16 + 0x5ab8) = uVar45;
      *(undefined8 *)(puVar16 + 0x5ab0) = uVar28;
      *(undefined8 *)(puVar16 + 0x5aa8) = uVar47;
      *(undefined8 *)(puVar16 + 0x5aa0) = uVar46;
      _memcpy(puVar16 + -0x838,puVar16 + 0x59c0,0x128);
      _memcpy(puVar25 + 0x159,puVar16 + -0xc80,0x1c50);
      *pbVar38 = 0;
LAB_100a502dc:
      _memcpy(puVar16 + 0x59c0,puVar25 + 0x159,0x448);
      _memcpy(puVar16 + 0x5e08,puVar25 + 0x1e2,0x128);
      _memcpy(puVar16 + 0x1670,puVar16 + 0x59c0,0x570);
      _memcpy(puVar25 + 0x207,puVar16 + 0x1670,0x570);
      *(undefined1 *)(puVar25 + 0x2b5) = 0;
LAB_100a50348:
      _memcpy(puVar16 + 0x5ae8,puVar25 + 0x207,0x448);
      _memcpy(puVar16 + 0x59c0,puVar25 + 0x290,0x128);
      _memcpy(puVar16 + 0x2800,puVar16 + 0x59c0,0x570);
      _memcpy(puVar25 + 0x2b6,puVar16 + 0x2800,0x570);
LAB_100a503a8:
      *(byte **)(puVar16 + -0x18a8) = pbVar38;
      lVar33 = puVar25[0x2b6];
      puVar25[0x2b6] = 3;
      *(undefined8 **)(puVar16 + -0x18c0) = puVar25 + 0x159;
      *(undefined8 **)(puVar16 + -0x18b8) = puVar25 + 0x207;
      if (lVar33 == 3) {
        func_0x000108a079f0(&UNK_108ca1c5f,0x1e,&UNK_10b21da58);
        goto LAB_100a52e04;
      }
      *(long *)(puVar16 + 0x3f78) = lVar33;
      _memcpy(puVar16 + 0x3f80,puVar25 + 0x2b7,0x568);
      if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
        *(undefined8 *)(puVar16 + 0x54f8) = 0x1c;
        *(undefined **)(puVar16 + 0x5508) = &UNK_108ca77d7;
        *(undefined8 *)(puVar16 + 0x5510) = 0x47;
        *(undefined8 *)(puVar16 + 0x54b8) = 0;
        *(undefined **)(puVar16 + 0x54c0) = &UNK_108ca1c99;
        *(undefined8 *)(puVar16 + 0x54d0) = 0;
        *(undefined8 *)(puVar16 + 0x54c8) = 0x1c;
        *(undefined **)(puVar16 + 0x54f0) = &UNK_108ca1c99;
        *(char **)(puVar16 + 0x54d8) =
             "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/handshake.rs"
        ;
        *(undefined8 *)(puVar16 + 0x54e8) = 5;
        *(undefined8 *)(puVar16 + 0x54e0) = 0x5e;
        *(undefined8 *)(puVar16 + 0x5500) = 0x9000000001;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        (**(code **)(puVar3 + 0x20))(puVar4,puVar16 + 0x54b8);
      }
      _memcpy(puVar16 + 0x4fd0,puVar16 + 0x40a0,0x448);
      puVar23 = (undefined8 *)_malloc(0x40);
      if (puVar23 == (undefined8 *)0x0) {
        func_0x0001087c906c(8,0x40);
        goto LAB_100a52e04;
      }
      *(undefined8 *)(puVar16 + 0x54c0) = 0;
      puVar23[1] = 1;
      *puVar23 = 1;
      puVar23[2] = 0;
      puVar23[5] = 0;
      uVar28 = *(undefined8 *)(puVar16 + 0x54b8);
      puVar23[4] = *(undefined8 *)(puVar16 + 0x54c0);
      puVar23[3] = uVar28;
      puVar23[7] = 0;
      *(undefined8 **)(puVar16 + 0x4a80) = puVar23;
      puVar36 = (undefined8 *)_malloc(0x40);
      if (puVar36 == (undefined8 *)0x0) {
        func_0x0001087c906c(8,0x40);
        goto LAB_100a52e04;
      }
      *(undefined8 *)(puVar16 + 0x54c0) = 0;
      uVar28 = 1;
      puVar36[1] = 1;
      *puVar36 = 1;
      puVar36[2] = 0;
      puVar36[5] = 0;
      uVar45 = *(undefined8 *)(puVar16 + 0x54b8);
      puVar36[4] = *(undefined8 *)(puVar16 + 0x54c0);
      puVar36[3] = uVar45;
      puVar36[7] = 0;
      _memcpy(puVar16 + 0x54b8,puVar16 + 0x40a0,0x448);
      *(undefined8 **)(puVar16 + 0x5900) = puVar23;
      *(undefined8 **)(puVar16 + 0x5908) = puVar36;
      lVar20 = puVar23[4];
      if (lVar20 == 0) {
        puVar23[4] = 1;
      }
      if (lVar20 != 2) {
        plVar34 = *(long **)(puVar16 + -0x1888);
        if (lVar20 != 0) goto LAB_100a505f8;
        if ((undefined8 *)puVar23[2] == (undefined8 *)0x0) {
          lVar20 = plVar34[1];
LAB_100a5059c:
          auVar51 = (**(code **)*plVar34)(lVar20);
          uVar28 = auVar51._8_8_;
          if (puVar23[2] != 0) {
            (**(code **)(puVar23[2] + 0x18))(puVar23[3]);
          }
          *(undefined1 (*) [16])(puVar23 + 2) = auVar51;
        }
        else {
          lVar20 = plVar34[1];
          if (((undefined8 *)puVar23[2] != (undefined8 *)*plVar34) || (puVar23[3] != lVar20))
          goto LAB_100a5059c;
        }
        if (puVar23[4] == 1) {
          puVar23[4] = in_xzr;
          goto LAB_100a505f8;
        }
        lVar20 = puVar23[2];
        lVar41 = puVar23[3];
        puVar23[2] = 0;
        if (lVar20 != 0) {
          LOAcquire();
          puVar23[4] = in_xzr;
          LORelease();
          puVar37 = (undefined8 *)(lVar20 + 8);
          goto LAB_100a505f0;
        }
LAB_100a51ff8:
        func_0x000108a07a20(&UNK_10b398268);
        goto LAB_100a52e04;
      }
      plVar34 = *(long **)(puVar16 + -0x1888);
      lVar41 = plVar34[1];
      puVar37 = (undefined8 *)(*plVar34 + 0x10);
LAB_100a505f0:
      (*(code *)*puVar37)(lVar41);
LAB_100a505f8:
      auVar11._8_8_ = uVar28;
      auVar11._0_8_ = puVar23;
      auVar12._8_8_ = uVar28;
      auVar12._0_8_ = puVar23;
      auVar54._8_8_ = uVar28;
      auVar54._0_8_ = puVar23;
      lVar20 = puVar36[4];
      if (lVar20 == 0) {
        puVar36[4] = 1;
      }
      if (lVar20 == 2) {
        lVar20 = plVar34[1];
        puVar23 = (undefined8 *)(*plVar34 + 0x10);
LAB_100a506a0:
        (*(code *)*puVar23)(lVar20);
      }
      else {
        auVar11 = auVar12;
        if (lVar20 == 0) {
          if ((undefined8 *)puVar36[2] == (undefined8 *)0x0) {
            lVar20 = plVar34[1];
LAB_100a5064c:
            auVar54 = (**(code **)*plVar34)(lVar20);
            if (puVar36[2] != 0) {
              (**(code **)(puVar36[2] + 0x18))(puVar36[3]);
            }
            *(undefined1 (*) [16])(puVar36 + 2) = auVar54;
          }
          else {
            lVar20 = plVar34[1];
            if (((undefined8 *)puVar36[2] != (undefined8 *)*plVar34) || (puVar36[3] != lVar20))
            goto LAB_100a5064c;
          }
          auVar11 = auVar54;
          if (puVar36[4] != 1) {
            lVar41 = puVar36[2];
            lVar20 = puVar36[3];
            puVar36[2] = 0;
            if (lVar41 == 0) goto LAB_100a51ff8;
            LOAcquire();
            puVar36[4] = in_xzr;
            LORelease();
            puVar23 = (undefined8 *)(lVar41 + 8);
            goto LAB_100a506a0;
          }
          puVar36[4] = in_xzr;
        }
      }
      _memcpy(puVar16 + 0x45c8,puVar16 + 0x54b8,0x458);
      *(undefined8 *)(puVar16 + 0x44f8) = *(undefined8 *)(puVar16 + 0x3f88);
      *(undefined8 *)(puVar16 + 0x44f0) = *(undefined8 *)(puVar16 + 0x3f80);
      *(undefined8 *)(puVar16 + 0x4508) = *(undefined8 *)(puVar16 + 0x3f98);
      *(undefined8 *)(puVar16 + 0x4500) = *(undefined8 *)(puVar16 + 0x3f90);
      *(undefined8 *)(puVar16 + 0x4598) = *(undefined8 *)(puVar16 + 0x4028);
      *(undefined8 *)(puVar16 + 0x4590) = *(undefined8 *)(puVar16 + 0x4020);
      *(undefined8 *)(puVar16 + 0x45a8) = *(undefined8 *)(puVar16 + 0x4038);
      *(undefined8 *)(puVar16 + 0x45a0) = *(undefined8 *)(puVar16 + 0x4030);
      *(undefined8 *)(puVar16 + 0x45b8) = *(undefined8 *)(puVar16 + 0x4048);
      *(undefined8 *)(puVar16 + 0x45b0) = *(undefined8 *)(puVar16 + 0x4040);
      *(undefined8 *)(puVar16 + 0x4558) = *(undefined8 *)(puVar16 + 0x3fe8);
      *(undefined8 *)(puVar16 + 0x4550) = *(undefined8 *)(puVar16 + 0x3fe0);
      *(undefined8 *)(puVar16 + 0x4568) = *(undefined8 *)(puVar16 + 0x3ff8);
      *(undefined8 *)(puVar16 + 0x4560) = *(undefined8 *)(puVar16 + 0x3ff0);
      *(undefined8 *)(puVar16 + 0x4578) = *(undefined8 *)(puVar16 + 0x4008);
      *(undefined8 *)(puVar16 + 0x4570) = *(undefined8 *)(puVar16 + 0x4000);
      *(undefined8 *)(puVar16 + 0x4588) = *(undefined8 *)(puVar16 + 0x4018);
      *(undefined8 *)(puVar16 + 0x4580) = *(undefined8 *)(puVar16 + 0x4010);
      *(undefined8 *)(puVar16 + 0x4518) = *(undefined8 *)(puVar16 + 0x3fa8);
      *(undefined8 *)(puVar16 + 0x4510) = *(undefined8 *)(puVar16 + 0x3fa0);
      *(undefined8 *)(puVar16 + 0x4528) = *(undefined8 *)(puVar16 + 0x3fb8);
      *(undefined8 *)(puVar16 + 0x4520) = *(undefined8 *)(puVar16 + 0x3fb0);
      *(undefined8 *)(puVar16 + 0x4538) = *(undefined8 *)(puVar16 + 0x3fc8);
      *(undefined8 *)(puVar16 + 0x4530) = *(undefined8 *)(puVar16 + 0x3fc0);
      *(undefined8 *)(puVar16 + 0x4548) = *(undefined8 *)(puVar16 + 0x3fd8);
      *(undefined8 *)(puVar16 + 0x4540) = *(undefined8 *)(puVar16 + 0x3fd0);
      *(undefined8 *)(puVar16 + 0x45c0) = *(undefined8 *)(puVar16 + 0x4050);
      *(long *)(puVar16 + 0x44e8) = lVar33;
      *(undefined8 *)(puVar16 + 0x4a48) = *(undefined8 *)(puVar16 + 0x4080);
      *(undefined8 *)(puVar16 + 0x4a40) = *(undefined8 *)(puVar16 + 0x4078);
      *(undefined8 *)(puVar16 + 0x4a58) = *(undefined8 *)(puVar16 + 0x4090);
      *(undefined8 *)(puVar16 + 0x4a50) = *(undefined8 *)(puVar16 + 0x4088);
      *(undefined8 *)(puVar16 + 0x4a60) = *(undefined8 *)(puVar16 + 0x4098);
      *(undefined8 *)(puVar16 + 19000) = *(undefined8 *)(puVar16 + 0x4070);
      *(undefined8 *)(puVar16 + 0x4a30) = *(undefined8 *)(puVar16 + 0x4068);
      *(undefined8 *)(puVar16 + 0x4a28) = *(undefined8 *)(puVar16 + 0x4060);
      *(undefined8 *)(puVar16 + 0x4a20) = *(undefined8 *)(puVar16 + 0x4058);
      if (puVar16[0x45a0] == '\x01') {
        if ((byte)puVar16[0x45c0] < 2) {
          uVar40 = 0;
          uVar43 = 0xe;
          uVar30 = 4;
          goto LAB_100a507b4;
        }
        if ((byte)puVar16[0x4548] < 2) {
LAB_100a507a8:
          uVar40 = 0;
          uVar43 = 3;
          uVar30 = 0;
          goto LAB_100a507b4;
        }
        psVar6 = *(short **)(*(long *)(puVar16 + 0x4550) + 8);
        lVar33 = *(long *)(*(long *)(puVar16 + 0x4550) + 0x10);
        if (lVar33 == 3) {
          if (*psVar6 != 0x7377 || (char)psVar6[1] != 's') goto LAB_100a507a8;
        }
        else if ((lVar33 != 2) || (*psVar6 != 0x7377)) goto LAB_100a507a8;
        __ZN11tungstenite9handshake6client33extract_subprotocols_from_request17he12315174a15ed6fE
                  (puVar16 + 0x4a80,puVar16 + 0x44e8);
        uVar43 = *(ulong *)(puVar16 + 0x4a80);
        uVar40 = *(ulong *)(puVar16 + 0x4a88);
        uVar28 = *(undefined8 *)*(undefined1 (*) [16])(puVar16 + 0x4a90);
        lVar33 = *(long *)(puVar16 + 0x4a98);
        auVar11 = *(undefined1 (*) [16])(puVar16 + 0x4a90);
        uVar30 = uVar40;
        if (uVar43 != 0x15) goto LAB_100a507b4;
        *(ulong *)(puVar16 + 0x4a68) = uVar40;
        *(undefined8 *)(puVar16 + -0x18d0) = uVar28;
        *(undefined8 *)(puVar16 + 0x4a70) = uVar28;
        *(long *)(puVar16 + 0x4a78) = lVar33;
        *(undefined8 *)(puVar16 + 0x4b28) = *(undefined8 *)(puVar16 + 0x4590);
        *(undefined8 *)(puVar16 + 0x4b20) = *(undefined8 *)(puVar16 + 0x4588);
        *(undefined8 *)(puVar16 + 0x4b38) = *(undefined8 *)(puVar16 + 0x45a0);
        *(undefined8 *)(puVar16 + 0x4b30) = *(undefined8 *)(puVar16 + 0x4598);
        *(undefined8 *)(puVar16 + 0x4b48) = *(undefined8 *)(puVar16 + 0x45b0);
        *(undefined8 *)(puVar16 + 0x4b40) = *(undefined8 *)(puVar16 + 0x45a8);
        *(undefined8 *)(puVar16 + 0x4b58) = *(undefined8 *)(puVar16 + 0x45c0);
        *(undefined8 *)(puVar16 + 0x4b50) = *(undefined8 *)(puVar16 + 0x45b8);
        *(undefined8 *)(puVar16 + 0x4ae8) = *(undefined8 *)(puVar16 + 0x4550);
        *(undefined8 *)(puVar16 + 0x4ae0) = *(undefined8 *)(puVar16 + 0x4548);
        *(undefined8 *)(puVar16 + 0x4af8) = *(undefined8 *)(puVar16 + 0x4560);
        *(undefined8 *)(puVar16 + 0x4af0) = *(undefined8 *)(puVar16 + 0x4558);
        *(undefined8 *)(puVar16 + 0x4b08) = *(undefined8 *)(puVar16 + 0x4570);
        *(undefined8 *)(puVar16 + 0x4b00) = *(undefined8 *)(puVar16 + 0x4568);
        *(undefined8 *)(puVar16 + 0x4b18) = *(undefined8 *)(puVar16 + 0x4580);
        *(undefined8 *)(puVar16 + 0x4b10) = *(undefined8 *)(puVar16 + 0x4578);
        *(undefined8 *)(puVar16 + 0x4aa8) = *(undefined8 *)(puVar16 + 0x4510);
        *(undefined8 *)(puVar16 + 0x4aa0) = *(undefined8 *)(puVar16 + 0x4508);
        *(undefined8 *)(puVar16 + 0x4ab8) = *(undefined8 *)(puVar16 + 0x4520);
        *(undefined8 *)(puVar16 + 0x4ab0) = *(undefined8 *)(puVar16 + 0x4518);
        *(undefined8 *)(puVar16 + 0x4ac8) = *(undefined8 *)(puVar16 + 0x4530);
        *(undefined8 *)(puVar16 + 0x4ac0) = *(undefined8 *)(puVar16 + 0x4528);
        *(undefined8 *)(puVar16 + 0x4ad8) = *(undefined8 *)(puVar16 + 0x4540);
        *(undefined8 *)(puVar16 + 0x4ad0) = *(undefined8 *)(puVar16 + 0x4538);
        puVar31 = (undefined1 *)0x0;
        if (*(long *)(puVar16 + 0x4a20) != 2) {
          puVar31 = puVar16 + 0x4a40;
        }
        *(undefined8 *)(puVar16 + 0x4a88) = *(undefined8 *)(puVar16 + 0x44f0);
        *(undefined8 *)(puVar16 + 0x4a80) = *(undefined8 *)(puVar16 + 0x44e8);
        *(undefined8 *)(puVar16 + 0x4a98) = *(undefined8 *)(puVar16 + 0x4500);
        *(undefined8 *)(puVar16 + 0x4a90) = *(undefined8 *)(puVar16 + 0x44f8);
        __ZN11tungstenite9handshake6client16generate_request17h607661f37f78e8d4E
                  (puVar16 + 0x4f10,puVar16 + 0x4a80,puVar31);
        lVar20 = *(long *)(puVar16 + 0x4f10);
        uVar43 = *(ulong *)(puVar16 + 0x4f18);
        uVar30 = *(ulong *)(puVar16 + 0x4f20);
        pauVar1 = (undefined1 (*) [16])(puVar16 + 0x4f28);
        lVar41 = *(long *)*pauVar1;
        uVar28 = *(undefined8 *)(puVar16 + 0x4f30);
        auVar10 = *pauVar1;
        auVar51 = *pauVar1;
        if (lVar20 == -0x8000000000000000) {
          uVar42 = uVar30;
          auVar11 = *pauVar1;
          if (uVar40 != 0x8000000000000000) {
            if (lVar33 != 0) {
              puVar23 = (undefined8 *)(*(long *)(puVar16 + -0x18d0) + 8);
              do {
                if (puVar23[-1] != 0) {
                  _free(*puVar23);
                }
                puVar23 = puVar23 + 3;
                lVar33 = lVar33 + -1;
              } while (lVar33 != 0);
            }
            auVar11 = auVar51;
            if (uVar40 != 0) {
              _free(*(undefined8 *)(puVar16 + -0x18d0));
              auVar11 = auVar10;
            }
          }
          goto LAB_100a507c8;
        }
        uVar45 = *(undefined8 *)(puVar16 + 0x4f38);
        *(ulong *)(puVar16 + 0x4ee8) = uVar43;
        *(ulong *)(puVar16 + 0x4ef0) = uVar30;
        _memcpy(puVar16 + 0x4a80,puVar16 + 0x45c8,0x458);
        *(undefined8 *)(puVar16 + 0x4ed8) = 0x8000000000000000;
        *(long *)(puVar16 + 0x4ee0) = lVar20;
        *(undefined8 *)(puVar16 + 0x4ef8) = 0;
        __ZN11tungstenite9handshake17derive_accept_key17hbe39cd64f0d06524E
                  (puVar16 + 0x4f88,uVar28,uVar45);
        *(undefined8 *)(puVar16 + 0x4fc0) = *(undefined8 *)(puVar16 + 0x4a70);
        *(undefined8 *)(puVar16 + 0x4fb8) = *(undefined8 *)(puVar16 + 0x4a68);
        *(undefined8 *)(puVar16 + 0x4fc8) = *(undefined8 *)(puVar16 + 0x4a78);
        *(undefined8 *)(puVar16 + 0x4fb0) = *(undefined8 *)(puVar16 + 0x4f98);
        *(undefined8 *)(puVar16 + 0x4fa8) = *(undefined8 *)(puVar16 + 0x4f90);
        *(undefined8 *)(puVar16 + 0x4fa0) = *(undefined8 *)(puVar16 + 0x4f88);
        *(undefined8 *)(puVar16 + 0x4f60) = *(undefined8 *)(puVar16 + 0x4f90);
        *(undefined8 *)(puVar16 + 0x4f58) = *(undefined8 *)(puVar16 + 0x4f88);
        *(undefined8 *)(puVar16 + 0x4f70) = *(undefined8 *)(puVar16 + 0x4fb8);
        *(undefined8 *)(puVar16 + 0x4f68) = *(undefined8 *)(puVar16 + 0x4fb0);
        *(undefined8 *)(puVar16 + 0x4f80) = *(undefined8 *)(puVar16 + 0x4fc8);
        *(undefined8 *)(puVar16 + 0x4f78) = *(undefined8 *)(puVar16 + 0x4fc0);
        *(undefined8 *)(puVar16 + 0x4f50) = *(undefined8 *)(puVar16 + 0x4098);
        *(undefined8 *)(puVar16 + 0x4f48) = *(undefined8 *)(puVar16 + 0x4090);
        *(undefined8 *)(puVar16 + 0x4f40) = *(undefined8 *)(puVar16 + 0x4088);
        *(undefined8 *)(puVar16 + 0x4f38) = *(undefined8 *)(puVar16 + 0x4080);
        *(undefined8 *)(puVar16 + 0x4f30) = *(undefined8 *)(puVar16 + 0x4078);
        *(undefined8 *)(puVar16 + 0x4f18) = *(undefined8 *)(puVar16 + 0x4060);
        *(undefined8 *)(puVar16 + 0x4f10) = *(undefined8 *)(puVar16 + 0x4058);
        *(undefined8 *)(puVar16 + 0x4f28) = *(undefined8 *)(puVar16 + 0x4070);
        *(undefined8 *)(puVar16 + 0x4f20) = *(undefined8 *)(puVar16 + 0x4068);
        if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
          *(undefined **)(puVar16 + 0x4fa0) = &UNK_108ca7810;
          *(undefined8 *)(puVar16 + 0x4fa8) = 0x1e;
          *(undefined **)(puVar16 + 0x4fb0) = &UNK_108ca7810;
          *(undefined8 *)(puVar16 + 0x4fb8) = 0x1e;
          *(undefined **)(puVar16 + 0x4fc0) = &UNK_10b21eeb8;
          FUN_100c2f260(&UNK_108caa976,0x37,5,puVar16 + 0x4fa0);
        }
        lVar33 = *(long *)(puVar16 + 0x4f10);
        uVar43 = *(ulong *)(puVar16 + 0x4f18);
        uVar30 = *(ulong *)(puVar16 + 0x4f20);
        uVar45 = *(undefined8 *)(puVar16 + 0x4f28);
        *(undefined8 *)(puVar16 + -0x18d0) = *(undefined8 *)(puVar16 + 0x4f30);
        *(undefined8 *)(puVar16 + 0x4ff8) = *(undefined8 *)(puVar16 + 0x4f60);
        *(undefined8 *)(puVar16 + 0x4ff0) = *(undefined8 *)(puVar16 + 0x4f58);
        *(undefined8 *)(puVar16 + 0x5008) = *(undefined8 *)(puVar16 + 0x4f70);
        *(undefined8 *)(puVar16 + 0x5000) = *(undefined8 *)(puVar16 + 0x4f68);
        *(undefined8 *)(puVar16 + 0x5018) = *(undefined8 *)(puVar16 + 0x4f80);
        *(undefined8 *)(puVar16 + 0x5010) = *(undefined8 *)(puVar16 + 0x4f78);
        *(undefined8 *)(puVar16 + 0x4fe8) = *(undefined8 *)(puVar16 + 0x4f50);
        *(undefined8 *)(puVar16 + 0x4fe0) = *(undefined8 *)(puVar16 + 0x4f48);
        *(undefined8 *)(puVar16 + 0x4fd8) = *(undefined8 *)(puVar16 + 0x4f40);
        *(undefined8 *)(puVar16 + 0x4fd0) = *(undefined8 *)(puVar16 + 0x4f38);
        _memcpy(puVar16 + 0x5020,puVar16 + 0x4a80,0x490);
        if (lVar41 != 0) {
          _free(uVar28);
        }
        if (lVar33 == 3) {
          auVar11._8_8_ = *(undefined8 *)(puVar16 + -0x18d0);
          auVar11._0_8_ = uVar45;
          uVar42 = uVar30;
          goto LAB_100a507d4;
        }
        _memcpy(puVar16 + 0x54e0,puVar16 + 0x4fd0,0x4e0);
        *(long *)(puVar16 + 0x54b8) = lVar33;
        *(ulong *)(puVar16 + 0x54c0) = uVar43;
        *(ulong *)(puVar16 + 0x54c8) = uVar30;
        *(undefined8 *)(puVar16 + 0x54d0) = uVar45;
        *(undefined8 *)(puVar16 + 0x54d8) = *(undefined8 *)(puVar16 + -0x18d0);
        FUN_1006ff450(puVar16 + 0x59c0,puVar16 + 0x54b8);
        lVar33 = *(long *)(puVar16 + 0x59c0);
        uVar30 = *(ulong *)(puVar16 + 0x59c8);
        if (lVar33 == 2) {
          lVar33 = 2;
          if (uVar30 == 3) {
            lVar33 = 3;
          }
          uVar43 = *(ulong *)(puVar16 + 0x59d0);
          unaff_x27 = *(ulong *)(puVar16 + 23000);
          auVar11 = *(undefined1 (*) [16])(puVar16 + 0x59e0);
          goto LAB_100a507e0;
        }
        uVar43 = *(ulong *)(puVar16 + 0x59d0);
        unaff_x27 = *(ulong *)(puVar16 + 23000);
        auVar11 = *(undefined1 (*) [16])(puVar16 + 0x59e0);
        _memcpy(puVar16 + 0x2e90,puVar16 + 0x59f0,0x4e0);
        _memcpy(puVar16 + 0x2d70,puVar16 + 0x5ed0,0x120);
        if (lVar33 != 4) goto LAB_100a507fc;
        uVar26 = 3;
LAB_100a50cfc:
        *(undefined1 *)(puVar25 + 0x2b5) = uVar26;
        puVar31 = *(undefined1 **)(puVar16 + -0x18a8);
        *puVar31 = 3;
        puVar31[8] = 3;
        uVar26 = 6;
        goto LAB_100a50d18;
      }
      uVar40 = 0;
      uVar43 = 0xe;
      uVar30 = 3;
LAB_100a507b4:
      FUN_100de01d8(puVar16 + 0x44e8);
      uVar42 = uVar40;
LAB_100a507c8:
      FUN_100d4014c(puVar16 + 0x45c8);
LAB_100a507d4:
      unaff_x27 = uVar42 & 0xffffffffffffff00 | uVar30 & 0xff;
      uVar30 = 3;
      lVar33 = 3;
LAB_100a507e0:
      _memcpy(puVar16 + 0x2e90,puVar16 + 0x59f0,0x4e0);
LAB_100a507fc:
      _memcpy(puVar16 + 0x3490,puVar16 + 0x2e90,0x4e0);
      _memcpy(puVar16 + 0x3370,puVar16 + 0x2d70,0x120);
      FUN_100ddb894(puVar25 + 0x2b6);
      if (lVar33 == 3) {
        puVar25[0x41e] = uVar30;
        puVar25[0x41f] = uVar43;
        puVar25[0x420] = unaff_x27;
        *(undefined1 (*) [16])(puVar25 + 0x421) = auVar11;
        _memcpy(puVar25 + 0x423,puVar16 + 0x3490,0x4e0);
        puVar25[0x41d] = 3;
        _memcpy(puVar16 + 15000,puVar16 + 0x3490,0x4e0);
        lVar33 = 2;
      }
      else {
        puVar25[0x41d] = lVar33;
        puVar25[0x41e] = uVar30;
        puVar25[0x41f] = uVar43;
        puVar25[0x420] = unaff_x27;
        *(undefined1 (*) [16])(puVar25 + 0x421) = auVar11;
        _memcpy(puVar25 + 0x423,puVar16 + 0x3490,0x4e0);
        _memcpy(puVar25 + 0x4bf,puVar16 + 0x3370,0x120);
        _memcpy(puVar25 + 0x357,puVar25 + 0x41d,0x630);
        lVar33 = puVar25[0x357];
        if (lVar33 == 2) {
          puVar25[0x2b6] = uVar30;
          puVar25[0x2b7] = uVar43;
          puVar25[0x2b8] = unaff_x27;
          *(undefined1 (*) [16])(puVar25 + 0x2b9) = auVar11;
          _memcpy(puVar25 + 699,puVar16 + 0x3490,0x4e0);
          puVar23 = *(undefined8 **)(puVar16 + -0x18c0);
          puVar36 = *(undefined8 **)(puVar16 + -0x18b8);
LAB_100a50930:
          puVar25[0x2b6] = 3;
          if (uVar30 == 3) {
            func_0x000108a079f0(&UNK_108ca1c5f,0x1e,&UNK_10b2094b0);
            goto LAB_100a52e04;
          }
          *(ulong *)(puVar16 + 0x54b8) = uVar30;
          _memcpy(puVar16 + 0x54c0,puVar25 + 0x2b7,0x500);
          if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
            *(undefined8 *)(puVar16 + 0x3fb8) = 0x1c;
            *(undefined **)(puVar16 + 0x3fc8) = &UNK_108ca1c7d;
            *(undefined8 *)(puVar16 + 0x3fd0) = 0x39;
            *(undefined8 *)(puVar16 + 0x3f78) = 0;
            *(undefined **)(puVar16 + 0x3f80) = &UNK_108ca1c99;
            *(undefined8 *)(puVar16 + 0x3f90) = 0;
            *(undefined8 *)(puVar16 + 0x3f88) = 0x1c;
            *(undefined **)(puVar16 + 0x3fb0) = &UNK_108ca1c99;
            *(char **)(puVar16 + 0x3f98) =
                 "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/handshake.rs"
            ;
            *(undefined8 *)(puVar16 + 0x3fa8) = 5;
            *(undefined8 *)(puVar16 + 0x3fa0) = 0x5e;
            *(undefined8 *)(puVar16 + 0x3fc0) = 0xa700000001;
            puVar3 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_10b3c24c8;
            }
            puVar4 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_109adfc03;
            }
            (**(code **)(puVar3 + 0x20))(puVar4,puVar16 + 0x3f78);
          }
          lVar20 = *(long *)(puVar16 + 0x5978);
          lVar41 = *(long *)(puVar16 + 0x5980);
          lVar33 = *(long *)(lVar20 + 0x20);
          if (lVar33 == 0) {
            *(long *)(lVar20 + 0x20) = 1;
          }
          if (lVar33 != 2) {
            if (lVar33 != 0) goto LAB_100a50be4;
            plVar34 = *(long **)(puVar16 + -0x1888);
            if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
              lVar33 = plVar34[1];
LAB_100a50b88:
              auVar51 = (**(code **)*plVar34)(lVar33);
              if (*(long *)(lVar20 + 0x10) != 0) {
                (**(code **)(*(long *)(lVar20 + 0x10) + 0x18))(*(undefined8 *)(lVar20 + 0x18));
              }
              *(undefined1 (*) [16])(lVar20 + 0x10) = auVar51;
            }
            else {
              lVar33 = plVar34[1];
              if ((*(undefined8 **)(lVar20 + 0x10) != (undefined8 *)*plVar34) ||
                 (*(long *)(lVar20 + 0x18) != lVar33)) goto LAB_100a50b88;
            }
            if (*(long *)(lVar20 + 0x20) == 1) {
              *(long *)(lVar20 + 0x20) = in_xzr;
              goto LAB_100a50be4;
            }
            lVar33 = *(long *)(lVar20 + 0x10);
            lVar24 = *(long *)(lVar20 + 0x18);
            *(undefined8 *)(lVar20 + 0x10) = 0;
            if (lVar33 != 0) {
              LOAcquire();
              *(long *)(lVar20 + 0x20) = in_xzr;
              LORelease();
              puVar37 = (undefined8 *)(lVar33 + 8);
              goto LAB_100a50bdc;
            }
LAB_100a520a8:
            func_0x000108a07a20(&UNK_10b398268);
LAB_100a52e04:
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x100a52e08);
            (*pcVar15)();
          }
          lVar24 = (*(long **)(puVar16 + -0x1888))[1];
          puVar37 = (undefined8 *)(**(long **)(puVar16 + -0x1888) + 0x10);
LAB_100a50bdc:
          (*(code *)*puVar37)(lVar24);
LAB_100a50be4:
          lVar33 = *(long *)(lVar41 + 0x20);
          if (lVar33 == 0) {
            *(long *)(lVar41 + 0x20) = 1;
          }
          if (lVar33 == 2) {
            lVar33 = (*(long **)(puVar16 + -0x1888))[1];
            puVar37 = (undefined8 *)(**(long **)(puVar16 + -0x1888) + 0x10);
LAB_100a50c94:
            (*(code *)*puVar37)(lVar33);
          }
          else if (lVar33 == 0) {
            plVar34 = *(long **)(puVar16 + -0x1888);
            if (*(undefined8 **)(lVar41 + 0x10) == (undefined8 *)0x0) {
              lVar33 = plVar34[1];
LAB_100a50c40:
              auVar51 = (**(code **)*plVar34)(lVar33);
              if (*(long *)(lVar41 + 0x10) != 0) {
                (**(code **)(*(long *)(lVar41 + 0x10) + 0x18))(*(undefined8 *)(lVar41 + 0x18));
              }
              *(undefined1 (*) [16])(lVar41 + 0x10) = auVar51;
            }
            else {
              lVar33 = plVar34[1];
              if ((*(undefined8 **)(lVar41 + 0x10) != (undefined8 *)*plVar34) ||
                 (*(long *)(lVar41 + 0x18) != lVar33)) goto LAB_100a50c40;
            }
            if (*(long *)(lVar41 + 0x20) != 1) {
              lVar20 = *(long *)(lVar41 + 0x10);
              lVar33 = *(long *)(lVar41 + 0x18);
              *(undefined8 *)(lVar41 + 0x10) = 0;
              if (lVar20 == 0) goto LAB_100a520a8;
              LOAcquire();
              *(long *)(lVar41 + 0x20) = in_xzr;
              LORelease();
              puVar37 = (undefined8 *)(lVar20 + 8);
              goto LAB_100a50c94;
            }
            *(long *)(lVar41 + 0x20) = in_xzr;
          }
          _memcpy(puVar16 + 0x3f78,puVar16 + 0x54b8,0x508);
          FUN_1006ff450(puVar16 + 0x59c0,puVar16 + 0x3f78);
          lVar33 = *(long *)(puVar16 + 0x59c0);
          uVar30 = *(ulong *)(puVar16 + 0x59c8);
          if ((lVar33 == 2) && (uVar30 != 3)) {
            _memcpy(puVar25 + 0x2b6,puVar16 + 0x59c8,0x508);
            uVar26 = 4;
            goto LAB_100a50cfc;
          }
          *(undefined8 **)(puVar16 + -0x18c0) = puVar23;
          *(undefined8 **)(puVar16 + -0x18b8) = puVar36;
          uVar43 = *(ulong *)(puVar16 + 0x59d0);
          unaff_x27 = *(ulong *)(puVar16 + 23000);
          auVar51 = *(undefined1 (*) [16])(puVar16 + 0x59e0);
          auVar11 = *(undefined1 (*) [16])(puVar16 + 0x59e0);
          _memcpy(puVar16 + 15000,puVar16 + 0x59f0,0x4e0);
          *(undefined8 *)(puVar16 + 0x3a68) = *(undefined8 *)(puVar16 + 0x5f38);
          *(undefined8 *)(puVar16 + 0x3a60) = *(undefined8 *)(puVar16 + 0x5f30);
          *(undefined8 *)(puVar16 + 0x3a78) = *(undefined8 *)(puVar16 + 0x5f48);
          *(undefined8 *)(puVar16 + 0x3a70) = *(undefined8 *)(puVar16 + 0x5f40);
          *(undefined8 *)(puVar16 + 0x3a88) = *(undefined8 *)(puVar16 + 0x5f58);
          *(undefined8 *)(puVar16 + 0x3a80) = *(undefined8 *)(puVar16 + 0x5f50);
          *(undefined8 *)(puVar16 + 0x3a90) = *(undefined8 *)(puVar16 + 0x5f60);
          *(undefined8 *)(puVar16 + 0x3a28) = *(undefined8 *)(puVar16 + 0x5ef8);
          *(undefined8 *)(puVar16 + 0x3a20) = *(undefined8 *)(puVar16 + 0x5ef0);
          *(undefined8 *)(puVar16 + 0x3a38) = *(undefined8 *)(puVar16 + 0x5f08);
          *(undefined8 *)(puVar16 + 0x3a30) = *(undefined8 *)(puVar16 + 0x5f00);
          *(undefined8 *)(puVar16 + 0x3a48) = *(undefined8 *)(puVar16 + 0x5f18);
          *(undefined8 *)(puVar16 + 0x3a40) = *(undefined8 *)(puVar16 + 0x5f10);
          *(undefined8 *)(puVar16 + 0x3a58) = *(undefined8 *)(puVar16 + 0x5f28);
          *(undefined8 *)(puVar16 + 0x3a50) = *(undefined8 *)(puVar16 + 0x5f20);
          *(undefined8 *)(puVar16 + 0x3a08) = *(undefined8 *)(puVar16 + 0x5ed8);
          *(undefined8 *)(puVar16 + 0x3a00) = *(undefined8 *)(puVar16 + 0x5ed0);
          *(undefined8 *)(puVar16 + 0x3a18) = *(undefined8 *)(puVar16 + 0x5ee8);
          *(undefined8 *)(puVar16 + 0x3a10) = *(undefined8 *)(puVar16 + 0x5ee0);
          *(undefined8 *)(puVar16 + 0x39d8) = *(undefined8 *)(puVar16 + 0x5fd0);
          *(undefined8 *)(puVar16 + 0x39d0) = *(undefined8 *)(puVar16 + 0x5fc8);
          *(undefined8 *)(puVar16 + 0x39e8) = *(undefined8 *)(puVar16 + 0x5fe0);
          *(undefined8 *)(puVar16 + 0x39e0) = *(undefined8 *)(puVar16 + 0x5fd8);
          *(undefined8 *)(puVar16 + 0x39f0) = *(undefined8 *)(puVar16 + 0x5fe8);
          *(undefined8 *)(puVar16 + 0x3998) = *(undefined8 *)(puVar16 + 0x5f90);
          *(undefined8 *)(puVar16 + 0x3990) = *(undefined8 *)(puVar16 + 0x5f88);
          *(undefined8 *)(puVar16 + 0x39a8) = *(undefined8 *)(puVar16 + 0x5fa0);
          *(undefined8 *)(puVar16 + 0x39a0) = *(undefined8 *)(puVar16 + 0x5f98);
          *(undefined8 *)(puVar16 + 0x39c8) = *(undefined8 *)(puVar16 + 0x5fc0);
          *(undefined8 *)(puVar16 + 0x39c0) = *(undefined8 *)(puVar16 + 0x5fb8);
          *(undefined8 *)(puVar16 + 0x39b8) = *(undefined8 *)(puVar16 + 0x5fb0);
          *(undefined8 *)(puVar16 + 0x39b0) = *(undefined8 *)(puVar16 + 0x5fa8);
          *(undefined8 *)(puVar16 + 0x3988) = *(undefined8 *)(puVar16 + 0x5f80);
          *(undefined8 *)(puVar16 + 0x3980) = *(undefined8 *)(puVar16 + 0x5f78);
          *(undefined8 *)(puVar16 + 0x3978) = *(undefined8 *)(puVar16 + 0x5f70);
          *(undefined8 *)(puVar16 + 0x3970) = *(undefined8 *)(puVar16 + 0x5f68);
          if (puVar25[0x2b6] != 3) {
            FUN_100da966c(puVar25 + 0x2b6);
            auVar11 = auVar51;
          }
        }
        else {
          _memcpy(puVar16 + 15000,puVar16 + 0x3490,0x4e0);
          *(undefined8 *)(puVar16 + 0x3a90) = *(undefined8 *)(puVar16 + 0x3400);
          *(undefined8 *)(puVar16 + 0x3a68) = *(undefined8 *)(puVar16 + 0x33d8);
          *(undefined8 *)(puVar16 + 0x3a60) = *(undefined8 *)(puVar16 + 0x33d0);
          *(undefined8 *)(puVar16 + 0x3a78) = *(undefined8 *)(puVar16 + 0x33e8);
          *(undefined8 *)(puVar16 + 0x3a70) = *(undefined8 *)(puVar16 + 0x33e0);
          *(undefined8 *)(puVar16 + 0x3a88) = *(undefined8 *)(puVar16 + 0x33f8);
          *(undefined8 *)(puVar16 + 0x3a80) = *(undefined8 *)(puVar16 + 0x33f0);
          *(undefined8 *)(puVar16 + 0x3a28) = *(undefined8 *)(puVar16 + 0x3398);
          *(undefined8 *)(puVar16 + 0x3a20) = *(undefined8 *)(puVar16 + 0x3390);
          *(undefined8 *)(puVar16 + 0x3a38) = *(undefined8 *)(puVar16 + 0x33a8);
          *(undefined8 *)(puVar16 + 0x3a30) = *(undefined8 *)(puVar16 + 0x33a0);
          *(undefined8 *)(puVar16 + 0x3a48) = *(undefined8 *)(puVar16 + 0x33b8);
          *(undefined8 *)(puVar16 + 0x3a40) = *(undefined8 *)(puVar16 + 0x33b0);
          *(undefined8 *)(puVar16 + 0x3a58) = *(undefined8 *)(puVar16 + 0x33c8);
          *(undefined8 *)(puVar16 + 0x3a50) = *(undefined8 *)(puVar16 + 0x33c0);
          *(undefined8 *)(puVar16 + 0x3a08) = *(undefined8 *)(puVar16 + 0x3378);
          *(undefined8 *)(puVar16 + 0x3a00) = *(undefined8 *)(puVar16 + 0x3370);
          *(undefined8 *)(puVar16 + 0x3a18) = *(undefined8 *)(puVar16 + 0x3388);
          *(undefined8 *)(puVar16 + 0x3a10) = *(undefined8 *)(puVar16 + 0x3380);
          *(undefined8 *)(puVar16 + 0x39d8) = *(undefined8 *)(puVar16 + 0x3470);
          *(undefined8 *)(puVar16 + 0x39d0) = *(undefined8 *)(puVar16 + 0x3468);
          *(undefined8 *)(puVar16 + 0x39e8) = *(undefined8 *)(puVar16 + 0x3480);
          *(undefined8 *)(puVar16 + 0x39e0) = *(undefined8 *)(puVar16 + 0x3478);
          *(undefined8 *)(puVar16 + 0x39f0) = *(undefined8 *)(puVar16 + 0x3488);
          *(undefined8 *)(puVar16 + 0x3998) = *(undefined8 *)(puVar16 + 0x3430);
          *(undefined8 *)(puVar16 + 0x3990) = *(undefined8 *)(puVar16 + 0x3428);
          *(undefined8 *)(puVar16 + 0x39a8) = *(undefined8 *)(puVar16 + 0x3440);
          *(undefined8 *)(puVar16 + 0x39a0) = *(undefined8 *)(puVar16 + 0x3438);
          *(undefined8 *)(puVar16 + 0x39c8) = *(undefined8 *)(puVar16 + 0x3460);
          *(undefined8 *)(puVar16 + 0x39c0) = *(undefined8 *)(puVar16 + 0x3458);
          *(undefined8 *)(puVar16 + 0x39b8) = *(undefined8 *)(puVar16 + 0x3450);
          *(undefined8 *)(puVar16 + 0x39b0) = *(undefined8 *)(puVar16 + 0x3448);
          *(undefined8 *)(puVar16 + 0x3988) = *(undefined8 *)(puVar16 + 0x3420);
          *(undefined8 *)(puVar16 + 0x3980) = *(undefined8 *)(puVar16 + 0x3418);
          *(undefined8 *)(puVar16 + 0x3978) = *(undefined8 *)(puVar16 + 0x3410);
          *(undefined8 *)(puVar16 + 0x3970) = *(undefined8 *)(puVar16 + 0x3408);
        }
      }
      puVar23 = auVar11._8_8_;
      auVar14._8_8_ = auVar11._0_8_;
      auVar14._0_8_ = unaff_x27;
      auVar13._8_8_ = auVar11._0_8_;
      auVar13._0_8_ = unaff_x27;
      _memcpy(puVar16 + 0x1d10,puVar16 + 15000,0x4e0);
      *(undefined8 *)(puVar16 + 0x1cd8) = *(undefined8 *)(puVar16 + 0x3a68);
      *(undefined8 *)(puVar16 + 0x1cd0) = *(undefined8 *)(puVar16 + 0x3a60);
      *(undefined8 *)(puVar16 + 0x1ce8) = *(undefined8 *)(puVar16 + 0x3a78);
      *(undefined8 *)(puVar16 + 0x1ce0) = *(undefined8 *)(puVar16 + 0x3a70);
      *(undefined8 *)(puVar16 + 0x1cf8) = *(undefined8 *)(puVar16 + 0x3a88);
      *(undefined8 *)(puVar16 + 0x1cf0) = *(undefined8 *)(puVar16 + 0x3a80);
      *(undefined8 *)(puVar16 + 0x1d00) = *(undefined8 *)(puVar16 + 0x3a90);
      *(undefined8 *)(puVar16 + 0x1c98) = *(undefined8 *)(puVar16 + 0x3a28);
      *(undefined8 *)(puVar16 + 0x1c90) = *(undefined8 *)(puVar16 + 0x3a20);
      *(undefined8 *)(puVar16 + 0x1ca8) = *(undefined8 *)(puVar16 + 0x3a38);
      *(undefined8 *)(puVar16 + 0x1ca0) = *(undefined8 *)(puVar16 + 0x3a30);
      *(undefined8 *)(puVar16 + 0x1cb8) = *(undefined8 *)(puVar16 + 0x3a48);
      *(undefined8 *)(puVar16 + 0x1cb0) = *(undefined8 *)(puVar16 + 0x3a40);
      *(undefined8 *)(puVar16 + 0x1cc8) = *(undefined8 *)(puVar16 + 0x3a58);
      *(undefined8 *)(puVar16 + 0x1cc0) = *(undefined8 *)(puVar16 + 0x3a50);
      *(undefined8 *)(puVar16 + 0x1c78) = *(undefined8 *)(puVar16 + 0x3a08);
      *(undefined8 *)(puVar16 + 0x1c70) = *(undefined8 *)(puVar16 + 0x3a00);
      *(undefined8 *)(puVar16 + 0x1c88) = *(undefined8 *)(puVar16 + 0x3a18);
      *(undefined8 *)(puVar16 + 0x1c80) = *(undefined8 *)(puVar16 + 0x3a10);
      *(undefined8 *)(puVar16 + 0x1c48) = *(undefined8 *)(puVar16 + 0x39d8);
      *(undefined8 *)(puVar16 + 0x1c40) = *(undefined8 *)(puVar16 + 0x39d0);
      *(undefined8 *)(puVar16 + 0x1c58) = *(undefined8 *)(puVar16 + 0x39e8);
      *(undefined8 *)(puVar16 + 0x1c50) = *(undefined8 *)(puVar16 + 0x39e0);
      *(undefined8 *)(puVar16 + 0x1c60) = *(undefined8 *)(puVar16 + 0x39f0);
      *(undefined8 *)(puVar16 + 0x1c08) = *(undefined8 *)(puVar16 + 0x3998);
      *(undefined8 *)(puVar16 + 0x1c00) = *(undefined8 *)(puVar16 + 0x3990);
      *(undefined8 *)(puVar16 + 0x1c18) = *(undefined8 *)(puVar16 + 0x39a8);
      *(undefined8 *)(puVar16 + 0x1c10) = *(undefined8 *)(puVar16 + 0x39a0);
      *(undefined8 *)(puVar16 + 0x1c38) = *(undefined8 *)(puVar16 + 0x39c8);
      *(undefined8 *)(puVar16 + 0x1c30) = *(undefined8 *)(puVar16 + 0x39c0);
      *(undefined8 *)(puVar16 + 0x1c28) = *(undefined8 *)(puVar16 + 0x39b8);
      *(undefined8 *)(puVar16 + 0x1c20) = *(undefined8 *)(puVar16 + 0x39b0);
      *(undefined8 *)(puVar16 + 0x1bf8) = *(undefined8 *)(puVar16 + 0x3988);
      *(undefined8 *)(puVar16 + 0x1bf0) = *(undefined8 *)(puVar16 + 0x3980);
      *(undefined8 *)(puVar16 + 0x1be8) = *(undefined8 *)(puVar16 + 0x3978);
      *(undefined8 *)(puVar16 + 0x1be0) = *(undefined8 *)(puVar16 + 0x3970);
      *(undefined1 *)(puVar25 + 0x2b5) = 1;
      FUN_100e0ae48(*(undefined8 *)(puVar16 + -0x18b8));
      _memcpy(puVar16 + 0x2320,puVar16 + 0x1d10,0x4e0);
      if (lVar33 != 2) {
        *(undefined8 *)(puVar16 + 0x22e8) = *(undefined8 *)(puVar16 + 0x1cd8);
        *(undefined8 *)(puVar16 + 0x22e0) = *(undefined8 *)(puVar16 + 0x1cd0);
        *(undefined8 *)(puVar16 + 0x22f8) = *(undefined8 *)(puVar16 + 0x1ce8);
        *(undefined8 *)(puVar16 + 0x22f0) = *(undefined8 *)(puVar16 + 0x1ce0);
        *(undefined8 *)(puVar16 + 0x2308) = *(undefined8 *)(puVar16 + 0x1cf8);
        *(undefined8 *)(puVar16 + 0x2300) = *(undefined8 *)(puVar16 + 0x1cf0);
        *(undefined8 *)(puVar16 + 0x2310) = *(undefined8 *)(puVar16 + 0x1d00);
        *(undefined8 *)(puVar16 + 0x22a8) = *(undefined8 *)(puVar16 + 0x1c98);
        *(undefined8 *)(puVar16 + 0x22a0) = *(undefined8 *)(puVar16 + 0x1c90);
        *(undefined8 *)(puVar16 + 0x22b8) = *(undefined8 *)(puVar16 + 0x1ca8);
        *(undefined8 *)(puVar16 + 0x22b0) = *(undefined8 *)(puVar16 + 0x1ca0);
        *(undefined8 *)(puVar16 + 0x22c8) = *(undefined8 *)(puVar16 + 0x1cb8);
        *(undefined8 *)(puVar16 + 0x22c0) = *(undefined8 *)(puVar16 + 0x1cb0);
        *(undefined8 *)(puVar16 + 0x22d8) = *(undefined8 *)(puVar16 + 0x1cc8);
        *(undefined8 *)(puVar16 + 0x22d0) = *(undefined8 *)(puVar16 + 0x1cc0);
        *(undefined8 *)(puVar16 + 0x2288) = *(undefined8 *)(puVar16 + 0x1c78);
        *(undefined8 *)(puVar16 + 0x2280) = *(undefined8 *)(puVar16 + 0x1c70);
        *(undefined8 *)(puVar16 + 0x2298) = *(undefined8 *)(puVar16 + 0x1c88);
        *(undefined8 *)(puVar16 + 0x2290) = *(undefined8 *)(puVar16 + 0x1c80);
        *(undefined8 *)(puVar16 + 0x2258) = *(undefined8 *)(puVar16 + 0x1c48);
        *(undefined8 *)(puVar16 + 0x2250) = *(undefined8 *)(puVar16 + 0x1c40);
        *(undefined8 *)(puVar16 + 0x2268) = *(undefined8 *)(puVar16 + 0x1c58);
        *(undefined8 *)(puVar16 + 0x2260) = *(undefined8 *)(puVar16 + 0x1c50);
        *(undefined8 *)(puVar16 + 0x2270) = *(undefined8 *)(puVar16 + 0x1c60);
        *(undefined8 *)(puVar16 + 0x2218) = *(undefined8 *)(puVar16 + 0x1c08);
        *(undefined8 *)(puVar16 + 0x2210) = *(undefined8 *)(puVar16 + 0x1c00);
        *(undefined8 *)(puVar16 + 0x2228) = *(undefined8 *)(puVar16 + 0x1c18);
        *(undefined8 *)(puVar16 + 0x2220) = *(undefined8 *)(puVar16 + 0x1c10);
        *(undefined8 *)(puVar16 + 0x2248) = *(undefined8 *)(puVar16 + 0x1c38);
        *(undefined8 *)(puVar16 + 0x2240) = *(undefined8 *)(puVar16 + 0x1c30);
        *(undefined8 *)(puVar16 + 0x2238) = *(undefined8 *)(puVar16 + 0x1c28);
        *(undefined8 *)(puVar16 + 0x2230) = *(undefined8 *)(puVar16 + 0x1c20);
        *(undefined8 *)(puVar16 + 0x2208) = *(undefined8 *)(puVar16 + 0x1bf8);
        *(undefined8 *)(puVar16 + 0x2200) = *(undefined8 *)(puVar16 + 0x1bf0);
        *(undefined8 *)(puVar16 + 0x21f8) = *(undefined8 *)(puVar16 + 0x1be8);
        *(undefined8 *)(puVar16 + 0x21f0) = *(undefined8 *)(puVar16 + 0x1be0);
      }
      *(undefined8 *)(puVar16 + 0x1030) = *(undefined8 *)(puVar16 + 0x2248);
      *(undefined8 *)(puVar16 + 0x1028) = *(undefined8 *)(puVar16 + 0x2240);
      *(undefined8 *)(puVar16 + 0x1040) = *(undefined8 *)(puVar16 + 0x2258);
      *(undefined8 *)(puVar16 + 0x1038) = *(undefined8 *)(puVar16 + 0x2250);
      *(undefined8 *)(puVar16 + 0x1050) = *(undefined8 *)(puVar16 + 0x2268);
      *(undefined8 *)(puVar16 + 0x1048) = *(undefined8 *)(puVar16 + 0x2260);
      *(undefined8 *)(puVar16 + 0xff0) = *(undefined8 *)(puVar16 + 0x2208);
      *(undefined8 *)(puVar16 + 0xfe8) = *(undefined8 *)(puVar16 + 0x2200);
      *(undefined8 *)(puVar16 + 0x1000) = *(undefined8 *)(puVar16 + 0x2218);
      *(undefined8 *)(puVar16 + 0xff8) = *(undefined8 *)(puVar16 + 0x2210);
      *(undefined8 *)(puVar16 + 0x1010) = *(undefined8 *)(puVar16 + 0x2228);
      *(undefined8 *)(puVar16 + 0x1008) = *(undefined8 *)(puVar16 + 0x2220);
      *(undefined8 *)(puVar16 + 0x1020) = *(undefined8 *)(puVar16 + 0x2238);
      *(undefined8 *)(puVar16 + 0x1018) = *(undefined8 *)(puVar16 + 0x2230);
      *(undefined8 *)(puVar16 + 0x1058) = *(undefined8 *)(puVar16 + 0x2270);
      *(undefined8 *)(puVar16 + 0xfe0) = *(undefined8 *)(puVar16 + 0x21f8);
      *(undefined8 *)(puVar16 + 0xfd8) = *(undefined8 *)(puVar16 + 0x21f0);
      **(undefined1 **)(puVar16 + -0x18a8) = 1;
      FUN_100de0f1c(*(undefined8 *)(puVar16 + -0x18c0));
      if (lVar33 == 2) {
        uVar40 = uVar43;
        if (uVar30 != 3) {
          *(ulong *)(puVar16 + 0x59c0) = uVar30;
          *(ulong *)(puVar16 + 0x59c8) = uVar43;
          *(ulong *)(puVar16 + 0x59d0) = unaff_x27;
          *(undefined1 (*) [16])(puVar16 + 23000) = auVar11;
          _memcpy(puVar16 + 0x59e8,puVar16 + 0x2320,0x4e0);
          *(undefined8 *)(puVar16 + 0x3f78) = 0;
          *(undefined8 *)(puVar16 + 0x3f80) = 1;
          *(undefined8 *)(puVar16 + 0x3f88) = 0;
          FUN_108855060(puVar16 + 0x3f78,0,0x22,1,1);
          lVar20 = *(long *)(puVar16 + 0x3f88);
          puVar36 = (undefined8 *)(*(long *)(puVar16 + 0x3f80) + lVar20);
          *(undefined2 *)(puVar36 + 4) = 0x296b;
          puVar36[1] = 0x646e616820646574;
          *puVar36 = 0x7075727265746e49;
          puVar36[3] = 0x636f6c42646c756f;
          puVar36[2] = 0x572820656b616873;
          *(undefined8 *)(puVar16 + 0x2808) = *(undefined8 *)(puVar16 + 0x3f80);
          *(undefined8 *)(puVar16 + 0x2800) = *(undefined8 *)(puVar16 + 0x3f78);
          *(long *)(puVar16 + 0x2810) = lVar20 + 0x22;
          unaff_x27 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x28,puVar16 + 0x2800);
          if (*(long *)(puVar16 + 0x59c0) == 3) {
            FUN_100de8b24(puVar16 + 0x59c8);
          }
          else {
            FUN_100da966c(puVar16 + 0x59c0);
          }
          uVar40 = 0xb;
          auVar11 = auVar13;
        }
      }
      else {
        _memcpy(puVar16 + 0x1190,puVar16 + 0x2320,0x4e0);
        *(undefined8 *)(puVar16 + 0x1158) = *(undefined8 *)(puVar16 + 0x22e8);
        *(undefined8 *)(puVar16 + 0x1150) = *(undefined8 *)(puVar16 + 0x22e0);
        *(undefined8 *)(puVar16 + 0x1168) = *(undefined8 *)(puVar16 + 0x22f8);
        *(undefined8 *)(puVar16 + 0x1160) = *(undefined8 *)(puVar16 + 0x22f0);
        *(undefined8 *)(puVar16 + 0x1178) = *(undefined8 *)(puVar16 + 0x2308);
        *(undefined8 *)(puVar16 + 0x1170) = *(undefined8 *)(puVar16 + 0x2300);
        *(undefined8 *)(puVar16 + 0x1180) = *(undefined8 *)(puVar16 + 0x2310);
        *(undefined8 *)(puVar16 + 0x1118) = *(undefined8 *)(puVar16 + 0x22a8);
        *(undefined8 *)(puVar16 + 0x1110) = *(undefined8 *)(puVar16 + 0x22a0);
        *(undefined8 *)(puVar16 + 0x1128) = *(undefined8 *)(puVar16 + 0x22b8);
        *(undefined8 *)(puVar16 + 0x1120) = *(undefined8 *)(puVar16 + 0x22b0);
        *(undefined8 *)(puVar16 + 0x1138) = *(undefined8 *)(puVar16 + 0x22c8);
        *(undefined8 *)(puVar16 + 0x1130) = *(undefined8 *)(puVar16 + 0x22c0);
        *(undefined8 *)(puVar16 + 0x1148) = *(undefined8 *)(puVar16 + 0x22d8);
        *(undefined8 *)(puVar16 + 0x1140) = *(undefined8 *)(puVar16 + 0x22d0);
        *(undefined8 *)(puVar16 + 0x10f8) = *(undefined8 *)(puVar16 + 0x2288);
        *(undefined8 *)(puVar16 + 0x10f0) = *(undefined8 *)(puVar16 + 0x2280);
        *(undefined8 *)(puVar16 + 0x1108) = *(undefined8 *)(puVar16 + 0x2298);
        *(undefined8 *)(puVar16 + 0x1100) = *(undefined8 *)(puVar16 + 0x2290);
        *(undefined8 *)(puVar16 + 0x10c8) = *(undefined8 *)(puVar16 + 0x103b);
        *(undefined8 *)(puVar16 + 0x10c0) = *(undefined8 *)(puVar16 + 0x1033);
        *(undefined8 *)(puVar16 + 0x10d8) = *(undefined8 *)(puVar16 + 0x104b);
        *(undefined8 *)(puVar16 + 0x10d0) = *(undefined8 *)(puVar16 + 0x1043);
        *(undefined8 *)(puVar16 + 0x10e5) = *(undefined8 *)(puVar16 + 0x1058);
        *(undefined8 *)(puVar16 + 0x10dd) = *(undefined8 *)(puVar16 + 0x1050);
        *(undefined8 *)(puVar16 + 0x1088) = *(undefined8 *)(puVar16 + 0xffb);
        *(undefined8 *)(puVar16 + 0x1080) = *(undefined8 *)(puVar16 + 0xff3);
        *(undefined8 *)(puVar16 + 0x1098) = *(undefined8 *)(puVar16 + 0x100b);
        *(undefined8 *)(puVar16 + 0x1090) = *(undefined8 *)(puVar16 + 0x1003);
        *(undefined8 *)(puVar16 + 0x10b8) = *(undefined8 *)(puVar16 + 0x102b);
        *(undefined8 *)(puVar16 + 0x10b0) = *(undefined8 *)(puVar16 + 0x1023);
        *(undefined8 *)(puVar16 + 0x10a8) = *(undefined8 *)(puVar16 + 0x101b);
        *(undefined8 *)(puVar16 + 0x10a0) = *(undefined8 *)(puVar16 + 0x1013);
        *(undefined8 *)(puVar16 + 0x1078) = *(undefined8 *)(puVar16 + 0xfeb);
        *(undefined8 *)(puVar16 + 0x1070) = *(undefined8 *)(puVar16 + 0xfe3);
        *(undefined8 *)(puVar16 + 0x1068) = *(undefined8 *)(puVar16 + 0xfdb);
        *(undefined8 *)(puVar16 + 0x1060) = *(undefined8 *)(puVar16 + 0xfd3);
        uVar40 = uVar30;
        unaff_x27 = uVar43;
        auVar11 = auVar14;
      }
      **(undefined1 **)(puVar16 + -0x18c8) = 1;
      FUN_100d9e758(puVar25 + 0xab);
      puVar36 = *(undefined8 **)(puVar16 + -0x18b0);
      if (((*(byte *)((long)puVar25 + 0x551) & 1) != 0) && (puVar25[0xa6] != 0)) {
        _free(puVar25[0xa7]);
      }
      plVar34 = (long *)(unaff_x27 >> 8);
      *(undefined2 *)((long)puVar25 + 0x551) = 0;
      *(undefined1 *)((long)puVar25 + 0x553) = 0;
    }
    _memcpy(puVar16 + -0x1620,puVar16 + 0x1190,0x4e0);
    *(undefined8 *)(puVar16 + -0x1658) = *(undefined8 *)(puVar16 + 0x1158);
    *(undefined8 *)(puVar16 + -0x1660) = *(undefined8 *)(puVar16 + 0x1150);
    *(undefined8 *)(puVar16 + -0x1648) = *(undefined8 *)(puVar16 + 0x1168);
    *(undefined8 *)(puVar16 + -0x1650) = *(undefined8 *)(puVar16 + 0x1160);
    *(undefined8 *)(puVar16 + -0x1638) = *(undefined8 *)(puVar16 + 0x1178);
    *(undefined8 *)(puVar16 + -0x1640) = *(undefined8 *)(puVar16 + 0x1170);
    *(undefined8 *)(puVar16 + -0x1630) = *(undefined8 *)(puVar16 + 0x1180);
    *(undefined8 *)(puVar16 + -0x1698) = *(undefined8 *)(puVar16 + 0x1118);
    *(undefined8 *)(puVar16 + -0x16a0) = *(undefined8 *)(puVar16 + 0x1110);
    *(undefined8 *)(puVar16 + -0x1688) = *(undefined8 *)(puVar16 + 0x1128);
    *(undefined8 *)(puVar16 + -0x1690) = *(undefined8 *)(puVar16 + 0x1120);
    *(undefined8 *)(puVar16 + -0x1678) = *(undefined8 *)(puVar16 + 0x1138);
    *(undefined8 *)(puVar16 + -0x1680) = *(undefined8 *)(puVar16 + 0x1130);
    *(undefined8 *)(puVar16 + -0x1668) = *(undefined8 *)(puVar16 + 0x1148);
    *(undefined8 *)(puVar16 + -0x1670) = *(undefined8 *)(puVar16 + 0x1140);
    *(undefined8 *)(puVar16 + -0x16b8) = *(undefined8 *)(puVar16 + 0x10f8);
    *(undefined8 *)(puVar16 + -0x16c0) = *(undefined8 *)(puVar16 + 0x10f0);
    *(undefined8 *)(puVar16 + -0x16a8) = *(undefined8 *)(puVar16 + 0x1108);
    *(undefined8 *)(puVar16 + -0x16b0) = *(undefined8 *)(puVar16 + 0x1100);
    *(undefined8 *)(puVar16 + -0x16e8) = *(undefined8 *)(puVar16 + 0x10c8);
    *(undefined8 *)(puVar16 + -0x16f0) = *(undefined8 *)(puVar16 + 0x10c0);
    *(undefined8 *)(puVar16 + -0x16d8) = *(undefined8 *)(puVar16 + 0x10d8);
    *(undefined8 *)(puVar16 + -0x16e0) = *(undefined8 *)(puVar16 + 0x10d0);
    *(undefined8 *)(puVar16 + -0x16cb) = *(undefined8 *)(puVar16 + 0x10e5);
    *(undefined8 *)(puVar16 + -0x16d3) = *(undefined8 *)(puVar16 + 0x10dd);
    *(undefined8 *)(puVar16 + -0x1728) = *(undefined8 *)(puVar16 + 0x1088);
    *(undefined8 *)(puVar16 + -0x1730) = *(undefined8 *)(puVar16 + 0x1080);
    *(undefined8 *)(puVar16 + -0x1718) = *(undefined8 *)(puVar16 + 0x1098);
    *(undefined8 *)(puVar16 + -0x1720) = *(undefined8 *)(puVar16 + 0x1090);
    *(undefined8 *)(puVar16 + -0x1708) = *(undefined8 *)(puVar16 + 0x10a8);
    *(undefined8 *)(puVar16 + -0x1710) = *(undefined8 *)(puVar16 + 0x10a0);
    *(undefined8 *)(puVar16 + -0x16f8) = *(undefined8 *)(puVar16 + 0x10b8);
    *(undefined8 *)(puVar16 + -0x1700) = *(undefined8 *)(puVar16 + 0x10b0);
    *(undefined8 *)(puVar16 + -0x1748) = *(undefined8 *)(puVar16 + 0x1068);
    *(undefined8 *)(puVar16 + -0x1750) = *(undefined8 *)(puVar16 + 0x1060);
    *(undefined8 *)(puVar16 + -0x1738) = *(undefined8 *)(puVar16 + 0x1078);
    *(undefined8 *)(puVar16 + -0x1740) = *(undefined8 *)(puVar16 + 0x1070);
    **(undefined1 **)(puVar16 + -0x18a0) = 1;
    FUN_100d85214(puVar36);
    unaff_x27 = (ulong)((uint)unaff_x27 & 0xff | (int)plVar34 << 8);
    if (puVar25[0x4c] != 0) {
      _free(puVar25[0x4d]);
    }
    plVar34 = (long *)(((ulong)plVar34 & 0xffffffffffffff) >> 8);
    *(undefined1 *)((long)puVar25 + 0x29b) = 0;
  }
  *(undefined1 *)((long)puVar25 + 0x29c) = 0;
  *plVar21 = lVar33;
  plVar21[1] = uVar40;
  plVar21[2] = unaff_x27 & 0xffff | (long)plVar34 << 0x10;
  *(undefined1 (*) [16])(plVar21 + 3) = auVar11;
  plVar21[5] = (long)puVar23;
  _memcpy(plVar21 + 6,puVar16 + -0x1620,0x4e0);
  lVar33 = *(long *)(puVar16 + -0x1660);
  lVar41 = *(long *)(puVar16 + -0x1648);
  lVar20 = *(long *)(puVar16 + -0x1650);
  plVar21[0xaf] = *(long *)(puVar16 + -0x1658);
  plVar21[0xae] = lVar33;
  plVar21[0xb1] = lVar41;
  plVar21[0xb0] = lVar20;
  lVar33 = *(long *)(puVar16 + -0x1640);
  plVar21[0xb3] = *(long *)(puVar16 + -0x1638);
  plVar21[0xb2] = lVar33;
  plVar21[0xb4] = *(long *)(puVar16 + -0x1630);
  lVar33 = *(long *)(puVar16 + -0x16a0);
  lVar41 = *(long *)(puVar16 + -0x1688);
  lVar20 = *(long *)(puVar16 + -0x1690);
  plVar21[0xa7] = *(long *)(puVar16 + -0x1698);
  plVar21[0xa6] = lVar33;
  plVar21[0xa9] = lVar41;
  plVar21[0xa8] = lVar20;
  lVar33 = *(long *)(puVar16 + -0x1680);
  lVar41 = *(long *)(puVar16 + -0x1668);
  lVar20 = *(long *)(puVar16 + -0x1670);
  plVar21[0xab] = *(long *)(puVar16 + -0x1678);
  plVar21[0xaa] = lVar33;
  plVar21[0xad] = lVar41;
  plVar21[0xac] = lVar20;
  lVar33 = *(long *)(puVar16 + -0x16c0);
  lVar41 = *(long *)(puVar16 + -0x16a8);
  lVar20 = *(long *)(puVar16 + -0x16b0);
  plVar21[0xa3] = *(long *)(puVar16 + -0x16b8);
  plVar21[0xa2] = lVar33;
  plVar21[0xa5] = lVar41;
  plVar21[0xa4] = lVar20;
  *(undefined2 *)(plVar21 + 0xb5) = 0;
  uVar26 = 1;
  *(undefined1 *)((long)plVar21 + 0x5aa) = 1;
  uVar28 = *(undefined8 *)(puVar16 + -0x16f0);
  uVar46 = *(undefined8 *)(puVar16 + -0x16d8);
  uVar45 = *(undefined8 *)(puVar16 + -0x16e0);
  *(undefined8 *)((long)plVar21 + 0x613) = *(undefined8 *)(puVar16 + -0x16e8);
  *(undefined8 *)((long)plVar21 + 0x60b) = uVar28;
  *(undefined8 *)((long)plVar21 + 0x623) = uVar46;
  *(undefined8 *)((long)plVar21 + 0x61b) = uVar45;
  lVar33 = *(long *)(puVar16 + -0x16d3);
  plVar21[0xc6] = *(long *)(puVar16 + -0x16cb);
  plVar21[0xc5] = lVar33;
  uVar28 = *(undefined8 *)(puVar16 + -0x1730);
  uVar46 = *(undefined8 *)(puVar16 + -0x1718);
  uVar45 = *(undefined8 *)(puVar16 + -0x1720);
  *(undefined8 *)((long)plVar21 + 0x5d3) = *(undefined8 *)(puVar16 + -0x1728);
  *(undefined8 *)((long)plVar21 + 0x5cb) = uVar28;
  *(undefined8 *)((long)plVar21 + 0x5e3) = uVar46;
  *(undefined8 *)((long)plVar21 + 0x5db) = uVar45;
  uVar46 = *(undefined8 *)(puVar16 + -0x1710);
  uVar45 = *(undefined8 *)(puVar16 + -0x16f8);
  uVar28 = *(undefined8 *)(puVar16 + -0x1700);
  *(undefined8 *)((long)plVar21 + 0x5f3) = *(undefined8 *)(puVar16 + -0x1708);
  *(undefined8 *)((long)plVar21 + 0x5eb) = uVar46;
  *(undefined8 *)((long)plVar21 + 0x603) = uVar45;
  *(undefined8 *)((long)plVar21 + 0x5fb) = uVar28;
  uVar46 = *(undefined8 *)(puVar16 + -0x1750);
  uVar45 = *(undefined8 *)(puVar16 + -0x1738);
  uVar28 = *(undefined8 *)(puVar16 + -0x1740);
  *(undefined8 *)((long)plVar21 + 0x5b3) = *(undefined8 *)(puVar16 + -0x1748);
  *(undefined8 *)((long)plVar21 + 0x5ab) = uVar46;
  *(undefined8 *)((long)plVar21 + 0x5c3) = uVar45;
  *(undefined8 *)((long)plVar21 + 0x5bb) = uVar28;
LAB_100a51334:
  *(undefined1 *)((long)puVar25 + 0x299) = uVar26;
  return;
}

