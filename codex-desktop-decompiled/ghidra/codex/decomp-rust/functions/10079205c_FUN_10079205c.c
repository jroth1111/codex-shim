
/* WARNING: Type propagation algorithm not settling */

void FUN_10079205c(undefined1 param_1 [16],undefined1 param_2 [16])

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  short sVar7;
  ushort *puVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  undefined1 uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  undefined8 uVar36;
  uint *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  long lVar41;
  uint *puVar42;
  long lVar43;
  byte bVar44;
  int iVar45;
  uint uVar46;
  uint *puVar47;
  uint *puVar48;
  uint *puVar49;
  byte bVar50;
  uint *puVar51;
  uint uVar52;
  uint uVar53;
  uint *puVar54;
  uint *puVar55;
  uint *puVar56;
  ulong uVar57;
  long unaff_x19;
  uint *puVar58;
  uint *unaff_x20;
  uint *puVar59;
  uint *unaff_x21;
  uint *puVar60;
  uint *unaff_x22;
  uint *puVar61;
  uint *unaff_x23;
  uint *unaff_x24;
  uint *puVar62;
  uint *unaff_x25;
  undefined8 *puVar63;
  uint *unaff_x26;
  uint *unaff_x27;
  uint *puVar64;
  uint *unaff_x28;
  long unaff_x29;
  float fVar65;
  uint *puVar66;
  uint *puVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined1 auVar74 [16];
  uint *in_stack_00000008;
  uint *in_stack_00000010;
  uint *in_stack_00000018;
  uint *in_stack_00000020;
  uint *in_stack_00000028;
  uint *in_stack_00000030;
  uint uStack0000000000000038;
  uint uStack000000000000003c;
  uint *in_stack_00000040;
  byte bStack0000000000000048;
  undefined7 uStack0000000000000049;
  byte in_stack_00000050;
  uint7 uStack0000000000000051;
  undefined1 uStack0000000000000058;
  uint3 uStack0000000000000059;
  undefined4 uStack000000000000005c;
  char cStack0000000000000060;
  undefined3 uStack0000000000000061;
  uint uStack0000000000000064;
  byte bStack0000000000000068;
  undefined7 uStack0000000000000069;
  ulong in_stack_00000070;
  uint *in_stack_00000078;
  char cStack0000000000000080;
  undefined7 uStack0000000000000081;
  uint *in_stack_00000088;
  uint *in_stack_00000090;
  uint *in_stack_00000098;
  char cStack00000000000000a0;
  uint *in_stack_000000a8;
  byte bStack00000000000000b0;
  byte bStack00000000000000b1;
  undefined5 uStack00000000000000b2;
  undefined1 uStack00000000000000b7;
  undefined1 uStack00000000000000b8;
  undefined6 uStack00000000000000b9;
  undefined1 uStack00000000000000bf;
  undefined1 uStack00000000000000c0;
  undefined6 uStack00000000000000c1;
  undefined1 uStack00000000000000c7;
  undefined7 uStack00000000000000c8;
  undefined1 uStack00000000000000cf;
  undefined7 uStack00000000000000d0;
  undefined1 uStack00000000000000d7;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  char cStack0000000000000110;
  uint *in_stack_00000118;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  uint *in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  uint in_stack_00000440;
  undefined3 in_stack_00000444;
  ulong in_stack_00000448;
  undefined7 uVar75;
  uint7 uVar76;
  long *in_stack_00000450;
  long *in_stack_00000458;
  long in_stack_00000460;
  
  uVar40 = param_2._8_8_;
  uVar39 = param_2._0_8_;
  uVar36 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
  in_stack_00000050 = (byte)uVar36;
  uStack0000000000000051 = (uint7)((ulong)uVar36 >> 8);
  puVar59 = unaff_x20;
code_r0x00010079207c:
  bStack0000000000000048 = 4;
  lVar43 = ((ulong)(unaff_x19 - (long)unaff_x20) >> 5) + 1;
  while (lVar43 = lVar43 + -1, lVar43 != 0) {
    unaff_x20 = unaff_x20 + 8;
    FUN_100e077ec();
    puVar59 = unaff_x20;
  }
  puVar58 = (uint *)0x0;
  if (*(long *)(unaff_x29 + -0xf0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x100));
  }
LAB_1007920b0:
  uVar46 = (uint)bStack0000000000000048;
  puVar37 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
  if (bStack0000000000000048 == 4) goto LAB_1007941c4;
  _cStack00000000000000a0 = (uint *)CONCAT44(uStack0000000000000064,_cStack0000000000000060);
  puVar67 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
  in_stack_000000a8 = (uint *)CONCAT71(uStack0000000000000069,bStack0000000000000068);
  puVar42 = (uint *)(ulong)(uStack0000000000000051 >> 0x18);
  puVar66 = (uint *)(ulong)(uStack0000000000000051 >> 0x18);
  fVar65 = (float)(uStack0000000000000051 >> 0x18);
  uVar36 = 0;
  puVar51 = (uint *)(ulong)(uStack0000000000000051 >> 8);
  puVar47 = (uint *)(ulong)uStack0000000000000051;
  bVar10 = bStack0000000000000048 != 0;
  uVar52 = (uint)bStack0000000000000048;
  bVar11 = SBORROW4(uVar52,1);
  bVar13 = (int)(uVar52 - 1) < 0;
  bVar15 = uVar52 == 1;
  puVar49 = (uint *)((long)(int7)uStack0000000000000051 >> 0x18);
  sVar7 = (short)(uStack0000000000000051 >> 8);
  bVar50 = (byte)uStack0000000000000051;
  puVar60 = unaff_x21;
  puVar61 = unaff_x22;
  puVar62 = unaff_x24;
  puVar64 = unaff_x27;
  in_stack_00000090 = puVar37;
  in_stack_00000098 = puVar67;
  if (1 < uVar52) {
LAB_100792134:
    bVar10 = 1 < uVar46;
    bVar11 = SBORROW4(uVar46,2);
    bVar13 = (int)(uVar46 - 2) < 0;
    bVar15 = uVar46 == 2;
code_r0x000100792138:
    if (bVar15) {
      puVar55 = (uint *)&UNK_108c9b214;
      puVar56 = (uint *)&UNK_100792158;
      uVar57 = (ulong)*(ushort *)(&UNK_108c9b214 + (ulong)in_stack_00000050 * 2);
code_r0x000100792150:
      puVar54 = (uint *)(ulong)in_stack_00000050;
      uVar46 = (uint)in_stack_00000050;
      uVar52 = (uint)in_stack_00000050;
      puVar56 = puVar56 + uVar57;
      bVar33 = bVar15;
      bVar25 = bVar15;
      bVar44 = in_stack_00000050;
      uVar53 = uVar46;
      switch(puVar56) {
      case (uint *)0x100792158:
        in_stack_000001a8 = *(undefined8 *)(puVar67 + 2);
        in_stack_000001a0 = *(uint **)puVar67;
        in_stack_000001b8 = *(undefined8 *)(puVar67 + 6);
        in_stack_000001b0 = *(undefined8 *)(puVar67 + 4);
        func_0x000107c048a4(unaff_x27,unaff_x29 + -0xb0);
        puVar59 = puVar67;
        goto code_r0x000100793648;
      case (uint *)0x100792184:
        goto code_r0x000100792184;
      case (uint *)0x10079219c:
        goto code_r0x00010079219c;
      case (uint *)0x1007921d8:
        goto code_r0x0001007921d8;
      case (uint *)0x1007921e4:
        goto code_r0x0001007921e4;
      case (uint *)0x100792208:
        bVar15 = (int)puVar58 == 4;
        goto code_r0x00010079220c;
      case (uint *)0x100792270:
        goto code_r0x000100792270;
      case (uint *)0x100792324:
code_r0x000100792324:
        puVar51 = (uint *)((long)in_stack_000000a8 * 0x40);
        unaff_x24 = _cStack00000000000000a0 + (long)in_stack_000000a8 * 0x10;
        unaff_x26 = (uint *)(unaff_x29 + -0x100);
        *(uint **)(unaff_x29 + -0xe0) = _cStack00000000000000a0;
        *(uint **)(unaff_x29 + -0xd8) = _cStack00000000000000a0;
        *(uint **)(unaff_x29 + -0xd0) = puVar67;
        *(uint **)(unaff_x29 + -200) = unaff_x24;
        bVar44 = 0x16;
        puVar47 = _cStack00000000000000a0;
        puVar55 = in_stack_000000a8;
code_r0x000100792344:
        *(byte *)(unaff_x29 + -0x100) = bVar44;
        *(undefined8 *)(unaff_x29 + -0xc0) = 0;
        goto code_r0x00010079234c;
      case (uint *)0x100792358:
code_r0x000100792358:
        puVar54 = (uint *)&stack0x000000b0;
code_r0x00010079235c:
        unaff_x21 = (uint *)((ulong)puVar54 | 1);
        puVar59 = (uint *)((ulong)unaff_x26 | 1);
        puVar51 = puVar51 + -0x10;
        goto code_r0x000100792368;
      case (uint *)0x100792370:
        goto code_r0x000100792370;
      case (uint *)0x100792390:
        goto code_r0x000100792390;
      case (uint *)0x100792404:
        goto code_r0x000100792404;
      case (uint *)0x100792434:
        goto code_r0x000100792434;
      case (uint *)0x100792468:
        goto code_r0x000100792468;
      case (uint *)0x10079247c:
        goto code_r0x00010079247c;
      case (uint *)0x100792490:
        goto code_r0x000100792490;
      case (uint *)0x1007924e0:
        goto code_r0x0001007924e0;
      case (uint *)0x100792540:
        goto code_r0x000100792540;
      case (uint *)0x100792584:
        goto code_r0x000100792584;
      case (uint *)0x10079258c:
        goto code_r0x00010079258c;
      case (uint *)0x1007925a0:
        goto code_r0x0001007925a0;
      case (uint *)0x1007925b8:
        goto code_r0x0001007925b8;
      case (uint *)0x1007925c0:
        goto code_r0x0001007925c0;
      case (uint *)0x1007925cc:
        goto code_r0x0001007925cc;
      case (uint *)0x1007925dc:
        goto code_r0x0001007925dc;
      case (uint *)0x1007925e4:
        goto code_r0x0001007925e4;
      case (uint *)0x1007925ec:
        goto code_r0x0001007925ec;
      case (uint *)0x100792608:
        goto code_r0x000100792608;
      case (uint *)0x100792624:
        goto code_r0x000100792624;
      case (uint *)0x10079262c:
        goto code_r0x00010079262c;
      case (uint *)0x100792648:
        goto code_r0x000100792648;
      case (uint *)0x100792650:
        goto code_r0x000100792650;
      case (uint *)0x100792658:
        goto code_r0x000100792658;
      case (uint *)0x10079266c:
        goto code_r0x00010079266c;
      case (uint *)0x1007926ac:
        goto code_r0x0001007926ac;
      case (uint *)0x1007926c8:
        goto code_r0x0001007926c8;
      case (uint *)0x1007926dc:
        goto code_r0x0001007926dc;
      case (uint *)0x1007926e4:
        goto code_r0x0001007926e4;
      case (uint *)0x100792774:
        goto code_r0x000100792774;
      case (uint *)0x100792800:
        puVar47 = _cStack00000000000000a0;
        puVar54 = puVar67;
        goto code_r0x000100792804;
      case (uint *)0x10079281c:
        goto code_r0x00010079281c;
      case (uint *)0x1007928c0:
        goto code_r0x0001007928c0;
      case (uint *)0x100792b08:
        goto code_r0x000100792b08;
      case (uint *)0x100792b30:
        goto code_r0x000100792b30;
      case (uint *)0x100792b6c:
        goto code_r0x000100792b6c;
      case (uint *)0x100792b94:
        goto code_r0x000100792b94;
      case (uint *)0x100792bb8:
        goto code_r0x000100792bb8;
      case (uint *)0x100792bcc:
        goto code_r0x000100792bcc;
      case (uint *)0x100792c00:
        goto code_r0x000100792c00;
      case (uint *)0x100792c24:
        goto code_r0x000100792c24;
      case (uint *)0x100792c68:
        goto code_r0x000100792c68;
      case (uint *)0x100792cf4:
        goto code_r0x000100792cf4;
      case (uint *)0x100792e74:
        goto code_r0x000100792e74;
      case (uint *)0x100792e9c:
        goto code_r0x000100792e9c;
      case (uint *)0x100793070:
        goto code_r0x000100793070;
      case (uint *)0x100793094:
        goto code_r0x000100793094;
      case (uint *)0x100793350:
        goto code_r0x000100793350;
      case (uint *)0x100793358:
        goto code_r0x000100793358;
      case (uint *)0x100793370:
        goto code_r0x000100793370;
      case (uint *)0x100793384:
        goto code_r0x000100793384;
      case (uint *)0x10079338c:
        goto code_r0x00010079338c;
      case (uint *)0x1007933a4:
        goto code_r0x0001007933a4;
      case (uint *)0x1007933b0:
        goto code_r0x0001007933b0;
      case (uint *)0x1007933b8:
        goto code_r0x0001007933b8;
      case (uint *)0x1007933c0:
        puVar59 = puVar67;
code_r0x0001007933c4:
        uVar36 = *(undefined8 *)(puVar59 + 2);
        puVar66 = *(uint **)puVar59;
      case (uint *)0x1007933c8:
code_r0x0001007933c8:
        puVar47 = (uint *)&stack0x000000b0;
code_r0x0001007933cc:
        *(undefined8 *)(puVar47 + 0x3e) = uVar36;
        *(uint **)(puVar47 + 0x3c) = puVar66;
code_r0x0001007933d0:
        uVar39 = *(undefined8 *)(puVar59 + 4);
        *(undefined8 *)(puVar47 + 0x42) = *(undefined8 *)(puVar59 + 6);
        *(undefined8 *)(puVar47 + 0x40) = uVar39;
code_r0x0001007933d8:
        puVar42 = (uint *)(unaff_x29 + -0xb0);
code_r0x0001007933dc:
        puVar37 = unaff_x27;
code_r0x0001007933e0:
        func_0x000107c05278(puVar37,puVar42);
code_r0x0001007933e4:
        goto code_r0x000100793648;
      case (uint *)0x1007933d0:
        goto code_r0x0001007933d0;
      case (uint *)0x1007933d8:
        goto code_r0x0001007933d8;
      case (uint *)0x1007933e4:
        goto code_r0x0001007933e4;
      case (uint *)0x1007933e8:
        goto code_r0x0001007933e8;
      case (uint *)0x1007933f8:
        goto code_r0x0001007933f8;
      case (uint *)0x100793400:
        goto code_r0x000100793400;
      case (uint *)0x100793410:
        goto code_r0x000100793410;
      case (uint *)0x100793418:
        goto code_r0x000100793418;
      case (uint *)0x100793428:
        goto code_r0x000100793428;
      case (uint *)0x10079344c:
        goto code_r0x00010079344c;
      case (uint *)0x100793460:
        goto code_r0x000100793460;
      case (uint *)0x10079347c:
        goto code_r0x00010079347c;
      case (uint *)0x100793484:
        goto code_r0x000100793484;
      case (uint *)0x10079349c:
        goto code_r0x00010079349c;
      case (uint *)0x1007934ac:
        goto code_r0x0001007934ac;
      case (uint *)0x1007934b8:
code_r0x0001007934b8:
        puVar59 = _cStack00000000000000a0;
        unaff_x25 = puVar67;
code_r0x0001007934bc:
        unaff_x28 = in_stack_000000a8;
        goto code_r0x0001007934c0;
      case (uint *)0x1007934d8:
        goto code_r0x0001007934d8;
      case (uint *)0x1007934dc:
        goto code_r0x0001007934dc;
      case (uint *)0x1007934e0:
        goto code_r0x0001007934e0;
      case (uint *)0x1007934e4:
        goto code_r0x0001007934e4;
      case (uint *)0x1007934ec:
        goto code_r0x0001007934ec;
      case (uint *)0x1007934f0:
        goto code_r0x0001007934f0;
      case (uint *)0x1007934fc:
        goto code_r0x0001007934fc;
      case (uint *)0x100793500:
        goto code_r0x000100793500;
      case (uint *)0x100793504:
        goto code_r0x000100793504;
      case (uint *)0x100793508:
        goto code_r0x000100793508;
      case (uint *)0x100793510:
        goto code_r0x000100793510;
      case (uint *)0x100793514:
        goto code_r0x000100793514;
      case (uint *)0x100793518:
        goto code_r0x000100793518;
      case (uint *)0x100793528:
        goto code_r0x000100793528;
      case (uint *)0x10079352c:
        goto code_r0x00010079352c;
      case (uint *)0x100793534:
        goto code_r0x000100793534;
      case (uint *)0x10079353c:
        goto code_r0x00010079353c;
      case (uint *)0x100793550:
        goto code_r0x000100793550;
      case (uint *)0x100793558:
        goto code_r0x000100793558;
      case (uint *)0x100793560:
        goto code_r0x000100793560;
      case (uint *)0x100793564:
        goto code_r0x000100793564;
      case (uint *)0x100793570:
        goto code_r0x000100793570;
      case (uint *)0x100793574:
        goto code_r0x000100793574;
      case (uint *)0x10079357c:
        goto code_r0x00010079357c;
      case (uint *)0x100793584:
        goto code_r0x000100793584;
      case (uint *)0x100793588:
        goto code_r0x000100793588;
      case (uint *)0x10079358c:
        goto code_r0x00010079358c;
      case (uint *)0x100793594:
        goto code_r0x000100793594;
      case (uint *)0x100793598:
        goto code_r0x000100793598;
      case (uint *)0x10079359c:
        goto code_r0x00010079359c;
      case (uint *)0x1007935a0:
        goto code_r0x0001007935a0;
      case (uint *)0x1007935a8:
        goto code_r0x0001007935a8;
      case (uint *)0x1007935b0:
        goto code_r0x0001007935b0;
      case (uint *)0x1007935b8:
        goto code_r0x0001007935b8;
      case (uint *)0x1007935cc:
        goto code_r0x0001007935cc;
      case (uint *)0x1007935dc:
        goto code_r0x0001007935dc;
      case (uint *)0x1007935ec:
        goto code_r0x0001007935ec;
      case (uint *)0x1007935f0:
        goto code_r0x0001007935f0;
      case (uint *)0x1007935f4:
        goto code_r0x0001007935f4;
      case (uint *)0x100793600:
        goto code_r0x000100793600;
      case (uint *)0x100793608:
        goto code_r0x000100793608;
      case (uint *)0x100793610:
        goto code_r0x000100793610;
      case (uint *)0x100793618:
        goto code_r0x000100793618;
      case (uint *)0x10079361c:
        goto code_r0x00010079361c;
      case (uint *)0x100793620:
        goto code_r0x000100793620;
      case (uint *)0x10079362c:
        goto code_r0x00010079362c;
      case (uint *)0x100793630:
        goto code_r0x000100793630;
      case (uint *)0x100793638:
        goto code_r0x000100793638;
      case (uint *)0x100793648:
        goto code_r0x000100793648;
      case (uint *)0x100793650:
        goto code_r0x000100793650;
      case (uint *)0x100793658:
        goto code_r0x000100793658;
      case (uint *)0x100793664:
        goto code_r0x000100793664;
      case (uint *)0x100793670:
        goto code_r0x000100793670;
      case (uint *)0x100793674:
        goto code_r0x000100793674;
      case (uint *)0x10079367c:
        goto code_r0x00010079367c;
      case (uint *)0x100793684:
        goto code_r0x000100793684;
      case (uint *)0x10079368c:
        goto code_r0x00010079368c;
      case (uint *)0x100793694:
        goto code_r0x000100793694;
      case (uint *)0x10079369c:
        goto code_r0x00010079369c;
      case (uint *)0x1007936a4:
        goto code_r0x0001007936a4;
      case (uint *)0x1007936ac:
        puVar47 = (uint *)0x8;
      case (uint *)0x1007936b0:
        goto code_r0x000100793790;
      case (uint *)0x1007936b4:
        goto code_r0x0001007936b4;
      case (uint *)0x1007936bc:
        goto code_r0x0001007936bc;
      case (uint *)0x1007936c4:
        goto code_r0x0001007936c4;
      case (uint *)0x1007936cc:
code_r0x0001007936cc:
        goto code_r0x0001007936d0;
      case (uint *)0x1007936d4:
        goto code_r0x0001007936d4;
      case (uint *)0x1007936dc:
        goto code_r0x0001007936dc;
      case (uint *)0x1007936e4:
        goto code_r0x0001007936e4;
      case (uint *)0x1007936f0:
        goto code_r0x0001007936f0;
      case (uint *)0x100793700:
        goto code_r0x000100793700;
      case (uint *)0x100793708:
        goto code_r0x000100793708;
      case (uint *)0x100793718:
        goto code_r0x000100793718;
      case (uint *)0x100793720:
        goto code_r0x000100793720;
      case (uint *)0x10079372c:
        goto code_r0x00010079372c;
      case (uint *)0x100793730:
        goto code_r0x000100793730;
      case (uint *)0x100793754:
        goto code_r0x000100793754;
      case (uint *)0x100793e08:
        goto code_r0x000100793e08;
      case (uint *)0x100793e40:
code_r0x000100793e40:
        goto code_r0x000100794158;
      case (uint *)0x100793e44:
        uVar32 = 8;
        goto code_r0x000100794174;
      case (uint *)0x100793e70:
        func_0x000107c04fec(unaff_x27,&stack0x00000098);
      case (uint *)0x100793e80:
        goto code_r0x0001007941dc;
      case (uint *)0x100793e88:
        goto code_r0x000100793e88;
      case (uint *)0x100793ea8:
        goto code_r0x000100793ea8;
      case (uint *)0x100793eb8:
        func_0x000107c0440c(unaff_x27);
        goto code_r0x0001007941dc;
      case (uint *)0x100793ee0:
code_r0x000100793ee0:
        goto code_r0x00010079401c;
      case (uint *)0x100793ee4:
        puVar47 = puVar67;
code_r0x000100794040:
        *(uint **)(unaff_x29 + -0xa8) = puVar47;
code_r0x000100794044:
        uVar32 = 1;
        goto code_r0x000100794174;
      case (uint *)0x100793ef8:
        goto code_r0x000100793ef8;
      case (uint *)0x100793f10:
        goto code_r0x000100793f10;
      case (uint *)0x100793f18:
        goto code_r0x000100793f18;
      case (uint *)0x100793f28:
        goto code_r0x000100793f28;
      case (uint *)0x100793f38:
        goto code_r0x000100793f38;
      case (uint *)0x100793f48:
        goto code_r0x000100793f48;
      case (uint *)0x100793f54:
        puVar67 = (uint *)(double)fVar65;
        goto code_r0x000100794120;
      case (uint *)0x100793f68:
        goto code_r0x000100793f68;
      case (uint *)0x100793f74:
        puVar47 = (uint *)(((ulong)uStack0000000000000051 & 0xffff00) >> 8);
        goto code_r0x000100794040;
      case (uint *)0x100793f98:
        goto code_r0x000100793f98;
      case (uint *)0x100793f9c:
        puVar47 = puVar67;
        puVar51 = _cStack00000000000000a0;
        goto code_r0x000100793fa0;
      case (uint *)0x100793fb8:
        goto code_r0x000100793fb8;
      case (uint *)0x100793fd4:
        *(uint **)(unaff_x29 + -0xa8) = puVar42;
      case (uint *)0x100793fd8:
        goto code_r0x000100794044;
      case (uint *)0x100793ff4:
        break;
      case (uint *)0x100794008:
        goto code_r0x000100794008;
      case (uint *)0x100794018:
code_r0x000100794018:
        puVar47 = (uint *)((ulong)uStack0000000000000051 & 0xff);
code_r0x00010079401c:
        *(uint **)(unaff_x29 + -0xa8) = puVar47;
code_r0x000100794020:
        puVar47 = (uint *)0x1;
code_r0x000100794024:
        goto code_r0x000100794158;
      case (uint *)0x10079401c:
        goto code_r0x00010079401c;
      case (uint *)0x100794028:
        *(byte *)(unaff_x29 + -0xaf) = bVar50;
        *(undefined1 *)(unaff_x29 + -0xb0) = 0;
      case (uint *)0x100794038:
        goto code_r0x0001007941b8;
      case (uint *)0x10079403c:
        puVar47 = (uint *)((ulong)uStack0000000000000051 & 0xff);
        goto code_r0x000100794040;
      case (uint *)0x100794058:
        goto code_r0x000100794058;
      case (uint *)0x100794064:
        goto code_r0x000100794064;
      case (uint *)0x100794088:
        goto code_r0x000100794088;
      case (uint *)0x100794094:
        puVar49 = (uint *)(long)(char)bVar50;
        break;
      case (uint *)0x1007940b8:
        goto code_r0x0001007940b8;
      case (uint *)0x1007940bc:
        puVar47 = puVar67;
        puVar51 = _cStack00000000000000a0;
        goto code_r0x0001007940c0;
      case (uint *)0x1007940d8:
        goto code_r0x0001007940d8;
      case (uint *)0x1007940e8:
        goto code_r0x0001007940e8;
      case (uint *)0x1007940f4:
        puVar47 = (uint *)(long)sVar7;
      case (uint *)0x1007940f8:
        puVar49 = puVar47;
        break;
      case (uint *)0x10079411c:
        goto code_r0x00010079411c;
      case (uint *)0x100794138:
        goto code_r0x000100794138;
      case (uint *)0x100794140:
        goto code_r0x000100794140;
      case (uint *)0x100794158:
        goto code_r0x000100794158;
      case (uint *)0x100794168:
        puVar49 = puVar67;
        break;
      case (uint *)0x100794198:
        goto code_r0x000100794198;
      case (uint *)0x1007941b8:
        goto code_r0x0001007941b8;
      case (uint *)0x1007941f4:
        uVar32 = 7;
        goto code_r0x000100794174;
      case (uint *)0x100794238:
        goto code_r0x000100794238;
      }
      *(uint **)(unaff_x29 + -0xa8) = puVar49;
code_r0x000100794170:
      uVar32 = 2;
code_r0x000100794174:
      *(undefined1 *)(unaff_x29 + -0xb0) = uVar32;
code_r0x00010079417c:
code_r0x000100794180:
      goto code_r0x0001007941b8;
    }
code_r0x0001007921c8:
    puVar56 = (uint *)&UNK_1007921e0;
    uVar57 = (ulong)*(ushort *)(&UNK_108c9b1e8 + (ulong)in_stack_00000050 * 2);
code_r0x0001007921d8:
    puVar54 = (uint *)(ulong)in_stack_00000050;
    uVar46 = (uint)in_stack_00000050;
    bVar44 = in_stack_00000050;
    switch(puVar56 + uVar57) {
    case (uint *)0x1007921e0:
code_r0x0001007921e0:
      puVar59 = puVar67;
code_r0x0001007921e4:
      in_stack_000001a8 = *(undefined8 *)(puVar59 + 2);
      in_stack_000001a0 = *(uint **)puVar59;
      in_stack_000001b8 = *(undefined8 *)(puVar59 + 6);
      in_stack_000001b0 = *(undefined8 *)(puVar59 + 4);
      func_0x000107c048f0(unaff_x27,unaff_x29 + -0xb0);
      goto code_r0x000100793648;
    case (uint *)0x10079220c:
code_r0x00010079220c:
      if (!bVar15) {
        puVar51 = (uint *)&stack0x000000b0;
        in_stack_00000148 = in_stack_000000e8;
        goto code_r0x00010079221c;
      }
      puVar58 = (uint *)0x4;
      in_stack_00000118 = (uint *)0x4;
      *(char **)(unaff_x29 + -0x100) = &stack0x00000110;
      *(undefined **)(unaff_x29 + -0xf8) = &DAT_100c7b3a0;
      _cStack0000000000000110 = puVar59;
      uVar36 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x100);
      in_stack_00000050 = (byte)uVar36;
      uStack0000000000000051 = (uint7)((ulong)uVar36 >> 8);
      bStack0000000000000048 = 4;
      goto LAB_1007922c0;
    case (uint *)0x100792224:
code_r0x000100792224:
      bStack0000000000000048 = (byte)puVar58;
code_r0x000100792228:
      in_stack_00000050 = 0x15;
code_r0x000100792230:
      uVar36 = *(undefined8 *)(puVar51 + 0x26);
      puVar66 = *(uint **)(puVar51 + 0x24);
code_r0x000100792234:
      bStack0000000000000068 = (byte)uVar36;
      uStack0000000000000069 = (undefined7)((ulong)uVar36 >> 8);
      _cStack0000000000000060 = (uint)puVar66;
      uStack0000000000000064 = (uint)((ulong)puVar66 >> 0x20);
      uVar36 = *(undefined8 *)((long)puVar51 + 0x89);
      puVar66 = *(uint **)((long)puVar51 + 0x81);
code_r0x00010079223c:
      uStack0000000000000059 = (uint3)uVar36;
      uStack000000000000005c = (undefined4)((ulong)uVar36 >> 0x18);
      cStack0000000000000060 = (char)((ulong)uVar36 >> 0x38);
      uStack0000000000000051 = (uint7)puVar66;
      uStack0000000000000058 = (undefined1)((ulong)puVar66 >> 0x38);
      uVar36 = CONCAT71(uStack0000000000000051,in_stack_00000050);
      puVar66 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
      uVar40 = CONCAT44(uStack0000000000000064,_cStack0000000000000060);
      uVar39 = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
      puVar47 = (uint *)CONCAT71(uStack0000000000000069,bStack0000000000000068);
code_r0x00010079224c:
      uStack00000000000000d0 = SUB87(puVar47,0);
      uStack00000000000000d7 = (undefined1)((ulong)puVar47 >> 0x38);
      uStack00000000000000b8 = (undefined1)uVar36;
      uStack00000000000000b9 = (undefined6)((ulong)uVar36 >> 8);
      uStack00000000000000bf = (undefined1)((ulong)uVar36 >> 0x38);
      bStack00000000000000b0 = (byte)puVar66;
      bStack00000000000000b1 = (byte)((ulong)puVar66 >> 8);
      uStack00000000000000b2 = (undefined5)((ulong)puVar66 >> 0x10);
      uStack00000000000000b7 = (undefined1)((ulong)puVar66 >> 0x38);
      uStack00000000000000c8 = (undefined7)uVar40;
      uStack00000000000000cf = (undefined1)((ulong)uVar40 >> 0x38);
      uStack00000000000000c0 = (undefined1)uVar39;
      uStack00000000000000c1 = (undefined6)((ulong)uVar39 >> 8);
      uStack00000000000000c7 = (undefined1)((ulong)uVar39 >> 0x38);
      puVar58 = *(uint **)(unaff_x29 + -0x88);
      puVar59 = *(uint **)(unaff_x29 + -0x78);
      puVar37 = unaff_x21 + 8;
    case (uint *)0x100792260:
      FUN_100d34830(puVar37);
      bVar15 = puVar59 == puVar58;
      unaff_x27 = in_stack_00000040;
code_r0x00010079226c:
      if (bVar15) {
code_r0x000100792270:
        puVar59 = (uint *)0x0;
        cVar6 = *(char *)(unaff_x29 + -0xb0);
      }
      else {
        *(long *)(unaff_x29 + -0x100) = *(long *)(unaff_x29 + -0x70);
        puVar59 = (uint *)thunk_FUN_1087e422c(*(long *)(unaff_x29 + -0x70) +
                                              ((ulong)((long)puVar59 - (long)puVar58) >> 6),
                                              unaff_x29 + -0x100,&UNK_10b23a190);
        cVar6 = *(char *)(unaff_x29 + -0xb0);
      }
      if (cVar6 != '\x16') {
        FUN_100e077ec(unaff_x29 + -0xb0);
      }
      if (puVar59 != (uint *)0x0) {
        in_stack_00000050 = (byte)puVar59;
        uStack0000000000000051 = (uint7)((ulong)puVar59 >> 8);
code_r0x000100792290:
        bStack0000000000000048 = 4;
        puVar47 = (uint *)&stack0x000000b0;
code_r0x00010079229c:
        FUN_100e077ec((ulong)puVar47 | 8);
      }
      goto LAB_1007920b0;
    case (uint *)0x10079226c:
      goto code_r0x00010079226c;
    case (uint *)0x100792290:
      goto code_r0x000100792290;
    case (uint *)0x1007922f8:
      goto code_r0x0001007922f8;
    case (uint *)0x1007923ac:
      goto code_r0x0001007923ac;
    case (uint *)0x1007923e0:
      goto code_r0x0001007923e0;
    case (uint *)0x1007923f8:
      goto code_r0x0001007923f8;
    case (uint *)0x100792418:
      goto code_r0x000100792418;
    case (uint *)0x10079248c:
      goto code_r0x00010079248c;
    case (uint *)0x1007924bc:
      goto code_r0x0001007924bc;
    case (uint *)0x1007924f0:
      goto code_r0x0001007924f0;
    case (uint *)0x100792504:
      goto code_r0x000100792504;
    case (uint *)0x100792518:
      goto code_r0x000100792518;
    case (uint *)0x1007925c8:
      goto code_r0x0001007925c8;
    case (uint *)0x10079260c:
      goto code_r0x00010079260c;
    case (uint *)0x100792614:
      goto code_r0x000100792614;
    case (uint *)0x100792628:
      goto code_r0x000100792628;
    case (uint *)0x100792640:
      goto code_r0x000100792640;
    case (uint *)0x100792648:
      goto code_r0x000100792648;
    case (uint *)0x100792654:
      goto code_r0x000100792654;
    case (uint *)0x100792664:
      goto code_r0x000100792664;
    case (uint *)0x10079266c:
      goto code_r0x00010079266c;
    case (uint *)0x100792674:
      goto code_r0x000100792674;
    case (uint *)0x100792690:
      goto code_r0x000100792690;
    case (uint *)0x1007926ac:
      goto code_r0x0001007926ac;
    case (uint *)0x1007926b4:
      goto code_r0x0001007926b4;
    case (uint *)0x1007926d0:
      goto code_r0x0001007926d0;
    case (uint *)0x1007926d8:
      goto code_r0x0001007926d8;
    case (uint *)0x1007926e0:
      goto code_r0x0001007926e0;
    case (uint *)0x1007926f4:
      goto code_r0x0001007926f4;
    case (uint *)0x100792750:
      goto code_r0x000100792750;
    case (uint *)0x100792764:
      goto code_r0x000100792764;
    case (uint *)0x10079276c:
      goto code_r0x00010079276c;
    case (uint *)0x1007927fc:
      goto code_r0x0001007927fc;
    case (uint *)0x100792888:
      goto code_r0x000100792888;
    case (uint *)0x100792948:
      goto code_r0x000100792948;
    case (uint *)0x100792b90:
      goto code_r0x000100792b90;
    case (uint *)0x100792bb8:
      goto code_r0x000100792bb8;
    case (uint *)0x100792c1c:
      goto code_r0x000100792c1c;
    case (uint *)0x100792c40:
      goto code_r0x000100792c40;
    case (uint *)0x100792c54:
      goto code_r0x000100792c54;
    case (uint *)0x100792c88:
      goto code_r0x000100792c88;
    case (uint *)0x100792cac:
      goto code_r0x000100792cac;
    case (uint *)0x100792cf0:
      goto code_r0x000100792cf0;
    case (uint *)0x100792d7c:
code_r0x000100792d7c:
      in_stack_00000018 = (uint *)(((ulong)(puVar51 + -0x10) >> 6) + 1);
      unaff_x22 = (uint *)0x8000000000000000;
      unaff_x25 = (uint *)0x8000000000000001;
      unaff_x27 = puVar47;
      goto code_r0x000100792dbc;
    case (uint *)0x100792efc:
      goto code_r0x000100792efc;
    case (uint *)0x100792f24:
      goto code_r0x000100792f24;
    case (uint *)0x1007930f8:
      goto code_r0x0001007930f8;
    case (uint *)0x10079311c:
      puVar64 = _cStack00000000000000a0 + (long)in_stack_000000a8 * 0x10;
      *(uint **)(unaff_x29 + -0xe0) = _cStack00000000000000a0;
      *(uint **)(unaff_x29 + -0xd8) = _cStack00000000000000a0;
      *(uint **)(unaff_x29 + -0xd0) = puVar67;
      *(uint **)(unaff_x29 + -200) = puVar64;
      *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
      *(undefined8 *)(unaff_x29 + -0xc0) = 0;
      in_stack_00000040 = unaff_x27;
      if (in_stack_000000a8 != (uint *)0x0) {
        unaff_x24 = (uint *)0x0;
        unaff_x28 = (uint *)((ulong)&stack0x000000b0 | 1);
        unaff_x21 = (uint *)(unaff_x29 - 0x100U | 1);
        in_stack_00000030 = (uint *)(((long)in_stack_000000a8 * 0x40 - 0x40U >> 6) + 1);
        unaff_x22 = (uint *)0x8000000000000000;
        unaff_x25 = _cStack00000000000000a0;
        goto code_r0x000100793194;
      }
code_r0x00010079397c:
      bStack0000000000000048 = 0x40;
      uStack0000000000000049 = 0x108cade;
      in_stack_00000050 = 3;
      uStack0000000000000051 = 0;
      bStack00000000000000b0 = (byte)&stack0x00000048;
      bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
      uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
      uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
      uStack00000000000000b8 = 0xa0;
      uStack00000000000000b9 = 0x100c7b3;
      uStack00000000000000bf = 0;
      puVar59 = (uint *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
code_r0x0001007939b4:
      in_stack_00000040[0] = 4;
      in_stack_00000040[1] = 0;
      *(uint **)(in_stack_00000040 + 2) = puVar59;
LAB_1007939bc:
      FUN_100d34830(unaff_x29 + -0xe0);
      goto LAB_1007943e4;
    case (uint *)0x1007933d8:
      goto code_r0x0001007933d8;
    case (uint *)0x1007933e0:
      goto code_r0x0001007933e0;
    case (uint *)0x1007933f8:
      goto code_r0x0001007933f8;
    case (uint *)0x10079340c:
      goto code_r0x00010079340c;
    case (uint *)0x100793410:
code_r0x000100793410:
      puVar59 = puVar67;
    case (uint *)0x100793414:
code_r0x000100793414:
      uVar36 = *(undefined8 *)(puVar59 + 2);
      puVar66 = *(uint **)puVar59;
code_r0x000100793418:
      puVar47 = (uint *)&stack0x000000b0;
code_r0x00010079341c:
      *(undefined8 *)(puVar47 + 0x3e) = uVar36;
      *(uint **)(puVar47 + 0x3c) = puVar66;
code_r0x000100793420:
      uVar39 = *(undefined8 *)(puVar59 + 4);
      *(undefined8 *)(puVar47 + 0x42) = *(undefined8 *)(puVar59 + 6);
      *(undefined8 *)(puVar47 + 0x40) = uVar39;
code_r0x000100793428:
      puVar42 = (uint *)(unaff_x29 + -0xb0);
code_r0x00010079342c:
      puVar37 = unaff_x27;
code_r0x000100793430:
      func_0x000107c055c4(puVar37,puVar42);
      goto code_r0x000100793648;
    case (uint *)0x10079342c:
      goto code_r0x00010079342c;
    case (uint *)0x100793438:
code_r0x000100793438:
      puVar59 = _cStack00000000000000a0;
      unaff_x25 = puVar67;
code_r0x00010079343c:
      unaff_x28 = in_stack_000000a8;
    case (uint *)0x100793440:
      unaff_x26 = puVar59 + (long)unaff_x28 * 8;
code_r0x000100793444:
      *(uint **)(unaff_x29 + -0x100) = puVar59;
      *(uint **)(unaff_x29 + -0xf8) = puVar59;
code_r0x000100793448:
      *(uint **)(unaff_x29 + -0xf0) = unaff_x25;
      *(uint **)(unaff_x29 + -0xe8) = unaff_x26;
code_r0x00010079344c:
      *(undefined8 *)(unaff_x29 + -0xe0) = 0;
code_r0x000100793450:
      unaff_x21 = puVar59;
code_r0x000100793454:
      if (unaff_x28 != (uint *)0x0) {
code_r0x000100793458:
        puVar60 = puVar59;
code_r0x00010079345c:
        unaff_x21 = puVar60 + 8;
        puVar47 = (uint *)(ulong)(byte)*puVar60;
code_r0x000100793460:
        *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
        if ((int)puVar47 == 0x16) goto code_r0x00010079346c;
        uVar36 = *(undefined8 *)((long)puVar59 + 9);
        puVar66 = *(uint **)((long)puVar59 + 1);
code_r0x0001007937dc:
        uStack00000000000000b9 = (undefined6)uVar36;
        uStack00000000000000bf = (undefined1)((ulong)uVar36 >> 0x30);
        bStack00000000000000b1 = (byte)puVar66;
        uStack00000000000000b2 = (undefined5)((ulong)puVar66 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)puVar66 >> 0x30);
        uStack00000000000000b8 = (undefined1)((ulong)puVar66 >> 0x38);
        uVar39 = *(undefined8 *)(puVar59 + 4);
        uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 6);
        uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 6) >> 0x38);
        uStack00000000000000c0 = (undefined1)uVar39;
        uStack00000000000000c1 = (undefined6)((ulong)uVar39 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)uVar39 >> 0x38);
        *(undefined8 *)(unaff_x29 + -0xe0) = 1;
        bStack00000000000000b0 = (byte)puVar47;
        FUN_1004b62d4(&stack0x00000048,&stack0x000000b0);
        lVar43 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        unaff_x22 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
        if (lVar43 == -0x8000000000000000) goto code_r0x000100793488;
        if (unaff_x28 == (uint *)0x1) {
code_r0x000100793cb4:
          uVar40 = thunk_FUN_1087e422c(1,&UNK_10b22e368,&UNK_10b20a590);
code_r0x000100793cd0:
          unaff_x27[0] = 4;
          unaff_x27[1] = 0;
          *(undefined8 *)(unaff_x27 + 2) = uVar40;
code_r0x000100793cd8:
          if (lVar43 != 0) {
            _free(unaff_x22);
          }
          goto code_r0x000100793490;
        }
        uVar39 = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
        unaff_x21 = puVar59 + 0x10;
        *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
        uVar46 = puVar59[8];
        if ((byte)uVar46 == 0x16) goto code_r0x000100793cb4;
        uVar40 = *(undefined8 *)((long)puVar59 + 0x21);
        uStack00000000000000b9 = (undefined6)*(undefined8 *)((long)puVar59 + 0x29);
        uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)((long)puVar59 + 0x29) >> 0x30);
        bStack00000000000000b1 = (byte)uVar40;
        uStack00000000000000b2 = (undefined5)((ulong)uVar40 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)uVar40 >> 0x30);
        uStack00000000000000b8 = (undefined1)((ulong)uVar40 >> 0x38);
        uVar40 = *(undefined8 *)(puVar59 + 0xc);
        uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 0xe);
        uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 0xe) >> 0x38);
        uStack00000000000000c0 = (undefined1)uVar40;
        uStack00000000000000c1 = (undefined6)((ulong)uVar40 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)uVar40 >> 0x38);
        *(undefined8 *)(unaff_x29 + -0xe0) = 2;
        bStack00000000000000b0 = (byte)uVar46;
        FUN_1004b62d4(&stack0x00000048,&stack0x000000b0);
        lVar41 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
        if (lVar41 == -0x8000000000000000) goto code_r0x000100793cd0;
        if (unaff_x28 == (uint *)0x2) {
code_r0x00010079453c:
          uVar38 = thunk_FUN_1087e422c(2,&UNK_10b22e368,&UNK_10b20a590);
code_r0x000100794554:
          unaff_x27[0] = 4;
          unaff_x27[1] = 0;
          *(undefined8 *)(unaff_x27 + 2) = uVar38;
          if (lVar41 != 0) {
            _free(uVar40);
          }
          goto code_r0x000100793cd8;
        }
        uVar36 = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
        unaff_x21 = puVar59 + 0x18;
        *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
        uVar46 = puVar59[0x10];
        if ((byte)uVar46 == 0x16) goto code_r0x00010079453c;
        uVar38 = *(undefined8 *)((long)puVar59 + 0x41);
        uStack00000000000000b9 = (undefined6)*(undefined8 *)((long)puVar59 + 0x49);
        uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)((long)puVar59 + 0x49) >> 0x30);
        bStack00000000000000b1 = (byte)uVar38;
        uStack00000000000000b2 = (undefined5)((ulong)uVar38 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)uVar38 >> 0x30);
        uStack00000000000000b8 = (undefined1)((ulong)uVar38 >> 0x38);
        uVar38 = *(undefined8 *)(puVar59 + 0x14);
        uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 0x16);
        uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 0x16) >> 0x38);
        uStack00000000000000c0 = (undefined1)uVar38;
        uStack00000000000000c1 = (undefined6)((ulong)uVar38 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)uVar38 >> 0x38);
        *(undefined8 *)(unaff_x29 + -0xe0) = 3;
        bStack00000000000000b0 = (byte)uVar46;
        FUN_1004b64d4(&stack0x00000048,&stack0x000000b0);
        uVar38 = CONCAT71(uStack0000000000000051,in_stack_00000050);
        if (CONCAT71(uStack0000000000000049,bStack0000000000000048) == -0x8000000000000000)
        goto code_r0x000100794554;
        unaff_x27[0] = 0;
        unaff_x27[1] = 0;
        *(long *)(unaff_x27 + 2) = lVar43;
        *(uint **)(unaff_x27 + 4) = unaff_x22;
        *(undefined8 *)(unaff_x27 + 6) = uVar39;
        *(long *)(unaff_x27 + 8) = lVar41;
        *(undefined8 *)(unaff_x27 + 10) = uVar40;
        *(undefined8 *)(unaff_x27 + 0xc) = uVar36;
        *(long *)(unaff_x27 + 0xe) = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        *(undefined8 *)(unaff_x27 + 0x10) = uVar38;
        *(ulong *)(unaff_x27 + 0x12) = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
        in_stack_000001c8 = *(undefined8 *)(unaff_x27 + 10);
        in_stack_000001c0 = *(undefined8 *)(unaff_x27 + 8);
        in_stack_000001d8 = *(undefined8 *)(unaff_x27 + 0xe);
        in_stack_000001d0 = *(undefined8 *)(unaff_x27 + 0xc);
        in_stack_000001e8 = *(undefined8 *)(unaff_x27 + 0x12);
        in_stack_000001e0 = *(undefined8 *)(unaff_x27 + 0x10);
        in_stack_000001a8 = *(undefined8 *)(unaff_x27 + 2);
        in_stack_000001a0 = *(uint **)unaff_x27;
        in_stack_000001b8 = *(undefined8 *)(unaff_x27 + 6);
        in_stack_000001b0 = *(undefined8 *)(unaff_x27 + 4);
        lVar43 = FUN_100fbc738(unaff_x29 + -0x100);
        goto code_r0x0001007946f4;
      }
code_r0x00010079346c:
      puVar42 = (uint *)&UNK_10b22e000;
code_r0x000100793470:
      puVar42 = puVar42 + 0xda;
code_r0x00010079347c:
      puVar37 = (uint *)0x0;
code_r0x000100793480:
      puVar37 = (uint *)thunk_FUN_1087e422c(puVar37,puVar42);
code_r0x000100793484:
      unaff_x22 = puVar37;
code_r0x000100793488:
      puVar47 = (uint *)0x4;
code_r0x00010079348c:
      *(uint **)unaff_x27 = puVar47;
      *(uint **)(unaff_x27 + 2) = unaff_x22;
code_r0x000100793490:
      puVar47 = (uint *)((long)unaff_x26 - (long)unaff_x21);
code_r0x000100793494:
      puVar47 = (uint *)((ulong)puVar47 >> 5);
code_r0x000100793498:
      unaff_x22 = (uint *)((long)puVar47 + 1);
code_r0x00010079349c:
      while( true ) {
        unaff_x22 = (uint *)((long)unaff_x22 + -1);
        bVar15 = unaff_x22 == (uint *)0x0;
code_r0x0001007934a0:
        if (bVar15) break;
code_r0x0001007934a4:
        puVar37 = unaff_x21;
        puVar58 = puVar37 + 8;
code_r0x0001007934ac:
        FUN_100e077ec(puVar37);
code_r0x0001007934b0:
        unaff_x21 = puVar58;
code_r0x0001007934b4:
      }
      goto code_r0x000100793538;
    case (uint *)0x100793448:
      goto code_r0x000100793448;
    case (uint *)0x100793450:
      goto code_r0x000100793450;
    case (uint *)0x100793458:
      goto code_r0x000100793458;
    case (uint *)0x100793460:
      goto code_r0x000100793460;
    case (uint *)0x10079346c:
      goto code_r0x00010079346c;
    case (uint *)0x100793470:
      goto code_r0x000100793470;
    case (uint *)0x100793480:
      goto code_r0x000100793480;
    case (uint *)0x100793488:
      goto code_r0x000100793488;
    case (uint *)0x100793498:
      goto code_r0x000100793498;
    case (uint *)0x1007934a0:
      goto code_r0x0001007934a0;
    case (uint *)0x1007934b0:
      goto code_r0x0001007934b0;
    case (uint *)0x1007934d4:
      goto code_r0x0001007934d4;
    case (uint *)0x1007934e8:
      goto code_r0x0001007934e8;
    case (uint *)0x10079350c:
      goto code_r0x00010079350c;
    case (uint *)0x100793524:
      goto code_r0x000100793524;
    case (uint *)0x100793534:
      goto code_r0x000100793534;
    case (uint *)0x100793540:
code_r0x000100793540:
      puVar59 = _cStack00000000000000a0;
      unaff_x24 = puVar67;
code_r0x000100793544:
      unaff_x26 = in_stack_000000a8;
code_r0x000100793548:
      unaff_x25 = puVar59 + (long)unaff_x26 * 8;
code_r0x00010079354c:
      *(uint **)(unaff_x29 + -0x100) = puVar59;
      *(uint **)(unaff_x29 + -0xf8) = puVar59;
code_r0x000100793550:
      *(uint **)(unaff_x29 + -0xf0) = unaff_x24;
      *(uint **)(unaff_x29 + -0xe8) = unaff_x25;
code_r0x000100793554:
      *(undefined8 *)(unaff_x29 + -0xe0) = 0;
code_r0x000100793558:
      unaff_x21 = puVar59;
code_r0x00010079355c:
      if (unaff_x26 != (uint *)0x0) goto code_r0x000100793560;
    case (uint *)0x100793574:
code_r0x000100793574:
      puVar42 = (uint *)&UNK_10b22e000;
code_r0x000100793578:
      puVar42 = puVar42 + 0xe2;
code_r0x00010079357c:
code_r0x000100793580:
code_r0x000100793584:
      puVar37 = (uint *)0x0;
code_r0x000100793588:
      puVar37 = (uint *)thunk_FUN_1087e422c(puVar37,puVar42);
code_r0x00010079358c:
      unaff_x22 = puVar37;
code_r0x000100793590:
      puVar47 = (uint *)0x4;
code_r0x000100793594:
      *(uint **)unaff_x27 = puVar47;
      *(uint **)(unaff_x27 + 2) = unaff_x22;
code_r0x000100793598:
      puVar47 = (uint *)((long)unaff_x25 - (long)unaff_x21);
code_r0x00010079359c:
      puVar47 = (uint *)((ulong)puVar47 >> 5);
code_r0x0001007935a0:
      unaff_x22 = (uint *)((long)puVar47 + 1);
code_r0x0001007935a4:
      while( true ) {
        unaff_x22 = (uint *)((long)unaff_x22 + -1);
        bVar15 = unaff_x22 == (uint *)0x0;
code_r0x0001007935a8:
        if (bVar15) break;
        puVar58 = unaff_x21 + 8;
code_r0x0001007935b0:
        puVar37 = unaff_x21;
code_r0x0001007935b4:
        FUN_100e077ec(puVar37);
code_r0x0001007935b8:
        unaff_x21 = puVar58;
code_r0x0001007935bc:
      }
      if (unaff_x24 == (uint *)0x0) {
code_r0x000100793640:
        goto code_r0x0001007941dc;
      }
      goto code_r0x000100793648;
    case (uint *)0x100793560:
code_r0x000100793560:
      puVar60 = puVar59;
    case (uint *)0x100793564:
code_r0x000100793564:
      unaff_x21 = puVar60 + 8;
      puVar47 = (uint *)(ulong)(byte)*puVar60;
      *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
code_r0x00010079356c:
      bVar15 = (int)puVar47 == 0x16;
code_r0x000100793570:
      if (bVar15) goto code_r0x000100793574;
      uVar39 = *(undefined8 *)((long)puVar59 + 1);
      uStack00000000000000b9 = (undefined6)*(undefined8 *)((long)puVar59 + 9);
      uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)((long)puVar59 + 9) >> 0x30);
      bStack00000000000000b1 = (byte)uVar39;
      uStack00000000000000b2 = (undefined5)((ulong)uVar39 >> 8);
      uStack00000000000000b7 = (undefined1)((ulong)uVar39 >> 0x30);
      uStack00000000000000b8 = (undefined1)((ulong)uVar39 >> 0x38);
      uVar39 = *(undefined8 *)(puVar59 + 4);
      uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 6);
      uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 6) >> 0x38);
      uStack00000000000000c0 = (undefined1)uVar39;
      uStack00000000000000c1 = (undefined6)((ulong)uVar39 >> 8);
      uStack00000000000000c7 = (undefined1)((ulong)uVar39 >> 0x38);
      *(undefined8 *)(unaff_x29 + -0xe0) = 1;
      bStack00000000000000b0 = (byte)puVar47;
      FUN_1004b62d4(&stack0x00000048,&stack0x000000b0);
      lVar43 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
      unaff_x22 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
      if (lVar43 == -0x8000000000000000) goto code_r0x000100793590;
      if (unaff_x26 == (uint *)0x1) {
code_r0x0001007938b8:
        uVar40 = thunk_FUN_1087e422c(1,&UNK_10b22e388,&UNK_10b20a590);
      }
      else {
        uVar39 = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
        unaff_x21 = puVar59 + 0x10;
        *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
        uVar46 = puVar59[8];
        if ((byte)uVar46 == 0x16) goto code_r0x0001007938b8;
        uVar40 = *(undefined8 *)((long)puVar59 + 0x21);
        uStack00000000000000b9 = (undefined6)*(undefined8 *)((long)puVar59 + 0x29);
        uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)((long)puVar59 + 0x29) >> 0x30);
        bStack00000000000000b1 = (byte)uVar40;
        uStack00000000000000b2 = (undefined5)((ulong)uVar40 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)uVar40 >> 0x30);
        uStack00000000000000b8 = (undefined1)((ulong)uVar40 >> 0x38);
        uVar40 = *(undefined8 *)(puVar59 + 0xc);
        uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 0xe);
        uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 0xe) >> 0x38);
        uStack00000000000000c0 = (undefined1)uVar40;
        uStack00000000000000c1 = (undefined6)((ulong)uVar40 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)uVar40 >> 0x38);
        *(undefined8 *)(unaff_x29 + -0xe0) = 2;
        bStack00000000000000b0 = (byte)uVar46;
        FUN_1004b60cc(&stack0x00000048,&stack0x000000b0);
        uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
        if (CONCAT71(uStack0000000000000049,bStack0000000000000048) != -0x7fffffffffffffff) {
          unaff_x27[0] = 1;
          unaff_x27[1] = 0;
          *(long *)(unaff_x27 + 2) = CONCAT71(uStack0000000000000049,bStack0000000000000048);
          *(undefined8 *)(unaff_x27 + 4) = uVar40;
          *(ulong *)(unaff_x27 + 6) = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
          *(long *)(unaff_x27 + 8) = lVar43;
          *(uint **)(unaff_x27 + 10) = unaff_x22;
          *(undefined8 *)(unaff_x27 + 0xc) = uVar39;
          in_stack_000001d8 = *(undefined8 *)(unaff_x27 + 0xe);
          in_stack_000001d0 = *(undefined8 *)(unaff_x27 + 0xc);
          in_stack_000001e8 = *(undefined8 *)(unaff_x27 + 0x12);
          in_stack_000001e0 = *(undefined8 *)(unaff_x27 + 0x10);
          in_stack_000001b8 = *(undefined8 *)(unaff_x27 + 6);
          in_stack_000001b0 = *(undefined8 *)(unaff_x27 + 4);
          in_stack_000001c8 = *(undefined8 *)(unaff_x27 + 10);
          in_stack_000001c0 = *(undefined8 *)(unaff_x27 + 8);
          in_stack_000001a8 = *(undefined8 *)(unaff_x27 + 2);
          in_stack_000001a0 = *(uint **)unaff_x27;
          lVar43 = FUN_100fbc738(unaff_x29 + -0x100);
          in_stack_00000040 = unaff_x27;
          goto code_r0x000100793ac8;
        }
      }
      unaff_x27[0] = 4;
      unaff_x27[1] = 0;
      *(undefined8 *)(unaff_x27 + 2) = uVar40;
      if (lVar43 != 0) {
        _free(unaff_x22);
      }
      goto code_r0x000100793598;
    case (uint *)0x10079356c:
      goto code_r0x00010079356c;
    case (uint *)0x100793584:
      goto code_r0x000100793584;
    case (uint *)0x100793588:
      goto code_r0x000100793588;
    case (uint *)0x100793590:
      goto code_r0x000100793590;
    case (uint *)0x100793598:
      goto code_r0x000100793598;
    case (uint *)0x10079359c:
      goto code_r0x00010079359c;
    case (uint *)0x1007935a0:
      goto code_r0x0001007935a0;
    case (uint *)0x1007935b0:
      goto code_r0x0001007935b0;
    case (uint *)0x1007935b4:
      goto code_r0x0001007935b4;
    case (uint *)0x1007935c0:
code_r0x0001007935c0:
      puVar59 = _cStack00000000000000a0;
      unaff_x22 = puVar67;
    case (uint *)0x1007935c4:
code_r0x0001007935c4:
      puVar47 = in_stack_000000a8;
code_r0x0001007935c8:
      puVar58 = puVar59 + (long)puVar47 * 8;
code_r0x0001007935cc:
      *(uint **)(unaff_x29 + -0x100) = puVar59;
      *(uint **)(unaff_x29 + -0xf8) = puVar59;
code_r0x0001007935d0:
      *(uint **)(unaff_x29 + -0xf0) = unaff_x22;
      *(uint **)(unaff_x29 + -0xe8) = puVar58;
code_r0x0001007935d4:
      *(undefined8 *)(unaff_x29 + -0xe0) = 0;
code_r0x0001007935d8:
      unaff_x21 = puVar59;
code_r0x0001007935dc:
      if (puVar47 == (uint *)0x0) {
code_r0x0001007935f4:
        puVar42 = (uint *)&UNK_10b22e000;
code_r0x0001007935f8:
        puVar42 = puVar42 + 0xe6;
code_r0x0001007935fc:
code_r0x000100793600:
code_r0x000100793604:
        puVar37 = (uint *)0x0;
code_r0x000100793608:
        puVar37 = (uint *)thunk_FUN_1087e422c(puVar37,puVar42);
      }
      else {
code_r0x0001007935e0:
        puVar60 = puVar59;
code_r0x0001007935e4:
        unaff_x21 = puVar60 + 8;
        puVar47 = (uint *)(ulong)(byte)*puVar60;
code_r0x0001007935e8:
        *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
code_r0x0001007935ec:
        bVar15 = (int)puVar47 == 0x16;
code_r0x0001007935f0:
        if (bVar15) goto code_r0x0001007935f4;
        uVar39 = *(undefined8 *)((long)puVar59 + 1);
        uStack00000000000000b9 = (undefined6)*(undefined8 *)((long)puVar59 + 9);
        uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)((long)puVar59 + 9) >> 0x30);
        bStack00000000000000b1 = (byte)uVar39;
        uStack00000000000000b2 = (undefined5)((ulong)uVar39 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)uVar39 >> 0x30);
        uStack00000000000000b8 = (undefined1)((ulong)uVar39 >> 0x38);
        uVar39 = *(undefined8 *)(puVar59 + 4);
        uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 6);
        uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 6) >> 0x38);
        uStack00000000000000c0 = (undefined1)uVar39;
        uStack00000000000000c1 = (undefined6)((ulong)uVar39 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)uVar39 >> 0x38);
        *(undefined8 *)(unaff_x29 + -0xe0) = 1;
        bStack00000000000000b0 = (byte)puVar47;
        FUN_1004b62d4(&stack0x00000048,&stack0x000000b0);
        puVar37 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
        if (CONCAT71(uStack0000000000000049,bStack0000000000000048) != -0x8000000000000000) {
          unaff_x27[0] = 3;
          unaff_x27[1] = 0;
          *(long *)(unaff_x27 + 2) = CONCAT71(uStack0000000000000049,bStack0000000000000048);
          *(uint **)(unaff_x27 + 4) = puVar37;
          *(ulong *)(unaff_x27 + 6) = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
          in_stack_000001c8 = *(undefined8 *)(unaff_x27 + 10);
          in_stack_000001c0 = *(undefined8 *)(unaff_x27 + 8);
          in_stack_000001d8 = *(undefined8 *)(unaff_x27 + 0xe);
          in_stack_000001d0 = *(undefined8 *)(unaff_x27 + 0xc);
          in_stack_000001e8 = *(undefined8 *)(unaff_x27 + 0x12);
          in_stack_000001e0 = *(undefined8 *)(unaff_x27 + 0x10);
          in_stack_000001a8 = *(undefined8 *)(unaff_x27 + 2);
          in_stack_000001a0 = *(uint **)unaff_x27;
          in_stack_000001b8 = *(undefined8 *)(unaff_x27 + 6);
          in_stack_000001b0 = *(undefined8 *)(unaff_x27 + 4);
          lVar43 = FUN_100fbc738(unaff_x29 + -0x100);
          in_stack_00000040 = unaff_x27;
          goto code_r0x000100793ac8;
        }
      }
code_r0x00010079360c:
      puVar47 = (uint *)0x4;
code_r0x000100793610:
      *(uint **)unaff_x27 = puVar47;
      *(uint **)(unaff_x27 + 2) = puVar37;
code_r0x000100793614:
      puVar47 = (uint *)((long)puVar58 - (long)unaff_x21);
code_r0x000100793618:
      puVar47 = (uint *)((ulong)puVar47 >> 5);
code_r0x00010079361c:
      unaff_x24 = (uint *)((long)puVar47 + 1);
      goto code_r0x000100793620;
    case (uint *)0x1007935d8:
      goto code_r0x0001007935d8;
    case (uint *)0x1007935e0:
      goto code_r0x0001007935e0;
    case (uint *)0x1007935e8:
      goto code_r0x0001007935e8;
    case (uint *)0x1007935ec:
      goto code_r0x0001007935ec;
    case (uint *)0x1007935f8:
      goto code_r0x0001007935f8;
    case (uint *)0x1007935fc:
      goto code_r0x0001007935fc;
    case (uint *)0x10079360c:
      goto code_r0x00010079360c;
    case (uint *)0x100793610:
      goto code_r0x000100793610;
    case (uint *)0x100793614:
      goto code_r0x000100793614;
    case (uint *)0x10079361c:
      goto code_r0x00010079361c;
    case (uint *)0x100793620:
      goto code_r0x000100793620;
    case (uint *)0x100793624:
      goto code_r0x000100793624;
    case (uint *)0x100793628:
      goto code_r0x000100793628;
    case (uint *)0x100793630:
      goto code_r0x000100793630;
    case (uint *)0x100793638:
      goto code_r0x000100793638;
    case (uint *)0x100793640:
      goto code_r0x000100793640;
    case (uint *)0x100793654:
code_r0x000100793654:
      puVar51 = (uint *)&stack0x000000b0;
code_r0x000100793658:
      uVar40 = *(undefined8 *)(puVar51 + 0x1a);
      uVar39 = *(undefined8 *)(puVar51 + 0x18);
      uVar36 = *(undefined8 *)(puVar51 + 0x1e);
      puVar66 = *(uint **)(puVar51 + 0x1c);
code_r0x00010079365c:
      uStack00000000000000cf = (undefined1)uVar36;
      uStack00000000000000d0 = (undefined7)((ulong)uVar36 >> 8);
      uStack00000000000000c7 = SUB81(puVar66,0);
      uStack00000000000000c8 = (undefined7)((ulong)puVar66 >> 8);
code_r0x000100793660:
      uStack00000000000000bf = (undefined1)uVar40;
      uStack00000000000000c0 = (undefined1)((ulong)uVar40 >> 8);
      uStack00000000000000c1 = (undefined6)((ulong)uVar40 >> 0x10);
      uStack00000000000000b7 = (undefined1)uVar39;
      uStack00000000000000b8 = (undefined1)((ulong)uVar39 >> 8);
      uStack00000000000000b9 = (undefined6)((ulong)uVar39 >> 0x10);
code_r0x000100793664:
      bStack0000000000000048 = (byte)puVar58;
code_r0x000100793668:
      uVar40 = CONCAT17(uStack00000000000000bf,
                        CONCAT61(uStack00000000000000b9,uStack00000000000000b8));
      uVar39 = CONCAT17(uStack00000000000000b7,
                        CONCAT52(uStack00000000000000b2,
                                 CONCAT11(bStack00000000000000b1,bStack00000000000000b0)));
      uStack0000000000000061 = (undefined3)uStack00000000000000c8;
      uStack0000000000000064 = (uint)((uint7)uStack00000000000000c8 >> 0x18);
      uStack0000000000000059 = (uint3)CONCAT61(uStack00000000000000c1,uStack00000000000000c0);
      _uStack0000000000000058 = (uint)uStack0000000000000059 << 8;
      uStack000000000000005c = (undefined4)((uint6)uStack00000000000000c1 >> 0x10);
      _cStack0000000000000060 = CONCAT31(uStack0000000000000061,uStack00000000000000c7);
code_r0x000100793670:
      uStack0000000000000051 = (uint7)uVar40;
      uStack0000000000000058 = (undefined1)((ulong)uVar40 >> 0x38);
      uStack0000000000000049 = (undefined7)uVar39;
      in_stack_00000050 = (byte)((ulong)uVar39 >> 0x38);
code_r0x000100793674:
      puVar47 = *(uint **)((long)puVar51 + 0x1f);
code_r0x000100793678:
      bStack0000000000000068 = (byte)puVar47;
      uStack0000000000000069 = (undefined7)((ulong)puVar47 >> 8);
code_r0x00010079367c:
      uVar36 = CONCAT71(uStack0000000000000051,in_stack_00000050);
      puVar66 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x000100793680:
      uVar40 = CONCAT44(uStack0000000000000064,_cStack0000000000000060);
      uVar39 = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
code_r0x000100793684:
      *(uint **)(unaff_x29 + -0x90) = puVar47;
code_r0x000100793688:
      *(undefined8 *)(puVar51 + 0x3e) = uVar36;
      *(uint **)(puVar51 + 0x3c) = puVar66;
      *(undefined8 *)(puVar51 + 0x42) = uVar40;
      *(undefined8 *)(puVar51 + 0x40) = uVar39;
code_r0x00010079368c:
      puVar37 = (uint *)(unaff_x29 + -0x100);
code_r0x000100793690:
      puVar37 = (uint *)FUN_100fbc738(puVar37);
code_r0x000100793694:
      if (puVar37 != (uint *)0x0) {
code_r0x000100793698:
        in_stack_00000050 = (byte)puVar37;
        uStack0000000000000051 = (uint7)((ulong)puVar37 >> 8);
code_r0x00010079369c:
        puVar47 = (uint *)0x4;
code_r0x0001007936a0:
        bStack0000000000000048 = (byte)puVar47;
code_r0x0001007936a4:
        puVar47 = (uint *)(unaff_x29 + -0xb0);
code_r0x0001007936a8:
        goto code_r0x00010079229c;
      }
      goto LAB_1007920b0;
    case (uint *)0x100793664:
      goto code_r0x000100793664;
    case (uint *)0x100793674:
      goto code_r0x000100793674;
    case (uint *)0x100793678:
      goto code_r0x000100793678;
    case (uint *)0x10079367c:
      goto code_r0x00010079367c;
    case (uint *)0x100793688:
      goto code_r0x000100793688;
    case (uint *)0x100793690:
      goto code_r0x000100793690;
    case (uint *)0x100793698:
      goto code_r0x000100793698;
    case (uint *)0x1007936a0:
      goto code_r0x0001007936a0;
    case (uint *)0x1007936a4:
      goto code_r0x0001007936a4;
    case (uint *)0x1007936a8:
      goto code_r0x0001007936a8;
    case (uint *)0x1007936b4:
code_r0x0001007936b4:
      puVar37 = (uint *)&stack0x00000048;
    case (uint *)0x1007936b8:
code_r0x0001007936b8:
      puVar47 = puVar42;
code_r0x0001007936bc:
      puVar42 = (uint *)&stack0x00000070;
code_r0x0001007936c0:
code_r0x0001007936c4:
      func_0x000107c04f50(puVar47,puVar37,puVar42);
code_r0x0001007936c8:
      goto LAB_1007920b0;
    case (uint *)0x1007936c0:
      goto code_r0x0001007936c0;
    case (uint *)0x1007936d0:
code_r0x0001007936d0:
      puVar37 = (uint *)&stack0x00000048;
code_r0x0001007936d4:
      puVar42 = (uint *)&stack0x00000070;
    case (uint *)0x1007936d8:
code_r0x0001007936d8:
      func_0x000107c04234(puVar37,puVar42);
code_r0x0001007936dc:
      goto LAB_1007920b0;
    case (uint *)0x1007936e0:
code_r0x0001007936e0:
      puVar47 = *(uint **)(puVar42 + 2);
code_r0x0001007936e4:
code_r0x000100793748:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
code_r0x00010079374c:
      puVar47 = (uint *)0x1;
      goto code_r0x000100793790;
    case (uint *)0x1007936ec:
code_r0x0001007936ec:
      puVar47 = puVar42;
code_r0x0001007936f0:
      puVar42 = (uint *)&stack0x00000070;
code_r0x0001007936f4:
code_r0x0001007936f8:
      func_0x000107c04b7c(puVar47,puVar37,puVar42);
code_r0x0001007936fc:
      goto LAB_1007920b0;
    case (uint *)0x1007936f8:
      goto code_r0x0001007936f8;
    case (uint *)0x1007936fc:
      goto code_r0x0001007936fc;
    case (uint *)0x100793704:
code_r0x000100793704:
      puVar66 = (uint *)(double)fVar65;
code_r0x000100793708:
code_r0x000100793778:
      *(uint **)(unaff_x29 + -0xa8) = puVar66;
      puVar47 = (uint *)0x3;
code_r0x000100793790:
      *(char *)(unaff_x29 + -0xb0) = (char)puVar47;
code_r0x000100793798:
      puVar37 = (uint *)(unaff_x29 + -0xb0);
code_r0x0001007937a0:
      puVar42 = (uint *)&stack0x00000070;
      goto code_r0x0001007941c0;
    case (uint *)0x100793714:
      puVar47 = *(uint **)(puVar42 + 2);
      puVar51 = *(uint **)(puVar42 + 4);
code_r0x000100793718:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      *(uint **)(unaff_x29 + -0xa0) = puVar51;
    case (uint *)0x10079371c:
      puVar47 = (uint *)0x6;
code_r0x000100793720:
      goto code_r0x000100793790;
    case (uint *)0x100793724:
      puVar47 = (uint *)(ulong)puVar42[1];
code_r0x000100793728:
      goto code_r0x000100793748;
    case (uint *)0x10079372c:
code_r0x00010079372c:
      puVar47 = (uint *)(long)(int)puVar42[1];
code_r0x000100793730:
code_r0x000100793788:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      puVar47 = (uint *)0x2;
      goto code_r0x000100793790;
    case (uint *)0x100793734:
code_r0x000100793734:
      puVar47 = (uint *)(ulong)*(byte *)((long)puVar42 + 1);
    case (uint *)0x100793738:
      *(char *)(unaff_x29 + -0xaf) = (char)puVar47;
code_r0x00010079373c:
      *(undefined1 *)(unaff_x29 + -0xb0) = 0;
      goto code_r0x000100793798;
    case (uint *)0x10079373c:
      goto code_r0x00010079373c;
    case (uint *)0x100793744:
code_r0x000100793744:
      puVar47 = (uint *)(ulong)*(byte *)((long)puVar42 + 1);
      goto code_r0x000100793748;
    case (uint *)0x10079374c:
      goto code_r0x00010079374c;
    case (uint *)0x100793754:
code_r0x000100793754:
      puVar47 = (uint *)(long)*(char *)((long)puVar42 + 1);
      goto code_r0x000100793788;
    case (uint *)0x10079375c:
code_r0x00010079375c:
      uVar39 = *(undefined8 *)(puVar42 + 4);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(puVar42 + 2);
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar39;
    case (uint *)0x100793764:
code_r0x000100793764:
      puVar47 = (uint *)0x5;
      goto code_r0x000100793790;
    case (uint *)0x10079376c:
      puVar47 = (uint *)(long)*(short *)((long)puVar42 + 2);
code_r0x000100793770:
      goto code_r0x000100793788;
    case (uint *)0x100793778:
      goto code_r0x000100793778;
    case (uint *)0x100793788:
      goto code_r0x000100793788;
    case (uint *)0x100793790:
      goto code_r0x000100793790;
    case (uint *)0x1007937a0:
      goto code_r0x0001007937a0;
    case (uint *)0x1007937a8:
      puVar47 = (uint *)0x7;
      goto code_r0x000100793790;
    case (uint *)0x1007937b4:
code_r0x0001007937b4:
      unaff_x23 = (uint *)0x8000000000000000;
code_r0x0001007937b8:
      in_stack_00000028 = unaff_x28;
      goto code_r0x000100793b08;
    case (uint *)0x1007937b8:
      goto code_r0x0001007937b8;
    case (uint *)0x1007937dc:
      goto code_r0x0001007937dc;
    case (uint *)0x100793e54:
      uVar32 = 8;
      break;
    case (uint *)0x100793e90:
code_r0x000100793e90:
      func_0x000107c04f88(puVar37,puVar42);
      goto code_r0x0001007941dc;
    case (uint *)0x100793e98:
      func_0x000107c050b4(unaff_x27,&stack0x00000098);
code_r0x000100793ea8:
      goto code_r0x0001007941dc;
    case (uint *)0x100793ec8:
code_r0x000100793ec8:
      func_0x000107c04478(puVar37);
code_r0x000100793ecc:
      goto code_r0x0001007941dc;
    case (uint *)0x100793ecc:
      goto code_r0x000100793ecc;
    case (uint *)0x100793ed0:
      func_0x000107c045a8(unaff_x27);
      goto code_r0x0001007941dc;
    case (uint *)0x100793ef4:
      puVar47 = puVar67;
    case (uint *)0x100793ef8:
code_r0x000100793ef8:
code_r0x000100794080:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
code_r0x000100794084:
      puVar47 = (uint *)0x1;
code_r0x000100794088:
      uVar32 = SUB81(puVar47,0);
      break;
    case (uint *)0x100793f08:
code_r0x000100793f08:
      func_0x000107c04cdc(puVar37,puVar42);
      goto code_r0x0001007941dc;
    case (uint *)0x100793f10:
code_r0x000100793f10:
      puVar42 = (uint *)&stack0x00000098;
code_r0x000100793f18:
      func_0x000107c04c4c(unaff_x27,puVar42);
      goto code_r0x0001007941dc;
    case (uint *)0x100793f30:
code_r0x000100793f30:
      func_0x000107c04cf4(puVar37,puVar42);
      goto code_r0x0001007941dc;
    case (uint *)0x100793f38:
code_r0x000100793f38:
      puVar47 = (uint *)&stack0x00000090;
code_r0x000100793f3c:
      puVar42 = puVar47 + 2;
    case (uint *)0x100793f40:
      func_0x000107c04d00(unaff_x27,puVar42);
code_r0x000100793f48:
      goto code_r0x0001007941dc;
    case (uint *)0x100793f64:
      puVar66 = (uint *)(double)fVar65;
    case (uint *)0x100793f68:
code_r0x000100793f68:
code_r0x000100794140:
      *(uint **)(unaff_x29 + -0xa8) = puVar66;
code_r0x000100794144:
      uVar32 = 3;
      break;
    case (uint *)0x100793f6c:
code_r0x000100793f6c:
      puVar47 = (uint *)(((ulong)uStack0000000000000051 & 0xffff00) >> 8);
      goto code_r0x00010079401c;
    case (uint *)0x100793f80:
code_r0x000100793f80:
      goto code_r0x000100794064;
    case (uint *)0x100793f84:
      puVar47 = (uint *)(((ulong)uStack0000000000000051 & 0xffff00) >> 8);
      goto code_r0x000100794080;
    case (uint *)0x100793f98:
code_r0x000100793f98:
      goto code_r0x000100794158;
    case (uint *)0x100793fa0:
code_r0x000100793fa0:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      *(uint **)(unaff_x29 + -0xa0) = puVar51;
      uVar32 = 6;
      goto code_r0x000100794174;
    case (uint *)0x100793fb0:
code_r0x000100793fb0:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      *(uint **)(unaff_x29 + -0xa0) = puVar51;
      puVar47 = (uint *)0x6;
code_r0x000100793fb8:
      uVar32 = SUB81(puVar47,0);
      goto code_r0x000100794190;
    case (uint *)0x100793fbc:
      puVar47 = puVar67;
      puVar51 = _cStack00000000000000a0;
    case (uint *)0x100793fc0:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      *(uint **)(unaff_x29 + -0xa0) = puVar51;
      uVar32 = 6;
      break;
    case (uint *)0x100793fd0:
code_r0x000100793fd0:
      goto code_r0x000100794020;
    case (uint *)0x100793fdc:
code_r0x000100793fdc:
      *(uint **)(unaff_x29 + -0xa8) = puVar42;
      goto code_r0x000100794068;
    case (uint *)0x100793fe4:
      *(uint **)(unaff_x29 + -0xa8) = puVar42;
      goto code_r0x000100794084;
    case (uint *)0x100793ff0:
code_r0x000100793ff0:
      goto code_r0x000100794150;
    case (uint *)0x100793ffc:
code_r0x000100793ffc:
      goto code_r0x000100794188;
    case (uint *)0x100794004:
      puVar47 = puVar49;
code_r0x000100794008:
      goto code_r0x0001007941a4;
    case (uint *)0x100794020:
      goto code_r0x000100794020;
    case (uint *)0x100794024:
      goto code_r0x000100794024;
    case (uint *)0x100794040:
      goto code_r0x000100794040;
    case (uint *)0x10079405c:
      goto code_r0x00010079405c;
    case (uint *)0x100794060:
code_r0x000100794060:
      puVar47 = (uint *)((ulong)uStack0000000000000051 & 0xff);
code_r0x000100794064:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
code_r0x000100794068:
      uVar32 = 1;
      goto code_r0x000100794190;
    case (uint *)0x100794070:
      *(byte *)(unaff_x29 + -0xaf) = bVar50;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0;
      goto code_r0x0001007941b8;
    case (uint *)0x10079407c:
code_r0x00010079407c:
      puVar47 = (uint *)((ulong)uStack0000000000000051 & 0xff);
      goto code_r0x000100794080;
    case (uint *)0x100794090:
code_r0x000100794090:
      goto code_r0x000100794150;
    case (uint *)0x1007940a0:
code_r0x0001007940a0:
      puVar49 = puVar47;
code_r0x000100794188:
      *(uint **)(unaff_x29 + -0xa8) = puVar49;
      uVar32 = 2;
      goto code_r0x000100794190;
    case (uint *)0x1007940a4:
      puVar47 = (uint *)(long)(char)bVar50;
code_r0x0001007940a8:
    case (uint *)0x1007941a4:
code_r0x0001007941a4:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      uVar32 = 2;
      break;
    case (uint *)0x1007940b0:
code_r0x0001007940b0:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      *(uint **)(unaff_x29 + -0xa0) = puVar51;
      puVar47 = (uint *)0x5;
code_r0x0001007940b8:
      goto code_r0x000100794158;
    case (uint *)0x1007940c0:
code_r0x0001007940c0:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      *(uint **)(unaff_x29 + -0xa0) = puVar51;
code_r0x0001007940c4:
      uVar32 = 5;
      goto code_r0x000100794174;
    case (uint *)0x1007940c4:
      goto code_r0x0001007940c4;
    case (uint *)0x1007940dc:
      puVar47 = puVar67;
      puVar51 = _cStack00000000000000a0;
    case (uint *)0x1007940e0:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      *(uint **)(unaff_x29 + -0xa0) = puVar51;
      puVar47 = (uint *)0x5;
code_r0x0001007940e8:
      uVar32 = SUB81(puVar47,0);
      break;
    case (uint *)0x1007940ec:
code_r0x0001007940ec:
      puVar47 = (uint *)(long)sVar7;
code_r0x000100794150:
      *(uint **)(unaff_x29 + -0xa8) = puVar47;
      puVar47 = (uint *)0x2;
code_r0x000100794158:
      *(char *)(unaff_x29 + -0xb0) = (char)puVar47;
code_r0x000100794160:
      goto code_r0x0001007941b8;
    case (uint *)0x100794104:
      puVar47 = (uint *)(long)sVar7;
      goto code_r0x0001007941a4;
    case (uint *)0x100794110:
      goto code_r0x000100794110;
    case (uint *)0x10079411c:
code_r0x00010079411c:
code_r0x000100794120:
      *(uint **)(unaff_x29 + -0xa8) = puVar67;
      uVar32 = 3;
      goto code_r0x000100794174;
    case (uint *)0x10079413c:
code_r0x00010079413c:
      puVar66 = puVar67;
    case (uint *)0x100794140:
      goto code_r0x000100794140;
    case (uint *)0x100794144:
      goto code_r0x000100794144;
    case (uint *)0x100794160:
      goto code_r0x000100794160;
    case (uint *)0x100794170:
      goto code_r0x000100794170;
    case (uint *)0x10079417c:
      goto code_r0x00010079417c;
    case (uint *)0x100794180:
      goto code_r0x000100794180;
    case (uint *)0x1007941a0:
      puVar47 = puVar67;
      goto code_r0x0001007941a4;
    case (uint *)0x1007941c0:
      goto code_r0x0001007941c0;
    case (uint *)0x1007941c8:
      goto code_r0x0001007941c8;
    case (uint *)0x1007941e0:
      goto code_r0x0001007941e0;
    case (uint *)0x1007941f0:
code_r0x0001007941f0:
      goto code_r0x000100794158;
    case (uint *)0x100794204:
      uVar32 = 7;
      break;
    case (uint *)0x100794220:
      goto code_r0x000100794220;
    case (uint *)0x100794240:
      goto code_r0x000100794240;
    case (uint *)0x10079427c:
      goto code_r0x00010079427c;
    case (uint *)0x1007942c0:
      goto code_r0x0001007942c0;
    }
    *(undefined1 *)(unaff_x29 + -0xb0) = uVar32;
code_r0x0001007941b8:
    puVar37 = (uint *)(unaff_x29 + -0xb0);
    puVar42 = (uint *)&stack0x00000048;
code_r0x0001007941c0:
    puVar37 = (uint *)FUN_107c05dcc(puVar37,puVar42);
LAB_1007941c4:
    puVar47 = (uint *)0x4;
code_r0x0001007941c8:
    *(uint **)unaff_x27 = puVar47;
    *(uint **)(unaff_x27 + 2) = puVar37;
    goto code_r0x0001007941dc;
  }
  if (uVar52 == 0) {
    puVar54 = (uint *)(ulong)in_stack_00000050;
    uVar46 = (uint)in_stack_00000050;
    puVar55 = (uint *)&UNK_108c9b26c;
    uVar57 = (ulong)*(ushort *)(&UNK_108c9b26c + (long)puVar54 * 2);
    puVar56 = (uint *)(&UNK_10079210c + uVar57 * 4);
    bVar12 = false;
    bVar34 = false;
    bVar35 = false;
    bVar30 = false;
    bVar20 = false;
    bVar18 = false;
    bVar31 = false;
    bVar26 = false;
    bVar16 = false;
    bVar29 = false;
    bVar28 = false;
    bVar27 = false;
    bVar24 = false;
    bVar23 = false;
    bVar22 = false;
    bVar21 = false;
    bVar19 = false;
    bVar17 = false;
    bVar14 = true;
    bVar33 = false;
    bVar25 = false;
    bVar44 = in_stack_00000050;
    switch(in_stack_00000050) {
    case 0:
      *(byte *)(unaff_x29 + -0xaf) = bVar50;
      *(undefined1 *)(unaff_x29 + -0xb0) = 0;
      goto code_r0x000100794160;
    case 1:
      goto code_r0x000100794018;
    case 2:
      goto code_r0x000100793f6c;
    case 3:
      *(uint **)(unaff_x29 + -0xa8) = puVar42;
      goto code_r0x000100793fd0;
    case 4:
      puVar47 = puVar67;
      goto code_r0x000100793ee0;
    case 5:
      puVar47 = (uint *)(long)(char)bVar50;
      goto code_r0x000100794090;
    case 6:
      goto code_r0x0001007940ec;
    case 7:
      puVar47 = puVar49;
      goto code_r0x000100793ff0;
    case 8:
      puVar47 = puVar67;
      goto code_r0x000100794150;
    case 9:
      puVar66 = (uint *)(double)fVar65;
      goto code_r0x000100794110;
    case 10:
      puVar66 = puVar67;
code_r0x000100794110:
      *(uint **)(unaff_x29 + -0xa8) = puVar66;
      puVar47 = (uint *)0x3;
      goto code_r0x000100794158;
    case 0xb:
      func_0x000107c043d4(unaff_x27);
      goto code_r0x0001007941dc;
    case 0xc:
      puVar42 = (uint *)&stack0x00000098;
      puVar37 = unaff_x27;
      goto code_r0x000100793f08;
    case 0xd:
      puVar47 = puVar67;
      puVar51 = _cStack00000000000000a0;
      goto code_r0x0001007940b0;
    case 0xe:
      func_0x000107c05010(unaff_x27,&stack0x00000098);
      goto code_r0x0001007941dc;
    case 0xf:
      goto code_r0x000100793f8c;
    case 0x10:
      puVar47 = (uint *)0x8;
      goto code_r0x000100793e40;
    default:
      in_stack_000001a8 = *(undefined8 *)(puVar67 + 2);
      in_stack_000001a0 = *(uint **)puVar67;
      in_stack_000001b8 = *(undefined8 *)(puVar67 + 6);
      in_stack_000001b0 = *(undefined8 *)(puVar67 + 4);
      func_0x000107c0497c(unaff_x27,unaff_x29 + -0xb0);
      puVar59 = puVar67;
      goto code_r0x000100793648;
    case 0x12:
      puVar47 = (uint *)0x7;
      goto code_r0x0001007941f0;
    case 0x13:
      puVar59 = puVar67;
    case 0x7a:
code_r0x00010079339c:
      uVar36 = *(undefined8 *)(puVar59 + 2);
      puVar66 = *(uint **)puVar59;
      puVar47 = (uint *)&stack0x000000b0;
code_r0x0001007933a4:
      *(undefined8 *)(puVar47 + 0x3e) = uVar36;
      *(uint **)(puVar47 + 0x3c) = puVar66;
      uVar36 = *(undefined8 *)(puVar59 + 6);
      puVar66 = *(uint **)(puVar59 + 4);
code_r0x0001007933ac:
      *(undefined8 *)(puVar47 + 0x42) = uVar36;
      *(uint **)(puVar47 + 0x40) = puVar66;
code_r0x0001007933b0:
      puVar42 = (uint *)(unaff_x29 + -0xb0);
code_r0x0001007933b4:
      puVar37 = unaff_x27;
code_r0x0001007933b8:
      func_0x000107c05294(puVar37,puVar42);
      goto code_r0x000100793648;
    case 0x14:
      goto code_r0x000100793438;
    case 0x15:
      goto code_r0x000100792324;
    case 0x17:
      goto code_r0x0001007924f4;
    case 0x18:
      goto code_r0x00010079230c;
    case 0x19:
      goto code_r0x0001007923b8;
    case 0x1a:
      goto code_r0x000100792198;
    case 0x1b:
      goto code_r0x000100792580;
    case 0x1c:
      goto code_r0x00010079260c;
    case 0x1d:
      goto code_r0x000100792444;
    case 0x1e:
      goto code_r0x000100792728;
    case 0x1f:
      goto code_r0x000100792224;
    case 0x20:
      goto code_r0x000100792698;
    case 0x21:
      goto code_r0x0001007925a0;
    case 0x22:
      goto code_r0x0001007925bc;
    case 0x23:
      goto code_r0x00010079256c;
    case 0x24:
      goto code_r0x000100792590;
    case 0x25:
      goto code_r0x000100792538;
    case 0x26:
      goto code_r0x0001007925d8;
    case 0x27:
      goto code_r0x0001007925fc;
    case 0x28:
      goto code_r0x000100792598;
    case 0x29:
      goto code_r0x000100792620;
    case 0x2a:
      goto code_r0x000100792554;
    case 0x2b:
      goto code_r0x000100792604;
    case 0x2c:
      goto code_r0x000100792430;
    case 0x2d:
      goto code_r0x000100792540;
    case 0x2e:
      goto code_r0x0001007925e0;
    case 0x2f:
      goto code_r0x00010079241c;
    case 0x30:
      goto code_r0x000100792574;
    case 0x31:
    case 0x32:
    case 0xda:
      goto code_r0x0001007923e8;
    case 0x33:
      goto code_r0x00010079267c;
    case 0x34:
      goto code_r0x000100792690;
    case 0x36:
      goto code_r0x000100792150;
    case 0x37:
      goto code_r0x000100793698;
    case 0x38:
    case 0xa1:
      goto code_r0x0001007936a4;
    case 0x39:
      goto code_r0x000100793660;
    case 0x3a:
      goto code_r0x000100793688;
    case 0x3b:
      goto code_r0x0001007935a4;
    case 0x3c:
      goto code_r0x0001007936b4;
    case 0x3d:
      goto code_r0x0001007936cc;
    case 0x3e:
      goto code_r0x000100793690;
    case 0x3f:
      goto code_r0x0001007936e4;
    case 0x40:
    case 0x4e:
      goto code_r0x0001007935e0;
    case 0x41:
      goto code_r0x0001007936d4;
    case 0x42:
    case 0x59:
    case 0xbb:
      goto code_r0x000100793540;
    case 0x43:
    case 0x66:
      goto code_r0x0001007935b4;
    case 0x44:
    case 0x75:
      goto code_r0x0001007936bc;
    case 0x45:
      goto code_r0x0001007934a0;
    case 0x46:
    case 0x6d:
      goto code_r0x000100793670;
    case 0x47:
      goto code_r0x00010079348c;
    case 0x49:
      goto code_r0x000100793708;
    case 0x4a:
      goto code_r0x000100793024;
    case 0x4b:
      goto code_r0x000100793048;
    case 0x4c:
      goto code_r0x000100792c1c;
    case 0x4d:
      goto code_r0x0001007935cc;
    case 0x4f:
      goto code_r0x000100793580;
    case 0x50:
    case 0xc0:
      goto code_r0x0001007935a0;
    case 0x51:
    case 0xc2:
      goto code_r0x000100793538;
    case 0x52:
    case 0x68:
      goto code_r0x000100793624;
    case 0x53:
      goto code_r0x000100793650;
    case 0x54:
    case 99:
    case 0xb2:
      goto code_r0x0001007935c4;
    case 0x55:
      goto code_r0x000100793678;
    case 0x56:
      goto code_r0x00010079355c;
    case 0x57:
    case 0x69:
      goto code_r0x000100793668;
    case 0x58:
      goto code_r0x00010079350c;
    case 0x5a:
    case 0x95:
      goto code_r0x000100793640;
    case 0x5b:
      goto code_r0x0001007934dc;
    case 0x5c:
      goto code_r0x000100793590;
    case 0x5d:
      goto code_r0x0001007934cc;
    case 0x5f:
      goto code_r0x0001007936e0;
    case 0x60:
    case 0xcf:
      goto code_r0x000100792b48;
    case 0x61:
      goto code_r0x000100792b6c;
    case 0x62:
      goto code_r0x000100792344;
    case 100:
      goto code_r0x0001007935d0;
    case 0x65:
    case 0xbc:
      goto code_r0x00010079354c;
    case 0x67:
    case 0x93:
      goto code_r0x000100793518;
    case 0x6a:
      goto code_r0x0001007935bc;
    case 0x6b:
      goto code_r0x000100793680;
    case 0x6c:
      goto code_r0x00010079353c;
    case 0x6e:
      goto code_r0x0001007934f0;
    case 0x6f:
    case 0x9b:
      goto code_r0x000100793528;
    case 0x70:
    case 0x97:
      goto code_r0x000100793658;
    case 0x71:
    case 0x9a:
      goto code_r0x0001007934b4;
    case 0x72:
      goto code_r0x00010079356c;
    case 0x73:
      goto code_r0x000100793498;
    case 0x76:
      goto code_r0x000100792bb4;
    case 0x77:
      goto code_r0x000100792bd8;
    case 0x78:
      goto code_r0x000100792874;
    case 0x79:
      goto code_r0x00010079338c;
    case 0x7b:
      goto code_r0x000100793364;
    case 0x7c:
      goto code_r0x00010079337c;
    case 0x7d:
      goto code_r0x000100793338;
    case 0x7e:
      goto code_r0x0001007933ac;
    case 0x7f:
      goto code_r0x0001007933c4;
    case 0x80:
      goto code_r0x000100793384;
    case 0x81:
      goto code_r0x0001007933dc;
    case 0x82:
      goto code_r0x000100793358;
    case 0x83:
      goto code_r0x0001007933cc;
    case 0x84:
      goto code_r0x000100793324;
    case 0x85:
      goto code_r0x000100793340;
    case 0x86:
      goto code_r0x0001007933b4;
    case 0x87:
      goto code_r0x00010079330c;
    case 0x88:
      goto code_r0x00010079336c;
    case 0x89:
      goto code_r0x000100793304;
    case 0x8b:
    case 0x9f:
      goto code_r0x000100793400;
    case 0x8c:
      goto code_r0x00010079218c;
    case 0x8d:
      goto code_r0x0001007921bc;
    case 0x8e:
      goto code_r0x000100792138;
    case 0x8f:
      goto code_r0x00010079360c;
    case 0x90:
      goto code_r0x000100793618;
    case 0x91:
    case 0xab:
    case 200:
      goto code_r0x0001007935d4;
    case 0x92:
    case 0xad:
    case 0xc3:
      goto code_r0x0001007935fc;
    case 0x94:
      goto code_r0x000100793628;
    case 0x96:
      goto code_r0x000100793604;
    case 0x98:
      goto code_r0x000100793554;
    case 0x99:
      goto code_r0x000100793648;
    case 0x9c:
      goto code_r0x000100793630;
    case 0x9d:
    case 0xcb:
      goto code_r0x000100793414;
    case 0x9e:
    case 0xc1:
      goto code_r0x0001007935e4;
    case 0xa2:
      goto code_r0x000100792e28;
    case 0xa3:
      goto code_r0x000100792e50;
    case 0xa4:
      goto code_r0x000100792b80;
    case 0xa5:
      goto code_r0x000100793550;
    case 0xa6:
      goto code_r0x000100793564;
    case 0xa7:
      goto code_r0x000100793504;
    case 0xa8:
      goto code_r0x000100793524;
    case 0xa9:
      goto code_r0x0001007934bc;
    case 0xaa:
      goto code_r0x0001007935a8;
    case 0xac:
      goto code_r0x000100793548;
    case 0xae:
      goto code_r0x0001007934e0;
    case 0xaf:
    case 0xc5:
      goto code_r0x0001007935ec;
    case 0xb0:
      goto code_r0x000100793490;
    case 0xb1:
      goto code_r0x0001007934c4;
    case 0xb3:
      goto code_r0x000100793460;
    case 0xb4:
      goto code_r0x000100793514;
    case 0xb5:
      goto code_r0x000100793450;
    case 0xb7:
      goto code_r0x000100793664;
    case 0xb8:
      goto code_r0x000100792abc;
    case 0xb9:
      goto code_r0x000100792ae4;
    case 0xba:
      goto code_r0x0001007922d8;
    case 0xbd:
      goto code_r0x0001007934c8;
    case 0xbe:
      goto code_r0x000100793530;
    case 0xbf:
      goto code_r0x000100793494;
    case 0xc4:
      goto code_r0x0001007934b8;
    case 0xc6:
      goto code_r0x00010079346c;
    case 199:
      goto code_r0x0001007934a4;
    case 0xc9:
    case 0xff:
      goto code_r0x000100793430;
    case 0xca:
      goto code_r0x0001007934e8;
    case 0xcd:
      goto code_r0x000100793638;
    case 0xce:
      goto code_r0x000100792b20;
    case 0xd0:
      goto code_r0x0001007927d0;
    case 0xd2:
      goto code_r0x000100792660;
    case 0xd3:
      goto code_r0x000100792494;
    case 0xd4:
      goto code_r0x000100792520;
    case 0xd5:
      goto code_r0x0001007922bc;
    case 0xd6:
      goto code_r0x00010079271c;
    case 0xd7:
      goto code_r0x000100792844;
    case 0xd8:
      goto code_r0x0001007925c0;
    case 0xd9:
      goto code_r0x000100792984;
    case 0xdb:
      goto code_r0x0001007928e4;
    case 0xdc:
      goto code_r0x000100792230;
    case 0xdd:
      goto code_r0x00010079235c;
    case 0xde:
      goto code_r0x0001007927a8;
    case 0xdf:
      goto code_r0x0001007921a4;
    case 0xe0:
      goto code_r0x000100792764;
    case 0xe1:
      goto code_r0x000100792774;
    case 0xe2:
      goto code_r0x00010079273c;
    case 0xe3:
      goto code_r0x000100792754;
    case 0xe4:
      goto code_r0x000100792710;
    case 0xe5:
      goto code_r0x000100792784;
    case 0xe6:
      goto code_r0x00010079279c;
    case 0xe7:
      goto code_r0x00010079275c;
    case 0xe8:
      goto code_r0x0001007927b4;
    case 0xe9:
      goto code_r0x000100792730;
    case 0xea:
      goto code_r0x0001007927a4;
    case 0xeb:
      goto code_r0x0001007926fc;
    case 0xec:
      goto code_r0x000100792718;
    case 0xed:
      goto code_r0x00010079278c;
    case 0xee:
      goto code_r0x0001007926e4;
    case 0xef:
      goto code_r0x000100792744;
    case 0xf0:
      goto code_r0x0001007926dc;
    case 0xf2:
      goto code_r0x000100792804;
    case 0xf3:
      goto code_r0x000100792188;
    case 0xf4:
      goto code_r0x0001007921b4;
    case 0xf5:
      goto LAB_100792134;
    case 0xf6:
      goto code_r0x0001007b210c;
    case 0xf7:
      FUN_105dc99f8(&stack0x00000060,8);
      in_stack_000000a8 = (uint *)0x8000000000000000;
      if (CONCAT44(uStack0000000000000064,_cStack0000000000000060) == -0x7fffffffffffffff) {
code_r0x0001007b0364:
        puVar58[0] = 5;
        puVar58[1] = 0x80000000;
        *(ulong *)(puVar58 + 2) = CONCAT71(uStack0000000000000069,bStack0000000000000068);
        return;
      }
      *(uint **)(unaff_x29 + -0x68) = in_stack_00000088;
      *(undefined8 *)(unaff_x29 + -0x70) = _cStack0000000000000080;
      *(uint **)(unaff_x29 + -0x58) = in_stack_00000098;
      *(uint **)(unaff_x29 + -0x60) = in_stack_00000090;
      *(undefined8 *)(unaff_x29 + -0x48) = 0x8000000000000000;
      *(uint **)(unaff_x29 + -0x50) = _cStack00000000000000a0;
      *(ulong *)(unaff_x29 + -0x38) =
           CONCAT17(uStack00000000000000bf,CONCAT61(uStack00000000000000b9,uStack00000000000000b8));
      *(ulong *)(unaff_x29 + -0x40) =
           CONCAT17(uStack00000000000000b7,
                    CONCAT52(uStack00000000000000b2,
                             CONCAT11(bStack00000000000000b1,bStack00000000000000b0)));
      *(ulong *)(unaff_x29 + -0x88) = CONCAT71(uStack0000000000000069,bStack0000000000000068);
      *(ulong *)(unaff_x29 + -0x90) = CONCAT44(uStack0000000000000064,_cStack0000000000000060);
      *(uint **)(unaff_x29 + -0x78) = in_stack_00000078;
      *(ulong *)(unaff_x29 + -0x80) = in_stack_00000070;
      lVar43 = func_0x000101483e28(unaff_x29 + -0x90,*(undefined8 *)(unaff_x21 + 8),
                                   *(undefined8 *)(unaff_x21 + 10),*(undefined8 *)(unaff_x21 + 0xc),
                                   *(undefined8 *)(unaff_x21 + 0xe));
      if (lVar43 != 0) {
        bStack0000000000000068 = (byte)lVar43;
        uStack0000000000000069 = (undefined7)((ulong)lVar43 >> 8);
        FUN_100e040f0(unaff_x29 + -0x90);
        goto code_r0x0001007b0364;
      }
      uVar36 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar39 = *(undefined8 *)(unaff_x29 + -0x70);
      uVar71 = *(undefined8 *)(unaff_x29 + -0x58);
      uVar68 = *(undefined8 *)(unaff_x29 + -0x60);
      in_stack_000000a8 = *(uint **)(unaff_x29 + -0x48);
      uVar40 = *(undefined8 *)(unaff_x29 + -0x50);
      uVar72 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar69 = *(undefined8 *)(unaff_x29 + -0x40);
      uStack00000000000000b8 = (undefined1)uVar72;
      uStack00000000000000b9 = (undefined6)((ulong)uVar72 >> 8);
      uStack00000000000000bf = (undefined1)((ulong)uVar72 >> 0x38);
      bStack00000000000000b0 = (byte)uVar69;
      bStack00000000000000b1 = (byte)((ulong)uVar69 >> 8);
      uStack00000000000000b2 = (undefined5)((ulong)uVar69 >> 0x10);
      uStack00000000000000b7 = (undefined1)((ulong)uVar69 >> 0x38);
      uVar38 = *(undefined8 *)(unaff_x29 + -0x88);
      lVar43 = *(long *)(unaff_x29 + -0x90);
      uVar73 = *(undefined8 *)(unaff_x29 + -0x78);
      uVar70 = *(undefined8 *)(unaff_x29 + -0x80);
      bStack0000000000000068 = (byte)uVar38;
      uStack0000000000000069 = (undefined7)((ulong)uVar38 >> 8);
      _cStack0000000000000060 = (uint)lVar43;
      uStack0000000000000064 = (uint)((ulong)lVar43 >> 0x20);
      if (lVar43 == -0x7fffffffffffffff) goto code_r0x0001007b0364;
      bStack0000000000000048 = (byte)in_stack_000000a8;
      uStack0000000000000049 = (undefined7)((ulong)in_stack_000000a8 >> 8);
      _uStack0000000000000058 = (uint)uVar72;
      uStack000000000000005c = (undefined4)((ulong)uVar72 >> 0x20);
      uStack0000000000000051 = (uint7)((ulong)uVar69 >> 8);
      in_stack_00000050 = bStack00000000000000b0;
      in_stack_00000070 = uVar70;
      in_stack_00000078 = (uint *)uVar73;
      _cStack0000000000000080 = uVar39;
      in_stack_00000088 = (uint *)uVar36;
      in_stack_00000090 = (uint *)uVar68;
      in_stack_00000098 = (uint *)uVar71;
      _cStack00000000000000a0 = (uint *)uVar40;
      if (lVar43 != -0x8000000000000000) {
        lVar41 = FUN_10063fe00();
        if (lVar41 != 0) goto code_r0x0001007b03f0;
        if (lVar43 != -0x8000000000000000) {
          lVar41 = FUN_10063fe00();
          if (lVar41 != 0) goto code_r0x0001007b03f0;
          if (lVar43 != -0x8000000000000000) {
            lVar41 = FUN_10063fe00();
            if (lVar41 != 0) goto code_r0x0001007b03f0;
            if (lVar43 != -0x8000000000000000) {
              lVar41 = FUN_10063fe00();
              if ((((lVar41 == 0) && (lVar41 = FUN_10147b154(), lVar41 == 0)) &&
                  (lVar41 = func_0x000101485390(), lVar41 == 0)) &&
                 (lVar41 = func_0x00010146d2a4(), lVar41 == 0)) {
                *(undefined8 *)(unaff_x29 + -0x68) = uVar36;
                *(undefined8 *)(unaff_x29 + -0x70) = uVar39;
                *(undefined8 *)(unaff_x29 + -0x58) = uVar71;
                *(undefined8 *)(unaff_x29 + -0x60) = uVar68;
                *(ulong *)(unaff_x29 + -0x48) =
                     CONCAT71(uStack0000000000000049,bStack0000000000000048);
                *(undefined8 *)(unaff_x29 + -0x50) = uVar40;
                *(ulong *)(unaff_x29 + -0x38) =
                     CONCAT44(uStack000000000000005c,_uStack0000000000000058);
                *(ulong *)(unaff_x29 + -0x40) = CONCAT71(uStack0000000000000051,in_stack_00000050);
                *(undefined8 *)(unaff_x29 + -0x88) = uVar38;
                *(long *)(unaff_x29 + -0x90) = lVar43;
                *(undefined8 *)(unaff_x29 + -0x78) = uVar73;
                *(undefined8 *)(unaff_x29 + -0x80) = uVar70;
                __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                          (puVar58,unaff_x29 + -0x90);
                return;
              }
              goto code_r0x0001007b03f0;
            }
          }
        }
      }
      *(undefined8 *)(unaff_x29 + -0x90) = 10;
      lVar41 = FUN_107c05dbc(unaff_x29 + -0x90,0,0);
code_r0x0001007b03f0:
      puVar58[0] = 5;
      puVar58[1] = 0x80000000;
      *(long *)(puVar58 + 2) = lVar41;
      FUN_100e040f0();
      return;
    case 0xf8:
      uVar46 = 0;
      if (puVar47 != (uint *)0x0) {
        uVar46 = (uint)puVar59;
      }
      uVar52 = (uint)unaff_x23;
      if ((uVar46 & 1) == 0) {
        if (((ulong)puVar37 & 0x7fffffffffffffff) == 0) {
          uVar52 = 1;
        }
      }
      else {
        _free(CONCAT44(uStack0000000000000064,_cStack0000000000000060));
        if (((ulong)in_stack_00000090 & 0x7fffffffffffffff) == 0) {
          uVar52 = 1;
        }
      }
      if ((uVar52 & 1) == 0) {
        _free(_uStack0000000000000038);
      }
      FUN_100d34830(&stack0x000000c0);
      if (cStack00000000000000a0 != '\x16') {
        FUN_100e077ec(&stack0x000000a0);
      }
      if (((uint)unaff_x26 & 0x1e) != 0x14) {
        FUN_100e077ec();
      }
      return;
    case 0xf9:
      goto code_r0x0001007b133c;
    case 0xfa:
      goto code_r0x0001007ae35c;
    case 0xfb:
      goto code_r0x0001007a8b4c;
    case 0xfc:
      FUN_100e040f0(unaff_x29 + -0xb0);
      puVar58[0] = 5;
      puVar58[1] = 0x80000000;
      *(ulong *)(puVar58 + 2) = CONCAT71(uStack0000000000000069,bStack0000000000000068);
      return;
    case 0xfd:
      goto code_r0x00010079223c;
    case 0xfe:
      goto code_r0x000100793420;
    }
  }
code_r0x000100792184:
  puVar55 = (uint *)&UNK_108c9b000;
code_r0x000100792188:
  puVar55 = puVar55 + 0x90;
code_r0x00010079218c:
  puVar56 = (uint *)(&UNK_10079219c +
                    (ulong)*(ushort *)((long)puVar55 + (ulong)in_stack_00000050 * 2) * 4);
code_r0x000100792198:
  puVar54 = (uint *)(ulong)in_stack_00000050;
  uVar46 = (uint)in_stack_00000050;
  uVar53 = (uint)in_stack_00000050;
  puVar48 = puVar47;
  bVar44 = in_stack_00000050;
  switch(puVar56) {
  case (uint *)0x10079219c:
code_r0x00010079219c:
    uVar36 = *(undefined8 *)(puVar67 + 2);
    puVar66 = *(uint **)puVar67;
    puVar59 = puVar67;
code_r0x0001007921a4:
    in_stack_000001b8 = *(undefined8 *)(puVar59 + 6);
    in_stack_000001b0 = *(undefined8 *)(puVar59 + 4);
    in_stack_000001a0 = puVar66;
    in_stack_000001a8 = uVar36;
code_r0x0001007921b4:
    puVar42 = (uint *)(unaff_x29 + -0xb0);
    puVar37 = unaff_x27;
code_r0x0001007921bc:
    func_0x000107c0475c(puVar37,puVar42);
    goto code_r0x000100793648;
  case (uint *)0x1007921c8:
    goto code_r0x0001007921c8;
  case (uint *)0x1007921e0:
    goto code_r0x0001007921e0;
  case (uint *)0x10079221c:
code_r0x00010079221c:
    *(undefined8 *)(puVar51 + 0x24) = in_stack_000000e0;
    *(undefined8 *)(puVar51 + 0x22) = in_stack_000000d8;
    goto code_r0x000100792224;
  case (uint *)0x100792228:
    goto code_r0x000100792228;
  case (uint *)0x100792234:
    goto code_r0x000100792234;
  case (uint *)0x10079224c:
    goto code_r0x00010079224c;
  case (uint *)0x1007922b4:
    uStack0000000000000051 = uStack0000000000000051 >> 8;
    puVar47 = (uint *)0x4;
    in_stack_00000050 = bVar50;
code_r0x0001007922bc:
    bStack0000000000000048 = (byte)puVar47;
  case (uint *)0x1007922c0:
LAB_1007922c0:
    FUN_100d03040(&stack0x000000d8);
    FUN_100d34830(unaff_x21 + 8);
    puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0xb0);
    unaff_x27 = in_stack_00000040;
code_r0x0001007922d8:
    if ((int)puVar47 != 0x16) {
      FUN_100e077ec(unaff_x29 + -0xb0);
    }
    goto LAB_1007920b0;
  case (uint *)0x10079234c:
code_r0x00010079234c:
    if (puVar55 != (uint *)0x0) {
      puVar64 = (uint *)0x0;
      in_stack_00000040 = unaff_x27;
      goto code_r0x000100792358;
    }
    unaff_x24 = (uint *)0x0;
    goto code_r0x0001007937b4;
  case (uint *)0x100792368:
code_r0x000100792368:
    puVar51 = (uint *)(((ulong)puVar51 >> 6) + 1);
code_r0x000100792370:
    unaff_x25 = (uint *)0x8000000000000000;
    unaff_x26 = (uint *)0x8000000000000000;
    unaff_x23 = (uint *)0x8000000000000000;
    unaff_x22 = puVar47 + 0x10;
    in_stack_00000008 = puVar51;
    goto code_r0x00010079239c;
  case (uint *)0x10079239c:
    goto code_r0x00010079239c;
  case (uint *)0x1007923b4:
    goto code_r0x0001007923b4;
  case (uint *)0x1007923d4:
    goto code_r0x0001007923d4;
  case (uint *)0x1007923ec:
    goto code_r0x0001007923ec;
  case (uint *)0x100792448:
    goto code_r0x000100792448;
  case (uint *)0x100792478:
    goto code_r0x000100792478;
  case (uint *)0x1007924ac:
    goto code_r0x0001007924ac;
  case (uint *)0x1007924c0:
    goto code_r0x0001007924c0;
  case (uint *)0x1007924d4:
    goto code_r0x0001007924d4;
  case (uint *)0x100792524:
    goto code_r0x000100792524;
  case (uint *)0x100792584:
    goto code_r0x000100792584;
  case (uint *)0x1007925b0:
    goto code_r0x0001007925b0;
  case (uint *)0x1007925c8:
    goto code_r0x0001007925c8;
  case (uint *)0x1007925d0:
    goto code_r0x0001007925d0;
  case (uint *)0x1007925e4:
    goto code_r0x0001007925e4;
  case (uint *)0x1007925fc:
    goto code_r0x0001007925fc;
  case (uint *)0x100792604:
    goto code_r0x000100792604;
  case (uint *)0x100792610:
    goto code_r0x000100792610;
  case (uint *)0x100792620:
    goto code_r0x000100792620;
  case (uint *)0x100792628:
    goto code_r0x000100792628;
  case (uint *)0x100792630:
    goto code_r0x000100792630;
  case (uint *)0x10079264c:
    goto code_r0x00010079264c;
  case (uint *)0x100792650:
    goto code_r0x000100792650;
  case (uint *)0x100792668:
    goto code_r0x000100792668;
  case (uint *)0x100792670:
    goto code_r0x000100792670;
  case (uint *)0x10079268c:
    goto code_r0x00010079268c;
  case (uint *)0x100792694:
    goto code_r0x000100792694;
  case (uint *)0x10079269c:
    goto code_r0x00010079269c;
  case (uint *)0x1007926b0:
    goto code_r0x0001007926b0;
  case (uint *)0x1007926f0:
    goto code_r0x0001007926f0;
  case (uint *)0x10079270c:
    goto code_r0x00010079270c;
  case (uint *)0x100792720:
    goto code_r0x000100792720;
  case (uint *)0x100792728:
    goto code_r0x000100792728;
  case (uint *)0x1007927a0:
    goto code_r0x0001007927a0;
  case (uint *)0x1007927ac:
    goto code_r0x0001007927ac;
  case (uint *)0x1007927b8:
    goto code_r0x0001007927b8;
  case (uint *)0x1007927c0:
    goto code_r0x0001007927c0;
  case (uint *)0x1007927cc:
    goto code_r0x0001007927cc;
  case (uint *)0x1007927e4:
    goto code_r0x0001007927e4;
  case (uint *)0x1007927ec:
    goto code_r0x0001007927ec;
  case (uint *)0x1007927f4:
    goto code_r0x0001007927f4;
  case (uint *)0x100792804:
code_r0x000100792804:
    puVar51 = (uint *)((long)in_stack_000000a8 * 0x40);
    puVar56 = puVar47 + (long)in_stack_000000a8 * 0x10;
    puVar58 = (uint *)(unaff_x29 + -0x100);
    puVar55 = in_stack_000000a8;
  case (uint *)0x100792814:
    *(uint **)(unaff_x29 + -0xe0) = puVar47;
    *(uint **)(unaff_x29 + -0xd8) = puVar47;
    *(uint **)(unaff_x29 + -0xd0) = puVar54;
    *(uint **)(unaff_x29 + -200) = puVar56;
code_r0x00010079281c:
    *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    if (puVar55 != (uint *)0x0) {
code_r0x00010079282c:
      puVar64 = (uint *)0x0;
      unaff_x23 = puVar56;
      in_stack_00000040 = unaff_x27;
code_r0x000100792838:
      unaff_x22 = (uint *)((ulong)&stack0x000000b0 | 1);
      puVar59 = (uint *)((ulong)puVar58 | 1);
code_r0x000100792844:
      in_stack_00000008 = (uint *)(((ulong)(puVar51 + -0x10) >> 6) + 1);
      unaff_x21 = puVar47 + 0x10;
      unaff_x24 = (uint *)0x8000000000000000;
      unaff_x25 = (uint *)0x8000000000000001;
      unaff_x27 = puVar64;
code_r0x000100792860:
      unaff_x26 = (uint *)0x8000000000000001;
      goto code_r0x00010079287c;
    }
    unaff_x25 = (uint *)0x8000000000000001;
    unaff_x26 = (uint *)0x8000000000000001;
    _uStack0000000000000038 = puVar59;
    in_stack_00000030 = unaff_x21;
    in_stack_00000028 = unaff_x22;
    in_stack_00000040 = unaff_x27;
    goto code_r0x000100793bcc;
  case (uint *)0x10079282c:
    goto code_r0x00010079282c;
  case (uint *)0x100792838:
    goto code_r0x000100792838;
  case (uint *)0x100792844:
    goto code_r0x000100792844;
  case (uint *)0x100792860:
    goto code_r0x000100792860;
  case (uint *)0x1007928d4:
    goto code_r0x0001007928d4;
  case (uint *)0x100792904:
    goto code_r0x000100792904;
  case (uint *)0x100792974:
    goto code_r0x000100792974;
  case (uint *)0x100792a14:
    goto code_r0x000100792a14;
  case (uint *)0x100792b4c:
    goto code_r0x000100792b4c;
  case (uint *)0x100792b74:
    goto code_r0x000100792b74;
  case (uint *)0x100792bb0:
    goto code_r0x000100792bb0;
  case (uint *)0x100792bd8:
    goto code_r0x000100792bd8;
  case (uint *)0x100792bfc:
    goto code_r0x000100792bfc;
  case (uint *)0x100792c10:
    goto code_r0x000100792c10;
  case (uint *)0x100792c44:
    goto code_r0x000100792c44;
  case (uint *)0x100792c68:
    goto code_r0x000100792c68;
  case (uint *)0x100792cac:
    goto code_r0x000100792cac;
  case (uint *)0x100792d38:
    puVar51 = (uint *)((long)in_stack_000000a8 * 0x40);
    unaff_x24 = _cStack00000000000000a0 + (long)in_stack_000000a8 * 0x10;
    *(uint **)(unaff_x29 + -0xe0) = _cStack00000000000000a0;
    *(uint **)(unaff_x29 + -0xd8) = _cStack00000000000000a0;
    *(uint **)(unaff_x29 + -0xd0) = puVar67;
    *(uint **)(unaff_x29 + -200) = unaff_x24;
    unaff_x23 = (uint *)0x16;
    *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
    *(undefined8 *)(unaff_x29 + -0xc0) = 0;
    if (in_stack_000000a8 != (uint *)0x0) {
      unaff_x26 = (uint *)0x0;
      unaff_x21 = (uint *)((ulong)&stack0x000000b0 | 1);
      puVar59 = (uint *)(unaff_x29 - 0x100U | 1);
      puVar47 = _cStack00000000000000a0;
      in_stack_00000040 = unaff_x27;
      goto code_r0x000100792d7c;
    }
    unaff_x25 = (uint *)0x8000000000000001;
    in_stack_00000040 = unaff_x27;
    goto code_r0x000100793a20;
  case (uint *)0x100792eb8:
    goto code_r0x000100792eb8;
  case (uint *)0x100792ee0:
    goto code_r0x000100792ee0;
  case (uint *)0x1007930b4:
    goto code_r0x0001007930b4;
  case (uint *)0x1007930d8:
    goto code_r0x0001007930d8;
  case (uint *)0x100793394:
    goto code_r0x000100793394;
  case (uint *)0x10079339c:
    goto code_r0x00010079339c;
  case (uint *)0x1007933b4:
    goto code_r0x0001007933b4;
  case (uint *)0x1007933c8:
    goto code_r0x0001007933c8;
  case (uint *)0x1007933d0:
    goto code_r0x0001007933d0;
  case (uint *)0x1007933e8:
code_r0x0001007933e8:
    uVar36 = *(undefined8 *)(puVar67 + 2);
    puVar66 = *(uint **)puVar67;
    puVar47 = (uint *)&stack0x000000b0;
    puVar59 = puVar67;
  case (uint *)0x1007933f4:
    *(undefined8 *)(puVar47 + 0x3e) = uVar36;
    *(uint **)(puVar47 + 0x3c) = puVar66;
code_r0x0001007933f8:
    uVar36 = *(undefined8 *)(puVar59 + 6);
    puVar66 = *(uint **)(puVar59 + 4);
code_r0x0001007933fc:
    *(undefined8 *)(puVar47 + 0x42) = uVar36;
    *(uint **)(puVar47 + 0x40) = puVar66;
code_r0x000100793400:
    func_0x000107c05270(unaff_x27,unaff_x29 + -0xb0);
code_r0x00010079340c:
    goto code_r0x000100793648;
  case (uint *)0x1007933fc:
    goto code_r0x0001007933fc;
  case (uint *)0x10079340c:
    goto code_r0x00010079340c;
  case (uint *)0x100793414:
    goto code_r0x000100793414;
  case (uint *)0x10079341c:
    goto code_r0x00010079341c;
  case (uint *)0x100793428:
    goto code_r0x000100793428;
  case (uint *)0x10079342c:
    goto code_r0x00010079342c;
  case (uint *)0x10079343c:
    goto code_r0x00010079343c;
  case (uint *)0x100793444:
    goto code_r0x000100793444;
  case (uint *)0x100793454:
    goto code_r0x000100793454;
  case (uint *)0x10079345c:
    goto code_r0x00010079345c;
  case (uint *)0x10079346c:
    goto code_r0x00010079346c;
  case (uint *)0x100793490:
    goto code_r0x000100793490;
  case (uint *)0x1007934a4:
    goto code_r0x0001007934a4;
  case (uint *)0x1007934c0:
    goto code_r0x0001007934c0;
  case (uint *)0x1007934c8:
    goto code_r0x0001007934c8;
  case (uint *)0x1007934e0:
    goto code_r0x0001007934e0;
  case (uint *)0x1007934f0:
    goto code_r0x0001007934f0;
  case (uint *)0x1007934fc:
    goto code_r0x0001007934fc;
  case (uint *)0x10079351c:
    goto code_r0x00010079351c;
  case (uint *)0x100793520:
    goto code_r0x000100793520;
  case (uint *)0x100793524:
    goto code_r0x000100793524;
  case (uint *)0x100793528:
    goto code_r0x000100793528;
  case (uint *)0x100793530:
    goto code_r0x000100793530;
  case (uint *)0x100793534:
    goto code_r0x000100793534;
  case (uint *)0x100793540:
    goto code_r0x000100793540;
  case (uint *)0x100793544:
    goto code_r0x000100793544;
  case (uint *)0x100793548:
    goto code_r0x000100793548;
  case (uint *)0x10079354c:
    goto code_r0x00010079354c;
  case (uint *)0x100793554:
    goto code_r0x000100793554;
  case (uint *)0x100793558:
    goto code_r0x000100793558;
  case (uint *)0x10079355c:
    goto code_r0x00010079355c;
  case (uint *)0x10079356c:
    goto code_r0x00010079356c;
  case (uint *)0x100793570:
    goto code_r0x000100793570;
  case (uint *)0x100793578:
    goto code_r0x000100793578;
  case (uint *)0x100793580:
    goto code_r0x000100793580;
  case (uint *)0x100793594:
    goto code_r0x000100793594;
  case (uint *)0x10079359c:
    goto code_r0x00010079359c;
  case (uint *)0x1007935a4:
    goto code_r0x0001007935a4;
  case (uint *)0x1007935a8:
    goto code_r0x0001007935a8;
  case (uint *)0x1007935b4:
    goto code_r0x0001007935b4;
  case (uint *)0x1007935b8:
    goto code_r0x0001007935b8;
  case (uint *)0x1007935c0:
    goto code_r0x0001007935c0;
  case (uint *)0x1007935c8:
    goto code_r0x0001007935c8;
  case (uint *)0x1007935cc:
    goto code_r0x0001007935cc;
  case (uint *)0x1007935d0:
    goto code_r0x0001007935d0;
  case (uint *)0x1007935d8:
    goto code_r0x0001007935d8;
  case (uint *)0x1007935dc:
    goto code_r0x0001007935dc;
  case (uint *)0x1007935e0:
    goto code_r0x0001007935e0;
  case (uint *)0x1007935e4:
    goto code_r0x0001007935e4;
  case (uint *)0x1007935ec:
    goto code_r0x0001007935ec;
  case (uint *)0x1007935f4:
    goto code_r0x0001007935f4;
  case (uint *)0x1007935fc:
    goto code_r0x0001007935fc;
  case (uint *)0x100793610:
    goto code_r0x000100793610;
  case (uint *)0x100793620:
    goto code_r0x000100793620;
  case (uint *)0x100793630:
    goto code_r0x000100793630;
  case (uint *)0x100793634:
    goto code_r0x000100793634;
  case (uint *)0x100793638:
    goto code_r0x000100793638;
  case (uint *)0x100793644:
    goto code_r0x000100793644;
  case (uint *)0x10079364c:
    goto code_r0x00010079364c;
  case (uint *)0x100793654:
    goto code_r0x000100793654;
  case (uint *)0x10079365c:
    goto code_r0x00010079365c;
  case (uint *)0x100793660:
    goto code_r0x000100793660;
  case (uint *)0x100793664:
    goto code_r0x000100793664;
  case (uint *)0x100793670:
    goto code_r0x000100793670;
  case (uint *)0x100793674:
    goto code_r0x000100793674;
  case (uint *)0x10079367c:
    goto code_r0x00010079367c;
  case (uint *)0x10079368c:
    goto code_r0x00010079368c;
  case (uint *)0x100793694:
    goto code_r0x000100793694;
  case (uint *)0x10079369c:
    goto code_r0x00010079369c;
  case (uint *)0x1007936a8:
    goto code_r0x0001007936a8;
  case (uint *)0x1007936b4:
    goto code_r0x0001007936b4;
  case (uint *)0x1007936b8:
    goto code_r0x0001007936b8;
  case (uint *)0x1007936c0:
    goto code_r0x0001007936c0;
  case (uint *)0x1007936c8:
    goto code_r0x0001007936c8;
  case (uint *)0x1007936d0:
    goto code_r0x0001007936d0;
  case (uint *)0x1007936d8:
    goto code_r0x0001007936d8;
  case (uint *)0x1007936e0:
    goto code_r0x0001007936e0;
  case (uint *)0x1007936e8:
    puVar37 = (uint *)&stack0x00000048;
    goto code_r0x0001007936ec;
  case (uint *)0x1007936f0:
    goto code_r0x0001007936f0;
  case (uint *)0x1007936f4:
    goto code_r0x0001007936f4;
  case (uint *)0x1007936f8:
    goto code_r0x0001007936f8;
  case (uint *)0x100793700:
code_r0x000100793700:
    fVar65 = (float)puVar42[1];
    goto code_r0x000100793704;
  case (uint *)0x100793708:
    goto code_r0x000100793708;
  case (uint *)0x100793710:
    goto code_r0x000100793748;
  case (uint *)0x100793718:
    goto code_r0x000100793718;
  case (uint *)0x100793720:
    goto code_r0x000100793720;
  case (uint *)0x100793728:
    goto code_r0x000100793728;
  case (uint *)0x100793734:
    goto code_r0x000100793734;
  case (uint *)0x100793744:
    goto code_r0x000100793744;
  case (uint *)0x10079374c:
    goto code_r0x00010079374c;
  case (uint *)0x10079375c:
    goto code_r0x00010079375c;
  case (uint *)0x100793764:
    goto code_r0x000100793764;
  case (uint *)0x100793770:
    goto code_r0x000100793770;
  case (uint *)0x100793774:
    puVar66 = *(uint **)(puVar42 + 2);
    goto code_r0x000100793778;
  case (uint *)0x100793798:
    goto code_r0x000100793798;
  case (uint *)0x100793e4c:
    uVar32 = 8;
    break;
  case (uint *)0x100793e84:
    puVar47 = (uint *)&stack0x00000090;
code_r0x000100793e88:
    puVar42 = puVar47 + 2;
    puVar37 = unaff_x27;
    goto code_r0x000100793e90;
  case (uint *)0x100793ec4:
    puVar37 = unaff_x27;
    goto code_r0x000100793ec8;
  case (uint *)0x100793ecc:
    goto code_r0x000100793ecc;
  case (uint *)0x100793eec:
    puVar47 = puVar67;
    goto code_r0x000100794064;
  case (uint *)0x100793f24:
    puVar47 = (uint *)&stack0x00000090;
code_r0x000100793f28:
    puVar42 = puVar47 + 2;
    puVar37 = unaff_x27;
    goto code_r0x000100793f30;
  case (uint *)0x100793f3c:
    goto code_r0x000100793f3c;
  case (uint *)0x100793f5c:
    puVar67 = (uint *)(double)fVar65;
    goto code_r0x000100794130;
  case (uint *)0x100793f6c:
    goto code_r0x000100793f6c;
  case (uint *)0x100793f7c:
    puVar47 = (uint *)(((ulong)uStack0000000000000051 & 0xffff00) >> 8);
    goto code_r0x000100793f80;
  case (uint *)0x100793f8c:
code_r0x000100793f8c:
    *(uint **)(unaff_x29 + -0xa8) = puVar67;
    *(uint **)(unaff_x29 + -0xa0) = _cStack00000000000000a0;
    puVar47 = (uint *)0x6;
    goto code_r0x000100793f98;
  case (uint *)0x100793fac:
    puVar47 = puVar67;
    puVar51 = _cStack00000000000000a0;
    goto code_r0x000100793fb0;
  case (uint *)0x100793fdc:
    goto code_r0x000100793fdc;
  case (uint *)0x100793ffc:
    goto code_r0x000100793ffc;
  case (uint *)0x10079401c:
    goto code_r0x00010079401c;
  case (uint *)0x10079404c:
    *(byte *)(unaff_x29 + -0xaf) = bVar50;
    *(undefined1 *)(unaff_x29 + -0xb0) = 0;
code_r0x000100794058:
  case (uint *)0x10079405c:
code_r0x00010079405c:
    goto code_r0x0001007941b8;
  case (uint *)0x100794060:
    goto code_r0x000100794060;
  case (uint *)0x10079407c:
    goto code_r0x00010079407c;
  case (uint *)0x10079409c:
    puVar47 = (uint *)(long)(char)bVar50;
    goto code_r0x0001007940a0;
  case (uint *)0x1007940a8:
    goto code_r0x0001007940a8;
  case (uint *)0x1007940cc:
    *(uint **)(unaff_x29 + -0xa8) = puVar67;
    *(uint **)(unaff_x29 + -0xa0) = _cStack00000000000000a0;
    puVar47 = (uint *)0x5;
code_r0x0001007940d8:
    uVar32 = SUB81(puVar47,0);
    break;
  case (uint *)0x1007940fc:
    puVar49 = (uint *)(long)sVar7;
    goto code_r0x000100794188;
  case (uint *)0x10079411c:
    goto code_r0x00010079411c;
  case (uint *)0x10079412c:
code_r0x000100794130:
    *(uint **)(unaff_x29 + -0xa8) = puVar67;
    puVar47 = (uint *)0x3;
code_r0x000100794138:
    uVar32 = SUB81(puVar47,0);
    break;
  case (uint *)0x10079413c:
    goto code_r0x00010079413c;
  case (uint *)0x10079417c:
    goto code_r0x00010079417c;
  case (uint *)0x100794184:
    puVar49 = puVar67;
    goto code_r0x000100794188;
  case (uint *)0x10079419c:
    goto code_r0x00010079419c;
  case (uint *)0x1007941dc:
    goto code_r0x0001007941dc;
  case (uint *)0x1007941fc:
    uVar32 = 7;
    break;
  case (uint *)0x10079427c:
    goto code_r0x00010079427c;
  }
code_r0x000100794190:
  *(undefined1 *)(unaff_x29 + -0xb0) = uVar32;
code_r0x000100794198:
code_r0x00010079419c:
  goto code_r0x0001007941b8;
code_r0x0001007a8b4c:
  if (bVar34) {
code_r0x0001007a8bec:
    _cStack00000000000000a0 = (uint *)((long)unaff_x22 + 1);
    uVar39 = *(undefined8 *)(unaff_x29 + -0x98);
    in_stack_00000028[0] = 2;
    in_stack_00000028[1] = 0;
    *(undefined8 *)(in_stack_00000028 + 2) = uVar39;
    in_stack_00000088 = unaff_x24;
LAB_1007a8c08:
    if ((unaff_x28 != (uint *)0x8000000000000001) && (((ulong)unaff_x28 & 0x7fffffffffffffff) != 0))
    {
      _free(in_stack_00000040);
    }
LAB_1007a8de0:
    FUN_100d34830(&stack0x00000080);
    if (cStack0000000000000060 != '\x16') {
      FUN_100e077ec(&stack0x00000060);
    }
LAB_1007a8dfc:
    if ((uStack0000000000000038 & 0x1e) != 0x14) {
      FUN_100e077ec(in_stack_00000030);
    }
    return;
  }
  _uStack0000000000000058 = (uint)*(byte *)(unaff_x29 + -0x9f);
  puVar37 = unaff_x23;
  unaff_x23 = unaff_x24;
code_r0x0001007a8b58:
  puVar42 = unaff_x22;
  unaff_x24 = unaff_x23 + 0x10;
  unaff_x22 = (uint *)((long)puVar42 + 1);
  puVar51 = in_stack_00000018;
  puVar64 = puVar58;
  if ((puVar37 + 0x10 == puVar58) ||
     (bVar50 = (byte)*unaff_x23, puVar51 = unaff_x22, puVar64 = unaff_x24, bVar50 == 0x16)) {
    puVar59 = (uint *)0x8000000000000000;
    if (unaff_x28 != (uint *)0x8000000000000001) {
      puVar59 = unaff_x28;
    }
    in_stack_00000088 = puVar64;
    _cStack00000000000000a0 = puVar51;
    if (_uStack0000000000000058 == 4) {
      *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cadf0d;
      *(undefined8 *)(unaff_x29 + -0x98) = 6;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
      uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
      in_stack_00000028[0] = 2;
      in_stack_00000028[1] = 0;
      *(undefined8 *)(in_stack_00000028 + 2) = uVar39;
      if (((ulong)puVar59 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000040);
      }
      goto LAB_1007a8de0;
    }
    lVar43 = 0;
    if (CONCAT71(uStack0000000000000051,in_stack_00000050) != 2) {
      lVar43 = CONCAT71(uStack0000000000000051,in_stack_00000050);
    }
    *(long *)in_stack_00000028 = lVar43;
    *(uint **)(in_stack_00000028 + 2) = in_stack_00000008;
    puVar37 = (uint *)0x0;
    if (unaff_x21 != (uint *)0x2) {
      puVar37 = unaff_x21;
    }
    *(uint **)(in_stack_00000028 + 4) = puVar37;
    *(uint **)(in_stack_00000028 + 6) = in_stack_00000010;
    *(uint **)(in_stack_00000028 + 8) = puVar59;
    *(uint **)(in_stack_00000028 + 10) = in_stack_00000040;
    *(uint **)(in_stack_00000028 + 0xc) = in_stack_00000020;
    *(char *)(in_stack_00000028 + 0xe) = (char)_uStack0000000000000058;
    FUN_100d34830(&stack0x00000080);
    if (puVar58 != puVar64) {
      *(uint **)(unaff_x29 + -0x80) = puVar51;
      uVar39 = thunk_FUN_1087e422c(((ulong)((long)puVar58 - (long)puVar64) >> 6) + (long)puVar51,
                                   unaff_x29 + -0x80,&UNK_10b23a190);
      in_stack_00000028[0] = 2;
      in_stack_00000028[1] = 0;
      *(undefined8 *)(in_stack_00000028 + 2) = uVar39;
      if (((ulong)puVar59 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000040);
      }
    }
    goto LAB_1007a8dfc;
  }
  *(byte *)(unaff_x29 + -0x80) = bVar50;
  uVar39 = *(undefined8 *)(unaff_x23 + 4);
  *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)(unaff_x23 + 6);
  *(undefined8 *)((long)unaff_x27 + 0xf) = uVar39;
  uVar39 = *(undefined8 *)((long)unaff_x23 + 1);
  *(undefined8 *)(unaff_x27 + 2) = *(undefined8 *)((long)unaff_x23 + 9);
  *(undefined8 *)unaff_x27 = uVar39;
  bStack0000000000000068 = (byte)*(undefined8 *)(unaff_x23 + 10);
  uStack0000000000000069 = (undefined7)((ulong)*(undefined8 *)(unaff_x23 + 10) >> 8);
  _cStack0000000000000060 = (uint)*(undefined8 *)(unaff_x23 + 8);
  uStack0000000000000064 = (uint)((ulong)*(undefined8 *)(unaff_x23 + 8) >> 0x20);
  in_stack_00000078 = *(uint **)(unaff_x23 + 0xe);
  in_stack_00000070 = *(ulong *)(unaff_x23 + 0xc);
  plVar1 = *(long **)(unaff_x29 + -0x78);
  plVar2 = *(long **)(unaff_x29 + -0x70);
  lVar43 = *(long *)(unaff_x29 + -0x68);
  if (bVar50 < 0xd) {
    if (bVar50 == 1) {
      bVar50 = *(byte *)(unaff_x29 + -0x7f);
      if (3 < bVar50) {
        bVar50 = 4;
      }
      goto code_r0x0001007a8978;
    }
    if (bVar50 == 4) {
      if ((long *)0x3 < plVar1) {
        plVar1 = (long *)0x4;
      }
      *(char *)(unaff_x29 + -0x9f) = (char)plVar1;
      goto code_r0x0001007a897c;
    }
    if (bVar50 == 0xc) {
      if (lVar43 < 0xb) {
        if (lVar43 == 6) {
          if ((int)*plVar2 == 0x73616572 && *(short *)((long)plVar2 + 4) == 0x6e6f) {
            *(undefined1 *)(unaff_x29 + -0x9f) = 1;
            *(undefined1 *)(unaff_x29 + -0xa0) = 0;
          }
          else {
code_r0x0001007a88fc:
            *(undefined1 *)(unaff_x29 + -0x9f) = 4;
            *(undefined1 *)(unaff_x29 + -0xa0) = 0;
          }
        }
        else {
          if ((lVar43 != 7) ||
             ((int)*plVar2 != 0x6e727574 || *(int *)((long)plVar2 + 3) != 0x64695f6e))
          goto code_r0x0001007a88fc;
          *(undefined1 *)(unaff_x29 + -0x9f) = 0;
          *(undefined1 *)(unaff_x29 + -0xa0) = 0;
        }
      }
      else if (lVar43 == 0xb) {
        if (*plVar2 != 0x6e6f697461727564 || *(long *)((long)plVar2 + 3) != 0x736d5f6e6f697461)
        goto code_r0x0001007a88fc;
        *(undefined1 *)(unaff_x29 + -0x9f) = 3;
        *(undefined1 *)(unaff_x29 + -0xa0) = 0;
      }
      else {
        if ((lVar43 != 0xc) || (*plVar2 != 0x6574656c706d6f63 || (int)plVar2[1] != 0x74615f64))
        goto code_r0x0001007a88fc;
        *(undefined1 *)(unaff_x29 + -0x9f) = 2;
        *(undefined1 *)(unaff_x29 + -0xa0) = 0;
      }
joined_r0x0001007a8bb8:
      if (plVar1 != (long *)0x0) {
        _free(plVar2);
      }
    }
    else {
code_r0x0001007a8bc8:
      uVar39 = thunk_FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0x59,&UNK_10b20f440);
      *(undefined8 *)(unaff_x29 + -0x98) = uVar39;
      *(undefined1 *)(unaff_x29 + -0xa0) = 1;
    }
  }
  else {
    if (bVar50 == 0xd) {
      if ((long)plVar2 < 0xb) {
        if (plVar2 == (long *)0x6) {
          if ((int)*plVar1 == 0x73616572 && *(short *)((long)plVar1 + 4) == 0x6e6f) {
            bVar50 = 1;
          }
          else {
code_r0x0001007a8974:
            bVar50 = 4;
          }
        }
        else {
          if ((plVar2 != (long *)0x7) ||
             ((int)*plVar1 != 0x6e727574 || *(int *)((long)plVar1 + 3) != 0x64695f6e))
          goto code_r0x0001007a8974;
          bVar50 = 0;
        }
      }
      else if (plVar2 == (long *)0xb) {
        if (*plVar1 != 0x6e6f697461727564 || *(long *)((long)plVar1 + 3) != 0x736d5f6e6f697461)
        goto code_r0x0001007a8974;
        bVar50 = 3;
      }
      else {
        if ((plVar2 != (long *)0xc) ||
           (*plVar1 != 0x6574656c706d6f63 || (int)plVar1[1] != 0x74615f64))
        goto code_r0x0001007a8974;
        bVar50 = 2;
      }
code_r0x0001007a8978:
      *(byte *)(unaff_x29 + -0x9f) = bVar50;
code_r0x0001007a897c:
      *(undefined1 *)(unaff_x29 + -0xa0) = 0;
    }
    else {
      if (bVar50 == 0xe) {
        func_0x000100b1f494(unaff_x29 + -0xa0,plVar2);
        goto joined_r0x0001007a8bb8;
      }
      if (bVar50 != 0xf) goto code_r0x0001007a8bc8;
      func_0x000100b1f494(unaff_x29 + -0xa0,plVar1,plVar2);
    }
    FUN_100e077ec(unaff_x29 + -0x80);
  }
  uVar46 = _cStack0000000000000060;
  if ((*(byte *)(unaff_x29 + -0xa0) & 1) != 0) goto code_r0x0001007a8bec;
  bVar50 = *(byte *)(unaff_x29 + -0x9f);
  cVar6 = cStack0000000000000060;
  puVar37 = unaff_x23;
  if (1 < bVar50) {
    if (bVar50 == 2) {
      if (CONCAT71(uStack0000000000000051,in_stack_00000050) != 2) {
        _cStack00000000000000a0 = (uint *)((long)puVar42 + 2);
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cae6ae;
        *(undefined8 *)(unaff_x29 + -0x98) = 0xc;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        in_stack_00000088 = unaff_x24;
        uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        goto LAB_1007a9194;
      }
      _cStack0000000000000060 = CONCAT31(uStack0000000000000061,0x16);
      if (cVar6 == '\x16') goto code_r0x0001007a8fb4;
      uVar39 = *(undefined8 *)puVar59;
      puVar63 = (undefined8 *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
      puVar63[1] = *(undefined8 *)(puVar59 + 2);
      *puVar63 = uVar39;
      uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
      *(undefined8 *)((long)puVar63 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
      *(undefined8 *)((long)puVar63 + 0xf) = uVar39;
      *(char *)(unaff_x29 + -0xa0) = cVar6;
      uVar46 = uVar46 & 0xff;
      if (uVar46 == 0x10) {
code_r0x0001007a8ac0:
        FUN_100e077ec(unaff_x29 + -0xa0);
        in_stack_00000050 = 0;
        uStack0000000000000051 = 0;
        unaff_x23 = unaff_x24;
      }
      else {
        if (uVar46 == 0x11) {
          puVar63 = *(undefined8 **)(unaff_x29 + -0x98);
          uVar39 = *puVar63;
          *(undefined8 *)(unaff_x29 + -0x78) = puVar63[1];
          *(undefined8 *)(unaff_x29 + -0x80) = uVar39;
          uVar39 = puVar63[2];
          *(undefined8 *)(unaff_x29 + -0x68) = puVar63[3];
          *(undefined8 *)(unaff_x29 + -0x70) = uVar39;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0x80);
          puVar64 = auVar74._8_8_;
          _free(puVar63);
          puVar51 = (uint *)(auVar74._0_8_ + 1);
          in_stack_00000050 = (byte)puVar51;
          uStack0000000000000051 = (uint7)((ulong)puVar51 >> 8);
          in_stack_00000008 = puVar64;
        }
        else {
          if (uVar46 == 0x12) goto code_r0x0001007a8ac0;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0xa0);
          puVar64 = auVar74._8_8_;
          puVar51 = (uint *)(auVar74._0_8_ + 1);
          in_stack_00000050 = (byte)puVar51;
          uStack0000000000000051 = (uint7)((ulong)puVar51 >> 8);
          in_stack_00000008 = puVar64;
        }
joined_r0x0001007a8ba4:
        unaff_x23 = unaff_x24;
        if (puVar51 == (uint *)0x2) {
          _cStack00000000000000a0 = (uint *)((long)puVar42 + 2);
          *(uint **)(in_stack_00000028 + 2) = puVar64;
          in_stack_00000088 = unaff_x24;
          goto LAB_1007a8f10;
        }
      }
    }
    else if (bVar50 == 3) {
      if (unaff_x21 != (uint *)0x2) {
        _cStack00000000000000a0 = (uint *)((long)puVar42 + 2);
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cae6ba;
        *(undefined8 *)(unaff_x29 + -0x98) = 0xb;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        in_stack_00000088 = unaff_x24;
        uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        goto LAB_1007a9194;
      }
      _cStack0000000000000060 = CONCAT31(uStack0000000000000061,0x16);
      if (cVar6 == '\x16') goto code_r0x0001007a8fb4;
      uVar39 = *(undefined8 *)puVar59;
      puVar63 = (undefined8 *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
      puVar63[1] = *(undefined8 *)(puVar59 + 2);
      *puVar63 = uVar39;
      uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
      *(undefined8 *)((long)puVar63 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
      *(undefined8 *)((long)puVar63 + 0xf) = uVar39;
      *(char *)(unaff_x29 + -0xa0) = cVar6;
      uVar46 = uVar46 & 0xff;
      if (uVar46 != 0x10) {
        if (uVar46 == 0x11) {
          puVar63 = *(undefined8 **)(unaff_x29 + -0x98);
          uVar39 = *puVar63;
          *(undefined8 *)(unaff_x29 + -0x78) = puVar63[1];
          *(undefined8 *)(unaff_x29 + -0x80) = uVar39;
          uVar39 = puVar63[2];
          *(undefined8 *)(unaff_x29 + -0x68) = puVar63[3];
          *(undefined8 *)(unaff_x29 + -0x70) = uVar39;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0x80);
          in_stack_00000010 = auVar74._8_8_;
          _free(puVar63);
          unaff_x21 = (uint *)(auVar74._0_8_ + 1);
          puVar64 = in_stack_00000010;
          puVar51 = unaff_x21;
        }
        else {
          if (uVar46 == 0x12) goto code_r0x0001007a89f8;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0xa0);
          in_stack_00000010 = auVar74._8_8_;
          unaff_x21 = (uint *)(auVar74._0_8_ + 1);
          puVar64 = in_stack_00000010;
          puVar51 = unaff_x21;
        }
        goto joined_r0x0001007a8ba4;
      }
code_r0x0001007a89f8:
      FUN_100e077ec(unaff_x29 + -0xa0);
      unaff_x21 = (uint *)0x0;
      unaff_x23 = unaff_x24;
    }
    else {
      _cStack0000000000000060 = CONCAT31(uStack0000000000000061,0x16);
      if (cVar6 == '\x16') goto code_r0x0001007a8fb4;
      uVar39 = *(undefined8 *)puVar59;
      *(undefined8 *)(unaff_x27 + 2) = *(undefined8 *)(puVar59 + 2);
      *(undefined8 *)unaff_x27 = uVar39;
      uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
      *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
      *(undefined8 *)((long)unaff_x27 + 0xf) = uVar39;
      *(char *)(unaff_x29 + -0x80) = cVar6;
      FUN_100e077ec(unaff_x29 + -0x80);
      unaff_x23 = unaff_x24;
    }
    goto code_r0x0001007a8b58;
  }
  if (bVar50 == 0) {
    if (unaff_x28 != (uint *)0x8000000000000001) {
      _cStack00000000000000a0 = (uint *)((long)puVar42 + 2);
      *(undefined **)(unaff_x29 + -0xa0) = &UNK_108ca7b95;
      *(undefined8 *)(unaff_x29 + -0x98) = 7;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
      in_stack_00000088 = unaff_x24;
      uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
      goto LAB_1007a9194;
    }
    _cStack0000000000000060 = CONCAT31(uStack0000000000000061,0x16);
    if (cVar6 == '\x16') {
      _cStack00000000000000a0 = (uint *)((long)puVar42 + 2);
      in_stack_00000088 = unaff_x24;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x0001007a91cc;
    }
    uVar39 = *(undefined8 *)puVar59;
    *(undefined8 *)(unaff_x27 + 2) = *(undefined8 *)(puVar59 + 2);
    *(undefined8 *)unaff_x27 = uVar39;
    uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
    *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
    *(undefined8 *)((long)unaff_x27 + 0xf) = uVar39;
    *(char *)(unaff_x29 + -0x80) = cVar6;
    FUN_1004b60cc(unaff_x29 + -0xa0,unaff_x29 + -0x80);
    unaff_x28 = *(uint **)(unaff_x29 + -0xa0);
    in_stack_00000040 = *(uint **)(unaff_x29 + -0x98);
    if (unaff_x28 == (uint *)0x8000000000000001) {
      _cStack00000000000000a0 = (uint *)((long)puVar42 + 2);
      in_stack_00000028[0] = 2;
      in_stack_00000028[1] = 0;
      *(uint **)(in_stack_00000028 + 2) = in_stack_00000040;
      in_stack_00000088 = unaff_x24;
      goto LAB_1007a8de0;
    }
    in_stack_00000020 = *(uint **)(unaff_x29 + -0x90);
    unaff_x23 = unaff_x24;
    goto code_r0x0001007a8b58;
  }
  if (_uStack0000000000000058 != 4) {
    _cStack00000000000000a0 = (uint *)((long)puVar42 + 2);
    *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cadf0d;
    *(undefined8 *)(unaff_x29 + -0x98) = 6;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
    in_stack_00000088 = unaff_x24;
    uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
LAB_1007a9194:
    *(undefined8 *)(in_stack_00000028 + 2) = uVar39;
LAB_1007a8f10:
    in_stack_00000028[0] = 2;
    in_stack_00000028[1] = 0;
    goto LAB_1007a8c08;
  }
  _cStack0000000000000060 = CONCAT31(uStack0000000000000061,0x16);
  if (cVar6 == '\x16') {
code_r0x0001007a8fb4:
    _cStack0000000000000060 = CONCAT31(uStack0000000000000061,0x16);
    _cStack00000000000000a0 = (uint *)((long)puVar42 + 2);
    in_stack_00000088 = unaff_x24;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001007a91cc:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1007a91d0);
    (*pcVar9)();
  }
  uVar39 = *(undefined8 *)puVar59;
  *(undefined8 *)(unaff_x27 + 2) = *(undefined8 *)(puVar59 + 2);
  *(undefined8 *)unaff_x27 = uVar39;
  uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
  *(undefined8 *)((long)unaff_x27 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
  *(undefined8 *)((long)unaff_x27 + 0xf) = uVar39;
  *(char *)(unaff_x29 + -0x80) = cVar6;
  func_0x00010128f8c4(unaff_x29 + -0xa0,unaff_x29 + -0x80);
  bVar34 = *(char *)(unaff_x29 + -0xa0) == '\x01';
  goto code_r0x0001007a8b4c;
code_r0x0001007ae35c:
  puVar37 = unaff_x24;
  unaff_x24 = unaff_x26;
code_r0x0001007ae508:
  puVar42 = unaff_x25;
  unaff_x26 = unaff_x24 + 0x10;
  unaff_x25 = (uint *)((long)puVar42 + 1);
  puVar51 = in_stack_00000020;
  puVar64 = puVar58;
  if ((puVar37 + 0x10 == puVar58) ||
     (bVar50 = (byte)*unaff_x24, puVar51 = unaff_x25, puVar64 = unaff_x26, bVar50 == 0x16)) {
    uStack00000000000000c0 = SUB81(puVar51,0);
    uStack00000000000000c1 = (undefined6)((ulong)puVar51 >> 8);
    uStack00000000000000c7 = (undefined1)((ulong)puVar51 >> 0x38);
    uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
    in_stack_000000a8 = puVar64;
    if (unaff_x22 == (uint *)0x8000000000000000) {
      *(undefined **)(unaff_x29 + -0xa0) = &UNK_108ca7b95;
      *(undefined8 *)(unaff_x29 + -0x98) = 7;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
      *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
      unaff_x22 = (uint *)0x0;
      puVar51 = (uint *)thunk_FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x80);
      goto LAB_1007ae5c8;
    }
    puVar59 = (uint *)0x8000000000000000;
    if (unaff_x21 != (uint *)0x8000000000000001) {
      puVar59 = unaff_x21;
    }
    lVar43 = 0;
    if (_uStack0000000000000058 != 2) {
      lVar43 = _uStack0000000000000058;
    }
    *(long *)_uStack0000000000000038 = lVar43;
    *(uint **)(_uStack0000000000000038 + 2) = in_stack_00000018;
    lVar43 = 0;
    if (CONCAT71(uStack0000000000000051,in_stack_00000050) != 2) {
      lVar43 = CONCAT71(uStack0000000000000051,in_stack_00000050);
    }
    *(long *)(_uStack0000000000000038 + 4) = lVar43;
    *(uint **)(_uStack0000000000000038 + 6) = in_stack_00000008;
    lVar43 = 0;
    if (_cStack0000000000000060 != 2) {
      lVar43 = _cStack0000000000000060;
    }
    *(long *)(_uStack0000000000000038 + 8) = lVar43;
    *(uint **)(_uStack0000000000000038 + 10) = in_stack_00000010;
    *(uint **)(_uStack0000000000000038 + 0xc) = unaff_x22;
    *(undefined8 *)(_uStack0000000000000038 + 0xe) = uVar39;
    *(uint **)(_uStack0000000000000038 + 0x10) = puVar47;
    *(uint **)(_uStack0000000000000038 + 0x12) = puVar59;
    *(uint **)(_uStack0000000000000038 + 0x14) = in_stack_00000040;
    *(uint **)(_uStack0000000000000038 + 0x16) = in_stack_00000028;
    FUN_100d34830(&stack0x000000a0);
    if (puVar58 != puVar64) {
      *(uint **)(unaff_x29 + -0x80) = puVar51;
      uVar39 = thunk_FUN_1087e422c(((ulong)((long)puVar58 - (long)puVar64) >> 6) + (long)puVar51,
                                   unaff_x29 + -0x80,&UNK_10b23a190);
      _uStack0000000000000038[0] = 2;
      _uStack0000000000000038[1] = 0;
      *(undefined8 *)(_uStack0000000000000038 + 2) = uVar39;
      if (unaff_x22 != (uint *)0x0) {
        _free(CONCAT71(uStack0000000000000049,bStack0000000000000048));
      }
      if (((ulong)puVar59 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000040);
      }
    }
    goto LAB_1007ae68c;
  }
  *(byte *)(unaff_x29 + -0x80) = bVar50;
  uVar39 = *(undefined8 *)(unaff_x24 + 4);
  *(undefined8 *)((long)puVar59 + 0x17) = *(undefined8 *)(unaff_x24 + 6);
  *(undefined8 *)((long)puVar59 + 0xf) = uVar39;
  uVar39 = *(undefined8 *)((long)unaff_x24 + 1);
  *(undefined8 *)(puVar59 + 2) = *(undefined8 *)((long)unaff_x24 + 9);
  *(undefined8 *)puVar59 = uVar39;
  in_stack_00000088 = *(uint **)(unaff_x24 + 10);
  _cStack0000000000000080 = *(undefined8 *)(unaff_x24 + 8);
  in_stack_00000098 = *(uint **)(unaff_x24 + 0xe);
  in_stack_00000090 = *(uint **)(unaff_x24 + 0xc);
  uVar57 = *(ulong *)(unaff_x29 + -0x78);
  uVar39 = *(undefined8 *)(unaff_x29 + -0x70);
  if (bVar50 < 0xd) {
    if (bVar50 == 1) {
      bVar50 = *(byte *)(unaff_x29 + -0x7f);
      if (4 < bVar50) {
        bVar50 = 5;
      }
      *(byte *)(unaff_x29 + -0x9f) = bVar50;
      *(undefined1 *)(unaff_x29 + -0xa0) = 0;
code_r0x0001007ae204:
      FUN_100e077ec(unaff_x29 + -0x80);
code_r0x0001007ae20c:
      bVar50 = *(byte *)(unaff_x29 + -0xa0);
      uVar39 = _cStack0000000000000080;
      goto joined_r0x0001007ae210;
    }
    if (bVar50 == 4) {
      if (4 < uVar57) {
        uVar57 = 5;
      }
      *(char *)(unaff_x29 + -0x9f) = (char)uVar57;
      *(undefined1 *)(unaff_x29 + -0xa0) = 0;
      goto code_r0x0001007ae204;
    }
    if (bVar50 == 0xc) {
      func_0x000100b22690(unaff_x29 + -0xa0,uVar39);
      if (uVar57 != 0) goto code_r0x0001007ae1c4;
      goto code_r0x0001007ae20c;
    }
code_r0x0001007ae520:
    uVar39 = thunk_FUN_108855b04(unaff_x29 + -0x80,unaff_x29 + -0x59,&UNK_10b20eae0);
    *(undefined8 *)(unaff_x29 + -0x98) = uVar39;
    *(undefined1 *)(unaff_x29 + -0xa0) = 1;
code_r0x0001007ae548:
    lVar43 = (long)puVar42 + 2;
    uStack00000000000000c0 = (undefined1)lVar43;
    uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
    uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
    puVar51 = *(uint **)(unaff_x29 + -0x98);
    goto code_r0x0001007ae558;
  }
  if (bVar50 == 0xd) {
    func_0x000100b22690(unaff_x29 + -0xa0,uVar57,uVar39);
    goto code_r0x0001007ae204;
  }
  if (bVar50 != 0xe) {
    if (bVar50 != 0xf) goto code_r0x0001007ae520;
    func_0x000100b222b8(unaff_x29 + -0xa0,uVar57,uVar39);
    goto code_r0x0001007ae204;
  }
  func_0x000100b222b8(unaff_x29 + -0xa0,uVar39,*(undefined8 *)(unaff_x29 + -0x68));
  if (uVar57 == 0) goto code_r0x0001007ae20c;
code_r0x0001007ae1c4:
  _free(uVar39);
  bVar50 = *(byte *)(unaff_x29 + -0xa0);
  uVar39 = _cStack0000000000000080;
joined_r0x0001007ae210:
  _cStack0000000000000080 = uVar39;
  if ((bVar50 & 1) != 0) goto code_r0x0001007ae548;
  bVar50 = *(byte *)(unaff_x29 + -0x9f);
  uStack0000000000000081 = (undefined7)((ulong)uVar39 >> 8);
  cStack0000000000000080 = (char)uVar39;
  cVar6 = cStack0000000000000080;
  puVar37 = unaff_x24;
  if (2 < bVar50) {
    if (bVar50 == 3) {
      if (CONCAT71(uStack0000000000000051,in_stack_00000050) != 2) {
        lVar43 = (long)puVar42 + 2;
        uStack00000000000000c0 = (undefined1)lVar43;
        uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cae6ba;
        *(undefined8 *)(unaff_x29 + -0x98) = 0xb;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        in_stack_000000a8 = unaff_x26;
        puVar51 = (uint *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        goto LAB_1007ae5c8;
      }
      _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
      if (cVar6 == '\x16') goto code_r0x0001007ae900;
      uVar39 = *(undefined8 *)unaff_x23;
      puVar63 = (undefined8 *)CONCAT71(uStack0000000000000069,bStack0000000000000068);
      puVar63[1] = *(undefined8 *)(unaff_x23 + 2);
      *puVar63 = uVar39;
      uVar39 = *(undefined8 *)((long)unaff_x23 + 0xf);
      *(undefined8 *)((long)puVar63 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
      *(undefined8 *)((long)puVar63 + 0xf) = uVar39;
      *(char *)(unaff_x29 + -0xa0) = cVar6;
      if (cVar6 != '\x10') {
        if (cVar6 == '\x11') {
          puVar63 = *(undefined8 **)(unaff_x29 + -0x98);
          uVar39 = *puVar63;
          *(undefined8 *)(unaff_x29 + -0x78) = puVar63[1];
          *(undefined8 *)(unaff_x29 + -0x80) = uVar39;
          uVar39 = puVar63[2];
          *(undefined8 *)(unaff_x29 + -0x68) = puVar63[3];
          *(undefined8 *)(unaff_x29 + -0x70) = uVar39;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0x80);
          in_stack_00000008 = auVar74._8_8_;
          _free(puVar63);
          lVar43 = auVar74._0_8_ + 1;
          in_stack_00000050 = (byte)lVar43;
          uStack0000000000000051 = (uint7)((ulong)lVar43 >> 8);
          puVar51 = in_stack_00000008;
        }
        else {
          if (cVar6 == '\x12') goto code_r0x0001007ae3b4;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0xa0);
          in_stack_00000008 = auVar74._8_8_;
          lVar43 = auVar74._0_8_ + 1;
          in_stack_00000050 = (byte)lVar43;
          uStack0000000000000051 = (uint7)((ulong)lVar43 >> 8);
          puVar51 = in_stack_00000008;
        }
        goto joined_r0x0001007ae100;
      }
code_r0x0001007ae3b4:
      FUN_100e077ec(unaff_x29 + -0xa0);
      in_stack_00000050 = 0;
      uStack0000000000000051 = 0;
      unaff_x24 = unaff_x26;
    }
    else if (bVar50 == 4) {
      if (_cStack0000000000000060 != 2) {
        lVar43 = (long)puVar42 + 2;
        uStack00000000000000c0 = (undefined1)lVar43;
        uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cae878;
        *(undefined8 *)(unaff_x29 + -0x98) = 0x16;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        in_stack_000000a8 = unaff_x26;
        puVar51 = (uint *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        goto LAB_1007ae5c8;
      }
      _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
      if (cVar6 == '\x16') goto code_r0x0001007ae900;
      uVar39 = *(undefined8 *)unaff_x23;
      puVar63 = (undefined8 *)CONCAT71(uStack0000000000000069,bStack0000000000000068);
      puVar63[1] = *(undefined8 *)(unaff_x23 + 2);
      *puVar63 = uVar39;
      uVar39 = *(undefined8 *)((long)unaff_x23 + 0xf);
      *(undefined8 *)((long)puVar63 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
      *(undefined8 *)((long)puVar63 + 0xf) = uVar39;
      *(char *)(unaff_x29 + -0xa0) = cVar6;
      if (cVar6 != '\x10') {
        if (cVar6 == '\x11') {
          puVar63 = *(undefined8 **)(unaff_x29 + -0x98);
          uVar39 = *puVar63;
          *(undefined8 *)(unaff_x29 + -0x78) = puVar63[1];
          *(undefined8 *)(unaff_x29 + -0x80) = uVar39;
          uVar39 = puVar63[2];
          *(undefined8 *)(unaff_x29 + -0x68) = puVar63[3];
          *(undefined8 *)(unaff_x29 + -0x70) = uVar39;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0x80);
          _free(puVar63);
        }
        else {
          if (cVar6 == '\x12') goto code_r0x0001007ae2f0;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0xa0);
        }
        in_stack_00000010 = auVar74._8_8_;
        _cStack0000000000000060 = auVar74._0_8_ + 1;
        puVar51 = in_stack_00000010;
        lVar43 = _cStack0000000000000060;
        goto joined_r0x0001007ae100;
      }
code_r0x0001007ae2f0:
      FUN_100e077ec(unaff_x29 + -0xa0);
      _cStack0000000000000060 = 0;
      unaff_x24 = unaff_x26;
    }
    else {
      _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
      if (cVar6 == '\x16') {
code_r0x0001007ae900:
        _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
        lVar43 = (long)puVar42 + 2;
        uStack00000000000000c0 = (undefined1)lVar43;
        uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
        in_stack_000000a8 = unaff_x26;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x0001007aecfc;
      }
      uVar39 = *(undefined8 *)unaff_x23;
      *(undefined8 *)(puVar59 + 2) = *(undefined8 *)(unaff_x23 + 2);
      *(undefined8 *)puVar59 = uVar39;
      uVar39 = *(undefined8 *)((long)unaff_x23 + 0xf);
      *(undefined8 *)((long)puVar59 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
      *(undefined8 *)((long)puVar59 + 0xf) = uVar39;
      *(char *)(unaff_x29 + -0x80) = cVar6;
      FUN_100e077ec(unaff_x29 + -0x80);
      unaff_x24 = unaff_x26;
    }
    goto code_r0x0001007ae508;
  }
  if (bVar50 != 0) {
    if (bVar50 == 1) {
      if (unaff_x21 != (uint *)0x8000000000000001) {
        lVar43 = (long)puVar42 + 2;
        uStack00000000000000c0 = (undefined1)lVar43;
        uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cae866;
        *(undefined8 *)(unaff_x29 + -0x98) = 0x12;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        in_stack_000000a8 = unaff_x26;
        uVar40 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        _uStack0000000000000038[0] = 2;
        _uStack0000000000000038[1] = 0;
        *(undefined8 *)(_uStack0000000000000038 + 2) = uVar40;
        unaff_x21 = (uint *)((ulong)unaff_x21 & 0x7fffffffffffffff);
        goto joined_r0x0001007aeb50;
      }
      _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
      if (cVar6 == '\x16') {
        lVar43 = (long)puVar42 + 2;
        uStack00000000000000c0 = (undefined1)lVar43;
        uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
        in_stack_000000a8 = unaff_x26;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x0001007aecfc;
      }
      uVar39 = *(undefined8 *)unaff_x23;
      *(undefined8 *)(puVar59 + 2) = *(undefined8 *)(unaff_x23 + 2);
      *(undefined8 *)puVar59 = uVar39;
      uVar39 = *(undefined8 *)((long)unaff_x23 + 0xf);
      *(undefined8 *)((long)puVar59 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
      *(undefined8 *)((long)puVar59 + 0xf) = uVar39;
      *(char *)(unaff_x29 + -0x80) = cVar6;
      FUN_1004b60cc(unaff_x29 + -0xa0,unaff_x29 + -0x80);
      unaff_x21 = *(uint **)(unaff_x29 + -0xa0);
      if (unaff_x21 == (uint *)0x8000000000000001) {
        lVar43 = (long)puVar42 + 2;
        uStack00000000000000c0 = (undefined1)lVar43;
        uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
        uVar39 = *(undefined8 *)(unaff_x29 + -0x98);
        _uStack0000000000000038[0] = 2;
        _uStack0000000000000038[1] = 0;
        *(undefined8 *)(_uStack0000000000000038 + 2) = uVar39;
        uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        in_stack_000000a8 = unaff_x26;
        goto LAB_1007ae5ec;
      }
      in_stack_00000040 = *(uint **)(unaff_x29 + -0x98);
      in_stack_00000028 = *(uint **)(unaff_x29 + -0x90);
      unaff_x24 = unaff_x26;
    }
    else {
      if (_uStack0000000000000058 != 2) {
        lVar43 = (long)puVar42 + 2;
        uStack00000000000000c0 = (undefined1)lVar43;
        uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cae6ae;
        *(undefined8 *)(unaff_x29 + -0x98) = 0xc;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
        *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
        uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        in_stack_000000a8 = unaff_x26;
        puVar51 = (uint *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
        goto LAB_1007ae5c8;
      }
      _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
      if (cVar6 == '\x16') goto code_r0x0001007ae900;
      uVar39 = *(undefined8 *)unaff_x23;
      puVar63 = (undefined8 *)CONCAT71(uStack0000000000000069,bStack0000000000000068);
      puVar63[1] = *(undefined8 *)(unaff_x23 + 2);
      *puVar63 = uVar39;
      uVar39 = *(undefined8 *)((long)unaff_x23 + 0xf);
      *(undefined8 *)((long)puVar63 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
      *(undefined8 *)((long)puVar63 + 0xf) = uVar39;
      *(char *)(unaff_x29 + -0xa0) = cVar6;
      if (cVar6 == '\x10') {
code_r0x0001007ae414:
        FUN_100e077ec(unaff_x29 + -0xa0);
        _uStack0000000000000058 = 0;
        unaff_x24 = unaff_x26;
      }
      else {
        if (cVar6 == '\x11') {
          puVar63 = *(undefined8 **)(unaff_x29 + -0x98);
          uVar39 = *puVar63;
          *(undefined8 *)(unaff_x29 + -0x78) = puVar63[1];
          *(undefined8 *)(unaff_x29 + -0x80) = uVar39;
          uVar39 = puVar63[2];
          *(undefined8 *)(unaff_x29 + -0x68) = puVar63[3];
          *(undefined8 *)(unaff_x29 + -0x70) = uVar39;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0x80);
          _free(puVar63);
        }
        else {
          if (cVar6 == '\x12') goto code_r0x0001007ae414;
          auVar74 = func_0x000100614fd8(unaff_x29 + -0xa0);
        }
        in_stack_00000018 = auVar74._8_8_;
        _uStack0000000000000058 = auVar74._0_8_ + 1;
        puVar51 = in_stack_00000018;
        lVar43 = _uStack0000000000000058;
joined_r0x0001007ae100:
        unaff_x24 = unaff_x26;
        if (lVar43 == 2) {
          lVar43 = (long)puVar42 + 2;
          uStack00000000000000c0 = (undefined1)lVar43;
          uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
          uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
          goto code_r0x0001007ae558;
        }
      }
    }
    goto code_r0x0001007ae508;
  }
  if (unaff_x22 != (uint *)0x8000000000000000) {
    lVar43 = (long)puVar42 + 2;
    uStack00000000000000c0 = (undefined1)lVar43;
    uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
    uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
    *(undefined **)(unaff_x29 + -0xa0) = &UNK_108ca7b95;
    *(undefined8 *)(unaff_x29 + -0x98) = 7;
    *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xa0;
    *(undefined **)(unaff_x29 + -0x78) = &DAT_100c7b3a0;
    uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
    in_stack_000000a8 = unaff_x26;
    puVar51 = (uint *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x80);
    goto LAB_1007ae5c8;
  }
  _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
  if (cVar6 == '\x16') {
    lVar43 = (long)puVar42 + 2;
    uStack00000000000000c0 = (undefined1)lVar43;
    uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
    uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
    in_stack_000000a8 = unaff_x26;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001007aecfc:
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1007aed00);
    (*pcVar9)();
  }
  uVar39 = *(undefined8 *)unaff_x23;
  *(undefined8 *)(puVar59 + 2) = *(undefined8 *)(unaff_x23 + 2);
  *(undefined8 *)puVar59 = uVar39;
  uVar39 = *(undefined8 *)((long)unaff_x23 + 0xf);
  *(undefined8 *)((long)puVar59 + 0x17) = *(undefined8 *)((long)unaff_x23 + 0x17);
  *(undefined8 *)((long)puVar59 + 0xf) = uVar39;
  *(char *)(unaff_x29 + -0x80) = cVar6;
  FUN_1004b62d4(unaff_x29 + -0xa0,unaff_x29 + -0x80);
  unaff_x22 = *(uint **)(unaff_x29 + -0xa0);
  if (unaff_x22 == (uint *)0x8000000000000000) {
    lVar43 = (long)puVar42 + 2;
    uStack00000000000000c0 = (undefined1)lVar43;
    uStack00000000000000c1 = (undefined6)((ulong)lVar43 >> 8);
    uStack00000000000000c7 = (undefined1)((ulong)lVar43 >> 0x38);
    puVar51 = *(uint **)(unaff_x29 + -0x98);
    unaff_x22 = (uint *)0x0;
code_r0x0001007ae558:
    uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
    in_stack_000000a8 = unaff_x26;
LAB_1007ae5c8:
    _uStack0000000000000038[0] = 2;
    _uStack0000000000000038[1] = 0;
    *(uint **)(_uStack0000000000000038 + 2) = puVar51;
    if (-0x7fffffffffffffff < (long)unaff_x21) {
joined_r0x0001007aeb50:
      if (unaff_x21 != (uint *)0x0) {
        _free(in_stack_00000040);
      }
    }
LAB_1007ae5ec:
    if (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0) {
      _free(uVar39);
    }
    FUN_100d34830(&stack0x000000a0);
    if (cStack0000000000000080 != '\x16') {
      FUN_100e077ec(&stack0x00000080);
    }
LAB_1007ae68c:
    if ((in_stack_00000070._4_4_ & 0x1e) != 0x14) {
      FUN_100e077ec(in_stack_00000078);
    }
    return;
  }
  puVar47 = *(uint **)(unaff_x29 + -0x90);
  bStack0000000000000048 = (byte)*(undefined8 *)(unaff_x29 + -0x98);
  uStack0000000000000049 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -0x98) >> 8);
  goto code_r0x0001007ae35c;
code_r0x0001007b133c:
  if (bVar35) goto joined_r0x0001007b1e28;
  puVar47 = unaff_x21 + 0x10;
  bVar50 = (byte)*unaff_x21;
  in_stack_000000a8 = puVar47;
  if (bVar50 == 0x16) goto joined_r0x0001007b1e28;
  puVar58 = (uint *)((long)unaff_x23 + 1);
  uStack00000000000000c0 = SUB81(puVar58,0);
  uStack00000000000000c1 = (undefined6)((ulong)puVar58 >> 8);
  uStack00000000000000c7 = (undefined1)((ulong)puVar58 >> 0x38);
  uVar40 = *(undefined8 *)((long)unaff_x21 + 9);
  uVar39 = *(undefined8 *)((long)unaff_x21 + 1);
  uVar36 = *(undefined8 *)(unaff_x21 + 4);
  in_stack_00000088 = *(uint **)(unaff_x21 + 10);
  _cStack0000000000000080 = *(undefined8 *)(unaff_x21 + 8);
  *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(unaff_x21 + 6);
  *(undefined8 *)((long)unaff_x22 + 0xf) = uVar36;
  uVar75 = (undefined7)(in_stack_00000448 >> 8);
  uVar57 = CONCAT71(uVar75,bVar50);
  *(undefined8 *)(unaff_x22 + 2) = uVar40;
  *(undefined8 *)unaff_x22 = uVar39;
  in_stack_00000098 = *(uint **)(unaff_x21 + 0xe);
  in_stack_00000090 = *(uint **)(unaff_x21 + 0xc);
  bVar44 = (byte)(in_stack_00000448 >> 8);
  if (bVar50 < 0xd) {
    if (bVar50 == 1) {
      bVar50 = bVar44;
      if (3 < bVar44) {
        bVar50 = 4;
      }
      goto code_r0x0001007b15f8;
    }
    if (bVar50 == 4) {
      plVar1 = in_stack_00000450;
      if ((long *)0x3 < in_stack_00000450) {
        plVar1 = (long *)0x4;
      }
      *(char *)(unaff_x29 + -0x87) = (char)plVar1;
      goto code_r0x0001007b15fc;
    }
    if (bVar50 == 0xc) {
      if (in_stack_00000460 < 9) {
        if (in_stack_00000460 == 4) {
          if ((int)*in_stack_00000458 == 0x6d657469) {
            *(undefined1 *)(unaff_x29 + -0x87) = 2;
            *(undefined1 *)(unaff_x29 + -0x88) = 0;
          }
          else {
code_r0x0001007b1594:
            *(undefined1 *)(unaff_x29 + -0x87) = 4;
            *(undefined1 *)(unaff_x29 + -0x88) = 0;
          }
        }
        else {
          if ((in_stack_00000460 != 7) ||
             ((int)*in_stack_00000458 != 0x6e727574 ||
              *(int *)((long)in_stack_00000458 + 3) != 0x64695f6e)) goto code_r0x0001007b1594;
          *(undefined1 *)(unaff_x29 + -0x87) = 1;
          *(undefined1 *)(unaff_x29 + -0x88) = 0;
        }
      }
      else if (in_stack_00000460 == 9) {
        if (*in_stack_00000458 != 0x695f646165726874 || (char)in_stack_00000458[1] != 'd')
        goto code_r0x0001007b1594;
        *(undefined1 *)(unaff_x29 + -0x87) = 0;
        *(undefined1 *)(unaff_x29 + -0x88) = 0;
      }
      else {
        if ((in_stack_00000460 != 0xf) ||
           (*in_stack_00000458 != 0x6574656c706d6f63 ||
            *(long *)((long)in_stack_00000458 + 7) != 0x736d5f74615f6465))
        goto code_r0x0001007b1594;
        *(undefined1 *)(unaff_x29 + -0x87) = 3;
        *(undefined1 *)(unaff_x29 + -0x88) = 0;
      }
joined_r0x0001007b1928:
      if (in_stack_00000450 != (long *)0x0) {
        _free(in_stack_00000458);
      }
    }
    else {
code_r0x0001007b1b5c:
      uVar39 = thunk_FUN_108855b04(&stack0x00000448,unaff_x29 + -0x61,&UNK_10b210fc0);
      *(undefined8 *)(unaff_x29 + -0x80) = uVar39;
      *(undefined1 *)(unaff_x29 + -0x88) = 1;
    }
  }
  else {
    if (bVar50 == 0xd) {
      if ((long)in_stack_00000458 < 9) {
        if (in_stack_00000458 == (long *)0x4) {
          if ((int)*in_stack_00000450 == 0x6d657469) {
            bVar50 = 2;
          }
          else {
code_r0x0001007b15f4:
            bVar50 = 4;
          }
        }
        else {
          if ((in_stack_00000458 != (long *)0x7) ||
             ((int)*in_stack_00000450 != 0x6e727574 ||
              *(int *)((long)in_stack_00000450 + 3) != 0x64695f6e)) goto code_r0x0001007b15f4;
          bVar50 = 1;
        }
      }
      else if (in_stack_00000458 == (long *)0x9) {
        if (*in_stack_00000450 != 0x695f646165726874 || (char)in_stack_00000450[1] != 'd')
        goto code_r0x0001007b15f4;
        bVar50 = 0;
      }
      else {
        if ((in_stack_00000458 != (long *)0xf) ||
           (*in_stack_00000450 != 0x6574656c706d6f63 ||
            *(long *)((long)in_stack_00000450 + 7) != 0x736d5f74615f6465))
        goto code_r0x0001007b15f4;
        bVar50 = 3;
      }
code_r0x0001007b15f8:
      *(byte *)(unaff_x29 + -0x87) = bVar50;
code_r0x0001007b15fc:
      *(undefined1 *)(unaff_x29 + -0x88) = 0;
    }
    else {
      if (bVar50 == 0xe) {
        func_0x000100b232c0(unaff_x29 + -0x88,in_stack_00000458);
        goto joined_r0x0001007b1928;
      }
      if (bVar50 != 0xf) goto code_r0x0001007b1b5c;
      func_0x000100b232c0(unaff_x29 + -0x88,in_stack_00000450,in_stack_00000458);
    }
    FUN_100e077ec(&stack0x00000448);
  }
  if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) {
code_r0x0001007b1cf4:
    uVar39 = *(undefined8 *)(unaff_x29 + -0x80);
code_r0x0001007b1cf8:
    uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
    in_stack_00000030[0] = 0;
    in_stack_00000030[1] = 0x80000000;
    *(undefined8 *)(in_stack_00000030 + 2) = uVar39;
    goto joined_r0x0001007b1d20;
  }
  bVar50 = *(byte *)(unaff_x29 + -0x87);
  if (bVar50 < 2) {
    if (bVar50 == 0) {
      if ((uStack0000000000000064 & 1) == 0) {
        cVar6 = cStack0000000000000080;
        _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
        if (cVar6 == '\x16') goto code_r0x0001007b2200;
        uVar39 = *(undefined8 *)puVar59;
        *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(puVar59 + 2);
        *(undefined8 *)unaff_x22 = uVar39;
        uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
        *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
        *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
        FUN_1011ec168(unaff_x29 + -0x88,&stack0x00000448);
        if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) {
          uVar39 = *(undefined8 *)(unaff_x29 + -0x80);
          goto code_r0x0001007b1cf8;
        }
        uVar3 = *(undefined4 *)((long)CONCAT44(uStack000000000000005c,_uStack0000000000000058) + 3);
        in_stack_00000440 =
             CONCAT13((char)uVar3,
                      (int3)*(undefined4 *)CONCAT44(uStack000000000000005c,_uStack0000000000000058))
        ;
        in_stack_00000444 = (undefined3)((uint)uVar3 >> 8);
        in_stack_00000018 = *(uint **)(unaff_x29 + -0x80);
        bVar50 = *(byte *)(unaff_x29 + -0x78);
        in_stack_00000010 = (uint *)((ulong)bVar50 << 0x20);
        bVar13 = puVar47 != in_stack_00000078;
        puVar47 = in_stack_00000078;
        if (bVar13) {
          puVar47 = unaff_x21 + 0x20;
          bVar4 = (byte)unaff_x21[0x10];
          in_stack_000000a8 = puVar47;
          if (bVar4 != 0x16) {
            puVar58 = (uint *)((long)unaff_x23 + 2);
            uStack00000000000000c0 = SUB81(puVar58,0);
            uStack00000000000000c1 = (undefined6)((ulong)puVar58 >> 8);
            uStack00000000000000c7 = (undefined1)((ulong)puVar58 >> 0x38);
            uVar57 = CONCAT71(uVar75,bVar4);
            uVar39 = *(undefined8 *)(unaff_x21 + 0x14);
            in_stack_00000088 = *(uint **)(unaff_x21 + 0x1a);
            _cStack0000000000000080 = *(undefined8 *)(unaff_x21 + 0x18);
            *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(unaff_x21 + 0x16);
            *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
            uVar39 = *(undefined8 *)((long)unaff_x21 + 0x41);
            *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)((long)unaff_x21 + 0x49);
            *(undefined8 *)unaff_x22 = uVar39;
            in_stack_00000098 = *(uint **)(unaff_x21 + 0x1e);
            in_stack_00000090 = *(uint **)(unaff_x21 + 0x1c);
            if (bVar4 < 0xd) {
              if (bVar4 == 1) {
                if (3 < bVar44) {
                  bVar44 = 4;
                }
                goto code_r0x0001007b1a04;
              }
              if (bVar4 == 4) {
                plVar1 = in_stack_00000450;
                if ((long *)0x3 < in_stack_00000450) {
                  plVar1 = (long *)0x4;
                }
                *(char *)(unaff_x29 + -0x87) = (char)plVar1;
                goto code_r0x0001007b1a08;
              }
              if (bVar4 == 0xc) {
                if (in_stack_00000460 < 9) {
                  if (in_stack_00000460 == 4) {
                    if ((int)*in_stack_00000458 == 0x6d657469) {
                      *(undefined1 *)(unaff_x29 + -0x87) = 2;
                      *(undefined1 *)(unaff_x29 + -0x88) = 0;
                    }
                    else {
code_r0x0001007b1994:
                      *(undefined1 *)(unaff_x29 + -0x87) = 4;
                      *(undefined1 *)(unaff_x29 + -0x88) = 0;
                    }
                  }
                  else {
                    if ((in_stack_00000460 != 7) ||
                       ((int)*in_stack_00000458 != 0x6e727574 ||
                        *(int *)((long)in_stack_00000458 + 3) != 0x64695f6e))
                    goto code_r0x0001007b1994;
                    *(undefined1 *)(unaff_x29 + -0x87) = 1;
                    *(undefined1 *)(unaff_x29 + -0x88) = 0;
                  }
                }
                else if (in_stack_00000460 == 0xf) {
                  if (*in_stack_00000458 != 0x6574656c706d6f63 ||
                      *(long *)((long)in_stack_00000458 + 7) != 0x736d5f74615f6465)
                  goto code_r0x0001007b1994;
                  *(undefined1 *)(unaff_x29 + -0x87) = 3;
                  *(undefined1 *)(unaff_x29 + -0x88) = 0;
                }
                else {
                  if ((in_stack_00000460 != 9) ||
                     (*in_stack_00000458 != 0x695f646165726874 || (char)in_stack_00000458[1] != 'd')
                     ) goto code_r0x0001007b1994;
                  *(undefined1 *)(unaff_x29 + -0x87) = 0;
                  *(undefined1 *)(unaff_x29 + -0x88) = 0;
                }
joined_r0x0001007b1b4c:
                if (in_stack_00000450 != (long *)0x0) {
                  _free(in_stack_00000458);
                }
              }
              else {
code_r0x0001007b1b80:
                uVar39 = thunk_FUN_108855b04(&stack0x00000448,unaff_x29 + -0x61,&UNK_10b210fc0);
                *(undefined8 *)(unaff_x29 + -0x80) = uVar39;
                *(undefined1 *)(unaff_x29 + -0x88) = 1;
              }
            }
            else {
              if (bVar4 == 0xd) {
                if ((long)in_stack_00000458 < 9) {
                  if (in_stack_00000458 == (long *)0x4) {
                    if ((int)*in_stack_00000450 == 0x6d657469) {
                      bVar44 = 2;
                    }
                    else {
code_r0x0001007b1a00:
                      bVar44 = 4;
                    }
                  }
                  else {
                    if ((in_stack_00000458 != (long *)0x7) ||
                       ((int)*in_stack_00000450 != 0x6e727574 ||
                        *(int *)((long)in_stack_00000450 + 3) != 0x64695f6e))
                    goto code_r0x0001007b1a00;
                    bVar44 = 1;
                  }
                }
                else if (in_stack_00000458 == (long *)0xf) {
                  if (*in_stack_00000450 != 0x6574656c706d6f63 ||
                      *(long *)((long)in_stack_00000450 + 7) != 0x736d5f74615f6465)
                  goto code_r0x0001007b1a00;
                  bVar44 = 3;
                }
                else {
                  if ((in_stack_00000458 != (long *)0x9) ||
                     (*in_stack_00000450 != 0x695f646165726874 || (char)in_stack_00000450[1] != 'd')
                     ) goto code_r0x0001007b1a00;
                  bVar44 = 0;
                }
code_r0x0001007b1a04:
                *(byte *)(unaff_x29 + -0x87) = bVar44;
code_r0x0001007b1a08:
                *(undefined1 *)(unaff_x29 + -0x88) = 0;
              }
              else {
                if (bVar4 == 0xe) {
                  func_0x000100b232c0(unaff_x29 + -0x88,in_stack_00000458);
                  goto joined_r0x0001007b1b4c;
                }
                if (bVar4 != 0xf) goto code_r0x0001007b1b80;
                func_0x000100b232c0(unaff_x29 + -0x88,in_stack_00000450,in_stack_00000458);
              }
              FUN_100e077ec(&stack0x00000448);
            }
            if ((*(byte *)(unaff_x29 + -0x88) & 1) != 0) goto code_r0x0001007b1cf4;
            bVar50 = *(byte *)(unaff_x29 + -0x87);
            uStack0000000000000064 = 1;
            if (2 < bVar50) goto code_r0x0001007b1624;
            if (bVar50 == 1) goto code_r0x0001007b1ad8;
            if (bVar50 == 2) goto code_r0x0001007b1a40;
            goto code_r0x0001007b211c;
          }
        }
        uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
        uVar57 = in_stack_00000070;
        goto joined_r0x0001007b1e34;
      }
code_r0x0001007b211c:
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca2143;
      *(undefined8 *)(unaff_x29 + -0x80) = 9;
      uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000448);
      goto LAB_1007b1c90;
    }
code_r0x0001007b1ad8:
    if (unaff_x27 != (uint *)0x8000000000000000) {
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca7b95;
      *(undefined8 *)(unaff_x29 + -0x80) = 7;
      uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000448);
      goto LAB_1007b1c90;
    }
    cVar6 = cStack0000000000000080;
    _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
    if (cVar6 == '\x16') {
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x0001007b24a4;
    }
    uVar39 = *(undefined8 *)puVar59;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(puVar59 + 2);
    *(undefined8 *)unaff_x22 = uVar39;
    uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
    uVar57 = uVar57 & 0xffffffffffffff00;
    FUN_1004b62d4(unaff_x29 + -0x88,&stack0x00000448);
    unaff_x27 = *(uint **)(unaff_x29 + -0x88);
    if (unaff_x27 == (uint *)0x8000000000000000) {
      unaff_x27 = (uint *)0x0;
      goto code_r0x0001007b1cf4;
    }
    in_stack_00000020 = *(uint **)(unaff_x29 + -0x78);
    in_stack_00000050 = (byte)*(undefined8 *)(unaff_x29 + -0x80);
    uStack0000000000000051 = (uint7)((ulong)*(undefined8 *)(unaff_x29 + -0x80) >> 8);
    unaff_x21 = puVar47;
  }
  else if (bVar50 == 2) {
code_r0x0001007b1a40:
    if (in_stack_00000070 != 0x800000000000000b) {
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108cde378;
      *(undefined8 *)(unaff_x29 + -0x80) = 4;
      uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000448);
      in_stack_00000030[0] = 0;
      in_stack_00000030[1] = 0x80000000;
      *(undefined8 *)(in_stack_00000030 + 2) = uVar39;
      uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
      goto LAB_1007b1d24;
    }
    cVar6 = cStack0000000000000080;
    _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
    if (cVar6 == '\x16') {
      in_stack_00000070 = 0x800000000000000b;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x0001007b24a4;
    }
    uVar39 = *(undefined8 *)puVar59;
    puVar63 = (undefined8 *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
    puVar63[1] = *(undefined8 *)(puVar59 + 2);
    *puVar63 = uVar39;
    uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
    *(undefined8 *)((long)puVar63 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
    *(undefined8 *)((long)puVar63 + 0xf) = uVar39;
    *(char *)(unaff_x29 + -0x88) = cVar6;
    in_stack_00000070 = 0x800000000000000b;
    func_0x0001013c1f8c(&stack0x00000448,unaff_x29 + -0x88);
    bStack0000000000000048 = (byte)in_stack_00000450;
    uStack0000000000000049 = (undefined7)((ulong)in_stack_00000450 >> 8);
    if (uVar57 == 0x800000000000000b) {
      in_stack_00000030[0] = 0;
      in_stack_00000030[1] = 0x80000000;
      *(long **)(in_stack_00000030 + 2) = in_stack_00000450;
      uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
      unaff_x27 = (uint *)((ulong)unaff_x27 & 0x7fffffffffffffff);
      goto joined_r0x0001007b1f88;
    }
    _memcpy(&stack0x000002b0,&stack0x00000458,400);
    unaff_x21 = puVar47;
    in_stack_00000070 = uVar57;
  }
  else {
code_r0x0001007b1624:
    cVar6 = cStack0000000000000080;
    uVar76 = (uint7)(uVar57 >> 8);
    unaff_x21 = puVar47;
    if (bVar50 == 3) {
      if (CONCAT71(uStack0000000000000069,bStack0000000000000068) == 1) {
        *(undefined **)(unaff_x29 + -0x88) = &UNK_108cae8c3;
        *(undefined8 *)(unaff_x29 + -0x80) = 0xf;
        uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000448);
        goto LAB_1007b1c90;
      }
      _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
      if (cVar6 == '\x16') goto code_r0x0001007b2200;
      uVar39 = *(undefined8 *)puVar59;
      *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(puVar59 + 2);
      *(undefined8 *)unaff_x22 = uVar39;
      uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
      uVar57 = (ulong)uVar76 << 8;
      auVar74 = func_0x000100614fd8(&stack0x00000448);
      in_stack_00000028 = auVar74._8_8_;
      if ((auVar74._0_8_ & 1) != 0) {
        uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
        in_stack_00000030[0] = 0;
        in_stack_00000030[1] = 0x80000000;
        *(uint **)(in_stack_00000030 + 2) = in_stack_00000028;
        goto joined_r0x0001007b1d20;
      }
      bStack0000000000000068 = 1;
      uStack0000000000000069 = 0;
    }
    else {
      _cStack0000000000000080 = CONCAT71(uStack0000000000000081,0x16);
      if (cVar6 == '\x16') {
code_r0x0001007b2200:
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001007b24a4:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1007b24a8);
        (*pcVar9)();
      }
      uVar39 = *(undefined8 *)puVar59;
      *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(puVar59 + 2);
      *(undefined8 *)unaff_x22 = uVar39;
      uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
      uVar57 = (ulong)uVar76 << 8;
      FUN_100e077ec(&stack0x00000448);
    }
  }
  bVar35 = unaff_x21 == in_stack_00000078;
  puVar47 = in_stack_00000078;
  unaff_x23 = puVar58;
  in_stack_00000448 = uVar57;
  goto code_r0x0001007b133c;
code_r0x0001007934c0:
  unaff_x26 = puVar59 + (long)unaff_x28 * 8;
code_r0x0001007934c4:
  *(uint **)(unaff_x29 + -0x100) = puVar59;
  *(uint **)(unaff_x29 + -0xf8) = puVar59;
code_r0x0001007934c8:
  *(uint **)(unaff_x29 + -0xf0) = unaff_x25;
  *(uint **)(unaff_x29 + -0xe8) = unaff_x26;
code_r0x0001007934cc:
  *(undefined8 *)(unaff_x29 + -0xe0) = 0;
  unaff_x21 = puVar59;
code_r0x0001007934d4:
  if (unaff_x28 == (uint *)0x0) {
code_r0x0001007934ec:
    puVar42 = (uint *)&UNK_10b22e000;
code_r0x0001007934f0:
    puVar42 = puVar42 + 0xde;
code_r0x0001007934fc:
    puVar37 = (uint *)0x0;
code_r0x000100793500:
    puVar37 = (uint *)thunk_FUN_1087e422c(puVar37,puVar42);
code_r0x000100793504:
    unaff_x22 = puVar37;
code_r0x000100793508:
    puVar47 = (uint *)0x4;
code_r0x00010079350c:
    *(uint **)unaff_x27 = puVar47;
    *(uint **)(unaff_x27 + 2) = unaff_x22;
  }
  else {
code_r0x0001007934d8:
    puVar60 = puVar59;
code_r0x0001007934dc:
    unaff_x21 = puVar60 + 8;
    puVar47 = (uint *)(ulong)(byte)*puVar60;
code_r0x0001007934e0:
    *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
code_r0x0001007934e4:
    bVar15 = (int)puVar47 == 0x16;
code_r0x0001007934e8:
    if (bVar15) goto code_r0x0001007934ec;
    uVar39 = *(undefined8 *)((long)puVar59 + 1);
    uStack00000000000000b9 = (undefined6)*(undefined8 *)((long)puVar59 + 9);
    uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)((long)puVar59 + 9) >> 0x30);
    bStack00000000000000b1 = (byte)uVar39;
    uStack00000000000000b2 = (undefined5)((ulong)uVar39 >> 8);
    uStack00000000000000b7 = (undefined1)((ulong)uVar39 >> 0x30);
    uStack00000000000000b8 = (undefined1)((ulong)uVar39 >> 0x38);
    uVar39 = *(undefined8 *)(puVar59 + 4);
    uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 6);
    uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 6) >> 0x38);
    uStack00000000000000c0 = (undefined1)uVar39;
    uStack00000000000000c1 = (undefined6)((ulong)uVar39 >> 8);
    uStack00000000000000c7 = (undefined1)((ulong)uVar39 >> 0x38);
    *(undefined8 *)(unaff_x29 + -0xe0) = 1;
    bStack00000000000000b0 = (byte)puVar47;
    FUN_1004b62d4(&stack0x00000048,&stack0x000000b0);
    lVar43 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
    unaff_x22 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
    if (lVar43 == -0x8000000000000000) goto code_r0x000100793508;
    if (unaff_x28 == (uint *)0x1) {
code_r0x000100793d08:
      uVar40 = thunk_FUN_1087e422c(1,&UNK_10b22e378,&UNK_10b20a590);
code_r0x000100793d24:
      unaff_x27[0] = 4;
      unaff_x27[1] = 0;
      *(undefined8 *)(unaff_x27 + 2) = uVar40;
    }
    else {
      uVar39 = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
      unaff_x21 = puVar59 + 0x10;
      *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
      uVar46 = puVar59[8];
      if ((byte)uVar46 == 0x16) goto code_r0x000100793d08;
      uVar40 = *(undefined8 *)((long)puVar59 + 0x21);
      uStack00000000000000b9 = (undefined6)*(undefined8 *)((long)puVar59 + 0x29);
      uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)((long)puVar59 + 0x29) >> 0x30);
      bStack00000000000000b1 = (byte)uVar40;
      uStack00000000000000b2 = (undefined5)((ulong)uVar40 >> 8);
      uStack00000000000000b7 = (undefined1)((ulong)uVar40 >> 0x30);
      uStack00000000000000b8 = (undefined1)((ulong)uVar40 >> 0x38);
      uVar40 = *(undefined8 *)(puVar59 + 0xc);
      uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 0xe);
      uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 0xe) >> 0x38);
      uStack00000000000000c0 = (undefined1)uVar40;
      uStack00000000000000c1 = (undefined6)((ulong)uVar40 >> 8);
      uStack00000000000000c7 = (undefined1)((ulong)uVar40 >> 0x38);
      *(undefined8 *)(unaff_x29 + -0xe0) = 2;
      bStack00000000000000b0 = (byte)uVar46;
      FUN_1004b60cc(&stack0x00000048,&stack0x000000b0);
      uVar57 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
      uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
      if (uVar57 == 0x8000000000000001) goto code_r0x000100793d24;
      if (unaff_x28 == (uint *)0x2) {
code_r0x0001007945c8:
        uVar38 = thunk_FUN_1087e422c(2,&UNK_10b22e378,&UNK_10b20a590);
      }
      else {
        uVar36 = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
        unaff_x21 = puVar59 + 0x18;
        *(uint **)(unaff_x29 + -0xf8) = unaff_x21;
        uVar46 = puVar59[0x10];
        if ((byte)uVar46 == 0x16) goto code_r0x0001007945c8;
        uVar38 = *(undefined8 *)((long)puVar59 + 0x41);
        uStack00000000000000b9 = (undefined6)*(undefined8 *)((long)puVar59 + 0x49);
        uStack00000000000000bf = (undefined1)((ulong)*(undefined8 *)((long)puVar59 + 0x49) >> 0x30);
        bStack00000000000000b1 = (byte)uVar38;
        uStack00000000000000b2 = (undefined5)((ulong)uVar38 >> 8);
        uStack00000000000000b7 = (undefined1)((ulong)uVar38 >> 0x30);
        uStack00000000000000b8 = (undefined1)((ulong)uVar38 >> 0x38);
        uVar38 = *(undefined8 *)(puVar59 + 0x14);
        uStack00000000000000c8 = (undefined7)*(undefined8 *)(puVar59 + 0x16);
        uStack00000000000000cf = (undefined1)((ulong)*(undefined8 *)(puVar59 + 0x16) >> 0x38);
        uStack00000000000000c0 = (undefined1)uVar38;
        uStack00000000000000c1 = (undefined6)((ulong)uVar38 >> 8);
        uStack00000000000000c7 = (undefined1)((ulong)uVar38 >> 0x38);
        *(undefined8 *)(unaff_x29 + -0xe0) = 3;
        bStack00000000000000b0 = (byte)uVar46;
        FUN_1004b60cc(&stack0x00000048,&stack0x000000b0);
        uVar38 = CONCAT71(uStack0000000000000051,in_stack_00000050);
        if (CONCAT71(uStack0000000000000049,bStack0000000000000048) != -0x7fffffffffffffff) {
          unaff_x27[0] = 2;
          unaff_x27[1] = 0;
          *(ulong *)(unaff_x27 + 2) = uVar57;
          *(undefined8 *)(unaff_x27 + 4) = uVar40;
          *(undefined8 *)(unaff_x27 + 6) = uVar36;
          *(long *)(unaff_x27 + 8) = CONCAT71(uStack0000000000000049,bStack0000000000000048);
          *(undefined8 *)(unaff_x27 + 10) = uVar38;
          *(ulong *)(unaff_x27 + 0xc) = CONCAT44(uStack000000000000005c,_uStack0000000000000058);
          *(long *)(unaff_x27 + 0xe) = lVar43;
          *(uint **)(unaff_x27 + 0x10) = unaff_x22;
          *(undefined8 *)(unaff_x27 + 0x12) = uVar39;
          in_stack_000001c8 = *(undefined8 *)(unaff_x27 + 10);
          in_stack_000001c0 = *(undefined8 *)(unaff_x27 + 8);
          in_stack_000001d8 = *(undefined8 *)(unaff_x27 + 0xe);
          in_stack_000001d0 = *(undefined8 *)(unaff_x27 + 0xc);
          in_stack_000001e8 = *(undefined8 *)(unaff_x27 + 0x12);
          in_stack_000001e0 = *(undefined8 *)(unaff_x27 + 0x10);
          in_stack_000001a8 = *(undefined8 *)(unaff_x27 + 2);
          in_stack_000001a0 = *(uint **)unaff_x27;
          in_stack_000001b8 = *(undefined8 *)(unaff_x27 + 6);
          in_stack_000001b0 = *(undefined8 *)(unaff_x27 + 4);
          lVar43 = FUN_100fbc738(unaff_x29 + -0x100);
code_r0x0001007946f4:
          if (lVar43 == 0) goto code_r0x0001007941dc;
          unaff_x27[0] = 4;
          unaff_x27[1] = 0;
          *(long *)(unaff_x27 + 2) = lVar43;
          goto code_r0x000100793c88;
        }
      }
      unaff_x27[0] = 4;
      unaff_x27[1] = 0;
      *(undefined8 *)(unaff_x27 + 2) = uVar38;
      if ((uVar57 & 0x7fffffffffffffff) != 0) {
        _free(uVar40);
      }
    }
    if (lVar43 != 0) {
      _free(unaff_x22);
    }
  }
code_r0x000100793510:
  puVar47 = (uint *)((long)unaff_x26 - (long)unaff_x21);
code_r0x000100793514:
  puVar47 = (uint *)((ulong)puVar47 >> 5);
code_r0x000100793518:
  unaff_x22 = (uint *)((long)puVar47 + 1);
code_r0x00010079351c:
  while( true ) {
    unaff_x22 = (uint *)((long)unaff_x22 + -1);
    bVar15 = unaff_x22 == (uint *)0x0;
code_r0x000100793520:
    if (bVar15) break;
code_r0x000100793524:
    puVar58 = unaff_x21 + 8;
code_r0x000100793528:
    puVar37 = unaff_x21;
code_r0x00010079352c:
    FUN_100e077ec(puVar37);
code_r0x000100793530:
    unaff_x21 = puVar58;
code_r0x000100793534:
  }
code_r0x000100793538:
  if (unaff_x25 == (uint *)0x0) {
code_r0x00010079353c:
    goto code_r0x0001007941dc;
  }
code_r0x000100793648:
  puVar37 = puVar59;
code_r0x00010079364c:
  _free(puVar37);
code_r0x000100793650:
  goto code_r0x0001007941dc;
code_r0x0001007922f8:
  func_0x0001013efd54();
  puVar47 = in_stack_00000118;
  if (cStack0000000000000110 != '\x16') goto code_r0x000100793654;
code_r0x00010079230c:
  in_stack_00000050 = (byte)puVar47;
  uStack0000000000000051 = (uint7)((ulong)puVar47 >> 8);
  unaff_x20 = *(uint **)(unaff_x29 + -0xf8);
  unaff_x19 = *(long *)(unaff_x29 + -0xe8);
  goto code_r0x00010079207c;
code_r0x000100793394:
code_r0x0001007932f0:
  bVar50 = *(byte *)(unaff_x29 + -0x100);
  puVar47 = (uint *)(ulong)bVar50;
  *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
  if (bVar50 != 0x16) {
code_r0x000100793304:
    uVar39 = *(undefined8 *)unaff_x21;
    *(undefined8 *)(unaff_x28 + 2) = *(undefined8 *)(unaff_x21 + 2);
    *(undefined8 *)unaff_x28 = uVar39;
code_r0x00010079330c:
    uVar39 = *(undefined8 *)((long)unaff_x21 + 0xf);
    *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
    *(undefined8 *)((long)unaff_x28 + 0xf) = uVar39;
    bStack00000000000000b0 = (byte)puVar47;
    FUN_100e077ec(&stack0x000000b0);
    puVar58 = unaff_x26;
    unaff_x26 = puVar64;
    do {
      puVar37 = unaff_x25 + 0x10;
      unaff_x24 = (uint *)((long)unaff_x24 + 1);
      puVar51 = in_stack_00000030;
      puVar64 = unaff_x26;
      unaff_x25 = puVar58;
      if (puVar37 == unaff_x26) {
code_r0x000100793960:
        *(uint **)(unaff_x29 + -0xd8) = unaff_x26;
        *(uint **)(unaff_x29 + -0xc0) = puVar51;
        if (unaff_x22 == (uint *)0x8000000000000000) goto code_r0x00010079397c;
        in_stack_00000040[0] = 3;
        in_stack_00000040[1] = 0;
        *(uint **)(in_stack_00000040 + 2) = unaff_x22;
        *(uint **)(in_stack_00000040 + 4) = puVar59;
        *(uint **)(in_stack_00000040 + 6) = _uStack0000000000000038;
        in_stack_000001c8 = *(undefined8 *)(in_stack_00000040 + 10);
        in_stack_000001c0 = *(undefined8 *)(in_stack_00000040 + 8);
        in_stack_000001d8 = *(undefined8 *)(in_stack_00000040 + 0xe);
        in_stack_000001d0 = *(undefined8 *)(in_stack_00000040 + 0xc);
        in_stack_000001e8 = *(undefined8 *)(in_stack_00000040 + 0x12);
        in_stack_000001e0 = *(undefined8 *)(in_stack_00000040 + 0x10);
        in_stack_000001a8 = *(undefined8 *)(in_stack_00000040 + 2);
        in_stack_000001a0 = *(uint **)in_stack_00000040;
        in_stack_000001b8 = *(undefined8 *)(in_stack_00000040 + 6);
        in_stack_000001b0 = *(undefined8 *)(in_stack_00000040 + 4);
        lVar43 = FUN_100fbc67c(unaff_x29 + -0x100);
        goto code_r0x000100793c7c;
      }
code_r0x000100793194:
      unaff_x26 = unaff_x25 + 0x10;
      bVar50 = (byte)*unaff_x25;
      puVar51 = unaff_x24;
      if (bVar50 == 0x16) goto code_r0x000100793960;
      uVar39 = *(undefined8 *)(unaff_x25 + 4);
      *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)(unaff_x25 + 6);
      *(undefined8 *)((long)unaff_x28 + 0xf) = uVar39;
      uVar39 = *(undefined8 *)((long)unaff_x25 + 1);
      *(undefined8 *)(unaff_x28 + 2) = *(undefined8 *)((long)unaff_x25 + 9);
      *(undefined8 *)unaff_x28 = uVar39;
      in_stack_00000158 = *(undefined8 *)(unaff_x25 + 10);
      in_stack_00000150 = *(undefined8 *)(unaff_x25 + 8);
      in_stack_00000168 = *(undefined8 *)(unaff_x25 + 0xe);
      in_stack_00000160 = *(undefined8 *)(unaff_x25 + 0xc);
      puVar47 = (uint *)CONCAT17(uStack00000000000000bf,
                                 CONCAT61(uStack00000000000000b9,uStack00000000000000b8));
      puVar8 = (ushort *)
               CONCAT17(uStack00000000000000c7,
                        CONCAT61(uStack00000000000000c1,uStack00000000000000c0));
      bStack00000000000000b0 = bVar50;
      if (0xc < bVar50) {
        if (bVar50 != 0xd) {
          if (bVar50 == 0xe) {
            if (((CONCAT17(uStack00000000000000cf,uStack00000000000000c8) == 3) &&
                ((char)*puVar8 == 'c')) && (*(char *)((long)puVar8 + 1) == 'm')) {
              uVar32 = (char)puVar8[1] != 'd';
            }
            else {
code_r0x000100793324:
              uVar32 = true;
            }
            if (puVar47 != (uint *)0x0) {
              _free();
            }
            goto joined_r0x000100793330;
          }
          if (bVar50 == 0xf) {
            if (((puVar8 != (ushort *)0x3) || ((char)*puVar47 != 'c')) ||
               (*(char *)((long)puVar47 + 1) != 'm')) goto code_r0x0001007932e0;
            bVar13 = *(char *)((long)puVar47 + 2) == 'd';
            goto code_r0x0001007932d8;
          }
code_r0x000100794cf0:
          *(uint **)(unaff_x29 + -0xd8) = unaff_x26;
          *(long *)(unaff_x29 + -0xc0) = (long)unaff_x24 + 1;
          uVar39 = thunk_FUN_108855b04(&stack0x000000b0,&stack0x00000048,&UNK_10b2123e0);
          in_stack_00000040[0] = 4;
          in_stack_00000040[1] = 0;
          *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
          unaff_x22 = (uint *)((ulong)unaff_x22 & 0x7fffffffffffffff);
joined_r0x000100794d24:
          if (unaff_x22 != (uint *)0x0) {
            _free(puVar59);
          }
          goto LAB_1007939bc;
        }
        if (puVar8 == (ushort *)0x3) {
          bVar13 = false;
          if ((short)*puVar47 == 0x6d63) {
            bVar13 = *(char *)((long)puVar47 + 2) == 'd';
          }
          goto code_r0x0001007932d8;
        }
code_r0x0001007932e0:
        uVar32 = true;
code_r0x0001007932e4:
        FUN_100e077ec(&stack0x000000b0);
joined_r0x000100793330:
        if (!(bool)uVar32) goto code_r0x000100793334;
        goto code_r0x0001007932f0;
      }
      if (bVar50 == 1) {
        bVar13 = bStack00000000000000b1 == 0;
code_r0x0001007932d8:
        uVar32 = !bVar13;
        goto code_r0x0001007932e4;
      }
      if (bVar50 == 4) {
        bVar13 = puVar47 == (uint *)0x0;
        goto code_r0x0001007932d8;
      }
      if (bVar50 != 0xc) goto code_r0x000100794cf0;
      if (CONCAT17(uStack00000000000000cf,uStack00000000000000c8) != 3) goto code_r0x00010079338c;
      uVar5 = *puVar8;
      bVar50 = (byte)puVar8[1] ^ 100;
      uVar32 = (uVar5 ^ 0x6d63) != 0 || bVar50 != 0;
      if (puVar47 == (uint *)0x0) goto joined_r0x000100793330;
      _free();
      if ((uVar5 ^ 0x6d63) != 0 || bVar50 != 0) goto code_r0x0001007932f0;
code_r0x000100793334:
      puVar47 = (uint *)0x8000000000000000;
code_r0x000100793338:
      if (unaff_x22 != puVar47) {
        *(uint **)(unaff_x29 + -0xd8) = unaff_x26;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x24 + 1;
        bStack0000000000000048 = 0x40;
        uStack0000000000000049 = 0x108cade;
        in_stack_00000050 = 3;
        uStack0000000000000051 = 0;
        bStack00000000000000b0 = (byte)&stack0x00000048;
        bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
        uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
        uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
        uStack00000000000000b8 = 0xa0;
        uStack00000000000000b9 = 0x100c7b3;
        uStack00000000000000bf = 0;
        uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
        in_stack_00000040[0] = 4;
        in_stack_00000040[1] = 0;
        *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
        goto joined_r0x000100794d24;
      }
code_r0x000100793340:
      bVar50 = *(byte *)(unaff_x29 + -0x100);
      puVar47 = (uint *)(ulong)bVar50;
      *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
      bVar15 = bVar50 == 0x16;
code_r0x000100793350:
      if (bVar15) {
        *(uint **)(unaff_x29 + -0xd8) = unaff_x26;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x24 + 1;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x000100794cec;
      }
      uVar36 = *(undefined8 *)(unaff_x21 + 2);
      puVar66 = *(uint **)unaff_x21;
code_r0x000100793358:
      *(undefined8 *)(unaff_x28 + 2) = uVar36;
      *(uint **)unaff_x28 = puVar66;
      uVar39 = *(undefined8 *)((long)unaff_x21 + 0xf);
      *(undefined8 *)((long)unaff_x28 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
      *(undefined8 *)((long)unaff_x28 + 0xf) = uVar39;
code_r0x000100793364:
      bStack00000000000000b0 = (byte)puVar47;
code_r0x00010079336c:
      puVar37 = (uint *)&stack0x00000048;
code_r0x000100793370:
      FUN_1004b62d4(puVar37,&stack0x000000b0);
      unaff_x22 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
      puVar59 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
code_r0x00010079337c:
      bVar33 = unaff_x22 == (uint *)0x8000000000000000;
code_r0x000100793384:
      if (bVar33) {
        *(uint **)(unaff_x29 + -0xd8) = unaff_x26;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x24 + 1;
        goto code_r0x0001007939b4;
      }
      _uStack0000000000000038 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
      puVar58 = unaff_x26;
      unaff_x26 = puVar64;
    } while( true );
  }
  *(uint **)(unaff_x29 + -0xd8) = unaff_x26;
  *(long *)(unaff_x29 + -0xc0) = (long)unaff_x24 + 1;
  FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
  goto code_r0x000100794cec;
code_r0x00010079338c:
  if (puVar47 != (uint *)0x0) goto code_r0x000100793390;
  goto code_r0x0001007932f0;
code_r0x000100793390:
  _free();
  goto code_r0x000100793394;
code_r0x000100792d04:
  uVar39 = *(undefined8 *)puVar59;
  *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(puVar59 + 2);
  *(undefined8 *)unaff_x22 = uVar39;
  uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
  *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
  *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
  bStack00000000000000b0 = (byte)puVar47;
  FUN_100e077ec(&stack0x000000b0);
  goto code_r0x000100792868;
code_r0x000100794990:
  *(uint **)(unaff_x29 + -0xd8) = puVar60;
  *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
  bStack0000000000000048 = 0xee;
  uStack0000000000000049 = 0x108cabf;
  in_stack_00000050 = 5;
  uStack0000000000000051 = 0;
  bStack00000000000000b0 = (byte)&stack0x00000048;
  bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
  uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
  uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
  uStack00000000000000b8 = 0xa0;
  uStack00000000000000b9 = 0x100c7b3;
  uStack00000000000000bf = 0;
  uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
  puVar58 = (uint *)(unaff_x29 + -0x100);
code_r0x000100793c00:
  in_stack_00000040[0] = 4;
  in_stack_00000040[1] = 0;
  *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
joined_r0x0001007943ac:
  if (-0x7fffffffffffffff < (long)unaff_x26) {
joined_r0x000100794aa0:
    if (unaff_x26 != (uint *)0x0) {
      _free(in_stack_00000028);
    }
  }
code_r0x0001007943b0:
  if ((-0x7fffffffffffffff < (long)unaff_x25) && (unaff_x25 != (uint *)0x0)) {
    _free(in_stack_00000030);
  }
  if (((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) {
    _free(_uStack0000000000000038);
  }
  FUN_100d34830(puVar58 + 8);
  goto LAB_1007943e4;
code_r0x000100793634:
  while( true ) {
    unaff_x21 = puVar58;
code_r0x000100793638:
code_r0x000100793620:
    unaff_x24 = (uint *)((long)unaff_x24 + -1);
    bVar15 = unaff_x24 == (uint *)0x0;
code_r0x000100793624:
    if (bVar15) break;
code_r0x000100793628:
    puVar58 = unaff_x21 + 8;
code_r0x00010079362c:
    puVar37 = unaff_x21;
code_r0x000100793630:
    FUN_100e077ec(puVar37);
  }
code_r0x000100793644:
  if (unaff_x22 == (uint *)0x0) goto code_r0x0001007941dc;
  goto code_r0x000100793648;
code_r0x0001007923b4:
  *(undefined8 *)((long)unaff_x21 + 0x17) = uVar36;
  *(uint **)((long)unaff_x21 + 0xf) = puVar66;
code_r0x0001007923b8:
  uVar39 = *(undefined8 *)((long)unaff_x28 + 1);
  *(undefined8 *)(unaff_x21 + 2) = *(undefined8 *)((long)unaff_x28 + 9);
  *(undefined8 *)unaff_x21 = uVar39;
  in_stack_00000158 = *(undefined8 *)(unaff_x28 + 10);
  in_stack_00000150 = *(undefined8 *)(unaff_x28 + 8);
  in_stack_00000168 = *(undefined8 *)(unaff_x28 + 0xe);
  in_stack_00000160 = *(undefined8 *)(unaff_x28 + 0xc);
code_r0x0001007923d4:
  puVar47 = (uint *)CONCAT17(uStack00000000000000bf,
                             CONCAT61(uStack00000000000000b9,uStack00000000000000b8));
  puVar37 = (uint *)CONCAT17(uStack00000000000000c7,
                             CONCAT61(uStack00000000000000c1,uStack00000000000000c0));
  puVar54 = (uint *)CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
  iVar45 = (int)puVar51;
  bVar11 = SBORROW4(iVar45,0xc);
  bVar13 = iVar45 + -0xc < 0;
  bVar15 = iVar45 == 0xc;
code_r0x0001007923e0:
  iVar45 = (int)puVar51;
  if (bVar15 || bVar13 != bVar11) {
    bVar16 = iVar45 == 1;
code_r0x0001007923e8:
    if (bVar16) {
      puVar47 = (uint *)(ulong)bStack00000000000000b1;
      bVar10 = 2 < bStack00000000000000b1;
code_r0x0001007924e0:
      uVar46 = (uint)puVar47;
      if (bVar10) {
        uVar46 = 3;
      }
      puVar58 = (uint *)(ulong)uVar46;
      goto code_r0x00010079267c;
    }
code_r0x0001007923ec:
    if ((int)puVar51 == 4) {
code_r0x00010079248c:
      bVar10 = (uint *)0x2 < puVar47;
code_r0x000100792490:
      puVar51 = (uint *)0x3;
code_r0x000100792494:
      puVar58 = puVar47;
      if (bVar10) {
        puVar58 = puVar51;
      }
      goto code_r0x00010079267c;
    }
    bVar15 = (int)puVar51 == 0xc;
code_r0x0001007923f8:
    if (bVar15) {
      if (puVar54 == (uint *)0x4) {
        puVar51 = (uint *)(ulong)*puVar37;
        uVar46 = 0x616e;
code_r0x00010079256c:
        bVar21 = (uint)puVar51 == (uVar46 | 0x656d0000);
code_r0x000100792574:
        if (bVar21) {
code_r0x000100792600:
          puVar58 = (uint *)0x1;
code_r0x000100792604:
        }
        else {
          puVar51 = (uint *)(ulong)*puVar37;
          uVar46 = 0x6170;
code_r0x000100792580:
          uVar46 = uVar46 | 0x68740000;
code_r0x000100792584:
          bVar15 = (uint)puVar51 == uVar46;
          puVar51 = (uint *)0x2;
code_r0x00010079258c:
          uVar46 = (uint)puVar51;
          if (!bVar15) {
            uVar46 = uVar46 + 1;
          }
          puVar58 = (uint *)(ulong)uVar46;
code_r0x000100792590:
        }
      }
      else {
code_r0x000100792404:
        if (puVar54 != (uint *)0x3) goto code_r0x00010079263c;
        puVar51 = (uint *)(ulong)((ushort)*puVar37 ^ 0x6d63);
code_r0x000100792418:
        bVar44 = *(byte *)((long)puVar37 + 2);
code_r0x00010079241c:
        bVar17 = (int)puVar51 == 0 && bVar44 == 100;
        puVar51 = (uint *)0x3;
code_r0x000100792430:
        uVar46 = (uint)puVar51;
        if (bVar17) {
          uVar46 = 0;
        }
        puVar58 = (uint *)(ulong)uVar46;
code_r0x000100792434:
      }
      goto code_r0x000100792640;
    }
code_r0x000100794d58:
    unaff_x24 = unaff_x26;
    *(uint **)(unaff_x29 + -0xd8) = puVar61;
    *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
    uVar39 = thunk_FUN_108855b04(&stack0x000000b0,&stack0x00000048,&UNK_10b210cc0);
    goto LAB_100794d8c;
  }
  if (iVar45 == 0xd) {
    bVar15 = puVar37 == (uint *)0x4;
code_r0x0001007924f0:
    if (bVar15) {
code_r0x0001007925d0:
      puVar51 = (uint *)(ulong)*puVar47;
      uVar46 = 0x616e;
code_r0x0001007925d8:
      uVar52 = uVar46 | 0x656d0000;
code_r0x0001007925dc:
      bVar23 = (uint)puVar51 == uVar52;
code_r0x0001007925e0:
      if (bVar23) {
code_r0x000100792608:
        puVar58 = (uint *)0x1;
code_r0x00010079260c:
      }
      else {
code_r0x0001007925e4:
        puVar47 = (uint *)(ulong)*puVar47;
        puVar51 = (uint *)0x6170;
code_r0x0001007925ec:
        uVar46 = 2;
        if ((uint)puVar47 != ((uint)puVar51 & 0xffff | 0x68740000)) {
          uVar46 = 3;
        }
        puVar58 = (uint *)(ulong)uVar46;
code_r0x0001007925fc:
      }
    }
    else {
code_r0x0001007924f4:
      if (puVar37 != (uint *)0x3) goto code_r0x000100792678;
      puVar51 = (uint *)(ulong)(ushort)*puVar47;
      uVar46 = 0x6d63;
code_r0x000100792504:
      puVar47 = (uint *)(ulong)((uint)puVar51 ^ uVar46 | *(byte *)((long)puVar47 + 2) ^ 100);
code_r0x000100792518:
      bVar19 = (int)puVar47 == 0;
      puVar47 = (uint *)0x3;
code_r0x000100792520:
      uVar46 = (uint)puVar47;
      if (bVar19) {
        uVar46 = 0;
      }
      puVar58 = (uint *)(ulong)uVar46;
code_r0x000100792524:
    }
code_r0x00010079267c:
    uVar46 = (uint)puVar58;
    FUN_100e077ec(&stack0x000000b0);
  }
  else {
    bVar18 = iVar45 == 0xe;
code_r0x000100792444:
    if (!bVar18) {
code_r0x000100792448:
      if ((int)puVar51 != 0xf) goto code_r0x000100794d58;
      if (puVar37 == (uint *)0x4) {
        puVar51 = (uint *)(ulong)(byte)*puVar47;
code_r0x000100792598:
        if ((int)puVar51 == 0x70) {
code_r0x00010079264c:
          puVar51 = (uint *)(ulong)*(byte *)((long)puVar47 + 1);
code_r0x000100792650:
          bVar15 = (int)puVar51 == 0x61;
code_r0x000100792654:
          if (bVar15) {
code_r0x000100792658:
            bVar24 = *(char *)((long)puVar47 + 2) == 't';
code_r0x000100792660:
            if (bVar24) {
code_r0x000100792664:
              puVar47 = (uint *)(ulong)*(byte *)((long)puVar47 + 3);
code_r0x000100792668:
              bVar15 = (int)puVar47 == 0x68;
code_r0x00010079266c:
              if (bVar15) {
code_r0x000100792670:
                puVar58 = (uint *)0x2;
code_r0x000100792674:
                goto code_r0x00010079267c;
              }
            }
          }
        }
        else {
code_r0x0001007925a0:
          if ((int)puVar51 == 0x6e) {
            bVar15 = *(char *)((long)puVar47 + 1) == 'a';
code_r0x0001007925b0:
            if (bVar15) {
              puVar51 = (uint *)(ulong)*(byte *)((long)puVar47 + 2);
code_r0x0001007925b8:
              bVar22 = (int)puVar51 == 0x6d;
code_r0x0001007925bc:
              if (bVar22) {
code_r0x0001007925c0:
                bVar15 = *(char *)((long)puVar47 + 3) == 'e';
code_r0x0001007925c8:
                if (bVar15) {
code_r0x0001007925cc:
                  goto code_r0x000100792608;
                }
              }
            }
          }
        }
      }
      else if (puVar37 == (uint *)0x3) {
        bVar15 = (char)*puVar47 == 'c';
code_r0x000100792468:
        if ((bVar15) && (*(char *)((long)puVar47 + 1) == 'm')) {
code_r0x000100792478:
          puVar47 = (uint *)(ulong)*(byte *)((long)puVar47 + 2);
code_r0x00010079247c:
          if ((int)puVar47 == 100) {
            puVar58 = (uint *)0x0;
            goto code_r0x00010079267c;
          }
        }
      }
code_r0x000100792678:
      puVar58 = (uint *)0x3;
      goto code_r0x00010079267c;
    }
    if (puVar54 == (uint *)0x4) {
      if ((char)*puVar37 == 'p') {
code_r0x000100792610:
        puVar51 = (uint *)(ulong)*(byte *)((long)puVar37 + 1);
code_r0x000100792614:
        if ((int)puVar51 == 0x61) {
          puVar51 = (uint *)(ulong)*(byte *)((long)puVar37 + 2);
code_r0x000100792620:
          bVar15 = (int)puVar51 == 0x74;
code_r0x000100792624:
          if (bVar15) {
code_r0x000100792628:
            puVar51 = (uint *)(ulong)*(byte *)((long)puVar37 + 3);
code_r0x00010079262c:
            bVar15 = (int)puVar51 == 0x68;
code_r0x000100792630:
            if (bVar15) {
              puVar58 = (uint *)0x2;
              goto code_r0x000100792640;
            }
          }
        }
      }
      else {
        bVar20 = (char)*puVar37 == 'n';
code_r0x000100792538:
        if (bVar20) {
          puVar51 = (uint *)(ulong)*(byte *)((long)puVar37 + 1);
code_r0x000100792540:
          if (((int)puVar51 == 0x61) && (*(char *)((long)puVar37 + 2) == 'm')) {
code_r0x000100792554:
            if (*(char *)((long)puVar37 + 3) == 'e') goto code_r0x000100792600;
          }
        }
      }
code_r0x00010079263c:
      puVar58 = (uint *)0x3;
    }
    else {
      if (puVar54 != (uint *)0x3) goto code_r0x00010079263c;
code_r0x0001007924ac:
      if ((char)*puVar37 != 'c') goto code_r0x00010079263c;
      puVar51 = (uint *)(ulong)*(byte *)((long)puVar37 + 1);
code_r0x0001007924bc:
      bVar15 = (int)puVar51 == 0x6d;
code_r0x0001007924c0:
      if ((!bVar15) || (*(char *)((long)puVar37 + 2) != 'd')) goto code_r0x00010079263c;
      puVar58 = (uint *)0x0;
code_r0x0001007924d4:
    }
code_r0x000100792640:
    uVar46 = (uint)puVar58;
    if (puVar47 != (uint *)0x0) {
      _free();
code_r0x000100792648:
      uVar46 = (uint)puVar58;
    }
  }
  uVar46 = uVar46 & 0xff;
  puVar47 = (uint *)(ulong)uVar46;
  bVar11 = SBORROW4(uVar46,1);
  bVar13 = (int)(uVar46 - 1) < 0;
  bVar15 = uVar46 == 1;
code_r0x00010079268c:
  if (bVar15 || bVar13 != bVar11) {
code_r0x000100792690:
    if ((int)puVar47 == 0) {
code_r0x000100792694:
      puVar47 = (uint *)0x8000000000000000;
code_r0x000100792698:
      bVar15 = unaff_x25 == puVar47;
      puVar62 = unaff_x24;
code_r0x00010079269c:
      unaff_x24 = unaff_x26;
      if (!bVar15) {
        *(uint **)(unaff_x29 + -0xd8) = puVar61;
        *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
        bStack0000000000000048 = 0x40;
        uStack0000000000000049 = 0x108cade;
        in_stack_00000050 = 3;
        uStack0000000000000051 = 0;
        bStack00000000000000b0 = (byte)&stack0x00000048;
        bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
        uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
        uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
        uStack00000000000000b8 = 0xa0;
        uStack00000000000000b9 = 0x100c7b3;
        uStack00000000000000bf = 0;
        uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
        goto LAB_100794d8c;
      }
      puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0x100);
      *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
      unaff_x26 = unaff_x24;
code_r0x0001007926ac:
      bVar15 = (int)puVar47 == 0x16;
code_r0x0001007926b0:
      if (!bVar15) {
code_r0x0001007926b4:
        uVar39 = *(undefined8 *)puVar59;
        *(undefined8 *)(unaff_x21 + 2) = *(undefined8 *)(puVar59 + 2);
        *(undefined8 *)unaff_x21 = uVar39;
        uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
        *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
        *(undefined8 *)((long)unaff_x21 + 0xf) = uVar39;
        bStack00000000000000b0 = (byte)puVar47;
code_r0x0001007926c8:
        puVar37 = (uint *)&stack0x00000048;
code_r0x0001007926d0:
        FUN_1004b62d4(puVar37,&stack0x000000b0);
code_r0x0001007926d8:
        unaff_x25 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x0001007926dc:
        puVar47 = (uint *)0x8000000000000000;
code_r0x0001007926e0:
        bVar25 = unaff_x25 == puVar47;
code_r0x0001007926e4:
        if (!bVar25) {
          in_stack_00000030 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
          puVar47 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
code_r0x0001007926f0:
          in_stack_00000020 = puVar47;
code_r0x0001007926f4:
          goto code_r0x000100792388;
        }
        *(uint **)(unaff_x29 + -0xd8) = puVar61;
        *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
        puVar47 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
        puVar51 = (uint *)0x4;
code_r0x0001007942c0:
        unaff_x24 = unaff_x26;
        *(uint **)in_stack_00000040 = puVar51;
        *(uint **)(in_stack_00000040 + 2) = puVar47;
        unaff_x25 = (uint *)0x0;
code_r0x000100794324:
        puVar59 = (uint *)0x1;
        uVar46 = 1;
        unaff_x26 = (uint *)(unaff_x29 + -0x100);
        unaff_x21 = in_stack_00000030;
        unaff_x22 = _uStack0000000000000038;
        goto LAB_10079432c;
      }
      *(uint **)(unaff_x29 + -0xd8) = puVar61;
      *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x000100794cec;
    }
code_r0x000100792764:
    bVar15 = unaff_x26 == (uint *)0x8000000000000000;
    puVar62 = unaff_x24;
code_r0x00010079276c:
    unaff_x24 = unaff_x26;
    if (bVar15) {
      puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0x100);
code_r0x000100792774:
      *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
      if ((int)puVar47 != 0x16) {
code_r0x000100792784:
        uVar39 = *(undefined8 *)puVar59;
        *(undefined8 *)(unaff_x21 + 2) = *(undefined8 *)(puVar59 + 2);
        *(undefined8 *)unaff_x21 = uVar39;
code_r0x00010079278c:
        uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
        *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
        *(undefined8 *)((long)unaff_x21 + 0xf) = uVar39;
        bStack00000000000000b0 = (byte)puVar47;
code_r0x00010079279c:
        puVar37 = (uint *)&stack0x00000048;
code_r0x0001007927a0:
        puVar42 = (uint *)&stack0x000000b0;
code_r0x0001007927a4:
        FUN_1004b62d4(puVar37,puVar42);
code_r0x0001007927a8:
        puVar47 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
code_r0x0001007927ac:
        bVar28 = puVar47 == (uint *)0x8000000000000000;
code_r0x0001007927b4:
        puVar48 = puVar47;
        if (!bVar28) {
code_r0x0001007927b8:
          puVar51 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
          puVar47 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
          unaff_x26 = puVar48;
code_r0x0001007927c0:
          in_stack_00000018 = puVar47;
          _uStack0000000000000038 = puVar51;
          goto code_r0x000100792388;
        }
        *(uint **)(unaff_x29 + -0xd8) = puVar61;
        *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
        in_stack_00000040[0] = 4;
        in_stack_00000040[1] = 0;
        *(ulong *)(in_stack_00000040 + 2) = CONCAT71(uStack0000000000000051,in_stack_00000050);
        unaff_x24 = (uint *)0x0;
        goto code_r0x000100794324;
      }
      *(uint **)(unaff_x29 + -0xd8) = puVar61;
      *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x000100794cec;
    }
    *(uint **)(unaff_x29 + -0xd8) = puVar61;
    *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
    bStack0000000000000048 = 0x18;
    uStack0000000000000049 = 0x108c610;
    in_stack_00000050 = 4;
    uStack0000000000000051 = 0;
    bStack00000000000000b0 = (byte)&stack0x00000048;
    bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
    uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
    uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
    uStack00000000000000b8 = 0xa0;
    uStack00000000000000b9 = 0x100c7b3;
    uStack00000000000000bf = 0;
    uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
LAB_100794d8c:
    unaff_x26 = (uint *)(unaff_x29 + -0x100);
    in_stack_00000040[0] = 4;
    in_stack_00000040[1] = 0;
    *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
    unaff_x21 = in_stack_00000030;
    unaff_x22 = _uStack0000000000000038;
    goto LAB_100793b44;
  }
  bVar26 = (int)puVar47 == 2;
code_r0x0001007926fc:
  if (bVar26) {
    if (unaff_x23 == (uint *)0x8000000000000000) {
code_r0x00010079270c:
      puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0x100);
code_r0x000100792710:
      *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
code_r0x000100792718:
      bVar27 = (int)puVar47 == 0x16;
code_r0x00010079271c:
      if (!bVar27) {
code_r0x000100792720:
        uVar39 = *(undefined8 *)puVar59;
        *(undefined8 *)(unaff_x21 + 2) = *(undefined8 *)(puVar59 + 2);
        *(undefined8 *)unaff_x21 = uVar39;
code_r0x000100792728:
        uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
        *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
        *(undefined8 *)((long)unaff_x21 + 0xf) = uVar39;
code_r0x000100792730:
        bStack00000000000000b0 = (byte)puVar47;
        puVar37 = (uint *)&stack0x00000048;
code_r0x00010079273c:
        FUN_1004b64d4(puVar37,&stack0x000000b0);
code_r0x000100792744:
        unaff_x23 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
        bVar15 = unaff_x23 == (uint *)0x8000000000000000;
        puVar62 = unaff_x24;
code_r0x000100792750:
        unaff_x24 = unaff_x26;
        unaff_x26 = unaff_x24;
        if (!bVar15) {
code_r0x000100792754:
          in_stack_00000028 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
          puVar47 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
code_r0x00010079275c:
          in_stack_00000010 = puVar47;
          goto code_r0x000100792388;
        }
        *(uint **)(unaff_x29 + -0xd8) = puVar61;
        *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
        in_stack_00000040[0] = 4;
        in_stack_00000040[1] = 0;
        *(ulong *)(in_stack_00000040 + 2) = CONCAT71(uStack0000000000000051,in_stack_00000050);
        puVar58 = (uint *)0x1;
        puVar59 = (uint *)0x1;
        unaff_x21 = in_stack_00000030;
        unaff_x22 = _uStack0000000000000038;
code_r0x00010079427c:
        uVar46 = (uint)puVar58;
        unaff_x26 = (uint *)(unaff_x29 + -0x100);
        goto LAB_100794344;
      }
      *(uint **)(unaff_x29 + -0xd8) = puVar61;
      *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x000100794cec;
    }
    *(uint **)(unaff_x29 + -0xd8) = puVar61;
    *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
    bStack0000000000000048 = 0x38;
    uStack0000000000000049 = 0x108c610;
    in_stack_00000050 = 4;
    uStack0000000000000051 = 0;
    bStack00000000000000b0 = (byte)&stack0x00000048;
    bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
    uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
    uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
    uStack00000000000000b8 = 0xa0;
    uStack00000000000000b9 = 0x100c7b3;
    uStack00000000000000bf = 0;
    uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
    in_stack_00000040[0] = 4;
    in_stack_00000040[1] = 0;
    *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
    uVar46 = 1;
    puVar59 = (uint *)0x1;
    puVar58 = (uint *)(unaff_x29 + -0x100);
    unaff_x24 = unaff_x26;
    unaff_x21 = in_stack_00000030;
    unaff_x22 = _uStack0000000000000038;
    goto joined_r0x000100794a40;
  }
code_r0x0001007927cc:
  puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0x100);
code_r0x0001007927d0:
  *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
  if ((int)puVar47 == 0x16) {
    *(uint **)(unaff_x29 + -0xd8) = puVar61;
    *(long *)(unaff_x29 + -0xc0) = (long)puVar64 + 1;
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
    goto code_r0x000100794cec;
  }
  uVar36 = *(undefined8 *)(puVar59 + 2);
  puVar66 = *(uint **)puVar59;
code_r0x0001007927e4:
  *(undefined8 *)(unaff_x21 + 2) = uVar36;
  *(uint **)unaff_x21 = puVar66;
  uVar36 = *(undefined8 *)((long)puVar59 + 0x17);
  puVar66 = *(uint **)((long)puVar59 + 0xf);
code_r0x0001007927ec:
  *(undefined8 *)((long)unaff_x21 + 0x17) = uVar36;
  *(uint **)((long)unaff_x21 + 0xf) = puVar66;
  bStack00000000000000b0 = (byte)puVar47;
code_r0x0001007927f4:
  FUN_100e077ec(&stack0x000000b0);
  puVar62 = unaff_x24;
code_r0x0001007927fc:
code_r0x000100792388:
  unaff_x22 = puVar61 + 0x10;
  puVar47 = unaff_x28 + 0x10;
  unaff_x24 = puVar62;
code_r0x000100792390:
  puVar61 = unaff_x24;
  puVar64 = (uint *)((long)puVar64 + 1);
  unaff_x24 = puVar61;
  puVar58 = in_stack_00000008;
  if (puVar47 != puVar61) {
code_r0x00010079239c:
    puVar61 = unaff_x22;
    unaff_x28 = puVar61 + -0x10;
    puVar51 = (uint *)(ulong)(byte)*unaff_x28;
    puVar58 = puVar64;
    if ((byte)*unaff_x28 != 0x16) goto code_r0x0001007923ac;
  }
  unaff_x24 = unaff_x26;
  *(uint **)(unaff_x29 + -0xd8) = puVar61;
  *(uint **)(unaff_x29 + -0xc0) = puVar58;
  unaff_x21 = in_stack_00000030;
  unaff_x22 = _uStack0000000000000038;
  if (unaff_x25 == (uint *)0x8000000000000000) {
    unaff_x26 = (uint *)(unaff_x29 + -0x100);
    unaff_x27 = in_stack_00000040;
code_r0x000100793b08:
    bStack0000000000000048 = 0x40;
    uStack0000000000000049 = 0x108cade;
    in_stack_00000050 = 3;
    uStack0000000000000051 = 0;
    bStack00000000000000b0 = (byte)&stack0x00000048;
    bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
    uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
    uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
    uStack00000000000000b8 = 0xa0;
    uStack00000000000000b9 = 0x100c7b3;
    uStack00000000000000bf = 0;
    unaff_x25 = (uint *)0x0;
    uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
    unaff_x27[0] = 4;
    unaff_x27[1] = 0;
    *(undefined8 *)(unaff_x27 + 2) = uVar39;
LAB_100793b44:
    puVar59 = (uint *)0x1;
    uVar46 = 1;
  }
  else {
    puVar59 = (uint *)(ulong)(unaff_x24 == (uint *)0x8000000000000000);
    if (unaff_x24 == (uint *)0x8000000000000000) {
      bStack0000000000000048 = 0x18;
      uStack0000000000000049 = 0x108c610;
      in_stack_00000050 = 4;
      uStack0000000000000051 = 0;
      bStack00000000000000b0 = (byte)&stack0x00000048;
      bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
      uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
      uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
      uStack00000000000000b8 = 0xa0;
      uStack00000000000000b9 = 0x100c7b3;
      uStack00000000000000bf = 0;
      uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
      in_stack_00000040[0] = 4;
      in_stack_00000040[1] = 0;
      *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
    }
    else {
      if (unaff_x23 != (uint *)0x8000000000000000) {
        in_stack_00000040[0] = 0;
        in_stack_00000040[1] = 0;
        *(uint **)(in_stack_00000040 + 2) = unaff_x25;
        *(uint **)(in_stack_00000040 + 4) = in_stack_00000030;
        *(uint **)(in_stack_00000040 + 6) = in_stack_00000020;
        *(uint **)(in_stack_00000040 + 8) = unaff_x24;
        *(uint **)(in_stack_00000040 + 10) = _uStack0000000000000038;
        *(uint **)(in_stack_00000040 + 0xc) = in_stack_00000018;
        *(uint **)(in_stack_00000040 + 0xe) = unaff_x23;
        puVar58 = in_stack_00000040;
        unaff_x28 = in_stack_00000028;
code_r0x000100794220:
        *(uint **)(puVar58 + 0x10) = unaff_x28;
        *(uint **)(puVar58 + 0x12) = in_stack_00000010;
        in_stack_000001c8 = *(undefined8 *)(puVar58 + 10);
        in_stack_000001c0 = *(undefined8 *)(puVar58 + 8);
        in_stack_000001d8 = *(undefined8 *)(puVar58 + 0xe);
        in_stack_000001d0 = *(undefined8 *)(puVar58 + 0xc);
        puVar47 = (uint *)&stack0x000000b0;
        uVar36 = *(undefined8 *)(puVar58 + 0x12);
        puVar66 = *(uint **)(puVar58 + 0x10);
code_r0x000100794238:
        *(undefined8 *)(puVar47 + 0x4e) = uVar36;
        *(uint **)(puVar47 + 0x4c) = puVar66;
        uVar40 = *(undefined8 *)(puVar58 + 2);
        uVar39 = *(undefined8 *)puVar58;
        uVar36 = *(undefined8 *)(puVar58 + 6);
        puVar66 = *(uint **)(puVar58 + 4);
code_r0x000100794240:
        in_stack_00000040 = puVar58;
        *(undefined8 *)(puVar47 + 0x3e) = uVar40;
        *(undefined8 *)(puVar47 + 0x3c) = uVar39;
        *(undefined8 *)(puVar47 + 0x42) = uVar36;
        *(uint **)(puVar47 + 0x40) = puVar66;
        lVar43 = FUN_100fbc67c(unaff_x29 + -0x100);
code_r0x000100793c7c:
        if (lVar43 == 0) goto code_r0x0001007941dc;
        in_stack_00000040[0] = 4;
        in_stack_00000040[1] = 0;
        *(long *)(in_stack_00000040 + 2) = lVar43;
        goto code_r0x000100793c88;
      }
      bStack0000000000000048 = 0x38;
      uStack0000000000000049 = 0x108c610;
      in_stack_00000050 = 4;
      uStack0000000000000051 = 0;
      bStack00000000000000b0 = (byte)&stack0x00000048;
      bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
      uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
      uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
      uStack00000000000000b8 = 0xa0;
      uStack00000000000000b9 = 0x100c7b3;
      uStack00000000000000bf = 0;
      uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
      in_stack_00000040[0] = 4;
      in_stack_00000040[1] = 0;
      *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
      if (unaff_x24 != (uint *)0x0) {
        _free(_uStack0000000000000038);
      }
    }
    unaff_x26 = (uint *)(unaff_x29 + -0x100);
    if (unaff_x25 != (uint *)0x0) {
      _free(in_stack_00000030);
    }
    uVar46 = 0;
  }
LAB_10079432c:
  puVar58 = unaff_x26;
  if (unaff_x23 != (uint *)0x8000000000000000) {
joined_r0x000100794a40:
    unaff_x26 = puVar58;
    if (unaff_x23 != (uint *)0x0) {
      _free(in_stack_00000028);
    }
  }
LAB_100794344:
  if ((((ulong)unaff_x24 & 0x7fffffffffffffff) != 0) && (((ulong)puVar59 & 1) != 0)) {
    _free(unaff_x22);
  }
  uVar52 = 0;
  if (((ulong)unaff_x25 & 0x7fffffffffffffff) != 0) {
    uVar52 = uVar46;
  }
  if ((uVar52 & 1) != 0) {
    _free(unaff_x21);
  }
  FUN_100d34830(unaff_x26 + 8);
  goto LAB_1007943e4;
code_r0x0001007923ac:
  bStack00000000000000b0 = (byte)puVar51;
  uVar36 = *(undefined8 *)(unaff_x28 + 6);
  puVar66 = *(uint **)(unaff_x28 + 4);
  goto code_r0x0001007923b4;
code_r0x000100792cac:
  do {
    uVar39 = *(undefined8 *)puVar59;
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(puVar59 + 2);
    *(undefined8 *)unaff_x22 = uVar39;
    uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
    bStack00000000000000b0 = (byte)puVar47;
    FUN_1004b60cc(&stack0x00000048,&stack0x000000b0);
    unaff_x25 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
    if (unaff_x25 == (uint *)0x8000000000000001) {
      *(uint **)(unaff_x29 + -0xd8) = puVar60;
      *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
      uVar39 = CONCAT71(uStack0000000000000051,in_stack_00000050);
      unaff_x25 = (uint *)0x8000000000000001;
code_r0x00010079438c:
      puVar58 = (uint *)(unaff_x29 + -0x100);
      in_stack_00000040[0] = 4;
      in_stack_00000040[1] = 0;
      *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
      goto joined_r0x0001007943ac;
    }
    in_stack_00000030 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
    in_stack_00000018 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
code_r0x000100792868:
    unaff_x21 = puVar60 + 0x10;
    puVar47 = unaff_x28 + 0x10;
    unaff_x27 = (uint *)((long)unaff_x27 + 1);
code_r0x000100792874:
    puVar60 = unaff_x23;
    unaff_x23 = puVar60;
    puVar58 = in_stack_00000008;
    if (puVar47 == puVar60) {
code_r0x000100793ba4:
      *(uint **)(unaff_x29 + -0xd8) = puVar60;
      *(uint **)(unaff_x29 + -0xc0) = puVar58;
      if (unaff_x24 == (uint *)0x8000000000000000) {
        puVar58 = (uint *)(unaff_x29 + -0x100);
code_r0x000100793bcc:
        bStack0000000000000048 = 0x40;
        uStack0000000000000049 = 0x108cade;
        in_stack_00000050 = 3;
        uStack0000000000000051 = 0;
        bStack00000000000000b0 = (byte)&stack0x00000048;
        bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
        uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
        uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
        uStack00000000000000b8 = 0xa0;
        uStack00000000000000b9 = 0x100c7b3;
        uStack00000000000000bf = 0;
        unaff_x24 = (uint *)0x0;
        uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
        goto code_r0x000100793c00;
      }
      puVar59 = (uint *)0x8000000000000000;
      if (unaff_x25 != (uint *)0x8000000000000001) {
        puVar59 = unaff_x25;
      }
      in_stack_00000040[0] = 2;
      in_stack_00000040[1] = 0;
      *(uint **)(in_stack_00000040 + 2) = puVar59;
      puVar59 = (uint *)0x8000000000000000;
      if (unaff_x26 != (uint *)0x8000000000000001) {
        puVar59 = unaff_x26;
      }
      *(uint **)(in_stack_00000040 + 4) = in_stack_00000030;
      *(uint **)(in_stack_00000040 + 6) = in_stack_00000018;
      *(uint **)(in_stack_00000040 + 8) = puVar59;
      *(uint **)(in_stack_00000040 + 10) = in_stack_00000028;
      *(uint **)(in_stack_00000040 + 0xc) = in_stack_00000010;
      *(uint **)(in_stack_00000040 + 0xe) = unaff_x24;
      *(uint **)(in_stack_00000040 + 0x10) = _uStack0000000000000038;
      *(uint **)(in_stack_00000040 + 0x12) = in_stack_00000020;
      in_stack_000001d8 = *(undefined8 *)(in_stack_00000040 + 0xe);
      in_stack_000001d0 = *(undefined8 *)(in_stack_00000040 + 0xc);
      in_stack_000001e8 = *(undefined8 *)(in_stack_00000040 + 0x12);
      in_stack_000001e0 = *(undefined8 *)(in_stack_00000040 + 0x10);
      in_stack_000001b8 = *(undefined8 *)(in_stack_00000040 + 6);
      in_stack_000001b0 = *(undefined8 *)(in_stack_00000040 + 4);
      in_stack_000001c8 = *(undefined8 *)(in_stack_00000040 + 10);
      in_stack_000001c0 = *(undefined8 *)(in_stack_00000040 + 8);
      in_stack_000001a8 = *(undefined8 *)(in_stack_00000040 + 2);
      in_stack_000001a0 = *(uint **)in_stack_00000040;
      lVar43 = FUN_100fbc67c(unaff_x29 + -0x100);
      goto code_r0x000100793c7c;
    }
code_r0x00010079287c:
    unaff_x28 = unaff_x21 + -0x10;
    bVar44 = (byte)*unaff_x28;
    bVar15 = bVar44 == 0x16;
    puVar60 = unaff_x21;
code_r0x000100792888:
    uVar53 = (uint)bVar44;
    puVar58 = unaff_x27;
    if (bVar15) goto code_r0x000100793ba4;
    uVar39 = *(undefined8 *)(unaff_x28 + 4);
    *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)(unaff_x28 + 6);
    *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
    uVar39 = *(undefined8 *)((long)unaff_x28 + 1);
    *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)((long)unaff_x28 + 9);
    *(undefined8 *)unaff_x22 = uVar39;
    in_stack_00000158 = *(undefined8 *)(unaff_x28 + 10);
    in_stack_00000150 = *(undefined8 *)(unaff_x28 + 8);
    in_stack_00000168 = *(undefined8 *)(unaff_x28 + 0xe);
    in_stack_00000160 = *(undefined8 *)(unaff_x28 + 0xc);
    puVar47 = (uint *)CONCAT17(uStack00000000000000bf,
                               CONCAT61(uStack00000000000000b9,uStack00000000000000b8));
    puVar37 = (uint *)CONCAT17(uStack00000000000000c7,
                               CONCAT61(uStack00000000000000c1,uStack00000000000000c0));
    puVar51 = (uint *)CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
    bVar11 = SBORROW4(uVar53,0xc);
    bVar13 = (int)(uVar53 - 0xc) < 0;
    bVar15 = uVar53 == 0xc;
    bStack00000000000000b0 = bVar44;
code_r0x0001007928c0:
    if (bVar15 || bVar13 != bVar11) {
      if (uVar53 == 1) {
        uVar46 = (uint)bStack00000000000000b1;
        if (2 < uVar46) {
          uVar46 = 3;
        }
      }
      else {
        if (uVar53 != 4) {
code_r0x0001007928d4:
          if (uVar53 == 0xc) {
            if (puVar51 == (uint *)0x5) {
              bVar44 = (byte)puVar37[1];
              bVar15 = *puVar37 == 0x72657571;
code_r0x000100792b08:
              if (bVar15 && bVar44 == 0x79) {
                puVar58 = (uint *)0x1;
                uVar46 = 1;
                goto joined_r0x000100792aec;
              }
            }
            else {
code_r0x0001007928e4:
              if (puVar51 == (uint *)0x4) {
                if (*puVar37 == 0x68746170) {
                  puVar58 = (uint *)0x2;
                  uVar46 = 2;
                  goto joined_r0x000100792aec;
                }
              }
              else if (puVar51 == (uint *)0x3) {
                bVar44 = *(byte *)((long)puVar37 + 2);
                bVar15 = (short)*puVar37 == 0x6d63;
code_r0x000100792904:
                if (bVar15 && bVar44 == 100) {
                  puVar58 = (uint *)0x0;
                  uVar46 = 0;
                  goto joined_r0x000100792aec;
                }
              }
            }
            puVar58 = (uint *)0x3;
            uVar46 = 3;
            goto joined_r0x000100792aec;
          }
code_r0x000100794d98:
          *(uint **)(unaff_x29 + -0xd8) = puVar60;
          *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
          uVar39 = thunk_FUN_108855b04(&stack0x000000b0,&stack0x00000048,&UNK_10b20f900);
          puVar58 = (uint *)(unaff_x29 + -0x100);
          goto code_r0x000100793c00;
        }
code_r0x000100792974:
        if ((uint *)0x2 < puVar47) {
          puVar47 = (uint *)0x3;
        }
        uVar46 = (uint)puVar47;
      }
code_r0x000100792ba4:
      FUN_100e077ec(&stack0x000000b0);
    }
    else {
      if (uVar53 == 0xd) {
        if (puVar37 == (uint *)0x5) {
code_r0x000100792b80:
          puVar51 = (uint *)(ulong)*puVar47;
          puVar47 = (uint *)(ulong)(byte)puVar47[1];
          uVar46 = 0x72657571;
code_r0x000100792b90:
          bVar15 = (uint)puVar51 == uVar46;
code_r0x000100792b94:
          if (!bVar15 || (int)puVar47 != 0x79) goto code_r0x000100792ba0;
code_r0x000100792d24:
          uVar46 = 1;
        }
        else if (puVar37 == (uint *)0x4) {
          puVar47 = (uint *)(ulong)*puVar47;
          puVar51 = (uint *)0x6170;
code_r0x000100792b6c:
          bVar15 = (uint)puVar47 == ((uint)puVar51 & 0xffff | 0x68740000);
code_r0x000100792b74:
          if (!bVar15) goto code_r0x000100792ba0;
code_r0x000100792b78:
          uVar46 = 2;
        }
        else if ((puVar37 == (uint *)0x3) &&
                ((short)*puVar47 == 0x6d63 && *(char *)((long)puVar47 + 2) == 'd')) {
code_r0x000100792a10:
          puVar58 = (uint *)0x0;
code_r0x000100792a14:
          uVar46 = (uint)puVar58;
        }
        else {
code_r0x000100792ba0:
          uVar46 = 3;
        }
        goto code_r0x000100792ba4;
      }
      if (uVar53 != 0xe) {
        if (uVar53 != 0xf) goto code_r0x000100794d98;
        if (puVar37 == (uint *)0x5) {
          if ((char)*puVar47 == 'q') {
code_r0x000100792b30:
            if ((*(char *)((long)puVar47 + 1) == 'u') && (*(char *)((long)puVar47 + 2) == 'e')) {
code_r0x000100792b48:
              puVar51 = (uint *)(ulong)*(byte *)((long)puVar47 + 3);
code_r0x000100792b4c:
              if (((int)puVar51 == 0x72) && ((char)puVar47[1] == 'y')) goto code_r0x000100792d24;
            }
          }
        }
        else if (puVar37 == (uint *)0x4) {
          if (((((char)*puVar47 == 'p') && (*(char *)((long)puVar47 + 1) == 'a')) &&
              (*(char *)((long)puVar47 + 2) == 't')) && (*(char *)((long)puVar47 + 3) == 'h'))
          goto code_r0x000100792b78;
        }
        else {
          bVar15 = puVar37 == (uint *)0x3;
code_r0x000100792948:
          if (((bVar15) && ((char)*puVar47 == 'c')) &&
             ((*(char *)((long)puVar47 + 1) == 'm' && (*(char *)((long)puVar47 + 2) == 'd'))))
          goto code_r0x000100792a10;
        }
        goto code_r0x000100792ba0;
      }
code_r0x000100792984:
      if (puVar51 == (uint *)0x5) {
        if (((char)*puVar37 == 'q') && (*(char *)((long)puVar37 + 1) == 'u')) {
code_r0x000100792abc:
          if ((*(char *)((long)puVar37 + 2) == 'e') &&
             ((*(char *)((long)puVar37 + 3) == 'r' && ((char)puVar37[1] == 'y')))) {
            puVar58 = (uint *)0x1;
code_r0x000100792ae4:
            goto code_r0x000100792aec;
          }
        }
code_r0x000100792ae8:
        puVar58 = (uint *)0x3;
      }
      else if (puVar51 == (uint *)0x4) {
        if (((((char)*puVar37 != 'p') || (*(char *)((long)puVar37 + 1) != 'a')) ||
            (*(char *)((long)puVar37 + 2) != 't')) || (*(char *)((long)puVar37 + 3) != 'h'))
        goto code_r0x000100792ae8;
        puVar58 = (uint *)0x2;
      }
      else {
        if (((puVar51 != (uint *)0x3) || ((char)*puVar37 != 'c')) ||
           ((*(char *)((long)puVar37 + 1) != 'm' || (*(char *)((long)puVar37 + 2) != 'd'))))
        goto code_r0x000100792ae8;
        puVar58 = (uint *)0x0;
      }
code_r0x000100792aec:
      uVar46 = (uint)puVar58;
joined_r0x000100792aec:
      if (puVar47 != (uint *)0x0) {
        _free();
code_r0x000100792b20:
        uVar46 = (uint)puVar58;
      }
    }
    puVar47 = (uint *)(ulong)(uVar46 & 0xff);
code_r0x000100792bb0:
    iVar45 = (int)puVar47;
    bVar12 = SBORROW4(iVar45,1);
    bVar14 = iVar45 + -1 < 0;
    bVar29 = iVar45 == 1;
code_r0x000100792bb4:
    if (!bVar29 && bVar14 == bVar12) {
      bVar15 = (int)puVar47 == 2;
code_r0x000100792c24:
      if (!bVar15) {
code_r0x000100792cf0:
        puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0x100);
code_r0x000100792cf4:
        *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
        if ((int)puVar47 != 0x16) goto code_r0x000100792d04;
        *(uint **)(unaff_x29 + -0xd8) = puVar60;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x000100794cec;
      }
      if (unaff_x26 != (uint *)0x8000000000000001) {
        *(uint **)(unaff_x29 + -0xd8) = puVar60;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
        bStack0000000000000048 = 0x38;
        uStack0000000000000049 = 0x108c610;
        in_stack_00000050 = 4;
        uStack0000000000000051 = 0;
        bStack00000000000000b0 = (byte)&stack0x00000048;
        bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
        uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
        uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
        uStack00000000000000b8 = 0xa0;
        uStack00000000000000b9 = 0x100c7b3;
        uStack00000000000000bf = 0;
        uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
        puVar58 = (uint *)(unaff_x29 + -0x100);
        in_stack_00000040[0] = 4;
        in_stack_00000040[1] = 0;
        *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
        unaff_x26 = (uint *)((ulong)unaff_x26 & 0x7fffffffffffffff);
        goto joined_r0x000100794aa0;
      }
      puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0x100);
      *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
code_r0x000100792c40:
      bVar15 = (int)puVar47 == 0x16;
code_r0x000100792c44:
      if (bVar15) {
        *(uint **)(unaff_x29 + -0xd8) = puVar60;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x000100794cec;
      }
      uVar39 = *(undefined8 *)puVar59;
      *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(puVar59 + 2);
      *(undefined8 *)unaff_x22 = uVar39;
      uVar36 = *(undefined8 *)((long)puVar59 + 0x17);
      puVar66 = *(uint **)((long)puVar59 + 0xf);
code_r0x000100792c54:
      *(undefined8 *)((long)unaff_x22 + 0x17) = uVar36;
      *(uint **)((long)unaff_x22 + 0xf) = puVar66;
      bStack00000000000000b0 = (byte)puVar47;
      puVar37 = (uint *)&stack0x00000048;
      puVar42 = (uint *)&stack0x000000b0;
code_r0x000100792c68:
      FUN_1004b60cc(puVar37,puVar42);
      unaff_x26 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
      if (unaff_x26 == (uint *)0x8000000000000001) {
        *(uint **)(unaff_x29 + -0xd8) = puVar60;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
        in_stack_00000040[0] = 4;
        in_stack_00000040[1] = 0;
        *(ulong *)(in_stack_00000040 + 2) = CONCAT71(uStack0000000000000051,in_stack_00000050);
        puVar58 = (uint *)(unaff_x29 + -0x100);
        goto code_r0x0001007943b0;
      }
      in_stack_00000028 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
      in_stack_00000010 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
code_r0x000100792c88:
      goto code_r0x000100792868;
    }
code_r0x000100792bb8:
    if ((int)puVar47 == 0) {
      if (unaff_x24 != (uint *)0x8000000000000000) {
        *(uint **)(unaff_x29 + -0xd8) = puVar60;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
        bStack0000000000000048 = 0x40;
        uStack0000000000000049 = 0x108cade;
        in_stack_00000050 = 3;
        uStack0000000000000051 = 0;
        bStack00000000000000b0 = (byte)&stack0x00000048;
        bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
        uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
        uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
        uStack00000000000000b8 = 0xa0;
        uStack00000000000000b9 = 0x100c7b3;
        uStack00000000000000bf = 0;
        uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
        puVar58 = (uint *)(unaff_x29 + -0x100);
        goto code_r0x000100793c00;
      }
      puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0x100);
code_r0x000100792bcc:
      *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
      bVar15 = (int)puVar47 == 0x16;
code_r0x000100792bd8:
      if (bVar15) {
        *(uint **)(unaff_x29 + -0xd8) = puVar60;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x000100794cec;
      }
      uVar39 = *(undefined8 *)puVar59;
      *(undefined8 *)(unaff_x22 + 2) = *(undefined8 *)(puVar59 + 2);
      *(undefined8 *)unaff_x22 = uVar39;
      uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
      *(undefined8 *)((long)unaff_x22 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
      *(undefined8 *)((long)unaff_x22 + 0xf) = uVar39;
      bStack00000000000000b0 = (byte)puVar47;
      puVar37 = (uint *)&stack0x00000048;
      puVar42 = (uint *)&stack0x000000b0;
code_r0x000100792bfc:
      FUN_1004b62d4(puVar37,puVar42);
code_r0x000100792c00:
      unaff_x24 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
      if (unaff_x24 == (uint *)0x8000000000000000) {
        *(uint **)(unaff_x29 + -0xd8) = puVar60;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
        uVar39 = CONCAT71(uStack0000000000000051,in_stack_00000050);
        unaff_x24 = (uint *)0x0;
        goto code_r0x00010079438c;
      }
code_r0x000100792c10:
      _uStack0000000000000038 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
      in_stack_00000020 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
code_r0x000100792c1c:
      goto code_r0x000100792868;
    }
    if (unaff_x25 != (uint *)0x8000000000000001) goto code_r0x000100794990;
    bVar50 = *(byte *)(unaff_x29 + -0x100);
    puVar47 = (uint *)(ulong)bVar50;
    *(undefined1 *)(unaff_x29 + -0x100) = 0x16;
  } while (bVar50 != 0x16);
  *(uint **)(unaff_x29 + -0xd8) = puVar60;
  *(long *)(unaff_x29 + -0xc0) = (long)unaff_x27 + 1;
  FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000100794cec:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100794cf0);
  (*pcVar9)();
joined_r0x0001007b1e28:
  if ((uStack0000000000000064 & 1) == 0) {
    *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca2143;
    *(undefined8 *)(unaff_x29 + -0x80) = 9;
    uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000448);
LAB_1007b1c90:
    uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
    in_stack_00000030[0] = 0;
    in_stack_00000030[1] = 0x80000000;
    *(undefined8 *)(in_stack_00000030 + 2) = uVar39;
joined_r0x0001007b1d20:
    if (in_stack_00000070 != 0x800000000000000b) {
LAB_1007b1d24:
      FUN_100df5b9c(&stack0x000002a0);
    }
    unaff_x27 = (uint *)((ulong)unaff_x27 & 0x7fffffffffffffff);
  }
  else {
    uVar39 = CONCAT71(uStack0000000000000049,bStack0000000000000048);
    puVar58 = unaff_x23;
    uVar57 = in_stack_00000070;
    bVar50 = in_stack_00000010._4_1_;
joined_r0x0001007b1e34:
    in_stack_00000070 = uVar57;
    if (unaff_x27 == (uint *)0x8000000000000000) {
      *(undefined **)(unaff_x29 + -0x88) = &UNK_108ca7b95;
      *(undefined8 *)(unaff_x29 + -0x80) = 7;
      unaff_x27 = (uint *)0x0;
      uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000448);
      goto LAB_1007b1c90;
    }
    if (uVar57 != 0x800000000000000b) {
      _memcpy(in_stack_00000030 + 10,&stack0x000002b0,400);
      if ((bStack0000000000000068 & 1) == 0) {
        in_stack_00000028 = (uint *)0x0;
      }
      in_stack_00000030[0x6e] = in_stack_00000440;
      *(uint *)((long)in_stack_00000030 + 0x1bb) =
           CONCAT31(in_stack_00000444,(char)(in_stack_00000440 >> 0x18));
      *(uint **)in_stack_00000030 = unaff_x27;
      *(ulong *)(in_stack_00000030 + 2) = CONCAT71(uStack0000000000000051,in_stack_00000050);
      *(uint **)(in_stack_00000030 + 4) = in_stack_00000020;
      *(ulong *)(in_stack_00000030 + 6) = uVar57;
      *(undefined8 *)(in_stack_00000030 + 8) = uVar39;
      *(uint **)((long)in_stack_00000008 + 1) = in_stack_00000018;
      *(byte *)((long)in_stack_00000030 + 0x1c7) = bVar50;
      *(uint **)(in_stack_00000030 + 0x72) = in_stack_00000028;
      _memcpy(&stack0x000000d0,in_stack_00000030,0x1d0);
      FUN_100d34830(&stack0x000000a0);
      if (in_stack_00000078 != puVar47) {
        uVar39 = thunk_FUN_1087e422c((long)puVar58 +
                                     ((ulong)((long)in_stack_00000078 - (long)puVar47) >> 6),
                                     &stack0x00000448,&UNK_10b23a190);
        in_stack_00000030[0] = 0;
        in_stack_00000030[1] = 0x80000000;
        *(undefined8 *)(in_stack_00000030 + 2) = uVar39;
        if (CONCAT17(uStack00000000000000d7,uStack00000000000000d0) != 0) {
          _free(in_stack_000000d8);
        }
        puVar37 = (uint *)&stack0x000000e8;
code_r0x0001007b210c:
        FUN_100df5b9c(puVar37);
      }
      goto LAB_1007b1d5c;
    }
    *(undefined **)(unaff_x29 + -0x88) = &UNK_108cde378;
    *(undefined8 *)(unaff_x29 + -0x80) = 4;
    uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000448);
    in_stack_00000030[0] = 0;
    in_stack_00000030[1] = 0x80000000;
    *(undefined8 *)(in_stack_00000030 + 2) = uVar39;
    uVar40 = CONCAT71(uStack0000000000000051,in_stack_00000050);
  }
joined_r0x0001007b1f88:
  if (unaff_x27 != (uint *)0x0) {
    _free(uVar40);
  }
  FUN_100d34830(&stack0x000000a0);
  if (cStack0000000000000080 != '\x16') {
    FUN_100e077ec(&stack0x00000080);
  }
LAB_1007b1d5c:
  if ((uStack000000000000003c & 0x1e) != 0x14) {
    FUN_100e077ec(in_stack_00000040);
  }
  return;
code_r0x000100792dbc:
  do {
    unaff_x28 = unaff_x27 + 0x10;
    bVar50 = (byte)*unaff_x27;
    puVar58 = unaff_x26;
    puVar37 = unaff_x28;
    if (bVar50 == 0x16) break;
    uVar39 = *(undefined8 *)(unaff_x27 + 4);
    *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)(unaff_x27 + 6);
    *(undefined8 *)((long)unaff_x21 + 0xf) = uVar39;
    uVar39 = *(undefined8 *)((long)unaff_x27 + 1);
    *(undefined8 *)(unaff_x21 + 2) = *(undefined8 *)((long)unaff_x27 + 9);
    *(undefined8 *)unaff_x21 = uVar39;
    in_stack_00000158 = *(undefined8 *)(unaff_x27 + 10);
    in_stack_00000150 = *(undefined8 *)(unaff_x27 + 8);
    in_stack_00000168 = *(undefined8 *)(unaff_x27 + 0xe);
    in_stack_00000160 = *(undefined8 *)(unaff_x27 + 0xc);
    puVar47 = (uint *)CONCAT17(uStack00000000000000bf,
                               CONCAT61(uStack00000000000000b9,uStack00000000000000b8));
    puVar37 = (uint *)CONCAT17(uStack00000000000000c7,
                               CONCAT61(uStack00000000000000c1,uStack00000000000000c0));
    lVar43 = CONCAT17(uStack00000000000000cf,uStack00000000000000c8);
    bStack00000000000000b0 = bVar50;
    if (bVar50 < 0xd) {
      if (bVar50 == 1) {
        uVar46 = 1;
        if (bStack00000000000000b1 != 1) {
          uVar46 = 2;
        }
        uVar52 = 0;
        if (bStack00000000000000b1 != 0) {
          uVar52 = uVar46;
        }
        puVar58 = (uint *)(ulong)uVar52;
      }
      else {
        if (bVar50 != 4) {
          if (bVar50 == 0xc) {
            if (lVar43 == 4) {
              uVar46 = 1;
              if (*puVar37 != 0x68746170) {
                uVar46 = 2;
              }
              puVar58 = (uint *)(ulong)uVar46;
            }
            else {
              bVar30 = lVar43 == 3;
code_r0x000100792e28:
              if (!bVar30) goto code_r0x000100792f98;
              bVar31 = (short)*puVar37 == 0x6d63 && *(char *)((long)puVar37 + 2) == 'd';
              puVar51 = (uint *)0x2;
code_r0x000100792e50:
              uVar46 = (uint)puVar51;
              if (bVar31) {
                uVar46 = 0;
              }
              puVar58 = (uint *)(ulong)uVar46;
            }
            goto joined_r0x000100792f00;
          }
code_r0x000100794d2c:
          *(uint **)(unaff_x29 + -0xd8) = unaff_x28;
          *(long *)(unaff_x29 + -0xc0) = (long)unaff_x26 + 1;
          uVar39 = thunk_FUN_108855b04(&stack0x000000b0,&stack0x00000048,&UNK_10b212340);
          goto code_r0x000100793a54;
        }
        bVar15 = puVar47 == (uint *)0x1;
        puVar51 = (uint *)0x1;
code_r0x000100792eb8:
        uVar46 = (uint)puVar51;
        if (!bVar15) {
          uVar46 = uVar46 + 1;
        }
        uVar52 = 0;
        if (puVar47 != (uint *)0x0) {
          uVar52 = uVar46;
        }
        puVar58 = (uint *)(ulong)uVar52;
      }
code_r0x000100793020:
      puVar37 = (uint *)&stack0x000000b0;
code_r0x000100793024:
      FUN_100e077ec(puVar37);
    }
    else {
      if (bVar50 == 0xd) {
        bVar15 = puVar37 == (uint *)0x4;
code_r0x000100792f24:
        if (bVar15) {
          uVar46 = 1;
          if (*puVar47 != 0x68746170) {
            uVar46 = 2;
          }
          puVar58 = (uint *)(ulong)uVar46;
        }
        else {
          if (puVar37 != (uint *)0x3) goto code_r0x000100793000;
          uVar46 = 2;
          if ((short)*puVar47 == 0x6d63 && *(char *)((long)puVar47 + 2) == 'd') {
            uVar46 = 0;
          }
          puVar58 = (uint *)(ulong)uVar46;
        }
        goto code_r0x000100793020;
      }
      if (bVar50 != 0xe) {
        if (bVar50 != 0xf) goto code_r0x000100794d2c;
code_r0x000100792e74:
        if (puVar37 == (uint *)0x4) {
          if (((((char)*puVar47 == 'p') && (*(char *)((long)puVar47 + 1) == 'a')) &&
              (*(char *)((long)puVar47 + 2) == 't')) && (*(char *)((long)puVar47 + 3) == 'h')) {
            puVar58 = (uint *)0x1;
            goto code_r0x000100793020;
          }
        }
        else if (((puVar37 == (uint *)0x3) && ((char)*puVar47 == 'c')) &&
                (*(char *)((long)puVar47 + 1) == 'm')) {
code_r0x000100792e9c:
          if (*(char *)((long)puVar47 + 2) == 'd') {
            puVar58 = (uint *)0x0;
            goto code_r0x000100793020;
          }
        }
code_r0x000100793000:
        puVar58 = (uint *)0x2;
        goto code_r0x000100793020;
      }
      if (lVar43 == 4) {
        if ((((char)*puVar37 != 'p') || (*(char *)((long)puVar37 + 1) != 'a')) ||
           ((*(char *)((long)puVar37 + 2) != 't' || (*(char *)((long)puVar37 + 3) != 'h'))))
        goto code_r0x000100792f98;
        puVar58 = (uint *)0x1;
      }
      else {
        if (lVar43 == 3) {
          bVar15 = (char)*puVar37 == 'c';
code_r0x000100792ee0:
          if (((bVar15) && (*(char *)((long)puVar37 + 1) == 'm')) &&
             (*(char *)((long)puVar37 + 2) == 'd')) {
code_r0x000100792efc:
            puVar58 = (uint *)0x0;
            goto joined_r0x000100792f00;
          }
        }
code_r0x000100792f98:
        puVar58 = (uint *)0x2;
      }
joined_r0x000100792f00:
      if (puVar47 != (uint *)0x0) {
        _free();
      }
    }
    if (((ulong)puVar58 & 0xff) == 0) {
      bVar15 = unaff_x22 == (uint *)0x8000000000000000;
code_r0x000100793094:
      if (bVar15) {
        bVar50 = *(byte *)(unaff_x29 + -0x100);
        puVar47 = (uint *)(ulong)bVar50;
        *(char *)(unaff_x29 + -0x100) = (char)unaff_x23;
        if (bVar50 != 0x16) {
          uVar39 = *(undefined8 *)puVar59;
          *(undefined8 *)(unaff_x21 + 2) = *(undefined8 *)(puVar59 + 2);
          *(undefined8 *)unaff_x21 = uVar39;
          uVar36 = *(undefined8 *)((long)puVar59 + 0x17);
          puVar66 = *(uint **)((long)puVar59 + 0xf);
code_r0x0001007930b4:
          *(undefined8 *)((long)unaff_x21 + 0x17) = uVar36;
          *(uint **)((long)unaff_x21 + 0xf) = puVar66;
          bStack00000000000000b0 = (byte)puVar47;
          FUN_1004b62d4(&stack0x00000048,&stack0x000000b0);
          unaff_x22 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
          bVar15 = unaff_x22 == (uint *)0x8000000000000000;
code_r0x0001007930d8:
          if (!bVar15) {
            _uStack0000000000000038 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
            in_stack_00000028 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
            goto code_r0x000100792da8;
          }
          *(uint **)(unaff_x29 + -0xd8) = unaff_x28;
          *(long *)(unaff_x29 + -0xc0) = (long)unaff_x26 + 1;
          unaff_x22 = (uint *)0x0;
          puVar59 = (uint *)(unaff_x29 + -0x100);
          in_stack_00000040[0] = 4;
          in_stack_00000040[1] = 0;
          *(ulong *)(in_stack_00000040 + 2) = CONCAT71(uStack0000000000000051,in_stack_00000050);
          puVar47 = (uint *)0x8000000000000002;
code_r0x000100793e08:
          if ((long)puVar47 <= (long)unaff_x25) goto joined_r0x00010079486c;
          goto LAB_100793e20;
        }
        *(uint **)(unaff_x29 + -0xd8) = unaff_x28;
        *(long *)(unaff_x29 + -0xc0) = (long)unaff_x26 + 1;
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
        goto code_r0x000100794cec;
      }
      *(uint **)(unaff_x29 + -0xd8) = unaff_x28;
      *(long *)(unaff_x29 + -0xc0) = (long)unaff_x26 + 1;
      bStack0000000000000048 = 0x40;
      uStack0000000000000049 = 0x108cade;
      in_stack_00000050 = 3;
      uStack0000000000000051 = 0;
      bStack00000000000000b0 = (byte)&stack0x00000048;
      bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
      uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
      uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
      uStack00000000000000b8 = 0xa0;
      uStack00000000000000b9 = 0x100c7b3;
      uStack00000000000000bf = 0;
      uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
      goto code_r0x000100793a54;
    }
    if (((uint)puVar58 & 0xff) != 1) {
      bVar50 = *(byte *)(unaff_x29 + -0x100);
      puVar47 = (uint *)(ulong)bVar50;
      *(char *)(unaff_x29 + -0x100) = (char)unaff_x23;
      bVar15 = bVar50 == 0x16;
code_r0x0001007930f8:
      if (!bVar15) {
        uVar39 = *(undefined8 *)puVar59;
        *(undefined8 *)(unaff_x21 + 2) = *(undefined8 *)(puVar59 + 2);
        *(undefined8 *)unaff_x21 = uVar39;
        uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
        *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
        *(undefined8 *)((long)unaff_x21 + 0xf) = uVar39;
        bStack00000000000000b0 = (byte)puVar47;
        FUN_100e077ec(&stack0x000000b0);
        goto code_r0x000100792da8;
      }
      *(uint **)(unaff_x29 + -0xd8) = unaff_x28;
      *(long *)(unaff_x29 + -0xc0) = (long)unaff_x26 + 1;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x000100794cec;
    }
    if (unaff_x25 != (uint *)0x8000000000000001) {
      *(uint **)(unaff_x29 + -0xd8) = unaff_x28;
      *(long *)(unaff_x29 + -0xc0) = (long)unaff_x26 + 1;
      bStack0000000000000048 = 0x38;
      uStack0000000000000049 = 0x108c610;
      in_stack_00000050 = 4;
      uStack0000000000000051 = 0;
      bStack00000000000000b0 = (byte)&stack0x00000048;
      bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
      uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
      uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
      uStack00000000000000b8 = 0xa0;
      uStack00000000000000b9 = 0x100c7b3;
      uStack00000000000000bf = 0;
      uVar39 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000b0);
      puVar59 = (uint *)(unaff_x29 + -0x100);
      in_stack_00000040[0] = 4;
      in_stack_00000040[1] = 0;
      *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
      unaff_x25 = (uint *)((ulong)unaff_x25 & 0x7fffffffffffffff);
      goto joined_r0x00010079486c;
    }
    puVar47 = (uint *)(ulong)*(byte *)(unaff_x29 + -0x100);
code_r0x000100793048:
    *(char *)(unaff_x29 + -0x100) = (char)unaff_x23;
    if ((int)puVar47 == 0x16) {
      *(uint **)(unaff_x29 + -0xd8) = unaff_x28;
      *(long *)(unaff_x29 + -0xc0) = (long)unaff_x26 + 1;
      FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x000100794cec;
    }
    uVar39 = *(undefined8 *)puVar59;
    *(undefined8 *)(unaff_x21 + 2) = *(undefined8 *)(puVar59 + 2);
    *(undefined8 *)unaff_x21 = uVar39;
    uVar39 = *(undefined8 *)((long)puVar59 + 0xf);
    *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)puVar59 + 0x17);
    *(undefined8 *)((long)unaff_x21 + 0xf) = uVar39;
    bStack00000000000000b0 = (byte)puVar47;
    puVar37 = (uint *)&stack0x00000048;
code_r0x000100793070:
    FUN_1004b60cc(puVar37,&stack0x000000b0);
    unaff_x25 = (uint *)CONCAT71(uStack0000000000000049,bStack0000000000000048);
    if (unaff_x25 == (uint *)0x8000000000000001) {
      *(uint **)(unaff_x29 + -0xd8) = unaff_x28;
      *(long *)(unaff_x29 + -0xc0) = (long)unaff_x26 + 1;
      in_stack_00000040[0] = 4;
      in_stack_00000040[1] = 0;
      *(ulong *)(in_stack_00000040 + 2) = CONCAT71(uStack0000000000000051,in_stack_00000050);
      puVar59 = (uint *)(unaff_x29 + -0x100);
      goto LAB_100793e20;
    }
    in_stack_00000030 = (uint *)CONCAT71(uStack0000000000000051,in_stack_00000050);
    in_stack_00000020 = (uint *)CONCAT44(uStack000000000000005c,_uStack0000000000000058);
code_r0x000100792da8:
    puVar51 = unaff_x27 + 0x10;
    unaff_x26 = (uint *)((long)unaff_x26 + 1);
    puVar58 = in_stack_00000018;
    puVar37 = unaff_x24;
    unaff_x27 = unaff_x28;
  } while (puVar51 != unaff_x24);
  *(uint **)(unaff_x29 + -0xd8) = puVar37;
  *(uint **)(unaff_x29 + -0xc0) = puVar58;
  if (unaff_x22 != (uint *)0x8000000000000000) {
    puVar59 = (uint *)0x8000000000000000;
    if (unaff_x25 != (uint *)0x8000000000000001) {
      puVar59 = unaff_x25;
    }
    in_stack_00000040[0] = 1;
    in_stack_00000040[1] = 0;
    *(uint **)(in_stack_00000040 + 2) = puVar59;
    *(uint **)(in_stack_00000040 + 4) = in_stack_00000030;
    *(uint **)(in_stack_00000040 + 6) = in_stack_00000020;
    *(uint **)(in_stack_00000040 + 8) = unaff_x22;
    *(uint **)(in_stack_00000040 + 10) = _uStack0000000000000038;
    *(uint **)(in_stack_00000040 + 0xc) = in_stack_00000028;
    in_stack_000001d8 = *(undefined8 *)(in_stack_00000040 + 0xe);
    in_stack_000001d0 = *(undefined8 *)(in_stack_00000040 + 0xc);
    in_stack_000001e8 = *(undefined8 *)(in_stack_00000040 + 0x12);
    in_stack_000001e0 = *(undefined8 *)(in_stack_00000040 + 0x10);
    in_stack_000001b8 = *(undefined8 *)(in_stack_00000040 + 6);
    in_stack_000001b0 = *(undefined8 *)(in_stack_00000040 + 4);
    in_stack_000001c8 = *(undefined8 *)(in_stack_00000040 + 10);
    in_stack_000001c0 = *(undefined8 *)(in_stack_00000040 + 8);
    in_stack_000001a8 = *(undefined8 *)(in_stack_00000040 + 2);
    in_stack_000001a0 = *(uint **)in_stack_00000040;
    lVar43 = FUN_100fbc67c(unaff_x29 + -0x100);
code_r0x000100793ac8:
    if (lVar43 == 0) goto code_r0x0001007941dc;
    in_stack_00000040[0] = 4;
    in_stack_00000040[1] = 0;
    *(long *)(in_stack_00000040 + 2) = lVar43;
code_r0x000100793c88:
    FUN_100e1d024(unaff_x29 + -0xb0);
    goto code_r0x0001007941dc;
  }
code_r0x000100793a20:
  bStack0000000000000048 = 0x40;
  uStack0000000000000049 = 0x108cade;
  in_stack_00000050 = 3;
  uStack0000000000000051 = 0;
  bStack00000000000000b0 = (byte)&stack0x00000048;
  bStack00000000000000b1 = (byte)((ulong)&stack0x00000048 >> 8);
  uStack00000000000000b2 = (undefined5)((ulong)&stack0x00000048 >> 0x10);
  uStack00000000000000b7 = (undefined1)((ulong)&stack0x00000048 >> 0x38);
  uStack00000000000000b8 = 0xa0;
  uStack00000000000000b9 = 0x100c7b3;
  uStack00000000000000bf = 0;
  unaff_x22 = (uint *)0x0;
  uVar39 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000b0);
code_r0x000100793a54:
  puVar59 = (uint *)(unaff_x29 + -0x100);
  in_stack_00000040[0] = 4;
  in_stack_00000040[1] = 0;
  *(undefined8 *)(in_stack_00000040 + 2) = uVar39;
  if (-0x7fffffffffffffff < (long)unaff_x25) {
joined_r0x00010079486c:
    if (unaff_x25 != (uint *)0x0) {
      _free(in_stack_00000030);
    }
  }
LAB_100793e20:
  if (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0) {
    _free(_uStack0000000000000038);
  }
  FUN_100d34830(puVar59 + 8);
LAB_1007943e4:
  if (*(char *)(unaff_x29 + -0x100) != '\x16') {
    FUN_100e077ec(unaff_x29 + -0x100);
  }
code_r0x0001007941dc:
code_r0x0001007941e0:
  return;
}

