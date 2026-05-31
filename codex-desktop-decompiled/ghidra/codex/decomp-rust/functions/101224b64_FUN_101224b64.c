
/* WARNING: Removing unreachable block (ram,0x000101224f00) */
/* WARNING: Removing unreachable block (ram,0x000101224b18) */
/* WARNING: Removing unreachable block (ram,0x000101224b34) */
/* WARNING: Removing unreachable block (ram,0x000101224d7c) */
/* WARNING: Removing unreachable block (ram,0x000101224ee8) */
/* WARNING: Removing unreachable block (ram,0x000101224f34) */
/* WARNING: Removing unreachable block (ram,0x000101224ef8) */
/* WARNING: Removing unreachable block (ram,0x000101224f58) */
/* WARNING: Removing unreachable block (ram,0x000101224d90) */
/* WARNING: Removing unreachable block (ram,0x000101224f60) */
/* WARNING: Removing unreachable block (ram,0x000101224dc8) */
/* WARNING: Removing unreachable block (ram,0x000101224f64) */
/* WARNING: Removing unreachable block (ram,0x000101224a38) */
/* WARNING: Removing unreachable block (ram,0x000101225070) */

void FUN_101224b64(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *plVar8;
  undefined8 *unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  undefined *unaff_x27;
  long unaff_x29;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined *puStack0000000000000038;
  undefined *puStack0000000000000040;
  long in_stack_00000048;
  long in_stack_00000058;
  long *in_stack_00000060;
  long in_stack_00000068;
  undefined8 *in_stack_00000070;
  long *in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined *in_stack_000001e0;
  undefined8 in_stack_000001e8;
  char cVar12;
  undefined8 *in_stack_00000260;
  long *in_stack_00000268;
  long in_stack_00000270;
  long in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  long in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  
  FUN_108856088(s_missing_field_____108ac28f7,param_2);
  puStack0000000000000038 = (undefined *)0x0;
  puStack0000000000000040 = unaff_x27;
LAB_101224ba8:
  if (unaff_x22 == (undefined8 *)0x8000000000000002) goto LAB_101224bd4;
  if (unaff_x22 == (undefined8 *)0x8000000000000001) goto LAB_101224bd4;
LAB_101224bc4:
  FUN_100e133d4(&stack0x00000330);
LAB_101224bd4:
  if (((ulong)puStack0000000000000040 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000018);
  }
  if (((ulong)puStack0000000000000038 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000030);
  }
  *(char *)(unaff_x25 + 0x48) = *(char *)(unaff_x25 + 0x48) + '\x01';
  plVar3 = (long *)FUN_100654604(unaff_x25);
  *(undefined8 *)(unaff_x23 + 0x278) = *(undefined8 *)(unaff_x23 + 0x348);
  *(undefined8 *)(unaff_x23 + 0x270) = *(undefined8 *)(unaff_x23 + 0x340);
  *(undefined8 *)(unaff_x23 + 0x288) = *(undefined8 *)(unaff_x23 + 0x358);
  *(undefined8 *)(unaff_x23 + 0x280) = *(undefined8 *)(unaff_x23 + 0x350);
  *(undefined8 *)(unaff_x23 + 0x298) = *(undefined8 *)(unaff_x23 + 0x368);
  *(undefined8 *)(unaff_x23 + 0x290) = *(undefined8 *)(unaff_x23 + 0x360);
  *(undefined8 *)(unaff_x23 + 0x2a8) = *(undefined8 *)(unaff_x23 + 0x378);
  *(undefined8 *)(unaff_x23 + 0x2a0) = *(undefined8 *)(unaff_x23 + 0x370);
  *(undefined8 *)(unaff_x23 + 0x238) = *(undefined8 *)(unaff_x23 + 0x308);
  *(undefined8 *)(unaff_x23 + 0x230) = *(undefined8 *)(unaff_x23 + 0x300);
  *(undefined8 *)(unaff_x23 + 0x248) = *(undefined8 *)(unaff_x23 + 0x318);
  *(undefined8 *)(unaff_x23 + 0x240) = *(undefined8 *)(unaff_x23 + 0x310);
  *(undefined8 *)(unaff_x23 + 600) = *(undefined8 *)(unaff_x23 + 0x328);
  *(undefined8 *)(unaff_x23 + 0x250) = *(undefined8 *)(unaff_x23 + 800);
  *(undefined8 *)(unaff_x23 + 0x268) = *(undefined8 *)(unaff_x23 + 0x338);
  *(undefined8 *)(unaff_x23 + 0x260) = *(undefined8 *)(unaff_x23 + 0x330);
  *(undefined8 *)(unaff_x23 + 0x1f8) = *(undefined8 *)(unaff_x23 + 0x2c8);
  *(undefined8 *)(unaff_x23 + 0x1f0) = *(undefined8 *)(unaff_x23 + 0x2c0);
  *(undefined8 *)(unaff_x23 + 0x208) = *(undefined8 *)(unaff_x23 + 0x2d8);
  *(undefined8 *)(unaff_x23 + 0x200) = *(undefined8 *)(unaff_x23 + 0x2d0);
  *(undefined8 *)(unaff_x23 + 0x218) = *(undefined8 *)(unaff_x23 + 0x2e8);
  *(undefined8 *)(unaff_x23 + 0x210) = *(undefined8 *)(unaff_x23 + 0x2e0);
  *(undefined8 *)(unaff_x23 + 0x228) = *(undefined8 *)(unaff_x23 + 0x2f8);
  *(undefined8 *)(unaff_x23 + 0x220) = *(undefined8 *)(unaff_x23 + 0x2f0);
  plVar4 = plVar3;
  if (in_stack_00000260 != (undefined8 *)0x8000000000000000) goto LAB_101224cf8;
  plVar4 = in_stack_00000268;
  if (plVar3 == (long *)0x0) goto LAB_101224df0;
  lVar6 = *plVar3;
  if (lVar6 == 1) {
    FUN_100de21d4(plVar3 + 1);
    goto LAB_101224de4;
  }
LAB_101224ce0:
  if ((lVar6 == 0) && (plVar3[2] != 0)) {
    _free(plVar3[1]);
  }
LAB_101224de4:
  _free(plVar3);
  plVar4 = in_stack_00000268;
LAB_101224df0:
  puVar7 = (undefined8 *)0x8000000000000000;
  do {
    lVar6 = in_stack_00000068;
    if (puVar7 == (undefined8 *)0x8000000000000000) {
LAB_10122545c:
      in_stack_00000268 = (long *)FUN_108832da4(plVar4,unaff_x25);
      plVar4 = in_stack_00000060;
      lVar9 = in_stack_00000068;
      lVar6 = unaff_x25;
joined_r0x0001012252e0:
      in_stack_00000060 = plVar4;
      in_stack_00000068 = lVar9;
      if (lVar9 != 0) {
        plVar3 = plVar4 + 6;
        lVar6 = -0x7fffffffffffffff;
        do {
          if (plVar3[-6] != 0) {
            _free(plVar3[-5]);
          }
          if (plVar3[-3] != 0) {
            _free(plVar3[-2]);
          }
          if (*plVar3 != -0x7fffffffffffffff) {
            FUN_100e133d4(plVar3);
          }
          plVar3 = plVar3 + 0x18;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (in_stack_00000058 != 0) {
        _free(plVar4);
      }
      plVar4 = in_stack_00000268;
      lVar9 = -0x8000000000000000;
LAB_1012252f8:
      *(char *)(unaff_x20 + 0x48) = *(char *)(unaff_x20 + 0x48) + '\x01';
      plVar3 = (long *)FUN_10065474c();
      if (lVar9 == -0x8000000000000000) {
        plVar8 = plVar4;
        if (plVar3 != (long *)0x0) {
          if (*plVar3 == 1) {
            FUN_100de21d4(plVar3 + 1);
          }
          else if ((*plVar3 == 0) && (plVar3[2] != 0)) {
            _free(plVar3[1]);
          }
          _free(plVar3);
        }
      }
      else {
        if (plVar3 == (long *)0x0) {
          *unaff_x19 = lVar9;
          unaff_x19[1] = (long)plVar4;
          unaff_x19[2] = lVar6;
          return;
        }
        if (lVar6 != 0) {
          plVar8 = plVar4 + 6;
          do {
            if (plVar8[-6] != 0) {
              _free(plVar8[-5]);
            }
            if (plVar8[-3] != 0) {
              _free(plVar8[-2]);
            }
            if (*plVar8 != -0x7fffffffffffffff) {
              FUN_100e133d4(plVar8);
            }
            plVar8 = plVar8 + 0x18;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
        }
        plVar8 = plVar3;
        if (lVar9 != 0) {
          _free(plVar4);
        }
      }
      lVar6 = FUN_108832da4(plVar8);
      *unaff_x19 = -0x8000000000000000;
      unaff_x19[1] = lVar6;
      return;
    }
    in_stack_00000108 = *(undefined8 *)(unaff_x23 + 0x148);
    in_stack_00000100 = *(undefined8 *)(unaff_x23 + 0x140);
    in_stack_00000118 = *(undefined8 *)(unaff_x23 + 0x158);
    in_stack_00000110 = *(undefined8 *)(unaff_x23 + 0x150);
    in_stack_00000128 = *(undefined8 *)(unaff_x23 + 0x168);
    in_stack_00000120 = *(undefined8 *)(unaff_x23 + 0x160);
    in_stack_000000c8 = *(long *)(unaff_x23 + 0x108);
    in_stack_000000c0 = *(long *)(unaff_x23 + 0x100);
    in_stack_000000d8 = *(undefined8 *)(unaff_x23 + 0x118);
    in_stack_000000d0 = *(undefined8 *)(unaff_x23 + 0x110);
    in_stack_000000e8 = *(undefined8 *)(unaff_x23 + 0x128);
    in_stack_000000e0 = *(undefined8 *)(unaff_x23 + 0x120);
    in_stack_000000f8 = *(undefined8 *)(unaff_x23 + 0x138);
    in_stack_000000f0 = *(undefined8 *)(unaff_x23 + 0x130);
    in_stack_00000088 = *(long *)(unaff_x23 + 200);
    in_stack_00000080 = *(long *)(unaff_x23 + 0xc0);
    in_stack_00000098 = *(long *)(unaff_x23 + 0xd8);
    in_stack_00000090 = *(long *)(unaff_x23 + 0xd0);
    in_stack_000000a8 = *(long *)(unaff_x23 + 0xe8);
    in_stack_000000a0 = *(long *)(unaff_x23 + 0xe0);
    in_stack_000000b8 = *(long *)(unaff_x23 + 0xf8);
    in_stack_000000b0 = *(long *)(unaff_x23 + 0xf0);
    in_stack_00000070 = puVar7;
    in_stack_00000078 = plVar4;
    if (in_stack_00000068 == in_stack_00000058) {
      func_0x000108950874(&stack0x00000058);
    }
    plVar4 = in_stack_00000060 + lVar6 * 0x18;
    lVar9 = *(long *)(unaff_x23 + 0x80);
    lVar11 = *(long *)(unaff_x23 + 0x98);
    lVar10 = *(long *)(unaff_x23 + 0x90);
    plVar4[0x11] = *(long *)(unaff_x23 + 0x88);
    plVar4[0x10] = lVar9;
    plVar4[0x13] = lVar11;
    plVar4[0x12] = lVar10;
    lVar9 = *(long *)(unaff_x23 + 0xa0);
    lVar11 = *(long *)(unaff_x23 + 0xb8);
    lVar10 = *(long *)(unaff_x23 + 0xb0);
    plVar4[0x15] = *(long *)(unaff_x23 + 0xa8);
    plVar4[0x14] = lVar9;
    plVar4[0x17] = lVar11;
    plVar4[0x16] = lVar10;
    plVar4[9] = in_stack_000000b8;
    plVar4[8] = in_stack_000000b0;
    plVar4[0xb] = in_stack_000000c8;
    plVar4[10] = in_stack_000000c0;
    lVar9 = *(long *)(unaff_x23 + 0x60);
    lVar11 = *(long *)(unaff_x23 + 0x78);
    lVar10 = *(long *)(unaff_x23 + 0x70);
    plVar4[0xd] = *(long *)(unaff_x23 + 0x68);
    plVar4[0xc] = lVar9;
    plVar4[0xf] = lVar11;
    plVar4[0xe] = lVar10;
    plVar4[1] = (long)in_stack_00000078;
    *plVar4 = (long)in_stack_00000070;
    plVar4[3] = in_stack_00000088;
    plVar4[2] = in_stack_00000080;
    plVar4[5] = in_stack_00000098;
    plVar4[4] = in_stack_00000090;
    plVar4[7] = in_stack_000000a8;
    plVar4[6] = in_stack_000000a0;
    in_stack_00000068 = lVar6 + 1;
    FUN_1011de3f0(&stack0x00000260,&stack0x00000048);
    unaff_x25 = in_stack_00000048;
    cVar12 = (char)in_stack_00000260;
    plVar4 = in_stack_00000060;
    lVar9 = in_stack_00000068;
    if (cVar12 == '\x01') goto joined_r0x0001012252e0;
    lVar9 = in_stack_00000058;
    lVar6 = in_stack_00000068;
    if ((char)((ulong)in_stack_00000260 >> 8) != '\x01') goto LAB_1012252f8;
    uVar5 = *(ulong *)(in_stack_00000048 + 0x28);
    lVar6 = unaff_x25;
    if (*(ulong *)(in_stack_00000048 + 0x20) <= uVar5) {
LAB_101225268:
      in_stack_00000268 = (long *)FUN_108831e8c(in_stack_00000048,&stack0x00000260);
      plVar4 = in_stack_00000060;
      lVar9 = in_stack_00000068;
      goto joined_r0x0001012252e0;
    }
    while (bVar1 = *(byte *)(*(long *)(in_stack_00000048 + 0x18) + uVar5),
          bVar1 < 0x21 && (unaff_x21 << ((ulong)bVar1 & 0x3f) & unaff_x24) != 0) {
      uVar5 = uVar5 + 1;
      *(ulong *)(in_stack_00000048 + 0x28) = uVar5;
      if (*(ulong *)(in_stack_00000048 + 0x20) == uVar5) goto LAB_101225268;
    }
    if (bVar1 != 0x5b) {
      if (bVar1 != 0x7b) {
        plVar4 = (long *)FUN_108832208(in_stack_00000048,unaff_x29 + -0x61,&UNK_10b20b1a0);
        goto LAB_10122545c;
      }
      cVar2 = *(char *)(in_stack_00000048 + 0x48) + -1;
      *(char *)(in_stack_00000048 + 0x48) = cVar2;
      if (cVar2 == '\0') {
        in_stack_00000268 = (long *)FUN_108831e8c(in_stack_00000048,&stack0x00000260);
        plVar4 = in_stack_00000060;
        lVar9 = in_stack_00000068;
        goto joined_r0x0001012252e0;
      }
      *(ulong *)(in_stack_00000048 + 0x28) = uVar5 + 1;
      *(long *)(unaff_x29 + -0x100) = in_stack_00000048;
      *(char *)(unaff_x29 + -0xf8) = (char)unaff_x21;
      puStack0000000000000038 = (undefined *)0x8000000000000000;
      puStack0000000000000040 = (undefined *)0x8000000000000000;
      unaff_x22 = (undefined8 *)0x8000000000000002;
      break;
    }
    cVar2 = *(char *)(in_stack_00000048 + 0x48) + -1;
    *(char *)(in_stack_00000048 + 0x48) = cVar2;
    if (cVar2 == '\0') {
      in_stack_00000268 = (long *)FUN_108831e8c(in_stack_00000048,&stack0x00000260);
      plVar4 = in_stack_00000060;
      lVar9 = in_stack_00000068;
      goto joined_r0x0001012252e0;
    }
    *(ulong *)(in_stack_00000048 + 0x28) = uVar5 + 1;
    FUN_1011de3f0(&stack0x00000260,&stack0x00000330);
    if ((cVar12 != '\x01') &&
       (FUN_10160c7b0(&stack0x00000260,unaff_x25),
       in_stack_00000260 != (undefined8 *)0x8000000000000000)) {
      FUN_1011de3f0(&stack0x00000260,&stack0x00000330);
      if ((cVar12 != '\x01') &&
         (FUN_10160c7b0(&stack0x00000260,unaff_x25),
         in_stack_00000260 != (undefined8 *)0x8000000000000000)) {
        FUN_1011de3f0(&stack0x00000260,&stack0x00000330);
        if ((cVar12 != '\x01') &&
           (FUN_1012acfd0(&stack0x00000260,unaff_x25),
           in_stack_00000260 != (undefined8 *)0x8000000000000002)) {
          *(undefined8 *)(unaff_x23 + 0x1b8) = in_stack_000002b8;
          *(undefined8 *)(unaff_x23 + 0x1b0) = in_stack_000002b0;
          *(undefined8 *)(unaff_x23 + 0x1c8) = in_stack_000002c8;
          *(undefined8 *)(unaff_x23 + 0x1c0) = in_stack_000002c0;
          *(undefined8 *)(unaff_x23 + 0x1d8) = in_stack_000002d8;
          *(undefined8 *)(unaff_x23 + 0x1d0) = in_stack_000002d0;
          *(undefined8 *)(unaff_x23 + 0x1e8) = in_stack_000002e8;
          *(undefined8 *)(unaff_x23 + 0x1e0) = in_stack_000002e0;
          *(long *)(unaff_x23 + 0x178) = in_stack_00000278;
          *(long *)(unaff_x23 + 0x170) = in_stack_00000270;
          *(undefined8 *)(unaff_x23 + 0x188) = in_stack_00000288;
          *(undefined8 *)(unaff_x23 + 0x180) = in_stack_00000280;
          *(undefined8 *)(unaff_x23 + 0x198) = in_stack_00000298;
          *(long *)(unaff_x23 + 400) = in_stack_00000290;
          *(undefined8 *)(unaff_x23 + 0x1a8) = in_stack_000002a8;
          *(undefined8 *)(unaff_x23 + 0x1a0) = in_stack_000002a0;
          goto LAB_101224a58;
        }
        if (in_stack_00000260 != (undefined8 *)0x0) {
          _free(in_stack_00000268);
        }
      }
      if (in_stack_00000260 != (undefined8 *)0x0) {
        _free(in_stack_00000268);
      }
    }
LAB_101224a58:
    *(char *)(unaff_x25 + 0x48) = *(char *)(unaff_x25 + 0x48) + '\x01';
    plVar3 = (long *)FUN_10065474c(unaff_x25);
    *(undefined8 *)(unaff_x23 + 0x278) = *(undefined8 *)(unaff_x23 + 0x348);
    *(undefined8 *)(unaff_x23 + 0x270) = *(undefined8 *)(unaff_x23 + 0x340);
    *(undefined8 *)(unaff_x23 + 0x288) = *(undefined8 *)(unaff_x23 + 0x358);
    *(undefined8 *)(unaff_x23 + 0x280) = *(undefined8 *)(unaff_x23 + 0x350);
    *(undefined8 *)(unaff_x23 + 0x298) = *(undefined8 *)(unaff_x23 + 0x368);
    *(undefined8 *)(unaff_x23 + 0x290) = *(undefined8 *)(unaff_x23 + 0x360);
    *(undefined8 *)(unaff_x23 + 0x2a8) = *(undefined8 *)(unaff_x23 + 0x378);
    *(undefined8 *)(unaff_x23 + 0x2a0) = *(undefined8 *)(unaff_x23 + 0x370);
    *(undefined8 *)(unaff_x23 + 0x238) = *(undefined8 *)(unaff_x23 + 0x308);
    *(undefined8 *)(unaff_x23 + 0x230) = *(undefined8 *)(unaff_x23 + 0x300);
    *(undefined8 *)(unaff_x23 + 0x248) = *(undefined8 *)(unaff_x23 + 0x318);
    *(undefined8 *)(unaff_x23 + 0x240) = *(undefined8 *)(unaff_x23 + 0x310);
    *(undefined8 *)(unaff_x23 + 600) = *(undefined8 *)(unaff_x23 + 0x328);
    *(undefined8 *)(unaff_x23 + 0x250) = *(undefined8 *)(unaff_x23 + 800);
    *(undefined8 *)(unaff_x23 + 0x268) = *(undefined8 *)(unaff_x23 + 0x338);
    *(undefined8 *)(unaff_x23 + 0x260) = *(undefined8 *)(unaff_x23 + 0x330);
    *(undefined8 *)(unaff_x23 + 0x1f8) = *(undefined8 *)(unaff_x23 + 0x2c8);
    *(undefined8 *)(unaff_x23 + 0x1f0) = *(undefined8 *)(unaff_x23 + 0x2c0);
    *(undefined8 *)(unaff_x23 + 0x208) = *(undefined8 *)(unaff_x23 + 0x2d8);
    *(undefined8 *)(unaff_x23 + 0x200) = *(undefined8 *)(unaff_x23 + 0x2d0);
    *(undefined8 *)(unaff_x23 + 0x218) = *(undefined8 *)(unaff_x23 + 0x2e8);
    *(undefined8 *)(unaff_x23 + 0x210) = *(undefined8 *)(unaff_x23 + 0x2e0);
    *(undefined8 *)(unaff_x23 + 0x228) = *(undefined8 *)(unaff_x23 + 0x2f8);
    *(undefined8 *)(unaff_x23 + 0x220) = *(undefined8 *)(unaff_x23 + 0x2f0);
    plVar4 = plVar3;
    if (in_stack_00000260 == (undefined8 *)0x8000000000000000) {
      plVar4 = in_stack_00000268;
      if (plVar3 == (long *)0x0) goto LAB_101224df0;
      lVar6 = *plVar3;
      if (lVar6 != 1) goto LAB_101224ce0;
      FUN_100de21d4(plVar3 + 1);
      goto LAB_101224de4;
    }
LAB_101224cf8:
    if (plVar4 != (long *)0x0) goto code_r0x000101224cfc;
    *(undefined8 *)(unaff_x23 + 0x148) = in_stack_000002f8;
    *(undefined8 *)(unaff_x23 + 0x140) = in_stack_000002f0;
    *(undefined8 *)(unaff_x23 + 0x158) = in_stack_00000308;
    *(undefined8 *)(unaff_x23 + 0x150) = in_stack_00000300;
    *(undefined8 *)(unaff_x23 + 0x168) = in_stack_00000318;
    *(undefined8 *)(unaff_x23 + 0x160) = in_stack_00000310;
    *(undefined8 *)(unaff_x23 + 0x108) = in_stack_000002b8;
    *(undefined8 *)(unaff_x23 + 0x100) = in_stack_000002b0;
    *(undefined8 *)(unaff_x23 + 0x118) = in_stack_000002c8;
    *(undefined8 *)(unaff_x23 + 0x110) = in_stack_000002c0;
    *(undefined8 *)(unaff_x23 + 0x128) = in_stack_000002d8;
    *(undefined8 *)(unaff_x23 + 0x120) = in_stack_000002d0;
    *(undefined8 *)(unaff_x23 + 0x138) = in_stack_000002e8;
    *(undefined8 *)(unaff_x23 + 0x130) = in_stack_000002e0;
    *(long *)(unaff_x23 + 200) = in_stack_00000278;
    *(long *)(unaff_x23 + 0xc0) = in_stack_00000270;
    *(undefined8 *)(unaff_x23 + 0xd8) = in_stack_00000288;
    *(undefined8 *)(unaff_x23 + 0xd0) = in_stack_00000280;
    *(undefined8 *)(unaff_x23 + 0xe8) = in_stack_00000298;
    *(long *)(unaff_x23 + 0xe0) = in_stack_00000290;
    *(undefined8 *)(unaff_x23 + 0xf8) = in_stack_000002a8;
    *(undefined8 *)(unaff_x23 + 0xf0) = in_stack_000002a0;
    puVar7 = in_stack_00000260;
    plVar4 = in_stack_00000268;
  } while( true );
LAB_1012246c0:
  do {
    FUN_1011ddbc4(&stack0x00000260,unaff_x29 + -0x100);
    if (cVar12 == '\x01') goto LAB_101224ba8;
    lVar6 = *(long *)(unaff_x29 + -0x100);
    *(long *)(lVar6 + 0x28) = *(long *)(lVar6 + 0x28) + 1;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&stack0x00000260,lVar6 + 0x18,lVar6);
    if (in_stack_00000260 == (undefined8 *)0x2) goto LAB_101224ba8;
    if (in_stack_00000270 == 0xb) {
      if (*in_stack_00000268 == 0x7470697263736564 &&
          *(long *)((long)in_stack_00000268 + 3) == 0x6e6f697470697263) {
        if (puStack0000000000000040 != (undefined *)0x8000000000000000) {
          in_stack_000001e0 = &UNK_108ca155d;
          in_stack_000001e8 = 0xb;
          FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000260);
LAB_1012251d8:
          in_stack_00000260 = &stack0x000001e0;
          in_stack_00000268 = (long *)&DAT_100c7b3a0;
          goto LAB_101224ba8;
        }
        uVar5 = *(ulong *)(lVar6 + 0x28);
        if (uVar5 < *(ulong *)(lVar6 + 0x20)) {
          while( true ) {
            bVar1 = *(byte *)(*(long *)(lVar6 + 0x18) + uVar5);
            if (0x3a < bVar1) goto LAB_101225210;
            if ((unaff_x21 << ((ulong)bVar1 & 0x3f) & unaff_x24) == 0) break;
            uVar5 = uVar5 + 1;
            *(ulong *)(lVar6 + 0x28) = uVar5;
            if (*(ulong *)(lVar6 + 0x20) == uVar5) goto LAB_101224f70;
          }
          if ((ulong)bVar1 == 0x3a) {
            *(ulong *)(lVar6 + 0x28) = uVar5 + 1;
            FUN_10160c7b0(&stack0x000001e0,lVar6);
            puStack0000000000000040 = in_stack_000001e0;
            if (in_stack_000001e0 != (undefined *)0x8000000000000000) {
              in_stack_00000018 = in_stack_000001e8;
              goto LAB_1012246c0;
            }
          }
          else {
LAB_101225210:
            in_stack_00000260 = (undefined8 *)0x6;
            FUN_108831e8c(lVar6,&stack0x00000260);
          }
        }
        else {
LAB_101224f70:
          in_stack_00000260 = (undefined8 *)0x3;
          FUN_108831e8c(lVar6,&stack0x00000260);
        }
        puStack0000000000000040 = (undefined *)0x0;
        goto LAB_101224ba8;
      }
LAB_1012247f4:
      lVar6 = FUN_10062a8ec(lVar6);
      if (lVar6 != 0) goto LAB_101224ba8;
      goto LAB_1012246c0;
    }
    if (in_stack_00000270 != 9) {
      if ((in_stack_00000270 != 4) || ((int)*in_stack_00000268 != 0x656d616e)) goto LAB_1012247f4;
      if (puStack0000000000000038 != (undefined *)0x8000000000000000) {
        in_stack_000001e0 = &UNK_108c61018;
        in_stack_000001e8 = 4;
        FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000260);
        goto LAB_1012251d8;
      }
      uVar5 = *(ulong *)(lVar6 + 0x28);
      if (uVar5 < *(ulong *)(lVar6 + 0x20)) {
        while( true ) {
          bVar1 = *(byte *)(*(long *)(lVar6 + 0x18) + uVar5);
          if (0x3a < bVar1) goto LAB_10122523c;
          if ((unaff_x21 << ((ulong)bVar1 & 0x3f) & unaff_x24) == 0) break;
          uVar5 = uVar5 + 1;
          *(ulong *)(lVar6 + 0x28) = uVar5;
          if (*(ulong *)(lVar6 + 0x20) == uVar5) goto LAB_101224fdc;
        }
        if ((ulong)bVar1 == 0x3a) {
          *(ulong *)(lVar6 + 0x28) = uVar5 + 1;
          FUN_10160c7b0(&stack0x000001e0,lVar6);
          puStack0000000000000038 = in_stack_000001e0;
          if (in_stack_000001e0 != (undefined *)0x8000000000000000) {
            in_stack_00000030 = in_stack_000001e8;
            goto LAB_1012246c0;
          }
        }
        else {
LAB_10122523c:
          in_stack_00000260 = (undefined8 *)0x6;
          FUN_108831e8c(lVar6,&stack0x00000260);
        }
      }
      else {
LAB_101224fdc:
        in_stack_00000260 = (undefined8 *)0x3;
        FUN_108831e8c(lVar6,&stack0x00000260);
      }
      puStack0000000000000038 = (undefined *)0x0;
      goto LAB_101224ba8;
    }
    if (*in_stack_00000268 != 0x6361667265746e69 || (char)in_stack_00000268[1] != 'e')
    goto LAB_1012247f4;
    if (unaff_x22 != (undefined8 *)0x8000000000000002) {
      in_stack_000001e0 = &UNK_108cb5299;
      in_stack_000001e8 = 9;
      in_stack_00000260 = &stack0x000001e0;
      in_stack_00000268 = (long *)&DAT_100c7b3a0;
      FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000260);
      if (unaff_x22 != (undefined8 *)0x8000000000000001) goto LAB_101224bc4;
      break;
    }
    uVar5 = *(ulong *)(lVar6 + 0x28);
    if (*(ulong *)(lVar6 + 0x20) <= uVar5) {
LAB_101224fa4:
      in_stack_000001e0 = (undefined *)0x3;
      FUN_108831e8c(lVar6,&stack0x000001e0);
      break;
    }
    while( true ) {
      bVar1 = *(byte *)(*(long *)(lVar6 + 0x18) + uVar5);
      if (0x3a < bVar1) goto LAB_1012251e0;
      if ((unaff_x21 << ((ulong)bVar1 & 0x3f) & unaff_x24) == 0) break;
      uVar5 = uVar5 + 1;
      *(ulong *)(lVar6 + 0x28) = uVar5;
      if (*(ulong *)(lVar6 + 0x20) == uVar5) goto LAB_101224fa4;
    }
    if ((ulong)bVar1 != 0x3a) {
LAB_1012251e0:
      in_stack_000001e0 = (undefined *)0x6;
      FUN_108831e8c(lVar6,&stack0x000001e0);
      break;
    }
    *(ulong *)(lVar6 + 0x28) = uVar5 + 1;
    FUN_1012acfd0(&stack0x00000260,lVar6);
    unaff_x22 = in_stack_00000260;
  } while (in_stack_00000260 != (undefined8 *)0x8000000000000002);
  goto LAB_101224bd4;
code_r0x000101224cfc:
  if (in_stack_00000260 != (undefined8 *)0x0) {
    _free(in_stack_00000268);
  }
  if (in_stack_00000278 != 0) {
    _free(in_stack_00000280);
  }
  if (in_stack_00000290 != -0x7fffffffffffffff) {
    FUN_100e133d4(&stack0x00000290);
  }
  goto LAB_101224df0;
}

