
/* WARNING: Removing unreachable block (ram,0x0001018453cc) */
/* WARNING: Removing unreachable block (ram,0x0001018453d4) */

void FUN_101845134(void)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong *unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x23;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  long lVar5;
  long lVar6;
  undefined8 in_stack_00000028;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_000001d8;
  undefined8 in_stack_000001f0;
  long in_stack_000001f8;
  long in_stack_00000200;
  undefined8 in_stack_00000208;
  long in_stack_00000210;
  
  lVar3 = FUN_1088bbbb8(s_missing_field_____108ac28f7,&stack0x000000a0);
  if ((in_stack_00000050 != 0x8000000000000001) && ((in_stack_00000050 & 0x7fffffffffffffff) != 0))
  {
    _free();
  }
  if ((in_stack_00000048 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000028);
  }
  FUN_10194df64(&stack0x00000258);
  if (in_stack_00000210 != unaff_x25) {
    func_0x00010194dc28(&stack0x00000210);
  }
  if (((long)unaff_x20 < 0) && ((unaff_x20 & 0xfffffffffffffffe) != unaff_x25 - 1U)) {
    func_0x00010194dc28(&stack0x00000180);
  }
  if (unaff_x27 == -0x8000000000000000) {
    plVar4 = (long *)_malloc(8);
    if (plVar4 == (long *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101845950);
      (*pcVar2)();
    }
    *plVar4 = lVar3;
    lVar3 = func_0x000106029c30(0x28,plVar4,&UNK_10b25d9b8);
    *(undefined1 *)((long)unaff_x19 + 0xc2) = 0;
    if ((unaff_x19[8] & 0x7fffffffffffffff) == 0) {
      *(undefined2 *)((long)unaff_x19 + 0xc3) = 0;
      cVar1 = *(char *)((long)unaff_x19 + 0xc1);
    }
    else {
      _free(unaff_x19[9]);
      *(undefined2 *)((long)unaff_x19 + 0xc3) = 0;
      cVar1 = *(char *)((long)unaff_x19 + 0xc1);
    }
    if ((cVar1 == '\x01') && ((*unaff_x19 & 0x7fffffffffffffff) != 0)) {
      _free(unaff_x19[1]);
    }
    unaff_x27 = -0x8000000000000000;
  }
  else {
    lVar5 = *(long *)(unaff_x26 + 0x18);
    unaff_x28[1] = *(long *)(unaff_x26 + 0x20);
    *unaff_x28 = lVar5;
    unaff_x28[4] = in_stack_00000200;
    unaff_x28[3] = in_stack_000001f8;
    *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000001f0;
    *(undefined8 *)(unaff_x29 + -0x68) = in_stack_00000208;
    *(undefined1 *)((long)unaff_x19 + 0xc2) = 0;
    if ((unaff_x19[8] & 0x7fffffffffffffff) != 0) {
      _free(unaff_x19[9]);
    }
    *(undefined2 *)((long)unaff_x19 + 0xc3) = 0;
    unaff_x23 = in_stack_000001d8;
  }
  *unaff_x21 = unaff_x27;
  unaff_x21[1] = lVar3;
  unaff_x21[2] = unaff_x23;
  lVar3 = *unaff_x28;
  lVar6 = unaff_x28[3];
  lVar5 = unaff_x28[2];
  unaff_x21[4] = unaff_x28[1];
  unaff_x21[3] = lVar3;
  unaff_x21[6] = lVar6;
  unaff_x21[5] = lVar5;
  lVar3 = unaff_x28[4];
  unaff_x21[8] = unaff_x28[5];
  unaff_x21[7] = lVar3;
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  return;
}

