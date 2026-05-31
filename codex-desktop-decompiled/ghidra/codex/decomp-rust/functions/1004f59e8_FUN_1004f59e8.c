
undefined1 FUN_1004f59e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *unaff_x19;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long unaff_x21;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long *unaff_x26;
  long *unaff_x27;
  undefined1 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000050;
  long *in_stack_00000110;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001a0,s__failed_to_serialize_post_compac_108ac338e,&stack0x00000150);
  *(undefined8 *)(unaff_x21 + 0x118) = *(undefined8 *)(unaff_x21 + 0x138);
  *(undefined8 *)(unaff_x21 + 0x110) = *(undefined8 *)(unaff_x21 + 0x130);
  in_stack_00000190 = in_stack_000001b0;
  __ZN11codex_hooks6events6common33serialization_failure_hook_events17hfa8430faf905ecd9E
            (&stack0x00000118,&stack0x00000130,&stack0x00000160,&stack0x00000180);
  uVar2 = in_stack_00000128;
  uVar1 = in_stack_00000120;
  lVar3 = in_stack_00000118;
  if (*in_stack_00000110 == 1) {
    uVar15 = in_stack_00000110[1];
    if ((uVar15 & 3) != 1) goto LAB_1004f5c40;
    puVar14 = (undefined8 *)(uVar15 - 1);
    uVar9 = *puVar14;
    puVar13 = *(undefined8 **)(uVar15 + 7);
    pcVar7 = (code *)*puVar13;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar9);
    }
    if (puVar13[1] != 0) {
      _free(uVar9);
    }
  }
  else {
    if ((*in_stack_00000110 != 0) || (in_stack_00000110[2] == 0)) goto LAB_1004f5c40;
    puVar14 = (undefined8 *)in_stack_00000110[1];
  }
  _free(puVar14);
LAB_1004f5c40:
  _free(in_stack_00000110);
  *(undefined1 *)((long)unaff_x19 + 0x433) = 0;
  if ((*(byte *)((long)unaff_x19 + 0x431) & 1) != 0) {
    lVar10 = unaff_x19[0x69];
    lVar16 = unaff_x19[0x68];
    if (lVar10 != 0) {
      lVar12 = 0;
      do {
        plVar11 = (long *)(lVar16 + lVar12);
        if (plVar11[6] == -0x8000000000000000 || plVar11[6] == 0) {
          lVar8 = *plVar11;
        }
        else {
          _free(plVar11[7]);
          lVar8 = *plVar11;
        }
        if (lVar8 != 0) {
          _free(*(undefined8 *)(lVar16 + lVar12 + 8));
        }
        lVar8 = lVar16 + lVar12;
        if (*(long *)(lVar8 + 0x48) == -0x8000000000000000 || *(long *)(lVar8 + 0x48) == 0) {
          lVar8 = *(long *)(lVar8 + 0x18);
        }
        else {
          _free(*(undefined8 *)(lVar8 + 0x50));
          lVar8 = *(long *)(lVar8 + 0x18);
        }
        if (lVar8 != 0) {
          _free(*(undefined8 *)(lVar16 + lVar12 + 0x20));
        }
        FUN_100cb56bc(lVar16 + lVar12 + 0x60);
        lVar12 = lVar12 + 0xa8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (*unaff_x27 != 0) {
      _free(lVar16);
    }
  }
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  if (((*(byte *)((long)unaff_x19 + 0x432) & 1) != 0) && (*unaff_x26 != 0)) {
    _free(unaff_x19[0x57]);
  }
  if (unaff_x19[0x59] != 0) {
    _free(unaff_x19[0x5a]);
  }
  if ((unaff_x19[0x62] != -0x8000000000000000) && (unaff_x19[0x62] != 0)) {
    _free(unaff_x19[99]);
  }
  if (unaff_x19[0x5c] != 0) {
    _free(unaff_x19[0x5d]);
  }
  if (unaff_x19[0x5f] != 0) {
    _free(unaff_x19[0x60]);
  }
  *(undefined1 *)((long)unaff_x19 + 0x432) = 0;
  *(undefined1 *)(unaff_x19 + 0x86) = 1;
  if (lVar3 == -0x8000000000000000) {
    *in_stack_00000030 = 3;
    *in_stack_00000038 = 3;
    uVar4 = 2;
    uVar6 = 5;
  }
  else {
    FUN_100e5e2cc();
    *(undefined1 *)((long)unaff_x19 + 0x439) = 0;
    plVar11 = unaff_x19 + 0x1d;
    *(undefined1 *)(unaff_x19 + 0x87) = 1;
    *(undefined1 *)(unaff_x19 + 0x88) = 1;
    *(undefined1 *)((long)unaff_x19 + 0xe2) = 1;
    unaff_x19[0x13] = lVar3;
    unaff_x19[0x14] = uVar1;
    unaff_x19[0x15] = uVar2;
    unaff_x19[0x16] = 0x8000000000000000;
    unaff_x19[0x17] = unaff_x27;
    unaff_x19[0x18] = 0x8000000000000000;
    *(undefined1 *)(unaff_x19 + 0x19) = 0;
    lVar3 = *(long *)*plVar11;
    *(long *)*plVar11 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(plVar11);
    }
    *(undefined1 *)((long)unaff_x19 + 0xe2) = 0;
    unaff_x19[0x1e] = unaff_x19[0x14];
    *plVar11 = unaff_x19[0x13];
    unaff_x19[0x1f] = unaff_x19[0x15];
    unaff_x19[0x21] = unaff_x19[1];
    unaff_x19[0x20] = *unaff_x19;
    *(undefined1 *)(in_stack_00000040 + 0xb90) = 0;
    iVar5 = FUN_1004f68e8(unaff_x19 + 0x1d,in_stack_00000050);
    if (iVar5 == 0) {
      FUN_100ca19bc(unaff_x19 + 0x1d);
      uVar4 = *(undefined1 *)(unaff_x19 + 0x19);
      if ((unaff_x19[0x16] != -0x8000000000000000) && (unaff_x19[0x16] != 0)) {
        _free(unaff_x19[0x17]);
      }
      *(undefined2 *)((long)unaff_x19 + 0xe2) = 0;
      *(undefined1 *)((long)unaff_x19 + 0xe1) = 0;
      uVar6 = 1;
    }
    else {
      uVar4 = 2;
      uVar6 = 6;
    }
  }
  *(undefined1 *)((long)unaff_x19 + 0xe4) = uVar6;
  return uVar4;
}

