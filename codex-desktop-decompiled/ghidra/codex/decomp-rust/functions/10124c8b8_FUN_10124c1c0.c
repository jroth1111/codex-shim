
void FUN_10124c1c0(undefined8 *param_1,long param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined1 uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x24;
  long *plVar16;
  long *plVar17;
  long *plStack_cb0;
  long lStack_c98;
  undefined1 uStack_c90;
  long *plStack_c88;
  long *plStack_c80;
  long *plStack_c78;
  long *plStack_c70;
  long *plStack_c68;
  undefined1 auStack_c60 [720];
  long *plStack_990;
  long *plStack_988;
  long *plStack_980;
  undefined1 auStack_970 [688];
  undefined8 uStack_6c0;
  long *plStack_6b8;
  long *plStack_6b0;
  long *plStack_6a8;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  long *plStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  long lStack_400;
  long *plStack_3f8;
  long lStack_3f0;
  long *plStack_3e0;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  undefined *puStack_3a0;
  undefined8 uStack_398;
  long *plStack_110;
  long *plStack_108;
  long *plStack_100;
  char cStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 auStack_90 [3];
  undefined1 auStack_71 [17];
  
  uVar14 = *(ulong *)(param_2 + 0x28);
  if (uVar14 < *(ulong *)(param_2 + 0x20)) {
    do {
      bVar1 = *(byte *)(*(long *)(param_2 + 0x18) + uVar14);
      if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) {
        if (bVar1 != 0x5b) {
          plVar15 = (long *)FUN_108832208(param_2,auStack_71,&UNK_10b24ec98);
          goto LAB_10124cd14;
        }
        cVar2 = *(char *)(param_2 + 0x48) + -1;
        *(char *)(param_2 + 0x48) = cVar2;
        if (cVar2 == '\0') {
          uStack_6c0 = (long *)0x18;
          goto LAB_10124c238;
        }
        *(ulong *)(param_2 + 0x28) = uVar14 + 1;
        plVar15 = (long *)0x1;
        uStack_c90 = 1;
        plStack_c88 = (long *)0x0;
        plStack_c80 = (long *)0x8;
        plStack_c78 = (long *)0x0;
        lStack_c98 = param_2;
        goto LAB_10124c2c8;
      }
      uVar14 = uVar14 + 1;
      *(ulong *)(param_2 + 0x28) = uVar14;
    } while (*(ulong *)(param_2 + 0x20) != uVar14);
  }
  uStack_6c0 = (long *)0x5;
LAB_10124c238:
  uVar5 = FUN_108831e8c(param_2,&uStack_6c0);
  goto LAB_10124cd20;
LAB_10124c2c8:
  FUN_1011de3f0(&uStack_6c0,&lStack_c98);
  lVar3 = lStack_c98;
  plVar7 = plStack_6b8;
  if ((char)uStack_6c0 != '\x01') {
    plVar6 = plStack_c88;
    plVar7 = plStack_c80;
    plVar16 = plStack_c78;
    if (uStack_6c0._1_1_ != '\x01') goto LAB_10124cc54;
    uVar14 = *(ulong *)(lStack_c98 + 0x28);
    if (uVar14 < *(ulong *)(lStack_c98 + 0x20)) {
      while (bVar1 = *(byte *)(*(long *)(lStack_c98 + 0x18) + uVar14),
            bVar1 < 0x21 && (1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) != 0) {
        uVar14 = uVar14 + 1;
        *(ulong *)(lStack_c98 + 0x28) = uVar14;
        if (*(ulong *)(lStack_c98 + 0x20) == uVar14) goto LAB_10124cb50;
      }
      if (bVar1 != 0x7b) {
        plVar7 = (long *)FUN_108832208(lStack_c98,auStack_71,&UNK_10b24eb98);
        goto LAB_10124cc20;
      }
      cVar2 = *(char *)(lStack_c98 + 0x48) + -1;
      *(char *)(lStack_c98 + 0x48) = cVar2;
      if (cVar2 != '\0') {
        *(ulong *)(lStack_c98 + 0x28) = uVar14 + 1;
        lStack_f0 = lStack_c98;
        uStack_e8 = 1;
        plStack_e0 = (long *)0x8000000000000000;
        lStack_c8 = 0;
        lStack_c0 = 8;
        cVar2 = '\x02';
        lStack_b8 = 0;
        plVar7 = (long *)0x8000000000000000;
LAB_10124c3ac:
        FUN_1011ddbc4(&uStack_6c0,&lStack_f0);
        lVar11 = lStack_f0;
        if ((char)uStack_6c0 == '\x01') goto LAB_10124c85c;
        if (uStack_6c0._1_1_ != '\x01') {
          plStack_d8 = plStack_cb0;
          if (cVar2 == '\x02') {
            uStack_3d0 = (long *)&UNK_108ca2209;
            plStack_3c8 = (long *)0x7;
            uStack_6c0 = &uStack_3d0;
            plStack_6b8 = (long *)&DAT_100c7b3a0;
            plStack_e0 = plVar7;
            plStack_d0 = unaff_x24;
            plVar6 = (long *)FUN_108856088(s_missing_field_____108ac28f7,&uStack_6c0);
LAB_10124c748:
            bVar4 = true;
            goto LAB_10124c74c;
          }
          bVar4 = plVar7 == (long *)0x8000000000000000;
          if (bVar4) {
            plStack_b0 = (long *)0x0;
            plStack_a8 = (long *)0x8;
            plStack_a0 = (long *)0x0;
          }
          else {
            plStack_a8 = plStack_cb0;
            plStack_b0 = plVar7;
            plStack_a0 = unaff_x24;
          }
          lStack_3a8 = lStack_c0 + lStack_b8 * 0x40;
          lStack_3b0 = lStack_c0;
          uStack_3d0 = (long *)CONCAT71(uStack_3d0._1_7_,0x16);
          puStack_3a0 = &UNK_10b22bc30;
          uStack_398 = 0xc;
          plStack_e0 = plVar7;
          plStack_d0 = unaff_x24;
          FUN_100b33b14(&uStack_6c0,&uStack_3d0);
          plVar8 = plStack_a8;
          plVar6 = plStack_6b8;
          plVar16 = uStack_6c0;
          if (uStack_6c0 == (long *)0x8000000000000000) {
            if (plStack_a0 != (long *)0x0) {
              plVar16 = plStack_a8 + 1;
              plVar17 = plStack_a0;
              do {
                if (plVar16[-1] != 0) {
                  _free(*plVar16);
                }
                plVar16 = plVar16 + 3;
                plVar17 = (long *)((long)plVar17 + -1);
              } while (plVar17 != (long *)0x0);
            }
            if (plStack_b0 != (long *)0x0) {
              _free(plVar8);
            }
            goto LAB_10124c74c;
          }
          _memcpy(auStack_970,&plStack_6b0,0x2b0);
          plStack_988 = plStack_a8;
          plStack_990 = plStack_b0;
          plStack_980 = plStack_a0;
          FUN_100d5c778(&lStack_c8);
          goto LAB_10124c7a8;
        }
        *(long *)(lStack_f0 + 0x28) = *(long *)(lStack_f0 + 0x28) + 1;
        *(undefined8 *)(lStack_f0 + 0x10) = 0;
        __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                  (&uStack_6c0,lStack_f0 + 0x18,lStack_f0);
        plVar16 = plStack_6b0;
        plVar6 = plStack_6b8;
        if (uStack_6c0 == (long *)0x2) {
LAB_10124c9f4:
          bVar4 = true;
          plStack_d8 = plStack_cb0;
          plStack_e0 = plVar7;
          plStack_d0 = unaff_x24;
          goto LAB_10124c74c;
        }
        if (((ulong)uStack_6c0 & 1) == 0) {
          if (plStack_6b0 != (long *)0x14) {
            if (plStack_6b0 == (long *)0x7) {
              if ((int)*plStack_6b8 == 0x62616e65 && *(int *)((long)plStack_6b8 + 3) == 0x64656c62)
              goto LAB_10124c61c;
              uVar9 = 0xd;
              plStack_a8 = plStack_6b8;
              plStack_a0 = (long *)0x7;
            }
            else {
              uVar9 = 0xd;
              plStack_a8 = plStack_6b8;
              plStack_a0 = plStack_6b0;
            }
            goto LAB_10124c550;
          }
          if ((*plStack_6b8 != 0x64656c6261736964 || plStack_6b8[1] != 0x6e5f6c6c696b735f) ||
              (int)plStack_6b8[2] != 0x73656d61) {
            uVar9 = 0xd;
            plStack_a0 = (long *)0x14;
            plStack_a8 = plStack_6b8;
            goto LAB_10124c550;
          }
LAB_10124c698:
          if (plVar7 != (long *)0x8000000000000000) {
            plStack_d8 = plStack_cb0;
            uStack_3d0 = (long *)&UNK_108cba697;
            plStack_3c8 = (long *)0x14;
            uStack_6c0 = &uStack_3d0;
            plStack_6b8 = (long *)&DAT_100c7b3a0;
            plStack_e0 = plVar7;
            plStack_d0 = unaff_x24;
            plVar6 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_6c0);
            goto LAB_10124c748;
          }
          uVar14 = *(ulong *)(lVar11 + 0x28);
          if (*(ulong *)(lVar11 + 0x20) <= uVar14) {
LAB_10124ca08:
            plStack_d8 = plStack_cb0;
            plStack_e0 = (long *)0x8000000000000000;
            uStack_6c0 = (long *)0x3;
            plStack_d0 = unaff_x24;
            plVar6 = (long *)FUN_108831e8c(lVar11,&uStack_6c0);
LAB_10124ca30:
            bVar4 = true;
            plVar7 = (long *)0x8000000000000000;
            goto LAB_10124c74c;
          }
          while( true ) {
            bVar1 = *(byte *)(*(long *)(lVar11 + 0x18) + uVar14);
            if (0x3a < bVar1) goto LAB_10124cb10;
            if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
            uVar14 = uVar14 + 1;
            *(ulong *)(lVar11 + 0x28) = uVar14;
            if (*(ulong *)(lVar11 + 0x20) == uVar14) goto LAB_10124ca08;
          }
          if ((ulong)bVar1 != 0x3a) {
LAB_10124cb10:
            plStack_d8 = plStack_cb0;
            plStack_e0 = (long *)0x8000000000000000;
            uStack_6c0 = (long *)0x6;
            plStack_d0 = unaff_x24;
            plVar6 = (long *)FUN_108831e8c(lVar11,&uStack_6c0);
            goto LAB_10124ca30;
          }
          *(ulong *)(lVar11 + 0x28) = uVar14 + 1;
          FUN_10061d638(&uStack_3d0,lVar11);
          if (uStack_3d0 == (long *)0x8000000000000000) {
            plStack_d8 = plStack_cb0;
            plStack_e0 = (long *)0x8000000000000000;
            plVar6 = plStack_3c8;
            plStack_d0 = unaff_x24;
            goto LAB_10124ca30;
          }
          plStack_cb0 = plStack_3c8;
          plVar7 = uStack_3d0;
          unaff_x24 = plStack_3c0;
          goto LAB_10124c3ac;
        }
        if (plStack_6b0 == (long *)0x0) {
          plVar8 = (long *)0x1;
        }
        else {
          if (plStack_6b0 == (long *)0x14) {
            if ((*plStack_6b8 == 0x64656c6261736964 && plStack_6b8[1] == 0x6e5f6c6c696b735f) &&
                (int)plStack_6b8[2] == 0x73656d61) goto LAB_10124c698;
          }
          else if ((plStack_6b0 == (long *)0x7) &&
                  ((int)*plStack_6b8 == 0x62616e65 && *(int *)((long)plStack_6b8 + 3) == 0x64656c62)
                  ) {
LAB_10124c61c:
            if (cVar2 != '\x02') {
              plStack_d8 = plStack_cb0;
              uStack_3d0 = (long *)&UNK_108ca2209;
              plStack_3c8 = (long *)0x7;
              uStack_6c0 = &uStack_3d0;
              plStack_6b8 = (long *)&DAT_100c7b3a0;
              plStack_e0 = plVar7;
              plStack_d0 = unaff_x24;
              plVar6 = (long *)FUN_108856088(s_duplicate_field_____108ac2973,&uStack_6c0);
              goto LAB_10124c748;
            }
            uVar14 = *(ulong *)(lVar11 + 0x28);
            if (uVar14 < *(ulong *)(lVar11 + 0x20)) {
              while( true ) {
                bVar1 = *(byte *)(*(long *)(lVar11 + 0x18) + uVar14);
                if (0x3a < bVar1) goto LAB_10124cb38;
                if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
                uVar14 = uVar14 + 1;
                *(ulong *)(lVar11 + 0x28) = uVar14;
                if (*(ulong *)(lVar11 + 0x20) == uVar14) goto LAB_10124c9dc;
              }
              if ((ulong)bVar1 != 0x3a) {
LAB_10124cb38:
                uStack_6c0 = (long *)0x6;
                plVar6 = (long *)FUN_108831e8c(lVar11,&uStack_6c0);
                goto LAB_10124c9f4;
              }
              *(ulong *)(lVar11 + 0x28) = uVar14 + 1;
              FUN_100617894(&uStack_3d0,lVar11);
              plVar6 = plStack_3c8;
              if ((char)uStack_3d0 != '\x01') {
                cVar2 = uStack_3d0._1_1_;
                goto LAB_10124c3ac;
              }
            }
            else {
LAB_10124c9dc:
              uStack_6c0 = (long *)0x3;
              plVar6 = (long *)FUN_108831e8c(lVar11,&uStack_6c0);
            }
            goto LAB_10124c9f4;
          }
          plVar8 = (long *)_malloc(plStack_6b0);
          if (plVar8 == (long *)0x0) {
            plStack_d8 = plStack_cb0;
            plStack_e0 = plVar7;
            plStack_d0 = unaff_x24;
            func_0x0001087c9084(1,plVar16);
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10124cdcc);
            (*pcVar10)();
          }
        }
        _memcpy(plVar8,plVar6,plVar16);
        uVar9 = 0xc;
        plStack_a8 = plVar16;
        plStack_a0 = plVar8;
LAB_10124c550:
        plStack_b0 = (long *)CONCAT71(plStack_b0._1_7_,uVar9);
        plStack_98 = plVar16;
        uVar14 = *(ulong *)(lVar11 + 0x28);
        if (uVar14 < *(ulong *)(lVar11 + 0x20)) {
          while( true ) {
            bVar1 = *(byte *)(*(long *)(lVar11 + 0x18) + uVar14);
            if (0x3a < bVar1) goto LAB_10124ca3c;
            if ((1L << ((ulong)bVar1 & 0x3f) & 0x100002600U) == 0) break;
            uVar14 = uVar14 + 1;
            *(ulong *)(lVar11 + 0x28) = uVar14;
            if (*(ulong *)(lVar11 + 0x20) == uVar14) goto LAB_10124c71c;
          }
          if ((ulong)bVar1 == 0x3a) {
            *(ulong *)(lVar11 + 0x28) = uVar14 + 1;
            func_0x0001016043b4(&uStack_3d0,lVar11);
            lVar11 = lStack_b8;
            if ((char)uStack_3d0 != '\x16') {
              uStack_69c = *(undefined4 *)((long)((ulong)&uStack_3d0 | 1) + 3);
              plStack_698 = plStack_3c8;
              uStack_688 = uStack_3b8;
              plStack_690 = plStack_3c0;
              plStack_6b8 = plStack_a8;
              uStack_6c0 = plStack_b0;
              plStack_6a8 = plStack_98;
              plStack_6b0 = plStack_a0;
              uStack_6a0 = CONCAT31((int3)*(undefined4 *)((ulong)&uStack_3d0 | 1),(char)uStack_3d0);
              if (lStack_b8 == lStack_c8) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h34a99b0fb5689584E(&lStack_c8);
              }
              puVar12 = (undefined8 *)(lStack_c0 + lVar11 * 0x40);
              puVar12[1] = plStack_6b8;
              *puVar12 = uStack_6c0;
              puVar12[3] = plStack_6a8;
              puVar12[2] = plStack_6b0;
              puVar12[5] = plStack_698;
              puVar12[4] = CONCAT44(uStack_69c,uStack_6a0);
              puVar12[7] = uStack_688;
              puVar12[6] = plStack_690;
              lStack_b8 = lVar11 + 1;
              goto LAB_10124c3ac;
            }
            plStack_d8 = plStack_cb0;
            plVar6 = plStack_3c8;
            plStack_e0 = plVar7;
            plStack_d0 = unaff_x24;
          }
          else {
LAB_10124ca3c:
            plStack_d8 = plStack_cb0;
            auStack_90[0] = 6;
            plStack_e0 = plVar7;
            plStack_d0 = unaff_x24;
            plVar6 = (long *)FUN_108831e8c(lVar11,auStack_90);
          }
        }
        else {
LAB_10124c71c:
          plStack_d8 = plStack_cb0;
          auStack_90[0] = 3;
          plStack_e0 = plVar7;
          plStack_d0 = unaff_x24;
          plVar6 = (long *)FUN_108831e8c(lVar11,auStack_90);
        }
        FUN_100e077ec(&plStack_b0);
        goto LAB_10124c748;
      }
      uStack_6c0 = (long *)0x18;
      plVar7 = (long *)FUN_108831e8c(lStack_c98,&uStack_6c0);
    }
    else {
LAB_10124cb50:
      uStack_6c0 = (long *)0x5;
      plVar7 = (long *)FUN_108831e8c(lStack_c98,&uStack_6c0);
    }
  }
  goto LAB_10124cc30;
LAB_10124c85c:
  plStack_d8 = plStack_cb0;
  bVar4 = true;
  plVar6 = plStack_6b8;
  plStack_e0 = plVar7;
  plStack_d0 = unaff_x24;
LAB_10124c74c:
  FUN_100d5c778(&lStack_c8);
  plVar16 = (long *)0x8000000000000000;
  bVar4 = (bool)(bVar4 ^ 1);
  if (plVar7 == (long *)0x8000000000000000) {
    bVar4 = true;
  }
  if (!bVar4) {
    if (unaff_x24 != (long *)0x0) {
      plVar16 = plStack_cb0 + 1;
      do {
        if (plVar16[-1] != 0) {
          _free(*plVar16);
        }
        plVar16 = plVar16 + 3;
        unaff_x24 = (long *)((long)unaff_x24 + -1);
      } while (unaff_x24 != (long *)0x0);
    }
    if (plVar7 != (long *)0x0) {
      _free(plStack_cb0);
    }
    plVar16 = (long *)0x8000000000000000;
  }
LAB_10124c7a8:
  *(char *)(lVar3 + 0x48) = *(char *)(lVar3 + 0x48) + '\x01';
  uStack_3d0 = plVar16;
  plStack_3c8 = plVar6;
  _memcpy(&plStack_3c0,auStack_970,0x2b0);
  plStack_108 = plStack_988;
  plStack_110 = plStack_990;
  plStack_100 = plStack_980;
  cStack_f8 = cVar2;
  plVar16 = (long *)FUN_100654604(lVar3);
  _memcpy(&uStack_6c0,&uStack_3d0,0x2e0);
  plVar7 = plStack_6b8;
  plVar6 = uStack_6c0;
  plStack_3e0 = plVar16;
  if (uStack_6c0 == (long *)0x8000000000000000) {
    if (plVar16 == (long *)0x0) goto LAB_10124cc20;
    plStack_3f8 = plVar16;
    if (*plVar16 == 1) {
      uVar14 = plVar16[1];
      if ((uVar14 & 3) != 1) goto LAB_10124cc18;
      puVar13 = (undefined8 *)(uVar14 - 1);
      plVar15 = (long *)*puVar13;
      puVar12 = *(undefined8 **)(uVar14 + 7);
      pcVar10 = (code *)*puVar12;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(plVar15);
      }
      if (puVar12[1] != 0) {
        _free(plVar15);
      }
    }
    else {
      if ((*plVar16 != 0) || (plVar16[2] == 0)) goto LAB_10124cc18;
      puVar13 = (undefined8 *)plVar16[1];
    }
    _free(puVar13);
    goto LAB_10124cc18;
  }
  if (plVar16 != (long *)0x0) goto LAB_10124cbac;
  _memcpy(auStack_c60,&plStack_6b0,0x2d0);
  plVar16 = plStack_c78;
  plStack_c70 = plVar6;
  plStack_c68 = plVar7;
  if (plStack_c78 == plStack_c88) {
    func_0x000108950ae4(&plStack_c88);
  }
  _memcpy(plStack_c80 + (long)plVar16 * 0x5c,&plStack_c70,0x2e0);
  plStack_c78 = (long *)((long)plVar16 + 1);
  unaff_x24 = (long *)0x0;
  goto LAB_10124c2c8;
LAB_10124cbac:
  FUN_100e38a40(&uStack_6c0);
  if (lStack_3f0 != 0) {
    plVar7 = plStack_3f8 + 1;
    lVar11 = lStack_3f0;
    do {
      if (plVar7[-1] != 0) {
        _free(*plVar7);
      }
      plVar7 = plVar7 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  plVar7 = plVar16;
  if (lStack_400 != 0) {
LAB_10124cc18:
    _free(plStack_3f8);
  }
LAB_10124cc20:
  plVar7 = (long *)FUN_108832da4(plVar7,lVar3);
LAB_10124cc30:
  plVar6 = plStack_c80;
  FUN_100e517d4(plStack_c80,plStack_c78);
  if (plStack_c88 != (long *)0x0) {
    _free(plVar6);
  }
  plVar6 = (long *)0x8000000000000000;
  plVar16 = plVar15;
LAB_10124cc54:
  *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
  uStack_6c0 = plVar6;
  plStack_6b8 = plVar7;
  plStack_6b0 = plVar16;
  plVar8 = (long *)FUN_10065474c();
  if (plVar6 == (long *)0x8000000000000000) {
    plVar15 = plVar7;
    if (plVar8 != (long *)0x0) {
      if (*plVar8 == 1) {
        FUN_100de21d4(plVar8 + 1);
      }
      else if ((*plVar8 == 0) && (plVar8[2] != 0)) {
        _free(plVar8[1]);
      }
      _free(plVar8);
    }
  }
  else {
    if (plVar8 == (long *)0x0) {
      *param_1 = plVar6;
      param_1[1] = plVar7;
      param_1[2] = plVar16;
      return;
    }
    FUN_100e517d4(plVar7,plVar16);
    plVar15 = plVar8;
    if (plVar6 != (long *)0x0) {
      _free(plVar7);
    }
  }
LAB_10124cd14:
  uVar5 = FUN_108832da4(plVar15,param_2);
LAB_10124cd20:
  *param_1 = 0x8000000000000000;
  param_1[1] = uVar5;
  return;
}

