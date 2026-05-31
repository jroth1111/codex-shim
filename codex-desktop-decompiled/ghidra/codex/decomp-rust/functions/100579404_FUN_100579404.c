
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100579404(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 uVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 unaff_x24;
  long unaff_x25;
  long unaff_x29;
  undefined8 uVar15;
  undefined8 uStack0000000000000150;
  undefined1 *puStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  undefined1 *puStack0000000000000178;
  undefined *puStack0000000000000180;
  char *pcStack0000000000000188;
  undefined1 *puStack0000000000000190;
  
  puStack0000000000000190 = &stack0x00000198;
  pcStack0000000000000188 = s__failed_to_resolve_stored_sessio_108ac1507;
  puStack0000000000000178 = (undefined1 *)&stack0x00000188;
  puStack0000000000000180 = &UNK_10b208fd0;
  puStack0000000000000158 = (undefined1 *)&stack0x00000178;
  uStack0000000000000150 = 1;
  uStack0000000000000160 = 1;
  uStack0000000000000168 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000150);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar12 = *unaff_x20;
    uVar10 = *(undefined8 *)(lVar12 + 0x20);
    uVar6 = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(unaff_x29 + -0xe8) = 2;
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xd8) = uVar6;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0xe8);
    if (iVar8 != 0) {
      lVar13 = *(long *)(lVar12 + 0x60);
      uVar6 = *(undefined8 *)(lVar12 + 0x68);
      lVar11 = *(long *)(lVar12 + 0x50);
      uVar7 = *(undefined8 *)(lVar12 + 0x58);
      uVar10 = 1;
      if (lVar11 == 0) {
        uVar10 = 2;
      }
      uVar4 = *(undefined4 *)(lVar12 + 8);
      uVar5 = *(undefined4 *)(lVar12 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x70) = &stack0x00000150;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x58) = &DAT_1061c2098;
      uVar1 = 1;
      if (lVar13 == 0) {
        uVar1 = 2;
      }
      uVar15 = *(undefined8 *)(unaff_x25 + 0x6a0);
      *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)(unaff_x25 + 0x6a8);
      *(undefined8 *)(unaff_x29 + -0xa0) = uVar15;
      *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xd8);
      *(char **)(unaff_x29 + -0x80) = s__108b39f4f;
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x60;
      *(undefined8 *)(unaff_x29 + -0xd0) = uVar10;
      *(long *)(unaff_x29 + -200) = lVar11;
      *(undefined8 *)(unaff_x29 + -0xc0) = uVar7;
      *(undefined8 *)(unaff_x29 + -0xb8) = uVar1;
      *(long *)(unaff_x29 + -0xb0) = lVar13;
      *(undefined8 *)(unaff_x29 + -0xa8) = uVar6;
      *(undefined4 *)(unaff_x29 + -0x88) = uVar4;
      *(undefined4 *)(unaff_x29 + -0x84) = uVar5;
      (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xd0);
    }
  }
  *(undefined1 *)(unaff_x19 + 0x50a) = 1;
  FUN_100df5738(&stack0x000000b0);
  uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined1 *)(unaff_x19 + 0x509) = 0;
  *(undefined1 *)(unaff_x19 + 0x50b) = 0;
  _memcpy(&stack0x000001c0,unaff_x19 + 0x28,0x4c8);
  *(undefined1 *)(unaff_x19 + 0x50a) = 0;
  _memcpy(unaff_x19 + 0x510,&stack0x000001c0,0x4f8);
  *(undefined8 *)(unaff_x19 + 0xa08) = unaff_x24;
  *(undefined8 *)(unaff_x19 + 0xa50) = uVar10;
  *(undefined1 *)(unaff_x19 + 0x40c8) = 0;
  lVar12 = func_0x000100577c38(unaff_x19 + 0x510);
  if (lVar12 == 0) {
    uVar9 = 4;
  }
  else {
    FUN_100d74270(unaff_x19 + 0x510);
    *(undefined1 *)(unaff_x19 + 0x50a) = 0;
    lVar11 = *(long *)(unaff_x19 + 0x4f8);
    lVar13 = *(long *)(unaff_x19 + 0x500);
    if (lVar13 != 0) {
      puVar14 = (undefined8 *)(lVar11 + 0x20);
      do {
        if (puVar14[-4] != 0) {
          _free(puVar14[-3]);
        }
        if (puVar14[-1] != 0) {
          _free(*puVar14);
        }
        puVar14 = puVar14 + 6;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    if (*(long *)(unaff_x19 + 0x4f0) != 0) {
      _free(lVar11);
    }
    *(undefined1 *)(unaff_x19 + 0x50b) = 0;
    *(undefined1 *)(unaff_x19 + 0x509) = 0;
    uVar9 = 1;
  }
  *(undefined1 *)(unaff_x19 + 0x508) = uVar9;
  return lVar12;
}

