
/* WARNING: Removing unreachable block (ram,0x00010171b550) */
/* WARNING: Removing unreachable block (ram,0x00010171b6cc) */
/* WARNING: Removing unreachable block (ram,0x00010171b7ec) */
/* WARNING: Removing unreachable block (ram,0x00010171b7f4) */
/* WARNING: Removing unreachable block (ram,0x00010171b800) */
/* WARNING: Removing unreachable block (ram,0x00010171b80c) */
/* WARNING: Removing unreachable block (ram,0x00010171b814) */
/* WARNING: Removing unreachable block (ram,0x00010171b5fc) */
/* WARNING: Removing unreachable block (ram,0x00010171b818) */
/* WARNING: Removing unreachable block (ram,0x00010171c574) */
/* WARNING: Removing unreachable block (ram,0x00010171c564) */
/* WARNING: Removing unreachable block (ram,0x00010171c568) */
/* WARNING: Removing unreachable block (ram,0x00010171c644) */
/* WARNING: Removing unreachable block (ram,0x00010171c658) */
/* WARNING: Removing unreachable block (ram,0x00010171c57c) */
/* WARNING: Removing unreachable block (ram,0x00010171c58c) */
/* WARNING: Removing unreachable block (ram,0x00010171c598) */
/* WARNING: Removing unreachable block (ram,0x00010171c5e0) */
/* WARNING: Removing unreachable block (ram,0x00010171c5f0) */
/* WARNING: Removing unreachable block (ram,0x00010171c600) */
/* WARNING: Removing unreachable block (ram,0x00010171c604) */
/* WARNING: Removing unreachable block (ram,0x00010171c6f4) */
/* WARNING: Removing unreachable block (ram,0x00010171c8bc) */
/* WARNING: Removing unreachable block (ram,0x00010171c608) */
/* WARNING: Removing unreachable block (ram,0x00010171c618) */
/* WARNING: Removing unreachable block (ram,0x00010171c624) */
/* WARNING: Removing unreachable block (ram,0x00010171c62c) */
/* WARNING: Removing unreachable block (ram,0x00010171c724) */
/* WARNING: Removing unreachable block (ram,0x00010171c730) */
/* WARNING: Removing unreachable block (ram,0x00010171c8d0) */
/* WARNING: Removing unreachable block (ram,0x00010171c8e4) */
/* WARNING: Removing unreachable block (ram,0x00010171c8f4) */
/* WARNING: Removing unreachable block (ram,0x00010171c73c) */
/* WARNING: Removing unreachable block (ram,0x00010171c864) */
/* WARNING: Removing unreachable block (ram,0x00010171c888) */
/* WARNING: Removing unreachable block (ram,0x00010171c890) */
/* WARNING: Removing unreachable block (ram,0x00010171c898) */
/* WARNING: Removing unreachable block (ram,0x00010171c7b0) */
/* WARNING: Removing unreachable block (ram,0x00010171c7c4) */
/* WARNING: Removing unreachable block (ram,0x00010171b874) */
/* WARNING: Removing unreachable block (ram,0x00010171b45c) */

void FUN_10171cbd8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long unaff_x19;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 *in_stack_00000048;
  undefined8 in_stack_00000088;
  undefined1 *in_stack_00000090;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_00000890;
  undefined8 in_stack_00000898;
  
  uVar4 = FUN_108876314(s_duplicate_field_____108ac2973,&stack0x00000110);
  if ((-0x7fffffffffffffff < in_stack_00000010) && (in_stack_00000010 != 0)) {
    _free(in_stack_00000038);
    in_stack_00000010 = extraout_x9;
  }
  if ((-0x7fffffffffffffff < in_stack_00000028) && (in_stack_00000028 != 0)) {
    _free(in_stack_00000040);
    in_stack_00000010 = extraout_x9_00;
  }
  if ((-0x7fffffffffffffff < in_stack_00000030) && (in_stack_00000030 != 0)) {
    _free(in_stack_00000008);
    in_stack_00000010 = extraout_x9_01;
  }
  in_stack_00000110 = 0x8000000000000001;
  in_stack_00000120 = in_stack_00000030;
  in_stack_00000118 = uVar4;
  in_stack_00000130 = in_stack_00000010;
  lVar2 = FUN_101714ca4(&stack0x000004e0);
  if (lVar2 != 0) {
    FUN_10174dab0(lVar2);
    _free(lVar2);
  }
  uVar4 = FUN_108875b20(uVar4,&stack0x000004e0);
  if (in_stack_000004e0 != 0) {
    _free(in_stack_000004e8);
  }
  in_stack_00000110 = CONCAT62(in_stack_00000110._2_6_,5);
  uVar4 = FUN_101766bbc(&stack0x00000110,uVar4);
  (**(code **)(*(long *)(unaff_x29 + -0xa8) + 0x20))
            (unaff_x29 + -0x90,*(undefined8 *)(unaff_x29 + -0xa0),*(undefined8 *)(unaff_x29 + -0x98)
            );
  *in_stack_00000048 = 1;
  FUN_10174ae1c();
  in_stack_00000110 = uVar4;
  puVar3 = (undefined8 *)_malloc(8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar4;
    uVar4 = func_0x000106029c30(0x28,puVar3,&UNK_10b2568c8);
    *(undefined1 *)(unaff_x19 + 0x34b) = 0;
    if (*(long *)(unaff_x19 + 0x2a8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x2b0));
    }
    if (*(long *)(unaff_x19 + 0x270) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x278));
    }
    *in_stack_00000090 = 1;
    FUN_1017476a4(in_stack_00000088);
    *(undefined4 *)(unaff_x19 + 0x248) = 1;
    FUN_10174e730(unaff_x19 + 0x148);
    if (*(long *)(unaff_x19 + 0x1c8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1d0));
    }
    if ((*(ulong *)(unaff_x19 + 0x1f8) & 0x7fffffffffffffff) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x200));
    }
    *(undefined1 *)(unaff_x19 + 0x141) = 0;
    FUN_10174fcf4(unaff_x19 + 0xdc0);
    FUN_10174f598(unaff_x19 + 0xa0);
    if (*(long *)(unaff_x19 + 8) != -0x7fffffffffffffff) {
      FUN_10174f598();
    }
    *(undefined1 *)(unaff_x19 + 0x140) = 0;
    *unaff_x28 = 0x8000000000000000;
    unaff_x28[1] = uVar4;
    unaff_x28[3] = in_stack_00000898;
    unaff_x28[2] = in_stack_00000890;
    *(undefined1 *)(unaff_x19 + 0x142) = 1;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10171cd80);
  (*pcVar1)();
}

