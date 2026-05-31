
/* WARNING: Removing unreachable block (ram,0x0001006db9cc) */
/* WARNING: Removing unreachable block (ram,0x0001006dbb08) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc04) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc0c) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc18) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc24) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc2c) */
/* WARNING: Removing unreachable block (ram,0x0001006dba78) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc30) */
/* WARNING: Removing unreachable block (ram,0x0001006dc96c) */
/* WARNING: Removing unreachable block (ram,0x0001006dc95c) */
/* WARNING: Removing unreachable block (ram,0x0001006dc960) */
/* WARNING: Removing unreachable block (ram,0x0001006dca3c) */
/* WARNING: Removing unreachable block (ram,0x0001006dca50) */
/* WARNING: Removing unreachable block (ram,0x0001006dca68) */
/* WARNING: Removing unreachable block (ram,0x0001006dc974) */
/* WARNING: Removing unreachable block (ram,0x0001006dc984) */
/* WARNING: Removing unreachable block (ram,0x0001006dc990) */
/* WARNING: Removing unreachable block (ram,0x0001006dc9d4) */
/* WARNING: Removing unreachable block (ram,0x0001006dc9e4) */
/* WARNING: Removing unreachable block (ram,0x0001006dc9f4) */
/* WARNING: Removing unreachable block (ram,0x0001006dc9f8) */
/* WARNING: Removing unreachable block (ram,0x0001006dcb3c) */
/* WARNING: Removing unreachable block (ram,0x0001006dccf0) */
/* WARNING: Removing unreachable block (ram,0x0001006dc9fc) */
/* WARNING: Removing unreachable block (ram,0x0001006dca0c) */
/* WARNING: Removing unreachable block (ram,0x0001006dca18) */
/* WARNING: Removing unreachable block (ram,0x0001006dca20) */
/* WARNING: Removing unreachable block (ram,0x0001006dcb6c) */
/* WARNING: Removing unreachable block (ram,0x0001006dcb74) */
/* WARNING: Removing unreachable block (ram,0x0001006dcd00) */
/* WARNING: Removing unreachable block (ram,0x0001006dcd14) */
/* WARNING: Removing unreachable block (ram,0x0001006dcd24) */
/* WARNING: Removing unreachable block (ram,0x0001006dcb80) */
/* WARNING: Removing unreachable block (ram,0x0001006dcca0) */
/* WARNING: Removing unreachable block (ram,0x0001006dccbc) */
/* WARNING: Removing unreachable block (ram,0x0001006dccc4) */
/* WARNING: Removing unreachable block (ram,0x0001006dcccc) */
/* WARNING: Removing unreachable block (ram,0x0001006dcbf4) */
/* WARNING: Removing unreachable block (ram,0x0001006dcc08) */
/* WARNING: Removing unreachable block (ram,0x0001006dbc94) */
/* WARNING: Removing unreachable block (ram,0x0001006db550) */

void FUN_1006dd004(void)

{
  code *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 *in_stack_00000058;
  undefined1 *in_stack_00000070;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  char in_stack_00000188;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  
  uVar4 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000004b0);
  if ((in_stack_00000008 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000040);
  }
  if ((-0x7fffffffffffffff < in_stack_00000028) && (in_stack_00000028 != 0)) {
    _free(in_stack_00000020);
  }
  if ((-0x7fffffffffffffff < in_stack_00000030) && (in_stack_00000030 != 0)) {
    _free(in_stack_00000000);
  }
  in_stack_00000188 = in_stack_00000188 + '\x01';
  plVar2 = (long *)FUN_1006546a8(&stack0x00000150);
  if (plVar2 != (long *)0x0) {
    if (*plVar2 == 1) {
      FUN_100de21d4(plVar2 + 1);
    }
    else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
      _free(plVar2[1]);
    }
    _free(plVar2);
  }
  uVar4 = thunk_FUN_108832dfc(uVar4,&stack0x00000150);
  if (in_stack_00000150 != 0) {
    _free(in_stack_00000158);
  }
  uVar4 = FUN_1011d7b00(&stack0x000004b0,uVar4);
  (**(code **)(*(long *)(unaff_x29 + -0xf0) + 0x20))
            (unaff_x29 + -0xd8,*(undefined8 *)(unaff_x29 + -0xe8),*(undefined8 *)(unaff_x29 + -0xe0)
            );
  unaff_x28[0x3b] = in_stack_000005f8;
  unaff_x28[0x3a] = in_stack_000005f0;
  unaff_x28[0x3d] = in_stack_00000608;
  unaff_x28[0x3c] = in_stack_00000600;
  unaff_x28[0x3f] = in_stack_00000618;
  unaff_x28[0x3e] = in_stack_00000610;
  *in_stack_00000058 = 1;
  unaff_x28[0x41] = unaff_x28[0x3b];
  unaff_x28[0x40] = unaff_x28[0x3a];
  unaff_x28[0x43] = unaff_x28[0x3d];
  unaff_x28[0x42] = unaff_x28[0x3c];
  unaff_x28[0x45] = unaff_x28[0x3f];
  unaff_x28[0x44] = unaff_x28[0x3e];
  FUN_100cfddd4();
  puVar3 = (undefined8 *)_malloc(8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar4;
    uVar4 = func_0x000106029c30(0x28,puVar3,&UNK_10b21e380);
    *(undefined1 *)(unaff_x19 + 0x34b) = 0;
    if (*(long *)(unaff_x19 + 0x2a8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x2b0));
    }
    if (*(long *)(unaff_x19 + 0x270) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x278));
    }
    uVar10 = unaff_x28[0x51];
    uVar9 = unaff_x28[0x50];
    uVar7 = unaff_x28[0x53];
    uVar5 = unaff_x28[0x52];
    uVar8 = unaff_x28[0x4f];
    uVar6 = unaff_x28[0x4e];
    *in_stack_00000070 = 1;
    unaff_x28[3] = uVar10;
    unaff_x28[2] = uVar9;
    unaff_x28[5] = uVar7;
    unaff_x28[4] = uVar5;
    unaff_x28[1] = uVar8;
    *unaff_x28 = uVar6;
    FUN_100cb9d24();
    unaff_x28[9] = unaff_x28[5];
    unaff_x28[8] = unaff_x28[4];
    *(undefined4 *)(unaff_x19 + 0x248) = 1;
    uVar6 = unaff_x28[9];
    uVar5 = unaff_x28[8];
    FUN_100e02748(unaff_x19 + 0x148);
    if (*(long *)(unaff_x19 + 0x1c8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x1d0));
    }
    if ((*(long *)(unaff_x19 + 0x1f8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x1f8) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x200));
    }
    *(undefined1 *)(unaff_x19 + 0x141) = 0;
    func_0x000100e0c460(unaff_x19 + 0xdc0);
    FUN_100e0609c(unaff_x19 + 0xa0);
    if (*(long *)(unaff_x19 + 8) != -0x7fffffffffffffff) {
      FUN_100e0609c();
    }
    *(undefined1 *)(unaff_x19 + 0x140) = 0;
    *unaff_x21 = 0x8000000000000000;
    unaff_x21[1] = uVar4;
    unaff_x21[3] = uVar6;
    unaff_x21[2] = uVar5;
    *(undefined1 *)(unaff_x19 + 0x142) = 1;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dd0f4);
  (*pcVar1)();
}

