
/* WARNING: Possible PIC construction at 0x0001039a0eb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039a0eb8) */

undefined8 *
FUN_1039a0d60(undefined1 param_1 [16],undefined1 param_2 [16],ulong *param_3,long param_4,
             ulong param_5)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong extraout_x8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  undefined8 *unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined1 *unaff_x26;
  long unaff_x27;
  long *plVar14;
  long unaff_x28;
  undefined1 *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  
  uVar18 = param_2._8_8_;
  uVar17 = param_2._0_8_;
  puVar15 = &stack0xfffffffffffffff0;
  uVar9 = param_5;
  uVar4 = _malloc(param_5);
  if (uVar4 != 0) {
    *param_3 = param_5;
    param_3[1] = uVar4;
    puVar5 = (undefined8 *)_memcpy(uVar4,param_4,param_5);
    param_3[2] = param_5;
    return puVar5;
  }
  uVar16 = 0x1039a0db8;
  auVar19 = func_0x0001087c9084(1,param_5);
  puVar3 = &stack0xffffffffffffffd0;
SUB_1039a0db8:
  uVar4 = uVar9;
  lVar13 = auVar19._8_8_;
  puVar5 = auVar19._0_8_;
  *(long *)(puVar3 + -0x60) = unaff_x28;
  *(long *)(puVar3 + -0x58) = unaff_x27;
  *(undefined1 **)(puVar3 + -0x50) = unaff_x26;
  *(ulong *)(puVar3 + -0x48) = unaff_x25;
  *(ulong *)(puVar3 + -0x40) = unaff_x24;
  *(undefined8 **)(puVar3 + -0x38) = unaff_x23;
  *(long *)(puVar3 + -0x30) = unaff_x22;
  *(long *)(puVar3 + -0x28) = param_4;
  *(ulong **)(puVar3 + -0x20) = param_3;
  *(ulong *)(puVar3 + -0x18) = param_5;
  *(undefined1 **)(puVar3 + -0x10) = puVar15;
  *(undefined8 *)(puVar3 + -8) = uVar16;
  puVar15 = puVar3 + -0x10;
  *(undefined8 **)(puVar3 + -0xe8) = puVar5;
  if (uVar4 == 0) {
    *(undefined8 *)(puVar3 + -200) = 0;
    *(undefined8 *)(puVar3 + -0xc0) = 8;
LAB_1039a0f74:
    uVar16 = *(undefined8 *)(puVar3 + -200);
    puVar6 = *(undefined8 **)(puVar3 + -0xe8);
    puVar6[1] = *(undefined8 *)(puVar3 + -0xc0);
    *puVar6 = uVar16;
    puVar6[2] = uVar4;
    return puVar5;
  }
  unaff_x22 = uVar4 * 0x48;
  uVar9 = uVar4;
  puVar6 = (undefined8 *)_malloc(unaff_x22);
  if (puVar6 != (undefined8 *)0x0) {
    unaff_x28 = 0;
    unaff_x27 = 0;
    *(ulong *)(puVar3 + -200) = uVar4;
    *(undefined8 **)(puVar3 + -0xc0) = puVar6;
    param_3 = (ulong *)0x5;
    puVar5 = puVar6;
    uVar9 = extraout_x8;
    do {
      unaff_x26 = puVar3 + -0x98;
      if (unaff_x22 - unaff_x28 == 0) goto LAB_1039a0f74;
      uVar10 = *(ulong *)(lVar13 + unaff_x28);
      uVar11 = uVar10 ^ 0x8000000000000000;
      if (-1 < (long)uVar10) {
        uVar11 = 5;
      }
      if ((long)uVar11 < 3) {
        if (uVar11 != 0) {
          lVar12 = lVar13 + unaff_x28;
          unaff_x24 = *(ulong *)(lVar12 + 8);
          unaff_x25 = *(ulong *)(lVar12 + 0x10);
          uVar9 = *(ulong *)(lVar12 + 0x18);
          uVar16 = *(undefined8 *)(lVar12 + 0x20);
          *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(lVar12 + 0x28);
          *(undefined8 *)(puVar3 + -0xb0) = uVar16;
          *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(lVar12 + 0x30);
          goto LAB_1039a0f3c;
        }
        uVar10 = 0x8000000000000000;
      }
      else if (uVar11 == 3) {
        *(ulong *)(puVar3 + -0xd8) = uVar18;
        *(ulong *)(puVar3 + -0xe0) = uVar17;
        uVar16 = *(undefined8 *)(lVar13 + unaff_x28 + 0x10);
        uVar9 = *(ulong *)(lVar13 + unaff_x28 + 0x18);
        if (uVar9 == 0) {
          unaff_x25 = 1;
        }
        else {
          unaff_x25 = _malloc(uVar9);
          if (unaff_x25 == 0) {
            func_0x0001087c9084(1,uVar9);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1039a0fb4);
            (*pcVar2)();
          }
        }
        puVar5 = (undefined8 *)_memcpy(unaff_x25,uVar16,uVar9);
        uVar10 = 0x8000000000000003;
        uVar18 = *(ulong *)(puVar3 + -0xd8);
        uVar17 = *(ulong *)(puVar3 + -0xe0);
        unaff_x24 = uVar9;
      }
      else {
        if (uVar11 == 4) goto code_r0x0001039a0ea4;
        *(undefined8 *)(puVar3 + -0x78) = 0;
        *(undefined **)(puVar3 + -0x80) = &UNK_108d961a0;
        *(undefined8 *)(puVar3 + -0x68) = 0;
        *(undefined8 *)(puVar3 + -0x70) = 0;
        *(undefined8 *)(puVar3 + -0x98) = 0;
        *(undefined8 *)(puVar3 + -0x90) = 8;
        *(undefined8 *)(puVar3 + -0x88) = 0;
        puVar5 = (undefined8 *)func_0x00010397b1dc(puVar3 + -0x98,lVar13 + unaff_x28);
        uVar10 = *(ulong *)(puVar3 + -0x98);
        unaff_x24 = *(ulong *)(puVar3 + -0x90);
        unaff_x25 = *(ulong *)(puVar3 + -0x88);
        uVar9 = *(ulong *)(puVar3 + -0x80);
        *(undefined8 *)(puVar3 + -0xa8) = *(undefined8 *)(puVar3 + -0x70);
        *(undefined8 *)(puVar3 + -0xb0) = *(undefined8 *)(puVar3 + -0x78);
        *(undefined8 *)(puVar3 + -0xa0) = *(undefined8 *)(puVar3 + -0x68);
LAB_1039a0f3c:
        uVar18 = *(ulong *)(lVar13 + unaff_x28 + 0x40);
        uVar17 = *(ulong *)(lVar13 + unaff_x28 + 0x38);
      }
      puVar8 = (ulong *)((long)puVar6 + unaff_x28);
      *puVar8 = uVar10;
      puVar8[1] = unaff_x24;
      puVar8[2] = unaff_x25;
      puVar8[3] = uVar9;
      uVar11 = *(ulong *)(puVar3 + -0xb0);
      puVar8[5] = *(ulong *)(puVar3 + -0xa8);
      puVar8[4] = uVar11;
      puVar8[6] = *(ulong *)(puVar3 + -0xa0);
      puVar8[8] = uVar18;
      puVar8[7] = uVar17;
      unaff_x28 = unaff_x28 + 0x48;
      unaff_x27 = unaff_x27 + 1;
      if (unaff_x22 - unaff_x28 == 0) goto LAB_1039a0f74;
    } while( true );
  }
  uVar16 = func_0x0001087c9084(8,unaff_x22);
  *(long *)(puVar3 + -0xb8) = unaff_x27;
  func_0x00010393e674(puVar3 + -200);
  __Unwind_Resume(uVar16);
  func_0x000108a07bc4();
  auVar19 = func_0x000108a07bc4();
  lVar12 = auVar19._8_8_;
  puVar5 = auVar19._0_8_;
  *(long *)(puVar3 + -0x150) = unaff_x28;
  *(long *)(puVar3 + -0x148) = unaff_x27;
  *(undefined1 **)(puVar3 + -0x140) = unaff_x26;
  *(ulong *)(puVar3 + -0x138) = unaff_x25;
  *(ulong *)(puVar3 + -0x130) = unaff_x24;
  *(undefined8 **)(puVar3 + -0x128) = unaff_x23;
  *(long *)(puVar3 + -0x120) = unaff_x22;
  *(long *)(puVar3 + -0x118) = lVar13;
  *(ulong **)(puVar3 + -0x110) = param_3;
  *(undefined8 *)(puVar3 + -0x108) = uVar16;
  *(undefined1 **)(puVar3 + -0x100) = puVar15;
  *(undefined8 *)(puVar3 + -0xf8) = 0x1039a0ff4;
  if (uVar9 == 0) {
    *(undefined8 *)(puVar3 + -0x168) = 0;
    *(undefined8 *)(puVar3 + -0x160) = 8;
    puVar6 = puVar5;
    goto LAB_1039a10a8;
  }
  lVar13 = uVar9 * 0x18;
  uVar4 = uVar9;
  puVar6 = (undefined8 *)_malloc(lVar13);
  if (puVar6 == (undefined8 *)0x0) {
    uVar16 = func_0x0001087c9084(8,lVar13);
    *(undefined1 **)(puVar3 + -0x158) = unaff_x26;
    func_0x000103943b04(puVar3 + -0x168);
    auVar19 = __Unwind_Resume(uVar16);
    plVar14 = auVar19._0_8_;
    *(long *)(puVar3 + -0x1a0) = lVar13;
    *(long *)(puVar3 + -0x198) = lVar12;
    *(undefined8 **)(puVar3 + -400) = puVar5;
    *(undefined8 *)(puVar3 + -0x188) = uVar16;
    *(undefined1 **)(puVar3 + -0x180) = puVar3 + -0x100;
    *(undefined8 *)(puVar3 + -0x178) = 0x1039a10f8;
    lVar13 = plVar14[2];
    uVar17 = plVar14[3];
    uVar9 = lVar13 + uVar4;
    if (uVar9 <= uVar17) {
      if ((ulong)(*plVar14 - lVar13) < uVar4) {
        FUN_108950dcc(plVar14,lVar13,uVar4,1,1);
        lVar13 = plVar14[2];
        uVar9 = lVar13 + uVar4;
      }
      _memcpy(plVar14[1] + lVar13,auVar19._8_8_,uVar4);
      plVar14[2] = uVar9;
      return (undefined8 *)0x0;
    }
    puVar8 = (ulong *)_malloc(0x10);
    if (puVar8 == (ulong *)0x0) {
      func_0x0001087c906c(8,0x10);
    }
    else {
      *puVar8 = uVar9;
      puVar8[1] = uVar17;
      puVar5 = (undefined8 *)_malloc(0x18);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = puVar8;
        puVar5[1] = &UNK_10b2dbf30;
        *(undefined1 *)(puVar5 + 2) = 0x28;
        return (undefined8 *)0x1;
      }
    }
    func_0x0001087c906c(8,0x18);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1039a11b8);
    (*pcVar2)();
  }
  *(ulong *)(puVar3 + -0x168) = uVar9;
  *(undefined8 **)(puVar3 + -0x160) = puVar6;
  plVar14 = puVar6 + 2;
  goto LAB_1039a1074;
code_r0x0001039a0ea4:
  *(ulong *)(puVar3 + -0xd8) = uVar18;
  *(ulong *)(puVar3 + -0xe0) = uVar17;
  auVar19._8_8_ = *(undefined8 *)(lVar13 + unaff_x28 + 0x10);
  auVar19._0_8_ = puVar3 + -0x98;
  uVar16 = 0x1039a0eb8;
  puVar3 = puVar3 + -0xf0;
  uVar9 = *(ulong *)(lVar13 + unaff_x28 + 0x18);
  param_5 = uVar4;
  param_4 = lVar13;
  unaff_x23 = puVar6;
  goto SUB_1039a0db8;
  while( true ) {
    uVar16 = *(undefined8 *)(lVar12 + 8);
    lVar1 = *(long *)(lVar12 + 0x10);
    if (lVar1 == 0) {
      lVar7 = 1;
    }
    else {
      lVar7 = _malloc(lVar1);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,lVar1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1039a10a0);
        (*pcVar2)();
      }
    }
    lVar12 = lVar12 + 0x18;
    puVar6 = (undefined8 *)_memcpy(lVar7,uVar16,lVar1);
    plVar14[-2] = lVar1;
    plVar14[-1] = lVar7;
    *plVar14 = lVar1;
    lVar13 = lVar13 + -0x18;
    plVar14 = plVar14 + 3;
    if (lVar13 == 0) break;
LAB_1039a1074:
    if (lVar13 == 0) break;
  }
LAB_1039a10a8:
  uVar16 = *(undefined8 *)(puVar3 + -0x168);
  puVar5[1] = *(undefined8 *)(puVar3 + -0x160);
  *puVar5 = uVar16;
  puVar5[2] = uVar9;
  return puVar6;
}

