
/* WARNING: Removing unreachable block (ram,0x00010091967c) */
/* WARNING: Removing unreachable block (ram,0x00010091a830) */
/* WARNING: Removing unreachable block (ram,0x0001009196f4) */
/* WARNING: Removing unreachable block (ram,0x0001009197a4) */
/* WARNING: Removing unreachable block (ram,0x0001009198b8) */
/* WARNING: Removing unreachable block (ram,0x0001009198ec) */
/* WARNING: Removing unreachable block (ram,0x0001009198f8) */
/* WARNING: Removing unreachable block (ram,0x000100919904) */
/* WARNING: Removing unreachable block (ram,0x000100919910) */
/* WARNING: Removing unreachable block (ram,0x00010091991c) */
/* WARNING: Removing unreachable block (ram,0x00010091992c) */
/* WARNING: Removing unreachable block (ram,0x000100919938) */
/* WARNING: Removing unreachable block (ram,0x000100919b7c) */
/* WARNING: Removing unreachable block (ram,0x000100919ba0) */
/* WARNING: Removing unreachable block (ram,0x000100919944) */
/* WARNING: Removing unreachable block (ram,0x000100919a54) */
/* WARNING: Removing unreachable block (ram,0x000100919a64) */
/* WARNING: Removing unreachable block (ram,0x000100919ab4) */
/* WARNING: Removing unreachable block (ram,0x000100919df0) */
/* WARNING: Removing unreachable block (ram,0x000100919e04) */
/* WARNING: Removing unreachable block (ram,0x000100919e10) */
/* WARNING: Removing unreachable block (ram,0x000100919e1c) */
/* WARNING: Removing unreachable block (ram,0x000100919e24) */
/* WARNING: Removing unreachable block (ram,0x000100919e2c) */
/* WARNING: Removing unreachable block (ram,0x000100919e3c) */
/* WARNING: Removing unreachable block (ram,0x000100919e40) */
/* WARNING: Removing unreachable block (ram,0x000100919e48) */
/* WARNING: Removing unreachable block (ram,0x000100919e50) */
/* WARNING: Removing unreachable block (ram,0x000100919e58) */
/* WARNING: Removing unreachable block (ram,0x000100919e68) */
/* WARNING: Removing unreachable block (ram,0x000100919e6c) */
/* WARNING: Removing unreachable block (ram,0x000100919e74) */
/* WARNING: Removing unreachable block (ram,0x000100919b3c) */
/* WARNING: Removing unreachable block (ram,0x000100919b40) */
/* WARNING: Removing unreachable block (ram,0x000100919b48) */
/* WARNING: Removing unreachable block (ram,0x000100919b5c) */
/* WARNING: Removing unreachable block (ram,0x000100919b68) */
/* WARNING: Removing unreachable block (ram,0x000100919b74) */
/* WARNING: Removing unreachable block (ram,0x000100919d30) */
/* WARNING: Removing unreachable block (ram,0x0001009198b0) */
/* WARNING: Removing unreachable block (ram,0x000100919a58) */

void FUN_10091ad24(void)

{
  long *plVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x19;
  undefined8 *puVar5;
  ulong unaff_x23;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x27;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000090;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long *in_stack_000000f0;
  undefined1 *in_stack_000000f8;
  long in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b0;
  long in_stack_000001b8;
  long in_stack_00000250;
  long in_stack_00000258;
  long in_stack_00000260;
  long in_stack_00000268;
  long in_stack_00000270;
  long in_stack_00000278;
  long in_stack_00000280;
  long in_stack_00000288;
  long in_stack_00000490;
  long in_stack_00000500;
  long in_stack_00000508;
  long in_stack_00000510;
  
  plVar1 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000670);
  if (in_stack_000000e0 != unaff_x27 + 1) {
    FUN_100e3155c(&stack0x000005f8);
  }
  if ((unaff_x23 != 0x8000000000000001) && ((unaff_x23 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  if ((in_stack_000000c0 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000050);
  }
  if ((in_stack_000000c8 != 0x8000000000000001) && ((in_stack_000000c8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_00000048);
  }
  if ((in_stack_000000d8 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000058);
  }
  FUN_100de8910(&stack0x000004d8);
  if (in_stack_00000490 != unaff_x27) {
    FUN_100de6690(&stack0x00000490);
  }
  if (((long)in_stack_000000b8 < 0) && ((in_stack_000000b8 & 0xfffffffffffffffe) != unaff_x27 - 1U))
  {
    FUN_100de6690(&stack0x000001c0);
  }
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000500,s_invalid_Guardian_denial_event__108acb2f3,&stack0x00000670);
  if (*plVar1 == 1) {
    uVar7 = plVar1[1];
    if ((uVar7 & 3) != 1) goto LAB_100919bb4;
    puVar6 = (undefined8 *)(uVar7 - 1);
    uVar8 = *puVar6;
    puVar5 = *(undefined8 **)(uVar7 + 7);
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar8);
    }
    if (puVar5[1] != 0) {
      _free(uVar8);
    }
  }
  else {
    if ((*plVar1 != 0) || (plVar1[2] == 0)) goto LAB_100919bb4;
    puVar6 = (undefined8 *)plVar1[1];
  }
  _free(puVar6);
LAB_100919bb4:
  _free(plVar1);
  *(undefined1 *)(unaff_x19 + 0x111) = 0;
  if (*(long *)(unaff_x19 + 0xf0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xf8));
  }
  *in_stack_000000f8 = 1;
  if (in_stack_00000500 == -0x7fffffffffffffff) {
    *in_stack_000000f0 = unaff_x27 + 0x6c;
    uVar2 = 3;
  }
  else {
    FUN_100d7b01c(in_stack_00000090);
    if (in_stack_00000500 == -0x8000000000000000) {
      lVar3 = unaff_x27 + 0xe;
    }
    else {
      lVar3 = unaff_x27 + 0x6b;
      in_stack_00000180 = in_stack_00000250;
      in_stack_00000188 = in_stack_00000258;
      in_stack_00000190 = in_stack_00000260;
      in_stack_00000198 = in_stack_00000268;
      in_stack_000001a0 = in_stack_00000270;
      in_stack_000001a8 = in_stack_00000278;
      in_stack_000001b0 = in_stack_00000280;
      in_stack_000001b8 = in_stack_00000288;
    }
    in_stack_000000f0[6] = in_stack_00000188;
    in_stack_000000f0[5] = in_stack_00000180;
    in_stack_000000f0[8] = in_stack_00000198;
    in_stack_000000f0[7] = in_stack_00000190;
    in_stack_000000f0[10] = in_stack_000001a8;
    in_stack_000000f0[9] = in_stack_000001a0;
    *in_stack_000000f0 = lVar3;
    in_stack_000000f0[1] = in_stack_00000500;
    in_stack_000000f0[2] = in_stack_00000508;
    in_stack_000000f0[3] = in_stack_00000510;
    in_stack_000000f0[4] = in_stack_000000e8;
    in_stack_000000f0[0xc] = in_stack_000001b8;
    in_stack_000000f0[0xb] = in_stack_000001b0;
    uVar2 = 1;
    in_stack_000000f0[0xd] = -0x7f58;
  }
  *(undefined1 *)(unaff_x19 + 0xe38) = uVar2;
  return;
}

