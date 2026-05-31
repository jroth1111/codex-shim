
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_101841e10(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  bool bVar14;
  undefined *puVar15;
  byte *unaff_x20;
  ulong unaff_x21;
  long lVar16;
  uint uVar17;
  undefined *unaff_x28;
  long unaff_x29;
  undefined1 auVar18 [16];
  byte *in_stack_00000028;
  ulong in_stack_00000030;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  do {
    uVar13 = 0;
    do {
      bVar3 = unaff_x20[uVar13];
      if (bVar3 < 0xc) {
        if (bVar3 == 8) {
          puVar15 = &UNK_108ceaeec;
joined_r0x000101841f04:
          bVar14 = true;
        }
        else if (bVar3 == 9) {
          bVar14 = true;
          puVar15 = &UNK_108ceaeee;
        }
        else {
          if (bVar3 != 10) goto LAB_101841e78;
          bVar14 = true;
          puVar15 = &UNK_108ceaef0;
        }
joined_r0x000101841edc:
        if (uVar13 == 0) {
          uVar13 = 0;
        }
        else if (uVar13 < unaff_x21) {
          if ((char)unaff_x20[uVar13] < -0x40) goto LAB_1018420d0;
        }
        else {
          bVar6 = unaff_x21 != uVar13;
          uVar13 = unaff_x21;
          if (bVar6) goto LAB_1018420d0;
        }
        uVar17 = (uint)unaff_x28;
        in_stack_00000038 = puVar15;
        if (!bVar14) {
          uVar17 = 0;
          in_stack_00000038 = unaff_x28;
        }
        in_stack_00000040 = 2;
        if (!bVar14) {
          in_stack_00000040 = 0;
        }
        uVar4 = uVar13 + uVar17;
        in_stack_00000030 = uVar13;
        goto joined_r0x000101841f90;
      }
      if (bVar3 < 0x22) {
        if (bVar3 == 0xc) {
          bVar14 = true;
          puVar15 = &UNK_108ceaef2;
        }
        else {
          if (bVar3 != 0xd) goto LAB_101841e78;
          bVar14 = true;
          puVar15 = &UNK_108ceaef4;
        }
        goto joined_r0x000101841edc;
      }
      if (bVar3 == 0x22) {
        bVar14 = true;
        puVar15 = &UNK_108ceaef8;
        goto joined_r0x000101841edc;
      }
      if (bVar3 == 0x5c) {
        puVar15 = &UNK_108ceaef6;
        goto joined_r0x000101841f04;
      }
LAB_101841e78:
      puVar15 = (undefined *)0x0;
      bVar14 = false;
      if ((bVar3 < 0x20) || (bVar3 == 0x7f)) goto joined_r0x000101841edc;
      uVar13 = uVar13 + 1;
    } while (unaff_x21 != uVar13);
    uVar17 = 0;
    in_stack_00000038 = (undefined *)0x1;
    in_stack_00000040 = 0;
    uVar4 = unaff_x21;
    in_stack_00000030 = unaff_x21;
joined_r0x000101841f90:
    in_stack_00000028 = unaff_x20;
    if (uVar4 != 0) {
      if (unaff_x21 <= uVar4) {
        if (unaff_x21 != uVar4) goto LAB_1018420b4;
        goto LAB_101841fb0;
      }
      if (-0x41 < (char)unaff_x20[uVar4]) goto LAB_101841fb0;
LAB_1018420b4:
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                (unaff_x20,unaff_x21,uVar4,unaff_x21,&UNK_10b25fb68);
LAB_1018420d0:
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E(unaff_x20,unaff_x21,0);
LAB_1018420e8:
      auVar18 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                          (unaff_x20,unaff_x21,1,unaff_x21,&UNK_10b25fb80);
      lVar12 = auVar18._8_8_;
      plVar7 = auVar18._0_8_;
      lVar16 = *(long *)(lVar12 + 8);
      lVar1 = *(long *)(lVar12 + 0x10);
      if (lVar1 != 0) {
        lVar8 = _malloc(lVar1);
        if (lVar8 != 0) {
          _memcpy(lVar8,lVar16,lVar1);
          uVar11 = *(undefined8 *)(lVar12 + 0x20);
          lVar16 = *(long *)(lVar12 + 0x28);
          goto joined_r0x000101842154;
        }
        func_0x0001087c9084(1,lVar1);
LAB_101842238:
        func_0x0001087c9084(1,lVar16);
LAB_101842254:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101842258);
        (*pcVar5)();
      }
      lVar8 = 1;
      _memcpy(1,lVar16,0);
      uVar11 = *(undefined8 *)(lVar12 + 0x20);
      lVar16 = *(long *)(lVar12 + 0x28);
joined_r0x000101842154:
      if (lVar16 == 0) {
        lVar9 = 1;
        _memcpy(1,uVar11,0);
        uVar11 = *(undefined8 *)(lVar12 + 0x38);
        lVar2 = *(long *)(lVar12 + 0x40);
      }
      else {
        lVar9 = _malloc(lVar16);
        if (lVar9 == 0) goto LAB_101842238;
        _memcpy(lVar9,uVar11,lVar16);
        uVar11 = *(undefined8 *)(lVar12 + 0x38);
        lVar2 = *(long *)(lVar12 + 0x40);
      }
      if (lVar2 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar2);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar2);
          goto LAB_101842254;
        }
      }
      _memcpy(lVar10,uVar11,lVar2);
      uVar11 = func_0x0001019aaba0(&lStack_78,*(undefined8 *)(lVar12 + 0x50),
                                   *(undefined8 *)(lVar12 + 0x58));
      *plVar7 = lVar1;
      plVar7[1] = lVar8;
      plVar7[2] = lVar1;
      plVar7[3] = lVar16;
      plVar7[4] = lVar9;
      plVar7[5] = lVar16;
      plVar7[6] = lVar2;
      plVar7[7] = lVar10;
      plVar7[8] = lVar2;
      plVar7[10] = lStack_70;
      plVar7[9] = lStack_78;
      plVar7[0xb] = lStack_68;
      return uVar11;
    }
LAB_101841fb0:
    in_stack_00000048 = &stack0x00000028;
    uVar13 = __ZN4core3fmt5write17h64810b21425781ecE();
    if ((uVar13 & 1) != 0) {
      return 1;
    }
    unaff_x21 = unaff_x21 - uVar4;
    unaff_x20 = unaff_x20 + uVar4;
    if (uVar17 == 0) {
      if (unaff_x21 == 0) break;
      *(uint *)(unaff_x29 + -0x54) = (uint)*unaff_x20;
      in_stack_00000048 = (undefined8 *)(unaff_x29 + -0x54);
      uVar13 = __ZN4core3fmt5write17h64810b21425781ecE();
      if ((uVar13 & 1) != 0) {
        return 1;
      }
      if ((unaff_x21 - 1 != 0) && ((char)unaff_x20[1] < -0x40)) goto LAB_1018420e8;
      unaff_x20 = unaff_x20 + 1;
      unaff_x21 = unaff_x21 - 1;
    }
  } while (unaff_x21 != 0);
  in_stack_00000048 = (undefined8 *)&stack0x00000018;
  uVar11 = __ZN4core3fmt5write17h64810b21425781ecE();
  return uVar11;
}

