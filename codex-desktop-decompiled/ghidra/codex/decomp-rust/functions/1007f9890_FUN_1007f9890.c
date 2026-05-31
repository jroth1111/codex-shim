
/* WARNING: Removing unreachable block (ram,0x0001007f9f90) */
/* WARNING: Removing unreachable block (ram,0x0001007f9e54) */

void FUN_1007f9890(void)

{
  undefined4 uVar1;
  long lVar2;
  char *unaff_x20;
  long unaff_x26;
  int unaff_w27;
  char in_wzr;
  undefined8 uVar3;
  undefined8 uVar4;
  char *in_stack_00000010;
  undefined4 *in_stack_00000018;
  undefined2 in_stack_000008c2;
  undefined4 in_stack_000008cc;
  undefined8 in_stack_000008d0;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar2 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                    (&stack0x00000860);
  uVar1 = *(undefined4 *)(lVar2 + 0x13c);
  FUN_100e3fdac(&stack0x00000ba0);
  __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
            (unaff_x20 + 8,&stack0x00000ba0,unaff_w27 != 1000000000);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x26 + 0x60);
  if (*in_stack_00000010 == '\x01') {
    *in_stack_00000010 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(in_stack_00000010,0);
  }
  if (*unaff_x20 == '\x01') {
    *unaff_x20 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
  }
  *(undefined8 *)(in_stack_00000018 + 10) = uVar4;
  *(undefined8 *)(in_stack_00000018 + 8) = uVar3;
  *(undefined1 *)(in_stack_00000018 + 2) = 0;
  *(undefined1 *)((long)in_stack_00000018 + 9) = 1;
  *(undefined2 *)((long)in_stack_00000018 + 10) = in_stack_000008c2;
  in_stack_00000018[3] = uVar1;
  *(ulong *)(in_stack_00000018 + 4) = CONCAT44(in_stack_000008cc,1);
  *(undefined8 *)(in_stack_00000018 + 6) = in_stack_000008d0;
  *in_stack_00000018 = 4;
  return;
}

