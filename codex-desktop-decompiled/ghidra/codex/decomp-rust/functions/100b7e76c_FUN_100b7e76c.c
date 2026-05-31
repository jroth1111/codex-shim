
undefined8 FUN_100b7e76c(void)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long unaff_x19;
  undefined8 *puVar9;
  ulong uVar10;
  ulong unaff_x21;
  long lVar11;
  ulong unaff_x23;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lStack0000000000000018;
  undefined8 *puStack0000000000000028;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  long in_stack_00000180;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000170,s_remote_app_server_at_____write_f_108ad0efc,&stack0x00000520);
  lVar11 = in_stack_00000180;
  uVar15 = in_stack_00000178;
  uVar13 = in_stack_00000170;
  if (in_stack_00000180 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = _malloc(in_stack_00000180);
    if (lVar5 == 0) {
      func_0x0001087c9084(1,lVar11);
      goto LAB_100b8170c;
    }
  }
  _memcpy(lVar5,uVar15,lVar11);
  uVar6 = __ZN23codex_app_server_client6remote13deliver_event17hc8a9d08825688974E
                    (unaff_x19 + 0x5d0,&stack0x00000520);
  if ((uVar6 & 3) == 1) {
    uVar16 = *(undefined8 *)(uVar6 - 1);
    puVar9 = *(undefined8 **)(uVar6 + 7);
    pcVar7 = (code *)*puVar9;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar16);
    }
    if (puVar9[1] != 0) {
      _free(uVar16);
    }
    _free((undefined8 *)(uVar6 - 1));
    uVar6 = *(ulong *)(unaff_x19 + 0x610);
  }
  else {
    uVar6 = *(ulong *)(unaff_x19 + 0x610);
  }
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x618));
  }
  *(undefined1 *)(unaff_x19 + 0x7cd) = 1;
  *(undefined1 *)(unaff_x19 + 0x608) = 0xb;
  *(undefined8 *)(unaff_x19 + 0x610) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x618) = uVar15;
  *(long *)(unaff_x19 + 0x620) = lVar11;
  if (in_stack_000000c0 != 0) {
    _free(in_stack_000000c8);
  }
  if ((unaff_x23 & 3) == 1) {
    uVar13 = *(undefined8 *)(unaff_x23 - 1);
    puVar9 = *(undefined8 **)(unaff_x23 + 7);
    pcVar7 = (code *)*puVar9;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar13);
    }
    if (puVar9[1] != 0) {
      _free(uVar13);
    }
    _free((undefined8 *)(unaff_x23 - 1));
  }
  plVar12 = *(long **)(unaff_x19 + 0x970);
  if (*plVar12 == 1) {
    uVar6 = plVar12[1];
    if ((uVar6 & 3) == 1) {
      puVar14 = (undefined8 *)(uVar6 - 1);
      uVar13 = *puVar14;
      puVar9 = *(undefined8 **)(uVar6 + 7);
      pcVar7 = (code *)*puVar9;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar13);
      }
      if (puVar9[1] != 0) {
        _free(uVar13);
      }
      goto LAB_100b7e874;
    }
  }
  else if ((*plVar12 == 0) && (plVar12[2] != 0)) {
    puVar14 = (undefined8 *)plVar12[1];
LAB_100b7e874:
    _free(puVar14);
  }
  _free(plVar12);
  if (*(long *)(unaff_x19 + 0x958) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x960));
  }
  if (((*(byte *)(unaff_x19 + 0x7c2) & 1) != 0) && ((unaff_x21 & 0x7fffffffffffffff) != 0)) {
    _free();
  }
  *(undefined1 *)(unaff_x19 + 0x7c2) = 0;
  *(undefined1 *)(unaff_x19 + 0x7c6) = 0;
  if (*(long *)(unaff_x19 + 0x808) != -0x7ffffffffffffffd) {
    *(undefined1 *)(unaff_x19 + 0x7c3) = 0;
  }
  *(undefined1 *)(unaff_x19 + 0x7c3) = 0;
  (**(code **)(*(long *)(unaff_x19 + 0x978) + 0x20))
            (unaff_x19 + 0x990,*(undefined8 *)(unaff_x19 + 0x980),*(undefined8 *)(unaff_x19 + 0x988)
            );
  uVar6 = *(ulong *)(unaff_x19 + 2000);
  if (uVar6 != 7) {
    if ((uVar6 != 6) && ((*(byte *)(unaff_x19 + 0x7c4) & 1) != 0)) {
      if ((((*(byte *)(unaff_x19 + 0x7c5) & 1) != 0) && ((uVar6 & 3) != 0)) &&
         ((uVar6 != 4 || (*(short *)(unaff_x19 + 0x7f8) != 0x12)))) {
        (**(code **)(*(long *)(unaff_x19 + 0x7d8) + 0x20))
                  (unaff_x19 + 0x7f0,*(undefined8 *)(unaff_x19 + 0x7e0),
                   *(undefined8 *)(unaff_x19 + 0x7e8));
      }
      *(undefined1 *)(unaff_x19 + 0x7c5) = 0;
    }
    *(undefined1 *)(unaff_x19 + 0x7c4) = 0;
  }
  *(undefined2 *)(unaff_x19 + 0x7c4) = 0;
  *(undefined1 *)(unaff_x19 + 0x7cd) = 0;
  lStack0000000000000018 = *(long *)(unaff_x19 + 0x610);
  if (lStack0000000000000018 == -0x8000000000000000) {
    puStack0000000000000028 = (undefined8 *)_malloc(0x2a);
    if (puStack0000000000000028 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x2a);
LAB_100b8170c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100b81710);
      (*pcVar7)();
    }
    puStack0000000000000028[1] = 0x65767265732d7070;
    *puStack0000000000000028 = 0x612065746f6d6572;
    puStack0000000000000028[3] = 0x6c656e6e61686320;
    puStack0000000000000028[2] = 0x72656b726f772072;
    *(undefined8 *)((long)puStack0000000000000028 + 0x22) = 0x6465736f6c632073;
    *(undefined8 *)((long)puStack0000000000000028 + 0x1a) = 0x69206c656e6e6168;
    uVar1 = 0xb;
    lStack0000000000000018 = 0x2a;
    lVar11 = 0x2a;
  }
  else {
    uVar1 = *(undefined1 *)(unaff_x19 + 0x608);
    puStack0000000000000028 = *(undefined8 **)(unaff_x19 + 0x618);
    lVar11 = *(long *)(unaff_x19 + 0x620);
  }
  *(undefined1 *)(unaff_x19 + 0x7ce) = 0;
  plVar12 = *(long **)(unaff_x19 + 0x5d8);
  lVar8 = *(long *)(unaff_x19 + 0x5e0);
  lVar17 = *(long *)(unaff_x19 + 0x5f0);
  lVar18 = *plVar12;
  plVar4 = (long *)0x0;
  lVar5 = 0;
  if (lVar8 != 0) {
    plVar4 = plVar12 + lVar8 * -4 + -4;
    lVar5 = lVar8 * 0x21 + 0x29;
  }
  uVar6 = CONCAT17(-(-1 < lVar18),
                   CONCAT16(-(-1 < (char)((ulong)lVar18 >> 0x30)),
                            CONCAT15(-(-1 < (char)((ulong)lVar18 >> 0x28)),
                                     CONCAT14(-(-1 < (char)((ulong)lVar18 >> 0x20)),
                                              CONCAT13(-(-1 < (char)((ulong)lVar18 >> 0x18)),
                                                       CONCAT12(-(-1 < (char)((ulong)lVar18 >> 0x10)
                                                                 ),CONCAT11(-(-1 < (char)((ulong)
                                                  lVar18 >> 8)),-(-1 < (char)lVar18)))))))) &
          0x8080808080808080;
  plVar3 = plVar12 + 1;
  while (lVar17 != 0) {
    while (uVar6 == 0) {
      lVar18 = *plVar3;
      plVar12 = plVar12 + -0x20;
      plVar3 = plVar3 + 1;
      uVar6 = CONCAT17(-(-1 < lVar18),
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
    uVar2 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 - 1 & uVar6;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78;
    lVar17 = lVar17 + -1;
    uVar10 = *(ulong *)((long)plVar12 + uVar2 * -4 + -0x20);
    if (uVar10 == 0x8000000000000001) goto joined_r0x000100b80e10;
    uVar13 = *(undefined8 *)((long)plVar12 + uVar2 * -4 + -0x18);
    uVar15 = *(undefined8 *)((long)plVar12 + uVar2 * -4 + -8);
    if (lVar11 == 0) {
      lVar18 = 1;
    }
    else {
      lVar18 = _malloc(lVar11);
      if (lVar18 == 0) {
        func_0x0001087c9084(1,lVar11);
        goto LAB_100b8170c;
      }
    }
    _memcpy(lVar18,puStack0000000000000028,lVar11);
    __ZN3std2io5error5Error3new17h002dced88496ea8bE(uVar1,&stack0x00000500);
    FUN_100fd6328(&stack0x00000170,uVar15,&stack0x00000520);
    FUN_100d98294(&stack0x00000170);
    if ((uVar10 & 0x7fffffffffffffff) != 0) {
      _free(uVar13);
    }
  }
LAB_100b80e74:
  if ((lVar8 != 0) && (lVar5 != 0)) {
    _free(plVar4);
  }
  if (lStack0000000000000018 != 0) {
    _free(puStack0000000000000028);
  }
  *(undefined2 *)(unaff_x19 + 0x7cd) = 0;
  FUN_100cdcde0(unaff_x19 + 0x5c8);
  FUN_100d4014c(unaff_x19 + 0x150);
  FUN_100e0df24();
  if (*(long *)(unaff_x19 + 0x5b0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x5b8));
  }
  FUN_100cd0888(unaff_x19 + 0x5d0);
  *(undefined1 *)(unaff_x19 + 0x7c0) = 1;
  return 0;
joined_r0x000100b80e10:
  for (; lVar17 != 0; lVar17 = lVar17 + -1) {
    while (uVar6 == 0) {
      lVar11 = *plVar3;
      plVar12 = plVar12 + -0x20;
      plVar3 = plVar3 + 1;
      uVar6 = CONCAT17(-(-1 < lVar11),
                       CONCAT16(-(-1 < (char)((ulong)lVar11 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar11 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar11 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar11 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar11 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar11 >> 8)),-(-1 < (char)lVar11)))))))) &
              0x8080808080808080;
    }
    uVar2 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 - 1 & uVar6;
    FUN_100dbb884((long)plVar12 + (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) & 0x78U) * -4 + -0x20);
  }
  goto LAB_100b80e74;
}

