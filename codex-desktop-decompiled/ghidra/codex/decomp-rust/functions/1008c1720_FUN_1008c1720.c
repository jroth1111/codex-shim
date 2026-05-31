
void FUN_1008c1720(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar4;
  undefined8 in_stack_000000b8;
  long in_stack_000000f0;
  long *in_stack_00000108;
  long in_stack_00000148;
  undefined8 *in_stack_000001a0;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000510,s_cursor_exceeds_total_MCP_servers_108aca332,&stack0x00000900);
  if (unaff_x26 != 0) {
    puVar3 = (undefined8 *)(in_stack_000000f0 + 8);
    do {
      if (puVar3[-1] != 0) {
        _free(*puVar3);
      }
      puVar3 = puVar3 + 3;
      unaff_x26 = unaff_x26 + -1;
    } while (unaff_x26 != 0);
  }
  if (unaff_x20 != 0) {
    _free(in_stack_000000f0);
  }
  if (in_stack_00000148 != 0) {
    if (unaff_x25 != 0) {
      lVar4 = *in_stack_00000108;
      unaff_x20 = CONCAT17(-(-1 < lVar4),
                           CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar4 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar4
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar4 >> 8)),-(-1 < (char)lVar4)))))))) &
                  0x8080808080808080;
      plVar2 = in_stack_00000108;
      do {
        while (unaff_x20 == 0) {
          lVar4 = *unaff_x23;
          plVar2 = plVar2 + -0x20;
          unaff_x23 = unaff_x23 + 1;
          unaff_x20 = CONCAT17(-(-1 < lVar4),
                               CONCAT16(-(-1 < (char)((ulong)lVar4 >> 0x30)),
                                        CONCAT15(-(-1 < (char)((ulong)lVar4 >> 0x28)),
                                                 CONCAT14(-(-1 < (char)((ulong)lVar4 >> 0x20)),
                                                          CONCAT13(-(-1 < (char)((ulong)lVar4 >>
                                                                                0x18)),
                                                                   CONCAT12(-(-1 < (char)((ulong)
                                                  lVar4 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar4 >> 8)),
                                                           -(-1 < (char)lVar4)))))))) &
                      0x8080808080808080;
        }
        uVar1 = (unaff_x20 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                (unaff_x20 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar1 = LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) & 0x78;
        if (*(long *)((long)plVar2 + uVar1 * -4 + -0x20) != 0) {
          _free(*(undefined8 *)((long)plVar2 + uVar1 * -4 + -0x18));
        }
        unaff_x20 = unaff_x20 - 1 & unaff_x20;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (in_stack_00000148 * 0x21 != -0x29) {
      _free(in_stack_00000108 + in_stack_00000148 * -4 + -4);
    }
  }
  FUN_100d483c8(&stack0x000007c0);
  FUN_100d2a4bc(&stack0x000003a0);
  FUN_100d82b3c(&stack0x00000cd0);
  FUN_100cf0734(&stack0x00000d50);
  *(undefined1 *)(unaff_x24 + 0x5d9) = 0;
  if (*(long *)(unaff_x28 + 0x4e38) != -0x7ffffffffffffffd) {
    FUN_100e0609c(in_stack_000000b8);
  }
  FUN_100de7ce8(unaff_x28 + 0x4cf8);
  FUN_100de93d0(unaff_x28 + 0x27b0);
  *(undefined1 *)(unaff_x24 + 0x5da) = 0;
  *(undefined1 *)(unaff_x24 + 0x5db) = 0;
  *in_stack_000001a0 = in_stack_00000510;
  in_stack_000001a0[2] = in_stack_00000520;
  in_stack_000001a0[1] = in_stack_00000518;
  in_stack_000001a0[3] = 0x8000000000000005;
  in_stack_000001a0[4] = unaff_x20;
  in_stack_000001a0[5] = unaff_x21;
  in_stack_000001a0[6] = unaff_x20;
  in_stack_000001a0[0xc] = 0xffffffffffff80a8;
  *(undefined1 *)(unaff_x27 + 0x648) = 1;
  return;
}

