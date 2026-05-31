
/* WARNING: Removing unreachable block (ram,0x000100284794) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1002842c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  uint extraout_w1;
  undefined8 *puVar14;
  short *psVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  uint *puVar19;
  char *pcVar20;
  char *pcVar21;
  long *unaff_x19;
  long lVar23;
  long unaff_x20;
  long *plVar24;
  ulong *unaff_x21;
  long *unaff_x22;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 *unaff_x23;
  long lVar27;
  char *unaff_x24;
  long unaff_x25;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long *unaff_x26;
  long *plVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  char *unaff_x28;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  long *in_stack_00000048;
  long *in_stack_00000050;
  long *in_stack_00000058;
  long *in_stack_00000080;
  long *in_stack_00000090;
  long *in_stack_00000098;
  long *in_stack_000000a0;
  long *plStack00000000000000b0;
  long *plStack00000000000000b8;
  long *plStack00000000000000c0;
  long *plStack00000000000000c8;
  char *pcStack00000000000000d0;
  undefined8 *puStack00000000000000d8;
  undefined8 *puStack00000000000000e0;
  undefined *in_stack_000000e8;
  undefined *in_stack_000000f0;
  char *pcStack0000000000000100;
  undefined8 *puStack0000000000000108;
  undefined4 uStack0000000000000170;
  undefined4 uStack0000000000000174;
  long *in_stack_00000178;
  long *in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long *in_stack_00000198;
  long *in_stack_000001a0;
  undefined *in_stack_000001a8;
  char *in_stack_000001b8;
  long in_stack_000001c0;
  long in_stack_000001c8;
  long *in_stack_000001d0;
  long *in_stack_000001d8;
  long *in_stack_000001e0;
  long *in_stack_000001e8;
  long in_stack_00000208;
  char *in_stack_00000218;
  long *in_stack_00000220;
  long *in_stack_00000228;
  long *in_stack_00000230;
  long *in_stack_00000238;
  undefined8 *in_stack_00000248;
  undefined *in_stack_00000250;
  char *pcVar22;
  
code_r0x0001002842c0:
  puStack0000000000000108 = &stack0x00000090;
  pcStack0000000000000100 = s_invalid_cert_der_108aba1c0;
  plStack00000000000000b0 = (long *)0x0;
  plStack00000000000000c8 = in_stack_00000058;
  plStack00000000000000c0 = in_stack_00000050;
  pcStack00000000000000d0 =
       "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rustls-0.23.36/src/webpki/anchors.rs"
  ;
  puStack00000000000000e0 = in_stack_00000038;
  puStack00000000000000d8 = in_stack_00000030;
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  plStack00000000000000b8 = param_1;
  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000000b0);
LAB_100284338:
  if (3 < *unaff_x21) {
    in_stack_00000090 = (long *)&stack0x000001d0;
    in_stack_00000098 = (long *)&DAT_1002c8004;
    in_stack_000000e8 = &UNK_108c77ace;
    in_stack_000000f0 = (undefined *)0x17;
    puStack0000000000000108 = &stack0x00000090;
    pcStack0000000000000100 = s_certificate_parsing_failed__108aba1d4;
    plStack00000000000000b0 = (long *)0x0;
    plStack00000000000000b8 = (long *)&UNK_108c77ace;
    plStack00000000000000c8 = in_stack_00000058;
    plStack00000000000000c0 = in_stack_00000050;
    pcStack00000000000000d0 =
         "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rustls-0.23.36/src/webpki/anchors.rs"
    ;
    puStack00000000000000e0 = in_stack_00000028;
    puStack00000000000000d8 = in_stack_00000020;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000000b0);
  }
  unaff_x20 = unaff_x20 + 1;
  in_stack_00000190 = unaff_x20;
  FUN_1002be5c0(&stack0x000001d0);
  if (((ulong)unaff_x28 & 0x7fffffffffffffff) != 0) goto LAB_1002844f0;
  while (plVar11 = unaff_x22 + 3, unaff_x22 = unaff_x26, plVar11 != unaff_x19) {
    while( true ) {
      unaff_x26 = unaff_x22 + 3;
      unaff_x28 = (char *)*unaff_x22;
      if (unaff_x28 == unaff_x24) {
        in_stack_000001a0 = unaff_x26;
        if ((long)unaff_x19 - (long)unaff_x26 != 0) {
          uVar25 = (ulong)((long)unaff_x19 - (long)unaff_x26) / 0x18;
          plVar11 = unaff_x22 + 4;
          do {
            if ((plVar11[-1] & 0x7fffffffffffffffU) != 0) {
              _free(*plVar11);
            }
            plVar11 = plVar11 + 3;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
        goto LAB_100284554;
      }
      lVar23 = unaff_x22[1];
      unaff_x23[2] = unaff_x22[2];
      unaff_x23[1] = lVar23;
      in_stack_000001b8 = unaff_x28;
      __ZN6webpki12trust_anchor24anchor_from_trusted_cert17hb4f2257dc7de0e83E
                (&stack0x00000218,&stack0x000001b8);
      if (in_stack_00000218 == unaff_x24) {
        in_stack_000001d0 = in_stack_00000220;
        in_stack_000001d8 = in_stack_00000228;
        in_stack_000001e0 = in_stack_00000230;
        in_stack_000001e8 = in_stack_00000238;
        if (*unaff_x21 < 5) goto LAB_100284338;
        in_stack_00000090 = (long *)&stack0x00000208;
        in_stack_00000098 = (long *)&DAT_1002ae368;
        param_1 = (long *)&UNK_108c77ace;
        in_stack_000000e8 = &UNK_108c77ace;
        in_stack_000000f0 = (undefined *)0x17;
        in_stack_00000208 = in_stack_000001c0;
        goto code_r0x0001002842c0;
      }
      __ZN16rustls_pki_types11TrustAnchor8to_owned17h6581937c8ef579a4E
                (&stack0x000000b0,&stack0x00000218);
      plVar11 = in_stack_00000180;
      if (in_stack_00000180 == (long *)CONCAT44(uStack0000000000000174,uStack0000000000000170)) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h37aa44340c53dd89E(&stack0x00000170);
      }
      plVar13 = in_stack_00000178 + (long)plVar11 * 9;
      plVar13[1] = (long)plStack00000000000000b8;
      *plVar13 = (long)plStack00000000000000b0;
      plVar13[3] = (long)plStack00000000000000c8;
      plVar13[2] = (long)plStack00000000000000c0;
      plVar13[5] = (long)puStack00000000000000d8;
      plVar13[4] = (long)pcStack00000000000000d0;
      plVar13[7] = (long)in_stack_000000e8;
      plVar13[6] = (long)puStack00000000000000e0;
      plVar13[8] = (long)in_stack_000000f0;
      in_stack_00000180 = (long *)((long)plVar11 + 1);
      unaff_x25 = unaff_x25 + 1;
      in_stack_00000188 = unaff_x25;
      if (((ulong)in_stack_00000218 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000220);
      }
      if (((ulong)in_stack_00000230 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000238);
      }
      if ((-0x7fffffffffffffff < (long)in_stack_00000248) &&
         (in_stack_00000248 != (undefined8 *)0x0)) {
        _free(in_stack_00000250);
      }
      unaff_x23 = &stack0x000001b8;
      unaff_x24 = (char *)0x8000000000000001;
      unaff_x21 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
      unaff_x19 = in_stack_00000048;
      if (((ulong)unaff_x28 & 0x7fffffffffffffff) == 0) break;
LAB_1002844f0:
      _free(in_stack_000001c0);
      plVar11 = unaff_x22 + 3;
      unaff_x22 = unaff_x26;
      if (plVar11 == unaff_x19) goto LAB_100284554;
    }
  }
LAB_100284554:
  if (in_stack_00000080 != (long *)0x0) {
    _free(in_stack_00000008);
  }
  if (3 < *unaff_x21) {
    in_stack_000000e8 = &UNK_108c77ace;
    in_stack_000000f0 = (undefined *)0x17;
    puStack0000000000000108 = (undefined8 *)&stack0x00000218;
    pcStack0000000000000100 = s__add_parsable_certificates_proce_108ad7864;
    plStack00000000000000b0 = (long *)0x0;
    plStack00000000000000b8 = (long *)&UNK_108c77ace;
    plStack00000000000000c8 = (long *)0x0;
    plStack00000000000000c0 = (long *)0x17;
    pcStack00000000000000d0 =
         "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rustls-0.23.36/src/webpki/anchors.rs"
    ;
    puStack00000000000000e0 = (undefined8 *)0x4;
    puStack00000000000000d8 = (undefined8 *)0x67;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    (**(code **)(puVar1 + 0x20))(puVar2,&stack0x000000b0);
  }
  if (*(long *)(in_stack_00000010 + 0x10) != 0) {
    lVar23 = *(long *)(in_stack_00000010 + 8);
    lVar31 = lVar23 + *(long *)(in_stack_00000010 + 0x10) * 0x18;
    do {
      plVar11 = *(long **)(lVar23 + 8);
      plVar13 = *(long **)(lVar23 + 0x10);
      plVar10 = (long *)_malloc(0x400);
      if (plVar10 == (long *)0x0) {
        FUN_107c03c64(1,0x400);
        goto LAB_100285330;
      }
      in_stack_000001d0 = (long *)0x5;
      FUN_100268a94(&stack0x000000b0,&stack0x00000218);
      plVar4 = plStack00000000000000c0;
      plVar32 = plStack00000000000000b8;
      plVar30 = plStack00000000000000b0;
      if (plStack00000000000000b0 == (long *)0x8000000000000001) {
        _free(plVar10);
        plVar30 = (long *)0x0;
        in_stack_00000080 = (long *)0x0;
        plVar24 = (long *)0x8;
      }
      else {
        plVar24 = (long *)_malloc(0x60);
        if (plVar24 == (long *)0x0) {
          FUN_107c03c64(8,0x60);
          goto LAB_100285330;
        }
        *plVar24 = (long)plVar30;
        plVar24[1] = (long)plVar32;
        plVar24[2] = (long)plVar4;
        plStack00000000000000b0 = (long *)0x400;
        plStack00000000000000c0 = (long *)0x0;
        plStack00000000000000b8 = plVar10;
        plStack00000000000000c8 = plVar11;
        pcStack00000000000000d0 = (char *)plVar13;
        puStack00000000000000d8 = &stack0x000001d0;
        FUN_100268a94(&stack0x00000198,&stack0x000000b0);
        if (in_stack_00000198 == (long *)0x8000000000000001) {
          plVar30 = (long *)0x1;
          in_stack_00000080 = (long *)0x4;
        }
        else {
          lVar18 = 0;
          lVar27 = 0x60;
          plVar24[3] = (long)in_stack_00000198;
          plVar24[4] = (long)in_stack_000001a0;
          plVar24[5] = (long)in_stack_000001a8;
          plVar32 = (long *)0x4;
          plVar30 = (long *)0x2;
          in_stack_00000080 = (long *)0x4;
          while (FUN_100268a94(&stack0x00000198,&stack0x000000b0), puVar1 = in_stack_000001a8,
                plVar5 = in_stack_000001a0, plVar4 = in_stack_00000198,
                in_stack_00000198 != (long *)0x8000000000000001) {
            if (plVar30 == in_stack_00000080) {
              if (plVar30 < (long *)0x2aaaaaaaaaaaaab) {
                plVar24 = (long *)_realloc(plVar24,lVar27);
                in_stack_00000080 = plVar32;
                if (plVar24 != (long *)0x0) goto LAB_100284838;
                in_stack_00000090 = (long *)0x8;
                plVar11 = (long *)&stack0x00000208;
              }
              else {
                lVar27 = 0;
                plVar11 = (long *)&stack0x00000090;
              }
              *plVar11 = lVar27;
              FUN_107c03c64(in_stack_00000090,in_stack_00000208);
              goto LAB_100285330;
            }
LAB_100284838:
            *(long **)((long)plVar24 + lVar18 + 0x30) = plVar4;
            *(long **)((long)plVar24 + lVar18 + 0x38) = plVar5;
            *(undefined **)((long)plVar24 + lVar18 + 0x40) = puVar1;
            plVar30 = (long *)((long)plVar30 + 1);
            plVar32 = (long *)((long)plVar32 + 2);
            lVar27 = lVar27 + 0x30;
            lVar18 = lVar18 + 0x18;
          }
        }
        if (plStack00000000000000b0 != (long *)0x0) {
          _free(plStack00000000000000b8);
        }
      }
      plVar6 = in_stack_000001e8;
      plVar5 = in_stack_000001e0;
      plVar4 = in_stack_000001d8;
      plVar32 = in_stack_000001d0;
      if (in_stack_000001d0 != (long *)0x5) {
        if (plVar30 != (long *)0x0) {
          plVar11 = plVar24 + 1;
          do {
            if ((plVar11[-1] & 0x7fffffffffffffffU) != 0) {
              _free(*plVar11);
            }
            plVar11 = plVar11 + 3;
            plVar30 = (long *)((long)plVar30 + -1);
          } while (plVar30 != (long *)0x0);
        }
        if (in_stack_00000080 != (long *)0x0) {
          _free(plVar24);
        }
        plStack00000000000000b0 = plVar32;
        plStack00000000000000b8 = plVar4;
        plStack00000000000000c0 = plVar5;
        plStack00000000000000c8 = plVar6;
        FUN_107c05cb4(&UNK_108c74cd1,0x15,&stack0x000000b0,&UNK_10b1f57c8,&UNK_10b1f44b0);
        goto LAB_100285330;
      }
      in_stack_000001e8 = plVar24 + (long)plVar30 * 3;
      plVar32 = plVar24;
      in_stack_000001d0 = plVar24;
      if (plVar30 != (long *)0x0) {
        in_stack_000001e0 = in_stack_00000080;
        plVar32 = plVar24 + 3;
        if ((char *)*plVar24 != (char *)0x8000000000000001) {
          in_stack_000001c8 = plVar24[2];
          in_stack_000001c0 = plVar24[1];
          in_stack_000001b8 = (char *)*plVar24;
          in_stack_000001d8 = plVar24;
          __ZN6rustls6webpki7anchors13RootCertStore3add17haab0da86cf0c584bE
                    (&stack0x00000218,&stack0x00000170,&stack0x000001b8);
          plStack00000000000000b0 = (long *)0x400;
          plStack00000000000000b8 = plVar10;
          plStack00000000000000c0 = (long *)0x0;
          plStack00000000000000c8 = plVar11;
          pcStack00000000000000d0 = (char *)plVar13;
          puStack00000000000000d8 = &stack0x000001d0;
          puStack00000000000000e0 = in_stack_00000248;
          in_stack_000000e8 = in_stack_00000250;
          in_stack_000001d8 = plVar32;
          FUN_107c05cb4(&UNK_108c74ce6,0xd,&stack0x000000b0,&UNK_10b1f56c8,&UNK_10b1f44c8);
          goto LAB_100285330;
        }
      }
      in_stack_000001e0 = in_stack_00000080;
      in_stack_000001d8 = plVar32;
      if ((long)in_stack_000001e8 - (long)plVar32 != 0) {
        uVar25 = (ulong)((long)in_stack_000001e8 - (long)plVar32) / 0x18;
        plVar32 = plVar32 + 1;
        do {
          if ((plVar32[-1] & 0x7fffffffffffffffU) != 0) {
            _free(*plVar32);
          }
          plVar32 = plVar32 + 3;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
      if (in_stack_00000080 != (long *)0x0) {
        _free(plVar24);
      }
      lVar23 = lVar23 + 0x18;
    } while (lVar23 != lVar31);
  }
  in_stack_00000090 = (long *)CONCAT44(uStack0000000000000174,uStack0000000000000170);
  in_stack_00000098 = in_stack_00000178;
  in_stack_000000a0 = in_stack_00000180;
  plVar11 = (long *)_malloc(0x90);
  if (plVar11 == (long *)0x0) {
    FUN_107c03c64(8,0x90);
  }
  else {
    plVar11[0xd] = (long)&UNK_10b4656e0;
    plVar11[0xc] = 0;
    plVar11[0xf] = (long)&UNK_10b465738;
    plVar11[0xe] = 0;
    plVar11[0x11] = (long)&UNK_10b465790;
    plVar11[0x10] = 0;
    plVar11[5] = (long)&UNK_10b4654c8;
    plVar11[4] = 1;
    plVar11[7] = (long)&UNK_10b465590;
    plVar11[6] = 0;
    plVar11[9] = (long)&UNK_10b4655f0;
    plVar11[8] = 0;
    plVar11[0xb] = (long)&UNK_10b465688;
    plVar11[10] = 0;
    plVar11[1] = (long)&UNK_10b4652c8;
    *plVar11 = 1;
    plVar11[3] = (long)&UNK_10b4653f8;
    plVar11[2] = 1;
    puVar12 = (undefined8 *)_malloc(0x40);
    if (puVar12 == (undefined8 *)0x0) {
      FUN_107c03c64(8,0x40);
    }
    else {
      puVar12[1] = &UNK_10b465048;
      *puVar12 = &UNK_10b465000;
      puVar12[3] = &UNK_10b464f60;
      puVar12[2] = &UNK_10b464f48;
      puVar12[5] = &UNK_10b464f60;
      puVar12[4] = &UNK_10b465098;
      puVar12[7] = &UNK_10b464f60;
      puVar12[6] = &UNK_10b4650b0;
      plVar13 = (long *)_malloc(0x40);
      if (plVar13 != (long *)0x0) {
        *plVar13 = 1;
        plVar13[1] = (long)&UNK_10b4652c8;
        plStack00000000000000b0 = (long *)0x4;
        plStack00000000000000c0 = (long *)0x1;
        lVar23 = 4;
        plStack00000000000000b8 = plVar13;
LAB_100284a5c:
        plVar10 = plStack00000000000000c0;
        lVar31 = plVar11[1];
        lVar27 = -lVar23;
        psVar15 = (short *)(&UNK_108c74c46 + lVar23);
        do {
          sVar3 = psVar15[-1];
          if (sVar3 == 0x178) {
            sVar3 = *psVar15;
            if ((*(short *)(lVar31 + 0x48) == 0x178) && (*(short *)(lVar31 + 0x4a) == sVar3))
            goto LAB_100284c30;
            lVar18 = plVar11[3];
            if ((*(short *)(lVar18 + 0x48) == 0x178) && (*(short *)(lVar18 + 0x4a) == sVar3))
            goto LAB_100284c44;
            lVar18 = plVar11[5];
            if ((*(short *)(lVar18 + 0x48) == 0x178) && (*(short *)(lVar18 + 0x4a) == sVar3))
            goto LAB_100284c5c;
            lVar18 = plVar11[7];
            if ((*(short *)(lVar18 + 0x48) == 0x178) && (*(short *)(lVar18 + 0x4a) == sVar3))
            goto LAB_100284c74;
            lVar18 = plVar11[9];
            if ((*(short *)(lVar18 + 0x48) == 0x178) && (*(short *)(lVar18 + 0x4a) == sVar3))
            goto LAB_100284c90;
            lVar18 = plVar11[0xb];
            if ((*(short *)(lVar18 + 0x48) == 0x178) && (*(short *)(lVar18 + 0x4a) == sVar3))
            goto LAB_100284ca8;
            lVar18 = plVar11[0xd];
            if ((*(short *)(lVar18 + 0x48) == 0x178) && (*(short *)(lVar18 + 0x4a) == sVar3))
            goto LAB_100284cc4;
            lVar18 = plVar11[0xf];
            if ((*(short *)(lVar18 + 0x48) == 0x178) && (*(short *)(lVar18 + 0x4a) == sVar3))
            goto LAB_100284ce0;
            lVar18 = plVar11[0x11];
            if ((*(short *)(lVar18 + 0x48) == 0x178) && (*(short *)(lVar18 + 0x4a) == sVar3))
            goto LAB_100284c14;
          }
          else {
            if (*(short *)(lVar31 + 0x48) == sVar3) {
LAB_100284c30:
              lVar33 = *plVar11;
              lVar18 = lVar31;
              goto joined_r0x000100284c3c;
            }
            lVar18 = plVar11[3];
            if (*(short *)(lVar18 + 0x48) == sVar3) {
LAB_100284c44:
              lVar33 = plVar11[2];
              goto joined_r0x000100284c3c;
            }
            lVar18 = plVar11[5];
            if (*(short *)(lVar18 + 0x48) == sVar3) {
LAB_100284c5c:
              lVar33 = plVar11[4];
              goto joined_r0x000100284c3c;
            }
            lVar18 = plVar11[7];
            if (*(short *)(lVar18 + 0x48) == sVar3) {
LAB_100284c74:
              lVar33 = plVar11[6];
              goto joined_r0x000100284c3c;
            }
            lVar18 = plVar11[9];
            if (*(short *)(lVar18 + 0x48) == sVar3) {
LAB_100284c90:
              lVar33 = plVar11[8];
              goto joined_r0x000100284c3c;
            }
            lVar18 = plVar11[0xb];
            if (*(short *)(lVar18 + 0x48) == sVar3) {
LAB_100284ca8:
              lVar33 = plVar11[10];
              goto joined_r0x000100284c3c;
            }
            lVar18 = plVar11[0xd];
            if (*(short *)(lVar18 + 0x48) == sVar3) {
LAB_100284cc4:
              lVar33 = plVar11[0xc];
              goto joined_r0x000100284c3c;
            }
            lVar18 = plVar11[0xf];
            if (*(short *)(lVar18 + 0x48) == sVar3) {
LAB_100284ce0:
              lVar33 = plVar11[0xe];
              goto joined_r0x000100284c3c;
            }
            lVar18 = plVar11[0x11];
            if (*(short *)(lVar18 + 0x48) == sVar3) goto LAB_100284c14;
          }
          psVar15 = psVar15 + 2;
          lVar27 = lVar27 + -4;
          if (lVar27 == -0x1c) goto LAB_100284cfc;
        } while( true );
      }
      FUN_107c03c64(8,0x40);
    }
  }
  goto LAB_100285330;
LAB_100284c14:
  lVar33 = plVar11[0x10];
joined_r0x000100284c3c:
  if (plStack00000000000000c0 == plStack00000000000000b0) {
    thunk_FUN_1087d5474(&stack0x000000b0,plStack00000000000000c0,1,8,0x10);
    plVar13 = plStack00000000000000b8;
  }
  lVar23 = 4 - lVar27;
  plVar13[(long)plVar10 * 2] = lVar33;
  (plVar13 + (long)plVar10 * 2)[1] = lVar18;
  plStack00000000000000c0 = (long *)((long)plVar10 + 1);
  if (lVar27 == -0x18) goto LAB_100284cfc;
  goto LAB_100284a5c;
LAB_100284cfc:
  plVar30 = plStack00000000000000c0;
  plVar10 = plStack00000000000000b8;
  plVar13 = plStack00000000000000b0;
  puStack00000000000000d8 = (undefined8 *)0x4;
  in_stack_000000e8 = (undefined *)0x4;
  in_stack_000000f0 = &UNK_10b466058;
  puStack0000000000000108 = (undefined8 *)0xa;
  pcStack0000000000000100 = "\x05";
  puStack00000000000000e0 = puVar12;
  _free(plVar11);
  plStack00000000000000b8 = (long *)0x1;
  plStack00000000000000b0 = (long *)0x1;
  plStack00000000000000c0 = plVar13;
  plStack00000000000000c8 = plVar10;
  pcStack00000000000000d0 = (char *)plVar30;
  plVar13 = (long *)_malloc(0x80);
  if (plVar13 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x80);
    goto LAB_100285330;
  }
  plVar13[9] = 0x13;
  plVar13[8] = (long)in_stack_000000f0;
  plVar13[0xb] = (long)puStack0000000000000108;
  plVar13[10] = (long)pcStack0000000000000100;
  plVar13[0xd] = (long)&UNK_10b4650c8;
  plVar13[0xc] = 1;
  plVar13[0xf] = (long)&UNK_10b4650f8;
  plVar13[0xe] = 1;
  plVar13[1] = (long)plStack00000000000000b8;
  *plVar13 = (long)plStack00000000000000b0;
  plVar13[3] = (long)plStack00000000000000c8;
  plVar13[2] = (long)plStack00000000000000c0;
  plVar13[5] = (long)puStack00000000000000d8;
  plVar13[4] = (long)pcStack00000000000000d0;
  plVar13[7] = (long)in_stack_000000e8;
  plVar13[6] = (long)puStack00000000000000e0;
  plStack00000000000000b0 = plVar13;
  plVar10 = (long *)_malloc(0x10);
  if (plVar10 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
    goto LAB_100285330;
  }
  plVar10[1] = 1;
  *plVar10 = 1;
  in_stack_000001a8 = &UNK_10b463b90;
  in_stack_00000198 = plVar13;
  in_stack_000001a0 = plVar10;
  if (plVar13[4] == 0) {
    uVar26 = 0x22;
    plVar11 = (long *)_malloc(0x22);
    if (plVar11 == (long *)0x0) goto LAB_100285324;
    *(undefined2 *)(plVar11 + 4) = 0x6465;
    plVar11[1] = 0x7265687069632065;
    *plVar11 = 0x6c62617375206f6e;
    plVar11[3] = 0x72756769666e6f63;
    plVar11[2] = 0x2073657469757320;
    plVar10 = (long *)0x22;
    plVar30 = (long *)0x22;
  }
  else {
    lVar23 = plVar13[7];
    if (lVar23 == 0) {
      uVar26 = 0x17;
      plVar11 = (long *)_malloc(0x17);
      if (plVar11 == (long *)0x0) goto LAB_100285324;
      plVar11[1] = 0x6e6f63207370756f;
      *plVar11 = 0x726720786b206f6e;
      builtin_strncpy((char *)((long)plVar11 + 0xf),"nfigured",8);
      plVar10 = (long *)0x17;
      plVar30 = (long *)0x17;
    }
    else {
      uVar26 = 2;
      plVar10 = (long *)_malloc(2);
      if (plVar10 == (long *)0x0) {
LAB_100285324:
        FUN_107c03c64(1,uVar26);
        goto LAB_100285330;
      }
      puVar28 = (undefined8 *)plVar13[6];
      in_stack_000001d0 = (long *)0x2;
      in_stack_000001e0 = (long *)0x0;
      puVar12 = puVar28 + 2;
      puVar29 = puVar28;
      in_stack_000001d8 = plVar10;
      do {
        puVar14 = puVar12;
        uVar9 = (**(code **)(puVar29[1] + 0x38))(*puVar29);
        plVar30 = in_stack_000001e0;
        uVar9 = 1 << (ulong)(uVar9 & 0x1f);
        bVar8 = (uVar9 & 0x7c1f) != 0 || (uVar9 & 0x3e0) == 0 && (extraout_w1 & 0xff00) != 0x100;
        plVar10 = (long *)0x0;
        do {
          if (in_stack_000001e0 == plVar10) {
            if (in_stack_000001e0 == in_stack_000001d0) {
              FUN_107c05da4(&stack0x000001d0);
            }
            *(bool *)((long)in_stack_000001d8 + (long)plVar30) = bVar8;
            in_stack_000001e0 = (long *)((long)plVar30 + 1);
            break;
          }
          pcVar20 = (char *)((long)in_stack_000001d8 + (long)plVar10);
          plVar10 = (long *)((long)plVar10 + 1);
        } while ((bool)*pcVar20 != bVar8);
        if (in_stack_000001e0 == (long *)0x2) break;
        lVar31 = 0;
        if (puVar14 != puVar28 + lVar23 * 2) {
          lVar31 = 0x10;
        }
        puVar12 = (undefined8 *)((long)puVar14 + lVar31);
        puVar29 = puVar14;
      } while (puVar14 != puVar28 + lVar23 * 2);
      if (plVar13[4] == 0) {
LAB_100284f28:
        if (in_stack_000001d0 != (long *)0x0) {
          _free(in_stack_000001d8);
        }
        pcStack00000000000000d0 = (char *)in_stack_000000a0;
        in_stack_000001d0 = (long *)0x0;
        in_stack_000001d8 = (long *)0x8;
        in_stack_000001e0 = (long *)0x0;
        plStack00000000000000b8 = (long *)0x1;
        plStack00000000000000b0 = (long *)0x1;
        plStack00000000000000c8 = in_stack_00000098;
        plStack00000000000000c0 = in_stack_00000090;
        puVar12 = (undefined8 *)_malloc(0x28);
        if (puVar12 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
        }
        else {
          puVar12[1] = plStack00000000000000b8;
          *puVar12 = plStack00000000000000b0;
          puVar12[3] = plStack00000000000000c8;
          puVar12[2] = plStack00000000000000c0;
          puVar12[4] = pcStack00000000000000d0;
          in_stack_000000e8 = (undefined *)plVar13[9];
          puStack00000000000000e0 = (undefined8 *)plVar13[8];
          lVar23 = plVar13[0xb];
          in_stack_000000f0 = (undefined *)plVar13[10];
          plStack00000000000000b8 = (long *)0x1;
          plStack00000000000000b0 = (long *)0x1;
          plStack00000000000000c8 = in_stack_000001d8;
          plStack00000000000000c0 = in_stack_000001d0;
          pcStack00000000000000d0 = (char *)in_stack_000001e0;
          pcStack0000000000000100 = (char *)CONCAT53(pcStack0000000000000100._3_5_,0x10001);
          puStack00000000000000d8 = puVar12;
          puVar12 = (undefined8 *)_malloc(0x58);
          if (puVar12 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x58);
          }
          else {
            puVar12[5] = puStack00000000000000d8;
            puVar12[4] = pcStack00000000000000d0;
            puVar12[7] = in_stack_000000e8;
            puVar12[6] = puStack00000000000000e0;
            puVar12[9] = lVar23;
            puVar12[8] = in_stack_000000f0;
            puVar12[10] = pcStack0000000000000100;
            puVar12[1] = plStack00000000000000b8;
            *puVar12 = plStack00000000000000b0;
            puVar12[3] = plStack00000000000000c8;
            puVar12[2] = plStack00000000000000c0;
            plStack00000000000000b0 = (long *)0x8000000000000002;
            plStack00000000000000b8 = (long *)CONCAT71(plStack00000000000000b8._1_7_,0xd);
            puVar12 = (undefined8 *)_malloc(0x10);
            if (puVar12 != (undefined8 *)0x0) {
              puVar12[1] = 1;
              *puVar12 = 1;
              __ZN6rustls6client7builder140__LT_impl_u20_rustls__builder__ConfigBuilder_LT_rustls__client__client_conn__ClientConfig_C_rustls__client__builder__WantsClientCert_GT__GT_25with_client_cert_resolver17h79de686628c66248E
                        (in_stack_00000018,&stack0x000000b0,puVar12,&UNK_10b463d68);
              return;
            }
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
          }
        }
        goto LAB_100285330;
      }
      puVar16 = (uint *)plVar13[3];
      puVar17 = puVar16;
      puVar19 = puVar16 + 4;
LAB_100284eb8:
      if ((*puVar17 & 1) == 0) {
        pcVar22 = (char *)(*(long *)(puVar17 + 2) + 0x50);
        pcVar20 = (char *)(*(long *)(puVar17 + 2) + 0x51);
        in_stack_000001c0 = 1;
        in_stack_000001b8 = pcVar22;
      }
      else {
        pcVar20 = 
        "/Users/runner/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rustls-0.23.36/src/quic.rs"
        ;
        in_stack_000001c0 = 2;
        pcVar22 = "\x01";
        in_stack_000001b8 = "\x01";
      }
      do {
        pcVar21 = pcVar22 + 1;
        plVar10 = in_stack_000001d8;
        plVar30 = in_stack_000001e0;
        while (plVar30 != (long *)0x0) {
          lVar23 = *plVar10;
          plVar30 = (long *)((long)plVar30 + -1);
          plVar10 = (long *)((long)plVar10 + 1);
          if ((char)lVar23 == *pcVar22) {
            bVar8 = puVar19 != puVar16 + plVar13[4] * 4;
            lVar23 = 0;
            if (bVar8) {
              lVar23 = 0x10;
            }
            puVar17 = puVar19;
            puVar19 = (uint *)((long)puVar19 + lVar23);
            if (!bVar8) goto LAB_100284f28;
            goto LAB_100284eb8;
          }
        }
        pcVar22 = pcVar21;
      } while (pcVar21 != pcVar20);
      uStack0000000000000170 = *(undefined4 *)(*(long *)(puVar17 + 2) + 0x48);
      plStack00000000000000b0 = (long *)&stack0x00000170;
      plStack00000000000000b8 =
           (long *)&
                   __ZN63__LT_rustls__enums__CipherSuite_u20_as_u20_core__fmt__Debug_GT_3fmt17h20f49d0a18b2627cE
      ;
      plStack00000000000000c0 = (long *)&stack0x000001b8;
      plStack00000000000000c8 = (long *)&DAT_1002b1168;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000218,&UNK_108c77b07,&stack0x000000b0);
      plVar10 = (long *)0x9;
      plVar30 = (long *)0x9;
      if (in_stack_000001d0 != (long *)0x0) {
        _free(in_stack_000001d8);
        plVar10 = (long *)0x9;
        plVar30 = (long *)0x9;
      }
    }
  }
  lVar23 = *plVar13;
  *plVar13 = lVar23 + -1;
  LORelease();
  if (lVar23 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h582c54d8c2d6f0e5E(&stack0x00000198);
  }
  lVar23 = *in_stack_000001a0;
  *in_stack_000001a0 = lVar23 + -1;
  LORelease();
  if (lVar23 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h288efc96a01a90ccE(&stack0x000001a0);
  }
  plStack00000000000000b0 = (long *)CONCAT71(plStack00000000000000b0._1_7_,0xd);
  plStack00000000000000b8 = plVar30;
  plStack00000000000000c0 = plVar11;
  plStack00000000000000c8 = plVar10;
  FUN_107c05cb4(&UNK_108c74c60,0x71,&stack0x000000b0,&UNK_10b1f56c8,&UNK_10b1f4498);
LAB_100285330:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100285334);
  (*pcVar7)();
}

