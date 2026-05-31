
void FUN_1011447dc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((param_2 & 1) == 0) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(&uStack_48);
    goto LAB_101144840;
  }
  uVar10 = param_2 >> 1;
  if (param_2 < 2) {
    uVar12 = 1;
  }
  else {
    uVar12 = _malloc(uVar10);
    if (uVar12 == 0) {
      uVar4 = func_0x0001087c9084(1,uVar10);
      FUN_100defdc0(&uStack_a0);
      __Unwind_Resume(uVar4);
      auVar22 = func_0x000108a07bc4();
      plVar11 = auVar22._8_8_;
      plVar5 = auVar22._0_8_;
      if ((ulong)plVar11[2] < 6) {
        plVar13 = plVar11 + 1;
        plVar11 = (long *)((long)plVar13 + plVar11[2]);
        uStack_e8 = 0;
        puStack_f8 = (ulong *)0x0;
LAB_101144984:
        puVar3 = &uStack_e8;
        puVar8 = &uStack_f0;
        uVar10 = 5;
        uVar12 = uStack_e8;
        if (4 < uStack_e8) goto LAB_101144a2c;
      }
      else {
        plVar13 = (long *)*plVar11;
        uVar10 = plVar11[1];
        plVar11 = (long *)((long)plVar13 + uVar10);
        uStack_e8 = 0;
        puStack_f8 = (ulong *)0x0;
        if (uVar10 < 6) goto LAB_101144984;
        if (LZCOUNT(uVar10 - 1) == 0) {
LAB_101144adc:
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca7687,0x11,&UNK_10b24dd50);
LAB_101144af4:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101144af8);
          (*pcVar2)();
        }
        lVar6 = FUN_1014a2ee0(&puStack_f8,(0xffffffffffffffffU >> (LZCOUNT(uVar10 - 1) & 0x3fU)) + 1
                             );
        if (lVar6 != -0x7fffffffffffffff) {
          if (lVar6 != 0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E();
            goto LAB_101144af4;
          }
          goto LAB_101144adc;
        }
        if (uStack_e8 < 6) goto LAB_101144984;
        puVar3 = &uStack_f0;
        uVar10 = uStack_e8;
        uVar12 = uStack_f0;
        puVar8 = puStack_f8;
        if (uStack_e8 <= uStack_f0) goto LAB_101144a2c;
      }
      uVar1 = uVar10 + ~uVar12;
      if ((ulong)((long)plVar11 - (long)plVar13) <= uVar10 + ~uVar12) {
        uVar1 = (long)plVar11 - (long)plVar13;
      }
      uVar1 = uVar1 + 1;
      uVar7 = uVar12;
      plVar14 = plVar13;
      if ((0x40 < uVar1) && (0x3f < (long)puVar8 + (uVar12 - (long)plVar13))) {
        uVar7 = 0x40;
        if ((uVar1 & 0x3f) != 0) {
          uVar7 = uVar1 & 0x3f;
        }
        lVar6 = uVar1 - uVar7;
        uVar7 = uVar12 + lVar6;
        plVar14 = (long *)((long)plVar13 + lVar6);
        plVar13 = plVar13 + 4;
        plVar9 = (long *)((long)puVar8 + uVar12 + 0x20);
        do {
          lVar15 = plVar13[-4];
          lVar17 = plVar13[-1];
          lVar16 = plVar13[-2];
          lVar19 = plVar13[1];
          lVar18 = *plVar13;
          lVar21 = plVar13[3];
          lVar20 = plVar13[2];
          plVar9[-3] = plVar13[-3];
          plVar9[-4] = lVar15;
          plVar9[-1] = lVar17;
          plVar9[-2] = lVar16;
          plVar9[1] = lVar19;
          *plVar9 = lVar18;
          plVar9[3] = lVar21;
          plVar9[2] = lVar20;
          lVar6 = lVar6 + -0x40;
          plVar13 = plVar13 + 8;
          plVar9 = plVar9 + 8;
        } while (lVar6 != 0);
      }
      do {
        if (plVar14 == plVar11) {
          *puVar3 = uVar7;
          goto LAB_101144aa8;
        }
        plVar13 = (long *)((long)plVar14 + 1);
        *(char *)((long)puVar8 + uVar7) = (char)*plVar14;
        uVar7 = uVar7 + 1;
        uVar12 = uVar10;
        plVar14 = plVar13;
      } while (uVar10 != uVar7);
LAB_101144a2c:
      *puVar3 = uVar12;
      if (plVar13 != plVar11) {
        do {
          puVar3 = puStack_f8;
          uVar10 = uStack_f0;
          puVar8 = &uStack_f0;
          uVar12 = uStack_e8;
          if (uStack_e8 < 6) {
            puVar3 = &uStack_f0;
            uVar10 = uStack_e8;
            puVar8 = &uStack_e8;
            uVar12 = 5;
          }
          plVar14 = (long *)((long)plVar13 + 1);
          lVar6 = *plVar13;
          if (uVar10 == uVar12) {
            FUN_10886fdbc(&puStack_f8);
            puVar3 = puStack_f8;
            uVar10 = uStack_f0;
            puVar8 = &uStack_f0;
          }
          *(char *)((long)puVar3 + uVar10) = (char)lVar6;
          *puVar8 = *puVar8 + 1;
          plVar13 = plVar14;
        } while (plVar14 != plVar11);
      }
LAB_101144aa8:
      plVar5[1] = uStack_f0;
      *plVar5 = (long)puStack_f8;
      plVar5[2] = uStack_e8;
      return;
    }
  }
  _memcpy(uVar12,param_1,uVar10);
  uStack_48 = uVar10;
  uStack_40 = uVar12;
  uStack_38 = uVar10;
LAB_101144840:
  uStack_98 = uStack_40;
  uStack_a0 = uStack_48;
  uStack_90 = uStack_38;
  uStack_88 = 0x8000000000000000;
  uStack_58 = 8;
  puVar3 = (ulong *)_malloc(0x50);
  if (puVar3 == (ulong *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x50);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1011448a4);
    (*pcVar2)();
  }
  puVar3[5] = uStack_78;
  puVar3[4] = uStack_80;
  puVar3[7] = uStack_68;
  puVar3[6] = uStack_70;
  puVar3[9] = CONCAT44(uStack_54,uStack_58);
  puVar3[8] = uStack_60;
  puVar3[1] = uStack_98;
  *puVar3 = uStack_a0;
  puVar3[3] = uStack_88;
  puVar3[2] = uStack_90;
  return;
}

