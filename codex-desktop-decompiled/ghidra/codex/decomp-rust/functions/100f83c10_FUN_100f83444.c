
void FUN_100f83444(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  bool bVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  undefined8 unaff_x19;
  uint uVar26;
  long unaff_x21;
  ulong unaff_x24;
  long lVar27;
  undefined8 uVar28;
  uint unaff_w27;
  long lVar29;
  long unaff_x29;
  undefined8 in_stack_00000068;
  long in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
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
            (&stack0x00000080,s__108ac137a,&stack0x000000c0);
  if ((*(long *)(unaff_x21 + 0x28) == 10) &&
     (((short)(*(long **)(unaff_x21 + 0x20))[1] == 0x7265 &&
      **(long **)(unaff_x21 + 0x20) == 0x767265732d707061) && unaff_w27 == 0)) {
    if (*(long *)(unaff_x21 + 0x58) != 0) {
      lVar21 = *(long *)(unaff_x21 + 0x58) * 0x18;
      plVar22 = (long *)(*(long *)(unaff_x21 + 0x50) + 0x10);
      do {
        if ((*plVar22 == 0x13) &&
           (plVar25 = (long *)plVar22[-1],
           (*plVar25 == 0x203a737574617473 && plVar25[1] == 0x6e6e757220746f6e) &&
           *(long *)((long)plVar25 + 0xb) == 0x676e696e6e757220)) {
          uVar26 = 5;
          goto LAB_100f83704;
        }
        plVar22 = plVar22 + 3;
        lVar21 = lVar21 + -0x18;
      } while (lVar21 != 0);
    }
    uVar26 = 0;
  }
  else {
    uVar26 = 0x40300 >> (ulong)((unaff_w27 & 3) << 3);
  }
LAB_100f83704:
  FUN_100f869e4(unaff_x29 + -0x70,uVar26);
  uVar14 = in_stack_00000088;
  FUN_100f866a0(&stack0x000000c0,in_stack_00000088,in_stack_00000090);
  plVar22 = in_stack_000000c8;
  if ((uVar26 & 0xff) < 2) {
    if ((uVar26 & 0xff) == 0) goto LAB_100f83758;
    FUN_100f8ca60(&stack0x000000a0,in_stack_000000c8,in_stack_000000d0,0xdc);
  }
  else {
    if ((uVar26 & 0xff) - 2 < 3) {
      in_stack_000000a8 = in_stack_000000c8;
      in_stack_000000a0 = in_stack_000000c0;
      in_stack_000000b0 = in_stack_000000d0;
      goto LAB_100f83798;
    }
LAB_100f83758:
    FUN_100f87414(&stack0x000000a0,in_stack_000000c8,in_stack_000000d0);
  }
  if (in_stack_000000c0 != (long *)0x0) {
    _free(plVar22);
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
  __ZN4core3fmt5write17h64810b21425781ecE();
  if (in_stack_000000a0 != (long *)0x0) {
    _free(in_stack_000000a8);
  }
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  if ((unaff_x24 & 1) != 0) {
    FUN_100f87e6c(&stack0x000000c0);
    plVar25 = in_stack_000000c8;
    puVar15 = in_stack_000000c0;
    plVar23 = in_stack_000000c8 + (long)in_stack_000000d0 * 9;
    in_stack_000000a0 = in_stack_000000c8;
    in_stack_000000a8 = in_stack_000000c8;
    in_stack_000000b0 = in_stack_000000c0;
    plVar22 = in_stack_000000c8;
    in_stack_000000b8 = plVar23;
    if (in_stack_000000d0 == (undefined8 *)0x0) {
LAB_100f83d38:
      in_stack_000000a8 = plVar22;
      if ((long)plVar23 - (long)plVar22 != 0) {
        uVar24 = (ulong)((long)plVar23 - (long)plVar22) / 0x48;
        do {
          lVar21 = *plVar22;
          if ((lVar21 + 0x8000000000000001U & lVar21 >> 0x3f) == 0) {
            if (lVar21 != 0) {
              _free(plVar22[1]);
            }
            if (plVar22[3] != 0) {
              _free(plVar22[4]);
            }
            if ((plVar22[6] & 0x7fffffffffffffffU) != 0) {
              lVar21 = 0x38;
              goto LAB_100f83d68;
            }
          }
          else if (plVar22[1] != 0) {
            lVar21 = 0x10;
LAB_100f83d68:
            _free(*(undefined8 *)((long)plVar22 + lVar21));
          }
          plVar22 = plVar22 + 9;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
    }
    else {
      bVar17 = (unaff_x24 & 0x10000) == 0;
      uVar2 = 2;
      if (bVar17) {
        uVar2 = 3;
      }
      puVar4 = &UNK_108cc8e27;
      if (!bVar17) {
        puVar4 = &UNK_108cc8e2a;
      }
      puVar1 = &UNK_108cb17f8;
      uVar3 = 1;
      if (bVar17) {
        uVar3 = 2;
        puVar1 = &UNK_108cc8e25;
      }
      puVar5 = &UNK_108cc8c8f;
      if (!bVar17) {
        puVar5 = &UNK_108cc8c92;
      }
      uVar6 = 3;
      plVar13 = in_stack_000000c8;
      if (!bVar17) {
        uVar6 = 1;
      }
      do {
        plVar22 = plVar13 + 9;
        lVar21 = *plVar13;
        if (lVar21 == -0x7ffffffffffffffd) goto LAB_100f83d38;
        lVar7 = plVar13[1];
        lVar10 = plVar13[2];
        lVar29 = plVar13[3];
        uVar24 = lVar21 + 0x8000000000000001U & lVar21 >> 0x3f;
        if ((long)uVar24 < 2) {
          if (uVar24 == 0) {
            lVar8 = plVar13[4];
            lVar11 = plVar13[5];
            lVar9 = plVar13[6];
            lVar12 = plVar13[7];
            lVar27 = plVar13[8];
            in_stack_000000c0 = &stack0x00000128;
            in_stack_000000c8 = (long *)&DAT_10112965c;
            in_stack_000000d0 = (undefined8 *)0x0;
            in_stack_000000d8 = (undefined *)CONCAT62(in_stack_000000d8._2_6_,0x18);
            in_stack_00000128 = lVar21;
            in_stack_00000130 = lVar7;
            in_stack_00000138 = lVar10;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (unaff_x29 + -0x70,&UNK_108c985b8,&stack0x000000c0);
            lVar21 = *(long *)(unaff_x29 + -0x70);
            uVar19 = *(undefined8 *)(unaff_x29 + -0x68);
            uVar28 = *(undefined8 *)(unaff_x29 + -0x60);
            if (lVar9 == -0x8000000000000000) {
              FUN_100f81c2c(unaff_x29 + -0xf0,lVar8,lVar11,unaff_x24);
              puVar18 = (undefined1 *)_malloc(1);
              if (puVar18 == (undefined1 *)0x0) {
                in_stack_000000a8 = plVar22;
                func_0x0001087c9084(1,1);
                goto LAB_100f84aec;
              }
              *puVar18 = 0x20;
              *(undefined8 *)(unaff_x29 + -0x90) = 1;
              *(undefined1 **)(unaff_x29 + -0x88) = puVar18;
              *(undefined8 *)(unaff_x29 + -0x80) = 1;
            }
            else {
              *(long *)(unaff_x29 + -0xd0) = lVar9;
              *(long *)(unaff_x29 + -200) = lVar12;
              *(long *)(unaff_x29 + -0xc0) = lVar27;
              FUN_100f81c2c(unaff_x29 + -0x90,lVar8,lVar11,unaff_x24);
              *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0xd0;
              *(undefined **)(unaff_x29 + -0x68) = &DAT_10112965c;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x000000c0,s__expected___108ad58c2,unaff_x29 + -0x70);
              plVar13 = in_stack_000000c8;
              puVar20 = in_stack_000000c0;
              FUN_100f87414(unaff_x29 + -0x70,in_stack_000000c8,in_stack_000000d0,unaff_x24);
              in_stack_000000c0 = (long *)(unaff_x29 + -0x90);
              in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x70);
              in_stack_000000c8 = (long *)&DAT_10112965c;
              in_stack_000000d8 = &DAT_10112965c;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (unaff_x29 + -0xb0,s__108acc73f,&stack0x000000c0);
              if (*(long *)(unaff_x29 + -0x70) != 0) {
                _free(*(undefined8 *)(unaff_x29 + -0x68));
              }
              if (puVar20 != (undefined8 *)0x0) {
                _free(plVar13);
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
              FUN_100f8ca60(unaff_x29 + -0x90,puVar5,uVar6,0xd6,unaff_x24);
            }
            FUN_100f8ca60(unaff_x29 + -0x70,uVar19,uVar28,0xf0,unaff_x24);
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
            if (lVar21 != 0) {
              _free(uVar19);
            }
            lVar10 = in_stack_00000130;
            unaff_x19 = in_stack_00000068;
            lVar7 = in_stack_00000128;
            if (lVar29 != 0) {
              _free(lVar8);
              lVar10 = in_stack_00000130;
              lVar7 = in_stack_00000128;
            }
          }
          else {
            puVar20 = (undefined8 *)_malloc(0x18);
            if (puVar20 == (undefined8 *)0x0) {
              in_stack_000000a8 = plVar22;
              func_0x0001087c9084(1,0x18);
LAB_100f84aec:
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x100f84af0);
              (*pcVar16)();
            }
            *puVar20 = 0x2020202020202020;
            puVar20[1] = 0x2020202020202020;
            puVar20[2] = 0x2020202020202020;
            FUN_100f8ca60(unaff_x29 + -0x90,puVar20,0x18,0xf0,unaff_x24);
            FUN_100f81c2c(unaff_x29 + -0x70,lVar10,lVar29,unaff_x24);
            in_stack_000000c0 = (long *)(unaff_x29 + -0x90);
            in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x70);
            in_stack_000000c8 = (long *)&DAT_10112965c;
            in_stack_000000d8 = &DAT_10112965c;
            __ZN4core3fmt5write17h64810b21425781ecE
                      (unaff_x19,&UNK_10b209290,s__108ad58e0,&stack0x000000c0);
            if (*(long *)(unaff_x29 + -0x70) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x68));
            }
            if (*(long *)(unaff_x29 + -0x90) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -0x88));
            }
            _free(puVar20);
          }
        }
        else if (uVar24 == 2) {
          FUN_100f8ca60(unaff_x29 + -0xb0,puVar1,uVar3,0xee,unaff_x24);
          FUN_100f866a0(unaff_x29 + -0x70,lVar10,lVar29,unaff_x24);
          uVar19 = *(undefined8 *)(unaff_x29 + -0x68);
          FUN_100f87414(unaff_x29 + -0x90,uVar19,*(undefined8 *)(unaff_x29 + -0x60),unaff_x24);
          in_stack_000000c0 = (long *)(unaff_x29 + -0xb0);
          in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x90);
          in_stack_000000c8 = (long *)&DAT_10112965c;
          in_stack_000000d8 = &DAT_10112965c;
          __ZN4core3fmt5write17h64810b21425781ecE
                    (unaff_x19,&UNK_10b209290,s__108ad58ee,&stack0x000000c0);
          if (*(long *)(unaff_x29 + -0x90) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x88));
          }
          if (*(long *)(unaff_x29 + -0x70) != 0) {
            _free(uVar19);
          }
          if (*(long *)(unaff_x29 + -0xb0) != 0) {
            uVar19 = *(undefined8 *)(unaff_x29 + -0xa8);
LAB_100f83b78:
            _free(uVar19);
          }
        }
        else {
          FUN_100f8ca60(unaff_x29 + -0x90,puVar4,uVar2,0xd6,unaff_x24);
          FUN_100f866a0(unaff_x29 + -0x70,lVar10,lVar29,unaff_x24);
          in_stack_000000c0 = (long *)(unaff_x29 + -0x90);
          in_stack_000000d0 = (undefined8 *)(unaff_x29 + -0x70);
          in_stack_000000c8 = (long *)&DAT_10112965c;
          in_stack_000000d8 = &DAT_10112965c;
          __ZN4core3fmt5write17h64810b21425781ecE
                    (unaff_x19,&UNK_10b209290,s__108ad58ee,&stack0x000000c0);
          if (*(long *)(unaff_x29 + -0x70) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0x68));
          }
          if (*(long *)(unaff_x29 + -0x90) != 0) {
            uVar19 = *(undefined8 *)(unaff_x29 + -0x88);
            goto LAB_100f83b78;
          }
        }
        if (lVar7 != 0) {
          _free(lVar10);
        }
        plVar13 = plVar22;
      } while (plVar22 != plVar23);
    }
    if (puVar15 != (undefined8 *)0x0) {
      _free(plVar25);
    }
  }
  if (in_stack_00000080 != 0) {
    _free(uVar14);
  }
  return;
}

