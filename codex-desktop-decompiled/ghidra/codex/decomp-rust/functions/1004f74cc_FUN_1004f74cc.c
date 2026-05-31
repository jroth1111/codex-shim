
void FUN_1004f74cc(void)

{
  long *plVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x19;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long *unaff_x26;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  long in_stack_00000090;
  undefined8 *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined1 *in_stack_000000b8;
  long *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  long *in_stack_000001e8;
  long in_stack_000009b0;
  undefined8 in_stack_000009b8;
  undefined8 in_stack_000009c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000003f0,s_3failed_to_serialize_user_prompt_108ac31fc,unaff_x29 + -0x70);
  __ZN11codex_hooks6events6common33serialization_failure_hook_events17hfa8430faf905ecd9E
            (unaff_x29 + -0x100,unaff_x29 + -0xe0,&stack0x00000310,&stack0x00000220);
  lVar11 = *(long *)(unaff_x29 + -0x100);
  uVar6 = *(undefined8 *)(unaff_x29 + -0xf8);
  uVar14 = *(undefined8 *)(unaff_x29 + -0xf0);
  if (*in_stack_000001e8 == 1) {
    uVar12 = in_stack_000001e8[1];
    if ((uVar12 & 3) == 1) {
      puVar8 = (undefined8 *)(uVar12 - 1);
      uVar13 = *puVar8;
      puVar15 = *(undefined8 **)(uVar12 + 7);
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar13);
      }
      if (puVar15[1] != 0) {
        _free(uVar13);
      }
      goto LAB_1004f752c;
    }
  }
  else if ((*in_stack_000001e8 == 0) && (in_stack_000001e8[2] != 0)) {
    puVar8 = (undefined8 *)in_stack_000001e8[1];
LAB_1004f752c:
    _free(puVar8);
  }
  _free(in_stack_000001e8);
  FUN_100e2a9a4(&stack0x000009b0);
  *(undefined1 *)(unaff_x19 + 0x873) = 0;
  if ((*(byte *)(unaff_x19 + 0x871) & 1) != 0) {
    lVar9 = *(long *)(unaff_x19 + 0x788);
    lVar7 = *(long *)(unaff_x19 + 0x780);
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        plVar1 = (long *)(lVar7 + lVar10);
        if (plVar1[6] == -0x8000000000000000 || plVar1[6] == 0) {
          lVar4 = *plVar1;
        }
        else {
          _free(plVar1[7]);
          lVar4 = *plVar1;
        }
        if (lVar4 != 0) {
          _free(*(undefined8 *)(lVar7 + lVar10 + 8));
        }
        lVar4 = lVar7 + lVar10;
        if (*(long *)(lVar4 + 0x48) == -0x8000000000000000 || *(long *)(lVar4 + 0x48) == 0) {
          lVar4 = *(long *)(lVar4 + 0x18);
        }
        else {
          _free(*(undefined8 *)(lVar4 + 0x50));
          lVar4 = *(long *)(lVar4 + 0x18);
        }
        if (lVar4 != 0) {
          _free(*(undefined8 *)(lVar7 + lVar10 + 0x20));
        }
        FUN_100cb56bc(lVar7 + lVar10 + 0x60);
        lVar10 = lVar10 + 0xa8;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    if (*in_stack_000000c0 != 0) {
      _free(lVar7);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x871) = 0;
  if (((*(byte *)(unaff_x19 + 0x872) & 1) != 0) && (*unaff_x26 != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0x6e0));
  }
  if (*(long *)(unaff_x19 + 0x6f0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x6f8));
  }
  if ((*(long *)(unaff_x19 + 0x750) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x750) != 0))
  {
    _free(*(undefined8 *)(unaff_x19 + 0x758));
  }
  if (*(long *)(unaff_x19 + 0x708) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x710));
  }
  if (*(long *)(unaff_x19 + 0x720) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x728));
  }
  if (*(long *)(unaff_x19 + 0x738) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x740));
  }
  *(undefined1 *)(unaff_x19 + 0x872) = 0;
  *(undefined1 *)(unaff_x19 + 0x870) = 1;
  if (lVar11 == -0x8000000000000000) {
    uVar3 = 3;
LAB_1004f7780:
    *in_stack_000000b8 = uVar3;
  }
  else {
    *(long *)(unaff_x19 + 0x5c8) = lVar11;
    *(undefined8 *)(unaff_x19 + 0x5d0) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x5d8) = uVar14;
    *(undefined8 *)(unaff_x19 + 0x5e0) = 0;
    *(undefined8 *)(unaff_x19 + 0x5e8) = 8;
    *(undefined8 *)(unaff_x19 + 0x5f0) = 0;
    *(undefined8 *)(unaff_x19 + 0x5f8) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x600) = 1;
    *(undefined8 *)(unaff_x19 + 0x608) = 0x8000000000000000;
    *(undefined1 *)(unaff_x19 + 0x610) = 0;
    FUN_100e78604(in_stack_000000a0);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x5b0);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x5c0);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x5b8);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x5e8);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x5e0);
    in_stack_000000a0[2] = *(undefined8 *)(unaff_x19 + 0x5f0);
    in_stack_000000a0[1] = uVar17;
    *in_stack_000000a0 = uVar13;
    *(undefined8 *)(unaff_x19 + 0x638) = uVar6;
    *(undefined8 *)(unaff_x19 + 0x648) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x640) = uVar14;
    *(undefined1 *)(unaff_x19 + 0x828) = 0;
    FUN_1006cc3f8(&stack0x000009b0,(long *)(unaff_x19 + 0x620),in_stack_000000b0);
    if (in_stack_000009b0 == -0x8000000000000000) {
      uVar3 = 4;
      goto LAB_1004f7780;
    }
    if (*(char *)(unaff_x19 + 0x828) == '\x03') {
      FUN_100ccec20(unaff_x19 + 0x650);
    }
    else if (*(char *)(unaff_x19 + 0x828) == '\0') {
      lVar9 = *(long *)(unaff_x19 + 0x628);
      lVar11 = *(long *)(unaff_x19 + 0x630);
      if (lVar11 != 0) {
        puVar8 = (undefined8 *)(lVar9 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      if (*(long *)(unaff_x19 + 0x620) != 0) {
        _free(lVar9);
      }
    }
    *(undefined8 *)(unaff_x19 + 0x5e8) = in_stack_000009b8;
    *(long *)(unaff_x19 + 0x5e0) = in_stack_000009b0;
    *(undefined8 *)(unaff_x19 + 0x5f0) = in_stack_000009c0;
    lVar11 = *(long *)(unaff_x19 + 0x5c8);
    uVar13 = *(undefined8 *)(unaff_x19 + 0x5d8);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x5d0);
    uVar17 = *(undefined8 *)(unaff_x19 + 0x5e8);
    uVar16 = *(undefined8 *)(unaff_x19 + 0x5e0);
    uVar12 = *(ulong *)(unaff_x19 + 0x5f8);
    uVar6 = *(undefined8 *)(unaff_x19 + 0x600);
    uVar3 = *(undefined1 *)(unaff_x19 + 0x610);
    *(undefined1 *)(unaff_x19 + 0x619) = 0;
    *(undefined1 *)(unaff_x19 + 0x618) = 1;
    if (lVar11 != -0x8000000000000000) {
      FUN_100ccb48c(in_stack_000000a8);
      *(undefined1 *)(unaff_x19 + 0x878) = 1;
      *(undefined8 *)(unaff_x19 + 0x480) = uVar17;
      *(undefined8 *)(unaff_x19 + 0x478) = uVar16;
      *(undefined8 *)(unaff_x19 + 0x488) = in_stack_000009c0;
      *(long *)(unaff_x19 + 0x460) = lVar11;
      *(undefined8 *)(unaff_x19 + 0x470) = uVar13;
      *(undefined8 *)(unaff_x19 + 0x468) = uVar14;
      *(undefined1 *)(unaff_x19 + 0x490) = uVar3;
      if ((uVar12 & 0x7fffffffffffffff) != 0) {
        _free(uVar6);
      }
      uVar6 = *unaff_x28;
      *(undefined8 *)(unaff_x19 + 0x4a0) = unaff_x28[1];
      *(undefined8 *)(unaff_x19 + 0x498) = uVar6;
      *(undefined8 *)(unaff_x19 + 0x4a8) = unaff_x28[2];
      *(undefined8 *)(unaff_x19 + 0x4b8) = *(undefined8 *)(unaff_x19 + 0x450);
      *(undefined8 *)(unaff_x19 + 0x4b0) = *(undefined8 *)(unaff_x19 + 0x448);
      *(undefined1 *)(in_stack_00000090 + 0x100) = 0;
      iVar2 = FUN_1004f68e8(unaff_x19 + 0x498,in_stack_000000b0);
      if (iVar2 == 0) {
        FUN_100ca19bc(unaff_x19 + 0x498);
        uVar6 = *(undefined8 *)(unaff_x19 + 0x478);
        uVar13 = *(undefined8 *)(unaff_x19 + 0x490);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x488);
        in_stack_000000c8[1] = *(undefined8 *)(unaff_x19 + 0x480);
        *in_stack_000000c8 = uVar6;
        in_stack_000000c8[3] = uVar13;
        in_stack_000000c8[2] = uVar14;
        *(undefined1 *)(unaff_x19 + 0x459) = 0;
        uVar3 = 1;
      }
      else {
        *in_stack_000000c8 = 0x8000000000000000;
        uVar3 = 5;
      }
      goto LAB_1004f790c;
    }
  }
  *(undefined1 *)(unaff_x19 + 0x878) = 3;
  *in_stack_000000c8 = 0x8000000000000000;
  uVar3 = 4;
LAB_1004f790c:
  *(undefined1 *)(unaff_x19 + 0x458) = uVar3;
  return;
}

