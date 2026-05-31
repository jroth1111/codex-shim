
void FUN_1009256ec(void)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 *puVar7;
  undefined8 *unaff_x21;
  undefined1 *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 in_stack_00000080;
  undefined1 *in_stack_00000088;
  ulong in_stack_00000210;
  long in_stack_00001940;
  undefined8 in_stack_00001948;
  undefined8 in_stack_00001950;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00001940,s_failed_to_set_external_auth__108acb569,&stack0x00000430);
  if ((in_stack_00000210 & 3) == 1) {
    uVar5 = *(undefined8 *)(in_stack_00000210 - 1);
    puVar7 = *(undefined8 **)(in_stack_00000210 + 7);
    pcVar6 = (code *)*puVar7;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(uVar5);
    }
    if (puVar7[1] != 0) {
      _free(uVar5);
    }
    _free((undefined8 *)(in_stack_00000210 - 1));
    unaff_x20 = in_stack_00000080;
  }
  if (in_stack_00001940 == -0x8000000000000000) {
    *(long *)(unaff_x19 + 0x250) = *(long *)(*(long *)(unaff_x19 + 0x1f8) + 0x138) + 0x10;
    *(undefined1 *)(unaff_x19 + 0xd70) = 0;
    cVar2 = FUN_1006de4f8(unaff_x19 + 0x250);
    if (cVar2 == '\x02') {
      uVar4 = 4;
    }
    else {
      if ((*(char *)(unaff_x19 + 0xd70) == '\x03') && (*(char *)(unaff_x19 + 0xd68) == '\x03')) {
        FUN_100e5e3e0(unaff_x19 + 0x268);
      }
      lVar9 = *(long *)(unaff_x19 + 0x1f8);
      plVar8 = *(long **)(lVar9 + 0x138);
      lVar1 = *plVar8;
      *plVar8 = lVar1 + 1;
      if (lVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1009276f4);
        (*pcVar6)();
      }
      func_0x000100025ae8(&stack0x00001940,*(long *)(*(long *)(unaff_x19 + 0x1f8) + 0x150) + 0x1c50)
      ;
      __ZN16codex_app_server14config_manager13ConfigManager33replace_cloud_requirements_loader17h50b3cd8762040b9fE
                (lVar9,plVar8,&stack0x00001940);
      *(undefined8 *)(unaff_x19 + 0x250) = *(undefined8 *)(unaff_x19 + 0x1f8);
      *(undefined1 *)(unaff_x19 + 0x7a8) = 0;
      uVar3 = FUN_10089211c(unaff_x19 + 0x250);
      if ((uVar3 & 1) == 0) {
        func_0x000100d23ba8(unaff_x19 + 0x250);
        if ((*(long *)(unaff_x19 + 0x230) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x230) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x238));
        }
        if (*(long *)(unaff_x19 + 0x218) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x220));
        }
        if (*(long *)(unaff_x19 + 0x200) != 0) {
          in_stack_00001948 = 0x8000000000000003;
          in_stack_00001940 = -0x8000000000000000;
          goto LAB_1009262a0;
        }
        *unaff_x22 = 1;
        in_stack_00001940 = -0x8000000000000000;
        in_stack_00001948 = 0x8000000000000003;
        goto LAB_100926580;
      }
      uVar4 = 5;
    }
    *unaff_x22 = uVar4;
LAB_1009262bc:
    uVar4 = 3;
  }
  else {
    lVar9 = -0x7f5b;
    if ((*(long *)(unaff_x19 + 0x230) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x230) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x238));
    }
    if (*(long *)(unaff_x19 + 0x218) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x220));
    }
    if (*(long *)(unaff_x19 + 0x200) != 0) {
LAB_1009262a0:
      _free(*(undefined8 *)(unaff_x19 + 0x208));
    }
    *unaff_x22 = 1;
    if (in_stack_00001940 == -0x7fffffffffffffff) goto LAB_1009262bc;
LAB_100926580:
    *(undefined1 *)(unaff_x19 + 0x1a3) = 1;
    *(long *)(unaff_x19 + 0x138) = in_stack_00001940;
    *(undefined8 *)(unaff_x19 + 0x140) = in_stack_00001948;
    *(undefined8 *)(unaff_x19 + 0x148) = in_stack_00001950;
    *(undefined8 *)(unaff_x19 + 0x150) = 0x8000000000000005;
    *(long *)(unaff_x19 + 0x198) = lVar9;
    FUN_100d6fe00();
    *(bool *)(unaff_x19 + 0x1a1) = *(long *)(unaff_x19 + 0x138) == -0x8000000000000000;
    lVar9 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x148);
    *(undefined2 *)(unaff_x19 + 0x1a2) = 0;
    uVar10 = *(undefined8 *)(unaff_x19 + 0xd78);
    uVar21 = *(undefined8 *)(unaff_x19 + 0xd90);
    uVar17 = *(undefined8 *)(unaff_x19 + 0xd88);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x198);
    uVar22 = *(undefined8 *)(unaff_x19 + 0x180);
    uVar18 = *(undefined8 *)(unaff_x19 + 0x178);
    uVar14 = *(undefined8 *)(unaff_x19 + 400);
    uVar11 = *(undefined8 *)(unaff_x19 + 0x188);
    uVar15 = *(undefined8 *)(unaff_x19 + 0x140);
    uVar12 = *(undefined8 *)(unaff_x19 + 0x138);
    uVar23 = *(undefined8 *)(unaff_x19 + 0x150);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x148);
    uVar24 = *(undefined8 *)(unaff_x19 + 0x160);
    uVar20 = *(undefined8 *)(unaff_x19 + 0x158);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x170);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x168);
    unaff_x23[1] = *(undefined8 *)(unaff_x19 + 0xd80);
    *unaff_x23 = uVar10;
    unaff_x23[7] = uVar23;
    unaff_x23[6] = uVar19;
    unaff_x23[9] = uVar24;
    unaff_x23[8] = uVar20;
    unaff_x23[3] = uVar21;
    unaff_x23[2] = uVar17;
    unaff_x23[5] = uVar15;
    unaff_x23[4] = uVar12;
    unaff_x23[0x10] = uVar5;
    unaff_x23[0xd] = uVar22;
    unaff_x23[0xc] = uVar18;
    unaff_x23[0xf] = uVar14;
    unaff_x23[0xe] = uVar11;
    unaff_x23[0xb] = uVar16;
    unaff_x23[10] = uVar13;
    *(long *)(unaff_x19 + 0x230) = lVar9 + 0x10;
    *(undefined1 *)(unaff_x19 + 0x2a0) = 0;
    uVar3 = func_0x000100892a8c(unaff_x19 + 0x1a8);
    if ((uVar3 & 1) == 0) {
      FUN_100db1748(unaff_x19 + 0x1a8);
      if (*(char *)(unaff_x19 + 0x1a1) == '\x01') {
        *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x19 + 0x130);
        *(undefined1 *)(unaff_x19 + 0x1b8) = 0;
        *(undefined1 *)(unaff_x19 + 0x1c9) = 0;
        uVar3 = FUN_100922e2c(unaff_x19 + 0x1a8);
        if ((uVar3 & 1) != 0) {
          uVar4 = 5;
          goto LAB_100926698;
        }
        FUN_100d6c6a4(unaff_x19 + 0x1a8);
      }
      *(undefined2 *)(unaff_x19 + 0x1a2) = 0;
      *(undefined1 *)(unaff_x19 + 0x1a0) = 1;
      FUN_100d5d5a8(unaff_x20);
      *unaff_x21 = 0x8000000000000000;
      uVar4 = 1;
      goto LAB_1009270f8;
    }
    uVar4 = 4;
  }
LAB_100926698:
  *in_stack_00000088 = uVar4;
  *unaff_x21 = 0x8000000000000001;
  uVar4 = 6;
LAB_1009270f8:
  *(undefined1 *)(unaff_x19 + 0xb8) = uVar4;
  return;
}

