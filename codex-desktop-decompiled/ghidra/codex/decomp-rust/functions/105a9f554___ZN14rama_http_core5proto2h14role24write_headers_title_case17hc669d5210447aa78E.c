
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN14rama_http_core5proto2h14role24write_headers_title_case17hc669d5210447aa78E
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  uint *unaff_x19;
  ulong uVar13;
  ulong unaff_x23;
  byte *pbVar14;
  ulong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  char *pcStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  uint *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar13 = 0;
  lStack_80 = *(long *)(param_1 + 0x20);
  uStack_78 = *(ulong *)(param_1 + 0x28);
  uVar15 = 2;
  if (uStack_78 != 0) {
    uVar15 = 0;
  }
  lStack_90 = *(long *)(param_1 + 0x38);
  uStack_88 = *(ulong *)(param_1 + 0x40);
  if (uVar15 != 2) goto LAB_105a9f2dc;
LAB_105a9f2bc:
  uVar13 = uVar13 + 1;
  if (uStack_78 <= uVar13) {
    return;
  }
  puVar10 = (uint *)(lStack_80 + uVar13 * 0x68);
LAB_105a9f324:
  if ((*puVar10 & 1) == 0) {
    uVar15 = 2;
    lVar12 = *(long *)(puVar10 + 0x10);
  }
  else {
    unaff_x23 = *(ulong *)(puVar10 + 2);
    uVar15 = 1;
    lVar12 = *(long *)(puVar10 + 0x10);
  }
  unaff_x19 = puVar10 + 6;
  if (lVar12 != 0) goto LAB_105a9f354;
LAB_105a9f460:
  auVar17 = FUN_105ab2c38((char)puVar10[0x12]);
  lVar12 = param_2[2];
  uVar11 = *param_2 - lVar12;
  auVar6 = auVar17;
  if (auVar17._8_8_ <= uVar11) goto LAB_105a9f36c;
LAB_105a9f484:
  auVar17 = auVar6;
  uStack_70 = uVar15;
  uStack_68 = unaff_x23;
  FUN_108a3285c(param_2,lVar12,auVar17._8_8_,1,1);
  lVar12 = param_2[2];
  uVar15 = uStack_70;
  uVar5 = uStack_68;
  do {
    uStack_68 = uVar5;
    uStack_70 = uVar15;
    bVar9 = 0x2d;
    do {
      pbVar14 = auVar17._0_8_;
      bVar3 = *pbVar14;
      bVar16 = 0x20;
      if (0x19 < (byte)(bVar3 + 0x9f) || bVar9 != 0x2d) {
        bVar16 = 0;
      }
      if (lVar12 == *param_2) {
        func_0x0001087c90b8(param_2);
      }
      bVar9 = bVar16 ^ bVar3;
      *(byte *)(param_2[1] + lVar12) = bVar9;
      lVar12 = lVar12 + 1;
      param_2[2] = lVar12;
      lVar4 = auVar17._8_8_ + -1;
      auVar17._8_8_ = lVar4;
      auVar17._0_8_ = pbVar14 + 1;
    } while (lVar4 != 0);
    uVar11 = *param_2 - lVar12;
    unaff_x23 = uStack_68;
    uVar15 = uStack_70;
    do {
      if (uVar11 < 2) {
        FUN_108a3285c(param_2,lVar12,2,1,1);
        lVar12 = param_2[2];
      }
      *(undefined2 *)(param_2[1] + lVar12) = 0x203a;
      lVar12 = lVar12 + 2;
      param_2[2] = lVar12;
      puVar10 = *(uint **)(unaff_x19 + 2);
      uVar11 = *(ulong *)(unaff_x19 + 4);
      if ((ulong)(*param_2 - lVar12) < uVar11) {
        FUN_108a3285c(param_2,lVar12,uVar11,1,1);
        lVar12 = param_2[2];
        unaff_x19 = puVar10;
      }
      _memcpy(param_2[1] + lVar12,puVar10,uVar11);
      lVar12 = lVar12 + uVar11;
      param_2[2] = lVar12;
      if ((ulong)(*param_2 - lVar12) < 2) {
        FUN_108a3285c(param_2,lVar12,2,1,1);
        lVar12 = param_2[2];
      }
      *(undefined2 *)(param_2[1] + lVar12) = 0xa0d;
      param_2[2] = lVar12 + 2;
      if (uVar15 == 2) goto LAB_105a9f2bc;
LAB_105a9f2dc:
      if (uStack_78 <= uVar13) {
        func_0x000108a07bdc(uVar13,uStack_78,&UNK_10b407b68);
LAB_105a9f540:
        uVar8 = func_0x000108a07bdc(unaff_x23,uStack_88,&UNK_10b407b80);
        uStack_c0 = 0x2d;
        uStack_98 = 0x105a9f554;
        plStack_b8 = param_2;
        uStack_b0 = uVar13;
        puStack_a8 = unaff_x19;
        puStack_a0 = &stack0xfffffffffffffff0;
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lRam000000010b638810,uVar8);
        lVar12 = lRam000000010b638810;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (4 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uStack_150 = *(undefined8 *)(lRam000000010b638810 + 0x20);
          uStack_148 = *(undefined8 *)(lRam000000010b638810 + 0x28);
          uStack_158 = 5;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_158);
          if (iVar7 != 0) {
            lStack_120 = *(long *)(lVar12 + 0x60);
            uStack_118 = *(undefined8 *)(lVar12 + 0x68);
            lStack_138 = *(long *)(lVar12 + 0x50);
            uStack_130 = *(undefined8 *)(lVar12 + 0x58);
            uStack_140 = 1;
            if (lStack_138 == 0) {
              uStack_140 = 2;
            }
            uStack_f8 = *(undefined4 *)(lVar12 + 8);
            uStack_f4 = *(undefined4 *)(lVar12 + 0xc);
            uStack_d8 = 1;
            puStack_d0 = &uStack_e0;
            puStack_c8 = &DAT_1061c2098;
            uStack_128 = 1;
            if (lStack_120 == 0) {
              uStack_128 = 2;
            }
            uStack_108 = uStack_150;
            uStack_110 = uStack_158;
            uStack_100 = uStack_148;
            ppuStack_e8 = &puStack_d0;
            pcStack_f0 = s__108b39f4f;
            uStack_e0 = uVar8;
            (**(code **)(puVar1 + 0x20))(puVar2,&uStack_140);
          }
        }
        return;
      }
      puVar10 = (uint *)(lStack_80 + uVar13 * 0x68);
      if ((uVar15 & 1) == 0) goto LAB_105a9f324;
      if (uStack_88 <= unaff_x23) goto LAB_105a9f540;
      lVar12 = lStack_90 + unaff_x23 * 0x48;
      if ((*(uint *)(lVar12 + 0x10) & 1) == 0) {
        uVar15 = 2;
      }
      else {
        unaff_x23 = *(ulong *)(lVar12 + 0x18);
        uVar15 = 1;
      }
      unaff_x19 = (uint *)(lVar12 + 0x20);
      if (*(long *)(puVar10 + 0x10) == 0) goto LAB_105a9f460;
LAB_105a9f354:
      auVar17 = *(undefined1 (*) [16])(puVar10 + 0x12);
      lVar12 = param_2[2];
      uVar11 = *param_2 - lVar12;
      auVar6 = *(undefined1 (*) [16])(puVar10 + 0x12);
      if (uVar11 < *(ulong *)(puVar10 + 0x14)) goto LAB_105a9f484;
LAB_105a9f36c:
      uVar5 = unaff_x23;
    } while (auVar17._8_8_ == 0);
  } while( true );
}

