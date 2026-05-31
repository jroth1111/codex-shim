
void FUN_10091bebc(void)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar8;
  undefined8 *unaff_x21;
  undefined8 uVar9;
  long *plVar10;
  undefined1 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined7 uStack0000000000000010;
  undefined1 uStack0000000000000017;
  ulong in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000f0;
  undefined1 uStack00000000000000f8;
  undefined7 uStack00000000000000f9;
  undefined1 uStack0000000000000100;
  undefined7 uStack0000000000000101;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined1 uStack0000000000000197;
  undefined7 uStack0000000000000198;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000000f0,s_logout_failed__108acb407,&stack0x00000050);
  uVar5 = uStack00000000000000f8;
  lVar7 = in_stack_000000f0;
  *(ulong *)(unaff_x29 + -0x70) = CONCAT17(uStack0000000000000100,uStack00000000000000f9);
  uStack0000000000000197 = uStack0000000000000100;
  uStack0000000000000198 = uStack0000000000000101;
  if ((in_stack_00000048 & 3) == 1) {
    uVar9 = *(undefined8 *)(in_stack_00000048 - 1);
    puVar8 = *(undefined8 **)(in_stack_00000048 + 7);
    pcVar6 = (code *)*puVar8;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar9);
    }
    if (puVar8[1] != 0) {
      _free(uVar9);
    }
    _free((undefined8 *)(in_stack_00000048 - 1));
  }
  uStack0000000000000010 = (undefined7)*(undefined8 *)(unaff_x29 + -0x70);
  uStack0000000000000017 = uStack0000000000000197;
  *(undefined1 *)unaff_x28 = 1;
  if (lVar7 == -0x7fffffffffffffff) {
    uVar5 = 3;
  }
  else {
    plVar10 = (long *)(unaff_x19 + 0x60);
    *(undefined1 *)plVar10 = uVar5;
    *(undefined1 *)(unaff_x19 + 0xc4) = 1;
    *(long *)(unaff_x19 + 0x58) = lVar7;
    *(ulong *)(unaff_x19 + 0x61) = CONCAT17(uStack0000000000000197,uStack0000000000000010);
    *(ulong *)(unaff_x19 + 0x68) = CONCAT71(uStack0000000000000198,uStack0000000000000197);
    *(undefined8 *)(unaff_x19 + 0x70) = 0x8000000000000005;
    *(undefined8 *)(unaff_x19 + 0xb8) = 0xffffffffffff80a5;
    FUN_100d34c70();
    lVar7 = *(long *)(unaff_x19 + 0x58);
    if (lVar7 == -0x8000000000000000) {
      uVar5 = *(undefined1 *)plVar10;
    }
    else {
      uVar5 = 5;
    }
    *(undefined1 *)(unaff_x19 + 0xc0) = uVar5;
    *(undefined1 *)(unaff_x19 + 0xc1) = 0xc;
    lVar1 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x148) + 0x10;
    *(undefined1 *)(unaff_x19 + 0xc3) = 0;
    *(undefined1 *)(unaff_x19 + 0xc4) = 0;
    if (lVar7 != -0x8000000000000000) {
      in_stack_00000118 = *(undefined8 *)(unaff_x19 + 0x88);
      in_stack_00000110 = *(undefined8 *)(unaff_x19 + 0x80);
      in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0x98);
      in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0x90);
      in_stack_00000138 = *(undefined8 *)(unaff_x19 + 0xa8);
      in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0xa0);
      in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0xb8);
      in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0xb0);
      in_stack_000000f0 = *plVar10;
      in_stack_00000108 = *(undefined8 *)(unaff_x19 + 0x78);
      uStack00000000000000f8 = (undefined1)*(undefined8 *)(unaff_x19 + 0x68);
      uStack00000000000000f9 = (undefined7)((ulong)*(undefined8 *)(unaff_x19 + 0x68) >> 8);
      uStack0000000000000100 = (undefined1)*(undefined8 *)(unaff_x19 + 0x70);
      uStack0000000000000101 = (undefined7)((ulong)*(undefined8 *)(unaff_x19 + 0x70) >> 8);
    }
    uVar9 = *(undefined8 *)(unaff_x19 + 0xd40);
    in_stack_00000078 = in_stack_00000118;
    in_stack_00000070 = in_stack_00000110;
    in_stack_00000088 = in_stack_00000128;
    in_stack_00000080 = in_stack_00000120;
    in_stack_00000098 = in_stack_00000138;
    in_stack_00000090 = in_stack_00000130;
    in_stack_000000a8 = in_stack_00000148;
    in_stack_000000a0 = in_stack_00000140;
    in_stack_00000058 = CONCAT71(uStack00000000000000f9,uStack00000000000000f8);
    in_stack_00000060 = CONCAT71(uStack0000000000000101,uStack0000000000000100);
    in_stack_00000050 = in_stack_000000f0;
    in_stack_00000068 = in_stack_00000108;
    puVar8 = (undefined8 *)(unaff_x19 + 200);
    *puVar8 = *(undefined8 *)(unaff_x19 + 0xd30);
    *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x19 + 0xd38);
    unaff_x28[1] = *(undefined8 *)(unaff_x19 + 0xd48);
    *unaff_x28 = uVar9;
    *(long *)(unaff_x19 + 0xe8) = lVar7;
    *(undefined8 *)(unaff_x19 + 0x118) = in_stack_00000118;
    *(undefined8 *)(unaff_x19 + 0x110) = in_stack_00000110;
    *(undefined8 *)(unaff_x19 + 0x128) = in_stack_00000128;
    *(undefined8 *)(unaff_x19 + 0x120) = in_stack_00000120;
    *(undefined8 *)(unaff_x19 + 0x138) = in_stack_00000138;
    *(undefined8 *)(unaff_x19 + 0x130) = in_stack_00000130;
    *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00000148;
    *(undefined8 *)(unaff_x19 + 0x140) = in_stack_00000140;
    *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_00000058;
    *(long *)(unaff_x19 + 0xf0) = in_stack_000000f0;
    *(undefined8 *)(unaff_x19 + 0x108) = in_stack_00000108;
    *(undefined8 *)(unaff_x19 + 0x100) = in_stack_00000060;
    *(long *)(unaff_x19 + 0x150) = lVar1;
    puVar2 = (undefined1 *)(unaff_x19 + 0x1c0);
    *(undefined1 *)(unaff_x19 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x19 + 0x1b8) = *(undefined8 *)(unaff_x19 + 0x148);
    *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0xf0);
    *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0xe8);
    *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x19 + 0x100);
    *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0xf8);
    *(undefined8 *)(unaff_x19 + 0x1a0) = *(undefined8 *)(unaff_x19 + 0x130);
    *(undefined8 *)(unaff_x19 + 0x198) = *(undefined8 *)(unaff_x19 + 0x128);
    *(undefined8 *)(unaff_x19 + 0x1b0) = *(undefined8 *)(unaff_x19 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x19 + 0x138);
    *(undefined8 *)(unaff_x19 + 0x180) = *(undefined8 *)(unaff_x19 + 0x110);
    *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x19 + 0x108);
    *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x19 + 0x120);
    *(undefined8 *)(unaff_x19 + 0x188) = *(undefined8 *)(unaff_x19 + 0x118);
    if (*(long *)(unaff_x19 + 0x158) == -0x8000000000000000) {
      *(undefined8 *)(unaff_x19 + 0x1d0) = *(undefined8 *)(unaff_x19 + 0xd0);
      *(undefined8 *)(unaff_x19 + 0x1c8) = *puVar8;
      *(undefined8 *)(unaff_x19 + 0x1e0) = *(undefined8 *)(unaff_x19 + 0xe0);
      *(undefined8 *)(unaff_x19 + 0x1d8) = *(undefined8 *)(unaff_x19 + 0xd8);
      *(long *)(unaff_x19 + 0x1e8) = lVar1;
      *(undefined1 *)(unaff_x19 + 0xff0) = 0;
      *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x1c8);
      *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x1d0);
      *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x1e0);
      *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x1d8);
      *(undefined8 *)(unaff_x19 + 0x210) = 0x8000000000000054;
      *(long *)(unaff_x19 + 0x5c8) = lVar1;
      *(undefined1 *)(unaff_x19 + 0x660) = 0;
      iVar3 = FUN_100892e70(unaff_x19 + 0x1f0);
      if (iVar3 == 0) {
        FUN_100cf6de0(unaff_x19 + 0x1f0);
        *(undefined1 *)(unaff_x19 + 0xff0) = 1;
LAB_10091c330:
        *puVar2 = 1;
        FUN_100db1cf4(puVar8);
        if (*(char *)(unaff_x19 + 0xc0) != '\x05') {
          lVar7 = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x148);
          *(undefined8 *)(unaff_x19 + 200) = 0x8000000000000024;
          lVar7 = lVar7 + 0x10;
          *(char *)(unaff_x19 + 0xd0) = *(char *)(unaff_x19 + 0xc0);
          *(undefined1 *)(unaff_x19 + 0xd1) = *(undefined1 *)(unaff_x19 + 0xc1);
          *(long *)(unaff_x19 + 0x2c0) = lVar7;
          *(undefined1 *)(unaff_x19 + 0xd98) = 0;
          _memcpy(unaff_x19 + 0x2c8,(undefined8 *)(unaff_x19 + 200),0x1f8);
          *(long *)(unaff_x19 + 0x4c0) = lVar7;
          *(undefined8 *)(unaff_x19 + 0x4c8) = 8;
          *(undefined8 *)(unaff_x19 + 0x4d0) = 0;
          *(undefined1 *)(unaff_x19 + 0x6d8) = 0;
          uVar4 = FUN_100897c70(unaff_x19 + 0x2c8);
          if ((uVar4 & 1) != 0) {
            *(undefined1 *)(unaff_x19 + 0xd98) = 3;
            uVar5 = 5;
            goto LAB_10091bdc0;
          }
          FUN_100d40d08(unaff_x19 + 0x2c8);
          *(undefined1 *)(unaff_x19 + 0xd98) = 1;
        }
        *(undefined1 *)(unaff_x19 + 0xc4) = 0;
        *(undefined2 *)(unaff_x19 + 0xc2) = 1;
        FUN_100d27164(unaff_x20);
        unaff_x21[1] = 0x8000000000000000;
        *unaff_x21 = 0x800000000000006f;
        uVar5 = 1;
        goto LAB_10091bdd0;
      }
      *(undefined1 *)(unaff_x19 + 0xff0) = 3;
      *puVar2 = 3;
      uVar5 = 4;
    }
    else {
      in_stack_00000150 = *(undefined8 *)(unaff_x19 + 0x148);
      in_stack_00000138 = *(undefined8 *)(unaff_x19 + 0x130);
      in_stack_00000130 = *(undefined8 *)(unaff_x19 + 0x128);
      in_stack_00000148 = *(undefined8 *)(unaff_x19 + 0x140);
      in_stack_00000140 = *(undefined8 *)(unaff_x19 + 0x138);
      uVar9 = *(undefined8 *)(unaff_x19 + 0xf0);
      in_stack_000000f0 = *(long *)(unaff_x19 + 0xe8);
      in_stack_00000108 = *(undefined8 *)(unaff_x19 + 0x100);
      uVar11 = *(undefined8 *)(unaff_x19 + 0xf8);
      uStack00000000000000f8 = (undefined1)uVar9;
      uStack00000000000000f9 = (undefined7)((ulong)uVar9 >> 8);
      uStack0000000000000100 = (undefined1)uVar11;
      uStack0000000000000101 = (undefined7)((ulong)uVar11 >> 8);
      in_stack_00000118 = *(undefined8 *)(unaff_x19 + 0x110);
      in_stack_00000110 = *(undefined8 *)(unaff_x19 + 0x108);
      in_stack_00000128 = *(undefined8 *)(unaff_x19 + 0x120);
      in_stack_00000120 = *(undefined8 *)(unaff_x19 + 0x118);
      in_stack_00000160 = *(undefined8 *)(unaff_x19 + 0xd0);
      in_stack_00000158 = *puVar8;
      in_stack_00000170 = *(undefined8 *)(unaff_x19 + 0xe0);
      in_stack_00000168 = *(undefined8 *)(unaff_x19 + 0xd8);
      *(undefined8 *)(unaff_x19 + 0x230) = in_stack_00000158;
      *(undefined8 *)(unaff_x19 + 0x228) = in_stack_00000150;
      *(undefined8 *)(unaff_x19 + 0x240) = in_stack_00000168;
      *(undefined8 *)(unaff_x19 + 0x238) = in_stack_00000160;
      *(undefined8 *)(unaff_x19 + 0x248) = in_stack_00000170;
      *(undefined8 *)(unaff_x19 + 0x1f0) = in_stack_00000118;
      *(undefined8 *)(unaff_x19 + 0x1e8) = in_stack_00000110;
      *(undefined8 *)(unaff_x19 + 0x200) = in_stack_00000128;
      *(undefined8 *)(unaff_x19 + 0x1f8) = in_stack_00000120;
      *(undefined8 *)(unaff_x19 + 0x210) = in_stack_00000138;
      *(undefined8 *)(unaff_x19 + 0x208) = in_stack_00000130;
      *(undefined8 *)(unaff_x19 + 0x220) = in_stack_00000148;
      *(undefined8 *)(unaff_x19 + 0x218) = in_stack_00000140;
      *(undefined8 *)(unaff_x19 + 0x1d0) = uVar9;
      *(long *)(unaff_x19 + 0x1c8) = in_stack_000000f0;
      *(undefined8 *)(unaff_x19 + 0x1e0) = in_stack_00000108;
      *(undefined8 *)(unaff_x19 + 0x1d8) = uVar11;
      *(long *)(unaff_x19 + 0x250) = lVar1;
      *(undefined1 *)(unaff_x19 + 0x280) = 0;
      iVar3 = FUN_1008927b8(unaff_x19 + 0x1c8);
      if (iVar3 == 0) {
        FUN_100d84c5c(unaff_x19 + 0x1c8);
        goto LAB_10091c330;
      }
      *puVar2 = 4;
      uVar5 = 4;
    }
  }
LAB_10091bdc0:
  *unaff_x27 = uVar5;
  *unaff_x21 = 0x8000000000000071;
  uVar5 = 3;
LAB_10091bdd0:
  *(undefined1 *)(unaff_x19 + 0xff8) = uVar5;
  return;
}

