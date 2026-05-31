
void FUN_1009036a8(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar5;
  long unaff_x21;
  long lVar6;
  undefined8 unaff_x22;
  long lVar7;
  undefined8 *unaff_x23;
  undefined8 *puVar8;
  undefined8 *unaff_x24;
  long unaff_x27;
  long unaff_x28;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_00005a00;
  
  FUN_100f3f484(&stack0x000059f0,s_thread___is_closing__retry_threa_108acabc9,&stack0x00008060);
  uVar10 = *(undefined8 *)(unaff_x27 + 200);
  uVar9 = *(undefined8 *)(unaff_x27 + 0xc0);
  unaff_x24[1] = uVar10;
  *unaff_x24 = uVar9;
  uVar12 = unaff_x24[0x57b];
  uVar11 = unaff_x24[0x57a];
  unaff_x23[1] = uVar10;
  *unaff_x23 = uVar9;
  unaff_x23[2] = in_stack_00005a00;
  *(undefined8 *)(unaff_x19 + 0x6300) = 0x8000000000000005;
  *(undefined8 *)(unaff_x19 + 0x6348) = 0xffffffffffff80a8;
  *(undefined8 *)(unaff_x19 + 0x6350) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x6358) = unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x6368) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x6360) = uVar11;
  *(long *)(unaff_x19 + 0x6370) = unaff_x21 + 0x10;
  *(undefined1 *)(unaff_x28 + 0x927) = 0;
  iVar2 = FUN_1008927b8(unaff_x19 + 0x62e8,in_stack_000000a0);
  if (iVar2 == 0) {
    FUN_100d84c5c(unaff_x19 + 0x62e8);
    if ((((*(byte *)(unaff_x28 + 0x83c) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x328) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x328) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x330));
    }
    *(undefined1 *)(unaff_x28 + 0x83c) = 0;
    if ((((*(byte *)(unaff_x28 + 0x83d) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x310) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x310) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x318));
    }
    *(undefined1 *)(unaff_x28 + 0x83d) = 0;
    if (((*(byte *)(unaff_x28 + 0x854) & 1) != 0) && (*(long *)(unaff_x19 + 0x1c8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x1d0));
    }
    if (((*(byte *)(unaff_x28 + 0x853) & 1) != 0) &&
       (lVar5 = *(long *)(unaff_x19 + 0x1e0), lVar5 != -0x8000000000000000)) {
      lVar6 = *(long *)(unaff_x19 + 0x1e8);
      lVar7 = *(long *)(unaff_x19 + 0x1f0) + 1;
      lVar3 = lVar6;
      while (lVar7 = lVar7 + -1, lVar7 != 0) {
        FUN_100e02a24(lVar3);
        lVar3 = lVar3 + 0xc0;
      }
      if (lVar5 != 0) {
        _free(lVar6);
      }
    }
    if (((*(byte *)(unaff_x28 + 0x852) & 1) == 0) ||
       (*(long *)(unaff_x19 + 0x1f8) == -0x8000000000000000 || *(long *)(unaff_x19 + 0x1f8) == 0)) {
      bVar1 = *(byte *)(unaff_x28 + 0x851);
    }
    else {
      _free(*(undefined8 *)(unaff_x19 + 0x200));
      bVar1 = *(byte *)(unaff_x28 + 0x851);
    }
    if ((((bVar1 & 1) != 0) && (*(long *)(unaff_x19 + 0x210) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x210) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x218));
    }
    if ((((*(byte *)(unaff_x28 + 0x850) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x228) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x228) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x230));
    }
    if ((((*(byte *)(unaff_x28 + 0x84f) & 1) != 0) &&
        (lVar5 = *(long *)(unaff_x19 + 0x2b8), lVar5 != -0x7fffffffffffffff)) &&
       ((lVar5 != -0x8000000000000000 && (lVar5 != 0)))) {
      _free(*(undefined8 *)(unaff_x19 + 0x2c0));
    }
    if ((((*(byte *)(unaff_x28 + 0x84e) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x240) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x240) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x248));
    }
    if (((*(byte *)(unaff_x28 + 0x84d) & 1) != 0) &&
       (lVar5 = *(long *)(unaff_x19 + 600), lVar5 != -0x8000000000000000)) {
      lVar6 = *(long *)(unaff_x19 + 0x260);
      lVar7 = *(long *)(unaff_x19 + 0x268);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar6 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar5 != 0) {
        _free(lVar6);
      }
    }
    if ((((*(byte *)(unaff_x28 + 0x84c) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x270) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x270) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x278));
    }
    if (((*(byte *)(unaff_x28 + 0x84b) & 1) != 0) && (*(long *)(unaff_x19 + 0x2d0) != 0)) {
      FUN_100cc2fb4(unaff_x19 + 0x2d0);
    }
    if ((((*(byte *)(unaff_x28 + 0x84a) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x288) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x288) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x290));
    }
    if ((((*(byte *)(unaff_x28 + 0x849) & 1) != 0) &&
        (*(long *)(unaff_x19 + 0x2a0) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x2a0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x2a8));
    }
    *(undefined4 *)(unaff_x28 + 0x851) = 0;
    *(undefined8 *)(unaff_x28 + 0x849) = 0;
    if (((*(byte *)(unaff_x28 + 0x855) & 1) != 0) &&
       ((*(ulong *)(unaff_x19 + 0x1a8) & 0x7fffffffffffffff) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x1b0));
    }
    *(undefined1 *)(unaff_x28 + 0x855) = 0;
    *in_stack_00000098 = 0x8000000000000000;
    uVar4 = 1;
  }
  else {
    *in_stack_00000098 = 0x8000000000000001;
    uVar4 = 4;
  }
  *(undefined1 *)(unaff_x28 + 0x82f) = uVar4;
  return;
}

