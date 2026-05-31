
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1005fa4e4(undefined8 param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined3 uVar8;
  code *pcVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  undefined *puVar15;
  uint uVar16;
  ulong extraout_x1;
  undefined1 uVar17;
  undefined1 uVar18;
  long lVar19;
  long *plVar20;
  char *pcVar21;
  long lVar22;
  long lVar23;
  long unaff_x19;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined *unaff_x22;
  ulong uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long unaff_x27;
  undefined1 auVar30 [16];
  byte in_stack_00000040;
  undefined8 *in_stack_00000048;
  long in_stack_00000068;
  undefined7 uVar31;
  byte bVar32;
  undefined6 uVar33;
  undefined1 uVar34;
  char *pcVar35;
  byte bVar36;
  undefined7 uVar37;
  byte in_stack_00000440;
  undefined7 in_stack_00000441;
  uint5 uVar38;
  char *pcVar39;
  byte bVar40;
  undefined7 uVar41;
  byte bVar42;
  undefined7 uVar43;
  byte bVar44;
  undefined7 uVar45;
  undefined4 in_stack_00001b20;
  undefined4 in_stack_00001b24;
  undefined1 in_stack_00001b28;
  undefined7 in_stack_00001b29;
  undefined1 in_stack_00001b30;
  undefined7 in_stack_00001b31;
  undefined1 in_stack_00001b38;
  undefined7 in_stack_00001b39;
  undefined1 in_stack_00001b40;
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
  undefined8 in_stack_00001e30;
  undefined8 in_stack_00001e38;
  undefined8 in_stack_00001e40;
  char *in_stack_00002110;
  byte in_stack_00002118;
  undefined7 in_stack_00002119;
  byte in_stack_00002120;
  undefined7 in_stack_00002121;
  long in_stack_00002158;
  undefined *in_stack_00002160;
  long in_stack_00002168;
  long in_stack_00002170;
  undefined8 in_stack_00002178;
  long in_stack_00002188;
  undefined8 in_stack_00002190;
  long in_stack_000021b0;
  undefined8 in_stack_000021b8;
  undefined8 in_stack_00002370;
  undefined8 in_stack_00002378;
  undefined8 in_stack_00002380;
  long in_stack_000023b0;
  undefined8 in_stack_000023b8;
  undefined8 in_stack_000023c0;
  undefined7 uVar46;
  
  pcVar35 = s__Sent_review_request_with_event_I_108ac22fc;
  bVar36 = (byte)&stack0x00000f90;
  uVar37 = (undefined7)((ulong)&stack0x00000f90 >> 8);
  uVar31 = SUB87(&stack0x00000430,0);
  uVar18 = (undefined1)((ulong)&stack0x00000430 >> 0x38);
  bVar32 = 0xd0;
  uVar33 = 0x10b208f;
  uVar34 = 0;
  pcVar39 = (char *)0x1;
  bVar40 = (byte)&stack0x000002d0;
  uVar41 = (undefined7)((ulong)&stack0x000002d0 >> 8);
  bVar42 = 1;
  uVar43 = 0;
  bVar44 = (byte)param_1;
  uVar45 = (undefined7)((ulong)param_1 >> 8);
  FUN_100601e6c(&stack0x00001b00);
  *(undefined8 *)(unaff_x19 + 0x5120) = in_stack_00001e38;
  *(undefined8 *)(unaff_x19 + 0x5118) = in_stack_00001e30;
  *(undefined8 *)(unaff_x19 + 0x5128) = in_stack_00001e40;
  lVar19 = in_stack_00002168 + 1;
  puVar15 = in_stack_00002160;
  while (lVar19 = lVar19 + -1, lVar19 != 0) {
    puVar15 = puVar15 + 0xf8;
    FUN_100e42904();
    unaff_x22 = puVar15;
  }
  if (in_stack_00002158 != 0) {
    _free(in_stack_00002160);
  }
  if (in_stack_00002170 != -0x8000000000000000) {
    if (in_stack_00002170 != 0) {
      _free(in_stack_00002178);
    }
    if ((in_stack_00002188 != -0x8000000000000000) && (in_stack_00002188 != 0)) {
      _free(in_stack_00002190);
    }
  }
  if (in_stack_000021b0 != 0) {
    _free(in_stack_000021b8);
  }
  if ((*(long *)(unaff_x19 + 0x5948) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x5948) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x19 + 0x5950));
  }
  *(undefined1 *)(unaff_x27 + 0xb20) = 0;
  lVar19 = *(long *)(unaff_x19 + 0x4e68);
  if (lVar19 != 0) {
    pcVar21 = *(char **)(lVar19 + 0x30);
    lVar23 = *(long *)(lVar19 + 0x38);
    if (lVar23 != 0) {
      lVar22 = 0;
      lVar23 = lVar23 << 4;
      plVar20 = (long *)(pcVar21 + 8);
      do {
        if ((*plVar20 == 7) &&
           (*(int *)plVar20[-1] == 0x6e727574 && *(int *)(plVar20[-1] + 3) == 0x64692e6e)) {
          lVar23 = *(long *)(lVar19 + 0x38);
          bVar42 = (byte)*(undefined8 *)(lVar19 + 0x40);
          uVar43 = (undefined7)((ulong)*(undefined8 *)(lVar19 + 0x40) >> 8);
          bVar40 = (byte)lVar23;
          uVar41 = (undefined7)((ulong)lVar23 >> 8);
          bVar44 = (byte)*(undefined8 *)(lVar19 + 0x48);
          uVar45 = (undefined7)((ulong)*(undefined8 *)(lVar19 + 0x48) >> 8);
          in_stack_00001b20 = (undefined4)lVar22;
          in_stack_00001b24 = (undefined4)((ulong)lVar22 >> 0x20);
          in_stack_00002110 = &stack0x00001b00;
          in_stack_00002118 = (byte)&stack0x00001e30;
          in_stack_00002119 = (undefined7)((ulong)&stack0x00001e30 >> 8);
          in_stack_00002120 = 0x28;
          in_stack_00002121 = 0x10b216f;
          __ZN7tracing4span4Span10record_all17h530f7beee02da1dcE
                    (unaff_x19 + 0x4e48,&stack0x00000f90);
          pcVar39 = pcVar21;
          break;
        }
        lVar22 = lVar22 + 1;
        plVar20 = plVar20 + 2;
        lVar23 = lVar23 + -0x10;
      } while (lVar23 != 0);
    }
  }
  *(undefined2 *)(unaff_x27 + 0xb13) = 0x100;
  FUN_10624142c(&stack0x00001b00,unaff_x19 + 0x4f78,0);
  thunk_FUN_108855060(&stack0x00000f90,0,0x24,1,1);
  uRam0000000000000009 = CONCAT71(uVar41,bVar40);
  uRam0000000000000019 = CONCAT71(uVar45,bVar44);
  uRam0000000000000011 = CONCAT71(uVar43,bVar42);
  pcRam0000000000000001 = pcVar39;
  uRam0000000000000021 = in_stack_00001b20;
  *(undefined8 *)(unaff_x19 + 0x5138) = 1;
  *(undefined8 *)(unaff_x19 + 0x5130) = 0;
  *(undefined8 *)(unaff_x19 + 0x5140) = 0x24;
LAB_1005fe618:
  do {
    pbVar3 = (byte *)(unaff_x27 + 0xb15);
    *(byte *)(unaff_x27 + 0xb15) = *(byte *)(unaff_x27 + 0xb14) ^ 1;
    *(long *)(unaff_x19 + 0x5958) = unaff_x19 + 0x5110;
    *(undefined1 *)(unaff_x27 + 0xb49) = 0;
    lVar19 = unaff_x19 + 0x5958;
    *(long *)(unaff_x19 + 0x5970) = unaff_x19 + 0x4f60;
    *(undefined1 *)(unaff_x27 + 0xb71) = 0;
    *(byte **)(unaff_x19 + 0x5948) = pbVar3;
    *(long *)(unaff_x19 + 0x5950) = lVar19;
    pbVar1 = (byte *)(unaff_x27 + 0xb29);
    lVar23 = (*
             ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
             )();
    if (*(char *)(lVar23 + 0x48) != '\x01') {
      if (*(char *)(lVar23 + 0x48) == '\x02') {
        FUN_107c05e20(&UNK_10b4cce20);
        goto LAB_100601058;
      }
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar23,&DAT_100c35d48);
      *(undefined1 *)(lVar23 + 0x48) = 1;
    }
    if (*(char *)(lVar23 + 0x44) == '\x01' && *(char *)(lVar23 + 0x45) == '\0') {
      FUN_10610bbb4(*(undefined8 *)*in_stack_00000048,((undefined8 *)*in_stack_00000048)[1]);
LAB_100600dac:
      uVar18 = 0xb;
      goto LAB_1006004cc;
    }
    if ((*(uint *)(lVar23 + 0x38) & 1) == 0) {
      uVar12 = FUN_1060fcce0();
      uVar14 = extraout_x1;
    }
    else {
      uVar12 = *(uint *)(lVar23 + 0x3c);
      uVar14 = (ulong)*(uint *)(lVar23 + 0x40);
    }
    uVar12 = uVar12 ^ uVar12 << 0x11;
    uVar16 = (uint)uVar14;
    uVar12 = (uint)(uVar14 >> 0x10) & 0xffff ^ uVar12 >> 7 ^ uVar16 ^ uVar12;
    *(undefined4 *)(lVar23 + 0x38) = 1;
    *(uint *)(lVar23 + 0x3c) = uVar16;
    *(uint *)(lVar23 + 0x40) = uVar12;
    bVar10 = *pbVar3;
    if (-1 < (int)(uVar12 + uVar16)) {
      bVar7 = bVar10 & 1;
      if ((bVar10 & 1) == 0) {
        bVar10 = func_0x000100fd3c04(lVar19,*in_stack_00000048);
        if (bVar10 == 2) {
          bVar10 = *pbVar3;
          goto LAB_1005fe738;
        }
LAB_1005fe7c0:
        *pbVar3 = *pbVar3 | 1;
        pcVar21 = (char *)0x8000000000000045;
        in_stack_00000040 = bVar10;
        goto LAB_1005fe864;
      }
LAB_1005fe738:
      if ((bVar10 >> 1 & 1) != 0) goto LAB_1005fe7d8;
      bVar10 = *(byte *)(unaff_x19 + 0x5990);
      if (bVar10 < 2) {
        if (bVar10 != 0) goto LAB_10060100c;
        *(long *)(unaff_x19 + 0x5978) = *(long *)(unaff_x19 + 0x5970) + 8;
        *(undefined1 *)(unaff_x19 + 0x5988) = 0;
      }
      else if (bVar10 != 3) goto LAB_100600ffc;
      FUN_100fd1840(&stack0x00001b00,unaff_x19 + 0x5978,*in_stack_00000048);
      uVar17 = 3;
      if (pcVar39 != (char *)0x8000000000000045) {
        uVar17 = 1;
      }
      *(undefined1 *)(unaff_x19 + 0x5990) = uVar17;
      if (pcVar39 != (char *)0x8000000000000045) goto LAB_1005fe820;
      goto LAB_100600dac;
    }
    bVar7 = bVar10 & 2;
    if ((bVar10 >> 1 & 1) == 0) {
      bVar10 = *(byte *)(unaff_x19 + 0x5990);
      if (1 < bVar10) {
        if (bVar10 == 3) goto LAB_1005fe768;
LAB_100600ffc:
        FUN_107c05cc4(&UNK_10b230988);
        goto LAB_100601058;
      }
      if (bVar10 != 0) {
LAB_10060100c:
        FUN_107c05cc0(&UNK_10b230988);
        goto LAB_100601058;
      }
      *(long *)(unaff_x19 + 0x5978) = *(long *)(unaff_x19 + 0x5970) + 8;
      *(undefined1 *)(unaff_x19 + 0x5988) = 0;
LAB_1005fe768:
      FUN_100fd1840(&stack0x00001b00,unaff_x19 + 0x5978,*in_stack_00000048);
      uVar17 = 3;
      if (pcVar39 != (char *)0x8000000000000045) {
        uVar17 = 1;
      }
      *(undefined1 *)(unaff_x19 + 0x5990) = uVar17;
      if (pcVar39 == (char *)0x8000000000000045) {
        bVar10 = *pbVar3;
        goto LAB_1005fe7a0;
      }
LAB_1005fe820:
      _memcpy(&stack0x00001891,&stack0x00001b09,0x1ef);
      *pbVar3 = *pbVar3 | 2;
      pcVar21 = pcVar39;
      in_stack_00000040 = bVar40;
      if (pcVar39 == (char *)0x8000000000000048) goto LAB_100600dac;
    }
    else {
LAB_1005fe7a0:
      if ((bVar10 & 1) == 0) {
        bVar10 = func_0x000100fd3c04(lVar19,*in_stack_00000048);
        if (bVar10 != 2) goto LAB_1005fe7c0;
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
    uVar38 = (uint5)((uint7)in_stack_00001b59 >> 0x10);
    if ((char *)0x8000000000000044 < pcVar21) {
      if (pcVar21 != (char *)0x8000000000000045) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b2190f0);
        goto LAB_100601058;
      }
      *pbVar1 = in_stack_00000040;
      if ((in_stack_00000040 & 1) == 0) {
        in_stack_00000040 = 0;
        *(undefined1 *)(unaff_x27 + 0xb14) = 0;
      }
      else {
        lVar22 = *(long *)(unaff_x19 + 0x4f58);
        *(long *)(unaff_x19 + 0x4f58) = lVar22 + 1;
        uVar27 = *(undefined8 *)(unaff_x19 + 0x5138);
        lVar23 = *(long *)(unaff_x19 + 0x5140);
        lVar19 = 1;
        if ((lVar23 != 0) && (lVar19 = _malloc(lVar23), lVar19 == 0)) {
          FUN_107c03c64(1,lVar23);
          goto LAB_100601058;
        }
        _memcpy(lVar19,uVar27,lVar23);
        uVar27 = *(undefined8 *)(unaff_x19 + 0x5120);
        lVar28 = *(long *)(unaff_x19 + 0x5128);
        lVar29 = 1;
        if ((lVar28 != 0) && (lVar29 = _malloc(lVar28), lVar29 == 0)) {
          FUN_107c03c64(1,lVar28);
          goto LAB_100601058;
        }
        _memcpy(lVar29,uVar27,lVar28);
        *(undefined8 *)(unaff_x19 + 0x5950) = 0x8000000000000039;
        *(long *)(unaff_x19 + 0x5958) = lVar23;
        *(long *)(unaff_x19 + 0x5960) = lVar19;
        *(long *)(unaff_x19 + 0x5968) = lVar23;
        *(long *)(unaff_x19 + 0x5970) = lVar28;
        *(long *)(unaff_x19 + 0x5978) = lVar29;
        *(long *)(unaff_x19 + 0x5980) = lVar28;
        *(undefined8 *)(unaff_x19 + 0x5988) = 0x8000000000000000;
        *(long *)(unaff_x19 + 0x5990) = lVar22;
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
        if (pcVar39 == (char *)0x8000000000000004) {
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
          if (pcVar39 != (char *)0x8000000000000003) goto LAB_1005fea88;
LAB_1005fea40:
          uVar46 = CONCAT61(uVar33,bVar32);
          *puVar2 = 1;
          pcVar21 = (char *)0x8000000000000000;
        }
        else {
          if (*(char *)(in_stack_00000068 + 0x2f0) == '\0') {
            FUN_100e44f40(unaff_x19 + 0x5b38);
          }
          if (pcVar39 == (char *)0x8000000000000003) goto LAB_1005fea40;
LAB_1005fea88:
          in_stack_00001b53 =
               (uint5)(CONCAT17((char)(in_stack_00001b53 >> 0x20),(uint7)in_stack_00001b53 << 0x18)
                      >> 0x18);
          in_stack_00001b59 =
               (undefined7)
               (CONCAT53(uVar38,(int3)CONCAT71(in_stack_00001b59,in_stack_00001b58)) >> 8);
          in_stack_00001b71 =
               (undefined7)
               (CONCAT17((char)((uint7)in_stack_00001b71 >> 0x30),
                         (int7)CONCAT71(in_stack_00001b71,in_stack_00001b70)) >> 8);
          in_stack_00001b79 =
               (undefined7)
               (CONCAT17((char)((uint7)in_stack_00001b79 >> 0x30),
                         (int7)CONCAT71(in_stack_00001b79,in_stack_00001b78)) >> 8);
          if (*(long *)(unaff_x19 + 0x5b30) == 0) {
            in_stack_00002120 = 0x20;
            in_stack_00002121 = 0x600000;
            in_stack_00002110 = &stack0x00001e30;
            in_stack_00002118 = 0x90;
            in_stack_00002119 = 0x10b2092;
            iVar13 = __ZN81__LT_codex_app_server_client__TypedRequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h179c8e79187c3c28E
                               (&stack0x00001b00,&stack0x00002110);
            if (iVar13 != 0) {
              FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x0000247f,&UNK_10b235000,&UNK_10b2346c0);
              goto LAB_100601058;
            }
            bVar36 = 1;
            uVar37 = 0;
            pcVar21 = (char *)0x0;
            bVar32 = 0;
            in_stack_00000441 = 0;
          }
          else {
            in_stack_00002110 = (char *)(unaff_x19 + 0x5b28);
            in_stack_00002118 = 0xa0;
            in_stack_00002119 = 0x100c7b3;
            in_stack_00002120 = 0;
            in_stack_00002121 = (undefined7)((ulong)&stack0x00001b00 >> 8);
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000430,s___108ac1f1a,&stack0x00002110);
            pcVar21 = pcVar35;
            bVar32 = in_stack_00000440;
          }
          FUN_100e15cd8(&stack0x00001b00);
          uVar33 = (undefined6)in_stack_00000441;
          uVar34 = (undefined1)((uint7)in_stack_00000441 >> 0x30);
          uVar31 = (undefined7)CONCAT71(uVar37,bVar36);
          uVar18 = (undefined1)((uint7)uVar37 >> 0x30);
          uVar46 = (undefined7)CONCAT71(in_stack_00000441,bVar32);
          *puVar2 = 1;
          pcVar35 = pcVar21;
          in_stack_00000440 = bVar32;
          if (pcVar21 == (char *)0x8000000000000001) {
            uVar18 = 0xc;
LAB_1006004cc:
            *(undefined1 *)(unaff_x27 + 0xb09) = uVar18;
            uVar27 = 1;
LAB_1006004d4:
            auVar30._8_8_ = unaff_x22;
            auVar30._0_8_ = uVar27;
            return auVar30;
          }
        }
        FUN_100d64818(unaff_x19 + 0x5950);
        in_stack_00000040 = 1;
        if (pcVar21 != (char *)0x8000000000000000) {
          in_stack_00002120 = (byte)uVar46;
          in_stack_00002121 = (undefined7)(CONCAT17(uVar34,uVar46) >> 8);
          in_stack_00002118 = (byte)uVar31;
          in_stack_00002119 = (undefined7)(CONCAT17(uVar18,uVar31) >> 8);
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              ((bRam000000010b62c120 - 1 < 2 ||
               ((bRam000000010b62c120 != 0 &&
                (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                                    ), cVar11 != '\0')))))) &&
             (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                                 ), (uVar14 & 1) != 0)) {
            pcVar35 = s_turn_interrupt_failed__108ac2322;
            bVar36 = (byte)&stack0x00001e30;
            uVar37 = (undefined7)((ulong)&stack0x00001e30 >> 8);
            uVar31 = SUB87(&stack0x00000430,0);
            uVar18 = (undefined1)((ulong)&stack0x00000430 >> 0x38);
            bVar32 = 0xd0;
            uVar33 = 0x10b208f;
            uVar34 = 0;
            pcVar39 = (char *)0x1;
            bVar40 = (byte)&stack0x000002d0;
            uVar41 = (undefined7)((ulong)&stack0x000002d0 >> 8);
            bVar42 = 1;
            uVar43 = 0;
            bVar44 = (byte)(
                           ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                           + 0x30);
            uVar45 = (undefined7)
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
              iVar13 = (**(code **)(unaff_x22 + 0x18))(puVar5,&stack0x00000f90);
              if (iVar13 != 0) {
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
              uVar27 = *(undefined8 *)
                        (
                        ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h249053ae11ab57afE
                        + 0x20);
              uVar25 = *(undefined8 *)
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
              iVar13 = (**(code **)(puVar5 + 0x18))(puVar4,&stack0x00001a90);
              unaff_x22 = puVar15;
              if (iVar13 != 0) {
                uVar31 = SUB87(&stack0x00002110,0);
                uVar18 = (undefined1)((ulong)&stack0x00002110 >> 0x38);
                bVar32 = 0x5c;
                uVar33 = 0x1011296;
                uVar34 = 0;
                in_stack_00001b38 = (undefined1)uVar27;
                in_stack_00001b39 = (undefined7)((ulong)uVar27 >> 8);
                in_stack_00001b30 = 2;
                in_stack_00001b31 = 0;
                in_stack_00001b40 = (undefined1)uVar25;
                in_stack_00001b41 = (undefined7)((ulong)uVar25 >> 8);
                lVar19 = *(long *)(puVar15 + 0x60);
                lVar23 = *(long *)(puVar15 + 0x50);
                pcVar39 = (char *)0x1;
                if (lVar23 == 0) {
                  pcVar39 = (char *)0x2;
                }
                in_stack_00001b48 = *(undefined4 *)(puVar15 + 8);
                in_stack_00001b4c = *(undefined4 *)(puVar15 + 0xc);
                pcVar35 = &stack0x00000f90;
                bVar36 = 1;
                bVar44 = 1;
                if (lVar19 == 0) {
                  bVar44 = 2;
                }
                in_stack_00001b50 = 0x4f;
                in_stack_00001b51 = 0xb39f;
                in_stack_00001b53 = 0x108;
                in_stack_00001b58 = SUB81(&stack0x00001e30,0);
                in_stack_00001b59 = (undefined7)((ulong)&stack0x00001e30 >> 8);
                bVar40 = (byte)lVar23;
                uVar41 = (undefined7)((ulong)lVar23 >> 8);
                bVar42 = (byte)*(undefined8 *)(puVar15 + 0x58);
                uVar43 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x58) >> 8);
                uVar45 = 0;
                in_stack_00001b20 = (undefined4)lVar19;
                in_stack_00001b24 = (undefined4)((ulong)lVar19 >> 0x20);
                in_stack_00001b28 = (undefined1)*(undefined8 *)(puVar15 + 0x68);
                in_stack_00001b29 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x68) >> 8);
                (**(code **)(puVar5 + 0x20))(puVar4,&stack0x00001b00);
              }
            }
          }
          if (pcVar21 != (char *)0x0) {
            _free(CONCAT71(in_stack_00002119,in_stack_00002118));
          }
          in_stack_00000040 = 1;
          in_stack_00002110 = pcVar21;
        }
      }
      goto LAB_1005fe618;
    }
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
      *(ulong *)(unaff_x19 + 0x5968) = CONCAT44(in_stack_00001b24,in_stack_00001b20);
      *(undefined8 *)(unaff_x19 + 0x5980) = *(undefined8 *)(unaff_x19 + 0x4f60);
      *(ulong *)(unaff_x19 + 0x5978) = CONCAT71(in_stack_00001b31,in_stack_00001b30);
      *(ulong *)(unaff_x19 + 0x5950) = CONCAT71(uVar41,bVar40);
      *(char **)(unaff_x19 + 0x5948) = pcVar39;
      *(ulong *)(unaff_x19 + 0x5960) = CONCAT71(uVar45,bVar44);
      *(ulong *)(unaff_x19 + 0x5958) = CONCAT71(uVar43,bVar42);
      *(undefined1 *)(unaff_x27 + 0xb7c) = 0;
      auVar30 = FUN_100b7d570(unaff_x19 + 0x5948,in_stack_00000048);
      uVar14 = auVar30._8_8_;
      if ((auVar30._0_8_ & 1) != 0) {
        uVar18 = 0x10;
        goto LAB_1006004cc;
      }
      FUN_100cbfd30(unaff_x19 + 0x5948);
      if (uVar14 != 0) {
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
           (((bRam000000010b62c168 - 1 < 2 ||
             ((bRam000000010b62c168 != 0 &&
              (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb3ac559736a2bb65E
                                  ), cVar11 != '\0')))) &&
            (uVar26 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb3ac559736a2bb65E
                                ), (uVar26 & 1) != 0)))) {
          FUN_100601bf4(&stack0x00001b00);
        }
        else {
          uVar27 = 
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
            iVar13 = (**(code **)(puVar15 + 0x18))(puVar5,&stack0x00001ae8);
            if (iVar13 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (uVar27,puVar5,puVar15,&stack0x00002110,&stack0x00001b00);
            }
          }
        }
        if ((uVar14 & 3) == 1) {
          uVar27 = *(undefined8 *)(uVar14 - 1);
          puVar24 = *(undefined8 **)(uVar14 + 7);
          pcVar9 = (code *)*puVar24;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(uVar27);
          }
          if (puVar24[1] != 0) {
            _free(uVar27);
          }
          _free((undefined8 *)(uVar14 - 1));
        }
      }
      (**(code **)(*(long *)(unaff_x19 + 0x4ec0) + 0x30))(*(undefined8 *)(unaff_x19 + 0x4eb8));
      if ((*(byte *)(unaff_x27 + 0xb13) & 1) != 0) {
        __ZN3std7process4exit17h656c4fcb5bd11385E(1);
LAB_100601058:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10060105c);
        (*pcVar9)();
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
      uVar27 = *(undefined8 *)(unaff_x19 + 0x4eb8);
      puVar24 = *(undefined8 **)(unaff_x19 + 0x4ec0);
      pcVar9 = (code *)*puVar24;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar27);
      }
      if (puVar24[1] != 0) {
        _free(uVar27);
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
      plVar20 = *(long **)(unaff_x19 + 0x2890);
      if (plVar20 != (long *)0x0) {
        lVar19 = *plVar20;
        *plVar20 = lVar19 + -1;
        LORelease();
        if (lVar19 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(unaff_x19 + 0x2890);
        }
      }
      unaff_x22 = (undefined *)0x0;
      *(undefined1 *)(unaff_x27 + 0xb1e) = 0;
      uVar27 = 0;
      *(undefined1 *)(unaff_x27 + 0xb09) = 1;
      goto LAB_1006004d4;
    }
    _memcpy(unaff_x19 + 0x5538,unaff_x19 + 0x5340,0x1f8);
    lVar19 = *(ulong *)(unaff_x19 + 0x5538) + 0x7fffffffffffffbf;
    if (*(ulong *)(unaff_x19 + 0x5538) < 0x8000000000000041) {
      lVar19 = 1;
    }
    if (lVar19 == 0) {
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
      auVar30 = (*(code *)(&UNK_1005ff0dc +
                          (ulong)*(ushort *)
                                  (&UNK_108c9aac6 +
                                  (*(long *)(unaff_x19 + 0x5af8) + 0x8000000000000001U &
                                  *(long *)(unaff_x19 + 0x5af8) >> 0x3f) * 2) * 4))();
      return auVar30;
    }
    if (lVar19 == 2) {
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00002110,s_3in_process_app_server_event_str_108afb9ae,&stack0x00001b00);
      if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
          ((bRam000000010b62c0f0 - 1 < 2 ||
           ((bRam000000010b62c0f0 != 0 &&
            (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                (&
                                 __ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                                ), cVar11 != '\0')))))) &&
         (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                             ), (uVar14 & 1) != 0)) {
        pcVar35 = &stack0x00001e30;
        bVar36 = 0xd0;
        uVar37 = 0x10b208f;
        bVar44 = (byte)(
                       ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                       + 0x30);
        uVar45 = (undefined7)
                 ((ulong)(
                         ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                         + 0x30) >> 8);
        FUN_100602628(&stack0x00001b00);
      }
      else {
        lVar19 = 
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
          iVar13 = (**(code **)(unaff_x22 + 0x18))(puVar15,&stack0x00001ad0);
          if (iVar13 != 0) {
            pcVar35 = s__108b1bd74;
            bVar36 = (byte)&stack0x00001e30;
            uVar37 = (undefined7)((ulong)&stack0x00001e30 >> 8);
            uVar31 = SUB87(&stack0x00000430,0);
            uVar18 = (undefined1)((ulong)&stack0x00000430 >> 0x38);
            bVar32 = 0xd0;
            uVar33 = 0x10b208f;
            uVar34 = 0;
            bVar44 = (byte)(
                           ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                           + 0x30);
            uVar45 = (undefined7)
                     ((ulong)(
                             ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h09e5448097f8b9c9E
                             + 0x30) >> 8);
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar19,puVar15,unaff_x22,&stack0x00000f90,&stack0x00001b00);
          }
        }
      }
      (**(code **)(*(long *)(unaff_x19 + 0x4ec0) + 0x28))
                (*(undefined8 *)(unaff_x19 + 0x4eb8),&stack0x00001b00);
      pcVar39 = in_stack_00002110;
      bVar40 = in_stack_00002118;
      uVar41 = in_stack_00002119;
      bVar42 = in_stack_00002120;
      uVar43 = in_stack_00002121;
    }
    else {
      *(undefined1 *)(unaff_x27 + 0xb16) = 1;
      unaff_x22 = (undefined *)(unaff_x19 + 0x5730);
      _memcpy(unaff_x22,unaff_x19 + 0x5340,0x1f8);
      uVar26 = *(ulong *)(unaff_x19 + 0x5730);
      uVar14 = uVar26 ^ 0x8000000000000000;
      if (-1 < (long)uVar26) {
        uVar14 = 1;
      }
      if (uVar14 == 0) {
        if ((((*(long *)(unaff_x19 + 0x5780) == *(long *)(unaff_x19 + 0x5140)) &&
             (iVar13 = _memcmp(*(undefined8 *)(unaff_x19 + 0x5778),
                               *(undefined8 *)(unaff_x19 + 0x5138)), iVar13 == 0)) &&
            (*(long *)(unaff_x19 + 0x5798) == *(long *)(unaff_x19 + 0x5128))) &&
           ((iVar13 = _memcmp(*(undefined8 *)(unaff_x19 + 0x5790),
                              *(undefined8 *)(unaff_x19 + 0x5120)), iVar13 == 0 &&
            ((*(byte *)(unaff_x27 + 0x981) & 1) == 0)))) goto LAB_100600540;
      }
      else if ((((uVar14 == 0xe) &&
                ((*(long *)(unaff_x19 + 0x57e8) == *(long *)(unaff_x19 + 0x5140) &&
                 (iVar13 = _memcmp(*(undefined8 *)(unaff_x19 + 0x57e0),
                                   *(undefined8 *)(unaff_x19 + 0x5138)), iVar13 == 0)))) &&
               (*(long *)(unaff_x19 + 0x5778) == *(long *)(unaff_x19 + 0x5128))) &&
              ((iVar13 = _memcmp(*(undefined8 *)(unaff_x19 + 0x5770),
                                 *(undefined8 *)(unaff_x19 + 0x5120)), iVar13 == 0 &&
               (*(byte *)(unaff_x27 + 0x9b2) - 1 < 2)))) {
LAB_100600540:
        *(undefined1 *)(unaff_x27 + 0xb13) = 1;
      }
      bVar10 = *(byte *)(unaff_x27 + 0x12);
      lVar19 = unaff_x19 + 0x4f60;
      *(long *)(unaff_x19 + 0x6260) = lVar19;
      plVar20 = (long *)(unaff_x19 + 0x4f58);
      *(long **)(unaff_x19 + 0x6268) = plVar20;
      *(undefined **)(unaff_x19 + 0x6270) = unaff_x22;
      *(undefined1 *)(in_stack_00000068 + 0x318) = 0;
      *(byte *)(in_stack_00000068 + 0x319) = bVar10;
      if ((((bVar10 & 1) == 0) && (uVar26 == 0x800000000000000e)) &&
         (*(long *)(unaff_x19 + 0x5790) == 0)) {
        *(long *)(unaff_x19 + 0x6258) = unaff_x19 + 0x5738;
        lVar29 = *plVar20;
        *plVar20 = lVar29 + 1;
        uVar27 = *(undefined8 *)(*(long *)(unaff_x19 + 0x6258) + 0xa8);
        lVar23 = *(long *)(*(long *)(unaff_x19 + 0x6258) + 0xb0);
        lVar22 = 1;
        if ((lVar23 != 0) && (lVar22 = _malloc(lVar23), lVar22 == 0)) {
          FUN_107c03c64(1,lVar23);
          goto LAB_100601058;
        }
        _memcpy(lVar22,uVar27,lVar23);
        *(undefined8 *)(unaff_x19 + 0x5948) = 0x8000000000000018;
        *(long *)(unaff_x19 + 0x5950) = lVar23;
        *(long *)(unaff_x19 + 0x5958) = lVar22;
        *(long *)(unaff_x19 + 0x5960) = lVar23;
        *(undefined1 *)(unaff_x27 + 0xb49) = 1;
        *(undefined8 *)(unaff_x19 + 0x5970) = 0x8000000000000000;
        *(long *)(unaff_x19 + 0x5978) = lVar29;
        *(long *)(unaff_x19 + 0x5b08) = lVar19;
        *(undefined **)(unaff_x19 + 0x5b10) = &UNK_108ca74eb;
        *(undefined8 *)(unaff_x19 + 0x5b18) = 0xb;
        unaff_x22 = (undefined *)(in_stack_00000068 + 0x2f0);
        *(undefined1 *)(in_stack_00000068 + 0x2f0) = 0;
        *(undefined **)(unaff_x19 + 0x5b20) = &UNK_108ca74eb;
        *(undefined8 *)(unaff_x19 + 0x5b28) = 0xb;
        _memcpy(unaff_x19 + 0x5b30,pbVar1,0x1c0);
        *(long *)(unaff_x19 + 0x5cf0) = lVar19;
        *(undefined1 *)(in_stack_00000068 + 0x2e8) = 0;
        FUN_100b76b88(&stack0x00001b00,unaff_x19 + 0x5b30,in_stack_00000048);
        if (pcVar39 == (char *)0x8000000000000001) {
          *unaff_x22 = 3;
          *(undefined1 *)(in_stack_00000068 + 0x318) = 3;
          uVar18 = 0xe;
          goto LAB_1006004cc;
        }
        uVar8 = CONCAT21(in_stack_00001b51,in_stack_00001b50);
        uVar6 = CONCAT44(in_stack_00001b4c,in_stack_00001b48);
        uVar25 = CONCAT44(in_stack_00001b24,in_stack_00001b20);
        uVar27 = CONCAT71(uVar45,bVar44);
        uVar34 = (undefined1)((uint7)uVar43 >> 0x30);
        uVar31 = (undefined7)CONCAT71(uVar41,bVar40);
        uVar18 = (undefined1)((uint7)uVar41 >> 0x30);
        _memcpy(&stack0x00000430,&stack0x00001b88,0x170);
        if (*(char *)(in_stack_00000068 + 0x2e8) == '\x03') {
          FUN_100cbc1e8(unaff_x19 + 0x5ed0);
          if (*(long *)(unaff_x19 + 0x5eb8) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x5ec0));
          }
          *(undefined2 *)(in_stack_00000068 + 0x2e9) = 0;
          if (pcVar39 != (char *)0x8000000000000000) goto LAB_1006007e0;
LAB_100600714:
          in_stack_00001b4c = (undefined4)(in_stack_00001b53 >> 8);
          in_stack_00001b51 = (undefined2)in_stack_00001b59;
          pcVar21 = (char *)CONCAT17(uVar18,uVar31);
          uVar41 = (undefined7)(CONCAT17(uVar34,(int7)CONCAT71(uVar43,bVar42)) >> 8);
          bVar10 = (byte)in_stack_00001b20;
          in_stack_00001b20 = (undefined4)CONCAT71(in_stack_00001b29,in_stack_00001b28);
          in_stack_00001b24 = (undefined4)((uint7)in_stack_00001b29 >> 0x18);
          if (*(long *)(unaff_x19 + 0x5b28) == 0) {
            iVar13 = __ZN81__LT_codex_app_server_client__TypedRequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h179c8e79187c3c28E
                               (&stack0x00001b00,&stack0x00002090);
            if (iVar13 != 0) {
              FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x0000247f,&UNK_10b235000,&UNK_10b2346c0);
              goto LAB_100601058;
            }
            in_stack_00002378 = 1;
            in_stack_00002370 = 0;
            uVar27 = 0;
          }
          else {
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00002370,s___108ac1f1a,&stack0x00002090);
            uVar27 = in_stack_00002380;
          }
          FUN_100e15cd8(&stack0x00001b00);
          uVar33 = (undefined6)((ulong)in_stack_00002378 >> 8);
          uVar34 = (undefined1)((ulong)in_stack_00002378 >> 0x38);
          uVar31 = (undefined7)in_stack_00002370;
          uVar18 = (undefined1)((ulong)in_stack_00002370 >> 0x38);
          bVar32 = (byte)in_stack_00002378;
          bVar40 = bVar42;
          bVar42 = bVar44;
          uVar43 = uVar45;
          bVar44 = bVar10;
          uVar45 = (int7)((ulong)uVar25 >> 8);
          in_stack_00001b28 = in_stack_00001b30;
          in_stack_00001b29 = in_stack_00001b31;
          in_stack_00001b30 = in_stack_00001b38;
          in_stack_00001b31 = in_stack_00001b39;
          in_stack_00001b38 = in_stack_00001b40;
          in_stack_00001b39 = in_stack_00001b41;
          in_stack_00001b40 = (char)in_stack_00001b48;
          in_stack_00001b41 = (int7)((ulong)uVar6 >> 8);
          in_stack_00001b48 = (int)CONCAT53(in_stack_00001b53,uVar8);
          in_stack_00001b50 = in_stack_00001b58;
          in_stack_00001b53 = uVar38;
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
          in_stack_00002380 = uVar27;
        }
        else {
          if (*(char *)(in_stack_00000068 + 0x2e8) == '\0') {
            FUN_100e44f40(unaff_x19 + 0x5b30);
          }
          if (pcVar39 == (char *)0x8000000000000000) goto LAB_100600714;
LAB_1006007e0:
          uVar33 = (undefined6)uVar43;
          _memcpy(&stack0x00001e30,&stack0x00000430,0x170);
          bVar32 = bVar42;
          pcVar21 = pcVar39;
        }
        uVar25 = CONCAT17(uVar34,CONCAT61(uVar33,bVar32));
        lVar19 = CONCAT17(uVar18,uVar31);
        _memcpy(&stack0x00001010,&stack0x00001e30,0x170);
        *unaff_x22 = 1;
        _memcpy(&stack0x00002110,&stack0x00000fa8,0x1d8);
        FUN_100d64818(pbVar1);
        if (pcVar39 == (char *)0x8000000000000000) {
          if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
              ((bRam000000010b62c1e0 - 1 < 2 ||
               ((bRam000000010b62c1e0 != 0 &&
                (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                    (&
                                     __ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                                    ), cVar11 != '\0')))))) &&
             (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                 (
                                 ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                                 ), (uVar14 & 1) != 0)) {
            pcVar35 = &stack0x00001e30;
            bVar36 = 0x5c;
            uVar37 = 0x1011296;
            uVar31 = 0x108ac2612;
            uVar18 = 0;
            bVar32 = (byte)&stack0x00000430;
            uVar33 = (undefined6)((ulong)&stack0x00000430 >> 8);
            uVar34 = (undefined1)((ulong)&stack0x00000430 >> 0x38);
            pcVar21 = (char *)0x1;
            bVar40 = (byte)&stack0x000023f0;
            uVar41 = (undefined7)((ulong)&stack0x000023f0 >> 8);
            bVar42 = 1;
            uVar43 = 0;
            bVar44 = (byte)(
                           ___ZN10codex_exec35maybe_backfill_turn_completed_items28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hcf4ed8b0b32c696bE
                           + 0x30);
            uVar45 = (undefined7)
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
              iVar13 = (**(code **)(unaff_x22 + 0x18))(puVar5,&stack0x00000f90);
              if (iVar13 != 0) {
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
              uVar27 = *(undefined8 *)
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
              iVar13 = (**(code **)(puVar5 + 0x18))(puVar4,&stack0x000023d0);
              unaff_x22 = puVar15;
              if (iVar13 != 0) {
                lVar23 = *(long *)(puVar15 + 0x60);
                lVar22 = *(long *)(puVar15 + 0x50);
                pcVar21 = (char *)0x1;
                if (lVar22 == 0) {
                  pcVar21 = (char *)0x2;
                }
                in_stack_00001b48 = *(undefined4 *)(puVar15 + 8);
                in_stack_00001b4c = *(undefined4 *)(puVar15 + 0xc);
                uVar31 = SUB87(&stack0x00000f90,0);
                uVar18 = (undefined1)((ulong)&stack0x00000f90 >> 0x38);
                bVar32 = 1;
                pcVar35 = &stack0x000002d0;
                bVar36 = 0x98;
                uVar37 = 0x1061c20;
                bVar44 = 1;
                if (lVar23 == 0) {
                  bVar44 = 2;
                }
                in_stack_00001b38 = (undefined1)uVar27;
                in_stack_00001b39 = (undefined7)((ulong)uVar27 >> 8);
                in_stack_00001b30 = 2;
                in_stack_00001b31 = 0;
                in_stack_00001b40 = (undefined1)uVar6;
                in_stack_00001b41 = (undefined7)((ulong)uVar6 >> 8);
                in_stack_00001b50 = 0x4f;
                in_stack_00001b51 = 0xb39f;
                in_stack_00001b53 = 0x108;
                in_stack_00001b58 = SUB81(&stack0x00000430,0);
                in_stack_00001b59 = (undefined7)((ulong)&stack0x00000430 >> 8);
                bVar40 = (byte)lVar22;
                uVar41 = (undefined7)((ulong)lVar22 >> 8);
                bVar42 = (byte)*(undefined8 *)(puVar15 + 0x58);
                uVar43 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x58) >> 8);
                uVar45 = 0;
                in_stack_00001b20 = (undefined4)lVar23;
                in_stack_00001b24 = (undefined4)((ulong)lVar23 >> 0x20);
                in_stack_00001b28 = (undefined1)*(undefined8 *)(puVar15 + 0x68);
                in_stack_00001b29 = (undefined7)((ulong)*(undefined8 *)(puVar15 + 0x68) >> 8);
                (**(code **)(puVar5 + 0x20))(puVar4,&stack0x00001b00);
              }
            }
          }
          pcVar39 = pcVar21;
          if (lVar19 != 0) {
            _free(uVar25);
          }
        }
        else {
          uVar43 = (undefined7)((ulong)uVar25 >> 8);
          bVar40 = (byte)uVar31;
          uVar41 = (undefined7)((ulong)lVar19 >> 8);
          bVar44 = (byte)uVar27;
          uVar45 = (undefined7)((ulong)uVar27 >> 8);
          _memcpy(&stack0x00001b20,&stack0x00002110,0x1d8);
          __ZN10codex_exec21turn_items_for_thread17had0ae636b3517f7bE
                    (&stack0x000023b0,&stack0x00001b00,
                     *(undefined8 *)(*(long *)(unaff_x19 + 0x6258) + 0x38),
                     *(undefined8 *)(*(long *)(unaff_x19 + 0x6258) + 0x40));
          if (in_stack_000023b0 != -0x8000000000000000) {
            lVar23 = *(long *)(unaff_x19 + 0x6258);
            puVar5 = *(undefined **)(lVar23 + 0x50);
            lVar19 = *(long *)(lVar23 + 0x58) + 1;
            puVar15 = puVar5;
            while (lVar19 = lVar19 + -1, lVar19 != 0) {
              puVar15 = puVar15 + 0xf8;
              FUN_100e42904();
              unaff_x22 = puVar15;
            }
            if (*(long *)(lVar23 + 0x48) != 0) {
              _free(puVar5);
            }
            lVar19 = *(long *)(unaff_x19 + 0x6258);
            *(undefined8 *)(lVar19 + 0x50) = in_stack_000023b8;
            *(long *)(lVar19 + 0x48) = in_stack_000023b0;
            *(undefined8 *)(lVar19 + 0x58) = in_stack_000023c0;
          }
          FUN_100e4affc(&stack0x00001b00);
          bVar42 = bVar32;
        }
      }
      *(undefined1 *)(in_stack_00000068 + 0x318) = 1;
      uVar14 = __ZN10codex_exec27should_process_notification17h37cae296b8b63163E
                         (unaff_x19 + 0x5730,*(undefined8 *)(unaff_x19 + 0x5138),
                          *(undefined8 *)(unaff_x19 + 0x5140),*(undefined8 *)(unaff_x19 + 0x5120),
                          *(undefined8 *)(unaff_x19 + 0x5128));
      if ((uVar14 & 1) != 0) {
        uVar27 = *(undefined8 *)(unaff_x19 + 0x4eb8);
        unaff_x22 = *(undefined **)(unaff_x19 + 0x4ec0);
        *(undefined1 *)(unaff_x27 + 0xb16) = 0;
        _memcpy(&stack0x00001b00,unaff_x19 + 0x5730,0x1f8);
        uVar14 = (**(code **)(unaff_x22 + 0x20))(uVar27,&stack0x00001b00);
        if ((uVar14 & 1) != 0) {
          *(long *)(unaff_x19 + 0x5948) = unaff_x19 + 0x4f60;
          *(long *)(unaff_x19 + 0x5950) = unaff_x19 + 0x4f58;
          *(undefined8 *)(unaff_x19 + 0x5958) = *(undefined8 *)(unaff_x19 + 0x5138);
          *(undefined8 *)(unaff_x19 + 0x5960) = *(undefined8 *)(unaff_x19 + 0x5140);
          puVar2 = (undefined1 *)(in_stack_00000068 + 0x318);
          *(undefined1 *)(in_stack_00000068 + 0x318) = 0;
          uVar27 = *(undefined8 *)(unaff_x19 + 0x5948);
          uVar25 = *(undefined8 *)(unaff_x19 + 0x5958);
          lVar19 = *(long *)(unaff_x19 + 0x5960);
          lVar23 = **(long **)(unaff_x19 + 0x5950);
          **(long **)(unaff_x19 + 0x5950) = lVar23 + 1;
          if (lVar19 == 0) {
            lVar22 = 1;
          }
          else {
            lVar22 = _malloc(lVar19);
            if (lVar22 == 0) {
              FUN_107c03c64(1,lVar19);
              goto LAB_100601058;
            }
          }
          _memcpy(lVar22,uVar25,lVar19);
          *(undefined8 *)(unaff_x19 + 0x5968) = 0x8000000000000005;
          *(long *)(unaff_x19 + 0x5970) = lVar19;
          *(long *)(unaff_x19 + 0x5978) = lVar22;
          *(long *)(unaff_x19 + 0x5980) = lVar19;
          *(undefined8 *)(unaff_x19 + 0x5988) = 0x8000000000000000;
          *(long *)(unaff_x19 + 0x5990) = lVar23;
          *(undefined8 *)(unaff_x19 + 0x5b28) = uVar27;
          *(undefined **)(unaff_x19 + 0x5b30) = &UNK_108ca7339;
          *(undefined8 *)(unaff_x19 + 0x5b38) = 0x12;
          unaff_x22 = (undefined *)(in_stack_00000068 + 0x310);
          *(undefined1 *)(in_stack_00000068 + 0x310) = 0;
          *(undefined **)(unaff_x19 + 0x5b40) = &UNK_108ca7339;
          *(undefined8 *)(unaff_x19 + 0x5b48) = 0x12;
          _memcpy(unaff_x19 + 0x5b50,unaff_x19 + 0x5968,0x1c0);
          *(undefined8 *)(unaff_x19 + 0x5d10) = uVar27;
          *(undefined1 *)(in_stack_00000068 + 0x308) = 0;
          FUN_100b77b84(&stack0x00001b00,unaff_x19 + 0x5b50,in_stack_00000048);
          if (pcVar39 != (char *)0x8000000000000004) {
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
            if (pcVar39 == (char *)0x8000000000000003) {
              *unaff_x22 = 1;
              pcVar35 = (char *)0x8000000000000000;
              bVar36 = bVar40;
              uVar37 = uVar31;
            }
            else {
              if (*(long *)(unaff_x19 + 0x5b48) == 0) {
                iVar13 = __ZN81__LT_codex_app_server_client__TypedRequestError_u20_as_u20_core__fmt__Display_GT_3fmt17h179c8e79187c3c28E
                                   (&stack0x00001b00,&stack0x00002110);
                if (iVar13 != 0) {
                  FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x0000247f,&UNK_10b235000,&UNK_10b2346c0);
                  goto LAB_100601058;
                }
                bVar36 = 1;
                uVar37 = 0;
                pcVar35 = (char *)0x0;
              }
              else {
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (&stack0x00000430,s___108ac1f1a,&stack0x00002110);
              }
              FUN_100e15cd8(&stack0x00001b00);
              *unaff_x22 = 1;
              if (pcVar35 == (char *)0x8000000000000001) goto LAB_1005f9dc8;
            }
            FUN_100d64818(unaff_x19 + 0x5968);
            if (pcVar35 == (char *)0x8000000000000000) {
              *puVar2 = 1;
            }
            else {
              *puVar2 = 1;
              if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                  ((bRam000000010b62c138 - 1 < 2 ||
                   ((bRam000000010b62c138 != 0 &&
                    (cVar11 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                        (&
                                         __ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                        ), cVar11 != '\0')))))) &&
                 (uVar14 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                     (
                                     ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                     ), (uVar14 & 1) != 0)) {
                pcVar39 = (char *)0x1;
                bVar40 = (byte)&stack0x00000430;
                uVar41 = (undefined7)((ulong)&stack0x00000430 >> 8);
                bVar42 = 1;
                uVar43 = 0;
                bVar44 = (byte)(
                               ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                               + 0x30);
                uVar45 = (undefined7)
                         ((ulong)(
                                 ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                 + 0x30) >> 8);
                FUN_100601d30(&stack0x00001b00);
              }
              else {
                lVar19 = 
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
                  iVar13 = (**(code **)(unaff_x22 + 0x18))(puVar15,&stack0x00001ab8);
                  if (iVar13 != 0) {
                    pcVar39 = (char *)0x1;
                    bVar40 = (byte)&stack0x000002d0;
                    uVar41 = (undefined7)((ulong)&stack0x000002d0 >> 8);
                    bVar42 = 1;
                    uVar43 = 0;
                    bVar44 = (byte)(
                                   ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                   + 0x30);
                    uVar45 = (undefined7)
                             ((ulong)(
                                     ___ZN10codex_exec16run_exec_session28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h4104ab19cf523efaE
                                     + 0x30) >> 8);
                    __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                              (lVar19,puVar15,unaff_x22,&stack0x00000f90,&stack0x00001b00);
                  }
                }
              }
              if (pcVar35 != (char *)0x0) {
                _free(CONCAT71(uVar37,bVar36));
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
  } while( true );
}

