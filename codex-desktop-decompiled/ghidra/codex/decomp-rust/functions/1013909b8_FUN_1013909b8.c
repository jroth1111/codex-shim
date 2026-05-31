
/* WARNING: Type propagation algorithm not settling */

void FUN_1013909b8(ulong *param_1,byte *param_2)

{
  int iVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  code *pcVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  byte bVar16;
  ulong in_x15;
  undefined8 *puVar17;
  byte *unaff_x20;
  undefined8 *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined4 uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uStack_150;
  byte *pbStack_148;
  ulong uStack_128;
  byte *pbStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  long lStack_d0;
  byte bStack_c0;
  byte bStack_bf;
  undefined6 uStack_be;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  byte bStack_a0;
  byte bStack_9f;
  undefined2 uStack_9e;
  uint uStack_9c;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  uint uStack_78;
  uint uStack_74;
  ulong uStack_70;
  
  bVar4 = *param_2;
  if (bVar4 == 0x14) {
    uVar13 = *(ulong *)(param_2 + 8);
    pbStack_148 = *(byte **)(param_2 + 0x10);
    lVar24 = *(long *)(param_2 + 0x18);
    pbVar21 = pbStack_148 + lVar24 * 0x20;
    pbStack_f0 = (byte *)0x0;
    pbVar20 = pbStack_148;
    pbStack_110 = pbStack_148;
    uStack_100 = uVar13;
    pbStack_f8 = pbVar21;
    if (lVar24 == 0) {
LAB_101390f3c:
      pbStack_108 = pbVar20;
      pbVar11 = (byte *)FUN_1087e422c(0,&UNK_10b2308a8,&UNK_10b20a590);
LAB_101390f58:
      *param_1 = 0x8000000000000001;
      param_1[1] = (ulong)pbVar11;
    }
    else {
      pbVar20 = pbStack_148 + 0x20;
      if (*pbStack_148 == 0x16) goto LAB_101390f3c;
      uVar10 = *(undefined8 *)(pbStack_148 + 1);
      uStack_97 = (undefined7)*(undefined8 *)(pbStack_148 + 9);
      bStack_9f = (byte)uVar10;
      uStack_9e = (undefined2)((ulong)uVar10 >> 8);
      uStack_9c = (uint)((ulong)uVar10 >> 0x18);
      uStack_98 = (undefined1)((ulong)uVar10 >> 0x38);
      lStack_88 = *(long *)(pbStack_148 + 0x18);
      uStack_90 = (undefined1)*(undefined8 *)(pbStack_148 + 0x10);
      uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbStack_148 + 0x10) >> 8);
      pbStack_f0 = (byte *)0x1;
      pbStack_108 = pbVar20;
      bStack_a0 = *pbStack_148;
      FUN_1004b60cc(&bStack_c0,&bStack_a0);
      uVar26 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
      pbVar11 = (byte *)CONCAT71(uStack_b7,uStack_b8);
      if (uVar26 == 0x8000000000000001) goto LAB_101390f58;
      if (lVar24 == 1) {
LAB_101391000:
        uVar10 = 1;
LAB_101391004:
        uVar12 = FUN_1087e422c(uVar10,&UNK_10b2308a8,&UNK_10b20a590);
      }
      else {
        uVar6 = CONCAT71(uStack_af,uStack_b0);
        pbVar20 = pbStack_148 + 0x40;
        bVar16 = pbStack_148[0x20];
        pbStack_108 = pbVar20;
        if (bVar16 == 0x16) goto LAB_101391000;
        uVar10 = *(undefined8 *)(pbStack_148 + 0x21);
        uStack_b7 = (undefined7)*(undefined8 *)(pbStack_148 + 0x29);
        bStack_bf = (byte)uVar10;
        uStack_be = (undefined6)((ulong)uVar10 >> 8);
        uStack_b8 = (undefined1)((ulong)uVar10 >> 0x38);
        uStack_a8 = *(undefined8 *)(pbStack_148 + 0x38);
        uStack_b0 = (undefined1)*(undefined8 *)(pbStack_148 + 0x30);
        uStack_af = (undefined7)((ulong)*(undefined8 *)(pbStack_148 + 0x30) >> 8);
        pbStack_f0 = (byte *)0x2;
        bStack_c0 = bVar16;
        if (bVar16 == 0x10) {
LAB_101391178:
          uVar12 = FUN_100e077ec(&bStack_c0);
          uVar22 = 0;
LAB_10139125c:
          if (lVar24 != 2) {
            pbVar20 = pbStack_148 + 0x60;
            pbStack_108 = pbVar20;
            if (pbStack_148[0x40] != 0x16) {
              uVar10 = *(undefined8 *)(pbStack_148 + 0x41);
              uStack_97 = (undefined7)*(undefined8 *)(pbStack_148 + 0x49);
              bStack_9f = (byte)uVar10;
              uStack_9e = (undefined2)((ulong)uVar10 >> 8);
              uStack_9c = (uint)((ulong)uVar10 >> 0x18);
              uStack_98 = (undefined1)((ulong)uVar10 >> 0x38);
              lStack_88 = *(long *)(pbStack_148 + 0x58);
              uStack_90 = (undefined1)*(undefined8 *)(pbStack_148 + 0x50);
              uStack_8f = (undefined7)((ulong)*(undefined8 *)(pbStack_148 + 0x50) >> 8);
              pbStack_f0 = (byte *)0x3;
              bStack_a0 = pbStack_148[0x40];
              FUN_101226150(&bStack_c0,&bStack_a0);
              if (bStack_c0 != 1) {
                *param_1 = uVar26;
                param_1[1] = (ulong)pbVar11;
                param_1[2] = uVar6;
                *(undefined4 *)(param_1 + 3) = uVar22;
                *(int *)((long)param_1 + 0x1c) = (int)uVar12;
                *(byte *)(param_1 + 4) = bStack_bf;
                uVar13 = FUN_100fbc738(&pbStack_110);
                if (uVar13 == 0) goto LAB_1013910e4;
                *param_1 = 0x8000000000000001;
                param_1[1] = uVar13;
                uVar13 = uVar26 & 0x7fffffffffffffff;
                pbStack_148 = pbVar11;
                goto joined_r0x0001013912f8;
              }
              uVar12 = CONCAT71(uStack_b7,uStack_b8);
              goto LAB_101391018;
            }
          }
          uVar10 = 2;
          goto LAB_101391004;
        }
        if (bVar16 == 0x11) {
          puVar15 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          uVar10 = *puVar15;
          uStack_98 = (undefined1)puVar15[1];
          uStack_97 = (undefined7)((ulong)puVar15[1] >> 8);
          bStack_a0 = (byte)uVar10;
          bStack_9f = (byte)((ulong)uVar10 >> 8);
          uStack_9e = (undefined2)((ulong)uVar10 >> 0x10);
          uStack_9c = (uint)((ulong)uVar10 >> 0x20);
          lStack_88 = puVar15[3];
          uStack_90 = (undefined1)puVar15[2];
          uStack_8f = (undefined7)((ulong)puVar15[2] >> 8);
          FUN_100615890(&uStack_78,&bStack_a0);
          if (uStack_78 == 0) {
            uStack_70 = (ulong)uStack_74;
          }
          _free(puVar15);
          uVar12 = uStack_70;
        }
        else {
          if (bVar16 == 0x12) goto LAB_101391178;
          FUN_100615890(&bStack_a0,&bStack_c0);
          uStack_78 = CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0));
          uVar12 = CONCAT71(uStack_97,uStack_98);
          if (uStack_78 == 0) {
            uVar12 = (ulong)uStack_9c;
          }
        }
        if ((uStack_78 & 1) == 0) {
          uVar22 = 1;
          goto LAB_10139125c;
        }
      }
LAB_101391018:
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar12;
      if ((uVar26 & 0x7fffffffffffffff) != 0) {
        _free(pbVar11);
      }
    }
    lVar24 = ((ulong)((long)pbVar21 - (long)pbVar20) >> 5) + 1;
    while (lVar24 = lVar24 + -1, lVar24 != 0) {
      FUN_100e077ec(pbVar20);
      pbVar20 = pbVar20 + 0x20;
    }
  }
  else {
    if (bVar4 != 0x15) {
      uVar13 = FUN_108855b04(param_2,&uStack_78,&UNK_10b20ab20);
      *param_1 = 0x8000000000000001;
      param_1[1] = uVar13;
      return;
    }
    uStack_e0 = *(undefined8 *)(param_2 + 8);
    pbVar21 = *(byte **)(param_2 + 0x10);
    lVar14 = *(long *)(param_2 + 0x18) * 0x40;
    pbVar20 = pbVar21 + lVar14;
    pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
    lStack_d0 = 0;
    lVar24 = 0;
    pbStack_f0 = pbVar21;
    pbStack_d8 = pbVar20;
    if (*(long *)(param_2 + 0x18) == 0) {
      uVar26 = 0x8000000000000001;
      iVar23 = 2;
      bVar16 = 3;
      uStack_128._0_4_ = 0;
      uStack_150 = in_x15;
      pbStack_148 = unaff_x20;
    }
    else {
      puVar17 = (undefined8 *)((ulong)&bStack_a0 | 1);
      puVar18 = (undefined8 *)((ulong)&pbStack_110 | 1);
      puVar15 = (undefined8 *)((ulong)&bStack_c0 | 1);
      iVar23 = 2;
      bVar16 = 3;
      uStack_128 = 3;
      uVar26 = 0x8000000000000001;
      pbVar11 = pbVar21;
      pbStack_e8 = pbVar21;
      do {
        pbVar19 = pbVar11 + 0x40;
        bVar3 = *pbVar11;
        pbVar21 = pbVar19;
        lVar25 = lVar24;
        if (bVar3 == 0x16) break;
        uVar10 = *(undefined8 *)(pbVar11 + 0x10);
        *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)(pbVar11 + 0x18);
        *(undefined8 *)((long)puVar17 + 0xf) = uVar10;
        uVar10 = *(undefined8 *)(pbVar11 + 1);
        puVar17[1] = *(undefined8 *)(pbVar11 + 9);
        *puVar17 = uVar10;
        pbStack_108 = *(byte **)(pbVar11 + 0x28);
        pbStack_110 = *(byte **)(pbVar11 + 0x20);
        pbStack_f8 = *(byte **)(pbVar11 + 0x38);
        uStack_100 = *(ulong *)(pbVar11 + 0x30);
        plVar2 = (long *)CONCAT71(uStack_97,uStack_98);
        plVar7 = (long *)CONCAT71(uStack_8f,uStack_90);
        bStack_a0 = bVar3;
        if (bVar3 < 0xd) {
          if (bVar3 == 1) {
            bStack_bf = bStack_9f;
            if (2 < bStack_9f) {
              bStack_bf = 3;
            }
LAB_101390cc0:
            bStack_c0 = 0;
            goto LAB_101390cc4;
          }
          if (bVar3 == 4) {
            if ((long *)0x2 < plVar2) {
              plVar2 = (long *)0x3;
            }
            bStack_bf = (byte)plVar2;
            goto LAB_101390cc0;
          }
          if (bVar3 == 0xc) {
            if (lStack_88 == 5) {
              if ((int)*plVar7 != 0x696d696c || *(char *)((long)plVar7 + 4) != 't')
              goto LAB_101390c40;
              bStack_bf = 1;
joined_r0x000101390ed4:
              bStack_c0 = 0;
            }
            else if (lStack_88 == 0xd) {
              if (*plVar7 != 0x486564756c636e69 || *(long *)((long)plVar7 + 5) != 0x6e65646469486564
                 ) goto LAB_101390c40;
              bStack_bf = 2;
              bStack_c0 = 0;
            }
            else {
              if ((lStack_88 != 6) ||
                 ((int)*plVar7 != 0x73727563 || *(short *)((long)plVar7 + 4) != 0x726f)) {
LAB_101390c40:
                bStack_bf = 3;
                goto joined_r0x000101390ed4;
              }
              bStack_bf = 0;
              bStack_c0 = 0;
            }
joined_r0x000101390c18:
            if (plVar2 != (long *)0x0) {
              _free(plVar7);
            }
          }
          else {
LAB_101390ee4:
            uVar10 = FUN_108855b04(&bStack_a0,&uStack_78,&UNK_10b211da0);
            uStack_b8 = (undefined1)uVar10;
            uStack_b7 = (undefined7)((ulong)uVar10 >> 8);
            bStack_c0 = 1;
          }
        }
        else {
          if (bVar3 == 0xd) {
            if (plVar7 == (long *)0x5) {
              if ((int)*plVar2 != 0x696d696c || *(char *)((long)plVar2 + 4) != 't')
              goto LAB_101390cb8;
              bStack_bf = 1;
            }
            else if (plVar7 == (long *)0xd) {
              if (*plVar2 != 0x486564756c636e69 || *(long *)((long)plVar2 + 5) != 0x6e65646469486564
                 ) goto LAB_101390cb8;
              bStack_bf = 2;
            }
            else if ((plVar7 == (long *)0x6) &&
                    ((int)*plVar2 == 0x73727563 && *(short *)((long)plVar2 + 4) == 0x726f)) {
              bStack_bf = 0;
            }
            else {
LAB_101390cb8:
              bStack_bf = 3;
            }
            goto LAB_101390cc0;
          }
          if (bVar3 == 0xe) {
            func_0x000100ba99c4(&bStack_c0,plVar7);
            goto joined_r0x000101390c18;
          }
          if (bVar3 != 0xf) goto LAB_101390ee4;
          func_0x000100ba99c4(&bStack_c0,plVar2,plVar7);
LAB_101390cc4:
          FUN_100e077ec(&bStack_a0);
        }
        if ((bStack_c0 & 1) != 0) {
LAB_101391034:
          lStack_d0 = lVar24 + 1;
          uVar13 = CONCAT71(uStack_b7,uStack_b8);
          pbStack_e8 = pbVar19;
LAB_101391044:
          *param_1 = 0x8000000000000001;
          param_1[1] = uVar13;
joined_r0x000101391064:
          if (-0x7fffffffffffffff < (long)uVar26) {
joined_r0x000101391400:
            if (uVar26 != 0) {
              _free(pbStack_148);
            }
          }
LAB_1013911bc:
          FUN_100d34830(&pbStack_f0);
          if ((byte)pbStack_110 != '\x16') {
            FUN_100e077ec(&pbStack_110);
          }
          goto LAB_1013910e4;
        }
        bVar3 = (byte)pbStack_110;
        if (1 < bStack_bf) {
          if (bStack_bf == 2) {
            if (bVar16 != 3) {
              lStack_d0 = lVar24 + 1;
              bStack_c0 = 0x20;
              bStack_bf = 0xf3;
              uStack_be = 0x108cb;
              uStack_b8 = 0xd;
              uStack_b7 = 0;
              bStack_a0 = (byte)&bStack_c0;
              bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
              uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
              uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
              uStack_98 = 0xa0;
              uStack_97 = 0x100c7b3;
              pbStack_e8 = pbVar19;
              uVar13 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
              goto LAB_101391044;
            }
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar3 == 0x16) goto LAB_101391300;
            uVar10 = *puVar18;
            puVar17[1] = puVar18[1];
            *puVar17 = uVar10;
            uVar10 = *(undefined8 *)((long)puVar18 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar10;
            bStack_a0 = bVar3;
            FUN_101226150(&bStack_c0,&bStack_a0);
            bVar16 = bStack_bf;
            if (bStack_c0 == 1) goto LAB_101391034;
          }
          else {
            pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
            if (bVar3 == 0x16) {
LAB_101391300:
              pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
              lStack_d0 = lVar24 + 1;
              pbStack_e8 = pbVar19;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101391430:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x101391434);
              (*pcVar9)();
            }
            uVar10 = *puVar18;
            puVar17[1] = puVar18[1];
            *puVar17 = uVar10;
            uVar10 = *(undefined8 *)((long)puVar18 + 0xf);
            *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
            *(undefined8 *)((long)puVar17 + 0xf) = uVar10;
            bStack_a0 = bVar3;
            FUN_100e077ec(&bStack_a0);
          }
          goto LAB_101390a74;
        }
        if (bStack_bf == 0) {
          if (uVar26 != 0x8000000000000001) {
            lStack_d0 = lVar24 + 1;
            bStack_c0 = 0xa9;
            bStack_bf = 199;
            uStack_be = 0x108ca;
            uStack_b8 = 6;
            uStack_b7 = 0;
            bStack_a0 = (byte)&bStack_c0;
            bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
            uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
            uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
            uStack_98 = 0xa0;
            uStack_97 = 0x100c7b3;
            pbStack_e8 = pbVar19;
            uVar13 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
            *param_1 = 0x8000000000000001;
            param_1[1] = uVar13;
            uVar26 = uVar26 & 0x7fffffffffffffff;
            goto joined_r0x000101391400;
          }
          pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
          if (bVar3 == 0x16) {
            lStack_d0 = lVar24 + 1;
            pbStack_e8 = pbVar19;
            func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto LAB_101391430;
          }
          uVar10 = *puVar18;
          puVar17[1] = puVar18[1];
          *puVar17 = uVar10;
          uVar10 = *(undefined8 *)((long)puVar18 + 0xf);
          *(undefined8 *)((long)puVar17 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
          *(undefined8 *)((long)puVar17 + 0xf) = uVar10;
          bStack_a0 = bVar3;
          FUN_1004b60cc(&bStack_c0,&bStack_a0);
          uVar26 = CONCAT62(uStack_be,CONCAT11(bStack_bf,bStack_c0));
          pbStack_148 = (byte *)CONCAT71(uStack_b7,uStack_b8);
          if (uVar26 != 0x8000000000000001) {
            uStack_150 = CONCAT71(uStack_af,uStack_b0);
            goto LAB_101390a74;
          }
          lStack_d0 = lVar24 + 1;
          *param_1 = 0x8000000000000001;
          param_1[1] = (ulong)pbStack_148;
          pbStack_e8 = pbVar19;
          goto LAB_1013911bc;
        }
        if (iVar23 != 2) {
          lStack_d0 = lVar24 + 1;
          bStack_c0 = 0x21;
          bStack_bf = 0xdc;
          uStack_be = 0x108ca;
          uStack_b8 = 5;
          uStack_b7 = 0;
          bStack_a0 = (byte)&bStack_c0;
          bStack_9f = (byte)((ulong)&bStack_c0 >> 8);
          uStack_9e = (undefined2)((ulong)&bStack_c0 >> 0x10);
          uStack_9c = (uint)((ulong)&bStack_c0 >> 0x20);
          uStack_98 = 0xa0;
          uStack_97 = 0x100c7b3;
          pbStack_e8 = pbVar19;
          uVar13 = FUN_108856088(s_duplicate_field_____108ac2973,&bStack_a0);
          goto LAB_101391044;
        }
        pbStack_110 = (byte *)CONCAT71(pbStack_110._1_7_,0x16);
        if (bVar3 == 0x16) goto LAB_101391300;
        uVar10 = *puVar18;
        puVar15[1] = puVar18[1];
        *puVar15 = uVar10;
        uVar10 = *(undefined8 *)((long)puVar18 + 0xf);
        *(undefined8 *)((long)puVar15 + 0x17) = *(undefined8 *)((long)puVar18 + 0x17);
        *(undefined8 *)((long)puVar15 + 0xf) = uVar10;
        bStack_c0 = bVar3;
        if (bVar3 == 0x10) {
LAB_101390df8:
          FUN_100e077ec(&bStack_c0);
          iVar23 = 0;
        }
        else if (bVar3 == 0x11) {
          puVar5 = (undefined8 *)CONCAT71(uStack_b7,uStack_b8);
          uVar10 = *puVar5;
          uStack_98 = (undefined1)puVar5[1];
          uStack_97 = (undefined7)((ulong)puVar5[1] >> 8);
          bStack_a0 = (byte)uVar10;
          bStack_9f = (byte)((ulong)uVar10 >> 8);
          uStack_9e = (undefined2)((ulong)uVar10 >> 0x10);
          uStack_9c = (uint)((ulong)uVar10 >> 0x20);
          lStack_88 = puVar5[3];
          uStack_90 = (undefined1)puVar5[2];
          uStack_8f = (undefined7)((ulong)puVar5[2] >> 8);
          FUN_100615890(&uStack_78,&bStack_a0);
          uVar8 = uStack_78;
          uVar13 = uStack_128 & 0xffffffff00000000;
          uStack_128 = uStack_70;
          if (uStack_78 == 0) {
            iVar23 = 1;
            uStack_128 = uVar13 | uStack_74;
          }
          _free(puVar5);
          uVar13 = uStack_128;
          if (uVar8 != 0) {
LAB_101391188:
            uStack_128 = uVar13;
            lStack_d0 = lVar24 + 1;
            *param_1 = 0x8000000000000001;
            param_1[1] = uStack_128;
            pbStack_e8 = pbVar19;
            goto joined_r0x000101391064;
          }
        }
        else {
          if (bVar3 == 0x12) goto LAB_101390df8;
          FUN_100615890(&bStack_a0,&bStack_c0);
          uStack_128 = uStack_128 & 0xffffffff00000000 | (ulong)uStack_9c;
          uVar13 = CONCAT71(uStack_97,uStack_98);
          if (CONCAT22(uStack_9e,CONCAT11(bStack_9f,bStack_a0)) != 0) goto LAB_101391188;
          iVar23 = 1;
        }
LAB_101390a74:
        lVar24 = lVar24 + 1;
        pbVar21 = pbVar20;
        lVar25 = (lVar14 - 0x40U >> 6) + 1;
        pbVar11 = pbVar19;
      } while (pbVar19 != pbVar20);
      lStack_d0 = lVar25;
    }
    lVar24 = lStack_d0;
    uVar13 = 0x8000000000000000;
    if (uVar26 != 0x8000000000000001) {
      uVar13 = uVar26;
    }
    iVar1 = 0;
    if (iVar23 != 2) {
      iVar1 = iVar23;
    }
    uVar22 = 0;
    if (iVar23 != 2) {
      uVar22 = (undefined4)uStack_128;
    }
    *param_1 = uVar13;
    param_1[1] = (ulong)pbStack_148;
    param_1[2] = uStack_150;
    bVar3 = 2;
    if (bVar16 != 3) {
      bVar3 = bVar16;
    }
    *(int *)(param_1 + 3) = iVar1;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar22;
    *(byte *)(param_1 + 4) = bVar3;
    pbStack_e8 = pbVar21;
    FUN_100d34830(&pbStack_f0);
    if (pbVar20 == pbVar21) goto LAB_1013910e4;
    bStack_a0 = (byte)lVar24;
    bStack_9f = (byte)((ulong)lVar24 >> 8);
    uStack_9e = (undefined2)((ulong)lVar24 >> 0x10);
    uStack_9c = (uint)((ulong)lVar24 >> 0x20);
    uVar26 = FUN_1087e422c(((ulong)((long)pbVar20 - (long)pbVar21) >> 6) + lVar24,&bStack_a0,
                           &UNK_10b23a190);
    *param_1 = 0x8000000000000001;
    param_1[1] = uVar26;
    uVar13 = uVar13 & 0x7fffffffffffffff;
  }
joined_r0x0001013912f8:
  if (uVar13 != 0) {
    _free(pbStack_148);
  }
LAB_1013910e4:
  if ((bVar4 & 0x1e) != 0x14) {
    FUN_100e077ec(param_2);
  }
  return;
}

