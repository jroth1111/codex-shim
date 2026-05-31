
long * FUN_10397b5cc(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 uVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 auVar26 [16];
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
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 3);
    do {
      while( true ) {
        uVar7 = param_3;
        if (0x7ffffffe < param_3) {
          uVar7 = 0x7fffffff;
        }
        uVar7 = _write(uVar2,param_2,uVar7);
        if (uVar7 == 0xffffffffffffffff) break;
        if (uVar7 == 0) {
          puVar14 = &UNK_10b2da258;
          uVar10 = *param_1;
          lVar15 = param_1[1];
          puStack_68 = &UNK_10b2da258;
          uVar5 = FUN_103922950(&UNK_10b2da258);
joined_r0x00010397b6ac:
          if (lVar15 == 0) {
            lVar8 = 1;
          }
          else {
            lVar8 = _malloc(lVar15);
            if (lVar8 == 0) {
              func_0x0001087c9084(1,lVar15);
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10397b690);
              (*pcVar4)();
            }
          }
          _memcpy(lVar8,uVar10,lVar15);
          lStack_60 = lVar15;
          lStack_58 = lVar8;
          lStack_50 = lVar15;
          puStack_48 = puVar14;
          plVar9 = (long *)__ZN3std2io5error5Error3new17h3b39fda1efed87d8E(uVar5,&lStack_60);
          return plVar9;
        }
        uVar3 = param_3 - uVar7;
        if (param_3 < uVar7) {
          uVar10 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                             (uVar7,param_3,param_3,&UNK_10b2da270);
          FUN_103938a30(&puStack_68);
          __Unwind_Resume(uVar10);
          auVar26 = func_0x000108a07bc4();
          plVar12 = auVar26._8_8_;
          plVar9 = auVar26._0_8_;
          plVar13 = (long *)plVar12[0xe];
          if (plVar13 != (long *)plVar12[0x10]) {
            lVar15 = *plVar13;
            plVar12[0xe] = (long)(plVar13 + 0xe);
            if (lVar15 != -0x8000000000000000) {
              lVar8 = plVar13[1];
              lVar1 = plVar13[2];
              lVar17 = plVar13[6];
              lVar16 = plVar13[5];
              lVar21 = plVar13[8];
              lVar18 = plVar13[7];
              lVar25 = plVar13[10];
              lVar24 = plVar13[9];
              lVar22 = plVar13[0xc];
              lVar19 = plVar13[0xb];
              lVar23 = plVar13[4];
              lVar20 = plVar13[3];
              if (lVar1 == 0) {
                lVar11 = 1;
              }
              else {
                lVar11 = _malloc(lVar1);
                if (lVar11 == 0) {
                  func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10397b8a4);
                  (*pcVar4)();
                }
              }
              _memcpy(lVar11,lVar8,lVar1);
              if (*plVar12 != -0x8000000000000000) {
                if (*plVar12 != 0) {
                  _free(plVar12[1]);
                }
                FUN_103938604(plVar12 + 3);
              }
              plVar12[6] = lVar17;
              plVar12[5] = lVar16;
              plVar12[8] = lVar21;
              plVar12[7] = lVar18;
              plVar12[10] = lVar25;
              plVar12[9] = lVar24;
              plVar12[0xc] = lVar22;
              plVar12[0xb] = lVar19;
              *plVar12 = lVar1;
              plVar12[1] = lVar11;
              plVar12[2] = lVar1;
              plVar12[4] = lVar23;
              plVar12[3] = lVar20;
              uStack_110 = 0x8000000000000000;
              lStack_108 = lVar15;
              lStack_100 = lVar8;
              lStack_f8 = lVar1;
              plVar12 = (long *)func_0x000103890d10(&lStack_168,&uStack_110);
              if (lStack_168 == 2) {
                plVar9[2] = lStack_158;
                plVar9[1] = lStack_160;
                plVar9[3] = lStack_150;
                *plVar9 = 2;
                return plVar12;
              }
              plVar9[5] = lStack_140;
              plVar9[4] = lStack_148;
              plVar9[7] = lStack_130;
              plVar9[6] = lStack_138;
              plVar9[9] = lStack_120;
              plVar9[8] = lStack_128;
              plVar9[10] = lStack_118;
              plVar9[1] = lStack_160;
              *plVar9 = lStack_168;
              plVar9[3] = lStack_150;
              plVar9[2] = lStack_158;
              return plVar12;
            }
          }
          plVar9[1] = -0x8000000000000000;
          *plVar9 = 2;
          return plVar9;
        }
        param_2 = param_2 + uVar7;
        param_3 = uVar3;
        if (uVar3 == 0) {
          return (long *)0x0;
        }
      }
      piVar6 = (int *)___error();
      if (*piVar6 != 4) {
        puVar14 = (undefined *)((long)*piVar6 << 0x20 | 2);
        uVar10 = *param_1;
        lVar15 = param_1[1];
        puStack_68 = puVar14;
        uVar5 = FUN_103922950(puVar14);
        goto joined_r0x00010397b6ac;
      }
    } while (param_3 != 0);
  }
  return (long *)0x0;
}

