
/* WARNING: Possible PIC construction at 0x0001006876f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006334c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100687a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001006334c4) */
/* WARNING: Removing unreachable block (ram,0x0001006335d0) */
/* WARNING: Removing unreachable block (ram,0x0001006876fc) */
/* WARNING: Removing unreachable block (ram,0x000100687aa0) */
/* WARNING: Removing unreachable block (ram,0x000100687af8) */
/* WARNING: Removing unreachable block (ram,0x000100687ab8) */
/* WARNING: Removing unreachable block (ram,0x000100687af4) */
/* WARNING: Removing unreachable block (ram,0x000100687b4c) */
/* WARNING: Removing unreachable block (ram,0x000100633510) */
/* WARNING: Removing unreachable block (ram,0x0001006335b4) */
/* WARNING: Removing unreachable block (ram,0x000100633524) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_100686ddc(ulong *param_1,ulong *param_2)

{
  undefined4 *puVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  undefined **ppuVar9;
  bool bVar10;
  ulong *puVar11;
  undefined *puVar12;
  long lVar13;
  int *piVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  long lVar21;
  undefined8 extraout_x1;
  undefined *puVar22;
  undefined1 uVar23;
  long lVar24;
  long lVar25;
  undefined4 uVar26;
  ulong uVar27;
  ulong *unaff_x19;
  long *plVar28;
  ulong uVar29;
  ulong *unaff_x20;
  undefined *puVar30;
  ulong **unaff_x21;
  long unaff_x22;
  ulong uVar31;
  ulong uVar32;
  ulong unaff_x23;
  ulong uVar33;
  ulong unaff_x24;
  ulong *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  ulong *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar34;
  undefined8 unaff_x30;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined *puStack_130;
  ulong *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  ulong *apuStack_88 [4];
  ulong uStack_68;
  
  puVar34 = &stack0xfffffffffffffff0;
  uVar27 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar27 = 5;
  }
  if (2 < (long)uVar27) {
    if (uVar27 == 3) {
      puVar16 = (undefined *)FUN_100656df8((int)param_2[4],param_1[2],param_1[3]);
      if (puVar16 == (undefined *)0x0) {
        return (ulong *)0x0;
      }
      goto SUB_107c05db8;
    }
    if (uVar27 == 4) {
      uVar27 = param_1[2];
      puVar20 = (ulong *)param_1[3];
      uStack_68 = uVar27 + (long)puVar20 * 0x48;
      uVar17 = param_2[2];
      param_2[2] = uVar17 + 1;
      *(undefined1 *)(param_2 + 3) = 0;
      puVar30 = (undefined *)(ulong)(uint)param_2[4];
      puVar16 = &UNK_108ca7633;
      uVar31 = 0x7fffffff;
      uVar15 = 1;
      do {
        while( true ) {
          uVar29 = uVar15;
          if (0x7ffffffe < uVar15) {
            uVar29 = 0x7fffffff;
          }
          uVar29 = _write(puVar30,puVar16,uVar29);
          if (uVar29 == 0xffffffffffffffff) break;
          if (uVar29 == 0) goto LAB_100633e90;
          uVar32 = uVar15 - uVar29;
          if (uVar15 < uVar29) goto LAB_100633e1c;
          puVar16 = puVar16 + uVar29;
          uVar15 = uVar32;
          if (uVar32 == 0) goto LAB_100633b38;
        }
        piVar14 = (int *)___error();
        lVar24 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_100633e9c;
      } while (uVar15 != 0);
LAB_100633b38:
      if (puVar20 == (ulong *)0x0) {
        param_2[2] = uVar17;
        param_2 = (ulong *)&UNK_108ca7637;
        puVar16 = (undefined *)0x7fffffff;
        uVar27 = 1;
        while( true ) {
          while( true ) {
            uVar29 = uVar27;
            if (0x7ffffffe < uVar27) {
              uVar29 = 0x7fffffff;
            }
            uVar29 = _write(puVar30,param_2,uVar29);
            if (uVar29 != 0xffffffffffffffff) break;
            piVar14 = (int *)___error();
            lVar24 = (long)*piVar14;
            if (*piVar14 != 4) goto LAB_100633e9c;
            if (uVar27 == 0) {
              return (ulong *)0x0;
            }
          }
          if (uVar29 == 0) goto LAB_100633e90;
          uVar32 = uVar27 - uVar29;
          if (uVar27 < uVar29) break;
          param_2 = (ulong *)((long)param_2 + uVar29);
          uVar27 = uVar32;
          if (uVar32 == 0) {
            return (ulong *)0x0;
          }
        }
        puVar12 = (undefined *)
                  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (uVar29,uVar27,uVar27,&UNK_10b233fe0);
LAB_100633ed8:
        puVar12 = (undefined *)
                  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (puVar12,puVar30,puVar30,&UNK_10b233fe0);
LAB_100633eec:
        puVar22 = puVar16;
        auVar37 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                            (puVar12,puVar16,puVar16,&UNK_10b233fe0);
        apuStack_88[2] = (ulong *)0x100633f00;
        lVar24 = (long)puVar22 * 0x48;
        puStack_d0 = unaff_x28;
        uStack_c8 = unaff_x27;
        uStack_c0 = uVar17;
        puStack_b8 = puVar20;
        uStack_b0 = uVar31;
        uStack_a8 = uVar15;
        puStack_a0 = puVar16;
        puStack_98 = puVar30;
        uStack_90 = uVar27;
        apuStack_88[0] = param_2;
        apuStack_88[1] = (ulong *)&stack0xfffffffffffffff0;
        if ((undefined *)0x1c71c71c71c71c7 < puVar22) {
          auVar37 = FUN_107c03c64(0,lVar24);
        }
        puVar20 = auVar37._0_8_;
        if (lVar24 == 0) {
          puStack_130 = (undefined *)0x0;
          puStack_128 = (ulong *)0x8;
          puVar11 = puVar20;
          puVar18 = puStack_128;
        }
        else {
          puVar11 = (ulong *)_malloc(lVar24);
          puStack_130 = puVar22;
          puVar18 = puVar11;
          if (puVar11 == (ulong *)0x0) {
            uVar35 = FUN_107c03c64(8,lVar24);
            FUN_100de6690(&uStack_118);
            FUN_100e238ac(&puStack_130);
            __Unwind_Resume(uVar35);
            auVar37 = FUN_107c05ccc();
            puVar20 = auVar37._0_8_;
            lVar25 = *(long *)(auVar37._8_8_ + 8);
            lVar21 = *(long *)(auVar37._8_8_ + 0x10);
            plVar28 = (long *)*puVar20;
            lVar24 = plVar28[2];
            if (*plVar28 == lVar24) {
              puVar11 = (ulong *)thunk_FUN_108855060(plVar28,lVar24,1,1,1);
              lVar24 = plVar28[2];
              *(undefined1 *)(plVar28[1] + lVar24) = 0x5b;
              lVar24 = lVar24 + 1;
              plVar28[2] = lVar24;
            }
            else {
              *(undefined1 *)(plVar28[1] + lVar24) = 0x5b;
              lVar24 = lVar24 + 1;
              plVar28[2] = lVar24;
              puVar11 = puVar20;
            }
            if (lVar21 != 0) {
              puVar11 = (ulong *)FUN_100683ae4(lVar25,puVar20);
              plVar28 = (long *)*puVar20;
              if (lVar21 != 1) {
                lVar24 = lVar21 * 0x48 + -0x48;
                do {
                  lVar25 = lVar25 + 0x48;
                  lVar21 = plVar28[2];
                  if (*plVar28 == lVar21) {
                    thunk_FUN_108855060(plVar28,lVar21,1,1,1);
                    lVar21 = plVar28[2];
                  }
                  *(undefined1 *)(plVar28[1] + lVar21) = 0x2c;
                  plVar28[2] = lVar21 + 1;
                  puVar11 = (ulong *)FUN_100683ae4(lVar25,puVar20);
                  plVar28 = (long *)*puVar20;
                  lVar24 = lVar24 + -0x48;
                } while (lVar24 != 0);
              }
              lVar24 = plVar28[2];
            }
            if (*plVar28 == lVar24) {
              puVar11 = (ulong *)thunk_FUN_108855060(plVar28,lVar24,1,1,1);
              lVar24 = plVar28[2];
            }
            *(undefined1 *)(plVar28[1] + lVar24) = 0x5d;
            plVar28[2] = lVar24 + 1;
            return puVar11;
          }
        }
        puStack_120 = (undefined *)0x0;
        puStack_128 = puVar18;
        if (puVar22 != (undefined *)0x0) {
          puStack_120 = (undefined *)0x0;
          lVar24 = 0;
          lVar25 = (long)puVar22 * 0x18;
          plVar28 = (long *)(auVar37._8_8_ + 0x10);
          do {
            puVar16 = puStack_120;
            lVar21 = plVar28[-1];
            lVar2 = *plVar28;
            if (lVar2 == 0) {
              lVar13 = 1;
            }
            else {
              lVar13 = _malloc(lVar2);
              if (lVar13 == 0) {
                FUN_107c03c64(1,lVar2);
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x100634098);
                (*pcVar8)();
              }
            }
            puVar11 = (ulong *)_memcpy(lVar13,lVar21,lVar2);
            uStack_118 = 0x8000000000000003;
            lStack_110 = lVar2;
            lStack_108 = lVar13;
            lStack_100 = lVar2;
            if (puVar16 == puStack_130) {
              puVar11 = (ulong *)__ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE
                                           (&puStack_130);
              puVar18 = puStack_128;
            }
            plVar28 = plVar28 + 3;
            puVar19 = (undefined8 *)((long)puVar18 + lVar24);
            puVar19[1] = lStack_110;
            *puVar19 = uStack_118;
            puVar19[8] = uStack_d8;
            puVar19[5] = uStack_f0;
            puVar19[4] = uStack_f8;
            puVar19[7] = uStack_e0;
            puVar19[6] = uStack_e8;
            puVar19[3] = lStack_100;
            puVar19[2] = lStack_108;
            puStack_120 = puVar16 + 1;
            lVar24 = lVar24 + 0x48;
            lVar25 = lVar25 + -0x18;
          } while (lVar25 != 0);
        }
        puVar20[2] = (ulong)puStack_128;
        puVar20[1] = (ulong)puStack_130;
        puVar20[3] = (ulong)puStack_120;
        *puVar20 = 0x8000000000000004;
        return puVar11;
      }
      unaff_x27 = 0x7fffffff;
      bVar10 = true;
      do {
        uVar26 = (undefined4)param_2[4];
        if (bVar10) {
          puVar16 = &UNK_108ca14f4;
          uVar15 = 1;
          do {
            while( true ) {
              uVar29 = uVar15;
              if (0x7ffffffe < uVar15) {
                uVar29 = 0x7fffffff;
              }
              uVar29 = _write(uVar26,puVar16,uVar29);
              if (uVar29 == 0xffffffffffffffff) break;
              if (uVar29 == 0) goto LAB_100633e90;
              uVar32 = uVar15 - uVar29;
              if (uVar15 < uVar29) goto LAB_100633e1c;
              puVar16 = puVar16 + uVar29;
              uVar15 = uVar32;
              if (uVar32 == 0) goto LAB_100633c00;
            }
            piVar14 = (int *)___error();
            lVar24 = (long)*piVar14;
            if (*piVar14 != 4) goto LAB_100633e9c;
          } while (uVar15 != 0);
        }
        else {
          puVar16 = &UNK_108cc4022;
          uVar15 = 2;
          do {
            while( true ) {
              uVar29 = uVar15;
              if (0x7ffffffe < uVar15) {
                uVar29 = 0x7fffffff;
              }
              uVar29 = _write(uVar26,puVar16,uVar29);
              if (uVar29 == 0xffffffffffffffff) break;
              if (uVar29 == 0) goto LAB_100633e90;
              uVar32 = uVar15 - uVar29;
              if (uVar15 < uVar29) goto LAB_100633e1c;
              puVar16 = puVar16 + uVar29;
              uVar15 = uVar32;
              if (uVar32 == 0) goto LAB_100633c00;
            }
            piVar14 = (int *)___error();
            lVar24 = (long)*piVar14;
            if (*piVar14 != 4) goto LAB_100633e9c;
          } while (uVar15 != 0);
        }
LAB_100633c00:
        uVar17 = param_2[1];
        if ((uVar17 != 0) && (unaff_x28 = (ulong *)param_2[2], unaff_x28 != (ulong *)0x0)) {
          puVar20 = (ulong *)0x0;
          uVar31 = *param_2;
          do {
            puVar20 = (ulong *)((long)puVar20 + 1);
            uVar32 = uVar31;
            uVar15 = uVar17;
            do {
              while( true ) {
                uVar29 = uVar15;
                if (0x7ffffffe < uVar15) {
                  uVar29 = 0x7fffffff;
                }
                uVar29 = _write(uVar26,uVar32,uVar29);
                if (uVar29 == 0xffffffffffffffff) break;
                if (uVar29 == 0) goto LAB_100633e90;
                uVar33 = uVar15 - uVar29;
                if (uVar15 < uVar29) goto LAB_100633e1c;
                uVar32 = uVar32 + uVar29;
                uVar15 = uVar33;
                if (uVar33 == 0) goto LAB_100633c1c;
              }
              piVar14 = (int *)___error();
              lVar24 = (long)*piVar14;
              if (*piVar14 != 4) goto LAB_100633e9c;
            } while (uVar15 != 0);
LAB_100633c1c:
          } while (puVar20 != unaff_x28);
        }
        puVar11 = (ulong *)FUN_100686ddc(uVar27,param_2);
        if (puVar11 != (ulong *)0x0) {
          return puVar11;
        }
        bVar10 = false;
        uVar27 = uVar27 + 0x48;
        *(undefined1 *)(param_2 + 3) = 1;
      } while (uVar27 != uStack_68);
      uVar15 = param_2[2] - 1;
      param_2[2] = uVar15;
      uVar27 = (ulong)(uint)param_2[4];
      puVar30 = &UNK_108ca14f4;
      uVar31 = 0x7fffffff;
      puVar16 = (undefined *)0x1;
      do {
        while( true ) {
          puVar12 = puVar16;
          if ((undefined *)0x7ffffffe < puVar16) {
            puVar12 = (undefined *)0x7fffffff;
          }
          puVar12 = (undefined *)_write(uVar27,puVar30,puVar12);
          if (puVar12 == (undefined *)0xffffffffffffffff) break;
          if (puVar12 == (undefined *)0x0) goto LAB_100633e90;
          puVar22 = puVar16 + -(long)puVar12;
          if (puVar16 < puVar12) goto LAB_100633eec;
          puVar30 = puVar30 + (long)puVar12;
          puVar16 = puVar22;
          if (puVar22 == (undefined *)0x0) goto LAB_100633d18;
        }
        piVar14 = (int *)___error();
        lVar24 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_100633e9c;
      } while (puVar16 != (undefined *)0x0);
LAB_100633d18:
      if ((uVar15 != 0) && (puVar16 = (undefined *)param_2[1], puVar16 != (undefined *)0x0)) {
        uVar31 = 0;
        puVar20 = (ulong *)*param_2;
        uVar17 = 0x7fffffff;
        do {
          uVar31 = uVar31 + 1;
          param_2 = puVar20;
          puVar30 = puVar16;
          do {
            while( true ) {
              puVar12 = puVar30;
              if ((undefined *)0x7ffffffe < puVar30) {
                puVar12 = (undefined *)0x7fffffff;
              }
              puVar12 = (undefined *)_write(uVar27,param_2,puVar12);
              if (puVar12 == (undefined *)0xffffffffffffffff) break;
              if (puVar12 == (undefined *)0x0) goto LAB_100633e90;
              puVar22 = puVar30 + -(long)puVar12;
              if (puVar30 < puVar12) goto LAB_100633ed8;
              param_2 = (ulong *)((long)param_2 + (long)puVar12);
              puVar30 = puVar22;
              if (puVar22 == (undefined *)0x0) goto LAB_100633db8;
            }
            piVar14 = (int *)___error();
            lVar24 = (long)*piVar14;
            if (*piVar14 != 4) goto LAB_100633e9c;
          } while (puVar30 != (undefined *)0x0);
LAB_100633db8:
        } while (uVar31 != uVar15);
      }
      goto LAB_100633e30;
    }
    uVar15 = param_1[6];
    uVar27 = param_2[2];
    param_2[2] = uVar27 + 1;
    *(undefined1 *)(param_2 + 3) = 0;
    puVar20 = (ulong *)(ulong)(uint)param_2[4];
    puVar16 = &UNK_108ca7634;
    uVar31 = 1;
    do {
      while( true ) {
        uVar17 = uVar31;
        if (0x7ffffffe < uVar31) {
          uVar17 = 0x7fffffff;
        }
        uVar17 = _write(puVar20,puVar16,uVar17);
        if (uVar17 == 0xffffffffffffffff) break;
        if (uVar17 == 0) goto LAB_10068765c;
        uVar29 = uVar31 - uVar17;
        if (uVar31 < uVar17) goto LAB_1006876d0;
        puVar16 = puVar16 + uVar17;
        uVar31 = uVar29;
        if (uVar29 == 0) goto LAB_100686ff0;
      }
      piVar14 = (int *)___error();
      if (*piVar14 != 4) {
        puVar16 = (undefined *)((long)*piVar14 << 0x20 | 2);
        goto SUB_107c05db8;
      }
    } while (uVar31 != 0);
LAB_100686ff0:
    bVar10 = uVar15 != 0;
    if (uVar15 == 0) {
      param_2[2] = uVar27;
      puVar16 = &UNK_108ca2104;
      uVar31 = 1;
      do {
        while( true ) {
          uVar27 = uVar31;
          if (0x7ffffffe < uVar31) {
            uVar27 = 0x7fffffff;
          }
          uVar17 = _write(puVar20,puVar16,uVar27);
          if (uVar17 == 0xffffffffffffffff) break;
          if (uVar17 == 0) {
            puVar16 = &UNK_10b233fc8;
            goto SUB_107c05db8;
          }
          uVar27 = uVar31 - uVar17;
          if (uVar31 < uVar17) goto LAB_1006876d0;
          puVar16 = puVar16 + uVar17;
          uVar31 = uVar27;
          if (uVar27 == 0) goto LAB_100687128;
        }
        piVar14 = (int *)___error();
        if (*piVar14 != 4) {
          puVar16 = (undefined *)((long)*piVar14 << 0x20 | 2);
          goto SUB_107c05db8;
        }
      } while (uVar31 != 0);
LAB_100687128:
      uVar31 = param_1[2];
      if (uVar31 == 0) {
        return (ulong *)0x0;
      }
LAB_100687130:
      puStack_a0 = (undefined *)param_1[1] + uVar31 * 0x68;
      puVar30 = (undefined *)param_1[1];
      do {
        uVar35 = *(undefined8 *)(puVar30 + 8);
        uVar36 = *(undefined8 *)(puVar30 + 0x10);
        puVar20 = (ulong *)(ulong)(uint)param_2[4];
        if (bVar10) {
          puVar16 = &UNK_108ca14f4;
          uVar27 = 1;
          do {
            while( true ) {
              uVar31 = uVar27;
              if (0x7ffffffe < uVar27) {
                uVar31 = 0x7fffffff;
              }
              uVar31 = _write(puVar20,puVar16,uVar31);
              if (uVar31 == 0xffffffffffffffff) break;
              if (uVar31 == 0) goto LAB_1006874a0;
              uVar15 = uVar27 - uVar31;
              if (uVar27 < uVar31) goto LAB_100687648;
              puVar16 = puVar16 + uVar31;
              uVar27 = uVar15;
              if (uVar15 == 0) goto LAB_100687204;
            }
            piVar14 = (int *)___error();
            lVar24 = (long)*piVar14;
            if (*piVar14 != 4) goto LAB_1006874ac;
          } while (uVar27 != 0);
        }
        else {
          puVar16 = &UNK_108cc4022;
          uVar27 = 2;
          do {
            while( true ) {
              uVar31 = uVar27;
              if (0x7ffffffe < uVar27) {
                uVar31 = 0x7fffffff;
              }
              uVar31 = _write(puVar20,puVar16,uVar31);
              if (uVar31 == 0xffffffffffffffff) break;
              if (uVar31 == 0) goto LAB_1006874a0;
              uVar15 = uVar27 - uVar31;
              if (uVar27 < uVar31) goto LAB_100687648;
              puVar16 = puVar16 + uVar31;
              uVar27 = uVar15;
              if (uVar15 == 0) goto LAB_100687204;
            }
            piVar14 = (int *)___error();
            lVar24 = (long)*piVar14;
            if (*piVar14 != 4) goto LAB_1006874ac;
          } while (uVar27 != 0);
        }
LAB_100687204:
        uVar15 = param_2[2];
        puStack_98 = (undefined *)uVar36;
        uStack_90 = uVar35;
        if ((uVar15 != 0) && (uVar17 = param_2[1], uVar17 != 0)) {
          uVar29 = 0;
          uVar32 = *param_2;
          do {
            uVar29 = uVar29 + 1;
            uVar33 = uVar32;
            uVar27 = uVar17;
            do {
              while( true ) {
                uVar31 = uVar27;
                if (0x7ffffffe < uVar27) {
                  uVar31 = 0x7fffffff;
                }
                uVar31 = _write(puVar20,uVar33,uVar31);
                if (uVar31 == 0xffffffffffffffff) break;
                if (uVar31 == 0) goto LAB_1006874a0;
                uVar7 = uVar27 - uVar31;
                if (uVar27 < uVar31) goto LAB_100687648;
                uVar33 = uVar33 + uVar31;
                uVar27 = uVar7;
                if (uVar7 == 0) goto LAB_100687224;
              }
              piVar14 = (int *)___error();
              lVar24 = (long)*piVar14;
              if (*piVar14 != 4) goto LAB_1006874ac;
            } while (uVar27 != 0);
LAB_100687224:
          } while (uVar29 != uVar15);
        }
        puVar16 = (undefined *)FUN_100656df8(puVar20,uStack_90,puStack_98);
        if (puVar16 != (undefined *)0x0) goto SUB_107c05db8;
        puVar16 = puVar30 + 0x68;
        puVar12 = &UNK_108cc4020;
        uVar31 = 2;
        do {
          while( true ) {
            uVar27 = uVar31;
            if (0x7ffffffe < uVar31) {
              uVar27 = 0x7fffffff;
            }
            uVar17 = _write(puVar20,puVar12,uVar27);
            if (uVar17 == 0xffffffffffffffff) break;
            if (uVar17 == 0) {
              puVar16 = &UNK_10b233fc8;
              goto SUB_107c05db8;
            }
            uVar27 = uVar31 - uVar17;
            if (uVar31 < uVar17) goto LAB_1006876d0;
            puVar12 = puVar12 + uVar17;
            uVar31 = uVar27;
            if (uVar27 == 0) goto LAB_1006872f4;
          }
          piVar14 = (int *)___error();
          if (*piVar14 != 4) {
            puVar16 = (undefined *)((long)*piVar14 << 0x20 | 2);
            goto SUB_107c05db8;
          }
        } while (uVar31 != 0);
LAB_1006872f4:
        puVar20 = (ulong *)FUN_100686ddc(puVar30 + 0x18,param_2);
        if (puVar20 != (ulong *)0x0) {
          return puVar20;
        }
        bVar10 = false;
        *(undefined1 *)(param_2 + 3) = 1;
        puVar30 = puVar16;
      } while (puVar16 != puStack_a0);
      puVar20 = (ulong *)(ulong)(uint)param_2[4];
      uVar29 = param_2[2] - 1;
      param_2[2] = uVar29;
      puVar16 = &UNK_108ca14f4;
      uVar31 = 1;
      do {
        while( true ) {
          uVar27 = uVar31;
          if (0x7ffffffe < uVar31) {
            uVar27 = 0x7fffffff;
          }
          uVar17 = _write(puVar20,puVar16,uVar27);
          if (uVar17 == 0xffffffffffffffff) break;
          if (uVar17 == 0) goto LAB_100687700;
          uVar27 = uVar31 - uVar17;
          if (uVar31 < uVar17) goto LAB_1006876d0;
          puVar16 = puVar16 + uVar17;
          uVar31 = uVar27;
          if (uVar27 == 0) goto LAB_100687484;
        }
        piVar14 = (int *)___error();
        lVar24 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_10068770c;
      } while (uVar31 != 0);
LAB_100687484:
      if ((uVar29 != 0) && (uVar31 = param_2[1], uVar31 != 0)) {
        uVar17 = 0;
        puVar11 = (ulong *)*param_2;
        do {
          uVar17 = uVar17 + 1;
          param_2 = puVar11;
          uVar27 = uVar31;
          do {
            while( true ) {
              uVar15 = uVar27;
              if (0x7ffffffe < uVar27) {
                uVar15 = 0x7fffffff;
              }
              uVar15 = _write(puVar20,param_2,uVar15);
              if (uVar15 == 0xffffffffffffffff) break;
              if (uVar15 == 0) goto LAB_100687700;
              uVar32 = uVar27 - uVar15;
              if (uVar27 < uVar15) goto LAB_1006876bc;
              param_2 = (ulong *)((long)param_2 + uVar15);
              uVar27 = uVar32;
              if (uVar32 == 0) goto LAB_1006875e4;
            }
            piVar14 = (int *)___error();
            lVar24 = (long)*piVar14;
            if (*piVar14 != 4) goto LAB_10068770c;
          } while (uVar27 != 0);
LAB_1006875e4:
        } while (uVar17 != uVar29);
      }
    }
    else {
      uVar31 = param_1[2];
      if (uVar31 != 0) goto LAB_100687130;
      param_2[2] = uVar27;
    }
    param_2 = (ulong *)&UNK_108ca2104;
    uVar31 = 0x7fffffff;
    uVar27 = 1;
    while( true ) {
      while( true ) {
        uVar15 = uVar27;
        if (0x7ffffffe < uVar27) {
          uVar15 = 0x7fffffff;
        }
        uVar15 = _write(puVar20,param_2,uVar15);
        if (uVar15 != 0xffffffffffffffff) break;
        piVar14 = (int *)___error();
        lVar24 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_10068770c;
        if (uVar27 == 0) {
          return (ulong *)0x0;
        }
      }
      if (uVar15 == 0) break;
      uVar17 = uVar27 - uVar15;
      if (uVar27 < uVar15) goto LAB_1006876bc;
      param_2 = (ulong *)((long)param_2 + uVar15);
      uVar27 = uVar17;
      if (uVar17 == 0) {
        return (ulong *)0x0;
      }
    }
LAB_100687700:
    puVar16 = &UNK_10b233fc8;
    goto SUB_107c05db8;
  }
  if (uVar27 == 0) {
    param_2 = (ulong *)(ulong)(uint)param_2[4];
    puVar20 = (ulong *)&UNK_108c78dd4;
    uVar31 = 0x7fffffff;
    uVar27 = 4;
    while( true ) {
      while( true ) {
        uVar15 = uVar27;
        if (0x7ffffffe < uVar27) {
          uVar15 = 0x7fffffff;
        }
        uVar15 = _write(param_2,puVar20,uVar15);
        if (uVar15 != 0xffffffffffffffff) break;
        piVar14 = (int *)___error();
        if (*piVar14 != 4) {
          puVar16 = (undefined *)((long)*piVar14 << 0x20 | 2);
          goto SUB_107c05db8;
        }
        if (uVar27 == 0) {
          return (ulong *)0x0;
        }
      }
      if (uVar15 == 0) break;
      uVar17 = uVar27 - uVar15;
      if (uVar27 < uVar15) goto LAB_1006876bc;
      puVar20 = (ulong *)((long)puVar20 + uVar15);
      uVar27 = uVar17;
      if (uVar17 == 0) {
        return (ulong *)0x0;
      }
    }
    puVar16 = &UNK_10b233fc8;
    goto SUB_107c05db8;
  }
  if (uVar27 == 1) {
    param_2 = (ulong *)(ulong)(uint)param_2[4];
    if ((param_1[1] & 1) == 0) {
      puVar20 = (ulong *)&UNK_108ca1574;
      uVar31 = 0x7fffffff;
      uVar27 = 5;
      while( true ) {
        while( true ) {
          uVar15 = uVar27;
          if (0x7ffffffe < uVar27) {
            uVar15 = 0x7fffffff;
          }
          uVar15 = _write(param_2,puVar20,uVar15);
          if (uVar15 != 0xffffffffffffffff) break;
          piVar14 = (int *)___error();
          iVar6 = *piVar14;
          if (iVar6 != 4) goto LAB_10068768c;
          if (uVar27 == 0) {
            return (ulong *)0x0;
          }
        }
        if (uVar15 == 0) break;
        uVar17 = uVar27 - uVar15;
        if (uVar27 < uVar15) goto LAB_1006876bc;
        puVar20 = (ulong *)((long)puVar20 + uVar15);
        uVar27 = uVar17;
        if (uVar17 == 0) {
          return (ulong *)0x0;
        }
      }
    }
    else {
      puVar20 = (ulong *)&UNK_108c78dd0;
      uVar31 = 0x7fffffff;
      uVar27 = 4;
      while( true ) {
        while( true ) {
          uVar15 = uVar27;
          if (0x7ffffffe < uVar27) {
            uVar15 = 0x7fffffff;
          }
          uVar15 = _write(param_2,puVar20,uVar15);
          if (uVar15 != 0xffffffffffffffff) break;
          piVar14 = (int *)___error();
          iVar6 = *piVar14;
          if (iVar6 != 4) goto LAB_10068768c;
          if (uVar27 == 0) {
            return (ulong *)0x0;
          }
        }
        if (uVar15 == 0) break;
        uVar17 = uVar27 - uVar15;
        if (uVar27 < uVar15) goto LAB_1006876bc;
        puVar20 = (ulong *)((long)puVar20 + uVar15);
        uVar27 = uVar17;
        if (uVar17 == 0) {
          return (ulong *)0x0;
        }
      }
    }
    puVar16 = &UNK_10b233fc8;
    goto SUB_107c05db8;
  }
  if (param_1[1] == 0) {
    lVar24 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                       (param_1[2],apuStack_88);
    if (lVar24 == 0x14) {
      return (ulong *)0x0;
    }
    param_2 = (ulong *)(ulong)(uint)param_2[4];
    puVar20 = (ulong *)((long)apuStack_88 + lVar24);
    uVar31 = 0x7fffffff;
    uVar27 = 0x14 - lVar24;
    while( true ) {
      while( true ) {
        uVar15 = uVar27;
        if (0x7ffffffe < uVar27) {
          uVar15 = 0x7fffffff;
        }
        uVar15 = _write(param_2,puVar20,uVar15);
        if (uVar15 != 0xffffffffffffffff) break;
        piVar14 = (int *)___error();
        lVar24 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_1006876f0;
        if (uVar27 == 0) {
          return (ulong *)0x0;
        }
      }
      if (uVar15 == 0) break;
      uVar17 = uVar27 - uVar15;
      if (uVar27 < uVar15) goto LAB_1006876bc;
      puVar20 = (ulong *)((long)puVar20 + uVar15);
      uVar27 = uVar17;
      if (uVar17 == 0) {
        return (ulong *)0x0;
      }
    }
  }
  else {
    if (param_1[1] != 1) {
      if ((param_1[2] & 0x7fffffffffffffff) < 0x7ff0000000000000) {
        lVar24 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                           (apuStack_88);
        if ((ulong *)(lVar24 - (long)apuStack_88) == (ulong *)0x0) {
          return (ulong *)0x0;
        }
        param_2 = (ulong *)(ulong)(uint)param_2[4];
        unaff_x21 = apuStack_88;
        unaff_x22 = 0x7fffffff;
        puVar20 = (ulong *)(lVar24 - (long)apuStack_88);
        while( true ) {
          while( true ) {
            puVar11 = puVar20;
            if ((ulong *)0x7ffffffe < puVar20) {
              puVar11 = (ulong *)0x7fffffff;
            }
            puVar11 = (ulong *)_write(param_2,unaff_x21,puVar11);
            if (puVar11 != (ulong *)0xffffffffffffffff) break;
            piVar14 = (int *)___error();
            lVar24 = (long)*piVar14;
            if (*piVar14 != 4) goto LAB_1006876f0;
            if (puVar20 == (ulong *)0x0) {
              return (ulong *)0x0;
            }
          }
          if (puVar11 == (ulong *)0x0) goto LAB_1006876e4;
          puVar18 = (ulong *)((long)puVar20 - (long)puVar11);
          if (puVar20 < puVar11) break;
          unaff_x21 = (ulong **)((long)unaff_x21 + (long)puVar11);
          puVar20 = puVar18;
          if (puVar18 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
        }
        uVar27 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                           (puVar11,puVar20,puVar20,&UNK_10b233fe0);
LAB_10068775c:
        uVar35 = 0x10068776c;
        auVar37 = FUN_107c05cd0(uVar27,0x14,&UNK_10b2364b8);
        puVar11 = auVar37._8_8_;
        ppuVar9 = &puStack_a0;
        puVar18 = auVar37._0_8_;
        do {
          *(ulong **)((long)ppuVar9 + -0x60) = unaff_x28;
          *(undefined8 *)((long)ppuVar9 + -0x58) = unaff_x27;
          *(undefined8 *)((long)ppuVar9 + -0x50) = unaff_x26;
          *(ulong **)((long)ppuVar9 + -0x48) = unaff_x25;
          *(ulong *)((long)ppuVar9 + -0x40) = unaff_x24;
          *(ulong *)((long)ppuVar9 + -0x38) = unaff_x23;
          *(long *)((long)ppuVar9 + -0x30) = unaff_x22;
          *(ulong ***)((long)ppuVar9 + -0x28) = unaff_x21;
          *(ulong **)((long)ppuVar9 + -0x20) = puVar20;
          *(ulong **)((long)ppuVar9 + -0x18) = param_2;
          *(undefined1 **)((long)ppuVar9 + -0x10) = puVar34;
          *(undefined8 *)((long)ppuVar9 + -8) = uVar35;
          puVar34 = (undefined1 *)((long)ppuVar9 + -0x10);
          uVar27 = *puVar18 ^ 0x8000000000000000;
          if (-1 < (long)*puVar18) {
            uVar27 = 5;
          }
          if ((long)uVar27 < 3) {
            if (uVar27 == 0) {
              plVar28 = (long *)*puVar11;
LAB_100687824:
              lVar24 = plVar28[2];
              if ((ulong)(*plVar28 - lVar24) < 4) {
                puVar18 = (ulong *)thunk_FUN_108855060(plVar28,lVar24,4,1,1);
                lVar24 = plVar28[2];
              }
              lVar25 = plVar28[1];
              uVar26 = 0x6c6c756e;
            }
            else {
              if (uVar27 != 1) {
                plVar28 = (long *)*puVar11;
                if (puVar18[1] == 0) {
                  lVar25 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                                     (puVar18[2],(undefined1 *)((long)ppuVar9 + -0x88));
                  uVar27 = 0x14 - lVar25;
                  lVar24 = plVar28[2];
                  if ((ulong)(*plVar28 - lVar24) < uVar27) {
                    thunk_FUN_108855060(plVar28,lVar24,uVar27,1,1);
                    lVar24 = plVar28[2];
                  }
                  puVar18 = (ulong *)_memcpy(plVar28[1] + lVar24,
                                             (undefined1 *)((long)ppuVar9 + lVar25 + -0x88),uVar27);
                  lVar24 = lVar24 + uVar27;
                  goto LAB_100687c08;
                }
                if (puVar18[1] == 1) {
                  uVar31 = puVar18[2];
                  uVar27 = -uVar31;
                  if (-1 < (long)uVar31) {
                    uVar27 = uVar31;
                  }
                  uVar15 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                                     (uVar27,(undefined1 *)((long)ppuVar9 + -0x88));
                  uVar27 = uVar15;
                  if ((long)uVar31 < 0) {
                    uVar27 = uVar15 - 1;
                    if (0x13 < uVar27) {
                      puVar16 = &UNK_10b2364b8;
                      auVar37 = FUN_107c05cd0(uVar27,0x14);
                      uVar35 = auVar37._8_8_;
                      puVar19 = auVar37._0_8_;
                      *(long *)((long)ppuVar9 + -0xc0) = unaff_x22;
                      *(ulong *)((long)ppuVar9 + -0xb8) = uVar31;
                      *(ulong *)((long)ppuVar9 + -0xb0) = uVar27;
                      *(long **)((long)ppuVar9 + -0xa8) = plVar28;
                      *(undefined1 **)((long)ppuVar9 + -0xa0) = puVar34;
                      *(undefined8 *)((long)ppuVar9 + -0x98) = 0x100687d3c;
                      if (puVar16 != (undefined *)0x0) {
                        lVar24 = _malloc(puVar16);
                        if (lVar24 != 0) goto LAB_100687d80;
                        FUN_107c03c64(1,puVar16);
                        uVar35 = extraout_x1;
                      }
                      lVar24 = 1;
LAB_100687d80:
                      puVar20 = (ulong *)_memcpy(lVar24,uVar35,puVar16);
                      *puVar19 = 0x8000000000000003;
                      puVar19[1] = puVar16;
                      puVar19[2] = lVar24;
                      puVar19[3] = puVar16;
                      return puVar20;
                    }
                    *(undefined1 *)((long)ppuVar9 + (uVar15 - 0x89)) = 0x2d;
                  }
                  uVar31 = 0x14 - uVar27;
                  lVar24 = plVar28[2];
                  if ((ulong)(*plVar28 - lVar24) < uVar31) {
                    thunk_FUN_108855060(plVar28,lVar24,uVar31,1,1);
                    lVar24 = plVar28[2];
                  }
                  puVar18 = (ulong *)_memcpy(plVar28[1] + lVar24,
                                             (undefined1 *)((long)ppuVar9 + (uVar27 - 0x88)),uVar31)
                  ;
                  lVar24 = lVar24 + uVar31;
                  goto LAB_100687c08;
                }
                if ((puVar18[2] & 0x7fffffffffffffff) < 0x7ff0000000000000) {
                  lVar24 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                                     ((undefined1 *)((long)ppuVar9 + -0x88));
                  uVar27 = lVar24 - (long)((long)ppuVar9 + -0x88);
                  lVar24 = plVar28[2];
                  if ((ulong)(*plVar28 - lVar24) < uVar27) {
                    thunk_FUN_108855060(plVar28,lVar24,uVar27,1,1);
                    lVar24 = plVar28[2];
                  }
                  puVar18 = (ulong *)_memcpy(plVar28[1] + lVar24,
                                             (undefined1 *)((long)ppuVar9 + -0x88),uVar27);
                  lVar24 = lVar24 + uVar27;
                  goto LAB_100687c08;
                }
                goto LAB_100687824;
              }
              plVar28 = (long *)*puVar11;
              if ((puVar18[1] & 1) == 0) {
                lVar24 = plVar28[2];
                if ((ulong)(*plVar28 - lVar24) < 5) {
                  puVar18 = (ulong *)thunk_FUN_108855060(plVar28,lVar24,5,1,1);
                  lVar24 = plVar28[2];
                }
                lVar25 = plVar28[1];
                *(undefined4 *)(lVar25 + lVar24) = 0x736c6166;
                *(undefined1 *)((undefined4 *)(lVar25 + lVar24) + 1) = 0x65;
                lVar24 = lVar24 + 5;
                goto LAB_100687c08;
              }
              lVar24 = plVar28[2];
              if ((ulong)(*plVar28 - lVar24) < 4) {
                puVar18 = (ulong *)thunk_FUN_108855060(plVar28,lVar24,4,1,1);
                lVar24 = plVar28[2];
              }
              lVar25 = plVar28[1];
              uVar26 = 0x65757274;
            }
            *(undefined4 *)(lVar25 + lVar24) = uVar26;
            lVar24 = lVar24 + 4;
LAB_100687c08:
            plVar28[2] = lVar24;
            return puVar18;
          }
          if (uVar27 == 3) {
            uVar27 = puVar18[2];
            uVar29 = puVar18[3];
            puVar20 = (ulong *)*puVar11;
            puVar34 = *(undefined1 **)((long)ppuVar9 + -0x10);
            uVar35 = *(undefined8 *)((long)ppuVar9 + -8);
            uVar31 = *(ulong *)((long)ppuVar9 + -0x20);
            puVar11 = *(ulong **)((long)ppuVar9 + -0x18);
            plVar28 = *(long **)((long)ppuVar9 + -0x30);
            uVar17 = *(ulong *)((long)ppuVar9 + -0x28);
            unaff_x24 = *(ulong *)((long)ppuVar9 + -0x40);
            lVar24 = *(long *)((long)ppuVar9 + -0x38);
            lVar25 = *(long *)((long)ppuVar9 + -0x50);
            unaff_x25 = *(ulong **)((long)ppuVar9 + -0x48);
            uVar15 = *(ulong *)((long)ppuVar9 + -0x60);
            uVar36 = *(undefined8 *)((long)ppuVar9 + -0x58);
            goto SUB_1003f02f4;
          }
          if (uVar27 != 4) {
            uVar31 = puVar18[6];
            plVar28 = (long *)*puVar11;
            uVar27 = puVar11[3];
            puVar11[3] = uVar27 + 1;
            *(undefined1 *)(puVar11 + 4) = 0;
            lVar24 = plVar28[2];
            if (*plVar28 == lVar24) {
              thunk_FUN_108855060(plVar28,lVar24,1,1,1);
              lVar24 = plVar28[2];
            }
            *(undefined1 *)(plVar28[1] + lVar24) = 0x7b;
            lVar24 = lVar24 + 1;
            plVar28[2] = lVar24;
            if (uVar31 == 0) {
              puVar11[3] = uVar27;
              if (*plVar28 == lVar24) {
                thunk_FUN_108855060(plVar28,lVar24,1,1,1);
                lVar24 = plVar28[2];
              }
              uVar23 = 0;
              *(undefined1 *)(plVar28[1] + lVar24) = 0x7d;
              plVar28[2] = lVar24 + 1;
              uVar27 = puVar18[2];
            }
            else {
              uVar23 = 1;
              uVar27 = puVar18[2];
            }
            if (uVar27 == 0) {
              *(undefined1 *)((long)ppuVar9 + -0x88) = 0;
              *(undefined1 *)((long)ppuVar9 + -0x87) = uVar23;
              *(ulong **)((long)ppuVar9 + -0x80) = puVar11;
              puVar20 = (ulong *)FUN_1013febd0((undefined1 *)((long)ppuVar9 + -0x88));
              return puVar20;
            }
            uVar15 = puVar18[1];
            lVar25 = uVar15 + uVar27 * 0x68;
            uVar27 = *(ulong *)(uVar15 + 8);
            uVar29 = *(ulong *)(uVar15 + 0x10);
            plVar28 = (long *)*puVar11;
            if (uVar31 == 0) {
              lVar24 = plVar28[2];
              if ((ulong)(*plVar28 - lVar24) < 2) {
                thunk_FUN_108855060(plVar28,lVar24,2,1,1);
                lVar24 = plVar28[2];
              }
              *(undefined2 *)(plVar28[1] + lVar24) = 0xa2c;
              lVar24 = lVar24 + 2;
              plVar28[2] = lVar24;
              uVar31 = puVar11[3];
            }
            else {
              lVar24 = plVar28[2];
              if (*plVar28 == lVar24) {
                thunk_FUN_108855060(plVar28,lVar24,1,1,1);
                lVar24 = plVar28[2];
              }
              *(undefined1 *)(plVar28[1] + lVar24) = 10;
              lVar24 = lVar24 + 1;
              plVar28[2] = lVar24;
              uVar31 = puVar11[3];
            }
            if (uVar31 != 0) {
              unaff_x24 = puVar11[1];
              unaff_x25 = (ulong *)puVar11[2];
              do {
                if ((ulong *)(*plVar28 - lVar24) < unaff_x25) {
                  thunk_FUN_108855060(plVar28,lVar24,unaff_x25,1,1);
                  lVar24 = plVar28[2];
                }
                _memcpy(lVar24 + plVar28[1],unaff_x24,unaff_x25);
                lVar24 = lVar24 + (long)unaff_x25;
                plVar28[2] = lVar24;
                uVar31 = uVar31 - 1;
              } while (uVar31 != 0);
            }
            uVar36 = 0;
            puVar20 = (ulong *)*puVar11;
            uVar35 = 0x100687aa0;
            ppuVar9 = (undefined **)((long)ppuVar9 + -0x90);
            uVar31 = uVar27;
            uVar17 = uVar29;
SUB_1003f02f4:
            *(ulong *)((long)ppuVar9 + -0x60) = uVar15;
            *(undefined8 *)((long)ppuVar9 + -0x58) = uVar36;
            *(long *)((long)ppuVar9 + -0x50) = lVar25;
            *(ulong **)((long)ppuVar9 + -0x48) = unaff_x25;
            *(ulong *)((long)ppuVar9 + -0x40) = unaff_x24;
            *(long *)((long)ppuVar9 + -0x38) = lVar24;
            *(long **)((long)ppuVar9 + -0x30) = plVar28;
            *(ulong *)((long)ppuVar9 + -0x28) = uVar17;
            *(ulong *)((long)ppuVar9 + -0x20) = uVar31;
            *(ulong **)((long)ppuVar9 + -0x18) = puVar11;
            *(undefined1 **)((long)ppuVar9 + -0x10) = puVar34;
            *(undefined8 *)((long)ppuVar9 + -8) = uVar35;
            uVar31 = puVar20[2];
            puVar11 = puVar20;
            if (*puVar20 == uVar31) {
              puVar11 = (ulong *)thunk_FUN_108855060(puVar20,uVar31,1,1,1);
              uVar31 = puVar20[2];
            }
            *(undefined1 *)(puVar20[1] + uVar31) = 0x22;
            uVar31 = uVar31 + 1;
            puVar20[2] = uVar31;
            uVar35 = 0x3030755c;
            uVar36 = 0;
            do {
              uVar15 = 0;
              do {
                uVar17 = uVar15;
                if (uVar29 == uVar17) {
                  if (uVar29 != 0) {
                    if (*puVar20 - uVar31 < uVar29) {
                      thunk_FUN_108855060(puVar20,uVar31,uVar29,1,1);
                      uVar31 = puVar20[2];
                    }
                    puVar11 = (ulong *)_memcpy(puVar20[1] + uVar31,uVar27,uVar29);
                    uVar31 = uVar31 + uVar29;
                    puVar20[2] = uVar31;
                  }
                  if (*puVar20 == uVar31) {
                    puVar11 = (ulong *)thunk_FUN_108855060(puVar20,uVar31,1,1,1);
                    uVar31 = puVar20[2];
                  }
                  *(undefined1 *)(puVar20[1] + uVar31) = 0x22;
                  puVar20[2] = uVar31 + 1;
                  return puVar11;
                }
                bVar3 = *(byte *)(uVar27 + uVar17);
                cVar4 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar3];
                uVar15 = uVar17 + 1;
              } while (cVar4 == '\0');
              if (uVar17 != 0) {
                *(undefined8 *)((long)ppuVar9 + -0x68) = uVar36;
                *(undefined8 *)((long)ppuVar9 + -0x70) = uVar35;
                if (*puVar20 - uVar31 < uVar17) {
                  thunk_FUN_108855060(puVar20,uVar31,uVar17,1,1);
                  uVar31 = puVar20[2];
                }
                puVar11 = (ulong *)_memcpy(puVar20[1] + uVar31,uVar27,uVar17);
                uVar31 = (uVar31 + uVar15) - 1;
                puVar20[2] = uVar31;
                uVar36 = *(undefined8 *)((long)ppuVar9 + -0x68);
                uVar35 = *(undefined8 *)((long)ppuVar9 + -0x70);
              }
              uVar27 = uVar27 + uVar15;
              uVar29 = uVar29 - uVar15;
              if (cVar4 == 'u') {
                uVar23 = (&
                         __ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E
                         )[bVar3 >> 4];
                uVar5 = (&
                        __ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E
                        )[(ulong)bVar3 & 0xf];
                if (*puVar20 - uVar31 < 6) {
                  *(undefined8 *)((long)ppuVar9 + -0x68) = uVar36;
                  *(undefined8 *)((long)ppuVar9 + -0x70) = uVar35;
                  puVar11 = (ulong *)thunk_FUN_108855060(puVar20,uVar31,6,1,1);
                  uVar36 = *(undefined8 *)((long)ppuVar9 + -0x68);
                  uVar35 = *(undefined8 *)((long)ppuVar9 + -0x70);
                  uVar31 = puVar20[2];
                }
                puVar1 = (undefined4 *)(puVar20[1] + uVar31);
                *puVar1 = (int)uVar35;
                *(undefined1 *)(puVar1 + 1) = uVar23;
                *(undefined1 *)((long)puVar1 + 5) = uVar5;
                uVar31 = uVar31 + 6;
                puVar20[2] = uVar31;
              }
              else {
                if (*puVar20 - uVar31 < 2) {
                  *(undefined8 *)((long)ppuVar9 + -0x68) = uVar36;
                  *(undefined8 *)((long)ppuVar9 + -0x70) = uVar35;
                  puVar11 = (ulong *)thunk_FUN_108855060(puVar20,uVar31,2,1,1);
                  uVar36 = *(undefined8 *)((long)ppuVar9 + -0x68);
                  uVar35 = *(undefined8 *)((long)ppuVar9 + -0x70);
                  uVar31 = puVar20[2];
                }
                uVar15 = puVar20[1];
                *(undefined1 *)(uVar15 + uVar31) = 0x5c;
                ((undefined1 *)(uVar15 + uVar31))[1] = cVar4;
                uVar31 = uVar31 + 2;
                puVar20[2] = uVar31;
              }
            } while( true );
          }
          unaff_x24 = *(ulong *)((long)ppuVar9 + -0x40);
          *(undefined8 *)((long)ppuVar9 + -0x60) = *(undefined8 *)((long)ppuVar9 + -0x60);
          *(undefined8 *)((long)ppuVar9 + -0x58) = *(undefined8 *)((long)ppuVar9 + -0x58);
          *(undefined8 *)((long)ppuVar9 + -0x50) = *(undefined8 *)((long)ppuVar9 + -0x50);
          *(undefined8 *)((long)ppuVar9 + -0x48) = *(undefined8 *)((long)ppuVar9 + -0x48);
          *(ulong *)((long)ppuVar9 + -0x40) = unaff_x24;
          *(undefined8 *)((long)ppuVar9 + -0x38) = *(undefined8 *)((long)ppuVar9 + -0x38);
          *(undefined8 *)((long)ppuVar9 + -0x30) = *(undefined8 *)((long)ppuVar9 + -0x30);
          *(undefined8 *)((long)ppuVar9 + -0x28) = *(undefined8 *)((long)ppuVar9 + -0x28);
          *(undefined8 *)((long)ppuVar9 + -0x20) = *(undefined8 *)((long)ppuVar9 + -0x20);
          *(undefined8 *)((long)ppuVar9 + -0x18) = *(undefined8 *)((long)ppuVar9 + -0x18);
          *(undefined8 *)((long)ppuVar9 + -0x10) = *(undefined8 *)((long)ppuVar9 + -0x10);
          *(undefined8 *)((long)ppuVar9 + -8) = *(undefined8 *)((long)ppuVar9 + -8);
          puVar34 = (undefined1 *)((long)ppuVar9 + -0x10);
          puVar20 = (ulong *)puVar18[2];
          uVar27 = puVar18[3];
          plVar28 = (long *)*puVar11;
          unaff_x23 = puVar11[3];
          puVar11[3] = unaff_x23 + 1;
          *(undefined1 *)(puVar11 + 4) = 0;
          lVar24 = plVar28[2];
          if (*plVar28 == lVar24) {
            thunk_FUN_108855060(plVar28,lVar24,1,1,1);
            lVar24 = plVar28[2];
            *(undefined1 *)(plVar28[1] + lVar24) = 0x5b;
            lVar24 = lVar24 + 1;
            plVar28[2] = lVar24;
          }
          else {
            *(undefined1 *)(plVar28[1] + lVar24) = 0x5b;
            lVar24 = lVar24 + 1;
            plVar28[2] = lVar24;
          }
          if (uVar27 == 0) {
            puVar11[3] = unaff_x23;
            if (*plVar28 == lVar24) {
              thunk_FUN_108855060(plVar28,lVar24,1,1,1);
              lVar24 = plVar28[2];
            }
            *(undefined1 *)(plVar28[1] + lVar24) = 0x5d;
            plVar28[2] = lVar24 + 1;
            *(undefined1 *)((long)ppuVar9 + -0x70) = 0;
            *(undefined1 *)((long)ppuVar9 + -0x6f) = 0;
            *(ulong **)((long)ppuVar9 + -0x68) = puVar11;
            puVar20 = (ulong *)FUN_101400424((undefined1 *)((long)ppuVar9 + -0x70));
            return puVar20;
          }
          unaff_x25 = puVar20 + uVar27 * 9;
          unaff_x26 = 1;
          unaff_x28 = (ulong *)0xa2c;
          plVar28 = (long *)*puVar11;
          lVar24 = plVar28[2];
          if (*plVar28 == lVar24) {
            thunk_FUN_108855060(plVar28,lVar24,1,1,1);
            lVar24 = plVar28[2];
          }
          *(undefined1 *)(plVar28[1] + lVar24) = 10;
          unaff_x22 = lVar24 + 1;
          plVar28[2] = unaff_x22;
          uVar27 = puVar11[3];
          if (uVar27 != 0) {
            unaff_x23 = puVar11[1];
            unaff_x24 = puVar11[2];
            do {
              if ((ulong)(*plVar28 - unaff_x22) < unaff_x24) {
                thunk_FUN_108855060(plVar28,unaff_x22,unaff_x24,1,1);
                unaff_x22 = plVar28[2];
              }
              _memcpy(plVar28[1] + unaff_x22,unaff_x23,unaff_x24);
              unaff_x22 = unaff_x22 + unaff_x24;
              plVar28[2] = unaff_x22;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          unaff_x27 = 0;
          unaff_x21 = (ulong **)(puVar20 + 9);
          uVar35 = 0x1006334c4;
          ppuVar9 = (undefined **)((long)ppuVar9 + -0x70);
          puVar18 = puVar20;
          param_2 = puVar11;
        } while( true );
      }
      param_2 = (ulong *)(ulong)(uint)param_2[4];
      puVar20 = (ulong *)&UNK_108c78dd4;
      uVar31 = 0x7fffffff;
      uVar27 = 4;
      while( true ) {
        while( true ) {
          uVar15 = uVar27;
          if (0x7ffffffe < uVar27) {
            uVar15 = 0x7fffffff;
          }
          uVar15 = _write(param_2,puVar20,uVar15);
          if (uVar15 != 0xffffffffffffffff) break;
          piVar14 = (int *)___error();
          if (*piVar14 != 4) {
            puVar16 = (undefined *)((long)*piVar14 << 0x20 | 2);
            goto SUB_107c05db8;
          }
          if (uVar27 == 0) {
            return (ulong *)0x0;
          }
        }
        if (uVar15 == 0) break;
        uVar17 = uVar27 - uVar15;
        if (uVar27 < uVar15) goto LAB_1006876bc;
        puVar20 = (ulong *)((long)puVar20 + uVar15);
        uVar27 = uVar17;
        if (uVar17 == 0) {
          return (ulong *)0x0;
        }
      }
      puVar16 = &UNK_10b233fc8;
      goto SUB_107c05db8;
    }
    puVar20 = (ulong *)param_1[2];
    puVar11 = (ulong *)-(long)puVar20;
    if (-1 < (long)puVar20) {
      puVar11 = puVar20;
    }
    uVar31 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                       (puVar11,apuStack_88);
    if ((long)puVar20 < 0) {
      uVar27 = uVar31 - 1;
      if (0x13 < uVar27) goto LAB_10068775c;
      *(undefined1 *)((long)&uStack_90 + uVar31 + 7) = 0x2d;
    }
    else {
      uVar27 = uVar31;
      if (uVar31 == 0x14) {
        return (ulong *)0x0;
      }
    }
    param_2 = (ulong *)(ulong)(uint)param_2[4];
    puVar20 = (ulong *)((long)apuStack_88 + uVar27);
    uVar31 = 0x7fffffff;
    uVar27 = 0x14 - uVar27;
    while( true ) {
      while( true ) {
        uVar15 = uVar27;
        if (0x7ffffffe < uVar27) {
          uVar15 = 0x7fffffff;
        }
        uVar15 = _write(param_2,puVar20,uVar15);
        if (uVar15 != 0xffffffffffffffff) break;
        piVar14 = (int *)___error();
        lVar24 = (long)*piVar14;
        if (*piVar14 != 4) goto LAB_1006876f0;
        if (uVar27 == 0) {
          return (ulong *)0x0;
        }
      }
      if (uVar15 == 0) break;
      uVar17 = uVar27 - uVar15;
      if (uVar27 < uVar15) goto LAB_1006876bc;
      puVar20 = (ulong *)((long)puVar20 + uVar15);
      uVar27 = uVar17;
      if (uVar17 == 0) {
        return (ulong *)0x0;
      }
    }
  }
  goto LAB_1006876e4;
LAB_1006876f0:
  puVar16 = (undefined *)(lVar24 << 0x20 | 2);
  unaff_x19 = param_2;
  unaff_x20 = puVar20;
  goto LAB_1006876f8;
LAB_10068768c:
  puVar16 = (undefined *)((long)iVar6 << 0x20 | 2);
  goto SUB_107c05db8;
LAB_100633e1c:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar29,uVar15,uVar15,&UNK_10b233fe0);
LAB_100633e30:
  param_2 = (ulong *)&UNK_108ca7637;
  puVar16 = (undefined *)0x7fffffff;
  puVar30 = (undefined *)0x1;
  while( true ) {
    while( true ) {
      puVar12 = puVar30;
      if ((undefined *)0x7ffffffe < puVar30) {
        puVar12 = (undefined *)0x7fffffff;
      }
      puVar12 = (undefined *)_write(uVar27,param_2,puVar12);
      if (puVar12 != (undefined *)0xffffffffffffffff) break;
      piVar14 = (int *)___error();
      lVar24 = (long)*piVar14;
      if (*piVar14 != 4) goto LAB_100633e9c;
      if (puVar30 == (undefined *)0x0) {
        return (ulong *)0x0;
      }
    }
    if (puVar12 == (undefined *)0x0) break;
    puVar22 = puVar30 + -(long)puVar12;
    if (puVar30 < puVar12) goto LAB_100633ed8;
    param_2 = (ulong *)((long)param_2 + (long)puVar12);
    puVar30 = puVar22;
    if (puVar22 == (undefined *)0x0) {
      return (ulong *)0x0;
    }
  }
LAB_100633e90:
  puVar16 = &UNK_10b233fc8;
  goto SUB_107c05db8;
LAB_100633e9c:
  puVar16 = (undefined *)(lVar24 << 0x20 | 2);
  goto SUB_107c05db8;
LAB_1006874ac:
  puVar16 = (undefined *)(lVar24 << 0x20 | 2);
  goto SUB_107c05db8;
LAB_1006874a0:
  puVar16 = &UNK_10b233fc8;
  goto SUB_107c05db8;
LAB_100687648:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar31,uVar27,uVar27,&UNK_10b233fe0);
LAB_10068765c:
  puVar16 = &UNK_10b233fc8;
  goto SUB_107c05db8;
LAB_10068770c:
  puVar16 = (undefined *)(lVar24 << 0x20 | 2);
  goto SUB_107c05db8;
LAB_1006876bc:
  uVar17 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                     (uVar15,uVar27,uVar27,&UNK_10b233fe0);
LAB_1006876d0:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar17,uVar31,uVar31,&UNK_10b233fe0);
LAB_1006876e4:
  puVar16 = &UNK_10b233fc8;
  unaff_x19 = param_2;
  unaff_x20 = puVar20;
LAB_1006876f8:
  unaff_x30 = 0x1006876fc;
  register0x00000008 = (BADSPACEBASE *)&puStack_a0;
  unaff_x29 = puVar34;
SUB_107c05db8:
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 1;
  *(undefined **)((long)register0x00000008 + -0x40) = puVar16;
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
  puVar20 = (ulong *)_malloc(0x28);
  if (puVar20 == (ulong *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
    (*pcVar8)();
  }
  uVar27 = *(ulong *)((long)register0x00000008 + -0x48);
  uVar15 = *(ulong *)((long)register0x00000008 + -0x30);
  uVar31 = *(ulong *)((long)register0x00000008 + -0x38);
  puVar20[1] = *(ulong *)((long)register0x00000008 + -0x40);
  *puVar20 = uVar27;
  puVar20[3] = uVar15;
  puVar20[2] = uVar31;
  puVar20[4] = *(ulong *)((long)register0x00000008 + -0x28);
  return puVar20;
}

