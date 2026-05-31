
undefined1  [16] FUN_101607b8c(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  undefined2 uVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *unaff_x20;
  byte bVar14;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 *puVar15;
  char unaff_w24;
  ulong unaff_x25;
  ulong unaff_x26;
  undefined1 auVar16 [16];
  ulong uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_b0;
  long *plStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  byte bStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined1 uStack_61;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar12 = *(ulong *)(param_1 + 0x28);
  if (uVar12 < uVar2) {
    lVar13 = *(long *)(param_1 + 0x18);
    do {
      bVar14 = *(byte *)(lVar13 + uVar12);
      if (0x20 < bVar14 || (1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) {
        if (bVar14 != 0x6e) goto LAB_101607c78;
        uVar1 = uVar12 + 1;
        *(ulong *)(param_1 + 0x28) = uVar1;
        bVar8 = uVar1 < uVar2;
        if (uVar2 < uVar1) {
          uVar2 = uVar12 + 1;
        }
        if (bVar8) {
          cVar3 = *(char *)(lVar13 + uVar12 + 1);
          *(ulong *)(param_1 + 0x28) = uVar12 + 2;
          if (cVar3 == 'u') {
            if (uVar12 + 2 == uVar2) goto LAB_1016082c4;
            cVar3 = *(char *)(lVar13 + uVar12 + 2);
            *(ulong *)(param_1 + 0x28) = uVar12 + 3;
            if (cVar3 == 'l') {
              if (uVar12 + 3 == uVar2) goto LAB_1016082c4;
              cVar3 = *(char *)(lVar13 + uVar12 + 3);
              *(ulong *)(param_1 + 0x28) = uVar12 + 4;
              if (cVar3 == 'l') {
                puVar9 = (undefined8 *)0x0;
                uVar11 = 0;
                goto LAB_10160838c;
              }
            }
          }
          uStack_b0 = (undefined8 *)0x9;
        }
        else {
LAB_1016082c4:
          uStack_b0 = (undefined8 *)0x5;
        }
        puVar9 = (undefined8 *)FUN_10883295c(param_1,&uStack_b0);
        goto LAB_101608384;
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(param_1 + 0x28) = uVar12;
    } while (uVar2 != uVar12);
  }
  else {
LAB_101607c78:
    if (uVar12 < uVar2) {
      do {
        bVar14 = *(byte *)(*(long *)(param_1 + 0x18) + uVar12);
        if (0x20 < bVar14 || (1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) == 0) {
          if (bVar14 == 0x5b) {
            cVar3 = param_1[0x48];
            param_1[0x48] = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              *(ulong *)(param_1 + 0x28) = uVar12 + 1;
              plStack_70 = (long *)CONCAT71(plStack_70._1_7_,1);
              uStack_78 = param_1;
              FUN_1011de3f0(&uStack_b0,&uStack_78);
              uVar5 = (undefined2)uStack_b0;
              if ((char)uStack_b0 == '\x01') goto LAB_101608138;
              if (uStack_b0._1_1_ == '\x01') {
                uStack_b0._0_2_ = uVar5;
                FUN_100617894(&uStack_b0,uStack_78);
                if ((char)uStack_b0 == '\x01') {
LAB_101608138:
                  bVar14 = (byte)unaff_x21;
                  unaff_x22 = plStack_a8;
                  goto LAB_10160813c;
                }
                bVar14 = uStack_b0._1_1_;
                unaff_x21 = (long *)(ulong)uStack_b0._1_1_;
                FUN_1011de3f0(&uStack_b0,&uStack_78);
                if ((char)uStack_b0 == '\x01') goto LAB_101608138;
                if (uStack_b0._1_1_ != '\x01') {
                  uVar11 = 1;
                  goto LAB_1016083c0;
                }
                FUN_100617894(&uStack_b0,uStack_78);
                if ((char)uStack_b0 == '\x01') goto LAB_101608138;
                unaff_w24 = uStack_b0._1_1_;
                FUN_1011de3f0(&uStack_b0,&uStack_78);
                if ((char)uStack_b0 == '\x01') goto LAB_101608138;
                bVar4 = uStack_b0._1_1_;
                unaff_x25 = (ulong)uStack_b0._1_1_;
                if (uStack_b0._1_1_ == 1) {
                  auVar16 = FUN_10160bcbc(uStack_78);
                  unaff_x22 = auVar16._8_8_;
                  if (auVar16._0_8_ == 1) goto LAB_10160813c;
                  puVar15 = (undefined8 *)0x1;
                }
                else {
                  puVar15 = (undefined8 *)0x0;
                }
                FUN_1011de3f0(&uStack_b0,&uStack_78);
                plVar10 = plStack_a8;
                bStack_90 = bVar14;
                cStack_8f = unaff_w24;
                if ((char)uStack_b0 == '\x01') {
LAB_101608414:
                  if ((bVar4 != 0) && (unaff_x22 != (long *)0x0)) {
                    _free(unaff_x22);
                  }
                  puVar15 = (undefined8 *)0x2;
                  unaff_x20 = plVar10;
                  unaff_x22 = plVar10;
                }
                else if (uStack_b0._1_1_ == '\x01') {
                  auVar16 = FUN_10160bcbc(uStack_78);
                  unaff_x20 = auVar16._8_8_;
                  plVar10 = unaff_x20;
                  if (auVar16._0_8_ == 1) goto LAB_101608414;
                  unaff_x26 = 0;
                  unaff_x25 = 1;
                }
                else {
                  unaff_x25 = 0;
                  unaff_x26 = 1;
                }
              }
              else {
                uVar11 = 0;
LAB_1016083c0:
                bVar14 = (byte)unaff_x21;
                unaff_x22 = (long *)FUN_1087e422c(uVar11,&UNK_10b2332a8,&UNK_10b20a590);
LAB_10160813c:
                puVar15 = (undefined8 *)0x2;
                cStack_8f = unaff_w24;
                bStack_90 = bVar14;
              }
              param_1[0x48] = param_1[0x48] + '\x01';
              uStack_b0 = puVar15;
              plStack_a8 = unaff_x22;
              uStack_a0 = unaff_x25;
              plStack_98 = unaff_x20;
              plVar10 = (long *)FUN_10065474c(param_1);
              if (puVar15 == (undefined8 *)0x2) {
                if (plVar10 == (long *)0x0) goto LAB_101608378;
                lVar13 = *plVar10;
                if (lVar13 != 1) goto LAB_101608328;
                FUN_100de21d4(plVar10 + 1);
                unaff_x20 = plVar10;
                goto LAB_101608368;
              }
              if (plVar10 == (long *)0x0) goto LAB_101608288;
              if ((puVar15 != (undefined8 *)0x0) && (unaff_x22 != (long *)0x0)) {
                _free(unaff_x22);
              }
              unaff_x22 = plVar10;
              if ((unaff_x26 & 1) == 0 && unaff_x20 != (long *)0x0) goto LAB_101608368;
              goto LAB_101608378;
            }
          }
          else {
            if (bVar14 != 0x7b) {
              unaff_x22 = (long *)FUN_108832208(param_1,&uStack_61,&UNK_10b24ed78);
              goto LAB_101608378;
            }
            cVar3 = param_1[0x48];
            param_1[0x48] = cVar3 + -1;
            if ((char)(cVar3 + -1) != '\0') {
              unaff_x25 = 0x6f6c6c61;
              *(ulong *)(param_1 + 0x28) = uVar12 + 1;
              uStack_80 = 1;
              bVar8 = true;
              uStack_f0 = 2;
              puStack_e8 = (undefined8 *)0x2;
              cVar3 = '\x02';
              bVar14 = 2;
              puStack_88 = param_1;
              goto LAB_101607d4c;
            }
          }
          uStack_b0 = (undefined8 *)0x18;
          goto LAB_101607cbc;
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(param_1 + 0x28) = uVar12;
      } while (uVar2 != uVar12);
    }
  }
  uStack_b0 = (undefined8 *)0x5;
LAB_101607cbc:
  puVar9 = (undefined8 *)FUN_108831e8c(param_1,&uStack_b0);
  goto LAB_101608384;
LAB_101607d4c:
  plVar10 = unaff_x21;
  FUN_1011ddbc4(&uStack_b0,&puStack_88);
  puVar6 = puStack_88;
  unaff_x22 = plStack_a8;
  if ((char)uStack_b0 != '\x01') {
    if (uStack_b0._1_1_ == '\x01') {
      *(long *)(puStack_88 + 0x28) = *(long *)(puStack_88 + 0x28) + 1;
      *(undefined8 *)(puStack_88 + 0x10) = 0;
      __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                (&uStack_b0,puStack_88 + 0x18,puStack_88);
      unaff_x22 = plStack_a8;
      if (uStack_b0 == (undefined8 *)0x2) goto LAB_101608224;
      unaff_x21 = plVar10;
      if ((long)uStack_a0 < 0xe) {
        if (uStack_a0 == 7) {
          if ((int)*plStack_a8 != 0x6f6c6c61 || *(int *)((long)plStack_a8 + 3) != 0x6465776f)
          goto LAB_101607efc;
          if (bVar14 == 2) {
            uVar12 = *(ulong *)(puVar6 + 0x28);
            if (uVar12 < *(ulong *)(puVar6 + 0x20)) {
              while( true ) {
                bVar4 = *(byte *)(*(long *)(puVar6 + 0x18) + uVar12);
                if (0x3a < bVar4) goto LAB_10160867c;
                if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
                uVar12 = uVar12 + 1;
                *(ulong *)(puVar6 + 0x28) = uVar12;
                if (*(ulong *)(puVar6 + 0x20) == uVar12) goto LAB_101608488;
              }
              if ((ulong)bVar4 == 0x3a) {
                *(ulong *)(puVar6 + 0x28) = uVar12 + 1;
                FUN_100617894(&uStack_78,puVar6);
                unaff_x22 = plStack_70;
                if ((char)uStack_78 != '\x01') {
                  bVar14 = uStack_78._1_1_;
                  goto LAB_101607d4c;
                }
              }
              else {
LAB_10160867c:
                uStack_b0 = (undefined8 *)0x6;
                unaff_x22 = (long *)FUN_108831e8c(puVar6,&uStack_b0);
              }
            }
            else {
LAB_101608488:
              uStack_b0 = (undefined8 *)0x3;
              unaff_x22 = (long *)FUN_108831e8c(puVar6,&uStack_b0);
            }
          }
          else {
            uStack_78 = &UNK_108ca6c3f;
            plStack_70 = (long *)0x7;
            uStack_b0 = &uStack_78;
            plStack_a8 = (long *)&DAT_100c7b3a0;
            unaff_x22 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          }
        }
        else {
          if ((uStack_a0 != 0xd) ||
             (*plStack_a8 != 0x65725f74696d696c ||
              *(long *)((long)plStack_a8 + 5) != 0x646568636165725f)) goto LAB_101607efc;
          if (cVar3 == '\x02') {
            uVar12 = *(ulong *)(puVar6 + 0x28);
            if (uVar12 < *(ulong *)(puVar6 + 0x20)) {
              while( true ) {
                bVar4 = *(byte *)(*(long *)(puVar6 + 0x18) + uVar12);
                if (0x3a < bVar4) goto LAB_101608644;
                if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
                uVar12 = uVar12 + 1;
                *(ulong *)(puVar6 + 0x28) = uVar12;
                if (*(ulong *)(puVar6 + 0x20) == uVar12) goto LAB_1016084f0;
              }
              if ((ulong)bVar4 != 0x3a) {
LAB_101608644:
                uStack_b0 = (undefined8 *)0x6;
                unaff_x22 = (long *)FUN_108831e8c(puVar6,&uStack_b0);
                goto LAB_101608224;
              }
              *(ulong *)(puVar6 + 0x28) = uVar12 + 1;
              FUN_100617894(&uStack_78,puVar6);
              unaff_x22 = plStack_70;
              if ((char)uStack_78 != '\x01') {
                cVar3 = uStack_78._1_1_;
                goto LAB_101607d4c;
              }
            }
            else {
LAB_1016084f0:
              uStack_b0 = (undefined8 *)0x3;
              unaff_x22 = (long *)FUN_108831e8c(puVar6,&uStack_b0);
            }
          }
          else {
            uStack_78 = &UNK_108cc35e2;
            plStack_70 = (long *)0xd;
            uStack_b0 = &uStack_78;
            plStack_a8 = (long *)&DAT_100c7b3a0;
            unaff_x22 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          }
        }
      }
      else {
        if (uStack_a0 != 0xe) {
          if ((uStack_a0 != 0x10) ||
             (*plStack_a8 != 0x7261646e6f636573 || plStack_a8[1] != 0x776f646e69775f79))
          goto LAB_101607efc;
          if (!bVar8) {
            uStack_78 = &UNK_108cdd220;
            plStack_70 = (long *)0x10;
            uStack_b0 = &uStack_78;
            plStack_a8 = (long *)&DAT_100c7b3a0;
            unaff_x22 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
            goto joined_r0x00010160863c;
          }
          uVar12 = *(ulong *)(puVar6 + 0x28);
          if (*(ulong *)(puVar6 + 0x20) <= uVar12) {
LAB_1016084cc:
            uStack_b0 = (undefined8 *)0x3;
            unaff_x22 = (long *)FUN_108831e8c(puVar6,&uStack_b0);
            goto LAB_101608234;
          }
          while( true ) {
            bVar4 = *(byte *)(*(long *)(puVar6 + 0x18) + uVar12);
            if (0x3a < bVar4) goto LAB_101608694;
            if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
            uVar12 = uVar12 + 1;
            *(ulong *)(puVar6 + 0x28) = uVar12;
            if (*(ulong *)(puVar6 + 0x20) == uVar12) goto LAB_1016084cc;
          }
          if ((ulong)bVar4 != 0x3a) {
LAB_101608694:
            uStack_b0 = (undefined8 *)0x6;
            unaff_x22 = (long *)FUN_108831e8c(puVar6,&uStack_b0);
            goto LAB_101608234;
          }
          *(ulong *)(puVar6 + 0x28) = uVar12 + 1;
          auVar16 = FUN_10160bcbc(puVar6);
          unaff_x20 = auVar16._8_8_;
          bVar8 = false;
          uStack_f0 = 1;
          unaff_x22 = unaff_x20;
          if (auVar16._0_8_ == 1) goto LAB_101608234;
          goto LAB_101607d4c;
        }
        if (*plStack_a8 != 0x5f7972616d697270 ||
            *(long *)((long)plStack_a8 + 6) != 0x776f646e69775f79) {
LAB_101607efc:
          unaff_x22 = (long *)FUN_10062a8ec(puVar6);
          if (unaff_x22 != (long *)0x0) goto LAB_101608224;
          goto LAB_101607d4c;
        }
        if (puStack_e8 != (undefined8 *)0x2) {
          uStack_78 = &UNK_108cc35ef;
          plStack_70 = (long *)0xe;
          uStack_b0 = &uStack_78;
          plStack_a8 = (long *)&DAT_100c7b3a0;
          unaff_x22 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_b0);
          puStack_e8 = (undefined8 *)0x1;
          goto LAB_101608224;
        }
        uVar12 = *(ulong *)(puVar6 + 0x28);
        if (uVar12 < *(ulong *)(puVar6 + 0x20)) {
          while( true ) {
            bVar4 = *(byte *)(*(long *)(puVar6 + 0x18) + uVar12);
            if (0x3a < bVar4) goto LAB_10160865c;
            if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) break;
            uVar12 = uVar12 + 1;
            *(ulong *)(puVar6 + 0x28) = uVar12;
            if (*(ulong *)(puVar6 + 0x20) == uVar12) goto LAB_1016084a0;
          }
          if ((ulong)bVar4 == 0x3a) {
            *(ulong *)(puVar6 + 0x28) = uVar12 + 1;
            auVar16 = FUN_10160bcbc(puVar6);
            unaff_x21 = auVar16._8_8_;
            puStack_e8 = (undefined8 *)0x1;
            if (auVar16._0_8_ != 1) goto LAB_101607d4c;
          }
          else {
LAB_10160865c:
            uStack_b0 = (undefined8 *)0x6;
            unaff_x21 = (long *)FUN_108831e8c(puVar6,&uStack_b0);
          }
        }
        else {
LAB_1016084a0:
          uStack_b0 = (undefined8 *)0x3;
          unaff_x21 = (long *)FUN_108831e8c(puVar6,&uStack_b0);
        }
        puStack_e8 = (undefined8 *)0x2;
        unaff_x22 = unaff_x21;
      }
    }
    else {
      if (bVar14 == 2) {
        uStack_78 = &UNK_108ca6c3f;
        plStack_70 = (long *)0x7;
        uStack_b0 = &uStack_78;
        plStack_a8 = (long *)&DAT_100c7b3a0;
        unaff_x22 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
        goto LAB_101608224;
      }
      if (cVar3 != '\x02') {
        puVar15 = (undefined8 *)0x0;
        if (puStack_e8 != (undefined8 *)0x2) {
          puVar15 = puStack_e8;
        }
        unaff_x22 = plVar10;
        unaff_x25 = 0;
        if (!bVar8) {
          unaff_x25 = uStack_f0;
        }
        goto LAB_101608254;
      }
      uStack_78 = &UNK_108cc35e2;
      plStack_70 = (long *)0xd;
      uStack_b0 = &uStack_78;
      plStack_a8 = (long *)&DAT_100c7b3a0;
      unaff_x22 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_b0);
    }
  }
LAB_101608224:
  if (!bVar8) {
joined_r0x00010160863c:
    if (unaff_x20 != (long *)0x0) {
      _free(unaff_x20);
    }
  }
LAB_101608234:
  puVar15 = (undefined8 *)0x2;
  if ((puStack_e8 != (undefined8 *)0x2) && (plVar10 != (long *)0x0)) {
    _free(plVar10);
    puVar15 = (undefined8 *)0x2;
  }
LAB_101608254:
  param_1[0x48] = param_1[0x48] + '\x01';
  uStack_b0 = puVar15;
  plStack_a8 = unaff_x22;
  uStack_a0 = unaff_x25;
  plStack_98 = unaff_x20;
  bStack_90 = bVar14;
  cStack_8f = cVar3;
  plVar10 = (long *)FUN_100654604(param_1);
  if (puVar15 == (undefined8 *)0x2) {
    if (plVar10 != (long *)0x0) {
      lVar13 = *plVar10;
      if (lVar13 == 1) {
        FUN_100de21d4(plVar10 + 1);
        unaff_x20 = plVar10;
      }
      else {
LAB_101608328:
        unaff_x20 = plVar10;
        if ((lVar13 == 0) && (plVar10[2] != 0)) {
          _free(plVar10[1]);
        }
      }
LAB_101608368:
      _free(unaff_x20);
    }
  }
  else {
    if (plVar10 == (long *)0x0) {
LAB_101608288:
      uVar5 = CONCAT11(cStack_8f,bStack_90);
      puVar9 = (undefined8 *)_malloc(0x28);
      if (puVar9 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10160852c);
        (*pcVar7)();
      }
      uVar11 = 0;
      puVar9[1] = unaff_x22;
      *puVar9 = puVar15;
      puVar9[3] = unaff_x20;
      puVar9[2] = unaff_x25;
      puVar9[4] = CONCAT62(uStack_8e,uVar5);
      goto LAB_10160838c;
    }
    if ((puVar15 != (undefined8 *)0x0) && (unaff_x22 != (long *)0x0)) {
      _free(unaff_x22);
    }
    unaff_x22 = plVar10;
    if ((unaff_x25 != 0) && (unaff_x20 != (long *)0x0)) goto LAB_101608368;
  }
LAB_101608378:
  puVar9 = (undefined8 *)FUN_108832da4(unaff_x22,param_1);
LAB_101608384:
  uVar11 = 1;
LAB_10160838c:
  auVar16._8_8_ = puVar9;
  auVar16._0_8_ = uVar11;
  return auVar16;
}

