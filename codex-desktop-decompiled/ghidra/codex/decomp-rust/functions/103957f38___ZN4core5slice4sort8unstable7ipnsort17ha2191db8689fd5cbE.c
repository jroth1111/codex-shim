
/* WARNING: Possible PIC construction at 0x00010395b578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010395b57c) */

void __ZN4core5slice4sort8unstable7ipnsort17ha2191db8689fd5cbE(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long lVar17;
  long lVar18;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  undefined8 *puVar19;
  undefined8 unaff_x24;
  ulong uVar20;
  undefined8 unaff_x25;
  long unaff_x26;
  long lVar21;
  ulong uVar22;
  ulong unaff_x27;
  ulong uVar23;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar24;
  undefined8 uVar25;
  
  if (param_2 < 2) {
    return;
  }
  uVar7 = param_1[4];
  uVar9 = param_1[5];
  cVar5 = func_0x0001038d9fcc(uVar7,uVar9,param_1[1],param_1[2]);
  if (cVar5 == -1) {
    if (param_2 != 2) {
      puVar16 = param_1 + 8;
      uVar20 = 2;
      do {
        uVar24 = puVar16[-1];
        uVar25 = *puVar16;
        cVar6 = func_0x0001038d9fcc(uVar24,uVar25,uVar7,uVar9);
        if (cVar6 != -1) goto LAB_103957fe4;
        puVar16 = puVar16 + 3;
        uVar20 = uVar20 + 1;
        uVar7 = uVar24;
        uVar9 = uVar25;
      } while (param_2 != uVar20);
      goto LAB_103957fec;
    }
  }
  else if (param_2 != 2) {
    puVar16 = param_1 + 8;
    uVar20 = 2;
    do {
      uVar24 = puVar16[-1];
      uVar25 = *puVar16;
      cVar6 = func_0x0001038d9fcc(uVar24,uVar25,uVar7,uVar9);
      if (cVar6 == -1) goto LAB_103957fe4;
      puVar16 = puVar16 + 3;
      uVar20 = uVar20 + 1;
      uVar7 = uVar24;
      uVar9 = uVar25;
    } while (param_2 != uVar20);
    goto LAB_103957fec;
  }
  uVar20 = 2;
LAB_103957fe4:
  if (uVar20 != param_2) {
    uVar20 = (ulong)((int)LZCOUNT(param_2 | 1) << 1 ^ 0x7e);
    lVar10 = 0;
    puVar3 = (undefined1 *)register0x00000008;
    do {
      *(undefined8 **)(puVar3 + -0x60) = unaff_x28;
      *(ulong *)(puVar3 + -0x58) = unaff_x27;
      *(long *)(puVar3 + -0x50) = unaff_x26;
      *(undefined8 *)(puVar3 + -0x48) = unaff_x25;
      *(undefined8 *)(puVar3 + -0x40) = unaff_x24;
      *(ulong *)(puVar3 + -0x38) = unaff_x23;
      *(undefined8 **)(puVar3 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar3 + -0x28) = unaff_x21;
      *(undefined8 **)(puVar3 + -0x20) = unaff_x20;
      *(undefined8 **)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar3 + -8) = unaff_x30;
      unaff_x29 = puVar3 + -0x10;
      uVar22 = param_2;
      while( true ) {
        if (uVar22 < 0x21) {
          *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
          *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
          *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
          *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
          *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
          *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
          *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
          *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
          *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
          *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
          *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
          *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
          *(undefined8 *)(puVar3 + -0x530) = 0;
          if (uVar22 < 2) {
            return;
          }
          uVar20 = uVar22 >> 1;
          puVar16 = param_1 + uVar20 * 3;
          puVar15 = (undefined8 *)(puVar3 + uVar20 * 0x18 + -0x4f0);
          *(undefined8 **)(puVar3 + -0x510) = puVar16;
          *(ulong *)(puVar3 + -0x520) = uVar22;
          if (uVar22 < 8) {
            uVar7 = *param_1;
            *(undefined8 *)(puVar3 + -0x4e8) = param_1[1];
            *(undefined8 *)(puVar3 + -0x4f0) = uVar7;
            *(undefined8 *)(puVar3 + -0x4e0) = param_1[2];
            uVar7 = *puVar16;
            puVar15[1] = puVar16[1];
            *puVar15 = uVar7;
            puVar15[2] = puVar16[2];
            *(undefined8 *)(puVar3 + -0x528) = 1;
            *(ulong *)(puVar3 + -0x508) = uVar20;
            if (uVar20 < 2) goto LAB_10394a2b4;
          }
          else {
            func_0x000103949ffc(param_1,puVar3 + -0x4f0);
            func_0x000103949ffc(puVar16,puVar15);
            *(undefined8 *)(puVar3 + -0x528) = 4;
            *(ulong *)(puVar3 + -0x508) = uVar20;
            if (uVar20 < 5) goto LAB_10394a2b4;
          }
          lVar10 = *(ulong *)(puVar3 + -0x528) * 0x18;
          uVar22 = *(ulong *)(puVar3 + -0x528);
          goto LAB_10394a224;
        }
        if ((int)uVar20 == 0) {
          lVar10 = uVar22 + (uVar22 >> 1);
          if (lVar10 == 0) {
            return;
          }
          *(undefined8 *)(puVar3 + -0x60) = *(undefined8 *)(puVar3 + -0x60);
          *(undefined8 *)(puVar3 + -0x58) = *(undefined8 *)(puVar3 + -0x58);
          *(undefined8 *)(puVar3 + -0x50) = *(undefined8 *)(puVar3 + -0x50);
          *(undefined8 *)(puVar3 + -0x48) = *(undefined8 *)(puVar3 + -0x48);
          *(undefined8 *)(puVar3 + -0x40) = *(undefined8 *)(puVar3 + -0x40);
          *(undefined8 *)(puVar3 + -0x38) = *(undefined8 *)(puVar3 + -0x38);
          *(undefined8 *)(puVar3 + -0x30) = *(undefined8 *)(puVar3 + -0x30);
          *(undefined8 *)(puVar3 + -0x28) = *(undefined8 *)(puVar3 + -0x28);
          *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)(puVar3 + -0x20);
          *(undefined8 *)(puVar3 + -0x18) = *(undefined8 *)(puVar3 + -0x18);
          *(undefined8 *)(puVar3 + -0x10) = *(undefined8 *)(puVar3 + -0x10);
          *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
          *(ulong *)(puVar3 + -0x90) = uVar22;
          goto LAB_103958774;
        }
        puVar16 = param_1 + (uVar22 >> 3) * 0xc;
        puVar15 = param_1 + (uVar22 >> 3) * 0x15;
        *(long *)(puVar3 + -0x90) = lVar10;
        if (uVar22 < 0x40) {
          uVar7 = param_1[1];
          uVar24 = param_1[2];
          uVar9 = puVar16[2];
          *(undefined8 *)(puVar3 + -0x88) = puVar16[1];
          *(undefined8 *)(puVar3 + -0x98) = uVar9;
          cVar5 = func_0x0001038d9fcc(uVar7,uVar24);
          uVar9 = puVar15[1];
          uVar25 = puVar15[2];
          lVar10 = *(long *)(puVar3 + -0x90);
          cVar6 = func_0x0001038d9fcc(uVar7,uVar24,uVar9,uVar25);
          puVar8 = param_1;
          if (((cVar5 == -1) == (cVar6 == -1)) &&
             (cVar6 = func_0x0001038d9fcc(*(undefined8 *)(puVar3 + -0x88),
                                          *(undefined8 *)(puVar3 + -0x98),uVar9,uVar25),
             puVar8 = puVar15, (cVar5 == -1) == (cVar6 == -1))) {
            puVar8 = puVar16;
          }
        }
        else {
          puVar8 = (undefined8 *)func_0x0001039488b8(param_1,puVar16,puVar15);
        }
        *(int *)(puVar3 + -0x9c) = (int)uVar20 + -1;
        *(ulong *)(puVar3 + -0x98) = uVar22;
        *(undefined8 **)(puVar3 + -0xa8) = param_1;
        if (lVar10 == 0) break;
        puVar16 = (undefined8 *)((long)param_1 + ((long)puVar8 - (long)param_1));
        cVar5 = func_0x0001038d9fcc(*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),
                                    puVar16[1],puVar16[2]);
        if (cVar5 == -1) break;
        uVar20 = 0;
        uVar9 = param_1[1];
        uVar7 = *param_1;
        *(undefined8 *)(puVar3 + -0x70) = param_1[2];
        *(undefined8 *)(puVar3 + -0x78) = uVar9;
        *(undefined8 *)(puVar3 + -0x80) = uVar7;
        uVar9 = puVar16[1];
        uVar7 = *puVar16;
        param_1[2] = puVar16[2];
        param_1[1] = uVar9;
        *param_1 = uVar7;
        uVar9 = *(undefined8 *)(puVar3 + -0x78);
        uVar7 = *(undefined8 *)(puVar3 + -0x80);
        puVar16[2] = *(undefined8 *)(puVar3 + -0x70);
        puVar16[1] = uVar9;
        *puVar16 = uVar7;
        uVar7 = param_1[3];
        *(undefined8 *)(puVar3 + -0x78) = param_1[4];
        *(undefined8 *)(puVar3 + -0x80) = uVar7;
        *(undefined8 *)(puVar3 + -0x70) = param_1[5];
        *(undefined8 **)(puVar3 + -0x88) = param_1 + uVar22 * 3;
        uVar7 = param_1[1];
        uVar9 = param_1[2];
        lVar10 = uVar22 * 0x18 + -0x30;
        puVar16 = param_1 + 6;
        lVar18 = uVar22 * 0x18 + -0x48;
        do {
          lVar21 = lVar18;
          lVar17 = lVar10;
          cVar5 = func_0x0001038d9fcc(uVar7,uVar9,puVar16[1],puVar16[2]);
          puVar15 = param_1 + uVar20 * 3 + 3;
          uVar25 = puVar15[1];
          uVar24 = *puVar15;
          puVar16[-1] = puVar15[2];
          puVar16[-2] = uVar25;
          puVar16[-3] = uVar24;
          uVar25 = puVar16[1];
          uVar24 = *puVar16;
          if (cVar5 != -1) {
            uVar20 = uVar20 + 1;
          }
          puVar8 = puVar16 + 3;
          puVar15[2] = puVar16[2];
          puVar15[1] = uVar25;
          *puVar15 = uVar24;
          puVar15 = puVar16;
          lVar10 = lVar17 + -0x18;
          puVar16 = puVar8;
          lVar18 = lVar21 + -0x18;
        } while (puVar8 < *(undefined8 **)(puVar3 + -0x88));
        do {
          puVar16 = puVar15 + 3;
          puVar8 = (undefined8 *)(puVar3 + -0x80);
          if (lVar21 != 0) {
            puVar8 = puVar16;
          }
          cVar5 = func_0x0001038d9fcc(uVar7,uVar9,puVar8[1],puVar8[2]);
          puVar8 = (undefined8 *)(puVar3 + -0x80);
          if (lVar21 != 0) {
            puVar8 = puVar16;
          }
          puVar14 = param_1 + uVar20 * 3 + 3;
          uVar25 = puVar14[1];
          uVar24 = *puVar14;
          puVar15[2] = puVar14[2];
          puVar15[1] = uVar25;
          *puVar15 = uVar24;
          uVar25 = puVar8[1];
          uVar24 = *puVar8;
          puVar14[2] = puVar8[2];
          puVar14[1] = uVar25;
          *puVar14 = uVar24;
          if (cVar5 != -1) {
            uVar20 = uVar20 + 1;
          }
          lVar21 = lVar21 + -0x18;
          lVar17 = lVar17 + -0x18;
          puVar15 = puVar16;
        } while (lVar17 != 0);
        uVar22 = *(ulong *)(puVar3 + -0x98);
        if (uVar22 <= uVar20) goto LAB_10395b5d4;
        lVar10 = 0;
        puVar16 = *(undefined8 **)(puVar3 + -0xa8);
        param_1 = puVar16 + uVar20 * 3;
        uVar9 = puVar16[1];
        uVar7 = *puVar16;
        *(undefined8 *)(puVar3 + -0x70) = puVar16[2];
        *(undefined8 *)(puVar3 + -0x78) = uVar9;
        *(undefined8 *)(puVar3 + -0x80) = uVar7;
        uVar9 = param_1[1];
        uVar7 = *param_1;
        puVar16[2] = param_1[2];
        puVar16[1] = uVar9;
        *puVar16 = uVar7;
        uVar9 = *(undefined8 *)(puVar3 + -0x78);
        uVar7 = *(undefined8 *)(puVar3 + -0x80);
        param_1[2] = *(undefined8 *)(puVar3 + -0x70);
        param_1[1] = uVar9;
        *param_1 = uVar7;
        uVar22 = ~uVar20 + uVar22;
        param_1 = param_1 + 3;
        uVar20 = (ulong)*(uint *)(puVar3 + -0x9c);
      }
      param_2 = 0;
      puVar16 = (undefined8 *)((long)param_1 + ((long)puVar8 - (long)param_1));
      uVar9 = param_1[1];
      uVar7 = *param_1;
      *(undefined8 *)(puVar3 + -0x70) = param_1[2];
      *(undefined8 *)(puVar3 + -0x78) = uVar9;
      *(undefined8 *)(puVar3 + -0x80) = uVar7;
      uVar9 = puVar16[1];
      uVar7 = *puVar16;
      param_1[2] = puVar16[2];
      param_1[1] = uVar9;
      *param_1 = uVar7;
      uVar9 = *(undefined8 *)(puVar3 + -0x78);
      uVar7 = *(undefined8 *)(puVar3 + -0x80);
      puVar16[2] = *(undefined8 *)(puVar3 + -0x70);
      puVar16[1] = uVar9;
      *puVar16 = uVar7;
      unaff_x19 = param_1 + 3;
      uVar7 = param_1[3];
      *(undefined8 *)(puVar3 + -0x78) = param_1[4];
      *(undefined8 *)(puVar3 + -0x80) = uVar7;
      *(undefined8 *)(puVar3 + -0x70) = param_1[5];
      *(undefined8 **)(puVar3 + -0x88) = param_1 + uVar22 * 3;
      unaff_x24 = param_1[1];
      unaff_x25 = param_1[2];
      lVar10 = uVar22 * 0x18 + -0x30;
      lVar18 = uVar22 * 0x18 + -0x48;
      puVar16 = param_1 + 6;
      do {
        lVar21 = lVar18;
        lVar17 = lVar10;
        cVar5 = func_0x0001038d9fcc(puVar16[1],puVar16[2],unaff_x24,unaff_x25);
        puVar15 = unaff_x19 + param_2 * 3;
        uVar9 = puVar15[1];
        uVar7 = *puVar15;
        puVar16[-1] = puVar15[2];
        puVar16[-2] = uVar9;
        puVar16[-3] = uVar7;
        uVar9 = puVar16[1];
        uVar7 = *puVar16;
        if (cVar5 == -1) {
          param_2 = param_2 + 1;
        }
        puVar8 = puVar16 + 3;
        puVar15[2] = puVar16[2];
        puVar15[1] = uVar9;
        *puVar15 = uVar7;
        puVar15 = puVar16;
        lVar10 = lVar17 + -0x18;
        lVar18 = lVar21 + -0x18;
        puVar16 = puVar8;
      } while (puVar8 < *(undefined8 **)(puVar3 + -0x88));
      do {
        unaff_x20 = puVar15 + 3;
        puVar16 = (undefined8 *)(puVar3 + -0x80);
        if (lVar21 != 0) {
          puVar16 = unaff_x20;
        }
        cVar5 = func_0x0001038d9fcc(puVar16[1],puVar16[2],unaff_x24,unaff_x25);
        puVar16 = (undefined8 *)(puVar3 + -0x80);
        if (lVar21 != 0) {
          puVar16 = unaff_x20;
        }
        puVar8 = unaff_x19 + param_2 * 3;
        uVar9 = puVar8[1];
        uVar7 = *puVar8;
        puVar15[2] = puVar8[2];
        puVar15[1] = uVar9;
        *puVar15 = uVar7;
        uVar9 = puVar16[1];
        uVar7 = *puVar16;
        puVar8[2] = puVar16[2];
        puVar8[1] = uVar9;
        *puVar8 = uVar7;
        if (cVar5 == -1) {
          param_2 = param_2 + 1;
        }
        lVar21 = lVar21 + -0x18;
        lVar17 = lVar17 + -0x18;
        puVar15 = unaff_x20;
      } while (lVar17 != 0);
      uVar20 = *(ulong *)(puVar3 + -0x98);
      if (uVar20 <= param_2) {
LAB_10395b5d4:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10395b5d8);
        (*pcVar2)();
      }
      param_1 = *(undefined8 **)(puVar3 + -0xa8);
      unaff_x22 = param_1 + param_2 * 3;
      uVar9 = param_1[1];
      uVar7 = *param_1;
      *(undefined8 *)(puVar3 + -0x70) = param_1[2];
      *(undefined8 *)(puVar3 + -0x78) = uVar9;
      *(undefined8 *)(puVar3 + -0x80) = uVar7;
      uVar9 = unaff_x22[1];
      uVar7 = *unaff_x22;
      param_1[2] = unaff_x22[2];
      param_1[1] = uVar9;
      *param_1 = uVar7;
      uVar9 = *(undefined8 *)(puVar3 + -0x78);
      uVar7 = *(undefined8 *)(puVar3 + -0x80);
      unaff_x22[2] = *(undefined8 *)(puVar3 + -0x70);
      unaff_x22[1] = uVar9;
      *unaff_x22 = uVar7;
      unaff_x28 = unaff_x22 + 3;
      unaff_x26 = uVar20 + ~param_2;
      lVar10 = *(long *)(puVar3 + -0x90);
      uVar20 = (ulong)*(uint *)(puVar3 + -0x9c);
      unaff_x30 = 0x10395b57c;
      unaff_x21 = 0;
      puVar3 = puVar3 + -0xb0;
      unaff_x23 = param_2;
      unaff_x27 = uVar20;
    } while( true );
  }
LAB_103957fec:
  if (cVar5 == -1) {
    uVar20 = param_2 >> 1;
    puVar16 = param_1 + 2;
    puVar15 = param_1 + param_2 * 3 + -1;
    do {
      uVar9 = puVar16[-1];
      uVar7 = puVar16[-2];
      uVar24 = puVar15[-2];
      puVar16[-1] = puVar15[-1];
      puVar16[-2] = uVar24;
      puVar15[-1] = uVar9;
      puVar15[-2] = uVar7;
      uVar7 = *puVar16;
      *puVar16 = *puVar15;
      *puVar15 = uVar7;
      uVar20 = uVar20 - 1;
      puVar16 = puVar16 + 3;
      puVar15 = puVar15 + -3;
    } while (uVar20 != 0);
  }
  return;
LAB_103958774:
  uVar23 = lVar10 - 1;
  uVar20 = uVar23 - uVar22;
  if (uVar23 < uVar22) {
    uVar20 = 0;
    puVar16 = param_1 + uVar23 * 3;
    uVar7 = param_1[2];
    uVar25 = param_1[1];
    uVar24 = *param_1;
    uVar9 = puVar16[2];
    uVar13 = *puVar16;
    param_1[1] = puVar16[1];
    *param_1 = uVar13;
    param_1[2] = uVar9;
    puVar16[1] = uVar25;
    *puVar16 = uVar24;
    puVar16[2] = uVar7;
  }
  *(ulong *)(puVar3 + -0x88) = uVar23;
  if (uVar23 <= uVar22) {
    uVar22 = uVar23;
  }
  while (uVar23 = (uVar20 & 0x3fffffffffffffff) << 1 | 1, uVar23 < uVar22) {
    uVar11 = uVar20 * 2 + 2;
    if ((uVar11 < uVar22) &&
       (cVar5 = func_0x0001038d9fcc(param_1[uVar23 * 3 + 1],param_1[uVar23 * 3 + 2],
                                    param_1[uVar11 * 3 + 1],param_1[uVar11 * 3 + 2]), cVar5 == -1))
    {
      uVar23 = uVar23 + 1;
    }
    puVar15 = param_1 + uVar20 * 3;
    puVar16 = param_1 + uVar23 * 3;
    uVar7 = puVar15[1];
    uVar24 = puVar15[2];
    uVar9 = puVar16[1];
    uVar25 = puVar16[2];
    cVar5 = func_0x0001038d9fcc(uVar7,uVar24,uVar9,uVar25);
    if (cVar5 != -1) break;
    uVar13 = *puVar15;
    *puVar15 = *puVar16;
    puVar15[1] = uVar9;
    *puVar16 = uVar13;
    puVar16[1] = uVar7;
    puVar15[2] = uVar25;
    puVar16[2] = uVar24;
    uVar20 = uVar23;
  }
  uVar22 = *(ulong *)(puVar3 + -0x90);
  lVar10 = *(long *)(puVar3 + -0x88);
  if (lVar10 == 0) {
    return;
  }
  goto LAB_103958774;
LAB_10394a224:
  do {
    uVar23 = uVar22 + 1;
    puVar16 = param_1 + uVar22 * 3;
    puVar8 = (undefined8 *)(puVar3 + uVar22 * 0x18 + -0x4f0);
    uVar7 = *puVar16;
    puVar8[1] = puVar16[1];
    *puVar8 = uVar7;
    uVar7 = puVar16[2];
    puVar8[2] = uVar7;
    uVar9 = puVar8[1];
    cVar5 = func_0x0001038d9fcc(uVar9,uVar7,puVar8[-2],puVar8[-1]);
    if (cVar5 == -1) {
      *(undefined8 *)(puVar3 + -0x500) = *puVar8;
      lVar18 = lVar10;
      do {
        lVar17 = lVar18;
        puVar16 = (undefined8 *)(puVar3 + -0x4f0);
        puVar8 = (undefined8 *)((long)puVar16 + lVar17);
        puVar8[1] = puVar8[-2];
        *puVar8 = puVar8[-3];
        puVar8[2] = puVar8[-1];
        if (lVar17 + -0x18 == 0) goto LAB_10394a200;
        cVar5 = func_0x0001038d9fcc(uVar9,uVar7,*(undefined8 *)(puVar3 + lVar17 + -0x518),
                                    *(undefined8 *)(puVar3 + lVar17 + -0x510));
        lVar18 = lVar17 + -0x18;
      } while (cVar5 == -1);
      puVar16 = (undefined8 *)(puVar3 + lVar17 + -0x508);
LAB_10394a200:
      *puVar16 = *(undefined8 *)(puVar3 + -0x500);
      *(undefined8 *)(puVar3 + lVar17 + -0x500) = uVar9;
      *(undefined8 *)(puVar3 + lVar17 + -0x4f8) = uVar7;
    }
    lVar10 = lVar10 + 0x18;
    uVar20 = *(ulong *)(puVar3 + -0x508);
    uVar22 = uVar23;
  } while (uVar23 < uVar20);
LAB_10394a2b4:
  *(undefined8 **)(puVar3 + -0x4f8) = param_1;
  uVar20 = *(long *)(puVar3 + -0x520) - uVar20;
  lVar10 = *(long *)(puVar3 + -0x510);
  if (*(ulong *)(puVar3 + -0x528) < uVar20) {
    uVar23 = *(ulong *)(puVar3 + -0x528);
    lVar18 = 0x18;
    *(ulong *)(puVar3 + -0x518) = uVar20;
    puVar16 = puVar15;
    uVar22 = uVar23;
    do {
      uVar11 = uVar22 + 1;
      puVar8 = (undefined8 *)(lVar10 + uVar22 * 0x18);
      puVar14 = puVar15 + uVar22 * 3;
      uVar7 = *puVar8;
      puVar14[1] = puVar8[1];
      *puVar14 = uVar7;
      uVar7 = puVar8[2];
      puVar14[2] = uVar7;
      uVar9 = puVar14[1];
      cVar5 = func_0x0001038d9fcc(uVar9,uVar7,puVar14[-2],puVar14[-1]);
      if (cVar5 == -1) {
        *(undefined8 *)(puVar3 + -0x500) = *puVar14;
        puVar8 = puVar16;
        lVar10 = lVar18;
        do {
          puVar14 = puVar8 + uVar23 * 3;
          puVar14[1] = puVar14[-2];
          *puVar14 = puVar14[-3];
          puVar14[2] = puVar14[-1];
          puVar12 = puVar15;
          if (uVar23 * 0x18 - lVar10 == 0) goto LAB_10394a2f0;
          cVar5 = func_0x0001038d9fcc(uVar9,uVar7,puVar14[-5],puVar14[-4]);
          puVar8 = puVar8 + -3;
          lVar10 = lVar10 + 0x18;
        } while (cVar5 == -1);
        puVar12 = puVar8 + uVar23 * 3;
LAB_10394a2f0:
        *puVar12 = *(undefined8 *)(puVar3 + -0x500);
        puVar14[-2] = uVar9;
        puVar14[-1] = uVar7;
        uVar20 = *(ulong *)(puVar3 + -0x518);
        lVar10 = *(long *)(puVar3 + -0x510);
      }
      lVar18 = lVar18 + -0x18;
      puVar16 = puVar16 + 3;
      uVar22 = uVar11;
    } while (uVar11 < uVar20);
  }
  lVar10 = *(long *)(puVar3 + -0x520) * 0x18;
  puVar16 = (undefined8 *)(puVar3 + -0x4f0);
  puVar8 = puVar16 + *(long *)(puVar3 + -0x520) * 3 + -3;
  puVar12 = puVar15 + -3;
  lVar18 = *(long *)(puVar3 + -0x508);
  puVar14 = *(undefined8 **)(puVar3 + -0x4f8);
  do {
    puVar19 = puVar14;
    lVar10 = lVar10 + -0x18;
    cVar5 = func_0x0001038d9fcc(puVar15[1],puVar15[2],puVar16[1],puVar16[2]);
    puVar14 = puVar15;
    if (cVar5 != -1) {
      puVar14 = puVar16;
    }
    uVar7 = *puVar14;
    puVar19[1] = puVar14[1];
    *puVar19 = uVar7;
    puVar19[2] = puVar14[2];
    cVar6 = func_0x0001038d9fcc(puVar8[1],puVar8[2],puVar12[1],puVar12[2]);
    puVar14 = (undefined8 *)(*(long *)(puVar3 + -0x4f8) + lVar10);
    lVar17 = 0;
    if (cVar5 != -1) {
      lVar17 = 0x18;
    }
    puVar16 = (undefined8 *)((long)puVar16 + lVar17);
    lVar17 = 0x18;
    if (cVar5 != -1) {
      lVar17 = 0;
    }
    puVar15 = (undefined8 *)((long)puVar15 + lVar17);
    bVar4 = cVar6 == -1;
    puVar1 = puVar12;
    if (!bVar4) {
      puVar1 = puVar8;
    }
    uVar7 = *puVar1;
    puVar14[1] = puVar1[1];
    *puVar14 = uVar7;
    puVar14[2] = puVar1[2];
    puVar8 = puVar8 + (ulong)!bVar4 * -3;
    puVar12 = puVar12 + (ulong)bVar4 * -3;
    lVar18 = lVar18 + -1;
    puVar14 = puVar19 + 3;
  } while (lVar18 != 0);
  if ((*(ulong *)(puVar3 + -0x520) & 1) != 0) {
    bVar4 = puVar12 + 3 <= puVar16;
    puVar14 = puVar16;
    if (bVar4) {
      puVar14 = puVar15;
    }
    uVar7 = *puVar14;
    puVar19[4] = puVar14[1];
    puVar19[3] = uVar7;
    puVar19[5] = puVar14[2];
    lVar10 = 0x18;
    if (bVar4) {
      lVar10 = 0;
    }
    puVar16 = (undefined8 *)((long)puVar16 + lVar10);
    lVar10 = 0;
    if (bVar4) {
      lVar10 = 0x18;
    }
    puVar15 = (undefined8 *)((long)puVar15 + lVar10);
  }
  if (puVar16 == puVar12 + 3 && puVar15 == puVar8 + 3) {
    return;
  }
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10394a4dc);
  (*pcVar2)();
}

