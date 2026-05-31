
/* WARNING: Type propagation algorithm not settling */

void FUN_101741c38(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  undefined *puVar7;
  int iVar8;
  short *psVar9;
  long lVar10;
  char *pcVar11;
  undefined8 unaff_x19;
  ulong uVar12;
  long unaff_x21;
  ulong uVar13;
  ulong unaff_x25;
  long unaff_x26;
  long lVar14;
  ulong unaff_x27;
  uint uVar15;
  long unaff_x29;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined *in_stack_000001c0;
  undefined8 in_stack_000001c8;
  long in_stack_00000228;
  long in_stack_00000230;
  
  uVar5 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  if ((unaff_x25 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000c0);
  }
  if ((unaff_x27 & 0x7fffffffffffffff) != 0) {
    _free();
  }
  FUN_10174dab0(uVar5);
  _free(uVar5);
  if (in_stack_00000230 == 0) {
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    lVar14 = 0;
    uVar12 = 0x8000000000000000;
    uVar13 = 0x8000000000000000;
    do {
      pbVar6 = (byte *)(in_stack_00000228 + lVar14) + 0x20;
      bVar1 = *(byte *)(in_stack_00000228 + lVar14);
      if (bVar1 < 0xd) {
        if (bVar1 == 1) {
          cVar2 = *(char *)(in_stack_00000228 + lVar14 + 1);
          if (cVar2 != '\x01') {
            if (cVar2 == '\x02') goto LAB_101740958;
            if (cVar2 != '\0') goto LAB_1017407d4;
            goto LAB_10174105c;
          }
        }
        else {
          if (bVar1 != 4) {
            if (bVar1 != 0xc) {
LAB_1017422b8:
              lVar14 = in_stack_00000228 + lVar14;
              goto LAB_1017422bc;
            }
            psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x10);
            lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x18);
            if (lVar4 == 1) goto LAB_10174091c;
LAB_101740818:
            if ((lVar4 != 3) || (*psVar9 != 0x746b || (char)psVar9[1] != 'y')) goto LAB_1017407d4;
LAB_10174105c:
            lVar4 = func_0x000101769f44(in_stack_00000228 + lVar14 + 0x20);
            if (lVar4 != 0) goto LAB_1017409c0;
            goto joined_r0x000101741078;
          }
          lVar4 = *(long *)(in_stack_00000228 + lVar14 + 8);
          if (lVar4 != 1) {
            if (lVar4 != 2) {
              if (lVar4 == 0) goto LAB_10174105c;
              goto LAB_1017407d4;
            }
LAB_101740958:
            if (uVar13 == 0x8000000000000000) {
              FUN_10176936c(unaff_x29 + -0xe0,pbVar6);
              uVar13 = *(ulong *)(unaff_x29 + -0xe0);
              if (uVar13 != 0x8000000000000000) {
                in_stack_000000c8 = *(long *)(unaff_x29 + -0xd8);
                unaff_x19 = *(undefined8 *)(unaff_x29 + -0xd0);
                goto LAB_1017407d4;
              }
              goto LAB_101741314;
            }
            goto LAB_10174227c;
          }
        }
LAB_101740930:
        if (uVar12 != 0x8000000000000000) goto LAB_101742214;
        FUN_10176936c(unaff_x29 + -0xe0,pbVar6);
        uVar12 = *(ulong *)(unaff_x29 + -0xe0);
        if (uVar12 == 0x8000000000000000) goto LAB_101741308;
        unaff_x21 = *(long *)(unaff_x29 + -0xd8);
        unaff_x25 = *(ulong *)(unaff_x29 + -0xd0);
      }
      else {
        if (bVar1 == 0xd) {
          psVar9 = *(short **)(in_stack_00000228 + lVar14 + 8);
          lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x10);
          if (lVar4 != 1) goto LAB_101740818;
LAB_10174091c:
          if ((char)*psVar9 == 'e') goto LAB_101740958;
          if ((char)*psVar9 != 'n') goto LAB_1017407d4;
          goto LAB_101740930;
        }
        if (bVar1 == 0xe) {
          pcVar11 = *(char **)(in_stack_00000228 + lVar14 + 0x10);
          lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x18);
        }
        else {
          if (bVar1 != 0xf) goto LAB_1017422b8;
          pcVar11 = *(char **)(in_stack_00000228 + lVar14 + 8);
          lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x10);
        }
        if (lVar4 == 1) {
          iVar8 = 2;
          if (*pcVar11 != 'e') {
            iVar8 = 3;
          }
          if (*pcVar11 == 'n') goto LAB_101740930;
          if (iVar8 != 3) goto LAB_101740958;
        }
        else if ((((lVar4 == 3) && (*pcVar11 == 'k')) && (pcVar11[1] == 't')) && (pcVar11[2] == 'y')
                ) goto LAB_10174105c;
      }
LAB_1017407d4:
      lVar14 = lVar14 + 0x40;
    } while (in_stack_00000230 * 0x40 - lVar14 != 0);
  }
  in_stack_000001c0 = &UNK_108ce0324;
  in_stack_000001c8 = 3;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar4 = FUN_108876314(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
LAB_1017409c0:
  uVar13 = uVar13 & 0x7fffffffffffffff;
joined_r0x0001017422b0:
  if (uVar13 != 0) {
    _free(in_stack_000000c8);
  }
LAB_1017409d0:
  uVar12 = uVar12 & 0x7fffffffffffffff;
joined_r0x0001017419a8:
  if (uVar12 != 0) {
    _free(unaff_x21);
  }
  FUN_10174dab0(lVar4);
  _free(lVar4);
  if (in_stack_00000230 == 0) {
    uVar12 = 0;
  }
  else {
    lVar14 = 0;
    uVar12 = 0x8000000000000000;
    do {
      bVar1 = *(byte *)(in_stack_00000228 + lVar14);
      if (bVar1 < 0xd) {
        if (bVar1 == 1) {
          cVar2 = *(char *)(in_stack_00000228 + lVar14 + 1);
          iVar8 = 1;
          if (cVar2 != '\x01') {
            iVar8 = 2;
          }
          if (cVar2 == '\0') {
LAB_101741040:
            pbVar6 = (byte *)(in_stack_00000228 + lVar14 + 0x20);
            bVar1 = *pbVar6;
            if (bVar1 - 0xc < 2) {
              pbVar3 = (byte *)0x0;
            }
            else {
              if (bVar1 != 0x15) {
                func_0x000108876058(unaff_x29 + -0xe0);
                lVar4 = func_0x000108a4a50c(unaff_x29 + -0xe0,&UNK_10b2564e8,&UNK_10b2564c8);
                goto LAB_101740ba0;
              }
              lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x38);
              if (lVar4 != 1) {
                if (lVar4 == 0) {
                  *(undefined1 *)(unaff_x29 + -0xe0) = 0xb;
                  lVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (unaff_x29 + -0xe0,&UNK_10b2564b8,&UNK_10b2564c8);
                }
                else {
                  *(undefined1 *)(unaff_x29 + -0xe0) = 0xb;
                  lVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                    (unaff_x29 + -0xe0,&UNK_10b2564b8,&UNK_10b2564c8);
                }
                goto LAB_101740ba0;
              }
              pbVar6 = *(byte **)(in_stack_00000228 + lVar14 + 0x30);
              pbVar3 = pbVar6 + 0x20;
              bVar1 = *pbVar6;
            }
            puVar7 = &UNK_10b2565d8;
            if (bVar1 < 0xd) {
              if (bVar1 == 1) {
                if ((ulong)pbVar6[1] == 0) goto LAB_101741440;
                *(ulong *)(unaff_x29 + -0xd8) = (ulong)pbVar6[1];
                *(undefined1 *)(unaff_x29 + -0xe0) = 1;
                lVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (unaff_x29 + -0xe0,&UNK_10b2573e0,&UNK_10b2564c8);
                goto LAB_101740ba0;
              }
              if (bVar1 == 4) {
                if (*(long *)(pbVar6 + 8) == 0) goto LAB_101741440;
                *(long *)(unaff_x29 + -0xd8) = *(long *)(pbVar6 + 8);
                *(undefined1 *)(unaff_x29 + -0xe0) = 1;
                lVar4 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                  (unaff_x29 + -0xe0,&UNK_10b2573e0,&UNK_10b2564c8);
                goto LAB_101740ba0;
              }
              if (bVar1 == 0xc) {
                psVar9 = *(short **)(pbVar6 + 0x10);
                lVar4 = *(long *)(pbVar6 + 0x18);
                goto LAB_10174141c;
              }
            }
            else {
              if (bVar1 == 0xd) {
                psVar9 = *(short **)(pbVar6 + 8);
                lVar4 = *(long *)(pbVar6 + 0x10);
LAB_10174141c:
                if (lVar4 == 3) {
                  if (*psVar9 == 0x636f && (char)psVar9[1] == 't') goto LAB_101741440;
                  lVar4 = 3;
                }
                lVar4 = FUN_1088755e4(psVar9,lVar4,&UNK_10b256ba8,1);
                goto LAB_101740ba0;
              }
              if (bVar1 == 0xe) {
                lVar4 = 0x18;
                lVar10 = 0x10;
              }
              else {
                if (bVar1 != 0xf) goto LAB_101742780;
                lVar4 = 0x10;
                lVar10 = 8;
              }
              pcVar11 = *(char **)(pbVar6 + lVar10);
              if (((*(long *)(pbVar6 + lVar4) != 3) || (*pcVar11 != 'o')) ||
                 ((pcVar11[1] != 'c' || (pcVar11[2] != 't')))) {
                __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                          (unaff_x29 + -0xe0,pcVar11,*(long *)(pbVar6 + lVar4),&UNK_10b2565d8);
                uVar13 = *(ulong *)(unaff_x29 + -0xe0);
                uVar5 = *(undefined8 *)(unaff_x29 + -0xd8);
                lVar4 = FUN_1088755e4(uVar5,*(undefined8 *)(unaff_x29 + -0xd0),&UNK_10b256ba8,1);
                if ((uVar13 & 0x7fffffffffffffff) != 0) {
                  _free(uVar5);
                }
                goto LAB_101740ba0;
              }
LAB_101741440:
              if ((pbVar3 == (byte *)0x0) || (*pbVar3 == 0x12)) {
                goto joined_r0x000101741458;
              }
              puVar7 = &UNK_10b2564f8;
              pbVar6 = pbVar3;
            }
LAB_101742780:
            lVar4 = FUN_108876268(pbVar6,unaff_x29 + -0xa0,puVar7);
            goto LAB_101740ba0;
          }
        }
        else {
          if (bVar1 != 4) {
            if (bVar1 == 0xc) {
              psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x10);
              lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x18);
              goto joined_r0x000101740b10;
            }
LAB_101742300:
            lVar14 = in_stack_00000228 + lVar14;
            goto LAB_101742304;
          }
          lVar4 = *(long *)(in_stack_00000228 + lVar14 + 8);
          iVar8 = 1;
          if (lVar4 != 1) {
            iVar8 = 2;
          }
          if (lVar4 == 0) goto LAB_101741040;
        }
        if (iVar8 != 2) {
LAB_101740b44:
          if (uVar12 != 0x8000000000000000) goto LAB_101742110;
          FUN_10176936c(unaff_x29 + -0xe0,(byte *)(in_stack_00000228 + lVar14) + 0x20);
          uVar12 = *(ulong *)(unaff_x29 + -0xe0);
          unaff_x21 = *(long *)(unaff_x29 + -0xd8);
          lVar4 = unaff_x21;
          if (uVar12 == 0x8000000000000000) goto LAB_101740bb0;
          unaff_x25 = *(ulong *)(unaff_x29 + -0xd0);
        }
      }
      else if (bVar1 == 0xd) {
        psVar9 = *(short **)(in_stack_00000228 + lVar14 + 8);
        lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x10);
joined_r0x000101740b10:
        if (lVar4 == 1) {
LAB_101740b38:
          if ((char)*psVar9 == 'k') goto LAB_101740b44;
        }
        else if ((lVar4 == 3) && (*psVar9 == 0x746b && (char)psVar9[1] == 'y')) goto LAB_101741040;
      }
      else {
        if (bVar1 == 0xe) {
          psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x10);
          lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x18);
        }
        else {
          if (bVar1 != 0xf) goto LAB_101742300;
          psVar9 = *(short **)(in_stack_00000228 + lVar14 + 8);
          lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x10);
        }
        if (lVar4 == 1) goto LAB_101740b38;
        if ((((lVar4 == 3) && ((char)*psVar9 == 'k')) && (*(char *)((long)psVar9 + 1) == 't')) &&
           ((char)psVar9[1] == 'y')) goto LAB_101741040;
      }
      lVar14 = lVar14 + 0x40;
    } while (in_stack_00000230 * 0x40 - lVar14 != 0);
  }
  in_stack_000001c0 = &UNK_108ce0324;
  in_stack_000001c8 = 3;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar4 = FUN_108876314(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
LAB_101740ba0:
  if ((uVar12 & 0x7fffffffffffffff) != 0) {
LAB_101740ba8:
    _free(unaff_x21);
  }
LAB_101740bb0:
  FUN_10174dab0(lVar4);
  _free(lVar4);
  if (in_stack_00000230 == 0) {
    uVar12 = 0;
  }
  else {
    in_stack_000000c8 = 0;
    uVar15 = 4;
    uVar12 = 0x8000000000000000;
    do {
      bVar1 = *(byte *)(in_stack_00000228 + in_stack_000000c8);
      if (bVar1 < 0xd) {
        if (bVar1 == 1) {
          cVar2 = *(char *)(in_stack_00000228 + in_stack_000000c8 + 1);
          if (cVar2 != '\x01') {
            if (cVar2 != '\x02') {
              if (cVar2 == '\0') goto LAB_101741084;
              goto LAB_101740bec;
            }
LAB_101740d60:
            if (uVar12 == 0x8000000000000000) {
              FUN_10176936c(unaff_x29 + -0xe0);
              uVar12 = *(ulong *)(unaff_x29 + -0xe0);
              unaff_x21 = *(long *)(unaff_x29 + -0xd8);
              if (uVar12 != 0x8000000000000000) {
                unaff_x25 = *(ulong *)(unaff_x29 + -0xd0);
                goto LAB_101740bec;
              }
              goto LAB_1017418a8;
            }
            goto LAB_1017421d8;
          }
        }
        else {
          if (bVar1 != 4) {
            if (bVar1 == 0xc) {
              psVar9 = *(short **)(in_stack_00000228 + in_stack_000000c8 + 0x10);
              lVar14 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x18);
              if (lVar14 != 1) goto LAB_101740cf4;
              goto LAB_101740d54;
            }
LAB_1017422e8:
            in_stack_000000c8 = in_stack_00000228 + in_stack_000000c8;
            goto LAB_1017422ec;
          }
          lVar14 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 8);
          if (lVar14 != 1) {
            if (lVar14 == 2) goto LAB_101740d60;
            if (lVar14 == 0) goto LAB_101741084;
            goto LAB_101740bec;
          }
        }
LAB_101740d30:
        if (uVar15 != 4) goto LAB_101742318;
        FUN_1017690c4(unaff_x29 + -0xe0);
        if (*(char *)(unaff_x29 + -0xe0) == '\x01') goto LAB_101741910;
        uVar15 = (uint)*(byte *)(unaff_x29 + -0xdf);
      }
      else if (bVar1 == 0xd) {
        psVar9 = *(short **)(in_stack_00000228 + in_stack_000000c8 + 8);
        lVar14 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x10);
        if (lVar14 == 1) goto LAB_101740d54;
LAB_101740cf4:
        if (lVar14 == 3) {
          if (*psVar9 == 0x746b && (char)psVar9[1] == 'y') {
LAB_101741084:
            lVar14 = func_0x000101769488(in_stack_00000228 + in_stack_000000c8 + 0x20,
                                         (byte *)(in_stack_00000228 + in_stack_000000c8) + 0x20);
            if (lVar14 != 0) goto LAB_101740ddc;
            goto joined_r0x0001017410a0;
          }
          if (*psVar9 == 0x7263 && (char)psVar9[1] == 'v') goto LAB_101740d30;
        }
      }
      else {
        if (bVar1 == 0xe) {
          psVar9 = *(short **)(in_stack_00000228 + in_stack_000000c8 + 0x10);
          lVar14 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x18);
        }
        else {
          if (bVar1 != 0xf) goto LAB_1017422e8;
          psVar9 = *(short **)(in_stack_00000228 + in_stack_000000c8 + 8);
          lVar14 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x10);
        }
        if (lVar14 == 1) {
LAB_101740d54:
          if ((char)*psVar9 == 'x') goto LAB_101740d60;
        }
        else if (lVar14 == 3) {
          if ((char)*psVar9 == 'c') {
            if ((*(char *)((long)psVar9 + 1) == 'r') && ((char)psVar9[1] == 'v'))
            goto LAB_101740d30;
          }
          else if (((char)*psVar9 == 'k') &&
                  ((*(char *)((long)psVar9 + 1) == 't' && ((char)psVar9[1] == 'y'))))
          goto LAB_101741084;
        }
      }
LAB_101740bec:
      in_stack_000000c8 = in_stack_000000c8 + 0x40;
    } while (in_stack_00000230 * 0x40 - in_stack_000000c8 != 0);
  }
  in_stack_000001c0 = &UNK_108ce0324;
  in_stack_000001c8 = 3;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar14 = FUN_108876314(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
LAB_101740ddc:
  uVar12 = uVar12 & 0x7fffffffffffffff;
  lVar4 = unaff_x21;
joined_r0x00010174220c:
  unaff_x21 = lVar14;
  if (uVar12 != 0) {
    _free(lVar4);
  }
LAB_1017418a8:
  FUN_10174dab0(unaff_x21);
  _free(unaff_x21);
  uVar5 = FUN_1088762ac(&UNK_108ce032f,0x43);
  FUN_10174f874(&stack0x00000218);
  *in_stack_000000d0 = 0x8000000000000001;
  in_stack_000000d0[1] = uVar5;
  FUN_10174e510(&stack0x00000100);
LAB_1017418e8:
  FUN_10174bb38(&stack0x000000e8);
  return;
joined_r0x000101741078:
  if (in_stack_00000230 * 0x40 + -0x40 == lVar14) goto LAB_101741688;
  lVar4 = in_stack_00000228 + lVar14;
  bVar1 = *(byte *)(lVar4 + 0x40);
  if (0xc < bVar1) {
    if (bVar1 == 0xd) {
      psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x48);
      lVar10 = *(long *)(in_stack_00000228 + lVar14 + 0x50);
LAB_101741230:
      if (lVar10 != 3) {
        if (lVar10 == 1) {
          if ((char)*psVar9 == 'e') goto LAB_101741280;
          if ((char)*psVar9 == 'n') goto LAB_101741254;
        }
        goto LAB_101741144;
      }
      if (*psVar9 == 0x746b && (char)psVar9[1] == 'y') {
LAB_1017412d4:
        in_stack_000001c0 = &UNK_108ce0324;
        in_stack_000001c8 = 3;
        *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
        *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
        lVar4 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
        goto LAB_1017409c0;
      }
    }
    else {
      if (bVar1 == 0xe) {
        pcVar11 = *(char **)(in_stack_00000228 + lVar14 + 0x50);
        lVar10 = *(long *)(in_stack_00000228 + lVar14 + 0x58);
      }
      else {
        if (bVar1 != 0xf) goto LAB_1017426f4;
        pcVar11 = *(char **)(in_stack_00000228 + lVar14 + 0x48);
        lVar10 = *(long *)(in_stack_00000228 + lVar14 + 0x50);
      }
      if (lVar10 == 3) {
        if (((*pcVar11 == 'k') && (pcVar11[1] == 't')) && (pcVar11[2] == 'y')) goto LAB_1017412d4;
      }
      else if (lVar10 == 1) {
        iVar8 = 2;
        if (*pcVar11 != 'e') {
          iVar8 = 3;
        }
        if (*pcVar11 == 'n') goto LAB_101741254;
        if (iVar8 != 3) goto LAB_101741280;
      }
    }
LAB_101741144:
    lVar14 = lVar14 + 0x40;
    goto joined_r0x000101741078;
  }
  if (bVar1 != 1) {
    if (bVar1 == 4) {
      lVar10 = *(long *)(in_stack_00000228 + lVar14 + 0x48);
      if (lVar10 == 1) goto LAB_101741254;
      if (lVar10 != 2) {
        if (lVar10 == 0) goto LAB_1017412d4;
        goto LAB_101741144;
      }
      goto LAB_101741280;
    }
    if (bVar1 == 0xc) {
      psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x50);
      lVar10 = *(long *)(in_stack_00000228 + lVar14 + 0x58);
      goto LAB_101741230;
    }
LAB_1017426f4:
    lVar14 = in_stack_00000228 + lVar14 + 0x40;
LAB_1017422bc:
    lVar4 = FUN_108876268(lVar14,unaff_x29 + -0xa0,&UNK_10b256638);
    goto LAB_1017409c0;
  }
  cVar2 = *(char *)(in_stack_00000228 + lVar14 + 0x41);
  if (cVar2 == '\x01') {
LAB_101741254:
    if (uVar12 != 0x8000000000000000) goto LAB_101742214;
    FUN_10176936c(unaff_x29 + -0xe0,lVar4 + 0x60);
    uVar12 = *(ulong *)(unaff_x29 + -0xe0);
    if (uVar12 == 0x8000000000000000) goto LAB_101741308;
    unaff_x21 = *(long *)(unaff_x29 + -0xd8);
    unaff_x25 = *(ulong *)(unaff_x29 + -0xd0);
    goto LAB_101741144;
  }
  if (cVar2 != '\x02') {
    if (cVar2 == '\0') goto LAB_1017412d4;
    goto LAB_101741144;
  }
LAB_101741280:
  if (uVar13 != 0x8000000000000000) goto LAB_10174227c;
  FUN_10176936c(unaff_x29 + -0xe0,lVar4 + 0x60);
  uVar13 = *(ulong *)(unaff_x29 + -0xe0);
  if (uVar13 != 0x8000000000000000) {
    in_stack_000000c8 = *(long *)(unaff_x29 + -0xd8);
    unaff_x19 = *(undefined8 *)(unaff_x29 + -0xd0);
    goto LAB_101741144;
  }
LAB_101741314:
  lVar4 = *(long *)(unaff_x29 + -0xd8);
  goto LAB_1017409d0;
LAB_101741688:
  if (uVar12 == 0x8000000000000000) {
    in_stack_000001c0 = &UNK_108ce032c;
    in_stack_000001c8 = 1;
    *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
    *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
    uVar12 = 0;
    lVar4 = FUN_108876314(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
    goto LAB_1017409c0;
  }
  if (uVar13 != 0x8000000000000000) {
    uVar15 = (uint)uVar13 & 0xff;
    uVar13 = uVar13 & 0xffffffffffffff00;
    uVar5 = 0x8000000000000000;
    goto LAB_1017415fc;
  }
  in_stack_000001c0 = &UNK_108ce032d;
  in_stack_000001c8 = 1;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar4 = FUN_108876314(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
  goto joined_r0x0001017419a8;
LAB_10174227c:
  in_stack_000001c0 = &UNK_108ce032d;
  in_stack_000001c8 = 1;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar4 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  goto joined_r0x0001017422b0;
LAB_101742214:
  in_stack_000001c0 = &UNK_108ce032c;
  in_stack_000001c8 = 1;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar4 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  goto LAB_1017409c0;
LAB_101741308:
  lVar4 = *(long *)(unaff_x29 + -0xd8);
  uVar12 = 0;
  goto LAB_1017409c0;
joined_r0x000101741458:
  if (in_stack_00000230 * 0x40 + -0x40 == lVar14) goto LAB_1017415a8;
  bVar1 = *(byte *)(in_stack_00000228 + lVar14 + 0x40);
  if (0xc < bVar1) {
    if (bVar1 == 0xd) {
      psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x48);
      lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x50);
LAB_101741564:
      if (lVar4 != 3) {
LAB_10174156c:
        if ((lVar4 != 1) || ((char)*psVar9 != 'k')) goto LAB_101741484;
        goto LAB_101741580;
      }
      if (*psVar9 == 0x746b && (char)psVar9[1] == 'y') goto LAB_101741654;
    }
    else {
      if (bVar1 == 0xe) {
        psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x50);
        lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x58);
      }
      else {
        if (bVar1 != 0xf) goto LAB_1017423bc;
        psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x48);
        lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x50);
      }
      if (lVar4 != 3) goto LAB_10174156c;
      if ((((char)*psVar9 == 'k') && (*(char *)((long)psVar9 + 1) == 't')) &&
         ((char)psVar9[1] == 'y')) goto LAB_101741654;
    }
    goto LAB_101741484;
  }
  if (bVar1 != 1) {
    if (bVar1 == 4) {
      lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x48);
      iVar8 = 1;
      if (lVar4 != 1) {
        iVar8 = 2;
      }
      if (lVar4 == 0) goto LAB_101741654;
      goto LAB_10174154c;
    }
    if (bVar1 == 0xc) {
      psVar9 = *(short **)(in_stack_00000228 + lVar14 + 0x50);
      lVar4 = *(long *)(in_stack_00000228 + lVar14 + 0x58);
      goto LAB_101741564;
    }
LAB_1017423bc:
    lVar14 = in_stack_00000228 + lVar14 + 0x40;
LAB_101742304:
    lVar4 = FUN_108876268(lVar14,unaff_x29 + -0xa0,&UNK_10b256618);
    goto LAB_101740ba0;
  }
  cVar2 = *(char *)(in_stack_00000228 + lVar14 + 0x41);
  iVar8 = 1;
  if (cVar2 != '\x01') {
    iVar8 = 2;
  }
  if (cVar2 == '\0') {
LAB_101741654:
    in_stack_000001c0 = &UNK_108ce0324;
    in_stack_000001c8 = 3;
    *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
    *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
    lVar4 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
    goto LAB_101740ba0;
  }
LAB_10174154c:
  if (iVar8 == 2) {
LAB_101741484:
    lVar14 = lVar14 + 0x40;
    goto joined_r0x000101741458;
  }
LAB_101741580:
  if (uVar12 == 0x8000000000000000) {
    FUN_10176936c(unaff_x29 + -0xe0,in_stack_00000228 + lVar14 + 0x60);
    uVar12 = *(ulong *)(unaff_x29 + -0xe0);
    unaff_x21 = *(long *)(unaff_x29 + -0xd8);
    lVar4 = unaff_x21;
    if (uVar12 != 0x8000000000000000) {
      unaff_x25 = *(ulong *)(unaff_x29 + -0xd0);
      goto LAB_101741484;
    }
    goto LAB_101740bb0;
  }
LAB_101742110:
  in_stack_000001c0 = &UNK_108ce032e;
  in_stack_000001c8 = 1;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar4 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  if (uVar12 == 0) goto LAB_101740bb0;
  goto LAB_101740ba8;
LAB_1017415a8:
  unaff_x19 = 0x746b;
  if (uVar12 != 0x8000000000000000) {
    uVar13 = 0;
    uVar15 = 0;
    uVar5 = 0x8000000000000001;
    in_stack_000000c8 = in_stack_00000228;
LAB_1017415fc:
    FUN_10174f874(&stack0x00000218);
    uVar16 = *(undefined8 *)(unaff_x26 + 0x80);
    uVar18 = *(undefined8 *)(unaff_x26 + 0x98);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x90);
    in_stack_000000d0[0x11] = *(undefined8 *)(unaff_x26 + 0x88);
    in_stack_000000d0[0x10] = uVar16;
    in_stack_000000d0[0x13] = uVar18;
    in_stack_000000d0[0x12] = uVar17;
    uVar16 = *(undefined8 *)(unaff_x26 + 0xa0);
    in_stack_000000d0[0x15] = *(undefined8 *)(unaff_x26 + 0xa8);
    in_stack_000000d0[0x14] = uVar16;
    in_stack_000000d0[9] = in_stack_00000148;
    in_stack_000000d0[8] = in_stack_00000140;
    in_stack_000000d0[0xb] = in_stack_00000158;
    in_stack_000000d0[10] = in_stack_00000150;
    uVar18 = *(undefined8 *)(unaff_x26 + 0x60);
    uVar17 = *(undefined8 *)(unaff_x26 + 0x78);
    uVar16 = *(undefined8 *)(unaff_x26 + 0x70);
    in_stack_000000d0[0xd] = *(undefined8 *)(unaff_x26 + 0x68);
    in_stack_000000d0[0xc] = uVar18;
    in_stack_000000d0[0xf] = uVar17;
    in_stack_000000d0[0xe] = uVar16;
    in_stack_000000d0[1] = in_stack_00000108;
    *in_stack_000000d0 = in_stack_00000100;
    in_stack_000000d0[3] = in_stack_00000118;
    in_stack_000000d0[2] = in_stack_00000110;
    in_stack_000000d0[5] = in_stack_00000128;
    in_stack_000000d0[4] = in_stack_00000120;
    in_stack_000000d0[7] = in_stack_00000138;
    in_stack_000000d0[6] = in_stack_00000130;
    in_stack_000000d0[0x16] = uVar5;
    in_stack_000000d0[0x17] = uVar12;
    in_stack_000000d0[0x18] = unaff_x21;
    in_stack_000000d0[0x19] = unaff_x25;
    in_stack_000000d0[0x1a] = uVar13 | uVar15;
    in_stack_000000d0[0x1b] = in_stack_000000c8;
    in_stack_000000d0[0x1c] = unaff_x19;
    goto LAB_1017418e8;
  }
  in_stack_000001c0 = &UNK_108ce032e;
  in_stack_000001c8 = 1;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar4 = FUN_108876314(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
  goto LAB_101740bb0;
joined_r0x0001017410a0:
  if (in_stack_00000230 * 0x40 + -0x40 == in_stack_000000c8) goto LAB_101741918;
  lVar14 = in_stack_00000228 + in_stack_000000c8;
  bVar1 = *(byte *)(lVar14 + 0x40);
  if (0xc < bVar1) {
    if (bVar1 == 0xd) {
      psVar9 = *(short **)(in_stack_00000228 + in_stack_000000c8 + 0x48);
      lVar4 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x50);
LAB_1017417b8:
      if (lVar4 == 3) {
        if (*psVar9 == 0x746b && (char)psVar9[1] == 'y') goto LAB_101741870;
        if (*psVar9 == 0x7263 && (char)psVar9[1] == 'v') goto LAB_101741834;
      }
      else {
LAB_1017417c0:
        if ((lVar4 == 1) && ((char)*psVar9 == 'x')) goto LAB_1017417d4;
      }
    }
    else {
      if (bVar1 == 0xe) {
        psVar9 = *(short **)(in_stack_00000228 + in_stack_000000c8 + 0x50);
        lVar4 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x58);
      }
      else {
        if (bVar1 != 0xf) goto LAB_101742700;
        psVar9 = *(short **)(in_stack_00000228 + in_stack_000000c8 + 0x48);
        lVar4 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x50);
      }
      if (lVar4 != 3) goto LAB_1017417c0;
      if ((char)*psVar9 == 'k') {
        if ((*(char *)((long)psVar9 + 1) == 't') && ((char)psVar9[1] == 'y')) goto LAB_101741870;
      }
      else if (((char)*psVar9 == 'c') &&
              ((*(char *)((long)psVar9 + 1) == 'r' && ((char)psVar9[1] == 'v'))))
      goto LAB_101741834;
    }
    goto LAB_1017416d0;
  }
  if (bVar1 != 1) {
    if (bVar1 == 4) {
      lVar4 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x48);
      if (lVar4 != 1) {
        if (lVar4 != 2) {
          if (lVar4 == 0) goto LAB_101741870;
          goto LAB_1017416d0;
        }
        goto LAB_1017417d4;
      }
      goto LAB_101741834;
    }
    if (bVar1 == 0xc) {
      psVar9 = *(short **)(in_stack_00000228 + in_stack_000000c8 + 0x50);
      lVar4 = *(long *)(in_stack_00000228 + in_stack_000000c8 + 0x58);
      goto LAB_1017417b8;
    }
LAB_101742700:
    in_stack_000000c8 = in_stack_00000228 + in_stack_000000c8 + 0x40;
LAB_1017422ec:
    lVar14 = FUN_108876268(in_stack_000000c8,unaff_x29 + -0xa0,&UNK_10b256658);
    goto LAB_101740ddc;
  }
  cVar2 = *(char *)(in_stack_00000228 + in_stack_000000c8 + 0x41);
  if (cVar2 != '\x01') {
    if (cVar2 != '\x02') {
      if (cVar2 != '\0') goto LAB_1017416d0;
LAB_101741870:
      in_stack_000001c0 = &UNK_108ce0324;
      in_stack_000001c8 = 3;
      *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
      *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
      lVar14 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
      goto LAB_101740ddc;
    }
LAB_1017417d4:
    if (uVar12 != 0x8000000000000000) goto LAB_1017421d8;
    FUN_10176936c(unaff_x29 + -0xe0,lVar14 + 0x60);
    uVar12 = *(ulong *)(unaff_x29 + -0xe0);
    unaff_x21 = *(long *)(unaff_x29 + -0xd8);
    if (uVar12 == 0x8000000000000000) goto LAB_1017418a8;
    unaff_x25 = *(ulong *)(unaff_x29 + -0xd0);
LAB_1017416d0:
    in_stack_000000c8 = in_stack_000000c8 + 0x40;
    goto joined_r0x0001017410a0;
  }
LAB_101741834:
  if (uVar15 == 4) {
    FUN_1017690c4(unaff_x29 + -0xe0,lVar14 + 0x60);
    if ((*(byte *)(unaff_x29 + -0xe0) & 1) == 0) {
      uVar15 = (uint)*(byte *)(unaff_x29 + -0xdf);
      goto LAB_1017416d0;
    }
LAB_101741910:
    lVar14 = *(long *)(unaff_x29 + -0xd8);
  }
  else {
LAB_101742318:
    in_stack_000001c0 = &UNK_108ce0327;
    in_stack_000001c8 = 3;
    *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
    *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
    lVar14 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  }
  goto LAB_101740ddc;
LAB_101741918:
  unaff_x19 = 0x746b;
  if (uVar15 == 4) {
    in_stack_000001c0 = &UNK_108ce0327;
    in_stack_000001c8 = 3;
    *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
    *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
    lVar14 = FUN_108876314(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
    goto LAB_101740ddc;
  }
  if (uVar12 != 0x8000000000000000) {
    uVar13 = 0;
    uVar5 = 0x8000000000000002;
    goto LAB_1017415fc;
  }
  in_stack_000001c0 = &UNK_108ce032a;
  in_stack_000001c8 = 1;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  unaff_x21 = FUN_108876314(s_missing_field_____108ac28f7,unaff_x29 + -0xe0);
  goto LAB_1017418a8;
LAB_1017421d8:
  in_stack_000001c0 = &UNK_108ce032a;
  in_stack_000001c8 = 1;
  *(undefined ***)(unaff_x29 + -0xe0) = &stack0x000001c0;
  *(undefined **)(unaff_x29 + -0xd8) = &DAT_101744cb8;
  lVar14 = FUN_108876314(s_duplicate_field_____108ac2973,unaff_x29 + -0xe0);
  lVar4 = unaff_x21;
  goto joined_r0x00010174220c;
}

