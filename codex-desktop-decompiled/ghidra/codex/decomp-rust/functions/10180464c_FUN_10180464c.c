
void FUN_10180464c(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 in_stack_00000130;
  long in_stack_00000138;
  undefined8 *in_stack_00000140;
  undefined1 *in_stack_00000170;
  long in_stack_00000190;
  long in_stack_000001a8;
  long in_stack_00000360;
  undefined8 in_stack_000133b0;
  undefined8 in_stack_000133b8;
  undefined8 in_stack_000133c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000133b0,s__failed_to_parse_config_lock_fil_108abfb81,&stack0x0000ff80);
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018061c4);
    (*pcVar1)();
  }
  *puVar3 = in_stack_000133b0;
  puVar3[1] = in_stack_000133b8;
  puVar3[2] = in_stack_000133c0;
  uVar4 = func_0x000106029c30(0x28,puVar3,&UNK_10b25d268);
  FUN_10194d288(&stack0x00014e20);
  if (in_stack_00000138 != 0) {
    _free(in_stack_00000130);
  }
  _memcpy(&stack0x00002920,&stack0x000073a0,0x1a40);
  *in_stack_00000170 = 1;
  _memcpy(&stack0x00000ee0,&stack0x00002920,0x1a40);
  FUN_1019534a4(unaff_x19 + 0xe78);
  *(undefined1 *)(unaff_x20 + 0x255) = 0;
  FUN_10195452c(unaff_x19 + 0x518);
  *(undefined1 *)(unaff_x20 + 0x256) = 0;
  *(undefined1 *)(unaff_x20 + 0x25a) = 0;
  if ((*(byte *)(unaff_x20 + 0x24d) & 1) != 0) {
    FUN_101952554(&stack0x00000440);
  }
  *(undefined1 *)(unaff_x20 + 0x24d) = 0;
  if (((*(byte *)(unaff_x20 + 0x24e) & 1) != 0) &&
     ((((*(long *)(unaff_x19 + 0x360) == -0x8000000000000000 || (*(long *)(unaff_x19 + 0x360) == 0))
       || (_free(*(undefined8 *)(unaff_x19 + 0x368)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)) &&
      ((*(long *)(unaff_x19 + 0x378) != -0x8000000000000000 && (*(long *)(unaff_x19 + 0x378) != 0)))
      ))) {
    _free(*(undefined8 *)(unaff_x19 + 0x380));
  }
  if ((((*(byte *)(unaff_x20 + 0x24f) & 1) != 0) &&
      (*(long *)(unaff_x19 + 0x390) != -0x8000000000000000)) && (*(long *)(unaff_x19 + 0x390) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x398));
  }
  if ((*(byte *)(unaff_x20 + 0x24e) & 1) != 0) {
    uVar6 = *(ulong *)(unaff_x19 + 0x4c8);
    if (uVar6 != 0x8000000000000003) {
      bVar2 = uVar6 != 0x8000000000000000;
      if (uVar6 < 0x8000000000000001) {
        uVar6 = 0;
      }
      if (((bVar2) && ((uVar6 & 0x7fffffffffffffff) == 0)) &&
         (FUN_10196b754(unaff_x19 + 0x4c8), (*(byte *)(unaff_x20 + 0x24e) & 1) == 0))
      goto LAB_101805be4;
    }
    if ((((((((*(long *)(unaff_x19 + 0x3a8) == -0x8000000000000000) ||
             (*(long *)(unaff_x19 + 0x3a8) == 0)) ||
            (_free(*(undefined8 *)(unaff_x19 + 0x3b0)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)) &&
           (((*(long *)(unaff_x19 + 0x3c0) == -0x8000000000000000 ||
             (*(long *)(unaff_x19 + 0x3c0) == 0)) ||
            (_free(*(undefined8 *)(unaff_x19 + 0x3c8)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0))))
          && (((((lVar7 = *(long *)(unaff_x19 + 0x4b0), lVar7 == -0x7fffffffffffffff ||
                 (lVar7 == -0x8000000000000000)) || (lVar7 == 0)) ||
               (_free(*(undefined8 *)(unaff_x19 + 0x4b8)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0))
              && (((*(long *)(unaff_x19 + 0x3d8) == -0x8000000000000000 ||
                   (*(long *)(unaff_x19 + 0x3d8) == 0)) ||
                  (_free(*(undefined8 *)(unaff_x19 + 0x3e0)),
                  (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))))) &&
         (((*(long *)(unaff_x19 + 0x3f0) == -0x8000000000000000 ||
           (*(long *)(unaff_x19 + 0x3f0) == 0)) ||
          (_free(*(undefined8 *)(unaff_x19 + 0x3f8)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))) &&
        ((((((*(long *)(unaff_x19 + 0x408) == -0x8000000000000000 ||
             (*(long *)(unaff_x19 + 0x408) == 0)) ||
            (_free(*(undefined8 *)(unaff_x19 + 0x410)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)) &&
           (((*(long *)(unaff_x19 + 0x420) == -0x8000000000000000 ||
             (*(long *)(unaff_x19 + 0x420) == 0)) ||
            (_free(*(undefined8 *)(unaff_x19 + 0x428)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0))))
          && ((((*(long *)(unaff_x19 + 0x438) == -0x8000000000000000 ||
                (*(long *)(unaff_x19 + 0x438) == 0)) ||
               (_free(*(undefined8 *)(unaff_x19 + 0x440)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0))
              && (((*(long *)(unaff_x19 + 0x450) == -0x8000000000000000 ||
                   (*(long *)(unaff_x19 + 0x450) == 0)) ||
                  (_free(*(undefined8 *)(unaff_x19 + 0x458)),
                  (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))))) &&
         (((*(long *)(unaff_x19 + 0x468) == -0x8000000000000000 ||
           (*(long *)(unaff_x19 + 0x468) == 0)) ||
          (_free(*(undefined8 *)(unaff_x19 + 0x470)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0))))))
       && (((*(long *)(unaff_x19 + 0x480) == -0x8000000000000000 ||
            (*(long *)(unaff_x19 + 0x480) == 0)) ||
           (_free(*(undefined8 *)(unaff_x19 + 0x488)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))) {
      lVar8 = *(long *)(unaff_x19 + 0x350);
      lVar7 = *(long *)(unaff_x19 + 0x358);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar8 + 8);
        do {
          if (puVar3[-1] != 0) {
            _free(*puVar3);
          }
          puVar3 = puVar3 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (*(long *)(unaff_x19 + 0x348) != 0) {
        _free(lVar8);
      }
    }
  }
LAB_101805be4:
  if (((*(byte *)(unaff_x20 + 0x24e) & 1) != 0) &&
     (lVar7 = *(long *)(unaff_x19 + 0x498), lVar7 != -0x8000000000000000)) {
    lVar9 = *(long *)(unaff_x19 + 0x4a0);
    lVar8 = *(long *)(unaff_x19 + 0x4a8);
    if (lVar8 != 0) {
      puVar3 = (undefined8 *)(lVar9 + 8);
      do {
        if (puVar3[-1] != 0) {
          _free(*puVar3);
        }
        puVar3 = puVar3 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (lVar7 != 0) {
      _free(lVar9);
    }
  }
  *(undefined2 *)(unaff_x20 + 0x24e) = 0;
  FUN_10196adb4(unaff_x19 + 0x330);
  if ((*(char *)(unaff_x20 + 0x250) == '\x01') && (*(long *)(unaff_x19 + 0x318) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 800));
  }
  *(undefined1 *)(unaff_x20 + 0x250) = 0;
  if ((*(long *)(unaff_x19 + 0x300) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x300) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x308));
  }
  plVar5 = *(long **)(unaff_x19 + 0x2f0);
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    *plVar5 = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(unaff_x19 + 0x2f0);
    }
  }
  if ((*(byte *)(unaff_x20 + 0x251) & 1) != 0) {
    FUN_10194c6ac(&stack0x00000410);
  }
  *(undefined1 *)(unaff_x20 + 0x251) = 0;
  if ((*(char *)(unaff_x20 + 0x252) == '\x01') && (in_stack_00000360 != -0x7fffffffffffffff)) {
    FUN_101952554(&stack0x00000360);
  }
  *(undefined1 *)(unaff_x20 + 0x252) = 0;
  if ((*(char *)(unaff_x20 + 0x253) == '\x01') && (in_stack_000001a8 != -0x8000000000000000)) {
    FUN_101951e2c(&stack0x000001a8);
  }
  *(undefined1 *)(unaff_x20 + 0x253) = 0;
  if ((*(char *)(unaff_x20 + 0x254) == '\x01') && (in_stack_00000190 != -0x8000000000000000)) {
    FUN_10196adb4(&stack0x00000190);
  }
  *(undefined1 *)(unaff_x20 + 0x254) = 0;
  *in_stack_00000140 = 2;
  in_stack_00000140[1] = uVar4;
  _memcpy(in_stack_00000140 + 2,&stack0x0000bed8,0x2538);
  *(undefined1 *)(unaff_x20 + 0x248) = 1;
  return;
}

