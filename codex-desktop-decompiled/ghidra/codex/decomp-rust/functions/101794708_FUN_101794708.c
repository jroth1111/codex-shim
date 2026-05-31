
void FUN_101794708(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  char *pcStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000048;
  
  pcStack0000000000000020 =
       "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs"
  ;
  uStack0000000000000030 = 5;
  uStack0000000000000028 = 0x5b;
  uStack0000000000000048 = 0xc600000001;
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  (**(code **)(puVar1 + 0x20))(puVar2);
  *unaff_x20 = 0x16;
  FUN_1017a49cc();
  return;
}

