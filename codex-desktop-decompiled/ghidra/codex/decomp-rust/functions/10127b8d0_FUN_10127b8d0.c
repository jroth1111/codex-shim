
/* WARNING: Possible PIC construction at 0x0001012931c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101292ee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101292f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101292e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101292e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101292f5c) */
/* WARNING: Removing unreachable block (ram,0x00010127f070) */
/* WARNING: Removing unreachable block (ram,0x00010127f078) */
/* WARNING: Removing unreachable block (ram,0x00010128259c) */
/* WARNING: Removing unreachable block (ram,0x000101282610) */
/* WARNING: Removing unreachable block (ram,0x000101282630) */
/* WARNING: Removing unreachable block (ram,0x0001012825b4) */
/* WARNING: Removing unreachable block (ram,0x000101299eb0) */
/* WARNING: Removing unreachable block (ram,0x000101299ecc) */
/* WARNING: Removing unreachable block (ram,0x000101299ed0) */
/* WARNING: Type propagation algorithm not settling */

ulong * FUN_10127b8d0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                     undefined1 param_4 [16],undefined8 param_5,undefined8 param_6,
                     undefined *param_7)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  undefined7 uVar9;
  undefined7 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  ulong **ppuVar13;
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
  char *pcVar32;
  undefined8 uVar33;
  ulong *puVar34;
  undefined8 *puVar35;
  long lVar36;
  byte *pbVar37;
  undefined1 uVar38;
  undefined2 uVar39;
  uint uVar40;
  int iVar41;
  ulong *puVar42;
  ulong *puVar43;
  ulong *puVar44;
  undefined1 *puVar45;
  long *plVar46;
  int iVar47;
  ulong *puVar48;
  ulong uVar49;
  ulong uVar50;
  ulong *puVar51;
  ulong *puVar52;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong extraout_x15_03;
  ulong extraout_x15_04;
  ulong extraout_x15_05;
  ulong extraout_x15_06;
  ulong extraout_x15_07;
  ulong uVar53;
  ulong *unaff_x19;
  ulong *puVar54;
  ulong *puVar55;
  ulong *unaff_x20;
  ulong uVar56;
  ulong *puVar57;
  ulong *puVar58;
  long lVar59;
  uint uVar60;
  ulong *unaff_x21;
  ulong *puVar61;
  ulong *unaff_x22;
  ulong *unaff_x24;
  ulong *puVar62;
  long lVar63;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong *unaff_x27;
  ulong *puVar64;
  undefined1 *unaff_x29;
  undefined *puVar65;
  double dVar66;
  ulong uVar67;
  ulong uVar68;
  ulong uVar69;
  ulong uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined1 uStack0000000000000008;
  undefined2 uStack0000000000000009;
  undefined5 uStack000000000000000b;
  uint uStack0000000000000010;
  float fStack0000000000000014;
  ulong *in_stack_00000018;
  ulong *in_stack_00000020;
  undefined4 uStack0000000000000028;
  uint uStack000000000000002c;
  char cStack0000000000000030;
  undefined4 uStack0000000000000038;
  uint uStack000000000000003c;
  byte bStack0000000000000040;
  undefined7 uStack0000000000000041;
  uint in_stack_00000048;
  float fStack000000000000004c;
  byte bStack0000000000000050;
  char cStack0000000000000051;
  undefined6 uStack0000000000000052;
  byte bStack0000000000000058;
  undefined7 uStack0000000000000059;
  char cStack0000000000000060;
  ulong *in_stack_00000068;
  ulong *in_stack_00000070;
  ulong *in_stack_00000078;
  char cStack0000000000000080;
  undefined7 uStack0000000000000081;
  ulong *in_stack_00000088;
  byte bStack0000000000000090;
  byte bStack0000000000000091;
  undefined6 uStack0000000000000092;
  undefined1 uStack0000000000000098;
  undefined7 uStack0000000000000099;
  byte bStack00000000000000a0;
  undefined7 uStack00000000000000a1;
  undefined7 uStack00000000000000a8;
  undefined1 uStack00000000000000af;
  undefined7 uStack00000000000000b0;
  undefined1 uStack00000000000000b7;
  ulong *in_stack_000000b8;
  char cStack00000000000000c0;
  undefined7 uStack00000000000000c1;
  ulong *in_stack_000000c8;
  ulong *in_stack_000000d0;
  ulong *in_stack_000000d8;
  ulong *in_stack_000000e0;
  ulong *in_stack_000000e8;
  undefined4 uStack00000000000000f0;
  byte bStack00000000000000f8;
  undefined4 uStack00000000000000f9;
  undefined2 uStack00000000000000fd;
  undefined1 uStack00000000000000ff;
  byte bStack0000000000000100;
  char cStack0000000000000101;
  undefined2 uStack0000000000000102;
  undefined1 uStack0000000000000104;
  undefined2 uStack0000000000000105;
  undefined1 uStack0000000000000107;
  undefined7 uStack0000000000000108;
  undefined1 uStack000000000000010f;
  byte bStack0000000000000110;
  char cStack0000000000000111;
  undefined6 uStack0000000000000112;
  undefined1 uStack0000000000000118;
  undefined7 uStack0000000000000119;
  undefined1 uStack0000000000000120;
  undefined7 uStack0000000000000121;
  ulong *in_stack_00000128;
  ulong *in_stack_00000130;
  ulong in_stack_00000138;
  ulong *in_stack_00000140;
  ulong in_stack_00000148;
  undefined1 uStack0000000000000150;
  undefined7 uStack0000000000000151;
  byte bStack0000000000000158;
  undefined7 uStack0000000000000159;
  byte bStack0000000000000160;
  undefined7 uStack0000000000000161;
  ulong *in_stack_00000168;
  ulong *in_stack_00000170;
  ulong *in_stack_00000178;
  ulong *in_stack_00000180;
  ulong *in_stack_00000188;
  ulong *in_stack_00000190;
  ulong *in_stack_00000198;
  ulong *in_stack_000001a0;
  ulong *in_stack_000001a8;
  ulong *in_stack_000001b0;
  ulong *in_stack_000001b8;
  ulong *in_stack_000001c0;
  ulong *in_stack_000001c8;
  ulong *in_stack_000001d0;
  ulong *in_stack_000001d8;
  ulong *in_stack_000001e0;
  ulong *in_stack_000001e8;
  ulong *in_stack_000001f0;
  ulong *in_stack_000001f8;
  ulong *in_stack_00000200;
  ulong *in_stack_00000208;
  ulong in_stack_00000210;
  byte bVar74;
  ulong in_stack_00000220;
  ulong *in_stack_00000240;
  ulong *in_stack_00000248;
  ulong *in_stack_00000250;
  ulong *in_stack_00000258;
  ulong in_stack_000002a0;
  ulong *in_stack_000002a8;
  ulong *in_stack_000002b0;
  ulong *in_stack_000002b8;
  ulong in_stack_000002c0;
  ulong in_stack_000002c8;
  ulong in_stack_000002d0;
  ulong *in_stack_000002d8;
  ulong *in_stack_000002e0;
  ulong in_stack_000002e8;
  ulong in_stack_000002f0;
  ulong *in_stack_00000300;
  ulong in_stack_00000308;
  ulong in_stack_00000310;
  ulong in_stack_00000320;
  ulong in_stack_00000328;
  ulong in_stack_00000330;
  ulong in_stack_00000340;
  ulong in_stack_00000348;
  ulong in_stack_00000350;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  undefined7 in_stack_00000370;
  undefined4 in_stack_00000377;
  ulong in_stack_00000380;
  ulong in_stack_00000388;
  ulong in_stack_00000390;
  long in_stack_000003e0;
  long in_stack_000003e8;
  char in_stack_000003f0;
  char cVar75;
  ulong in_stack_00000400;
  ulong in_stack_00000408;
  long in_stack_00000418;
  long in_stack_00000428;
  ulong *in_stack_00000430;
  ulong in_stack_00000470;
  ulong in_stack_00000478;
  ulong in_stack_00000480;
  long in_stack_00000520;
  undefined8 in_stack_00000528;
  ulong *in_stack_00000578;
  long in_stack_00000580;
  char cVar76;
  ulong *in_stack_000005b0;
  ulong *in_stack_000005b8;
  byte abStack_150 [8];
  byte abStack_148 [56];
  ulong *puStack_110;
  ulong *puStack_108;
  ulong uStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong *puStack_50;
  ulong in_stack_ffffffffffffffb8;
  ulong *in_stack_ffffffffffffffc0;
  ulong *puStack_38;
  ulong *puStack_30;
  
  uVar70 = param_4._8_8_;
  uVar69 = param_4._0_8_;
  uVar68 = param_3._8_8_;
  uVar49 = param_3._0_8_;
  uVar56 = param_2._8_8_;
  uVar50 = param_2._0_8_;
  uVar33 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000110);
code_r0x00010127b8e0:
  in_stack_00000048 = (uint)uVar33;
  fStack000000000000004c = (float)((ulong)uVar33 >> 0x20);
LAB_10127ae68:
  _bStack0000000000000040 = (ulong *)CONCAT71(uStack0000000000000041,2);
  puVar58 = _uStack0000000000000038;
code_r0x00010127ae74:
  FUN_100d03040(&stack0x000000b8);
  puVar65 = (undefined *)0x10127ae88;
  FUN_100d34830(unaff_x21 + 4);
  uVar53 = extraout_x15_04;
  if (unaff_x29[-0xb0] == '\x16') goto LAB_10127ad0c;
code_r0x00010127ae94:
  puVar65 = (undefined *)0x10127ae9c;
  FUN_100e077ec(unaff_x29 + -0xb0);
  uVar53 = extraout_x15_05;
LAB_10127ad0c:
  puVar55 = (ulong *)&stack0x000000f0;
  pcVar32 = (char *)CONCAT44(fStack000000000000004c,in_stack_00000048);
  auVar71._8_8_ = pcVar32;
  auVar71._0_8_ = unaff_x19;
  uVar40 = (uint)bStack0000000000000040;
  bVar16 = SBORROW4(uVar40,2);
  bVar17 = (int)(uVar40 - 2) < 0;
  if (uVar40 == 2) goto LAB_10127b678;
  uVar67 = CONCAT71(uStack0000000000000059,bStack0000000000000058);
  puVar43 = (ulong *)CONCAT62(uStack0000000000000052,
                              CONCAT11(cStack0000000000000051,bStack0000000000000050));
  bStack0000000000000100 = bStack0000000000000058;
  cStack0000000000000101 = (char)uStack0000000000000059;
  uStack0000000000000102 = (undefined2)((uint7)uStack0000000000000059 >> 8);
  uStack0000000000000104 = (undefined1)((uint7)uStack0000000000000059 >> 0x18);
  uStack0000000000000105 = (undefined2)((uint7)uStack0000000000000059 >> 0x20);
  uStack0000000000000107 = (undefined1)((uint7)uStack0000000000000059 >> 0x30);
  bStack00000000000000f8 = bStack0000000000000050;
  uStack00000000000000f9 = (undefined4)((ulong)puVar43 >> 8);
  uStack00000000000000fd = (undefined2)((uint6)uStack0000000000000052 >> 0x18);
  uStack00000000000000ff = (undefined1)((uint6)uStack0000000000000052 >> 0x28);
  uStack0000000000000108 = SUB87(_cStack0000000000000060,0);
  uStack000000000000010f = (undefined1)((ulong)_cStack0000000000000060 >> 0x38);
  _uStack00000000000000f0 = (ulong *)pcVar32;
  if (((ulong)_bStack0000000000000040 & 1) != 0) {
    *(undefined **)(unaff_x29 + -0xb0) = &UNK_108cae363;
    *(undefined8 *)(unaff_x29 + -0xa8) = 0x1c;
    *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cae3b2;
    *(undefined8 *)(unaff_x29 + -0x98) = 0xc;
    pcVar32 = (char *)FUN_100490e6c(&stack0x000000f0,unaff_x29 + -0xb0);
    if ((ulong *)pcVar32 == (ulong *)0x0) {
      *puVar58 = 0x8000000000000000;
      return (ulong *)0x0;
    }
    goto LAB_10127b678;
  }
  pbVar37 = (byte *)(ulong)(uint)fStack000000000000004c;
  auVar7._8_4_ = fStack000000000000004c;
  auVar7._0_8_ = pcVar32;
  auVar7._12_4_ = 0;
  auVar6._8_4_ = fStack000000000000004c;
  auVar6._0_8_ = pcVar32;
  auVar6._12_4_ = 0;
  auVar5._8_4_ = fStack000000000000004c;
  auVar5._0_8_ = pcVar32;
  auVar5._12_4_ = 0;
  auVar4._8_4_ = fStack000000000000004c;
  auVar4._0_8_ = pcVar32;
  auVar4._12_4_ = 0;
  auVar73._8_4_ = fStack000000000000004c;
  auVar73._0_8_ = pcVar32;
  auVar73._12_4_ = 0;
  auVar72._8_4_ = fStack000000000000004c;
  auVar72._0_8_ = unaff_x19;
  auVar72._12_4_ = 0;
  puVar48 = (ulong *)((ulong)pcVar32 >> 0x10);
  puVar42 = (ulong *)((ulong)pcVar32 >> 8);
  puVar51 = (ulong *)((ulong)in_stack_00000048 & 0xff);
  puVar52 = (ulong *)&UNK_108c9f9ba;
  uVar38 = SUB81(unaff_x22,0);
  cVar75 = (char)(in_stack_00000048 >> 8);
  bVar31 = false;
  bVar29 = false;
  bVar27 = false;
  bVar23 = false;
  bVar30 = false;
  bVar25 = false;
  bVar20 = false;
  bVar15 = false;
  bVar24 = false;
  bVar14 = false;
  bVar22 = false;
  bVar21 = false;
  bVar19 = false;
  bVar28 = false;
  bVar26 = false;
  bVar18 = false;
  ppuVar13 = (ulong **)register0x00000008;
  puVar34 = (ulong *)pcVar32;
  puVar44 = puVar42;
  puVar54 = unaff_x19;
  puVar57 = unaff_x20;
  puVar61 = unaff_x22;
  puVar62 = unaff_x24;
  puVar64 = unaff_x27;
  switch(puVar51) {
  case (ulong *)0x0:
    unaff_x29[-0xaf] = cVar75;
    unaff_x29[-0xb0] = 0;
    goto code_r0x00010127b66c;
  case (ulong *)0x1:
    uVar50 = ((ulong)in_stack_00000048 & 0xff00) >> 8;
    goto code_r0x00010127b820;
  case (ulong *)0x2:
    uVar50 = (ulong)(in_stack_00000048 >> 0x10);
    goto code_r0x00010127b820;
  case (ulong *)0x3:
    *(byte **)(unaff_x29 + -0xa8) = pbVar37;
    goto code_r0x00010127b824;
  case (ulong *)0x4:
    uVar50 = CONCAT17(uStack00000000000000ff,
                      CONCAT25(uStack00000000000000fd,
                               CONCAT41(uStack00000000000000f9,bStack0000000000000050)));
code_r0x00010127b820:
    *(ulong *)(unaff_x29 + -0xa8) = uVar50;
code_r0x00010127b824:
    uVar38 = 1;
    break;
  case (ulong *)0x5:
    lVar59 = (long)cVar75;
    goto code_r0x00010127b860;
  case (ulong *)0x6:
    lVar59 = (long)(short)(in_stack_00000048 >> 0x10);
    goto code_r0x00010127b860;
  case (ulong *)0x7:
    lVar59 = (long)(int)fStack000000000000004c;
    goto code_r0x00010127b860;
  case (ulong *)0x8:
    lVar59 = CONCAT17(uStack00000000000000ff,
                      CONCAT25(uStack00000000000000fd,
                               CONCAT41(uStack00000000000000f9,bStack0000000000000050)));
code_r0x00010127b860:
    *(long *)(unaff_x29 + -0xa8) = lVar59;
    uVar38 = 2;
    break;
  case (ulong *)0x9:
    dVar66 = (double)fStack000000000000004c;
    goto code_r0x00010127b850;
  case (ulong *)0xa:
    dVar66 = (double)CONCAT17(uStack00000000000000ff,
                              CONCAT25(uStack00000000000000fd,
                                       CONCAT41(uStack00000000000000f9,bStack0000000000000050)));
code_r0x00010127b850:
    *(double *)(unaff_x29 + -0xa8) = dVar66;
    uVar38 = 3;
    break;
  case (ulong *)0xb:
    puVar58 = (ulong *)func_0x0001087eed04(puVar58);
    return puVar58;
  case (ulong *)0xc:
    puVar58 = (ulong *)func_0x000108811534(puVar58,&stack0x000000f8);
    return puVar58;
  case (ulong *)0xd:
    *(ulong *)(unaff_x29 + -0xa8) =
         CONCAT17(uStack00000000000000ff,
                  CONCAT25(uStack00000000000000fd,
                           CONCAT41(uStack00000000000000f9,bStack0000000000000050)));
    *(ulong *)(unaff_x29 + -0xa0) =
         CONCAT17(uStack0000000000000107,
                  CONCAT25(uStack0000000000000105,
                           CONCAT14(uStack0000000000000104,
                                    CONCAT22(uStack0000000000000102,
                                             CONCAT11(cStack0000000000000101,bStack0000000000000058)
                                            ))));
    uVar38 = 5;
    break;
  case (ulong *)0xe:
    puVar58 = (ulong *)func_0x000108820cfc(puVar58,&stack0x000000f8);
    return puVar58;
  case (ulong *)0xf:
    *(ulong *)(unaff_x29 + -0xa8) =
         CONCAT17(uStack00000000000000ff,
                  CONCAT25(uStack00000000000000fd,
                           CONCAT41(uStack00000000000000f9,bStack0000000000000050)));
    *(ulong *)(unaff_x29 + -0xa0) =
         CONCAT17(uStack0000000000000107,
                  CONCAT25(uStack0000000000000105,
                           CONCAT14(uStack0000000000000104,
                                    CONCAT22(uStack0000000000000102,
                                             CONCAT11(cStack0000000000000101,bStack0000000000000058)
                                            ))));
    uVar38 = 6;
    break;
  case (ulong *)0x10:
    uVar38 = 8;
    break;
  default:
    unaff_x20 = (ulong *)CONCAT17(uStack00000000000000ff,
                                  CONCAT25(uStack00000000000000fd,
                                           CONCAT41(uStack00000000000000f9,bStack0000000000000050)))
    ;
    uVar50 = *unaff_x20;
    *(ulong *)(unaff_x29 + -0xa8) = unaff_x20[1];
    *(ulong *)(unaff_x29 + -0xb0) = uVar50;
    uVar50 = unaff_x20[2];
    *(ulong *)(unaff_x29 + -0x98) = unaff_x20[3];
    *(ulong *)(unaff_x29 + -0xa0) = uVar50;
    func_0x0001087fea3c(puVar58,unaff_x29 + -0xb0);
    goto code_r0x00010127afb4;
  case (ulong *)0x12:
    uVar38 = 7;
    break;
  case (ulong *)0x13:
    unaff_x20 = (ulong *)CONCAT17(uStack00000000000000ff,
                                  CONCAT25(uStack00000000000000fd,
                                           CONCAT41(uStack00000000000000f9,bStack0000000000000050)))
    ;
    uVar67 = unaff_x20[1];
    puVar43 = (ulong *)*unaff_x20;
  case (ulong *)0x89:
    *(ulong *)(unaff_x29 + -0xa8) = uVar67;
    *(ulong **)(unaff_x29 + -0xb0) = puVar43;
    uVar50 = unaff_x20[2];
    *(ulong *)(unaff_x29 + -0x98) = unaff_x20[3];
    *(ulong *)(unaff_x29 + -0xa0) = uVar50;
    func_0x000108829c38(puVar58,unaff_x29 + -0xb0);
    goto code_r0x00010127afb4;
  case (ulong *)0x14:
  case (ulong *)0x99:
    unaff_x25 = (ulong *)CONCAT17(uStack00000000000000ff,
                                  CONCAT25(uStack00000000000000fd,
                                           CONCAT41(uStack00000000000000f9,bStack0000000000000050)))
    ;
    unaff_x20 = (ulong *)CONCAT17(uStack0000000000000107,
                                  CONCAT25(uStack0000000000000105,
                                           CONCAT14(uStack0000000000000104,
                                                    CONCAT22(uStack0000000000000102,
                                                             CONCAT11(cStack0000000000000101,
                                                                      bStack0000000000000058)))));
    unaff_x26 = unaff_x20 + (long)_cStack0000000000000060 * 4;
    unaff_x22 = _cStack0000000000000060;
  case (ulong *)0x83:
    *(ulong **)(unaff_x29 + -0xb0) = unaff_x20;
    *(ulong **)(unaff_x29 + -0xa8) = unaff_x20;
    *(ulong **)(unaff_x29 + -0xa0) = unaff_x25;
    *(ulong **)(unaff_x29 + -0x98) = unaff_x26;
    *(undefined8 *)(unaff_x29 + -0x90) = 0;
    unaff_x21 = unaff_x20;
    if (unaff_x22 == (ulong *)0x0) {
code_r0x00010127af68:
      pbVar37 = &UNK_10b22e448;
      pcVar32 = (char *)0x0;
code_r0x00010127af7c:
      pcVar32 = (char *)FUN_1087e422c(pcVar32,pbVar37);
code_r0x00010127af80:
      *puVar58 = 0x8000000000000001;
      puVar58[1] = (ulong)pcVar32;
    }
    else {
      unaff_x21 = unaff_x20 + 4;
      puVar42 = (ulong *)(ulong)(byte)*unaff_x20;
code_r0x00010127af5c:
      *(ulong **)(unaff_x29 + -0xa8) = unaff_x21;
      bVar18 = (int)puVar42 == 0x16;
code_r0x00010127af64:
      if (bVar18) goto code_r0x00010127af68;
      uVar33 = *(undefined8 *)((long)unaff_x20 + 1);
      uStack0000000000000119 = (undefined7)*(undefined8 *)((long)unaff_x20 + 9);
      cStack0000000000000111 = (char)uVar33;
      uStack0000000000000112 = (undefined6)((ulong)uVar33 >> 8);
      uStack0000000000000118 = (undefined1)((ulong)uVar33 >> 0x38);
      in_stack_00000128 = (ulong *)unaff_x20[3];
      uStack0000000000000120 = (undefined1)unaff_x20[2];
      uStack0000000000000121 = (undefined7)(unaff_x20[2] >> 8);
      *(undefined8 *)(unaff_x29 + -0x90) = 1;
code_r0x00010127b49c:
      bStack0000000000000110 = (byte)puVar42;
      FUN_1013d38a0(&stack0x00000090,&stack0x00000110);
      puVar55 = (ulong *)CONCAT62(uStack0000000000000092,
                                  CONCAT11(bStack0000000000000091,bStack0000000000000090));
      pcVar32 = (char *)CONCAT71(uStack0000000000000099,uStack0000000000000098);
      if (puVar55 == (ulong *)0x8000000000000000) goto code_r0x00010127af80;
      in_stack_000000e0 = (ulong *)CONCAT71(uStack00000000000000a1,bStack00000000000000a0);
      in_stack_000000d0 = puVar55;
      in_stack_000000d8 = (ulong *)pcVar32;
      if (unaff_x22 == (ulong *)0x1) {
code_r0x00010127b520:
        uVar50 = 0;
code_r0x00010127b524:
        puVar58[1] = (ulong)in_stack_000000d8;
        *puVar58 = (ulong)in_stack_000000d0;
        puVar58[2] = (ulong)in_stack_000000e0;
        puVar58[3] = uVar50;
        if (*puVar58 != 0x8000000000000001) {
          _bStack0000000000000040 = (ulong *)*puVar58;
          uVar50 = puVar58[2];
          in_stack_00000048 = (uint)puVar58[1];
          fStack000000000000004c = (float)(puVar58[1] >> 0x20);
          bStack0000000000000058 = (byte)puVar58[3];
          uStack0000000000000059 = (undefined7)(puVar58[3] >> 8);
          bStack0000000000000050 = (byte)uVar50;
          cStack0000000000000051 = (char)(uVar50 >> 8);
          uStack0000000000000052 = (undefined6)(uVar50 >> 0x10);
          puVar55 = (ulong *)FUN_100fbc738(unaff_x29 + -0xb0);
          if (puVar55 == (ulong *)0x0) {
            return (ulong *)0x0;
          }
          goto code_r0x00010127b558;
        }
      }
      else {
        unaff_x21 = unaff_x20 + 8;
        *(ulong **)(unaff_x29 + -0xa8) = unaff_x21;
        bVar74 = (byte)unaff_x20[4];
        if (bVar74 == 0x16) goto code_r0x00010127b520;
        uVar33 = *(undefined8 *)((long)unaff_x20 + 0x21);
        uStack0000000000000099 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
        bStack0000000000000091 = (byte)uVar33;
        uStack0000000000000092 = (undefined6)((ulong)uVar33 >> 8);
        uStack0000000000000098 = (undefined1)((ulong)uVar33 >> 0x38);
        uStack00000000000000a8 = (undefined7)unaff_x20[7];
        uStack00000000000000af = (undefined1)(unaff_x20[7] >> 0x38);
        bStack00000000000000a0 = (byte)unaff_x20[6];
        uStack00000000000000a1 = (undefined7)(unaff_x20[6] >> 8);
        *(undefined8 *)(unaff_x29 + -0x90) = 2;
        bStack0000000000000090 = bVar74;
        if (bVar74 == 0x10) {
code_r0x00010127b518:
          pcVar32 = (char *)FUN_100e077ec(&stack0x00000090);
          goto code_r0x00010127b520;
        }
        if (bVar74 == 0x11) {
          puVar35 = (undefined8 *)CONCAT71(uStack0000000000000099,uStack0000000000000098);
          uVar33 = *puVar35;
          uStack0000000000000118 = (undefined1)puVar35[1];
          uStack0000000000000119 = (undefined7)((ulong)puVar35[1] >> 8);
          bStack0000000000000110 = (byte)uVar33;
          cStack0000000000000111 = (char)((ulong)uVar33 >> 8);
          uStack0000000000000112 = (undefined6)((ulong)uVar33 >> 0x10);
          in_stack_00000128 = (ulong *)puVar35[3];
          uStack0000000000000120 = (undefined1)puVar35[2];
          uStack0000000000000121 = (undefined7)((ulong)puVar35[2] >> 8);
          auVar71 = func_0x00010145ffe4(&stack0x00000110);
          pcVar32 = (char *)_free(puVar35);
        }
        else {
          if (bVar74 == 0x12) goto code_r0x00010127b518;
          auVar71 = func_0x00010145ffe4(&stack0x00000090);
          pcVar32 = auVar71._0_8_;
        }
        uVar50 = auVar71._8_8_;
        if ((auVar71._0_8_ & 1) == 0) goto code_r0x00010127b524;
        *puVar58 = 0x8000000000000001;
        puVar58[1] = uVar50;
        pcVar32 = (char *)FUN_100e79780(&stack0x000000d0);
      }
    }
code_r0x00010127af88:
    unaff_x22 = (ulong *)(((ulong)((long)unaff_x26 - (long)unaff_x21) >> 5) + 1);
    unaff_x19 = unaff_x21;
    while (unaff_x22 = (ulong *)((long)unaff_x22 + -1), unaff_x21 = unaff_x19,
          unaff_x22 != (ulong *)0x0) {
code_r0x00010127af9c:
      unaff_x19 = unaff_x21 + 4;
      pcVar32 = (char *)FUN_100e077ec(unaff_x21);
code_r0x00010127afa8:
    }
    if (unaff_x25 == (ulong *)0x0) {
      return (ulong *)pcVar32;
    }
code_r0x00010127afb4:
    puVar58 = (ulong *)_free(unaff_x20);
    return puVar58;
  case (ulong *)0x15:
  case (ulong *)0x84:
    puVar42 = (ulong *)CONCAT17(uStack0000000000000107,
                                CONCAT25(uStack0000000000000105,
                                         CONCAT14(uStack0000000000000104,
                                                  CONCAT22(uStack0000000000000102,
                                                           CONCAT11(cStack0000000000000101,
                                                                    bStack0000000000000058)))));
    puVar48 = (ulong *)((long)_cStack0000000000000060 * 0x40);
    unaff_x25 = puVar42 + (long)_cStack0000000000000060 * 8;
    unaff_x20 = (ulong *)(unaff_x29 + -0xb0);
    *(ulong **)(unaff_x29 + -0x90) = puVar42;
    *(ulong **)(unaff_x29 + -0x88) = puVar42;
    *(ulong *)(unaff_x29 + -0x80) =
         CONCAT17(uStack00000000000000ff,
                  CONCAT25(uStack00000000000000fd,
                           CONCAT41(uStack00000000000000f9,bStack0000000000000050)));
    *(ulong **)(unaff_x29 + -0x78) = unaff_x25;
    puVar52 = _cStack0000000000000060;
  case (ulong *)0xa7:
    unaff_x29[-0xb0] = 0x16;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
code_r0x00010127aec8:
    if (puVar52 == (ulong *)0x0) {
      in_stack_000000d0 = (ulong *)0x8000000000000000;
      goto code_r0x00010127b6d8;
    }
    unaff_x27 = (ulong *)0x0;
    unaff_x21 = (ulong *)((ulong)&stack0x00000110 | 1);
    unaff_x20 = (ulong *)((ulong)(unaff_x29 + -0xb0) | 1);
    puVar51 = (ulong *)&stack0x00000090;
code_r0x00010127aee4:
    in_stack_00000020 = (ulong *)((ulong)puVar51 | 1);
    _uStack0000000000000028 = (ulong *)0x0;
    puVar48 = puVar48 + -8;
code_r0x00010127aef0:
    lVar59 = ((ulong)puVar48 >> 6) + 1;
    uStack0000000000000008 = (undefined1)lVar59;
    uStack0000000000000009 = (undefined2)((ulong)lVar59 >> 8);
    uStack000000000000000b = (undefined5)((ulong)lVar59 >> 0x18);
    unaff_x22 = puVar42 + 8;
    _cStack0000000000000030 = (ulong *)0x8000000000000000;
    unaff_x26 = (ulong *)0x8000000000000000;
    _uStack0000000000000038 = puVar58;
code_r0x00010127af0c:
    goto code_r0x00010127afe0;
  case (ulong *)0x16:
  case (ulong *)0x1b:
    uStack0000000000000008 = (undefined1)((ulong)in_stack_00000020 >> 0x28);
    uStack0000000000000009 = (undefined2)((ulong)in_stack_00000020 >> 0x30);
    bStack0000000000000100 = bStack0000000000000058;
    uStack0000000000000004 = in_stack_00000020._1_4_;
    *(undefined4 *)((long)unaff_x20 + 1) = in_stack_00000020._1_4_;
    *(int *)((long)unaff_x20 + 4) = (int)((ulong)in_stack_00000020 >> 0x20);
    unaff_x20[1] = (ulong)_uStack0000000000000028;
    *(char *)(unaff_x20 + 2) = cStack0000000000000030;
    *(char *)unaff_x20 = '\0';
    if (unaff_x21 == (ulong *)0x0) {
      return (ulong *)pcVar32;
    }
    goto code_r0x000108aa97c4;
  case (ulong *)0x17:
    func_0x00010882695c(puVar58);
    puVar58 = (ulong *)_free(unaff_x20);
    return puVar58;
  case (ulong *)0x18:
    goto code_r0x0001012849cc;
  case (ulong *)0x19:
    puVar58 = (ulong *)func_0x0001088191b4();
    return puVar58;
  case (ulong *)0x1a:
    *(char **)(unaff_x29 + -0xa0) = (char *)((long)puVar42 + 0xfee);
    *(undefined8 *)(unaff_x29 + -0x98) = 5;
    *(undefined1 **)(unaff_x29 + -0x88) = unaff_x29 + -0xa0;
    *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
    uVar50 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
    *unaff_x26 = 0x8000000000000000;
    unaff_x26[1] = uVar50;
    if ((CONCAT71(uStack0000000000000059,bStack0000000000000058) != 0x8000000000000001) &&
       ((CONCAT71(uStack0000000000000059,bStack0000000000000058) & 0x7fffffffffffffff) != 0)) {
      _free(_uStack0000000000000028);
    }
    if (puVar55 != (ulong *)0x8000000000000000) {
      if (unaff_x21 != (ulong *)0x0) {
        puVar35 = (undefined8 *)(CONCAT44(fStack000000000000004c,in_stack_00000048) + 8);
        do {
          if (puVar35[-1] != 0) {
            _free(*puVar35);
          }
          puVar35 = puVar35 + 3;
          unaff_x21 = (ulong *)((long)unaff_x21 + -1);
        } while (unaff_x21 != (ulong *)0x0);
      }
      if (puVar55 != (ulong *)0x0) {
        _free(CONCAT44(fStack000000000000004c,in_stack_00000048));
      }
    }
    puVar58 = (ulong *)FUN_100d34830(unaff_x22 + 4);
    if (cStack0000000000000060 != '\x16') {
      puVar58 = (ulong *)FUN_100e077ec(&stack0x00000060);
    }
    if ((uStack000000000000003c & 0x1e) != 0x14) {
      puVar58 = (ulong *)FUN_100e077ec();
    }
    return puVar58;
  case (ulong *)0x1c:
    goto code_r0x0001012809ec;
  case (ulong *)0x1d:
    puVar58 = (ulong *)FUN_1087e3db0(pcVar32,pbVar37,unaff_x29 + -0xc0);
    bVar74 = bStack00000000000000f8;
    puVar55 = _uStack00000000000000f0;
    if (_uStack00000000000000f0 == (ulong *)0x2) {
      uVar50 = 0;
      uVar3 = *(undefined4 *)((long)unaff_x21 + 0x29);
    }
    else {
      uVar50 = (ulong)_uStack00000000000000f0 >> 8;
      *(ulong *)(unaff_x29 + -0xc0) =
           CONCAT17(uStack0000000000000104,
                    CONCAT25(uStack0000000000000102,
                             CONCAT14(cStack0000000000000101,
                                      CONCAT13(bStack0000000000000100,
                                               CONCAT12(uStack00000000000000ff,
                                                        uStack00000000000000fd)))));
      in_stack_00000377 =
           CONCAT13(uStack0000000000000107,CONCAT21(uStack0000000000000105,uStack0000000000000104));
      unaff_x25 = (ulong *)CONCAT17(uStack000000000000010f,uStack0000000000000108);
      unaff_x21 = (ulong *)CONCAT62(uStack0000000000000112,
                                    CONCAT11(cStack0000000000000111,bStack0000000000000110));
      _uStack0000000000000038 = (ulong *)CONCAT71(uStack0000000000000121,uStack0000000000000120);
      _cStack0000000000000030 = (ulong *)CONCAT71(uStack0000000000000119,uStack0000000000000118);
      unaff_x26 = in_stack_00000140;
      unaff_x27 = in_stack_00000128;
      uVar3 = uStack00000000000000f9;
      in_stack_00000300 = in_stack_00000130;
      in_stack_00000308 = in_stack_00000138;
    }
    if ((_uStack0000000000000028 == (ulong *)0x0) || (_uStack0000000000000028 == (ulong *)0x6)) {
      uVar50 = (ulong)_uStack00000000000000f0 & 0xff | uVar50 << 8;
    }
    else {
      puVar58 = (ulong *)FUN_100ddb5bc(unaff_x20);
      uVar50 = (ulong)puVar55 & 0xff | uVar50 << 8;
    }
    if (uVar50 != 2) {
      *(undefined8 *)((long)unaff_x19 + 0xd) = *(undefined8 *)(unaff_x29 + -0xc0);
      *(undefined4 *)((long)unaff_x19 + 0x14) = in_stack_00000377;
      unaff_x19[9] = in_stack_00000308;
      unaff_x19[8] = (ulong)in_stack_00000300;
      unaff_x19[3] = (ulong)unaff_x25;
      unaff_x19[4] = (ulong)unaff_x21;
      unaff_x19[6] = (ulong)_uStack0000000000000038;
      unaff_x19[5] = (ulong)_cStack0000000000000030;
      unaff_x19[7] = (ulong)unaff_x27;
      unaff_x19[10] = (ulong)unaff_x26;
    }
    *(byte *)(unaff_x19 + 1) = bVar74;
    *(undefined4 *)((long)unaff_x19 + 9) = uVar3;
    *unaff_x19 = uVar50;
    return puVar58;
  case (ulong *)0x1e:
    goto code_r0x000101281258;
  case (ulong *)0x1f:
    goto code_r0x00010127de68;
  case (ulong *)0x20:
    goto code_r0x00010127c054;
  case (ulong *)0x21:
    goto code_r0x00010127c060;
  case (ulong *)0x22:
    goto code_r0x00010127c03c;
  case (ulong *)0x23:
    goto code_r0x00010127c040;
  case (ulong *)0x24:
    goto code_r0x00010127bffc;
  case (ulong *)0x25:
    goto code_r0x00010127c070;
  case (ulong *)0x26:
    goto code_r0x00010127c088;
  case (ulong *)0x27:
    goto code_r0x00010127c048;
  case (ulong *)0x28:
    goto code_r0x00010127c0a0;
  case (ulong *)0x29:
    FUN_100de6690();
    pcVar32 = (char *)unaff_x19;
    goto code_r0x00010127c060;
  case (ulong *)0x2a:
    goto code_r0x00010127c090;
  case (ulong *)0x2b:
    goto code_r0x00010127bfe8;
  case (ulong *)0x2c:
    goto code_r0x000100de6690;
  case (ulong *)0x2d:
  case (ulong *)0xf7:
    goto code_r0x00010127c078;
  case (ulong *)0x2e:
    goto code_r0x00010127bfd0;
  case (ulong *)0x2f:
    FUN_100de6690(&stack0x00000020);
code_r0x00010127c03c:
    unaff_x19 = (ulong *)pcVar32;
    if (unaff_x21 != (ulong *)0x0) {
code_r0x00010127c040:
      _free(unaff_x20);
code_r0x00010127c048:
      pcVar32 = (char *)unaff_x19;
    }
code_r0x00010127c054:
    FUN_100de8910();
    unaff_x19 = (ulong *)pcVar32;
code_r0x00010127c060:
    __Unwind_Resume(pcVar32);
    puVar65 = &SUB_10127c068;
    auVar73 = func_0x000108a07bc4();
    register0x00000008 = (BADSPACEBASE *)abStack_150;
    puStack_50 = puVar58;
code_r0x00010127c070:
    *(ulong **)((long)register0x00000008 + 0x110) = unaff_x24;
    *(ulong **)((long)register0x00000008 + 0x118) = puVar55;
    *(ulong **)((long)register0x00000008 + 0x120) = unaff_x22;
    *(ulong **)((long)register0x00000008 + 0x128) = unaff_x21;
    puVar54 = unaff_x19;
    auVar4 = auVar73;
code_r0x00010127c078:
    unaff_x19 = auVar4._0_8_;
    *(ulong **)((long)register0x00000008 + 0x130) = unaff_x20;
    *(ulong **)((long)register0x00000008 + 0x138) = puVar54;
    *(undefined1 **)((long)register0x00000008 + 0x140) = unaff_x29;
    *(undefined **)((long)register0x00000008 + 0x148) = puVar65;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + 0x140);
    auVar5 = auVar4;
code_r0x00010127c088:
    unaff_x22 = (ulong *)*auVar5._8_8_;
    puVar42 = (ulong *)((ulong)unaff_x22 ^ 0x8000000000000000);
    auVar6 = auVar5;
code_r0x00010127c090:
    if (-1 < (long)unaff_x22) {
      puVar42 = (ulong *)0x6;
    }
    bVar16 = SBORROW8((long)puVar42,3);
    bVar17 = (long)((long)puVar42 + -3) < 0;
    bVar22 = puVar42 == (ulong *)0x3;
    auVar7 = auVar6;
code_r0x00010127c0a0:
    pbVar37 = auVar7._8_8_;
    pcVar32 = auVar7._0_8_;
    if (bVar22 || bVar17 != bVar16) {
      if (0 < (long)puVar42) {
        bVar25 = puVar42 == (ulong *)0x1;
code_r0x00010127c32c:
        if (bVar25) {
          puVar42 = *(ulong **)(pbVar37 + 8);
code_r0x00010127c438:
          *(ulong **)((long)register0x00000008 + 8) = puVar42;
          uVar38 = 2;
        }
        else {
code_r0x00010127c330:
          bVar26 = puVar42 == (ulong *)0x2;
code_r0x00010127c334:
          if (!bVar26) {
LAB_10127c448:
            *(byte *)((long)register0x00000008 + 1) = pbVar37[8];
            *(undefined1 *)register0x00000008 = 0;
            goto LAB_10127c454;
          }
code_r0x00010127c338:
          *(undefined8 *)((long)register0x00000008 + 8) = *(undefined8 *)(pbVar37 + 8);
          uVar38 = 3;
        }
        *(undefined1 *)register0x00000008 = uVar38;
LAB_10127c454:
        puVar58 = (ulong *)FUN_1087e3db0(unaff_x19,register0x00000008,unaff_x29 + -0x41,
                                         &UNK_10b21ae90);
        return puVar58;
      }
      unaff_x21 = *(ulong **)(pbVar37 + 8);
      unaff_x20 = *(ulong **)(pbVar37 + 0x10);
      if (*(long *)(pbVar37 + 0x18) == 5) {
        puVar42 = (ulong *)(ulong)(uint)*unaff_x20;
        puVar48 = (ulong *)(ulong)*(byte *)((long)unaff_x20 + 4);
code_r0x00010127c0c4:
        if ((int)puVar42 != 0x61636f6c || (int)puVar48 != 0x6c) goto LAB_10127c0dc;
        puVar42 = (ulong *)0x0;
code_r0x00010127c2f8:
        *(char *)(unaff_x19 + 1) = (char)puVar42;
        puVar42 = (ulong *)0x2;
code_r0x00010127c300:
        *unaff_x19 = (ulong)puVar42;
code_r0x00010127c304:
        puVar58 = (ulong *)pcVar32;
        pcVar32 = (char *)unaff_x20;
      }
      else {
        if (*(long *)(pbVar37 + 0x18) == 9) {
          puVar48 = (ulong *)(ulong)(byte)unaff_x20[1];
          bVar23 = *unaff_x20 == 0x726f6d656d5f6e69;
code_r0x00010127c1a8:
          bVar14 = false;
          if (bVar23) {
            bVar14 = (int)puVar48 == 0x79;
          }
code_r0x00010127c1b0:
          if (bVar14) {
code_r0x00010127c1b4:
            *(char *)(unaff_x19 + 1) = '\x01';
            *unaff_x19 = 2;
            puVar58 = (ulong *)pcVar32;
            pcVar32 = (char *)unaff_x20;
            goto joined_r0x00010127c1c4;
          }
        }
LAB_10127c0dc:
        puVar58 = (ulong *)FUN_1087e44e4(unaff_x19,unaff_x20);
        pcVar32 = (char *)unaff_x20;
      }
joined_r0x00010127c1c4:
      if (unaff_x21 == (ulong *)0x0) {
        return puVar58;
      }
code_r0x00010127c310:
code_r0x00010127c31c:
      unaff_x19 = (ulong *)pcVar32;
      goto code_r0x000108aa97c4;
    }
    if (puVar42 == (ulong *)0x4) {
      uVar33 = *(undefined8 *)(pbVar37 + 8);
      *(undefined8 *)(unaff_x29 + -0x58) = *(undefined8 *)(pbVar37 + 0x10);
      *(undefined8 *)(unaff_x29 + -0x60) = uVar33;
code_r0x00010127c1d4:
      puVar42 = *(ulong **)(pbVar37 + 0x18);
code_r0x00010127c1d8:
      *(ulong **)(unaff_x29 + -0x50) = puVar42;
      *(undefined8 *)((long)register0x00000008 + 0x88) = 0;
      *(undefined8 *)((long)register0x00000008 + 0x90) = 1;
      *(undefined8 *)((long)register0x00000008 + 0x98) = 0;
      puVar42 = (ulong *)0x60000020;
code_r0x00010127c1f0:
      *(ulong **)((long)register0x00000008 + 0x10) = puVar42;
      *(undefined8 **)register0x00000008 = (undefined8 *)((long)register0x00000008 + 0x88);
      *(undefined **)((long)register0x00000008 + 8) = &UNK_10b209290;
      pcVar32 = unaff_x29 + -0x60;
code_r0x00010127c208:
      pbVar37 = (byte *)register0x00000008;
code_r0x00010127c20c:
      pcVar32 = (char *)__ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                                  (pcVar32,pbVar37);
      if ((int)pcVar32 != 0) {
        func_0x000108a07a3c(&UNK_108cc3daa,0x37,unaff_x29 + -0x41,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10127c4b0);
        (*pcVar12)();
      }
      unaff_x21 = *(ulong **)((long)register0x00000008 + 0x88);
      unaff_x20 = *(ulong **)((long)register0x00000008 + 0x90);
      param_7 = *(undefined **)((long)register0x00000008 + 0x98);
      bVar24 = param_7 == (undefined *)0x5;
code_r0x00010127c220:
      if (bVar24) {
        puVar42 = (ulong *)(ulong)(uint)*unaff_x20;
        puVar48 = (ulong *)(ulong)*(byte *)((long)unaff_x20 + 4);
code_r0x00010127c22c:
        if ((int)puVar42 == 0x61636f6c && (int)puVar48 == 0x6c) {
          cVar75 = '\0';
LAB_10127c418:
          *(char *)(unaff_x19 + 1) = cVar75;
          *unaff_x19 = 2;
          puVar57 = unaff_x20;
          goto joined_r0x00010127c398;
        }
      }
      else if (param_7 == (undefined *)0x9) {
        puVar42 = (ulong *)*unaff_x20;
code_r0x00010127c3e8:
        puVar48 = (ulong *)(ulong)(byte)unaff_x20[1];
        puVar51 = (ulong *)0x6e69;
code_r0x00010127c3f0:
        bVar15 = false;
        if (puVar42 == (ulong *)((ulong)puVar51 | 0x726f6d656d5f0000)) {
          bVar15 = (int)puVar48 == 0x79;
        }
code_r0x00010127c408:
        if (bVar15) {
          puVar42 = (ulong *)0x1;
code_r0x00010127c410:
          cVar75 = (char)puVar42;
          goto LAB_10127c418;
        }
      }
LAB_10127c244:
      pcVar32 = (char *)unaff_x19;
code_r0x00010127c250:
      pcVar32 = (char *)FUN_1087e44e4(pcVar32,unaff_x20);
code_r0x00010127c25c:
      puVar57 = unaff_x20;
      goto joined_r0x00010127c398;
    }
    if (puVar42 != (ulong *)0x5) {
      unaff_x20 = *(ulong **)(pbVar37 + 0x30);
      puVar55 = *(ulong **)(pbVar37 + 8);
      unaff_x21 = *(ulong **)(pbVar37 + 0x10);
code_r0x00010127c268:
      lVar59 = *(long *)(pbVar37 + 0x20);
      if ((lVar59 != 0) && (puVar42 = (ulong *)(lVar59 * 8), lVar59 * 9 != -0x11)) {
code_r0x00010127c280:
        puVar48 = *(ulong **)(pbVar37 + 0x18);
code_r0x00010127c284:
        _free((char *)((long)puVar48 + (-8 - (long)puVar42)));
      }
      puVar42 = (ulong *)0x70;
      *(ulong **)((long)register0x00000008 + 0x70) = puVar55;
      *(ulong **)((long)register0x00000008 + 0x78) = unaff_x22;
code_r0x00010127c298:
      *(ulong **)((long)register0x00000008 + 0x80) =
           (ulong *)((long)puVar55 + (long)unaff_x21 * (long)puVar42);
      puVar42 = (ulong *)0x8000000000000000;
code_r0x00010127c2a4:
      *(ulong **)((long)register0x00000008 + 0x68) = puVar55;
      *(ulong **)register0x00000008 = puVar42;
      unaff_x29[-0x60] = 0xb;
code_r0x00010127c2b8:
code_r0x00010127c2bc:
      FUN_1087e3db0((undefined1 *)((long)register0x00000008 + 0x88),unaff_x29 + -0x60,
                    unaff_x29 + -0x41);
      unaff_x22 = (ulong *)((long)register0x00000008 + 0x88);
      puVar48 = *(ulong **)((long)register0x00000008 + 0x88);
code_r0x00010127c2d4:
      puVar42 = (ulong *)(ulong)*(byte *)((long)register0x00000008 + 0x90);
      if (puVar48 == (ulong *)0x2) {
code_r0x00010127c2e0:
        if (unaff_x21 == (ulong *)0x0) {
          *(char *)(unaff_x19 + 1) = (char)puVar42;
code_r0x00010127c2e8:
          puVar42 = (ulong *)0x2;
code_r0x00010127c2ec:
          *unaff_x19 = (ulong)puVar42;
          pcVar32 = (char *)register0x00000008;
        }
        else {
          FUN_1087e427c((ulong *)((long)register0x00000008 + 0x88),unaff_x20,&UNK_10b21cb90,
                        &UNK_10b20a590);
          uVar50 = unaff_x22[4];
          uVar49 = unaff_x22[7];
          uVar56 = unaff_x22[6];
          unaff_x19[5] = unaff_x22[5];
          unaff_x19[4] = uVar50;
          unaff_x19[7] = uVar49;
          unaff_x19[6] = uVar56;
          uVar50 = unaff_x22[8];
          unaff_x19[9] = unaff_x22[9];
          unaff_x19[8] = uVar50;
          unaff_x19[10] = *(ulong *)((long)register0x00000008 + 0xd8);
          uVar50 = *unaff_x22;
          uVar49 = unaff_x22[3];
          uVar56 = unaff_x22[2];
          unaff_x19[1] = unaff_x22[1];
          *unaff_x19 = uVar50;
          unaff_x19[3] = uVar49;
          unaff_x19[2] = uVar56;
          pcVar32 = (char *)register0x00000008;
        }
      }
      else {
LAB_10127c3a0:
        uVar33 = *(undefined8 *)((long)unaff_x22 + 0x19);
        *(undefined8 *)((long)unaff_x19 + 0x21) = *(undefined8 *)((long)unaff_x22 + 0x21);
        *(undefined8 *)((long)unaff_x19 + 0x19) = uVar33;
code_r0x00010127c3a8:
        uVar33 = *(undefined8 *)((long)unaff_x22 + 0x29);
        *(undefined8 *)((long)unaff_x19 + 0x31) = *(undefined8 *)((long)unaff_x22 + 0x31);
        *(undefined8 *)((long)unaff_x19 + 0x29) = uVar33;
        uVar67 = *(ulong *)((long)unaff_x22 + 0x41);
        puVar43 = *(ulong **)((long)unaff_x22 + 0x39);
code_r0x00010127c3b4:
        *(ulong *)((long)unaff_x19 + 0x41) = uVar67;
        *(ulong **)((long)unaff_x19 + 0x39) = puVar43;
        uVar50 = unaff_x22[9];
        unaff_x19[10] = unaff_x22[10];
        unaff_x19[9] = uVar50;
code_r0x00010127c3c0:
        uVar33 = *(undefined8 *)((long)unaff_x22 + 9);
        *(undefined8 *)((long)unaff_x19 + 0x11) = *(undefined8 *)((long)unaff_x22 + 0x11);
        *(undefined8 *)((long)unaff_x19 + 9) = uVar33;
        *unaff_x19 = (ulong)puVar48;
        *(char *)(unaff_x19 + 1) = (char)puVar42;
        pcVar32 = (char *)register0x00000008;
      }
code_r0x00010127c3d4:
      puVar58 = (ulong *)FUN_100deffc0(pcVar32);
      return puVar58;
    }
    unaff_x22 = *(ulong **)(pbVar37 + 8);
    unaff_x20 = *(ulong **)(pbVar37 + 0x10);
    unaff_x21 = *(ulong **)(pbVar37 + 0x18);
    *(ulong **)((long)register0x00000008 + 0x88) = unaff_x20;
    *(ulong **)((long)register0x00000008 + 0x90) = unaff_x20;
    *(ulong **)((long)register0x00000008 + 0x98) = unaff_x22;
    *(ulong **)((long)register0x00000008 + 0xa0) = unaff_x20 + (long)unaff_x21 * 10;
    unaff_x29[-0x60] = 10;
    pbVar37 = unaff_x29 + -0x60;
    pcVar32 = (char *)register0x00000008;
code_r0x00010127c140:
    FUN_1087e3db0(pcVar32,pbVar37);
    puVar48 = *(ulong **)register0x00000008;
    puVar42 = (ulong *)(ulong)*(byte *)((long)register0x00000008 + 8);
    if (puVar48 == (ulong *)0x2) {
      if (unaff_x21 == (ulong *)0x0) {
        *(byte *)(unaff_x19 + 1) = *(byte *)((long)register0x00000008 + 8);
        puVar42 = (ulong *)0x2;
code_r0x00010127c160:
        *unaff_x19 = (ulong)puVar42;
      }
      else {
code_r0x00010127c4c0:
        FUN_1087e427c(register0x00000008,unaff_x21);
        uVar50 = *(ulong *)((long)register0x00000008 + 0x20);
        uVar49 = *(ulong *)((long)register0x00000008 + 0x38);
        uVar56 = *(ulong *)((long)register0x00000008 + 0x30);
        unaff_x19[5] = *(ulong *)((long)register0x00000008 + 0x28);
        unaff_x19[4] = uVar50;
        unaff_x19[7] = uVar49;
        unaff_x19[6] = uVar56;
        uVar50 = *(ulong *)((long)register0x00000008 + 0x40);
        unaff_x19[9] = *(ulong *)((long)register0x00000008 + 0x48);
        unaff_x19[8] = uVar50;
        unaff_x19[10] = *(ulong *)((long)register0x00000008 + 0x50);
        uVar50 = *(ulong *)register0x00000008;
        uVar49 = *(ulong *)((long)register0x00000008 + 0x18);
        uVar56 = *(ulong *)((long)register0x00000008 + 0x10);
        unaff_x19[1] = *(ulong *)((long)register0x00000008 + 8);
        *unaff_x19 = uVar50;
        unaff_x19[3] = uVar49;
        unaff_x19[2] = uVar56;
      }
      puVar55 = (ulong *)((long)unaff_x21 + 1);
      puVar57 = unaff_x20;
      while (puVar55 = (ulong *)((long)puVar55 + -1), pcVar32 = (char *)unaff_x20,
            unaff_x21 = unaff_x22, puVar55 != (ulong *)0x0) {
        unaff_x21 = unaff_x20 + 10;
code_r0x00010127c178:
        unaff_x20 = unaff_x21;
        FUN_100ddb5bc(pcVar32);
      }
    }
    else {
      uVar67 = *(ulong *)((long)register0x00000008 + 0x21);
      puVar43 = *(ulong **)((long)register0x00000008 + 0x19);
code_r0x00010127c34c:
      *(ulong *)((long)unaff_x19 + 0x21) = uVar67;
      *(ulong **)((long)unaff_x19 + 0x19) = puVar43;
      uVar33 = *(undefined8 *)((long)register0x00000008 + 0x29);
      *(undefined8 *)((long)unaff_x19 + 0x31) = *(undefined8 *)((long)register0x00000008 + 0x31);
      *(undefined8 *)((long)unaff_x19 + 0x29) = uVar33;
code_r0x00010127c358:
      uVar33 = *(undefined8 *)((long)register0x00000008 + 0x39);
      *(undefined8 *)((long)unaff_x19 + 0x41) = *(undefined8 *)((long)register0x00000008 + 0x41);
      *(undefined8 *)((long)unaff_x19 + 0x39) = uVar33;
code_r0x00010127c360:
      uVar50 = *(ulong *)((long)register0x00000008 + 0x48);
      unaff_x19[10] = *(ulong *)((long)register0x00000008 + 0x50);
      unaff_x19[9] = uVar50;
      uVar67 = *(ulong *)((long)register0x00000008 + 0x11);
      puVar43 = *(ulong **)((long)register0x00000008 + 9);
code_r0x00010127c36c:
      *(ulong *)((long)unaff_x19 + 0x11) = uVar67;
      *(ulong **)((long)unaff_x19 + 9) = puVar43;
      *unaff_x19 = (ulong)puVar48;
      puVar55 = (ulong *)((long)unaff_x21 + 1);
code_r0x00010127c378:
      *(char *)(unaff_x19 + 1) = (char)puVar42;
      puVar57 = unaff_x20;
      while (puVar55 = (ulong *)((long)puVar55 + -1), pcVar32 = (char *)unaff_x20,
            unaff_x21 = unaff_x22, puVar55 != (ulong *)0x0) {
        unaff_x21 = unaff_x20 + 10;
code_r0x00010127c38c:
        unaff_x20 = unaff_x21;
        FUN_100ddb5bc(pcVar32);
      }
    }
joined_r0x00010127c398:
    if (unaff_x21 != (ulong *)0x0) {
      pcVar32 = (char *)_free(puVar57);
    }
code_r0x00010127c484:
    return (ulong *)pcVar32;
  case (ulong *)0x30:
    goto code_r0x00010127bfc8;
  case (ulong *)0x32:
    goto code_r0x00010127c0c4;
  case (ulong *)0x33:
  case (ulong *)0x9c:
    goto code_r0x00010127ae18;
  case (ulong *)0x34:
    goto code_r0x00010127ae48;
  case (ulong *)0x35:
    goto code_r0x00010127adc4;
  case (ulong *)0x36:
    goto code_r0x00010127c304;
  case (ulong *)0x37:
    goto code_r0x00010127c310;
  case (ulong *)0x38:
    goto code_r0x00010127c25c;
  case (ulong *)0x39:
    goto code_r0x00010127c2a4;
  case (ulong *)0x3a:
  case (ulong *)0x5c:
    goto code_r0x00010127c1f0;
  case (ulong *)0x3b:
    goto code_r0x00010127c330;
  case (ulong *)0x3c:
    goto code_r0x00010127c378;
  case (ulong *)0x3d:
  case (ulong *)0x55:
    goto code_r0x00010127c2bc;
  case (ulong *)0x3e:
    goto code_r0x00010127c3e8;
  case (ulong *)0x3f:
  case (ulong *)0x57:
    goto LAB_10127c244;
  case (ulong *)0x40:
    goto LAB_10127c3a0;
  case (ulong *)0x41:
    goto code_r0x00010127c1d4;
  case (ulong *)0x42:
    goto code_r0x00010127c220;
  case (ulong *)0x43:
    goto code_r0x00010127c358;
  case (ulong *)0x44:
    goto code_r0x00010127c1a8;
  case (ulong *)0x45:
    goto code_r0x00010127c284;
  case (ulong *)0x46:
    goto code_r0x00010127c178;
  case (ulong *)0x48:
    goto LAB_10127c448;
  case (ulong *)0x49:
    goto code_r0x00010127b990;
  case (ulong *)0x4a:
code_r0x00010127babc:
    uVar33 = FUN_108856088(pcVar32,pbVar37);
    goto code_r0x00010127b8e0;
  case (ulong *)0x4b:
    goto LAB_10127ad0c;
  case (ulong *)0x4c:
    goto code_r0x00010127c34c;
  case (ulong *)0x4d:
    goto code_r0x00010127c360;
  case (ulong *)0x4e:
    goto code_r0x00010127c2d4;
  case (ulong *)0x4f:
    goto code_r0x00010127c31c;
  case (ulong *)0x50:
    goto code_r0x00010127c268;
  case (ulong *)0x51:
    goto code_r0x00010127c3a8;
  case (ulong *)0x52:
    goto code_r0x00010127c3f0;
  case (ulong *)0x53:
    goto code_r0x00010127c334;
  case (ulong *)0x54:
    goto code_r0x00010127c438;
  case (ulong *)0x56:
    goto code_r0x00010127c408;
  case (ulong *)0x58:
  case (ulong *)0x6b:
    goto code_r0x00010127c280;
  case (ulong *)0x59:
    goto code_r0x00010127c3c0;
  case (ulong *)0x5a:
    goto code_r0x00010127c208;
  case (ulong *)0x5b:
    goto code_r0x00010127c2ec;
  case (ulong *)0x5e:
    goto code_r0x00010127c4c0;
  case (ulong *)0x5f:
    goto code_r0x00010127b9c8;
  case (ulong *)0x60:
    goto code_r0x00010127ba40;
  case (ulong *)0x61:
    goto code_r0x00010127af64;
  case (ulong *)0x62:
    goto code_r0x00010127c32c;
  case (ulong *)0x63:
    goto code_r0x00010127c338;
  case (ulong *)0x64:
    goto code_r0x00010127c298;
  case (ulong *)0x65:
    goto code_r0x00010127c2e0;
  case (ulong *)0x66:
    goto code_r0x00010127c22c;
  case (ulong *)0x67:
    goto code_r0x00010127c36c;
  case (ulong *)0x68:
    goto code_r0x00010127c3b4;
  case (ulong *)0x69:
    goto code_r0x00010127c2f8;
  case (ulong *)0x6a:
    goto code_r0x00010127c410;
  case (ulong *)0x6c:
    goto code_r0x00010127c3d4;
  case (ulong *)0x6d:
    goto code_r0x00010127c20c;
  case (ulong *)0x6e:
    goto code_r0x00010127c250;
  case (ulong *)0x6f:
    goto code_r0x00010127c38c;
  case (ulong *)0x70:
    goto code_r0x00010127c1d8;
  case (ulong *)0x71:
    goto code_r0x00010127c2b8;
  case (ulong *)0x72:
    goto code_r0x00010127c1b4;
  case (ulong *)0x74:
    goto code_r0x00010127c484;
  case (ulong *)0x75:
    goto code_r0x00010127b9ac;
  case (ulong *)0x76:
    goto code_r0x00010127ba80;
  case (ulong *)0x77:
    goto code_r0x00010127b344;
  case (ulong *)0x78:
  case (ulong *)0x9e:
    goto code_r0x00010127b264;
  case (ulong *)0x79:
    goto LAB_10127b3e4;
  case (ulong *)0x7a:
    goto code_r0x00010127b2c4;
  case (ulong *)0x7b:
    goto code_r0x00010127b2f4;
  case (ulong *)0x7c:
    goto code_r0x00010127b294;
  case (ulong *)0x7d:
    _bStack0000000000000040 = (ulong *)CONCAT71(uStack0000000000000041,2);
    puVar55 = (ulong *)CONCAT71(uStack0000000000000119,uStack0000000000000118);
    lVar59 = ((ulong)((long)in_stack_00000128 - (long)puVar55) >> 5) + 1;
    unaff_x20 = in_stack_00000128;
    while (lVar59 = lVar59 + -1, lVar59 != 0) {
      puVar55 = puVar55 + 4;
      puVar65 = (undefined *)0x10127acf4;
      FUN_100e077ec();
      uVar53 = extraout_x15;
      unaff_x20 = puVar55;
    }
    unaff_x22 = (ulong *)0x0;
    if (CONCAT71(uStack0000000000000121,uStack0000000000000120) != 0) {
      puVar65 = (undefined *)0x10127ad0c;
      _free(CONCAT62(uStack0000000000000112,CONCAT11(cStack0000000000000111,bStack0000000000000110))
           );
      uVar53 = extraout_x15_00;
    }
    goto LAB_10127ad0c;
  case (ulong *)0x7e:
    goto code_r0x00010127b444;
  case (ulong *)0x7f:
    goto code_r0x00010127b324;
  case (ulong *)0x80:
    goto code_r0x00010127b49c;
  case (ulong *)0x85:
    goto code_r0x00010127aef0;
  case (ulong *)0x86:
    goto code_r0x00010127ae28;
  case (ulong *)0x87:
    goto code_r0x00010127afa8;
  case (ulong *)0x88:
    goto code_r0x00010127b1a4;
  case (ulong *)0x8a:
    goto code_r0x00010127b210;
  case (ulong *)0x8b:
    goto code_r0x00010127ae74;
  case (ulong *)0x8c:
    goto code_r0x00010127b1ec;
  case (ulong *)0x8d:
  case (ulong *)0xa3:
    goto code_r0x00010127ae04;
  case (ulong *)0x8e:
    goto code_r0x00010127ae4c;
  case (ulong *)0x8f:
    goto code_r0x00010127b17c;
  case (ulong *)0x90:
  case (ulong *)0xa6:
    goto code_r0x00010127addc;
  case (ulong *)0x91:
    goto code_r0x00010127aec8;
  case (ulong *)0x92:
  case (ulong *)0xa8:
    if ((int)unaff_x22 == 2) {
      bStack00000000000000f8 = 4;
      uStack00000000000000f9 = 0;
      uStack00000000000000fd = 0;
      uStack00000000000000ff = 0;
      bStack0000000000000110 = (byte)&stack0x000000f0;
      cStack0000000000000111 = (char)((ulong)&stack0x000000f0 >> 8);
      uStack0000000000000112 = (undefined6)((ulong)&stack0x000000f0 >> 0x10);
      uStack0000000000000118 = 0xa0;
      uStack0000000000000119 = 0x100c7b3;
      pcVar32 = s_missing_field_____108ac28f7;
      pbVar37 = &stack0x00000110;
      _uStack00000000000000f0 = unaff_x20;
      goto code_r0x00010127babc;
    }
code_r0x00010127adc4:
    in_stack_00000168 = in_stack_000000c8;
    bStack0000000000000160 = (byte)_cStack00000000000000c0;
    uStack0000000000000161 = (undefined7)((ulong)_cStack00000000000000c0 >> 8);
    bStack0000000000000158 = (byte)in_stack_000000b8;
    uStack0000000000000159 = (undefined7)((ulong)in_stack_000000b8 >> 8);
    _bStack0000000000000040 = (ulong *)CONCAT71(uStack0000000000000041,uVar38);
code_r0x00010127addc:
    _cStack0000000000000060 = in_stack_00000168;
    uStack0000000000000059 = uStack0000000000000161;
    cStack0000000000000051 = (char)uStack0000000000000159;
    uStack0000000000000052 = (undefined6)((uint7)uStack0000000000000159 >> 8);
    bStack0000000000000058 = bStack0000000000000160;
    in_stack_00000048 = CONCAT31((int3)uStack0000000000000151,0x15);
    fStack000000000000004c = (float)((uint7)uStack0000000000000151 >> 0x18);
    bStack0000000000000050 = bStack0000000000000158;
    uVar56 = CONCAT71(uStack0000000000000161,bStack0000000000000160);
    uVar50 = CONCAT62(uStack0000000000000052,CONCAT11(cStack0000000000000051,bStack0000000000000158)
                     );
    uStack00000000000000b0 = SUB87(in_stack_00000168,0);
    uStack00000000000000b7 = (undefined1)((ulong)in_stack_00000168 >> 0x38);
    uStack0000000000000098 = 0x15;
    uStack0000000000000099 = (undefined7)(CONCAT44(fStack000000000000004c,in_stack_00000048) >> 8);
    bStack0000000000000090 = (byte)_bStack0000000000000040;
    bStack0000000000000091 = (byte)((ulong)_bStack0000000000000040 >> 8);
    uStack0000000000000092 = (undefined6)((ulong)_bStack0000000000000040 >> 0x10);
    uStack00000000000000a8 = (undefined7)uVar56;
    uStack00000000000000af = (undefined1)((uint7)uStack0000000000000161 >> 0x30);
    bStack00000000000000a0 = bStack0000000000000158;
    uStack00000000000000a1 = (undefined7)(uVar50 >> 8);
code_r0x00010127ae04:
    unaff_x19 = *(ulong **)(unaff_x29 + -0x88);
    unaff_x20 = *(ulong **)(unaff_x29 + -0x78);
    puVar65 = &UNK_10127ae14;
    FUN_100d34830(unaff_x21 + 4);
    uVar53 = extraout_x15_01;
    puVar58 = _uStack0000000000000038;
code_r0x00010127ae18:
    if (unaff_x20 == unaff_x19) {
      unaff_x20 = (ulong *)0x0;
      puVar42 = (ulong *)(ulong)(byte)unaff_x29[-0xb0];
code_r0x00010127ae28:
      if ((int)puVar42 != 0x16) {
code_r0x00010127ae30:
        puVar65 = &UNK_10127ae38;
        FUN_100e077ec(unaff_x29 + -0xb0);
        uVar53 = extraout_x15_02;
      }
    }
    else {
      lVar59 = *(long *)(unaff_x29 + -0x70);
      bStack0000000000000110 = (byte)lVar59;
      cStack0000000000000111 = (char)((ulong)lVar59 >> 8);
      uStack0000000000000112 = (undefined6)((ulong)lVar59 >> 0x10);
      param_7 = &UNK_10b23a190;
      puVar65 = &UNK_10127bae8;
      unaff_x20 = (ulong *)FUN_1087e422c(lVar59 + ((ulong)((long)unaff_x20 - (long)unaff_x19) >> 6),
                                         &stack0x00000110);
      uVar53 = extraout_x15_07;
      if (unaff_x29[-0xb0] != '\x16') goto code_r0x00010127ae30;
    }
    if (unaff_x20 != (ulong *)0x0) {
      in_stack_00000048 = (uint)unaff_x20;
      fStack000000000000004c = (float)((ulong)unaff_x20 >> 0x20);
code_r0x00010127ae40:
      _bStack0000000000000040 = (ulong *)CONCAT71(uStack0000000000000041,2);
code_r0x00010127ae48:
      puVar42 = (ulong *)&stack0x00000090;
      goto code_r0x00010127ae4c;
    }
    goto LAB_10127ad0c;
  case (ulong *)0x93:
    goto code_r0x00010127af68;
  case (ulong *)0x94:
    goto code_r0x00010127b1cc;
  case (ulong *)0x95:
    goto code_r0x00010127b234;
  case (ulong *)0x96:
    goto code_r0x00010127af88;
  case (ulong *)0x97:
    goto code_r0x00010127afd8;
  case (ulong *)0x9a:
    goto code_r0x00010127ae94;
  case (ulong *)0x9b:
    goto code_r0x00010127aee4;
  case (ulong *)0x9d:
    goto code_r0x00010127af9c;
  case (ulong *)0x9f:
    goto code_r0x00010127af0c;
  case (ulong *)0xa0:
    goto code_r0x00010127b2d4;
  case (ulong *)0xa1:
    goto LAB_10127ae68;
  case (ulong *)0xa2:
    goto code_r0x00010127b2ac;
  case (ulong *)0xa4:
    goto code_r0x00010127ae40;
  case (ulong *)0xa5:
    goto code_r0x00010127b23c;
  case (ulong *)0xa9:
    goto code_r0x00010127af5c;
  case (ulong *)0xaa:
    goto code_r0x00010127b28c;
  case (ulong *)0xab:
    goto code_r0x00010127b2fc;
  case (ulong *)0xac:
    goto code_r0x00010127af7c;
  case (ulong *)0xad:
    goto code_r0x00010127afc4;
  case (ulong *)0xae:
    uStack0000000000000008 = 6;
    uStack0000000000000009 = 0;
    uStack000000000000000b = 0;
    puVar58 = (ulong *)FUN_108831e8c(unaff_x20,&stack0x00000008);
    unaff_x19[1] = (ulong)puVar58;
    *(char *)unaff_x19 = '\x01';
    *(char *)(unaff_x20 + 9) = (char)unaff_x20[9] + '\x01';
    return puVar58;
  case (ulong *)0xaf:
    goto code_r0x000101290ab0;
  case (ulong *)0xb0:
    _free(in_stack_00000020);
    FUN_100e7b998(&stack0x00000080);
    __Unwind_Resume(unaff_x20);
    auVar71 = func_0x000108a07bc4();
    pbVar37 = auVar71._8_8_;
    puVar58 = auVar71._0_8_;
    bVar74 = *pbVar37;
    if (bVar74 < 0xd) {
      if (bVar74 == 1) {
        bVar74 = pbVar37[1];
        puStack_30 = (ulong *)(ulong)bVar74;
        if (bVar74 != 0) {
          if ((bVar74 != 1) && (bVar74 != 2)) {
code_r0x000101298b70:
            puStack_38 = (ulong *)CONCAT71(puStack_38._1_7_,1);
            puVar55 = (ulong *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                         (&puStack_38,&UNK_10b229e80,&UNK_10b20a590);
            puVar58[1] = (ulong)puVar55;
            *(undefined1 *)puVar58 = 1;
            return puVar55;
          }
          goto code_r0x000101298bfc;
        }
      }
      else if (bVar74 == 4) {
        puStack_30 = *(ulong **)(pbVar37 + 8);
        if (puStack_30 != (ulong *)0x0) {
          if ((puStack_30 != (ulong *)0x1) && (puStack_30 != (ulong *)0x2))
          goto code_r0x000101298b70;
          goto code_r0x000101298bfc;
        }
      }
      else {
        if (bVar74 != 0xc) {
code_r0x000101298c14:
          puVar55 = (ulong *)FUN_108855c40(pbVar37,&puStack_38,&UNK_10b2152e8);
          goto code_r0x000101298af4;
        }
        plVar46 = *(long **)(pbVar37 + 0x10);
        lVar59 = *(long *)(pbVar37 + 0x18);
        if (lVar59 == 8) goto code_r0x000101298bb8;
code_r0x000101298ab0:
        if ((lVar59 != 7) ||
           ((int)*plVar46 != 0x616e616d || *(int *)((long)plVar46 + 3) != 0x64656761)) {
code_r0x000101298adc:
          puVar55 = (ulong *)FUN_1087e4494(plVar46,lVar59,&UNK_10b22e458,3);
code_r0x000101298af4:
          puVar58[1] = (ulong)puVar55;
          *(undefined1 *)puVar58 = 1;
          return puVar55;
        }
      }
      *(undefined1 *)((long)puVar58 + 1) = 0;
    }
    else {
      if (bVar74 != 0xd) {
        if (bVar74 == 0xe) {
          pcVar32 = *(char **)(pbVar37 + 0x10);
          lVar59 = *(long *)(pbVar37 + 0x18);
        }
        else {
          if (bVar74 != 0xf) goto code_r0x000101298c14;
          pcVar32 = *(char **)(pbVar37 + 8);
          lVar59 = *(long *)(pbVar37 + 0x10);
        }
        if (lVar59 == 7) {
          if (((*pcVar32 == 'm') && (pcVar32[1] == 'a')) &&
             (((pcVar32[2] == 'n' &&
               (((pcVar32[3] == 'a' && (pcVar32[4] == 'g')) && (pcVar32[5] == 'e')))) &&
              (pcVar32[6] == 'd')))) {
            *(undefined2 *)puVar58 = 0;
            return puVar58;
          }
        }
        else if (lVar59 == 8) {
          if (*pcVar32 == 'e') {
            if (((((pcVar32[1] == 'x') && (pcVar32[2] == 't')) && (pcVar32[3] == 'e')) &&
                ((pcVar32[4] == 'r' && (pcVar32[5] == 'n')))) &&
               ((pcVar32[6] == 'a' && (pcVar32[7] == 'l')))) {
              uVar39 = 0x200;
              goto code_r0x000100b25640;
            }
          }
          else if (((*pcVar32 == 'd') && (pcVar32[1] == 'i')) &&
                  ((pcVar32[2] == 's' &&
                   ((((pcVar32[3] == 'a' && (pcVar32[4] == 'b')) && (pcVar32[5] == 'l')) &&
                    ((pcVar32[6] == 'e' && (pcVar32[7] == 'd')))))))) {
            uVar39 = 0x100;
code_r0x000100b25640:
            *(undefined2 *)puVar58 = uVar39;
            return puVar58;
          }
        }
        puStack_30 = unaff_x22;
        __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                  (&stack0xffffffffffffffb8,pcVar32,lVar59);
        puVar55 = (ulong *)FUN_1087e4494(in_stack_ffffffffffffffc0,puStack_38,&UNK_10b22e458,3);
        puVar58[1] = (ulong)puVar55;
        *(undefined1 *)puVar58 = 1;
        if ((in_stack_ffffffffffffffb8 & 0x7fffffffffffffff) != 0) {
          puVar55 = (ulong *)_free(in_stack_ffffffffffffffc0);
        }
        return puVar55;
      }
      plVar46 = *(long **)(pbVar37 + 8);
      lVar59 = *(long *)(pbVar37 + 0x10);
      if (lVar59 != 8) goto code_r0x000101298ab0;
code_r0x000101298bb8:
      if (*plVar46 == 0x64656c6261736964) {
        puStack_30 = (ulong *)0x1;
      }
      else {
        if (*plVar46 != 0x6c616e7265747865) goto code_r0x000101298adc;
        puStack_30 = (ulong *)0x2;
      }
code_r0x000101298bfc:
      *(char *)((long)puVar58 + 1) = (char)puStack_30;
    }
    *(undefined1 *)puVar58 = 0;
    return puVar58;
  case (ulong *)0xb1:
    goto code_r0x000101292bb4;
  case (ulong *)0xb2:
    uVar33 = func_0x0001087c9084(pcVar32,unaff_x20);
    FUN_100e2c7f4(unaff_x22);
    __Unwind_Resume(uVar33);
    uVar33 = func_0x000108a07bc4();
    puStack_30 = unaff_x22;
    FUN_1004e07f8(&stack0xffffffffffffffb8,uVar33);
    puVar58 = in_stack_ffffffffffffffc0;
    if (in_stack_ffffffffffffffb8 != 0x8000000000000000) {
      if ((puStack_38 == (ulong *)0xc) &&
         (*in_stack_ffffffffffffffc0 == 0x2f7374706d6f7270 &&
          (int)in_stack_ffffffffffffffc0[1] == 0x7473696c)) {
        puVar58 = (ulong *)0x0;
        puStack_38 = (ulong *)0xc;
      }
      else {
        puVar35 = (undefined8 *)_malloc(0x28);
        if (puVar35 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x28);
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10128ab7c);
          (*pcVar12)();
        }
        puVar35[1] = 0x7274732074736e6f;
        *puVar35 = 0x6320746365707865;
        puVar35[3] = 0x706d6f7270222065;
        puVar35[2] = 0x756c617620676e69;
        puVar35[4] = 0x227473696c2f7374;
        puStack_38 = (ulong *)0x28;
        puVar58 = (ulong *)func_0x000108856114(&stack0xffffffffffffffb8);
      }
      if (in_stack_ffffffffffffffb8 != 0) {
        _free(in_stack_ffffffffffffffc0);
      }
    }
    return puVar58;
  case (ulong *)0xb3:
    in_stack_00000078 = (ulong *)puVar48[3];
    in_stack_00000070 = (ulong *)puVar48[2];
    in_stack_00000088 = (ulong *)puVar48[5];
    _cStack0000000000000080 = (ulong *)puVar48[4];
    uStack0000000000000098 = SUB81(in_stack_000001d8,0);
    uStack0000000000000099 = (undefined7)((ulong)in_stack_000001d8 >> 8);
    bStack0000000000000090 = (byte)in_stack_000001d0;
    bStack0000000000000091 = (byte)((ulong)in_stack_000001d0 >> 8);
    uStack0000000000000092 = (undefined6)((ulong)in_stack_000001d0 >> 0x10);
    uStack00000000000000a8 = SUB87(in_stack_000001e8,0);
    uStack00000000000000af = (undefined1)((ulong)in_stack_000001e8 >> 0x38);
    bStack00000000000000a0 = (byte)in_stack_000001e0;
    uStack00000000000000a1 = (undefined7)((ulong)in_stack_000001e0 >> 8);
    uStack00000000000000b0 = (undefined7)puVar48[10];
    uStack00000000000000b7 = (undefined1)(puVar48[10] >> 0x38);
    _cStack0000000000000060 = puVar58;
    in_stack_000001b0 = in_stack_00000070;
    in_stack_000001b8 = in_stack_00000078;
    in_stack_000001c0 = _cStack0000000000000080;
    in_stack_000001c8 = in_stack_00000088;
    FUN_100cc2fb4(&stack0x00000180);
    pcVar32 = (char *)FUN_100e1fd94(&stack0x000000c0);
    if (_cStack0000000000000060 == (ulong *)0x2) {
      unaff_x19[2] = (ulong)in_stack_00000070;
      unaff_x19[1] = (ulong)unaff_x24;
      unaff_x19[4] = (ulong)_cStack0000000000000080;
      unaff_x19[3] = (ulong)in_stack_00000078;
      unaff_x19[6] = CONCAT62(uStack0000000000000092,
                              CONCAT11(bStack0000000000000091,bStack0000000000000090));
      unaff_x19[5] = (ulong)in_stack_00000088;
      *unaff_x19 = 2;
      return (ulong *)pcVar32;
    }
    in_stack_000000c8 = _cStack0000000000000080;
    _cStack00000000000000c0 = in_stack_00000078;
    in_stack_000000d8 =
         (ulong *)CONCAT62(uStack0000000000000092,
                           CONCAT11(bStack0000000000000091,bStack0000000000000090));
    in_stack_000000d0 = in_stack_00000088;
    in_stack_000000e8 = (ulong *)CONCAT71(uStack00000000000000a1,bStack00000000000000a0);
    in_stack_000000e0 = (ulong *)CONCAT71(uStack0000000000000099,uStack0000000000000098);
    bStack00000000000000f8 = (byte)uStack00000000000000b0;
    uStack00000000000000f9 = (undefined4)((uint7)uStack00000000000000b0 >> 8);
    uStack00000000000000fd = (undefined2)((uint7)uStack00000000000000b0 >> 0x28);
    uStack00000000000000ff = uStack00000000000000b7;
    _uStack00000000000000f0 = (ulong *)CONCAT17(uStack00000000000000af,uStack00000000000000a8);
    if (((ulong)_cStack0000000000000060 & 1) == 0) {
      puVar58 = (ulong *)&stack0x000000c0;
      in_stack_00000070 = (ulong *)CONCAT44(fStack0000000000000014,uStack0000000000000010);
      unaff_x24 = in_stack_00000018;
    }
    else {
      puVar58 = (ulong *)&stack0x00000078;
    }
    uVar53 = *puVar58;
    uVar56 = puVar58[3];
    uVar50 = puVar58[2];
    uVar68 = CONCAT71(uStack00000000000000a1,bStack00000000000000a0);
    uVar49 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
    uVar70 = CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
    uVar69 = CONCAT17(uStack00000000000000af,uStack00000000000000a8);
    unaff_x19[4] = puVar58[1];
    unaff_x19[3] = uVar53;
    puVar48 = unaff_x24;
    puVar51 = in_stack_00000070;
code_r0x0001012849cc:
    unaff_x19[6] = uVar56;
    unaff_x19[5] = uVar50;
    unaff_x19[8] = uVar68;
    unaff_x19[7] = uVar49;
    unaff_x19[10] = uVar70;
    unaff_x19[9] = uVar69;
    *unaff_x19 = 1;
    unaff_x19[1] = (ulong)puVar48;
    unaff_x19[2] = (ulong)puVar51;
    return (ulong *)pcVar32;
  case (ulong *)0xb4:
    if (uVar53 == 3) {
      uVar53 = 2;
      in_stack_00000470 = in_stack_00000380;
      in_stack_00000478 = in_stack_00000388;
      in_stack_00000480 = in_stack_00000390;
    }
    uStack0000000000000118 = (undefined1)in_stack_00000370;
    uStack0000000000000119 = (undefined7)(CONCAT17((char)in_stack_00000377,in_stack_00000370) >> 8);
    unaff_x19[0x19] = in_stack_00000360;
    unaff_x19[0x18] = 2;
    unaff_x19[0x1b] = CONCAT71(uStack0000000000000119,uStack0000000000000118);
    unaff_x19[0x1a] = in_stack_00000368;
    unaff_x19[0x1d] = in_stack_00000470;
    unaff_x19[0x1c] = uVar53;
    unaff_x19[0x1f] = in_stack_00000480;
    unaff_x19[0x1e] = in_stack_00000478;
    unaff_x19[0x11] = in_stack_00000320;
    unaff_x19[0x10] = 2;
    unaff_x19[0x13] = in_stack_00000330;
    unaff_x19[0x12] = in_stack_00000328;
    unaff_x19[0x15] = in_stack_00000340;
    unaff_x19[0x14] = 2;
    unaff_x19[0x17] = in_stack_00000350;
    unaff_x19[0x16] = in_stack_00000348;
    unaff_x19[9] = (ulong)in_stack_000002e0;
    unaff_x19[8] = 2;
    unaff_x19[0xb] = in_stack_000002f0;
    unaff_x19[10] = in_stack_000002e8;
    unaff_x19[0xd] = (ulong)in_stack_00000300;
    unaff_x19[0xc] = 2;
    unaff_x19[0xf] = in_stack_00000310;
    unaff_x19[0xe] = in_stack_00000308;
    unaff_x19[1] = in_stack_000002a0;
    *unaff_x19 = 2;
    unaff_x19[3] = (ulong)in_stack_000002b0;
    unaff_x19[2] = (ulong)in_stack_000002a8;
    unaff_x19[5] = in_stack_000002c0;
    unaff_x19[4] = 2;
    unaff_x19[7] = in_stack_000002d0;
    unaff_x19[6] = in_stack_000002c8;
    return (ulong *)pcVar32;
  case (ulong *)0xb5:
    bVar74 = *pbVar37;
    if (bVar74 < 0xd) {
      if (bVar74 == 1) {
        bVar74 = *(byte *)((long)unaff_x20 + 1);
        if (bVar74 == 0) {
code_r0x00010128ec10:
          cVar75 = '\0';
          *(char *)((long)pcVar32 + 1) = '\0';
          goto code_r0x00010128ec14;
        }
        if (bVar74 != 1) {
          uStack0000000000000010 = (uint)bVar74;
          fStack0000000000000014 = 0.0;
          uStack0000000000000008 = 1;
          uVar50 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                             (&stack0x00000008,&UNK_10b2242c0,&UNK_10b20a590);
          goto code_r0x00010128eb68;
        }
      }
      else {
        if (bVar74 != 4) {
          if (bVar74 != 0xc) {
code_r0x00010128ec30:
            puVar58 = (ulong *)FUN_108855b04(unaff_x20,&stack0x00000008,&UNK_10b20edc0);
            *(ulong **)((long)pcVar32 + 8) = puVar58;
            *pcVar32 = '\x01';
            return puVar58;
          }
          uVar50 = unaff_x20[1];
          unaff_x19 = (ulong *)unaff_x20[2];
          uVar56 = unaff_x20[3];
          puVar58 = (ulong *)pcVar32;
          if (uVar56 == 4) {
            if ((int)*unaff_x19 == 0x6d726f66) {
              *(char *)((long)pcVar32 + 1) = '\0';
              *pcVar32 = '\0';
            }
            else {
code_r0x00010128ea5c:
              puVar58 = (ulong *)FUN_1087e4494(unaff_x19,uVar56,&UNK_10b22e518,2);
              *(ulong **)((long)pcVar32 + 8) = puVar58;
              *pcVar32 = '\x01';
            }
          }
          else {
            if ((uVar56 != 3) ||
               ((short)*unaff_x19 != 0x7275 || *(char *)((long)unaff_x19 + 2) != 'l'))
            goto code_r0x00010128ea5c;
            *(char *)((long)pcVar32 + 1) = '\x01';
            *pcVar32 = '\0';
          }
joined_r0x00010128eaf8:
          if (uVar50 == 0) {
            return puVar58;
          }
          goto code_r0x000108aa97c4;
        }
        uVar50 = unaff_x20[1];
        if (uVar50 == 0) goto code_r0x00010128ec10;
        if (uVar50 != 1) {
          uStack0000000000000010 = (uint)uVar50;
          fStack0000000000000014 = (float)(uVar50 >> 0x20);
          uStack0000000000000008 = 1;
          uVar50 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                             (&stack0x00000008,&UNK_10b2242c0,&UNK_10b20a590);
          goto code_r0x00010128eb68;
        }
      }
code_r0x00010128ebd4:
      *(char *)((long)pcVar32 + 1) = '\x01';
      *pcVar32 = '\0';
    }
    else if (bVar74 == 0xd) {
      piVar1 = (int *)unaff_x20[1];
      uVar50 = unaff_x20[2];
      if (uVar50 == 4) {
        if (*piVar1 == 0x6d726f66) goto code_r0x00010128ec10;
      }
      else if ((uVar50 == 3) && ((short)*piVar1 == 0x7275 && *(char *)((long)piVar1 + 2) == 'l'))
      goto code_r0x00010128ebd4;
      uVar50 = FUN_1087e4494(piVar1,uVar50,&UNK_10b22e518,2);
code_r0x00010128eb68:
      *(ulong *)((long)pcVar32 + 8) = uVar50;
      cVar75 = '\x01';
code_r0x00010128ec14:
      *pcVar32 = cVar75;
    }
    else {
      if (bVar74 == 0xe) {
        uVar50 = unaff_x20[1];
        unaff_x19 = (ulong *)unaff_x20[2];
        puVar58 = (ulong *)func_0x000100b2ac8c(pcVar32,unaff_x19,unaff_x20[3]);
        goto joined_r0x00010128eaf8;
      }
      if (bVar74 != 0xf) goto code_r0x00010128ec30;
      func_0x000100b2ac8c(pcVar32,unaff_x20[1],unaff_x20[2]);
    }
    uStack0000000000000010 = (uint)unaff_x24;
    fStack0000000000000014 = (float)((ulong)unaff_x24 >> 0x20);
    bVar74 = (byte)*unaff_x20;
    uVar40 = (uint)bVar74;
    in_stack_00000018 = puVar55;
    if (bVar74 < 0xd) {
      if (bVar74 < 0xc) {
        return unaff_x20;
      }
      if (uVar40 == 0xc) {
LAB_100e07840:
        if (unaff_x20[1] == 0) {
          return unaff_x20;
        }
        unaff_x19 = (ulong *)unaff_x20[2];
        goto code_r0x000108aa97c4;
      }
LAB_100e078c0:
      unaff_x19 = (ulong *)unaff_x20[2];
      puVar58 = unaff_x20;
      puVar55 = unaff_x19;
      for (uVar50 = unaff_x20[3]; uVar50 != 0; uVar50 = uVar50 - 1) {
        FUN_100e077ec(puVar55);
        puVar58 = (ulong *)FUN_100e077ec(puVar55 + 4);
        puVar55 = puVar55 + 8;
      }
    }
    else {
      if (bVar74 < 0x11) {
        if (uVar40 - 0xf < 2 || uVar40 == 0xd) {
          return unaff_x20;
        }
        if (uVar40 == 0xe) goto LAB_100e07840;
        goto LAB_100e078c0;
      }
      if (uVar40 < 0x13) {
        if (uVar40 != 0x11) {
          if (uVar40 == 0x12) {
            return unaff_x20;
          }
          goto LAB_100e078c0;
        }
        unaff_x19 = (ulong *)unaff_x20[1];
        FUN_100e077ec(unaff_x19);
        goto code_r0x000108aa97c4;
      }
      if (uVar40 == 0x13) {
        unaff_x19 = (ulong *)unaff_x20[1];
        FUN_100e077ec(unaff_x19);
        goto code_r0x000108aa97c4;
      }
      if (uVar40 != 0x14) goto LAB_100e078c0;
      unaff_x19 = (ulong *)unaff_x20[2];
      lVar59 = unaff_x20[3] + 1;
      puVar58 = unaff_x19;
      while (lVar59 = lVar59 + -1, lVar59 != 0) {
        FUN_100e077ec(puVar58);
        puVar58 = puVar58 + 4;
      }
    }
    if (unaff_x20[1] == 0) {
      return puVar58;
    }
    goto code_r0x000108aa97c4;
  case (ulong *)0xb6:
    goto code_r0x0001012969f0;
  case (ulong *)0xb7:
    goto code_r0x00010127afd4;
  case (ulong *)0xb8:
    goto code_r0x00010127cedc;
  case (ulong *)0xb9:
  case (ulong *)0xd5:
    goto LAB_10127cee8;
  case (ulong *)0xba:
    goto code_r0x00010127cddc;
  case (ulong *)0xbb:
    goto code_r0x00010127ce3c;
  case (ulong *)0xbc:
    goto code_r0x00010127cd0c;
  case (ulong *)0xbd:
    goto code_r0x00010127cf68;
  case (ulong *)0xbe:
    goto code_r0x00010127cfc8;
  case (ulong *)0xbf:
    goto code_r0x00010127ce5c;
  case (ulong *)0xc0:
    goto code_r0x00010127d064;
  case (ulong *)0xc1:
    goto code_r0x00010127cd8c;
  case (ulong *)0xc2:
    goto code_r0x00010127d038;
  case (ulong *)0xc3:
    goto code_r0x00010127ccc0;
  case (ulong *)0xc4:
    goto code_r0x00010127cd50;
  case (ulong *)0xc5:
    goto code_r0x00010127cfa0;
  case (ulong *)0xc6:
    goto code_r0x00010127cc70;
  case (ulong *)0xc7:
  case (ulong *)0xe4:
    goto code_r0x00010127ce14;
  case (ulong *)0xc8:
    goto code_r0x00010127cc2c;
  case (ulong *)0xca:
    goto code_r0x00010127d0c4;
  case (ulong *)0xcb:
    goto code_r0x00010127c140;
  case (ulong *)0xcc:
    goto code_r0x00010127c2e8;
  case (ulong *)0xcd:
    __Unwind_Resume();
    func_0x000108a07bc4();
    auVar72 = func_0x000108a07bc4();
    puVar58 = auVar72._8_8_;
    puVar45 = auVar72._0_8_;
    ppuVar13 = &puStack_110;
    uVar56 = *puVar58;
    uVar50 = uVar56 ^ 0x8000000000000000;
    if (-1 < (long)uVar56) {
      uVar50 = 5;
    }
    puStack_38 = puVar55;
    if (uVar50 == 3) {
      uStack_98 = puVar58[2];
      uStack_a0 = puVar58[1];
      uStack_90 = puVar58[3];
      uStack_88 = 0x8000000000000005;
      puStack_30 = unaff_x22;
      puVar58 = (ulong *)func_0x000100bb0ab4(puVar45,&uStack_a0);
      return puVar58;
    }
    if (uVar50 == 5) {
      puVar55 = (ulong *)puVar58[1];
      uVar50 = puVar58[2];
      uVar49 = puVar58[4];
      puStack_30 = unaff_x22;
      if ((uVar49 != 0) && (uVar49 * 9 != -0x11)) {
        _free(puVar58[3] + uVar49 * -8 + -8);
      }
      puStack_f8 = puVar55 + uVar50 * 0xd;
      puStack_108 = puVar55;
      puStack_110 = puVar55;
      uStack_100 = uVar56;
      if (uVar50 != 0) {
        puStack_108 = puVar55 + 0xd;
        uVar56 = *puVar55;
        if (uVar56 != 0x8000000000000000) {
          uVar49 = puVar55[1];
          uStack_90 = puVar55[2];
          uStack_d8 = puVar55[6];
          uStack_e0 = puVar55[5];
          uStack_c8 = puVar55[8];
          uStack_d0 = puVar55[7];
          uStack_b8 = puVar55[10];
          uStack_c0 = puVar55[9];
          uStack_b0 = puVar55[0xb];
          uStack_e8 = puVar55[4];
          uStack_f0 = puVar55[3];
          if (uVar50 != 1) {
            puStack_108 = puVar55 + 0x1a;
            uStack_a0 = puVar55[0xd];
            if (uStack_a0 != 0x8000000000000000) {
              uStack_90 = puVar55[0xf];
              uStack_98 = puVar55[0xe];
              uStack_80 = puVar55[0x11];
              uStack_88 = puVar55[0x10];
              uStack_70 = puVar55[0x13];
              uStack_78 = puVar55[0x12];
              uStack_60 = puVar55[0x15];
              uStack_68 = puVar55[0x14];
              puStack_50 = (ulong *)puVar55[0x17];
              uStack_58 = puVar55[0x16];
              if (uStack_a0 != 0) {
                _free(uStack_98);
              }
              FUN_100de6690(&uStack_88);
              uStack_a0 = CONCAT71(uStack_a0._1_7_,0xb);
              uVar33 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                 (&uStack_a0,&UNK_10b20a580,&UNK_10b20a590);
              *(undefined8 *)(puVar45 + 8) = uVar33;
              *puVar45 = 1;
              FUN_100de6690(&uStack_f0);
              if (uVar56 != 0) {
                _free(uVar49);
              }
              goto LAB_10127bfa4;
            }
          }
          uStack_70 = puVar55[6];
          uStack_78 = puVar55[5];
          uStack_60 = puVar55[8];
          uStack_68 = puVar55[7];
          puStack_50 = (ulong *)puVar55[10];
          uStack_58 = puVar55[9];
          uStack_80 = puVar55[4];
          uStack_88 = puVar55[3];
          uStack_a0 = uVar56;
          uStack_98 = uVar49;
          func_0x000100bb0ab4(puVar45,&uStack_a0);
          goto LAB_10127bfa4;
        }
      }
      uStack_a0 = CONCAT71(uStack_a0._1_7_,0xb);
      uVar33 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                         (&uStack_a0,&UNK_10b20a580,&UNK_10b20a590);
      *(undefined8 *)(puVar45 + 8) = uVar33;
      *puVar45 = 1;
LAB_10127bfa4:
      puVar58 = (ulong *)FUN_100de8910(&puStack_110);
      return puVar58;
    }
    puVar42 = &uStack_a0;
    puStack_30 = unaff_x22;
code_r0x00010127bfc8:
    unaff_x20 = auVar72._8_8_;
    auVar71 = auVar72;
code_r0x00010127bfd0:
    unaff_x19 = auVar71._0_8_;
    __ZN10serde_json5value2de42__LT_impl_u20_serde_json__value__Value_GT_10unexpected17he5d1f58814edc489E
              (puVar42,auVar71._8_8_);
    pbVar37 = &UNK_10b20a5b0;
    puVar34 = (ulong *)((long)ppuVar13 + 0x70);
code_r0x00010127bfe8:
    pcVar32 = (char *)unaff_x20;
    uVar50 = func_0x000108a4a50c(puVar34,pbVar37);
    unaff_x19[1] = uVar50;
    *(char *)unaff_x19 = '\x01';
code_r0x00010127bffc:
    unaff_x29 = *(undefined1 **)((long)ppuVar13 + 0x100);
    puVar65 = *(undefined **)((long)ppuVar13 + 0x108);
    unaff_x20 = *(ulong **)((long)ppuVar13 + 0xf0);
    unaff_x19 = *(ulong **)((long)ppuVar13 + 0xf8);
code_r0x000100de6690:
    register0x00000008 = (BADSPACEBASE *)((long)ppuVar13 + 0x110);
    *(undefined8 *)((long)ppuVar13 + 0xd0) = *(undefined8 *)((long)ppuVar13 + 0xd0);
    *(undefined8 *)((long)ppuVar13 + 0xd8) = *(undefined8 *)((long)ppuVar13 + 0xd8);
    *(undefined8 *)((long)ppuVar13 + 0xe0) = *(undefined8 *)((long)ppuVar13 + 0xe0);
    *(undefined8 *)((long)ppuVar13 + 0xe8) = *(undefined8 *)((long)ppuVar13 + 0xe8);
    *(ulong **)((long)ppuVar13 + 0xf0) = unaff_x20;
    *(ulong **)((long)ppuVar13 + 0xf8) = unaff_x19;
    *(undefined1 **)((long)ppuVar13 + 0x100) = unaff_x29;
    *(undefined **)((long)ppuVar13 + 0x108) = puVar65;
    uVar50 = *(ulong *)pcVar32 ^ 0x8000000000000000;
    if (-1 < (long)*(ulong *)pcVar32) {
      uVar50 = 5;
    }
    if (uVar50 < 3) {
      return (ulong *)pcVar32;
    }
    if (uVar50 == 3) {
      if (*(ulong *)((long)pcVar32 + 8) == 0) {
        return (ulong *)pcVar32;
      }
      unaff_x19 = *(ulong **)((long)pcVar32 + 0x10);
      goto code_r0x000108aa97c4;
    }
    if (uVar50 == 4) {
      unaff_x19 = *(ulong **)((long)pcVar32 + 0x10);
      lVar59 = *(ulong *)((long)pcVar32 + 0x18) + 1;
      puVar58 = unaff_x19;
      while (lVar59 = lVar59 + -1, lVar59 != 0) {
        FUN_100de6690(puVar58);
        puVar58 = puVar58 + 9;
      }
      if (*(ulong *)((long)pcVar32 + 8) == 0) {
        return puVar58;
      }
      goto code_r0x000108aa97c4;
    }
    uVar50 = *(ulong *)((long)pcVar32 + 0x20);
    if ((uVar50 != 0) && (uVar50 * 9 != -0x11)) {
      _free(*(ulong *)((long)pcVar32 + 0x18) + uVar50 * -8 + -8);
    }
    unaff_x29 = *(undefined1 **)((long)ppuVar13 + 0x100);
    uVar33 = *(undefined8 *)((long)ppuVar13 + 0x108);
    uVar56 = *(ulong *)((long)ppuVar13 + 0xf0);
    puVar43 = *(ulong **)((long)ppuVar13 + 0xf8);
    unaff_x22 = *(ulong **)((long)ppuVar13 + 0xe0);
    uVar50 = *(ulong *)((long)ppuVar13 + 0xe8);
    unaff_x24 = *(ulong **)((long)ppuVar13 + 0xd0);
    puVar55 = *(ulong **)((long)ppuVar13 + 0xd8);
    goto SUB_100cd7284;
  case (ulong *)0xce:
    goto code_r0x00010127cf4c;
  case (ulong *)0xcf:
  case (ulong *)0xee:
    goto code_r0x00010127cf60;
  case (ulong *)0xd0:
    goto code_r0x00010127ce68;
  case (ulong *)0xd1:
    goto code_r0x00010127cec8;
  case (ulong *)0xd2:
    goto code_r0x00010127cd98;
  case (ulong *)0xd3:
    goto code_r0x00010127cff4;
  case (ulong *)0xd4:
    goto code_r0x00010127d054;
  case (ulong *)0xd6:
    goto code_r0x00010127d0dc;
  case (ulong *)0xd7:
    goto code_r0x00010127ce18;
  case (ulong *)0xd8:
    goto code_r0x00010127d0bc;
  case (ulong *)0xd9:
    goto code_r0x00010127cd48;
  case (ulong *)0xda:
    goto LAB_10127cdd0;
  case (ulong *)0xdb:
    goto code_r0x00010127d024;
  case (ulong *)0xdc:
    goto code_r0x00010127ccf0;
  case (ulong *)0xdd:
    goto code_r0x00010127ce98;
  case (ulong *)0xde:
    goto code_r0x00010127ccb8;
  case (ulong *)0xe0:
    goto code_r0x00010127d144;
  case (ulong *)0xe1:
    goto code_r0x00010127c1b0;
  case (ulong *)0xe2:
    goto code_r0x00010127c300;
  case (ulong *)0xe3:
    goto code_r0x00010127ba78;
  case (ulong *)0xe5:
    goto code_r0x00010127ce28;
  case (ulong *)0xe6:
    goto code_r0x00010127cd4c;
  case (ulong *)0xe7:
    goto code_r0x00010127cdac;
  case (ulong *)0xe8:
    goto code_r0x00010127cc7c;
  case (ulong *)0xe9:
    goto code_r0x00010127cec4;
  case (ulong *)0xea:
    goto code_r0x00010127cf38;
  case (ulong *)0xeb:
    goto code_r0x00010127cdcc;
  case (ulong *)0xec:
    goto code_r0x00010127cf8c;
  case (ulong *)0xed:
    goto code_r0x00010127ccfc;
  case (ulong *)0xef:
    goto code_r0x00010127cc28;
  case (ulong *)0xf0:
    goto LAB_10127cca8;
  case (ulong *)0xf1:
    goto code_r0x00010127cf00;
  case (ulong *)0xf2:
    goto code_r0x00010127cbc8;
  case (ulong *)0xf3:
    goto code_r0x00010127cd74;
  case (ulong *)0xf4:
    goto code_r0x00010127cb9c;
  case (ulong *)0xf6:
    goto code_r0x00010127d01c;
  case (ulong *)0xf8:
    goto code_r0x00010127c160;
  case (ulong *)0xf9:
    goto code_r0x00010127b520;
  case (ulong *)0xfa:
    goto code_r0x00010127ceb4;
  case (ulong *)0xfb:
    goto code_r0x00010127cecc;
  case (ulong *)0xfc:
    goto code_r0x00010127cdec;
  case (ulong *)0xfd:
    goto code_r0x00010127ce6c;
  case (ulong *)0xfe:
    goto FUN_10127cd34;
  case (ulong *)0xff:
    goto code_r0x00010127cf84;
  }
  unaff_x29[-0xb0] = uVar38;
code_r0x00010127b66c:
  pcVar32 = (char *)func_0x000108a4a50c(unaff_x29 + -0xb0,&stack0x00000070,&UNK_10b21bad0);
LAB_10127b678:
  *puVar58 = 0x8000000000000001;
  puVar58[1] = (ulong)pcVar32;
  return (ulong *)pcVar32;
code_r0x00010127cedc:
  puVar42 = in_stack_000002b0;
  in_stack_00000178 = (ulong *)FUN_1088561c0(pcVar32,pbVar37);
  puVar64 = unaff_x27;
  unaff_x27 = in_stack_000002b8;
LAB_10127d0d8:
  unaff_x24 = (ulong *)0x8000000000000000;
  in_stack_00000170 = (ulong *)0x8000000000000000;
  in_stack_000002b0 = puVar42;
  in_stack_000002b8 = unaff_x27;
code_r0x00010127d0dc:
  unaff_x19 = (ulong *)0x1;
  unaff_x26 = (ulong *)0x1;
  unaff_x20 = (ulong *)0x1;
  puVar55 = in_stack_00000088;
  puVar43 = unaff_x24;
  if (in_stack_00000088 == unaff_x24) goto LAB_10127d474;
joined_r0x00010127d0f4:
  unaff_x24 = puVar43;
  if (unaff_x25 != (ulong *)0x0) {
    puVar43 = (ulong *)((long)_cStack0000000000000060 + 0x20);
    do {
      if (puVar43[-4] != 0) {
        _free(puVar43[-3]);
      }
      if (puVar43[-1] != 0) {
        _free(*puVar43);
      }
      puVar43 = puVar43 + 6;
      unaff_x25 = (ulong *)((long)unaff_x25 + -1);
    } while (unaff_x25 != (ulong *)0x0);
  }
  if (puVar55 != (ulong *)0x0) {
    _free(_cStack0000000000000060);
  }
LAB_10127d474:
  unaff_x25 = (ulong *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
  if (((int)unaff_x19 != 0) && (puVar55 = *(ulong **)(unaff_x29 + -0xf0), puVar55 != unaff_x24)) {
    lVar59 = *(long *)(unaff_x29 + -0xe8);
    lVar63 = *(long *)(unaff_x29 + -0xe0);
    if (lVar63 != 0) {
      puVar35 = (undefined8 *)(lVar59 + 8);
      do {
        if (puVar35[-1] != 0) {
          _free(*puVar35);
        }
        puVar35 = puVar35 + 3;
        lVar63 = lVar63 + -1;
      } while (lVar63 != 0);
    }
    unaff_x24 = (ulong *)0x8000000000000000;
    if (puVar55 != (ulong *)0x0) {
      _free(lVar59);
    }
  }
  uVar40 = 0;
  if (in_stack_000002a8 != unaff_x24) {
    uVar40 = (uint)unaff_x26;
  }
  puVar55 = in_stack_000002b0;
  puVar43 = in_stack_000002b8;
  if ((uVar40 & 1) != 0) {
    for (; puVar43 != (ulong *)0x0; puVar43 = (ulong *)((long)puVar43 + -1)) {
      FUN_100e4cf18(puVar55);
      puVar55 = puVar55 + 0x18;
    }
    unaff_x24 = (ulong *)0x8000000000000000;
    if (in_stack_000002a8 != (ulong *)0x0) {
      _free(in_stack_000002b0);
    }
  }
  uVar40 = 0;
  if (((ulong)puVar58 & 0x7fffffffffffffff) != 0) {
    uVar40 = (uint)unaff_x20;
  }
  if ((uVar40 & 1) != 0) {
    _free(CONCAT44(fStack000000000000004c,in_stack_00000048));
  }
  puVar58 = _cStack0000000000000080;
  pcVar32 = (char *)FUN_100de8910(&stack0x00000218);
  unaff_x27 = puVar64;
  if (in_stack_000001d0 != (ulong *)0x8000000000000005) {
    pcVar32 = (char *)FUN_100de6690(&stack0x000001d0);
  }
joined_r0x00010127d54c:
  puVar43 = unaff_x22;
  if (-1 < (long)puVar58) goto LAB_10127d564;
LAB_10127d550:
  puVar43 = unaff_x22;
  if ((ulong *)((ulong)puVar58 & 0xfffffffffffffffe) != unaff_x27) {
    pcVar32 = (char *)FUN_100de6690(&stack0x00000128);
  }
LAB_10127d564:
  puVar55 = _cStack00000000000000c0;
  puVar58 = in_stack_000000b8;
  if (in_stack_00000170 == unaff_x24) {
    *(undefined8 *)CONCAT44(fStack0000000000000014,uStack0000000000000010) = 0x8000000000000000;
    ((undefined8 *)CONCAT44(fStack0000000000000014,uStack0000000000000010))[1] = in_stack_00000178;
    puVar55 = in_stack_000000b8;
    for (puVar52 = _cStack00000000000000c0; puVar52 != (ulong *)0x0;
        puVar52 = (ulong *)((long)puVar52 + -1)) {
      pcVar32 = (char *)FUN_100e52c20(puVar55);
      puVar55 = puVar55 + 0xc;
    }
    if (CONCAT17(uStack00000000000000b7,uStack00000000000000b0) != 0) {
      pcVar32 = (char *)_free(puVar58);
    }
LAB_10127d948:
    lVar59 = ((ulong)((long)unaff_x25 - (long)puVar43) >> 3) * -0x71c71c71c71c71c7 + 1;
    while (lVar59 = lVar59 + -1, lVar59 != 0) {
      pcVar32 = (char *)FUN_100de6690(puVar43);
      puVar43 = puVar43 + 9;
    }
    if (in_stack_00000020 != (ulong *)0x0) {
      pcVar32 = (char *)_free(in_stack_00000018);
    }
    return (ulong *)pcVar32;
  }
  bStack0000000000000100 = (byte)in_stack_000001a8;
  cStack0000000000000101 = (char)((ulong)in_stack_000001a8 >> 8);
  uStack0000000000000102 = (undefined2)((ulong)in_stack_000001a8 >> 0x10);
  uStack0000000000000104 = (undefined1)((ulong)in_stack_000001a8 >> 0x20);
  uStack0000000000000105 = (undefined2)((ulong)in_stack_000001a8 >> 0x28);
  uStack0000000000000107 = (undefined1)((ulong)in_stack_000001a8 >> 0x38);
  bStack00000000000000f8 = (byte)in_stack_000001a0;
  uStack00000000000000f9 = (undefined4)((ulong)in_stack_000001a0 >> 8);
  uStack00000000000000fd = (undefined2)((ulong)in_stack_000001a0 >> 0x28);
  uStack00000000000000ff = (undefined1)((ulong)in_stack_000001a0 >> 0x38);
  bStack0000000000000110 = (byte)in_stack_000001b8;
  cStack0000000000000111 = (char)((ulong)in_stack_000001b8 >> 8);
  uStack0000000000000112 = (undefined6)((ulong)in_stack_000001b8 >> 0x10);
  uStack0000000000000108 = SUB87(in_stack_000001b0,0);
  uStack000000000000010f = (undefined1)((ulong)in_stack_000001b0 >> 0x38);
  uStack0000000000000120 = SUB81(in_stack_000001c8,0);
  uStack0000000000000121 = (undefined7)((ulong)in_stack_000001c8 >> 8);
  uStack0000000000000118 = SUB81(in_stack_000001c0,0);
  uStack0000000000000119 = (undefined7)((ulong)in_stack_000001c0 >> 8);
  in_stack_000000e0 = in_stack_00000188;
  in_stack_000000d8 = in_stack_00000180;
  _uStack00000000000000f0 = in_stack_00000198;
  in_stack_000000e8 = in_stack_00000190;
  in_stack_000000c8 = in_stack_00000170;
  in_stack_000000d0 = in_stack_00000178;
  if (_cStack00000000000000c0 == (ulong *)CONCAT17(uStack00000000000000b7,uStack00000000000000b0)) {
    pcVar32 = (char *)func_0x0001088bad44(&stack0x000000b0);
  }
  puVar58 = in_stack_000000b8 + (long)puVar55 * 0xc;
  puVar58[5] = (ulong)_uStack00000000000000f0;
  puVar58[4] = (ulong)in_stack_000000e8;
  puVar58[7] = CONCAT17(uStack0000000000000107,
                        CONCAT25(uStack0000000000000105,
                                 CONCAT14(uStack0000000000000104,
                                          CONCAT22(uStack0000000000000102,
                                                   CONCAT11(cStack0000000000000101,
                                                            bStack0000000000000100)))));
  puVar58[6] = CONCAT17(uStack00000000000000ff,
                        CONCAT25(uStack00000000000000fd,
                                 CONCAT41(uStack00000000000000f9,bStack00000000000000f8)));
  puVar58[9] = CONCAT62(uStack0000000000000112,
                        CONCAT11(cStack0000000000000111,bStack0000000000000110));
  puVar58[8] = CONCAT17(uStack000000000000010f,uStack0000000000000108);
  puVar58[0xb] = CONCAT71(uStack0000000000000121,uStack0000000000000120);
  puVar58[10] = CONCAT71(uStack0000000000000119,uStack0000000000000118);
  puVar58[1] = (ulong)in_stack_000000d0;
  *puVar58 = (ulong)in_stack_000000c8;
  puVar58[3] = (ulong)in_stack_000000e0;
  puVar58[2] = (ulong)in_stack_000000d8;
  _cStack00000000000000c0 = (ulong *)((long)puVar55 + 1);
  unaff_x22 = unaff_x25;
  if (puVar43 == unaff_x25) {
LAB_10127d900:
    plVar46 = (long *)CONCAT44(fStack0000000000000014,uStack0000000000000010);
    plVar46[1] = (long)in_stack_000000b8;
    *plVar46 = CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
    plVar46[2] = (long)_cStack00000000000000c0;
    puVar43 = unaff_x22;
    if (*plVar46 != -0x8000000000000000) {
      in_stack_000001d8 = (ulong *)plVar46[1];
      in_stack_000001d0 = (ulong *)*plVar46;
      in_stack_000001e0 = (ulong *)plVar46[2];
      puVar43 = unaff_x25;
      if (unaff_x25 != unaff_x22) {
        lVar59 = FUN_1087e422c(CONCAT53(uStack000000000000000b,
                                        CONCAT21(uStack0000000000000009,uStack0000000000000008)),
                               &UNK_10b21cb80,&UNK_10b20a590);
        *plVar46 = -0x8000000000000000;
        plVar46[1] = lVar59;
        pcVar32 = (char *)FUN_100cb630c(&stack0x000001d0);
        puVar43 = unaff_x22;
      }
    }
    goto LAB_10127d948;
  }
  unaff_x22 = puVar43 + 9;
  uStack0000000000000098 = SUB81(unaff_x22,0);
  uStack0000000000000099 = (undefined7)((ulong)unaff_x22 >> 8);
  puVar58 = (ulong *)*puVar43;
  if (puVar58 == (ulong *)0x8000000000000005) goto LAB_10127d900;
  in_stack_00000128 = puVar58;
  uVar56 = puVar43[2];
  unaff_x19 = (ulong *)puVar43[1];
  in_stack_00000148 = puVar43[4];
  in_stack_00000138 = uVar56;
  in_stack_00000130 = unaff_x19;
  in_stack_00000140 = (ulong *)puVar43[3];
  puVar52 = (ulong *)puVar43[6];
  bStack0000000000000158 = (byte)puVar52;
  uStack0000000000000159 = (undefined7)((ulong)puVar52 >> 8);
  uStack0000000000000150 = (undefined1)puVar43[5];
  uStack0000000000000151 = (undefined7)(puVar43[5] >> 8);
  in_stack_00000168 = (ulong *)puVar43[8];
  bStack0000000000000160 = (byte)puVar43[7];
  uStack0000000000000161 = (undefined7)(puVar43[7] >> 8);
  uVar50 = (ulong)puVar58 ^ 0x8000000000000000;
  if (-1 < (long)puVar58) {
    uVar50 = 5;
  }
  _cStack0000000000000080 = puVar58;
  if (uVar50 != 4) {
    if (uVar50 == 5) {
      if ((in_stack_00000148 != 0) && (in_stack_00000148 * 9 != -0x11)) {
        _free((ulong *)puVar43[3] + (-1 - in_stack_00000148));
      }
      in_stack_000001d0 = (ulong *)0x8000000000000005;
      *(ulong **)(unaff_x29 + -0xf0) = unaff_x24;
      *(ulong **)(unaff_x29 + -0xd8) = unaff_x24;
      if (uVar56 != 0) {
        unaff_x26 = (ulong *)0x8000000000000000;
        in_stack_00000088 = (ulong *)0x8000000000000000;
        in_stack_00000078 = (ulong *)0x8000000000000000;
        in_stack_00000068 = (ulong *)0x8000000000000000;
        puVar55 = (ulong *)0x8000000000000000;
        unaff_x24 = (ulong *)0x8000000000000000;
        unaff_x20 = unaff_x19 + uVar56 * 0xd;
        _uStack0000000000000028 = puVar52;
        goto LAB_10127c89c;
      }
      *(undefined8 *)(unaff_x29 + -0xd8) = 0x8000000000000000;
      *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
      in_stack_00000088 = (ulong *)0x8000000000000000;
      in_stack_000002a8 = (ulong *)0x8000000000000000;
      goto LAB_10127cd08;
    }
    pcVar32 = (char *)FUN_108832ea0(&stack0x00000128,unaff_x29 + -0xc0,&UNK_10b21d540);
    in_stack_00000170 = unaff_x24;
    in_stack_00000178 = (ulong *)pcVar32;
    puVar43 = unaff_x22;
    if ((long)puVar58 < 0) goto LAB_10127d550;
    goto LAB_10127d564;
  }
  unaff_x19 = (ulong *)puVar43[1];
  puVar55 = (ulong *)puVar43[2];
  puVar58 = (ulong *)puVar43[3];
  unaff_x20 = puVar55 + (long)puVar58 * 9;
  unaff_x25 = puVar55;
  if (puVar58 != (ulong *)0x0) {
    unaff_x25 = puVar55 + 9;
    puVar42 = (ulong *)*puVar55;
    if (puVar42 != (ulong *)0x8000000000000005) {
      in_stack_000001d0 = puVar42;
      uVar67 = puVar55[2];
      puVar43 = (ulong *)puVar55[1];
      puVar48 = (ulong *)&stack0x000001d0;
code_r0x00010127cc28:
      puVar48[2] = uVar67;
      puVar48[1] = (ulong)puVar43;
code_r0x00010127cc2c:
      uVar50 = puVar55[3];
      puVar48[4] = puVar55[4];
      puVar48[3] = uVar50;
      uVar50 = puVar55[5];
      puVar48[6] = puVar55[6];
      puVar48[5] = uVar50;
      uVar50 = puVar55[7];
      puVar48[8] = puVar55[8];
      puVar48[7] = uVar50;
      if (puVar42 == (ulong *)0x8000000000000003) {
        puVar43 = in_stack_000001e0;
        if ((in_stack_000001d8 == unaff_x24) || (in_stack_000001d8 == (ulong *)0x8000000000000001))
        goto LAB_10127c820;
        unaff_x21 = in_stack_000001e0;
        unaff_x26 = in_stack_000001d8;
        if (puVar58 == (ulong *)0x1) {
LAB_10127cc90:
          pcVar32 = (char *)FUN_1087e422c(1,&UNK_10b2316b8,&UNK_10b20a590);
LAB_10127cca8:
          in_stack_00000170 = unaff_x24;
          in_stack_00000178 = (ulong *)pcVar32;
          if (unaff_x26 != (ulong *)0x0) {
LAB_10127ccb0:
            pcVar32 = (char *)_free(unaff_x21);
code_r0x00010127ccb8:
          }
        }
        else {
code_r0x00010127cc70:
          unaff_x25 = puVar55 + 0x12;
          puVar51 = in_stack_000001e8;
code_r0x00010127cc7c:
          if ((ulong *)puVar55[9] == (ulong *)0x8000000000000005) goto LAB_10127cc90;
          in_stack_00000088 = puVar51;
          in_stack_000001d0 = (ulong *)puVar55[9];
          in_stack_000001e0 = (ulong *)puVar55[0xb];
          in_stack_000001d8 = (ulong *)puVar55[10];
          in_stack_000001e8 = (ulong *)puVar55[0xc];
          FUN_100673d78(unaff_x29 + -0xa8,&stack0x000001d0);
          puVar43 = *(ulong **)(unaff_x29 + -0xa8);
          pcVar32 = *(char **)(unaff_x29 + -0xa0);
          if (puVar43 == unaff_x24) goto LAB_10127cca8;
          lVar59 = *(long *)(unaff_x29 + -0x98);
          in_stack_00000070 = puVar43;
          in_stack_00000078 = (ulong *)pcVar32;
          *(ulong **)(unaff_x29 + -0xd8) = puVar43;
          *(char **)(unaff_x29 + -0xd0) = pcVar32;
          *(long *)(unaff_x29 + -200) = lVar59;
          if (puVar58 == (ulong *)0x2) {
LAB_10127d2b0:
            pcVar32 = (char *)FUN_1087e422c(2,&UNK_10b2316b8,&UNK_10b20a590);
LAB_10127d2c8:
            in_stack_00000170 = unaff_x24;
            in_stack_00000178 = (ulong *)pcVar32;
            puVar58 = in_stack_00000078;
            puVar52 = in_stack_00000078;
joined_r0x00010127d2d0:
            for (; uVar33 = in_stack_00000078, in_stack_00000078 = puVar52, lVar59 != 0;
                lVar59 = lVar59 + -1) {
              pcVar32 = (char *)FUN_100e4cf18(puVar58);
              puVar58 = puVar58 + 0x18;
              puVar52 = in_stack_00000078;
              in_stack_00000078 = (ulong *)uVar33;
            }
            if (in_stack_00000070 != (ulong *)0x0) {
              pcVar32 = (char *)_free(uVar33);
            }
            unaff_x27 = _cStack0000000000000030;
            if (unaff_x26 == (ulong *)0x0) goto LAB_10127c824;
            goto LAB_10127ccb0;
          }
          unaff_x25 = puVar55 + 0x1b;
          if ((ulong *)puVar55[0x12] == (ulong *)0x8000000000000005) goto LAB_10127d2b0;
          in_stack_000001d0 = (ulong *)puVar55[0x12];
          in_stack_000001e0 = (ulong *)puVar55[0x14];
          in_stack_000001d8 = (ulong *)puVar55[0x13];
          in_stack_000001e8 = (ulong *)puVar55[0x15];
          FUN_1006739a0(unaff_x29 + -0xa8,&stack0x000001d0);
          puVar43 = *(ulong **)(unaff_x29 + -0xa8);
          pcVar32 = *(char **)(unaff_x29 + -0xa0);
          if (puVar43 == unaff_x24) goto LAB_10127d2c8;
          lVar63 = *(long *)(unaff_x29 + -0x98);
          _cStack0000000000000060 = (ulong *)pcVar32;
          *(ulong **)(unaff_x29 + -0xc0) = puVar43;
          *(char **)(unaff_x29 + -0xb8) = pcVar32;
          *(long *)(unaff_x29 + -0xb0) = lVar63;
          if (puVar58 == (ulong *)0x3) {
LAB_10127d37c:
            pcVar32 = (char *)FUN_1087e422c(3,&UNK_10b2316b8,&UNK_10b20a590);
LAB_10127d394:
            in_stack_00000170 = (ulong *)0x8000000000000000;
            in_stack_00000178 = (ulong *)pcVar32;
            if (lVar63 != 0) {
              puVar58 = _cStack0000000000000060 + 1;
              do {
                if (puVar58[-1] != 0) {
                  pcVar32 = (char *)_free(*puVar58);
                }
                puVar58 = puVar58 + 3;
                lVar63 = lVar63 + -1;
              } while (lVar63 != 0);
            }
            puVar58 = in_stack_00000078;
            puVar52 = in_stack_00000078;
            if (puVar43 != (ulong *)0x0) {
              pcVar32 = (char *)_free(_cStack0000000000000060);
              puVar58 = in_stack_00000078;
              puVar52 = in_stack_00000078;
            }
            goto joined_r0x00010127d2d0;
          }
          unaff_x25 = puVar55 + 0x24;
          if ((ulong *)puVar55[0x1b] == (ulong *)0x8000000000000005) goto LAB_10127d37c;
          in_stack_000001d0 = (ulong *)puVar55[0x1b];
          in_stack_000001e0 = (ulong *)puVar55[0x1d];
          in_stack_000001d8 = (ulong *)puVar55[0x1c];
          in_stack_000001e8 = (ulong *)puVar55[0x1e];
          FUN_1013822a4(unaff_x29 + -0xa8,&stack0x000001d0);
          pcVar32 = *(char **)(unaff_x29 + -0xa0);
          if (*(ulong **)(unaff_x29 + -0xa8) == (ulong *)0x8000000000000000) goto LAB_10127d394;
          in_stack_00000198 = *(ulong **)(unaff_x29 + -200);
          in_stack_000001b0 = (ulong *)*(ulong *)(unaff_x29 + -0xb0);
          in_stack_000001a8 = *(ulong **)(unaff_x29 + -0xb8);
          in_stack_000001a0 = *(ulong **)(unaff_x29 + -0xc0);
          in_stack_00000170 = unaff_x26;
          in_stack_00000178 = unaff_x21;
          in_stack_00000180 = in_stack_00000088;
          in_stack_000001b8 = *(ulong **)(unaff_x29 + -0xa8);
          in_stack_000001c0 = (ulong *)pcVar32;
          in_stack_000001c8 = *(ulong **)(unaff_x29 + -0x98);
          in_stack_000001d8 = unaff_x21;
          in_stack_000001e0 = in_stack_00000088;
          unaff_x27 = _cStack0000000000000030;
          in_stack_00000188 = in_stack_000002d8;
          in_stack_00000190 = in_stack_000002e0;
          in_stack_000001d0 = unaff_x26;
          in_stack_000001e8 = in_stack_000002d8;
          if (puVar58 != (ulong *)0x4) {
            in_stack_00000178 = (ulong *)FUN_1087e422c(puVar58,&UNK_10b21cb80,&UNK_10b20a590);
            in_stack_00000170 = (ulong *)0x8000000000000000;
            pcVar32 = (char *)FUN_100e52c20(&stack0x000001d0);
            unaff_x27 = _cStack0000000000000030;
          }
        }
      }
      else {
        puVar43 = (ulong *)FUN_108832ea0(&stack0x000001d0,unaff_x29 + -0xc0,&UNK_10b20a620);
        pcVar32 = (char *)FUN_100de6690(&stack0x000001d0);
LAB_10127c820:
        in_stack_00000170 = unaff_x24;
        in_stack_00000178 = puVar43;
      }
LAB_10127c824:
      lVar59 = ((ulong)((long)unaff_x20 - (long)unaff_x25) >> 3) * -0x71c71c71c71c71c7 + 1;
      while (lVar59 = lVar59 + -1, lVar59 != 0) {
        pcVar32 = (char *)FUN_100de6690(unaff_x25);
        unaff_x25 = unaff_x25 + 9;
      }
      unaff_x24 = (ulong *)0x8000000000000000;
      if (unaff_x19 != (ulong *)0x0) {
        pcVar32 = (char *)_free(puVar55);
      }
      unaff_x25 = (ulong *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
      puVar58 = _cStack0000000000000080;
      goto joined_r0x00010127d54c;
    }
  }
  pcVar32 = (char *)FUN_1087e422c(0,&UNK_10b2316b8,&UNK_10b20a590);
  puVar43 = (ulong *)pcVar32;
  goto LAB_10127c820;
LAB_10127c89c:
  puVar44 = unaff_x19 + 0xd;
  if ((ulong *)*unaff_x19 == unaff_x26) goto code_r0x00010127ccc0;
  plVar46 = (long *)unaff_x19[1];
  uVar50 = unaff_x19[2];
  in_stack_000001e8 = (ulong *)unaff_x19[6];
  in_stack_000001e0 = (ulong *)unaff_x19[5];
  in_stack_000001f8 = (ulong *)unaff_x19[8];
  in_stack_000001f0 = (ulong *)unaff_x19[7];
  in_stack_00000208 = (ulong *)unaff_x19[10];
  in_stack_00000200 = (ulong *)unaff_x19[9];
  in_stack_00000210 = unaff_x19[0xb];
  in_stack_000001d8 = (ulong *)unaff_x19[4];
  in_stack_000001d0 = (ulong *)unaff_x19[3];
  if ((long)uVar50 < 6) {
    if (uVar50 == 3) {
      if ((short)*plVar46 != 0x7763 || *(char *)((long)plVar46 + 2) != 'd') goto LAB_10127c9a0;
      uVar60 = 0;
      uVar40 = 0;
    }
    else if ((uVar50 == 5) && ((int)*plVar46 == 0x6b6f6f68 && *(char *)((long)plVar46 + 4) == 's'))
    {
      uVar60 = 1;
      uVar40 = 1;
    }
    else {
LAB_10127c9a0:
      uVar60 = 4;
      uVar40 = 4;
    }
  }
  else if (uVar50 == 6) {
    if ((int)*plVar46 != 0x6f727265 || *(short *)((long)plVar46 + 4) != 0x7372) goto LAB_10127c9a0;
    uVar60 = 3;
    uVar40 = 3;
  }
  else {
    if ((uVar50 != 8) || (*plVar46 != 0x73676e696e726177)) goto LAB_10127c9a0;
    uVar60 = 2;
    uVar40 = 2;
  }
  if ((ulong *)*unaff_x19 != (ulong *)0x0) {
    _free();
    uVar40 = uVar60;
  }
  puVar42 = in_stack_000001d0;
  puVar58 = in_stack_00000078;
  puVar64 = _cStack0000000000000030;
  puVar48 = in_stack_00000070;
  in_stack_000002a8 = unaff_x24;
  in_stack_000002b8 = unaff_x27;
  if (uVar40 < 2) {
    if (uVar40 == 0) {
      if (in_stack_00000078 != unaff_x26) {
        *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
        *(ulong **)(unaff_x29 + -0xf0) = puVar55;
        *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
        puVar42 = (ulong *)CONCAT62(uStack0000000000000052,
                                    CONCAT11(cStack0000000000000051,bStack0000000000000050));
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108ca1f1d;
        *(undefined8 *)(unaff_x29 + -0xb8) = 3;
        *(undefined1 **)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_00000178 =
             (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
        goto LAB_10127d0d8;
      }
      in_stack_000001d0 = (ulong *)0x8000000000000005;
      if (puVar42 == (ulong *)0x8000000000000005) goto code_r0x00010127cf38;
      *(ulong **)(unaff_x29 + -0xa8) = puVar42;
      *(ulong **)(unaff_x29 + -0x98) = in_stack_000001e0;
      *(ulong **)(unaff_x29 + -0xa0) = in_stack_000001d8;
      *(ulong **)(unaff_x29 + -0x88) = in_stack_000001f0;
      *(ulong **)(unaff_x29 + -0x90) = in_stack_000001e8;
      *(ulong **)(unaff_x29 + -0x78) = in_stack_00000200;
      *(ulong **)(unaff_x29 + -0x80) = in_stack_000001f8;
      *(ulong *)(unaff_x29 + -0x68) = in_stack_00000210;
      *(ulong **)(unaff_x29 + -0x70) = in_stack_00000208;
      if (puVar42 != (ulong *)0x8000000000000003) {
        *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
        *(ulong **)(unaff_x29 + -0xf0) = puVar55;
        *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
        in_stack_000002b0 =
             (ulong *)CONCAT62(uStack0000000000000052,
                               CONCAT11(cStack0000000000000051,bStack0000000000000050));
        pcVar32 = (char *)FUN_108832ea0(unaff_x29 + -0xa8,unaff_x29 + -0xc0,&UNK_10b20a620);
        puVar64 = _cStack0000000000000030;
        FUN_100de6690(unaff_x29 + -0xa8);
        goto LAB_10127d168;
      }
      in_stack_00000078 = in_stack_000001d8;
      pcVar32 = (char *)in_stack_000001e0;
      puVar42 = in_stack_00000068;
      puVar51 = _cStack0000000000000060;
      if (in_stack_000001d8 == unaff_x26) goto code_r0x00010127d144;
      _uStack0000000000000038 = in_stack_000001e8;
      in_stack_00000048 = (uint)in_stack_000001e0;
      fStack000000000000004c = (float)((ulong)in_stack_000001e0 >> 0x20);
      puVar58 = puVar44;
    }
    else {
      if (unaff_x24 != unaff_x26) {
        *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
        *(ulong **)(unaff_x29 + -0xf0) = puVar55;
        *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
        puVar42 = (ulong *)CONCAT62(uStack0000000000000052,
                                    CONCAT11(cStack0000000000000051,bStack0000000000000050));
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cabd72;
        *(undefined8 *)(unaff_x29 + -0xb8) = 5;
        *(undefined1 **)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_00000178 =
             (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
        goto LAB_10127d0d8;
      }
      in_stack_000001d0 = (ulong *)0x8000000000000005;
      bVar27 = puVar42 == (ulong *)0x8000000000000005;
      puVar58 = puVar44;
code_r0x00010127cb9c:
      uVar67 = in_stack_00000210;
      puVar43 = in_stack_00000208;
      if (bVar27) goto LAB_10127cee8;
      *(ulong **)(unaff_x29 + -0xa8) = puVar42;
      puVar48 = (ulong *)(unaff_x29 + -0xa8);
      *(ulong **)(unaff_x29 + -0x98) = in_stack_000001e0;
      *(ulong **)(unaff_x29 + -0xa0) = in_stack_000001d8;
      *(ulong **)(unaff_x29 + -0x88) = in_stack_000001f0;
      *(ulong **)(unaff_x29 + -0x90) = in_stack_000001e8;
      *(ulong **)(unaff_x29 + -0x78) = in_stack_00000200;
      *(ulong **)(unaff_x29 + -0x80) = in_stack_000001f8;
code_r0x00010127cbc8:
      puVar48[8] = uVar67;
      puVar48[7] = (ulong)puVar43;
      FUN_100673d78(unaff_x29 + -0xc0,unaff_x29 + -0xa8);
      unaff_x24 = *(ulong **)(unaff_x29 + -0xc0);
      if (unaff_x24 == unaff_x26) goto code_r0x00010127d01c;
      uVar33 = *(undefined8 *)(unaff_x29 + -0xb8);
      unaff_x27 = *(ulong **)(unaff_x29 + -0xb0);
      bStack0000000000000050 = (byte)uVar33;
      cStack0000000000000051 = (char)((ulong)uVar33 >> 8);
      uStack0000000000000052 = (undefined6)((ulong)uVar33 >> 0x10);
    }
  }
  else {
    if (uVar40 == 2) {
      if (puVar55 == unaff_x26) {
        in_stack_000001d0 = (ulong *)0x8000000000000005;
        if (puVar42 != (ulong *)0x8000000000000005) {
          *(ulong **)(unaff_x29 + -0xa8) = puVar42;
          *(ulong **)(unaff_x29 + -0x98) = in_stack_000001e0;
          *(ulong **)(unaff_x29 + -0xa0) = in_stack_000001d8;
          *(ulong **)(unaff_x29 + -0x88) = in_stack_000001f0;
          *(ulong **)(unaff_x29 + -0x90) = in_stack_000001e8;
          *(ulong **)(unaff_x29 + -0x78) = in_stack_00000200;
          *(ulong **)(unaff_x29 + -0x80) = in_stack_000001f8;
          *(ulong *)(unaff_x29 + -0x68) = in_stack_00000210;
          *(ulong **)(unaff_x29 + -0x70) = in_stack_00000208;
          FUN_1006739a0(unaff_x29 + -0xc0,unaff_x29 + -0xa8);
          puVar55 = *(ulong **)(unaff_x29 + -0xc0);
          if (puVar55 != unaff_x26) {
            _bStack0000000000000040 = *(ulong **)(unaff_x29 + -0xb8);
            in_stack_00000070 = *(ulong **)(unaff_x29 + -0xb0);
            puVar58 = puVar44;
            goto LAB_10127c88c;
          }
          *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
          *(ulong **)(unaff_x29 + -200) = unaff_x25;
          *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
          *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
          *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
          *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
code_r0x00010127d0bc:
          in_stack_000002b0 =
               (ulong *)CONCAT62(uStack0000000000000052,
                                 CONCAT11(cStack0000000000000051,bStack0000000000000050));
code_r0x00010127d0c4:
          puVar42 = in_stack_000002b0;
          goto LAB_10127d0cc;
        }
        *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
        *(undefined8 *)(unaff_x29 + -0xf0) = 0x8000000000000000;
        *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
        puVar42 = (ulong *)CONCAT62(uStack0000000000000052,
                                    CONCAT11(cStack0000000000000051,bStack0000000000000050));
code_r0x00010127cff4:
        puVar64 = _cStack0000000000000030;
        in_stack_00000178 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
        in_stack_000002a8 = unaff_x24;
        unaff_x27 = in_stack_000002b8;
      }
      else {
        *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
        *(ulong **)(unaff_x29 + -200) = unaff_x25;
        *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
        *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
        *(ulong **)(unaff_x29 + -0xf0) = puVar55;
        *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
        puVar42 = (ulong *)CONCAT62(uStack0000000000000052,
                                    CONCAT11(cStack0000000000000051,bStack0000000000000050));
        *(undefined **)(unaff_x29 + -0xc0) = &UNK_108c984b0;
        *(undefined8 *)(unaff_x29 + -0xb8) = 8;
        *(undefined1 **)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
        *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
        in_stack_00000178 =
             (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
      }
      goto LAB_10127d0d8;
    }
    if (uVar40 != 3) {
      in_stack_000001d0 = (ulong *)0x8000000000000005;
      if (puVar42 != (ulong *)0x8000000000000005) {
        *(ulong **)(unaff_x29 + -0xa8) = puVar42;
        *(ulong **)(unaff_x29 + -0x98) = in_stack_000001e0;
        *(ulong **)(unaff_x29 + -0xa0) = in_stack_000001d8;
        *(ulong **)(unaff_x29 + -0x88) = in_stack_000001f0;
        *(ulong **)(unaff_x29 + -0x90) = in_stack_000001e8;
        *(ulong **)(unaff_x29 + -0x78) = in_stack_00000200;
        *(ulong **)(unaff_x29 + -0x80) = in_stack_000001f8;
        *(ulong *)(unaff_x29 + -0x68) = in_stack_00000210;
        *(ulong **)(unaff_x29 + -0x70) = in_stack_00000208;
        FUN_100de6690(unaff_x29 + -0xa8);
        puVar58 = puVar44;
        goto LAB_10127c88c;
      }
      *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
      *(ulong **)(unaff_x29 + -200) = unaff_x25;
      puVar42 = in_stack_00000068;
code_r0x00010127ceb4:
      *(ulong **)(unaff_x29 + -0xe0) = puVar48;
      *(ulong **)(unaff_x29 + -0xd8) = puVar42;
      *(ulong **)(unaff_x29 + -0xf0) = puVar55;
      *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
      puVar42 = (ulong *)CONCAT62(uStack0000000000000052,
                                  CONCAT11(cStack0000000000000051,bStack0000000000000050));
code_r0x00010127cec4:
      in_stack_000002b0 = puVar42;
code_r0x00010127cec8:
      in_stack_000002a8 = unaff_x24;
code_r0x00010127cecc:
      pcVar32 = &UNK_108cde170;
      pbVar37 = (byte *)0x10;
      unaff_x27 = _cStack0000000000000030;
      goto code_r0x00010127cedc;
    }
    if (in_stack_00000088 != unaff_x26) {
      *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
      *(ulong **)(unaff_x29 + -200) = unaff_x25;
      *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
      *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
      *(ulong **)(unaff_x29 + -0xf0) = puVar55;
      *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
      in_stack_000002b0 =
           (ulong *)CONCAT62(uStack0000000000000052,
                             CONCAT11(cStack0000000000000051,bStack0000000000000050));
      *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cbfdb3;
      *(undefined8 *)(unaff_x29 + -0xb8) = 6;
      *(undefined1 **)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
      *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
      in_stack_00000178 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xa8);
      in_stack_00000170 = (ulong *)0x8000000000000000;
      unaff_x20 = (ulong *)0x1;
      unaff_x26 = (ulong *)0x1;
      unaff_x19 = (ulong *)0x1;
      puVar55 = in_stack_00000088;
      puVar43 = (ulong *)0x8000000000000000;
      goto joined_r0x00010127d0f4;
    }
    in_stack_000001d0 = (ulong *)0x8000000000000005;
    if (puVar42 == (ulong *)0x8000000000000005) goto code_r0x00010127cf84;
    *(ulong **)(unaff_x29 + -0xa8) = puVar42;
    *(ulong **)(unaff_x29 + -0x98) = in_stack_000001e0;
    *(ulong **)(unaff_x29 + -0xa0) = in_stack_000001d8;
    *(ulong **)(unaff_x29 + -0x88) = in_stack_000001f0;
    *(ulong **)(unaff_x29 + -0x90) = in_stack_000001e8;
    *(ulong **)(unaff_x29 + -0x78) = in_stack_00000200;
    *(ulong **)(unaff_x29 + -0x80) = in_stack_000001f8;
    *(ulong *)(unaff_x29 + -0x68) = in_stack_00000210;
    *(ulong **)(unaff_x29 + -0x70) = in_stack_00000208;
    in_stack_00000088 = (ulong *)0x8000000000000000;
    FUN_1013822a4(unaff_x29 + -0xc0,unaff_x29 + -0xa8);
    puVar43 = *(ulong **)(unaff_x29 + -0xc0);
    puVar48 = in_stack_00000070;
    puVar58 = in_stack_00000078;
    if (puVar43 == unaff_x26) goto code_r0x00010127d054;
    _cStack0000000000000060 = *(ulong **)(unaff_x29 + -0xb8);
    unaff_x25 = *(ulong **)(unaff_x29 + -0xb0);
    puVar58 = puVar44;
    in_stack_00000068 = puVar43;
    in_stack_00000088 = puVar43;
  }
LAB_10127c88c:
  puVar44 = unaff_x20;
  puVar43 = unaff_x19 + 0xd;
  unaff_x20 = puVar44;
  unaff_x19 = puVar58;
  if (puVar43 == puVar44) goto LAB_10127ccc8;
  goto LAB_10127c89c;
code_r0x00010127ccc0:
LAB_10127ccc8:
  *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
  *(ulong **)(unaff_x29 + -200) = unaff_x25;
  *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
  *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
  *(ulong **)(unaff_x29 + -0xf0) = puVar55;
  *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
  in_stack_000002b0 =
       (ulong *)CONCAT62(uStack0000000000000052,
                         CONCAT11(cStack0000000000000051,bStack0000000000000050));
  puVar58 = in_stack_00000078;
  in_stack_000002b8 = unaff_x27;
code_r0x00010127ccf0:
  puVar48 = (ulong *)0x8000000000000000;
  bVar28 = puVar58 == (ulong *)0x8000000000000000;
  in_stack_000002a8 = unaff_x24;
code_r0x00010127ccfc:
  if (bVar28) {
    unaff_x24 = (ulong *)0x8000000000000000;
    unaff_x27 = _cStack0000000000000030;
LAB_10127cd08:
    puVar42 = (ulong *)&UNK_108ca1000;
code_r0x00010127cd0c:
    *(char **)(unaff_x29 + -0xc0) = (char *)((long)puVar42 + 0xf1d);
    *(undefined8 *)(unaff_x29 + -0xb8) = 3;
    puVar58 = (ulong *)0x8000000000000000;
    *(undefined1 **)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
    *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
    pbVar37 = unaff_x29 + -0xa8;
FUN_10127cd34:
    pcVar32 = (char *)FUN_108856088(s_missing_field_____108ac28f7,pbVar37);
    puVar64 = unaff_x27;
    unaff_x27 = in_stack_000002b8;
    goto LAB_10127cd40;
  }
  unaff_x26 = (ulong *)(ulong)(unaff_x24 == puVar48);
  if (unaff_x24 != puVar48) {
LAB_10127cdd0:
    unaff_x19 = (ulong *)(ulong)(puVar55 == puVar48);
    if (puVar55 == puVar48) goto code_r0x00010127cddc;
    if (in_stack_00000088 == puVar48) goto code_r0x00010127ce28;
    in_stack_000001a8 = *(ulong **)(unaff_x29 + -0xe8);
    in_stack_000001a0 = *(ulong **)(unaff_x29 + -0xf0);
    in_stack_000001b0 = *(ulong **)(unaff_x29 + -0xe0);
    in_stack_00000178 = (ulong *)CONCAT44(fStack000000000000004c,in_stack_00000048);
    in_stack_00000180 = _uStack0000000000000038;
    in_stack_000001b8 = in_stack_00000088;
    in_stack_000001c0 = _cStack0000000000000060;
    in_stack_00000170 = puVar58;
    in_stack_00000188 = in_stack_000002a8;
    in_stack_00000190 = in_stack_000002b0;
    in_stack_00000198 = in_stack_000002b8;
    in_stack_000001c8 = unaff_x25;
    if (unaff_x20 != puVar44) {
      in_stack_00000178 =
           (ulong *)FUN_1087e422c(_uStack0000000000000028,&UNK_10b21cb90,&UNK_10b20a590);
      in_stack_00000170 = (ulong *)0x8000000000000000;
      FUN_100e52c20(&stack0x00000240);
    }
    puVar58 = _cStack0000000000000080;
    unaff_x27 = _cStack0000000000000030;
    pcVar32 = (char *)FUN_100de8910(&stack0x00000218);
    unaff_x25 = (ulong *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
    unaff_x24 = (ulong *)0x8000000000000000;
    goto joined_r0x00010127d54c;
  }
  puVar48 = (ulong *)&UNK_108cabd72;
code_r0x00010127cd74:
  *(ulong **)(unaff_x29 + -0xc0) = puVar48;
  *(undefined8 *)(unaff_x29 + -0xb8) = 5;
  *(undefined1 **)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
  puVar42 = (ulong *)&DAT_100c7b3a0;
code_r0x00010127cd8c:
  *(ulong **)(unaff_x29 + -0xa0) = puVar42;
  pbVar37 = unaff_x29 + -0xa8;
  pcVar32 = s_eRolled_the_thread_back__but_fai_108ac1fff + 1;
code_r0x00010127cd98:
  in_stack_00000178 = (ulong *)FUN_108856088((char *)((long)pcVar32 + 0x8f7),pbVar37);
  unaff_x24 = (ulong *)0x8000000000000000;
  in_stack_00000170 = (ulong *)0x8000000000000000;
  unaff_x19 = (ulong *)0x1;
code_r0x00010127cdac:
  uVar33 = CONCAT44(fStack000000000000004c,in_stack_00000048);
  puVar55 = in_stack_00000088;
  puVar64 = _cStack0000000000000030;
  if (puVar58 == (ulong *)0x0) goto LAB_10127cdc0;
  goto LAB_10127cdbc;
LAB_10127cee8:
  *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
  *(ulong **)(unaff_x29 + -200) = unaff_x25;
  *(ulong **)(unaff_x29 + -0xe0) = in_stack_00000070;
  *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
  puVar58 = in_stack_00000078;
  in_stack_000002b8 = unaff_x27;
code_r0x00010127cf00:
  unaff_x27 = in_stack_000002b8;
  puVar64 = _cStack0000000000000030;
  *(ulong **)(unaff_x29 + -0xf0) = puVar55;
  *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
  puVar42 = (ulong *)CONCAT62(uStack0000000000000052,
                              CONCAT11(cStack0000000000000051,bStack0000000000000050));
  in_stack_00000178 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
  in_stack_000002a8 = (ulong *)0x8000000000000000;
  goto LAB_10127d0d8;
code_r0x00010127d01c:
  puVar48 = in_stack_00000070;
  in_stack_000002b8 = unaff_x27;
code_r0x00010127d024:
  *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
  *(ulong **)(unaff_x29 + -200) = unaff_x25;
  *(ulong **)(unaff_x29 + -0xe0) = puVar48;
  *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
  *(ulong **)(unaff_x29 + -0xf0) = puVar55;
  *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
code_r0x00010127d038:
  puVar42 = (ulong *)CONCAT62(uStack0000000000000052,
                              CONCAT11(cStack0000000000000051,bStack0000000000000050));
  unaff_x24 = (ulong *)0x8000000000000000;
LAB_10127d0cc:
  in_stack_00000178 = *(ulong **)(unaff_x29 + -0xb8);
  puVar64 = _cStack0000000000000030;
  puVar58 = in_stack_00000078;
  in_stack_000002a8 = unaff_x24;
  unaff_x27 = in_stack_000002b8;
  goto LAB_10127d0d8;
code_r0x00010127cf38:
  *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
  *(ulong **)(unaff_x29 + -200) = unaff_x25;
  *(ulong **)(unaff_x29 + -0xe0) = puVar48;
  *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
  puVar42 = _bStack0000000000000040;
  in_stack_000002b8 = unaff_x27;
code_r0x00010127cf4c:
  *(ulong **)(unaff_x29 + -0xf0) = puVar55;
  *(ulong **)(unaff_x29 + -0xe8) = puVar42;
  in_stack_000002b0 =
       (ulong *)CONCAT62(uStack0000000000000052,
                         CONCAT11(cStack0000000000000051,bStack0000000000000050));
  in_stack_000002a8 = unaff_x24;
code_r0x00010127cf60:
  pcVar32 = &UNK_108cde170;
code_r0x00010127cf68:
  unaff_x27 = in_stack_000002b8;
  puVar64 = _cStack0000000000000030;
  pcVar32 = (char *)FUN_1088561c0(pcVar32,0x10);
LAB_10127d168:
  unaff_x24 = (ulong *)0x8000000000000000;
  puVar58 = (ulong *)0x8000000000000000;
LAB_10127cd40:
  unaff_x19 = (ulong *)0x1;
  in_stack_00000170 = puVar58;
  in_stack_00000178 = (ulong *)pcVar32;
  in_stack_000002b8 = unaff_x27;
code_r0x00010127cd48:
  unaff_x26 = (ulong *)0x1;
code_r0x00010127cd4c:
  unaff_x20 = (ulong *)0x1;
code_r0x00010127cd50:
  puVar55 = in_stack_00000088;
  puVar43 = unaff_x24;
  if (in_stack_00000088 != unaff_x24) goto joined_r0x00010127d0f4;
  goto LAB_10127d474;
code_r0x00010127d144:
  *(ulong **)(unaff_x29 + -0xd0) = puVar51;
  *(ulong **)(unaff_x29 + -200) = unaff_x25;
  *(ulong **)(unaff_x29 + -0xe0) = puVar48;
  *(ulong **)(unaff_x29 + -0xd8) = puVar42;
  *(ulong **)(unaff_x29 + -0xf0) = puVar55;
  *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
  in_stack_000002b0 =
       (ulong *)CONCAT62(uStack0000000000000052,
                         CONCAT11(cStack0000000000000051,bStack0000000000000050));
  puVar64 = _cStack0000000000000030;
  in_stack_000002a8 = unaff_x24;
  unaff_x27 = in_stack_000002b8;
  goto LAB_10127d168;
code_r0x00010127cf84:
  puVar42 = in_stack_00000068;
  puVar51 = _cStack0000000000000060;
  in_stack_000002b8 = unaff_x27;
code_r0x00010127cf8c:
  *(ulong **)(unaff_x29 + -0xd0) = puVar51;
  *(ulong **)(unaff_x29 + -200) = unaff_x25;
  *(ulong **)(unaff_x29 + -0xe0) = puVar48;
  *(ulong **)(unaff_x29 + -0xd8) = puVar42;
  *(ulong **)(unaff_x29 + -0xf0) = puVar55;
  *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
  puVar42 = (ulong *)0x8000000000000000;
code_r0x00010127cfa0:
  unaff_x27 = _cStack0000000000000030;
  in_stack_000002b0 =
       (ulong *)CONCAT62(uStack0000000000000052,
                         CONCAT11(cStack0000000000000051,bStack0000000000000050));
  in_stack_00000088 = puVar42;
  pcVar32 = (char *)FUN_1088561c0(&UNK_108cde170,0x10);
  puVar62 = (ulong *)0x8000000000000000;
  in_stack_000002a8 = unaff_x24;
code_r0x00010127cfc8:
  puVar64 = unaff_x27;
LAB_10127d084:
  unaff_x24 = puVar62;
  unaff_x20 = (ulong *)0x1;
  unaff_x26 = (ulong *)0x1;
  unaff_x19 = (ulong *)0x1;
  in_stack_00000170 = unaff_x24;
  in_stack_00000178 = (ulong *)pcVar32;
  goto LAB_10127d474;
code_r0x00010127d054:
  *(ulong **)(unaff_x29 + -0xd0) = _cStack0000000000000060;
  *(ulong **)(unaff_x29 + -200) = unaff_x25;
  *(ulong **)(unaff_x29 + -0xe0) = puVar48;
  *(ulong **)(unaff_x29 + -0xd8) = in_stack_00000068;
  in_stack_000002b8 = unaff_x27;
code_r0x00010127d064:
  *(ulong **)(unaff_x29 + -0xf0) = puVar55;
  *(ulong **)(unaff_x29 + -0xe8) = _bStack0000000000000040;
  in_stack_000002b0 =
       (ulong *)CONCAT62(uStack0000000000000052,
                         CONCAT11(cStack0000000000000051,bStack0000000000000050));
  pcVar32 = *(char **)(unaff_x29 + -0xb8);
  puVar62 = (ulong *)0x8000000000000000;
  puVar64 = _cStack0000000000000030;
  in_stack_000002a8 = unaff_x24;
  goto LAB_10127d084;
code_r0x00010127cddc:
  unaff_x20 = (ulong *)0x8000000000000000;
  puVar48 = (ulong *)&UNK_108c984b0;
  puVar42 = (ulong *)0x8;
code_r0x00010127cdec:
  *(ulong **)(unaff_x29 + -0xc0) = puVar48;
  *(ulong **)(unaff_x29 + -0xb8) = puVar42;
  *(undefined1 **)(unaff_x29 + -0xa8) = unaff_x29 + -0xc0;
  *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
  pcVar32 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
code_r0x00010127ce14:
  in_stack_00000170 = unaff_x20;
  in_stack_00000178 = (ulong *)pcVar32;
code_r0x00010127ce18:
  goto LAB_10127d200;
code_r0x00010127ce28:
  *(undefined **)(unaff_x29 + -0xc0) = &UNK_108cbfdb3;
  *(undefined8 *)(unaff_x29 + -0xb8) = 6;
  puVar42 = (ulong *)(unaff_x29 + -0xc0);
code_r0x00010127ce3c:
  *(ulong **)(unaff_x29 + -0xa8) = puVar42;
  *(undefined **)(unaff_x29 + -0xa0) = &DAT_100c7b3a0;
  pcVar32 = (char *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xa8);
code_r0x00010127ce5c:
  in_stack_00000170 = (ulong *)0x8000000000000000;
  puVar42 = in_stack_00000070;
  in_stack_00000178 = (ulong *)pcVar32;
code_r0x00010127ce68:
  if (puVar42 != (ulong *)0x0) {
code_r0x00010127ce6c:
    unaff_x20 = _bStack0000000000000040 + 1;
    do {
      if (unaff_x20[-1] != 0) {
        pcVar32 = (char *)*unaff_x20;
code_r0x00010127ce98:
        _free(pcVar32);
      }
      unaff_x20 = unaff_x20 + 3;
      in_stack_00000070 = (ulong *)((long)in_stack_00000070 + -1);
    } while (in_stack_00000070 != (ulong *)0x0);
  }
  if (puVar55 != (ulong *)0x0) {
    _free(_bStack0000000000000040);
  }
LAB_10127d200:
  if (unaff_x27 != (ulong *)0x0) {
    lVar59 = CONCAT62(uStack0000000000000052,CONCAT11(cStack0000000000000051,bStack0000000000000050)
                     );
    do {
      FUN_100e4cf18(lVar59);
      lVar59 = lVar59 + 0xc0;
      unaff_x27 = (ulong *)((long)unaff_x27 + -1);
    } while (unaff_x27 != (ulong *)0x0);
  }
  if (unaff_x24 != (ulong *)0x0) {
    _free(CONCAT62(uStack0000000000000052,CONCAT11(cStack0000000000000051,bStack0000000000000050)));
  }
  unaff_x24 = (ulong *)0x8000000000000000;
  uVar33 = CONCAT44(fStack000000000000004c,in_stack_00000048);
  puVar55 = in_stack_00000088;
  puVar64 = _cStack0000000000000030;
  if (puVar58 != (ulong *)0x0) {
LAB_10127cdbc:
    puVar55 = in_stack_00000088;
    puVar64 = _cStack0000000000000030;
    _free(uVar33);
  }
LAB_10127cdc0:
  unaff_x20 = (ulong *)0x0;
  puVar43 = unaff_x24;
  if (puVar55 != unaff_x24) goto joined_r0x00010127d0f4;
code_r0x00010127cdcc:
  goto LAB_10127d474;
code_r0x000101292bb4:
  if (!bVar31) goto LAB_101292bc0;
  puVar43 = (ulong *)0x1;
LAB_101292bf0:
  FUN_100e077ec(&stack0x00000050);
  while( true ) {
    bVar74 = (byte)in_stack_00000220;
    if ((int)puVar43 == 0) {
      if (unaff_x26 != (ulong *)0x8000000000000001) {
        *(ulong **)(unaff_x29 + -0xd0) = unaff_x26;
        *(ulong *)(unaff_x29 + -200) = CONCAT44(fStack0000000000000014,uStack0000000000000010);
        *(undefined **)(unaff_x29 + -0x88) = &UNK_108cadf95;
        *(undefined8 *)(unaff_x29 + -0x80) = 5;
        puVar45 = unaff_x29 + -0x88;
        bStack0000000000000050 = (byte)puVar45;
        cStack0000000000000051 = (char)((ulong)puVar45 >> 8);
        uStack0000000000000052 = (undefined6)((ulong)puVar45 >> 0x10);
        bStack0000000000000058 = 0xa0;
        uStack0000000000000059 = 0x100c7b3;
        uVar50 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000050);
        goto LAB_101293098;
      }
      FUN_100623670(&stack0x00000050,&stack0x00000220);
      unaff_x26 = (ulong *)CONCAT62(uStack0000000000000052,
                                    CONCAT11(cStack0000000000000051,bStack0000000000000050));
      if (unaff_x26 == (ulong *)0x8000000000000001) {
        unaff_x26 = (ulong *)0x8000000000000001;
        *(undefined8 *)(unaff_x29 + -0xd0) = 0x8000000000000001;
        *(ulong *)(unaff_x29 + -200) = CONCAT44(fStack0000000000000014,uStack0000000000000010);
        uVar50 = CONCAT71(uStack0000000000000059,bStack0000000000000058);
        goto LAB_101293098;
      }
      uStack0000000000000010 = (uint)CONCAT71(uStack0000000000000059,bStack0000000000000058);
      fStack0000000000000014 = (float)((uint7)uStack0000000000000059 >> 0x18);
      uVar50 = puVar58[2];
      uVar49 = puVar58[5];
      uVar56 = puVar58[4];
      *(ulong *)(unaff_x29 + -0xb8) = puVar58[3];
      *(ulong *)(unaff_x29 + -0xc0) = uVar50;
      *(ulong *)(unaff_x29 + -0xa8) = uVar49;
      *(ulong *)(unaff_x29 + -0xb0) = uVar56;
      uVar50 = puVar58[6];
      *(ulong *)(unaff_x29 + -0x98) = puVar58[7];
      *(ulong *)(unaff_x29 + -0xa0) = uVar50;
      *(ulong *)(unaff_x29 + -0x90) = puVar58[8];
      puVar52 = _uStack0000000000000028;
      unaff_x20 = in_stack_00000248;
    }
    else {
      in_stack_00000240 = unaff_x21;
      if ((int)puVar43 == 1) {
        if (unaff_x27 != (ulong *)0x8000000000000000) {
          *(ulong **)(unaff_x29 + -0xd0) = unaff_x26;
          *(ulong *)(unaff_x29 + -200) = CONCAT44(fStack0000000000000014,uStack0000000000000010);
          *(undefined **)(unaff_x29 + -0x88) = &UNK_108cb4cd2;
          *(undefined8 *)(unaff_x29 + -0x80) = 3;
          puVar45 = unaff_x29 + -0x88;
          bStack0000000000000050 = (byte)puVar45;
          cStack0000000000000051 = (char)((ulong)puVar45 >> 8);
          uStack0000000000000052 = (undefined6)((ulong)puVar45 >> 0x10);
          bStack0000000000000058 = 0xa0;
          uStack0000000000000059 = 0x100c7b3;
          uVar56 = 1;
          uVar50 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000050);
          if (unaff_x27 == (ulong *)0x0) goto LAB_101292e14;
          goto LAB_1012930a0;
        }
        if (bVar74 == 0x16) {
          *(ulong **)(unaff_x29 + -0xd0) = unaff_x26;
          *(ulong *)(unaff_x29 + -200) = CONCAT44(fStack0000000000000014,uStack0000000000000010);
          uVar50 = FUN_1088561c0(&UNK_108cde170,0x10);
          bVar74 = 0x16;
          goto LAB_1012930c0;
        }
        uVar50 = *in_stack_00000020;
        in_stack_00000018[1] = in_stack_00000020[1];
        *in_stack_00000018 = uVar50;
        uVar33 = *(undefined8 *)((long)in_stack_00000020 + 0xf);
        *(undefined8 *)((long)in_stack_00000018 + 0x17) =
             *(undefined8 *)((long)in_stack_00000020 + 0x17);
        *(undefined8 *)((long)in_stack_00000018 + 0xf) = uVar33;
        bStack0000000000000050 = bVar74;
        FUN_1004b62d4(unaff_x29 + -0x88,&stack0x00000050);
        unaff_x27 = *(ulong **)(unaff_x29 + -0x88);
        if (unaff_x27 == (ulong *)0x8000000000000000) {
          *(ulong **)(unaff_x29 + -0xd0) = unaff_x26;
          *(ulong *)(unaff_x29 + -200) = CONCAT44(fStack0000000000000014,uStack0000000000000010);
          uVar50 = *(ulong *)(unaff_x29 + -0x80);
          bVar74 = 0x16;
          goto LAB_1012930c0;
        }
        uVar33 = *(undefined8 *)(unaff_x29 + -0x80);
        uStack0000000000000000 = (undefined4)*(undefined8 *)(unaff_x29 + -0x78);
        uStack0000000000000004 = (undefined4)((ulong)*(undefined8 *)(unaff_x29 + -0x78) >> 0x20);
        uStack0000000000000008 = (undefined1)uVar33;
        uStack0000000000000009 = (undefined2)((ulong)uVar33 >> 8);
        uStack000000000000000b = (undefined5)((ulong)uVar33 >> 0x18);
        puVar52 = _uStack0000000000000028;
        bVar74 = 0x16;
      }
      else {
        if (bVar74 == 0x16) {
          *(ulong **)(unaff_x29 + -0xd0) = unaff_x26;
          *(ulong *)(unaff_x29 + -200) = CONCAT44(fStack0000000000000014,uStack0000000000000010);
          uVar50 = FUN_1088561c0(&UNK_108cde170,0x10);
          bVar74 = 0x16;
          goto LAB_101293098;
        }
        uVar50 = *in_stack_00000020;
        in_stack_00000018[1] = in_stack_00000020[1];
        *in_stack_00000018 = uVar50;
        uVar33 = *(undefined8 *)((long)in_stack_00000020 + 0xf);
        *(undefined8 *)((long)in_stack_00000018 + 0x17) =
             *(undefined8 *)((long)in_stack_00000020 + 0x17);
        *(undefined8 *)((long)in_stack_00000018 + 0xf) = uVar33;
        bStack0000000000000050 = bVar74;
        FUN_100e077ec(&stack0x00000050);
        puVar52 = _uStack0000000000000028;
        bVar74 = 0x16;
      }
    }
    do {
      puVar51 = in_stack_00000240;
      _uStack0000000000000028 = puVar52;
      if (puVar51 == unaff_x20) {
        *(ulong **)(unaff_x29 + -0xd0) = unaff_x26;
        *(ulong *)(unaff_x29 + -200) = CONCAT44(fStack0000000000000014,uStack0000000000000010);
        bVar17 = unaff_x26 == (ulong *)0x8000000000000001;
        if (bVar17) {
          bStack0000000000000050 = 0;
          cStack0000000000000051 = '\0';
          uStack0000000000000052 = 0x800000000000;
          unaff_x26 = (ulong *)0x8000000000000001;
        }
        else {
          in_stack_00000078 = *(ulong **)(unaff_x29 + -0xa8);
          in_stack_00000070 = *(ulong **)(unaff_x29 + -0xb0);
          in_stack_00000088 = *(ulong **)(unaff_x29 + -0x98);
          _cStack0000000000000080 = *(ulong **)(unaff_x29 + -0xa0);
          uVar33 = *(undefined8 *)(unaff_x29 + -0x90);
          bStack0000000000000090 = (byte)uVar33;
          bStack0000000000000091 = (byte)((ulong)uVar33 >> 8);
          uStack0000000000000092 = (undefined6)((ulong)uVar33 >> 0x10);
          uVar33 = *(undefined8 *)(unaff_x29 + -0xd0);
          in_stack_00000068 = *(ulong **)(unaff_x29 + -0xb8);
          _cStack0000000000000060 = *(ulong **)(unaff_x29 + -0xc0);
          bStack0000000000000058 = (byte)*(undefined8 *)(unaff_x29 + -200);
          uStack0000000000000059 = (undefined7)((ulong)*(undefined8 *)(unaff_x29 + -200) >> 8);
          bStack0000000000000050 = (byte)uVar33;
          cStack0000000000000051 = (char)((ulong)uVar33 >> 8);
          uStack0000000000000052 = (undefined6)((ulong)uVar33 >> 0x10);
        }
        uVar56 = (ulong)bVar17;
        if (unaff_x27 != (ulong *)0x8000000000000000) {
          in_stack_00000210 =
               CONCAT62(uStack0000000000000092,
                        CONCAT11(bStack0000000000000091,bStack0000000000000090));
          in_stack_000001d8 = (ulong *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
          in_stack_000001d0 =
               (ulong *)CONCAT62(uStack0000000000000052,
                                 CONCAT11(cStack0000000000000051,bStack0000000000000050));
          in_stack_000001e0 = _cStack0000000000000060;
          in_stack_000001e8 = in_stack_00000068;
          in_stack_000001f0 = in_stack_00000070;
          in_stack_000001f8 = in_stack_00000078;
          in_stack_00000200 = _cStack0000000000000080;
          in_stack_00000208 = in_stack_00000088;
          if (bVar74 != 0x16) {
            uVar56 = CONCAT44(uStack0000000000000004,uStack0000000000000000);
            uVar50 = CONCAT53(uStack000000000000000b,
                              CONCAT21(uStack0000000000000009,uStack0000000000000008));
            goto LAB_101292e88;
          }
          uVar56 = CONCAT44(uStack0000000000000004,uStack0000000000000000);
          uVar50 = CONCAT53(uStack000000000000000b,
                            CONCAT21(uStack0000000000000009,uStack0000000000000008));
          goto LAB_101292f60;
        }
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108cb4cd2;
        *(undefined8 *)(unaff_x29 + -0x68) = 3;
        *(undefined1 **)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0x80) = &DAT_100c7b3a0;
        uVar50 = FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x88);
        if (CONCAT62(uStack0000000000000052,CONCAT11(cStack0000000000000051,bStack0000000000000050))
            == -0x8000000000000000) goto LAB_101292e14;
        if ((in_stack_00000070 != (ulong *)0x0) && ((long)in_stack_00000070 * 9 != -0x11)) {
          _free(in_stack_00000068 + (-1 - (long)in_stack_00000070));
        }
        pcVar32 = (char *)&stack0x00000050;
        uVar33 = 0x101292e14;
        goto SUB_100cd7284;
      }
      unaff_x24 = puVar51 + 8;
      __ZN5serde7private2de19flat_map_take_entry17h78f9d33f25db0732E
                (&stack0x00000050,puVar51,in_stack_00000250,in_stack_00000258);
      bVar8 = bStack0000000000000050;
      puVar43 = (ulong *)(ulong)bStack0000000000000050;
      in_stack_00000240 = unaff_x24;
      unaff_x22 = in_stack_00000250;
      puVar55 = in_stack_00000258;
      puVar52 = _uStack0000000000000028;
    } while (bStack0000000000000050 == 0x16);
    unaff_x21 = puVar51 + 8;
    if (bVar74 != 0x16) {
      FUN_100e077ec(&stack0x00000220);
    }
    in_stack_00000220 = puVar58[4];
    piVar1 = (int *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
    in_stack_00000240 = unaff_x21;
    if (bVar8 < 0xd) {
      if (bVar8 == 1) {
        uVar40 = 1;
        if (cStack0000000000000051 != '\x01') {
          uVar40 = 2;
        }
        uVar60 = 0;
        if (cStack0000000000000051 != '\0') {
          uVar60 = uVar40;
        }
        puVar43 = (ulong *)(ulong)uVar60;
      }
      else {
        if (bVar8 != 4) {
          if (bVar8 == 0xc) {
            if (in_stack_00000068 == (ulong *)0x3) {
              uVar40 = 1;
              if ((short)*_cStack0000000000000060 != 0x7275 ||
                  *(char *)((long)_cStack0000000000000060 + 2) != 'i') {
                uVar40 = 2;
              }
              puVar43 = (ulong *)(ulong)uVar40;
            }
            else {
              if (in_stack_00000068 != (ulong *)0x5) goto LAB_101292b54;
              uVar40 = 2;
              if ((int)*_cStack0000000000000060 == 0x74656d5f &&
                  *(char *)((long)_cStack0000000000000060 + 4) == 'a') {
                uVar40 = 0;
              }
              puVar43 = (ulong *)(ulong)uVar40;
            }
            goto joined_r0x000101292b88;
          }
          goto LAB_10129325c;
        }
        uVar40 = 1;
        if (piVar1 != (int *)0x1) {
          uVar40 = 2;
        }
        uVar60 = 0;
        if (piVar1 != (int *)0x0) {
          uVar60 = uVar40;
        }
        puVar43 = (ulong *)(ulong)uVar60;
      }
      goto LAB_101292bf0;
    }
    if (bVar8 == 0xd) {
      if (_cStack0000000000000060 == (ulong *)0x3) {
        uVar40 = 1;
        if ((short)*piVar1 != 0x7275 || *(char *)((long)piVar1 + 2) != 'i') {
          uVar40 = 2;
        }
        puVar43 = (ulong *)(ulong)uVar40;
      }
      else {
        if (_cStack0000000000000060 != (ulong *)0x5) goto LAB_101292bc0;
        uVar40 = 2;
        if (*piVar1 == 0x74656d5f && (char)piVar1[1] == 'a') {
          uVar40 = 0;
        }
        puVar43 = (ulong *)(ulong)uVar40;
      }
      goto LAB_101292bf0;
    }
    if (bVar8 != 0xe) break;
    if (in_stack_00000068 == (ulong *)0x3) {
      if ((((char)*_cStack0000000000000060 != 'u') ||
          (*(char *)((long)_cStack0000000000000060 + 1) != 'r')) ||
         (*(char *)((long)_cStack0000000000000060 + 2) != 'i')) goto LAB_101292b54;
      puVar43 = (ulong *)0x1;
    }
    else if ((((in_stack_00000068 == (ulong *)0x5) && ((char)*_cStack0000000000000060 == '_')) &&
             ((*(char *)((long)_cStack0000000000000060 + 1) == 'm' &&
              ((*(char *)((long)_cStack0000000000000060 + 2) == 'e' &&
               (*(char *)((long)_cStack0000000000000060 + 3) == 't')))))) &&
            (*(char *)((long)_cStack0000000000000060 + 4) == 'a')) {
      puVar43 = (ulong *)0x0;
    }
    else {
LAB_101292b54:
      puVar43 = (ulong *)0x2;
    }
joined_r0x000101292b88:
    if (piVar1 != (int *)0x0) {
      _free();
    }
  }
  if (bVar8 != 0xf) {
LAB_10129325c:
    *(ulong **)(unaff_x29 + -0xd0) = unaff_x26;
    *(ulong *)(unaff_x29 + -200) = CONCAT44(fStack0000000000000014,uStack0000000000000010);
    uVar50 = FUN_108855b04(&stack0x00000050,unaff_x29 + -0x88,&UNK_10b20d6e0);
    bVar74 = (byte)in_stack_00000220;
LAB_101293098:
    if (((ulong)unaff_x27 & 0x7fffffffffffffff) == 0) {
LAB_1012930c0:
      uVar56 = 1;
    }
    else {
LAB_1012930a0:
      _free(CONCAT53(uStack000000000000000b,CONCAT21(uStack0000000000000009,uStack0000000000000008))
           );
      uVar56 = 1;
      unaff_x26 = *(ulong **)(unaff_x29 + -0xd0);
    }
LAB_101292e14:
    if ((((int)uVar56 != 0) && (unaff_x26 != (ulong *)0x8000000000000001)) &&
       (unaff_x26 != (ulong *)0x8000000000000000)) {
      lVar59 = *(long *)(unaff_x29 + -0xb0);
      if ((lVar59 != 0) && (lVar59 * 9 != -0x11)) {
        _free(*(long *)(unaff_x29 + -0xb8) + lVar59 * -8 + -8);
      }
      pcVar32 = unaff_x29 + -0xd0;
      uVar33 = 0x101292e60;
      goto SUB_100cd7284;
    }
    puVar43 = _uStack0000000000000028;
    if (bVar74 != 0x16) {
      unaff_x27 = (ulong *)0x8000000000000000;
LAB_101292e88:
      puVar52 = _uStack0000000000000028;
      FUN_100e077ec(&stack0x00000220);
      puVar43 = puVar52;
      if (unaff_x27 != (ulong *)0x8000000000000000) {
LAB_101292f60:
        puVar52[6] = (ulong)in_stack_000001e8;
        puVar52[5] = (ulong)in_stack_000001e0;
        puVar52[8] = (ulong)in_stack_000001f8;
        puVar52[7] = (ulong)in_stack_000001f0;
        puVar52[10] = (ulong)in_stack_00000208;
        puVar52[9] = (ulong)in_stack_00000200;
        puVar52[0xb] = in_stack_00000210;
        puVar52[4] = (ulong)in_stack_000001d8;
        puVar52[3] = (ulong)in_stack_000001d0;
        puVar52[0x11] = (ulong)in_stack_000001a8;
        puVar52[0x10] = (ulong)in_stack_000001a0;
        puVar52[0x13] = (ulong)in_stack_000001b8;
        puVar52[0x12] = (ulong)in_stack_000001b0;
        puVar52[0x14] = (ulong)in_stack_000001c0;
        puVar52[0xd] = (ulong)in_stack_00000188;
        puVar52[0xc] = (ulong)in_stack_00000180;
        puVar52[0xf] = (ulong)in_stack_00000198;
        puVar52[0xe] = (ulong)in_stack_00000190;
        *puVar52 = (ulong)unaff_x27;
        puVar52[1] = uVar50;
        puVar52[2] = uVar56;
        puVar58 = (ulong *)FUN_100d5c778(&stack0x00000148);
        in_stack_000000d8 = (ulong *)puVar52[0x11];
        in_stack_000000d0 = (ulong *)puVar52[0x10];
        in_stack_000000e8 = (ulong *)puVar52[0x13];
        in_stack_000000e0 = (ulong *)puVar52[0x12];
        _uStack00000000000000f0 = (ulong *)puVar52[0x14];
        uVar49 = puVar52[8];
        uStack0000000000000098 = (undefined1)puVar52[9];
        uStack0000000000000099 = (undefined7)(puVar52[9] >> 8);
        bStack0000000000000090 = (byte)uVar49;
        bStack0000000000000091 = (byte)(uVar49 >> 8);
        uStack0000000000000092 = (undefined6)(uVar49 >> 0x10);
        uStack00000000000000a8 = (undefined7)puVar52[0xb];
        uStack00000000000000af = (undefined1)(puVar52[0xb] >> 0x38);
        bStack00000000000000a0 = (byte)puVar52[10];
        uStack00000000000000a1 = (undefined7)(puVar52[10] >> 8);
        in_stack_000000b8 = (ulong *)puVar52[0xd];
        in_stack_000000c8 = (ulong *)puVar52[0xf];
        _cStack00000000000000c0 = (ulong *)puVar52[0xe];
        uStack00000000000000b0 = (undefined7)puVar52[0xc];
        uStack00000000000000b7 = (undefined1)(puVar52[0xc] >> 0x38);
        uVar49 = *puVar52;
        _cStack0000000000000060 = (ulong *)puVar52[2];
        bStack0000000000000058 = (byte)puVar52[1];
        uStack0000000000000059 = (undefined7)(puVar52[1] >> 8);
        bStack0000000000000050 = (byte)uVar49;
        cStack0000000000000051 = (char)(uVar49 >> 8);
        uStack0000000000000052 = (undefined6)(uVar49 >> 0x10);
        in_stack_00000078 = (ulong *)puVar52[5];
        in_stack_00000070 = (ulong *)puVar52[4];
        in_stack_00000088 = (ulong *)puVar52[7];
        _cStack0000000000000080 = (ulong *)puVar52[6];
        if ((long)_uStack0000000000000038 - (long)_cStack0000000000000030 == 0) {
          return puVar58;
        }
        *(long *)(unaff_x29 + -0xd0) = CONCAT44(fStack000000000000004c,in_stack_00000048);
        uVar49 = FUN_1087e422c(CONCAT44(fStack000000000000004c,in_stack_00000048) +
                               ((ulong)((long)_uStack0000000000000038 -
                                       (long)_cStack0000000000000030) >> 6),unaff_x29 + -0xd0,
                               &UNK_10b23a190);
        *puVar52 = 0x8000000000000000;
        puVar52[1] = uVar49;
        if ((CONCAT17(uStack00000000000000b7,uStack00000000000000b0) == -0x7fffffffffffffff) ||
           (CONCAT17(uStack00000000000000b7,uStack00000000000000b0) == -0x8000000000000000)) {
          puVar58 = (ulong *)FUN_100df1aa4(&stack0x00000050);
          return puVar58;
        }
        puVar43 = (ulong *)&stack0x00000050;
        if ((in_stack_000000d0 != (ulong *)0x0) && ((long)in_stack_000000d0 * 9 != -0x11)) {
          _free(in_stack_000000c8 + (-1 - (long)in_stack_000000d0));
        }
        pcVar32 = (char *)&stack0x000000b0;
        uVar33 = 0x1012931c8;
SUB_100cd7284:
        *(ulong **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(ulong **)((long)register0x00000008 + -0x38) = puVar55;
        *(ulong **)((long)register0x00000008 + -0x30) = unaff_x22;
        *(ulong *)((long)register0x00000008 + -0x28) = uVar50;
        *(ulong *)((long)register0x00000008 + -0x20) = uVar56;
        *(ulong **)((long)register0x00000008 + -0x18) = puVar43;
        *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = uVar33;
        unaff_x19 = *(ulong **)((long)pcVar32 + 8);
        lVar59 = *(ulong *)((long)pcVar32 + 0x10) + 1;
        puVar58 = (ulong *)pcVar32;
        puVar55 = unaff_x19;
        while (lVar59 = lVar59 + -1, lVar59 != 0) {
          if (*puVar55 != 0) {
            _free(puVar55[1]);
          }
          puVar58 = (ulong *)FUN_100de6690(puVar55 + 3);
          puVar55 = puVar55 + 0xd;
        }
        if (*(ulong *)pcVar32 == 0) {
          return puVar58;
        }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar58 = (ulong *)(*(code *)PTR__free_10b61b0a8)(unaff_x19);
        return puVar58;
      }
    }
    *puVar43 = 0x8000000000000000;
    puVar43[1] = uVar50;
    if ((in_stack_00000180 == (ulong *)0x8000000000000001) ||
       (in_stack_00000180 == (ulong *)0x8000000000000000)) {
      puVar58 = (ulong *)FUN_100d5c778(&stack0x00000148);
      lVar59 = CONCAT17(uStack0000000000000107,
                        CONCAT25(uStack0000000000000105,
                                 CONCAT14(uStack0000000000000104,
                                          CONCAT22(uStack0000000000000102,
                                                   CONCAT11(cStack0000000000000101,
                                                            bStack0000000000000100)))));
      uVar40 = (uint)unaff_x25 ^ 1;
      if (lVar59 == -0x7ffffffffffffffe) {
        uVar40 = 1;
      }
      if ((((uVar40 & 1) != 0) || (lVar59 == -0x7fffffffffffffff)) ||
         (lVar59 == -0x8000000000000000)) {
        return puVar58;
      }
      lVar59 = CONCAT71(uStack0000000000000121,uStack0000000000000120);
      if ((lVar59 != 0) && (lVar59 * 9 != -0x11)) {
        _free(CONCAT71(uStack0000000000000119,uStack0000000000000118) + lVar59 * -8 + -8);
      }
      pcVar32 = (char *)&stack0x00000100;
      uVar33 = 0x101292f5c;
    }
    else {
      if ((in_stack_000001a0 != (ulong *)0x0) && ((long)in_stack_000001a0 * 9 != -0x11)) {
        _free(in_stack_00000198 + (-1 - (long)in_stack_000001a0));
      }
      pcVar32 = (char *)&stack0x00000180;
      uVar33 = 0x101292eec;
    }
    goto SUB_100cd7284;
  }
  if (_cStack0000000000000060 != (ulong *)0x3) {
    if (((((_cStack0000000000000060 != (ulong *)0x5) || ((char)*piVar1 != '_')) ||
         (*(char *)((long)piVar1 + 1) != 'm')) ||
        ((*(char *)((long)piVar1 + 2) != 'e' || (*(char *)((long)piVar1 + 3) != 't')))) ||
       ((char)piVar1[1] != 'a')) goto LAB_101292bc0;
    puVar43 = (ulong *)0x0;
    goto LAB_101292bf0;
  }
  if (((char)*piVar1 != 'u') || (*(char *)((long)piVar1 + 1) != 'r')) {
LAB_101292bc0:
    puVar43 = (ulong *)0x2;
    goto LAB_101292bf0;
  }
  bVar31 = *(char *)((long)piVar1 + 2) == 'i';
  goto code_r0x000101292bb4;
code_r0x000101290ab0:
  puVar42[1] = uVar67;
  *puVar42 = (ulong)puVar43;
  uVar50 = unaff_x26[0xe];
  puVar42[3] = unaff_x26[0xf];
  puVar42[2] = uVar50;
  uVar50 = unaff_x26[0x10];
  puVar42[5] = unaff_x26[0x11];
  puVar42[4] = uVar50;
  uVar50 = unaff_x26[0x12];
  puVar42[7] = unaff_x26[0x13];
  puVar42[6] = uVar50;
  unaff_x25 = (ulong *)((long)unaff_x25 + 1);
  cVar75 = in_stack_000003f0;
LAB_101290ad4:
  func_0x000100f236cc(&stack0x000005b0,&stack0x000003f0);
  cVar76 = (char)in_stack_000005b0;
  in_stack_000003f0 = (char)puVar58;
  puVar55 = in_stack_000005b0;
  puVar43 = in_stack_000005b8;
  if (cVar76 == '\x18') {
LAB_101290c68:
    uVar40 = 1;
LAB_101290cf0:
    in_stack_000005b0 = (ulong *)0x5;
    FUN_100d5c778(&stack0x00000578);
    uVar40 = uVar40 ^ 1;
    if (unaff_x24 == (ulong *)0x8000000000000002) {
      uVar40 = 1;
    }
    if ((((uVar40 & 1) == 0) && (-0x7fffffffffffffff < (long)unaff_x24)) &&
       (unaff_x24 != (ulong *)0x0)) {
      _free(_cStack0000000000000030);
    }
    FUN_100d34830(&stack0x00000410);
    puVar52 = in_stack_000005b8;
    if (cVar75 != '\x16') {
      FUN_100e077ec(&stack0x000003f0);
    }
LAB_101290d40:
    if ((in_stack_000005b0 == (ulong *)0x5) ||
       (_memcpy(&stack0x00000098,&stack0x000002c8,0x108), in_stack_000005b0 == (ulong *)0x6)) {
      in_stack_00000078 =
           (ulong *)CONCAT62(uStack0000000000000052,
                             CONCAT11(cStack0000000000000051,bStack0000000000000050));
      puVar35 = (undefined8 *)CONCAT44(fStack0000000000000014,uStack0000000000000010);
      _cStack0000000000000060 = unaff_x20;
LAB_101290f6c:
      puVar43 = in_stack_00000088;
      puVar58 = in_stack_00000020;
      puVar55 = in_stack_00000018;
      *puVar35 = 0x8000000000000000;
      puVar35[1] = puVar52;
      puVar51 = (ulong *)FUN_100ca97fc(in_stack_00000088,
                                       CONCAT62(uStack0000000000000092,
                                                CONCAT11(bStack0000000000000091,
                                                         bStack0000000000000090)));
      if (_cStack0000000000000080 != (ulong *)0x0) {
        puVar51 = (ulong *)_free(puVar43);
      }
    }
    else {
      in_stack_000001a0 = in_stack_000005b0;
      in_stack_000001a8 = puVar52;
      _memcpy(&stack0x000001b0,&stack0x00000098,0x108);
      puVar52 = (ulong *)CONCAT62(uStack0000000000000092,
                                  CONCAT11(bStack0000000000000091,bStack0000000000000090));
      if (puVar52 == _cStack0000000000000080) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h6c233abdf44c8d9dE(&stack0x00000080);
      }
      puVar51 = (ulong *)_memcpy(in_stack_00000088 + (long)puVar52 * 0x23,&stack0x000001a0,0x118);
      pcVar32 = (char *)((long)puVar52 + 1);
      bStack0000000000000090 = (byte)pcVar32;
      bStack0000000000000091 = (byte)((ulong)pcVar32 >> 8);
      uStack0000000000000092 = (undefined6)((ulong)pcVar32 >> 0x10);
      if (unaff_x20 == (ulong *)CONCAT44(fStack000000000000004c,in_stack_00000048)) {
        bStack0000000000000050 = (byte)uStack0000000000000000;
        cStack0000000000000051 = (char)((uint)uStack0000000000000000 >> 8);
        uStack0000000000000052 =
             (undefined6)(CONCAT44(uStack0000000000000004,uStack0000000000000000) >> 0x10);
        puVar52 = (ulong *)CONCAT44(fStack000000000000004c,in_stack_00000048);
      }
      else {
        puVar52 = unaff_x20 + 4;
        uVar50 = *unaff_x20;
        if ((char)uVar50 != '\x16') {
          uVar49 = *(ulong *)((long)unaff_x20 + 9);
          uVar56 = *(ulong *)((long)unaff_x20 + 1);
          uVar68 = unaff_x20[2];
          *(ulong *)((long)_bStack0000000000000040 + 0x17) = unaff_x20[3];
          *(ulong *)((long)_bStack0000000000000040 + 0xf) = uVar68;
          _bStack0000000000000040[1] = uVar49;
          *_bStack0000000000000040 = uVar56;
          uVar56 = CONCAT62(uStack0000000000000052,
                            CONCAT11(cStack0000000000000051,bStack0000000000000050)) + 1;
          bStack0000000000000050 = (byte)uVar56;
          cStack0000000000000051 = (char)(uVar56 >> 8);
          uStack0000000000000052 = (undefined6)(uVar56 >> 0x10);
          unaff_x20 = puVar52;
          if ((char)uVar50 != '\x15') {
            _cStack0000000000000060 = puVar52;
            in_stack_00000078 = (ulong *)uVar56;
            puVar52 = (ulong *)FUN_108855b04(&stack0x000003d0,unaff_x29 + -0x61,&UNK_10b209d00);
            puVar35 = (undefined8 *)CONCAT44(fStack0000000000000014,uStack0000000000000010);
            goto LAB_101290f6c;
          }
          in_stack_00000428 = in_stack_000003e0 + in_stack_000003e8 * 0x40;
          in_stack_00000430 = (ulong *)0x0;
          in_stack_00000578 = (ulong *)0x0;
          in_stack_00000580 = 8;
          unaff_x25 = (ulong *)0x0;
          unaff_x24 = (ulong *)0x8000000000000002;
          cVar75 = in_stack_000003f0;
          in_stack_00000418 = in_stack_000003e0;
          in_stack_000005b0 = puVar55;
          in_stack_000005b8 = puVar43;
          goto LAB_101290ad4;
        }
      }
      in_stack_00000078 =
           (ulong *)CONCAT62(uStack0000000000000052,
                             CONCAT11(cStack0000000000000051,bStack0000000000000050));
      plVar46 = (long *)CONCAT44(fStack0000000000000014,uStack0000000000000010);
      plVar46[1] = (long)in_stack_00000088;
      *plVar46 = (long)_cStack0000000000000080;
      plVar46[2] = (long)pcVar32;
      lVar59 = *plVar46;
      unaff_x20 = puVar52;
      puVar58 = in_stack_00000020;
      puVar55 = in_stack_00000018;
      _cStack0000000000000060 = puVar52;
      if (lVar59 != -0x8000000000000000) {
        puVar58 = (ulong *)plVar46[1];
        lVar63 = plVar46[2];
        lVar36 = FUN_100fbc738(&stack0x00000058);
        if (lVar36 == 0) {
          return (ulong *)0x0;
        }
        *plVar46 = -0x8000000000000000;
        plVar46[1] = lVar36;
        puVar51 = (ulong *)FUN_100ca97fc(puVar58,lVar63);
        puVar55 = (ulong *)lVar59;
        goto joined_r0x0001012909ac;
      }
    }
    lVar59 = ((ulong)(CONCAT44(fStack000000000000004c,in_stack_00000048) - (long)unaff_x20) >> 5) +
             1;
    while (lVar59 = lVar59 + -1, lVar59 != 0) {
      puVar51 = (ulong *)FUN_100e077ec(unaff_x20);
      unaff_x20 = unaff_x20 + 4;
    }
joined_r0x0001012909ac:
    if (puVar55 != (ulong *)0x0) {
      puVar51 = (ulong *)_free(puVar58);
    }
    return puVar51;
  }
  uVar50 = *unaff_x19;
  *(undefined4 *)((long)unaff_x26 + 0x5b) = *(undefined4 *)((long)unaff_x19 + 3);
  uVar56 = unaff_x27[2];
  unaff_x26[9] = unaff_x27[3];
  unaff_x26[8] = uVar56;
  if (cVar76 == '\x16') {
    if (unaff_x24 != (ulong *)0x8000000000000002) {
      *(undefined **)(unaff_x29 + -0x90) = &UNK_108cb4be5;
      *(undefined8 *)(unaff_x29 + -0x88) = 0xb;
      in_stack_000005b8 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000005b0);
      puVar55 = unaff_x21;
      puVar43 = (ulong *)&DAT_100c7b3a0;
      goto LAB_101290c68;
    }
    if (cVar75 == '\x16') {
      in_stack_00000078 =
           (ulong *)CONCAT62(uStack0000000000000052,
                             CONCAT11(cStack0000000000000051,bStack0000000000000050));
      _cStack0000000000000060 = unaff_x20;
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto LAB_101291050;
    }
    _uStack0000000000000028[1] =
         CONCAT17(uStack00000000000000ff,
                  CONCAT25(uStack00000000000000fd,
                           CONCAT41(uStack00000000000000f9,bStack00000000000000f8)));
    *_uStack0000000000000028 = (ulong)_uStack00000000000000f0;
    *(ulong *)((long)_uStack0000000000000028 + 0x17) =
         CONCAT71(uStack0000000000000108,uStack0000000000000107);
    *(ulong *)((long)_uStack0000000000000028 + 0xf) =
         CONCAT26(uStack0000000000000105,
                  CONCAT15(uStack0000000000000104,
                           CONCAT23(uStack0000000000000102,
                                    CONCAT12(cStack0000000000000101,
                                             CONCAT11(bStack0000000000000100,uStack00000000000000ff)
                                            ))));
    unaff_x29[-0xb0] = cVar75;
    if (cVar75 == '\x10') {
LAB_101290be4:
      FUN_100e077ec(unaff_x29 + -0xb0);
      unaff_x24 = (ulong *)0x8000000000000001;
    }
    else {
      if (cVar75 == '\x11') {
        puVar52 = *(ulong **)(unaff_x29 + -0xa8);
        uVar50 = *puVar52;
        unaff_x26[0x2f] = puVar52[1];
        unaff_x26[0x2e] = uVar50;
        uVar50 = puVar52[2];
        unaff_x26[0x31] = puVar52[3];
        unaff_x26[0x30] = uVar50;
        FUN_1014239e4(&stack0x000005b0,unaff_x29 + -0x90);
        _free(puVar52);
      }
      else {
        if (cVar75 == '\x12') goto LAB_101290be4;
        FUN_1014239e4(&stack0x000005b0,unaff_x29 + -0xb0);
      }
      unaff_x24 = in_stack_000005b0;
      if (in_stack_000005b0 == (ulong *)0x8000000000000002) {
        uVar40 = 1;
        unaff_x24 = (ulong *)0x8000000000000002;
        cVar75 = in_stack_000003f0;
        goto LAB_101290cf0;
      }
    }
    uVar50 = unaff_x27[2];
    uVar49 = unaff_x27[5];
    uVar56 = unaff_x27[4];
    unaff_x26[1] = unaff_x27[3];
    *unaff_x26 = uVar50;
    unaff_x26[3] = uVar49;
    unaff_x26[2] = uVar56;
    _cStack0000000000000030 = in_stack_000005b8;
    cVar75 = in_stack_000003f0;
    in_stack_000005b0 = unaff_x24;
    goto LAB_101290ad4;
  }
  if (cVar76 == '\x17') {
    _uStack0000000000000038 =
         (ulong *)(ulong)CONCAT14(unaff_x24 == (ulong *)0x8000000000000002,uStack0000000000000038);
    if (unaff_x24 == (ulong *)0x8000000000000002) {
      puVar52 = (ulong *)0x8000000000000001;
    }
    else {
      unaff_x26[0x2f] = unaff_x26[1];
      unaff_x26[0x2e] = *unaff_x26;
      unaff_x26[0x31] = unaff_x26[3];
      unaff_x26[0x30] = unaff_x26[2];
      puVar52 = unaff_x24;
    }
    FUN_100ec901c(&stack0x000005b0,in_stack_00000580,unaff_x25);
    if (in_stack_000005b0 == (ulong *)0x5) {
      if ((-0x7fffffffffffffff < (long)puVar52) && (puVar52 != (ulong *)0x0)) {
        _free(_cStack0000000000000030);
      }
      uVar40 = uStack000000000000003c;
      goto LAB_101290cf0;
    }
    uVar50 = unaff_x26[0x2e];
    uVar49 = unaff_x26[0x31];
    uVar56 = unaff_x26[0x30];
    puVar52 = (ulong *)CONCAT53(uStack000000000000000b,
                                CONCAT21(uStack0000000000000009,uStack0000000000000008));
    puVar52[1] = unaff_x26[0x2f];
    *puVar52 = uVar50;
    puVar52[3] = uVar49;
    puVar52[2] = uVar56;
    FUN_100d5c778(&stack0x00000578);
    _memcpy(&stack0x00000438,&stack0x000002b8,0x118);
    FUN_100d34830(&stack0x00000410);
    if (in_stack_00000428 == in_stack_00000418) {
      puVar51 = (ulong *)0x0;
    }
    else {
      puVar51 = (ulong *)FUN_1087e422c((char *)((long)in_stack_00000430 +
                                               ((ulong)(in_stack_00000428 - in_stack_00000418) >> 6)
                                               ),&stack0x000005b0,&UNK_10b23a190);
      puVar55 = in_stack_00000430;
    }
    if (cVar75 != '\x16') {
      FUN_100e077ec(&stack0x000003f0);
    }
    puVar52 = in_stack_000005b8;
    if (puVar51 != (ulong *)0x0) {
      in_stack_000005b0 = (ulong *)0x5;
      FUN_100df8370(&stack0x00000438);
      puVar52 = puVar51;
      if ((-0x7fffffffffffffff < in_stack_00000520) && (in_stack_00000520 != 0)) {
        _free(in_stack_00000528);
      }
    }
    goto LAB_101290d40;
  }
  *(int *)unaff_x22 = (int)uVar50;
  *(undefined4 *)((long)unaff_x22 + 3) = *(undefined4 *)((long)unaff_x26 + 0x5b);
  uVar50 = unaff_x26[8];
  unaff_x21[3] = unaff_x26[9];
  unaff_x21[2] = uVar50;
  unaff_x29[-0x90] = cVar76;
  *(ulong **)(unaff_x29 + -0x88) = in_stack_000005b8;
  if (cVar75 == '\x16') {
    in_stack_00000078 =
         (ulong *)CONCAT62(uStack0000000000000052,
                           CONCAT11(cStack0000000000000051,bStack0000000000000050));
    _cStack0000000000000060 = unaff_x20;
    func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101291050:
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x101291054);
    (*pcVar12)();
  }
  *(undefined4 *)((long)unaff_x27 + 0x21) = uStack00000000000000f0;
  *(undefined4 *)((long)unaff_x27 + 0x24) = stack0x000000f3;
  unaff_x27[7] = in_stack_00000408;
  unaff_x27[6] = in_stack_00000400;
  unaff_x26[0xd] = unaff_x26[0x2f];
  unaff_x26[0xc] = unaff_x26[0x2e];
  unaff_x26[0xf] = unaff_x26[0x31];
  unaff_x26[0xe] = unaff_x26[0x30];
  if (unaff_x25 == in_stack_00000578) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&stack0x00000578);
  }
  puVar42 = (ulong *)(in_stack_00000580 + (long)unaff_x25 * 0x40);
  uVar67 = unaff_x26[0xd];
  puVar43 = (ulong *)unaff_x26[0xc];
  goto code_r0x000101290ab0;
code_r0x00010127b444:
  _cStack0000000000000060 = (ulong *)CONCAT71(uStack00000000000000b0,uStack00000000000000af);
  uVar56 = CONCAT71(uStack0000000000000059,bStack0000000000000058);
  uVar50 = CONCAT62(uStack0000000000000052,CONCAT11(cStack0000000000000051,bStack0000000000000050));
  *(ulong **)(unaff_x29 + -0x90) = _cStack0000000000000060;
  *(ulong *)(unaff_x29 + -0xa8) = CONCAT44(fStack000000000000004c,in_stack_00000048);
  *(ulong **)(unaff_x29 + -0xb0) = _bStack0000000000000040;
  *(ulong *)(unaff_x29 + -0x98) = uVar56;
  *(ulong *)(unaff_x29 + -0xa0) = uVar50;
  puVar65 = &UNK_10127b460;
  lVar59 = FUN_100fbc738(&stack0x00000110);
  uVar53 = extraout_x15_06;
  if (lVar59 != 0) {
    in_stack_00000048 = (uint)lVar59;
    fStack000000000000004c = (float)((ulong)lVar59 >> 0x20);
    _bStack0000000000000040 = (ulong *)CONCAT71(uStack0000000000000041,2);
    puVar42 = (ulong *)(unaff_x29 + -0xb0);
code_r0x00010127ae4c:
    puVar65 = &UNK_10127ae54;
    FUN_100e077ec((ulong)puVar42 | 8);
    uVar53 = extraout_x15_03;
  }
  goto LAB_10127ad0c;
code_r0x00010127de68:
  bStack00000000000000f8 = (byte)puVar58;
  uStack00000000000000f9 = (undefined4)((ulong)puVar58 >> 8);
  uStack00000000000000fd = (undefined2)((ulong)puVar58 >> 0x28);
  uStack00000000000000ff = (undefined1)((ulong)puVar58 >> 0x38);
  _cStack00000000000000c0 = (ulong *)CONCAT71(uStack00000000000000c1,0x16);
  bStack0000000000000100 = 0;
  cStack0000000000000101 = 0;
  uStack0000000000000102 = 0;
  uStack0000000000000104 = 0;
  uStack0000000000000105 = 0;
  uStack0000000000000107 = 0;
  uVar40 = (uint)unaff_x27;
  in_stack_000000e0 = puVar42;
  in_stack_000000e8 = puVar42;
  _uStack00000000000000f0 = puVar51;
  if (puVar52 == (ulong *)0x0) {
LAB_10127e230:
    *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61018;
    *(undefined8 *)(unaff_x29 + -0x88) = 4;
    *(undefined1 **)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
    *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
    puVar52 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0x78);
    puVar43 = unaff_x24;
LAB_10127e26c:
    puVar55 = (ulong *)FUN_100d34830(&stack0x000000e0);
    if (cStack00000000000000c0 != '\x16') {
      puVar55 = (ulong *)FUN_100e077ec(&stack0x000000c0);
    }
joined_r0x00010127e430:
    uVar50 = 0x8000000000000000;
    unaff_x24 = puVar43;
  }
  else {
    _uStack0000000000000028 = (ulong *)CONCAT44((uint)unaff_x27,uStack0000000000000028);
    puVar55 = (ulong *)0x0;
    in_stack_00000018 = (ulong *)(((ulong)(puVar48 + -8) >> 6) + 1);
    uVar50 = 0x8000000000000000;
    do {
      puVar43 = puVar42 + 8;
      bVar74 = (byte)*puVar42;
      unaff_x24 = puVar43;
      puVar52 = puVar55;
      if (bVar74 == 0x16) break;
      unaff_x29[-0x78] = bVar74;
      uVar56 = puVar42[2];
      *(ulong *)((long)unaff_x20 + 0x17) = puVar42[3];
      *(ulong *)((long)unaff_x20 + 0xf) = uVar56;
      uVar56 = *(ulong *)((long)puVar42 + 1);
      unaff_x20[1] = *(ulong *)((long)puVar42 + 9);
      *unaff_x20 = uVar56;
      in_stack_000000c8 = (ulong *)puVar42[5];
      _cStack00000000000000c0 = (ulong *)puVar42[4];
      in_stack_000000d8 = (ulong *)puVar42[7];
      in_stack_000000d0 = (ulong *)puVar42[6];
      piVar1 = *(int **)(unaff_x29 + -0x70);
      piVar2 = *(int **)(unaff_x29 + -0x68);
      if (bVar74 < 0xd) {
        if (bVar74 != 1) {
          if (bVar74 == 4) {
            bVar17 = piVar1 == (int *)0x0;
            goto LAB_10127e00c;
          }
          if (bVar74 == 0xc) {
            if (*(long *)(unaff_x29 + -0x60) == 4) {
              iVar41 = *piVar2;
              unaff_x25 = _uStack0000000000000038;
              if (piVar1 != (int *)0x0) {
                _free();
                unaff_x25 = _uStack0000000000000038;
              }
              _uStack0000000000000038 = unaff_x25;
              if (iVar41 == 0x656d616e) goto LAB_10127e084;
            }
            else if (piVar1 != (int *)0x0) {
              _free();
            }
            goto LAB_10127e024;
          }
LAB_10127e3bc:
          pcVar32 = (char *)((long)puVar55 + 1);
          bStack0000000000000100 = (byte)pcVar32;
          cStack0000000000000101 = (char)((ulong)pcVar32 >> 8);
          uStack0000000000000102 = (undefined2)((ulong)pcVar32 >> 0x10);
          uStack0000000000000104 = (undefined1)((ulong)pcVar32 >> 0x20);
          uStack0000000000000105 = (undefined2)((ulong)pcVar32 >> 0x28);
          uStack0000000000000107 = (undefined1)((ulong)pcVar32 >> 0x38);
          in_stack_000000e8 = puVar43;
          puVar52 = (ulong *)FUN_108855b04(unaff_x29 + -0x78,unaff_x29 + -0x90,&UNK_10b20fec0);
          uVar50 = uVar50 & 0x7fffffffffffffff;
          uVar40 = uStack000000000000002c;
          goto joined_r0x00010127e3e8;
        }
        bVar17 = unaff_x29[-0x77] == '\0';
LAB_10127e00c:
        bVar17 = !bVar17;
LAB_10127e018:
        FUN_100e077ec(unaff_x29 + -0x78);
LAB_10127e020:
        if (!bVar17) goto LAB_10127e084;
LAB_10127e024:
        cVar75 = cStack00000000000000c0;
        _cStack00000000000000c0 = (ulong *)CONCAT71(uStack00000000000000c1,0x16);
        if (cVar75 == '\x16') {
          pcVar32 = (char *)((long)puVar55 + 1);
          bStack0000000000000100 = (byte)pcVar32;
          cStack0000000000000101 = (char)((ulong)pcVar32 >> 8);
          uStack0000000000000102 = (undefined2)((ulong)pcVar32 >> 0x10);
          uStack0000000000000104 = (undefined1)((ulong)pcVar32 >> 0x20);
          uStack0000000000000105 = (undefined2)((ulong)pcVar32 >> 0x28);
          uStack0000000000000107 = (undefined1)((ulong)pcVar32 >> 0x38);
          _cStack0000000000000080 = unaff_x19;
          in_stack_000000e8 = puVar43;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto LAB_10127e640;
        }
        uVar56 = *unaff_x25;
        unaff_x20[1] = unaff_x25[1];
        *unaff_x20 = uVar56;
        uVar33 = *(undefined8 *)((long)unaff_x25 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x25 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar33;
        unaff_x29[-0x78] = cVar75;
        FUN_100e077ec(unaff_x29 + -0x78);
      }
      else {
        if (bVar74 == 0xd) {
          if (piVar2 == (int *)0x4) {
            bVar17 = *piVar1 == 0x656d616e;
            goto LAB_10127e00c;
          }
LAB_10127e014:
          bVar17 = true;
          goto LAB_10127e018;
        }
        if (bVar74 != 0xe) {
          if (bVar74 != 0xf) goto LAB_10127e3bc;
          if ((((piVar2 != (int *)0x4) || ((char)*piVar1 != 'n')) ||
              (*(char *)((long)piVar1 + 1) != 'a')) || (*(char *)((long)piVar1 + 2) != 'm'))
          goto LAB_10127e014;
          bVar17 = *(char *)((long)piVar1 + 3) == 'e';
          goto LAB_10127e00c;
        }
        if (((*(long *)(unaff_x29 + -0x60) == 4) && ((char)*piVar2 == 'n')) &&
           ((*(char *)((long)piVar2 + 1) == 'a' && (*(char *)((long)piVar2 + 2) == 'm')))) {
          bVar17 = *(char *)((long)piVar2 + 3) != 'e';
        }
        else {
          bVar17 = true;
        }
        if (piVar1 == (int *)0x0) goto LAB_10127e020;
        _free();
        if (bVar17) goto LAB_10127e024;
LAB_10127e084:
        if (uVar50 != 0x8000000000000000) {
          pcVar32 = (char *)((long)puVar55 + 1);
          bStack0000000000000100 = (byte)pcVar32;
          cStack0000000000000101 = (char)((ulong)pcVar32 >> 8);
          uStack0000000000000102 = (undefined2)((ulong)pcVar32 >> 0x10);
          uStack0000000000000104 = (undefined1)((ulong)pcVar32 >> 0x20);
          uStack0000000000000105 = (undefined2)((ulong)pcVar32 >> 0x28);
          uStack0000000000000107 = (undefined1)((ulong)pcVar32 >> 0x38);
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61018;
          *(undefined8 *)(unaff_x29 + -0x88) = 4;
          *(undefined1 **)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
          in_stack_000000e8 = puVar43;
          puVar52 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
          uVar40 = uStack000000000000002c;
joined_r0x00010127e3e8:
          if (uVar50 != 0) {
            _free(CONCAT71(uStack0000000000000059,bStack0000000000000058));
          }
          goto LAB_10127e26c;
        }
        cVar75 = cStack00000000000000c0;
        _cStack00000000000000c0 = (ulong *)CONCAT71(uStack00000000000000c1,0x16);
        if (cVar75 == '\x16') {
          pcVar32 = (char *)((long)puVar55 + 1);
          bStack0000000000000100 = (byte)pcVar32;
          cStack0000000000000101 = (char)((ulong)pcVar32 >> 8);
          uStack0000000000000102 = (undefined2)((ulong)pcVar32 >> 0x10);
          uStack0000000000000104 = (undefined1)((ulong)pcVar32 >> 0x20);
          uStack0000000000000105 = (undefined2)((ulong)pcVar32 >> 0x28);
          uStack0000000000000107 = (undefined1)((ulong)pcVar32 >> 0x38);
          _cStack0000000000000080 = unaff_x19;
          in_stack_000000e8 = puVar43;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_10127e640:
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10127e644);
          (*pcVar12)();
        }
        uVar50 = *unaff_x25;
        unaff_x20[1] = unaff_x25[1];
        *unaff_x20 = uVar50;
        uVar33 = *(undefined8 *)((long)unaff_x25 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x25 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar33;
        unaff_x29[-0x78] = cVar75;
        FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
        uVar50 = *(ulong *)(unaff_x29 + -0x90);
        puVar52 = *(ulong **)(unaff_x29 + -0x88);
        bStack0000000000000058 = (byte)puVar52;
        uStack0000000000000059 = (undefined7)((ulong)puVar52 >> 8);
        if (uVar50 == 0x8000000000000000) {
          pcVar32 = (char *)((long)puVar55 + 1);
          bStack0000000000000100 = (byte)pcVar32;
          cStack0000000000000101 = (char)((ulong)pcVar32 >> 8);
          uStack0000000000000102 = (undefined2)((ulong)pcVar32 >> 0x10);
          uStack0000000000000104 = (undefined1)((ulong)pcVar32 >> 0x20);
          uStack0000000000000105 = (undefined2)((ulong)pcVar32 >> 0x28);
          uStack0000000000000107 = (undefined1)((ulong)pcVar32 >> 0x38);
          uVar40 = uStack000000000000002c;
          in_stack_000000e8 = puVar43;
          goto LAB_10127e26c;
        }
        uVar33 = *(undefined8 *)(unaff_x29 + -0x80);
        bStack0000000000000050 = (byte)uVar33;
        cStack0000000000000051 = (char)((ulong)uVar33 >> 8);
        uStack0000000000000052 = (undefined6)((ulong)uVar33 >> 0x10);
      }
      puVar55 = (ulong *)((long)puVar55 + 1);
      unaff_x24 = puVar58;
      puVar52 = in_stack_00000018;
      puVar42 = puVar43;
    } while (puVar43 != puVar58);
    bStack0000000000000100 = (byte)puVar52;
    cStack0000000000000101 = (char)((ulong)puVar52 >> 8);
    uStack0000000000000102 = (undefined2)((ulong)puVar52 >> 0x10);
    uStack0000000000000104 = (undefined1)((ulong)puVar52 >> 0x20);
    uStack0000000000000105 = (undefined2)((ulong)puVar52 >> 0x28);
    uStack0000000000000107 = (undefined1)((ulong)puVar52 >> 0x38);
    uVar40 = uStack000000000000002c;
    in_stack_000000e8 = unaff_x24;
    if (uVar50 == 0x8000000000000000) goto LAB_10127e230;
    puVar55 = (ulong *)FUN_100d34830(&stack0x000000e0);
    if (puVar58 != unaff_x24) {
      *(ulong **)(unaff_x29 + -0x78) = puVar52;
      puVar52 = (ulong *)FUN_1087e422c((char *)(((ulong)((long)puVar58 - (long)unaff_x24) >> 6) +
                                               (long)puVar52),unaff_x29 + -0x78,&UNK_10b23a190);
      puVar43 = (ulong *)CONCAT62(uStack0000000000000052,
                                  CONCAT11(cStack0000000000000051,bStack0000000000000050));
      puVar55 = puVar52;
      if (uVar50 != 0) {
        puVar55 = (ulong *)_free(CONCAT71(uStack0000000000000059,bStack0000000000000058));
      }
      goto joined_r0x00010127e430;
    }
    puVar52 = (ulong *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
    unaff_x24 = (ulong *)CONCAT62(uStack0000000000000052,
                                  CONCAT11(cStack0000000000000051,bStack0000000000000050));
  }
  if ((uVar40 & 0x1e) != 0x14) {
    puVar55 = (ulong *)FUN_100e077ec(&stack0x000000a0);
  }
LAB_10127e300:
  if ((long)uVar50 < -0x7ffffffffffffffe) {
    *(undefined8 *)CONCAT44(fStack0000000000000014,uStack0000000000000010) = 0x8000000000000000;
    ((undefined8 *)CONCAT44(fStack0000000000000014,uStack0000000000000010))[1] = puVar52;
    lVar63 = CONCAT62(uStack0000000000000092,CONCAT11(bStack0000000000000091,bStack0000000000000090)
                     );
    lVar59 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
    _cStack0000000000000080 = unaff_x19;
    puVar58 = unaff_x21;
    goto joined_r0x00010127e450;
  }
  puVar58 = (ulong *)CONCAT71(uStack0000000000000099,uStack0000000000000098);
  if (puVar58 == in_stack_00000088) {
    puVar55 = (ulong *)func_0x0001088bac74(&stack0x00000088);
  }
  puVar43 = (ulong *)(CONCAT62(uStack0000000000000092,
                               CONCAT11(bStack0000000000000091,bStack0000000000000090)) +
                     (long)puVar58 * 0x18);
  *puVar43 = uVar50;
  puVar43[1] = (ulong)puVar52;
  puVar43[2] = (ulong)unaff_x24;
  pcVar32 = (char *)((long)puVar58 + 1);
  uStack0000000000000098 = SUB81(pcVar32,0);
  uStack0000000000000099 = (undefined7)((ulong)pcVar32 >> 8);
  if (unaff_x21 == (ulong *)CONCAT44(fStack000000000000004c,in_stack_00000048)) {
    unaff_x19 = (ulong *)CONCAT53(uStack000000000000000b,
                                  CONCAT21(uStack0000000000000009,uStack0000000000000008));
    puVar58 = (ulong *)CONCAT44(fStack000000000000004c,in_stack_00000048);
LAB_10127e484:
    plVar46 = (long *)CONCAT44(fStack0000000000000014,uStack0000000000000010);
    plVar46[1] = CONCAT62(uStack0000000000000092,
                          CONCAT11(bStack0000000000000091,bStack0000000000000090));
    *plVar46 = (long)in_stack_00000088;
    plVar46[2] = (long)pcVar32;
    lVar59 = *plVar46;
    _cStack0000000000000080 = unaff_x19;
    if (lVar59 != -0x8000000000000000) {
      _cStack0000000000000030 = (ulong *)plVar46[1];
      lVar63 = plVar46[2];
      puVar58 = (ulong *)FUN_100fbc738(&stack0x00000060);
      if (puVar58 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      *plVar46 = -0x8000000000000000;
      plVar46[1] = (long)puVar58;
      if (lVar63 != 0) {
        puVar55 = _cStack0000000000000030 + 1;
        do {
          if (puVar55[-1] != 0) {
            puVar58 = (ulong *)_free(*puVar55);
          }
          puVar55 = puVar55 + 3;
          lVar63 = lVar63 + -1;
        } while (lVar63 != 0);
      }
      if (lVar59 == 0) {
        return puVar58;
      }
      goto LAB_10127e544;
    }
    goto LAB_10127e4b4;
  }
  puVar58 = unaff_x21 + 4;
  bVar74 = (byte)*unaff_x21;
  if (bVar74 == 0x16) goto LAB_10127e484;
  uVar56 = *(ulong *)((long)unaff_x21 + 9);
  uVar50 = *(ulong *)((long)unaff_x21 + 1);
  uVar49 = unaff_x21[2];
  *(ulong *)((long)_bStack0000000000000040 + 0x17) = unaff_x21[3];
  *(ulong *)((long)_bStack0000000000000040 + 0xf) = uVar49;
  _bStack0000000000000040[1] = uVar56;
  *_bStack0000000000000040 = uVar50;
  unaff_x19 = (ulong *)((long)unaff_x19 + 1);
  unaff_x21 = puVar58;
  bStack00000000000000a0 = bVar74;
  if (bVar74 == 0x14) {
    bStack0000000000000058 = (byte)unaff_x19;
    uStack0000000000000059 = (undefined7)((ulong)unaff_x19 >> 8);
    unaff_x24 = (ulong *)CONCAT17(uStack00000000000000af,uStack00000000000000a8);
    puVar43 = (ulong *)CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
    puVar58 = puVar43 + (long)in_stack_000000b8 * 4;
    in_stack_000000e0 = (ulong *)0x0;
    puVar51 = puVar43;
    _cStack00000000000000c0 = puVar43;
    in_stack_000000d0 = unaff_x24;
    in_stack_000000d8 = puVar58;
    if (in_stack_000000b8 == (ulong *)0x0) {
LAB_10127e124:
      in_stack_000000c8 = puVar51;
      puVar55 = (ulong *)FUN_1087e422c(0,&UNK_10b231a38,&UNK_10b20a590);
      puVar52 = puVar55;
LAB_10127e140:
      lVar59 = ((ulong)((long)puVar58 - (long)puVar51) >> 5) + 1;
      while (lVar59 = lVar59 + -1, lVar59 != 0) {
        puVar55 = (ulong *)FUN_100e077ec(puVar51);
        puVar51 = puVar51 + 4;
      }
      unaff_x25 = _uStack0000000000000038;
      puVar42 = puVar43;
      if (unaff_x24 != (ulong *)0x0) goto LAB_10127e170;
      uVar50 = 0x8000000000000000;
      unaff_x19 = (ulong *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
    }
    else {
      puVar51 = puVar43 + 4;
      uVar50 = *puVar43;
      if ((char)uVar50 == '\x16') goto LAB_10127e124;
      uVar56 = *(ulong *)((long)puVar43 + 1);
      unaff_x20[1] = *(ulong *)((long)puVar43 + 9);
      *unaff_x20 = uVar56;
      uVar56 = puVar43[2];
      *(ulong *)((long)unaff_x20 + 0x17) = puVar43[3];
      *(ulong *)((long)unaff_x20 + 0xf) = uVar56;
      in_stack_000000e0 = (ulong *)0x1;
      unaff_x29[-0x78] = (char)uVar50;
      in_stack_000000c8 = puVar51;
      puVar55 = (ulong *)FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      uVar50 = *(ulong *)(unaff_x29 + -0x90);
      puVar42 = *(ulong **)(unaff_x29 + -0x88);
      puVar52 = puVar42;
      if (uVar50 == 0x8000000000000000) goto LAB_10127e140;
      unaff_x24 = *(ulong **)(unaff_x29 + -0x80);
      puVar55 = (ulong *)FUN_100fbc738(&stack0x000000c0);
      if (puVar55 == (ulong *)0x0) {
LAB_10127e2e8:
        unaff_x19 = (ulong *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
      }
      else {
        puVar52 = puVar55;
        if (uVar50 == 0) {
          uVar50 = 0x8000000000000000;
          goto LAB_10127e2e8;
        }
LAB_10127e170:
        puVar55 = (ulong *)_free(puVar42);
        uVar50 = 0x8000000000000000;
        unaff_x19 = (ulong *)CONCAT71(uStack0000000000000059,bStack0000000000000058);
      }
    }
    goto LAB_10127e300;
  }
  if (bVar74 != 0x15) {
    _cStack0000000000000080 = unaff_x19;
    puVar55 = (ulong *)FUN_108855b04(&stack0x000000a0,unaff_x29 + -0x90,&UNK_10b20c620);
    *(undefined8 *)CONCAT44(fStack0000000000000014,uStack0000000000000010) = 0x8000000000000000;
    ((undefined8 *)CONCAT44(fStack0000000000000014,uStack0000000000000010))[1] = puVar55;
    lVar63 = CONCAT62(uStack0000000000000092,CONCAT11(bStack0000000000000091,bStack0000000000000090)
                     );
    lVar59 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
joined_r0x00010127e450:
    if (lVar59 != 0) {
      puVar35 = (undefined8 *)(lVar63 + 8);
      do {
        if (puVar35[-1] != 0) {
          puVar55 = (ulong *)_free(*puVar35);
        }
        puVar35 = puVar35 + 3;
        lVar59 = lVar59 + -1;
      } while (lVar59 != 0);
    }
    if (in_stack_00000088 != (ulong *)0x0) {
      puVar55 = (ulong *)_free(lVar63);
    }
LAB_10127e4b4:
    lVar59 = ((ulong)(CONCAT44(fStack000000000000004c,in_stack_00000048) - (long)puVar58) >> 5) + 1;
    while (lVar59 = lVar59 + -1, lVar59 != 0) {
      puVar55 = (ulong *)FUN_100e077ec(puVar58);
      puVar58 = puVar58 + 4;
    }
    if (in_stack_00000020 != (ulong *)0x0) {
LAB_10127e544:
      puVar55 = (ulong *)_free(_cStack0000000000000030);
    }
    return puVar55;
  }
  puVar51 = (ulong *)CONCAT17(uStack00000000000000af,uStack00000000000000a8);
  puVar42 = (ulong *)CONCAT17(uStack00000000000000b7,uStack00000000000000b0);
  puVar48 = (ulong *)((long)in_stack_000000b8 * 0x40);
  puVar58 = puVar42 + (long)in_stack_000000b8 * 8;
  unaff_x27 = (ulong *)0x15;
  puVar52 = in_stack_000000b8;
  goto code_r0x00010127de68;
code_r0x0001012809ec:
  if (!bVar29) goto code_r0x000101280a04;
  if (*(char *)((long)puVar42 + 4) != 'e') goto code_r0x000101280a04;
  iVar41 = 1;
code_r0x000101280a38:
  FUN_100e077ec(&stack0x00000100);
  puVar43 = unaff_x26;
  puVar52 = puVar58;
code_r0x000101280a40:
  puVar58 = unaff_x27;
  if (iVar41 == 0) {
    if (puVar55 != (ulong *)0x8000000000000000) {
      *(ulong **)(unaff_x29 + -0x88) = puVar58;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar43 + 1);
      _uStack0000000000000038 = (ulong *)&UNK_108cafd21;
      _bStack0000000000000040 = (ulong *)0x3;
      bStack0000000000000100 = (byte)&stack0x00000038;
      cStack0000000000000101 = (char)((ulong)&stack0x00000038 >> 8);
      uStack0000000000000102 = (undefined2)((ulong)&stack0x00000038 >> 0x10);
      uStack0000000000000104 = (undefined1)((ulong)&stack0x00000038 >> 0x20);
      uStack0000000000000105 = (undefined2)((ulong)&stack0x00000038 >> 0x28);
      uStack0000000000000107 = (undefined1)((ulong)&stack0x00000038 >> 0x38);
      uStack0000000000000108 = 0x100c7b3a0;
      uStack000000000000010f = 0;
      puVar58 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000100);
      puVar51 = _cStack0000000000000030;
      goto code_r0x000101281844;
    }
    bVar74 = unaff_x29[-0xb0];
    unaff_x29[-0xb0] = uVar38;
    if (bVar74 == 0x16) {
      *(ulong **)(unaff_x29 + -0x88) = puVar58;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar43 + 1);
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x000101282068;
    }
    uVar50 = *unaff_x20;
    unaff_x21[1] = unaff_x20[1];
    *unaff_x21 = uVar50;
    uVar33 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x21 + 0xf) = uVar33;
    bStack0000000000000100 = bVar74;
    FUN_1004b62d4(&stack0x00000038,&stack0x00000100);
    if (_uStack0000000000000038 == (ulong *)0x8000000000000000) {
      *(ulong **)(unaff_x29 + -0x88) = puVar58;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar43 + 1);
      puVar55 = (ulong *)0x0;
      puVar58 = _bStack0000000000000040;
      puVar51 = _cStack0000000000000030;
      goto code_r0x000101281844;
    }
    _uStack0000000000000028 = _bStack0000000000000040;
    in_stack_00000018 = (ulong *)CONCAT44(fStack000000000000004c,in_stack_00000048);
    puVar55 = _uStack0000000000000038;
  }
  else if (iVar41 == 1) {
    if (unaff_x25 != (ulong *)0x8000000000000001) {
      *(ulong **)(unaff_x29 + -0x88) = puVar58;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar43 + 1);
      _uStack0000000000000038 = (ulong *)&UNK_108ca1558;
      _bStack0000000000000040 = (ulong *)0x5;
      bStack0000000000000100 = (byte)&stack0x00000038;
      cStack0000000000000101 = (char)((ulong)&stack0x00000038 >> 8);
      uStack0000000000000102 = (undefined2)((ulong)&stack0x00000038 >> 0x10);
      uStack0000000000000104 = (undefined1)((ulong)&stack0x00000038 >> 0x20);
      uStack0000000000000105 = (undefined2)((ulong)&stack0x00000038 >> 0x28);
      uStack0000000000000107 = (undefined1)((ulong)&stack0x00000038 >> 0x38);
      uStack0000000000000108 = 0x100c7b3a0;
      uStack000000000000010f = 0;
      uVar50 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000100);
      *_cStack0000000000000030 = 0x8000000000000004;
      _cStack0000000000000030[1] = uVar50;
      unaff_x25 = (ulong *)((ulong)unaff_x25 & 0x7fffffffffffffff);
      goto joined_r0x000101281f9c;
    }
    bVar74 = unaff_x29[-0xb0];
    unaff_x29[-0xb0] = uVar38;
    if (bVar74 == 0x16) {
      *(ulong **)(unaff_x29 + -0x88) = puVar58;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar43 + 1);
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
      goto code_r0x000101282068;
    }
    uVar50 = *unaff_x20;
    unaff_x21[1] = unaff_x20[1];
    *unaff_x21 = uVar50;
    uVar33 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x21 + 0xf) = uVar33;
    bStack0000000000000100 = bVar74;
    FUN_1004b60cc(&stack0x00000038,&stack0x00000100);
    if (_uStack0000000000000038 == (ulong *)0x8000000000000001) {
      *(ulong **)(unaff_x29 + -0x88) = puVar58;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar43 + 1);
      *_cStack0000000000000030 = 0x8000000000000004;
      _cStack0000000000000030[1] = (ulong)_bStack0000000000000040;
      goto LAB_10128194c;
    }
    in_stack_00000020 = _bStack0000000000000040;
    uStack0000000000000010 = in_stack_00000048;
    fStack0000000000000014 = fStack000000000000004c;
    unaff_x25 = _uStack0000000000000038;
  }
  else {
    bVar74 = unaff_x29[-0xb0];
    unaff_x29[-0xb0] = uVar38;
    if (bVar74 == 0x16) {
      *(ulong **)(unaff_x29 + -0x88) = puVar58;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar43 + 1);
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x000101282068:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10128206c);
      (*pcVar12)();
    }
    uVar50 = *unaff_x20;
    unaff_x21[1] = unaff_x20[1];
    *unaff_x21 = uVar50;
    uVar33 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x21 + 0xf) = uVar33;
    bStack0000000000000100 = bVar74;
    FUN_100e077ec(&stack0x00000100);
  }
  puVar51 = _cStack0000000000000030;
  unaff_x27 = puVar58 + 8;
  unaff_x26 = (ulong *)((long)puVar43 + 1);
  if (puVar52 + 8 == unaff_x24) {
    unaff_x26 = (ulong *)CONCAT53(uStack000000000000000b,
                                  CONCAT21(uStack0000000000000009,uStack0000000000000008));
    unaff_x27 = unaff_x24;
code_r0x0001012817f4:
    *(ulong **)(unaff_x29 + -0x88) = unaff_x27;
    *(ulong **)(unaff_x29 + -0x70) = unaff_x26;
    if (puVar55 != (ulong *)0x8000000000000000) {
      puVar58 = (ulong *)0x8000000000000000;
      if (unaff_x25 != (ulong *)0x8000000000000001) {
        puVar58 = unaff_x25;
      }
      *_cStack0000000000000030 = (ulong)puVar55;
      _cStack0000000000000030[1] = (ulong)_uStack0000000000000028;
      _cStack0000000000000030[2] = (ulong)in_stack_00000018;
      _cStack0000000000000030[3] = (ulong)puVar58;
      _cStack0000000000000030[4] = (ulong)in_stack_00000020;
      _cStack0000000000000030[5] = CONCAT44(fStack0000000000000014,uStack0000000000000010);
      puVar43 = (ulong *)FUN_100d34830(unaff_x29 + -0x90);
      if (unaff_x24 == unaff_x27) {
        return puVar43;
      }
      bStack0000000000000100 = (byte)unaff_x26;
      cStack0000000000000101 = (char)((ulong)unaff_x26 >> 8);
      uStack0000000000000102 = (undefined2)((ulong)unaff_x26 >> 0x10);
      uStack0000000000000104 = (undefined1)((ulong)unaff_x26 >> 0x20);
      uStack0000000000000105 = (undefined2)((ulong)unaff_x26 >> 0x28);
      uStack0000000000000107 = (undefined1)((ulong)unaff_x26 >> 0x38);
      puVar43 = (ulong *)FUN_1087e422c((char *)(((ulong)((long)unaff_x24 - (long)unaff_x27) >> 6) +
                                               (long)unaff_x26),&stack0x00000100,&UNK_10b23a190);
      *puVar51 = 0x8000000000000004;
      puVar51[1] = (ulong)puVar43;
      if (puVar55 != (ulong *)0x0) {
        puVar43 = (ulong *)_free(_uStack0000000000000028);
      }
      if (((ulong)puVar58 & 0x7fffffffffffffff) != 0) {
        puVar58 = (ulong *)_free(in_stack_00000020);
        return puVar58;
      }
      return puVar43;
    }
    _uStack0000000000000038 = (ulong *)&UNK_108cafd21;
    _bStack0000000000000040 = (ulong *)0x3;
    bStack0000000000000100 = (byte)&stack0x00000038;
    cStack0000000000000101 = (char)((ulong)&stack0x00000038 >> 8);
    uStack0000000000000102 = (undefined2)((ulong)&stack0x00000038 >> 0x10);
    uStack0000000000000104 = (undefined1)((ulong)&stack0x00000038 >> 0x20);
    uStack0000000000000105 = (undefined2)((ulong)&stack0x00000038 >> 0x28);
    uStack0000000000000107 = (undefined1)((ulong)&stack0x00000038 >> 0x38);
    uStack0000000000000108 = 0x100c7b3a0;
    uStack000000000000010f = 0;
    puVar55 = (ulong *)0x0;
    puVar58 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000100);
    goto code_r0x000101281844;
  }
  bVar74 = (byte)*puVar58;
  if (bVar74 == 0x16) goto code_r0x0001012817f4;
  uVar50 = puVar58[2];
  *(ulong *)((long)unaff_x21 + 0x17) = puVar58[3];
  *(ulong *)((long)unaff_x21 + 0xf) = uVar50;
  uVar50 = *(ulong *)((long)puVar58 + 1);
  unaff_x21[1] = *(ulong *)((long)puVar58 + 9);
  *unaff_x21 = uVar50;
  in_stack_00000168 = (ulong *)puVar58[5];
  bStack0000000000000160 = (byte)puVar58[4];
  uStack0000000000000161 = (undefined7)(puVar58[4] >> 8);
  in_stack_00000178 = (ulong *)puVar58[7];
  in_stack_00000170 = (ulong *)puVar58[6];
  puVar42 = (ulong *)CONCAT17(uStack000000000000010f,uStack0000000000000108);
  piVar1 = (int *)CONCAT62(uStack0000000000000112,
                           CONCAT11(cStack0000000000000111,bStack0000000000000110));
  lVar59 = CONCAT71(uStack0000000000000119,uStack0000000000000118);
  bStack0000000000000100 = bVar74;
  if (bVar74 < 0xd) {
    if (bVar74 == 1) {
      iVar47 = 1;
      if (cStack0000000000000101 != '\x01') {
        iVar47 = 2;
      }
      iVar41 = 0;
      if (cStack0000000000000101 != '\0') {
        iVar41 = iVar47;
      }
    }
    else {
      if (bVar74 != 4) {
        if (bVar74 == 0xc) {
          if (lVar59 == 5) {
            iVar41 = 1;
            if (*piVar1 != 0x6c746974 || (char)piVar1[1] != 'e') {
              iVar41 = 2;
            }
          }
          else {
            if (lVar59 != 3) goto code_r0x00010128097c;
            iVar41 = 2;
            if ((short)*piVar1 == 0x6873 && *(char *)((long)piVar1 + 2) == 'a') {
              iVar41 = 0;
            }
          }
          goto joined_r0x0001012809b4;
        }
        goto code_r0x0001012820ec;
      }
      iVar47 = 1;
      if (puVar42 != (ulong *)0x1) {
        iVar47 = 2;
      }
      iVar41 = 0;
      if (puVar42 != (ulong *)0x0) {
        iVar41 = iVar47;
      }
    }
    goto code_r0x000101280a38;
  }
  if (bVar74 == 0xd) {
    if (piVar1 == (int *)0x5) {
      iVar41 = 1;
      if ((int)*puVar42 != 0x6c746974 || *(char *)((long)puVar42 + 4) != 'e') {
        iVar41 = 2;
      }
    }
    else {
      if (piVar1 != (int *)0x3) goto code_r0x000101280a04;
      iVar41 = 2;
      if ((short)*puVar42 == 0x6873 && *(char *)((long)puVar42 + 2) == 'a') {
        iVar41 = 0;
      }
    }
    goto code_r0x000101280a38;
  }
  if (bVar74 == 0xe) {
    if (lVar59 == 5) {
      if (((((char)*piVar1 != 't') || (*(char *)((long)piVar1 + 1) != 'i')) ||
          (*(char *)((long)piVar1 + 2) != 't')) ||
         ((*(char *)((long)piVar1 + 3) != 'l' || ((char)piVar1[1] != 'e'))))
      goto code_r0x00010128097c;
      iVar41 = 1;
    }
    else if (((lVar59 == 3) && ((char)*piVar1 == 's')) &&
            ((*(char *)((long)piVar1 + 1) == 'h' && (*(char *)((long)piVar1 + 2) == 'a')))) {
      iVar41 = 0;
    }
    else {
code_r0x00010128097c:
      iVar41 = 2;
    }
joined_r0x0001012809b4:
    puVar43 = unaff_x26;
    puVar52 = puVar58;
    if (puVar42 != (ulong *)0x0) {
      _free();
    }
    goto code_r0x000101280a40;
  }
  if (bVar74 != 0xf) {
code_r0x0001012820ec:
    *(ulong **)(unaff_x29 + -0x88) = unaff_x27;
    *(char **)(unaff_x29 + -0x70) = (char *)((long)puVar43 + 2);
    puVar58 = (ulong *)FUN_108855b04(&stack0x00000100,&stack0x00000038,&UNK_10b20e360);
    puVar51 = _cStack0000000000000030;
code_r0x000101281844:
    *puVar51 = 0x8000000000000004;
    puVar51[1] = (ulong)puVar58;
    if (-0x7fffffffffffffff < (long)unaff_x25) {
joined_r0x000101281f9c:
      if (unaff_x25 != (ulong *)0x0) {
        _free(in_stack_00000020);
      }
    }
LAB_10128194c:
    if (((ulong)puVar55 & 0x7fffffffffffffff) != 0) {
      _free(_uStack0000000000000028);
    }
    puVar58 = (ulong *)FUN_100d34830(unaff_x29 + -0x90);
    if (unaff_x29[-0xb0] != '\x16') {
      puVar58 = (ulong *)FUN_100e077ec(unaff_x29 + -0xb0);
      return puVar58;
    }
    return puVar58;
  }
  if (piVar1 != (int *)0x5) {
    if ((((piVar1 != (int *)0x3) || ((char)*puVar42 != 's')) ||
        (*(char *)((long)puVar42 + 1) != 'h')) || (*(char *)((long)puVar42 + 2) != 'a'))
    goto code_r0x000101280a04;
    iVar41 = 0;
    goto code_r0x000101280a38;
  }
  if ((((char)*puVar42 != 't') || (*(char *)((long)puVar42 + 1) != 'i')) ||
     (*(char *)((long)puVar42 + 2) != 't')) {
code_r0x000101280a04:
    iVar41 = 2;
    goto code_r0x000101280a38;
  }
  bVar29 = *(char *)((long)puVar42 + 3) == 'l';
  goto code_r0x0001012809ec;
code_r0x00010127b210:
code_r0x00010127b3ac:
  *(ulong **)(unaff_x29 + -0x88) = puVar61;
  *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x27 + 1);
  in_stack_000000e0 = in_stack_00000018;
  uVar50 = CONCAT71(uStack0000000000000099,uStack0000000000000098);
  in_stack_000000d0 = unaff_x26;
  in_stack_000000d8 = unaff_x19;
LAB_10127b3c8:
  *_uStack0000000000000038 = 0x8000000000000001;
  _uStack0000000000000038[1] = uVar50;
  unaff_x20 = (ulong *)(unaff_x29 + -0xb0);
  if (_cStack0000000000000030 != (ulong *)0x8000000000000000) {
LAB_10127b3e4:
    FUN_100e79780(&stack0x000000d0);
  }
  goto LAB_10127b714;
code_r0x000101281258:
  while (!bVar30) {
    FUN_100e077ec(unaff_x21);
    puVar55 = (ulong *)((long)puVar55 + -1);
    unaff_x21 = unaff_x21 + 4;
    bVar30 = puVar55 == (ulong *)0x0;
  }
  if (unaff_x24 != (ulong *)0x0) {
    unaff_x20 = (ulong *)_free(unaff_x20);
  }
  return unaff_x20;
code_r0x0001012969f0:
  uVar38 = uStack00000000000000af;
  uVar9 = uStack00000000000000a8;
  uStack00000000000000af = (undefined1)((ulong)unaff_x25 >> 0x38);
  uVar11 = uStack00000000000000af;
  uStack00000000000000a8 = SUB87(unaff_x25,0);
  uVar10 = uStack00000000000000a8;
  if (unaff_x22 == (ulong *)0x8000000000000000) {
    cVar75 = cStack0000000000000080;
    _cStack0000000000000080 = (ulong *)CONCAT71(uStack0000000000000081,0x16);
    if (cVar75 == '\x16') {
      _cStack00000000000000c0 = (ulong *)((long)unaff_x24 + 1);
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010129847c:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x101298480);
      (*pcVar12)();
    }
    uVar50 = *unaff_x20;
    puVar58[1] = unaff_x20[1];
    *puVar58 = uVar50;
    uVar33 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)puVar58 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)puVar58 + 0xf) = uVar33;
    _uStack00000000000000f0 = (ulong *)CONCAT71(stack0x000000f1,cVar75);
    uStack00000000000000a8 = uVar9;
    uStack00000000000000af = uVar38;
    FUN_1014a868c(&stack0x00000038,&stack0x000000f0);
    unaff_x22 = _uStack0000000000000038;
    in_stack_00000020 = _bStack0000000000000040;
    if (_uStack0000000000000038 != (ulong *)0x8000000000000000) {
      _uStack0000000000000028 = (ulong *)CONCAT44(fStack000000000000004c,in_stack_00000048);
      puVar55 = unaff_x24;
      puVar43 = unaff_x26;
      do {
        unaff_x26 = unaff_x25;
        uVar50 = (ulong)_uStack00000000000000f0;
        uVar38 = uStack00000000000000af;
        uVar9 = uStack00000000000000a8;
        unaff_x25 = unaff_x26 + 8;
        unaff_x24 = (ulong *)((long)puVar55 + 1);
        puVar52 = in_stack_00000018;
        puVar51 = unaff_x27;
        if ((puVar43 + 8 == unaff_x27) ||
           (bVar74 = (byte)*unaff_x26, puVar52 = unaff_x24, puVar51 = unaff_x25, bVar74 == 0x16)) {
          uStack00000000000000a8 = SUB87(puVar51,0);
          uStack00000000000000af = (undefined1)((ulong)puVar51 >> 0x38);
          _cStack00000000000000c0 = puVar52;
          if (unaff_x22 != (ulong *)0x8000000000000000) {
            _uStack00000000000000f0 = (ulong *)0x3;
            bStack00000000000000f8 = (byte)unaff_x22;
            uStack00000000000000f9 = (undefined4)((ulong)unaff_x22 >> 8);
            uStack00000000000000fd = (undefined2)((ulong)unaff_x22 >> 0x28);
            uStack00000000000000ff = (undefined1)((ulong)unaff_x22 >> 0x38);
            bStack0000000000000100 = (byte)in_stack_00000020;
            cStack0000000000000101 = (char)((ulong)in_stack_00000020 >> 8);
            uStack0000000000000102 = (undefined2)((ulong)in_stack_00000020 >> 0x10);
            uStack0000000000000104 = (undefined1)((ulong)in_stack_00000020 >> 0x20);
            uStack0000000000000105 = (undefined2)((ulong)in_stack_00000020 >> 0x28);
            uStack0000000000000107 = (undefined1)((ulong)in_stack_00000020 >> 0x38);
            uStack0000000000000108 = SUB87(_uStack0000000000000028,0);
            uStack000000000000010f = (undefined1)((ulong)_uStack0000000000000028 >> 0x38);
            *(ulong *)(unaff_x29 + -0x88) = CONCAT71(uStack0000000000000119,uStack0000000000000118);
            *(ulong *)(unaff_x29 + -0x90) =
                 CONCAT62(uStack0000000000000112,
                          CONCAT11(cStack0000000000000111,bStack0000000000000110));
            *(ulong *)(unaff_x29 + -0x80) = CONCAT71(uStack0000000000000121,uStack0000000000000120);
            *(ulong **)(unaff_x29 + -0x98) = _uStack0000000000000028;
            *(ulong **)(unaff_x29 + -0xa0) = in_stack_00000020;
            *(ulong **)(unaff_x29 + -0xa8) = unaff_x22;
            *(undefined8 *)(unaff_x29 + -0xb0) = 3;
            puVar58 = (ulong *)FUN_100d34830(&stack0x000000a0);
            if (unaff_x27 != puVar51) {
              _uStack00000000000000f0 = puVar52;
              uVar33 = FUN_1087e422c((char *)(((ulong)((long)unaff_x27 - (long)puVar51) >> 6) +
                                             (long)puVar52),&stack0x000000f0,&UNK_10b23a190);
              _uStack00000000000000f0 = (ulong *)0x7;
              bStack00000000000000f8 = (byte)uVar33;
              uStack00000000000000f9 = (undefined4)((ulong)uVar33 >> 8);
              uStack00000000000000fd = (undefined2)((ulong)uVar33 >> 0x28);
              uStack00000000000000ff = (undefined1)((ulong)uVar33 >> 0x38);
              puVar58 = (ulong *)FUN_100e5d1e8(unaff_x29 + -0xb0);
              return puVar58;
            }
            return puVar58;
          }
          _uStack0000000000000038 = (ulong *)&UNK_108cc0272;
          _bStack0000000000000040 = (ulong *)0xe;
          _uStack00000000000000f0 = (ulong *)&stack0x00000038;
          bStack00000000000000f8 = 0xa0;
          uStack00000000000000f9 = 0x100c7b3;
          uStack00000000000000fd = 0;
          uStack00000000000000ff = 0;
          puVar58 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x000000f0);
          goto code_r0x000101297350;
        }
        _uStack00000000000000f0 = (ulong *)CONCAT71(stack0x000000f1,bVar74);
        puVar52 = _uStack00000000000000f0;
        uVar56 = unaff_x26[2];
        *(ulong *)((long)puVar58 + 0x17) = unaff_x26[3];
        *(ulong *)((long)puVar58 + 0xf) = uVar56;
        uVar56 = *(ulong *)((long)unaff_x26 + 1);
        puVar58[1] = *(ulong *)((long)unaff_x26 + 9);
        *puVar58 = uVar56;
        in_stack_00000088 = (ulong *)unaff_x26[5];
        _cStack0000000000000080 = (ulong *)unaff_x26[4];
        uVar56 = unaff_x26[6];
        uStack0000000000000098 = (undefined1)unaff_x26[7];
        uStack0000000000000099 = (undefined7)(unaff_x26[7] >> 8);
        bStack0000000000000090 = (byte)uVar56;
        bStack0000000000000091 = (byte)(uVar56 >> 8);
        uStack0000000000000092 = (undefined6)(uVar56 >> 0x10);
        plVar46 = (long *)CONCAT17(uStack00000000000000ff,
                                   CONCAT25(uStack00000000000000fd,
                                            CONCAT41(uStack00000000000000f9,bStack00000000000000f8))
                                  );
        puVar43 = (ulong *)CONCAT17(uStack0000000000000107,
                                    CONCAT25(uStack0000000000000105,
                                             CONCAT14(uStack0000000000000104,
                                                      CONCAT22(uStack0000000000000102,
                                                               CONCAT11(cStack0000000000000101,
                                                                        bStack0000000000000100)))));
        uStack00000000000000af = (undefined1)((ulong)unaff_x25 >> 0x38);
        uVar11 = uStack00000000000000af;
        uStack00000000000000a8 = SUB87(unaff_x25,0);
        uVar10 = uStack00000000000000a8;
        if (bVar74 < 0xd) {
          if (bVar74 == 1) {
            uStack00000000000000f0._1_1_ = SUB81(uVar50,1);
            bVar17 = uStack00000000000000f0._1_1_ == '\0';
code_r0x000101296994:
            bVar17 = !bVar17;
code_r0x0001012969a0:
            uStack00000000000000a8 = uVar9;
            uStack00000000000000af = uVar38;
            _uStack00000000000000f0 = puVar52;
            FUN_100e077ec(&stack0x000000f0);
            goto code_r0x0001012969a8;
          }
          if (bVar74 == 4) {
            bVar17 = plVar46 == (long *)0x0;
            goto code_r0x000101296994;
          }
          if (bVar74 != 0xc) {
code_r0x000101298368:
            _cStack00000000000000c0 = (ulong *)((long)puVar55 + 2);
            uVar33 = FUN_108855b04(&stack0x000000f0,&stack0x00000038,&UNK_10b20e0e0);
            bStack00000000000000f8 = (byte)uVar33;
            uStack00000000000000f9 = (undefined4)((ulong)uVar33 >> 8);
            uStack00000000000000fd = (undefined2)((ulong)uVar33 >> 0x28);
            uStack00000000000000ff = (undefined1)((ulong)uVar33 >> 0x38);
            unaff_x22 = (ulong *)((ulong)unaff_x22 & 0x7fffffffffffffff);
            goto joined_r0x0001012980d8;
          }
          if (CONCAT17(uStack000000000000010f,uStack0000000000000108) == 0xe) {
            uVar50 = *puVar43;
            uVar56 = *(ulong *)((long)puVar43 + 6) ^ 0x7265646c6f467865;
            bVar17 = (uVar50 ^ 0x7865646f43746f64) != 0 || uVar56 != 0;
            uStack00000000000000a8 = uVar9;
            uStack00000000000000af = uVar38;
            if (plVar46 == (long *)0x0) goto code_r0x0001012969a8;
            _free();
            if ((uVar50 ^ 0x7865646f43746f64) == 0 && uVar56 == 0) goto code_r0x0001012969f0;
          }
          else {
            uStack00000000000000a8 = uVar9;
            uStack00000000000000af = uVar38;
            if (plVar46 != (long *)0x0) {
              _free();
            }
          }
        }
        else {
          if (bVar74 == 0xd) {
            if (puVar43 == (ulong *)0xe) {
              bVar17 = false;
              if (*plVar46 == 0x7865646f43746f64) {
                bVar17 = *(long *)((long)plVar46 + 6) == 0x7265646c6f467865;
              }
              goto code_r0x000101296994;
            }
code_r0x00010129699c:
            bVar17 = true;
            goto code_r0x0001012969a0;
          }
          if (bVar74 != 0xe) {
            if (bVar74 != 0xf) goto code_r0x000101298368;
            if ((((((((puVar43 != (ulong *)0xe) || ((char)*plVar46 != 'd')) ||
                    (*(char *)((long)plVar46 + 1) != 'o')) ||
                   ((*(char *)((long)plVar46 + 2) != 't' || (*(char *)((long)plVar46 + 3) != 'C'))))
                  || (*(char *)((long)plVar46 + 4) != 'o')) ||
                 ((*(char *)((long)plVar46 + 5) != 'd' || (*(char *)((long)plVar46 + 6) != 'e'))))
                || ((*(char *)((long)plVar46 + 7) != 'x' ||
                    ((((char)plVar46[1] != 'F' || (*(char *)((long)plVar46 + 9) != 'o')) ||
                     (*(char *)((long)plVar46 + 10) != 'l')))))) ||
               ((*(char *)((long)plVar46 + 0xb) != 'd' || (*(char *)((long)plVar46 + 0xc) != 'e'))))
            goto code_r0x00010129699c;
            bVar17 = *(char *)((long)plVar46 + 0xd) == 'r';
            goto code_r0x000101296994;
          }
          if ((((CONCAT17(uStack000000000000010f,uStack0000000000000108) == 0xe) &&
               ((char)*puVar43 == 'd')) &&
              ((*(char *)((long)puVar43 + 1) == 'o' &&
               (((*(char *)((long)puVar43 + 2) == 't' && (*(char *)((long)puVar43 + 3) == 'C')) &&
                (*(char *)((long)puVar43 + 4) == 'o')))))) &&
             (((*(char *)((long)puVar43 + 5) == 'd' && (*(char *)((long)puVar43 + 6) == 'e')) &&
              ((*(char *)((long)puVar43 + 7) == 'x' &&
               ((((char)puVar43[1] == 'F' && (*(char *)((long)puVar43 + 9) == 'o')) &&
                ((*(char *)((long)puVar43 + 10) == 'l' &&
                 ((*(char *)((long)puVar43 + 0xb) == 'd' && (*(char *)((long)puVar43 + 0xc) == 'e'))
                 )))))))))) {
            bVar17 = *(char *)((long)puVar43 + 0xd) != 'r';
          }
          else {
            bVar17 = true;
          }
          uStack00000000000000a8 = uVar9;
          uStack00000000000000af = uVar38;
          if (plVar46 != (long *)0x0) {
            _free();
            if (bVar17) goto code_r0x0001012969ac;
            goto code_r0x0001012969f0;
          }
code_r0x0001012969a8:
          if (!bVar17) goto code_r0x0001012969f0;
        }
code_r0x0001012969ac:
        cVar75 = cStack0000000000000080;
        _cStack0000000000000080 = (ulong *)CONCAT71(uStack0000000000000081,0x16);
        if (cVar75 == '\x16') {
          _cStack00000000000000c0 = (ulong *)((long)puVar55 + 2);
          uStack00000000000000a8 = uVar10;
          uStack00000000000000af = uVar11;
          func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
          goto code_r0x00010129847c;
        }
        uVar50 = *unaff_x20;
        puVar58[1] = unaff_x20[1];
        *puVar58 = uVar50;
        uVar33 = *(undefined8 *)((long)unaff_x20 + 0xf);
        *(undefined8 *)((long)puVar58 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
        *(undefined8 *)((long)puVar58 + 0xf) = uVar33;
        _uStack00000000000000f0 = (ulong *)CONCAT71(stack0x000000f1,cVar75);
        FUN_100e077ec(&stack0x000000f0);
        puVar55 = unaff_x24;
        puVar43 = unaff_x26;
      } while( true );
    }
    _cStack00000000000000c0 = (ulong *)((long)unaff_x24 + 1);
    puVar58 = _bStack0000000000000040;
    uStack00000000000000a8 = uVar10;
    uStack00000000000000af = uVar11;
code_r0x000101297350:
    _uStack00000000000000f0 = (ulong *)0x7;
    bStack00000000000000f8 = (byte)puVar58;
    uStack00000000000000f9 = (undefined4)((ulong)puVar58 >> 8);
    uStack00000000000000fd = (undefined2)((ulong)puVar58 >> 0x28);
    uStack00000000000000ff = (undefined1)((ulong)puVar58 >> 0x38);
  }
  else {
    _cStack00000000000000c0 = (ulong *)((long)unaff_x24 + 1);
    _uStack0000000000000038 = (ulong *)&UNK_108cc0272;
    _bStack0000000000000040 = (ulong *)0xe;
    _uStack00000000000000f0 = (ulong *)&stack0x00000038;
    bStack00000000000000f8 = 0xa0;
    uStack00000000000000f9 = 0x100c7b3;
    uStack00000000000000fd = 0;
    uStack00000000000000ff = 0;
    uVar33 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000000f0);
    bStack00000000000000f8 = (byte)uVar33;
    uStack00000000000000f9 = (undefined4)((ulong)uVar33 >> 8);
    uStack00000000000000fd = (undefined2)((ulong)uVar33 >> 0x28);
    uStack00000000000000ff = (undefined1)((ulong)uVar33 >> 0x38);
joined_r0x0001012980d8:
    _uStack00000000000000f0 = (ulong *)0x7;
    if (unaff_x22 != (ulong *)0x0) {
      _uStack00000000000000f0 = (ulong *)0x7;
      _free(in_stack_00000020);
    }
  }
  puVar58 = (ulong *)FUN_100d34830(&stack0x000000a0);
  if (cStack0000000000000080 != '\x16') {
    puVar58 = (ulong *)FUN_100e077ec(&stack0x00000080);
  }
  return puVar58;
code_r0x00010127afe0:
  do {
    puVar61 = unaff_x22;
    puVar58 = puVar61 + -8;
    bVar74 = (byte)*puVar58;
    if (bVar74 == 0x16) goto code_r0x00010127b6b0;
    bStack0000000000000110 = bVar74;
    uVar50 = puVar61[-6];
    *(ulong *)((long)unaff_x21 + 0x17) = puVar61[-5];
    *(ulong *)((long)unaff_x21 + 0xf) = uVar50;
    uVar50 = *(ulong *)((long)puVar61 + -0x3f);
    unaff_x21[1] = *(ulong *)((long)puVar61 + -0x37);
    *unaff_x21 = uVar50;
    uVar50 = puVar61[-4];
    *(ulong *)(unaff_x29 + -0xa8) = puVar61[-3];
    *(ulong *)(unaff_x29 + -0xb0) = uVar50;
    uVar50 = puVar61[-2];
    *(ulong *)(unaff_x29 + -0x98) = puVar61[-1];
    *(ulong *)(unaff_x29 + -0xa0) = uVar50;
    puVar55 = (ulong *)CONCAT71(uStack0000000000000119,uStack0000000000000118);
    unaff_x24 = (ulong *)CONCAT71(uStack0000000000000121,uStack0000000000000120);
    if (bVar74 < 0xd) {
      if (bVar74 == 1) {
        bVar74 = 1;
        if (cStack0000000000000111 != '\x01') {
          bVar74 = 2;
        }
        bStack0000000000000091 = 0;
        if (cStack0000000000000111 != '\0') {
          bStack0000000000000091 = bVar74;
        }
code_r0x00010127b218:
        bStack0000000000000090 = 0;
code_r0x00010127b220:
        FUN_100e077ec(&stack0x00000110);
        goto code_r0x00010127b228;
      }
      if (bVar74 == 4) {
        bVar74 = 1;
        if (puVar55 != (ulong *)0x1) {
          bVar74 = 2;
        }
        bStack0000000000000091 = 0;
        if (puVar55 != (ulong *)0x0) {
          bStack0000000000000091 = bVar74;
        }
        goto code_r0x00010127b218;
      }
      if (bVar74 != 0xc) {
code_r0x00010127b384:
        uVar33 = FUN_108855b04(&stack0x00000110,&stack0x00000070,&UNK_10b210220);
        uStack0000000000000098 = (undefined1)uVar33;
        uStack0000000000000099 = (undefined7)((ulong)uVar33 >> 8);
        bStack0000000000000090 = 1;
        goto code_r0x00010127b3ac;
      }
      if (in_stack_00000128 == (ulong *)0x13) {
        puVar42 = (ulong *)(*unaff_x24 ^ 0x6163735f626f6c67);
        puVar48 = (ulong *)(unaff_x24[1] ^ 0x65645f78616d5f6e);
        puVar51 = (ulong *)(*(ulong *)((long)unaff_x24 + 0xb) ^ 0x68747065645f7861);
code_r0x00010127b17c:
        bStack0000000000000091 = 1;
        if ((puVar42 != (ulong *)0x0 || puVar48 != (ulong *)0x0) || puVar51 != (ulong *)0x0) {
          bStack0000000000000091 = 2;
        }
      }
      else if (in_stack_00000128 == (ulong *)0x7) {
        bStack0000000000000091 = 2;
        if ((int)*unaff_x24 == 0x72746e65 && *(int *)((long)unaff_x24 + 3) == 0x73656972) {
          bStack0000000000000091 = 0;
        }
      }
      else {
        bStack0000000000000091 = 2;
      }
      bStack0000000000000090 = 0;
      if (puVar55 == (ulong *)0x0) goto code_r0x00010127b228;
code_r0x00010127b200:
      _free(unaff_x24);
      if ((bStack0000000000000090 & 1) != 0) goto code_r0x00010127b210;
    }
    else {
      if (bVar74 == 0xd) {
        if (unaff_x24 == (ulong *)0x13) {
          puVar42 = (ulong *)*puVar55;
          puVar48 = (ulong *)puVar55[1];
          puVar51 = (ulong *)0x735f626f6c67;
code_r0x00010127b1a4:
          puVar42 = (ulong *)((ulong)puVar42 ^ ((ulong)puVar51 | 0x6163000000000000));
          puVar48 = (ulong *)((ulong)puVar48 ^ 0x65645f78616d5f6e);
          puVar51 = *(ulong **)((long)puVar55 + 0xb);
          puVar52 = (ulong *)0x645f7861;
code_r0x00010127b1cc:
          uVar40 = 1;
          if ((puVar42 != (ulong *)0x0 || puVar48 != (ulong *)0x0) ||
              puVar51 != (ulong *)((ulong)puVar52 & 0xffff0000ffffffff | 0x6874706500000000)) {
            uVar40 = 2;
          }
          puVar42 = (ulong *)(ulong)uVar40;
code_r0x00010127b1ec:
          bStack0000000000000091 = (byte)puVar42;
        }
        else if (unaff_x24 == (ulong *)0x7) {
          bStack0000000000000091 = 2;
          if ((int)*puVar55 == 0x72746e65 && *(int *)((long)puVar55 + 3) == 0x73656972) {
            bStack0000000000000091 = 0;
          }
        }
        else {
          bStack0000000000000091 = 2;
        }
        goto code_r0x00010127b218;
      }
      if (bVar74 != 0xe) {
        if (bVar74 != 0xf) goto code_r0x00010127b384;
        func_0x000100b39ce8(&stack0x00000090,puVar55,unaff_x24);
        goto code_r0x00010127b220;
      }
      func_0x000100b39ce8(&stack0x00000090,unaff_x24);
      if (puVar55 != (ulong *)0x0) goto code_r0x00010127b200;
code_r0x00010127b228:
      if ((bStack0000000000000090 & 1) != 0) goto code_r0x00010127b3ac;
    }
    puVar42 = (ulong *)(ulong)bStack0000000000000091;
code_r0x00010127b234:
    if ((int)puVar42 == 0) {
      bVar21 = _cStack0000000000000030 == (ulong *)0x8000000000000000;
code_r0x00010127b2ac:
      if (!bVar21) {
        *(ulong **)(unaff_x29 + -0x88) = puVar61;
        *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x27 + 1);
        in_stack_000000e0 = in_stack_00000018;
        in_stack_000000d8 = unaff_x19;
code_r0x00010127b9c8:
        bStack0000000000000090 = 0xde;
        bStack0000000000000091 = 0xd9;
        uStack0000000000000092 = 0x108ca;
        uStack0000000000000098 = 7;
        uStack0000000000000099 = 0;
        bStack0000000000000110 = (byte)&stack0x00000090;
        cStack0000000000000111 = (char)((ulong)&stack0x00000090 >> 8);
        uStack0000000000000112 = (undefined6)((ulong)&stack0x00000090 >> 0x10);
        uStack0000000000000118 = 0xa0;
        uStack0000000000000119 = 0x100c7b3;
        in_stack_000000d0 = unaff_x26;
        uVar50 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000110);
        unaff_x20 = (ulong *)(unaff_x29 + -0xb0);
        *_uStack0000000000000038 = 0x8000000000000001;
        _uStack0000000000000038[1] = uVar50;
        goto LAB_10127b3e4;
      }
      bVar74 = unaff_x29[-0xb0];
      puVar42 = (ulong *)(ulong)bVar74;
      unaff_x29[-0xb0] = 0x16;
      if (bVar74 == 0x16) {
        *(ulong **)(unaff_x29 + -0x88) = puVar61;
        *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x27 + 1);
        in_stack_000000e0 = in_stack_00000018;
        in_stack_000000d8 = unaff_x19;
code_r0x00010127ba78:
        pcVar32 = &UNK_108ca1000;
        in_stack_000000d0 = unaff_x26;
code_r0x00010127ba80:
        func_0x000108a079f0((ulong *)((long)pcVar32 + 0xa98),0x2c,&UNK_10b24f848);
        goto code_r0x00010127ba94;
      }
code_r0x00010127b2c4:
      uVar50 = *unaff_x20;
      unaff_x21[1] = unaff_x20[1];
      *unaff_x21 = uVar50;
      uVar33 = *(undefined8 *)((long)unaff_x20 + 0xf);
      *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
      *(undefined8 *)((long)unaff_x21 + 0xf) = uVar33;
code_r0x00010127b2d4:
      bStack0000000000000110 = (byte)puVar42;
      _cStack0000000000000030 = (ulong *)0x8000000000000000;
      FUN_1013d38a0(&stack0x00000090,&stack0x00000110);
      unaff_x26 = (ulong *)CONCAT62(uStack0000000000000092,
                                    CONCAT11(bStack0000000000000091,bStack0000000000000090));
      unaff_x19 = (ulong *)CONCAT71(uStack0000000000000099,uStack0000000000000098);
      puVar42 = (ulong *)0x8000000000000000;
code_r0x00010127b2f4:
      if (unaff_x26 != puVar42) {
code_r0x00010127b2fc:
        in_stack_00000018 = (ulong *)CONCAT71(uStack00000000000000a1,bStack00000000000000a0);
        _cStack0000000000000030 = unaff_x26;
        goto code_r0x00010127afcc;
      }
      *(ulong **)(unaff_x29 + -0x88) = puVar61;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x27 + 1);
      unaff_x20 = (ulong *)(unaff_x29 + -0xb0);
      puVar58 = _uStack0000000000000038;
      goto code_r0x00010127b70c;
    }
    bVar19 = (int)puVar42 == 1;
code_r0x00010127b23c:
    if (bVar19) {
      if (_uStack0000000000000028 == (ulong *)0x1) {
        *(ulong **)(unaff_x29 + -0x88) = puVar61;
        *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x27 + 1);
        in_stack_000000e0 = in_stack_00000018;
        bStack0000000000000090 = 0x72;
        bStack0000000000000091 = 0xc0;
        uStack0000000000000092 = 0x108ca;
        uStack0000000000000098 = 0x13;
        uStack0000000000000099 = 0;
        puVar42 = (ulong *)&stack0x00000090;
        puVar48 = (ulong *)&UNK_100c7b000;
        in_stack_000000d0 = unaff_x26;
        in_stack_000000d8 = unaff_x19;
code_r0x00010127ba40:
        bStack0000000000000110 = (byte)puVar42;
        cStack0000000000000111 = (char)((ulong)puVar42 >> 8);
        uStack0000000000000112 = (undefined6)((ulong)puVar42 >> 0x10);
        uStack0000000000000118 = SUB81(puVar48 + 0x74,0);
        uStack0000000000000119 = (undefined7)((ulong)(puVar48 + 0x74) >> 8);
        uVar50 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000110);
        goto LAB_10127b3c8;
      }
      bVar74 = unaff_x29[-0xb0];
      puVar42 = (ulong *)(ulong)bVar74;
      unaff_x29[-0xb0] = 0x16;
      if (bVar74 == 0x16) goto code_r0x00010127b978;
      uVar67 = unaff_x20[1];
      puVar43 = (ulong *)*unaff_x20;
code_r0x00010127b264:
      in_stack_00000020[1] = uVar67;
      *in_stack_00000020 = (ulong)puVar43;
      uVar33 = *(undefined8 *)((long)unaff_x20 + 0xf);
      *(undefined8 *)((long)in_stack_00000020 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
      *(undefined8 *)((long)in_stack_00000020 + 0xf) = uVar33;
      iVar41 = (int)puVar42;
      bStack0000000000000090 = (byte)puVar42;
      if (iVar41 == 0x10) {
code_r0x00010127b290:
        pcVar32 = (char *)&stack0x00000090;
code_r0x00010127b294:
        FUN_100e077ec(pcVar32);
        uStack0000000000000010 = 0;
        fStack0000000000000014 = 0.0;
      }
      else {
        if (iVar41 == 0x11) {
          puVar55 = (ulong *)CONCAT71(uStack0000000000000099,uStack0000000000000098);
code_r0x00010127b344:
          uVar50 = *puVar55;
          uStack0000000000000118 = (undefined1)puVar55[1];
          uStack0000000000000119 = (undefined7)(puVar55[1] >> 8);
          bStack0000000000000110 = (byte)uVar50;
          cStack0000000000000111 = (char)(uVar50 >> 8);
          uStack0000000000000112 = (undefined6)(uVar50 >> 0x10);
          in_stack_00000128 = (ulong *)puVar55[3];
          uStack0000000000000120 = (undefined1)puVar55[2];
          uStack0000000000000121 = (undefined7)(puVar55[2] >> 8);
          auVar71 = func_0x00010145ffe4(&stack0x00000110);
          uVar50 = auVar71._0_8_;
          uStack0000000000000010 = auVar71._8_4_;
          fStack0000000000000014 = auVar71._12_4_;
          _free(puVar55);
        }
        else {
          bVar20 = iVar41 == 0x12;
code_r0x00010127b28c:
          if (bVar20) goto code_r0x00010127b290;
          auVar71 = func_0x00010145ffe4(&stack0x00000090);
          uVar50 = auVar71._0_8_;
          uStack0000000000000010 = auVar71._8_4_;
          fStack0000000000000014 = auVar71._12_4_;
        }
        if ((uVar50 & 1) != 0) {
          *(ulong **)(unaff_x29 + -0x88) = puVar61;
          *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x27 + 1);
          uVar50 = CONCAT44(fStack0000000000000014,uStack0000000000000010);
          in_stack_000000e0 = in_stack_00000018;
          in_stack_000000d0 = unaff_x26;
          in_stack_000000d8 = unaff_x19;
          goto LAB_10127b3c8;
        }
      }
code_r0x00010127afc4:
      _uStack0000000000000028 = (ulong *)0x1;
      goto code_r0x00010127afcc;
    }
    bVar74 = unaff_x29[-0xb0];
    puVar42 = (ulong *)(ulong)bVar74;
    unaff_x29[-0xb0] = 0x16;
    if (bVar74 == 0x16) {
code_r0x00010127b978:
      *(ulong **)(unaff_x29 + -0x88) = puVar61;
      *(char **)(unaff_x29 + -0x70) = (char *)((long)unaff_x27 + 1);
      in_stack_000000e0 = in_stack_00000018;
      in_stack_000000d0 = unaff_x26;
      in_stack_000000d8 = unaff_x19;
code_r0x00010127b990:
      func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x00010127b9ac:
code_r0x00010127ba94:
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10127ba98);
      (*pcVar12)();
    }
    uVar67 = unaff_x20[1];
    puVar43 = (ulong *)*unaff_x20;
code_r0x00010127b324:
    unaff_x21[1] = uVar67;
    *unaff_x21 = (ulong)puVar43;
    uVar33 = *(undefined8 *)((long)unaff_x20 + 0xf);
    *(undefined8 *)((long)unaff_x21 + 0x17) = *(undefined8 *)((long)unaff_x20 + 0x17);
    *(undefined8 *)((long)unaff_x21 + 0xf) = uVar33;
    bStack0000000000000110 = (byte)puVar42;
    FUN_100e077ec(&stack0x00000110);
code_r0x00010127afcc:
    unaff_x22 = puVar61 + 8;
    puVar42 = puVar58 + 8;
code_r0x00010127afd4:
    unaff_x27 = (ulong *)((long)unaff_x27 + 1);
code_r0x00010127afd8:
    puVar61 = unaff_x25;
    unaff_x25 = puVar61;
  } while (puVar42 != puVar61);
  unaff_x27 = (ulong *)CONCAT53(uStack000000000000000b,
                                CONCAT21(uStack0000000000000009,uStack0000000000000008));
code_r0x00010127b6b0:
  puVar58 = _uStack0000000000000038;
  *(ulong **)(unaff_x29 + -0x88) = puVar61;
  *(ulong **)(unaff_x29 + -0x70) = unaff_x27;
  in_stack_000000e0 = in_stack_00000018;
  unaff_x20 = (ulong *)(unaff_x29 + -0xb0);
  in_stack_000000d0 = unaff_x26;
  in_stack_000000d8 = unaff_x19;
  if (_cStack0000000000000030 != (ulong *)0x8000000000000000) {
    uVar50 = CONCAT44(fStack0000000000000014,uStack0000000000000010);
    if (((ulong)_uStack0000000000000028 & 1) == 0) {
      uVar50 = 0;
    }
    *_uStack0000000000000038 = (ulong)_cStack0000000000000030;
    _uStack0000000000000038[1] = (ulong)unaff_x19;
    _uStack0000000000000038[2] = (ulong)in_stack_00000018;
    _uStack0000000000000038[3] = uVar50;
    _bStack0000000000000040 = (ulong *)*_uStack0000000000000038;
    uVar50 = _uStack0000000000000038[2];
    in_stack_00000048 = (uint)_uStack0000000000000038[1];
    fStack000000000000004c = (float)(_uStack0000000000000038[1] >> 0x20);
    bStack0000000000000058 = (byte)_uStack0000000000000038[3];
    uStack0000000000000059 = (undefined7)(_uStack0000000000000038[3] >> 8);
    bStack0000000000000050 = (byte)uVar50;
    cStack0000000000000051 = (char)(uVar50 >> 8);
    uStack0000000000000052 = (undefined6)(uVar50 >> 0x10);
    puVar55 = (ulong *)FUN_100d34830(unaff_x29 + -0x90);
    if (unaff_x25 == puVar61) {
      return puVar55;
    }
    bStack0000000000000110 = (byte)unaff_x27;
    cStack0000000000000111 = (char)((ulong)unaff_x27 >> 8);
    uStack0000000000000112 = (undefined6)((ulong)unaff_x27 >> 0x10);
    puVar55 = (ulong *)FUN_1087e422c((char *)(((ulong)((long)unaff_x25 - (long)puVar61) >> 6) +
                                             (long)unaff_x27),&stack0x00000110,&UNK_10b23a190);
code_r0x00010127b558:
    *puVar58 = 0x8000000000000001;
    puVar58[1] = (ulong)puVar55;
    if (_bStack0000000000000040 != (ulong *)0x8000000000000000) {
      puVar58 = (ulong *)FUN_100e79780(&stack0x00000040);
      return puVar58;
    }
    return puVar55;
  }
code_r0x00010127b6d8:
  bStack0000000000000090 = 0xde;
  bStack0000000000000091 = 0xd9;
  uStack0000000000000092 = 0x108ca;
  uStack0000000000000098 = 7;
  uStack0000000000000099 = 0;
  bStack0000000000000110 = (byte)&stack0x00000090;
  cStack0000000000000111 = (char)((ulong)&stack0x00000090 >> 8);
  uStack0000000000000112 = (undefined6)((ulong)&stack0x00000090 >> 0x10);
  uStack0000000000000118 = 0xa0;
  uStack0000000000000119 = 0x100c7b3;
  unaff_x19 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000110);
code_r0x00010127b70c:
  *puVar58 = 0x8000000000000001;
  puVar58[1] = (ulong)unaff_x19;
LAB_10127b714:
  puVar58 = (ulong *)FUN_100d34830(unaff_x20 + 4);
  if (unaff_x29[-0xb0] != '\x16') {
    puVar58 = (ulong *)FUN_100e077ec(unaff_x29 + -0xb0);
  }
  return puVar58;
}

