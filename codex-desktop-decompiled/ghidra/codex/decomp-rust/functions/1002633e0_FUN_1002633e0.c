
void FUN_1002633e0(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  code *pcVar25;
  undefined *puVar26;
  char cVar27;
  long unaff_x20;
  ulong unaff_x21;
  ulong unaff_x23;
  ulong uVar28;
  long unaff_x24;
  ulong uVar29;
  ulong uVar30;
  long unaff_x29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  char cStack00000000000000f8;
  undefined7 uStack00000000000000f9;
  ulong in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  byte bStack00000000000001d8;
  undefined7 uStack00000000000001d9;
  ulong in_stack_000003a0;
  ulong in_stack_000003a8;
  ulong in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  long in_stack_000003c8;
  long in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  ulong in_stack_00000460;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000003a0,s_AWS4_108ab883b,&stack0x000002e0);
  FUN_10025cc1c(&stack0x000003a0,in_stack_000003a8,in_stack_000003b0);
  if ((in_stack_000003a0 & 1) == 0) {
    in_stack_00000040 = in_stack_000003a8;
    in_stack_00000048 = in_stack_000003b0;
    in_stack_00000050 = in_stack_000003b8;
    in_stack_00000058 = in_stack_000003c0;
    in_stack_00000060 = in_stack_000003c8;
    in_stack_00000068 = in_stack_000003d0;
    in_stack_00000070 = in_stack_000003d8;
    in_stack_00000078 = in_stack_000003e0;
    in_stack_00000080 = in_stack_000003e8;
    in_stack_00000088 = in_stack_000003f0;
    in_stack_00000090 = in_stack_000003f8;
    in_stack_00000098 = in_stack_00000400;
    in_stack_000000a0 = in_stack_00000408;
    in_stack_000000a8 = in_stack_00000410;
    in_stack_000000b0 = in_stack_00000418;
    in_stack_000000b8 = in_stack_00000420;
    in_stack_000000c0 = in_stack_00000428;
    in_stack_000000c8 = in_stack_00000430;
    in_stack_000000d0 = in_stack_00000438;
    in_stack_000000d8 = in_stack_00000440;
    in_stack_000000e0 = in_stack_00000448;
    in_stack_000000e8 = in_stack_00000450;
    in_stack_000000f0 = in_stack_00000458;
    _cStack00000000000000f8 = in_stack_00000460;
    FUN_100263a4c(&stack0x000003a0);
    cVar27 = cStack00000000000000f8;
    uVar28 = _cStack00000000000000f8 & 0xff;
    uVar30 = 0x40 - uVar28;
    if (in_stack_000003b0 < uVar30) {
      _memcpy((long)&stack0x000000b8 + uVar28,in_stack_000003a8,in_stack_000003b0);
      _cStack00000000000000f8 = CONCAT71(uStack00000000000000f9,(char)in_stack_000003b0 + cVar27);
    }
    else {
      uVar29 = in_stack_000003a8;
      if (cStack00000000000000f8 != '\0') {
        _memcpy((long)&stack0x000000b8 + uVar28,in_stack_000003a8,uVar30);
        in_stack_00000060 = in_stack_00000060 + 1;
        __ZN4sha26sha25611compress25617h5e1e188be4b779acE(&stack0x00000040,&stack0x000000b8,1);
        uVar29 = in_stack_000003a8 + uVar30;
        in_stack_000003b0 = in_stack_000003b0 - uVar30;
      }
      if (0x3f < in_stack_000003b0) {
        in_stack_00000060 = in_stack_00000060 + (in_stack_000003b0 >> 6);
        __ZN4sha26sha25611compress25617h5e1e188be4b779acE(&stack0x00000040,uVar29);
      }
      _memcpy(&stack0x000000b8,uVar29 + (in_stack_000003b0 & 0x7fffffffffffffc0),
              in_stack_000003b0 & 0x3f);
      _cStack00000000000000f8 = CONCAT71(uStack00000000000000f9,(char)(in_stack_000003b0 & 0x3f));
    }
    if (in_stack_000003a0 != 0) {
      _free(in_stack_000003a8);
    }
    uVar23 = _cStack00000000000000f8;
    uVar22 = in_stack_000000f0;
    uVar21 = in_stack_000000e8;
    uVar20 = in_stack_000000e0;
    uVar19 = in_stack_000000d8;
    uVar18 = in_stack_000000d0;
    uVar17 = in_stack_000000c8;
    uVar16 = in_stack_000000c0;
    uVar15 = in_stack_000000b8;
    uVar14 = in_stack_000000b0;
    uVar13 = in_stack_000000a8;
    uVar12 = in_stack_000000a0;
    uVar11 = in_stack_00000098;
    uVar10 = in_stack_00000090;
    uVar9 = in_stack_00000088;
    uVar8 = in_stack_00000080;
    uVar7 = in_stack_00000078;
    uVar6 = in_stack_00000070;
    lVar5 = in_stack_00000068;
    lVar4 = in_stack_00000060;
    uVar3 = in_stack_00000058;
    uVar2 = in_stack_00000050;
    uVar30 = in_stack_00000048;
    uVar28 = in_stack_00000040;
    FUN_10025c088(&stack0x00000100,&stack0x000003a0);
    FUN_10025cc1c(&stack0x000003a0,&stack0x00000100,0x20);
    if ((uVar28 & 1) == 0) {
      in_stack_000001a8 = uVar18;
      in_stack_000001a0 = uVar17;
      in_stack_000001b8 = uVar20;
      in_stack_000001b0 = uVar19;
      in_stack_000001c8 = uVar22;
      in_stack_000001c0 = uVar21;
      in_stack_000001d0 = uVar23;
      in_stack_00000168 = uVar10;
      in_stack_00000160 = uVar9;
      in_stack_00000178 = uVar12;
      in_stack_00000170 = uVar11;
      in_stack_00000188 = uVar14;
      in_stack_00000180 = uVar13;
      in_stack_00000198 = uVar16;
      in_stack_00000190 = uVar15;
      in_stack_00000128 = uVar2;
      in_stack_00000120 = uVar30;
      in_stack_00000138 = lVar4;
      in_stack_00000130 = uVar3;
      bStack00000000000001d8 = (byte)in_stack_00000460;
      bVar24 = bStack00000000000001d8;
      uVar30 = in_stack_00000460 & 0xff;
      uVar28 = 0x40 - uVar30;
      in_stack_00000148 = uVar6;
      in_stack_00000140 = lVar5;
      in_stack_00000158 = uVar8;
      in_stack_00000150 = uVar7;
      _bStack00000000000001d8 = in_stack_00000460;
      if (unaff_x23 < uVar28) {
        _memcpy((long)&stack0x00000198 + uVar30,unaff_x24,unaff_x23);
        cVar27 = (char)unaff_x23 + bVar24;
      }
      else {
        bVar1 = bStack00000000000001d8 != 0;
        if (bVar1) {
          _memcpy((long)&stack0x00000198 + uVar30,unaff_x24,uVar28);
          in_stack_00000140 = in_stack_00000140 + 1;
          __ZN4sha26sha25611compress25617h5e1e188be4b779acE(&stack0x00000120,&stack0x00000198,1);
          unaff_x24 = unaff_x24 + uVar28;
          unaff_x23 = unaff_x23 - uVar28;
        }
        if (0x3f < unaff_x23) {
          in_stack_00000140 = in_stack_00000140 + (unaff_x23 >> 6);
          __ZN4sha26sha25611compress25617h5e1e188be4b779acE(&stack0x00000120,unaff_x24);
        }
        cVar27 = (char)(unaff_x23 & 0x3f);
        _memcpy(&stack0x00000198,unaff_x24 + (unaff_x23 & 0x7fffffffffffffc0),unaff_x23 & 0x3f);
      }
      uVar2 = in_stack_00000128;
      uVar28 = in_stack_00000120;
      _bStack00000000000001d8 = CONCAT71(uStack00000000000001d9,cVar27);
      FUN_10025c088(&stack0x000001e0,&stack0x000003a0);
      FUN_10025cc1c(&stack0x000003a0,&stack0x000001e0,0x20);
      if ((uVar28 & 1) == 0) {
        uVar30 = in_stack_00000460 & 0xff;
        uVar28 = 0x40 - uVar30;
        if (unaff_x21 < uVar28) {
          _memcpy(&stack0x00000278 + uVar30,unaff_x20,unaff_x21);
        }
        else {
          if (bVar24 != 0) {
            _memcpy(&stack0x00000278 + uVar30,unaff_x20,uVar28);
            __ZN4sha26sha25611compress25617h5e1e188be4b779acE(&stack0x00000200,&stack0x00000278,1);
            unaff_x20 = unaff_x20 + uVar28;
            unaff_x21 = unaff_x21 - uVar28;
          }
          if (0x3f < unaff_x21) {
            __ZN4sha26sha25611compress25617h5e1e188be4b779acE(&stack0x00000200,unaff_x20);
          }
          _memcpy(&stack0x00000278,unaff_x20 + (unaff_x21 & 0x7fffffffffffffc0),unaff_x21 & 0x3f);
        }
        FUN_10025c088(&stack0x000002c0,&stack0x000003a0);
        FUN_10025cc1c(&stack0x000003a0,&stack0x000002c0,0x20);
        if ((int)uVar2 != 1) {
          uVar28 = in_stack_00000460 & 0xff;
          if (bVar24 < 0x34) {
            *(undefined8 *)(&stack0x00000358 + uVar28) = 0x7165725f34737761;
            *(undefined4 *)(&stack0x00000360 + uVar28) = 0x74736575;
          }
          else {
            _memcpy(&stack0x00000358 + uVar28,&UNK_108c7348e,-uVar28 + 0x40);
            __ZN4sha26sha25611compress25617h5e1e188be4b779acE(&stack0x000002e0,&stack0x00000358,1);
            _memcpy(&stack0x00000358,&UNK_108c734ce + (uVar28 - 0x34 & 0x7fffffffffffffc0) + -uVar28
                    ,uVar28 - 0x34);
          }
          FUN_10025c088(in_stack_00000010,&stack0x000003a0);
          if (in_stack_000003a0 != 0) {
            _free(in_stack_000003a8);
          }
          return;
        }
        puVar26 = &UNK_10b1f2c58;
      }
      else {
        puVar26 = &UNK_10b1f2c40;
      }
    }
    else {
      puVar26 = &UNK_10b1f2c28;
    }
  }
  else {
    puVar26 = &UNK_10b1f2c10;
  }
  FUN_107c05cb4(&UNK_108c73471,0x1d,unaff_x29 + -0x61,&UNK_10b1f2128,puVar26);
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x100263a14);
  (*pcVar25)();
}

