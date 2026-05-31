
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1011d2568(long *param_1,long param_2,undefined *param_3)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *unaff_x19;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  char *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long *plStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  long lStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  puVar2 = &UNK_108cb5c9d;
  lStack_100 = param_2;
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    puStack_90 = &UNK_108cb5c9d;
    uStack_88 = 0x19;
    puStack_78 = &UNK_108cd3e04;
    uStack_70 = 0xd7;
    uStack_c8 = 0;
    puStack_c0 = &UNK_108cb5c9d;
    uStack_b0 = 0;
    lStack_b8 = 0x19;
    pcStack_a8 = 
    "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs";
    uStack_98 = 5;
    uStack_a0 = 0x5b;
    uStack_80 = 0xac00000001;
    puVar5 = puRam000000010b634c18;
    puVar4 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
      puVar4 = &UNK_10b3c24c8;
    }
    unaff_x19 = &UNK_108c84000;
    (**(code **)(puVar4 + 0x20))(puVar5,&uStack_c8);
  }
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    puStack_90 = &UNK_108cb5c9d;
    uStack_88 = 0x19;
    puStack_78 = &UNK_108cb5c28;
    uStack_70 = 0xeb;
    uStack_c8 = 0;
    puStack_c0 = &UNK_108cb5c9d;
    uStack_b0 = 0;
    lStack_b8 = 0x19;
    pcStack_a8 = 
    "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs";
    uStack_98 = 5;
    uStack_a0 = 0x5b;
    uStack_80 = 0x8300000001;
    puVar5 = puRam000000010b634c18;
    puVar4 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
      puVar4 = &UNK_10b3c24c8;
    }
    unaff_x19 = &UNK_108c84000;
    (**(code **)(puVar4 + 0x20))(puVar5,&uStack_c8);
  }
  lStack_f0 = param_1[0x89] + 0x10;
  puStack_f8 = &UNK_10b220fe8;
  ppuStack_e8 = &puStack_f8;
  uStack_d8 = 0;
  ppuStack_e0 = ppuStack_e8;
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    puStack_90 = &UNK_108cb5c9d;
    uStack_88 = 0x19;
    puStack_78 = &UNK_108cd3e6f;
    uStack_70 = 0x10d;
    uStack_c8 = 0;
    puStack_c0 = &UNK_108cb5c9d;
    uStack_b0 = 0;
    lStack_b8 = 0x19;
    pcStack_a8 = 
    "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs";
    uStack_98 = 5;
    uStack_a0 = 0x5b;
    uStack_80 = 0xae00000001;
    puVar5 = puRam000000010b634c18;
    puVar4 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar5 = &UNK_109adfc03;
      puVar4 = &UNK_10b3c24c8;
    }
    (**(code **)(puVar4 + 0x20))(puVar5,&uStack_c8);
  }
  if (*param_1 == 2) {
    auVar6 = func_0x0001060f8f1c(param_1 + 1,&ppuStack_e8,lStack_100,param_3);
    puVar4 = auVar6._8_8_;
    lVar3 = auVar6._0_8_;
  }
  else {
    puVar5 = (undefined *)0x0;
    if (param_3 == (undefined *)0x0) {
      lVar3 = 0;
      puVar4 = puVar5;
    }
    else {
      do {
        if (param_3 < puVar5) {
          puVar4 = param_3;
          auVar6 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                             (puVar5,param_3,param_3,&UNK_10b24ea80);
          puStack_160 = &
                        __ZN99__LT_hickory_proto__tcp__tcp_stream__TcpStream_LT_S_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17hbf999b3e897009a9E
          ;
          puStack_158 = &
                        __ZN99__LT_hickory_proto__tcp__tcp_stream__TcpStream_LT_S_GT__u20_as_u20_futures_core__stream__Stream_GT_9poll_next10__CALLSITE17hbf999b3e897009a9E
          ;
          puStack_150 = &__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
          puStack_148 = &UNK_109adfc03;
          puStack_140 = &UNK_10b3c24c8;
          pcStack_108 = FUN_1011d28cc;
          puStack_138 = puVar2;
          puStack_130 = puVar5;
          plStack_128 = param_1;
          puStack_120 = param_3;
          puStack_118 = unaff_x19;
          puStack_110 = &stack0xfffffffffffffff0;
          if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
            puStack_190 = &UNK_108cb5c9d;
            uStack_188 = 0x19;
            puStack_178 = &UNK_108cd3e04;
            uStack_170 = 0xd7;
            uStack_1c8 = 0;
            puStack_1c0 = &UNK_108cb5c9d;
            uStack_1b0 = 0;
            uStack_1b8 = 0x19;
            pcStack_1a8 = 
            "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs"
            ;
            uStack_198 = 5;
            uStack_1a0 = 0x5b;
            uStack_180 = 0xac00000001;
            puVar2 = puRam000000010b634c18;
            puVar5 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
              puVar5 = &UNK_10b3c24c8;
            }
            (**(code **)(puVar5 + 0x20))(puVar2,&uStack_1c8);
          }
          if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
            puStack_190 = &UNK_108cb5c9d;
            uStack_188 = 0x19;
            puStack_178 = &UNK_108cb5c28;
            uStack_170 = 0xeb;
            uStack_1c8 = 0;
            puStack_1c0 = &UNK_108cb5c9d;
            uStack_1b0 = 0;
            uStack_1b8 = 0x19;
            pcStack_1a8 = 
            "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs"
            ;
            uStack_198 = 5;
            uStack_1a0 = 0x5b;
            uStack_180 = 0x8300000001;
            puVar2 = puRam000000010b634c18;
            puVar5 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
              puVar5 = &UNK_10b3c24c8;
            }
            (**(code **)(puVar5 + 0x20))(puVar2,&uStack_1c8);
          }
          lStack_1f0 = *(long *)(auVar6._0_8_ + 0x20) + 0x10;
          puStack_1f8 = &UNK_10b220fe8;
          ppuStack_1e8 = &puStack_1f8;
          uStack_1d8 = 0;
          ppuStack_1e0 = ppuStack_1e8;
          if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
            puStack_190 = &UNK_108cb5c9d;
            uStack_188 = 0x19;
            puStack_178 = &UNK_108cd3e6f;
            uStack_170 = 0x10d;
            uStack_1c8 = 0;
            puStack_1c0 = &UNK_108cb5c9d;
            uStack_1b0 = 0;
            uStack_1b8 = 0x19;
            pcStack_1a8 = 
            "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs"
            ;
            uStack_198 = 5;
            uStack_1a0 = 0x5b;
            uStack_180 = 0xae00000001;
            puVar2 = puRam000000010b634c18;
            puVar5 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
              puVar5 = &UNK_10b3c24c8;
            }
            (**(code **)(puVar5 + 0x20))(puVar2,&uStack_1c8);
          }
          auVar6 = func_0x0001060f8f1c(auVar6._0_8_,&ppuStack_1e8,auVar6._8_8_,puVar4);
          if (auVar6._0_8_ == 2) {
            auVar6._8_8_ = 0xd00000003;
            auVar6._0_8_ = 1;
          }
          return auVar6;
        }
        puStack_c0 = puVar5 + lStack_100;
        uStack_c8 = 0;
        lStack_b8 = (long)param_3 - (long)puVar5;
        puVar2 = (undefined *)
                 __ZN6rustls12common_state11CommonState16buffer_plaintext17h2406345ecef1dad4E
                           (param_1 + 4,&uStack_c8,param_1 + 0x7d);
        cVar1 = *(char *)((long)param_1 + 0x35f);
        *(undefined1 *)((long)param_1 + 0x35f) = 0;
        if (cVar1 == '\x01') {
          if ((char)param_1[0x74] == '\x16') {
            (**(code **)(param_1[0x76] + 0x30))(&uStack_c8,param_1[0x75],param_1 + 4);
          }
          else {
            FUN_100f31090(&uStack_c8,param_1 + 0x74);
          }
          if ((char)uStack_c8 != '\x16') {
            FUN_100de0370(&uStack_c8);
          }
        }
        puVar5 = puVar2 + (long)puVar5;
LAB_1011d2824:
        if (param_1[0x1a] != 0) {
          auVar6 = FUN_1007524c8(param_1,param_1 + 4,&ppuStack_e8);
          puVar4 = auVar6._8_8_;
          if (auVar6._0_8_ == 2) goto LAB_1011d2864;
          if ((auVar6._0_8_ & 1) == 0) goto code_r0x0001011d2848;
          lVar3 = 1;
          goto LAB_1011d2878;
        }
      } while (puVar5 != param_3);
      lVar3 = 0;
      puVar4 = param_3;
    }
  }
LAB_1011d2878:
  if (lVar3 == 2) {
    lVar3 = 1;
    puVar4 = (undefined *)0xd00000003;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = lVar3;
  return auVar7;
code_r0x0001011d2848:
  if (puVar4 == (undefined *)0x0) {
LAB_1011d2864:
    lVar3 = 2;
    puVar4 = puVar5;
    if (puVar5 != (undefined *)0x0) {
      lVar3 = 0;
    }
    goto LAB_1011d2878;
  }
  goto LAB_1011d2824;
}

