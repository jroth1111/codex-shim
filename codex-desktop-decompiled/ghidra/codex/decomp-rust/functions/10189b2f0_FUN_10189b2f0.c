
void FUN_10189b2f0(void)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *unaff_x19;
  undefined *puVar5;
  long *unaff_x21;
  long *unaff_x22;
  undefined *unaff_x26;
  long lVar6;
  byte bStack0000000000000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined1 *in_stack_00000050;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000040,s_no_rollout_found_for_thread_id_108add72b);
  puVar5 = in_stack_00000048;
  plVar2 = in_stack_00000040;
  cVar1 = (char)*unaff_x19;
  if (cVar1 == '\0') {
    if (*(long *)((long)unaff_x19 + 9) != unaff_x22[1] ||
        *(long *)((long)unaff_x19 + 1) != *unaff_x22) {
LAB_10189b418:
      in_stack_00000008 = unaff_x19[1];
      _bStack0000000000000000 = *unaff_x19;
      in_stack_00000018 = unaff_x19[3];
      in_stack_00000010 = unaff_x19[2];
      in_stack_00000040 = unaff_x22;
      in_stack_00000048 = unaff_x26;
      in_stack_00000050 = (undefined1 *)register0x00000008;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000028,s__failed_to_load_conversation_sum_108addd64,&stack0x00000040);
      unaff_x21[0xc] = -0x7f5b;
      unaff_x21[1] = in_stack_00000030;
      *unaff_x21 = in_stack_00000028;
      unaff_x21[2] = in_stack_00000038;
      unaff_x21[3] = -0x7ffffffffffffffb;
      if (bStack0000000000000000 < 2) {
        if (bStack0000000000000000 != 0) {
LAB_10189b490:
          if (in_stack_00000008 != 0) {
            _free(in_stack_00000010);
          }
        }
      }
      else if ((bStack0000000000000000 == 2) || (bStack0000000000000000 != 3)) goto LAB_10189b490;
      if (plVar2 == (long *)0x0) {
        return;
      }
      goto LAB_10189b4a4;
    }
    in_stack_00000008 = unaff_x22[1];
    _bStack0000000000000000 = *unaff_x22;
    in_stack_00000040 = (long *)register0x00000008;
    in_stack_00000048 = unaff_x26;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (s__no_rollout_found_for_conversati_108addcdd,&stack0x00000040);
    lVar4 = -0x7f58;
LAB_10189b3dc:
    unaff_x21[0xc] = lVar4;
    unaff_x21[3] = -0x7ffffffffffffffb;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x03') goto LAB_10189b418;
      _bStack0000000000000000 = unaff_x19[1];
      in_stack_00000008 = unaff_x19[2];
      in_stack_00000048 = &DAT_10192d9a4;
      in_stack_00000040 = (long *)register0x00000008;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (s_is_not_supported_yet_108addcc5,&stack0x00000040);
      lVar4 = -0x7f59;
      goto LAB_10189b3dc;
    }
    if ((undefined1 *)unaff_x19[3] == in_stack_00000050) {
      lVar4 = unaff_x19[2];
      iVar3 = _memcmp(lVar4,in_stack_00000048);
      if (iVar3 != 0) goto LAB_10189b378;
      lVar6 = unaff_x19[1];
      in_stack_00000008 = unaff_x22[1];
      _bStack0000000000000000 = *unaff_x22;
      in_stack_00000040 = (long *)register0x00000008;
      in_stack_00000048 = unaff_x26;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (s__no_rollout_found_for_conversati_108addcdd,&stack0x00000040);
      unaff_x21[0xc] = -0x7f58;
      unaff_x21[3] = -0x7ffffffffffffffb;
      if (lVar6 != 0) {
        _free(lVar4);
      }
    }
    else {
LAB_10189b378:
      lVar4 = unaff_x19[1];
      unaff_x21[1] = unaff_x19[2];
      *unaff_x21 = lVar4;
      lVar4 = unaff_x19[3];
      unaff_x21[0xc] = -0x7f58;
      unaff_x21[2] = lVar4;
      unaff_x21[3] = -0x7ffffffffffffffb;
    }
  }
  if (plVar2 != (long *)0x0) {
    _free(puVar5);
  }
  if (cVar1 == '\x01') {
    return;
  }
  if (cVar1 != '\x02') {
    return;
  }
  if (unaff_x19[1] == 0) {
    return;
  }
  puVar5 = (undefined *)unaff_x19[2];
LAB_10189b4a4:
  _free(puVar5);
  return;
}

