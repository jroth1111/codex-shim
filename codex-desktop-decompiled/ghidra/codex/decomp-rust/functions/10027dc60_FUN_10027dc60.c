
void FUN_10027dc60(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined3 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 in_w8;
  long *plVar9;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x22;
  long unaff_x27;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_stack_000000a8;
  undefined7 uStack00000000000000f9;
  undefined1 uStack0000000000000100;
  undefined7 uStack0000000000000101;
  undefined1 uStack0000000000000108;
  undefined1 uStack0000000000000109;
  undefined4 uStack000000000000010a;
  undefined2 uStack000000000000010e;
  undefined4 uStack0000000000000111;
  undefined2 uStack0000000000000115;
  undefined1 uStack0000000000000117;
  int iStack0000000000000120;
  undefined4 uStack0000000000000124;
  undefined4 uStack0000000000000151;
  undefined3 uStack0000000000000155;
  undefined4 uStack0000000000000158;
  undefined3 uStack000000000000015c;
  undefined2 uStack000000000000018c;
  undefined7 uStack0000000000000199;
  undefined8 uStack00000000000001a1;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  int in_stack_00000460;
  undefined3 in_stack_00000464;
  undefined7 uVar12;
  undefined8 in_stack_00001a88;
  undefined2 uVar13;
  undefined8 in_stack_000020a0;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  __ZN10hyper_util6client6legacy6client5Error2tx17h31f8419a5577c322E
            (&stack0x00001a60,in_stack_000020a0);
  uVar11 = *(undefined8 *)(unaff_x27 + 0x21);
  uVar10 = *(undefined8 *)(unaff_x27 + 0x19);
  uVar12 = (undefined7)uVar10;
  uVar3 = *(undefined1 *)(unaff_x27 + 0x29);
  uVar1 = *(undefined4 *)(unaff_x27 + 0x2a);
  uVar13 = (undefined2)((ulong)in_stack_00001a88 >> 0x30);
  uVar4 = *(undefined1 *)(unaff_x27 + 0x37);
  uVar6 = *(undefined3 *)(unaff_x27 + 0x35);
  uVar2 = *(undefined4 *)(unaff_x27 + 0x31);
  uVar5 = *(undefined1 *)(unaff_x27 + 0x30);
  if (((*(byte *)(unaff_x19 + 0x18b) & 1) != 0) &&
     (unaff_x22 = *(long **)(unaff_x19 + 400), unaff_x22 != (long *)0x0)) {
    LOAcquire();
    uVar7 = unaff_x22[6];
    unaff_x22[6] = uVar7 | 4;
    if ((uVar7 & 10) == 8) {
      (**(code **)(unaff_x22[2] + 0x10))(unaff_x22[3]);
    }
    if (((uint)uVar7 >> 1 & 1) != 0) {
      lVar8 = unaff_x22[7];
      unaff_x22[7] = 0;
      FUN_1002b3c24(lVar8);
    }
    lVar8 = *unaff_x22;
    *unaff_x22 = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2b589454887c6637E(unaff_x19 + 400);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x18b) = 0;
  FUN_1002b7d4c(unaff_x19 + 0x160);
  *(undefined1 *)(unaff_x19 + 0x18c) = 0;
  lVar8 = **(long **)(unaff_x19 + 0x78);
  **(long **)(unaff_x19 + 0x78) = lVar8 + -1;
  LORelease();
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001002ca260();
  }
  plVar9 = *(long **)(unaff_x19 + 0x88);
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    *plVar9 = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7894b98b68b4ed45E();
    }
  }
  lVar8 = **(long **)(unaff_x19 + 0x148);
  **(long **)(unaff_x19 + 0x148) = lVar8 + -1;
  LORelease();
  if (lVar8 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001002ca260(unaff_x19 + 0x148);
  }
  plVar9 = *(long **)(unaff_x19 + 0x158);
  if (plVar9 != (long *)0x0) {
    lVar8 = *plVar9;
    *plVar9 = lVar8 + -1;
    LORelease();
    if (lVar8 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001002ca0bc(unaff_x19 + 0x158);
    }
  }
  FUN_1002ba428(unaff_x19 + 0x110);
  FUN_1002c2300(unaff_x19 + 0xf0);
  *(undefined1 *)(unaff_x19 + 0x189) = 1;
  uStack0000000000000101 = (undefined7)uVar11;
  uStack0000000000000108 = (undefined1)((ulong)uVar11 >> 0x38);
  uStack0000000000000100 = (undefined1)((ulong)uVar10 >> 0x38);
  uStack0000000000000115 = (undefined2)uVar6;
  iStack0000000000000120 = in_stack_00000460 << 8;
  uStack0000000000000124 = CONCAT31(in_stack_00000464,(char)((uint)in_stack_00000460 >> 0x18));
  uStack0000000000000151 = uStack0000000000000158;
  uStack0000000000000155 = uStack000000000000015c;
  uStack00000000000000f9 = uVar12;
  uStack0000000000000109 = uVar3;
  uStack000000000000010a = uVar1;
  uStack000000000000010e = uVar13;
  uStack0000000000000111 = uVar2;
  uStack0000000000000117 = uVar4;
  uStack000000000000018c = uVar13;
  uStack0000000000000199 = uVar12;
  uStack00000000000001a1 = uVar11;
  FUN_1002b84e8();
  *unaff_x20 = 4;
  in_stack_000000a8[9] = in_stack_00000440;
  in_stack_000000a8[8] = CONCAT44(uStack0000000000000124,iStack0000000000000120);
  in_stack_000000a8[0xb] = in_stack_00000450;
  in_stack_000000a8[10] = in_stack_00000448;
  in_stack_000000a8[0xd] = unaff_x22;
  in_stack_000000a8[0xc] = in_stack_00000458;
  in_stack_000000a8[1] = &stack0x00000b20;
  *in_stack_000000a8 = 1;
  in_stack_000000a8[3] = CONCAT71(uStack00000000000000f9,in_w8);
  in_stack_000000a8[2] = 1;
  in_stack_000000a8[5] =
       CONCAT26(uStack000000000000010e,
                CONCAT42(uStack000000000000010a,
                         CONCAT11(uStack0000000000000109,uStack0000000000000108)));
  in_stack_000000a8[4] = CONCAT71(uStack0000000000000101,uStack0000000000000100);
  in_stack_000000a8[7] = unaff_x27;
  in_stack_000000a8[6] =
       CONCAT17(uStack0000000000000117,
                CONCAT25(uStack0000000000000115,CONCAT41(uStack0000000000000111,uVar5)));
  *(undefined1 *)(in_stack_000000a8 + 0xe) = 2;
  *(uint *)((long)in_stack_000000a8 + 0x74) =
       CONCAT31(uStack0000000000000155,uStack0000000000000151._3_1_);
  *(undefined4 *)((long)in_stack_000000a8 + 0x71) = uStack0000000000000151;
  return;
}

