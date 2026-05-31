
/* WARNING: Removing unreachable block (ram,0x0001007f9470) */
/* WARNING: Removing unreachable block (ram,0x0001007f9fa8) */
/* WARNING: Removing unreachable block (ram,0x0001007f9e54) */

void FUN_1007f8a94(void)

{
  char *unaff_x20;
  long unaff_x27;
  char in_wzr;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *in_stack_00000018;
  long in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined4 in_stack_00000590;
  undefined4 in_stack_00000594;
  
  FUN_100811adc(&stack0x00000ba0);
  __ZN14rama_http_core2h25proto7streams4recv4Recv11ignore_data17h0ebaefcb3d851c33E(&stack0x00000ba0)
  ;
  uVar2 = *(undefined8 *)(unaff_x27 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x27 + 0x18);
  (**(code **)(in_stack_00000580 + 0x20))
            (&stack0x00000598,in_stack_00000588,CONCAT44(in_stack_00000594,in_stack_00000590));
  if (*unaff_x20 == '\x01') {
    *unaff_x20 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
  }
  *(undefined8 *)(in_stack_00000018 + 10) = uVar2;
  *(undefined8 *)(in_stack_00000018 + 8) = uVar1;
  *(undefined1 *)(in_stack_00000018 + 2) = 1;
  *(undefined1 *)((long)in_stack_00000018 + 9) = 0;
  *(undefined2 *)((long)in_stack_00000018 + 10) = 0;
  in_stack_00000018[3] = 0;
  *(undefined1 **)(in_stack_00000018 + 4) = &stack0x000008c0;
  *(undefined8 *)(in_stack_00000018 + 6) = 1;
  *in_stack_00000018 = 4;
  return;
}

