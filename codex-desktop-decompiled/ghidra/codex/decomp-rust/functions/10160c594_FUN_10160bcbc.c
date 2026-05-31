
undefined1  [16] FUN_10160bcbc(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined1 auVar21 [16];
  uint uStack_b4;
  ulong uStack_b0;
  undefined *puStack_a0;
  undefined1 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar18 = *(ulong *)(param_1 + 0x28);
  if (uVar18 < uVar2) {
    lVar19 = *(long *)(param_1 + 0x18);
    do {
      bVar4 = *(byte *)(lVar19 + uVar18);
      if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
        if (bVar4 != 0x6e) goto LAB_10160bda8;
        uVar1 = uVar18 + 1;
        *(ulong *)(param_1 + 0x28) = uVar1;
        bVar12 = uVar1 < uVar2;
        if (uVar2 < uVar1) {
          uVar2 = uVar18 + 1;
        }
        if (bVar12) {
          cVar3 = *(char *)(lVar19 + uVar18 + 1);
          *(ulong *)(param_1 + 0x28) = uVar18 + 2;
          if (cVar3 == 'u') {
            if (uVar18 + 2 == uVar2) goto LAB_10160c380;
            cVar3 = *(char *)(lVar19 + uVar18 + 2);
            *(ulong *)(param_1 + 0x28) = uVar18 + 3;
            if (cVar3 == 'l') {
              if (uVar18 + 3 == uVar2) goto LAB_10160c380;
              cVar3 = *(char *)(lVar19 + uVar18 + 3);
              *(ulong *)(param_1 + 0x28) = uVar18 + 4;
              if (cVar3 == 'l') {
                puVar13 = (undefined4 *)0x0;
                uVar16 = 0;
                goto LAB_10160c43c;
              }
            }
          }
          uStack_80 = (undefined8 *)0x9;
        }
        else {
LAB_10160c380:
          uStack_80 = (undefined8 *)0x5;
        }
        puVar13 = (undefined4 *)FUN_10883295c(param_1,&uStack_80);
        goto LAB_10160c434;
      }
      uVar18 = uVar18 + 1;
      *(ulong *)(param_1 + 0x28) = uVar18;
    } while (uVar2 != uVar18);
  }
  else {
LAB_10160bda8:
    if (uVar18 < uVar2) {
      do {
        bVar4 = *(byte *)(*(long *)(param_1 + 0x18) + uVar18);
        if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
          if (bVar4 != 0x5b) {
            if (bVar4 != 0x7b) {
              plVar15 = (long *)FUN_108832208(param_1,&uStack_61,&UNK_10b24edf8);
              goto LAB_10160c42c;
            }
            cVar3 = param_1[0x48];
            param_1[0x48] = cVar3 + -1;
            if ((char)(cVar3 + -1) == '\0') goto LAB_10160c52c;
            *(ulong *)(param_1 + 0x28) = uVar18 + 1;
            uStack_98 = 1;
            puStack_a0 = param_1;
            FUN_1011ddbc4(&uStack_80,&puStack_a0);
            uStack_b0 = (ulong)uStack_80 & 0xff;
            plVar15 = plStack_78;
            if (((ulong)uStack_80 & 1) != 0) goto LAB_10160be50;
            bVar8 = false;
            bVar12 = false;
            bVar6 = false;
            bVar7 = false;
            goto LAB_10160c084;
          }
          cVar3 = param_1[0x48];
          param_1[0x48] = cVar3 + -1;
          if ((char)(cVar3 + -1) == '\0') goto LAB_10160c52c;
          *(ulong *)(param_1 + 0x28) = uVar18 + 1;
          plStack_88 = (long *)CONCAT71(plStack_88._1_7_,1);
          uStack_90 = param_1;
          FUN_1011de3f0(&uStack_80,&uStack_90);
          plVar15 = plStack_78;
          if ((char)uStack_80 == '\x01') goto LAB_10160bfb4;
          if (uStack_80._1_1_ != '\x01') {
            uVar16 = 0;
            goto LAB_10160c3e0;
          }
          FUN_1013241c8(&uStack_80,uStack_90);
          plVar15 = plStack_78;
          if ((int)uStack_80 == 1) {
LAB_10160bfb4:
            bVar12 = true;
          }
          else {
            unaff_w23 = uStack_80._4_4_;
            FUN_1011de3f0(&uStack_80,&uStack_90);
            plVar15 = plStack_78;
            if ((char)uStack_80 == '\x01') goto LAB_10160bfb4;
            if (uStack_80._1_1_ == '\x01') {
              FUN_1013241c8(&uStack_80,uStack_90);
              plVar15 = plStack_78;
              if ((int)uStack_80 != 1) {
                uVar10 = uStack_80._4_4_;
                FUN_1011de3f0(&uStack_80,&uStack_90);
                plVar15 = plStack_78;
                if ((char)uStack_80 != '\x01') {
                  if (uStack_80._1_1_ == '\x01') {
                    FUN_1013241c8(&uStack_80,uStack_90);
                    plVar15 = plStack_78;
                    if ((int)uStack_80 != 1) {
                      uVar11 = uStack_80._4_4_;
                      FUN_1011de3f0(&uStack_80,&uStack_90);
                      plVar15 = plStack_78;
                      if ((char)uStack_80 != '\x01') {
                        if (uStack_80._1_1_ != '\x01') {
                          uVar16 = 3;
                          goto LAB_10160c3e0;
                        }
                        FUN_1013241c8(&uStack_80,uStack_90);
                        plVar15 = plStack_78;
                        if ((int)uStack_80 != 1) {
                          bVar12 = false;
                          plVar15 = (long *)CONCAT44(uVar11,uVar10);
                          unaff_w24 = uStack_80._4_4_;
                          goto LAB_10160bfb8;
                        }
                      }
                    }
                  }
                  else {
                    uVar16 = 2;
LAB_10160c3e0:
                    plVar15 = (long *)FUN_1087e422c(uVar16,&UNK_10b2332d8,&UNK_10b20a590);
                  }
                }
              }
              goto LAB_10160bfb4;
            }
            bVar12 = true;
            plVar15 = (long *)FUN_1087e422c(1,&UNK_10b2332d8,&UNK_10b20a590);
          }
LAB_10160bfb8:
          param_1[0x48] = param_1[0x48] + '\x01';
          plVar14 = (long *)FUN_10065474c(param_1);
          plVar20 = plVar15;
          if (!bVar12) goto LAB_10160bfd0;
          if (plVar14 == (long *)0x0) goto LAB_10160c42c;
          lVar19 = *plVar14;
          if (lVar19 != 1) goto LAB_10160c3b0;
          FUN_100de21d4(plVar14 + 1);
          goto LAB_10160c420;
        }
        uVar18 = uVar18 + 1;
        *(ulong *)(param_1 + 0x28) = uVar18;
      } while (uVar2 != uVar18);
    }
  }
  uStack_80 = (undefined8 *)0x5;
LAB_10160bdec:
  puVar13 = (undefined4 *)FUN_108831e8c(param_1,&uStack_80);
  goto LAB_10160c434;
LAB_10160c084:
  puVar9 = puStack_a0;
  if (uStack_80._1_1_ == '\x01') {
    *(long *)(puStack_a0 + 0x28) = *(long *)(puStack_a0 + 0x28) + 1;
    *(undefined8 *)(puStack_a0 + 0x10) = 0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (&uStack_80,puStack_a0 + 0x18,puStack_a0);
    plVar15 = plStack_78;
    if (uStack_80 == (undefined8 *)0x2) goto LAB_10160be50;
    if (lStack_70 < 0x13) {
      if (lStack_70 == 8) {
        if (*plStack_78 == 0x74615f7465736572) {
          if (bVar7) {
            uStack_90 = &UNK_108c98560;
            plStack_88 = (long *)0x8;
            goto LAB_10160c5d8;
          }
          uVar18 = *(ulong *)(puVar9 + 0x28);
          if (*(ulong *)(puVar9 + 0x20) <= uVar18) {
LAB_10160c3f8:
            uStack_80 = (undefined8 *)0x3;
            goto LAB_10160c3fc;
          }
          while( true ) {
            bVar4 = *(byte *)(*(long *)(puVar9 + 0x18) + uVar18);
            if (0x3a < bVar4) goto LAB_10160c53c;
            if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
            uVar18 = uVar18 + 1;
            *(ulong *)(puVar9 + 0x28) = uVar18;
            if (*(ulong *)(puVar9 + 0x20) == uVar18) goto LAB_10160c3f8;
          }
          if ((ulong)bVar4 != 0x3a) goto LAB_10160c53c;
          *(ulong *)(puVar9 + 0x28) = uVar18 + 1;
          FUN_1013241c8(&uStack_90,puVar9);
          bVar7 = true;
          if (((ulong)uStack_90 & 1) == 0) {
            unaff_w24 = uStack_90._4_4_;
            goto LAB_10160c070;
          }
LAB_10160c3ec:
          bVar5 = true;
          plVar15 = plStack_88;
          goto LAB_10160be54;
        }
      }
      else if ((lStack_70 == 0xc) &&
              (*plStack_78 == 0x7265705f64657375 && (int)plStack_78[1] == 0x746e6563)) {
        if (bVar8) {
          uStack_90 = &UNK_108cb0265;
          plStack_88 = (long *)0xc;
LAB_10160c5d8:
          pcVar17 = s_duplicate_field_____108ac2973;
          goto LAB_10160c4e8;
        }
        uVar18 = *(ulong *)(puVar9 + 0x28);
        if (*(ulong *)(puVar9 + 0x20) <= uVar18) goto LAB_10160c3f8;
        while( true ) {
          bVar4 = *(byte *)(*(long *)(puVar9 + 0x18) + uVar18);
          if (0x3a < bVar4) goto LAB_10160c53c;
          if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
          uVar18 = uVar18 + 1;
          *(ulong *)(puVar9 + 0x28) = uVar18;
          if (*(ulong *)(puVar9 + 0x20) == uVar18) goto LAB_10160c3f8;
        }
        if ((ulong)bVar4 == 0x3a) {
          *(ulong *)(puVar9 + 0x28) = uVar18 + 1;
          FUN_1013241c8(&uStack_90,puVar9);
          plVar15 = plStack_88;
          if (((ulong)uStack_90 & 1) == 0) {
            bVar8 = true;
            unaff_w23 = uStack_90._4_4_;
            goto LAB_10160c070;
          }
        }
        else {
LAB_10160c53c:
          uStack_80 = (undefined8 *)0x6;
LAB_10160c3fc:
          plVar15 = (long *)FUN_108831e8c(puVar9,&uStack_80);
        }
        goto LAB_10160be50;
      }
LAB_10160c064:
      plVar15 = (long *)FUN_10062a8ec(puVar9);
      if (plVar15 != (long *)0x0) goto LAB_10160be50;
    }
    else if (lStack_70 == 0x13) {
      if ((*plStack_78 != 0x66615f7465736572 || plStack_78[1] != 0x6f6365735f726574) ||
          *(long *)((long)plStack_78 + 0xb) != 0x73646e6f6365735f) goto LAB_10160c064;
      if (bVar6) {
        uStack_90 = &UNK_108cc36bf;
        plStack_88 = (long *)0x13;
        goto LAB_10160c5d8;
      }
      uVar18 = *(ulong *)(puVar9 + 0x28);
      if (*(ulong *)(puVar9 + 0x20) <= uVar18) goto LAB_10160c3f8;
      while( true ) {
        bVar4 = *(byte *)(*(long *)(puVar9 + 0x18) + uVar18);
        if (0x3a < bVar4) goto LAB_10160c53c;
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
        uVar18 = uVar18 + 1;
        *(ulong *)(puVar9 + 0x28) = uVar18;
        if (*(ulong *)(puVar9 + 0x20) == uVar18) goto LAB_10160c3f8;
      }
      if ((ulong)bVar4 != 0x3a) goto LAB_10160c53c;
      *(ulong *)(puVar9 + 0x28) = uVar18 + 1;
      FUN_1013241c8(&uStack_90,puVar9);
      bVar6 = true;
      if (((ulong)uStack_90 & 1) != 0) goto LAB_10160c3ec;
      uStack_b0 = (ulong)uStack_90 >> 0x20;
    }
    else {
      if ((lStack_70 != 0x14) ||
         ((*plStack_78 != 0x69775f74696d696c || plStack_78[1] != 0x6365735f776f646e) ||
          (int)plStack_78[2] != 0x73646e6f)) goto LAB_10160c064;
      if (bVar12) {
        uStack_90 = &UNK_108cc36ab;
        plStack_88 = (long *)0x14;
        uStack_80 = &uStack_90;
        plStack_78 = (long *)&DAT_100c7b3a0;
        plVar15 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_80);
        bVar5 = true;
        goto LAB_10160be54;
      }
      uVar18 = *(ulong *)(puVar9 + 0x28);
      if (*(ulong *)(puVar9 + 0x20) <= uVar18) goto LAB_10160c3f8;
      while( true ) {
        bVar4 = *(byte *)(*(long *)(puVar9 + 0x18) + uVar18);
        if (0x3a < bVar4) goto LAB_10160c53c;
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
        uVar18 = uVar18 + 1;
        *(ulong *)(puVar9 + 0x28) = uVar18;
        if (*(ulong *)(puVar9 + 0x20) == uVar18) goto LAB_10160c3f8;
      }
      if ((ulong)bVar4 != 0x3a) goto LAB_10160c53c;
      *(ulong *)(puVar9 + 0x28) = uVar18 + 1;
      FUN_1013241c8(&uStack_90,puVar9);
      bVar12 = true;
      bVar5 = true;
      plVar15 = plStack_88;
      if (((ulong)uStack_90 & 1) != 0) goto LAB_10160be54;
      uStack_b4 = uStack_90._4_4_;
    }
LAB_10160c070:
    FUN_1011ddbc4(&uStack_80,&puStack_a0);
    plVar15 = plStack_78;
    if (((ulong)uStack_80 & 1) != 0) goto LAB_10160be50;
    goto LAB_10160c084;
  }
  if (bVar8) {
    if (bVar12) {
      if (bVar6) {
        if (bVar7) {
          bVar5 = false;
          plVar15 = (long *)((ulong)uStack_b4 | uStack_b0 << 0x20);
          goto LAB_10160be54;
        }
        uStack_90 = &UNK_108c98560;
        plStack_88 = (long *)0x8;
      }
      else {
        uStack_90 = &UNK_108cc36bf;
        plStack_88 = (long *)0x13;
      }
    }
    else {
      uStack_90 = &UNK_108cc36ab;
      plStack_88 = (long *)0x14;
    }
  }
  else {
    uStack_90 = &UNK_108cb0265;
    plStack_88 = (long *)0xc;
  }
  pcVar17 = s_missing_field_____108ac28f7;
LAB_10160c4e8:
  uStack_80 = &uStack_90;
  plStack_78 = (long *)&DAT_100c7b3a0;
  plVar15 = (long *)FUN_108856088(pcVar17,&uStack_80);
LAB_10160be50:
  bVar5 = true;
LAB_10160be54:
  param_1[0x48] = param_1[0x48] + '\x01';
  plVar14 = (long *)FUN_100654604(param_1);
  plVar20 = plVar15;
  if (bVar5) {
    if (plVar14 != (long *)0x0) {
      lVar19 = *plVar14;
      if (lVar19 == 1) {
        FUN_100de21d4(plVar14 + 1);
      }
      else {
LAB_10160c3b0:
        if ((lVar19 == 0) && (plVar14[2] != 0)) {
          _free(plVar14[1]);
        }
      }
LAB_10160c420:
      _free(plVar14);
    }
  }
  else {
LAB_10160bfd0:
    plVar15 = plVar14;
    if (plVar14 == (long *)0x0) {
      puVar13 = (undefined4 *)_malloc(0x10);
      if (puVar13 != (undefined4 *)0x0) {
        uVar16 = 0;
        *puVar13 = unaff_w23;
        *(long **)(puVar13 + 1) = plVar20;
        puVar13[3] = unaff_w24;
        goto LAB_10160c43c;
      }
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(4,0x10);
LAB_10160c52c:
      uStack_80 = (undefined8 *)0x18;
      goto LAB_10160bdec;
    }
  }
LAB_10160c42c:
  puVar13 = (undefined4 *)FUN_108832da4(plVar15,param_1);
LAB_10160c434:
  uVar16 = 1;
LAB_10160c43c:
  auVar21._8_8_ = puVar13;
  auVar21._0_8_ = uVar16;
  return auVar21;
}

