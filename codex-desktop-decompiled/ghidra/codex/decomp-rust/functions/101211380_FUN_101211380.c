
void FUN_101211380(void)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong unaff_x21;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  byte unaff_w28;
  ulong uVar16;
  long unaff_x29;
  ulong uVar17;
  undefined1 auVar18 [16];
  ulong uStack_e8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  byte bStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  auVar18 = __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                      (s__Mismatch_between_definition_and_108ac57ee,unaff_x29 + -0x60,&UNK_10b21f750
                      );
  puVar9 = auVar18._8_8_;
  puVar5 = auVar18._0_8_;
  uVar12 = *puVar9 ^ 0x8000000000000000;
  uVar11 = uVar12;
  if (-1 < (long)*puVar9) {
    uVar11 = 2;
  }
  if (uVar11 == 0) {
    uVar16 = puVar9[1];
    uVar14 = 0x8000000000000000;
    uVar11 = uVar16;
    if (uVar16 < 0x8000000000000001) {
      uVar11 = 0;
    }
    if ((uVar11 & 0x7fffffffffffffff) == 0) {
      if (uVar16 != 0x8000000000000000) {
        func_0x000101149e6c(&uStack_b0,puVar9[2],puVar9[3]);
        unaff_x21 = puVar9[4];
        unaff_x23 = uStack_a0;
        unaff_x24 = uStack_a8;
        uVar14 = uStack_b0;
      }
      uVar11 = 0;
      uVar12 = (ulong)(byte)puVar9[5];
    }
    else if ((uVar11 & 0x7fffffffffffffff) == 1) {
      uVar11 = 0;
      uVar14 = 0x8000000000000001;
    }
    else {
      unaff_x24 = puVar9[2];
      unaff_x23 = puVar9[3];
      unaff_x21 = puVar9[4];
      uVar12 = (ulong)(byte)puVar9[5];
      uVar11 = (ulong)*(uint *)((long)puVar9 + 0x29) << 8 |
               (ulong)*(uint3 *)((long)puVar9 + 0x2d) << 0x28;
      uVar14 = uVar16;
    }
    unaff_x27 = uVar11 | uVar12 & 0xff;
    uVar11 = 0x8000000000000000;
  }
  else {
    if (uVar11 != 1) {
      uVar12 = puVar9[1];
      uVar11 = puVar9[2];
      if (uVar11 == 0) {
        uVar14 = 1;
LAB_101211494:
        _memcpy(uVar14,uVar12,uVar11);
        if (puVar9[6] == 0x8000000000000000) {
          unaff_x25 = 0x8000000000000000;
          uVar16 = puVar9[9];
          uVar12 = uVar16;
          if (uVar16 < 0x8000000000000001) {
            uVar12 = 0;
          }
          uVar12 = uVar12 & 0x7fffffffffffffff;
          if (uVar12 != 0) goto LAB_1012114d0;
LAB_101211734:
          puVar10 = puVar9 + 9;
          uVar12 = 0x8000000000000000;
          if (uVar16 != 0x8000000000000000) {
            func_0x000101149e6c(&uStack_b0,puVar9[10],puVar9[0xb]);
            puVar10 = (ulong *)puVar9[0xc];
            uStack_78 = uStack_a0;
            uStack_80 = uStack_a8;
            uVar12 = uStack_b0;
          }
          uStack_90 = (undefined1)puVar9[0xd];
          bStack_98 = (byte)puVar10;
          uStack_97 = (undefined7)((ulong)puVar10 >> 8);
          unaff_x23 = puVar9[5];
          uStack_b0 = uVar12;
          uStack_a0 = uStack_78;
          uStack_a8 = uStack_80;
joined_r0x000101211810:
          if (unaff_x23 == 0) goto LAB_101211814;
LAB_101211628:
          uVar12 = puVar9[4];
          lVar4 = unaff_x23 * 0x18;
          unaff_x21 = _malloc(lVar4);
          if (unaff_x21 == 0) {
            func_0x0001087c9084(8,lVar4);
            goto LAB_101211900;
          }
          uVar16 = 0;
          plVar13 = (long *)(unaff_x21 + 0x10);
          uStack_80 = unaff_x23;
          uStack_78 = unaff_x21;
          do {
            if (lVar4 == 0) break;
            uVar8 = *(undefined8 *)(uVar12 + 8);
            lVar6 = *(long *)(uVar12 + 0x10);
            if (lVar6 == 0) {
              lVar7 = 1;
            }
            else {
              lVar7 = _malloc(lVar6);
              if (lVar7 == 0) {
                func_0x0001087c9084(1,lVar6);
                goto LAB_101211900;
              }
            }
            uVar12 = uVar12 + 0x18;
            uVar16 = uVar16 + 1;
            _memcpy(lVar7,uVar8,lVar6);
            plVar13[-2] = lVar6;
            plVar13[-1] = lVar7;
            lVar4 = lVar4 + -0x18;
            *plVar13 = lVar6;
            plVar13 = plVar13 + 3;
          } while (unaff_x23 != uVar16);
        }
        else {
          uVar12 = puVar9[7];
          unaff_x25 = puVar9[8];
          if (unaff_x25 == 0) {
            uStack_c8 = 1;
          }
          else {
            uStack_c8 = _malloc(unaff_x25);
            if (uStack_c8 == 0) {
              func_0x0001087c9084(1,unaff_x25);
              goto LAB_101211900;
            }
          }
          _memcpy(uStack_c8,uVar12,unaff_x25);
          uVar16 = puVar9[9];
          uVar12 = uVar16;
          if (uVar16 < 0x8000000000000001) {
            uVar12 = 0;
          }
          uVar12 = uVar12 & 0x7fffffffffffffff;
          uStack_d0 = unaff_x25;
          if (uVar12 == 0) goto LAB_101211734;
LAB_1012114d0:
          if (uVar12 != 1) {
            uStack_a8 = puVar9[10];
            uStack_b0 = puVar9[9];
            uStack_a0 = puVar9[0xb];
            bStack_98 = (byte)puVar9[0xc];
            uStack_97 = (undefined7)(puVar9[0xc] >> 8);
            uStack_90 = (undefined1)puVar9[0xd];
            uStack_8f = (undefined7)(puVar9[0xd] >> 8);
            unaff_x23 = puVar9[5];
            goto joined_r0x000101211810;
          }
          uStack_b0 = 0x8000000000000001;
          unaff_x23 = puVar9[5];
          if (unaff_x23 != 0) goto LAB_101211628;
LAB_101211814:
          unaff_x21 = 8;
        }
        uStack_78 = uStack_a8;
        uStack_80 = uStack_b0;
        uStack_70 = uStack_a0;
        uStack_c0 = uStack_97;
        uStack_b9 = uStack_90;
        uStack_b8 = uStack_8f;
        unaff_x24 = uVar11;
        unaff_x27 = unaff_x23;
        unaff_w28 = bStack_98;
        goto LAB_101211844;
      }
      uVar14 = _malloc(uVar11);
      if (uVar14 != 0) goto LAB_101211494;
      func_0x0001087c9084(1,uVar11);
LAB_1012118e4:
      func_0x0001087c9084(8,uVar11);
      goto LAB_101211900;
    }
    uVar12 = puVar9[0xc];
    if (puVar9[4] == 0x8000000000000000) {
      unaff_x21 = 0x8000000000000000;
      uVar14 = puVar9[7];
      uVar11 = uVar14;
      if (uVar14 < 0x8000000000000001) {
        uVar11 = 0;
      }
      uVar11 = uVar11 & 0x7fffffffffffffff;
      if (uVar11 != 0) goto LAB_101211410;
LAB_1012116f4:
      puVar10 = puVar9 + 7;
      uVar11 = 0x8000000000000000;
      if (uVar14 != 0x8000000000000000) {
        func_0x000101149e6c(&uStack_b0,puVar9[8],puVar9[9]);
        puVar10 = (ulong *)puVar9[10];
        uStack_78 = uStack_a0;
        uStack_80 = uStack_a8;
        uVar11 = uStack_b0;
      }
      uStack_90 = (undefined1)puVar9[0xb];
      bStack_98 = (byte)puVar10;
      uStack_97 = (undefined7)((ulong)puVar10 >> 8);
      unaff_x23 = puVar9[3];
      uStack_b0 = uVar11;
      uStack_a8 = uStack_80;
      uStack_a0 = uStack_78;
joined_r0x000101211564:
      if (unaff_x23 == 0) goto LAB_1012117b0;
LAB_101211568:
      uVar14 = puVar9[2];
      uVar11 = unaff_x23 * 0x18;
      unaff_x24 = _malloc(uVar11);
      if (unaff_x24 == 0) goto LAB_1012118e4;
      uVar16 = 0;
      plVar13 = (long *)(unaff_x24 + 0x10);
      uStack_80 = unaff_x23;
      uStack_78 = unaff_x24;
      do {
        if (uVar11 == 0) break;
        uVar8 = *(undefined8 *)(uVar14 + 8);
        lVar4 = *(long *)(uVar14 + 0x10);
        if (lVar4 == 0) {
          lVar6 = 1;
        }
        else {
          lVar6 = _malloc(lVar4);
          if (lVar6 == 0) {
            func_0x0001087c9084(1,lVar4);
            goto LAB_101211900;
          }
        }
        uVar14 = uVar14 + 0x18;
        uVar16 = uVar16 + 1;
        _memcpy(lVar6,uVar8,lVar4);
        plVar13[-2] = lVar4;
        plVar13[-1] = lVar6;
        uVar11 = uVar11 - 0x18;
        *plVar13 = lVar4;
        plVar13 = plVar13 + 3;
      } while (unaff_x23 != uVar16);
    }
    else {
      uVar11 = puVar9[5];
      unaff_x21 = puVar9[6];
      if (unaff_x21 == 0) {
        unaff_x27 = 1;
      }
      else {
        unaff_x27 = _malloc(unaff_x21);
        if (unaff_x27 == 0) {
          uVar8 = func_0x0001087c9084(1,unaff_x21);
          if ((unaff_x21 & 0x7fffffffffffffff) != 0) {
            _free(uStack_c8);
          }
          while (unaff_x24 != 0) {
            _free(unaff_x26);
            uVar8 = __Unwind_Resume(uVar8);
            uStack_70 = (ulong)(byte)uVar12;
            FUN_100e582c8(&uStack_80);
            uVar11 = uStack_b0;
            if (uStack_b0 < 0x8000000000000001) {
              uVar11 = 0;
            }
            if ((uStack_b0 != 0x8000000000000000) && ((uVar11 & 0x7fffffffffffffff) == 0)) {
              FUN_100e79780(&uStack_b0);
            }
            unaff_x24 = uStack_e8 & 0x7fffffffffffffff;
          }
          auVar18 = __Unwind_Resume(uVar8);
          bVar3 = *auVar18._0_8_ == '\0';
          uVar8 = 0xb;
          if (bVar3) {
            uVar8 = 5;
          }
          puVar1 = &UNK_108cc9caa;
          if (bVar3) {
            puVar1 = &UNK_108cd50ab;
          }
                    /* WARNING: Could not recover jumptable at 0x000101211a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(auVar18._8_8_[1] + 0x18))(*auVar18._8_8_,puVar1,uVar8);
          return;
        }
      }
      _memcpy(unaff_x27,uVar11,unaff_x21);
      uVar14 = puVar9[7];
      uVar11 = uVar14;
      if (uVar14 < 0x8000000000000001) {
        uVar11 = 0;
      }
      uVar11 = uVar11 & 0x7fffffffffffffff;
      unaff_x25 = unaff_x21;
      if (uVar11 == 0) goto LAB_1012116f4;
LAB_101211410:
      if (uVar11 != 1) {
        uStack_a8 = puVar9[8];
        uStack_a0 = puVar9[9];
        bStack_98 = (byte)puVar9[10];
        uStack_97 = (undefined7)(puVar9[10] >> 8);
        uStack_90 = (undefined1)puVar9[0xb];
        uStack_8f = (undefined7)(puVar9[0xb] >> 8);
        unaff_x23 = puVar9[3];
        uStack_b0 = puVar9[7];
        goto joined_r0x000101211564;
      }
      uStack_b0 = 0x8000000000000001;
      unaff_x23 = puVar9[3];
      if (unaff_x23 != 0) goto LAB_101211568;
LAB_1012117b0:
      unaff_x24 = 8;
    }
    uStack_d0 = uStack_a8;
    uStack_c8 = uStack_b0;
    uStack_78 = CONCAT71(uStack_97,bStack_98);
    uStack_80 = uStack_a0;
    uStack_70 = CONCAT71(uStack_8f,uStack_90);
    uVar11 = 0x8000000000000001;
    uVar14 = unaff_x23;
    unaff_w28 = (byte)uVar12;
  }
LAB_101211844:
  plVar13 = (long *)puVar9[0xe];
  lVar4 = *plVar13;
  *plVar13 = lVar4 + 1;
  if (-1 < lVar4) {
    plVar15 = (long *)puVar9[0x10];
    uVar17 = puVar9[0x10];
    uVar16 = puVar9[0xf];
    uVar12 = 0;
    if (plVar15 != (long *)0x0) {
      lVar4 = *plVar15;
      *plVar15 = lVar4 + 1;
      if (lVar4 < 0) goto LAB_101211900;
      uVar12 = puVar9[0x11];
    }
    *puVar5 = uVar11;
    puVar5[1] = uVar14;
    puVar5[2] = unaff_x24;
    puVar5[3] = unaff_x23;
    puVar5[4] = unaff_x21;
    puVar5[5] = unaff_x27;
    puVar5[6] = unaff_x25;
    puVar5[7] = uStack_c8;
    puVar5[8] = uStack_d0;
    puVar5[10] = uStack_78;
    puVar5[9] = uStack_80;
    puVar5[0xb] = uStack_70;
    *(byte *)(puVar5 + 0xc) = unaff_w28;
    *(ulong *)((long)puVar5 + 0x61) = CONCAT17(uStack_b9,uStack_c0);
    puVar5[0xd] = CONCAT71(uStack_b8,uStack_b9);
    puVar5[0xe] = (ulong)plVar13;
    puVar5[0x10] = uVar17;
    puVar5[0xf] = uVar16;
    puVar5[0x11] = uVar12;
    return;
  }
LAB_101211900:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101211904);
  (*pcVar2)();
}

