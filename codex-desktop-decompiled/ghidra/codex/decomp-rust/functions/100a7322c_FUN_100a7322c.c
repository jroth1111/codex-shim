
void FUN_100a7322c(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 unaff_x25;
  ulong unaff_x28;
  long unaff_x29;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  long *in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000005b0;
  long *in_stack_000005b8;
  
  FUN_108856088(s_duplicate_field_____108ac2973,&stack0x000005b0);
  if (in_stack_000000c8 != -0x8000000000000000) {
    FUN_100e3dc10(&stack0x00000880);
  }
  lVar8 = *(long *)(unaff_x29 + -0xa0);
  if ((lVar8 != -0x7fffffffffffffff) && (lVar8 != -0x8000000000000000)) {
    lVar1 = *(long *)(unaff_x29 + -0x98);
    lVar5 = *(long *)(unaff_x29 + -0x90);
    if (lVar5 != 0) {
      puVar4 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar4[-4] != 0) {
          _free(puVar4[-3]);
        }
        if (puVar4[-1] != 0) {
          _free(*puVar4);
        }
        puVar4 = puVar4 + 7;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lVar8 != 0) {
      _free(lVar1);
    }
  }
  if ((in_stack_000000a0 != 0x8000000000000001) && ((in_stack_000000a0 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000c0);
  }
  if ((in_stack_00000090 != 0x8000000000000001) && ((in_stack_00000090 & 0x7fffffffffffffff) != 0))
  {
    _free(unaff_x21);
  }
  if ((in_stack_000000a8 != 0x8000000000000001) && ((in_stack_000000a8 & 0x7fffffffffffffff) != 0))
  {
    _free(in_stack_000000b8);
  }
  if ((unaff_x28 & 0x7fffffffffffffff) != 0) {
    _free(unaff_x22);
  }
  if ((in_stack_00000098 & 0x7fffffffffffffff) != 0) {
    _free(unaff_x25);
  }
  *(char *)(unaff_x20 + 0x48) = *(char *)(unaff_x20 + 0x48) + '\x01';
  _memcpy(&stack0x000008c0,&stack0x00000398,0x218);
  plVar2 = (long *)FUN_100654604();
  _memcpy(&stack0x000005b0,&stack0x00000880,0x2c0);
  if (in_stack_000005b0 != -0x8000000000000000) {
    if (plVar2 == (long *)0x0) {
      _memcpy(&stack0x000000d0,&stack0x000005c0,0x2b0);
    }
    else {
      FUN_100e38a40(&stack0x000005b0);
      in_stack_000005b0 = -0x8000000000000000;
      in_stack_000005b8 = plVar2;
    }
    goto LAB_100a72cd8;
  }
  if (plVar2 != (long *)0x0) {
    if (*plVar2 == 1) {
      uVar7 = plVar2[1];
      if ((uVar7 & 3) == 1) {
        puVar6 = (undefined8 *)(uVar7 - 1);
        uVar9 = *puVar6;
        puVar4 = *(undefined8 **)(uVar7 + 7);
        pcVar3 = (code *)*puVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar9);
        }
        if (puVar4[1] != 0) {
          _free(uVar9);
        }
        goto LAB_100a72c60;
      }
    }
    else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
      puVar6 = (undefined8 *)plVar2[1];
LAB_100a72c60:
      _free(puVar6);
    }
    _free(plVar2);
  }
  in_stack_000005b0 = -0x8000000000000000;
LAB_100a72cd8:
  if (in_stack_000005b0 == -0x8000000000000000) {
    lVar8 = FUN_108832da4(in_stack_000005b8);
    *in_stack_000000b0 = -0x8000000000000000;
    in_stack_000000b0[1] = lVar8;
  }
  else {
    _memcpy(in_stack_000000b0 + 2,&stack0x000000d0,0x2b0);
    *in_stack_000000b0 = in_stack_000005b0;
    in_stack_000000b0[1] = (long)in_stack_000005b8;
  }
  return;
}

