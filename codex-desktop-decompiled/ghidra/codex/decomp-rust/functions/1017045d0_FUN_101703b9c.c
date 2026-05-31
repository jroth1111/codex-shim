
/* WARNING: Removing unreachable block (ram,0x000101704944) */
/* WARNING: Removing unreachable block (ram,0x00010170497c) */
/* WARNING: Removing unreachable block (ram,0x000101704574) */
/* WARNING: Removing unreachable block (ram,0x000101704588) */
/* WARNING: Removing unreachable block (ram,0x000101704590) */
/* WARNING: Removing unreachable block (ram,0x000101704594) */
/* WARNING: Removing unreachable block (ram,0x00010170459c) */
/* WARNING: Removing unreachable block (ram,0x0001017045ac) */
/* WARNING: Type propagation algorithm not settling */

void FUN_101703b9c(void)

{
  ushort *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ushort uVar12;
  long *plVar13;
  long lVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long unaff_x22;
  long unaff_x23;
  long lVar30;
  undefined8 unaff_x24;
  long lVar31;
  undefined8 unaff_x25;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  undefined8 unaff_x27;
  long lVar36;
  long lVar37;
  long unaff_x29;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000068;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  long in_stack_00000180;
  ulong in_stack_00000188;
  long in_stack_00000190;
  char in_stack_00000260;
  undefined7 in_stack_00000281;
  undefined7 uVar38;
  undefined1 in_stack_00000288;
  undefined1 uVar39;
  undefined7 in_stack_00000289;
  undefined7 uVar40;
  undefined1 in_stack_00000290;
  undefined7 in_stack_00000291;
  undefined1 in_stack_00000298;
  undefined7 in_stack_00000299;
  undefined1 in_stack_000002a0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xe0,s_____108adc5d5,&stack0x00000260);
  lVar18 = *(long *)(unaff_x29 + -0xe0);
  lVar37 = *(long *)(unaff_x29 + -0xd8);
  __ZN106__LT_ed25519_dalek__signing__SigningKey_u20_as_u20_signature__signer__Signer_LT_ed25519__Signature_GT__GT_8try_sign17h248b0bb7200af3eaE
            (&stack0x00000260,&stack0x00000180,lVar37,*(undefined8 *)(unaff_x29 + -0xd0));
  if (in_stack_00000260 == '\x01') {
    uVar23 = *(undefined8 *)(unaff_x22 + 0xe8);
    *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x22 + 0xf0);
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar23;
    func_0x000108a07a3c(&UNK_108cdee53,0x1a,unaff_x29 + -0xe0,&UNK_10b255028,&UNK_10b254fa8);
    goto LAB_1017049dc;
  }
  uVar23 = *(undefined8 *)(unaff_x22 + 0xe1);
  lVar31 = *(long *)(unaff_x22 + 0xf9);
  lVar28 = *(long *)(unaff_x22 + 0xf1);
  *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x22 + 0xe9);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar23;
  *(long *)(unaff_x29 + -200) = lVar31;
  *(long *)(unaff_x29 + -0xd0) = lVar28;
  *(ulong *)(unaff_x29 + -0xb8) = CONCAT17(in_stack_00000290,in_stack_00000289);
  *(ulong *)(unaff_x29 + -0xc0) = CONCAT17(in_stack_00000288,in_stack_00000281);
  *(ulong *)(unaff_x29 + -0xa8) = CONCAT17(in_stack_000002a0,in_stack_00000299);
  *(ulong *)(unaff_x29 + -0xb0) = CONCAT17(in_stack_00000298,in_stack_00000291);
  uVar38 = (undefined7)(CONCAT17(in_stack_00000288,in_stack_00000281) >> 8);
  func_0x00010170b5f8(unaff_x29 + -0xf8,&UNK_108cdebab,&stack0x00000260,0x40);
  lVar5 = *(long *)(unaff_x29 + -0xf8);
  uVar23 = *(undefined8 *)(unaff_x29 + -0xf0);
  if (lVar18 != 0) {
    _free(lVar37);
    lVar37 = lVar5;
  }
  if (lVar5 != -0x8000000000000000) {
    lVar18 = _malloc(0x170);
    if (lVar18 != 0) {
      lVar33 = 0;
      bVar16 = false;
      lVar32 = 0;
      uVar29 = 0;
      *(undefined8 *)(lVar18 + 0x160) = 0;
      *(undefined2 *)(lVar18 + 0x16a) = 0;
      uVar39 = 0;
      uVar40 = 0;
      lVar36 = lVar18;
      do {
        plVar2 = (long *)&stack0x00000270;
        plVar13 = (long *)&stack0x00000278;
        lVar19 = lVar37;
        uVar34 = uVar29;
        lVar37 = lVar36;
        if (!bVar16) {
          if (lVar33 == 4) goto joined_r0x0001017041b4;
          lVar19 = lVar33 * 0x20;
          lVar33 = lVar33 + 1;
          uVar39 = (undefined1)lVar33;
          uVar40 = (undefined7)((ulong)lVar33 >> 8);
          plVar2 = (long *)(&stack0x000002a0 + lVar19);
          plVar13 = (long *)(&stack0x000002a8 + lVar19);
          lVar19 = *(long *)(&stack0x00000298 + lVar19);
        }
        if (lVar19 == 0) goto joined_r0x0001017041b4;
        lVar24 = *plVar2;
        lVar30 = *plVar13;
        lVar26 = *(long *)((long)plVar13 + 8);
        lVar35 = lVar19;
        if (lVar33 == 4) {
LAB_101703ea8:
          lVar37 = 0;
          uVar12 = *(ushort *)(lVar18 + 0x16a);
          lVar33 = 4;
          lVar14 = 0;
          if (10 < uVar12) goto LAB_101703f84;
LAB_101703e2c:
          lVar37 = lVar14;
          *(ushort *)(lVar18 + 0x16a) = uVar12 + 1;
          plVar2 = (long *)(lVar18 + (ulong)uVar12 * 0x10);
          *plVar2 = lVar35;
          plVar2[1] = lVar24;
          plVar2[0x16] = lVar30;
          plVar2[0x17] = lVar26;
          lVar33 = CONCAT71(uVar40,uVar39);
        }
        else {
          lVar20 = lVar33 + 1;
          lVar35 = *(long *)(&stack0x00000298 + lVar33 * 0x20);
          uVar39 = (undefined1)lVar20;
          uVar40 = (undefined7)((ulong)lVar20 >> 8);
          if (lVar35 == 0) {
LAB_101703f4c:
            uVar12 = *(ushort *)(lVar18 + 0x16a);
            lVar37 = 0;
            lVar14 = lVar35;
            lVar35 = lVar19;
          }
          else {
            lVar37 = lVar35;
            lVar14 = lVar35;
            if (lVar24 == lVar28) {
              iVar17 = _memcmp(lVar19,lVar35);
              if (iVar17 == 0) {
                lVar30 = lVar31;
                if (lVar20 != 4) {
                  puVar21 = &stack0x000002c0 + lVar33 * 0x20;
                  lVar19 = lVar35;
                  lVar37 = lVar20;
                  do {
                    lVar26 = CONCAT71(uVar38,(char)in_stack_00000281);
                    lVar20 = lVar37 + 1;
                    lVar35 = *(long *)(puVar21 + -8);
                    if (lVar35 == 0) {
                      uVar39 = (undefined1)lVar20;
                      uVar40 = (undefined7)((ulong)lVar20 >> 8);
                      lVar35 = 0;
                      goto LAB_101703f4c;
                    }
                    if ((lVar24 != lVar28) || (iVar17 = _memcmp(lVar19,lVar35,lVar24), iVar17 != 0))
                    {
                      lVar20 = lVar37 + 1;
                      uVar39 = (undefined1)lVar20;
                      uVar40 = (undefined7)((ulong)lVar20 >> 8);
                      uVar12 = *(ushort *)(lVar18 + 0x16a);
                      lVar37 = lVar35;
                      lVar14 = lVar35;
                      lVar35 = lVar19;
                      goto joined_r0x000101704198;
                    }
                    puVar21 = puVar21 + 0x20;
                    lVar19 = lVar35;
                    lVar37 = lVar20;
                  } while (lVar20 != 4);
                }
                lVar26 = CONCAT71(uVar38,(char)in_stack_00000281);
                uVar39 = 4;
                uVar40 = 0;
                goto LAB_101703ea8;
              }
              uVar12 = *(ushort *)(lVar18 + 0x16a);
              lVar35 = lVar19;
            }
            else {
              uVar12 = *(ushort *)(lVar18 + 0x16a);
              lVar35 = lVar19;
            }
          }
joined_r0x000101704198:
          lVar33 = lVar20;
          if (uVar12 < 0xb) goto LAB_101703e2c;
LAB_101703f84:
          uVar34 = 0;
          do {
            lVar18 = *(long *)(lVar18 + 0x160);
            if (lVar18 == 0) {
              lVar18 = _malloc(0x1d0);
              if (lVar18 == 0) {
                func_0x0001087c906c(8,0x1d0);
                goto LAB_1017049dc;
              }
              *(undefined8 *)(lVar18 + 0x160) = 0;
              *(undefined2 *)(lVar18 + 0x16a) = 0;
              *(long *)(lVar18 + 0x170) = lVar36;
              bVar16 = uVar29 == 0xffffffffffffffff;
              uVar29 = uVar29 + 1;
              if (bVar16) {
                func_0x000108a07a20(&UNK_10b2551b8);
                goto LAB_1017049dc;
              }
              *(long *)(lVar36 + 0x160) = lVar18;
              *(undefined2 *)(lVar36 + 0x168) = 0;
              lVar36 = lVar18;
              uVar34 = uVar29;
              break;
            }
            uVar34 = uVar34 + 1;
          } while (10 < *(ushort *)(lVar18 + 0x16a));
          lVar19 = _malloc(0x170);
          if (lVar19 == 0) break;
          *(undefined8 *)(lVar19 + 0x160) = 0;
          *(undefined2 *)(lVar19 + 0x16a) = 0;
          uVar27 = uVar34;
          while (uVar27 = uVar27 - 1, uVar27 != 0) {
            lVar20 = _malloc(0x1d0);
            if (lVar20 == 0) {
              func_0x0001087c906c(8,0x1d0);
              goto LAB_1017049dc;
            }
            *(undefined8 *)(lVar20 + 0x160) = 0;
            *(undefined2 *)(lVar20 + 0x16a) = 0;
            *(long *)(lVar20 + 0x170) = lVar19;
            *(long *)(lVar19 + 0x160) = lVar20;
            *(undefined2 *)(lVar19 + 0x168) = 0;
            lVar19 = lVar20;
          }
          uVar12 = *(ushort *)(lVar18 + 0x16a);
          if (10 < uVar12) goto LAB_101704678;
          *(ushort *)(lVar18 + 0x16a) = uVar12 + 1;
          plVar2 = (long *)(lVar18 + (ulong)uVar12 * 0x10);
          *plVar2 = lVar35;
          plVar2[1] = lVar24;
          plVar2[0x16] = lVar30;
          plVar2[0x17] = lVar26;
          lVar30 = (ulong)uVar12 + 1;
          *(long *)(lVar18 + lVar30 * 8 + 0x170) = lVar19;
          *(long *)(lVar19 + 0x160) = lVar18;
          *(short *)(lVar19 + 0x168) = (short)lVar30;
          for (; uVar34 != 0; uVar34 = uVar34 - 1) {
            lVar18 = *(long *)(lVar18 + (ulong)*(ushort *)(lVar18 + 0x16a) * 8 + 0x170);
          }
        }
        bVar16 = true;
        lVar32 = lVar32 + 1;
      } while( true );
    }
    func_0x0001087c906c(8,0x170);
    goto LAB_1017049dc;
  }
  *in_stack_00000048 = 0x8000000000000000;
  in_stack_00000048[1] = uVar23;
  _free();
  if (unaff_x23 != 0) {
    _free();
  }
  goto joined_r0x000101704634;
joined_r0x0001017041b4:
  if (uVar34 == 0) goto LAB_101704380;
  if (*(ushort *)(lVar37 + 0x16a) == 0) {
    puVar22 = &UNK_108cdf0cc;
    puVar25 = &UNK_10b255188;
    uVar23 = 0x19;
  }
  else {
    lVar28 = (ulong)*(ushort *)(lVar37 + 0x16a) - 1;
    lVar18 = lVar37 + lVar28 * 8;
    lVar31 = *(long *)(lVar18 + 0x178);
    uVar27 = (ulong)*(ushort *)(lVar31 + 0x16a);
    if (4 < *(ushort *)(lVar31 + 0x16a)) {
LAB_1017041cc:
      uVar34 = uVar34 - 1;
      lVar37 = lVar31;
      goto joined_r0x0001017041b4;
    }
    lVar18 = *(long *)(lVar18 + 0x170);
    uVar12 = *(ushort *)(lVar18 + 0x16a);
    lVar33 = -uVar27 + 5;
    if ((uint)lVar33 <= (uint)uVar12) {
      lVar35 = (ulong)uVar12 - lVar33;
      *(short *)(lVar18 + 0x16a) = (short)lVar35;
      *(undefined2 *)(lVar31 + 0x16a) = 5;
      _memmove(lVar31 + lVar33 * 0x10,lVar31);
      lVar19 = lVar31 + 0xb0;
      _memmove(lVar19 + lVar33 * 0x10,lVar19,uVar27 << 4);
      lVar30 = lVar35 + 1;
      lVar26 = (ulong)uVar12 - lVar30;
      if (lVar26 != -uVar27 + 4) {
        puVar22 = &UNK_108cdf105;
        uVar23 = 0x28;
        puVar25 = &UNK_10b2551d0;
        goto LAB_101704724;
      }
      lVar26 = lVar26 * 0x10;
      _memcpy(lVar31,lVar18 + lVar30 * 0x10,lVar26);
      _memcpy(lVar19,lVar18 + 0xb0 + lVar30 * 0x10,lVar26);
      puVar3 = (undefined8 *)(lVar18 + lVar35 * 0x10);
      uVar8 = puVar3[1];
      puVar4 = (undefined8 *)(lVar18 + 0xb0 + lVar35 * 0x10);
      uVar6 = *puVar4;
      uVar9 = puVar4[1];
      puVar4 = (undefined8 *)(lVar37 + lVar28 * 0x10);
      uVar7 = *puVar4;
      uVar10 = puVar4[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar8;
      uVar8 = puVar4[0x16];
      uVar11 = puVar4[0x17];
      puVar4[0x16] = uVar6;
      puVar4[0x17] = uVar9;
      *(undefined8 *)(lVar31 + lVar26) = uVar7;
      ((undefined8 *)(lVar31 + lVar26))[1] = uVar10;
      *(undefined8 *)(lVar19 + lVar26) = uVar8;
      ((undefined8 *)(lVar19 + lVar26))[1] = uVar11;
      if (uVar34 != 1) {
        lVar37 = lVar31 + 0x170;
        _memmove(lVar37 + lVar33 * 8,lVar37,uVar27 * 8 + 8);
        _memcpy(lVar37,lVar18 + lVar30 * 8 + 0x170,lVar33 * 8);
        lVar18 = *(long *)(lVar31 + 0x170);
        *(long *)(lVar18 + 0x160) = lVar31;
        *(undefined2 *)(lVar18 + 0x168) = 0;
        lVar18 = *(long *)(lVar31 + 0x178);
        *(long *)(lVar18 + 0x160) = lVar31;
        *(undefined2 *)(lVar18 + 0x168) = 1;
        lVar18 = *(long *)(lVar31 + 0x180);
        *(long *)(lVar18 + 0x160) = lVar31;
        *(undefined2 *)(lVar18 + 0x168) = 2;
        lVar18 = *(long *)(lVar31 + 0x188);
        *(long *)(lVar18 + 0x160) = lVar31;
        *(undefined2 *)(lVar18 + 0x168) = 3;
        lVar18 = *(long *)(lVar31 + 400);
        *(long *)(lVar18 + 0x160) = lVar31;
        *(undefined2 *)(lVar18 + 0x168) = 4;
        lVar18 = *(long *)(lVar31 + 0x198);
        *(long *)(lVar18 + 0x160) = lVar31;
        *(undefined2 *)(lVar18 + 0x168) = 5;
        goto LAB_1017041cc;
      }
      goto LAB_101704380;
    }
    puVar22 = &UNK_108cdf12d;
    uVar23 = 0x27;
    puVar25 = &UNK_10b2551e8;
  }
LAB_101704724:
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar22,uVar23,puVar25);
  goto LAB_1017049dc;
LAB_101704678:
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cdf0e5,0x20,&UNK_10b2551a0);
LAB_1017049dc:
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1017049e0);
  (*pcVar15)();
LAB_101704380:
  in_stack_00000180 = lVar36;
  in_stack_00000188 = uVar29;
  in_stack_00000190 = lVar32;
  puVar21 = (undefined1 *)_malloc(0x80);
  if (puVar21 == (undefined1 *)0x0) {
    func_0x0001087c9084(1,0x80);
    goto LAB_1017049dc;
  }
  *puVar21 = 0x7b;
  lVar18 = 1;
  if (lVar32 == 0) {
LAB_101704524:
    puVar21[lVar18] = 0x7d;
  }
  else {
    lVar37 = 0;
    bVar16 = true;
    do {
      if (lVar37 == 0) {
        for (; lVar37 = lVar36, uVar29 != 0; uVar29 = uVar29 - 1) {
          lVar36 = *(long *)(lVar37 + 0x170);
        }
        lVar36 = 0;
        uVar29 = 0;
        lVar28 = lVar37;
        if (*(short *)(lVar37 + 0x16a) == 0) goto LAB_101704408;
      }
      else {
        lVar28 = lVar37;
        if (*(ushort *)(lVar37 + 0x16a) <= uVar29) {
LAB_101704408:
          do {
            lVar37 = *(long *)(lVar28 + 0x160);
            if (lVar37 == 0) {
              func_0x000108a07a20(&UNK_10b255218);
              goto LAB_1017049dc;
            }
            lVar36 = lVar36 + 1;
            puVar1 = (ushort *)(lVar28 + 0x168);
            uVar29 = (ulong)*puVar1;
            lVar28 = lVar37;
          } while (*(ushort *)(lVar37 + 0x16a) <= *puVar1);
        }
      }
      if (lVar36 == 0) {
        puVar3 = (undefined8 *)(lVar37 + uVar29 * 0x10);
        uVar6 = *puVar3;
        uVar8 = puVar3[1];
        uVar7 = puVar3[0x16];
        uVar9 = puVar3[0x17];
        uVar29 = uVar29 + 1;
      }
      else {
        lVar28 = lVar37 + (uVar29 + 1) * 8;
        do {
          lVar28 = *(long *)(lVar28 + 0x170);
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        puVar3 = (undefined8 *)(lVar37 + uVar29 * 0x10);
        uVar6 = *puVar3;
        uVar8 = puVar3[1];
        uVar7 = puVar3[0x16];
        uVar9 = puVar3[0x17];
        uVar29 = 0;
        lVar37 = lVar28;
      }
      if (!bVar16) {
        if (lVar18 == 0x80) {
          FUN_108874674(&stack0x00000260,0x80,1);
        }
        puVar21[lVar18] = 0x2c;
        lVar18 = lVar18 + 1;
      }
      FUN_1016fa898(&stack0x00000260,uVar6,uVar8);
      if (lVar18 == 0x80) {
        FUN_108874674(&stack0x00000260,0x80,1);
      }
      puVar21[lVar18] = 0x3a;
      lVar18 = lVar18 + 1;
      FUN_1016fa898(&stack0x00000260,uVar7,uVar9);
      lVar36 = 0;
      bVar16 = false;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    if (lVar18 != 0x80) goto LAB_101704524;
    FUN_108874674(&stack0x00000260,0x80,1);
    puVar21[0x80] = 0x7d;
  }
  FUN_101707e2c(&stack0x00000180);
  func_0x00010170b5f8(&stack0x00000260,&UNK_108cde8a6,puVar21,lVar18 + 1);
  _free(puVar21);
  *(undefined8 *)(unaff_x29 + -0xe0) = 0x80;
  *(undefined1 **)(unaff_x29 + -0xd8) = puVar21;
  *(long *)(unaff_x29 + -0xd0) = lVar18;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000128,s_AgentAssertion_108adc5dd,&stack0x00000260);
  in_stack_00000048[1] = in_stack_00000130;
  *in_stack_00000048 = in_stack_00000128;
  in_stack_00000048[2] = in_stack_00000138;
  if (*(long *)(unaff_x29 + -0xe0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xd8));
  }
  if (in_stack_00000068 != 0) {
    _free(unaff_x25);
  }
  if (unaff_x23 != 0) {
    _free(unaff_x24);
  }
  _free(unaff_x27);
  unaff_x25 = uVar23;
  in_stack_00000068 = lVar5;
joined_r0x000101704634:
  if (in_stack_00000068 != 0) {
    _free(unaff_x25);
  }
  if (in_stack_00000050 != 0) {
    _free(in_stack_00000058);
  }
  return;
}

