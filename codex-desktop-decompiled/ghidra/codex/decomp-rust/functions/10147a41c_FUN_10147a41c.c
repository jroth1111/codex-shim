
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ** FUN_10147a41c(undefined1 param_1 [16],undefined1 param_2 [16],ulong **param_3,
                      ulong **param_4,ulong **param_5,ulong **param_6,ulong **param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong **ppuVar9;
  ulong **ppuVar10;
  ulong **ppuVar11;
  ulong **ppuVar12;
  ulong **ppuVar13;
  ulong **ppuVar14;
  ulong **ppuVar15;
  ulong **ppuVar16;
  ulong **ppuVar17;
  ulong **ppuVar18;
  ulong **ppuVar19;
  ulong **ppuVar20;
  ulong **ppuVar21;
  ulong **ppuVar22;
  ulong **ppuVar23;
  ulong **ppuVar24;
  ulong **ppuVar25;
  ulong **ppuVar26;
  ulong **ppuVar27;
  ulong **ppuVar28;
  ulong **ppuVar29;
  ulong **ppuVar30;
  ulong **ppuVar31;
  ulong **ppuVar32;
  ulong **ppuVar33;
  undefined1 uVar34;
  ulong *puVar35;
  ulong **ppuVar36;
  ulong **ppuVar37;
  undefined8 uVar38;
  long *plVar39;
  long lVar40;
  long *plVar41;
  undefined8 *puVar42;
  undefined1 (*pauVar43) [16];
  ulong extraout_x1;
  ulong **extraout_x1_00;
  ulong **ppuVar44;
  ulong uVar45;
  ulong *puVar46;
  ulong *puVar47;
  ulong *puVar48;
  ulong **ppuVar49;
  ulong *puVar50;
  long unaff_x23;
  ulong *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar51;
  code *pcVar52;
  ulong *puVar53;
  ulong *puVar54;
  undefined8 uVar55;
  ulong *puVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auStack_290 [256];
  ulong *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_100;
  undefined8 uStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  ulong **ppuStack_c8;
  ulong *puStack_c0;
  ulong *puStack_90;
  ulong *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong *puStack_48;
  
  puVar56 = param_2._8_8_;
  puVar35 = param_2._0_8_;
  ppuVar9 = &puStack_140;
  puVar51 = &stack0xfffffffffffffff0;
  if (*param_3 == (ulong *)0x8000000000000000) {
LAB_10147a6f4:
    puVar47 = (ulong *)0xa;
code_r0x00010147a6f8:
    puStack_90 = puVar47;
code_r0x00010147a6fc:
    ppuVar37 = &puStack_90;
    ppuVar44 = (ulong **)0x0;
code_r0x00010147a704:
code_r0x00010147a708:
    ppuVar37 = (ulong **)func_0x000108a4a0f8(ppuVar37,ppuVar44);
    goto code_r0x00010147a6e8;
  }
  pcVar52 = (code *)0x10147a454;
  auVar58 = _malloc(6);
  ppuVar44 = auVar58._8_8_;
  ppuVar37 = auVar58._0_8_;
  if (ppuVar37 == (ulong **)0x0) {
LAB_10147a710:
    ppuVar37 = (ulong **)0x1;
code_r0x00010147a714:
    func_0x0001087c9084(ppuVar37,6);
    goto code_r0x00010147a71c;
  }
  ((byte *)((long)ppuVar37 + 4))[0] = 99;
  ((byte *)((long)ppuVar37 + 4))[1] = 0x65;
  *(undefined4 *)ppuVar37 = 0x72756f73;
  puVar46 = param_3[9];
  puVar50 = (ulong *)0x8000000000000000;
  uVar34 = puVar46 == (ulong *)0x8000000000000000 || puVar46 == (ulong *)0x0;
  if (puVar46 != (ulong *)0x8000000000000000 && puVar46 != (ulong *)0x0) {
    pcVar52 = (code *)0x10147a490;
    _free(param_3[10]);
    ppuVar44 = extraout_x1_00;
  }
  auVar8._8_8_ = ppuVar44;
  auVar8._0_8_ = ppuVar37;
  auVar7._8_8_ = ppuVar44;
  auVar7._0_8_ = ppuVar37;
  auVar6._8_8_ = ppuVar44;
  auVar6._0_8_ = ppuVar37;
  auVar5._8_8_ = ppuVar44;
  auVar5._0_8_ = ppuVar37;
  auVar4._8_8_ = ppuVar44;
  auVar4._0_8_ = ppuVar37;
  auVar3._8_8_ = ppuVar44;
  auVar3._0_8_ = ppuVar37;
  auVar2._8_8_ = ppuVar44;
  auVar2._0_8_ = ppuVar37;
  auVar58._8_8_ = ppuVar44;
  auVar58._0_8_ = ppuVar37;
  ppuVar49 = &puStack_90;
  param_3[10] = (ulong *)ppuVar37;
  param_3[0xb] = (ulong *)0x6;
  param_3[9] = (ulong *)0x8000000000000000;
  puVar54 = param_3[0xb];
  puVar53 = param_3[10];
  puStack_e0 = puVar54;
  puStack_e8 = puVar53;
  uStack_f0 = 6;
  puVar47 = (ulong *)((ulong)param_4 & 0xff);
  puVar46 = (ulong *)&UNK_108ca0895;
  ppuVar10 = &puStack_140;
  ppuVar11 = &puStack_140;
  ppuVar12 = &puStack_140;
  ppuVar13 = &puStack_140;
  ppuVar14 = &puStack_140;
  ppuVar15 = &puStack_140;
  ppuVar16 = &puStack_140;
  ppuVar17 = &puStack_140;
  ppuVar18 = &puStack_140;
  ppuVar19 = &puStack_140;
  ppuVar33 = &puStack_140;
  ppuVar20 = &puStack_140;
  ppuVar21 = &puStack_140;
  ppuVar22 = &puStack_140;
  ppuVar23 = &puStack_140;
  ppuVar24 = &puStack_140;
  ppuVar26 = &puStack_140;
  ppuVar27 = &puStack_140;
  ppuVar28 = &puStack_140;
  ppuVar29 = &puStack_140;
  ppuVar30 = &puStack_140;
  ppuVar31 = &puStack_140;
  ppuVar32 = &puStack_140;
  ppuVar25 = &puStack_140;
  ppuVar36 = ppuVar37;
  puVar48 = puVar47;
  switch(puVar47) {
  default:
    param_4 = (ulong **)0x6;
  case (ulong *)0xe:
  case (ulong *)0x10:
  case (ulong *)0x12:
  case (ulong *)0x16:
  case (ulong *)0x18:
  case (ulong *)0x1a:
  case (ulong *)0x1e:
  case (ulong *)0x20:
  case (ulong *)0x26:
  case (ulong *)0x40:
  case (ulong *)0x48:
  case (ulong *)0x4a:
  case (ulong *)0x4e:
  case (ulong *)0x52:
  case (ulong *)0x58:
  case (ulong *)0x60:
  case (ulong *)0x62:
  case (ulong *)0x64:
  case (ulong *)0x6a:
  case (ulong *)0x70:
  case (ulong *)0x72:
  case (ulong *)0x74:
  case (ulong *)0x7c:
  case (ulong *)0xa6:
  case (ulong *)0xaa:
  case (ulong *)0xbc:
  case (ulong *)0xca:
  case (ulong *)0xea:
  case (ulong *)0xf2:
  case (ulong *)0xf4:
  case (ulong *)0xf8:
  case (ulong *)0xfc:
    ppuVar37 = (ulong **)0x6;
code_r0x00010147a4d4:
    ppuVar37 = (ulong **)_malloc(ppuVar37);
code_r0x00010147a4d8:
    if (ppuVar37 != (ulong **)0x0) {
code_r0x00010147a4dc:
      puVar47 = (ulong *)0x6d65;
code_r0x00010147a4e0:
      *(short *)((long)ppuVar37 + 4) = (short)puVar47;
code_r0x00010147a4e4:
      puVar47 = (ulong *)0x7973;
code_r0x00010147a4e8:
      puVar47 = (ulong *)(ulong)((uint)puVar47 | 0x74730000);
code_r0x00010147a4ec:
code_r0x00010147a614:
      *(int *)ppuVar37 = (int)puVar47;
      puVar47 = (ulong *)0x6;
code_r0x00010147a61c:
code_r0x00010147a67c:
      uStack_d8 = 0x8000000000000003;
      ppuVar36 = &puStack_90;
      puStack_d0 = puVar47;
      ppuStack_c8 = ppuVar37;
      puStack_c0 = puVar47;
code_r0x00010147a68c:
code_r0x00010147a690:
      FUN_101497a9c(ppuVar36,param_3);
code_r0x00010147a69c:
      uStack_138 = uStack_80;
      puStack_140 = puStack_88;
      uStack_128 = uStack_70;
      uStack_130 = uStack_78;
      puVar53 = puStack_68;
      puVar54 = puStack_60;
code_r0x00010147a6ac:
      puVar35 = puStack_58;
code_r0x00010147a6b0:
      puStack_120 = puVar53;
      puStack_118 = puVar54;
      puStack_110 = puVar35;
code_r0x00010147a6b4:
      puVar48 = puStack_48;
code_r0x00010147a6b8:
      puVar47 = puStack_140;
      puStack_100 = puVar48;
code_r0x00010147a6c0:
      uVar34 = puVar47 == (ulong *)0x8000000000000005;
code_r0x00010147a6cc:
      if (!(bool)uVar34) {
        FUN_100de6690(&puStack_140);
      }
code_r0x00010147a6d8:
      ppuVar37 = (ulong **)0x0;
code_r0x00010147a6e8:
code_r0x00010147a6ec:
      return ppuVar37;
    }
    break;
  case (ulong *)0x1:
    param_4 = (ulong **)0x4;
  case (ulong *)0x30:
  case (ulong *)0x3a:
  case (ulong *)0xfd:
    ppuVar37 = (ulong **)_malloc(4);
code_r0x00010147a5dc:
    if (ppuVar37 == (ulong **)0x0) break;
code_r0x00010147a5e0:
    puVar47 = (ulong *)0x72657375;
code_r0x00010147a5e8:
    *(int *)ppuVar37 = (int)puVar47;
code_r0x00010147a5ec:
    puVar47 = (ulong *)0x4;
    goto code_r0x00010147a67c;
  case (ulong *)0x2:
  case (ulong *)0x3f:
  case (ulong *)0x8f:
    ppuVar37 = (ulong **)_malloc(7);
    param_4 = (ulong **)0x7;
    if (ppuVar37 != (ulong **)0x0) {
      puVar47 = (ulong *)0x656a;
      goto code_r0x00010147a55c;
    }
    break;
  case (ulong *)0x3:
    param_4 = (ulong **)0x3;
    ppuVar37 = (ulong **)0x3;
  case (ulong *)0xb5:
    ppuVar37 = (ulong **)_malloc(ppuVar37);
code_r0x00010147a584:
    if (ppuVar37 == (ulong **)0x0) break;
    *(byte *)((long)ppuVar37 + 2) = 0x6d;
code_r0x00010147a590:
    puVar47 = (ulong *)0x646d;
code_r0x00010147a594:
    *(short *)ppuVar37 = (short)puVar47;
    puVar47 = (ulong *)0x3;
code_r0x00010147a59c:
    goto code_r0x00010147a67c;
  case (ulong *)0x4:
    param_4 = (ulong **)0xd;
    ppuVar37 = (ulong **)_malloc(0xd);
  case (ulong *)0x1d:
  case (ulong *)0x2d:
  case (ulong *)0x37:
  case (ulong *)0xb9:
    if (ppuVar37 == (ulong **)0x0) break;
    puVar47 = (ulong *)&UNK_108caf000;
code_r0x00010147a504:
    *ppuVar37 = *(ulong **)((long)puVar47 + 0xb77);
    *(undefined8 *)((long)ppuVar37 + 5) = *(undefined8 *)((long)puVar47 + 0xb7c);
code_r0x00010147a518:
    puVar47 = (ulong *)0xd;
    goto code_r0x00010147a67c;
  case (ulong *)0x5:
    param_4 = (ulong **)0x6;
    ppuVar37 = (ulong **)_malloc(6);
  case (ulong *)0x89:
    if (ppuVar37 == (ulong **)0x0) break;
code_r0x00010147a604:
    ((byte *)((long)ppuVar37 + 4))[0] = 0x69;
    ((byte *)((long)ppuVar37 + 4))[1] = 0x6e;
code_r0x00010147a60c:
    puVar47 = (ulong *)0x6c70;
code_r0x00010147a610:
    puVar47 = (ulong *)(ulong)((uint)puVar47 | 0x67750000);
    goto code_r0x00010147a614;
  case (ulong *)0x6:
    param_4 = (ulong **)0x12;
    ppuVar37 = (ulong **)0x12;
  case (ulong *)0x9f:
    ppuVar37 = (ulong **)_malloc(ppuVar37);
    if (ppuVar37 == (ulong **)0x0) break;
code_r0x00010147a630:
    *(undefined2 *)(ppuVar37 + 2) = 0x7374;
    puVar47 = (ulong *)&UNK_108caf000;
code_r0x00010147a63c:
    puVar47 = (ulong *)((long)puVar47 + 0xb84);
code_r0x00010147a640:
    puVar54 = (ulong *)puVar47[1];
    puVar53 = (ulong *)*puVar47;
code_r0x00010147a644:
    ppuVar37[1] = puVar54;
    *ppuVar37 = puVar53;
    puVar47 = (ulong *)0x12;
code_r0x00010147a64c:
    goto code_r0x00010147a67c;
  case (ulong *)0x7:
  case (ulong *)0xe3:
    param_4 = (ulong **)0x1a;
    ppuVar37 = (ulong **)0x1a;
  case (ulong *)0x63:
  case (ulong *)0xbf:
    ppuVar37 = (ulong **)_malloc(ppuVar37);
    if (ppuVar37 == (ulong **)0x0) break;
    puVar47 = (ulong *)&UNK_108cafb96;
    ppuVar37[1] = (ulong *)0x635f646567616e61;
    *ppuVar37 = (ulong *)0x6d5f79636167656c;
code_r0x00010147a5c0:
    uVar38 = *(undefined8 *)((long)puVar47 + 10);
    *(undefined8 *)((long)ppuVar37 + 0x12) = *(undefined8 *)((long)puVar47 + 0x12);
    *(undefined8 *)((long)ppuVar37 + 10) = uVar38;
    puVar47 = (ulong *)0x1a;
    goto code_r0x00010147a67c;
  case (ulong *)0x8:
  case (ulong *)0x57:
  case (ulong *)0x87:
    ppuVar37 = (ulong **)_malloc(0x19);
    param_4 = (ulong **)0x19;
    if (ppuVar37 != (ulong **)0x0) {
      puVar47 = (ulong *)&UNK_108cafbb0;
      goto code_r0x00010147a668;
    }
    break;
  case (ulong *)0x9:
    param_4 = (ulong **)0x7;
  case (ulong *)0x1b:
  case (ulong *)0x27:
    ppuVar37 = (ulong **)_malloc(7);
code_r0x00010147a52c:
    if (ppuVar37 == (ulong **)0x0) break;
code_r0x00010147a530:
    puVar47 = (ulong *)0x6f6e;
code_r0x00010147a534:
    puVar47 = (ulong *)(ulong)((uint)puVar47 | 0x6e770000);
code_r0x00010147a538:
    *(int *)((long)ppuVar37 + 3) = (int)puVar47;
    puVar47 = (ulong *)0x6e6b6e75;
    goto code_r0x00010147a56c;
  case (ulong *)0xd:
    goto code_r0x00010147a5dc;
  case (ulong *)0xf:
    goto code_r0x00010147a538;
  case (ulong *)0x11:
    goto code_r0x00010147a574;
  case (ulong *)0x13:
    goto code_r0x00010147a6c0;
  case (ulong *)0x15:
  case (ulong *)0xa9:
    goto code_r0x00010147a61c;
  case (ulong *)0x17:
    goto code_r0x00010147a7a0;
  case (ulong *)0x19:
  case (ulong *)0x2c:
  case (ulong *)0x36:
    goto code_r0x00010147a59c;
  case (ulong *)0x1c:
  case (ulong *)0x66:
  case (ulong *)0x78:
  case (ulong *)0x7a:
  case (ulong *)0x82:
  case (ulong *)0x88:
  case (ulong *)0x9a:
  case (ulong *)0x9c:
  case (ulong *)0xcc:
  case (ulong *)0xce:
  case (ulong *)0xd0:
    goto code_r0x00010147a4d4;
  case (ulong *)0x1f:
    goto code_r0x00010147a7dc;
  case (ulong *)0x21:
code_r0x00010147a55c:
    *(uint *)((long)ppuVar37 + 3) = (uint)puVar47 | 0x74630000;
  case (ulong *)0x2b:
  case (ulong *)0x35:
    puVar47 = (ulong *)0x6a6f7270;
code_r0x00010147a56c:
    *(int *)ppuVar37 = (int)puVar47;
code_r0x00010147a570:
    puVar47 = (ulong *)0x7;
code_r0x00010147a574:
    goto code_r0x00010147a67c;
  case (ulong *)0x23:
    goto code_r0x00010147a808;
  case (ulong *)0x25:
    goto code_r0x00010147a764;
  case (ulong *)0x2a:
  case (ulong *)0x34:
  case (ulong *)0xab:
    goto code_r0x00010147a60c;
  case (ulong *)0x2e:
  case (ulong *)0x38:
  case (ulong *)0xe6:
    goto code_r0x00010147a644;
  case (ulong *)0x2f:
    goto code_r0x00010147a674;
  case (ulong *)0x31:
    goto code_r0x00010147a6ac;
  case (ulong *)0x32:
  case (ulong *)0xbb:
    goto code_r0x00010147a52c;
  case (ulong *)0x39:
    goto code_r0x00010147a67c;
  case (ulong *)0x3b:
    goto code_r0x00010147a6b4;
  case (ulong *)0x3c:
  case (ulong *)0x9d:
    goto code_r0x00010147a534;
  case (ulong *)0x41:
    goto code_r0x00010147a75c;
  case (ulong *)0x43:
    goto code_r0x00010147a800;
  case (ulong *)0x45:
    goto code_r0x00010147a614;
  case (ulong *)0x47:
    goto code_r0x00010147a5ec;
  case (ulong *)0x49:
    goto code_r0x00010147a690;
  case (ulong *)0x4b:
    goto code_r0x00010147a8a4;
  case (ulong *)0x4d:
    goto code_r0x00010147a7d8;
  case (ulong *)0x4f:
    goto code_r0x00010147a6b8;
  case (ulong *)0x51:
  case (ulong *)0xad:
    _free();
    pcVar52 = FUN_10147a740;
    auVar58 = __Unwind_Resume(param_3);
    ppuVar9 = (ulong **)auStack_290;
  case (ulong *)0x7b:
    *(undefined8 *)((long)ppuVar9 + 0x120) = 0x8000000000000000;
    *(ulong ***)((long)ppuVar9 + 0x128) = ppuVar49;
    ppuVar10 = ppuVar9;
    auVar2 = auVar58;
code_r0x00010147a750:
    *(ulong ***)((long)ppuVar10 + 0x130) = param_4;
    *(ulong ***)((long)ppuVar10 + 0x138) = param_3;
    ppuVar11 = ppuVar10;
    auVar3 = auVar2;
code_r0x00010147a754:
    *(undefined1 **)((long)ppuVar11 + 0x140) = puVar51;
    *(code **)((long)ppuVar11 + 0x148) = pcVar52;
    puVar51 = (undefined1 *)((long)ppuVar11 + 0x140);
    ppuVar12 = ppuVar11;
    auVar4 = auVar3;
code_r0x00010147a75c:
    puVar47 = (ulong *)*auVar4._0_8_;
    ppuVar13 = ppuVar12;
    auVar5 = auVar4;
code_r0x00010147a760:
    puVar46 = (ulong *)0x8000000000000000;
    ppuVar14 = ppuVar13;
    auVar6 = auVar5;
code_r0x00010147a764:
    ppuVar15 = ppuVar14;
    auVar7 = auVar6;
    if (puVar47 == puVar46) {
      *(undefined8 *)(puVar51 + -0x90) = 10;
      ppuVar37 = (ulong **)(puVar51 + -0x90);
      ppuVar44 = (ulong **)0x0;
code_r0x00010147a890:
      ppuVar37 = (ulong **)func_0x000108a4a0f8(ppuVar37,ppuVar44,0);
code_r0x00010147a870:
      return ppuVar37;
    }
code_r0x00010147a76c:
    ppuVar16 = ppuVar15;
    param_4 = param_6;
    auVar8 = auVar7;
code_r0x00010147a770:
    unaff_x23 = auVar8._8_8_;
    ppuVar37 = auVar8._0_8_;
    ppuVar17 = ppuVar16;
    ppuVar49 = param_5;
code_r0x00010147a778:
    ppuVar18 = ppuVar17;
    param_3 = ppuVar37;
code_r0x00010147a77c:
    ppuVar37 = param_5;
    ppuVar19 = ppuVar18;
    param_5 = ppuVar37;
code_r0x00010147a780:
    ppuVar44 = ppuVar49;
    puVar50 = (ulong *)_malloc(ppuVar37);
    ppuVar49 = ppuVar44;
    if (puVar50 != (ulong *)0x0) {
      _memcpy(puVar50,unaff_x23,ppuVar44);
      puVar47 = param_3[9];
      ppuVar20 = ppuVar19;
code_r0x00010147a79c:
      unaff_x24 = (ulong *)0x8000000000000000;
      ppuVar21 = ppuVar20;
code_r0x00010147a7a0:
      ppuVar22 = ppuVar21;
      if (puVar47 != unaff_x24 && puVar47 != (ulong *)0x0) {
code_r0x00010147a7ac:
        _free(param_3[10]);
      }
      unaff_x23 = -0x7ffffffffffffffb;
      param_3[10] = puVar50;
      param_3[0xb] = (ulong *)ppuVar49;
      param_3[9] = unaff_x24;
      puVar35 = param_3[10];
      *(ulong **)((long)ppuVar22 + 0x60) = param_3[0xb];
      *(ulong **)((long)ppuVar22 + 0x58) = puVar35;
      *(ulong ***)((long)ppuVar22 + 0x50) = ppuVar49;
      uVar34 = *param_4 == unaff_x24;
      ppuVar23 = ppuVar22;
code_r0x00010147a7d8:
      ppuVar24 = ppuVar23;
      if ((bool)uVar34) {
code_r0x00010147a7dc:
        puVar47 = (ulong *)0x8000000000000000;
        ppuVar25 = ppuVar24;
code_r0x00010147a7e0:
        *(ulong **)((long)ppuVar25 + 0x68) = puVar47;
        ppuVar29 = ppuVar25;
      }
      else {
        ppuVar37 = (ulong **)((long)ppuVar23 + 0x68);
        ppuVar26 = ppuVar23;
code_r0x00010147a7ec:
        ppuVar44 = param_4;
        ppuVar27 = ppuVar26;
code_r0x00010147a7f0:
        FUN_10070fe2c(ppuVar37,ppuVar44);
        ppuVar28 = ppuVar27;
        ppuVar29 = ppuVar27;
        if (*(long *)((long)ppuVar27 + 0x68) == unaff_x23) {
code_r0x00010147a800:
          param_3 = *(ulong ***)((long)ppuVar28 + 0x70);
          ppuVar37 = *(ulong ***)((long)ppuVar28 + 0x58);
code_r0x00010147a808:
          _free(ppuVar37);
code_r0x00010147a80c:
          return param_3;
        }
      }
LAB_10147a814:
      param_4 = (ulong **)(puVar51 + -0x90);
      ppuVar30 = ppuVar29;
code_r0x00010147a818:
      ppuVar37 = (ulong **)(puVar51 + -0x90);
      ppuVar31 = ppuVar30;
code_r0x00010147a824:
      FUN_101497a9c(ppuVar37,param_3);
      puVar35 = param_4[1];
      puVar50 = param_4[4];
      puVar56 = param_4[3];
      ppuVar31[1] = param_4[2];
      *ppuVar31 = puVar35;
      ppuVar31[3] = puVar50;
      ppuVar31[2] = puVar56;
      puVar54 = param_4[6];
      puVar53 = param_4[5];
      puVar56 = param_4[8];
      puVar35 = param_4[7];
      ppuVar32 = ppuVar31;
code_r0x00010147a840:
      ppuVar32[5] = puVar54;
      ppuVar32[4] = puVar53;
      ppuVar32[7] = puVar56;
      ppuVar32[6] = puVar35;
      ppuVar32[8] = (ulong *)*(long *)(puVar51 + -0x48);
      if (*ppuVar32 != (ulong *)unaff_x23) {
        FUN_100de6690(ppuVar32);
      }
      return (ulong **)0x0;
    }
    ppuVar37 = (ulong **)0x1;
    ppuVar33 = ppuVar19;
code_r0x00010147a8a4:
    uVar38 = func_0x0001087c9084(ppuVar37,ppuVar44);
    _free(*(undefined8 *)((long)ppuVar33 + 0x58));
    auVar58 = __Unwind_Resume(uVar38);
    uVar55 = auVar58._8_8_;
    plVar39 = auVar58._0_8_;
    *(undefined8 *)((long)ppuVar33 + -0x50) = unaff_x28;
    *(undefined8 *)((long)ppuVar33 + -0x48) = unaff_x27;
    *(ulong **)((long)ppuVar33 + -0x40) = unaff_x24;
    *(long *)((long)ppuVar33 + -0x38) = unaff_x23;
    *(undefined8 *)((long)ppuVar33 + -0x30) = 0x8000000000000000;
    *(ulong ***)((long)ppuVar33 + -0x28) = ppuVar49;
    *(ulong ***)((long)ppuVar33 + -0x20) = param_4;
    *(undefined8 *)((long)ppuVar33 + -0x18) = uVar38;
    *(undefined1 **)((long)ppuVar33 + -0x10) = puVar51;
    *(code **)((long)ppuVar33 + -8) = FUN_10147a8bc;
    if (*plVar39 == -0x8000000000000000) {
      *(undefined8 *)((long)ppuVar33 + -0xa0) = 10;
      ppuVar37 = (ulong **)func_0x000108a4a0f8((undefined1 *)((long)ppuVar33 + -0xa0),0,0);
      return ppuVar37;
    }
    ppuVar37 = param_5;
    ppuVar44 = param_6;
    ppuVar10 = param_7;
    lVar40 = _malloc(param_5);
    if (lVar40 != 0) {
      _memcpy(lVar40,uVar55,param_5);
      if (plVar39[9] == -0x8000000000000000 || plVar39[9] == 0) {
        plVar39[10] = lVar40;
        plVar39[0xb] = (long)param_5;
        plVar39[9] = -0x8000000000000000;
        lVar40 = plVar39[10];
        *(long *)((long)ppuVar33 + -0xf0) = plVar39[0xb];
        *(long *)((long)ppuVar33 + -0xf8) = lVar40;
        *(ulong ***)((long)ppuVar33 + -0x100) = param_5;
      }
      else {
        _free(plVar39[10]);
        plVar39[10] = lVar40;
        plVar39[0xb] = (long)param_5;
        plVar39[9] = -0x8000000000000000;
        lVar40 = plVar39[10];
        *(long *)((long)ppuVar33 + -0xf0) = plVar39[0xb];
        *(long *)((long)ppuVar33 + -0xf8) = lVar40;
        *(ulong ***)((long)ppuVar33 + -0x100) = param_5;
      }
      if (param_7 == (ulong **)0x0) {
        lVar40 = 1;
      }
      else {
        lVar40 = _malloc(param_7);
        if (lVar40 == 0) {
          func_0x0001087c9084(1,param_7);
                    /* WARNING: Does not return */
          pcVar52 = (code *)SoftwareBreakpoint(1,0x10147a964);
          (*pcVar52)();
        }
      }
      _memcpy(lVar40,param_6,param_7);
      *(undefined8 *)((long)ppuVar33 + -0xe8) = 0x8000000000000003;
      *(ulong ***)((long)ppuVar33 + -0xe0) = param_7;
      *(long *)((long)ppuVar33 + -0xd8) = lVar40;
      *(ulong ***)((long)ppuVar33 + -0xd0) = param_7;
      FUN_101497a9c((undefined1 *)((long)ppuVar33 + -0xa0),plVar39,
                    (undefined1 *)((long)ppuVar33 + -0x100),(undefined1 *)((long)ppuVar33 + -0xe8));
      *(undefined8 *)((long)ppuVar33 + -0x148) = *(undefined8 *)((long)ppuVar33 + -0x90);
      *(undefined8 *)((long)ppuVar33 + -0x150) = *(undefined8 *)((long)ppuVar33 + -0x98);
      *(undefined8 *)((long)ppuVar33 + -0x138) = *(undefined8 *)((long)ppuVar33 + -0x80);
      *(undefined8 *)((long)ppuVar33 + -0x140) = *(undefined8 *)((long)ppuVar33 + -0x88);
      *(undefined8 *)((long)ppuVar33 + -0x128) = *(undefined8 *)((long)ppuVar33 + -0x70);
      *(undefined8 *)((long)ppuVar33 + -0x130) = *(undefined8 *)((long)ppuVar33 + -0x78);
      *(undefined8 *)((long)ppuVar33 + -0x118) = *(undefined8 *)((long)ppuVar33 + -0x60);
      *(undefined8 *)((long)ppuVar33 + -0x120) = *(undefined8 *)((long)ppuVar33 + -0x68);
      *(undefined8 *)((long)ppuVar33 + -0x110) = *(undefined8 *)((long)ppuVar33 + -0x58);
      if (*(long *)((long)ppuVar33 + -0x150) != -0x7ffffffffffffffb) {
        FUN_100de6690((undefined1 *)((long)ppuVar33 + -0x150));
      }
      return (ulong **)0x0;
    }
    uVar38 = func_0x0001087c9084(1,param_5);
    _free(*(undefined8 *)((long)ppuVar33 + -0xf8));
    auVar58 = __Unwind_Resume(uVar38);
    ppuVar11 = auVar58._8_8_;
    plVar41 = auVar58._0_8_;
    *(undefined8 *)((long)ppuVar33 + -400) = unaff_x28;
    *(undefined8 *)((long)ppuVar33 + -0x188) = unaff_x27;
    *(ulong ***)((long)ppuVar33 + -0x180) = param_5;
    *(ulong ***)((long)ppuVar33 + -0x178) = param_6;
    *(long **)((long)ppuVar33 + -0x170) = plVar39;
    *(undefined8 *)((long)ppuVar33 + -0x168) = uVar38;
    *(undefined1 **)((long)ppuVar33 + -0x160) = (undefined1 *)((long)ppuVar33 + -0x10);
    *(undefined8 *)((long)ppuVar33 + -0x158) = 0x10147aa54;
    if (*plVar41 == -0x8000000000000000) {
      *(undefined8 *)((long)ppuVar33 + -0x1f0) = 10;
      ppuVar37 = (ulong **)func_0x000108a4a0f8((undefined1 *)((long)ppuVar33 + -0x1f0),0,0);
      return ppuVar37;
    }
    puVar42 = (undefined8 *)_malloc(0x16);
    if (puVar42 != (undefined8 *)0x0) {
      puVar42[1] = 0x696d7265705f6c61;
      *puVar42 = 0x6e6f697469646461;
      *(undefined8 *)((long)puVar42 + 0xe) = 0x736e6f697373696d;
      if (plVar41[9] != -0x8000000000000000 && plVar41[9] != 0) {
        _free(plVar41[10]);
      }
      plVar41[10] = (long)puVar42;
      plVar41[0xb] = 0x16;
      plVar41[9] = -0x8000000000000000;
      lVar40 = plVar41[10];
      *(long *)((long)ppuVar33 + -0x2a0) = plVar41[0xb];
      *(long *)((long)ppuVar33 + -0x2a8) = lVar40;
      *(undefined8 *)((long)ppuVar33 + -0x2b0) = 0x16;
      if (*ppuVar11 == (ulong *)0x8000000000000001) {
        *(undefined8 *)((long)ppuVar33 + -0x298) = 0x8000000000000000;
        goto LAB_10147ab00;
      }
      pauVar43 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar43[1][0] == '\x01') {
        auVar58 = *pauVar43;
      }
      else {
        auVar58 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar43 + 8) = auVar58._8_8_;
        pauVar43[1][0] = 1;
      }
      *(long *)*pauVar43 = auVar58._0_8_ + 1;
      FUN_105dc99f8((undefined1 *)((long)ppuVar33 + -0x1f0),2,auVar58._0_8_,auVar58._8_8_);
      *(undefined8 *)((long)ppuVar33 + -0x1a8) = 0x8000000000000000;
      ppuVar37 = *(ulong ***)((long)ppuVar33 + -0x1e8);
      if (*(long *)((long)ppuVar33 + -0x1f0) != -0x7fffffffffffffff) {
        *(undefined8 *)((long)ppuVar33 + -0x218) = *(undefined8 *)((long)ppuVar33 + -0x1b8);
        *(undefined8 *)((long)ppuVar33 + -0x220) = *(undefined8 *)((long)ppuVar33 + -0x1c0);
        *(undefined8 *)((long)ppuVar33 + -0x208) = *(undefined8 *)((long)ppuVar33 + -0x1a8);
        *(undefined8 *)((long)ppuVar33 + -0x210) = *(undefined8 *)((long)ppuVar33 + -0x1b0);
        *(undefined8 *)((long)ppuVar33 + -0x1f8) = *(undefined8 *)((long)ppuVar33 + -0x198);
        *(undefined8 *)((long)ppuVar33 + -0x200) = *(undefined8 *)((long)ppuVar33 + -0x1a0);
        *(undefined8 *)((long)ppuVar33 + -0x238) = *(undefined8 *)((long)ppuVar33 + -0x1d8);
        *(undefined8 *)((long)ppuVar33 + -0x240) = *(undefined8 *)((long)ppuVar33 + -0x1e0);
        *(undefined8 *)((long)ppuVar33 + -0x228) = *(undefined8 *)((long)ppuVar33 + -0x1c8);
        *(undefined8 *)((long)ppuVar33 + -0x230) = *(undefined8 *)((long)ppuVar33 + -0x1d0);
        *(long *)((long)ppuVar33 + -0x250) = *(long *)((long)ppuVar33 + -0x1f0);
        *(ulong ***)((long)ppuVar33 + -0x248) = ppuVar37;
        ppuVar37 = (ulong **)
                   FUN_10148a270((undefined1 *)((long)ppuVar33 + -0x250),*(byte *)(ppuVar11 + 4));
        if ((ppuVar37 == (ulong **)0x0) &&
           (ppuVar37 = (ulong **)FUN_10147be10((undefined1 *)((long)ppuVar33 + -0x250),ppuVar11),
           ppuVar37 == (ulong **)0x0)) {
          lVar40 = *(long *)((long)ppuVar33 + -0x250);
          ppuVar37 = *(ulong ***)((long)ppuVar33 + -0x248);
          if (lVar40 == -0x8000000000000000) {
            if (ppuVar37 == (ulong **)0x8000000000000005) {
              func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
                    /* WARNING: Does not return */
              pcVar52 = (code *)SoftwareBreakpoint(1,0x10147ad00);
              (*pcVar52)();
            }
            *(undefined8 *)((long)ppuVar33 + -0x288) = *(undefined8 *)((long)ppuVar33 + -0x238);
            *(undefined8 *)((long)ppuVar33 + -0x290) = *(undefined8 *)((long)ppuVar33 + -0x240);
            *(undefined8 *)((long)ppuVar33 + -0x278) = *(undefined8 *)((long)ppuVar33 + -0x228);
            *(undefined8 *)((long)ppuVar33 + -0x280) = *(undefined8 *)((long)ppuVar33 + -0x230);
            *(undefined8 *)((long)ppuVar33 + -0x268) = *(undefined8 *)((long)ppuVar33 + -0x218);
            *(undefined8 *)((long)ppuVar33 + -0x270) = *(undefined8 *)((long)ppuVar33 + -0x220);
            *(undefined8 *)((long)ppuVar33 + -0x260) = *(undefined8 *)((long)ppuVar33 + -0x210);
            *(ulong *)((long)ppuVar33 + -600) = *(ulong *)((long)ppuVar33 + -0x208);
            *(ulong ***)((long)ppuVar33 + -0x298) = ppuVar37;
          }
          else {
            *(long *)((long)ppuVar33 + -0x298) = lVar40;
            *(ulong ***)((long)ppuVar33 + -0x290) = ppuVar37;
            *(undefined8 *)((long)ppuVar33 + -0x280) = *(undefined8 *)((long)ppuVar33 + -0x238);
            *(undefined8 *)((long)ppuVar33 + -0x288) = *(undefined8 *)((long)ppuVar33 + -0x240);
            *(undefined8 *)((long)ppuVar33 + -0x270) = *(undefined8 *)((long)ppuVar33 + -0x228);
            *(undefined8 *)((long)ppuVar33 + -0x278) = *(undefined8 *)((long)ppuVar33 + -0x230);
            *(undefined8 *)((long)ppuVar33 + -0x260) = *(undefined8 *)((long)ppuVar33 + -0x218);
            *(undefined8 *)((long)ppuVar33 + -0x268) = *(undefined8 *)((long)ppuVar33 + -0x220);
            *(undefined8 *)((long)ppuVar33 + -600) = *(undefined8 *)((long)ppuVar33 + -0x210);
            if ((*(ulong *)((long)ppuVar33 + -0x208) & 0x7fffffffffffffff) != 0) {
              _free(*(undefined8 *)((long)ppuVar33 + -0x200));
            }
            if (lVar40 == -0x7ffffffffffffffb) goto LAB_10147abfc;
          }
LAB_10147ab00:
          FUN_101497a9c((undefined1 *)((long)ppuVar33 + -0x1f0),plVar41,
                        (undefined1 *)((long)ppuVar33 + -0x2b0),
                        (undefined1 *)((long)ppuVar33 + -0x298));
          *(undefined8 *)((long)ppuVar33 + -0x248) = *(undefined8 *)((long)ppuVar33 + -0x1e0);
          *(undefined8 *)((long)ppuVar33 + -0x250) = *(undefined8 *)((long)ppuVar33 + -0x1e8);
          *(undefined8 *)((long)ppuVar33 + -0x238) = *(undefined8 *)((long)ppuVar33 + -0x1d0);
          *(undefined8 *)((long)ppuVar33 + -0x240) = *(undefined8 *)((long)ppuVar33 + -0x1d8);
          *(undefined8 *)((long)ppuVar33 + -0x228) = *(undefined8 *)((long)ppuVar33 + -0x1c0);
          *(undefined8 *)((long)ppuVar33 + -0x230) = *(undefined8 *)((long)ppuVar33 + -0x1c8);
          *(undefined8 *)((long)ppuVar33 + -0x218) = *(undefined8 *)((long)ppuVar33 + -0x1b0);
          *(undefined8 *)((long)ppuVar33 + -0x220) = *(undefined8 *)((long)ppuVar33 + -0x1b8);
          *(undefined8 *)((long)ppuVar33 + -0x210) = *(undefined8 *)((long)ppuVar33 + -0x1a8);
          if (*(long *)((long)ppuVar33 + -0x250) != -0x7ffffffffffffffb) {
            FUN_100de6690((undefined1 *)((long)ppuVar33 + -0x250));
          }
          return (ulong **)0x0;
        }
        FUN_100e040f0((undefined1 *)((long)ppuVar33 + -0x250));
      }
LAB_10147abfc:
      _free(*(undefined8 *)((long)ppuVar33 + -0x2a8));
      return ppuVar37;
    }
    uVar38 = func_0x0001087c9084(1,0x16);
    auVar1._8_8_ = uVar55;
    auVar1._0_8_ = uVar38;
    FUN_100e040f0((undefined1 *)((long)ppuVar33 + -0x250));
    _free(*(undefined8 *)((long)ppuVar33 + -0x2a8));
    auVar58 = __Unwind_Resume(uVar38);
    plVar39 = auVar58._0_8_;
    if (*plVar39 == -0x8000000000000000) {
      *(undefined1 **)((long)ppuVar33 + -0x2c0) = (undefined1 *)((long)ppuVar33 + -0x160);
      *(undefined8 *)((long)ppuVar33 + -0x2b8) = 0x10147ad34;
      *(undefined8 *)((long)ppuVar33 + -0x2d8) = 10;
      ppuVar37 = (ulong **)func_0x000108a4a0f8((undefined1 *)((long)ppuVar33 + -0x2d8),0,0);
      return ppuVar37;
    }
    *(undefined8 *)((long)ppuVar33 + -0x300) = unaff_x26;
    *(undefined8 *)((long)ppuVar33 + -0x2f8) = unaff_x25;
    *(undefined8 *)((long)ppuVar33 + -0x2f0) = uVar55;
    *(long *)((long)ppuVar33 + -0x2e8) = unaff_x23;
    *(ulong ***)((long)ppuVar33 + -0x2e0) = param_5;
    *(ulong ***)((long)ppuVar33 + -0x2d8) = param_6;
    *(ulong ***)((long)ppuVar33 + -0x2d0) = ppuVar11;
    *(undefined8 *)((long)ppuVar33 + -0x2c8) = uVar38;
    *(undefined1 **)((long)ppuVar33 + -0x2c0) = (undefined1 *)((long)ppuVar33 + -0x160);
    *(undefined8 *)((long)ppuVar33 + -0x2b8) = 0x10147ad34;
    if (*plVar39 == -0x8000000000000000) {
      ppuVar12 = (ulong **)&UNK_10b24c5c0;
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
      ppuVar13 = ppuVar44;
      ppuVar14 = ppuVar10;
    }
    else {
      ppuVar12 = ppuVar37;
      ppuVar13 = ppuVar44;
      ppuVar14 = ppuVar10;
      lVar40 = _malloc(ppuVar37);
      ppuVar11 = ppuVar10;
      param_6 = ppuVar37;
      param_5 = ppuVar44;
      auVar1 = auVar58;
      if (lVar40 != 0) {
        _memcpy(lVar40,auVar58._8_8_,ppuVar37);
        if (plVar39[9] != -0x8000000000000000 && plVar39[9] != 0) {
          _free(plVar39[10]);
        }
        plVar39[10] = lVar40;
        plVar39[0xb] = (long)ppuVar37;
        plVar39[9] = -0x8000000000000000;
        lVar40 = plVar39[10];
        *(long *)((long)ppuVar33 + -0x3a0) = plVar39[0xb];
        *(long *)((long)ppuVar33 + -0x3a8) = lVar40;
        *(ulong ***)((long)ppuVar33 + -0x3b0) = ppuVar37;
        uVar38 = 0x8000000000000002;
        if (((ulong)ppuVar44 & 1) == 0) {
          uVar38 = 0x8000000000000000;
        }
        *(undefined8 *)((long)ppuVar33 + -0x398) = uVar38;
        *(undefined8 *)((long)ppuVar33 + -0x390) = 0;
        *(ulong ***)((long)ppuVar33 + -0x388) = ppuVar10;
        FUN_101497a9c((undefined1 *)((long)ppuVar33 + -0x350),plVar39,
                      (undefined1 *)((long)ppuVar33 + -0x3b0),
                      (undefined1 *)((long)ppuVar33 + -0x398));
        *(undefined8 *)((long)ppuVar33 + -0x3f8) = *(undefined8 *)((long)ppuVar33 + -0x340);
        *(undefined8 *)((long)ppuVar33 + -0x400) = *(undefined8 *)((long)ppuVar33 + -0x348);
        *(undefined8 *)((long)ppuVar33 + -1000) = *(undefined8 *)((long)ppuVar33 + -0x330);
        *(undefined8 *)((long)ppuVar33 + -0x3f0) = *(undefined8 *)((long)ppuVar33 + -0x338);
        *(undefined8 *)((long)ppuVar33 + -0x3d8) = *(undefined8 *)((long)ppuVar33 + -800);
        *(undefined8 *)((long)ppuVar33 + -0x3e0) = *(undefined8 *)((long)ppuVar33 + -0x328);
        *(undefined8 *)((long)ppuVar33 + -0x3c8) = *(undefined8 *)((long)ppuVar33 + -0x310);
        *(undefined8 *)((long)ppuVar33 + -0x3d0) = *(undefined8 *)((long)ppuVar33 + -0x318);
        *(undefined8 *)((long)ppuVar33 + -0x3c0) = *(undefined8 *)((long)ppuVar33 + -0x308);
        if (*(long *)((long)ppuVar33 + -0x400) != -0x7ffffffffffffffb) {
          FUN_100de6690((undefined1 *)((long)ppuVar33 + -0x400));
        }
        return (ulong **)0x0;
      }
    }
    auVar58 = FUN_107c03c64(1,param_6);
    plVar39 = auVar58._0_8_;
    *(undefined8 *)((long)ppuVar33 + -0x450) = unaff_x26;
    *(undefined8 *)((long)ppuVar33 + -0x448) = unaff_x25;
    *(long *)((long)ppuVar33 + -0x440) = auVar1._8_8_;
    *(long *)((long)ppuVar33 + -0x438) = unaff_x23;
    *(ulong ***)((long)ppuVar33 + -0x430) = param_5;
    *(ulong ***)((long)ppuVar33 + -0x428) = param_6;
    *(ulong ***)((long)ppuVar33 + -0x420) = ppuVar11;
    *(long *)((long)ppuVar33 + -0x418) = auVar1._0_8_;
    *(undefined1 **)((long)ppuVar33 + -0x410) = (undefined1 *)((long)ppuVar33 + -0x2c0);
    *(undefined8 *)((long)ppuVar33 + -0x408) = 0x10063b76c;
    if (*plVar39 == -0x8000000000000000) {
      ppuVar37 = (ulong **)&UNK_10b24c5c0;
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28);
      ppuVar44 = ppuVar13;
    }
    else {
      ppuVar37 = ppuVar12;
      ppuVar44 = ppuVar13;
      lVar40 = _malloc(ppuVar12);
      ppuVar11 = ppuVar14;
      param_6 = ppuVar12;
      param_5 = ppuVar13;
      auVar1 = auVar58;
      if (lVar40 != 0) {
        _memcpy(lVar40,auVar58._8_8_,ppuVar12);
        if (plVar39[9] != -0x8000000000000000 && plVar39[9] != 0) {
          _free(plVar39[10]);
        }
        plVar39[10] = lVar40;
        plVar39[0xb] = (long)ppuVar12;
        plVar39[9] = -0x8000000000000000;
        lVar40 = plVar39[10];
        *(long *)((long)ppuVar33 + -0x4f0) = plVar39[0xb];
        *(long *)((long)ppuVar33 + -0x4f8) = lVar40;
        *(ulong ***)((long)ppuVar33 + -0x500) = ppuVar12;
        uVar38 = 0x8000000000000002;
        if (((ulong)ppuVar13 & 1) == 0) {
          uVar38 = 0x8000000000000000;
        }
        *(undefined8 *)((long)ppuVar33 + -0x4e8) = uVar38;
        *(undefined8 *)((long)ppuVar33 + -0x4e0) = 0;
        *(ulong ***)((long)ppuVar33 + -0x4d8) = ppuVar14;
        FUN_101497a9c((undefined1 *)((long)ppuVar33 + -0x4a0),plVar39,
                      (undefined1 *)((long)ppuVar33 + -0x500),
                      (undefined1 *)((long)ppuVar33 + -0x4e8));
        *(undefined8 *)((long)ppuVar33 + -0x548) = *(undefined8 *)((long)ppuVar33 + -0x490);
        *(undefined8 *)((long)ppuVar33 + -0x550) = *(undefined8 *)((long)ppuVar33 + -0x498);
        *(undefined8 *)((long)ppuVar33 + -0x538) = *(undefined8 *)((long)ppuVar33 + -0x480);
        *(undefined8 *)((long)ppuVar33 + -0x540) = *(undefined8 *)((long)ppuVar33 + -0x488);
        *(undefined8 *)((long)ppuVar33 + -0x528) = *(undefined8 *)((long)ppuVar33 + -0x470);
        *(undefined8 *)((long)ppuVar33 + -0x530) = *(undefined8 *)((long)ppuVar33 + -0x478);
        *(undefined8 *)((long)ppuVar33 + -0x518) = *(undefined8 *)((long)ppuVar33 + -0x460);
        *(undefined8 *)((long)ppuVar33 + -0x520) = *(undefined8 *)((long)ppuVar33 + -0x468);
        *(undefined8 *)((long)ppuVar33 + -0x510) = *(undefined8 *)((long)ppuVar33 + -0x458);
        if (*(long *)((long)ppuVar33 + -0x550) != -0x7ffffffffffffffb) {
          FUN_100de6690((undefined1 *)((long)ppuVar33 + -0x550));
        }
        return (ulong **)0x0;
      }
    }
    auVar58 = FUN_107c03c64(1,param_6);
    plVar39 = auVar58._0_8_;
    *(long *)((long)ppuVar33 + -0x590) = auVar1._8_8_;
    *(long *)((long)ppuVar33 + -0x588) = unaff_x23;
    *(ulong ***)((long)ppuVar33 + -0x580) = param_5;
    *(ulong ***)((long)ppuVar33 + -0x578) = param_6;
    *(ulong ***)((long)ppuVar33 + -0x570) = ppuVar11;
    *(long *)((long)ppuVar33 + -0x568) = auVar1._0_8_;
    *(undefined1 **)((long)ppuVar33 + -0x560) = (undefined1 *)((long)ppuVar33 + -0x410);
    *(undefined8 *)((long)ppuVar33 + -0x558) = 0x10063b8a4;
    if (*plVar39 == -0x8000000000000000) {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24c5c0);
      ppuVar10 = ppuVar44;
    }
    else {
      ppuVar10 = ppuVar44;
      lVar40 = _malloc(ppuVar37);
      ppuVar11 = ppuVar44;
      param_6 = ppuVar37;
      if (lVar40 != 0) {
        _memcpy(lVar40,auVar58._8_8_,ppuVar37);
        uVar38 = 0x8000000000000000;
        if (plVar39[9] != -0x8000000000000000 && plVar39[9] != 0) {
          _free(plVar39[10]);
        }
        plVar39[10] = lVar40;
        plVar39[0xb] = (long)ppuVar37;
        plVar39[9] = -0x8000000000000000;
        lVar40 = plVar39[10];
        *(long *)((long)ppuVar33 + -0x668) = plVar39[0xb];
        *(long *)((long)ppuVar33 + -0x670) = lVar40;
        *(ulong ***)((long)ppuVar33 + -0x678) = ppuVar37;
        uVar45 = (ulong)*(byte *)ppuVar44;
        if (*(byte *)ppuVar44 == 1) {
          *(undefined8 *)((long)ppuVar33 + -0x628) = 0;
          *(undefined8 *)((long)ppuVar33 + -0x620) = 1;
          *(undefined8 *)((long)ppuVar33 + -0x618) = 0;
          FUN_10624142c((undefined1 *)((long)ppuVar33 + -0x5e0),(byte *)((long)ppuVar44 + 1),0);
          thunk_FUN_108855060((undefined1 *)((long)ppuVar33 + -0x628),0,0x24,1,1);
          lVar40 = *(long *)((long)ppuVar33 + -0x618);
          uVar45 = *(ulong *)((long)ppuVar33 + -0x628);
          puVar42 = (undefined8 *)(*(long *)((long)ppuVar33 + -0x620) + lVar40);
          *(undefined4 *)(puVar42 + 4) = *(undefined4 *)((long)ppuVar33 + -0x5c0);
          uVar38 = *(undefined8 *)((long)ppuVar33 + -0x5e0);
          uVar57 = *(undefined8 *)((long)ppuVar33 + -0x5c8);
          uVar55 = *(undefined8 *)((long)ppuVar33 + -0x5d0);
          puVar42[1] = *(undefined8 *)((long)ppuVar33 + -0x5d8);
          *puVar42 = uVar38;
          puVar42[3] = uVar57;
          puVar42[2] = uVar55;
          *(long *)((long)ppuVar33 + -0x618) = lVar40 + 0x24;
          *(undefined8 *)((long)ppuVar33 + -0x658) = *(undefined8 *)((long)ppuVar33 + -0x618);
          *(undefined8 *)((long)ppuVar33 + -0x660) = *(undefined8 *)((long)ppuVar33 + -0x620);
          uVar38 = 0x8000000000000003;
        }
        *(undefined8 *)((long)ppuVar33 + -0x628) = uVar38;
        *(ulong *)((long)ppuVar33 + -0x620) = uVar45;
        *(undefined8 *)((long)ppuVar33 + -0x610) = *(undefined8 *)((long)ppuVar33 + -0x658);
        *(undefined8 *)((long)ppuVar33 + -0x618) = *(undefined8 *)((long)ppuVar33 + -0x660);
        *(undefined8 *)((long)ppuVar33 + -0x600) = *(undefined8 *)((long)ppuVar33 + -0x648);
        *(undefined8 *)((long)ppuVar33 + -0x608) = *(undefined8 *)((long)ppuVar33 + -0x650);
        *(undefined8 *)((long)ppuVar33 + -0x5f0) = *(undefined8 *)((long)ppuVar33 + -0x638);
        *(undefined8 *)((long)ppuVar33 + -0x5f8) = *(undefined8 *)((long)ppuVar33 + -0x640);
        *(undefined8 *)((long)ppuVar33 + -0x5e8) = *(undefined8 *)((long)ppuVar33 + -0x630);
        FUN_101497a9c((undefined1 *)((long)ppuVar33 + -0x5e0),plVar39,
                      (undefined1 *)((long)ppuVar33 + -0x678),
                      (undefined1 *)((long)ppuVar33 + -0x628));
        *(undefined8 *)((long)ppuVar33 + -0x6b8) = *(undefined8 *)((long)ppuVar33 + -0x5d0);
        *(undefined8 *)((long)ppuVar33 + -0x6c0) = *(undefined8 *)((long)ppuVar33 + -0x5d8);
        *(undefined8 *)((long)ppuVar33 + -0x6a8) = *(undefined8 *)((long)ppuVar33 + -0x5c0);
        *(undefined8 *)((long)ppuVar33 + -0x6b0) = *(undefined8 *)((long)ppuVar33 + -0x5c8);
        *(undefined8 *)((long)ppuVar33 + -0x698) = *(undefined8 *)((long)ppuVar33 + -0x5b0);
        *(undefined8 *)((long)ppuVar33 + -0x6a0) = *(undefined8 *)((long)ppuVar33 + -0x5b8);
        *(undefined8 *)((long)ppuVar33 + -0x688) = *(undefined8 *)((long)ppuVar33 + -0x5a0);
        *(undefined8 *)((long)ppuVar33 + -0x690) = *(undefined8 *)((long)ppuVar33 + -0x5a8);
        *(undefined8 *)((long)ppuVar33 + -0x680) = *(undefined8 *)((long)ppuVar33 + -0x598);
        if (*(long *)((long)ppuVar33 + -0x6c0) != -0x7ffffffffffffffb) {
          FUN_100de6690((undefined1 *)((long)ppuVar33 + -0x6c0));
        }
        return (ulong **)0x0;
      }
    }
    uVar38 = FUN_107c03c64(1,param_6);
    if (*(long *)((long)ppuVar33 + -0x628) != 0) {
      _free(*(undefined8 *)((long)ppuVar33 + -0x620));
    }
    _free(*(undefined8 *)((long)ppuVar33 + -0x670));
    puVar35 = (ulong *)__Unwind_Resume(uVar38);
    *(ulong ***)((long)ppuVar33 + -0x6f0) = param_5;
    *(ulong ***)((long)ppuVar33 + -0x6e8) = param_6;
    *(ulong ***)((long)ppuVar33 + -0x6e0) = ppuVar11;
    *(undefined8 *)((long)ppuVar33 + -0x6d8) = uVar38;
    *(undefined1 **)((long)ppuVar33 + -0x6d0) = (undefined1 *)((long)ppuVar33 + -0x560);
    *(undefined8 *)((long)ppuVar33 + -0x6c8) = 0x10063ba6c;
    ppuVar37 = (ulong **)FUN_1013fe3ec();
    if ((char)*puVar35 == '\x01') {
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108ca1a1b,0x28,&UNK_10b24d400);
      uVar45 = extraout_x1;
    }
    else {
      param_6 = (ulong **)puVar35[1];
      puVar35 = *param_6;
      uVar45 = puVar35[2];
      if (*puVar35 != uVar45) goto LAB_10063baac;
    }
    ppuVar37 = (ulong **)thunk_FUN_108855060(puVar35,uVar45,1,1,1);
    uVar45 = puVar35[2];
LAB_10063baac:
    *(undefined1 *)(puVar35[1] + uVar45) = 0x3a;
    puVar35[2] = uVar45 + 1;
    puVar35 = *param_6;
    if (*ppuVar10 == (ulong *)0x8000000000000000) {
      uVar45 = puVar35[2];
      if (*puVar35 - uVar45 < 4) {
        ppuVar37 = (ulong **)thunk_FUN_108855060(puVar35,uVar45,4,1,1);
        uVar45 = puVar35[2];
      }
      *(undefined4 *)(puVar35[1] + uVar45) = 0x6c6c756e;
      uVar45 = uVar45 + 4;
    }
    else {
      puVar56 = ppuVar10[1];
      puVar50 = ppuVar10[2];
      uVar45 = puVar35[2];
      if (*puVar35 == uVar45) {
        thunk_FUN_108855060(puVar35,uVar45,1,1,1);
        uVar45 = puVar35[2];
      }
      *(undefined1 *)(puVar35[1] + uVar45) = 0x22;
      puVar35[2] = uVar45 + 1;
      ppuVar37 = (ulong **)FUN_100657654(puVar35,puVar56,puVar50);
      uVar45 = puVar35[2];
      if (*puVar35 == uVar45) {
        ppuVar37 = (ulong **)thunk_FUN_108855060(puVar35,uVar45,1,1,1);
        uVar45 = puVar35[2];
      }
      *(undefined1 *)(puVar35[1] + uVar45) = 0x22;
      uVar45 = uVar45 + 1;
    }
    puVar35[2] = uVar45;
    return ppuVar37;
  case (ulong *)0x53:
  case (ulong *)0x6b:
    goto code_r0x00010147a570;
  case (ulong *)0x59:
  case (ulong *)0xcd:
    goto code_r0x00010147a780;
  case (ulong *)0x5b:
  case (ulong *)0x85:
    goto code_r0x00010147a824;
  case (ulong *)0x5d:
  case (ulong *)0xef:
    goto code_r0x00010147a630;
  case (ulong *)0x5f:
    goto LAB_10147a6f4;
  case (ulong *)0x61:
    goto code_r0x00010147a79c;
  case (ulong *)0x65:
  case (ulong *)0xbe:
  case (ulong *)0xe5:
    goto code_r0x00010147a4e8;
  case (ulong *)0x67:
  case (ulong *)0x90:
  case (ulong *)0xa1:
    goto code_r0x00010147a6d8;
  case (ulong *)0x69:
  case (ulong *)0xa7:
    goto code_r0x00010147a840;
  case (ulong *)0x6f:
    goto code_r0x00010147a80c;
  case (ulong *)0x71:
  case (ulong *)0xe2:
    goto code_r0x00010147a530;
  case (ulong *)0x73:
    goto code_r0x00010147a64c;
  case (ulong *)0x75:
    goto code_r0x00010147a6f8;
  case (ulong *)0x77:
    goto code_r0x00010147a5c0;
  case (ulong *)0x79:
  case (ulong *)0xdc:
    goto code_r0x00010147a6ec;
  case (ulong *)0x7d:
  case (ulong *)0xae:
  case (ulong *)0xb0:
  case (ulong *)0xc2:
  case (ulong *)0xc3:
  case (ulong *)0xc4:
    goto code_r0x00010147a4ec;
  case (ulong *)0x7e:
    goto code_r0x00010147a4d8;
  case (ulong *)0x7f:
    goto code_r0x00010147a890;
  case (ulong *)0x81:
    goto code_r0x00010147a7ec;
  case (ulong *)0x83:
    goto code_r0x00010147a66c;
  case (ulong *)0x8c:
    goto code_r0x00010147a68c;
  case (ulong *)0x8d:
    goto code_r0x00010147a5e0;
  case (ulong *)0x8e:
  case (ulong *)0xcf:
    goto code_r0x00010147a610;
  case (ulong *)0x91:
    goto code_r0x00010147a724;
  case (ulong *)0x92:
  case (ulong *)0xd5:
    goto code_r0x00010147a640;
  case (ulong *)0x93:
    goto code_r0x00010147a7e0;
  case (ulong *)0x94:
    goto code_r0x00010147a594;
  case (ulong *)0x95:
    goto code_r0x00010147a770;
  case (ulong *)0x96:
    goto code_r0x00010147a518;
  case (ulong *)0x99:
    goto code_r0x00010147a678;
  case (ulong *)0x9b:
  case (ulong *)0xda:
code_r0x00010147a668:
    puVar54 = (ulong *)puVar47[1];
    puVar53 = (ulong *)*puVar47;
code_r0x00010147a66c:
    ppuVar37[1] = puVar54;
    *ppuVar37 = puVar53;
code_r0x00010147a670:
    puVar54 = *(ulong **)((long)puVar47 + 0x11);
    puVar53 = *(ulong **)((long)puVar47 + 9);
code_r0x00010147a674:
    *(ulong **)((long)ppuVar37 + 0x11) = puVar54;
    *(ulong **)((long)ppuVar37 + 9) = puVar53;
code_r0x00010147a678:
    puVar47 = (ulong *)0x19;
    goto code_r0x00010147a67c;
  case (ulong *)0xa3:
    goto code_r0x00010147a77c;
  case (ulong *)0xa5:
    goto code_r0x00010147a6fc;
  case (ulong *)0xaf:
    break;
  case (ulong *)0xb3:
    goto code_r0x00010147a818;
  case (ulong *)0xb6:
  case (ulong *)0xe9:
    goto code_r0x00010147a4dc;
  case (ulong *)0xb7:
    goto code_r0x00010147a63c;
  case (ulong *)0xb8:
    goto code_r0x00010147a4e0;
  case (ulong *)0xba:
    goto code_r0x00010147a4e4;
  case (ulong *)0xbd:
    goto code_r0x00010147a714;
  case (ulong *)0xc1:
    goto code_r0x00010147a504;
  case (ulong *)0xc5:
    goto code_r0x00010147a56c;
  case (ulong *)0xc7:
    goto code_r0x00010147a7f0;
  case (ulong *)0xc9:
    goto code_r0x00010147a6e8;
  case (ulong *)0xd3:
    goto code_r0x00010147a760;
  case (ulong *)0xd8:
    goto code_r0x00010147a6cc;
  case (ulong *)0xd9:
    goto code_r0x00010147a604;
  case (ulong *)0xdb:
    goto code_r0x00010147a584;
  case (ulong *)0xdd:
    goto code_r0x00010147a750;
  case (ulong *)0xde:
    goto code_r0x00010147a6b0;
  case (ulong *)0xdf:
    goto code_r0x00010147a7ac;
  case (ulong *)0xe0:
    goto code_r0x00010147a5e8;
  case (ulong *)0xe1:
    goto code_r0x00010147a76c;
  case (ulong *)0xe4:
    goto code_r0x00010147a708;
  case (ulong *)0xeb:
    goto code_r0x00010147a754;
  case (ulong *)0xed:
    goto LAB_10147a814;
  case (ulong *)0xf1:
    goto code_r0x00010147a590;
  case (ulong *)0xf3:
    goto code_r0x00010147a670;
  case (ulong *)0xf5:
    goto code_r0x00010147a870;
  case (ulong *)0xf7:
    goto code_r0x00010147a778;
  case (ulong *)0xf9:
    goto code_r0x00010147a704;
  case (ulong *)0xfb:
    goto LAB_10147a710;
  case (ulong *)0xff:
    goto code_r0x00010147a69c;
  }
code_r0x00010147a71c:
  ppuVar44 = param_4;
  ppuVar37 = (ulong **)0x1;
code_r0x00010147a724:
  func_0x0001087c9084(ppuVar37,ppuVar44);
                    /* WARNING: Does not return */
  pcVar52 = (code *)SoftwareBreakpoint(1,0x10147a72c);
  (*pcVar52)();
}

