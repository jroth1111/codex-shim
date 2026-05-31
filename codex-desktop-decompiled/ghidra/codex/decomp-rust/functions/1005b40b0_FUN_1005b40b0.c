
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005b40b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x22;
  long lVar5;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined1 *puStack0000000000000040;
  undefined *puStack0000000000000048;
  char *pcStack0000000000000050;
  undefined1 *puStack0000000000000058;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  char *in_stack_000000f0;
  long in_stack_000000f8;
  
  puStack0000000000000058 = &stack0x00000060;
  pcStack0000000000000050 = s_2No_pending_request_permissions_f_108ac1bb0;
  puStack0000000000000040 = (undefined1 *)&stack0x00000050;
  puStack0000000000000048 = &UNK_10b208fd0;
  puStack0000000000000008 = (undefined1 *)&stack0x00000040;
  uStack0000000000000000 = 1;
  uStack0000000000000010 = 1;
  uStack0000000000000018 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE();
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar5 = *unaff_x20;
    in_stack_00000090 = *(undefined8 *)(lVar5 + 0x20);
    in_stack_00000098 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000088 = 2;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar3 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000088);
    if (iVar3 != 0) {
      in_stack_000000c0 = *(long *)(lVar5 + 0x60);
      in_stack_000000c8 = *(undefined8 *)(lVar5 + 0x68);
      in_stack_000000a8 = *(long *)(lVar5 + 0x50);
      in_stack_000000b0 = *(undefined8 *)(lVar5 + 0x58);
      in_stack_000000a0 = 1;
      if (in_stack_000000a8 == 0) {
        in_stack_000000a0 = 2;
      }
      uStack00000000000000e8 = *(undefined4 *)(lVar5 + 8);
      uStack00000000000000ec = *(undefined4 *)(lVar5 + 0xc);
      *(BADSPACEBASE **)(unaff_x29 + -0x60) = register0x00000008;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      in_stack_000000b8 = 1;
      if (in_stack_000000c0 == 0) {
        in_stack_000000b8 = 2;
      }
      in_stack_000000d8 = unaff_x22[1];
      in_stack_000000d0 = *unaff_x22;
      in_stack_000000e0 = in_stack_00000098;
      in_stack_000000f8 = unaff_x29 + -0x50;
      in_stack_000000f0 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000000a0);
    }
  }
  plVar4 = *(long **)(unaff_x19 + 0xe8);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    *plVar4 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x0001034c6b4c();
    }
  }
  *(undefined1 *)(unaff_x19 + 0x9c) = 0;
  if ((*(byte *)(unaff_x19 + 0x99) & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x60) != -0x8000000000000000) {
      FUN_100e79780();
    }
  }
  *(undefined1 *)(unaff_x19 + 0x99) = 0;
  *(undefined1 *)(unaff_x19 + 0x98) = 1;
  return 0;
}

