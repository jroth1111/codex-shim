
void FUN_101284e0c(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  char *pcStack_148;
  char *pcStack_140;
  undefined8 uStack_138;
  char *pcStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (*param_2 == '\x15') {
    uStack_138 = *(undefined8 *)(param_2 + 8);
    pcStack_148 = *(char **)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) * 0x40;
    pcVar1 = pcStack_148 + lVar8;
    uStack_120 = 0;
    uStack_110 = 0;
    pcStack_130 = pcVar1;
    if (*(long *)(param_2 + 0x18) == 0) {
      pcVar10 = pcStack_148;
      uVar13 = 0;
LAB_101284f30:
      uVar11 = uStack_110;
      param_1[2] = uStack_118;
      param_1[1] = uStack_120;
      param_1[3] = uStack_110;
      *param_1 = 0;
      uVar12 = param_1[1];
      uVar6 = param_1[2];
      pcStack_140 = pcVar10;
      uStack_128 = uVar13;
      FUN_100d34830(&pcStack_148);
      if (pcVar1 == pcVar10) {
        *param_1 = 0;
      }
      else {
        uStack_b0 = uVar13;
        uVar7 = FUN_1087e422c(((ulong)((long)pcVar1 - (long)pcVar10) >> 6) + uVar13,&uStack_b0,
                              &UNK_10b23a190);
        *param_1 = 1;
        param_1[1] = uVar7;
        if (uVar12 == 0) {
          uVar11 = 0;
        }
        else {
          uStack_a8 = 0;
          uStack_88 = 0;
          uStack_a0 = uVar12;
          uStack_98 = uVar6;
          uStack_80 = uVar12;
          uStack_78 = uVar6;
        }
        uStack_b0 = (ulong)(uVar12 != 0);
        uStack_90 = uStack_b0;
        uStack_70 = uVar11;
        FUN_100f3a554(&uStack_f0,&uStack_b0);
        while (uStack_f0 != 0) {
          lVar8 = uStack_f0 + lStack_e0 * 0x18;
          if (*(long *)(lVar8 + 8) != 0) {
            _free(*(undefined8 *)(lVar8 + 0x10));
          }
          FUN_100f3a554(&uStack_f0,&uStack_b0);
        }
      }
    }
    else {
      uVar12 = 0;
      puVar14 = (undefined8 *)((ulong)&uStack_b0 | 1);
      pcVar3 = pcStack_148;
      while( true ) {
        pcVar9 = pcVar3 + 0x40;
        cVar2 = *pcVar3;
        pcVar10 = pcVar9;
        uVar13 = uVar12;
        if (cVar2 == '\x16') goto LAB_101284f30;
        uVar6 = *(undefined8 *)(pcVar3 + 1);
        puVar14[1] = *(undefined8 *)(pcVar3 + 9);
        *puVar14 = uVar6;
        uVar6 = *(undefined8 *)(pcVar3 + 0x10);
        *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)(pcVar3 + 0x18);
        *(undefined8 *)((long)puVar14 + 0xf) = uVar6;
        uStack_e8 = *(undefined8 *)(pcVar3 + 0x28);
        uStack_f0 = *(long *)(pcVar3 + 0x20);
        uStack_d8 = *(undefined8 *)(pcVar3 + 0x38);
        lStack_e0 = *(long *)(pcVar3 + 0x30);
        uStack_b0 = CONCAT71(uStack_b0._1_7_,cVar2);
        FUN_1004b62d4(&lStack_c8,&uStack_b0);
        uVar11 = uStack_b8;
        uVar6 = uStack_c0;
        lVar5 = lStack_c8;
        pcStack_140 = pcVar9;
        if (lStack_c8 == -0x8000000000000000) break;
        if ((char)uStack_f0 != '\0') {
          uStack_128 = uVar12 + 1;
          uVar6 = FUN_108855b04(&uStack_f0,&uStack_b0,&UNK_10b20a560);
          if (lStack_c8 != 0) {
            _free(uStack_c0);
          }
          *param_1 = 1;
          param_1[1] = uVar6;
          if (uStack_120 != 0) goto LAB_101284f94;
          goto LAB_101284ff8;
        }
        bVar4 = uStack_f0._1_1_;
        FUN_100e077ec(&uStack_f0);
        lStack_108 = lVar5;
        uStack_100 = uVar6;
        uStack_f8 = uVar11;
        FUN_100f32b40(&uStack_120,&lStack_108,bVar4 & 1);
        uVar12 = uVar12 + 1;
        pcVar10 = pcVar1;
        uVar13 = (lVar8 - 0x40U >> 6) + 1;
        pcVar3 = pcVar9;
        if (pcVar9 == pcVar1) goto LAB_101284f30;
      }
      uStack_128 = uVar12 + 1;
      FUN_100e077ec(&uStack_f0);
      *param_1 = 1;
      param_1[1] = uStack_c0;
      if (uStack_120 == 0) {
LAB_101284ff8:
        uStack_70 = 0;
        uStack_b0 = uStack_120;
        uStack_90 = uStack_120;
      }
      else {
LAB_101284f94:
        uStack_a8 = 0;
        uStack_a0 = uStack_120;
        uStack_98 = uStack_118;
        uStack_88 = 0;
        uStack_80 = uStack_120;
        uStack_78 = uStack_118;
        uStack_b0 = 1;
        uStack_90 = uStack_b0;
        uStack_70 = uStack_110;
      }
      while (FUN_100f3a554(&uStack_f0,&uStack_b0), uStack_f0 != 0) {
        lVar8 = uStack_f0 + lStack_e0 * 0x18;
        if (*(long *)(lVar8 + 8) != 0) {
          _free(*(undefined8 *)(lVar8 + 0x10));
        }
      }
      FUN_100d34830(&pcStack_148);
    }
  }
  else {
    uVar6 = FUN_108855b04(param_2,&uStack_b0,&UNK_10b209c80);
    *param_1 = 1;
    param_1[1] = uVar6;
  }
  return;
}

