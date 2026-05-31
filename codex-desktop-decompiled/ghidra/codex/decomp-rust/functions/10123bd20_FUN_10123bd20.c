
/* WARNING: Removing unreachable block (ram,0x00010123b800) */
/* WARNING: Removing unreachable block (ram,0x00010123b818) */
/* WARNING: Removing unreachable block (ram,0x00010123b804) */
/* WARNING: Removing unreachable block (ram,0x00010123b888) */

void FUN_10123bd20(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 unaff_x23;
  undefined8 uVar9;
  undefined8 unaff_x24;
  undefined8 *puVar10;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x29;
  undefined8 in_stack_00000038;
  long in_stack_00000078;
  long in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  uVar3 = FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000210);
  if ((-0x7fffffffffffffff < in_stack_00000078) && (in_stack_00000078 != 0)) {
    _free(in_stack_00000038);
  }
  if ((-0x7fffffffffffffff < in_stack_00000098) && (in_stack_00000098 != 0)) {
    _free(unaff_x26);
  }
  if ((-0x7fffffffffffffff < in_stack_00000080) && (in_stack_00000080 != 0)) {
    _free(unaff_x27);
  }
  if ((-0x7fffffffffffffff < in_stack_000000a0) && (in_stack_000000a0 != 0)) {
    _free(unaff_x23);
  }
  if ((-0x7fffffffffffffff < in_stack_000000a8) && (in_stack_000000a8 != 0)) {
    _free(unaff_x24);
  }
  if (-0x7fffffffffffffff < in_stack_00000090) {
    lVar1 = *(long *)(unaff_x29 + -0xb0);
    lVar6 = *(long *)(unaff_x29 + -0xa8);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(lVar1 + 0x20);
      do {
        if (puVar8[-1] == -0x8000000000000000 || puVar8[-1] == 0) {
          if (puVar8[2] != -0x8000000000000000 && puVar8[2] != 0) goto LAB_10123b2dc;
LAB_10123b2b8:
          lVar4 = puVar8[-4];
        }
        else {
          _free(*puVar8);
          if (puVar8[2] == -0x8000000000000000 || puVar8[2] == 0) goto LAB_10123b2b8;
LAB_10123b2dc:
          _free(puVar8[3]);
          lVar4 = puVar8[-4];
        }
        if (lVar4 != 0) {
          _free(puVar8[-3]);
        }
        puVar8 = puVar8 + 9;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (in_stack_000000c0 != 0) {
      _free(lVar1);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000b0) && (in_stack_000000b0 != 0)) {
    _free(in_stack_000000d0);
  }
  if ((in_stack_00000088 != -0x7fffffffffffffff) && (in_stack_00000088 != -0x8000000000000000)) {
    lVar1 = *(long *)(unaff_x29 + -200);
    lVar6 = *(long *)(unaff_x29 + -0xc0);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (in_stack_00000088 != 0) {
      _free(lVar1);
    }
  }
  if ((in_stack_000000c8 != -0x7fffffffffffffff) && (in_stack_000000c8 != -0x8000000000000000)) {
    lVar1 = *(long *)(unaff_x29 + -0xe8);
    lVar6 = *(long *)(unaff_x29 + -0xe0);
    if (lVar6 != 0) {
      puVar8 = (undefined8 *)(lVar1 + 8);
      do {
        if (puVar8[-1] != 0) {
          _free(*puVar8);
        }
        puVar8 = puVar8 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (in_stack_000000c8 != 0) {
      _free(lVar1);
    }
  }
  if ((-0x7fffffffffffffff < in_stack_000000b8) && (in_stack_000000b8 != 0)) {
    _free(in_stack_000000d8);
  }
  *(char *)(unaff_x20 + 0x38) = *(char *)(unaff_x20 + 0x38) + '\x01';
  plVar2 = (long *)FUN_1006546a8();
  if (plVar2 == (long *)0x0) goto LAB_10123bbcc;
  if (*plVar2 == 1) {
    uVar7 = plVar2[1];
    if ((uVar7 & 3) == 1) {
      puVar8 = (undefined8 *)(uVar7 - 1);
      uVar9 = *puVar8;
      puVar10 = *(undefined8 **)(uVar7 + 7);
      pcVar5 = (code *)*puVar10;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar9);
      }
      if (puVar10[1] != 0) {
        _free(uVar9);
      }
LAB_10123b7f4:
      _free(puVar8);
    }
  }
  else if ((*plVar2 == 0) && (plVar2[2] != 0)) {
    puVar8 = (undefined8 *)plVar2[1];
    goto LAB_10123b7f4;
  }
  _free(plVar2);
LAB_10123bbcc:
  uVar3 = FUN_108832dfc(uVar3);
  unaff_x19[1] = uVar3;
  *unaff_x19 = 0x8000000000000002;
  return;
}

