
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011d2124(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    puStack_88 = &UNK_108cb5c9d;
    uStack_80 = 0x19;
    puStack_70 = &UNK_108cd3d13;
    uStack_68 = 0xd7;
    uStack_c0 = 0;
    puStack_b8 = &UNK_108cb5c9d;
    uStack_a8 = 0;
    uStack_b0 = 0x19;
    pcStack_a0 = 
    "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs";
    uStack_90 = 5;
    uStack_98 = 0x5b;
    uStack_78 = 0xb700000001;
    puVar1 = puRam000000010b634c18;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
      puVar2 = &UNK_10b3c24c8;
    }
    (**(code **)(puVar2 + 0x20))(puVar1,&uStack_c0);
  }
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    puStack_88 = &UNK_108cb5c9d;
    uStack_80 = 0x19;
    puStack_70 = &UNK_108cb5c28;
    uStack_68 = 0xeb;
    uStack_c0 = 0;
    puStack_b8 = &UNK_108cb5c9d;
    uStack_a8 = 0;
    uStack_b0 = 0x19;
    pcStack_a0 = 
    "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs";
    uStack_90 = 5;
    uStack_98 = 0x5b;
    uStack_78 = 0x8300000001;
    puVar1 = puRam000000010b634c18;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
      puVar2 = &UNK_10b3c24c8;
    }
    (**(code **)(puVar2 + 0x20))(puVar1,&uStack_c0);
  }
  lStack_e8 = param_1[0x89] + 0x10;
  puStack_f0 = &UNK_10b220fe8;
  uStack_d0 = 0;
  puStack_e0 = (undefined1 *)&puStack_f0;
  puStack_d8 = (undefined1 *)&puStack_f0;
  if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
    puStack_88 = &UNK_108cb5c9d;
    uStack_80 = 0x19;
    puStack_70 = &UNK_108cd3d7e;
    uStack_68 = 0x10d;
    uStack_c0 = 0;
    puStack_b8 = &UNK_108cb5c9d;
    uStack_a8 = 0;
    uStack_b0 = 0x19;
    pcStack_a0 = 
    "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs";
    uStack_90 = 5;
    uStack_98 = 0x5b;
    uStack_78 = 0xb900000001;
    puVar1 = puRam000000010b634c18;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
      puVar2 = &UNK_10b3c24c8;
    }
    puStack_e0 = (undefined1 *)&puStack_f0;
    puStack_d8 = (undefined1 *)&puStack_f0;
    (**(code **)(puVar2 + 0x20))(puVar1,&uStack_c0);
  }
  if (*param_1 == 2) {
LAB_1011d2320:
    lVar3 = 0;
  }
  else {
    do {
      if (param_1[0x1a] == 0) goto LAB_1011d2320;
      auVar4 = FUN_1007524c8(param_1,param_1 + 4,&puStack_e0);
      if (auVar4._0_8_ == 2) {
        return 0xd00000003;
      }
      if ((auVar4._0_8_ & 1) != 0) {
        return auVar4._8_8_;
      }
    } while (auVar4._8_8_ != 0);
    lVar3 = 0x1700000003;
  }
  return lVar3;
}

