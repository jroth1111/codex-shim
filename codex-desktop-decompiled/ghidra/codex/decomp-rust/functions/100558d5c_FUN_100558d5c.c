
void FUN_100558d5c(void)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  ulong uVar10;
  long unaff_x26;
  undefined8 *unaff_x28;
  undefined1 *in_stack_00000168;
  long in_stack_00000190;
  long in_stack_000001a8;
  long in_stack_00000360;
  undefined8 in_stack_00014e28;
  undefined8 in_stack_00014e30;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00014e20,s_failed_to_read_config_lock_file___108abfb5a,&stack0x00009900);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar2 = uVar7;
    puVar2[1] = in_stack_00014e28;
    puVar2[2] = in_stack_00014e30;
    plVar3 = (long *)_malloc(0x18);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)puVar2;
      plVar3[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar3 + 2) = 0x28;
      uVar10 = *(ulong *)(unaff_x26 + 0x1a00);
      if ((uVar10 & 3) == 1) {
        uVar7 = *(undefined8 *)(uVar10 - 1);
        puVar2 = *(undefined8 **)(uVar10 + 7);
        pcVar4 = (code *)*puVar2;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar7);
        }
        if (puVar2[1] != 0) {
          _free(uVar7);
        }
        _free((undefined8 *)(uVar10 - 1));
      }
      _memcpy(&stack0x00002920,&stack0x000073a0,0x1a40);
      *in_stack_00000168 = 1;
      _memcpy(&stack0x00000ee0,&stack0x00002920,0x1a40);
      FUN_100e04ad4(unaff_x19 + 0xe78);
      *(undefined1 *)(unaff_x20 + 0x255) = 0;
      FUN_100e05b5c(unaff_x19 + 0x518);
      *(undefined1 *)(unaff_x20 + 0x256) = 0;
      *(undefined1 *)(unaff_x20 + 0x25a) = 0;
      if ((*(byte *)(unaff_x20 + 0x24d) & 1) != 0) {
        FUN_100e01cdc(&stack0x00000440);
      }
      *(undefined1 *)(unaff_x20 + 0x24d) = 0;
      if (((*(byte *)(unaff_x20 + 0x24e) & 1) != 0) &&
         ((((*(long *)(unaff_x19 + 0x360) == -0x8000000000000000 ||
            (*(long *)(unaff_x19 + 0x360) == 0)) ||
           (_free(*(undefined8 *)(unaff_x19 + 0x368)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)) &&
          ((*(long *)(unaff_x19 + 0x378) != -0x8000000000000000 &&
           (*(long *)(unaff_x19 + 0x378) != 0)))))) {
        _free(*(undefined8 *)(unaff_x19 + 0x380));
      }
      if ((((*(byte *)(unaff_x20 + 0x24f) & 1) != 0) &&
          (*(long *)(unaff_x19 + 0x390) != -0x8000000000000000)) &&
         (*(long *)(unaff_x19 + 0x390) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x398));
      }
      if ((*(byte *)(unaff_x20 + 0x24e) & 1) != 0) {
        uVar10 = *(ulong *)(unaff_x19 + 0x4c8);
        if (uVar10 != 0x8000000000000003) {
          bVar1 = uVar10 != 0x8000000000000000;
          if (uVar10 < 0x8000000000000001) {
            uVar10 = 0;
          }
          if (((bVar1) && ((uVar10 & 0x7fffffffffffffff) == 0)) &&
             (FUN_100e79780(unaff_x19 + 0x4c8), (*(byte *)(unaff_x20 + 0x24e) & 1) == 0))
          goto LAB_10055ca50;
        }
        if ((((((((*(long *)(unaff_x19 + 0x3a8) == -0x8000000000000000) ||
                 (*(long *)(unaff_x19 + 0x3a8) == 0)) ||
                (_free(*(undefined8 *)(unaff_x19 + 0x3b0)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)
                ) && (((*(long *)(unaff_x19 + 0x3c0) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x3c0) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x3c8)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))) &&
              (((((lVar6 = *(long *)(unaff_x19 + 0x4b0), lVar6 == -0x7fffffffffffffff ||
                  (lVar6 == -0x8000000000000000)) || (lVar6 == 0)) ||
                (_free(*(undefined8 *)(unaff_x19 + 0x4b8)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)
                ) && (((*(long *)(unaff_x19 + 0x3d8) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x3d8) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x3e0)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))))) &&
             (((*(long *)(unaff_x19 + 0x3f0) == -0x8000000000000000 ||
               (*(long *)(unaff_x19 + 0x3f0) == 0)) ||
              (_free(*(undefined8 *)(unaff_x19 + 0x3f8)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))
             ) && ((((((*(long *)(unaff_x19 + 0x408) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x408) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x410)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)) &&
                     (((*(long *)(unaff_x19 + 0x420) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x420) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x428)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))) &&
                    ((((*(long *)(unaff_x19 + 0x438) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x438) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x440)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)) &&
                     (((*(long *)(unaff_x19 + 0x450) == -0x8000000000000000 ||
                       (*(long *)(unaff_x19 + 0x450) == 0)) ||
                      (_free(*(undefined8 *)(unaff_x19 + 0x458)),
                      (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))))) &&
                   (((*(long *)(unaff_x19 + 0x468) == -0x8000000000000000 ||
                     (*(long *)(unaff_x19 + 0x468) == 0)) ||
                    (_free(*(undefined8 *)(unaff_x19 + 0x470)),
                    (*(byte *)(unaff_x20 + 0x24e) & 1) != 0)))))) &&
           (((*(long *)(unaff_x19 + 0x480) == -0x8000000000000000 ||
             (*(long *)(unaff_x19 + 0x480) == 0)) ||
            (_free(*(undefined8 *)(unaff_x19 + 0x488)), (*(byte *)(unaff_x20 + 0x24e) & 1) != 0))))
        {
          lVar8 = *(long *)(unaff_x19 + 0x350);
          lVar6 = *(long *)(unaff_x19 + 0x358);
          if (lVar6 != 0) {
            puVar2 = (undefined8 *)(lVar8 + 8);
            do {
              if (puVar2[-1] != 0) {
                _free(*puVar2);
              }
              puVar2 = puVar2 + 3;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          if (*(long *)(unaff_x19 + 0x348) != 0) {
            _free(lVar8);
          }
        }
      }
LAB_10055ca50:
      if (((*(byte *)(unaff_x20 + 0x24e) & 1) != 0) &&
         (lVar6 = *(long *)(unaff_x19 + 0x498), lVar6 != -0x8000000000000000)) {
        lVar9 = *(long *)(unaff_x19 + 0x4a0);
        lVar8 = *(long *)(unaff_x19 + 0x4a8);
        if (lVar8 != 0) {
          puVar2 = (undefined8 *)(lVar9 + 8);
          do {
            if (puVar2[-1] != 0) {
              _free(*puVar2);
            }
            puVar2 = puVar2 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lVar6 != 0) {
          _free(lVar9);
        }
      }
      *(undefined2 *)(unaff_x20 + 0x24e) = 0;
      FUN_100e76384(unaff_x19 + 0x330);
      if ((*(char *)(unaff_x20 + 0x250) == '\x01') && (*(long *)(unaff_x19 + 0x318) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 800));
      }
      *(undefined1 *)(unaff_x20 + 0x250) = 0;
      if ((*(long *)(unaff_x19 + 0x300) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x300) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x308));
      }
      plVar5 = *(long **)(unaff_x19 + 0x2f0);
      if (plVar5 != (long *)0x0) {
        lVar6 = *plVar5;
        *plVar5 = lVar6 + -1;
        LORelease();
        if (lVar6 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(unaff_x19 + 0x2f0);
        }
      }
      if ((*(byte *)(unaff_x20 + 0x251) & 1) != 0) {
        FUN_100dd8a98(&stack0x00000410);
      }
      *(undefined1 *)(unaff_x20 + 0x251) = 0;
      if ((*(char *)(unaff_x20 + 0x252) == '\x01') && (in_stack_00000360 != -0x7fffffffffffffff)) {
        FUN_100e01cdc(&stack0x00000360);
      }
      *(undefined1 *)(unaff_x20 + 0x252) = 0;
      if ((*(char *)(unaff_x20 + 0x253) == '\x01') && (in_stack_000001a8 != -0x8000000000000000)) {
        FUN_100dff6cc(&stack0x000001a8);
      }
      *(undefined1 *)(unaff_x20 + 0x253) = 0;
      if ((*(char *)(unaff_x20 + 0x254) == '\x01') && (in_stack_00000190 != -0x8000000000000000)) {
        FUN_100e76384(&stack0x00000190);
      }
      *(undefined1 *)(unaff_x20 + 0x254) = 0;
      *unaff_x28 = 2;
      unaff_x28[1] = (long)plVar3 + 1;
      _memcpy(unaff_x28 + 2,&stack0x0000bed8,0x2538);
      *(undefined1 *)(unaff_x20 + 0x248) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10055d028);
  (*pcVar4)();
}

