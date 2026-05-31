
/* WARNING: Removing unreachable block (ram,0x0001002657a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10026526c(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined5 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  undefined8 *puVar16;
  char *pcVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 uVar23;
  long lVar24;
  char *pcVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  ulong *unaff_x20;
  char *unaff_x21;
  long *plVar28;
  char *pcVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined1 uVar32;
  byte *unaff_x28;
  long unaff_x29;
  ulong in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  ulong in_stack_00000050;
  ulong in_stack_00000058;
  undefined1 *in_stack_00000060;
  undefined *in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  byte bStack000000000000009c;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  char *in_stack_000000b0;
  char *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined5 uStack00000000000000f8;
  undefined3 uStack00000000000000fd;
  undefined5 in_stack_00000100;
  ulong in_stack_00000110;
  char *in_stack_00000118;
  char *in_stack_00000120;
  char *in_stack_00000128;
  long in_stack_00000130;
  undefined8 *in_stack_00000138;
  undefined1 uStack0000000000000140;
  char *in_stack_00000148;
  undefined8 in_stack_00000150;
  long in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined5 uStack0000000000000188;
  undefined3 uStack000000000000018d;
  undefined5 in_stack_00000190;
  undefined4 uStack0000000000000198;
  undefined1 uStack000000000000019f;
  byte bStack00000000000001a0;
  undefined1 uStack00000000000001a1;
  undefined6 uStack00000000000001a2;
  undefined2 uStack00000000000001a8;
  uint6 uStack00000000000001aa;
  undefined2 uStack00000000000001b0;
  undefined6 uStack00000000000001b2;
  undefined8 in_stack_000001b8;
  char *in_stack_000001c0;
  uint6 uStack00000000000001c8;
  undefined2 uStack00000000000001ce;
  undefined6 uStack00000000000001d0;
  undefined2 uStack00000000000001d6;
  uint6 uStack00000000000001d8;
  undefined2 uStack00000000000001de;
  char cStack00000000000001e0;
  undefined1 uStack00000000000001e1;
  byte bStack00000000000001e2;
  undefined1 uStack00000000000001e3;
  undefined4 uStack00000000000001e4;
  undefined3 uStack00000000000001e8;
  undefined5 uStack00000000000001eb;
  undefined3 in_stack_000001f0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000038,s__108ac1772,unaff_x29 + -0xb8);
  uVar18 = in_stack_00000048;
  uVar21 = in_stack_00000040;
  uVar20 = in_stack_00000038;
  __ZN78__LT_http__uri__authority__Authority_u20_as_u20_core__str__traits__FromStr_GT_8from_str17h5ce2d0edd6b07698E
            (unaff_x29 + -0xb8,in_stack_00000040,in_stack_00000048);
  uVar31 = *(ulong *)(unaff_x29 + -0xb8);
  if (uVar31 == 0) {
    uVar32 = *(undefined1 *)(unaff_x29 + -0xb0);
    uVar31 = uVar21;
    if (uVar20 == 0x8000000000000000) {
      if (uVar18 == 0) {
LAB_10026531c:
        uVar31 = 1;
      }
      else {
        uVar31 = _malloc(uVar18);
        if (uVar31 == 0) {
          FUN_107c03c64(1,uVar18);
          goto LAB_10026531c;
        }
      }
      _memcpy(uVar31,uVar21,uVar18);
      uVar20 = uVar18;
    }
    puVar19 = (undefined1 *)_malloc(1);
    if (puVar19 == (undefined1 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,1);
      goto LAB_100265c24;
    }
    *puVar19 = uVar32;
    puVar30 = &UNK_10b1f3270;
    if (uVar20 != 0x8000000000000003) {
      *unaff_x20 = uVar20;
      unaff_x20[1] = uVar31;
      unaff_x20[2] = uVar18;
      unaff_x20[3] = (ulong)puVar19;
      unaff_x20[4] = (ulong)&UNK_10b1f3270;
      return;
    }
  }
  else {
    uVar18 = *(ulong *)(unaff_x29 + -0xb0);
    puVar19 = *(undefined1 **)(unaff_x29 + -0xa8);
    puVar30 = *(undefined **)(unaff_x29 + -0xa0);
    if ((uVar20 & 0x7fffffffffffffff) != 0) {
      _free(uVar21);
    }
  }
  cVar4 = *unaff_x21;
  in_stack_00000050 = uVar31;
  in_stack_00000058 = uVar18;
  in_stack_00000060 = puVar19;
  in_stack_00000068 = puVar30;
  if (cVar4 == '\0') {
    *unaff_x20 = 0x8000000000000000;
    unaff_x20[1] = 0;
    (**(code **)(uVar31 + 0x20))(&stack0x00000068,uVar18,puVar19);
    return;
  }
  *(undefined1 *)(unaff_x29 + -0xb8) = 3;
  *(undefined **)(unaff_x29 + -0x90) = puVar30;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(ulong *)(unaff_x29 + -0xa8) = uVar31;
  if (cVar4 == '\x02') {
    puVar26 = *(undefined8 **)(unaff_x21 + 8);
    puVar16 = (undefined8 *)_malloc(0x20);
    if (puVar16 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
      goto LAB_100265c24;
    }
    (**(code **)*puVar26)(&stack0x00000140,puVar26 + 3,puVar26[1],puVar26[2]);
    puVar16[1] = in_stack_00000148;
    *puVar16 = _uStack0000000000000140;
    puVar16[3] = in_stack_00000158;
    puVar16[2] = in_stack_00000150;
    bVar13 = *unaff_x21 == '\0';
  }
  else {
    bVar13 = false;
    _uStack0000000000000198 =
         CONCAT43(*(undefined4 *)(unaff_x21 + 4),(int3)*(undefined4 *)(unaff_x21 + 1));
    puVar16 = *(undefined8 **)(unaff_x21 + 8);
  }
  _uStack0000000000000140 = CONCAT41(uStack0000000000000198,uStack0000000000000140);
  _uStack0000000000000140 = (char *)CONCAT44(stack0x0000019b,_uStack0000000000000140);
  uVar23 = *(undefined8 *)(unaff_x29 + -0x68);
  in_stack_000001f0 = (undefined3)*(undefined8 *)(unaff_x29 + -0xa8);
  uStack00000000000001e1 = (undefined1)_uStack0000000000000198;
  bStack00000000000001e2 = (byte)((ulong)_uStack0000000000000198 >> 8);
  uStack00000000000001e3 = (undefined1)((ulong)_uStack0000000000000198 >> 0x10);
  uStack00000000000001e8 = SUB83(puVar16,0);
  uStack00000000000001eb = (undefined5)((ulong)puVar16 >> 0x18);
  cStack00000000000001e0 = cVar4;
  uStack00000000000001e4 = stack0x0000019b;
  if (((!bVar13) || (*(long *)(unaff_x21 + 0x20) == 0)) && (*(ushort *)(unaff_x21 + 0x50) != 0xffff)
     ) {
    uVar18 = (ulong)*(ushort *)(unaff_x21 + 0x50) + 1;
    pcVar17 = *(char **)(unaff_x21 + 0x38);
    uVar20 = *(ulong *)(unaff_x21 + 0x40);
    lVar24 = uVar20 - uVar18;
    if (uVar20 < uVar18 || lVar24 == 0) {
      if (lVar24 == 0) goto LAB_1002654c4;
    }
    else if (-0x41 < pcVar17[uVar18]) {
LAB_1002654c4:
      in_stack_00000128 = pcVar17 + uVar18;
      in_stack_00000130 = lVar24;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b624c28 - 1 < 2 ||
           ((bRam000000010b624c28 != 0 &&
            (cVar14 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (0x10b624c18), cVar14 != '\0')))) &&
          (iVar15 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (lRam000000010b624c18), lVar24 = lRam000000010b624c18, iVar15 != 0))))
      {
        in_stack_00000158 = lRam000000010b624c18 + 0x30;
        in_stack_000001c0 =
             "query specified in endpoint will be ignored during endpoint resolution/a Display implementation returned an error unexpectedlydescription() is deprecated; use DisplayErrorInvalidUriCharInvalidSchemeInvalidPortInvalidFormatSchemeMissingPathAndQueryMissingTooLongEmptySchemeTooLongInvalidUriInvalidUriParts"
        ;
        uStack00000000000001c8 = 0x8d;
        uStack00000000000001ce = 0;
        in_stack_00000138 = &stack0x00000128;
        *(char ***)(unaff_x29 + -0xb8) = &stack0x000001c0;
        *(undefined **)(unaff_x29 + -0xb0) = &UNK_10b1f30a8;
        *(undefined8 ***)(unaff_x29 + -0xa8) = &stack0x00000138;
        *(undefined **)(unaff_x29 + -0xa0) = &UNK_10b1f30c8;
        in_stack_00000148 = (char *)(unaff_x29 + -0xb8);
        _uStack0000000000000140 = (char *)0x1;
        in_stack_00000150 = 2;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar24,&stack0x00000140);
        lVar24 = lRam000000010b624c18;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar3 = *(undefined8 *)(lRam000000010b624c18 + 0x20);
          _uStack0000000000000198 = 2;
          bStack00000000000001a0 = (byte)uVar3;
          uStack00000000000001a1 = (undefined1)((ulong)uVar3 >> 8);
          uStack00000000000001a2 = (undefined6)((ulong)uVar3 >> 0x10);
          uStack00000000000001a8 = (undefined2)*(undefined8 *)(lRam000000010b624c18 + 0x28);
          uStack00000000000001aa =
               (uint6)((ulong)*(undefined8 *)(lRam000000010b624c18 + 0x28) >> 0x10);
          puVar30 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar30 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar15 = (**(code **)(puVar30 + 0x18))(puVar2,&stack0x00000198);
          if (iVar15 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar24,puVar2,puVar30,&stack0x00000198,&stack0x00000140);
          }
        }
      }
      else {
        lVar24 = lRam000000010b624c18;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar3 = *(undefined8 *)(lRam000000010b624c18 + 0x20);
          _uStack0000000000000198 = 2;
          bStack00000000000001a0 = (byte)uVar3;
          uStack00000000000001a1 = (undefined1)((ulong)uVar3 >> 8);
          uStack00000000000001a2 = (undefined6)((ulong)uVar3 >> 0x10);
          uStack00000000000001a8 = (undefined2)*(undefined8 *)(lRam000000010b624c18 + 0x28);
          uStack00000000000001aa =
               (uint6)((ulong)*(undefined8 *)(lRam000000010b624c18 + 0x28) >> 0x10);
          puVar30 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar30 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar15 = (**(code **)(puVar30 + 0x18))(puVar2,&stack0x00000198);
          if (iVar15 != 0) {
            in_stack_00000158 = lRam000000010b624c18 + 0x30;
            in_stack_000001c0 =
                 "query specified in endpoint will be ignored during endpoint resolution/a Display implementation returned an error unexpectedlydescription() is deprecated; use DisplayErrorInvalidUriCharInvalidSchemeInvalidPortInvalidFormatSchemeMissingPathAndQueryMissingTooLongEmptySchemeTooLongInvalidUriInvalidUriParts"
            ;
            uStack00000000000001c8 = 0x8d;
            uStack00000000000001ce = 0;
            in_stack_00000138 = &stack0x00000128;
            *(char ***)(unaff_x29 + -0xb8) = &stack0x000001c0;
            *(undefined **)(unaff_x29 + -0xb0) = &UNK_10b1f30a8;
            *(undefined8 ***)(unaff_x29 + -0xa8) = &stack0x00000138;
            *(undefined **)(unaff_x29 + -0xa0) = &UNK_10b1f30c8;
            in_stack_00000148 = (char *)(unaff_x29 + -0xb8);
            _uStack0000000000000140 = (char *)0x1;
            in_stack_00000150 = 2;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar24,puVar2,puVar30,&stack0x00000198,&stack0x00000140);
          }
        }
      }
      goto LAB_1002656f8;
    }
    puVar30 = &UNK_10b1f3238;
    uVar21 = uVar20;
    goto LAB_100265c20;
  }
LAB_1002656f8:
  uVar20 = *(ulong *)(unaff_x21 + 0x40);
  pcVar1 = 
  "/a Display implementation returned an error unexpectedlydescription() is deprecated; use DisplayErrorInvalidUriCharInvalidSchemeInvalidPortInvalidFormatSchemeMissingPathAndQueryMissingTooLongEmptySchemeTooLongInvalidUriInvalidUriParts"
  ;
  if ((uVar20 == 0) && (*unaff_x21 == '\0')) {
    uVar18 = 0;
    pcVar25 = (char *)0x1;
  }
  else {
    uVar6 = *(ushort *)(unaff_x21 + 0x50);
    uVar21 = (ulong)uVar6;
    pcVar17 = *(char **)(unaff_x21 + 0x38);
    uVar31 = uVar20;
    if (uVar6 == 0xffff) goto LAB_100265778;
    if (uVar6 != 0) {
      if (uVar21 < uVar20) {
        uVar31 = uVar21;
        if (-0x41 < pcVar17[uVar21]) {
LAB_100265778:
          uVar18 = uVar31;
          if (uVar31 < 2) {
            uVar18 = 1;
          }
          pcVar25 = pcVar1;
          if (uVar31 != 0) {
            pcVar25 = pcVar17;
          }
          goto LAB_100265788;
        }
        uVar18 = 0;
        puVar30 = &UNK_10b1f3208;
      }
      else {
        uVar18 = 0;
        puVar30 = &UNK_10b1f3208;
        if ((pcVar17 != (char *)0x0) && (uVar20 == uVar21)) goto LAB_100265778;
      }
LAB_100265c20:
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E(pcVar17,uVar20,uVar18,uVar21,puVar30);
      goto LAB_100265c24;
    }
    uVar18 = 1;
    pcVar25 = 
    "/a Display implementation returned an error unexpectedlydescription() is deprecated; use DisplayErrorInvalidUriCharInvalidSchemeInvalidPortInvalidFormatSchemeMissingPathAndQueryMissingTooLongEmptySchemeTooLongInvalidUriInvalidUriParts"
    ;
  }
LAB_100265788:
  bVar5 = *unaff_x28;
  if ((bVar5 == 0) && (*(long *)(unaff_x28 + 0x20) != 0)) {
    pcVar29 = (char *)0x0;
    pcVar17 = (char *)0x1;
    pcVar22 = pcVar1;
    if (uVar18 == 0) goto LAB_1002657b8;
LAB_1002657f0:
    lVar24 = uVar18 - (pcVar25[uVar18 - 1] == '/');
    uStack00000000000001c8 = (uint6)lVar24;
    uStack00000000000001ce = (undefined2)((ulong)lVar24 >> 0x30);
    if (pcVar29 == (char *)0x0) {
      pcVar22 = (char *)0x0;
    }
    else if (*pcVar17 == '/') {
      pcVar17 = pcVar17 + 1;
      pcVar22 = pcVar29 + -1;
    }
    *(char ***)(unaff_x29 + -0xb8) = &stack0x000001c0;
    *(undefined **)(unaff_x29 + -0xb0) = &DAT_100265eb0;
    *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x00000140;
    *(undefined **)(unaff_x29 + -0xa0) = &DAT_100265eb0;
    _uStack0000000000000140 = pcVar17;
    in_stack_00000148 = pcVar22;
    in_stack_000001c0 = pcVar25;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000110,s___108ab8993,unaff_x29 + -0xb8);
  }
  else {
    pcVar22 = *(char **)(unaff_x28 + 0x40);
    pcVar17 = pcVar1;
    if (pcVar22 != (char *)0x0) {
      pcVar17 = *(char **)(unaff_x28 + 0x38);
    }
    if (pcVar22 < (char *)0x2) {
      pcVar22 = (char *)0x1;
    }
    pcVar29 = pcVar22;
    if (pcVar17 == (char *)0x0) {
      pcVar17 = (char *)0x1;
      pcVar29 = (char *)0x0;
    }
    if (uVar18 != 0) goto LAB_1002657f0;
LAB_1002657b8:
    in_stack_00000110 = 0x8000000000000000;
    in_stack_00000118 = pcVar17;
    in_stack_00000120 = pcVar29;
  }
  bVar7 = bStack00000000000001e2;
  uVar32 = uStack00000000000001e1;
  pcVar1 = in_stack_00000120;
  pcVar17 = in_stack_00000118;
  *(undefined8 *)(unaff_x29 + -0x68) = uVar23;
  uVar10 = CONCAT41(uStack00000000000001e4,uStack00000000000001e3);
  *(char *)(unaff_x29 + -0xb8) = cVar4;
  *(undefined1 *)(unaff_x29 + -0xb7) = uStack00000000000001e1;
  *(byte *)(unaff_x29 + -0xb6) = bStack00000000000001e2;
  if (in_stack_00000120 == (char *)0x0) {
    uStack00000000000001d0 = 0;
    uStack00000000000001d6 = 0;
    uStack00000000000001d8 = 0;
    uStack00000000000001de = 0;
    uStack00000000000001c8 = 1;
    in_stack_000001c0 = &UNK_10b205a90;
  }
  else {
    uVar18 = _malloc(in_stack_00000120);
    if (uVar18 == 0) {
      FUN_107c03c64(1,pcVar1);
      goto LAB_100265c24;
    }
    _memcpy(uVar18,pcVar17,pcVar1);
    uStack00000000000001ce = (undefined2)(uVar18 >> 0x30);
    uStack00000000000001c8 = (uint6)uVar18;
    uStack00000000000001d6 = (undefined2)((ulong)pcVar1 >> 0x30);
    uStack00000000000001d0 = SUB86(pcVar1,0);
    uStack00000000000001de = uStack00000000000001ce;
    if ((uVar18 & 1) == 0) {
      uStack00000000000001d8 = uStack00000000000001c8 | 1;
      in_stack_000001c0 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
    }
    else {
      in_stack_000001c0 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
      uStack00000000000001d8 = uStack00000000000001c8;
    }
  }
  uStack00000000000001ce = uStack00000000000001de;
  __ZN4http3uri4path12PathAndQuery11from_shared17hf111381ecd6a1fcaE
            (&stack0x00000198,&stack0x000001c0);
  uVar11 = uStack00000000000001a1;
  bVar8 = bStack00000000000001a0;
  lVar24 = _uStack0000000000000198;
  if (_uStack0000000000000198 == 0) {
    FUN_100265f8c(unaff_x29 + -0xb8);
    uVar32 = 2;
    puVar19 = (undefined1 *)_malloc(2);
  }
  else {
    in_stack_000001c0 = (char *)CONCAT26(uStack00000000000001a8,uStack00000000000001a2);
    uStack00000000000001c8 = uStack00000000000001aa;
    uStack00000000000001d6 = (undefined2)in_stack_000001b8;
    uStack00000000000001d8 = (uint6)((ulong)in_stack_000001b8 >> 0x10);
    uStack00000000000001ce = uStack00000000000001b0;
    uStack00000000000001d0 = uStack00000000000001b2;
    if (*(long *)(unaff_x29 + -0x88) != 0) {
      (**(code **)(*(long *)(unaff_x29 + -0x88) + 0x20))
                (unaff_x29 + -0x70,*(undefined8 *)(unaff_x29 + -0x80),
                 *(undefined8 *)(unaff_x29 + -0x78));
      cVar4 = *(char *)(unaff_x29 + -0xb8);
      uVar32 = *(undefined1 *)(unaff_x29 + -0xb7);
      bVar7 = *(byte *)(unaff_x29 + -0xb6);
    }
    *(long *)(unaff_x29 + -0x88) = lVar24;
    puVar16 = (undefined8 *)(unaff_x29 - 0xb8U | 3);
    *(byte *)(unaff_x29 + -0x80) = bVar8;
    *(undefined1 *)(unaff_x29 + -0x7f) = uVar11;
    in_stack_000000d8 = puVar16[5];
    in_stack_000000d0 = puVar16[4];
    in_stack_000000e8 = puVar16[7];
    in_stack_000000e0 = puVar16[6];
    in_stack_000000f0 = puVar16[8];
    uStack0000000000000188 = (undefined5)puVar16[9];
    uStack000000000000018d = (undefined3)*(undefined8 *)((long)puVar16 + 0x4d);
    in_stack_00000190 = (undefined5)((ulong)*(undefined8 *)((long)puVar16 + 0x4d) >> 0x18);
    in_stack_000000b8 = (char *)puVar16[1];
    in_stack_000000b0 = (char *)*puVar16;
    in_stack_000000c8 = puVar16[3];
    in_stack_000000c0 = puVar16[2];
    uStack00000000000000f8 = uStack0000000000000188;
    uStack00000000000000fd = uStack000000000000018d;
    in_stack_00000100 = in_stack_00000190;
    _uStack0000000000000140 = in_stack_000000b0;
    in_stack_00000148 = in_stack_000000b8;
    in_stack_00000150 = in_stack_000000c0;
    in_stack_00000158 = in_stack_000000c8;
    in_stack_00000160 = in_stack_000000d0;
    in_stack_00000168 = in_stack_000000d8;
    in_stack_00000170 = in_stack_000000e0;
    in_stack_00000178 = in_stack_000000e8;
    in_stack_00000180 = in_stack_000000f0;
    if (cVar4 == '\x04') {
      puVar19 = (undefined1 *)_malloc(2);
      bVar8 = bVar7;
    }
    else {
      uStack00000000000001eb = SUB85(in_stack_000000b8,0);
      in_stack_000001f0 = (undefined3)((ulong)in_stack_000000b8 >> 0x28);
      uStack00000000000001e3 = SUB81(in_stack_000000b0,0);
      uStack00000000000001e4 = (undefined4)((ulong)in_stack_000000b0 >> 8);
      uStack00000000000001e8 = (undefined3)((ulong)in_stack_000000b0 >> 0x28);
      cStack00000000000001e0 = cVar4;
      uStack00000000000001e1 = uVar32;
      bStack00000000000001e2 = bVar7;
      __ZN4http3uri3Uri10from_parts17h64d8ea6e2c9a88b3E(unaff_x29 + -0xb8,&stack0x000001e0);
      bVar7 = *(byte *)(unaff_x29 + -0xb8);
      bVar8 = *(byte *)(unaff_x29 + -0xb7);
      if (bVar7 != 3) {
        bVar9 = *(byte *)(unaff_x29 + -0xb6);
        in_stack_00000098 = (undefined4)uVar10;
        bStack000000000000009c = *(byte *)(unaff_x29 + -0xb1);
        uVar23 = *(undefined8 *)(unaff_x29 + -0xb0);
        uVar3 = *(undefined8 *)(unaff_x29 + -0xa8);
        uVar27 = *(undefined8 *)(unaff_x29 + -0xa0);
        in_stack_000000a8 = *(undefined8 *)(unaff_x29 + -0x90);
        in_stack_000000a0 = *(undefined8 *)(unaff_x29 + -0x98);
        in_stack_00000078 = *(undefined8 *)(unaff_x29 + -0x80);
        in_stack_00000070 = *(long *)(unaff_x29 + -0x88);
        in_stack_00000088 = *(undefined8 *)(unaff_x29 + -0x70);
        in_stack_00000080 = *(undefined8 *)(unaff_x29 + -0x78);
        in_stack_00000090 = *(undefined8 *)(unaff_x29 + -0x68);
        if ((in_stack_00000110 & 0x7fffffffffffffff) != 0) {
          _free(pcVar17);
          bVar5 = *unaff_x28;
        }
        if (1 < bVar5) {
          plVar28 = *(long **)(unaff_x28 + 8);
          (**(code **)(*plVar28 + 0x20))(plVar28 + 3,plVar28[1],plVar28[2]);
          _free(plVar28);
        }
        (**(code **)(*(long *)(unaff_x28 + 0x10) + 0x20))
                  (unaff_x28 + 0x28,*(undefined8 *)(unaff_x28 + 0x18),
                   *(undefined8 *)(unaff_x28 + 0x20));
        (**(code **)(*(long *)(unaff_x28 + 0x30) + 0x20))
                  (unaff_x28 + 0x48,*(undefined8 *)(unaff_x28 + 0x38),
                   *(undefined8 *)(unaff_x28 + 0x40));
        *unaff_x28 = bVar7;
        unaff_x28[1] = bVar8;
        unaff_x28[2] = bVar9;
        *(undefined4 *)(unaff_x28 + 3) = in_stack_00000098;
        unaff_x28[7] = bStack000000000000009c;
        *(undefined8 *)(unaff_x28 + 8) = uVar23;
        *(undefined8 *)(unaff_x28 + 0x10) = uVar3;
        *(undefined8 *)(unaff_x28 + 0x18) = uVar27;
        *(ulong *)(unaff_x28 + 0x28) = in_stack_000000a8;
        *(ulong *)(unaff_x28 + 0x20) = in_stack_000000a0;
        *(undefined8 *)(unaff_x28 + 0x38) = in_stack_00000078;
        *(long *)(unaff_x28 + 0x30) = in_stack_00000070;
        *(undefined8 *)(unaff_x28 + 0x48) = in_stack_00000088;
        *(undefined8 *)(unaff_x28 + 0x40) = in_stack_00000080;
        *(undefined8 *)(unaff_x28 + 0x50) = in_stack_00000090;
        *unaff_x20 = 0x8000000000000003;
        return;
      }
      uVar32 = 3;
      puVar19 = (undefined1 *)_malloc(2);
    }
  }
  if (puVar19 != (undefined1 *)0x0) {
    *puVar19 = uVar32;
    puVar19[1] = bVar8;
    unaff_x20[4] = in_stack_000000a8;
    unaff_x20[3] = in_stack_000000a0;
    *unaff_x20 = 0x8000000000000002;
    unaff_x20[1] = (ulong)puVar19;
    unaff_x20[2] = (ulong)&UNK_10b1f3108;
    if ((in_stack_00000110 & 0x7fffffffffffffff) != 0) {
      _free(pcVar17);
    }
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(1,2);
LAB_100265c24:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x100265c28);
  (*pcVar12)();
}

