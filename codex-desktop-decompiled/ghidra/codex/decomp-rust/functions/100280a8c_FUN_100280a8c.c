
void FUN_100280a8c(void)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x22;
  undefined8 unaff_x24;
  undefined8 *puVar7;
  long unaff_x27;
  long *in_stack_000000a8;
  undefined7 uStack00000000000000f9;
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
  long in_stack_00000440;
  long in_stack_00000448;
  long in_stack_00000450;
  long in_stack_00000458;
  int in_stack_00000460;
  undefined3 in_stack_00000464;
  undefined4 in_stack_00000468;
  undefined2 in_stack_0000046c;
  long in_stack_00000470;
  undefined1 in_stack_00000478;
  undefined7 in_stack_00000479;
  undefined1 in_stack_00000480;
  undefined8 in_stack_00000481;
  undefined8 in_stack_000020a0;
  
  FUN_10026efc0(&stack0x00001a60);
  puVar4 = (undefined8 *)_malloc(8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = in_stack_000020a0;
    if ((*(byte *)(unaff_x19 + 0x18a) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x18a) = 0;
      bVar1 = *(byte *)(unaff_x19 + 0x18b);
    }
    else {
      unaff_x22 = *(long **)(unaff_x19 + 0x180);
      unaff_x27 = *unaff_x22;
      if (unaff_x27 != 0) {
        puVar7 = (undefined8 *)unaff_x22[1];
        pcVar5 = (code *)*puVar7;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(unaff_x27);
        }
        if (puVar7[1] != 0) {
          _free(unaff_x27);
        }
      }
      _free(unaff_x22);
      *(undefined1 *)(unaff_x19 + 0x18a) = 0;
      bVar1 = *(byte *)(unaff_x19 + 0x18b);
    }
    if (((bVar1 & 1) != 0) && (unaff_x22 = *(long **)(unaff_x19 + 400), unaff_x22 != (long *)0x0)) {
      LOAcquire();
      uVar2 = unaff_x22[6];
      unaff_x22[6] = uVar2 | 4;
      if ((uVar2 & 10) == 8) {
        (**(code **)(unaff_x22[2] + 0x10))(unaff_x22[3]);
      }
      if (((uint)uVar2 >> 1 & 1) != 0) {
        lVar3 = unaff_x22[7];
        unaff_x22[7] = 0;
        FUN_1002b3c24(lVar3);
      }
      lVar3 = *unaff_x22;
      *unaff_x22 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2b589454887c6637E(unaff_x19 + 400);
      }
    }
    *(undefined1 *)(unaff_x19 + 0x18b) = 0;
    FUN_1002b7d4c(unaff_x19 + 0x160);
    *(undefined1 *)(unaff_x19 + 0x18c) = 0;
    lVar3 = **(long **)(unaff_x19 + 0x78);
    **(long **)(unaff_x19 + 0x78) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001002ca260();
    }
    plVar6 = *(long **)(unaff_x19 + 0x88);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      *plVar6 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h7894b98b68b4ed45E();
      }
    }
    lVar3 = **(long **)(unaff_x19 + 0x148);
    **(long **)(unaff_x19 + 0x148) = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001002ca260(unaff_x19 + 0x148);
    }
    plVar6 = *(long **)(unaff_x19 + 0x158);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      *plVar6 = lVar3 + -1;
      LORelease();
      if (lVar3 == 1) {
        DataMemoryBarrier(2,1);
        func_0x0001002ca0bc(unaff_x19 + 0x158);
      }
    }
    FUN_1002ba428(unaff_x19 + 0x110);
    FUN_1002c2300(unaff_x19 + 0xf0);
    *(undefined1 *)(unaff_x19 + 0x189) = 1;
    uStack0000000000000101 = (undefined7)in_stack_00000481;
    uStack0000000000000108 = (undefined1)((ulong)in_stack_00000481 >> 0x38);
    uStack0000000000000111 = (undefined4)unaff_x24;
    uStack0000000000000117 = (undefined1)((ulong)unaff_x24 >> 0x30);
    uStack0000000000000115 = (undefined2)((ulong)unaff_x24 >> 0x20);
    iStack0000000000000120 = in_stack_00000460 << 8;
    uStack0000000000000124 = CONCAT31(in_stack_00000464,(char)((uint)in_stack_00000460 >> 0x18));
    uStack0000000000000151 = uStack0000000000000158;
    uStack0000000000000155 = uStack000000000000015c;
    uStack0000000000000109 = 2;
    uStack00000000000000f9 = in_stack_00000479;
    uStack000000000000010a = in_stack_00000468;
    uStack000000000000010e = in_stack_0000046c;
    FUN_1002b84e8();
    *unaff_x20 = 4;
    in_stack_000000a8[9] = in_stack_00000440;
    in_stack_000000a8[8] = CONCAT44(uStack0000000000000124,iStack0000000000000120);
    in_stack_000000a8[0xb] = in_stack_00000450;
    in_stack_000000a8[10] = in_stack_00000448;
    in_stack_000000a8[0xd] = (long)unaff_x22;
    in_stack_000000a8[0xc] = in_stack_00000458;
    in_stack_000000a8[1] = (long)&UNK_10b3b6d40;
    *in_stack_000000a8 = (long)puVar4;
    in_stack_000000a8[3] = CONCAT71(uStack00000000000000f9,in_stack_00000478);
    in_stack_000000a8[2] = in_stack_00000470;
    in_stack_000000a8[5] =
         CONCAT26(uStack000000000000010e,
                  CONCAT42(uStack000000000000010a,
                           CONCAT11(uStack0000000000000109,uStack0000000000000108)));
    in_stack_000000a8[4] = CONCAT71(uStack0000000000000101,in_stack_00000480);
    in_stack_000000a8[7] = unaff_x27;
    in_stack_000000a8[6] =
         CONCAT17(uStack0000000000000117,
                  CONCAT25(uStack0000000000000115,CONCAT41(uStack0000000000000111,6)));
    *(undefined1 *)(in_stack_000000a8 + 0xe) = 2;
    *(uint *)((long)in_stack_000000a8 + 0x74) =
         CONCAT31(uStack0000000000000155,uStack0000000000000151._3_1_);
    *(undefined4 *)((long)in_stack_000000a8 + 0x71) = uStack0000000000000151;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100282a08);
  (*pcVar5)();
}

