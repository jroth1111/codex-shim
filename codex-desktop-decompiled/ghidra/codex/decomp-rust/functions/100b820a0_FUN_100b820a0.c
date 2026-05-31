
undefined8 FUN_100b820a0(void)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long unaff_x19;
  undefined8 *puVar9;
  ulong uVar10;
  ulong unaff_x21;
  ulong unaff_x23;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lStack0000000000000018;
  undefined8 *in_stack_00000028;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  long in_stack_00000180;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000170,s_remote_app_server_at_____write_f_108ad0efc,&stack0x00000520);
  lVar18 = in_stack_00000180;
  uVar14 = in_stack_00000178;
  uVar12 = in_stack_00000170;
  if (in_stack_00000180 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = _malloc(in_stack_00000180);
    if (lVar6 == 0) {
      func_0x0001087c9084(1,lVar18);
      goto LAB_100b84f94;
    }
  }
  _memcpy(lVar6,uVar14,lVar18);
  uVar7 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                    (unaff_x19 + 0x1a8,&stack0x00000520);
  if ((uVar7 & 3) == 1) {
    uVar15 = *(undefined8 *)(uVar7 - 1);
    puVar9 = *(undefined8 **)(uVar7 + 7);
    pcVar8 = (code *)*puVar9;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar15);
    }
    if (puVar9[1] != 0) {
      _free(uVar15);
    }
    _free((undefined8 *)(uVar7 - 1));
    uVar7 = *(ulong *)(unaff_x19 + 0x1e8);
  }
  else {
    uVar7 = *(ulong *)(unaff_x19 + 0x1e8);
  }
  if ((uVar7 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1f0));
  }
  *(undefined1 *)(unaff_x19 + 0x3a5) = 1;
  *(undefined1 *)(unaff_x19 + 0x1e0) = 0xb;
  *(undefined8 *)(unaff_x19 + 0x1e8) = uVar12;
  *(undefined8 *)(unaff_x19 + 0x1f0) = uVar14;
  *(long *)(unaff_x19 + 0x1f8) = lVar18;
  if (in_stack_000000c0 != 0) {
    _free(in_stack_000000c8);
  }
  if ((unaff_x23 & 3) == 1) {
    uVar12 = *(undefined8 *)(unaff_x23 - 1);
    puVar9 = *(undefined8 **)(unaff_x23 + 7);
    pcVar8 = (code *)*puVar9;
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(uVar12);
    }
    if (puVar9[1] != 0) {
      _free(uVar12);
    }
    _free((undefined8 *)(unaff_x23 - 1));
  }
  plVar11 = *(long **)(unaff_x19 + 0x548);
  if (*plVar11 == 1) {
    uVar7 = plVar11[1];
    if ((uVar7 & 3) == 1) {
      puVar13 = (undefined8 *)(uVar7 - 1);
      uVar12 = *puVar13;
      puVar9 = *(undefined8 **)(uVar7 + 7);
      pcVar8 = (code *)*puVar9;
      if (pcVar8 != (code *)0x0) {
        (*pcVar8)(uVar12);
      }
      if (puVar9[1] != 0) {
        _free(uVar12);
      }
      goto LAB_100b821a4;
    }
  }
  else if ((*plVar11 == 0) && (plVar11[2] != 0)) {
    puVar13 = (undefined8 *)plVar11[1];
LAB_100b821a4:
    _free(puVar13);
  }
  _free(plVar11);
  if (*(long *)(unaff_x19 + 0x530) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x538));
  }
  if (((*(byte *)(unaff_x19 + 0x39a) & 1) != 0) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free(in_stack_00000028);
  }
  *(undefined1 *)(unaff_x19 + 0x39a) = 0;
  *(undefined1 *)(unaff_x19 + 0x39e) = 0;
  if (*(long *)(unaff_x19 + 0x3e0) != -0x7ffffffffffffffd) {
    *(undefined1 *)(unaff_x19 + 0x39b) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x39b) = 0;
  (**(code **)(*(long *)(unaff_x19 + 0x550) + 0x20))
            (unaff_x19 + 0x568,*(undefined8 *)(unaff_x19 + 0x558),*(undefined8 *)(unaff_x19 + 0x560)
            );
  uVar7 = *(ulong *)(unaff_x19 + 0x3a8);
  if (uVar7 != 7) {
    if ((uVar7 != 6) && ((*(byte *)(unaff_x19 + 0x39c) & 1) != 0)) {
      if ((((*(byte *)(unaff_x19 + 0x39d) & 1) != 0) && ((uVar7 & 3) != 0)) &&
         ((uVar7 != 4 || (*(short *)(unaff_x19 + 0x3d0) != 0x12)))) {
        (**(code **)(*(long *)(unaff_x19 + 0x3b0) + 0x20))
                  (unaff_x19 + 0x3c8,*(undefined8 *)(unaff_x19 + 0x3b8),
                   *(undefined8 *)(unaff_x19 + 0x3c0));
      }
      *(undefined1 *)(unaff_x19 + 0x39d) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0x39c) = 0;
  }
  *(undefined2 *)(unaff_x19 + 0x39c) = 0;
  *(undefined1 *)(unaff_x19 + 0x3a5) = 0;
  lStack0000000000000018 = *(long *)(unaff_x19 + 0x1e8);
  if (lStack0000000000000018 == -0x8000000000000000) {
    in_stack_00000028 = (undefined8 *)_malloc(0x2a);
    if (in_stack_00000028 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x2a);
LAB_100b84f94:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100b84f98);
      (*pcVar8)();
    }
    in_stack_00000028[1] = 0x65767265732d7070;
    *in_stack_00000028 = 0x612065746f6d6572;
    in_stack_00000028[3] = 0x6c656e6e61686320;
    in_stack_00000028[2] = 0x72656b726f772072;
    *(undefined8 *)((long)in_stack_00000028 + 0x22) = 0x6465736f6c632073;
    *(undefined8 *)((long)in_stack_00000028 + 0x1a) = 0x69206c656e6e6168;
    uVar1 = 0xb;
    lStack0000000000000018 = 0x2a;
    lVar18 = 0x2a;
  }
  else {
    uVar1 = *(undefined1 *)(unaff_x19 + 0x1e0);
    in_stack_00000028 = *(undefined8 **)(unaff_x19 + 0x1f0);
    lVar18 = *(long *)(unaff_x19 + 0x1f8);
  }
  *(undefined1 *)(unaff_x19 + 0x3a6) = 0;
  plVar11 = *(long **)(unaff_x19 + 0x1b0);
  lVar6 = *(long *)(unaff_x19 + 0x1b8);
  lVar16 = *(long *)(unaff_x19 + 0x1c8);
  lVar17 = *plVar11;
  plVar4 = (long *)0x0;
  lVar5 = 0;
  if (lVar6 != 0) {
    plVar4 = plVar11 + lVar6 * -4 + -4;
    lVar5 = lVar6 * 0x21 + 0x29;
  }
  uVar7 = CONCAT17(-(-1 < lVar17),
                   CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                            CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                     CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                              CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18)),
                                                       CONCAT12(-(-1 < (char)((ulong)lVar17 >> 0x10)
                                                                 ),CONCAT11(-(-1 < (char)((ulong)
                                                  lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
          0x8080808080808080;
  plVar3 = plVar11 + 1;
  while (lVar16 != 0) {
    while (uVar7 == 0) {
      lVar17 = *plVar3;
      plVar11 = plVar11 + -0x20;
      plVar3 = plVar3 + 1;
      uVar7 = CONCAT17(-(-1 < lVar17),
                       CONCAT16(-(-1 < (char)((ulong)lVar17 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar17 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar17 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar17 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar17 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar17 >> 8)),-(-1 < (char)lVar17)))))))) &
              0x8080808080808080;
    }
    uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 - 1 & uVar7;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
    lVar16 = lVar16 + -1;
    uVar10 = *(ulong *)((long)plVar11 + uVar2 * -4 + -0x20);
    if (uVar10 == 0x8000000000000001) goto joined_r0x000100b8468c;
    uVar12 = *(undefined8 *)((long)plVar11 + uVar2 * -4 + -0x18);
    uVar14 = *(undefined8 *)((long)plVar11 + uVar2 * -4 + -8);
    if (lVar18 == 0) {
      lVar17 = 1;
    }
    else {
      lVar17 = _malloc(lVar18);
      if (lVar17 == 0) {
        func_0x0001087c9084(1,lVar18);
        goto LAB_100b84f94;
      }
    }
    _memcpy(lVar17,in_stack_00000028,lVar18);
    __ZN3std2io5error5Error3new17h002dced88496ea8bE(uVar1,&stack0x00000500);
    FUN_100fd6328(&stack0x00000170,uVar14,&stack0x00000520);
    FUN_100d98294(&stack0x00000170);
    if ((uVar10 & 0x7fffffffffffffff) != 0) {
      _free(uVar12);
    }
  }
LAB_100b846f0:
  if ((lVar6 != 0) && (lVar5 != 0)) {
    _free(plVar4);
  }
  if (lStack0000000000000018 != 0) {
    _free(in_stack_00000028);
  }
  *(undefined2 *)(unaff_x19 + 0x3a5) = 0;
  FUN_100cdcde0(unaff_x19 + 0x1a0);
  FUN_100e57728();
  FUN_100e0df24(unaff_x19 + 0x30);
  if (*(long *)(unaff_x19 + 0x188) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 400));
  }
  FUN_100cd0888(unaff_x19 + 0x1a8);
  *(undefined1 *)(unaff_x19 + 0x398) = 1;
  return 0;
joined_r0x000100b8468c:
  for (; lVar16 != 0; lVar16 = lVar16 + -1) {
    while (uVar7 == 0) {
      lVar18 = *plVar3;
      plVar11 = plVar11 + -0x20;
      plVar3 = plVar3 + 1;
      uVar7 = CONCAT17(-(-1 < lVar18),
                       CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar18 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar18 >> 8)),-(-1 < (char)lVar18)))))))) &
              0x8080808080808080;
    }
    uVar2 = (uVar7 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar7 = uVar7 - 1 & uVar7;
    FUN_100dbb884((long)plVar11 + (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78U) * -4 + -0x20);
  }
  goto LAB_100b846f0;
}

