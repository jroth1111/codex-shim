
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002b2f28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined *in_stack_00000040;
  undefined *in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined *puStack0000000000000058;
  undefined *puStack0000000000000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined1 *puStack0000000000000078;
  undefined8 uStack0000000000000080;
  long lStack0000000000000088;
  undefined1 *puStack0000000000000090;
  undefined *puStack0000000000000098;
  char *pcStack00000000000000a0;
  long lStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  long lStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  long lStack00000000000000c8;
  long lStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined *puStack00000000000000e0;
  undefined *puStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  char *pcStack0000000000000100;
  undefined1 *puStack0000000000000108;
  
  lStack00000000000000a8 = unaff_x29 + -0x50;
  pcStack00000000000000a0 = s__native_root_CA_certificate_load_108ab947b;
  puStack0000000000000090 = (undefined1 *)&stack0x000000a0;
  puStack0000000000000098 = &UNK_10b1f3630;
  puStack0000000000000078 = (undefined1 *)&stack0x00000090;
  uStack0000000000000070 = 1;
  uStack0000000000000080 = 1;
  puStack00000000000000e8 = in_stack_00000048;
  puStack00000000000000e0 = in_stack_00000040;
  uStack00000000000000f0 = in_stack_00000050;
  lStack00000000000000d0 = *(long *)(unaff_x22 + 0x60);
  uStack00000000000000d8 = *(undefined8 *)(unaff_x22 + 0x68);
  lStack00000000000000b8 = *(long *)(unaff_x22 + 0x50);
  uStack00000000000000c0 = *(undefined8 *)(unaff_x22 + 0x58);
  uStack00000000000000b0 = 1;
  if (lStack00000000000000b8 == 0) {
    uStack00000000000000b0 = 2;
  }
  uStack00000000000000f8 = *(undefined4 *)(unaff_x22 + 8);
  uStack00000000000000fc = *(undefined4 *)(unaff_x22 + 0xc);
  *(undefined8 **)(unaff_x29 + -0x40) = &stack0x00000070;
  *(undefined1 *)(unaff_x29 + -0x38) = 1;
  puStack0000000000000058 = (undefined *)(unaff_x29 + -0x40);
  puStack0000000000000060 = &DAT_1061c2098;
  lStack00000000000000c8 = 1;
  if (lStack00000000000000d0 == 0) {
    lStack00000000000000c8 = 2;
  }
  puStack0000000000000108 = (undefined1 *)&stack0x00000058;
  pcStack0000000000000100 = s__108b39f4f;
  lStack0000000000000088 = param_1;
  (**(code **)(unaff_x21 + 0x20))();
  if (in_stack_00000010 == 0) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b624cf0 - 1 < 2 ||
         ((bRam000000010b624cf0 != 0 &&
          (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b624ce0), cVar3 != '\0')))) &&
        (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b624ce0), lVar5 = lRam000000010b624ce0, iVar4 != 0)))) {
      lStack00000000000000c8 = lRam000000010b624ce0 + 0x30;
      puStack0000000000000058 = &UNK_108c74c1f;
      puStack0000000000000060 = (undefined *)0x4b;
      *(undefined ***)(unaff_x29 + -0x40) = &stack0x00000058;
      *(undefined **)(unaff_x29 + -0x38) = &UNK_10b1f3630;
      lStack00000000000000b8 = unaff_x29 + -0x40;
      uStack00000000000000b0 = 1;
      uStack00000000000000c0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar5,&stack0x000000b0);
      lVar5 = lRam000000010b624ce0;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack0000000000000078 = *(undefined1 **)(lRam000000010b624ce0 + 0x20);
        uStack0000000000000080 = *(undefined8 *)(lRam000000010b624ce0 + 0x28);
        uStack0000000000000070 = 2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000070);
        if (iVar4 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar5,puVar2,puVar1,&stack0x00000070,&stack0x000000b0);
        }
      }
    }
    else {
      lVar5 = lRam000000010b624ce0;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puStack0000000000000060 = *(undefined **)(lRam000000010b624ce0 + 0x20);
        in_stack_00000068 = *(undefined8 *)(lRam000000010b624ce0 + 0x28);
        puStack0000000000000058 = (undefined *)0x2;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000058);
        if (iVar4 != 0) {
          lStack0000000000000088 = lRam000000010b624ce0 + 0x30;
          pcStack00000000000000a0 = "no native root CA certificates found!\x05";
          lStack00000000000000a8 = 0x4b;
          puStack0000000000000090 = (undefined1 *)&stack0x000000a0;
          puStack0000000000000098 = &UNK_10b1f3630;
          puStack0000000000000078 = (undefined1 *)&stack0x00000090;
          uStack0000000000000070 = 1;
          uStack0000000000000080 = 1;
          lStack00000000000000d0 = *(long *)(lVar5 + 0x60);
          uStack00000000000000d8 = *(undefined8 *)(lVar5 + 0x68);
          lStack00000000000000b8 = *(long *)(lVar5 + 0x50);
          uStack00000000000000c0 = *(undefined8 *)(lVar5 + 0x58);
          uStack00000000000000b0 = 1;
          if (lStack00000000000000b8 == 0) {
            uStack00000000000000b0 = 2;
          }
          uStack00000000000000f8 = *(undefined4 *)(lVar5 + 8);
          uStack00000000000000fc = *(undefined4 *)(lVar5 + 0xc);
          *(undefined8 **)(unaff_x29 + -0x50) = &stack0x00000070;
          *(undefined1 *)(unaff_x29 + -0x48) = 1;
          *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0x50;
          *(undefined **)(unaff_x29 + -0x38) = &DAT_1061c2098;
          lStack00000000000000c8 = 1;
          if (lStack00000000000000d0 == 0) {
            lStack00000000000000c8 = 2;
          }
          puStack00000000000000e8 = puStack0000000000000060;
          puStack00000000000000e0 = puStack0000000000000058;
          uStack00000000000000f0 = in_stack_00000068;
          puStack0000000000000108 = (undefined1 *)(unaff_x29 + -0x40);
          pcStack0000000000000100 = s__108b39f4f;
          (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000000b0);
        }
      }
    }
  }
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[2] = in_stack_00000010;
  in_stack_00000030 = in_stack_00000030 + 1;
  lVar5 = in_stack_00000028;
  while (in_stack_00000030 = in_stack_00000030 + -1, in_stack_00000030 != 0) {
    FUN_1002befc4(lVar5);
    lVar5 = lVar5 + 0x38;
  }
  if (in_stack_00000020 != 0) {
    _free(in_stack_00000028);
  }
  return;
}

