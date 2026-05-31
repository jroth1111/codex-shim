
undefined8 *
__ZN23codex_app_server_daemon7backend3pid10PidBackend12command_args17ha706026fb7ee5764E
          (undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 extraout_x1;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iStack_cc;
  ulong uStack_c8;
  int *piStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  int *piStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int *piStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (*(byte *)(param_2 + 0x48) == 2) {
    puVar2 = (undefined8 *)_malloc(0x30);
    if (puVar2 == (undefined8 *)0x0) {
LAB_101bf6b50:
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
LAB_101bf6b5c:
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
      iStack_cc = (int)extraout_x1;
      if (iStack_cc < 0) {
        piStack_70 = &iStack_cc;
        puStack_68 = &
                     __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&piStack_c0,s_pid_managed_app_server_pid_is_ou_108ade7d7,&piStack_70);
        __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&piStack_70);
        puStack_98 = puStack_68;
        piStack_a0 = piStack_70;
        uStack_88 = uStack_58;
        uStack_90 = uStack_60;
        uStack_78 = uStack_48;
        uStack_80 = uStack_50;
        puVar2 = (undefined8 *)FUN_1088c6ef4(&piStack_c0,&piStack_a0);
      }
      else {
        iVar1 = _kill(extraout_x1,0xf);
        if (iVar1 != 0) {
          puVar3 = (uint *)___error();
          if (*puVar3 != 3) {
            uVar6 = (ulong)*puVar3 << 0x20 | 2;
            piStack_70 = &iStack_cc;
            puStack_68 = &
                         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
            ;
            uStack_c8 = uVar6;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&piStack_c0,s__failed_to_terminate_pid_managed_108ade806,&piStack_70);
            uStack_a8 = uVar6;
            __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&piStack_70);
            puStack_98 = puStack_68;
            piStack_a0 = piStack_70;
            uStack_88 = uStack_58;
            uStack_90 = uStack_60;
            uStack_78 = uStack_48;
            uStack_80 = uStack_50;
            puStack_68 = (undefined *)uStack_b8;
            piStack_70 = piStack_c0;
            uStack_60 = uStack_b0;
            uStack_58 = uVar6;
            puVar2 = (undefined8 *)FUN_1088c6db8(&piStack_70,&piStack_a0);
            return puVar2;
          }
        }
        puVar2 = (undefined8 *)0x0;
      }
      return puVar2;
    }
    *puVar2 = &UNK_108cf47bb;
    puVar2[1] = 10;
    puVar2[2] = &UNK_108cf47c5;
    puVar2[3] = 6;
    puVar4 = &UNK_108cf47cb;
    uVar5 = 0xf;
  }
  else {
    if ((*(byte *)(param_2 + 0x48) & 1) != 0) {
      puVar2 = (undefined8 *)_malloc(0x40);
      if (puVar2 == (undefined8 *)0x0) goto LAB_101bf6b5c;
      *puVar2 = &UNK_108cf47bb;
      puVar2[1] = 10;
      puVar2[2] = &UNK_108cf493b;
      puVar2[3] = 0x10;
      puVar2[4] = &UNK_108cf492c;
      puVar2[5] = 8;
      puVar2[6] = &UNK_108cf4934;
      puVar2[7] = 7;
      uVar5 = 4;
      goto LAB_101bf6b3c;
    }
    puVar2 = (undefined8 *)_malloc(0x30);
    if (puVar2 == (undefined8 *)0x0) goto LAB_101bf6b50;
    *puVar2 = &UNK_108cf47bb;
    puVar2[1] = 10;
    puVar2[2] = &UNK_108cf492c;
    puVar2[3] = 8;
    puVar4 = &UNK_108cf4934;
    uVar5 = 7;
  }
  puVar2[4] = puVar4;
  puVar2[5] = uVar5;
  uVar5 = 3;
LAB_101bf6b3c:
  *param_1 = uVar5;
  param_1[1] = puVar2;
  param_1[2] = uVar5;
  return puVar2;
}

