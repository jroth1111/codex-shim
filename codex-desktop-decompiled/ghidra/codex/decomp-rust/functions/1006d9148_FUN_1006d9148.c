
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006d9148(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined1 uVar6;
  code *pcVar7;
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 uVar8;
  long *unaff_x22;
  undefined8 *puVar9;
  undefined *unaff_x23;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x25;
  long unaff_x29;
  undefined8 uStack0000000000000000;
  undefined1 *puStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 *in_stack_000000a0;
  undefined1 *puStack00000000000000a8;
  undefined *puStack00000000000000b0;
  char *pcStack00000000000000b8;
  undefined1 *puStack00000000000000c0;
  ulong in_stack_000000f0;
  undefined8 *in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 uStack0000000000000138;
  undefined4 uStack000000000000013c;
  char *in_stack_00000140;
  long in_stack_00000148;
  
  puStack00000000000000c0 = &stack0x000000c8;
  pcStack00000000000000b8 = s__failed_to_revoke_auth_tokens_du_108ac35f8;
  puStack00000000000000a8 = (undefined1 *)&stack0x000000b8;
  puStack00000000000000b0 = &UNK_10b208fd0;
  puStack0000000000000008 = (undefined1 *)&stack0x000000a8;
  uStack0000000000000000 = 1;
  uStack0000000000000010 = 1;
  uStack0000000000000018 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE();
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar10 = *unaff_x22;
    uVar2 = *(undefined8 *)(lVar10 + 0x20);
    uVar3 = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x88) = 2;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar2;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar3;
    unaff_x23 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      unaff_x23 = &UNK_10b3c24c8;
    }
    puVar1 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
    }
    iVar5 = (**(code **)(unaff_x23 + 0x18))(puVar1,unaff_x29 + -0x88);
    if (iVar5 != 0) {
      in_stack_00000110 = *(long *)(lVar10 + 0x60);
      in_stack_00000118 = *(undefined8 *)(lVar10 + 0x68);
      in_stack_000000f8 = *(undefined8 **)(lVar10 + 0x50);
      in_stack_00000100 = *(undefined8 *)(lVar10 + 0x58);
      in_stack_000000f0 = 1;
      if (in_stack_000000f8 == (undefined8 *)0x0) {
        in_stack_000000f0 = 2;
      }
      uStack0000000000000138 = *(undefined4 *)(lVar10 + 8);
      uStack000000000000013c = *(undefined4 *)(lVar10 + 0xc);
      *(BADSPACEBASE **)(unaff_x29 + -0x70) = register0x00000008;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
      in_stack_00000108 = 1;
      if (in_stack_00000110 == 0) {
        in_stack_00000108 = 2;
      }
      in_stack_00000128 = *(undefined8 *)(unaff_x25 + 0xb8);
      in_stack_00000120 = *(undefined8 *)(unaff_x25 + 0xb0);
      in_stack_00000130 = *(undefined8 *)(unaff_x29 + -0x78);
      in_stack_00000148 = unaff_x29 + -0x60;
      in_stack_00000140 = s__108b39f4f;
      (**(code **)(unaff_x23 + 0x20))(puVar1,&stack0x000000f0);
    }
  }
  puVar9 = in_stack_000000a0;
  if (((ulong)in_stack_000000a0 & 3) == 1) {
    puVar9 = (undefined8 *)((long)in_stack_000000a0 + -1);
    unaff_x23 = (undefined *)*puVar9;
    puVar11 = *(undefined8 **)((long)in_stack_000000a0 + 7);
    pcVar7 = (code *)*puVar11;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(unaff_x23);
    }
    if (puVar11[1] != 0) {
      _free(unaff_x23);
    }
    _free(puVar9);
  }
  uVar6 = SUB81(unaff_x23,0);
  lVar10 = *(long *)(unaff_x19 + 8);
  __ZN11codex_login4auth7manager17logout_all_stores17h14f79545a6fcd247E
            (&stack0x000000f0,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10),
             *(undefined1 *)(lVar10 + 0x201));
  if ((in_stack_000000f0 & 1) == 0) {
    *(undefined1 *)(unaff_x19 + 0x120) = in_stack_000000f0._1_1_;
    *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 8);
    *(undefined1 *)(unaff_x19 + 0xc48) = 0;
    cVar4 = FUN_1006de4f8(unaff_x19 + 0x128);
    if (cVar4 == '\x02') {
      *unaff_x20 = 2;
      uVar6 = 4;
      goto LAB_1006d948c;
    }
    if ((*(char *)(unaff_x19 + 0xc48) == '\x03') && (*(char *)(unaff_x19 + 0xc40) == '\x03')) {
      FUN_100e5e3e0(unaff_x19 + 0x140);
    }
    uVar8 = 0;
    lVar10 = *(long *)(unaff_x19 + 0x10);
    uVar6 = *(undefined1 *)(unaff_x19 + 0x120);
  }
  else {
    lVar10 = *(long *)(unaff_x19 + 0x10);
    uVar8 = 1;
    puVar9 = in_stack_000000f8;
  }
  if (lVar10 != -0x7fffffffffffffff) {
    FUN_100e0c53c();
  }
  *unaff_x20 = uVar8;
  unaff_x20[1] = uVar6;
  uVar6 = 1;
  *(undefined8 **)(unaff_x20 + 8) = puVar9;
LAB_1006d948c:
  *(undefined1 *)(unaff_x19 + 0x118) = uVar6;
  return;
}

