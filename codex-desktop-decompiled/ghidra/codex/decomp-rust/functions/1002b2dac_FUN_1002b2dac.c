
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002b2dac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar5;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  char *pcStack0000000000000040;
  undefined8 *puStack0000000000000048;
  undefined *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000080;
  long in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined *in_stack_00000098;
  undefined *in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 uStack00000000000000b0;
  long lStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  long lStack00000000000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  char *in_stack_00000100;
  long in_stack_00000108;
  
  puStack0000000000000048 = &stack0x00000058;
  pcStack0000000000000040 = s__native_root_CA_certificate_load_108ab947b;
  *(char ***)(unaff_x29 + -0x40) = &stack0x00000040;
  *(undefined **)(unaff_x29 + -0x38) = &UNK_10b1f3630;
  lStack00000000000000b8 = unaff_x29 + -0x40;
  uStack00000000000000b0 = 1;
  uStack00000000000000c0 = 1;
  lStack00000000000000c8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000b0);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar5 = *(long *)(unaff_x20 + 0xcc8);
    in_stack_00000078 = *(undefined8 **)(lVar5 + 0x20);
    in_stack_00000080 = *(undefined8 *)(lVar5 + 0x28);
    in_stack_00000070 = 2;
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
  if (in_stack_00000010 == 0) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
       (((bRam000000010b624cf0 - 1 < 2 ||
         ((bRam000000010b624cf0 != 0 &&
          (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (0x10b624ce0), cVar3 != '\0')))) &&
        (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (lRam000000010b624ce0), lVar5 = lRam000000010b624ce0, iVar4 != 0)))) {
      lStack00000000000000c8 = lRam000000010b624ce0 + 0x30;
      in_stack_00000058 = &UNK_108c74c1f;
      in_stack_00000060 = 0x4b;
      *(undefined ***)(unaff_x29 + -0x40) = &stack0x00000058;
      *(undefined **)(unaff_x29 + -0x38) = &UNK_10b1f3630;
      lStack00000000000000b8 = unaff_x29 + -0x40;
      uStack00000000000000b0 = 1;
      uStack00000000000000c0 = 1;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar5,&stack0x000000b0);
      lVar5 = lRam000000010b624ce0;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        in_stack_00000078 = *(undefined8 **)(lRam000000010b624ce0 + 0x20);
        in_stack_00000080 = *(undefined8 *)(lRam000000010b624ce0 + 0x28);
        in_stack_00000070 = 2;
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
        in_stack_00000060 = *(undefined8 *)(lRam000000010b624ce0 + 0x20);
        in_stack_00000068 = *(undefined8 *)(lRam000000010b624ce0 + 0x28);
        in_stack_00000058 = (undefined *)0x2;
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
          in_stack_00000088 = lRam000000010b624ce0 + 0x30;
          in_stack_000000a0 = &UNK_108c74c1f;
          in_stack_000000a8 = 0x4b;
          in_stack_00000090 = &stack0x000000a0;
          in_stack_00000098 = &UNK_10b1f3630;
          in_stack_00000078 = &stack0x00000090;
          in_stack_00000070 = 1;
          in_stack_00000080 = 1;
          in_stack_000000d0 = *(long *)(lVar5 + 0x60);
          in_stack_000000d8 = *(undefined8 *)(lVar5 + 0x68);
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
          if (in_stack_000000d0 == 0) {
            lStack00000000000000c8 = 2;
          }
          in_stack_000000e8 = in_stack_00000060;
          in_stack_000000e0 = in_stack_00000058;
          in_stack_000000f0 = in_stack_00000068;
          in_stack_00000108 = unaff_x29 + -0x40;
          in_stack_00000100 = s__108b39f4f;
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

