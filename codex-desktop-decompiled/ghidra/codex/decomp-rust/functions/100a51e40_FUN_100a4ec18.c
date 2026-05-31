
/* WARNING: Possible PIC construction at 0x000100a4eda8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a4edac) */
/* WARNING: Removing unreachable block (ram,0x000100a4edc4) */
/* WARNING: Removing unreachable block (ram,0x000100a4edb8) */
/* WARNING: Removing unreachable block (ram,0x000100a4f4a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4ec18(undefined8 *param_1,long *param_2,undefined8 param_3)

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
  code *pcVar14;
  undefined1 *puVar15;
  bool bVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  long *plVar20;
  int *piVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined1 extraout_w8;
  undefined1 uVar25;
  byte bVar26;
  uint extraout_w8_00;
  long *plVar27;
  ulong uVar28;
  undefined1 *puVar29;
  long *extraout_x10;
  long lVar30;
  long extraout_x11;
  long extraout_x12;
  long *plVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  byte *pbVar35;
  undefined8 uVar36;
  undefined2 uVar37;
  ulong unaff_x24;
  ulong uVar38;
  long lVar39;
  long *unaff_x25;
  ulong uVar40;
  undefined8 *unaff_x26;
  ulong unaff_x27;
  ulong uVar41;
  long in_xzr;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_7d20 [28672];
  long lStack_cb8;
  long *plStack_cb0;
  long alStack_ca8 [199];
  undefined1 auStack_670 [1552];
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar31 = param_2 + 0x400;
  bVar26 = *(byte *)((long)param_2 + 0x2941);
  if (bVar26 < 2) {
    if (bVar26 == 0) {
      plVar20 = (long *)param_2[1];
      lVar17 = param_2[2];
      uVar25 = (undefined1)param_2[0x528];
      *(undefined1 *)((long)param_2 + 0x2942) = 1;
      lVar30 = *param_2;
      lStack_cb8 = lVar30;
      plStack_cb0 = plVar20;
      if (lVar17 == 3) {
        lStack_58 = param_2[4];
        lStack_60 = param_2[3];
        lStack_48 = param_2[6];
        lStack_50 = param_2[5];
        param_2[0x29] = lStack_58;
        param_2[0x28] = lStack_60;
        param_2[0x2b] = lStack_48;
        param_2[0x2a] = lStack_50;
        param_2[0x27] = 3;
        if ((lVar30 != 0) && (plVar20 != (long *)0x0)) {
          lVar17 = *plVar20;
          *plVar20 = lVar17 + -1;
          LORelease();
          if (lVar17 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4e229937a5e8886E(&plStack_cb0);
          }
        }
        *(undefined1 *)((long)param_2 + 0x2942) = 0;
        *param_1 = 2;
        param_1[2] = lStack_58;
        param_1[1] = lStack_60;
        param_1[4] = lStack_48;
        param_1[3] = lStack_50;
        _memcpy(param_1 + 5,auStack_670,0x610);
        *(undefined1 *)((long)param_2 + 0x2941) = 1;
        return;
      }
LAB_100a4ecd4:
      param_2[0x27] = lVar17;
      param_2[0x29] = param_2[4];
      param_2[0x28] = param_2[3];
      param_2[0x2b] = param_2[6];
      param_2[0x2a] = param_2[5];
      param_2[0x31] = param_2[0xc];
      param_2[0x30] = param_2[0xb];
      param_2[0x33] = param_2[0xe];
      param_2[0x32] = param_2[0xd];
      param_2[0x2d] = param_2[8];
      param_2[0x2c] = param_2[7];
      param_2[0x2f] = param_2[10];
      param_2[0x2e] = param_2[9];
      param_2[0x39] = param_2[0x14];
      param_2[0x38] = param_2[0x13];
      param_2[0x3b] = param_2[0x16];
      param_2[0x3a] = param_2[0x15];
      param_2[0x35] = param_2[0x10];
      param_2[0x34] = param_2[0xf];
      param_2[0x37] = param_2[0x12];
      param_2[0x36] = param_2[0x11];
      param_2[0x3f] = param_2[0x1a];
      param_2[0x3e] = param_2[0x19];
      param_2[0x41] = param_2[0x1c];
      param_2[0x40] = param_2[0x1b];
      param_2[0x3d] = param_2[0x18];
      param_2[0x3c] = param_2[0x17];
      param_2[0x42] = param_2[0x1d];
      *(undefined1 *)((long)param_2 + 0x2942) = 0;
      param_2[0x43] = lVar30;
      param_2[0x44] = (long)plVar20;
      param_2[0x5a] = param_2[0x3c];
      param_2[0x59] = param_2[0x3b];
      param_2[0x5c] = param_2[0x3e];
      param_2[0x5b] = param_2[0x3d];
      param_2[0x5e] = param_2[0x40];
      param_2[0x5d] = param_2[0x3f];
      param_2[0x60] = param_2[0x42];
      param_2[0x5f] = param_2[0x41];
      param_2[0x52] = param_2[0x34];
      param_2[0x51] = param_2[0x33];
      param_2[0x54] = param_2[0x36];
      param_2[0x53] = param_2[0x35];
      param_2[0x56] = param_2[0x38];
      param_2[0x55] = param_2[0x37];
      param_2[0x58] = param_2[0x3a];
      param_2[0x57] = param_2[0x39];
      param_2[0x4a] = param_2[0x2c];
      param_2[0x49] = param_2[0x2b];
      param_2[0x4c] = param_2[0x2e];
      param_2[0x4b] = param_2[0x2d];
      param_2[0x4e] = param_2[0x30];
      param_2[0x4d] = param_2[0x2f];
      param_2[0x50] = param_2[0x32];
      param_2[0x4f] = param_2[0x31];
      param_2[0x46] = param_2[0x28];
      param_2[0x45] = param_2[0x27];
      param_2[0x48] = param_2[0x2a];
      param_2[0x47] = param_2[0x29];
      param_2[0x66] = param_2[0x23];
      param_2[0x65] = param_2[0x22];
      param_2[0x68] = param_2[0x25];
      param_2[0x67] = param_2[0x24];
      param_2[0x69] = param_2[0x26];
      param_2[0x62] = param_2[0x1f];
      param_2[0x61] = param_2[0x1e];
      param_2[100] = param_2[0x21];
      param_2[99] = param_2[0x20];
      *(undefined1 *)(param_2 + 0x96) = uVar25;
      *(undefined1 *)((long)param_2 + 0x4b1) = 0;
      goto LAB_100a4eda0;
    }
    func_0x000108a07af4(&UNK_10b22b378);
    *(undefined1 *)((long)param_2 + 0x2942) = 0;
    *(undefined1 *)((long)param_2 + 0x2941) = 2;
    uVar19 = __Unwind_Resume();
    if ((*(byte *)((long)param_2 + 0x2942) & 1) != 0) {
      FUN_100e4dbc8(&lStack_cb8);
    }
    *(undefined1 *)((long)param_2 + 0x2942) = 0;
    *(undefined1 *)((long)param_2 + 0x2941) = 2;
    __Unwind_Resume(uVar19);
    auVar47 = func_0x000108a07bc4();
  }
  else {
    if (bVar26 != 3) {
      func_0x000108a07b10(&UNK_10b22b378);
      plVar20 = extraout_x10;
      lVar30 = extraout_x11;
      lVar17 = extraout_x12;
      uVar25 = extraout_w8;
      goto LAB_100a4ecd4;
    }
LAB_100a4eda0:
    auVar47._8_8_ = param_2 + 0x43;
    auVar47._0_8_ = alStack_ca8;
  }
  puVar24 = auVar47._8_8_;
  plVar20 = auVar47._0_8_;
  puVar29 = &stack0xfffffffffffff2e0;
  do {
    puVar15 = puVar29;
    *(undefined8 *)(puVar15 + -0x1000) = 0;
    puVar29 = puVar15 + -0x1000;
  } while (puVar15 + -0x1000 != auStack_7d20);
  *(undefined8 *)(puVar15 + -0x18d0) = 0;
  *(undefined8 *)(puVar15 + -0x1888) = param_3;
  puVar22 = (undefined8 *)(puVar15 + -0xc80);
  pbVar35 = (byte *)(puVar24 + 0x4e3);
  bVar26 = *(byte *)((long)puVar24 + 0x299);
  if (2 < bVar26) {
    if (bVar26 == 3) {
      *(byte **)(puVar15 + -0x18a8) = pbVar35;
      pbVar35 = (byte *)((long)puVar24 + 0x3bd);
      bVar26 = *(byte *)((long)puVar24 + 0x3bd);
      uVar32 = (uint)bVar26;
      plVar31 = puVar24 + 0x54;
      if (2 < bVar26) {
        if (bVar26 != 3) {
          if (bVar26 != 4) {
LAB_100a4f56c:
            pbVar35 = (byte *)((long)puVar24 + 0x3bd);
            plVar31 = puVar24 + 0x54;
            FUN_100fc47a4(puVar15 + -0xc80,puVar24 + 0x78,*(undefined8 *)(puVar15 + -0x1888));
            uVar28 = *(ulong *)(puVar15 + -0xc80);
            if (uVar28 == 3) {
              bVar26 = 5;
              goto LAB_100a51e98;
            }
            unaff_x27 = *(ulong *)(puVar15 + -0xc78);
            unaff_x25 = *(long **)(puVar15 + -0xc70);
            unaff_x26 = *(undefined8 **)(puVar15 + -0xc68);
            func_0x000100cf0d94(puVar24 + 0x78);
            bVar16 = uVar28 == 2;
            uVar38 = 0xb;
            if (!bVar16) {
              uVar38 = uVar28;
            }
            goto LAB_100a4f178;
          }
          *(long *)(puVar15 + -0x18b0) = (long)puVar24 + 0x41a;
          bVar26 = *(byte *)((long)puVar24 + 0x41a);
          puVar33 = puVar24 + 0x78;
          if (bVar26 < 3) {
            if (bVar26 != 0) {
              if (bVar26 == 1) {
                func_0x000108a07af4(&UNK_10b22b2a0);
              }
              else {
                func_0x000108a07b10(&UNK_10b22b2a0);
              }
              goto LAB_100a52e04;
            }
            puVar33 = (undefined8 *)puVar24[0x7c];
            uVar19 = puVar24[0x7d];
            uVar36 = puVar24[0x7e];
            uVar37 = *(undefined2 *)(puVar24 + 0x83);
            goto LAB_100a4f864;
          }
          if (bVar26 == 3) {
            puVar29 = (undefined1 *)((long)puVar24 + 0x48c);
            bVar26 = *(byte *)((long)puVar24 + 0x48c);
            *(undefined8 **)(puVar15 + -0x18b8) = puVar24 + 0x84;
            if (bVar26 < 3) {
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              if (bVar26 != 0) {
                if (bVar26 == 1) {
                  func_0x000108a07af4(&UNK_10b22b270);
                }
                else {
                  func_0x000108a07b10(&UNK_10b22b270);
                }
                goto LAB_100a52e04;
              }
              puVar34 = (undefined8 *)puVar24[0x84];
              uVar19 = puVar24[0x85];
              uVar36 = puVar24[0x86];
              uVar37 = *(undefined2 *)(puVar24 + 0x91);
              unaff_x25 = (long *)puVar24[0x87];
              goto LAB_100a4f9f4;
            }
            if (bVar26 == 3) {
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              unaff_x26 = (undefined8 *)puVar24[0x94];
              goto LAB_100a4fd3c;
            }
            if (bVar26 == 4) {
              uVar19 = puVar24[0x88];
LAB_100a4fdb0:
              puVar24[0x92] = uVar19;
              *(undefined8 **)(puVar15 + -0x18c8) = puVar24 + 0xda;
              *(undefined1 *)(puVar24 + 0xda) = 0;
            }
            else {
              bVar26 = *(byte *)(puVar24 + 0xda);
              *(undefined8 **)(puVar15 + -0x18c8) = puVar24 + 0xda;
              if (1 < bVar26) {
                if (bVar26 == 3) {
                  puVar34 = (undefined8 *)puVar24[0xd8];
                  uVar36 = puVar24[0xd9];
                  uVar19 = puVar24[0xd7];
                  goto LAB_100a52ac8;
                }
                *(undefined1 **)(puVar15 + -0x18c0) = puVar29;
                *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
                func_0x000108a07b10(&UNK_10b22b2e8);
                goto LAB_100a52e04;
              }
              if (bVar26 != 0) {
                *(undefined1 **)(puVar15 + -0x18c0) = puVar29;
                *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
                func_0x000108a07af4(&UNK_10b22b2e8);
                goto LAB_100a52e04;
              }
              uVar19 = puVar24[0x92];
            }
            puVar29 = (undefined1 *)((long)puVar24 + 0x48c);
            puVar24[0x93] = uVar19;
            puVar24[0x94] = 0;
            puVar24[0x95] = 1;
            _bzero(puVar24 + 0x96,0x208);
            uVar28 = 0;
LAB_100a52c40:
            if (uVar28 < 0x2000) {
              uVar19 = puVar24[0x93];
              puVar34 = puVar24 + 0x97;
              puVar24[0xd7] = uVar19;
              puVar24[0xd8] = puVar34;
              uVar36 = 0x200;
              puVar24[0xd9] = 0x200;
LAB_100a52ac8:
              plVar31 = puVar24 + 0x54;
              pbVar35 = (byte *)((long)puVar24 + 0x3bd);
              *(undefined8 **)(puVar15 + -0xc80) = puVar34;
              *(undefined8 *)(puVar15 + -0xc78) = uVar36;
              *(undefined8 *)(puVar15 + -0xc70) = 0;
              *(undefined8 *)(puVar15 + -0xc68) = uVar36;
              auVar47 = func_0x0001060f8cbc(uVar19,*(undefined8 *)(puVar15 + -0x1888),
                                            puVar15 + -0xc80);
              uVar28 = auVar47._8_8_;
              if ((auVar47._0_8_ & 1) != 0) {
                **(undefined1 **)(puVar15 + -0x18c8) = 3;
                uVar25 = 5;
LAB_100a4fdec:
                pbVar35 = (byte *)((long)puVar24 + 0x3bd);
                *puVar29 = uVar25;
                uVar25 = 3;
                puVar29 = *(undefined1 **)(puVar15 + -0x18b0);
LAB_100a51e90:
                *puVar29 = uVar25;
                bVar26 = 4;
                goto LAB_100a51e98;
              }
              if (uVar28 == 0) {
                unaff_x25 = *(long **)(puVar15 + -0xc70);
                if (*(long **)(puVar15 + -0xc78) < unaff_x25) {
                  func_0x000108a07904(0,unaff_x25,*(long **)(puVar15 + -0xc78),&UNK_10b209248);
                }
                else {
                  if (unaff_x25 == (long *)0x0) {
                    *(undefined1 **)(puVar15 + -0x18c0) = puVar29;
                    piVar21 = (int *)puVar24[0x95];
                    uVar28 = puVar24[0x96];
                    goto LAB_100a52b84;
                  }
                  if (unaff_x25 < (long *)0x201) goto code_r0x000100a52b08;
                  *(undefined1 **)(puVar15 + -0x18c0) = puVar29;
                  *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
                  func_0x000108a07904(0,unaff_x25,0x200,&UNK_10b22b300);
                }
                goto LAB_100a52e04;
              }
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              uVar38 = 0xb;
              goto LAB_100a52d38;
            }
            unaff_x25 = (long *)_malloc(0x1f);
            *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
            if (unaff_x25 == (long *)0x0) {
              *(undefined1 **)(puVar15 + -0x18c0) = puVar29;
              func_0x0001087c9084(1,0x1f);
              goto LAB_100a52e04;
            }
            unaff_x25[1] = 0x736572205443454e;
            *unaff_x25 = 0x4e4f432050545448;
            *(undefined8 *)((long)unaff_x25 + 0x17) = 0x656772616c206f6f;
            *(undefined8 *)((long)unaff_x25 + 0xf) = 0x742065736e6f7073;
            uVar28 = 0x1f;
            uVar38 = 8;
LAB_100a52d38:
            if (puVar24[0x94] != 0) {
              _free(puVar24[0x95]);
            }
            **(undefined1 **)(puVar15 + -0x18c8) = 1;
            uVar32 = (uint)uVar28 & 0xffff;
            puVar22 = (undefined8 *)(uVar28 >> 0x10);
            unaff_x26 = (undefined8 *)0x1f;
LAB_100a52a68:
            if (puVar24[0x8e] != 0) {
              _free(puVar24[0x8f]);
            }
            goto LAB_100a52a78;
          }
          bVar26 = *(byte *)((long)puVar24 + 0x47e);
          *(long *)(puVar15 + -0x18c0) = (long)puVar24 + 0x47e;
          *(undefined8 **)(puVar15 + -0x18b8) = puVar24 + 0x84;
          if (bVar26 < 5) {
            *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
            if (bVar26 < 3) {
              if (bVar26 != 0) {
                if (bVar26 == 1) {
                  func_0x000108a07af4(&UNK_10b22b288);
                }
                else {
                  func_0x000108a07b10(&UNK_10b22b288);
                }
                goto LAB_100a52e04;
              }
              puVar34 = (undefined8 *)puVar24[0x84];
              uVar19 = puVar24[0x85];
              uVar36 = puVar24[0x86];
              uVar37 = *(undefined2 *)(puVar24 + 0x8f);
              unaff_x25 = (long *)puVar24[0x87];
              goto LAB_100a4f8b4;
            }
            if (bVar26 == 3) {
              lVar17 = puVar24[0x93];
              goto LAB_100a4f92c;
            }
            lVar17 = puVar24[0x92];
LAB_100a4fe40:
            pbVar35 = (byte *)((long)puVar24 + 0x3bd);
            do {
              if (lVar17 == 0) {
                uVar19 = puVar24[0x88];
                puVar24[0x90] = uVar19;
                goto LAB_100a4fedc;
              }
              auVar47 = func_0x0001060f8f1c(puVar24[0x90],*(undefined8 *)(puVar15 + -0x1888),
                                            puVar24[0x91]);
              unaff_x27 = auVar47._8_8_;
              if (auVar47._0_8_ == 2) {
                uVar25 = 4;
                goto LAB_100a51e80;
              }
              if ((auVar47._0_8_ & 1) != 0) goto LAB_100a4fe98;
              lVar30 = puVar24[0x91];
              uVar28 = puVar24[0x92];
              puVar24[0x91] = 1;
              puVar24[0x92] = 0;
              lVar17 = uVar28 - unaff_x27;
              if (uVar28 < unaff_x27) {
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cc4086,0x13,&UNK_10b24e568);
                goto LAB_100a52e04;
              }
              puVar24[0x91] = lVar30 + unaff_x27;
              puVar24[0x92] = lVar17;
            } while (unaff_x27 != 0);
            goto LAB_100a4fe90;
          }
          if (bVar26 < 7) {
            *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
            if (bVar26 == 5) {
              uVar19 = puVar24[0x88];
LAB_100a4fedc:
              lVar17 = 0;
              *(undefined2 *)((long)puVar24 + 0x47c) = 0;
              puVar24[0x90] = uVar19;
              puVar24[0x91] = (long)puVar24 + 0x47c;
              puVar24[0x93] = 0;
              puVar24[0x92] = 2;
              lVar30 = 2;
              puVar24[0x94] = 2;
            }
            else {
              lVar30 = puVar24[0x92];
              lVar17 = puVar24[0x93];
            }
            pbVar35 = (byte *)((long)puVar24 + 0x3bd);
            plVar31 = puVar24 + 0x54;
            puVar22 = puVar24 + 0x90;
            do {
              lVar39 = lVar30 - lVar17;
              if (lVar30 == lVar17) {
                if (*(char *)((long)puVar24 + 0x47c) != '\x05') {
                  unaff_x25 = (long *)_malloc(0x20);
                  puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
                  if (unaff_x25 != (long *)0x0) {
                    unaff_x25[1] = 0x2064696c61766e69;
                    *unaff_x25 = 0x203a35534b434f53;
                    unaff_x25[3] = 0x6e6f697372657620;
                    unaff_x25[2] = 0x65736e6f70736572;
                    unaff_x27 = 0x20;
                    uVar38 = 8;
                    unaff_x26 = (undefined8 *)0x20;
                    goto LAB_100a4fea0;
                  }
                  func_0x0001087c9084(1,0x20);
                  goto LAB_100a52e04;
                }
                cVar7 = *(char *)((long)puVar24 + 0x47d);
                puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
                if (cVar7 == '\0') goto LAB_100a51ad4;
                if (cVar7 == '\x02') {
                  FUN_100e9be88(puVar15 + -0xc80,puVar24[0x8b]);
                  uVar38 = *(ulong *)(puVar15 + -0xc80);
                  unaff_x27 = *(ulong *)(puVar15 + -0xc78);
                  if (uVar38 == 0x15) {
                    uVar19 = puVar24[0x88];
                    puVar24[0x90] = uVar19;
                    puVar24[0x91] = unaff_x27;
                    *(undefined8 **)(puVar15 + -0x18c8) = puVar24 + 0x96;
                    *(undefined1 *)(puVar24 + 0x96) = 0;
                    puVar24[0x92] = uVar19;
                    unaff_x24 = *(ulong *)(unaff_x27 + 0x10);
                    unaff_x25 = *(long **)(unaff_x27 + 0x28);
                    uVar28 = (ulong)unaff_x25 | unaff_x24;
                    goto joined_r0x000100a4fbd0;
                  }
                  unaff_x25 = *(long **)(puVar15 + -0xc70);
                  unaff_x26 = *(undefined8 **)(puVar15 + -0xc68);
                }
                else {
                  if (cVar7 == -1) {
                    FUN_100f15358(puVar15 + -0xc80,&UNK_108cb5af3,0x2b);
                  }
                  else {
                    FUN_100f15358(puVar15 + -0xc80,&UNK_108cb5b1e,0x29);
                  }
                  unaff_x27 = *(ulong *)(puVar15 + -0xc80);
                  unaff_x25 = *(long **)(puVar15 + -0xc78);
                  uVar38 = 8;
                  unaff_x26 = *(undefined8 **)(puVar15 + -0xc70);
                }
                goto LAB_100a4fea0;
              }
              auVar47 = func_0x0001060f8cbc(*puVar22,*(undefined8 *)(puVar15 + -0x1888),
                                            puVar24 + 0x91);
              unaff_x27 = auVar47._8_8_;
              if ((auVar47._0_8_ & 1) != 0) {
                uVar25 = 6;
                goto LAB_100a51e80;
              }
              if (unaff_x27 != 0) goto LAB_100a4ff6c;
              lVar30 = puVar24[0x92];
              lVar17 = puVar24[0x93];
            } while (lVar30 - lVar17 != lVar39);
            unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
LAB_100a4ff6c:
            puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
            uVar38 = 0xb;
            goto LAB_100a4fea0;
          }
          if (bVar26 == 7) {
            *(undefined8 **)(puVar15 + -0x18c8) = puVar24 + 0x96;
            bVar26 = *(byte *)(puVar24 + 0x96);
            puVar22 = puVar24 + 0x90;
            if (2 < bVar26) {
              if (bVar26 != 3) {
                if (bVar26 == 4) {
                  uVar19 = puVar24[0x92];
LAB_100a516e8:
                  *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
                  lVar17 = 0;
                  *(undefined2 *)(puVar24 + 0x97) = 0;
                  puVar24[0x98] = uVar19;
                  puVar24[0x99] = puVar24 + 0x97;
                  puVar24[0x9b] = 0;
                  puVar24[0x9a] = 2;
                  lVar30 = 2;
                  puVar24[0x9c] = 2;
                }
                else {
                  *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
                  lVar30 = puVar24[0x9a];
                  lVar17 = puVar24[0x9b];
                }
LAB_100a51714:
                lVar39 = lVar30 - lVar17;
                if (lVar30 != lVar17) {
                  auVar47 = func_0x0001060f8cbc(puVar24[0x98],*(undefined8 *)(puVar15 + -0x1888),
                                                puVar24 + 0x99);
                  unaff_x27 = auVar47._8_8_;
                  if ((auVar47._0_8_ & 1) != 0) {
                    uVar25 = 5;
LAB_100a517dc:
                    **(undefined1 **)(puVar15 + -0x18c8) = uVar25;
                    uVar25 = 7;
                    goto LAB_100a51e80;
                  }
                  if (unaff_x27 == 0) goto code_r0x000100a51738;
                  goto LAB_100a51764;
                }
                if ((*(char *)(puVar24 + 0x97) == '\x01') &&
                   (*(char *)((long)puVar24 + 0x4b9) == '\0')) {
                  if (puVar24[0x93] != 0) {
                    _free(puVar24[0x94]);
                  }
                  **(undefined1 **)(puVar15 + -0x18c8) = 1;
                  puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
LAB_100a51ad4:
                  uVar19 = puVar24[0x88];
                  uVar36 = puVar24[0x89];
                  unaff_x27 = puVar24[0x8a];
                  uVar8 = *(ushort *)((long)puVar24 + 0x47a);
                  puVar24[0x90] = uVar19;
                  puVar24[0x91] = uVar36;
                  puVar24[0x92] = unaff_x27;
                  *(ushort *)((long)puVar24 + 0x4bc) = uVar8;
                  *(long *)(puVar15 + -0x18d0) = (long)puVar24 + 0x4be;
                  *(undefined1 *)((long)puVar24 + 0x4be) = 0;
                  goto LAB_100a51b04;
                }
                unaff_x25 = (long *)_malloc(0x1c);
                puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
                if (unaff_x25 != (long *)0x0) {
                  unaff_x25[1] = 0x6369746e65687475;
                  *unaff_x25 = 0x612035534b434f53;
                  *(undefined8 *)((long)unaff_x25 + 0x14) = 0x64656c696166206e;
                  *(undefined8 *)((long)unaff_x25 + 0xc) = 0x6f6974616369746e;
                  unaff_x27 = 0x1c;
                  uVar38 = 8;
                  goto LAB_100a517b8;
                }
                func_0x0001087c9084(1,0x1c);
                goto LAB_100a52e04;
              }
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              lVar17 = puVar24[0x99];
              goto LAB_100a5166c;
            }
            if (bVar26 != 0) {
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              if (bVar26 == 1) {
                func_0x000108a07af4(&UNK_10b22b2d0);
              }
              else {
                func_0x000108a07b10(&UNK_10b22b2d0);
              }
              goto LAB_100a52e04;
            }
            unaff_x27 = puVar24[0x91];
            puVar24[0x92] = puVar24[0x90];
            unaff_x24 = *(ulong *)(unaff_x27 + 0x10);
            unaff_x25 = *(long **)(unaff_x27 + 0x28);
            uVar28 = (ulong)unaff_x25 | unaff_x24;
joined_r0x000100a4fbd0:
            if (uVar28 < 0x100) {
              puVar22 = puVar24 + 0x90;
              pbVar35 = (byte *)((long)puVar24 + 0x3bd);
              plVar31 = puVar24 + 0x54;
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              unaff_x26 = *(undefined8 **)(unaff_x27 + 8);
              *(undefined8 *)(puVar15 + -0x18d0) = *(undefined8 *)(unaff_x27 + 0x20);
              lVar17 = (long)unaff_x25 + unaff_x24 + 3;
              puVar29 = (undefined1 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar17,1);
              if (puVar29 == (undefined1 *)0x0) {
                func_0x0001087c9084(1,lVar17);
                goto LAB_100a52e04;
              }
              puVar24[0x93] = lVar17;
              puVar24[0x94] = puVar29;
              *puVar29 = 1;
              puVar29[1] = (char)unaff_x24;
              lVar17 = 2;
              puVar24[0x95] = 2;
              if ((long)unaff_x25 + unaff_x24 + 1 < unaff_x24) goto LAB_100a52108;
              goto LAB_100a4fc24;
            }
            puVar22 = puVar24 + 0x90;
            pbVar35 = (byte *)((long)puVar24 + 0x3bd);
            plVar31 = puVar24 + 0x54;
            unaff_x25 = (long *)_malloc(0x20);
            if (unaff_x25 == (long *)0x0) {
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              func_0x0001087c9084(1,0x20);
              goto LAB_100a52e04;
            }
            unaff_x25[1] = 0x6465726320687475;
            *unaff_x25 = 0x612035534b434f53;
            unaff_x25[3] = 0x676e6f6c206f6f74;
            unaff_x25[2] = 0x20736c6169746e65;
            unaff_x27 = 0x20;
            uVar38 = 8;
            unaff_x26 = (undefined8 *)0x20;
            goto LAB_100a51864;
          }
          puVar22 = (undefined8 *)((long)puVar24 + 0x4be);
          bVar26 = *(byte *)((long)puVar24 + 0x4be);
          unaff_x26 = puVar24 + 0x90;
          if (bVar26 < 5) {
            if (bVar26 < 3) {
              *(undefined8 **)(puVar15 + -0x18d0) = puVar22;
              if (bVar26 != 0) {
                *(undefined8 **)(puVar15 + -0x18c8) = unaff_x26;
                *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
                if (bVar26 == 1) {
                  func_0x000108a07af4(&UNK_10b22b2b8);
                }
                else {
                  func_0x000108a07b10(&UNK_10b22b2b8);
                }
                goto LAB_100a52e04;
              }
              uVar19 = puVar24[0x90];
              uVar36 = puVar24[0x91];
              unaff_x27 = puVar24[0x92];
              uVar8 = *(ushort *)((long)puVar24 + 0x4bc);
LAB_100a51b04:
              *(undefined8 **)(puVar15 + -0x18c8) = puVar24 + 0x90;
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              puVar24[0x93] = uVar19;
              unaff_x25 = puVar24 + 0x94;
              puVar24[0x94] = 0;
              puVar24[0x95] = 1;
              puVar24[0x96] = 0;
              func_0x0001087c90b8(unaff_x25);
              *(undefined1 *)puVar24[0x95] = 5;
              puVar24[0x96] = 1;
              if (puVar24[0x94] == 1) {
                func_0x0001087c90b8(unaff_x25);
              }
              *(undefined1 *)(puVar24[0x95] + 1) = 1;
              puVar24[0x96] = 2;
              if (puVar24[0x94] == 2) {
                func_0x0001087c90b8(unaff_x25);
              }
              *(undefined1 *)(puVar24[0x95] + 2) = 0;
              puVar24[0x96] = 3;
              uVar28 = __ZN4core3net6parser85__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_core__net__ip_addr__Ipv4Addr_GT_8from_str17h054083979c684417E
                                 (uVar36,unaff_x27);
              if ((uVar28 & 1) == 0) {
                if (*unaff_x25 == 3) {
                  func_0x0001087c90b8(unaff_x25);
                }
                *(undefined1 *)(puVar24[0x95] + 3) = 1;
                lVar17 = 4;
                puVar24[0x96] = 4;
                if ((puVar24[0x94] & 0x7ffffffffffffffc) == 4) {
                  FUN_108855060(unaff_x25,4,4,1,1);
                  lVar17 = puVar24[0x96];
                }
                *(int *)(puVar24[0x95] + lVar17) = (int)(uVar28 >> 8);
                lVar17 = lVar17 + 4;
LAB_100a51c48:
                puVar24[0x96] = lVar17;
                unaff_x26 = *(undefined8 **)(puVar15 + -0x18c8);
              }
              else {
                __ZN4core3net6parser85__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_core__net__ip_addr__Ipv6Addr_GT_8from_str17h456bd53f42bcbd69E
                          (puVar15 + -0xc80,uVar36,unaff_x27);
                unaff_x26 = *(undefined8 **)(puVar15 + -0x18c8);
                if ((puVar15[-0xc80] & 1) != 0) {
                  if (unaff_x27 < 0x100) {
                    lVar17 = puVar24[0x96];
                    if (lVar17 == puVar24[0x94]) {
                      func_0x0001087c90b8(unaff_x25);
                    }
                    *(undefined1 *)(puVar24[0x95] + lVar17) = 3;
                    lVar30 = lVar17 + 1;
                    puVar24[0x96] = lVar30;
                    if (lVar30 == puVar24[0x94]) {
                      func_0x0001087c90b8(unaff_x25);
                    }
                    *(char *)(puVar24[0x95] + lVar30) = (char)unaff_x27;
                    lVar17 = lVar17 + 2;
                    puVar24[0x96] = lVar17;
                    if ((ulong)(puVar24[0x94] - lVar17) < unaff_x27) {
                      FUN_108855060(unaff_x25,lVar17,unaff_x27,1,1);
                      lVar17 = puVar24[0x96];
                    }
                    _memcpy(puVar24[0x95] + lVar17,uVar36,unaff_x27);
                    lVar17 = lVar17 + unaff_x27;
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
                  uVar38 = 8;
                  puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
                  puVar22 = *(undefined8 **)(puVar15 + -0x18d0);
                  goto LAB_100a51dd4;
                }
                lVar17 = puVar24[0x96];
                if (lVar17 == puVar24[0x94]) {
                  func_0x0001087c90b8(unaff_x25);
                }
                *(undefined1 *)(puVar24[0x95] + lVar17) = 4;
                lVar17 = lVar17 + 1;
                puVar24[0x96] = lVar17;
                if ((ulong)(puVar24[0x94] - lVar17) < 0x10) {
                  FUN_108855060(unaff_x25,lVar17,0x10,1,1);
                  lVar17 = puVar24[0x96];
                  unaff_x26 = *(undefined8 **)(puVar15 + -0x18c8);
                }
                lVar30 = puVar24[0x95];
                uVar19 = *(undefined8 *)(puVar15 + -0xc7f);
                ((undefined8 *)(lVar30 + lVar17))[1] = *(undefined8 *)(puVar15 + -0xc77);
                *(undefined8 *)(lVar30 + lVar17) = uVar19;
                lVar17 = lVar17 + 0x10;
                puVar24[0x96] = lVar17;
              }
              if ((ulong)(*unaff_x25 - lVar17) < 2) {
                FUN_108855060(unaff_x25,lVar17,2,1,1);
                lVar17 = puVar24[0x96];
                unaff_x26 = *(undefined8 **)(puVar15 + -0x18c8);
              }
              *(ushort *)(lVar17 + puVar24[0x95]) = uVar8 >> 8 | uVar8 << 8;
              lVar17 = lVar17 + 2;
              puVar24[0x96] = lVar17;
              puVar24[0x98] = puVar24[0x93];
              puVar24[0x99] = puVar24[0x95];
              puVar24[0x9a] = lVar17;
              puVar22 = *(undefined8 **)(puVar15 + -0x18d0);
            }
            else {
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              if (bVar26 != 3) {
                uVar19 = puVar24[0x93];
LAB_100a51d50:
                lVar17 = 0;
                *(undefined4 *)(puVar24 + 0x97) = 0;
                puVar24[0x98] = uVar19;
                puVar24[0x99] = puVar24 + 0x97;
                puVar24[0x9b] = 0;
                puVar24[0x9a] = 4;
                lVar30 = 4;
                puVar24[0x9c] = 4;
                goto LAB_100a51d78;
              }
              lVar17 = puVar24[0x9a];
            }
            do {
              if (lVar17 == 0) {
                uVar19 = puVar24[0x93];
                puVar24[0x98] = uVar19;
                goto LAB_100a51d50;
              }
              auVar47 = func_0x0001060f8f1c(puVar24[0x98],*(undefined8 *)(puVar15 + -0x1888),
                                            puVar24[0x99]);
              unaff_x27 = auVar47._8_8_;
              if (auVar47._0_8_ == 2) {
                uVar25 = 3;
                goto LAB_100a51e78;
              }
              if ((auVar47._0_8_ & 1) != 0) goto LAB_100a51d3c;
              lVar30 = puVar24[0x99];
              uVar28 = puVar24[0x9a];
              puVar24[0x99] = 1;
              puVar24[0x9a] = 0;
              lVar17 = uVar28 - unaff_x27;
              if (uVar28 < unaff_x27) {
                *(undefined8 **)(puVar15 + -0x18d0) = puVar22;
                *(undefined8 **)(puVar15 + -0x18c8) = unaff_x26;
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cc4086,0x13,&UNK_10b24e568);
                goto LAB_100a52e04;
              }
              puVar24[0x99] = lVar30 + unaff_x27;
              puVar24[0x9a] = lVar17;
            } while (unaff_x27 != 0);
            unaff_x27 = 0x1700000003;
            goto LAB_100a51d3c;
          }
          *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
          if (bVar26 != 5) {
            if (bVar26 != 6) {
              unaff_x25 = (long *)puVar24[0x9d];
              plVar27 = (long *)puVar24[0x9e];
LAB_100a519c4:
              lVar17 = (long)unaff_x25 - (long)plVar27;
              if (unaff_x25 != plVar27) {
                auVar47 = func_0x0001060f8cbc(puVar24[0x9b],*(undefined8 *)(puVar15 + -0x1888),
                                              puVar24 + 0x9c);
                unaff_x27 = auVar47._8_8_;
                if ((auVar47._0_8_ & 1) != 0) {
                  uVar25 = 7;
LAB_100a51e78:
                  *(undefined1 *)puVar22 = uVar25;
                  uVar25 = 8;
LAB_100a51e80:
                  puVar29 = *(undefined1 **)(puVar15 + -0x18b0);
                  **(undefined1 **)(puVar15 + -0x18c0) = uVar25;
                  uVar25 = 4;
                  goto LAB_100a51e90;
                }
                if (unaff_x27 == 0) goto code_r0x000100a519e8;
                goto LAB_100a51a14;
              }
              if (puVar24[0x98] != 0) {
                _free(puVar24[0x99]);
              }
              puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
              if (puVar24[0x94] != 0) {
                uVar38 = 0x15;
                goto LAB_100a51ddc;
              }
              *(undefined1 *)puVar22 = 1;
              lVar17 = puVar24[0x8c];
              *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
              goto joined_r0x000100a51f64;
            }
            lVar30 = puVar24[0x9b];
            lVar17 = puVar24[0x9c];
LAB_100a5006c:
            lVar39 = lVar30 - lVar17;
            if (lVar30 != lVar17) {
              auVar47 = func_0x0001060f8cbc(puVar24[0x99],*(undefined8 *)(puVar15 + -0x1888),
                                            puVar24 + 0x9a);
              unaff_x27 = auVar47._8_8_;
              if ((auVar47._0_8_ & 1) != 0) {
                uVar25 = 6;
                goto LAB_100a51e78;
              }
              if (unaff_x27 != 0) goto LAB_100a51d3c;
              lVar30 = puVar24[0x9b];
              lVar17 = puVar24[0x9c];
              if (lVar30 - lVar17 == lVar39) goto code_r0x000100a500a4;
              goto LAB_100a5006c;
            }
            unaff_x25 = (long *)((ulong)*(byte *)(puVar24 + 0x98) + 2);
            lVar17 = __RNvCshXwFllX56pT_7___rustc19___rust_alloc_zeroed(unaff_x25,1);
            if (lVar17 != 0) goto LAB_100a5199c;
LAB_100a5206c:
            *(undefined8 **)(puVar15 + -0x18d0) = puVar22;
            *(undefined8 **)(puVar15 + -0x18c8) = unaff_x26;
            func_0x0001087c9084(1,unaff_x25);
            goto LAB_100a52e04;
          }
          lVar30 = puVar24[0x9a];
          lVar17 = puVar24[0x9b];
LAB_100a51d78:
          do {
            lVar39 = lVar30 - lVar17;
            if (lVar30 == lVar17) {
              if (*(char *)(puVar24 + 0x97) != '\x05') {
                unaff_x25 = (long *)_malloc(0x20);
                if (unaff_x25 != (long *)0x0) {
                  unaff_x25[1] = 0x2064696c61766e69;
                  *unaff_x25 = 0x203a35534b434f53;
                  unaff_x25[3] = 0x6e6f697372657620;
                  unaff_x25[2] = 0x65736e6f70736572;
                  unaff_x27 = 0x20;
                  uVar38 = 8;
                  unaff_x26 = (undefined8 *)0x20;
                  goto LAB_100a51d40;
                }
                *(undefined8 **)(puVar15 + -0x18d0) = puVar22;
                *(undefined8 **)(puVar15 + -0x18c8) = unaff_x26;
                func_0x0001087c9084(1,0x20);
                goto LAB_100a52e04;
              }
              cVar7 = *(char *)((long)puVar24 + 0x4b9);
              *(undefined8 **)(puVar15 + -0x18c8) = unaff_x26;
              if (cVar7 != '\0') {
                *(long *)(puVar15 + 0x3f78) = (long)puVar24 + 0x4b9;
                *(undefined **)(puVar15 + 0x3f80) =
                     &
                     __ZN4core3fmt3num3imp51__LT_impl_u20_core__fmt__Display_u20_for_u20_u8_GT_3fmt17haf97c475cbbdc210E
                ;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (puVar15 + -0xc80,s__SOCKS5__connection_failed_with_c_108acee33,
                           puVar15 + 0x3f78);
                unaff_x27 = *(ulong *)(puVar15 + -0xc80);
                unaff_x25 = *(long **)(puVar15 + -0xc78);
                uVar38 = 8;
                unaff_x26 = *(undefined8 **)(puVar15 + -0xc70);
                goto LAB_100a51d40;
              }
              *(undefined8 **)(puVar15 + -0x18d0) = puVar22;
              cVar7 = *(char *)((long)puVar24 + 0x4bb);
              if (cVar7 == '\x01') {
                unaff_x25 = (long *)0x6;
              }
              else {
                if (cVar7 == '\x03') {
                  lVar17 = 0;
                  *(undefined1 *)(puVar24 + 0x98) = 0;
                  puVar24[0x99] = puVar24[0x93];
                  puVar24[0x9a] = puVar24 + 0x98;
                  lVar30 = 1;
                  puVar24[0x9b] = 1;
                  puVar24[0x9d] = 1;
                  puVar24[0x9c] = 0;
                  puVar22 = *(undefined8 **)(puVar15 + -0x18d0);
                  unaff_x26 = *(undefined8 **)(puVar15 + -0x18c8);
                  goto LAB_100a5006c;
                }
                if (cVar7 != '\x04') {
                  FUN_100f15358(puVar15 + -0xc80,&UNK_108cb5bb1,0x1c);
                  unaff_x27 = *(ulong *)(puVar15 + -0xc80);
                  unaff_x25 = *(long **)(puVar15 + -0xc78);
                  unaff_x26 = *(undefined8 **)(puVar15 + -0xc70);
                  goto LAB_100a51bf4;
                }
                unaff_x25 = (long *)0x12;
              }
              puVar22 = *(undefined8 **)(puVar15 + -0x18d0);
              unaff_x26 = *(undefined8 **)(puVar15 + -0x18c8);
              lVar17 = __RNvCshXwFllX56pT_7___rustc19___rust_alloc_zeroed(unaff_x25,1);
              if (lVar17 == 0) goto LAB_100a5206c;
              goto LAB_100a5199c;
            }
            auVar47 = func_0x0001060f8cbc(puVar24[0x98],*(undefined8 *)(puVar15 + -0x1888),
                                          puVar24 + 0x99);
            unaff_x27 = auVar47._8_8_;
            if ((auVar47._0_8_ & 1) != 0) {
              uVar25 = 5;
              goto LAB_100a51e78;
            }
            if (unaff_x27 != 0) goto LAB_100a51dcc;
            lVar30 = puVar24[0x9a];
            lVar17 = puVar24[0x9b];
          } while (lVar30 - lVar17 != lVar39);
          unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
LAB_100a51dcc:
          puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
          uVar38 = 0xb;
          goto LAB_100a51dd4;
        }
LAB_100a4f730:
        pbVar35 = (byte *)((long)puVar24 + 0x3bd);
        plVar31 = puVar24 + 0x54;
        unaff_x25 = puVar24 + 0x78;
        FUN_100fc47a4(puVar15 + -0xc80,unaff_x25,*(undefined8 *)(puVar15 + -0x1888));
        lVar17 = *(long *)(puVar15 + -0xc80);
        if (lVar17 == 3) {
          bVar26 = 3;
LAB_100a51e98:
          *pbVar35 = bVar26;
          uVar25 = 3;
          *plVar20 = 3;
          goto LAB_100a51334;
        }
        *(undefined8 *)(puVar15 + -0x1898) = *(undefined8 *)(puVar15 + -0xc70);
        *(undefined8 *)(puVar15 + -0x18a0) = *(undefined8 *)(puVar15 + -0xc78);
        uVar19 = *(undefined8 *)(puVar15 + -0xc68);
        func_0x000100cf0d94(unaff_x25);
        if (lVar17 != 2) {
          *(long *)(puVar15 + 0x59c0) = lVar17;
          *(undefined8 *)(puVar15 + 0x59d0) = *(undefined8 *)(puVar15 + -0x1898);
          *(undefined8 *)(puVar15 + 0x59c8) = *(undefined8 *)(puVar15 + -0x18a0);
          *(undefined8 *)(puVar15 + 23000) = uVar19;
          *(undefined1 *)((long)puVar24 + 0x3bc) = 0;
          puVar33 = puVar24 + 0x6a;
          uVar19 = puVar24[0x54];
          uVar36 = puVar24[0x55];
          uVar37 = *(undefined2 *)((long)puVar24 + 0x3ba);
          lVar17 = *(long *)(puVar15 + 0x59c0);
          uVar43 = *(undefined8 *)(puVar15 + 23000);
          uVar42 = *(undefined8 *)(puVar15 + 0x59d0);
          puVar24[0x79] = *(undefined8 *)(puVar15 + 0x59c8);
          *unaff_x25 = lVar17;
          puVar24[0x7b] = uVar43;
          puVar24[0x7a] = uVar42;
          puVar24[0x7c] = puVar33;
          puVar24[0x7d] = uVar19;
          puVar24[0x7e] = uVar36;
          *(undefined2 *)(puVar24 + 0x83) = uVar37;
          *(long *)(puVar15 + -0x18b0) = (long)puVar24 + 0x41a;
          *(undefined1 *)((long)puVar24 + 0x41a) = 0;
LAB_100a4f864:
          puVar34 = puVar24 + 0x7f;
          uVar43 = puVar24[0x79];
          uVar42 = puVar24[0x78];
          uVar45 = puVar24[0x7b];
          uVar44 = puVar24[0x7a];
          *(undefined8 **)(puVar15 + -0x18a0) = puVar24 + 0x78;
          puVar24[0x80] = uVar43;
          *puVar34 = uVar42;
          puVar24[0x82] = uVar45;
          puVar24[0x81] = uVar44;
          cVar7 = *(char *)((long)puVar33 + 0x4a);
          unaff_x25 = (long *)0x0;
          if (puVar33[3] != -0x8000000000000000) {
            unaff_x25 = puVar33 + 3;
          }
          *(undefined8 **)(puVar15 + -0x18b8) = puVar24 + 0x84;
          puVar24[0x84] = puVar34;
          puVar24[0x85] = uVar19;
          puVar24[0x86] = uVar36;
          puVar24[0x87] = unaff_x25;
          if (cVar7 != '\0') {
            *(undefined2 *)(puVar24 + 0x8f) = uVar37;
            *(long *)(puVar15 + -0x18c0) = (long)puVar24 + 0x47e;
            *(undefined1 *)((long)puVar24 + 0x47e) = 0;
LAB_100a4f8b4:
            puVar24[0x88] = puVar34;
            puVar24[0x89] = uVar19;
            puVar24[0x8a] = uVar36;
            *(undefined2 *)((long)puVar24 + 0x47a) = uVar37;
            puVar24[0x8b] = unaff_x25;
            puVar29 = (undefined1 *)_malloc(1);
            if (puVar29 == (undefined1 *)0x0) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,1);
              goto LAB_100a52e04;
            }
            *puVar29 = 0;
            uVar25 = 1;
            puVar24[0x8c] = 1;
            puVar24[0x8d] = puVar29;
            puVar24[0x8e] = 1;
            if (unaff_x25 != (long *)0x0) {
              func_0x0001087c90b8(puVar24 + 0x8c);
              *(undefined1 *)(puVar24[0x8d] + 1) = 2;
              puVar24[0x8e] = 2;
              puVar34 = (undefined8 *)puVar24[0x88];
              uVar25 = 2;
            }
            *(undefined1 *)(puVar24 + 0x90) = 5;
            *(undefined1 *)((long)puVar24 + 0x481) = uVar25;
            puVar24[0x91] = puVar34;
            puVar24[0x92] = puVar24 + 0x90;
            lVar17 = 2;
            puVar24[0x93] = 2;
LAB_100a4f92c:
            pbVar35 = (byte *)((long)puVar24 + 0x3bd);
            do {
              if (lVar17 == 0) {
                lVar17 = puVar24[0x8e];
                puVar24[0x90] = puVar24[0x88];
                puVar24[0x91] = puVar24[0x8d];
                puVar24[0x92] = lVar17;
                goto LAB_100a4fe40;
              }
              auVar47 = func_0x0001060f8f1c(puVar24[0x91],*(undefined8 *)(puVar15 + -0x1888),
                                            puVar24[0x92]);
              unaff_x27 = auVar47._8_8_;
              if (auVar47._0_8_ == 2) {
                uVar25 = 3;
                goto LAB_100a51e80;
              }
              if ((auVar47._0_8_ & 1) != 0) goto LAB_100a4fe98;
              lVar30 = puVar24[0x92];
              uVar28 = puVar24[0x93];
              puVar24[0x92] = 1;
              puVar24[0x93] = 0;
              lVar17 = uVar28 - unaff_x27;
              if (uVar28 < unaff_x27) {
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cc4086,0x13,&UNK_10b24e568);
                goto LAB_100a52e04;
              }
              puVar24[0x92] = lVar30 + unaff_x27;
              puVar24[0x93] = lVar17;
            } while (unaff_x27 != 0);
LAB_100a4fe90:
            unaff_x27 = 0x1700000003;
LAB_100a4fe98:
            pbVar35 = (byte *)((long)puVar24 + 0x3bd);
            plVar31 = puVar24 + 0x54;
            uVar38 = 0xb;
            puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
            goto LAB_100a4fea0;
          }
          *(undefined2 *)(puVar24 + 0x91) = uVar37;
          *(undefined1 *)((long)puVar24 + 0x48c) = 0;
LAB_100a4f9f4:
          puVar29 = (undefined1 *)((long)puVar24 + 0x48c);
          puVar24[0x88] = puVar34;
          puVar24[0x89] = uVar19;
          puVar24[0x8a] = uVar36;
          *(undefined2 *)((long)puVar24 + 0x48a) = uVar37;
          *(undefined8 **)(puVar15 + -0xc80) = puVar24 + 0x89;
          *(undefined **)(puVar15 + -0xc78) = &DAT_100c7b3a0;
          *(long *)(puVar15 + -0xc70) = (long)puVar24 + 0x48a;
          *(undefined **)(puVar15 + -0xc68) =
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (puVar15 + 0x3f78,s___108ac02d4,puVar15 + -0xc80);
          puVar24[0x8d] = *(undefined8 *)(puVar15 + 0x3f88);
          uVar19 = *(undefined8 *)(puVar15 + 0x3f78);
          puVar24[0x8c] = *(undefined8 *)(puVar15 + 0x3f80);
          puVar24[0x8b] = uVar19;
          __ZN11tungstenite5proxy26build_http_connect_request17h610c854420147508E
                    (puVar15 + -0xc80,puVar24[0x8c],puVar24[0x8d],unaff_x25);
          uVar38 = *(ulong *)(puVar15 + -0xc80);
          uVar28 = *(ulong *)(puVar15 + -0xc78);
          unaff_x25 = *(long **)(puVar15 + -0xc70);
          unaff_x26 = *(undefined8 **)(puVar15 + -0xc68);
          if (uVar38 == 0x15) {
            puVar24[0x8e] = uVar28;
            puVar24[0x8f] = unaff_x25;
            puVar24[0x90] = unaff_x26;
            puVar24[0x92] = puVar24[0x88];
            puVar24[0x93] = unaff_x25;
            puVar24[0x94] = unaff_x26;
LAB_100a4fd3c:
            puVar29 = (undefined1 *)((long)puVar24 + 0x48c);
            do {
              if (unaff_x26 == (undefined8 *)0x0) {
                uVar19 = puVar24[0x88];
                puVar24[0x92] = uVar19;
                puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
                goto LAB_100a4fdb0;
              }
              auVar47 = func_0x0001060f8f1c(puVar24[0x92],*(undefined8 *)(puVar15 + -0x1888),
                                            puVar24[0x93],unaff_x26);
              uVar28 = auVar47._8_8_;
              if (auVar47._0_8_ == 2) {
                uVar25 = 3;
                goto LAB_100a4fdec;
              }
              if ((auVar47._0_8_ & 1) != 0) goto LAB_100a4fd94;
              lVar17 = puVar24[0x93];
              uVar38 = puVar24[0x94];
              puVar24[0x93] = 1;
              puVar24[0x94] = 0;
              unaff_x26 = (undefined8 *)(uVar38 - uVar28);
              if (uVar38 < uVar28) {
                *(undefined1 **)(puVar15 + -0x18c0) = puVar29;
                __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                          (&UNK_108cc4086,0x13,&UNK_10b24e568);
                goto LAB_100a52e04;
              }
              puVar24[0x93] = lVar17 + uVar28;
              puVar24[0x94] = unaff_x26;
            } while (uVar28 != 0);
            uVar28 = 0x1700000003;
LAB_100a4fd94:
            uVar32 = (uint)uVar28 & 0xffff;
            puVar22 = (undefined8 *)(uVar28 >> 0x10);
            uVar38 = 0xb;
            goto LAB_100a52a68;
          }
          uVar32 = (uint)uVar28 & 0xffff;
          puVar22 = (undefined8 *)(uVar28 >> 0x10);
LAB_100a52a78:
          pbVar35 = (byte *)((long)puVar24 + 0x3bd);
          plVar31 = puVar24 + 0x54;
          if (puVar24[0x8b] == 0) {
            unaff_x27 = (ulong)uVar32 | (long)puVar22 << 0x10;
            goto LAB_100a52ac0;
          }
          _free(puVar24[0x8c]);
          *(undefined1 *)((long)puVar24 + 0x48c) = 1;
          if (uVar38 == 0x15) goto LAB_100a52a98;
          pbVar35 = (byte *)((long)puVar24 + 0x3bd);
          plVar31 = puVar24 + 0x54;
          unaff_x27 = (ulong)uVar32 | (long)puVar22 << 0x10;
          goto LAB_100a52c18;
        }
        unaff_x27 = *(ulong *)(puVar15 + -0x18a0);
        bVar16 = true;
        uVar38 = 0xb;
        goto LAB_100a52a24;
      }
      if (bVar26 != 0) goto LAB_100a52170;
      puVar33 = (undefined8 *)puVar24[0x76];
      lVar17 = puVar24[0x74];
      uVar19 = puVar24[0x75];
      uVar37 = *(undefined2 *)(puVar24 + 0x77);
LAB_100a4f01c:
      pbVar35 = (byte *)((long)puVar24 + 0x3bd);
      *(undefined1 *)((long)puVar24 + 0x3bc) = 0;
      plVar31 = puVar24 + 0x54;
      *plVar31 = lVar17;
      puVar24[0x55] = uVar19;
      *(undefined2 *)((long)puVar24 + 0x3ba) = uVar37;
      __ZN11tungstenite5proxy11ProxyConfig8from_env17h8b64cd077db5e0a4E
                (puVar15 + -0xc80,puVar33 + 0xc);
      if (*(long *)(puVar15 + -0xc80) == -0x7fffffffffffffff) {
        uVar19 = *(undefined8 *)(puVar15 + -0xc78);
        uVar42 = *(undefined8 *)(puVar15 + -0xc60);
        uVar36 = *(undefined8 *)(puVar15 + -0xc68);
        puVar24[0x62] = *(undefined8 *)(puVar15 + -0xc70);
        puVar24[0x61] = uVar19;
        puVar24[100] = uVar42;
        puVar24[99] = uVar36;
        puVar24[0x60] = 0x8000000000000001;
      }
      else {
        plVar27 = puVar24 + 0x60;
        lVar17 = *(long *)(puVar15 + -0xc80);
        uVar36 = *(undefined8 *)(puVar15 + -0xc68);
        uVar19 = *(undefined8 *)(puVar15 + -0xc70);
        puVar24[0x61] = *(undefined8 *)(puVar15 + -0xc78);
        *plVar27 = lVar17;
        puVar24[99] = uVar36;
        puVar24[0x62] = uVar19;
        uVar19 = *(undefined8 *)(puVar15 + -0xc60);
        uVar42 = *(undefined8 *)(puVar15 + -0xc48);
        uVar36 = *(undefined8 *)(puVar15 + -0xc50);
        puVar24[0x65] = *(undefined8 *)(puVar15 + -0xc58);
        puVar24[100] = uVar19;
        puVar24[0x67] = uVar42;
        puVar24[0x66] = uVar36;
        uVar19 = *(undefined8 *)(puVar15 + -0xc40);
        puVar24[0x69] = *(undefined8 *)(puVar15 + -0xc38);
        puVar24[0x68] = uVar19;
        if (*plVar27 != -0x7fffffffffffffff) {
          puVar24[0x57] = puVar24[0x61];
          puVar24[0x56] = *plVar27;
          puVar24[0x59] = puVar24[99];
          puVar24[0x58] = puVar24[0x62];
          puVar24[0x5b] = puVar24[0x65];
          puVar24[0x5a] = puVar24[100];
          puVar24[0x5d] = puVar24[0x67];
          puVar24[0x5c] = puVar24[0x66];
          puVar24[0x5f] = puVar24[0x69];
          puVar24[0x5e] = puVar24[0x68];
          if (puVar24[0x56] == -0x8000000000000000) {
            *(long **)(puVar15 + -0xc80) = plVar31;
            *(undefined **)(puVar15 + -0xc78) = &DAT_100c7b3a0;
            *(long *)(puVar15 + -0xc70) = (long)puVar24 + 0x3ba;
            *(undefined **)(puVar15 + -0xc68) =
                 &
                 __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
            ;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (puVar15 + 0x3f78,s___108ac02d4,puVar15 + -0xc80);
            uVar36 = *(undefined8 *)(puVar15 + 0x3f78);
            *(undefined8 *)(puVar15 + 0x59c8) = *(undefined8 *)(puVar15 + 0x3f80);
            *(undefined8 *)(puVar15 + 0x59c0) = uVar36;
            uVar19 = *(undefined8 *)(puVar15 + 0x3f88);
            *(undefined8 *)(puVar15 + 0x59d0) = uVar19;
            puVar24[0x79] = *(undefined8 *)(puVar15 + 0x3f80);
            puVar24[0x78] = uVar36;
            puVar24[0x7a] = uVar19;
            *(undefined1 *)(puVar24 + 0x7b) = 0;
            goto LAB_100a4f56c;
          }
          puVar24[0x6f] = puVar24[0x65];
          puVar24[0x6e] = puVar24[100];
          puVar24[0x71] = puVar24[0x67];
          puVar24[0x70] = puVar24[0x66];
          puVar24[0x73] = puVar24[0x69];
          puVar24[0x72] = puVar24[0x68];
          puVar24[0x6b] = puVar24[0x61];
          puVar24[0x6a] = *plVar27;
          puVar24[0x6d] = puVar24[99];
          puVar24[0x6c] = puVar24[0x62];
          *(undefined8 **)(puVar15 + -0xc80) = puVar24 + 0x6a;
          *(undefined **)(puVar15 + -0xc78) = &DAT_1062153c4;
          *(undefined8 **)(puVar15 + -0xc70) = puVar24 + 0x73;
          *(undefined **)(puVar15 + -0xc68) =
               &
               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (puVar15 + 0x2800,s___108b3b062,puVar15 + -0xc80);
          uVar19 = *(undefined8 *)(puVar15 + 0x2800);
          puVar24[0x79] = *(undefined8 *)(puVar15 + 0x2808);
          puVar24[0x78] = uVar19;
          puVar24[0x7a] = *(undefined8 *)(puVar15 + 0x2810);
          *(undefined1 *)(puVar24 + 0x7b) = 0;
          goto LAB_100a4f730;
        }
      }
      unaff_x27 = puVar24[0x62];
      unaff_x25 = (long *)puVar24[99];
      bVar16 = true;
      unaff_x26 = (undefined8 *)puVar24[100];
      uVar38 = puVar24[0x61];
      goto LAB_100a4f178;
    }
    *(undefined8 **)(puVar15 + -0x18a0) = puVar24 + 0xaa;
    bVar26 = *(byte *)(puVar24 + 0xaa);
    puVar33 = puVar24 + 0x54;
    if (bVar26 < 4) {
      if (bVar26 < 2) {
        if (bVar26 != 0) {
          *(undefined8 **)(puVar15 + -0x18b0) = puVar33;
          func_0x000108a07af4(&UNK_10b22b258);
          goto LAB_100a52e04;
        }
        uVar28 = puVar24[0x58];
        uVar19 = puVar24[0x59];
        goto LAB_100a4f30c;
      }
      if (bVar26 != 3) {
        *(undefined8 **)(puVar15 + -0x18b0) = puVar33;
        func_0x000108a07b10(&UNK_10b22b258);
        goto LAB_100a52e04;
      }
      goto LAB_100a4f434;
    }
    if (bVar26 == 4) {
      *(undefined8 **)(puVar15 + -0x18b0) = puVar33;
      if (*(char *)((long)puVar24 + 0x579) != '\0') {
        if (*(char *)((long)puVar24 + 0x579) == '\x01') {
          func_0x000108a07af4(&UNK_10b22b228);
        }
        else {
          func_0x000108a07b10(&UNK_10b22b228);
        }
        goto LAB_100a52e04;
      }
      bVar26 = *(byte *)(puVar24 + 0xaf);
      uVar19 = puVar24[0xab];
      uVar42 = puVar24[0xae];
      uVar36 = puVar24[0xad];
      *(undefined8 *)(puVar15 + -0xc78) = puVar24[0xac];
      *(undefined8 *)(puVar15 + -0xc80) = uVar19;
      *(undefined8 *)(puVar15 + -0xc68) = uVar42;
      *(undefined8 *)(puVar15 + -0xc70) = uVar36;
      puVar33 = *(undefined8 **)(puVar15 + -0x18b0);
      if ((bVar26 & 1) != 0) goto LAB_100a4f484;
      goto LAB_100a5013c;
    }
    if (bVar26 == 5) goto LAB_100a4f088;
    *(undefined8 **)(puVar15 + -0x18b0) = puVar33;
    bVar26 = *(byte *)(puVar24 + 0x4e4);
    *(undefined8 **)(puVar15 + -0x18c8) = puVar24 + 0x4e4;
    *(undefined8 *)(puVar15 + -0x1888) = **(undefined8 **)(puVar15 + -0x1888);
    if (bVar26 < 2) {
      if (bVar26 != 0) {
        func_0x000108a07af4(&UNK_10b22b1f8);
        goto LAB_100a52e04;
      }
      goto LAB_100a5021c;
    }
    if (bVar26 != 3) {
      func_0x000108a07b10(&UNK_10b22b1f8);
      goto LAB_100a52e04;
    }
    bVar26 = *pbVar35;
    puVar22 = puVar24 + 0x159;
    if (bVar26 < 2) {
      if (bVar26 != 0) {
        *(undefined8 **)(puVar15 + -0x18c0) = puVar22;
        func_0x000108a07af4(&UNK_10b22b3a8);
        goto LAB_100a52e04;
      }
      goto LAB_100a502dc;
    }
    if (bVar26 != 3) {
      *(undefined8 **)(puVar15 + -0x18c0) = puVar22;
      func_0x000108a07b10(&UNK_10b22b3a8);
      goto LAB_100a52e04;
    }
    bVar26 = *(byte *)(puVar24 + 0x2b5);
    puVar33 = puVar24 + 0x207;
    if (bVar26 < 3) {
      if (bVar26 != 0) {
        *(undefined8 **)(puVar15 + -0x18c0) = puVar22;
        *(undefined8 **)(puVar15 + -0x18b8) = puVar33;
        *(byte **)(puVar15 + -0x18a8) = pbVar35;
        if (bVar26 == 1) {
          func_0x000108a07af4(&UNK_10b22b3f0);
        }
        else {
          func_0x000108a07b10(&UNK_10b22b3f0);
        }
        goto LAB_100a52e04;
      }
      goto LAB_100a50348;
    }
    if (bVar26 != 4) goto LAB_100a503a8;
    *(byte **)(puVar15 + -0x18a8) = pbVar35;
    uVar28 = puVar24[0x2b6];
    goto LAB_100a50930;
  }
  if (bVar26 != 0) {
    if (bVar26 != 1) {
      func_0x000108a07b10(&UNK_10b22b390);
      uVar32 = extraout_w8_00;
LAB_100a52170:
      if (uVar32 == 1) {
        func_0x000108a07af4(&UNK_10b22b348);
      }
      else {
        func_0x000108a07b10(&UNK_10b22b348);
      }
      goto LAB_100a52e04;
    }
    func_0x000108a07af4();
LAB_100a52108:
    FUN_108855060(puVar24 + 0x93,2,unaff_x24,1,1);
    lVar17 = puVar24[0x95];
    puVar29 = (undefined1 *)puVar24[0x94];
LAB_100a4fc24:
    _memcpy(puVar29 + lVar17,unaff_x26,unaff_x24);
    lVar17 = unaff_x24 + lVar17;
    puVar24[0x95] = lVar17;
    if (lVar17 == puVar24[0x93]) {
      func_0x0001087c90b8(puVar24 + 0x93);
    }
    *(char *)(lVar17 + puVar24[0x94]) = (char)unaff_x25;
    lVar17 = lVar17 + 1;
    puVar24[0x95] = lVar17;
    if ((long *)(puVar24[0x93] - lVar17) < unaff_x25) {
      FUN_108855060(puVar24 + 0x93,lVar17,unaff_x25,1,1);
      lVar17 = puVar24[0x95];
    }
    _memcpy(lVar17 + puVar24[0x94],*(undefined8 *)(puVar15 + -0x18d0),unaff_x25);
    lVar17 = lVar17 + (long)unaff_x25;
    puVar24[0x95] = lVar17;
    puVar24[0x97] = puVar24[0x92];
    puVar24[0x98] = puVar24[0x94];
    puVar24[0x99] = lVar17;
LAB_100a5166c:
    do {
      if (lVar17 == 0) {
        uVar19 = puVar24[0x92];
        puVar24[0x97] = uVar19;
        puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
        goto LAB_100a516e8;
      }
      auVar47 = func_0x0001060f8f1c(puVar24[0x97],*(undefined8 *)(puVar15 + -0x1888),puVar24[0x98]);
      unaff_x27 = auVar47._8_8_;
      if (auVar47._0_8_ == 2) {
        uVar25 = 3;
        goto LAB_100a517dc;
      }
      if ((auVar47._0_8_ & 1) != 0) goto LAB_100a516c0;
      lVar30 = puVar24[0x98];
      uVar28 = puVar24[0x99];
      puVar24[0x98] = 1;
      puVar24[0x99] = 0;
      lVar17 = uVar28 - unaff_x27;
      if (uVar28 < unaff_x27) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
        goto LAB_100a52e04;
      }
      puVar24[0x98] = lVar30 + unaff_x27;
      puVar24[0x99] = lVar17;
    } while (unaff_x27 != 0);
    unaff_x27 = 0x1700000003;
LAB_100a516c0:
    uVar38 = 0xb;
    puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
    goto LAB_100a517b8;
  }
  *(undefined1 *)((long)puVar24 + 0x29c) = 1;
  puVar33 = puVar24 + 0x27;
  puVar24[0x3c] = puVar24[0x17];
  puVar24[0x3b] = puVar24[0x16];
  puVar24[0x3e] = puVar24[0x19];
  puVar24[0x3d] = puVar24[0x18];
  puVar24[0x40] = puVar24[0x1b];
  puVar24[0x3f] = puVar24[0x1a];
  puVar24[0x42] = puVar24[0x1d];
  puVar24[0x41] = puVar24[0x1c];
  puVar24[0x34] = puVar24[0xf];
  puVar24[0x33] = puVar24[0xe];
  puVar24[0x36] = puVar24[0x11];
  puVar24[0x35] = puVar24[0x10];
  puVar24[0x38] = puVar24[0x13];
  puVar24[0x37] = puVar24[0x12];
  puVar24[0x3a] = puVar24[0x15];
  puVar24[0x39] = puVar24[0x14];
  puVar24[0x2c] = puVar24[7];
  puVar24[0x2b] = puVar24[6];
  puVar24[0x2e] = puVar24[9];
  puVar24[0x2d] = puVar24[8];
  puVar24[0x30] = puVar24[0xb];
  puVar24[0x2f] = puVar24[10];
  puVar24[0x32] = puVar24[0xd];
  puVar24[0x31] = puVar24[0xc];
  puVar24[0x28] = puVar24[3];
  *puVar33 = puVar24[2];
  puVar24[0x2a] = puVar24[5];
  puVar24[0x29] = puVar24[4];
  puVar24[0x48] = puVar24[0x23];
  puVar24[0x47] = puVar24[0x22];
  puVar24[0x4a] = puVar24[0x25];
  puVar24[0x49] = puVar24[0x24];
  puVar24[0x4b] = puVar24[0x26];
  puVar24[0x44] = puVar24[0x1f];
  puVar24[0x43] = puVar24[0x1e];
  puVar24[0x46] = puVar24[0x21];
  puVar24[0x45] = puVar24[0x20];
  *(undefined1 *)((long)puVar24 + 0x29a) = *(undefined1 *)(puVar24 + 0x53);
  *(undefined1 *)((long)puVar24 + 0x29b) = 1;
  puVar24[0xdb] = *puVar24;
  puVar24[0xdc] = puVar24[1];
  FUN_100a4e90c(puVar15 + -0xc80,puVar33);
  uVar38 = *(ulong *)(puVar15 + -0xc80);
  unaff_x27 = *(ulong *)(puVar15 + -0xc78);
  unaff_x25 = *(long **)(puVar15 + -0xc70);
  unaff_x26 = *(undefined8 **)(puVar15 + -0xc68);
  if (uVar38 == 0x15) {
    puVar24[0x4c] = unaff_x27;
    puVar24[0x4d] = unaff_x25;
    puVar24[0x4e] = unaff_x26;
    if ((puVar24[0x37] != 0) &&
       (func_0x0001057974a4(puVar15 + -0xc80,puVar24 + 0x35), *(long *)(puVar15 + -0xc80) != 0)) {
      uVar37 = *(undefined2 *)(puVar15 + -0xc70);
      *(undefined8 *)(puVar15 + -0xc80) = 3;
LAB_100a4efec:
      *(byte **)(puVar15 + -0x18a8) = pbVar35;
      FUN_100de8b24(puVar15 + -0xc80);
      lVar17 = puVar24[0x4d];
      uVar19 = puVar24[0x4e];
      puVar24[0x74] = lVar17;
      puVar24[0x75] = uVar19;
      puVar24[0x76] = puVar33;
      *(undefined2 *)(puVar24 + 0x77) = uVar37;
      *(undefined1 *)((long)puVar24 + 0x3bd) = 0;
      goto LAB_100a4f01c;
    }
    if (1 < *(byte *)(puVar24 + 0x33)) {
      puVar5 = *(uint3 **)(puVar24[0x34] + 8);
      lVar17 = *(long *)(puVar24[0x34] + 0x10);
      if (lVar17 == 2) {
        uVar8 = (ushort)*puVar5;
        uVar32 = ((uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8) - 0x7773;
        uVar37 = 0x50;
      }
      else {
        if (lVar17 != 3) goto LAB_100a4f37c;
        uVar32 = (uint)*puVar5;
        uVar9 = uVar32 & 0xff00ff;
        uVar9 = uVar9 >> 8 | ((uVar32 & 0xff00ff00) >> 8 | uVar9 << 8) << 0x10;
        uVar32 = (uint)(0x77737300 < uVar9);
        if (uVar9 < 0x77737300) {
          uVar32 = 0xffffffff;
        }
        uVar37 = 0x1bb;
      }
      *(undefined8 *)(puVar15 + -0xc80) = 3;
      if (uVar32 == 0) goto LAB_100a4efec;
    }
LAB_100a4f37c:
    uVar38 = 3;
    if (puVar24[0x4c] == 0) goto LAB_100a4f1a0;
    goto LAB_100a4f198;
  }
  plVar31 = (long *)(unaff_x27 >> 0x10);
  goto LAB_100a4f1a0;
code_r0x000100a51738:
  lVar30 = puVar24[0x9a];
  lVar17 = puVar24[0x9b];
  if (lVar30 - lVar17 == lVar39) goto code_r0x000100a5174c;
  goto LAB_100a51714;
code_r0x000100a5174c:
  unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
LAB_100a51764:
  puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
  uVar38 = 0xb;
LAB_100a517b8:
  if (puVar24[0x93] != 0) {
    _free(puVar24[0x94]);
  }
  unaff_x26 = (undefined8 *)0x1c;
LAB_100a51864:
  **(undefined1 **)(puVar15 + -0x18c8) = 1;
  goto LAB_100a4fea0;
code_r0x000100a500a4:
  *(undefined8 **)(puVar15 + -0x18c8) = unaff_x26;
  unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
  goto LAB_100a51d3c;
LAB_100a5199c:
  plVar27 = (long *)0x0;
  puVar24[0x98] = unaff_x25;
  puVar24[0x99] = lVar17;
  puVar24[0x9a] = unaff_x25;
  puVar24[0x9b] = puVar24[0x93];
  puVar24[0x9c] = lVar17;
  puVar24[0x9d] = unaff_x25;
  puVar24[0x9e] = 0;
  puVar24[0x9f] = unaff_x25;
  goto LAB_100a519c4;
code_r0x000100a519e8:
  unaff_x25 = (long *)puVar24[0x9d];
  plVar27 = (long *)puVar24[0x9e];
  if ((long)unaff_x25 - (long)plVar27 == lVar17) goto code_r0x000100a519fc;
  goto LAB_100a519c4;
code_r0x000100a52b08:
  lVar17 = puVar24[0x96];
  if ((long *)(puVar24[0x94] - lVar17) < unaff_x25) {
    *(undefined1 **)(puVar15 + -0x18c0) = puVar29;
    *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
    FUN_108855060(puVar24 + 0x94,lVar17,unaff_x25,1,1);
    lVar17 = puVar24[0x96];
    puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
    puVar29 = *(undefined1 **)(puVar15 + -0x18c0);
  }
  _memcpy(puVar24[0x95] + lVar17,puVar24 + 0x97,unaff_x25);
  uVar28 = lVar17 + (long)unaff_x25;
  puVar24[0x96] = uVar28;
  if (3 < uVar28) {
    *(undefined1 **)(puVar15 + -0x18c0) = puVar29;
    piVar21 = (int *)puVar24[0x95];
    if (*piVar21 == 0xa0d0a0d) {
LAB_100a52b84:
      *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
      lVar17 = puVar24[0x94];
      *(undefined1 *)(puVar24 + 0xda) = 1;
      __ZN11tungstenite5proxy27parse_http_connect_response17hdb8c3dd74326ae8aE
                (puVar15 + -0xc80,piVar21,uVar28);
      uVar38 = *(ulong *)(puVar15 + -0xc80);
      uVar32 = (uint)*(ushort *)(puVar15 + -0xc78);
      if (uVar38 == 0x15) {
        *(ushort *)(puVar15 + 0x1670) = *(ushort *)(puVar15 + -0xc78);
        if (uVar32 - 200 < 100) {
          if (lVar17 != 0) {
            _free(piVar21);
          }
          if (puVar24[0x8e] != 0) {
            _free(puVar24[0x8f]);
          }
          puVar29 = *(undefined1 **)(puVar15 + -0x18c0);
          if (puVar24[0x8b] == 0) goto LAB_100a52d80;
          _free(puVar24[0x8c]);
          *(undefined1 *)((long)puVar24 + 0x48c) = 1;
          goto LAB_100a52a98;
        }
        *(long *)(puVar15 + -0x18c8) = lVar17;
        *(undefined1 **)(puVar15 + 0x3f78) = puVar15 + 0x1670;
        *(undefined **)(puVar15 + 0x3f80) =
             &
             __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u16_GT_3fmt17h0a78be7af221127fE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (puVar15 + -0xc80,s_HTTP_CONNECT_failed_with_status_108acee10,puVar15 + 0x3f78);
        unaff_x25 = *(long **)(puVar15 + -0xc78);
        unaff_x26 = *(undefined8 **)(puVar15 + -0xc70);
        uVar32 = (uint)*(ulong *)(puVar15 + -0xc80) & 0xffff;
        puVar22 = (undefined8 *)(*(ulong *)(puVar15 + -0xc80) >> 0x10);
        uVar38 = 8;
      }
      else {
        *(long *)(puVar15 + -0x18c8) = lVar17;
        puVar22 = (undefined8 *)(ulong)*(uint6 *)(puVar15 + -0xc76);
        unaff_x25 = *(long **)(puVar15 + -0xc70);
        unaff_x26 = *(undefined8 **)(puVar15 + -0xc68);
      }
      if (*(long *)(puVar15 + -0x18c8) != 0) {
        _free(piVar21);
      }
      puVar29 = *(undefined1 **)(puVar15 + -0x18c0);
      goto LAB_100a52a68;
    }
    uVar38 = lVar17 + (long)unaff_x25;
    lVar17 = 1;
    while (uVar38 = uVar38 - 1, 3 < uVar38) {
      piVar2 = (int *)((long)piVar21 + lVar17);
      lVar17 = lVar17 + 1;
      if (*piVar2 == 0xa0d0a0d) goto LAB_100a52b84;
    }
    puVar29 = *(undefined1 **)(puVar15 + -0x18c0);
  }
  goto LAB_100a52c40;
code_r0x000100a519fc:
  unaff_x27 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109beb3ae,9);
LAB_100a51a14:
  if (puVar24[0x98] != 0) {
    _free(puVar24[0x99]);
  }
LAB_100a51d3c:
  uVar38 = 0xb;
LAB_100a51d40:
  puVar33 = *(undefined8 **)(puVar15 + -0x18a0);
LAB_100a51dd4:
  if (puVar24[0x94] == 0) {
    *(undefined1 *)puVar22 = 1;
LAB_100a4fea0:
    lVar17 = puVar24[0x8c];
    *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
    if (lVar17 == 0) {
      puVar29 = *(undefined1 **)(puVar15 + -0x18c0);
LAB_100a52ac0:
      *puVar29 = 1;
    }
    else {
LAB_100a4feac:
      _free(puVar24[0x8d]);
      *(undefined1 *)((long)puVar24 + 0x47e) = 1;
      if (uVar38 == 0x15) goto LAB_100a52a98;
    }
LAB_100a52c18:
    FUN_100deb62c(puVar24 + 0x7f);
    bVar16 = true;
  }
  else {
LAB_100a51ddc:
    _free(puVar24[0x95]);
    *(undefined1 *)((long)puVar24 + 0x4be) = 1;
    if (uVar38 != 0x15) goto LAB_100a4fea0;
    lVar17 = puVar24[0x8c];
    *(undefined8 **)(puVar15 + -0x18a0) = puVar33;
joined_r0x000100a51f64:
    if (lVar17 != 0) {
      uVar38 = 0x15;
      goto LAB_100a4feac;
    }
    puVar29 = *(undefined1 **)(puVar15 + -0x18c0);
LAB_100a52d80:
    *puVar29 = 1;
LAB_100a52a98:
    bVar16 = false;
    uVar38 = puVar24[0x7f];
    unaff_x27 = puVar24[0x80];
    unaff_x25 = (long *)puVar24[0x81];
    unaff_x26 = (undefined8 *)puVar24[0x82];
  }
  **(undefined1 **)(puVar15 + -0x18b0) = 1;
  FUN_100d193c4(*(undefined8 *)(puVar15 + -0x18a0));
LAB_100a52a24:
  *(undefined1 *)((long)puVar24 + 0x3bc) = 0;
  if (puVar24[0x6a] != 0) {
    _free(puVar24[0x6b]);
  }
  if (puVar24[0x6d] != -0x8000000000000000) {
    if (puVar24[0x6d] != 0) {
      _free(puVar24[0x6e]);
    }
    if (puVar24[0x70] != 0) {
      _free(puVar24[0x71]);
    }
  }
LAB_100a4f178:
  *pbVar35 = 1;
  FUN_100e7204c(plVar31);
  if (bVar16) {
    plVar31 = (long *)(unaff_x27 >> 0x10);
    lVar17 = puVar24[0x4c];
joined_r0x000100a4f7a8:
    if (lVar17 != 0) {
LAB_100a4f198:
      _free(puVar24[0x4d]);
    }
LAB_100a4f1a0:
    auVar10._8_8_ = unaff_x26;
    auVar10._0_8_ = unaff_x25;
    if ((puVar24[0xdb] != 0) && (plVar27 = (long *)puVar24[0xdc], plVar27 != (long *)0x0)) {
      lVar17 = *plVar27;
      *plVar27 = lVar17 + -1;
      LORelease();
      if (lVar17 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4e229937a5e8886E(puVar24 + 0xdc);
      }
    }
    *(undefined1 *)((long)puVar24 + 0x29b) = 0;
    FUN_100de01d8(puVar24 + 0x27);
    lVar17 = 2;
  }
  else {
    puVar24[0x4f] = uVar38;
    puVar24[0x50] = unaff_x27;
    puVar24[0x51] = unaff_x25;
    puVar24[0x52] = unaff_x26;
    if (*(char *)((long)puVar24 + 0x29a) == '\x01') {
      if ((int)unaff_x26 == -1) {
        func_0x000108a07a20(&UNK_10b4cd2b8);
        goto LAB_100a52e04;
      }
      *(undefined4 *)(puVar15 + -0xc80) = 1;
      iVar18 = _setsockopt(unaff_x26,6,1,puVar15 + -0xc80,4);
      if (iVar18 == -1) {
        piVar21 = (int *)___error();
        iVar18 = *piVar21;
        FUN_100deb62c(puVar24 + 0x4f);
        plVar31 = (long *)((long)iVar18 << 0x10);
        unaff_x27 = 2;
        uVar38 = 0xb;
        lVar17 = puVar24[0x4c];
        goto joined_r0x000100a4f7a8;
      }
    }
    *(undefined1 *)((long)puVar24 + 0x29c) = 0;
    uVar19 = puVar24[0x3b];
    uVar42 = puVar24[0x3e];
    uVar36 = puVar24[0x3d];
    *(undefined8 *)(puVar15 + -0x1788) = puVar24[0x3c];
    *(undefined8 *)(puVar15 + -0x1790) = uVar19;
    *(undefined8 *)(puVar15 + -0x1778) = uVar42;
    *(undefined8 *)(puVar15 + -0x1780) = uVar36;
    uVar19 = puVar24[0x3f];
    uVar42 = puVar24[0x42];
    uVar36 = puVar24[0x41];
    *(undefined8 *)(puVar15 + -0x1768) = puVar24[0x40];
    *(undefined8 *)(puVar15 + -6000) = uVar19;
    *(undefined8 *)(puVar15 + -0x1758) = uVar42;
    *(undefined8 *)(puVar15 + -0x1760) = uVar36;
    uVar19 = puVar24[0x33];
    uVar42 = puVar24[0x36];
    uVar36 = puVar24[0x35];
    *(undefined8 *)(puVar15 + -0x17c8) = puVar24[0x34];
    *(undefined8 *)(puVar15 + -0x17d0) = uVar19;
    *(undefined8 *)(puVar15 + -0x17b8) = uVar42;
    *(undefined8 *)(puVar15 + -0x17c0) = uVar36;
    uVar19 = puVar24[0x37];
    uVar42 = puVar24[0x3a];
    uVar36 = puVar24[0x39];
    *(undefined8 *)(puVar15 + -0x17a8) = puVar24[0x38];
    *(undefined8 *)(puVar15 + -0x17b0) = uVar19;
    *(undefined8 *)(puVar15 + -0x1798) = uVar42;
    *(undefined8 *)(puVar15 + -0x17a0) = uVar36;
    uVar19 = puVar24[0x2b];
    uVar42 = puVar24[0x2e];
    uVar36 = puVar24[0x2d];
    *(undefined8 *)(puVar15 + -0x1808) = puVar24[0x2c];
    *(undefined8 *)(puVar15 + -0x1810) = uVar19;
    *(undefined8 *)(puVar15 + -0x17f8) = uVar42;
    *(undefined8 *)(puVar15 + -0x1800) = uVar36;
    uVar19 = puVar24[0x2f];
    uVar42 = puVar24[0x32];
    uVar36 = puVar24[0x31];
    *(undefined8 *)(puVar15 + -0x17e8) = puVar24[0x30];
    *(undefined8 *)(puVar15 + -0x17f0) = uVar19;
    *(undefined8 *)(puVar15 + -0x17d8) = uVar42;
    *(undefined8 *)(puVar15 + -0x17e0) = uVar36;
    uVar19 = puVar24[0x27];
    uVar42 = puVar24[0x2a];
    uVar36 = puVar24[0x29];
    *(undefined8 *)(puVar15 + -0x1828) = puVar24[0x28];
    *(undefined8 *)(puVar15 + -0x1830) = uVar19;
    *(undefined8 *)(puVar15 + -0x1818) = uVar42;
    *(undefined8 *)(puVar15 + -0x1820) = uVar36;
    uVar19 = puVar24[0x47];
    uVar42 = puVar24[0x4a];
    uVar36 = puVar24[0x49];
    *(undefined8 *)(puVar15 + -0x1858) = puVar24[0x48];
    *(undefined8 *)(puVar15 + -0x1860) = uVar19;
    *(undefined8 *)(puVar15 + -0x1848) = uVar42;
    *(undefined8 *)(puVar15 + -0x1850) = uVar36;
    *(undefined8 *)(puVar15 + -0x1840) = puVar24[0x4b];
    uVar42 = puVar24[0x43];
    uVar36 = puVar24[0x46];
    uVar19 = puVar24[0x45];
    *(undefined8 *)(puVar15 + -0x1878) = puVar24[0x44];
    *(undefined8 *)(puVar15 + -0x1880) = uVar42;
    *(undefined8 *)(puVar15 + -0x1868) = uVar36;
    *(undefined8 *)(puVar15 + -0x1870) = uVar19;
    *(undefined1 *)((long)puVar24 + 0x29b) = 0;
    uVar28 = puVar24[0xdb];
    uVar19 = puVar24[0xdc];
    lVar17 = puVar24[0x4f];
    lVar39 = puVar24[0x52];
    lVar30 = puVar24[0x51];
    plVar31[1] = puVar24[0x50];
    *plVar31 = lVar17;
    plVar31[3] = lVar39;
    plVar31[2] = lVar30;
    puVar24[0x58] = uVar28;
    puVar24[0x59] = uVar19;
    uVar36 = *(undefined8 *)(puVar15 + -0x1790);
    uVar43 = *(undefined8 *)(puVar15 + -0x1778);
    uVar42 = *(undefined8 *)(puVar15 + -0x1780);
    puVar24[0x6f] = *(undefined8 *)(puVar15 + -0x1788);
    puVar24[0x6e] = uVar36;
    puVar24[0x71] = uVar43;
    puVar24[0x70] = uVar42;
    uVar36 = *(undefined8 *)(puVar15 + -6000);
    uVar43 = *(undefined8 *)(puVar15 + -0x1758);
    uVar42 = *(undefined8 *)(puVar15 + -0x1760);
    puVar24[0x73] = *(undefined8 *)(puVar15 + -0x1768);
    puVar24[0x72] = uVar36;
    puVar24[0x75] = uVar43;
    puVar24[0x74] = uVar42;
    uVar36 = *(undefined8 *)(puVar15 + -0x17d0);
    uVar43 = *(undefined8 *)(puVar15 + -0x17b8);
    uVar42 = *(undefined8 *)(puVar15 + -0x17c0);
    puVar24[0x67] = *(undefined8 *)(puVar15 + -0x17c8);
    puVar24[0x66] = uVar36;
    puVar24[0x69] = uVar43;
    puVar24[0x68] = uVar42;
    uVar36 = *(undefined8 *)(puVar15 + -0x17b0);
    uVar43 = *(undefined8 *)(puVar15 + -0x1798);
    uVar42 = *(undefined8 *)(puVar15 + -0x17a0);
    puVar24[0x6b] = *(undefined8 *)(puVar15 + -0x17a8);
    puVar24[0x6a] = uVar36;
    puVar24[0x6d] = uVar43;
    puVar24[0x6c] = uVar42;
    uVar36 = *(undefined8 *)(puVar15 + -0x1810);
    uVar43 = *(undefined8 *)(puVar15 + -0x17f8);
    uVar42 = *(undefined8 *)(puVar15 + -0x1800);
    puVar24[0x5f] = *(undefined8 *)(puVar15 + -0x1808);
    puVar24[0x5e] = uVar36;
    puVar24[0x61] = uVar43;
    puVar24[0x60] = uVar42;
    uVar36 = *(undefined8 *)(puVar15 + -0x17f0);
    uVar43 = *(undefined8 *)(puVar15 + -0x17d8);
    uVar42 = *(undefined8 *)(puVar15 + -0x17e0);
    puVar24[99] = *(undefined8 *)(puVar15 + -0x17e8);
    puVar24[0x62] = uVar36;
    puVar24[0x65] = uVar43;
    puVar24[100] = uVar42;
    uVar36 = *(undefined8 *)(puVar15 + -0x1830);
    uVar43 = *(undefined8 *)(puVar15 + -0x1818);
    uVar42 = *(undefined8 *)(puVar15 + -0x1820);
    puVar24[0x5b] = *(undefined8 *)(puVar15 + -0x1828);
    puVar24[0x5a] = uVar36;
    puVar24[0x5d] = uVar43;
    puVar24[0x5c] = uVar42;
    uVar36 = *(undefined8 *)(puVar15 + -0x1860);
    uVar43 = *(undefined8 *)(puVar15 + -0x1848);
    uVar42 = *(undefined8 *)(puVar15 + -0x1850);
    puVar24[0x7b] = *(undefined8 *)(puVar15 + -0x1858);
    puVar24[0x7a] = uVar36;
    puVar24[0x7d] = uVar43;
    puVar24[0x7c] = uVar42;
    puVar24[0x7e] = *(undefined8 *)(puVar15 + -0x1840);
    uVar43 = *(undefined8 *)(puVar15 + -0x1880);
    uVar42 = *(undefined8 *)(puVar15 + -0x1868);
    uVar36 = *(undefined8 *)(puVar15 + -0x1870);
    puVar24[0x77] = *(undefined8 *)(puVar15 + -0x1878);
    puVar24[0x76] = uVar43;
    puVar24[0x79] = uVar42;
    puVar24[0x78] = uVar36;
    *(undefined8 **)(puVar15 + -0x18a0) = puVar24 + 0xaa;
    *(undefined1 *)(puVar24 + 0xaa) = 0;
    pbVar35 = *(byte **)(puVar15 + -0x18a8);
LAB_100a4f30c:
    puVar33 = puVar24 + 0x54;
    *(undefined1 *)((long)puVar24 + 0x551) = 0;
    lVar17 = puVar24[0x5a];
    uVar38 = puVar24[0x5b];
    unaff_x27 = puVar24[0x5c];
    unaff_x25 = (long *)puVar24[0x5d];
    unaff_x26 = (undefined8 *)puVar24[0x5e];
    uVar36 = *puVar33;
    uVar43 = puVar24[0x57];
    uVar42 = puVar24[0x56];
    *(undefined8 *)(puVar15 + -0x1138) = puVar24[0x55];
    *(undefined8 *)(puVar15 + -0x1140) = uVar36;
    *(undefined8 *)(puVar15 + -0x1128) = uVar43;
    *(undefined8 *)(puVar15 + -0x1130) = uVar42;
    puVar24[0x84] = puVar24[0x7b];
    puVar24[0x83] = puVar24[0x7a];
    puVar24[0x86] = puVar24[0x7d];
    puVar24[0x85] = puVar24[0x7c];
    puVar24[0x87] = puVar24[0x7e];
    puVar24[0x80] = puVar24[0x77];
    puVar24[0x7f] = puVar24[0x76];
    puVar24[0x82] = puVar24[0x79];
    puVar24[0x81] = puVar24[0x78];
    *(undefined2 *)((long)puVar24 + 0x552) = 0x101;
    puVar24[0x88] = uVar28;
    puVar24[0x89] = uVar19;
    if (lVar17 == 3) {
      plVar31 = (long *)(unaff_x27 >> 8);
joined_r0x000100a4f650:
      if ((((uVar28 & 1) != 0) && ((*(byte *)((long)puVar24 + 0x552) & 1) != 0)) &&
         (plVar27 = (long *)puVar24[0x89], plVar27 != (long *)0x0)) {
        lVar17 = *plVar27;
        *plVar27 = lVar17 + -1;
        LORelease();
        if (lVar17 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd4e229937a5e8886E();
        }
      }
      auVar10._8_8_ = unaff_x26;
      auVar10._0_8_ = unaff_x25;
      *(undefined1 *)((long)puVar24 + 0x552) = 0;
      if ((*(byte *)((long)puVar24 + 0x553) & 1) != 0) {
        FUN_100deb62c(puVar15 + -0x1140);
      }
      *(undefined1 *)((long)puVar24 + 0x553) = 0;
      lVar17 = 2;
    }
    else {
      puVar24[0x8a] = lVar17;
      puVar24[0x8b] = uVar38;
      puVar24[0x8c] = unaff_x27;
      puVar24[0x8d] = unaff_x25;
      puVar24[0x8e] = unaff_x26;
      puVar24[0xa5] = puVar24[0x75];
      puVar24[0xa0] = puVar24[0x70];
      puVar24[0x9f] = puVar24[0x6f];
      puVar24[0xa2] = puVar24[0x72];
      puVar24[0xa1] = puVar24[0x71];
      puVar24[0xa4] = puVar24[0x74];
      puVar24[0xa3] = puVar24[0x73];
      puVar24[0x98] = puVar24[0x68];
      puVar24[0x97] = puVar24[0x67];
      puVar24[0x9a] = puVar24[0x6a];
      puVar24[0x99] = puVar24[0x69];
      puVar24[0x9c] = puVar24[0x6c];
      puVar24[0x9b] = puVar24[0x6b];
      puVar24[0x9e] = puVar24[0x6e];
      puVar24[0x9d] = puVar24[0x6d];
      puVar24[0x90] = puVar24[0x60];
      puVar24[0x8f] = puVar24[0x5f];
      puVar24[0x92] = puVar24[0x62];
      puVar24[0x91] = puVar24[0x61];
      puVar24[0x94] = puVar24[100];
      puVar24[0x93] = puVar24[99];
      puVar24[0x96] = puVar24[0x66];
      puVar24[0x95] = puVar24[0x65];
      FUN_100a4e90c(puVar15 + -0xc80,puVar24 + 0x8a);
      uVar38 = *(ulong *)(puVar15 + -0xc80);
      unaff_x27 = *(ulong *)(puVar15 + -0xc78);
      unaff_x25 = *(long **)(puVar15 + -0xc70);
      unaff_x26 = *(undefined8 **)(puVar15 + -0xc68);
      if (uVar38 != 0x15) {
        plVar31 = (long *)(unaff_x27 >> 8);
LAB_100a4f640:
        *(undefined1 *)((long)puVar24 + 0x551) = 0;
        FUN_100de01d8(puVar24 + 0x8a);
        uVar28 = puVar24[0x88];
        goto joined_r0x000100a4f650;
      }
      *(undefined1 *)((long)puVar24 + 0x551) = 1;
      puVar24[0xa6] = unaff_x27;
      puVar24[0xa7] = unaff_x25;
      puVar24[0xa8] = unaff_x26;
      if (*(byte *)(puVar24 + 0x96) < 2) {
LAB_100a4f424:
        uVar38 = 3;
LAB_100a4f630:
        if (puVar24[0xa6] != 0) {
          _free(puVar24[0xa7]);
        }
        goto LAB_100a4f640;
      }
      psVar6 = *(short **)(puVar24[0x97] + 8);
      lVar17 = *(long *)(puVar24[0x97] + 0x10);
      if (lVar17 == 3) {
        if (*psVar6 != 0x7377 || (char)psVar6[1] != 's') goto LAB_100a4f424;
        bVar16 = true;
      }
      else {
        if ((lVar17 != 2) || (*psVar6 != 0x7377)) goto LAB_100a4f424;
        bVar16 = false;
      }
      if (*(int *)(puVar24 + 0x88) != 1) {
        *(undefined1 *)((long)puVar24 + 0x553) = 0;
        uVar42 = *(undefined8 *)(puVar15 + -0x1138);
        uVar36 = *(undefined8 *)(puVar15 + -0x1140);
        uVar44 = *(undefined8 *)(puVar15 + -0x1128);
        uVar43 = *(undefined8 *)(puVar15 + -0x1130);
        *(undefined1 *)((long)puVar24 + 0x551) = 0;
        uVar46 = puVar24[0xa7];
        uVar45 = puVar24[0xa6];
        uVar19 = puVar24[0xa8];
        *(undefined8 *)(puVar15 + 23000) = uVar44;
        *(undefined8 *)(puVar15 + 0x59d0) = uVar43;
        *(undefined8 *)(puVar15 + 0x59c8) = uVar42;
        *(undefined8 *)(puVar15 + 0x59c0) = uVar36;
        *(undefined8 *)(puVar15 + 0x59f0) = uVar19;
        *(undefined8 *)(puVar15 + 0x59e8) = uVar46;
        *(undefined8 *)(puVar15 + 0x59e0) = uVar45;
        puVar24[0xac] = uVar42;
        puVar24[0xab] = uVar36;
        puVar24[0xae] = uVar44;
        puVar24[0xad] = uVar43;
        puVar24[0xb0] = uVar46;
        puVar24[0xaf] = uVar45;
        puVar24[0xb1] = uVar19;
        puVar24[0xb2] = 0;
        *(bool *)(puVar24 + 0x141) = bVar16;
        *(undefined1 *)((long)puVar24 + 0xa09) = 0;
LAB_100a4f088:
        FUN_100a4c858(puVar15 + -0xc80,puVar24 + 0xab,*(undefined8 *)(puVar15 + -0x1888));
        lVar17 = *(long *)(puVar15 + -0xc80);
        if (lVar17 != 4) {
          uVar38 = *(ulong *)(puVar15 + -0xc78);
          unaff_x27 = *(ulong *)(puVar15 + -0xc70);
          unaff_x25 = *(long **)(puVar15 + -0xc68);
          unaff_x26 = *(undefined8 **)(puVar15 + -0xc60);
          _memcpy(puVar15 + -0x10a0,puVar15 + -0xc58,0x420);
          FUN_100d40240(puVar24 + 0xab);
LAB_100a4f61c:
          puVar33 = puVar24 + 0x54;
          if (lVar17 == 3) goto LAB_100a4f624;
          goto LAB_100a50160;
        }
        uVar25 = 5;
LAB_100a50d18:
        **(undefined1 **)(puVar15 + -0x18a0) = uVar25;
        *plVar20 = 3;
        uVar25 = 4;
        goto LAB_100a51334;
      }
      *(undefined1 *)((long)puVar24 + 0x552) = 0;
      lVar17 = puVar24[0x89];
      puVar24[0xa9] = lVar17;
      if (lVar17 != 0) {
        *(undefined1 *)((long)puVar24 + 0x553) = 0;
        uVar42 = *(undefined8 *)(puVar15 + -0x1138);
        uVar36 = *(undefined8 *)(puVar15 + -0x1140);
        uVar44 = *(undefined8 *)(puVar15 + -0x1128);
        uVar43 = *(undefined8 *)(puVar15 + -0x1130);
        *(undefined1 *)((long)puVar24 + 0x551) = 0;
        uVar46 = puVar24[0xa7];
        uVar45 = puVar24[0xa6];
        uVar19 = puVar24[0xa8];
        *(undefined8 *)(puVar15 + 23000) = uVar44;
        *(undefined8 *)(puVar15 + 0x59d0) = uVar43;
        *(undefined8 *)(puVar15 + 0x59c8) = uVar42;
        *(undefined8 *)(puVar15 + 0x59c0) = uVar36;
        *(undefined8 *)(puVar15 + 0x59f0) = uVar19;
        *(undefined8 *)(puVar15 + 0x59e8) = uVar46;
        *(undefined8 *)(puVar15 + 0x59e0) = uVar45;
        puVar24[0xac] = uVar42;
        puVar24[0xab] = uVar36;
        puVar24[0xae] = uVar44;
        puVar24[0xad] = uVar43;
        puVar24[0xb0] = uVar46;
        puVar24[0xaf] = uVar45;
        puVar24[0xb1] = uVar19;
        puVar24[0xb2] = lVar17;
        *(bool *)(puVar24 + 0x141) = bVar16;
        *(undefined1 *)((long)puVar24 + 0xa09) = 0;
LAB_100a4f434:
        FUN_100a4c858(puVar15 + -0xc80,puVar24 + 0xab,*(undefined8 *)(puVar15 + -0x1888));
        lVar17 = *(long *)(puVar15 + -0xc80);
        if (lVar17 != 4) {
          uVar38 = *(ulong *)(puVar15 + -0xc78);
          unaff_x27 = *(ulong *)(puVar15 + -0xc70);
          unaff_x25 = *(long **)(puVar15 + -0xc68);
          unaff_x26 = *(undefined8 **)(puVar15 + -0xc60);
          _memcpy(puVar15 + -0x10a0,puVar15 + -0xc58,0x420);
          FUN_100d40240(puVar24 + 0xab);
          goto LAB_100a4f61c;
        }
        uVar25 = 3;
        goto LAB_100a50d18;
      }
      *(undefined1 *)((long)puVar24 + 0x553) = 0;
      uVar36 = *(undefined8 *)(puVar15 + -0x1138);
      uVar19 = *(undefined8 *)(puVar15 + -0x1140);
      uVar43 = *(undefined8 *)(puVar15 + -0x1128);
      uVar42 = *(undefined8 *)(puVar15 + -0x1130);
      puVar24[0xac] = uVar36;
      puVar24[0xab] = uVar19;
      puVar24[0xae] = uVar43;
      puVar24[0xad] = uVar42;
      *(bool *)(puVar24 + 0xaf) = bVar16;
      *(undefined1 *)((long)puVar24 + 0x579) = 0;
      *(undefined8 *)(puVar15 + -0xc78) = uVar36;
      *(undefined8 *)(puVar15 + -0xc80) = uVar19;
      *(undefined8 *)(puVar15 + -0xc68) = uVar43;
      *(undefined8 *)(puVar15 + -0xc70) = uVar42;
      if (bVar16) {
LAB_100a4f484:
        puVar22 = (undefined8 *)((long)puVar24 + 0x579);
        FUN_100deb62c(puVar15 + -0xc80);
        uVar38 = 0;
        *(undefined1 *)puVar22 = 1;
LAB_100a4f624:
        plVar31 = (long *)(unaff_x27 >> 8);
        if ((*(byte *)((long)puVar24 + 0x551) & 1) == 0) goto LAB_100a4f640;
        goto LAB_100a4f630;
      }
LAB_100a5013c:
      uVar38 = *(ulong *)(puVar15 + -0xc80);
      unaff_x27 = puVar24[0xac];
      unaff_x25 = (long *)puVar24[0xad];
      lVar17 = 2;
      unaff_x26 = (undefined8 *)puVar24[0xae];
      *(undefined1 *)((long)puVar24 + 0x579) = 1;
LAB_100a50160:
      *(undefined8 **)(puVar15 + -0x18b0) = puVar33;
      puVar24[0xc0] = puVar24[0x9f];
      puVar24[0xbf] = puVar24[0x9e];
      puVar24[0xc2] = puVar24[0xa1];
      puVar24[0xc1] = puVar24[0xa0];
      puVar24[0xc4] = puVar24[0xa3];
      puVar24[0xc3] = puVar24[0xa2];
      puVar24[0xc6] = puVar24[0xa5];
      puVar24[0xc5] = puVar24[0xa4];
      puVar24[0xb8] = puVar24[0x97];
      puVar24[0xb7] = puVar24[0x96];
      puVar24[0xba] = puVar24[0x99];
      puVar24[0xb9] = puVar24[0x98];
      puVar24[0xbc] = puVar24[0x9b];
      puVar24[0xbb] = puVar24[0x9a];
      puVar24[0xbe] = puVar24[0x9d];
      puVar24[0xbd] = puVar24[0x9c];
      puVar24[0xb0] = puVar24[0x8f];
      puVar24[0xaf] = puVar24[0x8e];
      puVar24[0xb2] = puVar24[0x91];
      puVar24[0xb1] = puVar24[0x90];
      puVar24[0xb4] = puVar24[0x93];
      puVar24[0xb3] = puVar24[0x92];
      puVar24[0xb6] = puVar24[0x95];
      puVar24[0xb5] = puVar24[0x94];
      puVar24[0xac] = puVar24[0x8b];
      puVar24[0xab] = puVar24[0x8a];
      puVar24[0xae] = puVar24[0x8d];
      puVar24[0xad] = puVar24[0x8c];
      puVar24[199] = lVar17;
      puVar24[200] = uVar38;
      puVar24[0xc9] = unaff_x27;
      puVar24[0xca] = unaff_x25;
      puVar24[0xcb] = unaff_x26;
      _memcpy(puVar24 + 0xcc,puVar15 + -0x10a0,0x420);
      puVar24[0x153] = puVar24[0x82];
      puVar24[0x152] = puVar24[0x81];
      puVar24[0x155] = puVar24[0x84];
      puVar24[0x154] = puVar24[0x83];
      puVar24[0x157] = puVar24[0x86];
      puVar24[0x156] = puVar24[0x85];
      puVar24[0x158] = puVar24[0x87];
      puVar24[0x151] = puVar24[0x80];
      puVar24[0x150] = puVar24[0x7f];
      pbVar35[8] = 0;
      *(byte **)(puVar15 + -0x18c8) = pbVar35 + 8;
      *(undefined8 *)(puVar15 + -0x1888) = **(undefined8 **)(puVar15 + -0x1888);
LAB_100a5021c:
      uVar19 = puVar24[0xbf];
      uVar42 = puVar24[0xc2];
      uVar36 = puVar24[0xc1];
      *(undefined8 *)(puVar15 + 0x5a68) = puVar24[0xc0];
      *(undefined8 *)(puVar15 + 0x5a60) = uVar19;
      *(undefined8 *)(puVar15 + 0x5a78) = uVar42;
      *(undefined8 *)(puVar15 + 0x5a70) = uVar36;
      uVar19 = puVar24[0xc3];
      uVar42 = puVar24[0xc6];
      uVar36 = puVar24[0xc5];
      *(undefined8 *)(puVar15 + 0x5a88) = puVar24[0xc4];
      *(undefined8 *)(puVar15 + 0x5a80) = uVar19;
      *(undefined8 *)(puVar15 + 0x5a98) = uVar42;
      *(undefined8 *)(puVar15 + 0x5a90) = uVar36;
      uVar19 = puVar24[0xb7];
      uVar42 = puVar24[0xba];
      uVar36 = puVar24[0xb9];
      *(undefined8 *)(puVar15 + 0x5a28) = puVar24[0xb8];
      *(undefined8 *)(puVar15 + 0x5a20) = uVar19;
      *(undefined8 *)(puVar15 + 0x5a38) = uVar42;
      *(undefined8 *)(puVar15 + 0x5a30) = uVar36;
      uVar19 = puVar24[0xbb];
      uVar42 = puVar24[0xbe];
      uVar36 = puVar24[0xbd];
      *(undefined8 *)(puVar15 + 0x5a48) = puVar24[0xbc];
      *(undefined8 *)(puVar15 + 0x5a40) = uVar19;
      *(undefined8 *)(puVar15 + 0x5a58) = uVar42;
      *(undefined8 *)(puVar15 + 0x5a50) = uVar36;
      uVar19 = puVar24[0xaf];
      uVar42 = puVar24[0xb2];
      uVar36 = puVar24[0xb1];
      *(undefined8 *)(puVar15 + 0x59e8) = puVar24[0xb0];
      *(undefined8 *)(puVar15 + 0x59e0) = uVar19;
      *(undefined8 *)(puVar15 + 0x59f8) = uVar42;
      *(undefined8 *)(puVar15 + 0x59f0) = uVar36;
      uVar19 = puVar24[0xb3];
      uVar42 = puVar24[0xb6];
      uVar36 = puVar24[0xb5];
      *(undefined8 *)(puVar15 + 0x5a08) = puVar24[0xb4];
      *(undefined8 *)(puVar15 + 0x5a00) = uVar19;
      *(undefined8 *)(puVar15 + 0x5a18) = uVar42;
      *(undefined8 *)(puVar15 + 0x5a10) = uVar36;
      uVar19 = puVar24[0xab];
      uVar42 = puVar24[0xae];
      uVar36 = puVar24[0xad];
      *(undefined8 *)(puVar15 + 0x59c8) = puVar24[0xac];
      *(undefined8 *)(puVar15 + 0x59c0) = uVar19;
      *(undefined8 *)(puVar15 + 23000) = uVar42;
      *(undefined8 *)(puVar15 + 0x59d0) = uVar36;
      _memcpy(puVar15 + -0xc80,puVar24 + 199,0x448);
      uVar36 = puVar24[0x153];
      uVar19 = puVar24[0x152];
      uVar42 = puVar24[0x154];
      uVar44 = puVar24[0x157];
      uVar43 = puVar24[0x156];
      *(undefined8 *)(puVar15 + 0x5ac8) = puVar24[0x155];
      *(undefined8 *)(puVar15 + 0x5ac0) = uVar42;
      *(undefined8 *)(puVar15 + 0x5ad8) = uVar44;
      *(undefined8 *)(puVar15 + 0x5ad0) = uVar43;
      *(undefined8 *)(puVar15 + 0x5ae0) = puVar24[0x158];
      uVar43 = puVar24[0x151];
      uVar42 = puVar24[0x150];
      *(undefined8 *)(puVar15 + 0x5ab8) = uVar36;
      *(undefined8 *)(puVar15 + 0x5ab0) = uVar19;
      *(undefined8 *)(puVar15 + 0x5aa8) = uVar43;
      *(undefined8 *)(puVar15 + 0x5aa0) = uVar42;
      _memcpy(puVar15 + -0x838,puVar15 + 0x59c0,0x128);
      _memcpy(puVar24 + 0x159,puVar15 + -0xc80,0x1c50);
      *pbVar35 = 0;
LAB_100a502dc:
      _memcpy(puVar15 + 0x59c0,puVar24 + 0x159,0x448);
      _memcpy(puVar15 + 0x5e08,puVar24 + 0x1e2,0x128);
      _memcpy(puVar15 + 0x1670,puVar15 + 0x59c0,0x570);
      _memcpy(puVar24 + 0x207,puVar15 + 0x1670,0x570);
      *(undefined1 *)(puVar24 + 0x2b5) = 0;
LAB_100a50348:
      _memcpy(puVar15 + 0x5ae8,puVar24 + 0x207,0x448);
      _memcpy(puVar15 + 0x59c0,puVar24 + 0x290,0x128);
      _memcpy(puVar15 + 0x2800,puVar15 + 0x59c0,0x570);
      _memcpy(puVar24 + 0x2b6,puVar15 + 0x2800,0x570);
LAB_100a503a8:
      *(byte **)(puVar15 + -0x18a8) = pbVar35;
      lVar17 = puVar24[0x2b6];
      puVar24[0x2b6] = 3;
      *(undefined8 **)(puVar15 + -0x18c0) = puVar24 + 0x159;
      *(undefined8 **)(puVar15 + -0x18b8) = puVar24 + 0x207;
      if (lVar17 == 3) {
        func_0x000108a079f0(&UNK_108ca1c5f,0x1e,&UNK_10b21da58);
        goto LAB_100a52e04;
      }
      *(long *)(puVar15 + 0x3f78) = lVar17;
      _memcpy(puVar15 + 0x3f80,puVar24 + 0x2b7,0x568);
      if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
        *(undefined8 *)(puVar15 + 0x54f8) = 0x1c;
        *(undefined **)(puVar15 + 0x5508) = &UNK_108ca77d7;
        *(undefined8 *)(puVar15 + 0x5510) = 0x47;
        *(undefined8 *)(puVar15 + 0x54b8) = 0;
        *(undefined **)(puVar15 + 0x54c0) = &UNK_108ca1c99;
        *(undefined8 *)(puVar15 + 0x54d0) = 0;
        *(undefined8 *)(puVar15 + 0x54c8) = 0x1c;
        *(undefined **)(puVar15 + 0x54f0) = &UNK_108ca1c99;
        *(char **)(puVar15 + 0x54d8) =
             "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/handshake.rs"
        ;
        *(undefined8 *)(puVar15 + 0x54e8) = 5;
        *(undefined8 *)(puVar15 + 0x54e0) = 0x5e;
        *(undefined8 *)(puVar15 + 0x5500) = 0x9000000001;
        puVar3 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_10b3c24c8;
        }
        puVar4 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar4 = &UNK_109adfc03;
        }
        (**(code **)(puVar3 + 0x20))(puVar4,puVar15 + 0x54b8);
      }
      _memcpy(puVar15 + 0x4fd0,puVar15 + 0x40a0,0x448);
      puVar22 = (undefined8 *)_malloc(0x40);
      if (puVar22 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
        goto LAB_100a52e04;
      }
      *(undefined8 *)(puVar15 + 0x54c0) = 0;
      puVar22[1] = 1;
      *puVar22 = 1;
      puVar22[2] = 0;
      puVar22[5] = 0;
      uVar19 = *(undefined8 *)(puVar15 + 0x54b8);
      puVar22[4] = *(undefined8 *)(puVar15 + 0x54c0);
      puVar22[3] = uVar19;
      puVar22[7] = 0;
      *(undefined8 **)(puVar15 + 0x4a80) = puVar22;
      puVar33 = (undefined8 *)_malloc(0x40);
      if (puVar33 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
        goto LAB_100a52e04;
      }
      *(undefined8 *)(puVar15 + 0x54c0) = 0;
      uVar19 = 1;
      puVar33[1] = 1;
      *puVar33 = 1;
      puVar33[2] = 0;
      puVar33[5] = 0;
      uVar36 = *(undefined8 *)(puVar15 + 0x54b8);
      puVar33[4] = *(undefined8 *)(puVar15 + 0x54c0);
      puVar33[3] = uVar36;
      puVar33[7] = 0;
      _memcpy(puVar15 + 0x54b8,puVar15 + 0x40a0,0x448);
      *(undefined8 **)(puVar15 + 0x5900) = puVar22;
      *(undefined8 **)(puVar15 + 0x5908) = puVar33;
      lVar30 = puVar22[4];
      if (lVar30 == 0) {
        puVar22[4] = 1;
      }
      if (lVar30 != 2) {
        plVar31 = *(long **)(puVar15 + -0x1888);
        if (lVar30 != 0) goto LAB_100a505f8;
        if ((undefined8 *)puVar22[2] == (undefined8 *)0x0) {
          lVar30 = plVar31[1];
LAB_100a5059c:
          auVar47 = (**(code **)*plVar31)(lVar30);
          uVar19 = auVar47._8_8_;
          if (puVar22[2] != 0) {
            (**(code **)(puVar22[2] + 0x18))(puVar22[3]);
          }
          *(undefined1 (*) [16])(puVar22 + 2) = auVar47;
        }
        else {
          lVar30 = plVar31[1];
          if (((undefined8 *)puVar22[2] != (undefined8 *)*plVar31) || (puVar22[3] != lVar30))
          goto LAB_100a5059c;
        }
        if (puVar22[4] == 1) {
          puVar22[4] = in_xzr;
          goto LAB_100a505f8;
        }
        lVar30 = puVar22[2];
        lVar39 = puVar22[3];
        puVar22[2] = 0;
        if (lVar30 != 0) {
          LOAcquire();
          puVar22[4] = in_xzr;
          LORelease();
          puVar34 = (undefined8 *)(lVar30 + 8);
          goto LAB_100a505f0;
        }
LAB_100a51ff8:
        func_0x000108a07a20(&UNK_10b398268);
        goto LAB_100a52e04;
      }
      plVar31 = *(long **)(puVar15 + -0x1888);
      lVar39 = plVar31[1];
      puVar34 = (undefined8 *)(*plVar31 + 0x10);
LAB_100a505f0:
      (*(code *)*puVar34)(lVar39);
LAB_100a505f8:
      auVar10._8_8_ = uVar19;
      auVar10._0_8_ = puVar22;
      auVar11._8_8_ = uVar19;
      auVar11._0_8_ = puVar22;
      auVar48._8_8_ = uVar19;
      auVar48._0_8_ = puVar22;
      lVar30 = puVar33[4];
      if (lVar30 == 0) {
        puVar33[4] = 1;
      }
      if (lVar30 == 2) {
        lVar30 = plVar31[1];
        puVar22 = (undefined8 *)(*plVar31 + 0x10);
LAB_100a506a0:
        (*(code *)*puVar22)(lVar30);
      }
      else {
        auVar10 = auVar11;
        if (lVar30 == 0) {
          if ((undefined8 *)puVar33[2] == (undefined8 *)0x0) {
            lVar30 = plVar31[1];
LAB_100a5064c:
            auVar48 = (**(code **)*plVar31)(lVar30);
            if (puVar33[2] != 0) {
              (**(code **)(puVar33[2] + 0x18))(puVar33[3]);
            }
            *(undefined1 (*) [16])(puVar33 + 2) = auVar48;
          }
          else {
            lVar30 = plVar31[1];
            if (((undefined8 *)puVar33[2] != (undefined8 *)*plVar31) || (puVar33[3] != lVar30))
            goto LAB_100a5064c;
          }
          auVar10 = auVar48;
          if (puVar33[4] != 1) {
            lVar39 = puVar33[2];
            lVar30 = puVar33[3];
            puVar33[2] = 0;
            if (lVar39 == 0) goto LAB_100a51ff8;
            LOAcquire();
            puVar33[4] = in_xzr;
            LORelease();
            puVar22 = (undefined8 *)(lVar39 + 8);
            goto LAB_100a506a0;
          }
          puVar33[4] = in_xzr;
        }
      }
      _memcpy(puVar15 + 0x45c8,puVar15 + 0x54b8,0x458);
      *(undefined8 *)(puVar15 + 0x44f8) = *(undefined8 *)(puVar15 + 0x3f88);
      *(undefined8 *)(puVar15 + 0x44f0) = *(undefined8 *)(puVar15 + 0x3f80);
      *(undefined8 *)(puVar15 + 0x4508) = *(undefined8 *)(puVar15 + 0x3f98);
      *(undefined8 *)(puVar15 + 0x4500) = *(undefined8 *)(puVar15 + 0x3f90);
      *(undefined8 *)(puVar15 + 0x4598) = *(undefined8 *)(puVar15 + 0x4028);
      *(undefined8 *)(puVar15 + 0x4590) = *(undefined8 *)(puVar15 + 0x4020);
      *(undefined8 *)(puVar15 + 0x45a8) = *(undefined8 *)(puVar15 + 0x4038);
      *(undefined8 *)(puVar15 + 0x45a0) = *(undefined8 *)(puVar15 + 0x4030);
      *(undefined8 *)(puVar15 + 0x45b8) = *(undefined8 *)(puVar15 + 0x4048);
      *(undefined8 *)(puVar15 + 0x45b0) = *(undefined8 *)(puVar15 + 0x4040);
      *(undefined8 *)(puVar15 + 0x4558) = *(undefined8 *)(puVar15 + 0x3fe8);
      *(undefined8 *)(puVar15 + 0x4550) = *(undefined8 *)(puVar15 + 0x3fe0);
      *(undefined8 *)(puVar15 + 0x4568) = *(undefined8 *)(puVar15 + 0x3ff8);
      *(undefined8 *)(puVar15 + 0x4560) = *(undefined8 *)(puVar15 + 0x3ff0);
      *(undefined8 *)(puVar15 + 0x4578) = *(undefined8 *)(puVar15 + 0x4008);
      *(undefined8 *)(puVar15 + 0x4570) = *(undefined8 *)(puVar15 + 0x4000);
      *(undefined8 *)(puVar15 + 0x4588) = *(undefined8 *)(puVar15 + 0x4018);
      *(undefined8 *)(puVar15 + 0x4580) = *(undefined8 *)(puVar15 + 0x4010);
      *(undefined8 *)(puVar15 + 0x4518) = *(undefined8 *)(puVar15 + 0x3fa8);
      *(undefined8 *)(puVar15 + 0x4510) = *(undefined8 *)(puVar15 + 0x3fa0);
      *(undefined8 *)(puVar15 + 0x4528) = *(undefined8 *)(puVar15 + 0x3fb8);
      *(undefined8 *)(puVar15 + 0x4520) = *(undefined8 *)(puVar15 + 0x3fb0);
      *(undefined8 *)(puVar15 + 0x4538) = *(undefined8 *)(puVar15 + 0x3fc8);
      *(undefined8 *)(puVar15 + 0x4530) = *(undefined8 *)(puVar15 + 0x3fc0);
      *(undefined8 *)(puVar15 + 0x4548) = *(undefined8 *)(puVar15 + 0x3fd8);
      *(undefined8 *)(puVar15 + 0x4540) = *(undefined8 *)(puVar15 + 0x3fd0);
      *(undefined8 *)(puVar15 + 0x45c0) = *(undefined8 *)(puVar15 + 0x4050);
      *(long *)(puVar15 + 0x44e8) = lVar17;
      *(undefined8 *)(puVar15 + 0x4a48) = *(undefined8 *)(puVar15 + 0x4080);
      *(undefined8 *)(puVar15 + 0x4a40) = *(undefined8 *)(puVar15 + 0x4078);
      *(undefined8 *)(puVar15 + 0x4a58) = *(undefined8 *)(puVar15 + 0x4090);
      *(undefined8 *)(puVar15 + 0x4a50) = *(undefined8 *)(puVar15 + 0x4088);
      *(undefined8 *)(puVar15 + 0x4a60) = *(undefined8 *)(puVar15 + 0x4098);
      *(undefined8 *)(puVar15 + 19000) = *(undefined8 *)(puVar15 + 0x4070);
      *(undefined8 *)(puVar15 + 0x4a30) = *(undefined8 *)(puVar15 + 0x4068);
      *(undefined8 *)(puVar15 + 0x4a28) = *(undefined8 *)(puVar15 + 0x4060);
      *(undefined8 *)(puVar15 + 0x4a20) = *(undefined8 *)(puVar15 + 0x4058);
      if (puVar15[0x45a0] == '\x01') {
        if ((byte)puVar15[0x45c0] < 2) {
          uVar38 = 0;
          uVar41 = 0xe;
          uVar28 = 4;
          goto LAB_100a507b4;
        }
        if ((byte)puVar15[0x4548] < 2) {
LAB_100a507a8:
          uVar38 = 0;
          uVar41 = 3;
          uVar28 = 0;
          goto LAB_100a507b4;
        }
        psVar6 = *(short **)(*(long *)(puVar15 + 0x4550) + 8);
        lVar17 = *(long *)(*(long *)(puVar15 + 0x4550) + 0x10);
        if (lVar17 == 3) {
          if (*psVar6 != 0x7377 || (char)psVar6[1] != 's') goto LAB_100a507a8;
        }
        else if ((lVar17 != 2) || (*psVar6 != 0x7377)) goto LAB_100a507a8;
        __ZN11tungstenite9handshake6client33extract_subprotocols_from_request17he12315174a15ed6fE
                  (puVar15 + 0x4a80,puVar15 + 0x44e8);
        uVar41 = *(ulong *)(puVar15 + 0x4a80);
        uVar38 = *(ulong *)(puVar15 + 0x4a88);
        uVar19 = *(undefined8 *)*(undefined1 (*) [16])(puVar15 + 0x4a90);
        lVar17 = *(long *)(puVar15 + 0x4a98);
        auVar10 = *(undefined1 (*) [16])(puVar15 + 0x4a90);
        uVar28 = uVar38;
        if (uVar41 != 0x15) goto LAB_100a507b4;
        *(ulong *)(puVar15 + 0x4a68) = uVar38;
        *(undefined8 *)(puVar15 + -0x18d0) = uVar19;
        *(undefined8 *)(puVar15 + 0x4a70) = uVar19;
        *(long *)(puVar15 + 0x4a78) = lVar17;
        *(undefined8 *)(puVar15 + 0x4b28) = *(undefined8 *)(puVar15 + 0x4590);
        *(undefined8 *)(puVar15 + 0x4b20) = *(undefined8 *)(puVar15 + 0x4588);
        *(undefined8 *)(puVar15 + 0x4b38) = *(undefined8 *)(puVar15 + 0x45a0);
        *(undefined8 *)(puVar15 + 0x4b30) = *(undefined8 *)(puVar15 + 0x4598);
        *(undefined8 *)(puVar15 + 0x4b48) = *(undefined8 *)(puVar15 + 0x45b0);
        *(undefined8 *)(puVar15 + 0x4b40) = *(undefined8 *)(puVar15 + 0x45a8);
        *(undefined8 *)(puVar15 + 0x4b58) = *(undefined8 *)(puVar15 + 0x45c0);
        *(undefined8 *)(puVar15 + 0x4b50) = *(undefined8 *)(puVar15 + 0x45b8);
        *(undefined8 *)(puVar15 + 0x4ae8) = *(undefined8 *)(puVar15 + 0x4550);
        *(undefined8 *)(puVar15 + 0x4ae0) = *(undefined8 *)(puVar15 + 0x4548);
        *(undefined8 *)(puVar15 + 0x4af8) = *(undefined8 *)(puVar15 + 0x4560);
        *(undefined8 *)(puVar15 + 0x4af0) = *(undefined8 *)(puVar15 + 0x4558);
        *(undefined8 *)(puVar15 + 0x4b08) = *(undefined8 *)(puVar15 + 0x4570);
        *(undefined8 *)(puVar15 + 0x4b00) = *(undefined8 *)(puVar15 + 0x4568);
        *(undefined8 *)(puVar15 + 0x4b18) = *(undefined8 *)(puVar15 + 0x4580);
        *(undefined8 *)(puVar15 + 0x4b10) = *(undefined8 *)(puVar15 + 0x4578);
        *(undefined8 *)(puVar15 + 0x4aa8) = *(undefined8 *)(puVar15 + 0x4510);
        *(undefined8 *)(puVar15 + 0x4aa0) = *(undefined8 *)(puVar15 + 0x4508);
        *(undefined8 *)(puVar15 + 0x4ab8) = *(undefined8 *)(puVar15 + 0x4520);
        *(undefined8 *)(puVar15 + 0x4ab0) = *(undefined8 *)(puVar15 + 0x4518);
        *(undefined8 *)(puVar15 + 0x4ac8) = *(undefined8 *)(puVar15 + 0x4530);
        *(undefined8 *)(puVar15 + 0x4ac0) = *(undefined8 *)(puVar15 + 0x4528);
        *(undefined8 *)(puVar15 + 0x4ad8) = *(undefined8 *)(puVar15 + 0x4540);
        *(undefined8 *)(puVar15 + 0x4ad0) = *(undefined8 *)(puVar15 + 0x4538);
        puVar29 = (undefined1 *)0x0;
        if (*(long *)(puVar15 + 0x4a20) != 2) {
          puVar29 = puVar15 + 0x4a40;
        }
        *(undefined8 *)(puVar15 + 0x4a88) = *(undefined8 *)(puVar15 + 0x44f0);
        *(undefined8 *)(puVar15 + 0x4a80) = *(undefined8 *)(puVar15 + 0x44e8);
        *(undefined8 *)(puVar15 + 0x4a98) = *(undefined8 *)(puVar15 + 0x4500);
        *(undefined8 *)(puVar15 + 0x4a90) = *(undefined8 *)(puVar15 + 0x44f8);
        __ZN11tungstenite9handshake6client16generate_request17h607661f37f78e8d4E
                  (puVar15 + 0x4f10,puVar15 + 0x4a80,puVar29);
        lVar30 = *(long *)(puVar15 + 0x4f10);
        uVar41 = *(ulong *)(puVar15 + 0x4f18);
        uVar28 = *(ulong *)(puVar15 + 0x4f20);
        pauVar1 = (undefined1 (*) [16])(puVar15 + 0x4f28);
        lVar39 = *(long *)*pauVar1;
        uVar19 = *(undefined8 *)(puVar15 + 0x4f30);
        auVar48 = *pauVar1;
        auVar47 = *pauVar1;
        if (lVar30 == -0x8000000000000000) {
          uVar40 = uVar28;
          auVar10 = *pauVar1;
          if (uVar38 != 0x8000000000000000) {
            if (lVar17 != 0) {
              puVar22 = (undefined8 *)(*(long *)(puVar15 + -0x18d0) + 8);
              do {
                if (puVar22[-1] != 0) {
                  _free(*puVar22);
                }
                puVar22 = puVar22 + 3;
                lVar17 = lVar17 + -1;
              } while (lVar17 != 0);
            }
            auVar10 = auVar47;
            if (uVar38 != 0) {
              _free(*(undefined8 *)(puVar15 + -0x18d0));
              auVar10 = auVar48;
            }
          }
          goto LAB_100a507c8;
        }
        uVar36 = *(undefined8 *)(puVar15 + 0x4f38);
        *(ulong *)(puVar15 + 0x4ee8) = uVar41;
        *(ulong *)(puVar15 + 0x4ef0) = uVar28;
        _memcpy(puVar15 + 0x4a80,puVar15 + 0x45c8,0x458);
        *(undefined8 *)(puVar15 + 0x4ed8) = 0x8000000000000000;
        *(long *)(puVar15 + 0x4ee0) = lVar30;
        *(undefined8 *)(puVar15 + 0x4ef8) = 0;
        __ZN11tungstenite9handshake17derive_accept_key17hbe39cd64f0d06524E
                  (puVar15 + 0x4f88,uVar19,uVar36);
        *(undefined8 *)(puVar15 + 0x4fc0) = *(undefined8 *)(puVar15 + 0x4a70);
        *(undefined8 *)(puVar15 + 0x4fb8) = *(undefined8 *)(puVar15 + 0x4a68);
        *(undefined8 *)(puVar15 + 0x4fc8) = *(undefined8 *)(puVar15 + 0x4a78);
        *(undefined8 *)(puVar15 + 0x4fb0) = *(undefined8 *)(puVar15 + 0x4f98);
        *(undefined8 *)(puVar15 + 0x4fa8) = *(undefined8 *)(puVar15 + 0x4f90);
        *(undefined8 *)(puVar15 + 0x4fa0) = *(undefined8 *)(puVar15 + 0x4f88);
        *(undefined8 *)(puVar15 + 0x4f60) = *(undefined8 *)(puVar15 + 0x4f90);
        *(undefined8 *)(puVar15 + 0x4f58) = *(undefined8 *)(puVar15 + 0x4f88);
        *(undefined8 *)(puVar15 + 0x4f70) = *(undefined8 *)(puVar15 + 0x4fb8);
        *(undefined8 *)(puVar15 + 0x4f68) = *(undefined8 *)(puVar15 + 0x4fb0);
        *(undefined8 *)(puVar15 + 0x4f80) = *(undefined8 *)(puVar15 + 0x4fc8);
        *(undefined8 *)(puVar15 + 0x4f78) = *(undefined8 *)(puVar15 + 0x4fc0);
        *(undefined8 *)(puVar15 + 0x4f50) = *(undefined8 *)(puVar15 + 0x4098);
        *(undefined8 *)(puVar15 + 0x4f48) = *(undefined8 *)(puVar15 + 0x4090);
        *(undefined8 *)(puVar15 + 0x4f40) = *(undefined8 *)(puVar15 + 0x4088);
        *(undefined8 *)(puVar15 + 0x4f38) = *(undefined8 *)(puVar15 + 0x4080);
        *(undefined8 *)(puVar15 + 0x4f30) = *(undefined8 *)(puVar15 + 0x4078);
        *(undefined8 *)(puVar15 + 0x4f18) = *(undefined8 *)(puVar15 + 0x4060);
        *(undefined8 *)(puVar15 + 0x4f10) = *(undefined8 *)(puVar15 + 0x4058);
        *(undefined8 *)(puVar15 + 0x4f28) = *(undefined8 *)(puVar15 + 0x4070);
        *(undefined8 *)(puVar15 + 0x4f20) = *(undefined8 *)(puVar15 + 0x4068);
        if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
          *(undefined **)(puVar15 + 0x4fa0) = &UNK_108ca7810;
          *(undefined8 *)(puVar15 + 0x4fa8) = 0x1e;
          *(undefined **)(puVar15 + 0x4fb0) = &UNK_108ca7810;
          *(undefined8 *)(puVar15 + 0x4fb8) = 0x1e;
          *(undefined **)(puVar15 + 0x4fc0) = &UNK_10b21eeb8;
          FUN_100c2f260(&UNK_108caa976,0x37,5,puVar15 + 0x4fa0);
        }
        lVar17 = *(long *)(puVar15 + 0x4f10);
        uVar41 = *(ulong *)(puVar15 + 0x4f18);
        uVar28 = *(ulong *)(puVar15 + 0x4f20);
        uVar36 = *(undefined8 *)(puVar15 + 0x4f28);
        *(undefined8 *)(puVar15 + -0x18d0) = *(undefined8 *)(puVar15 + 0x4f30);
        *(undefined8 *)(puVar15 + 0x4ff8) = *(undefined8 *)(puVar15 + 0x4f60);
        *(undefined8 *)(puVar15 + 0x4ff0) = *(undefined8 *)(puVar15 + 0x4f58);
        *(undefined8 *)(puVar15 + 0x5008) = *(undefined8 *)(puVar15 + 0x4f70);
        *(undefined8 *)(puVar15 + 0x5000) = *(undefined8 *)(puVar15 + 0x4f68);
        *(undefined8 *)(puVar15 + 0x5018) = *(undefined8 *)(puVar15 + 0x4f80);
        *(undefined8 *)(puVar15 + 0x5010) = *(undefined8 *)(puVar15 + 0x4f78);
        *(undefined8 *)(puVar15 + 0x4fe8) = *(undefined8 *)(puVar15 + 0x4f50);
        *(undefined8 *)(puVar15 + 0x4fe0) = *(undefined8 *)(puVar15 + 0x4f48);
        *(undefined8 *)(puVar15 + 0x4fd8) = *(undefined8 *)(puVar15 + 0x4f40);
        *(undefined8 *)(puVar15 + 0x4fd0) = *(undefined8 *)(puVar15 + 0x4f38);
        _memcpy(puVar15 + 0x5020,puVar15 + 0x4a80,0x490);
        if (lVar39 != 0) {
          _free(uVar19);
        }
        if (lVar17 == 3) {
          auVar10._8_8_ = *(undefined8 *)(puVar15 + -0x18d0);
          auVar10._0_8_ = uVar36;
          uVar40 = uVar28;
          goto LAB_100a507d4;
        }
        _memcpy(puVar15 + 0x54e0,puVar15 + 0x4fd0,0x4e0);
        *(long *)(puVar15 + 0x54b8) = lVar17;
        *(ulong *)(puVar15 + 0x54c0) = uVar41;
        *(ulong *)(puVar15 + 0x54c8) = uVar28;
        *(undefined8 *)(puVar15 + 0x54d0) = uVar36;
        *(undefined8 *)(puVar15 + 0x54d8) = *(undefined8 *)(puVar15 + -0x18d0);
        FUN_1006ff450(puVar15 + 0x59c0,puVar15 + 0x54b8);
        lVar17 = *(long *)(puVar15 + 0x59c0);
        uVar28 = *(ulong *)(puVar15 + 0x59c8);
        if (lVar17 == 2) {
          lVar17 = 2;
          if (uVar28 == 3) {
            lVar17 = 3;
          }
          uVar41 = *(ulong *)(puVar15 + 0x59d0);
          unaff_x27 = *(ulong *)(puVar15 + 23000);
          auVar10 = *(undefined1 (*) [16])(puVar15 + 0x59e0);
          goto LAB_100a507e0;
        }
        uVar41 = *(ulong *)(puVar15 + 0x59d0);
        unaff_x27 = *(ulong *)(puVar15 + 23000);
        auVar10 = *(undefined1 (*) [16])(puVar15 + 0x59e0);
        _memcpy(puVar15 + 0x2e90,puVar15 + 0x59f0,0x4e0);
        _memcpy(puVar15 + 0x2d70,puVar15 + 0x5ed0,0x120);
        if (lVar17 != 4) goto LAB_100a507fc;
        uVar25 = 3;
LAB_100a50cfc:
        *(undefined1 *)(puVar24 + 0x2b5) = uVar25;
        puVar29 = *(undefined1 **)(puVar15 + -0x18a8);
        *puVar29 = 3;
        puVar29[8] = 3;
        uVar25 = 6;
        goto LAB_100a50d18;
      }
      uVar38 = 0;
      uVar41 = 0xe;
      uVar28 = 3;
LAB_100a507b4:
      FUN_100de01d8(puVar15 + 0x44e8);
      uVar40 = uVar38;
LAB_100a507c8:
      FUN_100d4014c(puVar15 + 0x45c8);
LAB_100a507d4:
      unaff_x27 = uVar40 & 0xffffffffffffff00 | uVar28 & 0xff;
      uVar28 = 3;
      lVar17 = 3;
LAB_100a507e0:
      _memcpy(puVar15 + 0x2e90,puVar15 + 0x59f0,0x4e0);
LAB_100a507fc:
      _memcpy(puVar15 + 0x3490,puVar15 + 0x2e90,0x4e0);
      _memcpy(puVar15 + 0x3370,puVar15 + 0x2d70,0x120);
      FUN_100ddb894(puVar24 + 0x2b6);
      if (lVar17 == 3) {
        puVar24[0x41e] = uVar28;
        puVar24[0x41f] = uVar41;
        puVar24[0x420] = unaff_x27;
        *(undefined1 (*) [16])(puVar24 + 0x421) = auVar10;
        _memcpy(puVar24 + 0x423,puVar15 + 0x3490,0x4e0);
        puVar24[0x41d] = 3;
        _memcpy(puVar15 + 15000,puVar15 + 0x3490,0x4e0);
        lVar17 = 2;
      }
      else {
        puVar24[0x41d] = lVar17;
        puVar24[0x41e] = uVar28;
        puVar24[0x41f] = uVar41;
        puVar24[0x420] = unaff_x27;
        *(undefined1 (*) [16])(puVar24 + 0x421) = auVar10;
        _memcpy(puVar24 + 0x423,puVar15 + 0x3490,0x4e0);
        _memcpy(puVar24 + 0x4bf,puVar15 + 0x3370,0x120);
        _memcpy(puVar24 + 0x357,puVar24 + 0x41d,0x630);
        lVar17 = puVar24[0x357];
        if (lVar17 == 2) {
          puVar24[0x2b6] = uVar28;
          puVar24[0x2b7] = uVar41;
          puVar24[0x2b8] = unaff_x27;
          *(undefined1 (*) [16])(puVar24 + 0x2b9) = auVar10;
          _memcpy(puVar24 + 699,puVar15 + 0x3490,0x4e0);
          puVar22 = *(undefined8 **)(puVar15 + -0x18c0);
          puVar33 = *(undefined8 **)(puVar15 + -0x18b8);
LAB_100a50930:
          puVar24[0x2b6] = 3;
          if (uVar28 == 3) {
            func_0x000108a079f0(&UNK_108ca1c5f,0x1e,&UNK_10b2094b0);
            goto LAB_100a52e04;
          }
          *(ulong *)(puVar15 + 0x54b8) = uVar28;
          _memcpy(puVar15 + 0x54c0,puVar24 + 0x2b7,0x500);
          if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
            *(undefined8 *)(puVar15 + 0x3fb8) = 0x1c;
            *(undefined **)(puVar15 + 0x3fc8) = &UNK_108ca1c7d;
            *(undefined8 *)(puVar15 + 0x3fd0) = 0x39;
            *(undefined8 *)(puVar15 + 0x3f78) = 0;
            *(undefined **)(puVar15 + 0x3f80) = &UNK_108ca1c99;
            *(undefined8 *)(puVar15 + 0x3f90) = 0;
            *(undefined8 *)(puVar15 + 0x3f88) = 0x1c;
            *(undefined **)(puVar15 + 0x3fb0) = &UNK_108ca1c99;
            *(char **)(puVar15 + 0x3f98) =
                 "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/handshake.rs"
            ;
            *(undefined8 *)(puVar15 + 0x3fa8) = 5;
            *(undefined8 *)(puVar15 + 0x3fa0) = 0x5e;
            *(undefined8 *)(puVar15 + 0x3fc0) = 0xa700000001;
            puVar3 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar3 = &UNK_10b3c24c8;
            }
            puVar4 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar4 = &UNK_109adfc03;
            }
            (**(code **)(puVar3 + 0x20))(puVar4,puVar15 + 0x3f78);
          }
          lVar30 = *(long *)(puVar15 + 0x5978);
          lVar39 = *(long *)(puVar15 + 0x5980);
          lVar17 = *(long *)(lVar30 + 0x20);
          if (lVar17 == 0) {
            *(long *)(lVar30 + 0x20) = 1;
          }
          if (lVar17 != 2) {
            if (lVar17 != 0) goto LAB_100a50be4;
            plVar31 = *(long **)(puVar15 + -0x1888);
            if (*(undefined8 **)(lVar30 + 0x10) == (undefined8 *)0x0) {
              lVar17 = plVar31[1];
LAB_100a50b88:
              auVar47 = (**(code **)*plVar31)(lVar17);
              if (*(long *)(lVar30 + 0x10) != 0) {
                (**(code **)(*(long *)(lVar30 + 0x10) + 0x18))(*(undefined8 *)(lVar30 + 0x18));
              }
              *(undefined1 (*) [16])(lVar30 + 0x10) = auVar47;
            }
            else {
              lVar17 = plVar31[1];
              if ((*(undefined8 **)(lVar30 + 0x10) != (undefined8 *)*plVar31) ||
                 (*(long *)(lVar30 + 0x18) != lVar17)) goto LAB_100a50b88;
            }
            if (*(long *)(lVar30 + 0x20) == 1) {
              *(long *)(lVar30 + 0x20) = in_xzr;
              goto LAB_100a50be4;
            }
            lVar17 = *(long *)(lVar30 + 0x10);
            lVar23 = *(long *)(lVar30 + 0x18);
            *(undefined8 *)(lVar30 + 0x10) = 0;
            if (lVar17 != 0) {
              LOAcquire();
              *(long *)(lVar30 + 0x20) = in_xzr;
              LORelease();
              puVar34 = (undefined8 *)(lVar17 + 8);
              goto LAB_100a50bdc;
            }
LAB_100a520a8:
            func_0x000108a07a20(&UNK_10b398268);
LAB_100a52e04:
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100a52e08);
            (*pcVar14)();
          }
          lVar23 = (*(long **)(puVar15 + -0x1888))[1];
          puVar34 = (undefined8 *)(**(long **)(puVar15 + -0x1888) + 0x10);
LAB_100a50bdc:
          (*(code *)*puVar34)(lVar23);
LAB_100a50be4:
          lVar17 = *(long *)(lVar39 + 0x20);
          if (lVar17 == 0) {
            *(long *)(lVar39 + 0x20) = 1;
          }
          if (lVar17 == 2) {
            lVar17 = (*(long **)(puVar15 + -0x1888))[1];
            puVar34 = (undefined8 *)(**(long **)(puVar15 + -0x1888) + 0x10);
LAB_100a50c94:
            (*(code *)*puVar34)(lVar17);
          }
          else if (lVar17 == 0) {
            plVar31 = *(long **)(puVar15 + -0x1888);
            if (*(undefined8 **)(lVar39 + 0x10) == (undefined8 *)0x0) {
              lVar17 = plVar31[1];
LAB_100a50c40:
              auVar47 = (**(code **)*plVar31)(lVar17);
              if (*(long *)(lVar39 + 0x10) != 0) {
                (**(code **)(*(long *)(lVar39 + 0x10) + 0x18))(*(undefined8 *)(lVar39 + 0x18));
              }
              *(undefined1 (*) [16])(lVar39 + 0x10) = auVar47;
            }
            else {
              lVar17 = plVar31[1];
              if ((*(undefined8 **)(lVar39 + 0x10) != (undefined8 *)*plVar31) ||
                 (*(long *)(lVar39 + 0x18) != lVar17)) goto LAB_100a50c40;
            }
            if (*(long *)(lVar39 + 0x20) != 1) {
              lVar30 = *(long *)(lVar39 + 0x10);
              lVar17 = *(long *)(lVar39 + 0x18);
              *(undefined8 *)(lVar39 + 0x10) = 0;
              if (lVar30 == 0) goto LAB_100a520a8;
              LOAcquire();
              *(long *)(lVar39 + 0x20) = in_xzr;
              LORelease();
              puVar34 = (undefined8 *)(lVar30 + 8);
              goto LAB_100a50c94;
            }
            *(long *)(lVar39 + 0x20) = in_xzr;
          }
          _memcpy(puVar15 + 0x3f78,puVar15 + 0x54b8,0x508);
          FUN_1006ff450(puVar15 + 0x59c0,puVar15 + 0x3f78);
          lVar17 = *(long *)(puVar15 + 0x59c0);
          uVar28 = *(ulong *)(puVar15 + 0x59c8);
          if ((lVar17 == 2) && (uVar28 != 3)) {
            _memcpy(puVar24 + 0x2b6,puVar15 + 0x59c8,0x508);
            uVar25 = 4;
            goto LAB_100a50cfc;
          }
          *(undefined8 **)(puVar15 + -0x18c0) = puVar22;
          *(undefined8 **)(puVar15 + -0x18b8) = puVar33;
          uVar41 = *(ulong *)(puVar15 + 0x59d0);
          unaff_x27 = *(ulong *)(puVar15 + 23000);
          auVar47 = *(undefined1 (*) [16])(puVar15 + 0x59e0);
          auVar10 = *(undefined1 (*) [16])(puVar15 + 0x59e0);
          _memcpy(puVar15 + 15000,puVar15 + 0x59f0,0x4e0);
          *(undefined8 *)(puVar15 + 0x3a68) = *(undefined8 *)(puVar15 + 0x5f38);
          *(undefined8 *)(puVar15 + 0x3a60) = *(undefined8 *)(puVar15 + 0x5f30);
          *(undefined8 *)(puVar15 + 0x3a78) = *(undefined8 *)(puVar15 + 0x5f48);
          *(undefined8 *)(puVar15 + 0x3a70) = *(undefined8 *)(puVar15 + 0x5f40);
          *(undefined8 *)(puVar15 + 0x3a88) = *(undefined8 *)(puVar15 + 0x5f58);
          *(undefined8 *)(puVar15 + 0x3a80) = *(undefined8 *)(puVar15 + 0x5f50);
          *(undefined8 *)(puVar15 + 0x3a90) = *(undefined8 *)(puVar15 + 0x5f60);
          *(undefined8 *)(puVar15 + 0x3a28) = *(undefined8 *)(puVar15 + 0x5ef8);
          *(undefined8 *)(puVar15 + 0x3a20) = *(undefined8 *)(puVar15 + 0x5ef0);
          *(undefined8 *)(puVar15 + 0x3a38) = *(undefined8 *)(puVar15 + 0x5f08);
          *(undefined8 *)(puVar15 + 0x3a30) = *(undefined8 *)(puVar15 + 0x5f00);
          *(undefined8 *)(puVar15 + 0x3a48) = *(undefined8 *)(puVar15 + 0x5f18);
          *(undefined8 *)(puVar15 + 0x3a40) = *(undefined8 *)(puVar15 + 0x5f10);
          *(undefined8 *)(puVar15 + 0x3a58) = *(undefined8 *)(puVar15 + 0x5f28);
          *(undefined8 *)(puVar15 + 0x3a50) = *(undefined8 *)(puVar15 + 0x5f20);
          *(undefined8 *)(puVar15 + 0x3a08) = *(undefined8 *)(puVar15 + 0x5ed8);
          *(undefined8 *)(puVar15 + 0x3a00) = *(undefined8 *)(puVar15 + 0x5ed0);
          *(undefined8 *)(puVar15 + 0x3a18) = *(undefined8 *)(puVar15 + 0x5ee8);
          *(undefined8 *)(puVar15 + 0x3a10) = *(undefined8 *)(puVar15 + 0x5ee0);
          *(undefined8 *)(puVar15 + 0x39d8) = *(undefined8 *)(puVar15 + 0x5fd0);
          *(undefined8 *)(puVar15 + 0x39d0) = *(undefined8 *)(puVar15 + 0x5fc8);
          *(undefined8 *)(puVar15 + 0x39e8) = *(undefined8 *)(puVar15 + 0x5fe0);
          *(undefined8 *)(puVar15 + 0x39e0) = *(undefined8 *)(puVar15 + 0x5fd8);
          *(undefined8 *)(puVar15 + 0x39f0) = *(undefined8 *)(puVar15 + 0x5fe8);
          *(undefined8 *)(puVar15 + 0x3998) = *(undefined8 *)(puVar15 + 0x5f90);
          *(undefined8 *)(puVar15 + 0x3990) = *(undefined8 *)(puVar15 + 0x5f88);
          *(undefined8 *)(puVar15 + 0x39a8) = *(undefined8 *)(puVar15 + 0x5fa0);
          *(undefined8 *)(puVar15 + 0x39a0) = *(undefined8 *)(puVar15 + 0x5f98);
          *(undefined8 *)(puVar15 + 0x39c8) = *(undefined8 *)(puVar15 + 0x5fc0);
          *(undefined8 *)(puVar15 + 0x39c0) = *(undefined8 *)(puVar15 + 0x5fb8);
          *(undefined8 *)(puVar15 + 0x39b8) = *(undefined8 *)(puVar15 + 0x5fb0);
          *(undefined8 *)(puVar15 + 0x39b0) = *(undefined8 *)(puVar15 + 0x5fa8);
          *(undefined8 *)(puVar15 + 0x3988) = *(undefined8 *)(puVar15 + 0x5f80);
          *(undefined8 *)(puVar15 + 0x3980) = *(undefined8 *)(puVar15 + 0x5f78);
          *(undefined8 *)(puVar15 + 0x3978) = *(undefined8 *)(puVar15 + 0x5f70);
          *(undefined8 *)(puVar15 + 0x3970) = *(undefined8 *)(puVar15 + 0x5f68);
          if (puVar24[0x2b6] != 3) {
            FUN_100da966c(puVar24 + 0x2b6);
            auVar10 = auVar47;
          }
        }
        else {
          _memcpy(puVar15 + 15000,puVar15 + 0x3490,0x4e0);
          *(undefined8 *)(puVar15 + 0x3a90) = *(undefined8 *)(puVar15 + 0x3400);
          *(undefined8 *)(puVar15 + 0x3a68) = *(undefined8 *)(puVar15 + 0x33d8);
          *(undefined8 *)(puVar15 + 0x3a60) = *(undefined8 *)(puVar15 + 0x33d0);
          *(undefined8 *)(puVar15 + 0x3a78) = *(undefined8 *)(puVar15 + 0x33e8);
          *(undefined8 *)(puVar15 + 0x3a70) = *(undefined8 *)(puVar15 + 0x33e0);
          *(undefined8 *)(puVar15 + 0x3a88) = *(undefined8 *)(puVar15 + 0x33f8);
          *(undefined8 *)(puVar15 + 0x3a80) = *(undefined8 *)(puVar15 + 0x33f0);
          *(undefined8 *)(puVar15 + 0x3a28) = *(undefined8 *)(puVar15 + 0x3398);
          *(undefined8 *)(puVar15 + 0x3a20) = *(undefined8 *)(puVar15 + 0x3390);
          *(undefined8 *)(puVar15 + 0x3a38) = *(undefined8 *)(puVar15 + 0x33a8);
          *(undefined8 *)(puVar15 + 0x3a30) = *(undefined8 *)(puVar15 + 0x33a0);
          *(undefined8 *)(puVar15 + 0x3a48) = *(undefined8 *)(puVar15 + 0x33b8);
          *(undefined8 *)(puVar15 + 0x3a40) = *(undefined8 *)(puVar15 + 0x33b0);
          *(undefined8 *)(puVar15 + 0x3a58) = *(undefined8 *)(puVar15 + 0x33c8);
          *(undefined8 *)(puVar15 + 0x3a50) = *(undefined8 *)(puVar15 + 0x33c0);
          *(undefined8 *)(puVar15 + 0x3a08) = *(undefined8 *)(puVar15 + 0x3378);
          *(undefined8 *)(puVar15 + 0x3a00) = *(undefined8 *)(puVar15 + 0x3370);
          *(undefined8 *)(puVar15 + 0x3a18) = *(undefined8 *)(puVar15 + 0x3388);
          *(undefined8 *)(puVar15 + 0x3a10) = *(undefined8 *)(puVar15 + 0x3380);
          *(undefined8 *)(puVar15 + 0x39d8) = *(undefined8 *)(puVar15 + 0x3470);
          *(undefined8 *)(puVar15 + 0x39d0) = *(undefined8 *)(puVar15 + 0x3468);
          *(undefined8 *)(puVar15 + 0x39e8) = *(undefined8 *)(puVar15 + 0x3480);
          *(undefined8 *)(puVar15 + 0x39e0) = *(undefined8 *)(puVar15 + 0x3478);
          *(undefined8 *)(puVar15 + 0x39f0) = *(undefined8 *)(puVar15 + 0x3488);
          *(undefined8 *)(puVar15 + 0x3998) = *(undefined8 *)(puVar15 + 0x3430);
          *(undefined8 *)(puVar15 + 0x3990) = *(undefined8 *)(puVar15 + 0x3428);
          *(undefined8 *)(puVar15 + 0x39a8) = *(undefined8 *)(puVar15 + 0x3440);
          *(undefined8 *)(puVar15 + 0x39a0) = *(undefined8 *)(puVar15 + 0x3438);
          *(undefined8 *)(puVar15 + 0x39c8) = *(undefined8 *)(puVar15 + 0x3460);
          *(undefined8 *)(puVar15 + 0x39c0) = *(undefined8 *)(puVar15 + 0x3458);
          *(undefined8 *)(puVar15 + 0x39b8) = *(undefined8 *)(puVar15 + 0x3450);
          *(undefined8 *)(puVar15 + 0x39b0) = *(undefined8 *)(puVar15 + 0x3448);
          *(undefined8 *)(puVar15 + 0x3988) = *(undefined8 *)(puVar15 + 0x3420);
          *(undefined8 *)(puVar15 + 0x3980) = *(undefined8 *)(puVar15 + 0x3418);
          *(undefined8 *)(puVar15 + 0x3978) = *(undefined8 *)(puVar15 + 0x3410);
          *(undefined8 *)(puVar15 + 0x3970) = *(undefined8 *)(puVar15 + 0x3408);
        }
      }
      puVar22 = auVar10._8_8_;
      auVar13._8_8_ = auVar10._0_8_;
      auVar13._0_8_ = unaff_x27;
      auVar12._8_8_ = auVar10._0_8_;
      auVar12._0_8_ = unaff_x27;
      _memcpy(puVar15 + 0x1d10,puVar15 + 15000,0x4e0);
      *(undefined8 *)(puVar15 + 0x1cd8) = *(undefined8 *)(puVar15 + 0x3a68);
      *(undefined8 *)(puVar15 + 0x1cd0) = *(undefined8 *)(puVar15 + 0x3a60);
      *(undefined8 *)(puVar15 + 0x1ce8) = *(undefined8 *)(puVar15 + 0x3a78);
      *(undefined8 *)(puVar15 + 0x1ce0) = *(undefined8 *)(puVar15 + 0x3a70);
      *(undefined8 *)(puVar15 + 0x1cf8) = *(undefined8 *)(puVar15 + 0x3a88);
      *(undefined8 *)(puVar15 + 0x1cf0) = *(undefined8 *)(puVar15 + 0x3a80);
      *(undefined8 *)(puVar15 + 0x1d00) = *(undefined8 *)(puVar15 + 0x3a90);
      *(undefined8 *)(puVar15 + 0x1c98) = *(undefined8 *)(puVar15 + 0x3a28);
      *(undefined8 *)(puVar15 + 0x1c90) = *(undefined8 *)(puVar15 + 0x3a20);
      *(undefined8 *)(puVar15 + 0x1ca8) = *(undefined8 *)(puVar15 + 0x3a38);
      *(undefined8 *)(puVar15 + 0x1ca0) = *(undefined8 *)(puVar15 + 0x3a30);
      *(undefined8 *)(puVar15 + 0x1cb8) = *(undefined8 *)(puVar15 + 0x3a48);
      *(undefined8 *)(puVar15 + 0x1cb0) = *(undefined8 *)(puVar15 + 0x3a40);
      *(undefined8 *)(puVar15 + 0x1cc8) = *(undefined8 *)(puVar15 + 0x3a58);
      *(undefined8 *)(puVar15 + 0x1cc0) = *(undefined8 *)(puVar15 + 0x3a50);
      *(undefined8 *)(puVar15 + 0x1c78) = *(undefined8 *)(puVar15 + 0x3a08);
      *(undefined8 *)(puVar15 + 0x1c70) = *(undefined8 *)(puVar15 + 0x3a00);
      *(undefined8 *)(puVar15 + 0x1c88) = *(undefined8 *)(puVar15 + 0x3a18);
      *(undefined8 *)(puVar15 + 0x1c80) = *(undefined8 *)(puVar15 + 0x3a10);
      *(undefined8 *)(puVar15 + 0x1c48) = *(undefined8 *)(puVar15 + 0x39d8);
      *(undefined8 *)(puVar15 + 0x1c40) = *(undefined8 *)(puVar15 + 0x39d0);
      *(undefined8 *)(puVar15 + 0x1c58) = *(undefined8 *)(puVar15 + 0x39e8);
      *(undefined8 *)(puVar15 + 0x1c50) = *(undefined8 *)(puVar15 + 0x39e0);
      *(undefined8 *)(puVar15 + 0x1c60) = *(undefined8 *)(puVar15 + 0x39f0);
      *(undefined8 *)(puVar15 + 0x1c08) = *(undefined8 *)(puVar15 + 0x3998);
      *(undefined8 *)(puVar15 + 0x1c00) = *(undefined8 *)(puVar15 + 0x3990);
      *(undefined8 *)(puVar15 + 0x1c18) = *(undefined8 *)(puVar15 + 0x39a8);
      *(undefined8 *)(puVar15 + 0x1c10) = *(undefined8 *)(puVar15 + 0x39a0);
      *(undefined8 *)(puVar15 + 0x1c38) = *(undefined8 *)(puVar15 + 0x39c8);
      *(undefined8 *)(puVar15 + 0x1c30) = *(undefined8 *)(puVar15 + 0x39c0);
      *(undefined8 *)(puVar15 + 0x1c28) = *(undefined8 *)(puVar15 + 0x39b8);
      *(undefined8 *)(puVar15 + 0x1c20) = *(undefined8 *)(puVar15 + 0x39b0);
      *(undefined8 *)(puVar15 + 0x1bf8) = *(undefined8 *)(puVar15 + 0x3988);
      *(undefined8 *)(puVar15 + 0x1bf0) = *(undefined8 *)(puVar15 + 0x3980);
      *(undefined8 *)(puVar15 + 0x1be8) = *(undefined8 *)(puVar15 + 0x3978);
      *(undefined8 *)(puVar15 + 0x1be0) = *(undefined8 *)(puVar15 + 0x3970);
      *(undefined1 *)(puVar24 + 0x2b5) = 1;
      FUN_100e0ae48(*(undefined8 *)(puVar15 + -0x18b8));
      _memcpy(puVar15 + 0x2320,puVar15 + 0x1d10,0x4e0);
      if (lVar17 != 2) {
        *(undefined8 *)(puVar15 + 0x22e8) = *(undefined8 *)(puVar15 + 0x1cd8);
        *(undefined8 *)(puVar15 + 0x22e0) = *(undefined8 *)(puVar15 + 0x1cd0);
        *(undefined8 *)(puVar15 + 0x22f8) = *(undefined8 *)(puVar15 + 0x1ce8);
        *(undefined8 *)(puVar15 + 0x22f0) = *(undefined8 *)(puVar15 + 0x1ce0);
        *(undefined8 *)(puVar15 + 0x2308) = *(undefined8 *)(puVar15 + 0x1cf8);
        *(undefined8 *)(puVar15 + 0x2300) = *(undefined8 *)(puVar15 + 0x1cf0);
        *(undefined8 *)(puVar15 + 0x2310) = *(undefined8 *)(puVar15 + 0x1d00);
        *(undefined8 *)(puVar15 + 0x22a8) = *(undefined8 *)(puVar15 + 0x1c98);
        *(undefined8 *)(puVar15 + 0x22a0) = *(undefined8 *)(puVar15 + 0x1c90);
        *(undefined8 *)(puVar15 + 0x22b8) = *(undefined8 *)(puVar15 + 0x1ca8);
        *(undefined8 *)(puVar15 + 0x22b0) = *(undefined8 *)(puVar15 + 0x1ca0);
        *(undefined8 *)(puVar15 + 0x22c8) = *(undefined8 *)(puVar15 + 0x1cb8);
        *(undefined8 *)(puVar15 + 0x22c0) = *(undefined8 *)(puVar15 + 0x1cb0);
        *(undefined8 *)(puVar15 + 0x22d8) = *(undefined8 *)(puVar15 + 0x1cc8);
        *(undefined8 *)(puVar15 + 0x22d0) = *(undefined8 *)(puVar15 + 0x1cc0);
        *(undefined8 *)(puVar15 + 0x2288) = *(undefined8 *)(puVar15 + 0x1c78);
        *(undefined8 *)(puVar15 + 0x2280) = *(undefined8 *)(puVar15 + 0x1c70);
        *(undefined8 *)(puVar15 + 0x2298) = *(undefined8 *)(puVar15 + 0x1c88);
        *(undefined8 *)(puVar15 + 0x2290) = *(undefined8 *)(puVar15 + 0x1c80);
        *(undefined8 *)(puVar15 + 0x2258) = *(undefined8 *)(puVar15 + 0x1c48);
        *(undefined8 *)(puVar15 + 0x2250) = *(undefined8 *)(puVar15 + 0x1c40);
        *(undefined8 *)(puVar15 + 0x2268) = *(undefined8 *)(puVar15 + 0x1c58);
        *(undefined8 *)(puVar15 + 0x2260) = *(undefined8 *)(puVar15 + 0x1c50);
        *(undefined8 *)(puVar15 + 0x2270) = *(undefined8 *)(puVar15 + 0x1c60);
        *(undefined8 *)(puVar15 + 0x2218) = *(undefined8 *)(puVar15 + 0x1c08);
        *(undefined8 *)(puVar15 + 0x2210) = *(undefined8 *)(puVar15 + 0x1c00);
        *(undefined8 *)(puVar15 + 0x2228) = *(undefined8 *)(puVar15 + 0x1c18);
        *(undefined8 *)(puVar15 + 0x2220) = *(undefined8 *)(puVar15 + 0x1c10);
        *(undefined8 *)(puVar15 + 0x2248) = *(undefined8 *)(puVar15 + 0x1c38);
        *(undefined8 *)(puVar15 + 0x2240) = *(undefined8 *)(puVar15 + 0x1c30);
        *(undefined8 *)(puVar15 + 0x2238) = *(undefined8 *)(puVar15 + 0x1c28);
        *(undefined8 *)(puVar15 + 0x2230) = *(undefined8 *)(puVar15 + 0x1c20);
        *(undefined8 *)(puVar15 + 0x2208) = *(undefined8 *)(puVar15 + 0x1bf8);
        *(undefined8 *)(puVar15 + 0x2200) = *(undefined8 *)(puVar15 + 0x1bf0);
        *(undefined8 *)(puVar15 + 0x21f8) = *(undefined8 *)(puVar15 + 0x1be8);
        *(undefined8 *)(puVar15 + 0x21f0) = *(undefined8 *)(puVar15 + 0x1be0);
      }
      *(undefined8 *)(puVar15 + 0x1030) = *(undefined8 *)(puVar15 + 0x2248);
      *(undefined8 *)(puVar15 + 0x1028) = *(undefined8 *)(puVar15 + 0x2240);
      *(undefined8 *)(puVar15 + 0x1040) = *(undefined8 *)(puVar15 + 0x2258);
      *(undefined8 *)(puVar15 + 0x1038) = *(undefined8 *)(puVar15 + 0x2250);
      *(undefined8 *)(puVar15 + 0x1050) = *(undefined8 *)(puVar15 + 0x2268);
      *(undefined8 *)(puVar15 + 0x1048) = *(undefined8 *)(puVar15 + 0x2260);
      *(undefined8 *)(puVar15 + 0xff0) = *(undefined8 *)(puVar15 + 0x2208);
      *(undefined8 *)(puVar15 + 0xfe8) = *(undefined8 *)(puVar15 + 0x2200);
      *(undefined8 *)(puVar15 + 0x1000) = *(undefined8 *)(puVar15 + 0x2218);
      *(undefined8 *)(puVar15 + 0xff8) = *(undefined8 *)(puVar15 + 0x2210);
      *(undefined8 *)(puVar15 + 0x1010) = *(undefined8 *)(puVar15 + 0x2228);
      *(undefined8 *)(puVar15 + 0x1008) = *(undefined8 *)(puVar15 + 0x2220);
      *(undefined8 *)(puVar15 + 0x1020) = *(undefined8 *)(puVar15 + 0x2238);
      *(undefined8 *)(puVar15 + 0x1018) = *(undefined8 *)(puVar15 + 0x2230);
      *(undefined8 *)(puVar15 + 0x1058) = *(undefined8 *)(puVar15 + 0x2270);
      *(undefined8 *)(puVar15 + 0xfe0) = *(undefined8 *)(puVar15 + 0x21f8);
      *(undefined8 *)(puVar15 + 0xfd8) = *(undefined8 *)(puVar15 + 0x21f0);
      **(undefined1 **)(puVar15 + -0x18a8) = 1;
      FUN_100de0f1c(*(undefined8 *)(puVar15 + -0x18c0));
      if (lVar17 == 2) {
        uVar38 = uVar41;
        if (uVar28 != 3) {
          *(ulong *)(puVar15 + 0x59c0) = uVar28;
          *(ulong *)(puVar15 + 0x59c8) = uVar41;
          *(ulong *)(puVar15 + 0x59d0) = unaff_x27;
          *(undefined1 (*) [16])(puVar15 + 23000) = auVar10;
          _memcpy(puVar15 + 0x59e8,puVar15 + 0x2320,0x4e0);
          *(undefined8 *)(puVar15 + 0x3f78) = 0;
          *(undefined8 *)(puVar15 + 0x3f80) = 1;
          *(undefined8 *)(puVar15 + 0x3f88) = 0;
          FUN_108855060(puVar15 + 0x3f78,0,0x22,1,1);
          lVar30 = *(long *)(puVar15 + 0x3f88);
          puVar33 = (undefined8 *)(*(long *)(puVar15 + 0x3f80) + lVar30);
          *(undefined2 *)(puVar33 + 4) = 0x296b;
          puVar33[1] = 0x646e616820646574;
          *puVar33 = 0x7075727265746e49;
          puVar33[3] = 0x636f6c42646c756f;
          puVar33[2] = 0x572820656b616873;
          *(undefined8 *)(puVar15 + 0x2808) = *(undefined8 *)(puVar15 + 0x3f80);
          *(undefined8 *)(puVar15 + 0x2800) = *(undefined8 *)(puVar15 + 0x3f78);
          *(long *)(puVar15 + 0x2810) = lVar30 + 0x22;
          unaff_x27 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x28,puVar15 + 0x2800);
          if (*(long *)(puVar15 + 0x59c0) == 3) {
            FUN_100de8b24(puVar15 + 0x59c8);
          }
          else {
            FUN_100da966c(puVar15 + 0x59c0);
          }
          uVar38 = 0xb;
          auVar10 = auVar12;
        }
      }
      else {
        _memcpy(puVar15 + 0x1190,puVar15 + 0x2320,0x4e0);
        *(undefined8 *)(puVar15 + 0x1158) = *(undefined8 *)(puVar15 + 0x22e8);
        *(undefined8 *)(puVar15 + 0x1150) = *(undefined8 *)(puVar15 + 0x22e0);
        *(undefined8 *)(puVar15 + 0x1168) = *(undefined8 *)(puVar15 + 0x22f8);
        *(undefined8 *)(puVar15 + 0x1160) = *(undefined8 *)(puVar15 + 0x22f0);
        *(undefined8 *)(puVar15 + 0x1178) = *(undefined8 *)(puVar15 + 0x2308);
        *(undefined8 *)(puVar15 + 0x1170) = *(undefined8 *)(puVar15 + 0x2300);
        *(undefined8 *)(puVar15 + 0x1180) = *(undefined8 *)(puVar15 + 0x2310);
        *(undefined8 *)(puVar15 + 0x1118) = *(undefined8 *)(puVar15 + 0x22a8);
        *(undefined8 *)(puVar15 + 0x1110) = *(undefined8 *)(puVar15 + 0x22a0);
        *(undefined8 *)(puVar15 + 0x1128) = *(undefined8 *)(puVar15 + 0x22b8);
        *(undefined8 *)(puVar15 + 0x1120) = *(undefined8 *)(puVar15 + 0x22b0);
        *(undefined8 *)(puVar15 + 0x1138) = *(undefined8 *)(puVar15 + 0x22c8);
        *(undefined8 *)(puVar15 + 0x1130) = *(undefined8 *)(puVar15 + 0x22c0);
        *(undefined8 *)(puVar15 + 0x1148) = *(undefined8 *)(puVar15 + 0x22d8);
        *(undefined8 *)(puVar15 + 0x1140) = *(undefined8 *)(puVar15 + 0x22d0);
        *(undefined8 *)(puVar15 + 0x10f8) = *(undefined8 *)(puVar15 + 0x2288);
        *(undefined8 *)(puVar15 + 0x10f0) = *(undefined8 *)(puVar15 + 0x2280);
        *(undefined8 *)(puVar15 + 0x1108) = *(undefined8 *)(puVar15 + 0x2298);
        *(undefined8 *)(puVar15 + 0x1100) = *(undefined8 *)(puVar15 + 0x2290);
        *(undefined8 *)(puVar15 + 0x10c8) = *(undefined8 *)(puVar15 + 0x103b);
        *(undefined8 *)(puVar15 + 0x10c0) = *(undefined8 *)(puVar15 + 0x1033);
        *(undefined8 *)(puVar15 + 0x10d8) = *(undefined8 *)(puVar15 + 0x104b);
        *(undefined8 *)(puVar15 + 0x10d0) = *(undefined8 *)(puVar15 + 0x1043);
        *(undefined8 *)(puVar15 + 0x10e5) = *(undefined8 *)(puVar15 + 0x1058);
        *(undefined8 *)(puVar15 + 0x10dd) = *(undefined8 *)(puVar15 + 0x1050);
        *(undefined8 *)(puVar15 + 0x1088) = *(undefined8 *)(puVar15 + 0xffb);
        *(undefined8 *)(puVar15 + 0x1080) = *(undefined8 *)(puVar15 + 0xff3);
        *(undefined8 *)(puVar15 + 0x1098) = *(undefined8 *)(puVar15 + 0x100b);
        *(undefined8 *)(puVar15 + 0x1090) = *(undefined8 *)(puVar15 + 0x1003);
        *(undefined8 *)(puVar15 + 0x10b8) = *(undefined8 *)(puVar15 + 0x102b);
        *(undefined8 *)(puVar15 + 0x10b0) = *(undefined8 *)(puVar15 + 0x1023);
        *(undefined8 *)(puVar15 + 0x10a8) = *(undefined8 *)(puVar15 + 0x101b);
        *(undefined8 *)(puVar15 + 0x10a0) = *(undefined8 *)(puVar15 + 0x1013);
        *(undefined8 *)(puVar15 + 0x1078) = *(undefined8 *)(puVar15 + 0xfeb);
        *(undefined8 *)(puVar15 + 0x1070) = *(undefined8 *)(puVar15 + 0xfe3);
        *(undefined8 *)(puVar15 + 0x1068) = *(undefined8 *)(puVar15 + 0xfdb);
        *(undefined8 *)(puVar15 + 0x1060) = *(undefined8 *)(puVar15 + 0xfd3);
        uVar38 = uVar28;
        unaff_x27 = uVar41;
        auVar10 = auVar13;
      }
      **(undefined1 **)(puVar15 + -0x18c8) = 1;
      FUN_100d9e758(puVar24 + 0xab);
      puVar33 = *(undefined8 **)(puVar15 + -0x18b0);
      if (((*(byte *)((long)puVar24 + 0x551) & 1) != 0) && (puVar24[0xa6] != 0)) {
        _free(puVar24[0xa7]);
      }
      plVar31 = (long *)(unaff_x27 >> 8);
      *(undefined2 *)((long)puVar24 + 0x551) = 0;
      *(undefined1 *)((long)puVar24 + 0x553) = 0;
    }
    _memcpy(puVar15 + -0x1620,puVar15 + 0x1190,0x4e0);
    *(undefined8 *)(puVar15 + -0x1658) = *(undefined8 *)(puVar15 + 0x1158);
    *(undefined8 *)(puVar15 + -0x1660) = *(undefined8 *)(puVar15 + 0x1150);
    *(undefined8 *)(puVar15 + -0x1648) = *(undefined8 *)(puVar15 + 0x1168);
    *(undefined8 *)(puVar15 + -0x1650) = *(undefined8 *)(puVar15 + 0x1160);
    *(undefined8 *)(puVar15 + -0x1638) = *(undefined8 *)(puVar15 + 0x1178);
    *(undefined8 *)(puVar15 + -0x1640) = *(undefined8 *)(puVar15 + 0x1170);
    *(undefined8 *)(puVar15 + -0x1630) = *(undefined8 *)(puVar15 + 0x1180);
    *(undefined8 *)(puVar15 + -0x1698) = *(undefined8 *)(puVar15 + 0x1118);
    *(undefined8 *)(puVar15 + -0x16a0) = *(undefined8 *)(puVar15 + 0x1110);
    *(undefined8 *)(puVar15 + -0x1688) = *(undefined8 *)(puVar15 + 0x1128);
    *(undefined8 *)(puVar15 + -0x1690) = *(undefined8 *)(puVar15 + 0x1120);
    *(undefined8 *)(puVar15 + -0x1678) = *(undefined8 *)(puVar15 + 0x1138);
    *(undefined8 *)(puVar15 + -0x1680) = *(undefined8 *)(puVar15 + 0x1130);
    *(undefined8 *)(puVar15 + -0x1668) = *(undefined8 *)(puVar15 + 0x1148);
    *(undefined8 *)(puVar15 + -0x1670) = *(undefined8 *)(puVar15 + 0x1140);
    *(undefined8 *)(puVar15 + -0x16b8) = *(undefined8 *)(puVar15 + 0x10f8);
    *(undefined8 *)(puVar15 + -0x16c0) = *(undefined8 *)(puVar15 + 0x10f0);
    *(undefined8 *)(puVar15 + -0x16a8) = *(undefined8 *)(puVar15 + 0x1108);
    *(undefined8 *)(puVar15 + -0x16b0) = *(undefined8 *)(puVar15 + 0x1100);
    *(undefined8 *)(puVar15 + -0x16e8) = *(undefined8 *)(puVar15 + 0x10c8);
    *(undefined8 *)(puVar15 + -0x16f0) = *(undefined8 *)(puVar15 + 0x10c0);
    *(undefined8 *)(puVar15 + -0x16d8) = *(undefined8 *)(puVar15 + 0x10d8);
    *(undefined8 *)(puVar15 + -0x16e0) = *(undefined8 *)(puVar15 + 0x10d0);
    *(undefined8 *)(puVar15 + -0x16cb) = *(undefined8 *)(puVar15 + 0x10e5);
    *(undefined8 *)(puVar15 + -0x16d3) = *(undefined8 *)(puVar15 + 0x10dd);
    *(undefined8 *)(puVar15 + -0x1728) = *(undefined8 *)(puVar15 + 0x1088);
    *(undefined8 *)(puVar15 + -0x1730) = *(undefined8 *)(puVar15 + 0x1080);
    *(undefined8 *)(puVar15 + -0x1718) = *(undefined8 *)(puVar15 + 0x1098);
    *(undefined8 *)(puVar15 + -0x1720) = *(undefined8 *)(puVar15 + 0x1090);
    *(undefined8 *)(puVar15 + -0x1708) = *(undefined8 *)(puVar15 + 0x10a8);
    *(undefined8 *)(puVar15 + -0x1710) = *(undefined8 *)(puVar15 + 0x10a0);
    *(undefined8 *)(puVar15 + -0x16f8) = *(undefined8 *)(puVar15 + 0x10b8);
    *(undefined8 *)(puVar15 + -0x1700) = *(undefined8 *)(puVar15 + 0x10b0);
    *(undefined8 *)(puVar15 + -0x1748) = *(undefined8 *)(puVar15 + 0x1068);
    *(undefined8 *)(puVar15 + -0x1750) = *(undefined8 *)(puVar15 + 0x1060);
    *(undefined8 *)(puVar15 + -0x1738) = *(undefined8 *)(puVar15 + 0x1078);
    *(undefined8 *)(puVar15 + -0x1740) = *(undefined8 *)(puVar15 + 0x1070);
    **(undefined1 **)(puVar15 + -0x18a0) = 1;
    FUN_100d85214(puVar33);
    unaff_x27 = (ulong)((uint)unaff_x27 & 0xff | (int)plVar31 << 8);
    if (puVar24[0x4c] != 0) {
      _free(puVar24[0x4d]);
    }
    plVar31 = (long *)(((ulong)plVar31 & 0xffffffffffffff) >> 8);
    *(undefined1 *)((long)puVar24 + 0x29b) = 0;
  }
  *(undefined1 *)((long)puVar24 + 0x29c) = 0;
  *plVar20 = lVar17;
  plVar20[1] = uVar38;
  plVar20[2] = unaff_x27 & 0xffff | (long)plVar31 << 0x10;
  *(undefined1 (*) [16])(plVar20 + 3) = auVar10;
  plVar20[5] = (long)puVar22;
  _memcpy(plVar20 + 6,puVar15 + -0x1620,0x4e0);
  lVar17 = *(long *)(puVar15 + -0x1660);
  lVar39 = *(long *)(puVar15 + -0x1648);
  lVar30 = *(long *)(puVar15 + -0x1650);
  plVar20[0xaf] = *(long *)(puVar15 + -0x1658);
  plVar20[0xae] = lVar17;
  plVar20[0xb1] = lVar39;
  plVar20[0xb0] = lVar30;
  lVar17 = *(long *)(puVar15 + -0x1640);
  plVar20[0xb3] = *(long *)(puVar15 + -0x1638);
  plVar20[0xb2] = lVar17;
  plVar20[0xb4] = *(long *)(puVar15 + -0x1630);
  lVar17 = *(long *)(puVar15 + -0x16a0);
  lVar39 = *(long *)(puVar15 + -0x1688);
  lVar30 = *(long *)(puVar15 + -0x1690);
  plVar20[0xa7] = *(long *)(puVar15 + -0x1698);
  plVar20[0xa6] = lVar17;
  plVar20[0xa9] = lVar39;
  plVar20[0xa8] = lVar30;
  lVar17 = *(long *)(puVar15 + -0x1680);
  lVar39 = *(long *)(puVar15 + -0x1668);
  lVar30 = *(long *)(puVar15 + -0x1670);
  plVar20[0xab] = *(long *)(puVar15 + -0x1678);
  plVar20[0xaa] = lVar17;
  plVar20[0xad] = lVar39;
  plVar20[0xac] = lVar30;
  lVar17 = *(long *)(puVar15 + -0x16c0);
  lVar39 = *(long *)(puVar15 + -0x16a8);
  lVar30 = *(long *)(puVar15 + -0x16b0);
  plVar20[0xa3] = *(long *)(puVar15 + -0x16b8);
  plVar20[0xa2] = lVar17;
  plVar20[0xa5] = lVar39;
  plVar20[0xa4] = lVar30;
  *(undefined2 *)(plVar20 + 0xb5) = 0;
  uVar25 = 1;
  *(undefined1 *)((long)plVar20 + 0x5aa) = 1;
  uVar19 = *(undefined8 *)(puVar15 + -0x16f0);
  uVar42 = *(undefined8 *)(puVar15 + -0x16d8);
  uVar36 = *(undefined8 *)(puVar15 + -0x16e0);
  *(undefined8 *)((long)plVar20 + 0x613) = *(undefined8 *)(puVar15 + -0x16e8);
  *(undefined8 *)((long)plVar20 + 0x60b) = uVar19;
  *(undefined8 *)((long)plVar20 + 0x623) = uVar42;
  *(undefined8 *)((long)plVar20 + 0x61b) = uVar36;
  lVar17 = *(long *)(puVar15 + -0x16d3);
  plVar20[0xc6] = *(long *)(puVar15 + -0x16cb);
  plVar20[0xc5] = lVar17;
  uVar19 = *(undefined8 *)(puVar15 + -0x1730);
  uVar42 = *(undefined8 *)(puVar15 + -0x1718);
  uVar36 = *(undefined8 *)(puVar15 + -0x1720);
  *(undefined8 *)((long)plVar20 + 0x5d3) = *(undefined8 *)(puVar15 + -0x1728);
  *(undefined8 *)((long)plVar20 + 0x5cb) = uVar19;
  *(undefined8 *)((long)plVar20 + 0x5e3) = uVar42;
  *(undefined8 *)((long)plVar20 + 0x5db) = uVar36;
  uVar42 = *(undefined8 *)(puVar15 + -0x1710);
  uVar36 = *(undefined8 *)(puVar15 + -0x16f8);
  uVar19 = *(undefined8 *)(puVar15 + -0x1700);
  *(undefined8 *)((long)plVar20 + 0x5f3) = *(undefined8 *)(puVar15 + -0x1708);
  *(undefined8 *)((long)plVar20 + 0x5eb) = uVar42;
  *(undefined8 *)((long)plVar20 + 0x603) = uVar36;
  *(undefined8 *)((long)plVar20 + 0x5fb) = uVar19;
  uVar42 = *(undefined8 *)(puVar15 + -0x1750);
  uVar36 = *(undefined8 *)(puVar15 + -0x1738);
  uVar19 = *(undefined8 *)(puVar15 + -0x1740);
  *(undefined8 *)((long)plVar20 + 0x5b3) = *(undefined8 *)(puVar15 + -0x1748);
  *(undefined8 *)((long)plVar20 + 0x5ab) = uVar42;
  *(undefined8 *)((long)plVar20 + 0x5c3) = uVar36;
  *(undefined8 *)((long)plVar20 + 0x5bb) = uVar19;
LAB_100a51334:
  *(undefined1 *)((long)puVar24 + 0x299) = uVar25;
  return;
}

