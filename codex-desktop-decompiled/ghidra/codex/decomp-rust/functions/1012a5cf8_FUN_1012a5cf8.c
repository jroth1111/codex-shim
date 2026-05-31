
void FUN_1012a5cf8(undefined1 param_1 [16],undefined1 param_2 [16])

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x19;
  ulong unaff_x20;
  ulong *unaff_x21;
  undefined8 *unaff_x23;
  long unaff_x29;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong *in_stack_00000030;
  byte bStack0000000000000038;
  undefined7 uStack0000000000000039;
  byte bStack0000000000000040;
  uint7 uStack0000000000000041;
  undefined1 uStack0000000000000048;
  undefined7 uStack0000000000000049;
  undefined1 uStack0000000000000050;
  undefined7 uStack0000000000000051;
  undefined1 uStack0000000000000058;
  undefined7 uStack0000000000000059;
  undefined7 uStack0000000000000080;
  byte bStack0000000000000087;
  uint7 uStack0000000000000088;
  undefined1 uStack000000000000008f;
  undefined7 uStack0000000000000090;
  undefined1 uStack0000000000000097;
  undefined7 uStack0000000000000098;
  undefined1 uStack000000000000009f;
  undefined7 uStack00000000000000a0;
  undefined1 uStack00000000000000a7;
  undefined8 *in_stack_000000c8;
  char in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_00000100;
  ulong *in_stack_00000108;
  long in_stack_00000110;
  long in_stack_00000118;
  
  uVar15 = param_2._8_8_;
  uVar18 = param_2._0_8_;
  uVar8 = FUN_108856088(s_missing_field_____108ac28f7,&stack0x00000100);
  bStack0000000000000040 = (byte)uVar8;
  uStack0000000000000041 = (uint7)((ulong)uVar8 >> 8);
LAB_1012a49b0:
  puVar10 = (undefined8 *)0xc;
code_r0x0001012a49b4:
  bStack0000000000000038 = (byte)puVar10;
code_r0x0001012a49bc:
  puVar6 = (undefined8 *)&stack0x000000a8;
code_r0x0001012a49c0:
  FUN_100d03040(puVar6);
code_r0x0001012a49c4:
  FUN_100d34830(unaff_x29 + -0x90);
code_r0x0001012a49d0:
  puVar10 = (undefined8 *)(ulong)*(byte *)(unaff_x29 + -0xb0);
code_r0x0001012a49d4:
  bVar4 = (int)puVar10 == 0x16;
code_r0x0001012a49d8:
  if (bVar4) goto LAB_1012a487c;
  FUN_100e077ec(unaff_x29 + -0xb0);
  goto code_r0x0001012a49e4;
LAB_1012a487c:
  do {
    uVar12 = (ulong)bStack0000000000000038;
    puVar6 = (undefined8 *)CONCAT71(uStack0000000000000041,bStack0000000000000040);
    if (bStack0000000000000038 == 0xc) goto LAB_1012a4e28;
    uStack0000000000000090 = (undefined7)CONCAT71(uStack0000000000000051,uStack0000000000000050);
    uStack0000000000000097 = (undefined1)((uint7)uStack0000000000000051 >> 0x30);
    uStack0000000000000088 = (uint7)CONCAT71(uStack0000000000000049,uStack0000000000000048);
    uStack000000000000008f = (undefined1)((uint7)uStack0000000000000049 >> 0x30);
    uVar9 = (ulong)(uStack0000000000000041 >> 0x18);
    uStack0000000000000098 = (undefined7)CONCAT71(uStack0000000000000059,uStack0000000000000058);
    uStack000000000000009f = (undefined1)((uint7)uStack0000000000000059 >> 0x30);
    uStack0000000000000080 = SUB87(puVar6,0);
    bStack0000000000000087 = (byte)(uStack0000000000000041 >> 0x30);
    uVar11 = (ulong)(uStack0000000000000041 >> 8);
    puVar10 = (undefined8 *)(ulong)uStack0000000000000041;
    uVar14 = (ulong)(uStack0000000000000041 >> 0x18);
    uVar16 = 0;
    puVar13 = &UNK_108c9fc32;
    UNRECOVERED_JUMPTABLE = (code *)(&UNK_1012a48c8 + (ulong)(byte)(&UNK_108c9fc32)[uVar12] * 4);
    bVar2 = (byte)unaff_x19;
    bVar3 = false;
    bVar4 = false;
    switch(uVar12) {
    case 3:
      uVar12 = (ulong)bStack0000000000000040;
      puVar13 = &UNK_108c9fc6a;
code_r0x0001012a4af4:
                    /* WARNING: Could not recover jumptable at 0x0001012a4b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1012a4b04 + (ulong)*(ushort *)(puVar13 + uVar12 * 2) * 4))();
      return;
    case 4:
      unaff_x19 = 0x800000000000000c;
      goto code_r0x0001012a4a30;
    case 5:
      unaff_x19 = 0x800000000000000c;
      puVar10 = (undefined8 *)&UNK_108cb8000;
code_r0x0001012a4ba4:
      *(undefined **)(unaff_x29 + -0xb0) = (undefined *)((long)puVar10 + 0xca4);
      *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
      puVar10 = (undefined8 *)&UNK_108cae000;
code_r0x0001012a4bb4:
      *(undefined **)(unaff_x29 + -0xa0) = (undefined *)((long)puVar10 + 0x54);
      *(undefined8 *)(unaff_x29 + -0x98) = 0xf;
      puVar6 = (undefined8 *)FUN_100490e6c(&stack0x00000080,unaff_x29 + -0xb0);
code_r0x0001012a4bcc:
      if (puVar6 != (undefined8 *)0x0) goto code_r0x0001012a4c50;
code_r0x0001012a4bd0:
      puVar10 = (undefined8 *)(unaff_x19 - 7);
      goto code_r0x0001012a4e34;
    case 7:
      puVar10 = (undefined8 *)&UNK_108cb8000;
code_r0x0001012a4b2c:
      *(undefined **)(unaff_x29 + -0xb0) = (undefined *)((long)puVar10 + 0xca4);
      *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
code_r0x0001012a4b38:
      puVar10 = (undefined8 *)&UNK_108cb8000;
code_r0x0001012a4b3c:
      *(undefined **)(unaff_x29 + -0xa0) = (undefined *)((long)puVar10 + 0xd56);
      *(undefined8 *)(unaff_x29 + -0x98) = 0xf;
      puVar6 = (undefined8 *)FUN_100490e6c(&stack0x00000080,unaff_x29 + -0xb0);
      if (puVar6 == (undefined8 *)0x0) {
code_r0x0001012a4b58:
        puVar10 = (undefined8 *)0x8000000000000007;
        goto code_r0x0001012a4e34;
      }
      goto LAB_1012a4e28;
    case 0xd:
    case 0xf:
    case 0x11:
    case 0x13:
    case 0x15:
    case 0x17:
    case 0x19:
    case 0x1b:
    case 0x1d:
    case 0x1f:
    case 0x21:
    case 0x23:
    case 0x25:
    case 0x27:
    case 0x29:
    case 0x2b:
    case 0x2d:
    case 0x31:
    case 0x39:
    case 0x3b:
    case 0x3d:
    case 0x3f:
    case 0x41:
    case 0x43:
    case 0x45:
    case 0x47:
    case 0x49:
    case 0x4b:
    case 0x4d:
    case 0x4f:
    case 0x51:
    case 0x53:
    case 0x57:
    case 0x5d:
    case 0xf0:
      goto code_r0x0001012a48d8;
    case 0xe:
      unaff_x21 = (ulong *)CONCAT17(uStack000000000000008f,uStack0000000000000088);
      uVar16 = unaff_x21[1];
      uVar14 = *unaff_x21;
    case 0x9e:
      unaff_x23[0x11] = uVar16;
      unaff_x23[0x10] = uVar14;
code_r0x0001012a4a10:
      uVar16 = unaff_x21[3];
      uVar14 = unaff_x21[2];
code_r0x0001012a4a14:
      unaff_x23[0x13] = uVar16;
      unaff_x23[0x12] = uVar14;
      func_0x000108803fd8(in_stack_00000030,unaff_x29 + -0xb0);
code_r0x0001012a4a24:
code_r0x0001012a5600:
      _free(unaff_x21);
      return;
    case 0x10:
    case 0x8a:
    case 0xa6:
      goto code_r0x0001012a49bc;
    case 0x12:
      goto code_r0x0001012a49d4;
    case 0x14:
    case 0xc6:
      goto code_r0x0001012a4998;
    case 0x16:
      goto code_r0x0001012a4a30;
    case 0x18:
      goto code_r0x0001012a4a50;
    case 0x1a:
    case 0x44:
    case 0xb:
      uVar12 = (ulong)bStack0000000000000040;
      puVar13 = &UNK_108c9f000;
    case 0x4c:
      UNRECOVERED_JUMPTABLE =
           (code *)(&UNK_1012a4a04 + (ulong)*(ushort *)(puVar13 + uVar12 * 2 + 0xc3e) * 4);
code_r0x0001012a4a00:
                    /* WARNING: Could not recover jumptable at 0x0001012a4a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    case 0x1c:
    case 9:
      unaff_x19 = 0x800000000000000c;
    case 0x76:
    case 0x86:
      *(undefined **)(unaff_x29 + -0xb0) = &UNK_108cb8ca4;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
code_r0x0001012a4a80:
      puVar10 = (undefined8 *)&UNK_108cb8d70;
      uVar11 = 9;
code_r0x0001012a4a8c:
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar10;
      *(ulong *)(unaff_x29 + -0x98) = uVar11;
      puVar6 = (undefined8 *)FUN_100490e6c(&stack0x00000080,unaff_x29 + -0xb0);
      if (puVar6 != (undefined8 *)0x0) goto code_r0x0001012a4c50;
      puVar10 = (undefined8 *)(unaff_x19 - 3);
      goto code_r0x0001012a4e34;
    case 0x1e:
    case 0x38:
      goto code_r0x0001012a49b4;
    case 0x20:
    case 0xe6:
      goto code_r0x0001012a4a58;
    case 0x22:
      goto code_r0x0001012a4978;
    case 0x24:
    case 0xf2:
      puVar10 = in_stack_000000c8;
    case 0x3e:
code_r0x0001012a49ac:
      bStack0000000000000040 = (byte)puVar10;
      uStack0000000000000041 = (uint7)((ulong)puVar10 >> 8);
      goto LAB_1012a49b0;
    case 0x26:
      goto code_r0x0001012a4a38;
    case 0x28:
      goto code_r0x0001012a495c;
    case 0x2a:
      goto code_r0x0001012a49c4;
    case 0x2c:
    case 0xbe:
    case 0xe4:
      goto code_r0x0001012a4954;
    default:
      puVar10 = (undefined8 *)&UNK_108cb8000;
    case 0x33:
    case 0x35:
    case 0x37:
    case 99:
    case 0x71:
    case 0x75:
    case 0x79:
    case 0x93:
    case 0x97:
      puVar10 = (undefined8 *)((long)puVar10 + 0xca4);
code_r0x0001012a48d0:
      uVar11 = 0xc;
code_r0x0001012a48d4:
      *(undefined8 **)(unaff_x29 + -0xb0) = puVar10;
      *(ulong *)(unaff_x29 + -0xa8) = uVar11;
code_r0x0001012a48d8:
      puVar10 = (undefined8 *)&UNK_108cb8000;
code_r0x0001012a48dc:
      *(undefined **)(unaff_x29 + -0xa0) = (undefined *)((long)puVar10 + 0xd2a);
      *(undefined8 *)(unaff_x29 + -0x98) = 0xb;
      puVar6 = (undefined8 *)&stack0x00000080;
      uVar9 = unaff_x29 - 0xb0;
code_r0x0001012a48f0:
      puVar6 = (undefined8 *)FUN_100490e6c(puVar6,uVar9);
      if (puVar6 == (undefined8 *)0x0) {
code_r0x0001012a48f8:
        puVar10 = (undefined8 *)0x8000000000000000;
code_r0x0001012a48fc:
      }
      else {
LAB_1012a4e28:
        puVar10 = (undefined8 *)0x800000000000000c;
        in_stack_00000030[1] = (ulong)puVar6;
      }
      goto code_r0x0001012a4e34;
    case 0x30:
      goto code_r0x0001012a4a8c;
    case 0x32:
    case 6:
      unaff_x19 = 0xc;
    case 200:
      unaff_x19 = unaff_x19 & 0xffffffffffff | 0x8000000000000000;
      *(undefined **)(unaff_x29 + -0xb0) = &UNK_108cb8ca4;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
code_r0x0001012a4bf0:
      puVar10 = (undefined8 *)&UNK_108cb8d4c;
      uVar11 = 10;
code_r0x0001012a4bfc:
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar10;
      *(ulong *)(unaff_x29 + -0x98) = uVar11;
code_r0x0001012a4c00:
      puVar6 = (undefined8 *)FUN_100490e6c(&stack0x00000080,unaff_x29 + -0xb0);
      if (puVar6 != (undefined8 *)0x0) goto code_r0x0001012a4c50;
code_r0x0001012a4c10:
      puVar10 = (undefined8 *)(unaff_x19 - 6);
      goto code_r0x0001012a4e34;
    case 0x34:
      goto code_r0x0001012a4bfc;
    case 0x36:
      goto code_r0x0001012a4924;
    case 0x3a:
    case 0x6c:
      goto code_r0x0001012a49c0;
    case 0x3c:
      goto code_r0x0001012a4984;
    case 0x40:
      unaff_x23[0xe] = 0;
      unaff_x23[0xd] = uVar14;
      bStack0000000000000038 = bVar2;
    case 0x50:
      puVar10 = (undefined8 *)0x15;
code_r0x0001012a4920:
      bStack0000000000000040 = (byte)puVar10;
code_r0x0001012a4924:
      uStack0000000000000058 = (undefined1)unaff_x23[0xf];
      uStack0000000000000059 = (undefined7)((ulong)unaff_x23[0xf] >> 8);
      uStack0000000000000051 = (undefined7)((ulong)unaff_x23[0xe] >> 8);
      uStack0000000000000049 = (undefined7)*(undefined8 *)((long)unaff_x23 + 0x69);
      uStack0000000000000050 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 0x69) >> 0x38);
      uStack0000000000000041 = (uint7)*(undefined8 *)((long)unaff_x23 + 0x61);
      uStack0000000000000048 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x23 + 0x61) >> 0x38);
code_r0x0001012a4934:
      uVar16 = CONCAT71(uStack0000000000000041,bStack0000000000000040);
      uVar14 = CONCAT71(uStack0000000000000039,bStack0000000000000038);
      uVar15 = CONCAT71(uStack0000000000000051,uStack0000000000000050);
      uVar18 = CONCAT71(uStack0000000000000049,uStack0000000000000048);
code_r0x0001012a493c:
      uStack00000000000000a0 = (undefined7)CONCAT71(uStack0000000000000059,uStack0000000000000058);
      uStack00000000000000a7 = (undefined1)((uint7)uStack0000000000000059 >> 0x30);
      uStack0000000000000088 = (uint7)uVar16;
      uStack000000000000008f = (undefined1)(uVar16 >> 0x38);
      uStack0000000000000080 = (undefined7)uVar14;
      bStack0000000000000087 = (byte)(uVar14 >> 0x38);
      uStack0000000000000098 = (undefined7)uVar15;
      uStack000000000000009f = (undefined1)((ulong)uVar15 >> 0x38);
      uStack0000000000000090 = (undefined7)uVar18;
      uStack0000000000000097 = (undefined1)((ulong)uVar18 >> 0x38);
code_r0x0001012a4948:
      unaff_x19 = *(ulong *)(unaff_x29 + -0x88);
code_r0x0001012a494c:
      unaff_x20 = *(ulong *)(unaff_x29 + -0x78);
code_r0x0001012a4950:
      puVar10 = (undefined8 *)(unaff_x29 + -0xb0);
code_r0x0001012a4954:
      FUN_100d34830(puVar10 + 4);
code_r0x0001012a495c:
      bVar3 = unaff_x20 == unaff_x19;
code_r0x0001012a4964:
      if (bVar3) {
code_r0x0001012a4968:
        unaff_x20 = 0;
code_r0x0001012a496c:
        cVar1 = *(char *)(unaff_x29 + -0xb0);
      }
      else {
        in_stack_00000100 = *(long *)(unaff_x29 + -0x70);
        unaff_x20 = FUN_1087e422c(in_stack_00000100 + (unaff_x20 - unaff_x19 >> 6),&stack0x00000100,
                                  &UNK_10b23a190);
        cVar1 = *(char *)(unaff_x29 + -0xb0);
      }
      if (cVar1 != '\x16') {
code_r0x0001012a4978:
        FUN_100e077ec(unaff_x29 + -0xb0);
      }
code_r0x0001012a4980:
      if (unaff_x20 != 0) {
code_r0x0001012a4984:
        bStack0000000000000040 = (byte)unaff_x20;
        uStack0000000000000041 = (uint7)(unaff_x20 >> 8);
        puVar10 = (undefined8 *)0xc;
code_r0x0001012a498c:
        bStack0000000000000038 = (byte)puVar10;
        puVar10 = (undefined8 *)&stack0x00000080;
        goto code_r0x0001012a4994;
      }
      break;
    case 0x42:
    case 0xfc:
      goto code_r0x0001012a49d0;
    case 0x46:
      goto code_r0x0001012a49ac;
    case 0x48:
      goto code_r0x0001012a4a00;
    case 0x4a:
    case 0x9c:
      goto code_r0x0001012a4948;
    case 0x4e:
    case 0xc4:
      goto code_r0x0001012a48dc;
    case 0x52:
    case 0xc2:
      goto code_r0x0001012a49d8;
    case 0x54:
    case 0x8e:
      goto code_r0x0001012a4c84;
    case 0x55:
    case 0x59:
    case 0x9d:
    case 0x9f:
    case 0xa1:
    case 0xa3:
    case 0xa7:
    case 0xa9:
    case 0xab:
    case 0xaf:
    case 0xb1:
    case 0xb7:
      goto code_r0x0001012a48d4;
    case 0x56:
    case 0xa0:
      goto code_r0x0001012a4994;
    case 0x58:
      goto code_r0x0001012a4c70;
    case 0x5c:
      goto code_r0x0001012a4a24;
    case 0x5e:
    case 0x84:
      goto code_r0x0001012a4ba4;
    case 0x5f:
    case 0x61:
    case 0xa2:
    case 0xa5:
    case 0xad:
    case 0xbb:
    case 0xbd:
    case 0xc1:
    case 0xc9:
    case 0xcb:
    case 0xcd:
    case 0xcf:
    case 0xd1:
    case 0xd3:
    case 0xd5:
    case 0xd7:
    case 0xd9:
    case 0xdb:
    case 0xdd:
    case 0xe3:
    case 0xe7:
    case 0xe9:
    case 0xed:
      goto code_r0x0001012a48d0;
    case 0x60:
      goto code_r0x0001012a4bd0;
    case 0x62:
      goto code_r0x0001012a4b7c;
    case 0x66:
      goto code_r0x0001012a4bcc;
    case 0x68:
      goto code_r0x0001012a4ad8;
    case 0x6a:
      goto code_r0x0001012a4b2c;
    case 0x6e:
      goto code_r0x0001012a4c20;
    case 0x70:
      goto code_r0x0001012a48fc;
    case 0x72:
      goto code_r0x0001012a4b80;
    case 0x74:
      goto code_r0x0001012a499c;
    case 0x78:
      goto code_r0x0001012a4950;
    case 0x7a:
      goto code_r0x0001012a4964;
    case 0x7c:
      goto code_r0x0001012a4a14;
    case 0x7e:
      goto code_r0x0001012a4c8c;
    case 0x80:
    case 0x98:
      goto code_r0x0001012a4934;
    case 0x88:
      goto code_r0x0001012a4adc;
    case 0x8c:
      goto code_r0x0001012a4c10;
    case 0x90:
      goto code_r0x0001012a4b38;
    case 0x92:
      goto code_r0x0001012a494c;
    case 0x94:
      goto code_r0x0001012a4a40;
    case 0x96:
      goto code_r0x0001012a48f0;
    case 0x9a:
      goto code_r0x0001012a4a10;
    case 0xa4:
      goto code_r0x0001012a4c80;
    case 0xa8:
code_r0x0001012a49e4:
      break;
    case 0xaa:
      goto code_r0x0001012a496c;
    case 0xac:
      if (in_stack_000000e0 != '\x16') goto code_r0x0001012a4cd0;
      bStack0000000000000040 = (byte)in_stack_000000e8;
      uStack0000000000000041 = (uint7)((ulong)in_stack_000000e8 >> 8);
      bStack0000000000000038 = 0xc;
      lVar7 = ((ulong)(in_stack_00000118 - (long)in_stack_00000108) >> 5) + 1;
      puVar5 = in_stack_00000108;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        puVar5 = puVar5 + 4;
        FUN_100e077ec();
        unaff_x21 = puVar5;
      }
      unaff_x19 = 0;
      if (in_stack_00000110 != 0) {
        _free(in_stack_00000100);
      }
      break;
    case 0xae:
      goto code_r0x0001012a4a34;
    case 0xb0:
      goto code_r0x0001012a48f8;
    case 0xb4:
      goto code_r0x0001012a4980;
    case 0xb6:
      goto code_r0x0001012a4920;
    case 0xb8:
      goto code_r0x0001012a493c;
    case 0xba:
    case 8:
      puVar10 = (undefined8 *)&UNK_108cb8ca4;
    case 0xfe:
      *(undefined8 **)(unaff_x29 + -0xb0) = puVar10;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
      puVar10 = (undefined8 *)&UNK_108cb8000;
code_r0x0001012a4c6c:
      puVar10 = (undefined8 *)((long)puVar10 + 0xd65);
code_r0x0001012a4c70:
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar10;
      *(undefined8 *)(unaff_x29 + -0x98) = 0xb;
      puVar6 = (undefined8 *)&stack0x00000080;
      uVar9 = unaff_x29 - 0xb0;
code_r0x0001012a4c80:
      puVar6 = (undefined8 *)FUN_100490e6c(puVar6,uVar9);
code_r0x0001012a4c84:
      if (puVar6 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0xc;
code_r0x0001012a4c8c:
        puVar10 = (undefined8 *)(((ulong)puVar10 & 0xffffffffffff | 0x8000000000000000) - 4);
        goto code_r0x0001012a4e34;
      }
      goto LAB_1012a4e28;
    case 0xbc:
    case 10:
      unaff_x19 = 0xc;
    case 0xee:
      unaff_x19 = unaff_x19 & 0xffffffffffff | 0x8000000000000000;
code_r0x0001012a4c20:
      puVar10 = (undefined8 *)&UNK_108cb8ca4;
code_r0x0001012a4c28:
      *(undefined8 **)(unaff_x29 + -0xb0) = puVar10;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
      puVar10 = (undefined8 *)&UNK_108cb8d79;
code_r0x0001012a4c38:
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar10;
      *(undefined8 *)(unaff_x29 + -0x98) = 10;
      puVar6 = (undefined8 *)&stack0x00000080;
      uVar9 = unaff_x29 - 0xb0;
code_r0x0001012a4c48:
      puVar6 = (undefined8 *)FUN_100490e6c(puVar6,uVar9);
      if (puVar6 != (undefined8 *)0x0) goto code_r0x0001012a4c50;
      puVar10 = (undefined8 *)(unaff_x19 - 2);
      goto code_r0x0001012a4e34;
    case 0xc0:
      goto code_r0x0001012a4c38;
    case 0xca:
      goto code_r0x0001012a4a80;
    case 0xcc:
      goto code_r0x0001012a4bb4;
    case 0xce:
      goto code_r0x0001012a4b8c;
    case 0xd0:
      goto code_r0x0001012a4b3c;
    case 0xd2:
    case 2:
      *(undefined **)(unaff_x29 + -0xb0) = &UNK_108cb8ca4;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
      *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cb8d3f;
      *(undefined8 *)(unaff_x29 + -0x98) = 10;
      puVar6 = (undefined8 *)&stack0x00000080;
      uVar9 = unaff_x29 - 0xb0;
    case 0xdc:
      puVar6 = (undefined8 *)FUN_100490e6c(puVar6,uVar9);
      if (puVar6 == (undefined8 *)0x0) {
code_r0x0001012a4ad8:
        puVar10 = (undefined8 *)0xc;
code_r0x0001012a4adc:
        puVar10 = (undefined8 *)(((ulong)puVar10 & 0xffffffffffff | 0x8000000000000000) - 10);
        goto code_r0x0001012a4e34;
      }
      goto LAB_1012a4e28;
    case 0xd4:
      goto code_r0x0001012a4c00;
    case 0xd6:
      goto code_r0x0001012a4b14;
    case 0xd8:
      goto code_r0x0001012a4c48;
    case 0xda:
    case 1:
      *(undefined **)(unaff_x29 + -0xb0) = &UNK_108cb8ca4;
      *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
      puVar10 = (undefined8 *)&UNK_108cb8d35;
      uVar11 = 10;
code_r0x0001012a4b7c:
      *(undefined8 **)(unaff_x29 + -0xa0) = puVar10;
      *(ulong *)(unaff_x29 + -0x98) = uVar11;
code_r0x0001012a4b80:
      puVar6 = (undefined8 *)FUN_100490e6c(&stack0x00000080,unaff_x29 + -0xb0);
code_r0x0001012a4b8c:
      if (puVar6 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x8000000000000001;
        goto code_r0x0001012a4e34;
      }
      goto LAB_1012a4e28;
    case 0xe0:
      goto code_r0x0001012a498c;
    case 0xe2:
      goto code_r0x0001012a4c6c;
    case 0xe8:
      goto code_r0x0001012a4af4;
    case 0xea:
      goto code_r0x0001012a4968;
    case 0xec:
      goto code_r0x0001012a4c28;
    case 0xf6:
      goto code_r0x0001012a4bf0;
    case 0xf8:
      unaff_x23[0x11] = 0;
      unaff_x23[0x10] = uVar14;
      uVar16 = unaff_x21[3];
      uVar14 = unaff_x21[2];
code_r0x0001012a4b14:
      unaff_x23[0x13] = uVar16;
      unaff_x23[0x12] = uVar14;
      func_0x0001087ff5c4(in_stack_00000030,unaff_x29 + -0xb0);
      goto code_r0x0001012a5600;
    case 0xfa:
      goto code_r0x0001012a4b58;
    }
  } while( true );
code_r0x0001012a4cd0:
  uVar18 = unaff_x23[1];
  uVar17 = *unaff_x23;
  uVar8 = unaff_x23[3];
  uVar15 = unaff_x23[2];
  uStack000000000000009f = (undefined1)uVar8;
  uStack0000000000000058 = uStack000000000000009f;
  uStack00000000000000a0 = (undefined7)((ulong)uVar8 >> 8);
  uStack0000000000000059 = uStack00000000000000a0;
  uStack0000000000000097 = (undefined1)uVar15;
  uStack0000000000000098 = (undefined7)((ulong)uVar15 >> 8);
  uStack000000000000008f = (undefined1)uVar18;
  uStack0000000000000090 = (undefined7)((ulong)uVar18 >> 8);
  bStack0000000000000087 = (byte)uVar17;
  uStack0000000000000088 = (uint7)((ulong)uVar17 >> 8);
  uStack0000000000000051 = uStack0000000000000098;
  uStack0000000000000049 = uStack0000000000000090;
  uStack0000000000000050 = uStack0000000000000097;
  uStack0000000000000041 = uStack0000000000000088;
  uStack0000000000000048 = uStack000000000000008f;
  uStack0000000000000039 = uStack0000000000000080;
  bStack0000000000000040 = bStack0000000000000087;
  *(undefined8 *)(unaff_x29 + -0x90) = uVar8;
  unaff_x23[0x11] = uVar17;
  unaff_x23[0x10] = CONCAT71(uStack0000000000000080,bVar2);
  unaff_x23[0x13] = uVar15;
  unaff_x23[0x12] = uVar18;
  lVar7 = FUN_100fbc738(&stack0x00000100);
  bStack0000000000000038 = bVar2;
  if (lVar7 != 0) {
    bStack0000000000000040 = (byte)lVar7;
    uStack0000000000000041 = (uint7)((ulong)lVar7 >> 8);
    bStack0000000000000038 = 0xc;
    puVar10 = (undefined8 *)(unaff_x29 + -0xb0);
code_r0x0001012a4994:
    puVar6 = (undefined8 *)((ulong)puVar10 | 8);
code_r0x0001012a4998:
    FUN_100e077ec(puVar6);
code_r0x0001012a499c:
  }
  goto LAB_1012a487c;
code_r0x0001012a4a30:
  puVar10 = (undefined8 *)&UNK_108cb8000;
code_r0x0001012a4a34:
  puVar10 = (undefined8 *)((long)puVar10 + 0xca4);
code_r0x0001012a4a38:
  *(undefined8 **)(unaff_x29 + -0xb0) = puVar10;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0xc;
code_r0x0001012a4a40:
  *(undefined **)(unaff_x29 + -0xa0) = &UNK_108cb8d49;
  *(undefined8 *)(unaff_x29 + -0x98) = 3;
code_r0x0001012a4a50:
  puVar6 = (undefined8 *)&stack0x00000080;
  uVar9 = unaff_x29 - 0xb0;
code_r0x0001012a4a58:
  puVar6 = (undefined8 *)FUN_100490e6c(puVar6,uVar9);
  if (puVar6 != (undefined8 *)0x0) {
code_r0x0001012a4c50:
    *in_stack_00000030 = unaff_x19;
    in_stack_00000030[1] = (ulong)puVar6;
    return;
  }
  puVar10 = (undefined8 *)(unaff_x19 - 8);
code_r0x0001012a4e34:
  *in_stack_00000030 = (ulong)puVar10;
  return;
}

