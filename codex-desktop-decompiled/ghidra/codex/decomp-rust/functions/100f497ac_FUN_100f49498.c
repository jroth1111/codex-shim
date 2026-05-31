
undefined8 FUN_100f49498(void)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong unaff_x19;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined1 *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  
  func_0x00010602ab90(s_Updating_Codex_via________108ad45bc,&stack0x00000038);
  lVar4 = (unaff_x19 & 0xff) * 8;
  lVar7 = *(long *)(&UNK_10b253f08 + lVar4);
  lVar9 = *(long *)(&UNK_108cda980 + lVar4);
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
            (&stack0x00000038,*(undefined8 *)(&UNK_10b253f30 + lVar4),
             *(undefined8 *)(&UNK_108cda9a8 + lVar4));
  puVar2 = in_stack_00000038;
  if (in_stack_00000048 == 0) {
    lVar4 = 1;
    _memcpy(1,in_stack_00000040,0);
    if (((ulong)puVar2 & 0x7fffffffffffffff) == 0) goto LAB_100f49518;
LAB_100f4975c:
    _free(in_stack_00000040);
    lVar5 = _malloc(lVar9 * 0x18);
  }
  else {
    lVar4 = _malloc(in_stack_00000048);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,in_stack_00000048);
      goto LAB_100f497e8;
    }
    _memcpy(lVar4,in_stack_00000040,in_stack_00000048);
    if (((ulong)puVar2 & 0x7fffffffffffffff) != 0) goto LAB_100f4975c;
LAB_100f49518:
    lVar5 = _malloc(lVar9 * 0x18);
  }
  if (lVar5 != 0) {
    lVar10 = 0;
    *(long *)(unaff_x29 + -0x70) = lVar9;
    *(long *)(unaff_x29 + -0x68) = lVar5;
    puVar8 = (undefined8 *)(lVar7 + 8);
    plVar11 = (long *)(lVar5 + 0x10);
    do {
      while (__ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                       (&stack0x00000038,puVar8[-1],*puVar8), puVar2 = in_stack_00000038,
            in_stack_00000048 != 0) {
        lVar7 = _malloc(in_stack_00000048);
        if (lVar7 == 0) {
          func_0x0001087c9084(1,in_stack_00000048);
          goto LAB_100f497e8;
        }
        _memcpy(lVar7,in_stack_00000040,in_stack_00000048);
        if (((ulong)puVar2 & 0x7fffffffffffffff) == 0) goto LAB_100f4955c;
LAB_100f495b4:
        _free(in_stack_00000040);
        puVar8 = puVar8 + 2;
        plVar11[-2] = in_stack_00000048;
        plVar11[-1] = lVar7;
        *plVar11 = in_stack_00000048;
        lVar10 = lVar10 + 1;
        plVar11 = plVar11 + 3;
        if (lVar9 == lVar10) goto LAB_100f495d4;
      }
      lVar7 = 1;
      _memcpy(1,in_stack_00000040,0);
      if (((ulong)puVar2 & 0x7fffffffffffffff) != 0) goto LAB_100f495b4;
LAB_100f4955c:
      puVar8 = puVar8 + 2;
      plVar11[-2] = in_stack_00000048;
      plVar11[-1] = lVar7;
      *plVar11 = in_stack_00000048;
      lVar10 = lVar10 + 1;
      plVar11 = plVar11 + 3;
    } while (lVar9 != lVar10);
LAB_100f495d4:
    in_stack_00000028 = *(long *)(unaff_x29 + -0x68);
    in_stack_00000020 = *(long *)(unaff_x29 + -0x70);
    in_stack_00000030 = lVar9;
    __ZN3std3sys7process4unix6common7Command3new17h3172692053ff4dc3E
              (&stack0x00000038,lVar4,in_stack_00000048);
    lVar7 = in_stack_00000030;
    lVar9 = in_stack_00000028;
    if (in_stack_00000030 != 0) {
      lVar5 = in_stack_00000030 * 0x18;
      puVar8 = (undefined8 *)(in_stack_00000028 + 0x10);
      do {
        __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                  (&stack0x00000038,puVar8[-1],*puVar8);
        puVar8 = puVar8 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
    }
    __ZN3std7process7Command6status17h906b62e017c47bb7E(unaff_x29 + -0x70,&stack0x00000038);
    if (*(int *)(unaff_x29 + -0x70) == 1) {
      uVar6 = FUN_1088566c8(*(undefined8 *)(unaff_x29 + -0x68));
      FUN_100de2268(&stack0x00000038);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar9 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (in_stack_00000020 != 0) {
        _free(lVar9);
      }
      if (in_stack_00000048 != 0) {
        _free(lVar4);
      }
    }
    else {
      iVar1 = *(int *)(unaff_x29 + -0x6c);
      in_stack_00000018._4_4_ = iVar1;
      FUN_100de2268(&stack0x00000038);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)(lVar9 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (in_stack_00000020 != 0) {
        _free(lVar9);
      }
      if (in_stack_00000048 != 0) {
        _free(lVar4);
      }
      if (iVar1 == 0) {
        func_0x00010602ab90(&UNK_108cc6830,0x6b);
        uVar6 = 0;
      }
      else {
        in_stack_00000038 = (undefined1 *)register0x00000008;
        uVar6 = FUN_108858fa8(s_____failed_with_status_108ad45d9,&stack0x00000038);
      }
    }
    if (in_stack_00000000 != 0) {
      _free(in_stack_00000008);
    }
    return uVar6;
  }
  func_0x0001087c9084(8,lVar9 * 0x18);
LAB_100f497e8:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f497ec);
  (*pcVar3)();
}

