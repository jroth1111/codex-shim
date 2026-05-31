
/* WARNING: Removing unreachable block (ram,0x000101185018) */
/* WARNING: Removing unreachable block (ram,0x00010118501c) */
/* WARNING: Removing unreachable block (ram,0x000101185078) */
/* WARNING: Removing unreachable block (ram,0x00010118507c) */
/* WARNING: Removing unreachable block (ram,0x00010118502c) */
/* WARNING: Removing unreachable block (ram,0x000101185034) */
/* WARNING: Removing unreachable block (ram,0x00010118503c) */
/* WARNING: Removing unreachable block (ram,0x000101185048) */
/* WARNING: Removing unreachable block (ram,0x000101185054) */
/* WARNING: Removing unreachable block (ram,0x000101185064) */
/* WARNING: Removing unreachable block (ram,0x000101185164) */
/* WARNING: Removing unreachable block (ram,0x000101185174) */
/* WARNING: Removing unreachable block (ram,0x000101185180) */
/* WARNING: Removing unreachable block (ram,0x000101185198) */
/* WARNING: Removing unreachable block (ram,0x0001011851a4) */
/* WARNING: Removing unreachable block (ram,0x0001011851ac) */
/* WARNING: Removing unreachable block (ram,0x0001011851b4) */
/* WARNING: Removing unreachable block (ram,0x00010118518c) */
/* WARNING: Removing unreachable block (ram,0x0001011851c0) */
/* WARNING: Removing unreachable block (ram,0x0001011851c4) */
/* WARNING: Removing unreachable block (ram,0x0001011851cc) */

void FUN_101185294(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  ulong in_x10;
  undefined8 extraout_x11;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  char in_stack_000000c8;
  ulong in_stack_000000e0;
  undefined8 in_stack_000000e8;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000148;
  undefined8 in_stack_00000150;
  
  uVar8 = FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
  if ((in_x10 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000048);
  }
  if ((-0x7fffffffffffffff < unaff_x21) && (unaff_x21 != 0)) {
    _free(in_stack_00000010);
  }
  if ((-0x7ffffffffffffffa < in_stack_00000040) && (in_stack_00000040 != 0)) {
    _free(in_stack_00000008);
  }
  if ((in_stack_000000e0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000e8);
  }
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
  __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E
            (&stack0x00000120,&stack0x00000138);
  in_stack_000000c8 = in_stack_000000c8 + '\x01';
  *(undefined8 *)(unaff_x29 + -0xd0) = 0x8000000000000001;
  *(undefined8 *)(unaff_x29 + -200) = uVar8;
  *(undefined8 *)(unaff_x29 + -0xc0) = extraout_x11;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
  *(long *)(unaff_x29 + -0xb0) = unaff_x21;
  *(undefined8 *)(unaff_x29 + -0xa8) = extraout_x13;
  *(undefined8 *)(unaff_x29 + -0xa0) = extraout_x10;
  *(undefined8 *)(unaff_x29 + -0x98) = extraout_x9;
  *(undefined8 *)(unaff_x29 + -0x90) = extraout_x12;
  plVar6 = (long *)FUN_1006546a8(&stack0x00000090);
  if (plVar6 != (long *)0x0) {
    if (*plVar6 == 1) {
      FUN_100de21d4(plVar6 + 1);
    }
    else if ((*plVar6 == 0) && (plVar6[2] != 0)) {
      _free(plVar6[1]);
    }
    _free(plVar6);
  }
  uVar8 = FUN_108832dfc(uVar8,&stack0x00000090);
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
  __ZN19serde_path_to_error5Track12trigger_impl17hef0d634c98e95866E
            (&stack0x00000120,&stack0x00000138);
  if (((in_stack_00000138 == 2) || (in_stack_00000138 == 4)) && (in_stack_00000148 != 0)) {
    _free(in_stack_00000150);
  }
  bVar5 = in_stack_00000120 != -0x8000000000000000;
  lVar1 = 0;
  if (bVar5) {
    lVar1 = in_stack_00000120;
  }
  uVar2 = 0;
  if (bVar5) {
    uVar2 = in_stack_00000130;
  }
  uVar3 = 8;
  if (bVar5) {
    uVar3 = in_stack_00000128;
  }
  *(long *)(unaff_x29 + -0xd0) = lVar1;
  *(undefined8 *)(unaff_x29 + -200) = uVar3;
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar2;
  *(undefined8 *)(unaff_x29 + -0xb8) = uVar8;
  lVar7 = _malloc(in_stack_00000038);
  if (lVar7 == 0) {
    func_0x0001087c9084(1,in_stack_00000038);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1011853c0);
    (*pcVar4)();
  }
  _memcpy(lVar7,in_stack_00000018,in_stack_00000038);
  if (in_stack_00000090 != 0) {
    _free(in_stack_00000098);
  }
  unaff_x20[1] = 0x8000000000000002;
  unaff_x20[2] = lVar1;
  unaff_x20[3] = uVar3;
  unaff_x20[4] = uVar2;
  unaff_x20[5] = uVar8;
  unaff_x20[6] = in_stack_00000038;
  unaff_x20[7] = lVar7;
  unaff_x20[8] = in_stack_00000038;
  unaff_x20[9] = extraout_x12;
  *unaff_x20 = 2;
  FUN_100de1f74(in_stack_00000050);
  if (*(long *)(in_stack_00000050 + 0x70) != 0) {
    _free(*(undefined8 *)(in_stack_00000050 + 0x78));
  }
  return;
}

