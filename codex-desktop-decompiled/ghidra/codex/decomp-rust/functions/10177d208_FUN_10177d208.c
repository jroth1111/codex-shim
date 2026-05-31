
void FUN_10177d208(ulong param_1,undefined8 param_2,ulong *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  long *unaff_x21;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  
  if (4 < param_1) {
    puVar1 = puRam000000010b634c18;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
      puVar2 = &UNK_10b3c24c8;
    }
    (**(code **)(puVar2 + 0x20))(puVar1,&stack0x00000030);
    param_3 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
  }
  if (4 < *param_3) {
    puVar1 = puRam000000010b634c18;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
      puVar2 = &UNK_10b3c24c8;
    }
    (**(code **)(puVar2 + 0x20))(puVar1,&stack0x00000030);
    param_3 = (ulong *)&__ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E;
  }
  if (4 < *param_3) {
    puVar1 = puRam000000010b634c18;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_109adfc03;
      puVar2 = &UNK_10b3c24c8;
    }
    (**(code **)(puVar2 + 0x20))(puVar1,&stack0x00000030);
  }
  if (*unaff_x21 != 2) {
    while (unaff_x21[0x1a] != 0) {
      auVar9 = __ZN6rustls6vecbuf14ChunkVecBuffer8write_to17h57071789928213f2E
                         (unaff_x21 + 0x15,&stack0x00000030,&UNK_10b2595f0);
      uVar4 = auVar9._8_8_;
      if ((auVar9._0_8_ & 1) != 0) {
        cVar3 = FUN_101798024(uVar4);
        uVar7 = uVar4;
        if ((cVar3 == '\r') && (uVar7 = 0xd00000003, (uVar4 & 3) == 1)) {
          uVar6 = *(undefined8 *)(uVar4 - 1);
          puVar8 = *(undefined8 **)(uVar4 + 7);
          pcVar5 = (code *)*puVar8;
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(uVar6);
          }
          if (puVar8[1] != 0) {
            _free(uVar6);
          }
          _free((undefined8 *)(uVar4 - 1));
        }
        goto LAB_10177d4ac;
      }
      if (uVar4 == 0) {
        uVar7 = 0x1700000003;
LAB_10177d4ac:
        *unaff_x19 = 0xb;
        unaff_x19[1] = uVar7;
        return;
      }
    }
  }
  *(undefined1 *)(unaff_x20 + 0x149) = 0;
  *unaff_x19 = 0x15;
  return;
}

