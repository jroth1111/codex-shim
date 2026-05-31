
void FUN_101443e04(undefined8 param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  char cVar8;
  long lVar9;
  code *pcVar10;
  bool bVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 *unaff_x19;
  byte *pbVar16;
  byte *unaff_x20;
  byte *pbVar17;
  byte *unaff_x21;
  long lVar18;
  ulong unaff_x24;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x28;
  long unaff_x29;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long in_stack_00000000;
  byte *in_stack_00000010;
  ulong *in_stack_00000018;
  byte *in_stack_00000020;
  byte *in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  byte *in_stack_00000048;
  byte *in_stack_00000050;
  undefined8 *in_stack_00000058;
  byte *in_stack_00000068;
  long in_stack_00000080;
  byte *in_stack_00000088;
  byte *in_stack_00000090;
  byte *in_stack_00000098;
  byte in_stack_000000a0;
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
  
code_r0x000101443e04:
  pbVar13 = (byte *)FUN_108856088(s_duplicate_field_____108ac2973,param_2);
  unaff_x24 = unaff_x24 & 0x7fffffffffffffff;
joined_r0x000101443e20:
  if (unaff_x24 != 0) {
    _free(in_stack_00000050);
  }
LAB_101443d98:
  FUN_100d34830(&stack0x000000e0);
  if (cStack00000000000000c0 != '\x16') {
    FUN_100e077ec(&stack0x000000c0);
  }
  uVar19 = 0x8000000000000001;
  pbVar17 = unaff_x21;
  pbVar20 = unaff_x28;
  while( true ) {
    if ((in_stack_00000040._4_1_ & 0x1e) != 0x14) {
      FUN_100e077ec(&stack0x000000a0);
    }
    pbVar16 = in_stack_00000098;
    unaff_x21 = pbVar17;
    lVar18 = in_stack_00000030;
    pbVar12 = in_stack_00000090;
    if (uVar19 + 0x7fffffffffffffff < 2) break;
    if (in_stack_00000098 == in_stack_00000088) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h4a4d38ddd142ec51E(&stack0x00000088);
    }
    pbVar7 = in_stack_000000b0;
    pbVar6 = in_stack_000000a8;
    pbVar12 = in_stack_00000090;
    pbVar5 = in_stack_00000088;
    puVar15 = (ulong *)(in_stack_00000090 + (long)pbVar16 * 0x18);
    *puVar15 = uVar19;
    puVar15[1] = (ulong)pbVar13;
    puVar15[2] = (ulong)pbVar20;
    pbVar16 = pbVar16 + 1;
    unaff_x21 = unaff_x20;
    lVar18 = in_stack_00000000;
    in_stack_00000098 = pbVar16;
    if (pbVar17 == unaff_x20) {
LAB_101443f18:
      in_stack_000000c8 = in_stack_00000090;
      _cStack00000000000000c0 = in_stack_00000088;
      in_stack_00000068 = unaff_x21;
      in_stack_00000080 = lVar18;
      in_stack_000000d0 = pbVar16;
      if (in_stack_00000088 == (byte *)0x8000000000000000) goto LAB_101443f44;
      pbVar13 = (byte *)FUN_100fbc738(&stack0x00000060);
      if (pbVar13 == (byte *)0x0) {
        in_stack_00000018[1] = (ulong)in_stack_000000c8;
        *in_stack_00000018 = (ulong)_cStack00000000000000c0;
        in_stack_00000018[2] = (ulong)in_stack_000000d0;
        return;
      }
      in_stack_00000020 = pbVar12;
      in_stack_000000c8 = pbVar13;
      in_stack_00000010 = pbVar5;
      if (pbVar16 != (byte *)0x0) {
        pbVar12 = pbVar12 + 8;
        do {
          if ((*(ulong *)(pbVar12 + -8) & 0x7fffffffffffffff) != 0) {
            _free(*(undefined8 *)pbVar12);
          }
          pbVar12 = pbVar12 + 0x18;
          pbVar16 = pbVar16 + -1;
        } while (pbVar16 != (byte *)0x0);
      }
      goto joined_r0x000101443ff8;
    }
    unaff_x21 = pbVar17 + 0x20;
    in_stack_00000040._4_1_ = *pbVar17;
    lVar18 = in_stack_00000030;
    if (in_stack_00000040._4_1_ == 0x16) goto LAB_101443f18;
    uVar22 = *(undefined8 *)(pbVar17 + 9);
    uVar21 = *(undefined8 *)(pbVar17 + 1);
    uVar23 = *(undefined8 *)(pbVar17 + 0x10);
    *(undefined8 *)((long)in_stack_00000038 + 0x17) = *(undefined8 *)(pbVar17 + 0x18);
    *(undefined8 *)((long)in_stack_00000038 + 0xf) = uVar23;
    in_stack_00000038[1] = uVar22;
    *in_stack_00000038 = uVar21;
    in_stack_00000030 = in_stack_00000030 + 1;
    pbVar17 = unaff_x21;
    in_stack_000000a0 = in_stack_00000040._4_1_;
    if (in_stack_00000040._4_1_ == 0x14) {
      pbVar16 = in_stack_000000b0 + in_stack_000000b8 * 0x20;
      _cStack00000000000000c0 = in_stack_000000b0;
      in_stack_000000d0 = in_stack_000000a8;
      in_stack_000000e0 = (byte *)0x0;
      pbVar20 = in_stack_000000b0;
      in_stack_000000d8 = pbVar16;
      if (in_stack_000000b8 == 0) {
LAB_101443be8:
        in_stack_000000c8 = pbVar20;
        pbVar12 = (byte *)FUN_1087e422c(0,&UNK_10b224290,&UNK_10b20a590);
LAB_101443c08:
        lVar18 = ((ulong)((long)pbVar16 - (long)pbVar20) >> 5) + 1;
        while (lVar18 = lVar18 + -1, lVar18 != 0) {
          FUN_100e077ec(pbVar20);
          pbVar20 = pbVar20 + 0x20;
        }
        pbVar13 = pbVar7;
        if (pbVar6 != (byte *)0x0) goto LAB_101443c3c;
        uVar19 = 0x8000000000000001;
        pbVar13 = pbVar12;
      }
      else {
        pbVar20 = in_stack_000000b0 + 0x20;
        bVar4 = *in_stack_000000b0;
        if (bVar4 == 0x16) goto LAB_101443be8;
        uVar21 = *(undefined8 *)(in_stack_000000b0 + 1);
        unaff_x19[1] = *(undefined8 *)(in_stack_000000b0 + 9);
        *unaff_x19 = uVar21;
        uVar21 = *(undefined8 *)(in_stack_000000b0 + 0x10);
        *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(in_stack_000000b0 + 0x18);
        *(undefined8 *)((long)unaff_x19 + 0xf) = uVar21;
        in_stack_000000e0 = (byte *)0x1;
        *(byte *)(unaff_x29 + -0x78) = bVar4;
        in_stack_000000c8 = pbVar20;
        FUN_1004b60cc(unaff_x29 + -0x90,unaff_x29 + -0x78);
        uVar19 = *(ulong *)(unaff_x29 + -0x90);
        pbVar13 = *(byte **)(unaff_x29 + -0x88);
        pbVar12 = pbVar13;
        if (uVar19 == 0x8000000000000001) goto LAB_101443c08;
        pbVar20 = *(byte **)(unaff_x29 + -0x80);
        pbVar12 = (byte *)FUN_100fbc738(&stack0x000000c0);
        if (pbVar12 != (byte *)0x0) {
          if ((uVar19 & 0x7fffffffffffffff) == 0) {
            uVar19 = 0x8000000000000001;
            pbVar13 = pbVar12;
          }
          else {
LAB_101443c3c:
            _free(pbVar13);
            uVar19 = 0x8000000000000001;
            pbVar13 = pbVar12;
          }
        }
      }
    }
    else {
      if (in_stack_00000040._4_1_ != 0x15) {
        in_stack_00000068 = unaff_x21;
        in_stack_00000080 = in_stack_00000030;
        pbVar13 = (byte *)FUN_108855b04(&stack0x000000a0,unaff_x29 + -0x90,&UNK_10b20c880);
        pbVar17 = in_stack_00000068;
        lVar18 = in_stack_00000080;
        pbVar12 = in_stack_00000090;
        pbVar16 = in_stack_00000098;
        break;
      }
      lVar14 = in_stack_000000b8 * 0x40;
      unaff_x28 = in_stack_000000b0 + lVar14;
      in_stack_000000e0 = in_stack_000000b0;
      in_stack_000000e8 = in_stack_000000b0;
      in_stack_000000f0 = in_stack_000000a8;
      _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
      in_stack_00000100 = 0;
      lVar18 = 0;
      in_stack_000000f8 = unaff_x28;
      if (in_stack_000000b8 == 0) {
        unaff_x24 = 0x8000000000000001;
        pbVar16 = in_stack_000000b0;
        lVar9 = in_stack_00000100;
      }
      else {
        unaff_x24 = 0x8000000000000001;
        pbVar13 = in_stack_000000b0;
        do {
          pbVar20 = pbVar13 + 0x40;
          bVar4 = *pbVar13;
          pbVar16 = pbVar20;
          lVar9 = lVar18;
          if (bVar4 == 0x16) break;
          *(byte *)(unaff_x29 + -0x78) = bVar4;
          uVar21 = *(undefined8 *)(pbVar13 + 0x10);
          *(undefined8 *)((long)unaff_x19 + 0x17) = *(undefined8 *)(pbVar13 + 0x18);
          *(undefined8 *)((long)unaff_x19 + 0xf) = uVar21;
          uVar21 = *(undefined8 *)(pbVar13 + 1);
          unaff_x19[1] = *(undefined8 *)(pbVar13 + 9);
          *unaff_x19 = uVar21;
          in_stack_000000c8 = *(byte **)(pbVar13 + 0x28);
          _cStack00000000000000c0 = *(byte **)(pbVar13 + 0x20);
          in_stack_000000d8 = *(byte **)(pbVar13 + 0x38);
          in_stack_000000d0 = *(byte **)(pbVar13 + 0x30);
          piVar1 = *(int **)(unaff_x29 + -0x70);
          piVar2 = *(int **)(unaff_x29 + -0x68);
          if (bVar4 < 0xd) {
            if (bVar4 == 1) {
              bVar11 = *(char *)(unaff_x29 + -0x77) == '\0';
LAB_101443ad8:
              bVar11 = !bVar11;
LAB_101443ae4:
              FUN_100e077ec(unaff_x29 + -0x78);
LAB_101443aec:
              if (!bVar11) goto LAB_101443b54;
            }
            else {
              if (bVar4 == 4) {
                bVar11 = piVar1 == (int *)0x0;
                goto LAB_101443ad8;
              }
              if (bVar4 != 0xc) {
LAB_101443e28:
                in_stack_00000100 = lVar18 + 1;
                in_stack_000000e8 = pbVar20;
                pbVar13 = (byte *)FUN_108855b04(unaff_x29 + -0x78,unaff_x29 + -0x90,&UNK_10b20e180);
                if ((long)unaff_x24 < -0x7ffffffffffffffe) goto LAB_101443d98;
                goto joined_r0x000101443e20;
              }
              if (*(long *)(unaff_x29 + -0x60) == 4) {
                iVar3 = *piVar2;
                if (piVar1 != (int *)0x0) {
                  _free();
                }
                unaff_x20 = in_stack_00000028;
                if (iVar3 == 0x656d616e) goto LAB_101443b54;
              }
              else if (piVar1 != (int *)0x0) {
                _free();
              }
            }
LAB_101443af0:
            cVar8 = cStack00000000000000c0;
            _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
            if (cVar8 == '\x16') {
              in_stack_00000100 = lVar18 + 1;
              in_stack_00000068 = unaff_x21;
              in_stack_00000080 = in_stack_00000030;
              in_stack_000000e8 = pbVar20;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
LAB_1014440e8:
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1014440ec);
              (*pcVar10)();
            }
            uVar21 = *in_stack_00000058;
            unaff_x19[1] = in_stack_00000058[1];
            *unaff_x19 = uVar21;
            uVar21 = *(undefined8 *)((long)in_stack_00000058 + 0xf);
            *(undefined8 *)((long)unaff_x19 + 0x17) =
                 *(undefined8 *)((long)in_stack_00000058 + 0x17);
            *(undefined8 *)((long)unaff_x19 + 0xf) = uVar21;
            *(char *)(unaff_x29 + -0x78) = cVar8;
            FUN_100e077ec(unaff_x29 + -0x78);
          }
          else {
            if (bVar4 == 0xd) {
              if (piVar2 == (int *)0x4) {
                bVar11 = *piVar1 == 0x656d616e;
                goto LAB_101443ad8;
              }
LAB_101443ae0:
              bVar11 = true;
              goto LAB_101443ae4;
            }
            if (bVar4 != 0xe) {
              if (bVar4 != 0xf) goto LAB_101443e28;
              if ((((piVar2 != (int *)0x4) || ((char)*piVar1 != 'n')) ||
                  (*(char *)((long)piVar1 + 1) != 'a')) || (*(char *)((long)piVar1 + 2) != 'm'))
              goto LAB_101443ae0;
              bVar11 = *(char *)((long)piVar1 + 3) == 'e';
              goto LAB_101443ad8;
            }
            if (((*(long *)(unaff_x29 + -0x60) == 4) && ((char)*piVar2 == 'n')) &&
               ((*(char *)((long)piVar2 + 1) == 'a' && (*(char *)((long)piVar2 + 2) == 'm')))) {
              bVar11 = *(char *)((long)piVar2 + 3) != 'e';
            }
            else {
              bVar11 = true;
            }
            if (piVar1 == (int *)0x0) goto LAB_101443aec;
            _free();
            if (bVar11) goto LAB_101443af0;
LAB_101443b54:
            if (unaff_x24 != 0x8000000000000001) {
              in_stack_00000100 = lVar18 + 1;
              *(undefined **)(unaff_x29 + -0x90) = &UNK_108c61018;
              *(undefined8 *)(unaff_x29 + -0x88) = 4;
              *(long *)(unaff_x29 + -0x78) = unaff_x29 + -0x90;
              *(undefined **)(unaff_x29 + -0x70) = &DAT_100c7b3a0;
              param_2 = unaff_x29 + -0x78;
              in_stack_000000e8 = pbVar20;
              goto code_r0x000101443e04;
            }
            cVar8 = cStack00000000000000c0;
            _cStack00000000000000c0 = (byte *)CONCAT71(uStack00000000000000c1,0x16);
            if (cVar8 == '\x16') {
              in_stack_00000100 = lVar18 + 1;
              in_stack_00000068 = unaff_x21;
              in_stack_00000080 = in_stack_00000030;
              in_stack_000000e8 = pbVar20;
              func_0x000108a079f0(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
              goto LAB_1014440e8;
            }
            uVar21 = *in_stack_00000058;
            unaff_x19[1] = in_stack_00000058[1];
            *unaff_x19 = uVar21;
            uVar21 = *(undefined8 *)((long)in_stack_00000058 + 0xf);
            *(undefined8 *)((long)unaff_x19 + 0x17) =
                 *(undefined8 *)((long)in_stack_00000058 + 0x17);
            *(undefined8 *)((long)unaff_x19 + 0xf) = uVar21;
            *(char *)(unaff_x29 + -0x78) = cVar8;
            FUN_1004b60cc(unaff_x29 + -0x90,unaff_x29 + -0x78);
            unaff_x24 = *(ulong *)(unaff_x29 + -0x90);
            pbVar13 = *(byte **)(unaff_x29 + -0x88);
            in_stack_00000050 = pbVar13;
            if (unaff_x24 == 0x8000000000000001) {
              in_stack_00000100 = lVar18 + 1;
              in_stack_000000e8 = pbVar20;
              goto LAB_101443d98;
            }
            in_stack_00000048 = *(byte **)(unaff_x29 + -0x80);
          }
          lVar18 = lVar18 + 1;
          pbVar16 = unaff_x28;
          pbVar13 = pbVar20;
          lVar9 = (lVar14 - 0x40U >> 6) + 1;
        } while (pbVar20 != unaff_x28);
      }
      in_stack_00000100 = lVar9;
      lVar18 = in_stack_00000100;
      uVar19 = 0x8000000000000000;
      if (unaff_x24 != 0x8000000000000001) {
        uVar19 = unaff_x24;
      }
      in_stack_000000e8 = pbVar16;
      FUN_100d34830(&stack0x000000e0);
      pbVar13 = in_stack_00000050;
      pbVar20 = in_stack_00000048;
      if (unaff_x28 != pbVar16) {
        *(long *)(unaff_x29 + -0x78) = lVar18;
        pbVar13 = (byte *)FUN_1087e422c(((ulong)((long)unaff_x28 - (long)pbVar16) >> 6) + lVar18,
                                        unaff_x29 + -0x78,&UNK_10b23a190);
        if ((uVar19 & 0x7fffffffffffffff) != 0) {
          _free(in_stack_00000050);
        }
        uVar19 = 0x8000000000000001;
      }
    }
  }
  in_stack_00000080 = lVar18;
  in_stack_000000c8 = pbVar13;
  in_stack_00000068 = pbVar17;
  in_stack_00000090 = pbVar12;
  in_stack_00000098 = pbVar16;
  if (pbVar16 != (byte *)0x0) {
    pbVar13 = pbVar12 + 8;
    do {
      if ((*(ulong *)(pbVar13 + -8) & 0x7fffffffffffffff) != 0) {
        _free(*(undefined8 *)pbVar13);
      }
      pbVar13 = pbVar13 + 0x18;
      pbVar16 = pbVar16 + -1;
    } while (pbVar16 != (byte *)0x0);
  }
  unaff_x20 = in_stack_00000028;
  if (in_stack_00000088 != (byte *)0x0) {
    _free(pbVar12);
  }
LAB_101443f44:
  lVar18 = ((ulong)((long)unaff_x20 - (long)unaff_x21) >> 5) + 1;
  while (lVar18 = lVar18 + -1, lVar18 != 0) {
    FUN_100e077ec(unaff_x21);
    unaff_x21 = unaff_x21 + 0x20;
  }
joined_r0x000101443ff8:
  if (in_stack_00000010 != (byte *)0x0) {
    _free(in_stack_00000020);
  }
  *in_stack_00000018 = 0x8000000000000001;
  in_stack_00000018[1] = (ulong)in_stack_000000c8;
  return;
}

