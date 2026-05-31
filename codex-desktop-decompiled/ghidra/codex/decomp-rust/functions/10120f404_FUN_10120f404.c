
/* WARNING: Removing unreachable block (ram,0x000101210368) */
/* WARNING: Removing unreachable block (ram,0x0001012103a0) */
/* WARNING: Removing unreachable block (ram,0x0001012103c8) */
/* WARNING: Removing unreachable block (ram,0x0001012103cc) */
/* WARNING: Removing unreachable block (ram,0x000101210484) */
/* WARNING: Removing unreachable block (ram,0x0001012104bc) */
/* WARNING: Removing unreachable block (ram,0x0001012104e4) */
/* WARNING: Removing unreachable block (ram,0x0001012104e8) */
/* WARNING: Removing unreachable block (ram,0x0001012104f8) */
/* WARNING: Removing unreachable block (ram,0x000101210510) */
/* WARNING: Removing unreachable block (ram,0x00010121051c) */
/* WARNING: Removing unreachable block (ram,0x00010121052c) */
/* WARNING: Removing unreachable block (ram,0x00010121057c) */
/* WARNING: Removing unreachable block (ram,0x000101210a4c) */
/* WARNING: Removing unreachable block (ram,0x0001012106a8) */
/* WARNING: Removing unreachable block (ram,0x000101210538) */
/* WARNING: Removing unreachable block (ram,0x0001012106f0) */
/* WARNING: Removing unreachable block (ram,0x000101210714) */
/* WARNING: Removing unreachable block (ram,0x0001012108c8) */
/* WARNING: Removing unreachable block (ram,0x000101210770) */
/* WARNING: Removing unreachable block (ram,0x000101210790) */
/* WARNING: Removing unreachable block (ram,0x0001012107ac) */
/* WARNING: Removing unreachable block (ram,0x0001012107b4) */
/* WARNING: Removing unreachable block (ram,0x0001012107e0) */
/* WARNING: Removing unreachable block (ram,0x0001012107fc) */
/* WARNING: Removing unreachable block (ram,0x000101210808) */
/* WARNING: Removing unreachable block (ram,0x000101210824) */
/* WARNING: Removing unreachable block (ram,0x00010121086c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10120f404(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  long *plVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  short *psVar17;
  undefined1 *unaff_x23;
  short sVar18;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  byte bVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined6 uVar54;
  long in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined8 in_stack_00000638;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  long in_stack_00000770;
  short *in_stack_00001700;
  long in_stack_00001708;
  long in_stack_00001710;
  undefined2 in_stack_00001758;
  undefined6 in_stack_0000175a;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001700,s_Extension_of_type___E__was_not_f_108abf039,&stack0x000011d0);
  plVar7 = (long *)_malloc(0x18);
  if (plVar7 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    goto LAB_101210b34;
  }
  *plVar7 = (long)in_stack_00001700;
  plVar7[1] = in_stack_00001708;
  plVar7[2] = in_stack_00001710;
  *(undefined1 *)(unaff_x19 + 0x43) = 1;
  plVar12 = *(long **)(unaff_x19[0x40] + 0xd0);
  psVar17 = in_stack_00001700;
  if ((plVar12 != (long *)0x0) && (plVar12[3] != 0)) {
    lVar14 = 0;
    lVar22 = *plVar12;
    uVar4 = plVar12[1];
    uVar15 = uVar4 & 0x6d70efe1558ed0df;
    uVar26 = *(undefined8 *)(lVar22 + uVar15);
    uVar8 = CONCAT17(-((char)((ulong)uVar26 >> 0x38) == '6'),
                     CONCAT16(-((char)((ulong)uVar26 >> 0x30) == '6'),
                              CONCAT15(-((char)((ulong)uVar26 >> 0x28) == '6'),
                                       CONCAT14(-((char)((ulong)uVar26 >> 0x20) == '6'),
                                                CONCAT13(-((char)((ulong)uVar26 >> 0x18) == '6'),
                                                         CONCAT12(-((char)((ulong)uVar26 >> 0x10) ==
                                                                   '6'),CONCAT11(-((char)((ulong)
                                                  uVar26 >> 8) == '6'),-((char)uVar26 == '6'))))))))
            & 0x8080808080808080;
    while( true ) {
      while (uVar8 == 0) {
        bVar25 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar26 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar26 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar26 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar26 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar26
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar26 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar26 >> 8) == -1),
                                                           -((char)uVar26 == -1)))))))),1);
        if ((bVar25 & 1) != 0) goto LAB_10120f630;
        lVar14 = lVar14 + 8;
        uVar15 = uVar15 + lVar14 & uVar4;
        uVar26 = *(undefined8 *)(lVar22 + uVar15);
        uVar8 = CONCAT17(-((char)((ulong)uVar26 >> 0x38) == '6'),
                         CONCAT16(-((char)((ulong)uVar26 >> 0x30) == '6'),
                                  CONCAT15(-((char)((ulong)uVar26 >> 0x28) == '6'),
                                           CONCAT14(-((char)((ulong)uVar26 >> 0x20) == '6'),
                                                    CONCAT13(-((char)((ulong)uVar26 >> 0x18) == '6')
                                                             ,CONCAT12(-((char)((ulong)uVar26 >>
                                                                               0x10) == '6'),
                                                                       CONCAT11(-((char)((ulong)
                                                  uVar26 >> 8) == '6'),-((char)uVar26 == '6'))))))))
                & 0x8080808080808080;
      }
      uVar16 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar15 + ((ulong)LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) >> 3) & uVar4;
      plVar12 = (long *)(lVar22 + -0x20 + uVar16 * -0x20);
      if (plVar12[1] == 0x6d70efe1558ed0df && *plVar12 == 0x4820f9159dfcfecb) break;
      uVar8 = uVar8 - 1 & uVar8;
    }
    lVar22 = lVar22 + uVar16 * -0x20;
    auVar53 = (**(code **)(*(long *)(lVar22 + -8) + 0x28))(*(undefined8 *)(lVar22 + -0x10));
    psVar17 = auVar53._0_8_;
    (**(code **)(auVar53._8_8_ + 0x18))(&stack0x00001700);
    if ((psVar17 != (short *)0x0) &&
       (in_stack_00001708 == 0x6d70efe1558ed0df && in_stack_00001700 == (short *)0x4820f9159dfcfecb)
       ) {
      sVar18 = *psVar17;
      uVar54 = *(undefined6 *)(psVar17 + 1);
      in_stack_00000770 = CONCAT26((short)((ulong)in_stack_00000770 >> 0x30),uVar54);
      plVar12 = *(long **)(psVar17 + 4);
      puVar10 = *(undefined **)(psVar17 + 8);
      psVar17 = *(short **)(psVar17 + 0xc);
      if (*plVar7 != 0) {
        _free(plVar7[1]);
      }
      _free(plVar7);
      *unaff_x23 = 1;
      if (sVar18 != 3) {
        unaff_x26 = (undefined8 *)&stack0x000011d0;
        goto LAB_10120f650;
      }
      *unaff_x20 = 3;
      uVar11 = 4;
      goto LAB_10120febc;
    }
LAB_10120f630:
    unaff_x26 = (undefined8 *)&stack0x000011d0;
  }
  puVar10 = &UNK_10b209118;
  sVar18 = 2;
  uVar54 = (undefined6)in_stack_00000770;
  *unaff_x23 = 1;
  plVar12 = plVar7;
LAB_10120f650:
  if (sVar18 == 2) {
    __ZN111__LT_axum__extract__rejection__MissingExtension_u20_as_u20_axum_core__response__into_response__IntoResponse_GT_13into_response17haa680ba506d67dd8E
              (&stack0x000002b0);
    FUN_100dfedc4(unaff_x19 + 0x20);
    if ((*(byte *)((long)unaff_x19 + 0x1ea) & 1) != 0) {
      FUN_100de01d8();
    }
    FUN_100e74090(unaff_x19 + 0x1c);
    if (*(char *)((long)unaff_x19 + 0x1e9) == '\x01') {
      uVar26 = unaff_x19[0x1e];
      puVar24 = (undefined8 *)unaff_x19[0x1f];
      pcVar13 = (code *)*puVar24;
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(uVar26);
      }
      if (puVar24[1] != 0) {
        _free(uVar26);
      }
    }
LAB_10120fe98:
    uVar26 = *(undefined8 *)(unaff_x25 + 0x210);
    uVar20 = *(undefined8 *)(unaff_x25 + 0x228);
    uVar19 = *(undefined8 *)(unaff_x25 + 0x220);
    unaff_x20[9] = *(undefined8 *)(unaff_x25 + 0x218);
    unaff_x20[8] = uVar26;
    unaff_x20[0xb] = uVar20;
    unaff_x20[10] = uVar19;
    uVar26 = *(undefined8 *)(unaff_x25 + 0x230);
    uVar20 = *(undefined8 *)(unaff_x25 + 0x248);
    uVar19 = *(undefined8 *)(unaff_x25 + 0x240);
    unaff_x20[0xd] = *(undefined8 *)(unaff_x25 + 0x238);
    unaff_x20[0xc] = uVar26;
    unaff_x20[0xf] = uVar20;
    unaff_x20[0xe] = uVar19;
    uVar26 = *(undefined8 *)(unaff_x25 + 0x1d0);
    uVar20 = *(undefined8 *)(unaff_x25 + 0x1e8);
    uVar19 = *(undefined8 *)(unaff_x25 + 0x1e0);
    unaff_x20[1] = *(undefined8 *)(unaff_x25 + 0x1d8);
    *unaff_x20 = uVar26;
    unaff_x20[3] = uVar20;
    unaff_x20[2] = uVar19;
    uVar26 = *(undefined8 *)(unaff_x25 + 0x1f0);
    uVar20 = *(undefined8 *)(unaff_x25 + 0x208);
    uVar19 = *(undefined8 *)(unaff_x25 + 0x200);
    uVar11 = 1;
    unaff_x20[5] = *(undefined8 *)(unaff_x25 + 0x1f8);
    unaff_x20[4] = uVar26;
    unaff_x20[7] = uVar20;
    unaff_x20[6] = uVar19;
LAB_10120febc:
    *(undefined1 *)(unaff_x19 + 0x3d) = uVar11;
    return;
  }
  *(short *)(unaff_x19 + 0x39) = sVar18;
  *(short *)((long)unaff_x19 + 0x1ce) = (short)((uint6)uVar54 >> 0x20);
  *(int *)((long)unaff_x19 + 0x1ca) = (int)uVar54;
  unaff_x19[0x3a] = plVar12;
  unaff_x19[0x3b] = puVar10;
  unaff_x19[0x3c] = psVar17;
  unaff_x19[0x3e] = unaff_x19;
  unaff_x19[0x3f] = unaff_x19 + 0x1c;
  *(undefined1 *)(unaff_x19 + 0x40) = 0;
  plVar7 = (long *)unaff_x19[0x1c];
  plVar12 = (long *)unaff_x19[0x1d];
  plVar7[0x3e] = plVar7[0x3e] + 1;
  lVar14 = *plVar7;
  *plVar7 = lVar14 + 1;
  if ((lVar14 < 0) || (lVar14 = *plVar12, *plVar12 = lVar14 + 1, lVar14 < 0)) goto LAB_101210b34;
  uVar23 = unaff_x19[0x15];
  uVar21 = unaff_x19[0x14];
  uVar19 = unaff_x19[0x17];
  uVar26 = unaff_x19[0x16];
  uVar30 = unaff_x19[0x13];
  uVar29 = unaff_x19[0x12];
  uVar20 = unaff_x19[0x14];
  *(undefined8 *)(unaff_x25 + 0xa8) = unaff_x19[0x15];
  *(undefined8 *)(unaff_x25 + 0xa0) = uVar20;
  *(undefined8 *)(unaff_x25 + 0xb8) = uVar19;
  *(undefined8 *)(unaff_x25 + 0xb0) = uVar26;
  uVar28 = unaff_x19[0x17];
  uVar27 = unaff_x19[0x16];
  uVar26 = unaff_x19[0x18];
  uVar34 = unaff_x19[0x19];
  uVar33 = unaff_x19[0x18];
  uVar20 = unaff_x19[0x1b];
  uVar19 = unaff_x19[0x1a];
  *(undefined8 *)(unaff_x25 + 200) = unaff_x19[0x19];
  *(undefined8 *)(unaff_x25 + 0xc0) = uVar26;
  *(undefined8 *)(unaff_x25 + 0xd8) = uVar20;
  *(undefined8 *)(unaff_x25 + 0xd0) = uVar19;
  uVar32 = unaff_x19[0xd];
  uVar31 = unaff_x19[0xc];
  uVar19 = unaff_x19[0xf];
  uVar26 = unaff_x19[0xe];
  uVar38 = unaff_x19[0xb];
  uVar37 = unaff_x19[10];
  uVar20 = unaff_x19[0xc];
  *(undefined8 *)(unaff_x25 + 0x68) = unaff_x19[0xd];
  *(undefined8 *)(unaff_x25 + 0x60) = uVar20;
  *(undefined8 *)(unaff_x25 + 0x78) = uVar19;
  *(undefined8 *)(unaff_x25 + 0x70) = uVar26;
  uVar36 = unaff_x19[0xf];
  uVar35 = unaff_x19[0xe];
  uVar26 = unaff_x19[0x10];
  uVar42 = unaff_x19[0x11];
  uVar41 = unaff_x19[0x10];
  uVar20 = unaff_x19[0x13];
  uVar19 = unaff_x19[0x12];
  *(undefined8 *)(unaff_x25 + 0x88) = unaff_x19[0x11];
  *(undefined8 *)(unaff_x25 + 0x80) = uVar26;
  *(undefined8 *)(unaff_x25 + 0x98) = uVar20;
  *(undefined8 *)(unaff_x25 + 0x90) = uVar19;
  uVar40 = unaff_x19[5];
  uVar39 = unaff_x19[4];
  uVar19 = unaff_x19[7];
  uVar26 = unaff_x19[6];
  uVar46 = unaff_x19[3];
  uVar45 = unaff_x19[2];
  uVar20 = unaff_x19[4];
  *(undefined8 *)(unaff_x25 + 0x28) = unaff_x19[5];
  *(undefined8 *)(unaff_x25 + 0x20) = uVar20;
  *(undefined8 *)(unaff_x25 + 0x38) = uVar19;
  *(undefined8 *)(unaff_x25 + 0x30) = uVar26;
  uVar44 = unaff_x19[7];
  uVar43 = unaff_x19[6];
  uVar26 = unaff_x19[8];
  uVar50 = unaff_x19[9];
  uVar49 = unaff_x19[8];
  uVar20 = unaff_x19[0xb];
  uVar19 = unaff_x19[10];
  *(undefined8 *)(unaff_x25 + 0x48) = unaff_x19[9];
  *(undefined8 *)(unaff_x25 + 0x40) = uVar26;
  *(undefined8 *)(unaff_x25 + 0x58) = uVar20;
  *(undefined8 *)(unaff_x25 + 0x50) = uVar19;
  uVar20 = unaff_x19[1];
  uVar19 = *unaff_x19;
  uVar48 = unaff_x19[3];
  uVar47 = unaff_x19[2];
  uVar52 = unaff_x19[1];
  uVar51 = *unaff_x19;
  unaff_x27[0x15] = uVar23;
  unaff_x27[0x14] = uVar21;
  unaff_x27[0x17] = uVar28;
  unaff_x27[0x16] = uVar27;
  uVar21 = unaff_x19[0x1b];
  uVar26 = unaff_x19[0x1a];
  unaff_x27[0x19] = uVar34;
  unaff_x27[0x18] = uVar33;
  unaff_x27[0x1b] = uVar21;
  unaff_x27[0x1a] = uVar26;
  unaff_x27[0xd] = uVar32;
  unaff_x27[0xc] = uVar31;
  unaff_x27[0xf] = uVar36;
  unaff_x27[0xe] = uVar35;
  unaff_x27[0x11] = uVar42;
  unaff_x27[0x10] = uVar41;
  unaff_x27[0x13] = uVar30;
  unaff_x27[0x12] = uVar29;
  unaff_x27[5] = uVar40;
  unaff_x27[4] = uVar39;
  unaff_x27[7] = uVar44;
  unaff_x27[6] = uVar43;
  unaff_x27[9] = uVar50;
  unaff_x27[8] = uVar49;
  unaff_x27[0xb] = uVar38;
  unaff_x27[10] = uVar37;
  *(undefined1 *)(unaff_x19 + 0x40) = 1;
  unaff_x19[0x5f] = plVar7;
  unaff_x19[0x60] = plVar12;
  *(undefined1 *)((long)unaff_x19 + 0x1ea) = 0;
  *(undefined1 *)((long)unaff_x19 + 0x1e9) = 0;
  uVar26 = unaff_x19[0x1e];
  puVar24 = (undefined8 *)unaff_x19[0x1f];
  unaff_x27[1] = uVar52;
  *unaff_x27 = uVar51;
  unaff_x27[3] = uVar46;
  unaff_x27[2] = uVar45;
  pcVar13 = (code *)*puVar24;
  if (pcVar13 != (code *)0x0) {
    (*pcVar13)(uVar26);
  }
  puVar1 = unaff_x19 + 0x3e;
  if (puVar24[1] != 0) {
    _free(uVar26);
  }
  uVar26 = *(undefined8 *)(unaff_x25 + 0xa0);
  uVar23 = *(undefined8 *)(unaff_x25 + 0xb8);
  uVar21 = *(undefined8 *)(unaff_x25 + 0xb0);
  unaff_x19[0x53] = *(undefined8 *)(unaff_x25 + 0xa8);
  unaff_x19[0x52] = uVar26;
  unaff_x19[0x55] = uVar23;
  unaff_x19[0x54] = uVar21;
  uVar26 = *(undefined8 *)(unaff_x25 + 0xc0);
  uVar23 = *(undefined8 *)(unaff_x25 + 0xd8);
  uVar21 = *(undefined8 *)(unaff_x25 + 0xd0);
  unaff_x19[0x57] = *(undefined8 *)(unaff_x25 + 200);
  unaff_x19[0x56] = uVar26;
  unaff_x19[0x59] = uVar23;
  unaff_x19[0x58] = uVar21;
  uVar26 = *(undefined8 *)(unaff_x25 + 0x60);
  uVar23 = *(undefined8 *)(unaff_x25 + 0x78);
  uVar21 = *(undefined8 *)(unaff_x25 + 0x70);
  unaff_x19[0x4b] = *(undefined8 *)(unaff_x25 + 0x68);
  unaff_x19[0x4a] = uVar26;
  unaff_x19[0x4d] = uVar23;
  unaff_x19[0x4c] = uVar21;
  uVar26 = *(undefined8 *)(unaff_x25 + 0x80);
  uVar23 = *(undefined8 *)(unaff_x25 + 0x98);
  uVar21 = *(undefined8 *)(unaff_x25 + 0x90);
  unaff_x19[0x4f] = *(undefined8 *)(unaff_x25 + 0x88);
  unaff_x19[0x4e] = uVar26;
  unaff_x19[0x51] = uVar23;
  unaff_x19[0x50] = uVar21;
  uVar26 = *(undefined8 *)(unaff_x25 + 0x20);
  uVar23 = *(undefined8 *)(unaff_x25 + 0x38);
  uVar21 = *(undefined8 *)(unaff_x25 + 0x30);
  unaff_x19[0x43] = *(undefined8 *)(unaff_x25 + 0x28);
  unaff_x19[0x42] = uVar26;
  unaff_x19[0x45] = uVar23;
  unaff_x19[0x44] = uVar21;
  uVar26 = *(undefined8 *)(unaff_x25 + 0x40);
  uVar23 = *(undefined8 *)(unaff_x25 + 0x58);
  uVar21 = *(undefined8 *)(unaff_x25 + 0x50);
  unaff_x19[0x47] = *(undefined8 *)(unaff_x25 + 0x48);
  unaff_x19[0x46] = uVar26;
  unaff_x19[0x49] = uVar23;
  unaff_x19[0x48] = uVar21;
  unaff_x19[0x3f] = uVar20;
  *puVar1 = uVar19;
  unaff_x19[0x41] = uVar48;
  unaff_x19[0x40] = uVar47;
  unaff_x19[0x5a] = unaff_x19 + 0x1c;
  *(undefined1 *)(unaff_x19 + 0x5e) = 0;
  unaff_x19[0x5b] = puVar1;
  unaff_x19[0x5c] = unaff_x19 + 0x1c;
  *(undefined1 *)(unaff_x19 + 0x5d) = 0;
  func_0x0001011c2214(&stack0x00001700,puVar1);
  uVar26 = unaff_x27[5];
  uVar20 = unaff_x27[8];
  uVar19 = unaff_x27[7];
  unaff_x26[5] = unaff_x27[6];
  unaff_x26[4] = uVar26;
  unaff_x26[7] = uVar20;
  unaff_x26[6] = uVar19;
  uVar26 = unaff_x27[9];
  unaff_x26[9] = unaff_x27[10];
  unaff_x26[8] = uVar26;
  uVar26 = unaff_x27[1];
  uVar20 = unaff_x27[4];
  uVar19 = unaff_x27[3];
  unaff_x26[1] = unaff_x27[2];
  *unaff_x26 = uVar26;
  unaff_x26[3] = uVar20;
  unaff_x26[2] = uVar19;
  *(undefined1 *)(unaff_x19 + 0x5d) = 1;
  if (in_stack_00001700 == (short *)0x3) {
    *(undefined1 *)(unaff_x19 + 0x5e) = 3;
    *unaff_x20 = 3;
    uVar11 = 6;
    goto LAB_10120febc;
  }
  FUN_100de01d8(puVar1);
  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
  uVar26 = unaff_x26[4];
  uVar20 = unaff_x26[7];
  uVar19 = unaff_x26[6];
  *(undefined8 *)(unaff_x25 + 0x128) = unaff_x26[5];
  *(undefined8 *)(unaff_x25 + 0x120) = uVar26;
  *(undefined8 *)(unaff_x25 + 0x138) = uVar20;
  *(undefined8 *)(unaff_x25 + 0x130) = uVar19;
  uVar26 = unaff_x26[8];
  *(undefined8 *)(unaff_x25 + 0x148) = unaff_x26[9];
  *(undefined8 *)(unaff_x25 + 0x140) = uVar26;
  uVar26 = *unaff_x26;
  uVar20 = unaff_x26[3];
  uVar19 = unaff_x26[2];
  *(undefined8 *)(unaff_x25 + 0x108) = unaff_x26[1];
  *(undefined8 *)(unaff_x25 + 0x100) = uVar26;
  *(undefined8 *)(unaff_x25 + 0x118) = uVar20;
  *(undefined8 *)(unaff_x25 + 0x110) = uVar19;
  *(undefined1 *)((long)unaff_x19 + 0x1eb) = 0;
  uVar26 = unaff_x19[0x5f];
  lVar14 = unaff_x19[0x60];
  uVar21 = unaff_x19[0x39];
  uVar20 = unaff_x19[0x3c];
  uVar19 = unaff_x19[0x3b];
  *(undefined8 *)(unaff_x25 + 0xe8) = unaff_x19[0x3a];
  *(undefined8 *)(unaff_x25 + 0xe0) = uVar21;
  *(undefined8 *)(unaff_x25 + 0xf8) = uVar20;
  *(undefined8 *)(unaff_x25 + 0xf0) = uVar19;
  unaff_x19[0x56] = unaff_x19[0x38];
  unaff_x19[0x53] = unaff_x19[0x35];
  unaff_x19[0x52] = unaff_x19[0x34];
  unaff_x19[0x55] = unaff_x19[0x37];
  unaff_x19[0x54] = unaff_x19[0x36];
  unaff_x19[0x4f] = unaff_x19[0x31];
  unaff_x19[0x4e] = unaff_x19[0x30];
  unaff_x19[0x51] = unaff_x19[0x33];
  unaff_x19[0x50] = unaff_x19[0x32];
  unaff_x19[0x4b] = unaff_x19[0x2d];
  unaff_x19[0x4a] = unaff_x19[0x2c];
  unaff_x19[0x4d] = unaff_x19[0x2f];
  unaff_x19[0x4c] = unaff_x19[0x2e];
  unaff_x19[0x47] = unaff_x19[0x29];
  unaff_x19[0x46] = unaff_x19[0x28];
  unaff_x19[0x49] = unaff_x19[0x2b];
  unaff_x19[0x48] = unaff_x19[0x2a];
  unaff_x19[0x43] = unaff_x19[0x25];
  unaff_x19[0x42] = unaff_x19[0x24];
  unaff_x19[0x45] = unaff_x19[0x27];
  unaff_x19[0x44] = unaff_x19[0x26];
  unaff_x19[0x3f] = unaff_x19[0x21];
  *puVar1 = unaff_x19[0x20];
  unaff_x19[0x41] = unaff_x19[0x23];
  unaff_x19[0x40] = unaff_x19[0x22];
  unaff_x19[0x57] = in_stack_00001700;
  uVar19 = *(undefined8 *)(unaff_x25 + 0x120);
  uVar21 = *(undefined8 *)(unaff_x25 + 0x138);
  uVar20 = *(undefined8 *)(unaff_x25 + 0x130);
  unaff_x19[0x5d] = *(undefined8 *)(unaff_x25 + 0x128);
  unaff_x19[0x5c] = uVar19;
  unaff_x19[0x5f] = uVar21;
  unaff_x19[0x5e] = uVar20;
  uVar19 = *(undefined8 *)(unaff_x25 + 0x140);
  unaff_x19[0x61] = *(undefined8 *)(unaff_x25 + 0x148);
  unaff_x19[0x60] = uVar19;
  unaff_x19[0x62] = CONCAT62(in_stack_0000175a,in_stack_00001758);
  uVar19 = *(undefined8 *)(unaff_x25 + 0x100);
  uVar21 = *(undefined8 *)(unaff_x25 + 0x118);
  uVar20 = *(undefined8 *)(unaff_x25 + 0x110);
  unaff_x19[0x59] = *(undefined8 *)(unaff_x25 + 0x108);
  unaff_x19[0x58] = uVar19;
  unaff_x19[0x5b] = uVar21;
  unaff_x19[0x5a] = uVar20;
  uVar19 = *(undefined8 *)(unaff_x25 + 0xe0);
  uVar21 = *(undefined8 *)(unaff_x25 + 0xf8);
  uVar20 = *(undefined8 *)(unaff_x25 + 0xf0);
  unaff_x19[100] = *(undefined8 *)(unaff_x25 + 0xe8);
  unaff_x19[99] = uVar19;
  unaff_x19[0x66] = uVar21;
  unaff_x19[0x65] = uVar20;
  unaff_x19[0x67] = uVar26;
  unaff_x19[0x68] = lVar14;
  *(undefined1 *)(unaff_x19 + 0x69) = 0;
  uVar19 = unaff_x19[0x4b];
  puVar24 = (undefined8 *)unaff_x19[0x47];
  uVar20 = unaff_x19[0x49];
  uVar26 = unaff_x19[0x48];
  __ZN26codex_app_server_transport9transport4auth17authorize_upgrade17hbdefabdb5eae319fE
            (&stack0x00000770,&stack0x00000430,lVar14 + 0x10);
  if (in_stack_00000770 != 0) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b628d40 - 1 < 2 ||
         ((bRam000000010b628d40 != 0 &&
          (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56d39ce243760f72E
                             ), cVar5 != '\0')))) &&
        (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56d39ce243760f72E
                           ), (uVar8 & 1) != 0)))) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56d39ce243760f72E
                 ,&stack0x000011d0);
      uVar26 = 
      ___ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56d39ce243760f72E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar10 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar10 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar10 + 0x18))(puVar3,&stack0x00000ca0);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar26,puVar3,puVar10,&stack0x00000ca0,&stack0x000011d0);
        }
      }
    }
    else {
      uVar26 = 
      ___ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h56d39ce243760f72E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar10 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar10 = &UNK_10b3c24c8;
        }
        puVar3 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar3 = &UNK_109adfc03;
        }
        iVar6 = (**(code **)(puVar10 + 0x18))(puVar3,&stack0x00000490);
        if (iVar6 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar26,puVar3,puVar10,&stack0x00000490,&stack0x000011d0);
        }
      }
    }
    __ZN98__LT_alloc__borrow__Cow_LT_str_GT__u20_as_u20_axum_core__response__into_response__IntoResponse_GT_13into_response17heda24bcc7d49823eE
              (&stack0x00000600,&stack0x00001700);
    FUN_100def764(&stack0x00000430);
    FUN_100e74090(&stack0x00000420);
    FUN_100dfedc4(&stack0x00000330);
    *(undefined8 *)(unaff_x25 + 0x1a8) = in_stack_00000650;
    *(undefined8 *)(unaff_x25 + 0x1a0) = in_stack_00000648;
    *(undefined8 *)(unaff_x25 + 0x1b8) = in_stack_00000660;
    *(undefined8 *)(unaff_x25 + 0x1b0) = in_stack_00000658;
    *(undefined8 *)(unaff_x25 + 0x168) = in_stack_00000610;
    *(undefined8 *)(unaff_x25 + 0x160) = in_stack_00000608;
    *(undefined8 *)(unaff_x25 + 0x178) = in_stack_00000620;
    *(undefined8 *)(unaff_x25 + 0x170) = in_stack_00000618;
    *(undefined8 *)(unaff_x25 + 0x188) = in_stack_00000630;
    *(undefined8 *)(unaff_x25 + 0x180) = in_stack_00000628;
    *(undefined8 *)(unaff_x25 + 0x198) = in_stack_00000640;
    *(undefined8 *)(unaff_x25 + 400) = in_stack_00000638;
    *(undefined1 *)(unaff_x19 + 0x69) = 1;
    if (in_stack_00000600 == 3) {
      *unaff_x20 = 3;
      uVar11 = 7;
      goto LAB_10120febc;
    }
    FUN_100e74090(unaff_x19 + 0x1c);
    goto LAB_10120fe98;
  }
  if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
      ((bRam000000010b628d58 - 1 < 2 ||
       ((bRam000000010b628d58 != 0 &&
        (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                           (&
                            __ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6702a3bc1a52eb57E
                           ), cVar5 != '\0')))))) &&
     (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                        (
                        ___ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6702a3bc1a52eb57E
                        ), (uVar8 & 1) != 0)) {
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
              (___ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6702a3bc1a52eb57E
               ,&stack0x000011d0);
    uVar21 = 
    ___ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6702a3bc1a52eb57E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar10 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar10 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar10 + 0x18))(puVar3,&stack0x00000ca0);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar21,puVar3,puVar10,&stack0x00000ca0,&stack0x000011d0);
      }
    }
  }
  else {
    uVar21 = 
    ___ZN26codex_app_server_transport9transport9websocket25websocket_upgrade_handler28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h6702a3bc1a52eb57E
    ;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar10 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar10 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar6 = (**(code **)(puVar10 + 0x18))(puVar3,&stack0x000004a8);
      if (iVar6 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (uVar21,puVar3,puVar10,&stack0x00000ca0,&stack0x000011d0);
      }
    }
  }
  if ((char)uVar19 != '\x02') {
    (*(code *)*puVar24)(&stack0x00001700,&stack0x00000590,uVar26,uVar20);
  }
  do {
    lVar14 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar2 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar14;
  } while (bVar2);
  puVar9 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar9[9] == '\x01') {
LAB_101210200:
    _memcpy(&stack0x00000ca0,&stack0x00000770,0x528);
    if (0x7ffffffffffffffe < *puVar9) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_101210b34;
    }
    *puVar9 = *puVar9 + 1;
    uVar8 = puVar9[1];
    _memcpy(&stack0x000011d0,&stack0x00000770,0x528);
    if (uVar8 != 2) {
      if ((uVar8 & 1) == 0) {
        plVar7 = (long *)puVar9[2];
        lVar14 = *plVar7;
        *plVar7 = lVar14 + 1;
        if (-1 < lVar14) {
          plVar12 = (long *)plVar7[0x5e];
          if (plVar12 == (long *)0x0) {
            lVar14 = 0;
            lVar22 = 0;
          }
          else {
            lVar14 = *plVar12;
            *plVar12 = lVar14 + 1;
            if (lVar14 < 0) goto LAB_101210b34;
            lVar22 = plVar7[0x5f];
            lVar14 = plVar7[0x5e];
          }
          _memcpy(&stack0x00001cd4,&stack0x00000cb0,0x518);
          _memcpy((ulong)&stack0x00001700 | 0x34,&stack0x00001cd0,0x51c);
          unaff_x27[0xaf] = lVar22;
          unaff_x27[0xae] = lVar14;
          _posix_memalign(&stack0x000021f0,0x80,0x580);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x580);
        }
      }
      else {
        plVar7 = (long *)puVar9[2];
        lVar14 = *plVar7;
        *plVar7 = lVar14 + 1;
        if (-1 < lVar14) {
          plVar12 = (long *)plVar7[0x4a];
          if (plVar12 == (long *)0x0) {
            lVar14 = 0;
            lVar22 = 0;
          }
          else {
            lVar14 = *plVar12;
            *plVar12 = lVar14 + 1;
            if (lVar14 < 0) goto LAB_101210b34;
            lVar22 = plVar7[0x4b];
            lVar14 = plVar7[0x4a];
          }
          _memcpy(&stack0x00001cd4,&stack0x00000cb0,0x518);
          _memcpy((ulong)&stack0x00001700 | 0x34,&stack0x00001cd0,0x51c);
          unaff_x27[0xaf] = lVar22;
          unaff_x27[0xae] = lVar14;
          _posix_memalign(&stack0x000021f0,0x80,0x580);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x580);
        }
      }
      goto LAB_101210b34;
    }
    FUN_100ddbca4(&stack0x000011e0);
    *puVar9 = *puVar9 - 1;
  }
  else {
    if ((char)puVar9[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar9,&DAT_100c35d48);
      *(undefined1 *)(puVar9 + 9) = 1;
      goto LAB_101210200;
    }
    FUN_100ddbca4(&stack0x00000780);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00001700,&UNK_10b234968);
LAB_101210b34:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x101210b38);
  (*pcVar13)();
}

