
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1017e990c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  long lVar12;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined1 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puStack0000000000000060;
  undefined *puStack0000000000000068;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  char *pcStack00000000000001e0;
  undefined *puStack00000000000001e8;
  
  puStack00000000000001e8 = &stack0x00000220;
  pcStack00000000000001e0 = s__realtime_websocket_receive_fail_108add06b;
  puStack0000000000000060 = (undefined1 *)&stack0x000001e0;
  puStack0000000000000068 = &UNK_10b25b0a0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 1;
  *(undefined1 ***)(unaff_x29 + -0xb8) = &stack0x00000060;
  *(undefined8 *)(unaff_x29 + -0xb0) = 1;
  *(undefined8 *)(unaff_x29 + -0xa8) = param_1;
  FUN_1017ebcf4(unaff_x29 + -0xc0);
  *(undefined1 *)(unaff_x19 + 0xce3) = 0;
  *(undefined8 *)(unaff_x19 + 0xcf0) = 6;
  uVar9 = *unaff_x26;
  uVar16 = unaff_x26[3];
  uVar15 = unaff_x26[2];
  unaff_x21[1] = unaff_x26[1];
  *unaff_x21 = uVar9;
  unaff_x21[3] = uVar16;
  unaff_x21[2] = uVar15;
  *(long *)(unaff_x19 + 0xd28) = unaff_x19 + 0x5b8;
  *(undefined8 *)(unaff_x19 + 0xd30) = 0;
  FUN_1017b7ee4(unaff_x29 + -0xc0,unaff_x19 + 0xcf0,*unaff_x27);
  if (*(long *)(unaff_x29 + -0xc0) == 8) {
    uVar9 = 1;
    uVar11 = 9;
    goto LAB_1017eb15c;
  }
  lVar14 = *(long *)(unaff_x29 + -0xb8);
  lVar12 = *(long *)(unaff_x29 + -0xc0);
  uVar16 = *(undefined8 *)(unaff_x29 + -0xa8);
  uVar15 = *(undefined8 *)(unaff_x29 + -0xb0);
  uVar9 = *(undefined8 *)(unaff_x29 + -0x98);
  FUN_1017a1b44(unaff_x19 + 0xcf0);
  if (lVar12 != 7) {
    if (lVar12 == 6) {
      FUN_1017a49cc((ulong)&stack0x00000220 | 8);
    }
    else if ((lVar12 != 4) || ((short)uVar9 != 0x12)) {
      (**(code **)(lVar14 + 0x20))(&stack0x00000240,uVar15,uVar16);
    }
  }
  *(undefined1 *)(unaff_x19 + 0xce3) = 0;
  lVar12 = *(long *)(unaff_x19 + 0xc68);
  if (lVar12 == 6) {
    *(undefined1 *)(unaff_x19 + 0xce2) = 0;
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) goto LAB_1017eaef0;
LAB_1017eaffc:
    lVar12 = lRam000000010b6271e8;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_000001d0 = *(undefined8 *)(lRam000000010b6271e8 + 0x20);
      in_stack_000001d8 = *(undefined8 *)(lRam000000010b6271e8 + 0x28);
      in_stack_000001c8 = 3;
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x000001c8);
      if (iVar8 != 0) {
        *(undefined **)(unaff_x29 + -0xd0) = &UNK_108ce7c6a;
        *(undefined8 *)(unaff_x29 + -200) = 0x3f;
        *(long *)(unaff_x29 + -0xe0) = unaff_x29 + -0xd0;
        *(undefined **)(unaff_x29 + -0xd8) = &UNK_10b25b0a0;
        lVar14 = *(long *)(lVar12 + 0x60);
        uVar15 = *(undefined8 *)(lVar12 + 0x68);
        lVar6 = *(long *)(lVar12 + 0x50);
        uVar16 = *(undefined8 *)(lVar12 + 0x58);
        uVar9 = 1;
        if (lVar6 == 0) {
          uVar9 = 2;
        }
        uVar4 = *(undefined4 *)(lVar12 + 8);
        uVar5 = *(undefined4 *)(lVar12 + 0xc);
        puStack0000000000000060 = &stack0x00000220;
        puStack0000000000000068 = (undefined *)CONCAT71(puStack0000000000000068._1_7_,1);
        pcStack00000000000001e0 = (char *)&stack0x00000060;
        puStack00000000000001e8 = &DAT_1061c2098;
        uVar1 = 1;
        if (lVar14 == 0) {
          uVar1 = 2;
        }
        uVar13 = *(undefined8 *)(unaff_x25 + 0xe0);
        *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x25 + 0xe8);
        *(undefined8 *)(unaff_x29 + -0x90) = uVar13;
        *(undefined8 *)(unaff_x29 + -0x80) = in_stack_000001d8;
        *(char **)(unaff_x29 + -0x70) = s__108b39f4f;
        *(char ***)(unaff_x29 + -0x68) = &stack0x000001e0;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar9;
        *(long *)(unaff_x29 + -0xb8) = lVar6;
        *(undefined8 *)(unaff_x29 + -0xb0) = uVar16;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar1;
        *(long *)(unaff_x29 + -0xa0) = lVar14;
        *(undefined8 *)(unaff_x29 + -0x98) = uVar15;
        *(undefined4 *)(unaff_x29 + -0x78) = uVar4;
        *(undefined4 *)(unaff_x29 + -0x74) = uVar5;
        (**(code **)(puVar2 + 0x20))(puVar3,unaff_x29 + -0xc0);
      }
    }
  }
  else {
    if (((lVar12 != 2) && ((*(byte *)(unaff_x19 + 0xce2) & 1) != 0)) &&
       ((lVar12 != 4 || (*(short *)(unaff_x19 + 0xc90) != 0x12)))) {
      (**(code **)(*(long *)(unaff_x19 + 0xc70) + 0x20))
                (unaff_x19 + 0xc88,*(undefined8 *)(unaff_x19 + 0xc78),
                 *(undefined8 *)(unaff_x19 + 0xc80));
    }
    *(undefined1 *)(unaff_x19 + 0xce2) = 0;
    *(undefined1 *)(unaff_x19 + 0xce2) = 0;
    if (2 < ___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E) goto LAB_1017eaffc;
LAB_1017eaef0:
    if (1 < bRam000000010b6271f8 - 1) {
      if (bRam000000010b6271f8 != 0) {
        cVar7 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                          (0x10b6271e8);
        unaff_x25 = &stack0x000000e8;
        if (cVar7 != '\0') goto LAB_1017eaf04;
      }
      goto LAB_1017eaffc;
    }
LAB_1017eaf04:
    uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE(lRam000000010b6271e8);
    lVar12 = lRam000000010b6271e8;
    if ((uVar10 & 1) == 0) goto LAB_1017eaffc;
    lVar14 = lRam000000010b6271e8 + 0x30;
    pcStack00000000000001e0 =
         "realtime websocket pump exitingtranscriptionaudio/pcmSessionAudioInput";
    puStack00000000000001e8 = (undefined *)0x3f;
    puStack0000000000000060 = (undefined1 *)&stack0x000001e0;
    puStack0000000000000068 = &UNK_10b25b0a0;
    *(undefined8 *)(unaff_x29 + -0xc0) = 1;
    *(undefined1 ***)(unaff_x29 + -0xb8) = &stack0x00000060;
    *(undefined8 *)(unaff_x29 + -0xb0) = 1;
    *(long *)(unaff_x29 + -0xa8) = lVar14;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar12,unaff_x29 + -0xc0);
    lVar12 = lRam000000010b6271e8;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar2 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_10b3c24c8;
      }
      puVar3 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar3 = &UNK_109adfc03;
      }
      iVar8 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000220);
      if (iVar8 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar12,puVar3,puVar2,&stack0x00000220,unaff_x29 + -0xc0);
      }
    }
  }
  FUN_1017a23d0(unaff_x19 + 0x5c0);
  FUN_1017a1214(unaff_x19 + 0x5b0);
  func_0x0001017a1e2c(unaff_x19 + 0x5b8);
  uVar9 = 0;
  uVar11 = 1;
LAB_1017eb15c:
  *(undefined1 *)(unaff_x19 + 0xce0) = uVar11;
  return uVar9;
}

