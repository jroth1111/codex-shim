
undefined8 * FUN_10064ce04(undefined8 *param_1,undefined *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  bool bVar14;
  long extraout_x8;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 unaff_x23;
  undefined *puVar18;
  undefined *puVar19;
  char *pcVar20;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  long *plVar21;
  undefined1 auVar22 [16];
  undefined2 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [3];
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined *puStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  uint auStack_f8 [2];
  undefined8 uStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_88;
  uint uStack_7c;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  
  puStack_88 = param_1 + (long)param_2 * 3;
  puStack_68 = (undefined *)param_3[2];
  puVar12 = (undefined8 *)(puStack_68 + 1);
  param_3[2] = puVar12;
  *(undefined1 *)(param_3 + 3) = 0;
  uVar15 = (ulong)*(uint *)(param_3 + 4);
  puVar18 = &UNK_108ca7633;
  puVar19 = (undefined *)0x7fffffff;
  puVar11 = (undefined8 *)0x1;
  do {
    while( true ) {
      puVar4 = puVar11;
      if ((undefined8 *)0x7ffffffe < puVar11) {
        puVar4 = (undefined8 *)0x7fffffff;
      }
      puVar4 = (undefined8 *)_write(uVar15,puVar18,puVar4);
      if (puVar4 == (undefined8 *)0xffffffffffffffff) break;
      if (puVar4 == (undefined8 *)0x0) goto LAB_10064d21c;
      puVar5 = (undefined8 *)((long)puVar11 - (long)puVar4);
      if (puVar11 < puVar4) {
        puVar4 = (undefined8 *)
                 __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                           (puVar4,puVar11,puVar11,&UNK_10b233fe0);
        goto LAB_10064d264;
      }
      puVar18 = puVar18 + (long)puVar4;
      puVar11 = puVar5;
      if (puVar5 == (undefined8 *)0x0) goto LAB_10064ceb0;
    }
    piVar7 = (int *)___error();
    lVar16 = (long)*piVar7;
    if (*piVar7 != 4) goto LAB_10064d228;
  } while (puVar11 != (undefined8 *)0x0);
LAB_10064ceb0:
  if (param_2 != (undefined *)0x0) {
    puStack_78 = (undefined8 *)*param_3;
    puStack_70 = (undefined8 *)param_3[1];
    uStack_7c = (uint)(puStack_70 == (undefined8 *)0x0 || puVar12 == (undefined8 *)0x0);
    bVar14 = true;
    do {
      unaff_x27 = param_1[1];
      unaff_x28 = param_1[2];
      if (bVar14) {
        puVar11 = (undefined8 *)&UNK_108ca14f4;
        puVar4 = (undefined8 *)0x1;
        do {
          while( true ) {
            puVar12 = puVar4;
            if ((undefined8 *)0x7ffffffe < puVar4) {
              puVar12 = (undefined8 *)0x7fffffff;
            }
            puVar5 = (undefined8 *)_write(uVar15,puVar11,puVar12);
            if (puVar5 == (undefined8 *)0xffffffffffffffff) break;
            if (puVar5 == (undefined8 *)0x0) goto LAB_10064d21c;
            puVar12 = (undefined8 *)((long)puVar4 - (long)puVar5);
            if (puVar4 < puVar5) goto LAB_10064d0c4;
            puVar11 = (undefined8 *)((long)puVar11 + (long)puVar5);
            puVar4 = puVar12;
            if (puVar12 == (undefined8 *)0x0) goto LAB_10064cf90;
          }
          piVar7 = (int *)___error();
          lVar16 = (long)*piVar7;
          if (*piVar7 != 4) goto LAB_10064d228;
          puVar12 = puVar4;
        } while (puVar4 != (undefined8 *)0x0);
      }
      else {
        puVar11 = (undefined8 *)&UNK_108cc4022;
        puVar4 = (undefined8 *)0x2;
        do {
          while( true ) {
            puVar12 = puVar4;
            if ((undefined8 *)0x7ffffffe < puVar4) {
              puVar12 = (undefined8 *)0x7fffffff;
            }
            puVar5 = (undefined8 *)_write(uVar15,puVar11,puVar12);
            if (puVar5 == (undefined8 *)0xffffffffffffffff) break;
            if (puVar5 == (undefined8 *)0x0) goto LAB_10064d21c;
            puVar12 = (undefined8 *)((long)puVar4 - (long)puVar5);
            if (puVar4 < puVar5) goto LAB_10064d0c4;
            puVar11 = (undefined8 *)((long)puVar11 + (long)puVar5);
            puVar4 = puVar12;
            if (puVar12 == (undefined8 *)0x0) goto LAB_10064cf90;
          }
          piVar7 = (int *)___error();
          lVar16 = (long)*piVar7;
          if (*piVar7 != 4) goto LAB_10064d228;
          puVar12 = puVar4;
        } while (puVar4 != (undefined8 *)0x0);
      }
LAB_10064cf90:
      if ((uStack_7c & 1) == 0) {
        puVar19 = (undefined *)0x0;
        do {
          puVar18 = puVar19;
          puVar19 = puVar18 + 1;
          puVar11 = puStack_78;
          puVar4 = puStack_70;
          do {
            while( true ) {
              puVar12 = puVar4;
              if ((undefined8 *)0x7ffffffe < puVar4) {
                puVar12 = (undefined8 *)0x7fffffff;
              }
              puVar5 = (undefined8 *)_write(uVar15,puVar11,puVar12);
              if (puVar5 == (undefined8 *)0xffffffffffffffff) break;
              if (puVar5 == (undefined8 *)0x0) goto LAB_10064d21c;
              puVar12 = (undefined8 *)((long)puVar4 - (long)puVar5);
              if (puVar4 < puVar5) goto LAB_10064d0c4;
              puVar11 = (undefined8 *)((long)puVar11 + (long)puVar5);
              puVar4 = puVar12;
              if (puVar12 == (undefined8 *)0x0) goto LAB_10064cfd4;
            }
            piVar7 = (int *)___error();
            lVar16 = (long)*piVar7;
            if (*piVar7 != 4) goto LAB_10064d228;
            puVar12 = puVar4;
          } while (puVar4 != (undefined8 *)0x0);
LAB_10064cfd4:
        } while (puVar18 != puStack_68);
      }
      puVar6 = (undefined *)FUN_100656df8(uVar15,unaff_x27,unaff_x28);
      if (puVar6 != (undefined *)0x0) goto LAB_10064d230;
      bVar14 = false;
      param_1 = param_1 + 3;
      *(undefined1 *)(param_3 + 3) = 1;
    } while (param_1 != puStack_88);
    goto LAB_10064d0d8;
  }
  param_3[2] = puStack_68;
  param_3 = (undefined8 *)&UNK_108ca7637;
  param_2 = (undefined *)0x7fffffff;
  param_1 = (undefined8 *)0x1;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if ((undefined8 *)0x7ffffffe < param_1) {
        puVar4 = (undefined8 *)0x7fffffff;
      }
      puVar4 = (undefined8 *)_write(uVar15,param_3,puVar4);
      if (puVar4 != (undefined8 *)0xffffffffffffffff) break;
      piVar7 = (int *)___error();
      lVar16 = (long)*piVar7;
      if (*piVar7 != 4) goto LAB_10064d228;
      if (param_1 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    if (puVar4 == (undefined8 *)0x0) break;
    puVar5 = (undefined8 *)((long)param_1 - (long)puVar4);
    if (param_1 < puVar4) goto LAB_10064d264;
    param_3 = (undefined8 *)((long)param_3 + (long)puVar4);
    param_1 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
LAB_10064d21c:
  puVar6 = &UNK_10b233fc8;
LAB_10064d230:
  puVar12 = (undefined8 *)_malloc(0x28);
  if (puVar12 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
    (*pcVar3)();
  }
  puVar12[1] = puVar6;
  *puVar12 = 1;
  puVar12[3] = 0;
  puVar12[2] = unaff_x23;
  puVar12[4] = 0;
  return puVar12;
LAB_10064d0c4:
  __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(puVar5,puVar4,puVar4,&UNK_10b233fe0);
  puVar12 = puVar4;
LAB_10064d0d8:
  param_3[2] = puStack_68;
  param_3 = (undefined8 *)&UNK_108ca14f4;
  param_2 = (undefined *)0x7fffffff;
  param_1 = (undefined8 *)0x1;
  do {
    while( true ) {
      puVar4 = param_1;
      if ((undefined8 *)0x7ffffffe < param_1) {
        puVar4 = (undefined8 *)0x7fffffff;
      }
      puVar4 = (undefined8 *)_write(uVar15,param_3,puVar4);
      if (puVar4 == (undefined8 *)0xffffffffffffffff) break;
      if (puVar4 == (undefined8 *)0x0) goto LAB_10064d21c;
      puVar5 = (undefined8 *)((long)param_1 - (long)puVar4);
      if (param_1 < puVar4) goto LAB_10064d264;
      param_3 = (undefined8 *)((long)param_3 + (long)puVar4);
      param_1 = puVar5;
      if (puVar5 == (undefined8 *)0x0) goto LAB_10064d13c;
    }
    piVar7 = (int *)___error();
    lVar16 = (long)*piVar7;
    if (*piVar7 != 4) goto LAB_10064d228;
  } while (param_1 != (undefined8 *)0x0);
LAB_10064d13c:
  if ((puStack_68 != (undefined *)0x0) && (puStack_70 != (undefined8 *)0x0)) {
    param_2 = (undefined *)0x0;
    puVar18 = (undefined *)0x7fffffff;
    do {
      param_2 = param_2 + 1;
      param_3 = puStack_78;
      param_1 = puStack_70;
      do {
        while( true ) {
          puVar4 = param_1;
          if ((undefined8 *)0x7ffffffe < param_1) {
            puVar4 = (undefined8 *)0x7fffffff;
          }
          puVar4 = (undefined8 *)_write(uVar15,param_3,puVar4);
          if (puVar4 == (undefined8 *)0xffffffffffffffff) break;
          if (puVar4 == (undefined8 *)0x0) goto LAB_10064d21c;
          puVar5 = (undefined8 *)((long)param_1 - (long)puVar4);
          if (param_1 < puVar4) goto LAB_10064d264;
          param_3 = (undefined8 *)((long)param_3 + (long)puVar4);
          param_1 = puVar5;
          if (puVar5 == (undefined8 *)0x0) goto LAB_10064d158;
        }
        piVar7 = (int *)___error();
        lVar16 = (long)*piVar7;
        if (*piVar7 != 4) goto LAB_10064d228;
      } while (param_1 != (undefined8 *)0x0);
LAB_10064d158:
    } while (param_2 != puStack_68);
  }
  param_3 = (undefined8 *)&UNK_108ca7637;
  param_2 = (undefined *)0x7fffffff;
  param_1 = (undefined8 *)0x1;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if ((undefined8 *)0x7ffffffe < param_1) {
        puVar4 = (undefined8 *)0x7fffffff;
      }
      puVar4 = (undefined8 *)_write(uVar15,param_3,puVar4);
      if (puVar4 != (undefined8 *)0xffffffffffffffff) break;
      piVar7 = (int *)___error();
      lVar16 = (long)*piVar7;
      if (*piVar7 != 4) goto LAB_10064d228;
      if (param_1 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    if (puVar4 == (undefined8 *)0x0) break;
    puVar5 = (undefined8 *)((long)param_1 - (long)puVar4);
    if (param_1 < puVar4) {
LAB_10064d264:
      puVar5 = param_1;
      auVar22 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (puVar4,param_1,param_1,&UNK_10b233fe0);
      uStack_98 = 0x10064d278;
      lVar16 = (long)puVar5 * 0x48;
      puStack_e0 = puVar19;
      puStack_d8 = puVar12;
      puStack_d0 = puVar11;
      puStack_c8 = puVar18;
      puStack_c0 = param_2;
      puStack_b8 = param_1;
      puStack_b0 = param_3;
      uStack_a8 = uVar15;
      puStack_a0 = &stack0xfffffffffffffff0;
      if ((undefined8 *)0x1c71c71c71c71c7 < puVar5) {
        auVar22 = FUN_107c03c64(0,lVar16);
      }
      lVar13 = auVar22._8_8_;
      puVar4 = auVar22._0_8_;
      if (lVar16 == 0) {
        puVar8 = (undefined8 *)0x8;
        puStack_158 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)_malloc(lVar16);
        puStack_158 = puVar5;
        if (puVar8 == (undefined8 *)0x0) {
          puVar4 = puVar5;
          uVar10 = FUN_107c03c64(8,lVar16);
          FUN_100de6690(&uStack_140);
          FUN_100e238ac(&puStack_158);
          __Unwind_Resume(uVar10);
          auVar22 = FUN_107c05ccc();
          uStack_168 = 0x10064d4d8;
          plVar17 = (long *)*puVar4;
          lVar9 = plVar17[2];
          uStack_1c0 = unaff_x28;
          uStack_1b8 = unaff_x27;
          puStack_1b0 = puVar19;
          puStack_1a8 = puVar12;
          puStack_1a0 = puVar11;
          puStack_198 = puVar18;
          puStack_190 = puVar5;
          lStack_188 = lVar13;
          lStack_180 = lVar16;
          uStack_178 = uVar10;
          ppuStack_170 = &puStack_a0;
          if (*plVar17 == lVar9) goto LAB_10064d9e4;
          *(undefined1 *)(plVar17[1] + lVar9) = 0x5b;
          lVar9 = lVar9 + 1;
          plVar17[2] = lVar9;
          do {
            if (auVar22._8_8_ == 0) {
              if (*plVar17 == lVar9) {
                thunk_FUN_108855060(plVar17,lVar9,1,1,1);
                lVar9 = plVar17[2];
              }
              *(undefined1 *)(plVar17[1] + lVar9) = 0x5d;
              plVar17[2] = lVar9 + 1;
              return (undefined8 *)0x0;
            }
            lVar16 = auVar22._8_8_ << 5;
            pcVar20 = (char *)(auVar22._0_8_ + 0x19);
            bVar14 = true;
            while( true ) {
              plVar21 = (long *)*puVar4;
              if (!bVar14) {
                lVar13 = plVar21[2];
                if (*plVar21 == lVar13) {
                  thunk_FUN_108855060(plVar21,lVar13,1,1,1);
                  lVar13 = plVar21[2];
                }
                *(undefined1 *)(plVar21[1] + lVar13) = 0x2c;
                plVar21[2] = lVar13 + 1;
                plVar21 = (long *)*puVar4;
              }
              lVar13 = plVar21[2];
              if (*plVar21 == lVar13) {
                thunk_FUN_108855060(plVar21,lVar13,1,1,1);
                lVar13 = plVar21[2];
              }
              *(undefined1 *)(plVar21[1] + lVar13) = 0x7b;
              plVar21[2] = lVar13 + 1;
              uStack_1e8 = 0x100;
              cVar1 = *pcVar20;
              puStack_1e0 = puVar4;
              FUN_1013fe3ec(&uStack_1e8,&UNK_108cb69fc,0xe);
              puVar12 = puStack_1e0;
              if ((char)uStack_1e8 == '\x01') break;
              plVar17 = (long *)*puStack_1e0;
              lVar13 = plVar17[2];
              if (*plVar17 == lVar13) {
                thunk_FUN_108855060(plVar17,lVar13,1,1,1);
                lVar13 = plVar17[2];
                *(undefined1 *)(plVar17[1] + lVar13) = 0x3a;
                plVar17[2] = lVar13 + 1;
                plVar17 = (long *)*puVar12;
                if (cVar1 != '\0') goto LAB_10064d628;
LAB_10064d6e0:
                lVar13 = plVar17[2];
                if (*plVar17 == lVar13) {
                  thunk_FUN_108855060(plVar17,lVar13,1,1,1);
                  lVar13 = plVar17[2];
                }
                *(undefined1 *)(plVar17[1] + lVar13) = 0x22;
                plVar17[2] = lVar13 + 1;
                puVar18 = &UNK_108cde358;
                uVar10 = 4;
              }
              else {
                *(undefined1 *)(plVar17[1] + lVar13) = 0x3a;
                plVar17[2] = lVar13 + 1;
                plVar17 = (long *)*puStack_1e0;
                if (cVar1 == '\0') goto LAB_10064d6e0;
LAB_10064d628:
                if (cVar1 == '\x01') {
                  lVar13 = plVar17[2];
                  if (*plVar17 == lVar13) {
                    thunk_FUN_108855060(plVar17,lVar13,1,1,1);
                    lVar13 = plVar17[2];
                  }
                  *(undefined1 *)(plVar17[1] + lVar13) = 0x22;
                  plVar17[2] = lVar13 + 1;
                  puVar18 = &UNK_108cb6ac3;
                  uVar10 = 5;
                }
                else {
                  lVar13 = plVar17[2];
                  if (*plVar17 == lVar13) {
                    thunk_FUN_108855060(plVar17,lVar13,1,1,1);
                    lVar13 = plVar17[2];
                  }
                  *(undefined1 *)(plVar17[1] + lVar13) = 0x22;
                  plVar17[2] = lVar13 + 1;
                  puVar18 = &UNK_108cb6ac8;
                  uVar10 = 9;
                }
              }
              FUN_100657654(plVar17,puVar18,uVar10);
              lVar13 = plVar17[2];
              if (*plVar17 == lVar13) {
                thunk_FUN_108855060(plVar17,lVar13,1,1,1);
                lVar13 = plVar17[2];
              }
              *(undefined1 *)(plVar17[1] + lVar13) = 0x22;
              plVar17[2] = lVar13 + 1;
              FUN_100634920(&uStack_1e8,&UNK_108cb6a0a,0xc,*(undefined8 *)(pcVar20 + -0x11),
                            *(undefined8 *)(pcVar20 + -9));
              if ((uStack_1e8 & 1) != 0) {
                auStack_1d8[0] = 10;
                puVar12 = (undefined8 *)FUN_107c05dbc(auStack_1d8,0,0);
                return puVar12;
              }
              bVar2 = pcVar20[-1];
              plVar17 = (long *)(ulong)bVar2;
              FUN_1013fe3ec(&uStack_1e8,&UNK_108cde374,4);
              puVar12 = puStack_1e0;
              if ((char)uStack_1e8 == '\x01') break;
              plVar21 = (long *)*puStack_1e0;
              lVar13 = plVar21[2];
              if (*plVar21 == lVar13) {
                thunk_FUN_108855060(plVar21,lVar13,1,1,1);
                lVar13 = plVar21[2];
                *(undefined1 *)(plVar21[1] + lVar13) = 0x3a;
                plVar21[2] = lVar13 + 1;
                plVar21 = (long *)*puVar12;
                if ((bVar2 & 1) != 0) goto LAB_10064d7a4;
LAB_10064d81c:
                lVar13 = plVar21[2];
                if (*plVar21 == lVar13) {
                  thunk_FUN_108855060(plVar21,lVar13,1,1,1);
                  lVar13 = plVar21[2];
                }
                *(undefined1 *)(plVar21[1] + lVar13) = 0x22;
                plVar21[2] = lVar13 + 1;
                puVar18 = &UNK_108cb6abd;
              }
              else {
                *(undefined1 *)(plVar21[1] + lVar13) = 0x3a;
                plVar21[2] = lVar13 + 1;
                plVar21 = (long *)*puStack_1e0;
                if ((bVar2 & 1) == 0) goto LAB_10064d81c;
LAB_10064d7a4:
                lVar13 = plVar21[2];
                if (*plVar21 == lVar13) {
                  thunk_FUN_108855060(plVar21,lVar13,1,1,1);
                  lVar13 = plVar21[2];
                }
                *(undefined1 *)(plVar21[1] + lVar13) = 0x22;
                plVar21[2] = lVar13 + 1;
                puVar18 = &UNK_108cab471;
              }
              FUN_100657654(plVar21,puVar18,6);
              lVar13 = plVar21[2];
              if (*plVar21 == lVar13) {
                thunk_FUN_108855060(plVar21,lVar13,1,1,1);
                lVar13 = plVar21[2];
                *(undefined1 *)(plVar21[1] + lVar13) = 0x22;
                plVar21[2] = lVar13 + 1;
              }
              else {
                *(undefined1 *)(plVar21[1] + lVar13) = 0x22;
                plVar21[2] = lVar13 + 1;
              }
              if (uStack_1e8._1_1_ != '\0') {
                plVar21 = (long *)*puVar12;
                lVar13 = plVar21[2];
                if (*plVar21 == lVar13) {
                  thunk_FUN_108855060(plVar21,lVar13,1,1,1);
                  lVar13 = plVar21[2];
                }
                *(undefined1 *)(plVar21[1] + lVar13) = 0x7d;
                plVar21[2] = lVar13 + 1;
              }
              bVar14 = false;
              pcVar20 = pcVar20 + 0x20;
              lVar16 = lVar16 + -0x20;
              if (lVar16 == 0) {
                plVar17 = (long *)*puVar4;
                lVar16 = plVar17[2];
                if (*plVar17 == lVar16) {
                  thunk_FUN_108855060(plVar17,lVar16,1,1,1);
                  lVar16 = plVar17[2];
                }
                *(undefined1 *)(plVar17[1] + lVar16) = 0x5d;
                plVar17[2] = lVar16 + 1;
                return (undefined8 *)0x0;
              }
            }
            auVar22 = __ZN4core9panicking5panic17h30f5ec71e3af4326E
                                (&UNK_108ca1a1b,0x28,&UNK_10b24d400);
            lVar9 = extraout_x8;
LAB_10064d9e4:
            thunk_FUN_108855060(plVar17,lVar9,1,1,1);
            lVar9 = plVar17[2];
            *(undefined1 *)(plVar17[1] + lVar9) = 0x5b;
            lVar9 = lVar9 + 1;
            plVar17[2] = lVar9;
          } while( true );
        }
      }
      puStack_148 = (undefined8 *)0x0;
      puStack_150 = puVar8;
      if (puVar5 != (undefined8 *)0x0) {
        puStack_148 = (undefined8 *)0x0;
        lVar16 = (long)puVar5 * 0x18;
        puVar12 = (undefined8 *)(lVar13 + 0x10);
        do {
          func_0x0001055bf348(auStack_f8,puVar12[-1],*puVar12);
          lVar13 = lStack_e8;
          uVar10 = uStack_f0;
          if ((auStack_f8[0] & 1) != 0) {
            uVar10 = thunk_FUN_1088564ec(&UNK_108ca7604,0x26);
            puVar12 = puStack_150;
            *puVar4 = 0x8000000000000005;
            puVar4[1] = uVar10;
            puVar18 = (undefined *)((long)puStack_148 + 1);
            puVar11 = puStack_150;
            while (puVar18 = puVar18 + -1, puVar18 != (undefined *)0x0) {
              FUN_100de6690(puVar11);
              puVar11 = puVar11 + 9;
            }
            if (puStack_158 == (undefined8 *)0x0) {
              return puVar11;
            }
            puVar12 = (undefined8 *)_free(puVar12);
            return puVar12;
          }
          if (lStack_e8 == 0) {
            lVar9 = 1;
          }
          else {
            lVar9 = _malloc(lStack_e8);
            if (lVar9 == 0) {
              FUN_107c03c64(1,lVar13);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10064d460);
              (*pcVar3)();
            }
          }
          puVar8 = (undefined8 *)_memcpy(lVar9,uVar10,lVar13);
          puVar11 = puStack_148;
          uStack_140 = 0x8000000000000003;
          lStack_138 = lVar13;
          lStack_128 = lVar13;
          lStack_130 = lVar9;
          if (puStack_148 == puStack_158) {
            puVar8 = (undefined8 *)
                     __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd86cb4541401251eE
                               (&puStack_158);
          }
          puVar12 = puVar12 + 3;
          puVar5 = puStack_150 + (long)puVar11 * 9;
          puVar5[1] = lStack_138;
          *puVar5 = uStack_140;
          puVar5[3] = lStack_128;
          puVar5[2] = lStack_130;
          puVar5[5] = uStack_118;
          puVar5[4] = uStack_120;
          puVar5[7] = uStack_108;
          puVar5[6] = uStack_110;
          puVar5[8] = uStack_100;
          puStack_148 = (undefined8 *)((long)puVar11 + 1);
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != 0);
      }
      puVar4[2] = puStack_150;
      puVar4[1] = puStack_158;
      puVar4[3] = puStack_148;
      *puVar4 = 0x8000000000000004;
      return puVar8;
    }
    param_3 = (undefined8 *)((long)param_3 + (long)puVar4);
    param_1 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  goto LAB_10064d21c;
LAB_10064d228:
  puVar6 = (undefined *)(lVar16 << 0x20 | 2);
  goto LAB_10064d230;
}

