
void FUN_103a14264(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *extraout_x8;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long *extraout_x10;
  long *plVar26;
  long extraout_x11;
  long extraout_x12;
  long *plVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x27;
  long *plVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lStack_198;
  long lStack_168;
  long lStack_160;
  undefined7 uStack_fa;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined8 uStack_f0;
  undefined1 auStack_b0 [80];
  
  lVar34 = -0x8000000000000000;
  puVar32 = param_2;
  if (param_2[4] == -0x8000000000000000) {
    lVar28 = param_2[3];
    if (lVar28 != 0) goto LAB_103a142a8;
LAB_103a147b4:
    lStack_168 = 0;
    lStack_160 = 8;
  }
  else {
    uVar25 = param_2[5];
    lVar34 = param_2[6];
    if (lVar34 == 0) {
LAB_103a14794:
      lStack_198 = 1;
    }
    else {
      lStack_198 = _malloc(lVar34);
      if (lStack_198 == 0) {
        func_0x0001087c9084(1,lVar34);
        goto LAB_103a14794;
      }
    }
    _memcpy(lStack_198,uVar25,lVar34);
    lVar28 = param_2[3];
    if (lVar28 == 0) goto LAB_103a147b4;
LAB_103a142a8:
    lVar36 = param_2[2];
    lStack_160 = _malloc();
    if (lStack_160 == 0) {
      func_0x0001087c9084(8,lVar28 * 0x30);
      goto LAB_103a148e4;
    }
    lVar38 = 0;
    lVar33 = 0;
    lVar37 = lVar36;
    do {
      lStack_168 = lVar28;
      if (lVar28 * 0x30 == lVar38) break;
      uVar25 = *(undefined8 *)(lVar37 + 8);
      lVar1 = *(long *)(lVar37 + 0x10);
      if (lVar1 == 0) {
        lVar15 = 1;
      }
      else {
        lVar15 = _malloc(lVar1);
        if (lVar15 == 0) {
          func_0x0001087c9084(1,lVar1);
          goto LAB_103a148e4;
        }
      }
      _memcpy(lVar15,uVar25,lVar1);
      bVar7 = *(byte *)(lVar37 + 0x18);
      puVar32 = (undefined8 *)(ulong)bVar7;
      puVar21 = extraout_x8;
      if (bVar7 != 7) {
        if (bVar7 < 3) {
LAB_103a142e0:
          lVar13 = lVar36 + lVar38;
          uStack_f0 = (ulong)CONCAT43(*(undefined4 *)(lVar13 + 0x1c),
                                      (int3)*(undefined4 *)(lVar13 + 0x19));
          unaff_x27 = *(long **)(lVar13 + 0x20);
          puVar21 = *(undefined8 **)(lVar13 + 0x28);
        }
        else if (bVar7 < 5) {
          if (bVar7 == 3) goto LAB_103a142e0;
        }
        else if (bVar7 == 5) {
          unaff_x27 = *(long **)(lVar36 + lVar38 + 0x20);
          lVar13 = *unaff_x27;
          *unaff_x27 = lVar13 + 1;
          if (lVar13 < 0) goto LAB_103a148e4;
          puVar21 = *(undefined8 **)(lVar36 + lVar38 + 0x28);
        }
        else {
          plVar39 = *(long **)(lVar36 + lVar38 + 0x20);
          unaff_x27 = (long *)_malloc(0x340);
          if (unaff_x27 == (long *)0x0) {
            func_0x0001087c906c(0x10,0x340);
            goto LAB_103a148e4;
          }
          lVar13 = plVar39[0xf];
          lVar46 = plVar39[0x10];
          lVar29 = lVar46 << 2;
          if (lVar46 == 0) {
            lVar16 = 4;
          }
          else {
            lVar16 = _malloc(lVar29);
            if (lVar16 == 0) {
              func_0x0001087c9084(4,lVar29);
              goto LAB_103a148e4;
            }
          }
          _memcpy(lVar16,lVar13,lVar29);
          lVar22 = plVar39[0x31];
          lVar13 = plVar39[0x3f];
          lVar29 = plVar39[0x40];
          lVar30 = lVar29 << 2;
          if (lVar29 == 0) {
            lVar17 = 4;
          }
          else {
            lVar17 = _malloc(lVar30);
            if (lVar17 == 0) {
              func_0x0001087c9084(4,lVar30);
              goto LAB_103a148e4;
            }
          }
          _memcpy(lVar17,lVar13,lVar30);
          lVar9 = plVar39[100];
          lVar23 = plVar39[99];
          lVar13 = plVar39[0x3c];
          lVar2 = plVar39[0x3d];
          lVar10 = plVar39[0x41];
          uVar5 = *(undefined4 *)((long)plVar39 + 0x20c);
          lVar11 = plVar39[0x42];
          uVar6 = *(undefined4 *)((long)plVar39 + 0x214);
          lVar30 = plVar39[0x33];
          lVar3 = plVar39[0x34];
          lVar35 = lVar3 << 2;
          if (lVar3 == 0) {
            lVar18 = 4;
          }
          else {
            lVar18 = _malloc(lVar35);
            if (lVar18 == 0) {
              func_0x0001087c9084(4,lVar35);
              goto LAB_103a148e4;
            }
          }
          _memcpy(lVar18,lVar30,lVar35);
          lVar30 = plVar39[0x36];
          lVar35 = plVar39[0x37];
          if (lVar35 == 0) {
            lVar19 = 4;
          }
          else {
            lVar19 = _malloc(lVar35 << 2,lVar30);
            if (lVar19 == 0) {
              func_0x0001087c9084(4,lVar35 << 2);
              goto LAB_103a148e4;
            }
          }
          _memcpy(lVar19,lVar30);
          lVar24 = plVar39[0x38];
          lVar30 = plVar39[0x3a];
          lVar4 = plVar39[0x3b];
          lVar31 = lVar4 << 2;
          if (lVar4 == 0) {
            lVar20 = 4;
          }
          else {
            lVar20 = _malloc(lVar31);
            if (lVar20 == 0) {
              func_0x0001087c9084(4,lVar31);
              goto LAB_103a148e4;
            }
          }
          _memcpy(lVar20,lVar30,lVar31);
          lVar49 = plVar39[0xd];
          plVar26 = extraout_x10;
          lVar30 = extraout_x11;
          lVar31 = extraout_x12;
          if ((char)lVar49 != '\x02') {
            plVar26 = (long *)plVar39[10];
            lVar30 = *plVar26;
            *plVar26 = lVar30 + 1;
            if (lVar30 < 0) goto LAB_103a148e4;
            lVar30 = plVar39[0xb];
            lVar31 = plVar39[0xc];
          }
          lVar42 = plVar39[7];
          lVar40 = plVar39[6];
          lVar47 = plVar39[9];
          lVar44 = plVar39[8];
          uStack_f3 = (undefined1)(short)plVar39[0x65];
          uStack_f2 = (undefined1)((ushort)(short)plVar39[0x65] >> 8);
          uVar8 = *(undefined1 *)((long)plVar39 + 0x32a);
          lVar43 = plVar39[3];
          uStack_f0 = plVar39[2];
          lVar48 = plVar39[5];
          lVar45 = plVar39[4];
          lVar41 = plVar39[0x66];
          plVar27 = (long *)*plVar39;
          lVar14 = *plVar27;
          *plVar27 = lVar14 + 1;
          if (lVar14 < 0) goto LAB_103a148e4;
          lVar14 = plVar39[1];
          unaff_x27[3] = lVar43;
          unaff_x27[2] = uStack_f0;
          unaff_x27[5] = lVar48;
          unaff_x27[4] = lVar45;
          unaff_x27[7] = lVar42;
          unaff_x27[6] = lVar40;
          unaff_x27[9] = lVar47;
          unaff_x27[8] = lVar44;
          *unaff_x27 = (long)plVar27;
          unaff_x27[1] = lVar14;
          unaff_x27[10] = (long)plVar26;
          unaff_x27[0xb] = lVar30;
          unaff_x27[0xc] = lVar31;
          *(char *)(unaff_x27 + 0xd) = (char)lVar49;
          unaff_x27[0xe] = lVar46;
          unaff_x27[0xf] = lVar16;
          unaff_x27[0x10] = lVar46;
          lVar16 = plVar39[0x12];
          lVar46 = plVar39[0x11];
          lVar31 = plVar39[0x14];
          lVar30 = plVar39[0x13];
          lVar14 = plVar39[0x16];
          lVar49 = plVar39[0x15];
          lVar40 = plVar39[0x17];
          unaff_x27[0x18] = plVar39[0x18];
          unaff_x27[0x17] = lVar40;
          unaff_x27[0x16] = lVar14;
          unaff_x27[0x15] = lVar49;
          unaff_x27[0x14] = lVar31;
          unaff_x27[0x13] = lVar30;
          unaff_x27[0x12] = lVar16;
          unaff_x27[0x11] = lVar46;
          lVar16 = plVar39[0x1a];
          lVar46 = plVar39[0x19];
          lVar31 = plVar39[0x1c];
          lVar30 = plVar39[0x1b];
          lVar14 = plVar39[0x1e];
          lVar49 = plVar39[0x1d];
          lVar40 = plVar39[0x1f];
          unaff_x27[0x20] = plVar39[0x20];
          unaff_x27[0x1f] = lVar40;
          unaff_x27[0x1e] = lVar14;
          unaff_x27[0x1d] = lVar49;
          unaff_x27[0x1c] = lVar31;
          unaff_x27[0x1b] = lVar30;
          unaff_x27[0x1a] = lVar16;
          unaff_x27[0x19] = lVar46;
          lVar16 = plVar39[0x22];
          lVar46 = plVar39[0x21];
          lVar31 = plVar39[0x24];
          lVar30 = plVar39[0x23];
          lVar49 = plVar39[0x25];
          lVar40 = plVar39[0x28];
          lVar14 = plVar39[0x27];
          unaff_x27[0x26] = plVar39[0x26];
          unaff_x27[0x25] = lVar49;
          unaff_x27[0x28] = lVar40;
          unaff_x27[0x27] = lVar14;
          unaff_x27[0x22] = lVar16;
          unaff_x27[0x21] = lVar46;
          unaff_x27[0x24] = lVar31;
          unaff_x27[0x23] = lVar30;
          lVar16 = plVar39[0x2a];
          lVar46 = plVar39[0x29];
          lVar31 = plVar39[0x2c];
          lVar30 = plVar39[0x2b];
          lVar49 = plVar39[0x2d];
          lVar40 = plVar39[0x30];
          lVar14 = plVar39[0x2f];
          unaff_x27[0x2e] = plVar39[0x2e];
          unaff_x27[0x2d] = lVar49;
          unaff_x27[0x30] = lVar40;
          unaff_x27[0x2f] = lVar14;
          unaff_x27[0x2a] = lVar16;
          unaff_x27[0x29] = lVar46;
          unaff_x27[0x2c] = lVar31;
          unaff_x27[0x2b] = lVar30;
          unaff_x27[0x31] = lVar22;
          unaff_x27[0x33] = lVar18;
          unaff_x27[0x32] = lVar3;
          unaff_x27[0x35] = lVar35;
          unaff_x27[0x34] = lVar3;
          unaff_x27[0x37] = lVar35;
          unaff_x27[0x36] = lVar19;
          unaff_x27[0x38] = lVar24;
          unaff_x27[0x39] = lVar4;
          unaff_x27[0x3a] = lVar20;
          unaff_x27[0x3b] = lVar4;
          unaff_x27[0x3c] = lVar13;
          unaff_x27[0x3d] = lVar2;
          unaff_x27[0x3e] = lVar29;
          unaff_x27[0x3f] = lVar17;
          unaff_x27[0x40] = lVar29;
          *(int *)(unaff_x27 + 0x41) = (int)lVar10;
          *(undefined4 *)((long)unaff_x27 + 0x20c) = uVar5;
          *(int *)(unaff_x27 + 0x42) = (int)lVar11;
          *(undefined4 *)((long)unaff_x27 + 0x214) = uVar6;
          lVar46 = plVar39[0x44];
          lVar13 = plVar39[0x43];
          lVar16 = plVar39[0x46];
          lVar29 = plVar39[0x45];
          lVar22 = plVar39[0x47];
          lVar17 = plVar39[0x4a];
          lVar30 = plVar39[0x49];
          unaff_x27[0x48] = plVar39[0x48];
          unaff_x27[0x47] = lVar22;
          unaff_x27[0x4a] = lVar17;
          unaff_x27[0x49] = lVar30;
          unaff_x27[0x44] = lVar46;
          unaff_x27[0x43] = lVar13;
          unaff_x27[0x46] = lVar16;
          unaff_x27[0x45] = lVar29;
          lVar46 = plVar39[0x4c];
          lVar13 = plVar39[0x4b];
          lVar16 = plVar39[0x4e];
          lVar29 = plVar39[0x4d];
          lVar22 = plVar39[0x4f];
          lVar17 = plVar39[0x52];
          lVar30 = plVar39[0x51];
          unaff_x27[0x50] = plVar39[0x50];
          unaff_x27[0x4f] = lVar22;
          unaff_x27[0x52] = lVar17;
          unaff_x27[0x51] = lVar30;
          unaff_x27[0x4c] = lVar46;
          unaff_x27[0x4b] = lVar13;
          unaff_x27[0x4e] = lVar16;
          unaff_x27[0x4d] = lVar29;
          lVar46 = plVar39[0x54];
          lVar13 = plVar39[0x53];
          lVar16 = plVar39[0x56];
          lVar29 = plVar39[0x55];
          lVar22 = plVar39[0x57];
          lVar17 = plVar39[0x5a];
          lVar30 = plVar39[0x59];
          unaff_x27[0x58] = plVar39[0x58];
          unaff_x27[0x57] = lVar22;
          unaff_x27[0x5a] = lVar17;
          unaff_x27[0x59] = lVar30;
          unaff_x27[0x54] = lVar46;
          unaff_x27[0x53] = lVar13;
          unaff_x27[0x56] = lVar16;
          unaff_x27[0x55] = lVar29;
          lVar46 = plVar39[0x5c];
          lVar13 = plVar39[0x5b];
          lVar16 = plVar39[0x5e];
          lVar29 = plVar39[0x5d];
          lVar22 = plVar39[0x5f];
          lVar17 = plVar39[0x62];
          lVar30 = plVar39[0x61];
          unaff_x27[0x60] = plVar39[0x60];
          unaff_x27[0x5f] = lVar22;
          unaff_x27[0x62] = lVar17;
          unaff_x27[0x61] = lVar30;
          unaff_x27[0x5c] = lVar46;
          unaff_x27[0x5b] = lVar13;
          unaff_x27[0x5e] = lVar16;
          unaff_x27[0x5d] = lVar29;
          unaff_x27[99] = lVar23;
          *(char *)(unaff_x27 + 100) = (char)lVar9;
          puVar21 = (undefined8 *)((long)unaff_x27 + 0x321);
          *puVar21 = CONCAT17(uStack_f3,uStack_fa);
          *(ushort *)((long)unaff_x27 + 0x329) = CONCAT11(uVar8,uStack_f2);
          unaff_x27[0x66] = lVar41;
        }
      }
      lVar37 = lVar37 + 0x30;
      lVar33 = lVar33 + 1;
      plVar39 = (long *)(lStack_160 + lVar38);
      *plVar39 = lVar1;
      plVar39[1] = lVar15;
      plVar39[2] = lVar1;
      *(byte *)(plVar39 + 3) = bVar7;
      auStack_b0._0_4_ = (undefined4)uStack_f0;
      *(undefined4 *)((long)plVar39 + 0x19) = auStack_b0._0_4_;
      auStack_b0._3_4_ = (undefined4)(uStack_f0 >> 0x18);
      *(undefined4 *)((long)plVar39 + 0x1c) = auStack_b0._3_4_;
      plVar39[4] = (long)unaff_x27;
      plVar39[5] = (long)puVar21;
      lVar38 = lVar38 + 0x30;
    } while (lVar28 != lVar33);
  }
  lVar36 = -0x8000000000000000;
  if (param_2[7] != -0x8000000000000000) {
    uVar25 = param_2[8];
    lVar36 = param_2[9];
    if (lVar36 == 0) {
      puVar32 = (undefined8 *)0x1;
    }
    else {
      puVar32 = (undefined8 *)_malloc(lVar36);
      if (puVar32 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,lVar36);
LAB_103a148e4:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x103a148e8);
        (*pcVar12)();
      }
    }
    _memcpy(puVar32,uVar25,lVar36);
  }
  uVar25 = *param_2;
  param_1[5] = lStack_198;
  param_1[6] = lVar34;
  param_1[2] = lStack_160;
  param_1[1] = lStack_168;
  param_1[3] = lVar28;
  param_1[4] = lVar34;
  param_1[7] = lVar36;
  param_1[8] = puVar32;
  param_1[9] = lVar36;
  *param_1 = uVar25;
  return;
}

