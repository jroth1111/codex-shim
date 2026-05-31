
undefined1  [16] FUN_100f5f41c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x23;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x27;
  long lVar16;
  long unaff_x29;
  undefined1 *in_stack_00000018;
  int in_stack_00000070;
  long in_stack_00000080;
  int in_stack_00000088;
  int in_stack_00000090;
  undefined4 in_stack_00000098;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000130;
  long *in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000210;
  long in_stack_00000218;
  long in_stack_00000220;
  long in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  long in_stack_00000260;
  long in_stack_00000268;
  long in_stack_00000270;
  long in_stack_00000410;
  long *in_stack_00000418;
  
  __ZN4core3fmt5write17h64810b21425781ecE(unaff_x29 + -0xa0,param_2,s__108ac265a,&stack0x00000410);
  if (in_stack_00000260 != 0) {
    _free(in_stack_00000268);
  }
  _free();
  FUN_100f85140(&stack0x00000210,&stack0x000000c0);
  if (in_stack_00000080 == 0) {
    lVar16 = 0;
    lVar15 = 0;
    lVar14 = 0;
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    lVar14 = 0;
    lVar15 = 0;
    lVar16 = 0;
    do {
      if (*(long *)(unaff_x27 + 0x28) == 10) {
        cVar2 = *(char *)(unaff_x27 + 0x98);
        if ((**(long **)(unaff_x27 + 0x20) != 0x767265732d707061 ||
            (short)(*(long **)(unaff_x27 + 0x20))[1] != 0x7265) || cVar2 != '\0')
        goto LAB_100f5f560;
        if (*(long *)(unaff_x27 + 0x58) != 0) {
          lVar8 = *(long *)(unaff_x27 + 0x58) * 0x18;
          plVar6 = (long *)(*(long *)(unaff_x27 + 0x50) + 0x10);
          do {
            if ((*plVar6 == 0x13) &&
               (plVar9 = (long *)plVar6[-1],
               (*plVar9 == 0x203a737574617473 && plVar9[1] == 0x6e6e757220746f6e) &&
               *(long *)((long)plVar9 + 0xb) == 0x676e696e6e757220)) {
              lVar15 = lVar15 + 1;
              goto LAB_100f5f4bc;
            }
            plVar6 = plVar6 + 3;
            lVar8 = lVar8 + -0x18;
          } while (lVar8 != 0);
        }
LAB_100f5f4b8:
        lVar16 = lVar16 + 1;
      }
      else {
        cVar2 = *(char *)(unaff_x27 + 0x98);
LAB_100f5f560:
        if (cVar2 == '\0') goto LAB_100f5f4b8;
        if (cVar2 == '\x01') {
          lVar14 = lVar14 + 1;
        }
        else {
          lVar11 = lVar11 + 1;
        }
      }
LAB_100f5f4bc:
      unaff_x27 = unaff_x27 + 0xa0;
    } while (unaff_x27 != unaff_x23);
  }
  puVar1 = &UNK_108cde4d0;
  if (in_stack_00000088 != 0) {
    puVar1 = &UNK_108cc8be9;
  }
  uVar13 = 3;
  if (in_stack_00000088 == 0) {
    uVar13 = 4;
  }
  FUN_100f87414(&stack0x00000240,puVar1,uVar13,in_stack_00000098);
  bVar3 = in_stack_00000108._4_1_;
  uVar13 = *(undefined8 *)(&UNK_10b253ff8 + (ulong)in_stack_00000108._4_1_ * 8);
  lVar8 = *(long *)(&UNK_108cdaa38 + (ulong)in_stack_00000108._4_1_ * 8);
  plVar6 = (long *)_malloc(0x18);
  if (plVar6 == (long *)0x0) {
    func_0x0001087c906c(8,0x18);
  }
  else {
    FUN_100f818a0(&stack0x00000260,lVar16,&UNK_108cb53e5,2,0,in_stack_00000098);
    plVar6[1] = in_stack_00000268;
    *plVar6 = in_stack_00000260;
    plVar6[2] = in_stack_00000270;
    in_stack_00000130 = 1;
    in_stack_00000140 = 1;
    in_stack_00000138 = plVar6;
    if (lVar15 != 0) {
      FUN_100f818a0(&stack0x00000260,lVar15,&UNK_108cde46c,4,5,in_stack_00000098);
      lVar16 = in_stack_00000140;
      if (in_stack_00000140 == in_stack_00000130) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000130);
      }
      plVar6 = in_stack_00000138 + lVar16 * 3;
      plVar6[1] = in_stack_00000268;
      *plVar6 = in_stack_00000260;
      plVar6[2] = in_stack_00000270;
      in_stack_00000140 = lVar16 + 1;
    }
    if (in_stack_00000220 != 0) {
      FUN_100f818a0(&stack0x00000260,in_stack_00000220,&UNK_108cc7f9d,5,2,in_stack_00000098);
      lVar16 = in_stack_00000140;
      if (in_stack_00000140 == in_stack_00000130) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000130);
      }
      plVar6 = in_stack_00000138 + lVar16 * 3;
      plVar6[1] = in_stack_00000268;
      *plVar6 = in_stack_00000260;
      plVar6[2] = in_stack_00000270;
      in_stack_00000140 = lVar16 + 1;
    }
    FUN_100f818a0(&stack0x00000260,lVar14,&UNK_108cde4d4,4,3,in_stack_00000098);
    lVar16 = in_stack_00000140;
    if (in_stack_00000140 == in_stack_00000130) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000130);
    }
    plVar6 = in_stack_00000138 + lVar16 * 3;
    plVar6[1] = in_stack_00000268;
    *plVar6 = in_stack_00000260;
    plVar6[2] = in_stack_00000270;
    in_stack_00000140 = lVar16 + 1;
    FUN_100f818a0(&stack0x00000260,lVar11,&UNK_108cde4c0,4,4,in_stack_00000098);
    lVar16 = in_stack_00000140;
    if (in_stack_00000140 == in_stack_00000130) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000130);
    }
    plVar6 = in_stack_00000138 + lVar16 * 3;
    plVar6[1] = in_stack_00000268;
    *plVar6 = in_stack_00000260;
    plVar6[2] = in_stack_00000270;
    in_stack_00000140 = lVar16 + 1;
    FUN_100f3f514(&stack0x00000260,in_stack_00000138,in_stack_00000140,in_stack_00000248,
                  in_stack_00000250);
    if (in_stack_00000090 == 0) {
      plVar6 = (long *)_malloc(lVar8);
      if (plVar6 == (long *)0x0) {
        func_0x0001087c9084(1,lVar8);
        goto LAB_100f60484;
      }
      _memcpy(plVar6,uVar13,lVar8);
    }
    else {
      if (bVar3 == 2) {
        FUN_108855060(&stack0x00000410,0,4,1,1);
        uRam0000000000000001 = 0x6d315b1b;
        uVar7 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca75a7,5);
        if (((((uVar7 & 1) != 0) ||
             (uVar7 = func_0x0001055b8dfc(&stack0x00000260,uVar13,lVar8), (uVar7 & 1) != 0)) ||
            (uVar7 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca7598,5), (uVar7 & 1) != 0)) ||
           (iVar5 = FUN_100f1c4e0(&stack0x00000410,&UNK_108c96800,4), iVar5 != 0)) {
          func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000004e0,&UNK_10b235000,&UNK_10b2346c0);
          goto LAB_100f60484;
        }
      }
      else if (bVar3 == 1) {
        FUN_108855060(&stack0x00000410,0,4,1,1);
        uRam0000000000000001 = 0x6d315b1b;
        uVar7 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca75a2,5);
        if ((((uVar7 & 1) != 0) ||
            (uVar7 = func_0x0001055b8dfc(&stack0x00000260,uVar13,lVar8), (uVar7 & 1) != 0)) ||
           ((uVar7 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca7598,5), (uVar7 & 1) != 0 ||
            (iVar5 = FUN_100f1c4e0(&stack0x00000410,&UNK_108c96800,4), iVar5 != 0)))) {
          func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000004e0,&UNK_10b235000,&UNK_10b2346c0);
          goto LAB_100f60484;
        }
      }
      else {
        FUN_108855060(&stack0x00000410,0,4,1,1);
        uRam0000000000000001 = 0x6d315b1b;
        uVar7 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca759d,5);
        if ((((uVar7 & 1) != 0) ||
            (uVar7 = func_0x0001055b8dfc(&stack0x00000260,uVar13,lVar8), (uVar7 & 1) != 0)) ||
           ((uVar7 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca7598,5), (uVar7 & 1) != 0 ||
            (iVar5 = FUN_100f1c4e0(&stack0x00000410,&UNK_108c96800,4), iVar5 != 0)))) {
          func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000004e0,&UNK_10b235000,&UNK_10b2346c0);
          goto LAB_100f60484;
        }
      }
      in_stack_00000418 = (long *)0x1;
      in_stack_00000410 = 0;
      lVar8 = in_stack_00000410;
      plVar6 = in_stack_00000418;
    }
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000410,s__108acc73f,&stack0x00000260);
    if (lVar8 != 0) {
      _free(plVar6);
    }
    if (in_stack_00000260 != 0) {
      _free(in_stack_00000268);
    }
    plVar9 = in_stack_00000138;
    if (in_stack_00000140 != 0) {
      plVar12 = in_stack_00000138 + 1;
      lVar16 = in_stack_00000140;
      do {
        if (plVar12[-1] != 0) {
          _free(*plVar12);
        }
        plVar12 = plVar12 + 3;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if (in_stack_00000130 != 0) {
      _free(plVar9);
    }
    if (in_stack_00000240 != 0) {
      _free(in_stack_00000248);
    }
    if (in_stack_00000220 != 0) {
      puVar10 = (undefined8 *)(in_stack_00000218 + 0x20);
      do {
        if (puVar10[-4] != 0) {
          _free(puVar10[-3]);
        }
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 7;
        in_stack_00000220 = in_stack_00000220 + -1;
      } while (in_stack_00000220 != 0);
    }
    if (in_stack_00000210 != 0) {
      _free(in_stack_00000218);
    }
    __ZN4core3fmt5write17h64810b21425781ecE
              (unaff_x29 + -0xa0,&UNK_10b209290,s__108ac265a,&stack0x00000260);
    if (in_stack_00000410 != 0) {
      _free(in_stack_00000418);
    }
    lVar15 = *(long *)(unaff_x29 + -0x90);
    lVar16 = lVar15;
    if (*(long *)(unaff_x29 + -0xa0) == lVar15) {
      FUN_108855060(unaff_x29 + -0xa0,lVar15,1,1,1);
      lVar16 = *(long *)(unaff_x29 + -0x90);
    }
    *(undefined1 *)(*(long *)(unaff_x29 + -0x98) + lVar16) = 10;
    *(long *)(unaff_x29 + -0x90) = lVar15 + 1;
    if (in_stack_00000070 == 0) {
      FUN_100f8ca60(&stack0x00000130,&UNK_108cc8c65,9,0x75,in_stack_00000098);
      FUN_100f87414(&stack0x00000350,&UNK_108cc8c6e,0xe,in_stack_00000098);
      FUN_100f8ca60(&stack0x000004e0,&UNK_108cc8c28,5,0x75,in_stack_00000098);
      FUN_100f87414(&stack0x00000410,&UNK_108cc8c2d,0x16,in_stack_00000098);
      __ZN4core3fmt5write17h64810b21425781ecE
                (unaff_x29 + -0xa0,&UNK_10b209290,&UNK_108cc8c7c,&stack0x00000260);
      if (in_stack_00000410 != 0) {
        _free(in_stack_00000418);
      }
      if (lVar8 != 0) {
        _free(plVar6);
      }
      if (in_stack_00000260 != 0) {
        _free(in_stack_00000268);
      }
      if (in_stack_00000130 != 0) {
        _free(in_stack_00000138);
      }
      FUN_100f8ca60(&stack0x000004e0,&UNK_108cb36dd,6,0x75,in_stack_00000098);
      FUN_100f87414(&stack0x00000410,&UNK_108cc8c43,0xf,in_stack_00000098);
      __ZN4core3fmt5write17h64810b21425781ecE
                (unaff_x29 + -0xa0,&UNK_10b209290,s__108abe5c1,&stack0x00000260);
      if (in_stack_00000410 != 0) {
        _free(in_stack_00000418);
      }
    }
    else {
      FUN_100f87414(&stack0x00000260,&UNK_108cc8bec,0x3c,in_stack_00000098);
      __ZN4core3fmt5write17h64810b21425781ecE
                (unaff_x29 + -0xa0,&UNK_10b209290,s__108ac265a,&stack0x00000410);
      if (&stack0x00000000 != (undefined1 *)0xfffffffffffffbf0) {
        _free(&DAT_10112965c);
      }
      FUN_100f8ca60(&stack0x00000130,&UNK_108cc8c28,5,0x75,in_stack_00000098);
      FUN_100f87414(&stack0x00000350,&UNK_108cc8c2d,0x16,in_stack_00000098);
      FUN_100f8ca60(&stack0x000004e0,&UNK_108cb36dd,6,0x75,in_stack_00000098);
      FUN_100f87414(&stack0x00000410,&UNK_108cc8c43,0xf,in_stack_00000098);
      __ZN4core3fmt5write17h64810b21425781ecE
                (unaff_x29 + -0xa0,&UNK_10b209290,&UNK_108cc8c52,&stack0x00000260);
      if (&stack0x00000000 != (undefined1 *)0xfffffffffffffda0) {
        _free(&DAT_10112965c);
      }
      if (lVar8 != 0) {
        _free(plVar6);
      }
      plVar6 = in_stack_00000138;
      lVar8 = in_stack_00000130;
      if (in_stack_00000260 != 0) {
        _free(in_stack_00000268);
        plVar6 = in_stack_00000138;
        lVar8 = in_stack_00000130;
      }
    }
    if (lVar8 != 0) {
      _free(plVar6);
    }
    uVar13 = *(undefined8 *)(unaff_x29 + -0x98);
    lVar14 = *(long *)(unaff_x29 + -0xa0);
    lVar16 = *(long *)(unaff_x29 + -0x78);
    lVar15 = *(long *)(unaff_x29 + -0x70);
    if (lVar15 != 0) {
      puVar10 = (undefined8 *)(lVar16 + 0x20);
      do {
        if (puVar10[-4] != 0) {
          _free(puVar10[-3]);
        }
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 7;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    if (*(long *)(unaff_x29 + -0x80) != 0) {
      _free(lVar16);
    }
    func_0x00010602ab90(s__108b1bd74,&stack0x00000260);
    if (lVar14 != 0) {
      _free(uVar13);
    }
    if (in_stack_00000108._4_1_ != 2) {
      if (in_stack_000000c0 != 0) {
        _free(in_stack_000000c8);
      }
      lVar16 = in_stack_000000f8;
      lVar15 = in_stack_000000f8;
      lVar14 = in_stack_00000100;
      if (in_stack_000000d8 != 0) {
        _free(in_stack_000000e0);
        lVar16 = in_stack_000000f8;
        lVar15 = in_stack_000000f8;
        lVar14 = in_stack_00000100;
      }
      for (; lVar11 = in_stack_000000f8, in_stack_000000f8 = lVar15, lVar14 != 0;
          lVar14 = lVar14 + -1) {
        FUN_100de8fec(lVar16);
        lVar16 = lVar16 + 0xa0;
        lVar15 = in_stack_000000f8;
        in_stack_000000f8 = lVar11;
      }
      if (in_stack_000000f0 != 0) {
        _free(lVar11,0);
      }
      *in_stack_00000018 = 1;
      return ZEXT816(0);
    }
    __ZN3std7process4exit17h656c4fcb5bd11385E(1);
  }
LAB_100f60484:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100f60488);
  (*pcVar4)();
}

