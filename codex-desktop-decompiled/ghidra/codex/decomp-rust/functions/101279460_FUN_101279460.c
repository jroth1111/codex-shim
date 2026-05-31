
void FUN_101279460(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x25;
  ulong unaff_x28;
  long unaff_x29;
  long in_stack_00000040;
  ulong in_stack_00000078;
  ulong in_stack_00000080;
  ulong in_stack_00000088;
  long in_stack_00000090;
  long *in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000004a0;
  long *in_stack_000004a8;
  ulong in_stack_00000948;
  
  FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000004a0);
  if (in_stack_00000090 != -0x8000000000000000) {
    if (unaff_x25 != 0) {
      plVar2 = (long *)(in_stack_00000040 + 0x30);
      do {
        if (plVar2[-6] != 0) {
          _free(plVar2[-5]);
        }
        if (plVar2[-3] != 0) {
          _free(plVar2[-2]);
        }
        if (*plVar2 != -0x7fffffffffffffff) {
          FUN_100e133d4(plVar2);
        }
        plVar2 = plVar2 + 0x18;
        unaff_x25 = unaff_x25 + -1;
      } while (unaff_x25 != 0);
    }
    if (in_stack_00000090 != 0) {
      _free(in_stack_00000040);
    }
  }
  if (in_stack_000000c0 == -0x8000000000000000) {
    lVar4 = *(long *)(unaff_x29 + -0xd0);
  }
  else {
    FUN_100e56904(&stack0x000006d8);
    lVar4 = *(long *)(unaff_x29 + -0xd0);
  }
  if (lVar4 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -200);
    lVar6 = *(long *)(unaff_x29 + -0xc0);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar1);
    }
  }
  if (in_stack_00000948 < 0x8000000000000005) {
    FUN_100de6690(&stack0x00000948);
  }
  lVar4 = *(long *)(unaff_x29 + -0xf0);
  if (lVar4 != -0x8000000000000000) {
    lVar1 = *(long *)(unaff_x29 + -0xe8);
    lVar6 = *(long *)(unaff_x29 + -0xe0);
    if (lVar6 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (lVar4 != 0) {
      _free(lVar1);
    }
  }
  if ((in_stack_00000078 != 0x8000000000000001) && ((in_stack_00000078 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000a0);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000a8);
  }
  if ((in_stack_00000080 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000b8);
  }
  if ((in_stack_00000088 != 0x8000000000000001) && ((in_stack_00000088 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000b0);
  }
  *(char *)(unaff_x20 + 0x48) = *(char *)(unaff_x20 + 0x48) + '\x01';
  _memcpy(&stack0x00000748,&stack0x00000328,0x128);
  plVar2 = (long *)FUN_100654604();
  _memcpy(&stack0x000004a0,&stack0x000006d8,0x228);
  if (in_stack_000004a0 != -0x8000000000000000) {
    if (plVar2 == (long *)0x0) {
      _memcpy(&stack0x000000c8,&stack0x000004b0,0x218);
    }
    else {
      FUN_100e3dc10(&stack0x000004a0);
      in_stack_000004a0 = -0x8000000000000000;
      in_stack_000004a8 = plVar2;
    }
    goto LAB_101278838;
  }
  if (plVar2 != (long *)0x0) {
    if (*plVar2 == 1) {
      uVar8 = plVar2[1];
      if ((uVar8 & 3) == 1) {
        puVar7 = (undefined8 *)(uVar8 - 1);
        uVar9 = *puVar7;
        puVar5 = *(undefined8 **)(uVar8 + 7);
        pcVar3 = (code *)*puVar5;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar9);
        }
        if (puVar5[1] != 0) {
          _free(uVar9);
        }
        goto LAB_1012787dc;
      }
    }
    else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
      puVar7 = (undefined8 *)plVar2[1];
LAB_1012787dc:
      _free(puVar7);
    }
    _free(plVar2);
  }
  in_stack_000004a0 = -0x8000000000000000;
LAB_101278838:
  if (in_stack_000004a0 == -0x8000000000000000) {
    lVar4 = FUN_108832da4(in_stack_000004a8);
    *in_stack_00000098 = -0x8000000000000000;
    in_stack_00000098[1] = lVar4;
  }
  else {
    _memcpy(in_stack_00000098 + 2,&stack0x000000c8,0x218);
    *in_stack_00000098 = in_stack_000004a0;
    in_stack_00000098[1] = (long)in_stack_000004a8;
  }
  return;
}

