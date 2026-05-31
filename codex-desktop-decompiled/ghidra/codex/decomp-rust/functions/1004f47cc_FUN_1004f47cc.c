
void FUN_1004f47cc(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *unaff_x19;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 unaff_x23;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long *unaff_x27;
  long *unaff_x28;
  undefined1 *in_stack_00000028;
  undefined1 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  long *in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001c0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001b0,s__failed_to_serialize_pre_compact_108ac331b,&stack0x00000160);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x130);
  in_stack_000001a0 = in_stack_000001c0;
  __ZN11codex_hooks6events6common33serialization_failure_hook_events17hfa8430faf905ecd9E
            (&stack0x00000128,&stack0x00000140,&stack0x00000170,&stack0x00000190);
  uVar1 = in_stack_00000138;
  uVar6 = in_stack_00000130;
  lVar2 = in_stack_00000128;
  if (*in_stack_00000120 == 1) {
    uVar14 = in_stack_00000120[1];
    if ((uVar14 & 3) != 1) goto LAB_1004f4a04;
    puVar13 = (undefined8 *)(uVar14 - 1);
    uVar12 = *puVar13;
    puVar9 = *(undefined8 **)(uVar14 + 7);
    pcVar7 = (code *)*puVar9;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar12);
    }
    if (puVar9[1] != 0) {
      _free(uVar12);
    }
  }
  else {
    if ((*in_stack_00000120 != 0) || (in_stack_00000120[2] == 0)) goto LAB_1004f4a04;
    puVar13 = (undefined8 *)in_stack_00000120[1];
  }
  _free(puVar13);
LAB_1004f4a04:
  _free(in_stack_00000120);
  *(undefined1 *)((long)unaff_x19 + 0x433) = 0;
  if ((*(byte *)((long)unaff_x19 + 0x431) & 1) != 0) {
    lVar8 = unaff_x19[0x69];
    lVar15 = unaff_x19[0x68];
    if (lVar8 != 0) {
      lVar10 = 0;
      do {
        plVar11 = (long *)(lVar15 + lVar10);
        if (plVar11[6] == -0x8000000000000000 || plVar11[6] == 0) {
          lVar5 = *plVar11;
        }
        else {
          _free(plVar11[7]);
          lVar5 = *plVar11;
        }
        if (lVar5 != 0) {
          _free(*(undefined8 *)(lVar15 + lVar10 + 8));
        }
        lVar5 = lVar15 + lVar10;
        if (*(long *)(lVar5 + 0x48) == -0x8000000000000000 || *(long *)(lVar5 + 0x48) == 0) {
          lVar5 = *(long *)(lVar5 + 0x18);
        }
        else {
          _free(*(undefined8 *)(lVar5 + 0x50));
          lVar5 = *(long *)(lVar5 + 0x18);
        }
        if (lVar5 != 0) {
          _free(*(undefined8 *)(lVar15 + lVar10 + 0x20));
        }
        FUN_100cb56bc(lVar15 + lVar10 + 0x60);
        lVar10 = lVar10 + 0xa8;
        lVar8 = lVar8 + -1;
        unaff_x23 = in_stack_00000040;
      } while (lVar8 != 0);
    }
    if (*unaff_x28 != 0) {
      _free(lVar15);
    }
  }
  *(undefined1 *)((long)unaff_x19 + 0x431) = 0;
  if (((*(byte *)((long)unaff_x19 + 0x432) & 1) != 0) && (*unaff_x27 != 0)) {
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
  if (lVar2 == -0x8000000000000000) {
    *in_stack_00000028 = 3;
    *in_stack_00000030 = 3;
    *in_stack_00000038 = 0x8000000000000002;
    uVar4 = 5;
  }
  else {
    FUN_100e5e2cc(unaff_x23);
    plVar11 = unaff_x19 + 0x1d;
    *(undefined1 *)((long)unaff_x19 + 0x439) = 0;
    *(undefined1 *)(unaff_x19 + 0x87) = 1;
    *(undefined1 *)(unaff_x19 + 0x88) = 1;
    *(undefined1 *)((long)unaff_x19 + 0xe1) = 1;
    *(undefined1 *)((long)unaff_x19 + 0xe3) = 1;
    unaff_x19[0x13] = lVar2;
    unaff_x19[0x14] = uVar6;
    unaff_x19[0x15] = uVar1;
    unaff_x19[0x16] = 0x8000000000000000;
    unaff_x19[0x17] = unaff_x28;
    unaff_x19[0x18] = 0x8000000000000000;
    *(undefined1 *)(unaff_x19 + 0x19) = 0;
    lVar2 = *(long *)*plVar11;
    *(long *)*plVar11 = lVar2 + -1;
    LORelease();
    if (lVar2 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(plVar11);
    }
    *(undefined1 *)((long)unaff_x19 + 0xe3) = 0;
    unaff_x19[0x1e] = unaff_x19[0x14];
    *plVar11 = unaff_x19[0x13];
    unaff_x19[0x1f] = unaff_x19[0x15];
    unaff_x19[0x21] = unaff_x19[1];
    unaff_x19[0x20] = *unaff_x19;
    *(undefined1 *)(in_stack_00000048 + 0xb90) = 0;
    iVar3 = FUN_1004f68e8(unaff_x19 + 0x1d,in_stack_00000050);
    if (iVar3 == 0) {
      FUN_100ca19bc(unaff_x19 + 0x1d);
      if (*(char *)(unaff_x19 + 0x19) == '\x01') {
        *(undefined1 *)((long)unaff_x19 + 0xe1) = 0;
        uVar6 = unaff_x19[0x16];
        in_stack_00000078 = unaff_x19[0x18];
        in_stack_00000070 = unaff_x19[0x17];
      }
      else {
        if ((((*(byte *)((long)unaff_x19 + 0xe1) & 1) != 0) &&
            (unaff_x19[0x16] != -0x8000000000000000)) && (unaff_x19[0x16] != 0)) {
          _free(unaff_x19[0x17]);
        }
        uVar6 = 0x8000000000000001;
      }
      *(undefined4 *)((long)unaff_x19 + 0xe1) = 0;
      *in_stack_00000038 = uVar6;
      in_stack_00000038[2] = in_stack_00000078;
      in_stack_00000038[1] = in_stack_00000070;
      uVar4 = 1;
    }
    else {
      *in_stack_00000038 = 0x8000000000000002;
      uVar4 = 6;
    }
  }
  *(undefined1 *)((long)unaff_x19 + 0xe5) = uVar4;
  return;
}

