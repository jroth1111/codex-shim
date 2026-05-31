
void FUN_100f84634(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  uint uVar25;
  long unaff_x21;
  long lVar26;
  undefined8 uVar27;
  ulong unaff_x25;
  uint unaff_w27;
  long lVar28;
  long unaff_x29;
  undefined8 uVar29;
  undefined8 in_stack_00000068;
  long *in_stack_00000080;
  long *in_stack_00000088;
  undefined8 *in_stack_00000090;
  long *in_stack_000000a0;
  long *in_stack_000000a8;
  undefined8 *in_stack_000000b0;
  long *in_stack_000000b8;
  long *in_stack_000000c0;
  long *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined *in_stack_000000d8;
  long in_stack_000000e0;
  undefined *in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined *in_stack_000000f8;
  long in_stack_00000128;
  long in_stack_00000130;
  long in_stack_00000138;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x90,s__108acc73f,&stack0x000000c0);
  if (in_stack_000000a0 != (long *)0x0) {
    _free(in_stack_000000a8);
  }
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  lVar17 = in_stack_00000138;
  if (in_stack_00000138 == in_stack_00000128) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000128);
  }
  puVar18 = (undefined8 *)(in_stack_00000130 + lVar17 * 0x18);
  uVar29 = *(undefined8 *)(unaff_x29 + -0x90);
  puVar18[1] = *(undefined8 *)(unaff_x29 + -0x88);
  *puVar18 = uVar29;
  puVar18[2] = *(undefined8 *)(unaff_x29 + -0x80);
  in_stack_00000138 = lVar17 + 1;
  if (*(long *)(unaff_x29 + -0xd0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -200));
  }
  FUN_100f8a990(&stack0x000000c0);
  lVar17 = in_stack_00000138;
  puVar18 = in_stack_000000d0;
  plVar23 = in_stack_000000c8;
  plVar20 = in_stack_000000c0;
  if (in_stack_000000c0 != (long *)0x8000000000000000) {
    if (in_stack_00000138 == in_stack_00000128) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000128);
    }
    puVar19 = (undefined8 *)(in_stack_00000130 + lVar17 * 0x18);
    *puVar19 = plVar20;
    puVar19[1] = plVar23;
    puVar19[2] = puVar18;
    in_stack_00000138 = lVar17 + 1;
  }
  FUN_100f8a990(unaff_x29 + -0x70);
  if (*(long *)(unaff_x29 + -0x70) != -0x8000000000000000) {
    in_stack_000000c8 = *(long **)(unaff_x29 + -0x68);
    in_stack_000000c0 = *(long **)(unaff_x29 + -0x70);
    in_stack_000000d0 = *(undefined8 **)(unaff_x29 + -0x60);
    *(long ***)(unaff_x29 + -0x90) = &stack0x000000c0;
    *(undefined **)(unaff_x29 + -0x88) = &DAT_10112965c;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000000a0,s_TERM__108ad589c,unaff_x29 + -0x90);
    lVar17 = in_stack_00000138;
    if (in_stack_00000138 == in_stack_00000128) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000128);
    }
    puVar18 = (undefined8 *)(in_stack_00000130 + lVar17 * 0x18);
    puVar18[1] = in_stack_000000a8;
    *puVar18 = in_stack_000000a0;
    puVar18[2] = in_stack_000000b0;
    in_stack_00000138 = lVar17 + 1;
    if (in_stack_000000c0 != (long *)0x0) {
      _free(in_stack_000000c8);
    }
  }
  if (in_stack_00000138 == 0) {
    func_0x000100025ae8(&stack0x00000080,unaff_x21 + 0x30);
  }
  else {
    FUN_100f3f514(&stack0x000000c0,in_stack_00000130,in_stack_00000138,&UNK_108cde4d0,4);
    in_stack_00000088 = in_stack_000000c8;
    in_stack_00000080 = in_stack_000000c0;
    in_stack_00000090 = in_stack_000000d0;
  }
  lVar17 = in_stack_00000130;
  if (in_stack_00000138 != 0) {
    puVar18 = (undefined8 *)(in_stack_00000130 + 8);
    lVar24 = in_stack_00000138;
    do {
      if (puVar18[-1] != 0) {
        _free(*puVar18);
      }
      puVar18 = puVar18 + 3;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  if (in_stack_00000128 != 0) {
    _free(lVar17);
  }
  if ((*(long *)(unaff_x21 + 0x28) == 10) &&
     (((short)(*(long **)(unaff_x21 + 0x20))[1] == 0x7265 &&
      **(long **)(unaff_x21 + 0x20) == 0x767265732d707061) && unaff_w27 == 0)) {
    if (*(long *)(unaff_x21 + 0x58) != 0) {
      lVar17 = *(long *)(unaff_x21 + 0x58) * 0x18;
      plVar20 = (long *)(*(long *)(unaff_x21 + 0x50) + 0x10);
      do {
        if ((*plVar20 == 0x13) &&
           (plVar23 = (long *)plVar20[-1],
           (*plVar23 == 0x203a737574617473 && plVar23[1] == 0x6e6e757220746f6e) &&
           *(long *)((long)plVar23 + 0xb) == 0x676e696e6e757220)) {
          uVar25 = 5;
          goto LAB_100f83704;
        }
        plVar20 = plVar20 + 3;
        lVar17 = lVar17 + -0x18;
      } while (lVar17 != 0);
    }
    uVar25 = 0;
  }
  else {
    uVar25 = 0x40300 >> (ulong)((unaff_w27 & 3) << 3);
  }
LAB_100f83704:
  FUN_100f869e4(unaff_x29 + -0x70,uVar25,unaff_x25);
  plVar20 = in_stack_00000088;
  FUN_100f866a0(&stack0x000000c0,in_stack_00000088,in_stack_00000090,unaff_x25);
  plVar23 = in_stack_000000c8;
  if ((uVar25 & 0xff) < 2) {
    if ((uVar25 & 0xff) == 0) goto LAB_100f83758;
    FUN_100f8ca60(&stack0x000000a0,in_stack_000000c8,in_stack_000000d0,0xdc,unaff_x25);
  }
  else {
    if ((uVar25 & 0xff) - 2 < 3) {
      in_stack_000000a8 = in_stack_000000c8;
      in_stack_000000a0 = in_stack_000000c0;
      in_stack_000000b0 = in_stack_000000d0;
      goto LAB_100f83798;
    }
LAB_100f83758:
    FUN_100f87414(&stack0x000000a0,in_stack_000000c8,in_stack_000000d0,unaff_x25);
  }
  if (in_stack_000000c0 != (long *)0x0) {
    _free(plVar23);
  }
LAB_100f83798:
  in_stack_000000d0 = (undefined8 *)(unaff_x21 + 0x18);
  in_stack_000000c0 = (long *)(unaff_x29 + -0x70);
  in_stack_000000c8 = (long *)&DAT_10112965c;
  in_stack_000000d8 = &DAT_10112965c;
  in_stack_000000e0 = 0;
  in_stack_000000e8 = (undefined *)CONCAT62(in_stack_000000e8._2_6_,0xc);
  in_stack_000000f0 = &stack0x000000a0;
  in_stack_000000f8 = &DAT_10112965c;
  __ZN4core3fmt5write17h64810b21425781ecE
            (in_stack_00000068,&UNK_10b209290,&UNK_108cc8dea,&stack0x000000c0);
  if (in_stack_000000a0 != (long *)0x0) {
    _free(in_stack_000000a8);
  }
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  if ((unaff_x25 & 1) != 0) {
    FUN_100f87e6c(&stack0x000000c0);
    plVar12 = in_stack_000000c8;
    puVar18 = in_stack_000000c0;
    plVar21 = in_stack_000000c8 + (long)in_stack_000000d0 * 9;
    in_stack_000000a0 = in_stack_000000c8;
    in_stack_000000a8 = in_stack_000000c8;
    in_stack_000000b0 = in_stack_000000c0;
    plVar23 = in_stack_000000c8;
    in_stack_000000b8 = plVar21;
    if (in_stack_000000d0 == (undefined8 *)0x0) {
LAB_100f83d38:
      in_stack_000000a8 = plVar23;
      if ((long)plVar21 - (long)plVar23 != 0) {
        uVar22 = (ulong)((long)plVar21 - (long)plVar23) / 0x48;
        do {
          lVar17 = *plVar23;
          if ((lVar17 + 0x8000000000000001U & lVar17 >> 0x3f) == 0) {
            if (lVar17 != 0) {
              _free(plVar23[1]);
            }
            if (plVar23[3] != 0) {
              _free(plVar23[4]);
            }
            if ((plVar23[6] & 0x7fffffffffffffffU) != 0) {
              lVar17 = 0x38;
              goto LAB_100f83d68;
            }
          }
          else if (plVar23[1] != 0) {
            lVar17 = 0x10;
LAB_100f83d68:
            _free(*(undefined8 *)((long)plVar23 + lVar17));
          }
          plVar23 = plVar23 + 9;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
    }
    else {
      bVar14 = (unaff_x25 & 0x10000) == 0;
      uVar29 = 2;
      if (bVar14) {
        uVar29 = 3;
      }
      puVar3 = &UNK_108cc8e27;
      if (!bVar14) {
        puVar3 = &UNK_108cc8e2a;
      }
      puVar1 = &UNK_108cb17f8;
      uVar2 = 1;
      if (bVar14) {
        uVar2 = 2;
        puVar1 = &UNK_108cc8e25;
      }
      puVar4 = &UNK_108cc8c8f;
      if (!bVar14) {
        puVar4 = &UNK_108cc8c92;
      }
      uVar5 = 3;
      plVar11 = in_stack_000000c8;
      if (!bVar14) {
        uVar5 = 1;
      }
      do {
        plVar23 = plVar11 + 9;
        lVar17 = *plVar11;
        if (lVar17 == -0x7ffffffffffffffd) goto LAB_100f83d38;
        lVar24 = plVar11[1];
        lVar8 = plVar11[2];
        lVar28 = plVar11[3];
        uVar22 = lVar17 + 0x8000000000000001U & lVar17 >> 0x3f;
        if ((long)uVar22 < 2) {
          if (uVar22 == 0) {
            lVar6 = plVar11[4];
            lVar9 = plVar11[5];
            lVar7 = plVar11[6];
            lVar10 = plVar11[7];
            lVar26 = plVar11[8];
            in_stack_000000c0 = &stack0x00000128;
            in_stack_000000c8 = (long *)&DAT_10112965c;
            in_stack_000000d0 = (undefined8 *)0x0;
            in_stack_000000d8 = (undefined *)CONCAT62(in_stack_000000d8._2_6_,0x18);
            in_stack_00000128 = lVar17;
            in_stack_00000130 = lVar24;
            in_stack_00000138 = lVar8;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0x70,&UNK_108c985b8,&stack0x000000c0);
            lVar17 = *(long *)(unaff_x29 + -0x70);
            uVar16 = *(undefined8 *)(unaff_x29 + -0x68);
            uVar27 = *(undefined8 *)(unaff_x29 + -0x60);
            if (lVar7 == -0x8000000000000000) {
              FUN_100f81c2c(unaff_x29 + -0xf0,lVar6,lVar9,unaff_x25);
              puVar15 = (undefined1 *)_malloc(1);
              if (puVar15 == (undefined1 *)0x0) {
                in_stack_000000a8 = plVar23;
                func_0x0001087c9084(1,1);
                goto LAB_100f84aec;
              }
              *puVar15 = 0x20;
              *(undefined8 *)(unaff_x29 + -0x90) = 1;
              *(undefined1 **)(unaff_x29 + -0x88) = puVar15;
              *(undefined8 *)(unaff_x29 + -0x80) = 1;
            }
            else {
              *(long *)(unaff_x29 + -0xd0) = lVar7;
              *(long *)(unaff_x29 + -200) = lVar10;
              *(long *)(unaff_x29 + -0xc0) = lVar26;
              FUN_100f81c2c(unaff_x29 + -0x90,lVar6,lVar9,unaff_x25);
              *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xd0;
              *(undefined **)(unaff_x29 + -0x68) = &DAT_10112965c;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x000000c0,s__expected___108ad58c2,unaff_x29 + -0x70);
              plVar11 = in_stack_000000c8;
              puVar19 = in_stack_000000c0;
              FUN_100f87414(unaff_x29 + -0x70,in_stack_000000c8,in_stack_000000d0,unaff_x25);
              in_stack_000000c0 = (long *)(unaff_x29 + -0x90);
              in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x70);
              in_stack_000000c8 = (long *)&DAT_10112965c;
              in_stack_000000d8 = &DAT_10112965c;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0xb0,s__108acc73f,&stack0x000000c0);
              if (*(long *)(unaff_x29 + -0x70) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x68));
              }
              if (puVar19 != (undefined8 *)0x0) {
                _free(plVar11);
              }
              if (*(long *)(unaff_x29 + -0x90) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x88));
              }
              *(undefined8 *)(unaff_x29 + -0xe8) = *(undefined8 *)(unaff_x29 + -0xa8);
              *(undefined8 *)(unaff_x29 + -0xf0) = *(undefined8 *)(unaff_x29 + -0xb0);
              *(undefined8 *)(unaff_x29 + -0xe0) = *(undefined8 *)(unaff_x29 + -0xa0);
              if (*(long *)(unaff_x29 + -0xd0) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -200));
              }
              FUN_100f8ca60(unaff_x29 + -0x90,puVar4,uVar5,0xd6,unaff_x25);
            }
            FUN_100f8ca60(unaff_x29 + -0x70,uVar16,uVar27,0xf0,unaff_x25);
            in_stack_000000c0 = (long *)(unaff_x29 + -0x90);
            in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x70);
            in_stack_000000c8 = (long *)&DAT_10112965c;
            in_stack_000000e0 = unaff_x29 + -0xf0;
            in_stack_000000d8 = &DAT_10112965c;
            in_stack_000000e8 = &DAT_10112965c;
            __ZN4core3fmt5write17h64810b21425781ecE
                      (in_stack_00000068,&UNK_10b209290,s__108ad58d1,&stack0x000000c0);
            if (*(long *)(unaff_x29 + -0x70) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x68));
            }
            if (*(long *)(unaff_x29 + -0x90) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x88));
            }
            if (*(long *)(unaff_x29 + -0xf0) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0xe8));
            }
            if (lVar17 != 0) {
              _free(uVar16);
            }
            lVar8 = in_stack_00000130;
            lVar24 = in_stack_00000128;
            if (lVar28 != 0) {
              _free(lVar6);
              lVar8 = in_stack_00000130;
              lVar24 = in_stack_00000128;
            }
          }
          else {
            puVar19 = (undefined8 *)_malloc(0x18);
            if (puVar19 == (undefined8 *)0x0) {
              in_stack_000000a8 = plVar23;
              func_0x0001087c9084(1,0x18);
LAB_100f84aec:
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100f84af0);
              (*pcVar13)();
            }
            *puVar19 = 0x2020202020202020;
            puVar19[1] = 0x2020202020202020;
            puVar19[2] = 0x2020202020202020;
            FUN_100f8ca60(unaff_x29 + -0x90,puVar19,0x18,0xf0,unaff_x25);
            FUN_100f81c2c(unaff_x29 + -0x70,lVar8,lVar28,unaff_x25);
            in_stack_000000c0 = (long *)(unaff_x29 + -0x90);
            in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x70);
            in_stack_000000c8 = (long *)&DAT_10112965c;
            in_stack_000000d8 = &DAT_10112965c;
            __ZN4core3fmt5write17h64810b21425781ecE
                      (in_stack_00000068,&UNK_10b209290,s__108ad58e0,&stack0x000000c0);
            if (*(long *)(unaff_x29 + -0x70) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x68));
            }
            if (*(long *)(unaff_x29 + -0x90) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x88));
            }
            _free(puVar19);
          }
        }
        else if (uVar22 == 2) {
          FUN_100f8ca60(unaff_x29 + -0xb0,puVar1,uVar2,0xee,unaff_x25);
          FUN_100f866a0(unaff_x29 + -0x70,lVar8,lVar28,unaff_x25);
          uVar16 = *(undefined8 *)(unaff_x29 + -0x68);
          FUN_100f87414(unaff_x29 + -0x90,uVar16,*(undefined8 *)(unaff_x29 + -0x60),unaff_x25);
          in_stack_000000c0 = (long *)(unaff_x29 + -0xb0);
          in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x90);
          in_stack_000000c8 = (long *)&DAT_10112965c;
          in_stack_000000d8 = &DAT_10112965c;
          __ZN4core3fmt5write17h64810b21425781ecE
                    (in_stack_00000068,&UNK_10b209290,s__108ad58ee,&stack0x000000c0);
          if (*(long *)(unaff_x29 + -0x90) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x88));
          }
          if (*(long *)(unaff_x29 + -0x70) != 0) {
            _free(uVar16);
          }
          if (*(long *)(unaff_x29 + -0xb0) != 0) {
            uVar16 = *(undefined8 *)(unaff_x29 + -0xa8);
LAB_100f83b78:
            _free(uVar16);
          }
        }
        else {
          FUN_100f8ca60(unaff_x29 + -0x90,puVar3,uVar29,0xd6,unaff_x25);
          FUN_100f866a0(unaff_x29 + -0x70,lVar8,lVar28,unaff_x25);
          in_stack_000000c0 = (long *)(unaff_x29 + -0x90);
          in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x70);
          in_stack_000000c8 = (long *)&DAT_10112965c;
          in_stack_000000d8 = &DAT_10112965c;
          __ZN4core3fmt5write17h64810b21425781ecE
                    (in_stack_00000068,&UNK_10b209290,s__108ad58ee,&stack0x000000c0);
          if (*(long *)(unaff_x29 + -0x70) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x68));
          }
          if (*(long *)(unaff_x29 + -0x90) != 0) {
            uVar16 = *(undefined8 *)(unaff_x29 + -0x88);
            goto LAB_100f83b78;
          }
        }
        if (lVar24 != 0) {
          _free(lVar8);
        }
        plVar11 = plVar23;
      } while (plVar23 != plVar21);
    }
    if (puVar18 != (undefined8 *)0x0) {
      _free(plVar12);
    }
  }
  if (in_stack_00000080 != (long *)0x0) {
    _free(plVar20);
  }
  return;
}

