
/* WARNING: Removing unreachable block (ram,0x000100f46f44) */

undefined1  [16] FUN_100f47e98(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x24;
  undefined1 *unaff_x25;
  long unaff_x26;
  long unaff_x29;
  long in_stack_000033d0;
  undefined8 in_stack_000033d8;
  
  do {
    __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
              (s_Failed_to_upgrade_marketplace_____108ad44fb,&stack0x000004b0);
    param_1 = param_1 + 0x30;
  } while (param_1 != unaff_x26);
  FUN_100f3f484(&stack0x000004b0,s_upgrade_failure_s__occurred__108ad4433,&stack0x00000440);
  uVar2 = FUN_108856624(&stack0x000004b0);
  FUN_100e7d6b8(unaff_x29 + -0xb0);
  FUN_100e05b5c(&stack0x00002a70);
  if (in_stack_000033d0 != 0) {
    _free(in_stack_000033d8);
  }
  FUN_100e1955c(&stack0x00007500);
  if (unaff_x24 != 0) {
    _free();
  }
  FUN_100de93d0(&stack0x00000528);
  if ((*(ulong *)(unaff_x19 + 0x110) & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x118));
  }
  *unaff_x25 = 1;
  FUN_100e548e0();
  if (uVar2 == 0) {
    if ((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) {
      FUN_100e76384(unaff_x19 + 0xc0);
    }
    *(undefined4 *)(unaff_x19 + 0xd9) = 0;
    lVar3 = *(long *)(unaff_x19 + 0x68);
    lVar5 = *(long *)(unaff_x19 + 0x70);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar6[-1] != 0) {
          _free(*puVar6);
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar2 = 0;
    goto LAB_100f48564;
  }
  if ((*(byte *)(unaff_x19 + 0xd9) & 1) != 0) {
    FUN_100e76384(unaff_x19 + 0xc0);
  }
  *(undefined1 *)(unaff_x19 + 0xd9) = 0;
  lVar3 = *(long *)(unaff_x19 + 0x78);
  uVar4 = lVar3 + 0x8000000000000001U & lVar3 >> 0x3f;
  if ((long)uVar4 < 2) {
    if ((uVar4 == 0) && ((*(byte *)(unaff_x19 + 0xda) & 1) != 0)) {
      if (lVar3 != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x80));
      }
      if ((*(long *)(unaff_x19 + 0xa8) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0xa8) != 0)
         ) {
        _free(*(undefined8 *)(unaff_x19 + 0xb0));
      }
      lVar3 = *(long *)(unaff_x19 + 0x98);
      lVar5 = *(long *)(unaff_x19 + 0xa0);
      if (lVar5 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar6[-1] != 0) {
            _free(*puVar6);
          }
          puVar6 = puVar6 + 3;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (*(long *)(unaff_x19 + 0x90) != 0) {
LAB_100f4752c:
        _free(lVar3);
      }
    }
  }
  else if (uVar4 == 2) {
    if ((*(byte *)(unaff_x19 + 0xdb) & 1) != 0) {
      uVar4 = *(ulong *)(unaff_x19 + 0x80) & 0x7fffffffffffffff;
joined_r0x000100f47478:
      if (uVar4 != 0) {
        lVar3 = *(long *)(unaff_x19 + 0x88);
        goto LAB_100f4752c;
      }
    }
  }
  else if ((*(byte *)(unaff_x19 + 0xdc) & 1) != 0) {
    uVar4 = *(ulong *)(unaff_x19 + 0x80);
    goto joined_r0x000100f47478;
  }
  *(undefined2 *)(unaff_x19 + 0xda) = 0;
  *(undefined1 *)(unaff_x19 + 0xdc) = 0;
  lVar3 = *(long *)(unaff_x19 + 0x68);
  lVar5 = *(long *)(unaff_x19 + 0x70);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(lVar3 + 8);
    do {
      if (puVar6[-1] != 0) {
        _free(*puVar6);
      }
      puVar6 = puVar6 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
LAB_100f48564:
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    _free(lVar3);
  }
  *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}

