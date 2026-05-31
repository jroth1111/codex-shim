
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a4e650(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  if (*param_2 == 6) {
    plVar4 = param_2 + 1;
    if ((*plVar4 == 0xb) && (cVar3 = FUN_100c355d4(param_2[2]), cVar3 == '\r')) {
      if (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E) {
        puStack_48 = &UNK_108cb5c9d;
        uStack_40 = 0x19;
        puStack_30 = &UNK_108cb5cb6;
        uStack_28 = 0x15;
        uStack_80 = 0;
        puStack_78 = &UNK_108cb5c9d;
        uStack_68 = 0;
        uStack_70 = 0x19;
        pcStack_60 = 
        "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs"
        ;
        uStack_50 = 5;
        uStack_58 = 0x5b;
        uStack_38 = 0xc600000001;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        (**(code **)(puVar1 + 0x20))(puVar2,&uStack_80);
      }
      *param_1 = 7;
      FUN_100de8b24(plVar4);
    }
    else {
      lVar5 = *plVar4;
      lVar7 = param_2[4];
      lVar6 = param_2[3];
      param_1[2] = param_2[2];
      param_1[1] = lVar5;
      param_1[4] = lVar7;
      param_1[3] = lVar6;
      *param_1 = 6;
    }
  }
  else {
    lVar5 = *param_2;
    lVar7 = param_2[3];
    lVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar5;
    param_1[3] = lVar7;
    param_1[2] = lVar6;
    lVar5 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar5;
    param_1[6] = param_2[6];
  }
  return;
}

