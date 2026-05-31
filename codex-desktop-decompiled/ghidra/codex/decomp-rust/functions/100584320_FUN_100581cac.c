
/* WARNING: Removing unreachable block (ram,0x00010058466c) */
/* WARNING: Removing unreachable block (ram,0x00010058473c) */
/* WARNING: Removing unreachable block (ram,0x000100584de0) */
/* WARNING: Removing unreachable block (ram,0x0001005846e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100581cac(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  byte extraout_var;
  long *plVar18;
  undefined1 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  ulong uVar27;
  ulong uVar28;
  byte bVar29;
  long lVar30;
  bool bVar31;
  long lVar32;
  long *unaff_x21;
  long lVar33;
  undefined *puVar34;
  undefined8 *puVar35;
  undefined8 unaff_x24;
  undefined8 uVar36;
  undefined1 *puVar37;
  undefined8 unaff_x25;
  undefined8 uVar38;
  undefined *unaff_x26;
  undefined *puVar39;
  long unaff_x29;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  byte bVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined1 auVar48 [16];
  long in_stack_00000008;
  undefined1 *in_stack_00000020;
  undefined8 *puStack0000000000000038;
  undefined8 uStack0000000000000040;
  ulong *in_stack_00000048;
  undefined8 *in_stack_00000060;
  undefined1 *in_stack_00000070;
  undefined8 *in_stack_00000080;
  undefined8 *in_stack_00000088;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
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
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  ulong in_stack_000001e0;
  ulong in_stack_000001e8;
  undefined1 *in_stack_00000220;
  undefined *in_stack_00000228;
  undefined1 *in_stack_00000230;
  undefined8 *puVar49;
  ulong in_stack_00000238;
  undefined1 *in_stack_00000240;
  undefined *in_stack_00000248;
  ulong in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined *puVar50;
  uint6 in_stack_00000552;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  long in_stack_000005b8;
  undefined *in_stack_00001f40;
  undefined1 *in_stack_00001f48;
  ulong in_stack_00001f50;
  undefined1 *in_stack_00001f58;
  undefined *in_stack_00001f60;
  ulong in_stack_00001f68;
  undefined8 *in_stack_00001f70;
  undefined8 *in_stack_00001f78;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000570,s_YThe_following_MCP_servers_are_r_108ac07a1,&stack0x00000220);
  puVar7 = (undefined8 *)_malloc(0x60);
  if (puVar7 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x60);
    goto LAB_100584f7c;
  }
  puVar8 = (undefined4 *)_malloc(7);
  if (puVar8 == (undefined4 *)0x0) {
    FUN_107c03c64(1,7);
    goto LAB_100584f7c;
  }
  *(undefined4 *)((long)puVar8 + 3) = 0x6c6c6174;
  *puVar8 = 0x74736e49;
  puVar9 = (undefined8 *)_malloc(0x41);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0x41);
    goto LAB_100584f7c;
  }
  *(undefined1 *)(puVar9 + 8) = 0x2e;
  puVar9[1] = 0x62616e6520646e61;
  *puVar9 = 0x206c6c6174736e49;
  puVar9[3] = 0x4d20676e69737369;
  puVar9[2] = 0x6d2065687420656c;
  puVar9[5] = 0x6f79206e69207372;
  puVar9[4] = 0x6576726573205043;
  puVar9[7] = 0x6769666e6f63206c;
  puVar9[6] = 0x61626f6c67207275;
  puVar10 = (undefined8 *)_malloc(0xf);
  if (puVar10 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0xf);
    goto LAB_100584f7c;
  }
  *puVar10 = 0x65756e69746e6f43;
  *(undefined8 *)((long)puVar10 + 7) = 0x796177796e612065;
  puVar11 = (undefined8 *)_malloc(0x56);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_107c03c64(1,0x56);
    goto LAB_100584f7c;
  }
  puVar11[5] = 0x206e696167612077;
  puVar11[4] = 0x6f687320746f6e20;
  puVar11[7] = 0x65732050434d2065;
  puVar11[6] = 0x7365687420726f66;
  puVar11[9] = 0x6573207369687420;
  puVar11[8] = 0x6e69207372657672;
  *(undefined8 *)((long)puVar11 + 0x4e) = 0x2e6e6f6973736573;
  puVar11[1] = 0x6f6974616c6c6174;
  *puVar11 = 0x736e692070696b53;
  puVar11[3] = 0x6f6420646e612077;
  puVar11[2] = 0x6f6e20726f66206e;
  puVar7[1] = puVar8;
  *puVar7 = 7;
  puVar7[3] = 0x41;
  puVar7[2] = 7;
  puVar7[5] = 0x41;
  puVar7[4] = puVar9;
  puVar7[6] = 0xf;
  puVar7[7] = puVar10;
  puVar7[9] = 0x56;
  puVar7[8] = 0xf;
  puVar7[10] = puVar11;
  puVar7[0xb] = 0x56;
  *(undefined1 *)((long)in_stack_00000088 + 0x38b) = 1;
  puVar50 = (undefined *)0x1c;
  puVar9 = (undefined8 *)_malloc(0x68);
  if (puVar9 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x68);
    goto LAB_100584f7c;
  }
  puVar9[9] = 2;
  puVar9[8] = in_stack_00000580;
  puVar9[0xb] = 2;
  puVar9[10] = puVar7;
  puVar9[0xc] = (ulong)in_stack_00000552 << 0x10;
  puVar9[1] = unaff_x24;
  *puVar9 = 0x1c;
  puVar9[3] = 0x14;
  puVar9[2] = 0x1c;
  puVar9[5] = 0x14;
  puVar9[4] = unaff_x25;
  puVar9[7] = in_stack_00000578;
  puVar9[6] = in_stack_00000570;
  *(undefined2 *)((long)in_stack_00000088 + 0x38a) = 1;
  in_stack_00000088[0x65] = unaff_x26 + 0x230;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000220,s_mcp_deps__108ac0811,&stack0x00000570);
  puVar26 = (undefined1 *)in_stack_00000088[0x60];
  *(undefined1 *)((long)in_stack_00000088 + 0x38a) = 0;
  puVar7 = (undefined8 *)0x1;
  pbVar1 = (byte *)(in_stack_00000088 + 0x71);
  *(undefined2 *)(in_stack_00000088 + 0x71) = 0x100;
  lVar20 = *unaff_x21;
  uVar27 = *(ulong *)(lVar20 + 0x10);
  *(undefined1 *)((long)in_stack_00000088 + 0x389) = 0;
  in_stack_00000088[0x72] = unaff_x21;
  in_stack_00000088[0x73] = (ulong *)(lVar20 + 0x10);
  in_stack_00000088[0x74] = uVar27 >> 2;
  in_stack_00000088[0x75] = 0;
  in_stack_00000088[0x77] = 0;
  in_stack_00000088[0x76] = 0;
  in_stack_00000088[0x79] = 0;
  *(undefined1 *)(in_stack_00000088 + 0x7a) = 0;
  _memcpy(in_stack_00000088 + 0x7b,&stack0x00000570,0x19d0);
  in_stack_00000088[0x3b5] = pbVar1;
  in_stack_00000088[0x3b6] = in_stack_00000088 + 0x72;
  lVar20 = (*
           ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
           )();
  if (*(char *)(lVar20 + 0x48) != '\x01') {
    if (*(char *)(lVar20 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar20,&DAT_100c35d48);
      *(undefined1 *)(lVar20 + 0x48) = 1;
      goto LAB_100582030;
    }
LAB_100582044:
    if ((*pbVar1 & 1) == 0) {
      uVar27 = __ZN112__LT_tokio_util__sync__cancellation_token__WaitForCancellationFuture_u20_as_u20_core__future__future__Future_GT_4poll17h718460b03fea36adE
                         (in_stack_00000088 + 0x72,in_stack_00000080);
      if ((uVar27 & 1) != 0) {
        if ((*pbVar1 >> 1 & 1) == 0) goto LAB_10058206c;
        goto LAB_1005820c0;
      }
      uVar21 = 0;
      bVar29 = *pbVar1 | 1;
LAB_1005820d8:
      *pbVar1 = bVar29;
    }
    else {
      if ((*pbVar1 >> 1 & 1) == 0) {
LAB_10058206c:
        FUN_1005a6288(&stack0x00000220,in_stack_00000088 + 0x7b,in_stack_00000080);
        if ((int)in_stack_00000220 == 1) goto LAB_1005820c0;
        bVar29 = *pbVar1 | 2;
        uVar21 = 1;
        in_stack_00001f40 = in_stack_00000228;
        in_stack_00001f48 = in_stack_00000230;
        in_stack_00001f50 = in_stack_00000238;
        in_stack_00001f58 = in_stack_00000240;
        in_stack_00001f60 = in_stack_00000248;
        in_stack_00001f68 = in_stack_00000250;
        goto LAB_1005820d8;
      }
      uVar21 = 2;
    }
    in_stack_00000088[0x66] = uVar21;
    in_stack_00000088[0x68] = in_stack_00001f48;
    in_stack_00000088[0x67] = in_stack_00001f40;
    in_stack_00000088[0x6a] = in_stack_00001f58;
    in_stack_00000088[0x69] = in_stack_00001f50;
    in_stack_00000088[0x6c] = in_stack_00001f68;
    in_stack_00000088[0x6b] = in_stack_00001f60;
    puVar22 = (undefined8 *)in_stack_00000088[0x73];
    puVar10 = in_stack_00000088 + 0x7a;
    puVar49 = in_stack_00000088 + 0x74;
    puVar11 = in_stack_00000088 + 0x75;
    FUN_1060fb5d4(&stack0x00000220);
    if (in_stack_00000088[0x77] != 0) {
      (**(code **)(in_stack_00000088[0x77] + 0x18))(in_stack_00000088[0x78]);
    }
    FUN_100d35810(in_stack_00000088 + 0x7b);
    if (in_stack_00000088[0x66] == 0) {
      pauVar16 = (undefined1 (*) [16])
                 (*
                 ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                 )();
      if (pauVar16[1][0] == '\x01') {
        auVar48 = *pauVar16;
      }
      else {
        auVar48 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
        *(long *)(*pauVar16 + 8) = auVar48._8_8_;
        pauVar16[1][0] = 1;
      }
      *(long *)*pauVar16 = auVar48._0_8_ + 1;
      in_stack_00000088[0x73] = 0;
      in_stack_00000088[0x72] = &UNK_108c56c70;
      in_stack_00000088[0x75] = 0;
      in_stack_00000088[0x74] = 0;
      *(undefined1 (*) [16])(in_stack_00000088 + 0x76) = auVar48;
      uVar36 = in_stack_00000088[0x60];
      uVar21 = *(undefined8 *)(in_stack_00000088[0x65] + 8);
      uVar38 = *(undefined8 *)(in_stack_00000088[0x65] + 0x10);
      func_0x0001011ed3bc(unaff_x29 + -0xa0,in_stack_00000088 + 0x72);
      uVar44 = *(undefined8 *)(unaff_x29 + -0x88);
      uVar43 = *(undefined8 *)(unaff_x29 + -0x90);
      uVar42 = *(undefined8 *)(unaff_x29 + -0x78);
      uVar40 = *(undefined8 *)(unaff_x29 + -0x80);
      uVar47 = *(undefined8 *)(unaff_x29 + -0x98);
      uVar46 = *(undefined8 *)(unaff_x29 + -0xa0);
      in_stack_00000088[0x7f] = in_stack_00000258;
      in_stack_00000088[0x7e] = in_stack_00000250;
      in_stack_00000088[0x81] = uVar47;
      in_stack_00000088[0x80] = uVar46;
      in_stack_00000088[0x83] = uVar44;
      in_stack_00000088[0x82] = uVar43;
      in_stack_00000088[0x85] = uVar42;
      in_stack_00000088[0x84] = uVar40;
      in_stack_00000088[0x79] = puVar10;
      in_stack_00000088[0x78] = puVar22;
      in_stack_00000088[0x7b] = puVar11;
      in_stack_00000088[0x7a] = puVar49;
      in_stack_00000088[0x7d] = in_stack_00000248;
      in_stack_00000088[0x7c] = in_stack_00000240;
      in_stack_00000088[0x86] = uVar21;
      in_stack_00000088[0x87] = uVar38;
      in_stack_00000088[0x89] = uVar36;
      *(undefined1 *)((long)in_stack_00000088 + 0x451) = 0;
      iVar6 = FUN_1005b0428(in_stack_00000088 + 0x78,in_stack_00000080);
      if (iVar6 != 0) {
        uVar19 = 4;
        goto LAB_10058294c;
      }
      FUN_100d53274(in_stack_00000088 + 0x78);
      uVar38 = in_stack_00000088[0x73];
      uVar21 = in_stack_00000088[0x72];
      uVar36 = in_stack_00000088[0x74];
      uVar42 = in_stack_00000088[0x77];
      uVar40 = in_stack_00000088[0x76];
      in_stack_00000060[3] = in_stack_00000088[0x75];
      in_stack_00000060[2] = uVar36;
      in_stack_00000060[5] = uVar42;
      in_stack_00000060[4] = uVar40;
      in_stack_00000060[1] = uVar38;
      *in_stack_00000060 = uVar21;
      in_stack_00001f70 = puVar22;
      in_stack_00001f78 = puVar10;
    }
    else {
      if (in_stack_00000088[0x66] != 1) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108ca2bde,0x6b,&UNK_10b216820);
        goto LAB_100584f7c;
      }
      lVar20 = in_stack_00000088[0x67];
      if (lVar20 == 0) {
        pauVar16 = (undefined1 (*) [16])
                   (*
                   ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                   )();
        if (pauVar16[1][0] == '\x01') {
          auVar48 = *pauVar16;
        }
        else {
          auVar48 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar16 + 8) = auVar48._8_8_;
          pauVar16[1][0] = 1;
        }
        *(long *)*pauVar16 = auVar48._0_8_ + 1;
        in_stack_00000060[1] = 0;
        *in_stack_00000060 = &UNK_108c56c70;
        in_stack_00000060[3] = 0;
        in_stack_00000060[2] = 0;
        *(undefined1 (*) [16])(in_stack_00000088 + 0x5e) = auVar48;
      }
      else {
        in_stack_00000088[0x5a] = lVar20;
        in_stack_00000088[0x5c] = in_stack_00000088[0x69];
        in_stack_00000088[0x5b] = in_stack_00000088[0x68];
        in_stack_00000088[0x5e] = in_stack_00000088[0x6b];
        in_stack_00000088[0x5d] = in_stack_00000088[0x6a];
        in_stack_00000088[0x5f] = in_stack_00000088[0x6c];
      }
    }
    uVar19 = 0;
    if (in_stack_00000088[0x5d] != 0) {
      uVar12 = FUN_100e8e738(in_stack_00000088[0x5e],in_stack_00000088[0x5f],&UNK_108ca33df,0x1c);
      lVar20 = 0;
      uVar28 = in_stack_00000088[0x5b];
      lVar30 = in_stack_00000088[0x5a];
      bVar29 = (byte)(uVar12 >> 0x39);
      uVar12 = uVar12 & uVar28;
      uVar21 = *(undefined8 *)(lVar30 + uVar12);
      uVar27 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar29),
                        CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar29),
                                 CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar29),
                                          CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar29),
                                                   CONCAT13(-((byte)((ulong)uVar21 >> 0x18) ==
                                                             bVar29),CONCAT12(-((byte)((ulong)uVar21
                                                                                      >> 0x10) ==
                                                                               bVar29),CONCAT11(-((
                                                  byte)((ulong)uVar21 >> 8) == bVar29),
                                                  -((byte)uVar21 == bVar29)))))))) &
               0x8080808080808080;
      while( true ) {
        for (; uVar27 != 0; uVar27 = uVar27 - 1 & uVar27) {
          uVar4 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          lVar41 = lVar30 + (uVar12 + ((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) & uVar28)
                            * -0x30;
          if ((*(long *)(lVar41 + -0x20) == 0x1c) &&
             (plVar18 = *(long **)(lVar41 + -0x28),
             ((*plVar18 == 0x636d5f6c6c696b73 && plVar18[1] == 0x646e657065645f70) &&
             plVar18[2] == 0x736e695f79636e65) && (int)plVar18[3] == 0x6c6c6174)) {
            uVar19 = 0;
            if (*(long *)(lVar41 + -8) == 0) goto LAB_100582438;
            lVar20 = *(long *)(lVar41 + -8) * 0x18;
            plVar18 = (long *)(*(long *)(lVar41 + -0x10) + 0x10);
            goto LAB_100582408;
          }
        }
        bVar45 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar21 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar21 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar21 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar21 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar21
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar21 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar21 >> 8) == -1),
                                                           -((char)uVar21 == -1)))))))),1);
        if ((bVar45 & 1) != 0) break;
        lVar20 = lVar20 + 8;
        uVar12 = uVar12 + lVar20 & uVar28;
        uVar21 = *(undefined8 *)(lVar30 + uVar12);
        uVar27 = CONCAT17(-((byte)((ulong)uVar21 >> 0x38) == bVar29),
                          CONCAT16(-((byte)((ulong)uVar21 >> 0x30) == bVar29),
                                   CONCAT15(-((byte)((ulong)uVar21 >> 0x28) == bVar29),
                                            CONCAT14(-((byte)((ulong)uVar21 >> 0x20) == bVar29),
                                                     CONCAT13(-((byte)((ulong)uVar21 >> 0x18) ==
                                                               bVar29),CONCAT12(-((byte)((ulong)
                                                  uVar21 >> 0x10) == bVar29),
                                                  CONCAT11(-((byte)((ulong)uVar21 >> 8) == bVar29),
                                                           -((byte)uVar21 == bVar29)))))))) &
                 0x8080808080808080;
      }
      uVar19 = 0;
    }
    goto LAB_100582438;
  }
LAB_100582030:
  if (*(char *)(lVar20 + 0x44) != '\x01' || *(char *)(lVar20 + 0x45) != '\0') goto LAB_100582044;
  FUN_10610bbb4(*(undefined8 *)*in_stack_00000080,((undefined8 *)*in_stack_00000080)[1]);
LAB_1005820c0:
  uVar19 = 3;
  goto LAB_10058294c;
code_r0x0001005825b8:
  __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar20,1);
  *(undefined2 *)(in_stack_00000088 + 0x8d) = 0x100;
  cVar3 = *(char *)(in_stack_00000088 + 0x72);
  func_0x000100d30908(in_stack_00000060);
  *(undefined1 *)((long)in_stack_00000088 + 0x389) = 0;
  *(undefined2 *)((long)in_stack_00000088 + 0x38a) = 0;
  if (in_stack_00000088[0x62] != 0) {
    _free(in_stack_00000088[99]);
  }
  *in_stack_00000070 = 1;
  FUN_100cdaca4(in_stack_00000060);
  if (cVar3 == '\0') {
LAB_100582670:
    FUN_100cf8c18(in_stack_00000088 + 0x47);
    FUN_100cf8c18(in_stack_00000088 + 0x41);
    FUN_100cf8c18(in_stack_00000088 + 0x3b);
    lVar20 = *(long *)in_stack_00000088[0x55];
    *(long *)in_stack_00000088[0x55] = lVar20 + -1;
    LORelease();
    if (lVar20 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h0e06add7948fd345E(in_stack_00000088 + 0x55);
    }
    if (in_stack_00000088[0x52] != 0) {
      _free(in_stack_00000088[0x53]);
    }
    if (((*(byte *)(in_stack_00000088 + 0x59) & 1) != 0) &&
       (plVar18 = (long *)in_stack_00000088[0x39], plVar18 != (long *)0x0)) {
      lVar20 = *plVar18;
      *plVar18 = lVar20 + -1;
      LORelease();
      if (lVar20 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h889d73266575641eE(in_stack_00000088 + 0x39);
      }
    }
    *(undefined1 *)(in_stack_00000088 + 0x59) = 0;
    *in_stack_00000020 = 1;
    FUN_100cfc79c(in_stack_00000008);
    lVar20 = in_stack_00000088[0x2f];
    uVar27 = in_stack_00000088[0x30];
    uVar38 = in_stack_00000088[0x2d];
    lVar30 = in_stack_00000088[0x19];
    lVar33 = *(long *)in_stack_00000088[0x18];
    uVar21 = in_stack_00000088[0x1c];
    lVar41 = in_stack_00000088[0x1d];
    if (lVar41 == 0) {
      in_stack_00000060 = (undefined8 *)0x1;
    }
    else {
      in_stack_00000060 = (undefined8 *)_malloc(lVar41);
      if (in_stack_00000060 == (undefined8 *)0x0) {
        FUN_107c03c64(1,lVar41);
        goto LAB_100584f7c;
      }
    }
    _memcpy(in_stack_00000060,uVar21,lVar41);
    uVar21 = in_stack_00000088[0x1f];
    lVar32 = in_stack_00000088[0x20];
    if (lVar32 == 0) {
      lVar13 = 1;
    }
    else {
      lVar13 = _malloc(lVar32);
      if (lVar13 == 0) {
        FUN_107c03c64(1,lVar32);
        goto LAB_100584f7c;
      }
    }
    _memcpy(lVar13,uVar21,lVar32);
    uVar21 = in_stack_00000088[0x22];
    lVar17 = in_stack_00000088[0x23];
    if (lVar17 == 0) {
      lVar14 = 1;
    }
    else {
      lVar14 = _malloc(lVar17);
      if (lVar14 == 0) {
        FUN_107c03c64(1,lVar17);
        goto LAB_100584f7c;
      }
    }
    _memcpy(lVar14,uVar21,lVar17);
    in_stack_00000088[0x35] = lVar41;
    *(undefined8 **)(in_stack_00000008 + 8) = in_stack_00000060;
    *(long *)(in_stack_00000008 + 0x10) = lVar41;
    *(long *)(in_stack_00000008 + 0x18) = lVar32;
    *(long *)(in_stack_00000008 + 0x20) = lVar13;
    *(long *)(in_stack_00000008 + 0x28) = lVar32;
    *(long *)(in_stack_00000008 + 0x30) = lVar17;
    *(long *)(in_stack_00000008 + 0x38) = lVar14;
    *(long *)(in_stack_00000008 + 0x40) = lVar17;
    in_stack_00000088[0x3e] = lVar20;
    in_stack_00000088[0x3f] = uVar27;
    in_stack_00000088[0x40] = lVar33 + 0x4d8;
    in_stack_00000088[0x41] = uVar38;
    in_stack_00000088[0x42] = lVar30 + 0x248;
    *(undefined1 *)(in_stack_00000088 + 0x5f) = 0;
    *(undefined2 *)((long)in_stack_00000088 + 0x2f9) = 0x100;
    in_stack_00000088[0x43] = uVar38;
    in_stack_00000088[0x44] = lVar30 + 0x248;
    in_stack_00000088[0x45] = lVar33 + 0x4d8;
    in_stack_00000088[0x4b] = in_stack_00000088[0x3a];
    in_stack_00000088[0x4a] = in_stack_00000088[0x39];
    in_stack_00000088[0x4d] = in_stack_00000088[0x3c];
    in_stack_00000088[0x4c] = in_stack_00000088[0x3b];
    in_stack_00000088[0x4e] = in_stack_00000088[0x3d];
    in_stack_00000088[0x47] = in_stack_00000088[0x36];
    in_stack_00000088[0x46] = in_stack_00000088[0x35];
    in_stack_00000088[0x49] = in_stack_00000088[0x38];
    in_stack_00000088[0x48] = in_stack_00000088[0x37];
    puVar35 = puVar9;
    if (uVar27 == 0) {
      if (in_stack_00000088[0x46] != 0) {
        _free(in_stack_00000088[0x47]);
      }
      if (in_stack_00000088[0x49] != 0) {
        _free(in_stack_00000088[0x4a]);
      }
      if (in_stack_00000088[0x4c] != 0) {
        _free(in_stack_00000088[0x4d]);
      }
      uVar21 = 0;
      lVar30 = 0;
      lVar20 = 0;
      *(undefined1 *)((long)in_stack_00000088 + 0x2fa) = 0;
      *(undefined1 *)(in_stack_00000088 + 0x5f) = 1;
      puStack0000000000000038 = (undefined8 *)0x8;
      uStack0000000000000040 = 0;
      uVar38 = 8;
    }
    else {
      lVar30 = uVar27 * 0x48;
      if (0x1c71c71c71c71c7 < uVar27) {
        uVar21 = 0;
LAB_100582864:
        FUN_107c03c64(uVar21,lVar30);
        goto LAB_100584f7c;
      }
      if (lVar30 == 0) {
        uVar12 = 0;
        lVar41 = 8;
      }
      else {
        lVar41 = _malloc(lVar30);
        uVar12 = uVar27;
        if (lVar41 == 0) {
          uVar21 = 8;
          goto LAB_100582864;
        }
      }
      in_stack_00000088[0x4f] = uVar12;
      in_stack_00000088[0x50] = lVar41;
      in_stack_00000088[0x52] = 0;
      in_stack_00000088[0x51] = 0;
      in_stack_00000088[0x53] = 8;
      in_stack_00000088[0x55] = 0;
      in_stack_00000088[0x54] = 0;
      in_stack_00000088[0x56] = 8;
      in_stack_00000088[0x57] = 0;
      *(undefined1 *)((long)in_stack_00000088 + 0x2f9) = 1;
      lVar30 = lVar20 + uVar27 * 0x148;
      in_stack_00000088[0x58] = lVar20;
      in_stack_00000088[0x59] = lVar30;
      in_stack_00000070 = (undefined1 *)lVar20;
      while (lVar20 != lVar30) {
        in_stack_00000088[0x58] = lVar20 + 0x148;
        in_stack_00000088[0x5a] = lVar20;
        if ((in_stack_00000088[0x43] == 0) ||
           (auVar48 = __ZN17codex_core_skills5model16SkillLoadOutcome21file_system_for_skill17hc78e27346c6d4da7E
                                (), auVar48._0_8_ == 0)) {
          if (lRam000000010b62c4d8 != 0) {
            puVar22 = (undefined8 *)
                      &__ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
            in_stack_00000220 = &stack0x00000220;
            __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                      (0x10b62c4d8,1,&stack0x00000570,&UNK_10b234158,&UNK_10b2340c8);
          }
          lVar20 = *___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
          *___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE = lVar20 + 1;
          auVar48._8_8_ = uRam000000010b62c4d0;
          auVar48._0_8_ = ___ZN17codex_exec_server17local_file_system8LOCAL_FS17h693c8c1d08c309eeE;
          if (lVar20 < 0) goto LAB_100584f7c;
        }
        *(undefined1 (*) [16])(in_stack_00000088 + 0x5b) = auVar48;
        auVar48 = (**(code **)(auVar48._8_8_ + 0x20))
                            (auVar48._0_8_ +
                             (*(long *)(auVar48._8_8_ + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                             in_stack_00000088[0x5a] + 0x30,0);
        *(undefined1 (*) [16])(in_stack_00000088 + 0x5d) = auVar48;
        (**(code **)(auVar48._8_8_ + 0x18))(&stack0x00000570,auVar48._0_8_,in_stack_00000080);
        if (in_stack_00000220 == (undefined1 *)0x8000000000000001) {
          *(undefined1 *)(in_stack_00000088 + 0x5f) = 3;
          goto LAB_100583b0c;
        }
        uVar21 = in_stack_00000088[0x5d];
        puVar7 = (undefined8 *)in_stack_00000088[0x5e];
        pcVar5 = (code *)*puVar7;
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(uVar21);
        }
        if (puVar7[1] != 0) {
          _free(uVar21);
        }
        if (in_stack_00000220 == (undefined1 *)0x8000000000000000) {
          puVar24 = (undefined1 *)in_stack_00000088[0x5a];
          if (in_stack_00000088[0x44] != 0) {
            puVar26 = *(undefined1 **)(puVar24 + 8);
            unaff_x26 = *(undefined **)(puVar24 + 0x10);
            __ZN10codex_otel6events17session_telemetry16SessionTelemetry7counter17h8b8d75a4ab2d4bd3E
                      (in_stack_00000088[0x44],&UNK_108d9de4f,0x14,1,&stack0x00000570,2);
            puVar24 = (undefined1 *)in_stack_00000088[0x5a];
          }
          in_stack_00001f70 = *(undefined8 **)(puVar24 + 0x38);
          in_stack_00001f78 = *(undefined8 **)(puVar24 + 0x40);
          in_stack_00000230 = &stack0x00001f70;
          puVar7 = (undefined8 *)
                   &
                   __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
          ;
          puVar35 = (undefined8 *)&stack0x000004f0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000220,&UNK_108cb53e7,&stack0x00000570);
          lVar20 = in_stack_00000088[0x54];
          if (lVar20 == in_stack_00000088[0x52]) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE
                      (in_stack_00000088 + 0x52);
          }
          puVar25 = (undefined8 *)(in_stack_00000088[0x53] + lVar20 * 0x18);
          *puVar25 = puVar22;
          puVar25[1] = puVar10;
          puVar25[2] = puVar49;
          in_stack_00000088[0x54] = lVar20 + 1;
          puVar39 = &DAT_10112965c;
          puVar50 = in_stack_00000228;
          if (((ulong)in_stack_00000228 & 3) == 1) {
            uVar21 = *(undefined8 *)(in_stack_00000228 + -1);
            puVar25 = *(undefined8 **)(in_stack_00000228 + 7);
            pcVar5 = (code *)*puVar25;
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(uVar21);
            }
            if (puVar25[1] != 0) {
              _free(uVar21);
            }
            _free(in_stack_00000228 + -1);
            lVar20 = *(long *)in_stack_00000088[0x5b];
            *(long *)in_stack_00000088[0x5b] = lVar20 + -1;
            LORelease();
          }
          else {
            lVar20 = *(long *)in_stack_00000088[0x5b];
            *(long *)in_stack_00000088[0x5b] = lVar20 + -1;
            LORelease();
          }
        }
        else {
          lVar20 = in_stack_00000088[0x5a];
          if (in_stack_00000088[0x44] != 0) {
            __ZN10codex_otel6events17session_telemetry16SessionTelemetry7counter17h8b8d75a4ab2d4bd3E
                      (in_stack_00000088[0x44],&UNK_108d9de4f,0x14,1,&stack0x00000570,2);
            lVar20 = in_stack_00000088[0x5a];
          }
          uVar21 = *(undefined8 *)(lVar20 + 8);
          lVar20 = *(long *)(lVar20 + 0x10);
          lVar30 = 1;
          if ((lVar20 != 0) && (lVar30 = _malloc(lVar20), lVar30 == 0)) {
            FUN_107c03c64(1,lVar20);
            goto LAB_100584f7c;
          }
          _memcpy(lVar30,uVar21,lVar20);
          lVar41 = in_stack_00000088[0x5a];
          uVar19 = *(undefined1 *)(lVar41 + 0x140);
          uVar21 = *(undefined8 *)(lVar41 + 0x38);
          lVar41 = *(long *)(lVar41 + 0x40);
          lVar33 = 1;
          if ((lVar41 != 0) && (lVar33 = _malloc(lVar41), lVar33 == 0)) {
            FUN_107c03c64(1,lVar41);
            goto LAB_100584f7c;
          }
          _memcpy(lVar33,uVar21,lVar41);
          lVar13 = in_stack_00000088[0x5a];
          lVar32 = -0x8000000000000000;
          if (*(long *)(lVar13 + 0x98) != -0x8000000000000000) {
            uVar21 = *(undefined8 *)(lVar13 + 0xa0);
            lVar32 = *(long *)(lVar13 + 0xa8);
            in_stack_00000070 = (undefined1 *)0x1;
            if ((lVar32 != 0) &&
               (in_stack_00000070 = (undefined1 *)_malloc(lVar32),
               in_stack_00000070 == (undefined1 *)0x0)) {
              FUN_107c03c64(1,lVar32);
              goto LAB_100584f7c;
            }
            _memcpy(in_stack_00000070,uVar21,lVar32);
            in_stack_00000060 = (undefined8 *)lVar32;
          }
          in_stack_000005b8 = (ulong)CONCAT61((int6)((ulong)in_stack_000005b8 >> 0x10),uVar19) << 8;
          lVar13 = in_stack_00000088[0x57];
          if (lVar13 == in_stack_00000088[0x55]) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hfdd2930a6ec347f3E
                      (in_stack_00000088 + 0x55);
          }
          plVar18 = (long *)(in_stack_00000088[0x56] + lVar13 * 0x50);
          plVar18[3] = lVar41;
          plVar18[2] = lVar20;
          plVar18[5] = lVar41;
          plVar18[4] = lVar33;
          plVar18[7] = (long)in_stack_00000070;
          plVar18[6] = lVar32;
          plVar18[9] = in_stack_000005b8;
          plVar18[8] = (long)in_stack_00000060;
          plVar18[1] = lVar30;
          *plVar18 = lVar20;
          in_stack_00000088[0x57] = lVar13 + 1;
          uVar21 = *(undefined8 *)(in_stack_00000088[0x5a] + 8);
          puVar24 = *(undefined1 **)(in_stack_00000088[0x5a] + 0x10);
          puVar39 = (undefined *)0x1;
          if ((puVar24 != (undefined1 *)0x0) &&
             (puVar39 = (undefined *)_malloc(puVar24), puVar39 == (undefined *)0x0)) {
            FUN_107c03c64(1,puVar24);
            goto LAB_100584f7c;
          }
          _memcpy(puVar39,uVar21,puVar24);
          __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                    (&stack0x00000220,*(undefined8 *)(in_stack_00000088[0x5a] + 0x38),
                     *(undefined8 *)(in_stack_00000088[0x5a] + 0x40));
          puVar7 = puVar22;
          puVar35 = puVar10;
          if (puVar22 == (undefined8 *)0x8000000000000000) {
            puVar35 = (undefined8 *)0x1;
            if ((puVar49 != (undefined8 *)0x0) &&
               (puVar35 = (undefined8 *)_malloc(puVar49), puVar35 == (undefined8 *)0x0)) {
              FUN_107c03c64(1,puVar49);
              goto LAB_100584f7c;
            }
            _memcpy(puVar35,puVar10,puVar49);
            puVar7 = puVar49;
          }
          lVar20 = in_stack_00000088[0x51];
          if (lVar20 == in_stack_00000088[0x4f]) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hbb6d18fad4d85988E
                      (in_stack_00000088 + 0x4f);
          }
          plVar18 = (long *)(in_stack_00000088[0x50] + lVar20 * 0x48);
          plVar18[3] = (long)puVar7;
          plVar18[2] = (long)puVar24;
          plVar18[5] = (long)puVar49;
          plVar18[4] = (long)puVar35;
          plVar18[7] = (long)in_stack_00000228;
          plVar18[6] = (long)in_stack_00000220;
          plVar18[8] = (long)in_stack_00000230;
          plVar18[1] = (long)puVar39;
          *plVar18 = (long)puVar24;
          in_stack_00000088[0x51] = lVar20 + 1;
          lVar20 = *(long *)in_stack_00000088[0x5b];
          *(long *)in_stack_00000088[0x5b] = lVar20 + -1;
          LORelease();
          in_stack_00000230 = puVar24;
          puVar26 = in_stack_00000220;
          unaff_x26 = in_stack_00000228;
        }
        in_stack_00000228 = puVar39;
        in_stack_00000220 = puVar24;
        if (lVar20 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E(in_stack_00000088 + 0x5b);
        }
        lVar30 = in_stack_00000088[0x59];
        lVar20 = in_stack_00000088[0x58];
      }
      puVar34 = (undefined *)in_stack_00000088[0x46];
      uVar36 = in_stack_00000088[0x47];
      lVar20 = in_stack_00000088[0x49];
      puVar15 = (undefined8 *)in_stack_00000088[0x49];
      puVar25 = (undefined8 *)in_stack_00000088[0x48];
      uVar38 = in_stack_00000088[0x4a];
      puVar24 = (undefined1 *)in_stack_00000088[0x4b];
      puVar39 = (undefined *)in_stack_00000088[0x4c];
      uVar21 = in_stack_00000088[0x4d];
      *(undefined2 *)((long)in_stack_00000088 + 0x2f9) = 0;
      if (in_stack_00000088[0x57] == 0) {
        if (in_stack_00000088[0x55] != 0) {
          _free();
        }
        if (puVar34 != (undefined *)0x0) {
          _free(uVar36);
        }
        if (lVar20 != 0) {
          _free(uVar38);
        }
        if (puVar39 != (undefined *)0x0) {
          _free(uVar21);
        }
      }
      else {
        in_stack_00000220 = (undefined1 *)0x8000000000000005;
        FUN_101725e54(*(undefined8 *)in_stack_00000088[0x45],&stack0x00000570);
        in_stack_00000228 = puVar34;
        puVar7 = puVar25;
        puVar35 = puVar15;
        puVar26 = puVar24;
        unaff_x26 = puVar39;
      }
      lVar20 = in_stack_00000088[0x4f];
      uVar38 = in_stack_00000088[0x50];
      uVar21 = in_stack_00000088[0x51];
      uStack0000000000000040 = in_stack_00000088[0x52];
      puStack0000000000000038 = (undefined8 *)in_stack_00000088[0x53];
      lVar30 = in_stack_00000088[0x54];
      *(undefined1 *)((long)in_stack_00000088 + 0x2fa) = 0;
      *(undefined2 *)(in_stack_00000088 + 0x5f) = 1;
      if (lVar20 == -0x8000000000000000) {
LAB_100583b0c:
        *in_stack_00000048 = 0x8000000000000001;
        uVar19 = 7;
        goto LAB_100584cb8;
      }
    }
    FUN_100ca2228(in_stack_00000088 + 0x35);
    in_stack_00000088[0x35] = lVar20;
    in_stack_00000088[0x36] = uVar38;
    in_stack_00000088[0x37] = uVar21;
    *(undefined1 *)((long)in_stack_00000088 + 0x1a1) = 0;
    puVar25 = puStack0000000000000038 + lVar30 * 3;
    in_stack_00000088[0x359] = puStack0000000000000038;
    in_stack_00000088[0x35a] = puStack0000000000000038;
    in_stack_00000088[0x35b] = uStack0000000000000040;
    in_stack_00000088[0x35c] = puVar25;
    if (puStack0000000000000038 != puVar25) {
      do {
        puVar15 = puStack0000000000000038 + 3;
        in_stack_00000088[0x35a] = puVar15;
        uVar21 = puStack0000000000000038[2];
        uVar38 = *puStack0000000000000038;
        in_stack_00000088[0x39] = puStack0000000000000038[1];
        in_stack_00000088[0x38] = uVar38;
        in_stack_00000088[0x3a] = uVar21;
        if (in_stack_00000088[0x38] == -0x8000000000000000) {
          uVar27 = (long)puVar25 - (long)puVar15;
          puStack0000000000000038 = puVar15;
          goto joined_r0x000100584144;
        }
        *(undefined1 *)(in_stack_00000088 + 0x34) = 1;
        lVar20 = *(long *)in_stack_00000088[0x18];
        *(undefined1 *)(in_stack_00000088 + 0x34) = 0;
        *(undefined4 *)(in_stack_00000088 + 0x3b) = 1;
        in_stack_00000088[0x3c] = in_stack_00000088[0x38];
        in_stack_00000088[0x3d] = in_stack_00000088[0x39];
        in_stack_00000088[0x3e] = in_stack_00000088[0x3a];
        in_stack_00000088[0x76] = lVar20 + 0x10;
        in_stack_00000088[0x77] = in_stack_00000088[0x19];
        *(undefined1 *)(in_stack_00000088 + 0xf0) = 0;
        iVar6 = FUN_10059e898(in_stack_00000088 + 0x3b,in_stack_00000080);
        if (iVar6 != 0) {
          *in_stack_00000048 = 0x8000000000000001;
          uVar19 = 8;
          goto LAB_100584cb8;
        }
        FUN_100d1ddbc(in_stack_00000088 + 0x3b);
        *(undefined1 *)(in_stack_00000088 + 0x34) = 0;
        puVar25 = (undefined8 *)in_stack_00000088[0x35c];
        puStack0000000000000038 = (undefined8 *)in_stack_00000088[0x35a];
      } while (puStack0000000000000038 != puVar25);
    }
    in_stack_00000088[0x38] = 0x8000000000000000;
    uVar27 = (long)puVar25 - (long)puStack0000000000000038;
joined_r0x000100584144:
    if (uVar27 != 0) {
      uVar27 = uVar27 / 0x18;
      puStack0000000000000038 = puStack0000000000000038 + 1;
      do {
        if (puStack0000000000000038[-1] != 0) {
          _free(*puStack0000000000000038);
        }
        puStack0000000000000038 = puStack0000000000000038 + 3;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    if (in_stack_00000088[0x35b] != 0) {
      _free(in_stack_00000088[0x359]);
    }
    uVar27 = in_stack_00000088[0x37];
    lVar20 = uVar27 * 0xc0;
    if (0xaaaaaaaaaaaaaa < uVar27) {
      uVar21 = 0;
LAB_100584180:
      FUN_107c03c64(uVar21,lVar20);
      goto LAB_100584f7c;
    }
    lVar30 = in_stack_00000088[0x36];
    if (lVar20 == 0) {
      lVar41 = 8;
      *(undefined8 *)(unaff_x29 + -0xa0) = 0;
      *(undefined8 *)(unaff_x29 + -0x98) = 8;
    }
    else {
      lVar41 = _malloc(lVar20);
      if (lVar41 == 0) {
        uVar21 = 8;
        goto LAB_100584180;
      }
      *(ulong *)(unaff_x29 + -0xa0) = uVar27;
      *(long *)(unaff_x29 + -0x98) = lVar41;
    }
    if (uVar27 != 0) {
      uVar12 = 0;
      puVar25 = (undefined8 *)(lVar41 + 0x28);
      do {
        __ZN154__LT_codex_core__context__skill_instructions__SkillInstructions_u20_as_u20_core__convert__From_LT__RF_codex_core_skills__injection__SkillInjection_GT__GT_4from17h019bb030177b2af7E
                  (&stack0x00000570,lVar30);
        puVar8 = (undefined4 *)_malloc(4);
        if (puVar8 == (undefined4 *)0x0) {
          FUN_107c03c64(1,4);
          goto LAB_100584f7c;
        }
        *puVar8 = 0x72657375;
        puVar15 = (undefined8 *)_malloc(0x20);
        if (puVar15 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
          goto LAB_100584f7c;
        }
        in_stack_00001f40 = &UNK_108c98230;
        in_stack_00001f48 = (undefined1 *)0x8;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00001f70,s_<name>_<_name>_<path>_<_path>_108af68c9,&stack0x00000220);
        puVar22 = (undefined8 *)&stack0x00000490;
        puVar10 = (undefined8 *)&DAT_100c7b3a0;
        puVar49 = (undefined8 *)&stack0x00001f70;
        puVar11 = (undefined8 *)&DAT_10112965c;
        in_stack_00000240 = &stack0x00001f40;
        in_stack_00000248 = &DAT_100c7b3a0;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x000004f0,s__108ac137a,&stack0x00000220);
        if (in_stack_00001f70 != (undefined8 *)0x0) {
          _free(in_stack_00001f78);
        }
        puVar15[2] = unaff_x24;
        puVar15[1] = puVar50;
        puVar15[3] = 0x1c;
        *puVar15 = 0x8000000000000000;
        if (in_stack_00000220 != (undefined1 *)0x0) {
          _free(in_stack_00000228);
        }
        if (puVar7 != (undefined8 *)0x0) {
          _free(puVar35);
        }
        if (puVar26 != (undefined1 *)0x0) {
          _free(unaff_x26);
        }
        puVar25[-4] = 4;
        puVar25[-5] = 2;
        puVar25[-3] = puVar8;
        puVar25[-1] = 1;
        puVar25[-2] = 4;
        *puVar25 = puVar15;
        uVar12 = uVar12 + 1;
        puVar25[2] = 0x8000000000000000;
        puVar25[1] = 1;
        *(undefined1 *)(puVar25 + 5) = 2;
        puVar25 = puVar25 + 0x18;
        lVar30 = lVar30 + 0x48;
      } while (uVar27 != uVar12);
    }
    lVar41 = *(long *)(unaff_x29 + -0x98);
    uVar12 = *(ulong *)(unaff_x29 + -0xa0);
    __ZN10codex_core7session4turn41collect_explicit_app_ids_from_skill_items17h05a024288637d15fE
              (&stack0x000000e8,lVar41,uVar27,in_stack_00000088[0x2b],in_stack_00000088[0x2c],
               in_stack_00000088 + 0x10);
    __ZN10codex_core7plugins9injection23build_plugin_injections17h7e8216463acb00c1E
              (&stack0x00000558,in_stack_00000088[0x25],in_stack_00000088[0x26],
               in_stack_00000088[0x28],in_stack_00000088[0x29],in_stack_00000088[0x2b],
               in_stack_00000088[0x2c]);
    __ZN10codex_core7plugins8mentions24collect_explicit_app_ids17hbdd8cc08171bb561E
              (&stack0x00001f40,*in_stack_00000088,in_stack_00000088[1]);
    FUN_100423fd0(&stack0x00001f40,&stack0x000000e8);
    lVar20 = in_stack_00000088[0x2b];
    lVar30 = in_stack_00000088[0x2c];
    pauVar16 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar16[1][0] == '\x01') {
      auVar48 = *pauVar16;
    }
    else {
      auVar48 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar16 + 8) = auVar48._8_8_;
      pauVar16[1][0] = 1;
    }
    *(long *)*pauVar16 = auVar48._0_8_ + 1;
    lVar32 = 0;
    lVar33 = 0;
    if (lVar30 != 0) {
      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h7d465b27a1e6b20bE
                (&stack0x00000570,lVar30,&stack0x00000590,1);
      lVar13 = 0;
      do {
        lVar14 = lVar20 + lVar13 * 0x270;
        uVar21 = *(undefined8 *)(lVar14 + 8);
        lVar17 = *(long *)(lVar14 + 0x10);
        uVar38 = *(undefined8 *)(lVar14 + 0x20);
        uVar36 = *(undefined8 *)(lVar14 + 0x28);
        FUN_100e8dd9c(auVar48._0_8_,auVar48._8_8_);
        if (lVar33 == 0) {
          __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h7d465b27a1e6b20bE
                    (&stack0x00000570,1,&stack0x00000590,1);
        }
        bVar31 = false;
        bVar29 = extraout_var >> 1;
        while( true ) {
          for (uVar28 = CONCAT17(-(bVar29 == 0xff),
                                 CONCAT16(-(bVar29 == 0xff),
                                          CONCAT15(-(bVar29 == 0xff),
                                                   CONCAT14(-(bVar29 == 0xff),
                                                            CONCAT13(-(bVar29 == 0xff),
                                                                     CONCAT12(-(bVar29 == 0xff),
                                                                              CONCAT11(-(bVar29 ==
                                                                                        0xff),-(
                                                  bVar29 == 0xff)))))))) & 0x8080808080808080;
              uVar28 != 0; uVar28 = uVar28 - 1 & uVar28) {
            if ((lVar17 == -0x7ffffff01) && (iVar6 = _memcmp(uVar21,5), iVar6 == 0))
            goto joined_r0x000100584dfc;
          }
          puVar24 = in_stack_00000020;
          if (!bVar31) {
            puVar24 = (undefined1 *)0x0;
          }
          bVar45 = NEON_umaxv(0xffffffffffffffff,1);
          if ((bVar45 & 1) != 0) break;
          bVar31 = true;
          in_stack_00000020 = puVar24;
        }
        uVar28 = (ulong)(char)puVar24[0x108c56c70];
        if (-1 < (char)puVar24[0x108c56c70]) {
          puVar24 = (undefined1 *)0x0;
          uVar28 = 0xff;
        }
        UNK_108c56c78 = extraout_var >> 1;
        puVar24[0x108c56c70] = UNK_108c56c78;
                    /* WARNING: Read-only address (ram,0x000108c56c78) is written */
        lVar33 = lVar33 - (uVar28 & 1);
        lVar32 = lVar32 + 1;
        lVar14 = (long)puVar24 * -0x20;
        *(undefined8 *)(&UNK_108c56c50 + lVar14) = uVar21;
        *(long *)(&UNK_108c56c58 + lVar14) = lVar17;
        *(undefined8 *)(&UNK_108c56c60 + lVar14) = uVar38;
        *(undefined8 *)(&UNK_108c56c68 + lVar14) = uVar36;
        uVar38 = _UNK_108c56c60;
        uVar36 = _UNK_108c56c68;
joined_r0x000100584dfc:
        _UNK_108c56c68 = uVar36;
        _UNK_108c56c60 = uVar38;
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar30);
    }
    *(undefined8 *)(unaff_x29 + -0x98) = 0;
    *(undefined **)(unaff_x29 + -0xa0) = &UNK_108c56c70;
    *(long *)(unaff_x29 + -0x88) = lVar32;
    *(long *)(unaff_x29 + -0x90) = lVar33;
    *(undefined1 (*) [16])(unaff_x29 + -0x80) = auVar48;
    FUN_100417664(&stack0x00000220,&stack0x000004f0);
    if (puVar22 != (undefined8 *)0x8000000000000001) {
      puVar24 = in_stack_00001f58 + 1;
      if (in_stack_00001f58 == (undefined1 *)0xffffffffffffffff) {
        puVar24 = (undefined1 *)0xffffffffffffffff;
      }
      puVar37 = puVar24;
      if (puVar24 < (undefined1 *)0x5) {
        puVar37 = (undefined1 *)0x4;
      }
      lVar20 = (long)puVar37 * 0x38;
      if (puVar24 < (undefined1 *)0x24924924924924a) {
        if (lVar20 == 0) {
          puVar37 = (undefined1 *)0x0;
          puVar7 = (undefined8 *)0x8;
LAB_10058459c:
          puVar7[1] = puVar10;
          *puVar7 = puVar22;
          puVar7[3] = puVar11;
          puVar7[2] = puVar49;
          puVar7[5] = in_stack_00000248;
          puVar7[4] = in_stack_00000240;
          puVar7[6] = in_stack_00000250;
          puVar24 = (undefined1 *)0x1;
          lVar20 = 0x38;
          do {
            FUN_100417664(&stack0x00000570,&stack0x00001f70);
            if (puVar24 == puVar37) {
              puVar2 = in_stack_00001f58 + 1;
              if (in_stack_00001f58 == (undefined1 *)0xffffffffffffffff) {
                puVar2 = (undefined1 *)0xffffffffffffffff;
              }
              thunk_FUN_108855060(&stack0x00000490,puVar24,puVar2,8,0x38);
            }
            puVar9 = (undefined8 *)((long)puVar7 + lVar20);
            puVar9[6] = puVar26;
            puVar9[3] = lVar32;
            puVar9[2] = lVar33;
            *(undefined1 (*) [16])(puVar9 + 4) = auVar48;
            puVar9[1] = 0;
            *puVar9 = &UNK_108c56c70;
            puVar24 = puVar24 + 1;
            lVar20 = lVar20 + 0x38;
          } while( true );
        }
        uVar21 = 8;
        puVar7 = (undefined8 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar20,8);
        if (puVar7 != (undefined8 *)0x0) goto LAB_10058459c;
      }
      else {
        uVar21 = 0;
      }
      FUN_107c03c64(uVar21,lVar20);
      goto LAB_100584f7c;
    }
    uVar21 = in_stack_00000088[0x1c];
    lVar20 = in_stack_00000088[0x1d];
    if (lVar20 == 0) {
      lVar30 = 1;
      _memcpy(1,uVar21,0);
      uVar21 = in_stack_00000088[0x1f];
      lVar33 = in_stack_00000088[0x20];
      if (lVar33 == 0) goto LAB_1005846a8;
LAB_1005844ec:
      lVar32 = _malloc(lVar33);
      if (lVar32 == 0) {
        FUN_107c03c64(1,lVar33);
        goto LAB_100584f7c;
      }
      _memcpy(lVar32,uVar21,lVar33);
      uVar21 = in_stack_00000088[0x22];
      lVar13 = in_stack_00000088[0x23];
      if (lVar13 != 0) goto LAB_100584510;
LAB_1005846c4:
      lVar17 = 1;
    }
    else {
      lVar30 = _malloc(lVar20);
      if (lVar30 == 0) {
        FUN_107c03c64(1,lVar20);
        goto LAB_100584f7c;
      }
      _memcpy(lVar30,uVar21,lVar20);
      uVar21 = in_stack_00000088[0x1f];
      lVar33 = in_stack_00000088[0x20];
      if (lVar33 != 0) goto LAB_1005844ec;
LAB_1005846a8:
      lVar32 = 1;
      _memcpy(1,uVar21,lVar33);
      uVar21 = in_stack_00000088[0x22];
      lVar13 = in_stack_00000088[0x23];
      if (lVar13 == 0) goto LAB_1005846c4;
LAB_100584510:
      lVar17 = _malloc(lVar13);
      if (lVar17 == 0) {
        FUN_107c03c64(1,lVar13);
LAB_100584f7c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100584f80);
        (*pcVar5)();
      }
    }
    _memcpy(lVar17,uVar21,lVar13);
                    /* WARNING: Read-only address (ram,0x000108c56c60) is written */
                    /* WARNING: Read-only address (ram,0x000108c56c68) is written */
                    /* WARNING: Read-only address (ram,0x000108c56c78) is written */
    if (lVar20 != 0) {
      _free(lVar30);
    }
    if (lVar33 != 0) {
      _free(lVar32);
    }
    if (lVar13 != 0) {
      _free(lVar17);
    }
    lVar20 = in_stack_00000088[0x25];
    for (lVar30 = in_stack_00000088[0x26] << 7; lVar30 != 0; lVar30 = lVar30 + -0x80) {
      __ZN12codex_plugin23PluginCapabilitySummary18telemetry_metadata17hc26323849b316239E
                (&stack0x00000118,lVar20);
      if (in_stack_00000118 != -0x8000000000000000) {
        lVar32 = *(long *)in_stack_00000088[0x18];
        uVar21 = in_stack_00000088[0x1c];
        lVar33 = in_stack_00000088[0x1d];
        if (lVar33 == 0) {
          _memcpy(1,uVar21,0);
          uVar21 = in_stack_00000088[0x1f];
          lVar33 = in_stack_00000088[0x20];
          if (lVar33 != 0) goto LAB_100584878;
LAB_1005848a8:
          lVar13 = 1;
        }
        else {
          lVar13 = _malloc(lVar33);
          if (lVar13 == 0) {
            FUN_107c03c64(1,lVar33);
            goto LAB_100584f7c;
          }
          _memcpy(lVar13,uVar21,lVar33);
          uVar21 = in_stack_00000088[0x1f];
          lVar33 = in_stack_00000088[0x20];
          if (lVar33 == 0) goto LAB_1005848a8;
LAB_100584878:
          lVar13 = _malloc(lVar33);
          if (lVar13 == 0) {
            FUN_107c03c64(1,lVar33);
            goto LAB_100584f7c;
          }
        }
        _memcpy(lVar13,uVar21,lVar33);
        uVar21 = in_stack_00000088[0x22];
        lVar33 = in_stack_00000088[0x23];
        if (lVar33 == 0) {
          lVar13 = 1;
        }
        else {
          lVar13 = _malloc(lVar33);
          if (lVar13 == 0) {
            FUN_107c03c64(1,lVar33);
            goto LAB_100584f7c;
          }
        }
        _memcpy(lVar13,uVar21,lVar33);
        __ZN15codex_analytics6client21AnalyticsEventsClient17track_plugin_used17h5f8c1420bb02b61bE
                  (lVar32 + 0x4d8,&stack0x00000220,&stack0x00000570);
      }
      lVar20 = lVar20 + 0x80;
    }
    if (uVar12 == uVar27) {
      thunk_FUN_108855060(&stack0x00000220,uVar27,1,8,0xc0);
    }
    _memcpy(lVar41 + uVar27 * 0xc0,puVar9,0xc0);
    _free(puVar9);
    in_stack_000001e8 = ((ulong *)((ulong)&stack0x00000220 | 8))[1];
    in_stack_000001e0 = *(ulong *)((ulong)&stack0x00000220 | 8);
    lVar20 = *(long *)(unaff_x29 + -0x98);
    if ((lVar20 != 0) && (lVar20 * 0x21 != -0x29)) {
      _free(*(long *)(unaff_x29 + -0xa0) + lVar20 * -0x20 + -0x20);
    }
    *(undefined1 *)((long)in_stack_00000088 + 0x1a1) = 0;
    lVar20 = in_stack_00000088[0x36];
    lVar30 = in_stack_00000088[0x37];
    if (lVar30 != 0) {
      puVar7 = (undefined8 *)(lVar20 + 0x20);
      do {
        if (puVar7[-4] != 0) {
          _free(puVar7[-3]);
        }
        if (puVar7[-1] != 0) {
          _free(*puVar7);
        }
        if (puVar7[2] != 0) {
          _free(puVar7[3]);
        }
        puVar7 = puVar7 + 9;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    if (in_stack_00000088[0x35] != 0) {
      _free(lVar20);
    }
    lVar30 = in_stack_00000088[0x2f];
    lVar20 = lVar30;
    for (lVar41 = in_stack_00000088[0x30]; lVar41 != 0; lVar41 = lVar41 + -1) {
      FUN_100e0c08c(lVar20);
      lVar20 = lVar20 + 0x148;
    }
    if (in_stack_00000088[0x2e] != 0) {
      _free(lVar30);
    }
    lVar20 = in_stack_00000088[0x11];
    if (lVar20 != 0) {
      lVar30 = in_stack_00000088[0x13];
      if (lVar30 != 0) {
        plVar18 = (long *)in_stack_00000088[0x10];
        plVar23 = plVar18 + 1;
        lVar41 = *plVar18;
        uVar27 = CONCAT17(-(-1 < lVar41),
                          CONCAT16(-(-1 < (char)((ulong)lVar41 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar41 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar41 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar41 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar41
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar41 >> 8)),-(-1 < (char)lVar41)))))))) &
                 0x8080808080808080;
        do {
          while (uVar27 == 0) {
            lVar41 = *plVar23;
            plVar18 = plVar18 + -0x20;
            plVar23 = plVar23 + 1;
            uVar27 = CONCAT17(-(-1 < lVar41),
                              CONCAT16(-(-1 < (char)((ulong)lVar41 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar41 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar41 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar41 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar41 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar41 >> 8)),
                                                           -(-1 < (char)lVar41)))))))) &
                     0x8080808080808080;
          }
          uVar28 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          uVar28 = LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) & 0x78;
          if (*(long *)((long)plVar18 + uVar28 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)plVar18 + uVar28 * -4 + -0x18));
          }
          uVar27 = uVar27 - 1 & uVar27;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
      }
      if (lVar20 * 0x21 != -0x29) {
        _free(in_stack_00000088[0x10] + lVar20 * -0x20 + -0x20);
      }
    }
    lVar20 = in_stack_00000088[0xb];
    if (lVar20 != 0) {
      lVar30 = in_stack_00000088[0xd];
      if (lVar30 != 0) {
        plVar18 = (long *)in_stack_00000088[10];
        plVar23 = plVar18 + 1;
        lVar41 = *plVar18;
        uVar27 = CONCAT17(-(-1 < lVar41),
                          CONCAT16(-(-1 < (char)((ulong)lVar41 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar41 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar41 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar41 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar41
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar41 >> 8)),-(-1 < (char)lVar41)))))))) &
                 0x8080808080808080;
        do {
          while (uVar27 == 0) {
            lVar41 = *plVar23;
            plVar18 = plVar18 + -0x20;
            plVar23 = plVar23 + 1;
            uVar27 = CONCAT17(-(-1 < lVar41),
                              CONCAT16(-(-1 < (char)((ulong)lVar41 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar41 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar41 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar41 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar41 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar41 >> 8)),
                                                           -(-1 < (char)lVar41)))))))) &
                     0x8080808080808080;
          }
          uVar28 = (uVar27 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar27 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
          uVar28 = LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) & 0x78;
          if (*(long *)((long)plVar18 + uVar28 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)plVar18 + uVar28 * -4 + -0x18));
          }
          uVar27 = uVar27 - 1 & uVar27;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
      }
      if (lVar20 * 0x21 != -0x29) {
        _free(in_stack_00000088[10] + lVar20 * -0x20 + -0x20);
      }
    }
    lVar30 = in_stack_00000088[0x2b];
    lVar20 = lVar30;
    for (lVar41 = in_stack_00000088[0x2c]; lVar41 != 0; lVar41 = lVar41 + -1) {
      FUN_100e3b46c(lVar20);
      lVar20 = lVar20 + 0x270;
    }
    if (in_stack_00000088[0x2a] != 0) {
      _free(lVar30);
    }
    lVar30 = in_stack_00000088[0x28];
    lVar20 = in_stack_00000088[0x29] + 1;
    lVar41 = lVar30;
    while (lVar20 = lVar20 + -1, lVar20 != 0) {
      FUN_100dea5d4(lVar41);
      lVar41 = lVar41 + 0x1a8;
    }
    if (in_stack_00000088[0x27] != 0) {
      _free(lVar30);
    }
    lVar30 = in_stack_00000088[0x25];
    lVar20 = lVar30;
    for (lVar41 = in_stack_00000088[0x26]; lVar41 != 0; lVar41 = lVar41 + -1) {
      FUN_100e0649c(lVar20);
      lVar20 = lVar20 + 0x80;
    }
    if (in_stack_00000088[0x24] != 0) {
      _free(lVar30);
    }
    lVar30 = in_stack_00000088[3];
    lVar20 = lVar30;
    for (lVar41 = in_stack_00000088[4]; lVar41 != 0; lVar41 = lVar41 + -1) {
      FUN_100cc1c58(lVar20);
      lVar20 = lVar20 + 0x140;
    }
    if (in_stack_00000088[2] != 0) {
      _free(lVar30);
    }
    lVar30 = in_stack_00000088[6];
    lVar20 = lVar30;
    for (lVar41 = in_stack_00000088[7]; lVar41 != 0; lVar41 = lVar41 + -1) {
      FUN_100e0649c(lVar20);
      lVar20 = lVar20 + 0x80;
    }
    if (in_stack_00000088[5] != 0) {
      _free(lVar30);
    }
    if (in_stack_00000088[0x1b] != 0) {
      _free(in_stack_00000088[0x1c]);
    }
    if (in_stack_00000088[0x1e] != 0) {
      _free(in_stack_00000088[0x1f]);
    }
    if (in_stack_00000088[0x21] != 0) {
      _free(in_stack_00000088[0x22]);
    }
    *in_stack_00000048 = uVar12;
    in_stack_00000048[2] = in_stack_000001e8;
    in_stack_00000048[1] = in_stack_000001e0;
    in_stack_00000048[4] = (ulong)in_stack_00001f48;
    in_stack_00000048[3] = (ulong)in_stack_00001f40;
    in_stack_00000048[6] = (ulong)in_stack_00001f58;
    in_stack_00000048[5] = in_stack_00001f50;
    in_stack_00000048[8] = in_stack_00001f68;
    in_stack_00000048[7] = (ulong)in_stack_00001f60;
    uVar19 = 1;
    goto LAB_100584cb8;
  }
  *(undefined1 *)(in_stack_00000088 + 0x59) = 0;
  in_stack_00000088[99] = in_stack_00000088[0x3a];
  in_stack_00000088[0x62] = in_stack_00000088[0x39];
  in_stack_00000088[0xc4] = in_stack_00000088[0x37];
  in_stack_00000088[0xc5] = in_stack_00000088[0x38];
  in_stack_00000088[0x10f] = in_stack_00000088[0x4f];
  in_stack_00000088[0x110] = in_stack_00000088[0x50];
  in_stack_00000088[0x111] = in_stack_00000088[0x55] + 0x10;
  *(undefined1 *)((long)in_stack_00000088 + 0x896) = 0;
  uVar27 = FUN_10052bc90(in_stack_00000088 + 0x5a,in_stack_00000080);
  if ((uVar27 & 1) == 0) {
    FUN_100cd8618(in_stack_00000088 + 0x5a);
    goto LAB_100582670;
  }
  uVar19 = 6;
  goto LAB_100582958;
  while( true ) {
    plVar18 = plVar18 + 3;
    lVar20 = lVar20 + -0x18;
    uVar19 = 0;
    if (lVar20 == 0) break;
LAB_100582408:
    if ((*plVar18 == 7) &&
       (*(int *)plVar18[-1] == 0x74736e49 && *(int *)(plVar18[-1] + 3) == 0x6c6c6174)) {
      uVar19 = 1;
      break;
    }
  }
LAB_100582438:
  *(undefined1 *)(in_stack_00000088 + 0x72) = uVar19;
  plVar23 = (long *)in_stack_00000088[0x61];
  plVar18 = (long *)*plVar23;
  lVar20 = plVar23[1];
  lVar41 = *plVar18;
  lVar30 = plVar23[3];
  in_stack_00000088[0x87] = plVar18;
  in_stack_00000088[0x88] =
       CONCAT17(-(-1 < lVar41),
                CONCAT16(-(-1 < (char)((ulong)lVar41 >> 0x30)),
                         CONCAT15(-(-1 < (char)((ulong)lVar41 >> 0x28)),
                                  CONCAT14(-(-1 < (char)((ulong)lVar41 >> 0x20)),
                                           CONCAT13(-(-1 < (char)((ulong)lVar41 >> 0x18)),
                                                    CONCAT12(-(-1 < (char)((ulong)lVar41 >> 0x10)),
                                                             CONCAT11(-(-1 < (char)((ulong)lVar41 >>
                                                                                   8)),
                                                                      -(-1 < (char)lVar41)))))))) &
       0x8080808080808080;
  in_stack_00000088[0x89] = plVar18 + 1;
  in_stack_00000088[0x8a] = (long)plVar18 + lVar20 + 1;
  in_stack_00000088[0x8b] = lVar30;
  in_stack_00000088[0x8c] = in_stack_00000088[0x60];
  *(undefined1 *)((long)in_stack_00000088 + 0x469) = 0;
  *(undefined1 *)(in_stack_00000088 + 0x8d) = 1;
  in_stack_00000088[0x77] = in_stack_00000088[0x8b];
  in_stack_00000088[0x74] = in_stack_00000088[0x88];
  in_stack_00000088[0x73] = in_stack_00000088[0x87];
  in_stack_00000088[0x76] = in_stack_00000088[0x8a];
  in_stack_00000088[0x75] = in_stack_00000088[0x89];
  in_stack_00000088[0x78] = in_stack_00000088[0x60] + 0x790;
  *(undefined1 *)(in_stack_00000088 + 0x86) = 0;
  lVar20 = FUN_100fd3e50(in_stack_00000088 + 0x78,in_stack_00000080);
  if (lVar20 != 0) {
    if (((*(char *)(in_stack_00000088 + 0x86) == '\x03') &&
        (*(char *)(in_stack_00000088 + 0x85) == '\x03')) &&
       (*(char *)(in_stack_00000088 + 0x7c) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (in_stack_00000088 + 0x7d);
      if (in_stack_00000088[0x7e] != 0) {
        (**(code **)(in_stack_00000088[0x7e] + 0x18))(in_stack_00000088[0x7f]);
      }
    }
    *(undefined1 *)(in_stack_00000088 + 0x8d) = 0;
    lVar30 = in_stack_00000088[0x73];
    uVar12 = in_stack_00000088[0x74];
    plVar18 = (long *)in_stack_00000088[0x75];
    uVar28 = in_stack_00000088[0x77];
    uVar27 = uVar28;
    if (*(long *)(lVar20 + 0x848) != 0) {
      uVar27 = uVar28 + 1 >> 1;
    }
    if (*(ulong *)(lVar20 + 0x840) < uVar27) {
      __ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17h237b9c2a934c5d59E
                (lVar20 + 0x830,uVar27,lVar20 + 0x850,1);
    }
    do {
      if (uVar12 == 0) {
        plVar23 = plVar18;
        if (uVar28 == 0) goto code_r0x0001005825b8;
        do {
          plVar18 = plVar23 + 1;
          lVar41 = *plVar23;
          lVar30 = lVar30 + -0xe40;
          uVar12 = CONCAT17(-(-1 < lVar41),
                            CONCAT16(-(-1 < (char)((ulong)lVar41 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar41 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar41 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar41 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar41 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar41 >> 8)),
                                                           -(-1 < (char)lVar41)))))))) &
                   0x8080808080808080;
          plVar23 = plVar18;
        } while (uVar12 == 0);
      }
      uVar27 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
      uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
      uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
      lVar41 = lVar30 + (long)-(int)((ulong)LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) >> 3) * 0x1c8;
      __ZN10codex_core22mcp_skill_dependencies24canonical_mcp_server_key17hae9caa29986caf2dE
                (&stack0x00000220,*(undefined8 *)(lVar41 + -0x1c0),*(undefined8 *)(lVar41 + -0x1b8),
                 lVar41 + -0x1b0);
      FUN_1016e6d00(lVar20 + 0x830,&stack0x00000220);
      uVar12 = uVar12 - 1 & uVar12;
      uVar28 = uVar28 - 1;
    } while( true );
  }
  *(undefined1 *)((long)in_stack_00000088 + 0x469) = 3;
  uVar19 = 5;
LAB_10058294c:
  *in_stack_00000070 = uVar19;
  uVar19 = 5;
LAB_100582958:
  *in_stack_00000020 = uVar19;
  *in_stack_00000048 = 0x8000000000000001;
  uVar19 = 6;
LAB_100584cb8:
  *(undefined1 *)((long)in_stack_00000088 + 0x1a2) = uVar19;
  return;
}

