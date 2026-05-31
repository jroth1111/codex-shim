
void FUN_1005209d0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long unaff_x19;
  undefined1 *unaff_x20;
  long lVar7;
  long lVar8;
  long unaff_x29;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000310,s__failed_to_persist_personality_m_108ac0557,unaff_x29 + -0xa8);
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *puVar2 = in_stack_00000310;
    puVar2[1] = in_stack_00000318;
    puVar2[2] = in_stack_00000320;
    plVar3 = (long *)_malloc(0x18);
    if (plVar3 != (long *)0x0) {
      *plVar3 = (long)puVar2;
      plVar3[1] = (long)&UNK_10b209118;
      *(undefined1 *)(plVar3 + 2) = 0x28;
      (**(code **)**(undefined8 **)(unaff_x29 + -0x60))();
      if (*(long *)(unaff_x19 + 0x348) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x1a8);
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x350));
        lVar4 = *(long *)(unaff_x19 + 0x1a8);
      }
      if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x1b0));
      }
      if ((*(long *)(unaff_x19 + 0x1c0) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x1c0) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x1c8));
      }
      if ((((*(byte *)(unaff_x19 + 0x368) & 1) != 0) &&
          (*(long *)(unaff_x19 + 0x1d8) != -0x8000000000000000)) &&
         (*(long *)(unaff_x19 + 0x1d8) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x1e0));
      }
      if ((*(ulong *)(unaff_x19 + 0x1f0) & 0x7fffffffffffffff) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x208);
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x1f8));
        lVar4 = *(long *)(unaff_x19 + 0x208);
      }
      if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x210));
      }
      if ((*(ulong *)(unaff_x19 + 0x220) & 0x7fffffffffffffff) == 0) {
        uVar5 = *(ulong *)(unaff_x19 + 0x238);
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x228));
        uVar5 = *(ulong *)(unaff_x19 + 0x238);
      }
      if ((uVar5 & 0x7fffffffffffffff) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x250);
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x240));
        lVar4 = *(long *)(unaff_x19 + 0x250);
      }
      if (lVar4 != -0x8000000000000000) {
        lVar7 = *(long *)(unaff_x19 + 600);
        lVar8 = *(long *)(unaff_x19 + 0x260);
        if (lVar8 != 0) {
          puVar2 = (undefined8 *)(lVar7 + 8);
          do {
            if (puVar2[-1] != 0) {
              _free(*puVar2);
            }
            puVar2 = puVar2 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lVar4 != 0) {
          _free(lVar7);
        }
      }
      if ((*(ulong *)(unaff_x19 + 0x268) & 0x7fffffffffffffff) == 0) {
        uVar5 = *(ulong *)(unaff_x19 + 0x280);
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x270));
        uVar5 = *(ulong *)(unaff_x19 + 0x280);
      }
      if ((uVar5 & 0x7fffffffffffffff) == 0) {
        lVar4 = *(long *)(unaff_x19 + 0x2b0);
      }
      else {
        _free(*(undefined8 *)(unaff_x19 + 0x288));
        lVar4 = *(long *)(unaff_x19 + 0x2b0);
      }
      if ((lVar4 != -0x7ffffffffffffffe) && (lVar4 != -0x7fffffffffffffff)) {
        if (lVar4 != -0x8000000000000000) {
          lVar7 = *(long *)(unaff_x19 + 0x2b8);
          lVar8 = *(long *)(unaff_x19 + 0x2c0);
          if (lVar8 != 0) {
            puVar2 = (undefined8 *)(lVar7 + 8);
            do {
              if (puVar2[-1] != 0) {
                _free(*puVar2);
              }
              puVar2 = puVar2 + 3;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if (lVar4 != 0) {
            _free(lVar7);
          }
        }
        lVar4 = *(long *)(unaff_x19 + 0x2c8);
        if (lVar4 != -0x7fffffffffffffff) {
          if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x2d0));
          }
          if ((*(long *)(unaff_x19 + 0x2e0) != -0x8000000000000000) &&
             (*(long *)(unaff_x19 + 0x2e0) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x2e8));
          }
          if ((*(long *)(unaff_x19 + 0x2f8) != -0x8000000000000000) &&
             (*(long *)(unaff_x19 + 0x2f8) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x300));
          }
          if ((*(long *)(unaff_x19 + 0x310) != -0x8000000000000000) &&
             (*(long *)(unaff_x19 + 0x310) != 0)) {
            _free(*(undefined8 *)(unaff_x19 + 0x318));
          }
        }
      }
      if (*(long *)(unaff_x19 + 0x50) != 4) {
        FUN_100deebc8(unaff_x19 + 0x50);
      }
      if ((*(long *)(unaff_x19 + 0x298) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x298) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x2a0));
      }
      *(undefined1 *)(unaff_x19 + 0x368) = 0;
      if (*(long *)(unaff_x19 + 0x38) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x40));
      }
      if (((*(byte *)(unaff_x19 + 0x369) & 1) != 0) &&
         (plVar6 = *(long **)(unaff_x19 + 0x30), plVar6 != (long *)0x0)) {
        lVar4 = *plVar6;
        *plVar6 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E();
        }
      }
      *(undefined1 *)(unaff_x19 + 0x369) = 0;
      *unaff_x20 = 1;
      unaff_x20[1] = 2;
      *(long *)(unaff_x20 + 8) = (long)plVar3 + 1;
      *(undefined1 *)(unaff_x19 + 0x36a) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005214d4);
  (*pcVar1)();
}

