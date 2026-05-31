
void FUN_10093f35c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uVar10;
  code *pcVar11;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar12;
  undefined8 *unaff_x21;
  long lVar13;
  undefined8 uVar14;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined8 uVar15;
  long unaff_x27;
  undefined8 unaff_x28;
  long lVar16;
  long unaff_x29;
  undefined8 uVar17;
  long in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001a0,s_invalid_thread_id__108add64e,unaff_x29 + -0x80);
  in_stack_000001b8 = 0x8000000000000005;
  if (in_stack_000001a0 == -0x8000000000000000) {
    *(long *)(unaff_x19 + 0x58) = in_stack_000001a8;
    *(undefined8 *)(unaff_x19 + 0x60) = in_stack_000001b0;
    *(undefined8 *)(unaff_x19 + 0x70) = unaff_x20;
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x78) = *(undefined8 *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0xa0) = 0;
    FUN_100945cb4(&stack0x000001a0,unaff_x19 + 0x70);
    uVar6 = in_stack_000001e8;
    uVar5 = in_stack_000001e0;
    uVar4 = in_stack_000001d8;
    uVar3 = in_stack_000001d0;
    uVar2 = in_stack_000001c8;
    uVar17 = in_stack_000001c0;
    uVar12 = in_stack_000001b8;
    uVar14 = in_stack_000001b0;
    lVar13 = in_stack_000001a8;
    lVar16 = in_stack_000001a0;
    if (in_stack_000001a0 == -0x7fffffffffffffff) {
      uVar10 = 3;
LAB_10093f4c0:
      *unaff_x25 = uVar10;
      *unaff_x21 = 0x8000000000000071;
      uVar10 = 3;
      goto LAB_10093f680;
    }
    uVar15 = 0xffffffffffff80a8;
    FUN_100d78e04(unaff_x19 + 0x70);
    if (lVar16 != -0x8000000000000000) {
      lVar9 = *(long *)(unaff_x19 + 0x40);
      in_stack_00000168 = uVar2;
      in_stack_00000160 = uVar17;
      in_stack_00000178 = uVar4;
      in_stack_00000170 = uVar3;
      in_stack_00000188 = uVar6;
      in_stack_00000180 = uVar5;
      goto joined_r0x00010093f558;
    }
    *(long *)(unaff_x19 + 0x70) = lVar13;
    *(long *)(unaff_x19 + 0x78) = lVar13 + 0x50;
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x58);
    *(undefined1 *)(unaff_x19 + 0xf0) = 0;
    unaff_x26 = 0x1778;
    func_0x0001006eb79c(&stack0x000001a0,unaff_x19 + 0x78);
    uVar15 = in_stack_000001c0;
    uVar14 = in_stack_000001b8;
    lVar16 = in_stack_000001a0;
    if (in_stack_000001a0 == 4) {
      uVar10 = 4;
      goto LAB_10093f4c0;
    }
    uVar17 = *(undefined8 *)(unaff_x27 + 0x10);
    uVar12 = *(undefined8 *)(unaff_x27 + 8);
    in_stack_00000128 = *(undefined8 *)(unaff_x27 + 0x30);
    in_stack_00000120 = *(undefined8 *)(unaff_x27 + 0x28);
    in_stack_00000138 = *(undefined8 *)(unaff_x27 + 0x40);
    in_stack_00000130 = *(undefined8 *)(unaff_x27 + 0x38);
    in_stack_00000148 = *(undefined8 *)(unaff_x27 + 0x50);
    in_stack_00000140 = *(undefined8 *)(unaff_x27 + 0x48);
    in_stack_00000158 = *(undefined8 *)(unaff_x27 + 0x60);
    in_stack_00000150 = *(undefined8 *)(unaff_x27 + 0x58);
    in_stack_00000110 = in_stack_00000210;
    in_stack_00000118 = in_stack_00000218;
    if (*(char *)(unaff_x19 + 0xf0) == '\x03') {
      if (*(char *)(unaff_x19 + 0xe8) == '\x03') {
        lVar13 = *(long *)(unaff_x19 + 0xd8);
        puVar1 = *(undefined8 **)(unaff_x19 + 0xe0);
        pcVar11 = (code *)*puVar1;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(lVar13);
        }
        if (puVar1[1] != 0) {
          _free(lVar13);
        }
      }
      else if (*(char *)(unaff_x19 + 0xe8) == '\0') {
        FUN_100d99140(unaff_x19 + 0xa0);
      }
    }
    if (lVar16 == 3) {
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar12;
      *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0xb0;
      *(code **)(unaff_x29 + -0x78) =
           __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x000001a0,s_failed_to_read_thread_goal__108acbaf1,unaff_x29 + -0x80);
      uVar14 = in_stack_000001b0;
      lVar13 = in_stack_000001a8;
      lVar16 = in_stack_000001a0;
      (**(code **)**(undefined8 **)(unaff_x29 + -0xb0))();
      lVar9 = **(long **)(unaff_x19 + 0x70);
      **(long **)(unaff_x19 + 0x70) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E();
      }
      uVar15 = 0xffffffffffff80a5;
      goto LAB_10093f60c;
    }
    if (lVar16 == 2) {
      in_stack_000000a8 = 2;
      uVar12 = 2;
    }
    else {
      *(undefined8 *)(unaff_x27 + 0x10) = uVar17;
      *(undefined8 *)(unaff_x27 + 8) = uVar12;
      *(undefined8 *)(unaff_x27 + 0x30) = in_stack_00000128;
      *(undefined8 *)(unaff_x27 + 0x28) = in_stack_00000120;
      *(undefined8 *)(unaff_x27 + 0x40) = in_stack_00000138;
      *(undefined8 *)(unaff_x27 + 0x38) = in_stack_00000130;
      *(undefined8 *)(unaff_x27 + 0x50) = in_stack_00000148;
      *(undefined8 *)(unaff_x27 + 0x48) = in_stack_00000140;
      *(undefined8 *)(unaff_x27 + 0x60) = in_stack_00000158;
      *(undefined8 *)(unaff_x27 + 0x58) = in_stack_00000150;
      in_stack_000001a0 = lVar16;
      in_stack_000001b8 = uVar14;
      in_stack_000001c0 = uVar15;
      __ZN16codex_app_server18request_processors21thread_goal_processor26api_thread_goal_from_state17h71fcaa0ae4904a85E
                (&stack0x000000a8,&stack0x000001a0);
      uVar12 = in_stack_000000c0;
      lVar13 = in_stack_000000b0;
      uVar14 = in_stack_000000b8;
      in_stack_00000208 = in_stack_00000108;
    }
    lVar16 = in_stack_000000a8;
    in_stack_00000168 = in_stack_000000d0;
    in_stack_00000160 = in_stack_000000c8;
    in_stack_00000178 = in_stack_000000e0;
    in_stack_00000170 = in_stack_000000d8;
    in_stack_00000188 = in_stack_000000f0;
    in_stack_00000180 = in_stack_000000e8;
    in_stack_00000198 = in_stack_00000100;
    in_stack_00000190 = in_stack_000000f8;
    lVar9 = **(long **)(unaff_x19 + 0x70);
    **(long **)(unaff_x19 + 0x70) = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E();
    }
    lVar9 = *(long *)(unaff_x19 + 0x40);
    uVar17 = 0x800000000000000a;
  }
  else {
    in_stack_00000168 = in_stack_000001c8;
    in_stack_00000160 = in_stack_000001c0;
    in_stack_00000178 = in_stack_000001d8;
    in_stack_00000170 = in_stack_000001d0;
    in_stack_00000188 = in_stack_000001e8;
    in_stack_00000180 = in_stack_000001e0;
    uVar15 = 0xffffffffffff80a8;
    lVar13 = in_stack_000001a8;
    uVar14 = in_stack_000001b0;
    lVar16 = in_stack_000001a0;
    in_stack_00000190 = in_stack_000001f0;
    in_stack_00000198 = in_stack_000001f8;
LAB_10093f60c:
    uVar12 = 0x8000000000000005;
    lVar9 = *(long *)(unaff_x19 + 0x40);
    in_stack_000001f0 = in_stack_00000190;
    in_stack_000001f8 = in_stack_00000198;
joined_r0x00010093f558:
    uVar17 = 0x8000000000000070;
    in_stack_00000208 = uVar15;
    in_stack_00000190 = in_stack_000001f0;
    in_stack_00000198 = in_stack_000001f8;
  }
  if (lVar9 != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x48));
  }
  uVar8 = in_stack_00000198;
  uVar7 = in_stack_00000190;
  uVar6 = in_stack_00000188;
  uVar5 = in_stack_00000180;
  uVar4 = in_stack_00000178;
  uVar3 = in_stack_00000170;
  uVar2 = in_stack_00000168;
  uVar15 = in_stack_00000160;
  *unaff_x25 = 1;
  FUN_100d62de0(unaff_x28);
  unaff_x21[6] = uVar2;
  unaff_x21[5] = uVar15;
  unaff_x21[8] = uVar4;
  unaff_x21[7] = uVar3;
  unaff_x21[10] = uVar6;
  unaff_x21[9] = uVar5;
  unaff_x21[0xc] = uVar8;
  unaff_x21[0xb] = uVar7;
  *unaff_x21 = uVar17;
  unaff_x21[1] = lVar16;
  unaff_x21[2] = lVar13;
  unaff_x21[3] = uVar14;
  unaff_x21[4] = uVar12;
  uVar10 = 1;
  unaff_x21[0xd] = in_stack_00000208;
  unaff_x26 = 0x1778;
LAB_10093f680:
  *(undefined1 *)(unaff_x19 + unaff_x26) = uVar10;
  return;
}

