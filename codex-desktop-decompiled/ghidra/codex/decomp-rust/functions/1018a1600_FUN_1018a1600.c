
void FUN_1018a1600(void)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar4;
  ulong unaff_x22;
  long *plVar5;
  ulong uVar6;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long lVar7;
  long in_stack_00000088;
  long in_stack_000000a0;
  long in_stack_00000120;
  long in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000160;
  long in_stack_00000170;
  undefined8 in_stack_00000178;
  ulong in_stack_00000188;
  undefined8 in_stack_00000190;
  long *in_stack_000001a0;
  long in_stack_000001a8;
  long in_stack_000001b8;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000260,s_4external_agent_session_was_not_d_108addebf,&stack0x000001e8);
  unaff_x27[9] = in_stack_000002a8;
  unaff_x27[8] = in_stack_000002a0;
  unaff_x27[0xb] = in_stack_000002b8;
  unaff_x27[10] = in_stack_000002b0;
  unaff_x27[0xc] = 0xffffffffffff80a6;
  unaff_x27[5] = in_stack_00000288;
  unaff_x27[4] = in_stack_00000280;
  unaff_x27[7] = in_stack_00000298;
  unaff_x27[6] = in_stack_00000290;
  unaff_x27[1] = in_stack_00000268;
  *unaff_x27 = in_stack_00000260;
  unaff_x27[3] = 0x8000000000000005;
  unaff_x27[2] = in_stack_00000270;
  if (in_stack_000000a0 != 0) {
    _free(in_stack_00000160);
  }
  if (in_stack_00000170 != 0) {
    _free(in_stack_00000178);
  }
  if ((in_stack_00000188 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_00000190);
  }
  if (unaff_x19 != unaff_x20) {
    uVar6 = unaff_x22 / 0x48;
    do {
      if (unaff_x26[-7] != 0) {
        _free(unaff_x26[-6]);
      }
      if (unaff_x26[-4] != 0) {
        _free(unaff_x26[-3]);
      }
      if (unaff_x26[-1] != -0x8000000000000000 && unaff_x26[-1] != 0) {
        _free(*unaff_x26);
      }
      unaff_x26 = unaff_x26 + 9;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (in_stack_00000088 != 0) {
    _free();
  }
  if (in_stack_00000130 != 0) {
    puVar4 = (undefined8 *)(in_stack_00000128 + 0x20);
    do {
      if (puVar4[-4] != 0) {
        _free(puVar4[-3]);
      }
      if (puVar4[-1] != 0) {
        _free(*puVar4);
      }
      if (puVar4[2] != -0x8000000000000000 && puVar4[2] != 0) {
        _free(puVar4[3]);
      }
      puVar4 = puVar4 + 9;
      in_stack_00000130 = in_stack_00000130 + -1;
    } while (in_stack_00000130 != 0);
  }
  if (in_stack_00000120 != 0) {
    _free(in_stack_00000128);
  }
  if (in_stack_000001a8 != 0) {
    if (in_stack_000001b8 != 0) {
      plVar5 = in_stack_000001a0 + 1;
      lVar7 = *in_stack_000001a0;
      uVar6 = CONCAT17(-(-1 < lVar7),
                       CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar7 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
              0x8080808080808080;
      plVar3 = in_stack_000001a0;
      do {
        while (uVar6 == 0) {
          lVar7 = *plVar5;
          plVar3 = plVar3 + -0x18;
          plVar5 = plVar5 + 1;
          uVar6 = CONCAT17(-(-1 < lVar7),
                           CONCAT16(-(-1 < (char)((ulong)lVar7 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar7 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar7 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar7 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar7
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar7 >> 8)),-(-1 < (char)lVar7)))))))) &
                  0x8080808080808080;
        }
        uVar1 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        iVar2 = (int)((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3);
        if (plVar3[(long)-iVar2 * 3 + -3] != 0) {
          _free(plVar3[(long)-iVar2 * 3 + -2]);
        }
        uVar6 = uVar6 - 1 & uVar6;
        in_stack_000001b8 = in_stack_000001b8 + -1;
      } while (in_stack_000001b8 != 0);
    }
    if (in_stack_000001a8 * 0x19 != -0x21) {
      _free(in_stack_000001a0 + in_stack_000001a8 * -3 + -3);
    }
  }
  return;
}

