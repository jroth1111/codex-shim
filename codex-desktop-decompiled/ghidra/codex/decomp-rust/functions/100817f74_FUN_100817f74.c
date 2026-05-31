
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100817f74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *unaff_x19;
  long lVar9;
  long unaff_x21;
  long *plVar10;
  long unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 in_stack_000000c0;
  undefined8 uStack00000000000000c8;
  undefined1 *puStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined1 *puStack00000000000000e8;
  undefined *puStack00000000000000f0;
  char *pcStack00000000000000f8;
  undefined1 *puStack0000000000000100;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  
  puStack0000000000000100 = &stack0x00000108;
  pcStack00000000000000f8 = s_incoming_body_decode_error__108ac8b6f;
  puStack00000000000000e8 = (undefined1 *)&stack0x000000f8;
  puStack00000000000000f0 = &UNK_10b208fd0;
  puStack00000000000000d0 = (undefined1 *)&stack0x000000e8;
  uStack00000000000000c8 = 1;
  uStack00000000000000d8 = 1;
  uStack00000000000000e0 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x000000c8);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar9 = *unaff_x19;
    uVar12 = *(undefined8 *)(lVar9 + 0x20);
    uVar13 = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xf8) = 4;
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar12;
    *(undefined8 *)(unaff_x29 + -0xe8) = uVar13;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xf8);
    if (iVar8 != 0) {
      lVar6 = *(long *)(lVar9 + 0x60);
      uVar13 = *(undefined8 *)(lVar9 + 0x68);
      lVar7 = *(long *)(lVar9 + 0x50);
      uVar14 = *(undefined8 *)(lVar9 + 0x58);
      uVar12 = 1;
      if (lVar7 == 0) {
        uVar12 = 2;
      }
      uVar4 = *(undefined4 *)(lVar9 + 8);
      uVar5 = *(undefined4 *)(lVar9 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x80) = &stack0x000000c8;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      uVar1 = 1;
      if (lVar6 == 0) {
        uVar1 = 2;
      }
      uVar11 = *(undefined8 *)(unaff_x23 + 0x20);
      *(undefined8 *)(unaff_x29 + -0xa8) = *(undefined8 *)(unaff_x23 + 0x28);
      *(undefined8 *)(unaff_x29 + -0xb0) = uVar11;
      *(undefined8 *)(unaff_x29 + -0xa0) = *(undefined8 *)(unaff_x29 + -0xe8);
      *(char **)(unaff_x29 + -0x90) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x70;
      *(undefined8 *)(unaff_x29 + -0xe0) = uVar12;
      *(long *)(unaff_x29 + -0xd8) = lVar7;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar14;
      *(undefined8 *)(unaff_x29 + -200) = uVar1;
      *(long *)(unaff_x29 + -0xc0) = lVar6;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar13;
      *(undefined4 *)(unaff_x29 + -0x98) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x94) = uVar5;
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xe0);
    }
  }
  *(undefined8 *)(unaff_x29 + -0xe0) = 4;
  *(undefined8 *)(unaff_x29 + -0xd8) = in_stack_000000c0;
  *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000158;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000150;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000168;
  *(undefined8 *)(unaff_x29 + -0xa0) = in_stack_00000160;
  *(undefined8 *)(unaff_x29 + -0x88) = in_stack_00000178;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000170;
  *(undefined8 *)(unaff_x29 + -200) = in_stack_00000138;
  *(undefined8 *)(unaff_x29 + -0xd0) = in_stack_00000130;
  *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000148;
  *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000140;
  if ((((*unaff_x28 == 1) || (*unaff_x28 == 2)) && (*(ulong *)(unaff_x21 + 0xd0) < 2)) &&
     (*(long *)(unaff_x21 + 0x100) != 0)) {
    plVar10 = *(long **)(unaff_x21 + 0x118);
    if (((ulong)plVar10 & 1) == 0) {
      lVar9 = plVar10[4];
      plVar10[4] = lVar9 + -1;
      LORelease();
      if (lVar9 != 1) goto LAB_100818688;
      if (*plVar10 != 0) {
        _free(plVar10[1]);
      }
    }
    else {
      if (*(long *)(unaff_x21 + 0x110) + ((ulong)plVar10 >> 5) == 0) goto LAB_100818688;
      plVar10 = (long *)(*(long *)(unaff_x21 + 0x100) - ((ulong)plVar10 >> 5));
    }
    _free(plVar10);
  }
LAB_100818688:
  *unaff_x28 = 4;
  FUN_10081c074(unaff_x28 + -4);
  FUN_100817084();
  uVar12 = *(undefined8 *)(unaff_x29 + -0xc0);
  uVar14 = *(undefined8 *)(unaff_x29 + -0xa8);
  uVar13 = *(undefined8 *)(unaff_x29 + -0xb0);
  unaff_x25[5] = *(undefined8 *)(unaff_x29 + -0xb8);
  unaff_x25[4] = uVar12;
  unaff_x25[7] = uVar14;
  unaff_x25[6] = uVar13;
  uVar12 = *(undefined8 *)(unaff_x29 + -0xa0);
  uVar14 = *(undefined8 *)(unaff_x29 + -0x88);
  uVar13 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x25[9] = *(undefined8 *)(unaff_x29 + -0x98);
  unaff_x25[8] = uVar12;
  unaff_x25[0xb] = uVar14;
  unaff_x25[10] = uVar13;
  uVar12 = *(undefined8 *)(unaff_x29 + -0xe0);
  uVar14 = *(undefined8 *)(unaff_x29 + -200);
  uVar13 = *(undefined8 *)(unaff_x29 + -0xd0);
  unaff_x25[1] = *(undefined8 *)(unaff_x29 + -0xd8);
  *unaff_x25 = uVar12;
  unaff_x25[3] = uVar14;
  unaff_x25[2] = uVar13;
  return;
}

