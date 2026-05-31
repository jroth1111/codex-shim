
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1005ffeec(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined3 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  uint uVar16;
  ulong extraout_x1;
  undefined1 uVar17;
  undefined1 uVar18;
  long *plVar19;
  code *pcVar20;
  long unaff_x19;
  char *pcVar21;
  undefined1 *unaff_x20;
  undefined8 uVar22;
  long lVar23;
  undefined *unaff_x22;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 uVar29;
  long unaff_x27;
  char *unaff_x28;
  undefined8 *puVar30;
  undefined1 auVar31 [16];
  undefined8 in_stack_00000038;
  byte in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined1 *in_stack_00000050;
  long in_stack_00000068;
  undefined7 uVar32;
  byte bVar33;
  undefined6 uVar34;
  undefined1 uVar35;
  char *pcVar36;
  byte bVar37;
  undefined7 uVar38;
  byte in_stack_00000440;
  undefined7 in_stack_00000441;
  uint5 uVar39;
  char *in_stack_00001b00;
  byte in_stack_00001b08;
  undefined7 in_stack_00001b09;
  byte in_stack_00001b10;
  undefined7 in_stack_00001b11;
  byte in_stack_00001b18;
  undefined7 in_stack_00001b19;
  byte in_stack_00001b20;
  undefined7 in_stack_00001b21;
  byte in_stack_00001b28;
  undefined7 in_stack_00001b29;
  byte in_stack_00001b30;
  undefined7 in_stack_00001b31;
  byte in_stack_00001b38;
  undefined7 in_stack_00001b39;
  byte in_stack_00001b40;
  undefined7 in_stack_00001b41;
  undefined4 in_stack_00001b48;
  undefined4 in_stack_00001b4c;
  undefined1 in_stack_00001b50;
  undefined2 in_stack_00001b51;
  uint5 in_stack_00001b53;
  undefined1 in_stack_00001b58;
  undefined7 in_stack_00001b59;
  undefined1 in_stack_00001b60;
  undefined7 in_stack_00001b61;
  undefined1 in_stack_00001b68;
  undefined7 in_stack_00001b69;
  undefined1 in_stack_00001b70;
  undefined7 in_stack_00001b71;
  undefined1 in_stack_00001b78;
  undefined7 in_stack_00001b79;
  undefined8 in_stack_00001b80;
  char *pcVar40;
  char *in_stack_00002110;
  byte bVar41;
  byte in_stack_00002118;
  undefined7 in_stack_00002119;
  byte bVar42;
  byte in_stack_00002120;
  undefined7 in_stack_00002121;
  undefined1 *in_stack_00002370;
  undefined *in_stack_00002378;
  undefined8 in_stack_00002380;
  long in_stack_000023b0;
  undefined8 in_stack_000023b8;
  undefined8 in_stack_000023c0;
  uint7 in_stack_000023f0;
  undefined1 in_stack_000023f7;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00002110,s_failed_to_resolve_____server_req_108ac25e8,&stack0x00000f90);
  if (((ulong)in_stack_000023f0 & 3) == 1) {
    puVar27 = (undefined8 *)(CONCAT17(in_stack_000023f7,in_stack_000023f0) + -1);
    uVar29 = *puVar27;
    puVar30 = *(undefined8 **)(CONCAT17(in_stack_000023f7,in_stack_000023f0) + 7);
    pcVar20 = (code *)*puVar30;
    if (pcVar20 != (code *)0x0) {
      (*pcVar20)(uVar29);
    }
    if (puVar30[1] != 0) {
      _free(uVar29);
    }
    _free(puVar27);
  }
  uVar34 = (undefined6)in_stack_00002121;
  uVar35 = (undefined1)((uint7)in_stack_00002121 >> 0x30);
  uVar32 = SUB87((char *)CONCAT71(in_stack_00002119,in_stack_00002118),0);
  uVar18 = (undefined1)((uint7)in_stack_00002119 >> 0x30);
  *unaff_x20 = 1;
  if (in_stack_00002110 != (char *)0x8000000000000001) {
    uVar29 = CONCAT17(uVar18,uVar32);
    if ((*(char *)(unaff_x27 + 0xe9a) == '\x01') && (((ulong)unaff_x22 & 0x7fffffffffffffff) != 0))
    {
      _free(in_stack_00000038);
      *(undefined1 *)(unaff_x27 + 0xe9a) = 0;
    }
    else {
      *(undefined1 *)(unaff_x27 + 0xe9a) = 0;
    }
    bVar33 = in_stack_00002120;
    pcVar36 = (char *)CONCAT71(in_stack_00002119,in_stack_00002118);
    bVar37 = in_stack_00002120;
    uVar38 = in_stack_00002121;
    pcVar40 = in_stack_00002110;
    bVar41 = in_stack_00002118;
    bVar42 = in_stack_00002120;
    if (in_stack_00002110 != (char *)0x8000000000000000) {
      in_stack_00000441 = (undefined7)(CONCAT17(uVar35,CONCAT61(uVar34,in_stack_00002120)) >> 8);
      uVar38 = (undefined7)((ulong)uVar29 >> 8);
      **(undefined1 **)(unaff_x19 + 0x5c98) = 1;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62c1c8 - 1 < 2 ||
           ((bRam000000010b62c1c8 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                                ), cVar10 != '\0')))) &&
          (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                              ), (uVar14 & 1) != 0)))) {
        in_stack_00002370 = &stack0x00000690;
        in_stack_00002378 = &UNK_10b208fd0;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                   ,&stack0x00000f90);
        lVar24 = 
        ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
        ;
        if ((*unaff_x28 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          bVar41 = (byte)*(undefined8 *)
                          (
                          ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                          + 0x20);
          in_stack_00002119 =
               (undefined7)
               ((ulong)*(undefined8 *)
                        (
                        ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                        + 0x20) >> 8);
          bVar42 = (byte)*(undefined8 *)
                          (
                          ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                          + 0x28);
          in_stack_00002121 =
               (undefined7)
               ((ulong)*(undefined8 *)
                        (
                        ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                        + 0x28) >> 8);
          puVar15 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar15 = &UNK_10b3c24c8;
          }
          unaff_x22 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar15 + 0x18))(unaff_x22,&stack0x00002110);
          pcVar40 = (char *)0x2;
          if (iVar12 != 0) {
            lVar13 = *(long *)(lVar24 + 0x60);
            lVar23 = *(long *)(lVar24 + 0x50);
            in_stack_00001b00 = (char *)0x1;
            if (lVar23 == 0) {
              in_stack_00001b00 = (char *)0x2;
            }
            in_stack_00001b48 = *(undefined4 *)(lVar24 + 8);
            in_stack_00001b4c = *(undefined4 *)(lVar24 + 0xc);
            uVar32 = SUB87(&stack0x000023f0,0);
            uVar18 = (undefined1)((ulong)&stack0x000023f0 >> 0x38);
            uVar34 = 0x1061c20;
            uVar35 = 0;
            in_stack_00001b18 = 1;
            if (lVar13 == 0) {
              in_stack_00001b18 = 2;
            }
            in_stack_00001b30 = 2;
            in_stack_00001b31 = 0;
            in_stack_00001b50 = 0x4f;
            in_stack_00001b51 = 0xb39f;
            in_stack_00001b53 = 0x108;
            in_stack_00001b58 = SUB81(&stack0x000002d0,0);
            in_stack_00001b59 = (undefined7)((ulong)&stack0x000002d0 >> 8);
            in_stack_00001b08 = (byte)lVar23;
            in_stack_00001b09 = (undefined7)((ulong)lVar23 >> 8);
            in_stack_00001b10 = (byte)*(undefined8 *)(lVar24 + 0x58);
            in_stack_00001b11 = (undefined7)((ulong)*(undefined8 *)(lVar24 + 0x58) >> 8);
            in_stack_00001b19 = 0;
            in_stack_00001b20 = (byte)lVar13;
            in_stack_00001b21 = (undefined7)((ulong)lVar13 >> 8);
            in_stack_00001b28 = (byte)*(undefined8 *)(lVar24 + 0x68);
            in_stack_00001b29 = (undefined7)((ulong)*(undefined8 *)(lVar24 + 0x68) >> 8);
            (**(code **)(puVar15 + 0x20))(unaff_x22,&stack0x00001b00);
            bVar33 = 0x98;
            in_stack_00001b38 = bVar41;
            in_stack_00001b39 = in_stack_00002119;
            in_stack_00001b40 = bVar42;
            in_stack_00001b41 = in_stack_00002121;
          }
        }
      }
      else {
        lVar24 = 
        ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
        ;
        if ((*unaff_x28 == '\0') && (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar22 = *(undefined8 *)
                    (
                    ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                    + 0x20);
          uVar6 = *(undefined8 *)
                   (
                   ___ZN10codex_exec21handle_server_request28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17f213b3f650f449E
                   + 0x28);
          puVar15 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar15 = &UNK_10b3c24c8;
          }
          unaff_x22 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar15 + 0x18))(unaff_x22,&stack0x00001e30);
          if (iVar12 != 0) {
            in_stack_00001b38 = (byte)uVar22;
            in_stack_00001b39 = (undefined7)((ulong)uVar22 >> 8);
            in_stack_00001b30 = 2;
            in_stack_00001b31 = 0;
            in_stack_00001b40 = (byte)uVar6;
            in_stack_00001b41 = (undefined7)((ulong)uVar6 >> 8);
            lVar13 = *(long *)(lVar24 + 0x60);
            lVar23 = *(long *)(lVar24 + 0x50);
            in_stack_00001b00 = (char *)0x1;
            if (lVar23 == 0) {
              in_stack_00001b00 = (char *)0x2;
            }
            in_stack_00001b48 = *(undefined4 *)(lVar24 + 8);
            in_stack_00001b4c = *(undefined4 *)(lVar24 + 0xc);
            uVar32 = SUB87(&stack0x00000f90,0);
            uVar18 = (undefined1)((ulong)&stack0x00000f90 >> 0x38);
            bVar33 = 1;
            pcVar40 = &stack0x000002d0;
            bVar41 = 0x98;
            in_stack_00002119 = 0x1061c20;
            in_stack_00001b18 = 1;
            if (lVar13 == 0) {
              in_stack_00001b18 = 2;
            }
            in_stack_00001b50 = 0x4f;
            in_stack_00001b51 = 0xb39f;
            in_stack_00001b53 = 0x108;
            in_stack_00001b58 = SUB81(&stack0x00002110,0);
            in_stack_00001b59 = (undefined7)((ulong)&stack0x00002110 >> 8);
            in_stack_00001b08 = (byte)lVar23;
            in_stack_00001b09 = (undefined7)((ulong)lVar23 >> 8);
            in_stack_00001b10 = (byte)*(undefined8 *)(lVar24 + 0x58);
            in_stack_00001b11 = (undefined7)((ulong)*(undefined8 *)(lVar24 + 0x58) >> 8);
            in_stack_00001b19 = 0;
            in_stack_00001b20 = (byte)lVar13;
            in_stack_00001b21 = (undefined7)((ulong)lVar13 >> 8);
            in_stack_00001b28 = (byte)*(undefined8 *)(lVar24 + 0x68);
            in_stack_00001b29 = (undefined7)((ulong)*(undefined8 *)(lVar24 + 0x68) >> 8);
            (**(code **)(puVar15 + 0x20))(unaff_x22,&stack0x00001b00);
          }
        }
      }
      pcVar36 = in_stack_00002110;
      bVar37 = in_stack_00002118;
      in_stack_00000440 = in_stack_00002120;
      if (in_stack_00002110 != (char *)0x0) {
        _free(uVar29);
      }
    }
    if (*(long *)(unaff_x19 + 0x5ca0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x5ca8));
    }
    uVar14 = *(long *)(unaff_x19 + 0x5af8) + 0x8000000000000001U &
             *(long *)(unaff_x19 + 0x5af8) >> 0x3f;
    if (uVar14 == 6) {
      if ((*(ulong *)(unaff_x19 + 0x5b18) & 0x7fffffffffffffff) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x5b20));
      }
    }
    else if (uVar14 == 3) {
      if (*(long *)(unaff_x19 + 0x5b00) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x5b08));
      }
      if ((*(long *)(unaff_x19 + 0x5b30) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x5b30) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x5b38));
      }
      if (*(long *)(unaff_x19 + 0x5b18) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x5b20));
      }
      FUN_100e77474(unaff_x19 + 0x5b48);
    }
    *(undefined1 *)(unaff_x19 + 0x5cca) = 0;
    *(undefined8 *)(unaff_x19 + 0x5cc2) = 0;
    *(undefined8 *)(unaff_x19 + 0x5cba) = 0;
    *in_stack_00000050 = 1;
    FUN_100e4f830();
LAB_1005fe618:
    pbVar3 = (byte *)(unaff_x27 + 0xb15);
    *(byte *)(unaff_x27 + 0xb15) = *(byte *)(unaff_x27 + 0xb14) ^ 1;
    *(long *)(unaff_x19 + 0x5958) = unaff_x19 + 0x5110;
    *(undefined1 *)(unaff_x27 + 0xb49) = 0;
    lVar24 = unaff_x19 + 0x5958;
    *(long *)(unaff_x19 + 0x5970) = unaff_x19 + 0x4f60;
    *(undefined1 *)(unaff_x27 + 0xb71) = 0;
    *(byte **)(unaff_x19 + 0x5948) = pbVar3;
    *(long *)(unaff_x19 + 0x5950) = lVar24;
    pbVar1 = (byte *)(unaff_x27 + 0xb29);
    lVar13 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    if (*(char *)(lVar13 + 0x48) != '\x01') {
      if (*(char *)(lVar13 + 0x48) == '\x02') {
        FUN_107c05e20(&UNK_10b4cce20);
        goto LAB_100601058;
      }
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar13,&DAT_100c35d48);
      *(undefined1 *)(lVar13 + 0x48) = 1;
    }
    if (*(char *)(lVar13 + 0x44) == '\x01' && *(char *)(lVar13 + 0x45) == '\0') {
      FUN_10610bbb4(*(undefined8 *)*in_stack_00000048,((undefined8 *)*in_stack_00000048)[1]);
LAB_100600dac:
      uVar18 = 0xb;
      goto LAB_1006004cc;
    }
    if ((*(uint *)(lVar13 + 0x38) & 1) == 0) {
      uVar11 = FUN_1060fcce0();
      uVar14 = extraout_x1;
    }
    else {
      uVar11 = *(uint *)(lVar13 + 0x3c);
      uVar14 = (ulong)*(uint *)(lVar13 + 0x40);
    }
    uVar11 = uVar11 ^ uVar11 << 0x11;
    uVar16 = (uint)uVar14;
    uVar11 = (uint)(uVar14 >> 0x10) & 0xffff ^ uVar11 >> 7 ^ uVar16 ^ uVar11;
    *(undefined4 *)(lVar13 + 0x38) = 1;
    *(uint *)(lVar13 + 0x3c) = uVar16;
    *(uint *)(lVar13 + 0x40) = uVar11;
    bVar9 = *pbVar3;
    if (-1 < (int)(uVar11 + uVar16)) {
      bVar7 = bVar9 & 1;
      if ((bVar9 & 1) == 0) {
        bVar9 = func_0x000100fd3c04(lVar24,*in_stack_00000048);
        if (bVar9 == 2) {
          bVar9 = *pbVar3;
          goto LAB_1005fe738;
        }
LAB_1005fe7c0:
        *pbVar3 = *pbVar3 | 1;
        pcVar21 = (char *)0x8000000000000045;
        in_stack_00000040 = bVar9;
        goto LAB_1005fe864;
      }
LAB_1005fe738:
      if ((bVar9 >> 1 & 1) != 0) goto LAB_1005fe7d8;
      bVar9 = *(byte *)(unaff_x19 + 0x5990);
      if (bVar9 < 2) {
        if (bVar9 != 0) goto LAB_10060100c;
        *(long *)(unaff_x19 + 0x5978) = *(long *)(unaff_x19 + 0x5970) + 8;
        *(undefined1 *)(unaff_x19 + 0x5988) = 0;
      }
      else if (bVar9 != 3) goto LAB_100600ffc;
      FUN_100fd1840(&stack0x00001b00,unaff_x19 + 0x5978,*in_stack_00000048);
      uVar17 = 3;
      if (in_stack_00001b00 != (char *)0x8000000000000045) {
        uVar17 = 1;
      }
      *(undefined1 *)(unaff_x19 + 0x5990) = uVar17;
      if (in_stack_00001b00 != (char *)0x8000000000000045) goto LAB_1005fe820;
      goto LAB_100600dac;
    }
    bVar7 = bVar9 & 2;
    if ((bVar9 >> 1 & 1) == 0) {
      bVar9 = *(byte *)(unaff_x19 + 0x5990);
      if (1 < bVar9) {
        if (bVar9 == 3) goto LAB_1005fe768;
LAB_100600ffc:
        FUN_107c05cc4(&UNK_10b230988);
        goto LAB_100601058;
      }
      if (bVar9 != 0) {
LAB_10060100c:
        FUN_107c05cc0(&UNK_10b230988);
        goto LAB_100601058;
      }
      *(long *)(unaff_x19 + 0x5978) = *(long *)(unaff_x19 + 0x5970) + 8;
      *(undefined1 *)(unaff_x19 + 0x5988) = 0;
LAB_1005fe768:
      FUN_100fd1840(&stack0x00001b00,unaff_x19 + 0x5978,*in_stack_00000048);
      uVar17 = 3;
      if (in_stack_00001b00 != (char *)0x8000000000000045) {
        uVar17 = 1;
      }
      *(undefined1 *)(unaff_x19 + 0x5990) = uVar17;
      if (in_stack_00001b00 == (char *)0x8000000000000045) {
        bVar9 = *pbVar3;
        goto LAB_1005fe7a0;
      }
LAB_1005fe820:
      _memcpy(&stack0x00001891,&stack0x00001b09,0x1ef);
      *pbVar3 = *pbVar3 | 2;
      pcVar21 = in_stack_00001b00;
      in_stack_00000040 = in_stack_00001b08;
      if (in_stack_00001b00 == (char *)0x8000000000000048) goto LAB_100600dac;
    }
    else {
LAB_1005fe7a0:
      if ((bVar9 & 1) == 0) {
        bVar9 = func_0x000100fd3c04(lVar24,*in_stack_00000048);
        if (bVar9 != 2) goto LAB_1005fe7c0;
        goto LAB_100600dac;
      }
LAB_1005fe7d8:
      pcVar21 = (char *)0x8000000000000047;
      if (bVar7 == 0) goto LAB_100600dac;
    }
LAB_1005fe864:
    *(char **)(unaff_x19 + 0x5340) = pcVar21;
    *(byte *)(unaff_x27 + 0x529) = in_stack_00000040;
    _memcpy(unaff_x19 + 0x5349,&stack0x00001891,0x1ef);
    unaff_x22 = (undefined *)0x8000000000000044;
    uVar39 = (uint5)((uint7)in_stack_00001b59 >> 0x10);
    if (pcVar21 < (char *)0x8000000000000045) {
      _memcpy(unaff_x19 + 0x5148,unaff_x19 + 0x5340,0x1f8);
      if (*(long *)(unaff_x19 + 0x5148) == -0x7fffffffffffffbc) {
LAB_1005fcc6c:
        *(undefined1 *)(unaff_x27 + 0xb1f) = 0;
        *(undefined8 *)(unaff_x19 + 0x5990) = *(undefined8 *)(unaff_x19 + 0x4f70);
        *(undefined8 *)(unaff_x19 + 0x5988) = *(undefined8 *)(unaff_x19 + 0x4f68);
        *(uint *)(unaff_x19 + 0x5997) =
             CONCAT22(in_stack_00001b51,
                      CONCAT11(in_stack_00001b50,
                               (char)((ulong)*(undefined8 *)(unaff_x19 + 0x4f70) >> 0x38)));
        *(ulong *)(unaff_x19 + 0x5970) = CONCAT71(in_stack_00001b29,in_stack_00001b28);
        *(ulong *)(unaff_x19 + 0x5968) = CONCAT71(in_stack_00001b21,in_stack_00001b20);
        *(undefined8 *)(unaff_x19 + 0x5980) = *(undefined8 *)(unaff_x19 + 0x4f60);
        *(ulong *)(unaff_x19 + 0x5978) = CONCAT71(in_stack_00001b31,in_stack_00001b30);
        *(ulong *)(unaff_x19 + 0x5950) = CONCAT71(in_stack_00001b09,in_stack_00001b08);
        *(char **)(unaff_x19 + 0x5948) = in_stack_00001b00;
        *(ulong *)(unaff_x19 + 0x5960) = CONCAT71(in_stack_00001b19,in_stack_00001b18);
        *(ulong *)(unaff_x19 + 0x5958) = CONCAT71(in_stack_00001b11,in_stack_00001b10);
        *(undefined1 *)(unaff_x27 + 0xb7c) = 0;
        auVar31 = FUN_100b7d570(unaff_x19 + 0x5948,in_stack_00000048);
        uVar14 = auVar31._8_8_;
        if ((auVar31._0_8_ & 1) != 0) {
          uVar18 = 0x10;
          goto LAB_1006004cc;
        }
        FUN_100cbfd30(unaff_x19 + 0x5948);
        if (uVar14 != 0) {
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              ((bRam000000010b62c168 - 1 < 2 ||
               ((bRam000000010b62c168 != 0 &&
                (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb3ac559736a2bb65E
                                    ), cVar10 != '\0')))))) &&
             (uVar25 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb3ac559736a2bb65E
                                 ), (uVar25 & 1) != 0)) {
            FUN_100601bf4(&stack0x00001b00);
          }
          else {
            uVar29 = 
            ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb3ac559736a2bb65E
            ;
            if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
               (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
              puVar15 = puRam000000010b634c20;
              if (lRam000000010b66fd20 != 2) {
                puVar15 = &UNK_10b3c24c8;
              }
              puVar5 = puRam000000010b634c18;
              if (lRam000000010b66fd20 != 2) {
                puVar5 = &UNK_109adfc03;
              }
              iVar12 = (**(code **)(puVar15 + 0x18))(puVar5,&stack0x00001ae8);
              if (iVar12 != 0) {
                __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                          (uVar29,puVar5,puVar15,&stack0x00002110,&stack0x00001b00);
              }
            }
          }
          if ((uVar14 & 3) == 1) {
            uVar29 = *(undefined8 *)(uVar14 - 1);
            puVar27 = *(undefined8 **)(uVar14 + 7);
            pcVar20 = (code *)*puVar27;
            if (pcVar20 != (code *)0x0) {
              (*pcVar20)(uVar29);
            }
            if (puVar27[1] != 0) {
              _free(uVar29);
            }
            _free((undefined8 *)(uVar14 - 1));
          }
        }
        (**(code **)(*(long *)(unaff_x19 + 0x4ec0) + 0x30))(*(undefined8 *)(unaff_x19 + 0x4eb8));
        if ((*(byte *)(unaff_x27 + 0xb13) & 1) != 0) {
          __ZN3std7process4exit17h656c4fcb5bd11385E(1);
LAB_100601058:
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10060105c);
          (*pcVar20)();
        }
        if (*(long *)(unaff_x19 + 0x5130) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x5138));
        }
        if (*(long *)(unaff_x19 + 0x5118) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x5120));
        }
        FUN_100e53f2c(unaff_x19 + 0x5110);
        *(undefined1 *)(unaff_x27 + 0xb23) = 0;
        FUN_100e26e4c(unaff_x19 + 0x4fa0);
        if (*(long *)(unaff_x19 + 0x4f88) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x4f90));
        }
        *(undefined1 *)(unaff_x27 + 0xb24) = 0;
        *(undefined1 *)(unaff_x27 + 0xb1f) = 0;
        if (*(long *)(unaff_x19 + 0x4f40) != 0) {
          _free(*(undefined8 *)(unaff_x19 + 0x4f48));
        }
        *(undefined2 *)(unaff_x27 + 0xb19) = 0;
        *(undefined1 *)(unaff_x27 + 0xb1b) = 0;
        if (((*(byte *)(unaff_x27 + 0xb17) & 1) != 0) && (*(long *)(unaff_x19 + 0x4ec8) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x4ed0));
        }
        *(undefined1 *)(unaff_x27 + 0xb17) = 0;
        uVar29 = *(undefined8 *)(unaff_x19 + 0x4eb8);
        puVar27 = *(undefined8 **)(unaff_x19 + 0x4ec0);
        pcVar20 = (code *)*puVar27;
        if (pcVar20 != (code *)0x0) {
          (*pcVar20)(uVar29);
        }
        if (puVar27[1] != 0) {
          _free(uVar29);
        }
        *(undefined1 *)(unaff_x27 + 0xb1c) = 0;
        if ((((*(byte *)(unaff_x27 + 0xb18) & 1) != 0) &&
            (*(long *)(unaff_x19 + 0x4ea0) != -0x8000000000000000)) &&
           (*(long *)(unaff_x19 + 0x4ea0) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x4ea8));
        }
        *(undefined1 *)(unaff_x27 + 0xb18) = 0;
        if ((*(long *)(unaff_x19 + 0x4e88) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x4e88) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x4e90));
        }
        if ((*(long *)(unaff_x19 + 0x4e70) != -0x8000000000000000) &&
           (*(long *)(unaff_x19 + 0x4e70) != 0)) {
          _free(*(undefined8 *)(unaff_x19 + 0x4e78));
        }
        *(undefined1 *)(unaff_x27 + 0xb1d) = 0;
        FUN_100dddd8c(unaff_x19 + 0x4e48);
        FUN_100de93d0(unaff_x19 + 0x2900);
        FUN_100e368e0(unaff_x19 + 0x2898);
        plVar19 = *(long **)(unaff_x19 + 0x2890);
        if (plVar19 != (long *)0x0) {
          lVar24 = *plVar19;
          *plVar19 = lVar24 + -1;
          LORelease();
          if (lVar24 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x19 + 0x2890);
          }
        }
        unaff_x22 = (undefined *)0x0;
        *(undefined1 *)(unaff_x27 + 0xb1e) = 0;
        uVar29 = 0;
        *(undefined1 *)(unaff_x27 + 0xb09) = 1;
        goto LAB_1006004d4;
      }
      _memcpy(unaff_x19 + 0x5538,unaff_x19 + 0x5340,0x1f8);
      lVar24 = *(ulong *)(unaff_x19 + 0x5538) + 0x7fffffffffffffbf;
      if (*(ulong *)(unaff_x19 + 0x5538) < 0x8000000000000041) {
        lVar24 = 1;
      }
      if (lVar24 == 0) {
        _memcpy(pbVar1,unaff_x27 + 0x529,0x1a0);
        *(long *)(unaff_x19 + 0x5ae8) = unaff_x19 + 0x4f60;
        *(long *)(unaff_x19 + 0x5af0) = unaff_x19 + 0x5932;
        *(undefined1 *)(unaff_x27 + 0xe99) = 0;
        *(undefined1 *)(unaff_x27 + 0xe9a) = 0;
        *(undefined8 *)(unaff_x27 + 0xe9b) = 0x101010101010101;
        *(undefined8 *)(unaff_x27 + 0xea3) = 0x101010101010101;
        *(undefined1 *)(unaff_x27 + 0xeab) = 1;
        _memcpy(unaff_x19 + 0x5af8,pbVar1,0x1a0);
        *(long *)(unaff_x19 + 0x5c98) = unaff_x19 + 0x5932;
        __ZN10codex_exec26server_request_method_name17h491c5e07b8965381E
                  (unaff_x19 + 0x5ca0,unaff_x19 + 0x5af8);
                    /* WARNING: Could not recover jumptable at 0x0001005ff0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        auVar31 = (*(code *)(&UNK_1005ff0dc +
                            (ulong)*(ushort *)
                                    (&UNK_108c9aac6 +
                                    (*(long *)(unaff_x19 + 0x5af8) + 0x8000000000000001U &
                                    *(long *)(unaff_x19 + 0x5af8) >> 0x3f) * 2) * 4))();
        return auVar31;
      }
      if (lVar24 == 2) {
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00002110,s_3in_process_app_server_event_str_108afb9ae,&stack0x00001b00);
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
            ((bRam000000010b62c0f0 - 1 < 2 ||
             ((bRam000000010b62c0f0 != 0 &&
              (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                                  ), cVar10 != '\0')))))) &&
           (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                               ), (uVar14 & 1) != 0)) {
          pcVar36 = &stack0x00001e30;
          bVar37 = 0xd0;
          uVar38 = 0x10b208f;
          in_stack_00001b18 =
               (byte)(
                     ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                     + 0x30);
          in_stack_00001b19 =
               (undefined7)
               ((ulong)(
                       ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                       + 0x30) >> 8);
          FUN_100602628(&stack0x00001b00);
        }
        else {
          lVar24 = 
          ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (unaff_x22 = (undefined *)0x8000000000000044,
             1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            unaff_x22 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              unaff_x22 = &UNK_10b3c24c8;
            }
            puVar15 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar15 = &UNK_109adfc03;
            }
            iVar12 = (**(code **)(unaff_x22 + 0x18))(puVar15,&stack0x00001ad0);
            if (iVar12 != 0) {
              pcVar36 = s__108b1bd74;
              bVar37 = (byte)&stack0x00001e30;
              uVar38 = (undefined7)((ulong)&stack0x00001e30 >> 8);
              uVar32 = SUB87(&stack0x00000430,0);
              uVar18 = (undefined1)((ulong)&stack0x00000430 >> 0x38);
              bVar33 = 0xd0;
              uVar34 = 0x10b208f;
              uVar35 = 0;
              in_stack_00001b18 =
                   (byte)(
                         ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                         + 0x30);
              in_stack_00001b19 =
                   (undefined7)
                   ((ulong)(
                           ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                           + 0x30) >> 8);
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar24,puVar15,unaff_x22,&stack0x00000f90,&stack0x00001b00);
            }
          }
        }
        (**(code **)(*(long *)(unaff_x19 + 0x4ec0) + 0x28))
                  (*(undefined8 *)(unaff_x19 + 0x4eb8),&stack0x00001b00);
        in_stack_00001b00 = pcVar40;
        in_stack_00001b08 = bVar41;
        in_stack_00001b09 = in_stack_00002119;
        in_stack_00001b10 = bVar42;
        in_stack_00001b11 = in_stack_00002121;
      }
      else {
        *(undefined1 *)(unaff_x27 + 0xb16) = 1;
        unaff_x22 = (undefined *)(unaff_x19 + 0x5730);
        _memcpy(unaff_x22,unaff_x19 + 0x5340,0x1f8);
        uVar25 = *(ulong *)(unaff_x19 + 0x5730);
        uVar14 = uVar25 ^ 0x8000000000000000;
        if (-1 < (long)uVar25) {
          uVar14 = 1;
        }
        if (uVar14 == 0) {
          if ((((*(long *)(unaff_x19 + 0x5780) == *(long *)(unaff_x19 + 0x5140)) &&
               (iVar12 = _memcmp(*(undefined8 *)(unaff_x19 + 0x5778),
                                 *(undefined8 *)(unaff_x19 + 0x5138)), iVar12 == 0)) &&
              (*(long *)(unaff_x19 + 0x5798) == *(long *)(unaff_x19 + 0x5128))) &&
             ((iVar12 = _memcmp(*(undefined8 *)(unaff_x19 + 0x5790),
                                *(undefined8 *)(unaff_x19 + 0x5120)), iVar12 == 0 &&
              ((*(byte *)(unaff_x27 + 0x981) & 1) == 0)))) goto LAB_100600540;
        }
        else if (((uVar14 == 0xe) &&
                 ((*(long *)(unaff_x19 + 0x57e8) == *(long *)(unaff_x19 + 0x5140) &&
                  (iVar12 = _memcmp(*(undefined8 *)(unaff_x19 + 0x57e0),
                                    *(undefined8 *)(unaff_x19 + 0x5138)), iVar12 == 0)))) &&
                ((*(long *)(unaff_x19 + 0x5778) == *(long *)(unaff_x19 + 0x5128) &&
                 ((iVar12 = _memcmp(*(undefined8 *)(unaff_x19 + 0x5770),
                                    *(undefined8 *)(unaff_x19 + 0x5120)), iVar12 == 0 &&
                  (*(byte *)(unaff_x27 + 0x9b2) - 1 < 2)))))) {
LAB_100600540:
          *(undefined1 *)(unaff_x27 + 0xb13) = 1;
        }
        bVar9 = *(byte *)(unaff_x27 + 0x12);
        lVar24 = unaff_x19 + 0x4f60;
        *(long *)(unaff_x19 + 0x6260) = lVar24;
        plVar19 = (long *)(unaff_x19 + 0x4f58);
        *(long **)(unaff_x19 + 0x6268) = plVar19;
        *(undefined **)(unaff_x19 + 0x6270) = unaff_x22;
        *(undefined1 *)(in_stack_00000068 + 0x318) = 0;
        *(byte *)(in_stack_00000068 + 0x319) = bVar9;
        if ((((bVar9 & 1) == 0) && (uVar25 == 0x800000000000000e)) &&
           (*(long *)(unaff_x19 + 0x5790) == 0)) {
          *(long *)(unaff_x19 + 0x6258) = unaff_x19 + 0x5738;
          lVar28 = *plVar19;
          *plVar19 = lVar28 + 1;
          uVar29 = *(undefined8 *)(*(long *)(unaff_x19 + 0x6258) + 0xa8);
          lVar13 = *(long *)(*(long *)(unaff_x19 + 0x6258) + 0xb0);
          lVar23 = 1;
          if ((lVar13 != 0) && (lVar23 = _malloc(lVar13), lVar23 == 0)) {
            FUN_107c03c64(1,lVar13);
            goto LAB_100601058;
          }
          _memcpy(lVar23,uVar29,lVar13);
          *(undefined8 *)(unaff_x19 + 0x5948) = 0x8000000000000018;
          *(long *)(unaff_x19 + 0x5950) = lVar13;
          *(long *)(unaff_x19 + 0x5958) = lVar23;
          *(long *)(unaff_x19 + 0x5960) = lVar13;
          *(undefined1 *)(unaff_x27 + 0xb49) = 1;
          *(undefined8 *)(unaff_x19 + 0x5970) = 0x8000000000000000;
          *(long *)(unaff_x19 + 0x5978) = lVar28;
          *(long *)(unaff_x19 + 0x5b08) = lVar24;
          *(undefined **)(unaff_x19 + 0x5b10) = &UNK_108ca74eb;
          *(undefined8 *)(unaff_x19 + 0x5b18) = 0xb;
          unaff_x22 = (undefined *)(in_stack_00000068 + 0x2f0);
          *(undefined1 *)(in_stack_00000068 + 0x2f0) = 0;
          *(undefined **)(unaff_x19 + 0x5b20) = &UNK_108ca74eb;
          *(undefined8 *)(unaff_x19 + 0x5b28) = 0xb;
          _memcpy(unaff_x19 + 0x5b30,pbVar1,0x1c0);
          *(long *)(unaff_x19 + 0x5cf0) = lVar24;
          *(undefined1 *)(in_stack_00000068 + 0x2e8) = 0;
          FUN_100b76b88(&stack0x00001b00,unaff_x19 + 0x5b30,in_stack_00000048);
          if (in_stack_00001b00 == (char *)0x8000000000000001) {
            *unaff_x22 = 3;
            *(undefined1 *)(in_stack_00000068 + 0x318) = 3;
            uVar18 = 0xe;
            goto LAB_1006004cc;
          }
          uVar8 = CONCAT21(in_stack_00001b51,in_stack_00001b50);
          uVar22 = CONCAT44(in_stack_00001b4c,in_stack_00001b48);
          uVar29 = CONCAT71(in_stack_00001b19,in_stack_00001b18);
          uVar34 = (undefined6)in_stack_00001b11;
          uVar35 = (undefined1)((uint7)in_stack_00001b11 >> 0x30);
          uVar32 = (undefined7)CONCAT71(in_stack_00001b09,in_stack_00001b08);
          uVar18 = (undefined1)((uint7)in_stack_00001b09 >> 0x30);
          _memcpy(&stack0x00000430,&stack0x00001b88,0x170);
          if (*(char *)(in_stack_00000068 + 0x2e8) == '\x03') {
            FUN_100cbc1e8(unaff_x19 + 0x5ed0);
            if (*(long *)(unaff_x19 + 0x5eb8) != 0) {
              _free(*(undefined8 *)(unaff_x19 + 0x5ec0));
            }
            *(undefined2 *)(in_stack_00000068 + 0x2e9) = 0;
            if (in_stack_00001b00 != (char *)0x8000000000000000) goto LAB_1006007e0;
LAB_100600714:
            in_stack_00001b4c = (undefined4)(in_stack_00001b53 >> 8);
            in_stack_00001b51 = (undefined2)in_stack_00001b59;
            pcVar21 = (char *)CONCAT17(uVar18,uVar32);
            in_stack_00001b09 =
                 (undefined7)(CONCAT17(uVar35,CONCAT61(uVar34,in_stack_00001b10)) >> 8);
            if (*(long *)(unaff_x19 + 0x5b28) == 0) {
              iVar12 = __ZN81__LT_codex_app_server_client__TypedRequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h179c8e79187c3c28E
                                 (&stack0x00001b00,&stack0x00002090);
              if (iVar12 != 0) {
                FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x0000247f,&UNK_10b235000,&UNK_10b2346c0);
                goto LAB_100601058;
              }
              in_stack_00002378 = (undefined *)0x1;
              in_stack_00002370 = (undefined1 *)0x0;
              uVar29 = 0;
            }
            else {
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x00002370,s___108ac1f1a,&stack0x00002090);
              uVar29 = in_stack_00002380;
            }
            FUN_100e15cd8(&stack0x00001b00);
            uVar34 = (undefined6)((ulong)in_stack_00002378 >> 8);
            uVar35 = (undefined1)((ulong)in_stack_00002378 >> 0x38);
            uVar32 = SUB87(in_stack_00002370,0);
            uVar18 = (undefined1)((ulong)in_stack_00002370 >> 0x38);
            bVar33 = (byte)in_stack_00002378;
            in_stack_00001b08 = in_stack_00001b10;
            in_stack_00001b10 = in_stack_00001b18;
            in_stack_00001b11 = in_stack_00001b19;
            in_stack_00001b18 = in_stack_00001b20;
            in_stack_00001b19 = in_stack_00001b21;
            in_stack_00001b20 = in_stack_00001b28;
            in_stack_00001b21 = in_stack_00001b29;
            in_stack_00001b28 = in_stack_00001b30;
            in_stack_00001b29 = in_stack_00001b31;
            in_stack_00001b30 = in_stack_00001b38;
            in_stack_00001b31 = in_stack_00001b39;
            in_stack_00001b38 = in_stack_00001b40;
            in_stack_00001b39 = in_stack_00001b41;
            in_stack_00001b40 = (byte)in_stack_00001b48;
            in_stack_00001b41 = (int7)((ulong)uVar22 >> 8);
            in_stack_00001b48 = (int)CONCAT53(in_stack_00001b53,uVar8);
            in_stack_00001b50 = in_stack_00001b58;
            in_stack_00001b53 = uVar39;
            in_stack_00001b58 = in_stack_00001b60;
            in_stack_00001b59 = in_stack_00001b61;
            in_stack_00001b60 = in_stack_00001b68;
            in_stack_00001b61 = in_stack_00001b69;
            in_stack_00001b68 = in_stack_00001b70;
            in_stack_00001b69 = in_stack_00001b71;
            in_stack_00001b70 = in_stack_00001b78;
            in_stack_00001b71 = in_stack_00001b79;
            in_stack_00001b78 = (char)in_stack_00001b80;
            in_stack_00001b79 = (int7)((ulong)in_stack_00001b80 >> 8);
            in_stack_00002380 = uVar29;
          }
          else {
            if (*(char *)(in_stack_00000068 + 0x2e8) == '\0') {
              FUN_100e44f40(unaff_x19 + 0x5b30);
            }
            if (in_stack_00001b00 == (char *)0x8000000000000000) goto LAB_100600714;
LAB_1006007e0:
            _memcpy(&stack0x00001e30,&stack0x00000430,0x170);
            bVar33 = in_stack_00001b10;
            pcVar21 = in_stack_00001b00;
          }
          uVar22 = CONCAT17(uVar35,CONCAT61(uVar34,bVar33));
          lVar24 = CONCAT17(uVar18,uVar32);
          _memcpy(&stack0x00001010,&stack0x00001e30,0x170);
          *unaff_x22 = 1;
          _memcpy(&stack0x00002110,&stack0x00000fa8,0x1d8);
          FUN_100d64818(pbVar1);
          if (in_stack_00001b00 == (char *)0x8000000000000000) {
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b62c1e0 - 1 < 2 ||
                 ((bRam000000010b62c1e0 != 0 &&
                  (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                                      ), cVar10 != '\0')))))) &&
               (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                                   ), (uVar14 & 1) != 0)) {
              pcVar36 = &stack0x00001e30;
              bVar37 = 0x5c;
              uVar38 = 0x1011296;
              uVar32 = 0x108ac2612;
              uVar18 = 0;
              bVar33 = (byte)&stack0x00000430;
              uVar34 = (undefined6)((ulong)&stack0x00000430 >> 8);
              uVar35 = (undefined1)((ulong)&stack0x00000430 >> 0x38);
              pcVar21 = (char *)0x1;
              in_stack_00001b08 = (byte)&stack0x000023f0;
              in_stack_00001b09 = (undefined7)((ulong)&stack0x000023f0 >> 8);
              in_stack_00001b10 = 1;
              in_stack_00001b11 = 0;
              in_stack_00001b18 =
                   (byte)(
                         ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                         + 0x30);
              in_stack_00001b19 =
                   (undefined7)
                   ((ulong)(
                           ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                           + 0x30) >> 8);
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                         ,&stack0x00001b00);
              puVar15 = 
              ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                unaff_x22 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  unaff_x22 = &UNK_10b3c24c8;
                }
                puVar5 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar5 = &UNK_109adfc03;
                }
                iVar12 = (**(code **)(unaff_x22 + 0x18))(puVar5,&stack0x00000f90);
                if (iVar12 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (puVar15,puVar5,unaff_x22,&stack0x00000f90,&stack0x00001b00);
                }
              }
            }
            else {
              puVar15 = 
              ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar29 = *(undefined8 *)
                          (
                          ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                          + 0x20);
                uVar6 = *(undefined8 *)
                         (
                         ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                         + 0x28);
                puVar5 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar5 = &UNK_10b3c24c8;
                }
                puVar4 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar4 = &UNK_109adfc03;
                }
                iVar12 = (**(code **)(puVar5 + 0x18))(puVar4,&stack0x000023d0);
                unaff_x22 = puVar15;
                if (iVar12 != 0) {
                  lVar13 = *(long *)(puVar15 + 0x60);
                  lVar23 = *(long *)(puVar15 + 0x50);
                  pcVar21 = (char *)0x1;
                  if (lVar23 == 0) {
                    pcVar21 = (char *)0x2;
                  }
                  in_stack_00001b48 = *(undefined4 *)(puVar15 + 8);
                  in_stack_00001b4c = *(undefined4 *)(puVar15 + 0xc);
                  uVar32 = SUB87(&stack0x00000f90,0);
                  uVar18 = (undefined1)((ulong)&stack0x00000f90 >> 0x38);
                  bVar33 = 1;
                  pcVar36 = &stack0x000002d0;
                  bVar37 = 0x98;
                  uVar38 = 0x1061c20;
                  in_stack_00001b18 = 1;
                  if (lVar13 == 0) {
                    in_stack_00001b18 = 2;
                  }
                  in_stack_00001b38 = (byte)uVar29;
                  in_stack_00001b39 = (undefined7)((ulong)uVar29 >> 8);
                  in_stack_00001b30 = 2;
                  in_stack_00001b31 = 0;
                  in_stack_00001b40 = (byte)uVar6;
                  in_stack_00001b41 = (undefined7)((ulong)uVar6 >> 8);
                  in_stack_00001b50 = 0x4f;
                  in_stack_00001b51 = 0xb39f;
                  in_stack_00001b53 = 0x108;
                  in_stack_00001b58 = SUB81(&stack0x00000430,0);
                  in_stack_00001b59 = (undefined7)((ulong)&stack0x00000430 >> 8);
                  in_stack_00001b08 = (byte)lVar23;
                  in_stack_00001b09 = (undefined7)((ulong)lVar23 >> 8);
                  in_stack_00001b10 = (byte)*(undefined8 *)(puVar15 + 0x58);
                  in_stack_00001b11 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x58) >> 8);
                  in_stack_00001b19 = 0;
                  in_stack_00001b20 = (byte)lVar13;
                  in_stack_00001b21 = (undefined7)((ulong)lVar13 >> 8);
                  in_stack_00001b28 = (byte)*(undefined8 *)(puVar15 + 0x68);
                  in_stack_00001b29 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x68) >> 8);
                  (**(code **)(puVar5 + 0x20))(puVar4,&stack0x00001b00);
                }
              }
            }
            in_stack_00001b00 = pcVar21;
            if (lVar24 != 0) {
              _free(uVar22);
            }
          }
          else {
            in_stack_00001b11 = (undefined7)((ulong)uVar22 >> 8);
            in_stack_00001b08 = (byte)uVar32;
            in_stack_00001b09 = (undefined7)((ulong)lVar24 >> 8);
            in_stack_00001b18 = (byte)uVar29;
            in_stack_00001b19 = (undefined7)((ulong)uVar29 >> 8);
            _memcpy(&stack0x00001b20,&stack0x00002110,0x1d8);
            __ZN10codex_exec21turn_items_for_thread17had0ae636b3517f7bE
                      (&stack0x000023b0,&stack0x00001b00,
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x6258) + 0x38),
                       *(undefined8 *)(*(long *)(unaff_x19 + 0x6258) + 0x40));
            if (in_stack_000023b0 != -0x8000000000000000) {
              lVar13 = *(long *)(unaff_x19 + 0x6258);
              puVar5 = *(undefined **)(lVar13 + 0x50);
              lVar24 = *(long *)(lVar13 + 0x58) + 1;
              puVar15 = puVar5;
              while (lVar24 = lVar24 + -1, lVar24 != 0) {
                puVar15 = puVar15 + 0xf8;
                FUN_100e42904();
                unaff_x22 = puVar15;
              }
              if (*(long *)(lVar13 + 0x48) != 0) {
                _free(puVar5);
              }
              lVar24 = *(long *)(unaff_x19 + 0x6258);
              *(undefined8 *)(lVar24 + 0x50) = in_stack_000023b8;
              *(long *)(lVar24 + 0x48) = in_stack_000023b0;
              *(undefined8 *)(lVar24 + 0x58) = in_stack_000023c0;
            }
            FUN_100e4affc(&stack0x00001b00);
            in_stack_00001b10 = bVar33;
          }
        }
        *(undefined1 *)(in_stack_00000068 + 0x318) = 1;
        uVar14 = __ZN10codex_exec27should_process_notification17h37cae296b8b63163E
                           (unaff_x19 + 0x5730,*(undefined8 *)(unaff_x19 + 0x5138),
                            *(undefined8 *)(unaff_x19 + 0x5140),*(undefined8 *)(unaff_x19 + 0x5120),
                            *(undefined8 *)(unaff_x19 + 0x5128));
        if ((uVar14 & 1) != 0) {
          uVar29 = *(undefined8 *)(unaff_x19 + 0x4eb8);
          unaff_x22 = *(undefined **)(unaff_x19 + 0x4ec0);
          *(undefined1 *)(unaff_x27 + 0xb16) = 0;
          _memcpy(&stack0x00001b00,unaff_x19 + 0x5730,0x1f8);
          uVar14 = (**(code **)(unaff_x22 + 0x20))(uVar29,&stack0x00001b00);
          if ((uVar14 & 1) != 0) {
            *(long *)(unaff_x19 + 0x5948) = unaff_x19 + 0x4f60;
            *(long *)(unaff_x19 + 0x5950) = unaff_x19 + 0x4f58;
            *(undefined8 *)(unaff_x19 + 0x5958) = *(undefined8 *)(unaff_x19 + 0x5138);
            *(undefined8 *)(unaff_x19 + 0x5960) = *(undefined8 *)(unaff_x19 + 0x5140);
            puVar2 = (undefined1 *)(in_stack_00000068 + 0x318);
            *(undefined1 *)(in_stack_00000068 + 0x318) = 0;
            uVar29 = *(undefined8 *)(unaff_x19 + 0x5948);
            uVar22 = *(undefined8 *)(unaff_x19 + 0x5958);
            lVar24 = *(long *)(unaff_x19 + 0x5960);
            lVar13 = **(long **)(unaff_x19 + 0x5950);
            **(long **)(unaff_x19 + 0x5950) = lVar13 + 1;
            if (lVar24 == 0) {
              lVar23 = 1;
            }
            else {
              lVar23 = _malloc(lVar24);
              if (lVar23 == 0) {
                FUN_107c03c64(1,lVar24);
                goto LAB_100601058;
              }
            }
            _memcpy(lVar23,uVar22,lVar24);
            *(undefined8 *)(unaff_x19 + 0x5968) = 0x8000000000000005;
            *(long *)(unaff_x19 + 0x5970) = lVar24;
            *(long *)(unaff_x19 + 0x5978) = lVar23;
            *(long *)(unaff_x19 + 0x5980) = lVar24;
            *(undefined8 *)(unaff_x19 + 0x5988) = 0x8000000000000000;
            *(long *)(unaff_x19 + 0x5990) = lVar13;
            *(undefined8 *)(unaff_x19 + 0x5b28) = uVar29;
            *(undefined **)(unaff_x19 + 0x5b30) = &UNK_108ca7339;
            *(undefined8 *)(unaff_x19 + 0x5b38) = 0x12;
            unaff_x22 = (undefined *)(in_stack_00000068 + 0x310);
            *(undefined1 *)(in_stack_00000068 + 0x310) = 0;
            *(undefined **)(unaff_x19 + 0x5b40) = &UNK_108ca7339;
            *(undefined8 *)(unaff_x19 + 0x5b48) = 0x12;
            _memcpy(unaff_x19 + 0x5b50,unaff_x19 + 0x5968,0x1c0);
            *(undefined8 *)(unaff_x19 + 0x5d10) = uVar29;
            *(undefined1 *)(in_stack_00000068 + 0x308) = 0;
            FUN_100b77b84(&stack0x00001b00,unaff_x19 + 0x5b50,in_stack_00000048);
            if (in_stack_00001b00 != (char *)0x8000000000000004) {
              if (*(char *)(in_stack_00000068 + 0x308) == '\x03') {
                FUN_100cbc1e8(unaff_x19 + 0x5ef0);
                if (*(long *)(unaff_x19 + 0x5ed8) != 0) {
                  _free(*(undefined8 *)(unaff_x19 + 0x5ee0));
                }
                *(undefined2 *)(in_stack_00000068 + 0x309) = 0;
              }
              else if (*(char *)(in_stack_00000068 + 0x308) == '\0') {
                FUN_100e44f40(unaff_x19 + 0x5b50);
              }
              if (in_stack_00001b00 == (char *)0x8000000000000003) {
                *unaff_x22 = 1;
                pcVar36 = (char *)0x8000000000000000;
                bVar37 = in_stack_00001b08;
                uVar38 = uVar32;
              }
              else {
                if (*(long *)(unaff_x19 + 0x5b48) == 0) {
                  iVar12 = __ZN81__LT_codex_app_server_client__TypedRequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h179c8e79187c3c28E
                                     (&stack0x00001b00,&stack0x00002110);
                  if (iVar12 != 0) {
                    FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x0000247f,&UNK_10b235000,&UNK_10b2346c0
                                 );
                    goto LAB_100601058;
                  }
                  bVar37 = 1;
                  uVar38 = 0;
                  pcVar36 = (char *)0x0;
                }
                else {
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (&stack0x00000430,s___108ac1f1a,&stack0x00002110);
                }
                FUN_100e15cd8(&stack0x00001b00);
                *unaff_x22 = 1;
                if (pcVar36 == (char *)0x8000000000000001) goto LAB_1005f9dc8;
              }
              FUN_100d64818(unaff_x19 + 0x5968);
              if (pcVar36 == (char *)0x8000000000000000) {
                *puVar2 = 1;
              }
              else {
                *puVar2 = 1;
                if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                   (((bRam000000010b62c138 - 1 < 2 ||
                     ((bRam000000010b62c138 != 0 &&
                      (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                          (&
                                           __ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                          ), cVar10 != '\0')))) &&
                    (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                        (
                                        ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                        ), (uVar14 & 1) != 0)))) {
                  in_stack_00001b00 = (char *)0x1;
                  in_stack_00001b08 = (byte)&stack0x00000430;
                  in_stack_00001b09 = (undefined7)((ulong)&stack0x00000430 >> 8);
                  in_stack_00001b10 = 1;
                  in_stack_00001b11 = 0;
                  in_stack_00001b18 =
                       (byte)(
                             ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                             + 0x30);
                  in_stack_00001b19 =
                       (undefined7)
                       ((ulong)(
                               ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                               + 0x30) >> 8);
                  FUN_100601d30(&stack0x00001b00);
                }
                else {
                  lVar24 = 
                  ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                  ;
                  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                    unaff_x22 = puRam000000010b634c20;
                    if (lRam000000010b66fd20 != 2) {
                      unaff_x22 = &UNK_10b3c24c8;
                    }
                    puVar15 = puRam000000010b634c18;
                    if (lRam000000010b66fd20 != 2) {
                      puVar15 = &UNK_109adfc03;
                    }
                    iVar12 = (**(code **)(unaff_x22 + 0x18))(puVar15,&stack0x00001ab8);
                    if (iVar12 != 0) {
                      in_stack_00001b00 = (char *)0x1;
                      in_stack_00001b08 = (byte)&stack0x000002d0;
                      in_stack_00001b09 = (undefined7)((ulong)&stack0x000002d0 >> 8);
                      in_stack_00001b10 = 1;
                      in_stack_00001b11 = 0;
                      in_stack_00001b18 =
                           (byte)(
                                 ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                 + 0x30);
                      in_stack_00001b19 =
                           (undefined7)
                           ((ulong)(
                                   ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                   + 0x30) >> 8);
                      __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                                (lVar24,puVar15,unaff_x22,&stack0x00000f90,&stack0x00001b00);
                    }
                  }
                }
                if (pcVar36 != (char *)0x0) {
                  _free(CONCAT71(uVar38,bVar37));
                }
              }
              *(undefined1 *)(unaff_x27 + 0xb16) = 0;
              goto LAB_1005fcc6c;
            }
            *unaff_x22 = 3;
LAB_1005f9dc8:
            *puVar2 = 3;
            uVar18 = 0xf;
            goto LAB_1006004cc;
          }
        }
        if ((*(byte *)(unaff_x27 + 0xb16) & 1) != 0) {
          FUN_100e5286c(unaff_x19 + 0x5730);
        }
        *(undefined1 *)(unaff_x27 + 0xb16) = 0;
      }
      goto LAB_1005fe618;
    }
    if (pcVar21 != (char *)0x8000000000000045) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b2190f0);
      goto LAB_100601058;
    }
    *pbVar1 = in_stack_00000040;
    if ((in_stack_00000040 & 1) == 0) {
      in_stack_00000040 = 0;
      *(undefined1 *)(unaff_x27 + 0xb14) = 0;
      goto LAB_1005fe618;
    }
    lVar23 = *(long *)(unaff_x19 + 0x4f58);
    *(long *)(unaff_x19 + 0x4f58) = lVar23 + 1;
    uVar29 = *(undefined8 *)(unaff_x19 + 0x5138);
    lVar13 = *(long *)(unaff_x19 + 0x5140);
    lVar24 = 1;
    if ((lVar13 != 0) && (lVar24 = _malloc(lVar13), lVar24 == 0)) {
      FUN_107c03c64(1,lVar13);
      goto LAB_100601058;
    }
    _memcpy(lVar24,uVar29,lVar13);
    uVar29 = *(undefined8 *)(unaff_x19 + 0x5120);
    lVar26 = *(long *)(unaff_x19 + 0x5128);
    lVar28 = 1;
    if ((lVar26 != 0) && (lVar28 = _malloc(lVar26), lVar28 == 0)) {
      FUN_107c03c64(1,lVar26);
      goto LAB_100601058;
    }
    _memcpy(lVar28,uVar29,lVar26);
    *(undefined8 *)(unaff_x19 + 0x5950) = 0x8000000000000039;
    *(long *)(unaff_x19 + 0x5958) = lVar13;
    *(long *)(unaff_x19 + 0x5960) = lVar24;
    *(long *)(unaff_x19 + 0x5968) = lVar13;
    *(long *)(unaff_x19 + 0x5970) = lVar26;
    *(long *)(unaff_x19 + 0x5978) = lVar28;
    *(long *)(unaff_x19 + 0x5980) = lVar26;
    *(undefined8 *)(unaff_x19 + 0x5988) = 0x8000000000000000;
    *(long *)(unaff_x19 + 0x5990) = lVar23;
    *(long *)(unaff_x19 + 0x5b10) = unaff_x19 + 0x4f60;
    *(undefined **)(unaff_x19 + 0x5b18) = &UNK_108ca7437;
    *(undefined8 *)(unaff_x19 + 0x5b20) = 0xe;
    puVar2 = (undefined1 *)(in_stack_00000068 + 0x2f8);
    *(undefined1 *)(in_stack_00000068 + 0x2f8) = 0;
    *(undefined **)(unaff_x19 + 0x5b28) = &UNK_108ca7437;
    *(undefined8 *)(unaff_x19 + 0x5b30) = 0xe;
    _memcpy(unaff_x19 + 0x5b38,unaff_x19 + 0x5950,0x1c0);
    *(long *)(unaff_x19 + 0x5cf8) = unaff_x19 + 0x4f60;
    *(undefined1 *)(in_stack_00000068 + 0x2f0) = 0;
    unaff_x22 = (undefined *)0x5b38;
    FUN_100b76fa0(&stack0x00001b00,unaff_x19 + 0x5b38,in_stack_00000048);
    if (in_stack_00001b00 == (char *)0x8000000000000004) {
      *puVar2 = 3;
      uVar18 = 0xc;
      goto LAB_1006004cc;
    }
    if (*(char *)(in_stack_00000068 + 0x2f0) == '\x03') {
      FUN_100cbc1e8(unaff_x19 + 0x5ed8);
      if (*(long *)(unaff_x19 + 0x5ec0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x5ec8));
      }
      *(undefined2 *)(in_stack_00000068 + 0x2f1) = 0;
      if (in_stack_00001b00 != (char *)0x8000000000000003) goto LAB_1005fea88;
LAB_1005fea40:
      *puVar2 = 1;
      pcVar21 = (char *)0x8000000000000000;
      bVar9 = bVar33;
    }
    else {
      if (*(char *)(in_stack_00000068 + 0x2f0) == '\0') {
        FUN_100e44f40(unaff_x19 + 0x5b38);
      }
      if (in_stack_00001b00 == (char *)0x8000000000000003) goto LAB_1005fea40;
LAB_1005fea88:
      in_stack_00001b53 =
           (uint5)(CONCAT17((char)(in_stack_00001b53 >> 0x20),(uint7)in_stack_00001b53 << 0x18) >>
                  0x18);
      in_stack_00001b59 =
           (undefined7)(CONCAT53(uVar39,(int3)CONCAT71(in_stack_00001b59,in_stack_00001b58)) >> 8);
      in_stack_00001b71 =
           (undefined7)
           (CONCAT17((char)((uint7)in_stack_00001b71 >> 0x30),
                     (int7)CONCAT71(in_stack_00001b71,in_stack_00001b70)) >> 8);
      in_stack_00001b79 =
           (undefined7)
           (CONCAT17((char)((uint7)in_stack_00001b79 >> 0x30),
                     (int7)CONCAT71(in_stack_00001b79,in_stack_00001b78)) >> 8);
      if (*(long *)(unaff_x19 + 0x5b30) == 0) {
        bVar42 = 0x20;
        in_stack_00002121 = 0x600000;
        pcVar40 = &stack0x00001e30;
        bVar41 = 0x90;
        in_stack_00002119 = 0x10b2092;
        iVar12 = __ZN81__LT_codex_app_server_client__TypedRequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h179c8e79187c3c28E
                           (&stack0x00001b00,&stack0x00002110);
        if (iVar12 != 0) {
          FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x0000247f,&UNK_10b235000,&UNK_10b2346c0);
          goto LAB_100601058;
        }
        bVar37 = 1;
        uVar38 = 0;
        pcVar21 = (char *)0x0;
        in_stack_00000440 = 0;
        in_stack_00000441 = 0;
      }
      else {
        pcVar40 = (char *)(unaff_x19 + 0x5b28);
        bVar41 = 0xa0;
        in_stack_00002119 = 0x100c7b3;
        bVar42 = 0;
        in_stack_00002121 = (undefined7)((ulong)&stack0x00001b00 >> 8);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000430,s___108ac1f1a,&stack0x00002110);
        pcVar21 = pcVar36;
      }
      FUN_100e15cd8(&stack0x00001b00);
      uVar34 = (undefined6)in_stack_00000441;
      uVar35 = (undefined1)((uint7)in_stack_00000441 >> 0x30);
      uVar32 = (undefined7)CONCAT71(uVar38,bVar37);
      uVar18 = (undefined1)((uint7)uVar38 >> 0x30);
      *puVar2 = 1;
      pcVar36 = pcVar21;
      bVar9 = in_stack_00000440;
      if (pcVar21 == (char *)0x8000000000000001) goto LAB_100600db4;
    }
    FUN_100d64818(unaff_x19 + 0x5950);
    in_stack_00000040 = 1;
    bVar33 = bVar9;
    if (pcVar21 != (char *)0x8000000000000000) {
      in_stack_00002121 = (undefined7)(CONCAT17(uVar35,CONCAT61(uVar34,bVar9)) >> 8);
      bVar41 = (byte)uVar32;
      in_stack_00002119 = (undefined7)(CONCAT17(uVar18,uVar32) >> 8);
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62c120 - 1 < 2 ||
           ((bRam000000010b62c120 != 0 &&
            (cVar10 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                                ), cVar10 != '\0')))) &&
          (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                              ), (uVar14 & 1) != 0)))) {
        pcVar36 = s_turn_interrupt_failed__108ac2322;
        bVar37 = (byte)&stack0x00001e30;
        uVar38 = (undefined7)((ulong)&stack0x00001e30 >> 8);
        uVar32 = SUB87(&stack0x00000430,0);
        uVar18 = (undefined1)((ulong)&stack0x00000430 >> 0x38);
        bVar33 = 0xd0;
        uVar34 = 0x10b208f;
        uVar35 = 0;
        in_stack_00001b00 = (char *)0x1;
        in_stack_00001b08 = (byte)&stack0x000002d0;
        in_stack_00001b09 = (undefined7)((ulong)&stack0x000002d0 >> 8);
        in_stack_00001b10 = 1;
        in_stack_00001b11 = 0;
        in_stack_00001b18 =
             (byte)(
                   ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                   + 0x30);
        in_stack_00001b19 =
             (undefined7)
             ((ulong)(
                     ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                     + 0x30) >> 8);
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                   ,&stack0x00001b00);
        puVar15 = 
        ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          unaff_x22 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            unaff_x22 = &UNK_10b3c24c8;
          }
          puVar5 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(unaff_x22 + 0x18))(puVar5,&stack0x00000f90);
          if (iVar12 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (puVar15,puVar5,unaff_x22,&stack0x00000f90,&stack0x00001b00);
          }
        }
      }
      else {
        puVar15 = 
        ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar29 = *(undefined8 *)
                    (
                    ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                    + 0x20);
          uVar22 = *(undefined8 *)
                    (
                    ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                    + 0x28);
          puVar5 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar5 = &UNK_10b3c24c8;
          }
          puVar4 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar4 = &UNK_109adfc03;
          }
          iVar12 = (**(code **)(puVar5 + 0x18))(puVar4,&stack0x00001a90);
          unaff_x22 = puVar15;
          if (iVar12 != 0) {
            uVar32 = SUB87(&stack0x00002110,0);
            uVar18 = (undefined1)((ulong)&stack0x00002110 >> 0x38);
            bVar33 = 0x5c;
            uVar34 = 0x1011296;
            uVar35 = 0;
            in_stack_00001b38 = (byte)uVar29;
            in_stack_00001b39 = (undefined7)((ulong)uVar29 >> 8);
            in_stack_00001b30 = 2;
            in_stack_00001b31 = 0;
            in_stack_00001b40 = (byte)uVar22;
            in_stack_00001b41 = (undefined7)((ulong)uVar22 >> 8);
            lVar24 = *(long *)(puVar15 + 0x60);
            lVar13 = *(long *)(puVar15 + 0x50);
            in_stack_00001b00 = (char *)0x1;
            if (lVar13 == 0) {
              in_stack_00001b00 = (char *)0x2;
            }
            in_stack_00001b48 = *(undefined4 *)(puVar15 + 8);
            in_stack_00001b4c = *(undefined4 *)(puVar15 + 0xc);
            pcVar36 = &stack0x00000f90;
            bVar37 = 1;
            in_stack_00001b18 = 1;
            if (lVar24 == 0) {
              in_stack_00001b18 = 2;
            }
            in_stack_00001b50 = 0x4f;
            in_stack_00001b51 = 0xb39f;
            in_stack_00001b53 = 0x108;
            in_stack_00001b58 = SUB81(&stack0x00001e30,0);
            in_stack_00001b59 = (undefined7)((ulong)&stack0x00001e30 >> 8);
            in_stack_00001b08 = (byte)lVar13;
            in_stack_00001b09 = (undefined7)((ulong)lVar13 >> 8);
            in_stack_00001b10 = (byte)*(undefined8 *)(puVar15 + 0x58);
            in_stack_00001b11 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x58) >> 8);
            in_stack_00001b19 = 0;
            in_stack_00001b20 = (byte)lVar24;
            in_stack_00001b21 = (undefined7)((ulong)lVar24 >> 8);
            in_stack_00001b28 = (byte)*(undefined8 *)(puVar15 + 0x68);
            in_stack_00001b29 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x68) >> 8);
            (**(code **)(puVar5 + 0x20))(puVar4,&stack0x00001b00);
          }
        }
      }
      if (pcVar21 != (char *)0x0) {
        _free(CONCAT71(in_stack_00002119,bVar41));
      }
      in_stack_00000040 = 1;
      pcVar40 = pcVar21;
      bVar42 = bVar9;
    }
    goto LAB_1005fe618;
  }
  *(undefined1 *)(unaff_x27 + 0xe99) = 3;
  uVar18 = 0xd;
LAB_1006004cc:
  *(undefined1 *)(unaff_x27 + 0xb09) = uVar18;
  uVar29 = 1;
LAB_1006004d4:
  auVar31._8_8_ = unaff_x22;
  auVar31._0_8_ = uVar29;
  return auVar31;
LAB_100600db4:
  uVar18 = 0xc;
  goto LAB_1006004cc;
}

