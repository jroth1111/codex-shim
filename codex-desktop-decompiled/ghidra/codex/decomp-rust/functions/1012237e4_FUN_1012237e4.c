
void FUN_1012237e4(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  ulong *puVar12;
  byte *unaff_x19;
  long lVar13;
  undefined8 *unaff_x20;
  long lVar14;
  char *unaff_x21;
  char *pcVar15;
  undefined8 *puVar16;
  ulong uVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *unaff_x24;
  undefined8 *unaff_x25;
  uint unaff_w27;
  byte *pbVar20;
  long unaff_x29;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte *in_stack_00000008;
  long *in_stack_00000010;
  long in_stack_00000020;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  char *in_stack_00000048;
  byte *in_stack_00000050;
  byte *in_stack_00000058;
  char *in_stack_00000068;
  byte *in_stack_00000080;
  long in_stack_00000088;
  long in_stack_00000090;
  long in_stack_00000098;
  char in_stack_000000a0;
  byte *in_stack_000000a8;
  byte *in_stack_000000b0;
  long in_stack_000000b8;
  char cStack00000000000000c0;
  undefined7 uStack00000000000000c1;
  byte *in_stack_000000c8;
  byte *in_stack_000000d0;
  byte *in_stack_000000d8;
  byte *in_stack_000000e0;
  byte *in_stack_000000e8;
  byte *in_stack_000000f0;
  byte *in_stack_000000f8;
  long in_stack_00000100;
  
code_r0x0001012237e4:
  pbVar10 = (byte *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
LAB_1012237f4:
  FUN_100d34830(&stack0x000000e0);
  if (cStack00000000000000c0 != '\x16') {
    FUN_100e077ec(&stack0x000000c0);
  }
  uVar17 = 0x8000000000000000;
  pcVar15 = unaff_x21;
  if ((unaff_w27 & 0x1e) != 0x14) {
    uVar17 = 0x8000000000000000;
    FUN_100e077ec(&stack0x000000a0);
  }
LAB_101223888:
  do {
    lVar13 = in_stack_00000098;
    if ((long)uVar17 < -0x7ffffffffffffffe) {
      *in_stack_00000010 = -0x8000000000000000;
      in_stack_00000010[1] = (long)pbVar10;
      in_stack_00000080 = unaff_x19;
      unaff_x21 = pcVar15;
      in_stack_00000068 = pcVar15;
      lVar14 = in_stack_00000090;
joined_r0x0001012239d8:
      in_stack_00000090 = lVar14;
      in_stack_00000098 = lVar13;
      if (lVar13 != 0) {
        puVar16 = (undefined8 *)(lVar14 + 8);
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 3;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      if (in_stack_00000088 != 0) {
        _free(lVar14);
      }
LAB_101223a3c:
      lVar13 = ((ulong)((long)in_stack_00000048 - (long)unaff_x21) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(unaff_x21);
        unaff_x21 = unaff_x21 + 0x20;
      }
joined_r0x000101223ac8:
      if (in_stack_00000020 != 0) {
        _free(in_stack_00000030);
      }
      return;
    }
    if (in_stack_00000098 == in_stack_00000088) {
      func_0x0001088bac74(&stack0x00000088);
    }
    pbVar19 = in_stack_000000b0;
    pbVar18 = in_stack_000000a8;
    puVar12 = (ulong *)(in_stack_00000090 + lVar13 * 0x18);
    *puVar12 = uVar17;
    puVar12[1] = (ulong)pbVar10;
    puVar12[2] = (ulong)unaff_x24;
    in_stack_00000098 = lVar13 + 1;
    unaff_x21 = in_stack_00000048;
    pbVar10 = in_stack_00000008;
    if (pcVar15 == in_stack_00000048) {
LAB_101223a0c:
      in_stack_00000010[1] = in_stack_00000090;
      *in_stack_00000010 = in_stack_00000088;
      in_stack_00000010[2] = in_stack_00000098;
      lVar13 = *in_stack_00000010;
      in_stack_00000068 = unaff_x21;
      in_stack_00000080 = pbVar10;
      if (lVar13 == -0x8000000000000000) goto LAB_101223a3c;
      in_stack_00000030 = in_stack_00000010[1];
      lVar14 = in_stack_00000010[2];
      lVar11 = FUN_100fbc738(&stack0x00000060);
      if (lVar11 == 0) {
        return;
      }
      *in_stack_00000010 = -0x8000000000000000;
      in_stack_00000010[1] = lVar11;
      in_stack_00000020 = lVar13;
      if (lVar14 != 0) {
        puVar16 = (undefined8 *)(in_stack_00000030 + 8);
        do {
          if (puVar16[-1] != 0) {
            _free(*puVar16);
          }
          puVar16 = puVar16 + 3;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      goto joined_r0x000101223ac8;
    }
    unaff_x21 = pcVar15 + 0x20;
    cVar6 = *pcVar15;
    pbVar10 = unaff_x19;
    if (cVar6 == '\x16') goto LAB_101223a0c;
    uVar22 = *(undefined8 *)(pcVar15 + 9);
    uVar21 = *(undefined8 *)(pcVar15 + 1);
    uVar23 = *(undefined8 *)(pcVar15 + 0x10);
    *(undefined8 *)((long)in_stack_00000040 + 0x17) = *(undefined8 *)(pcVar15 + 0x18);
    *(undefined8 *)((long)in_stack_00000040 + 0xf) = uVar23;
    in_stack_00000040[1] = uVar22;
    *in_stack_00000040 = uVar21;
    unaff_x19 = unaff_x19 + 1;
    pcVar15 = unaff_x21;
    in_stack_000000a0 = cVar6;
    if (cVar6 != '\x14') {
      if (cVar6 != '\x15') {
        in_stack_00000068 = unaff_x21;
        in_stack_00000080 = unaff_x19;
        lVar13 = FUN_108855b04(&stack0x000000a0,unaff_x29 + -0x90,&UNK_10b20b280);
        *in_stack_00000010 = -0x8000000000000000;
        in_stack_00000010[1] = lVar13;
        lVar14 = in_stack_00000090;
        lVar13 = in_stack_00000098;
        goto joined_r0x0001012239d8;
      }
      lVar13 = in_stack_000000b8 * 0x40;
      pbVar18 = in_stack_000000b0 + lVar13;
      in_stack_000000e0 = in_stack_000000b0;
      in_stack_000000e8 = in_stack_000000b0;
      in_stack_000000f0 = in_stack_000000a8;
      _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
      in_stack_00000100 = 0;
      unaff_w27 = 0x15;
      pbVar19 = unaff_x24;
      in_stack_000000f8 = pbVar18;
      if (in_stack_000000b8 != 0) {
        lVar14 = 0;
        uVar17 = 0x8000000000000000;
        pbVar10 = in_stack_000000b0;
        do {
          unaff_x24 = pbVar10 + 0x40;
          bVar5 = *pbVar10;
          pbVar19 = unaff_x24;
          lVar11 = lVar14;
          if (bVar5 == 0x16) break;
          *(byte *)(unaff_x29 + -0x78) = bVar5;
          uVar21 = *(undefined8 *)(pbVar10 + 0x10);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(pbVar10 + 0x18);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
          uVar21 = *(undefined8 *)(pbVar10 + 1);
          unaff_x20[1] = *(undefined8 *)(pbVar10 + 9);
          *unaff_x20 = uVar21;
          in_stack_000000c8 = *(byte **)(pbVar10 + 0x28);
          _cStack00000000000000c0 = *(byte **)(pbVar10 + 0x20);
          in_stack_000000d8 = *(byte **)(pbVar10 + 0x38);
          in_stack_000000d0 = *(byte **)(pbVar10 + 0x30);
          piVar2 = *(int **)(unaff_x29 + -0x70);
          piVar3 = *(int **)(unaff_x29 + -0x68);
          if (bVar5 < 0xd) {
            if (bVar5 != 1) {
              if (bVar5 == 4) {
                bVar8 = piVar2 == (int *)0x0;
                goto LAB_101223594;
              }
              if (bVar5 == 0xc) {
                if (*(long *)(unaff_x29 + -0x60) == 4) {
                  iVar4 = *piVar3;
                  if (piVar2 != (int *)0x0) {
                    _free();
                  }
                  unaff_x25 = in_stack_00000038;
                  if (iVar4 == 0x656d616e) goto LAB_10122360c;
                }
                else if (piVar2 != (int *)0x0) {
                  _free();
                }
                goto LAB_1012235ac;
              }
LAB_101223944:
              in_stack_00000100 = lVar14 + 1;
              in_stack_000000e8 = unaff_x24;
              pbVar10 = (byte *)FUN_108855b04(unaff_x29 + -0x78,unaff_x29 + -0x90,&UNK_10b211ba0);
              uVar17 = uVar17 & 0x7fffffffffffffff;
              goto joined_r0x000101223970;
            }
            bVar8 = *(char *)(unaff_x29 + -0x77) == '\0';
LAB_101223594:
            bVar8 = !bVar8;
LAB_1012235a0:
            FUN_100e077ec(unaff_x29 + -0x78);
LAB_1012235a8:
            if (!bVar8) goto LAB_10122360c;
LAB_1012235ac:
            cVar6 = cStack00000000000000c0;
            _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
            if (cVar6 == '\x16') {
              in_stack_00000100 = lVar14 + 1;
              in_stack_00000068 = unaff_x21;
              in_stack_00000080 = unaff_x19;
              in_stack_000000e8 = unaff_x24;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_101223bc8;
            }
            uVar21 = *unaff_x25;
            unaff_x20[1] = unaff_x25[1];
            *unaff_x20 = uVar21;
            uVar21 = *(undefined8 *)((long)unaff_x25 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x25 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
            *(char *)(unaff_x29 + -0x78) = cVar6;
            FUN_100e077ec(unaff_x29 + -0x78);
          }
          else {
            if (bVar5 == 0xd) {
              if (piVar3 == (int *)0x4) {
                bVar8 = *piVar2 == 0x656d616e;
                goto LAB_101223594;
              }
LAB_10122359c:
              bVar8 = true;
              goto LAB_1012235a0;
            }
            if (bVar5 != 0xe) {
              if (bVar5 != 0xf) goto LAB_101223944;
              if ((((piVar3 != (int *)0x4) || ((char)*piVar2 != 'n')) ||
                  (*(char *)((long)piVar2 + 1) != 'a')) || (*(char *)((long)piVar2 + 2) != 'm'))
              goto LAB_10122359c;
              bVar8 = *(char *)((long)piVar2 + 3) == 'e';
              goto LAB_101223594;
            }
            if (((*(long *)(unaff_x29 + -0x60) == 4) && ((char)*piVar3 == 'n')) &&
               ((*(char *)((long)piVar3 + 1) == 'a' && (*(char *)((long)piVar3 + 2) == 'm')))) {
              bVar8 = *(char *)((long)piVar3 + 3) != 'e';
            }
            else {
              bVar8 = true;
            }
            if (piVar2 == (int *)0x0) goto LAB_1012235a8;
            _free();
            if (bVar8) goto LAB_1012235ac;
LAB_10122360c:
            if (uVar17 != 0x8000000000000000) {
              in_stack_00000100 = lVar14 + 1;
              *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61018;
              *(undefined8 *)(unaff_x29 + -0x88) = 4;
              *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
              *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
              in_stack_000000e8 = unaff_x24;
              pbVar10 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0x78);
joined_r0x000101223970:
              if (uVar17 != 0) {
                _free(in_stack_00000058);
              }
              goto LAB_1012237f4;
            }
            cVar6 = cStack00000000000000c0;
            _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
            if (cVar6 == '\x16') {
              in_stack_00000100 = lVar14 + 1;
              in_stack_00000068 = unaff_x21;
              in_stack_00000080 = unaff_x19;
              in_stack_000000e8 = unaff_x24;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_101223bc8:
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x101223bcc);
              (*pcVar7)();
            }
            uVar21 = *unaff_x25;
            unaff_x20[1] = unaff_x25[1];
            *unaff_x20 = uVar21;
            uVar21 = *(undefined8 *)((long)unaff_x25 + 0xf);
            *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x25 + 0x17);
            *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
            *(char *)(unaff_x29 + -0x78) = cVar6;
            FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
            uVar17 = *(ulong *)(unaff_x29 + -0x90);
            pbVar10 = *(byte **)(unaff_x29 + -0x88);
            in_stack_00000058 = pbVar10;
            if (uVar17 == 0x8000000000000000) {
              in_stack_00000100 = lVar14 + 1;
              in_stack_000000e8 = unaff_x24;
              goto LAB_1012237f4;
            }
            in_stack_00000050 = *(byte **)(unaff_x29 + -0x80);
          }
          lVar14 = lVar14 + 1;
          pbVar19 = pbVar18;
          lVar11 = (lVar13 - 0x40U >> 6) + 1;
          pbVar10 = unaff_x24;
        } while (unaff_x24 != pbVar18);
        in_stack_000000e8 = pbVar19;
        in_stack_00000100 = lVar11;
        if (uVar17 != 0x8000000000000000) {
          FUN_100d34830(&stack0x000000e0);
          unaff_x24 = in_stack_00000050;
          pbVar10 = in_stack_00000058;
          if (pbVar18 != pbVar19) {
            *(long *)(unaff_x29 + -0x78) = lVar11;
            pbVar10 = (byte *)FUN_1087e422c(((ulong)((long)pbVar18 - (long)pbVar19) >> 6) + lVar11,
                                            unaff_x29 + -0x78,&UNK_10b23a190);
            if (uVar17 != 0) {
              _free(in_stack_00000058);
            }
            uVar17 = 0x8000000000000000;
          }
          goto LAB_101223888;
        }
      }
      *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61018;
      *(undefined8 *)(unaff_x29 + -0x88) = 4;
      *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
      *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
      param_2 = unaff_x29 + -0x78;
      unaff_x24 = pbVar19;
      goto code_r0x0001012237e4;
    }
    pbVar1 = in_stack_000000b0 + in_stack_000000b8 * 0x20;
    _cStack00000000000000c0 = in_stack_000000b0;
    in_stack_000000d0 = in_stack_000000a8;
    in_stack_000000e0 = (byte *)0x0;
    pbVar20 = in_stack_000000b0;
    in_stack_00000058 = unaff_x19;
    in_stack_000000d8 = pbVar1;
    if (in_stack_000000b8 == 0) {
LAB_1012236ac:
      in_stack_000000c8 = pbVar20;
      pbVar9 = (byte *)FUN_1087e422c(0,&UNK_10b231788,&UNK_10b20a590);
LAB_1012236c8:
      lVar13 = ((ulong)((long)pbVar1 - (long)pbVar20) >> 5) + 1;
      while (lVar13 = lVar13 + -1, lVar13 != 0) {
        FUN_100e077ec(pbVar20);
        pbVar20 = pbVar20 + 0x20;
      }
      unaff_x25 = in_stack_00000038;
      pbVar10 = pbVar19;
      if (pbVar18 != (byte *)0x0) goto LAB_1012236f8;
      uVar17 = 0x8000000000000000;
      unaff_x24 = pbVar18;
      pbVar10 = pbVar9;
    }
    else {
      pbVar20 = in_stack_000000b0 + 0x20;
      bVar5 = *in_stack_000000b0;
      if (bVar5 == 0x16) goto LAB_1012236ac;
      uVar21 = *(undefined8 *)(in_stack_000000b0 + 1);
      unaff_x20[1] = *(undefined8 *)(in_stack_000000b0 + 9);
      *unaff_x20 = uVar21;
      uVar21 = *(undefined8 *)(in_stack_000000b0 + 0x10);
      *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)(in_stack_000000b0 + 0x18);
      *(undefined8 *)((long)unaff_x20 + 0xf) = uVar21;
      in_stack_000000e0 = (byte *)0x1;
      *(byte *)(unaff_x29 + -0x78) = bVar5;
      in_stack_000000c8 = pbVar20;
      FUN_1004b62d4(unaff_x29 + -0x90,unaff_x29 + -0x78);
      uVar17 = *(ulong *)(unaff_x29 + -0x90);
      pbVar10 = *(byte **)(unaff_x29 + -0x88);
      pbVar9 = pbVar10;
      if (uVar17 == 0x8000000000000000) goto LAB_1012236c8;
      pbVar18 = *(byte **)(unaff_x29 + -0x80);
      pbVar9 = (byte *)FUN_100fbc738(&stack0x000000c0);
      unaff_x24 = pbVar18;
      if (pbVar9 != (byte *)0x0) {
        if (uVar17 == 0) {
          uVar17 = 0x8000000000000000;
          pbVar10 = pbVar9;
        }
        else {
LAB_1012236f8:
          _free(pbVar10);
          uVar17 = 0x8000000000000000;
          unaff_x24 = pbVar18;
          pbVar10 = pbVar9;
        }
      }
    }
  } while( true );
}

