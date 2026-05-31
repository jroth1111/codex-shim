
undefined1  [16] FUN_100f5bd20(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long unaff_x19;
  undefined1 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  long *plVar21;
  uint uVar22;
  long unaff_x24;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  bool bVar29;
  long lVar30;
  long unaff_x29;
  undefined1 *in_stack_00000018;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  int in_stack_00000070;
  long in_stack_00000080;
  int in_stack_00000088;
  int in_stack_00000090;
  uint in_stack_00000098;
  long in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined1 *in_stack_00000130;
  long *in_stack_00000138;
  undefined1 *in_stack_00000140;
  long in_stack_000001d8;
  undefined *in_stack_000001e0;
  long in_stack_00000210;
  long in_stack_00000218;
  long in_stack_00000220;
  long in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined1 *in_stack_00000260;
  long *in_stack_00000268;
  undefined1 *in_stack_00000270;
  long in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 *in_stack_00000410;
  undefined1 *puVar31;
  undefined *in_stack_00000418;
  long in_stack_00000420;
  long in_stack_000004e0;
  undefined8 in_stack_000004e8;
  
  __ZN4core3fmt5write17h64810b21425781ecE(unaff_x29 + -0xa0,param_2,s__108ac265a,&stack0x00000410);
  if (in_stack_00000260 != (undefined1 *)0x0) {
    _free(in_stack_00000268);
  }
  lVar18 = 0;
  lVar26 = *(long *)(unaff_x29 + -0x78);
  do {
    puVar17 = (undefined1 *)(lVar26 + lVar18);
    bVar3 = puVar17[0x30];
    FUN_100f869e4(&stack0x00000240,bVar3,in_stack_00000098);
    lVar30 = *(long *)(puVar17 + 0x20);
    puVar31 = *(undefined1 **)(puVar17 + 0x28);
    if (bVar3 == 1) {
      if (in_stack_00000090 == 0) {
        if (puVar31 == (undefined1 *)0x0) {
          plVar10 = (long *)0x1;
        }
        else {
          plVar10 = (long *)_malloc(puVar31);
          if (plVar10 == (long *)0x0) {
            func_0x0001087c9084(1,puVar31);
            goto LAB_100f60484;
          }
        }
        _memcpy(plVar10,lVar30,puVar31);
        in_stack_00000270 = puVar31;
      }
      else {
        __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                  (&stack0x00000260,lVar30,puVar31,&UNK_108cc8f25,10);
        FUN_1011dd528(&stack0x00000410,&stack0x00000260);
        if ((int)in_stack_00000410 == 1) {
          lVar23 = (long)puVar31 - in_stack_00000420;
          lVar24 = lVar30 + in_stack_00000420;
          in_stack_000001d8 = lVar30;
          in_stack_000001e0 = in_stack_00000418;
          __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE
                    (&stack0x00000260,lVar24,lVar23,&UNK_108cc8f2f,2);
          FUN_1011dd528(&stack0x00000410,&stack0x00000260);
          if (((ulong)in_stack_00000410 & 1) == 0) {
            in_stack_00000410 = &stack0x000001d8;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000260,s_available_108ad590e,&stack0x00000410);
            FUN_100f8ca60(&stack0x000004e0,in_stack_00000268,in_stack_00000270,0xdc,
                          in_stack_00000098 | 0x1000000);
            FUN_100f8ca60(&stack0x00000410,lVar24,lVar23,0xdc,in_stack_00000098 | 0x1000000);
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000130,s__108ac1772,&stack0x00000260);
            uVar12 = in_stack_000004e8;
            lVar30 = in_stack_000004e0;
            if (in_stack_00000410 != (undefined8 *)0x0) {
              _free(&DAT_100c7b3a0);
            }
          }
          else {
            in_stack_00000218 = lVar23 - in_stack_00000420;
            in_stack_00000210 = lVar24 + in_stack_00000420;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000260,s_available_108ad590e,&stack0x00000410);
            FUN_100f8ca60(&stack0x00000350,in_stack_00000268,in_stack_00000270,0xdc,
                          in_stack_00000098 | 0x1000000);
            FUN_100f8ca60(&stack0x000004e0,lVar24,in_stack_00000418,0xdc,
                          in_stack_00000098 | 0x1000000);
            in_stack_00000410 = (undefined8 *)&stack0x00000210;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000260,s___108ad591b,&stack0x00000410);
            FUN_100f87414(&stack0x00000410,in_stack_00000268,in_stack_00000270,
                          in_stack_00000098 | 0x1000000);
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x00000130,s__108acfa85,&stack0x00000260);
            if (in_stack_00000410 != (undefined8 *)0x0) {
              _free(&DAT_100c7b3a0);
            }
            if (in_stack_00000260 != (undefined1 *)0x0) {
              _free(in_stack_00000268);
            }
            uVar12 = in_stack_00000358;
            lVar30 = in_stack_00000350;
            if (in_stack_000004e0 != 0) {
              _free(in_stack_000004e8);
            }
          }
          if (lVar30 != 0) {
            _free(uVar12);
          }
          in_stack_00000418 = &DAT_100c7b3a0;
          puVar31 = in_stack_00000130;
          plVar10 = in_stack_00000138;
          in_stack_00000270 = in_stack_00000140;
          if (in_stack_00000260 != (undefined1 *)0x0) {
            _free(in_stack_00000268);
            puVar31 = in_stack_00000130;
            plVar10 = in_stack_00000138;
            in_stack_00000270 = in_stack_00000140;
          }
        }
        else {
          FUN_100f8ca60(&stack0x00000130,lVar30,puVar31,0xdc,in_stack_00000098 | 0x1000000);
          puVar31 = in_stack_00000130;
          plVar10 = in_stack_00000138;
          in_stack_00000270 = in_stack_00000140;
        }
      }
    }
    else {
      FUN_100f866a0(&stack0x00000260,lVar30,puVar31,in_stack_00000098);
      uVar22 = (uint)bVar3;
      if (uVar22 < 2) {
        if (uVar22 == 0) goto LAB_100f5bfac;
        FUN_100f8ca60(&stack0x00000130,in_stack_00000268,in_stack_00000270,0xdc,in_stack_00000098);
      }
      else {
        puVar31 = in_stack_00000260;
        plVar10 = in_stack_00000268;
        if (uVar22 - 2 < 3) goto LAB_100f5c0fc;
LAB_100f5bfac:
        FUN_100f87414(&stack0x00000130,in_stack_00000268,in_stack_00000270,in_stack_00000098);
      }
      puVar31 = in_stack_00000130;
      plVar10 = in_stack_00000138;
      in_stack_00000270 = in_stack_00000140;
      if (in_stack_00000260 != (undefined1 *)0x0) {
        _free(in_stack_00000268);
        puVar31 = in_stack_00000130;
        plVar10 = in_stack_00000138;
        in_stack_00000270 = in_stack_00000140;
      }
    }
LAB_100f5c0fc:
    in_stack_00000140 = in_stack_00000270;
    in_stack_00000138 = plVar10;
    in_stack_00000130 = puVar31;
    in_stack_00000260 = &stack0x00000240;
    in_stack_00000268 = (long *)&DAT_10112965c;
    __ZN4core3fmt5write17h64810b21425781ecE
              (unaff_x29 + -0xa0,&UNK_10b209290,&UNK_108cc8d4d,&stack0x00000260);
    if (in_stack_00000130 != (undefined1 *)0x0) {
      _free(in_stack_00000138);
    }
    if (in_stack_00000240 != 0) {
      _free(in_stack_00000248);
    }
    lVar18 = lVar18 + 0x38;
    in_stack_00000270 = puVar17;
  } while (unaff_x19 * 0x38 != lVar18);
  if (in_stack_00000088 == 0) {
    puVar9 = (undefined8 *)_malloc(0xb7);
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined1 *)((long)puVar9 + 2) = 0x80;
      *(undefined2 *)puVar9 = 0x94e2;
      *(undefined1 *)((long)puVar9 + 5) = 0x80;
      *(undefined2 *)((long)puVar9 + 3) = 0x94e2;
      *(undefined2 *)((long)puVar9 + 10) = *(undefined2 *)((long)puVar9 + 4);
      *(undefined4 *)((long)puVar9 + 6) = *(undefined4 *)puVar9;
      *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)(puVar9 + 1);
      *(undefined8 *)((long)puVar9 + 0xc) = *puVar9;
      puVar9[5] = puVar9[2];
      puVar9[4] = puVar9[1];
      puVar9[3] = *puVar9;
      puVar9[7] = puVar9[1];
      puVar9[6] = *puVar9;
      puVar9[9] = puVar9[3];
      puVar9[8] = puVar9[2];
      puVar9[0xb] = puVar9[5];
      puVar9[10] = puVar9[4];
      puVar9[0xd] = puVar9[1];
      puVar9[0xc] = *puVar9;
      *(undefined8 *)((long)puVar9 + 0xaf) = *(undefined8 *)((long)puVar9 + 0x4f);
      puVar9[0x13] = puVar9[7];
      puVar9[0x12] = puVar9[6];
      puVar9[0x15] = puVar9[9];
      puVar9[0x14] = puVar9[8];
      puVar9[0xf] = puVar9[3];
      puVar9[0xe] = puVar9[2];
      puVar9[0x11] = puVar9[5];
      puVar9[0x10] = puVar9[4];
      uVar12 = 0xb7;
      goto LAB_100f5c234;
    }
LAB_100f60410:
    uStack0000000000000068 = 0xb7;
  }
  else {
    puVar9 = (undefined8 *)_malloc(0x3d);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = 0x2d2d2d2d2d2d2d2d;
      puVar9[1] = 0x2d2d2d2d2d2d2d2d;
      puVar9[3] = puVar9[1];
      puVar9[2] = *puVar9;
      puVar9[5] = puVar9[1];
      puVar9[4] = *puVar9;
      *(undefined8 *)((long)puVar9 + 0x35) = *(undefined8 *)((long)puVar9 + 0x15);
      *(undefined8 *)((long)puVar9 + 0x2d) = *(undefined8 *)((long)puVar9 + 0xd);
      uVar12 = 0x3d;
LAB_100f5c234:
      FUN_100f87414(&stack0x00000260,puVar9,uVar12,in_stack_00000098);
      __ZN4core3fmt5write17h64810b21425781ecE
                (unaff_x29 + -0xa0,&UNK_10b209290,s__108ac265a,&stack0x00000410);
      if (in_stack_00000260 != (undefined1 *)0x0) {
        _free(&DAT_10112965c);
      }
      _free(puVar9);
      lVar26 = *(long *)(unaff_x29 + -0x90);
      lVar18 = lVar26;
      if (*(long *)(unaff_x29 + -0xa0) == lVar26) {
        FUN_108855060(unaff_x29 + -0xa0,lVar26,1,1,1);
        lVar18 = *(long *)(unaff_x29 + -0x90);
      }
      *(undefined1 *)(*(long *)(unaff_x29 + -0x98) + lVar18) = 10;
      *(long *)(unaff_x29 + -0x90) = lVar26 + 1;
      bVar29 = false;
      lVar18 = in_stack_000000b8 + unaff_x24;
      lVar26 = in_stack_000000b8 + in_stack_00000080 * 0xa0;
      uStack0000000000000068 = 0x20;
      uStack0000000000000060 = 8;
      puVar9 = (undefined8 *)&UNK_10b239858;
      puVar27 = (undefined8 *)&UNK_10b239838;
LAB_100f5c32c:
      do {
        puVar13 = puVar9;
        puVar1 = (undefined8 *)puVar27[2] + puVar27[3] * 2;
        puVar9 = (undefined8 *)puVar27[2];
        while (puVar19 = puVar9, puVar19 != puVar1) {
          puVar9 = puVar19 + 2;
          if ((in_stack_000000b8 != 0) && (in_stack_000000b8 != lVar26)) {
            lVar24 = puVar19[1];
            lVar30 = in_stack_000000b8;
            do {
              if ((*(long *)(lVar30 + 0x28) == lVar24) &&
                 (iVar8 = _memcmp(*(undefined8 *)(lVar30 + 0x20),*puVar19,lVar24), iVar8 == 0)) {
                plVar10 = (long *)_malloc(0x20);
                if (plVar10 == (long *)0x0) goto LAB_100f60420;
                lVar24 = lVar30 + 0xa0;
                *plVar10 = lVar30;
                lVar30 = 8;
                uVar25 = 4;
                uVar28 = 1;
                if (lVar24 == lVar26) goto LAB_100f5c488;
                goto LAB_100f5c3d8;
              }
              lVar30 = lVar30 + 0xa0;
            } while (lVar30 != lVar26);
          }
        }
        puVar9 = puVar13 + 4;
        puVar27 = puVar13;
      } while (puVar13 != (undefined8 *)&UNK_10b2398d8);
LAB_100f5c5a0:
      lVar26 = *(long *)(unaff_x29 + -0x90);
      if (*(long *)(unaff_x29 + -0xa0) == lVar26) {
        FUN_108855060(unaff_x29 + -0xa0,lVar26,1,1,1);
        *(undefined1 *)(*(long *)(unaff_x29 + -0x98) + *(long *)(unaff_x29 + -0x90)) = 10;
        *(long *)(unaff_x29 + -0x90) = lVar26 + 1;
        if (in_stack_00000088 != 0) goto LAB_100f5c5d0;
LAB_100f5f370:
        puVar9 = (undefined8 *)_malloc(0xb7);
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined1 *)((long)puVar9 + 2) = 0x80;
          *(undefined2 *)puVar9 = 0x94e2;
          *(undefined1 *)((long)puVar9 + 5) = 0x80;
          *(undefined2 *)((long)puVar9 + 3) = 0x94e2;
          *(undefined2 *)((long)puVar9 + 10) = *(undefined2 *)((long)puVar9 + 4);
          *(undefined4 *)((long)puVar9 + 6) = *(undefined4 *)puVar9;
          *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)(puVar9 + 1);
          *(undefined8 *)((long)puVar9 + 0xc) = *puVar9;
          puVar9[5] = puVar9[2];
          puVar9[4] = puVar9[1];
          puVar9[3] = *puVar9;
          puVar9[7] = puVar9[1];
          puVar9[6] = *puVar9;
          puVar9[9] = puVar9[3];
          puVar9[8] = puVar9[2];
          puVar9[0xb] = puVar9[5];
          puVar9[10] = puVar9[4];
          puVar9[0xd] = puVar9[1];
          puVar9[0xc] = *puVar9;
          *(undefined8 *)((long)puVar9 + 0xaf) = *(undefined8 *)((long)puVar9 + 0x4f);
          puVar9[0x13] = puVar9[7];
          puVar9[0x12] = puVar9[6];
          puVar9[0x15] = puVar9[9];
          puVar9[0x14] = puVar9[8];
          puVar9[0xf] = puVar9[3];
          puVar9[0xe] = puVar9[2];
          puVar9[0x11] = puVar9[5];
          puVar9[0x10] = puVar9[4];
          uVar12 = 0xb7;
          goto LAB_100f5f3f0;
        }
        goto LAB_100f60410;
      }
      *(undefined1 *)(*(long *)(unaff_x29 + -0x98) + lVar26) = 10;
      *(long *)(unaff_x29 + -0x90) = lVar26 + 1;
      if (in_stack_00000088 == 0) goto LAB_100f5f370;
LAB_100f5c5d0:
      puVar9 = (undefined8 *)_malloc(0x3d);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0x2d2d2d2d2d2d2d2d;
        puVar9[1] = 0x2d2d2d2d2d2d2d2d;
        puVar9[3] = puVar9[1];
        puVar9[2] = *puVar9;
        puVar9[5] = puVar9[1];
        puVar9[4] = *puVar9;
        *(undefined8 *)((long)puVar9 + 0x35) = *(undefined8 *)((long)puVar9 + 0x15);
        *(undefined8 *)((long)puVar9 + 0x2d) = *(undefined8 *)((long)puVar9 + 0xd);
        uVar12 = 0x3d;
LAB_100f5f3f0:
        puVar31 = &stack0x00000260;
        FUN_100f87414(&stack0x00000260,puVar9,uVar12,in_stack_00000098);
        plVar10 = (long *)&DAT_10112965c;
        __ZN4core3fmt5write17h64810b21425781ecE
                  (unaff_x29 + -0xa0,&UNK_10b209290,s__108ac265a,&stack0x00000410);
        if (in_stack_00000260 != (undefined1 *)0x0) {
          _free(&DAT_10112965c);
        }
        _free(puVar9);
        FUN_100f85140(&stack0x00000210,&stack0x000000c0);
        if (in_stack_00000080 == 0) {
          lVar26 = 0;
          lVar30 = 0;
          lVar24 = 0;
          lVar23 = 0;
        }
        else {
          lVar23 = 0;
          lVar24 = 0;
          lVar30 = 0;
          lVar26 = 0;
          do {
            if (*(long *)(in_stack_000000b8 + 0x28) == 10) {
              cVar4 = *(char *)(in_stack_000000b8 + 0x98);
              if ((**(long **)(in_stack_000000b8 + 0x20) != 0x767265732d707061 ||
                  (short)(*(long **)(in_stack_000000b8 + 0x20))[1] != 0x7265) || cVar4 != '\0')
              goto LAB_100f5f560;
              if (*(long *)(in_stack_000000b8 + 0x58) != 0) {
                lVar15 = *(long *)(in_stack_000000b8 + 0x58) * 0x18;
                plVar11 = (long *)(*(long *)(in_stack_000000b8 + 0x50) + 0x10);
                do {
                  if ((*plVar11 == 0x13) &&
                     (plVar16 = (long *)plVar11[-1],
                     (*plVar16 == 0x203a737574617473 && plVar16[1] == 0x6e6e757220746f6e) &&
                     *(long *)((long)plVar16 + 0xb) == 0x676e696e6e757220)) {
                    lVar30 = lVar30 + 1;
                    goto LAB_100f5f4bc;
                  }
                  plVar11 = plVar11 + 3;
                  lVar15 = lVar15 + -0x18;
                } while (lVar15 != 0);
              }
LAB_100f5f4b8:
              lVar26 = lVar26 + 1;
            }
            else {
              cVar4 = *(char *)(in_stack_000000b8 + 0x98);
LAB_100f5f560:
              if (cVar4 == '\0') goto LAB_100f5f4b8;
              if (cVar4 == '\x01') {
                lVar24 = lVar24 + 1;
              }
              else {
                lVar23 = lVar23 + 1;
              }
            }
LAB_100f5f4bc:
            in_stack_000000b8 = in_stack_000000b8 + 0xa0;
          } while (in_stack_000000b8 != lVar18);
        }
        puVar2 = &UNK_108cde4d0;
        if (in_stack_00000088 != 0) {
          puVar2 = &UNK_108cc8be9;
        }
        uVar12 = 3;
        if (in_stack_00000088 == 0) {
          uVar12 = 4;
        }
        FUN_100f87414(&stack0x00000240,puVar2,uVar12,in_stack_00000098);
        bVar3 = in_stack_00000108._4_1_;
        uVar12 = *(undefined8 *)(&UNK_10b253ff8 + (ulong)in_stack_00000108._4_1_ * 8);
        puVar20 = *(undefined1 **)(&UNK_108cdaa38 + (ulong)in_stack_00000108._4_1_ * 8);
        plVar11 = (long *)_malloc(0x18);
        if (plVar11 == (long *)0x0) {
          func_0x0001087c906c(8,0x18);
        }
        else {
          FUN_100f818a0(&stack0x00000260,lVar26,&UNK_108cb53e5,2,0,in_stack_00000098);
          plVar11[1] = (long)&DAT_10112965c;
          *plVar11 = (long)in_stack_00000260;
          plVar11[2] = (long)puVar17;
          in_stack_00000130 = (undefined1 *)0x1;
          in_stack_00000140 = (undefined1 *)0x1;
          in_stack_00000138 = plVar11;
          if (lVar30 != 0) {
            FUN_100f818a0(&stack0x00000260,lVar30,&UNK_108cde46c,4,5,in_stack_00000098);
            puVar5 = in_stack_00000140;
            if (in_stack_00000140 == in_stack_00000130) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000130)
              ;
            }
            plVar11 = in_stack_00000138 + (long)puVar5 * 3;
            plVar11[1] = (long)&DAT_10112965c;
            *plVar11 = (long)in_stack_00000260;
            plVar11[2] = (long)puVar17;
            in_stack_00000140 = puVar5 + 1;
          }
          if (in_stack_00000220 != 0) {
            FUN_100f818a0(&stack0x00000260,in_stack_00000220,&UNK_108cc7f9d,5,2,in_stack_00000098);
            puVar5 = in_stack_00000140;
            if (in_stack_00000140 == in_stack_00000130) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000130)
              ;
            }
            plVar11 = in_stack_00000138 + (long)puVar5 * 3;
            plVar11[1] = (long)&DAT_10112965c;
            *plVar11 = (long)in_stack_00000260;
            plVar11[2] = (long)puVar17;
            in_stack_00000140 = puVar5 + 1;
          }
          FUN_100f818a0(&stack0x00000260,lVar24,&UNK_108cde4d4,4,3,in_stack_00000098);
          puVar5 = in_stack_00000140;
          if (in_stack_00000140 == in_stack_00000130) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000130);
          }
          plVar11 = in_stack_00000138 + (long)puVar5 * 3;
          plVar11[1] = (long)&DAT_10112965c;
          *plVar11 = (long)in_stack_00000260;
          plVar11[2] = (long)puVar17;
          in_stack_00000140 = puVar5 + 1;
          FUN_100f818a0(&stack0x00000260,lVar23,&UNK_108cde4c0,4,4,in_stack_00000098);
          puVar5 = in_stack_00000140;
          if (in_stack_00000140 == in_stack_00000130) {
            __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&stack0x00000130);
          }
          plVar11 = in_stack_00000138 + (long)puVar5 * 3;
          plVar11[1] = (long)&DAT_10112965c;
          *plVar11 = (long)in_stack_00000260;
          plVar11[2] = (long)puVar17;
          in_stack_00000140 = puVar5 + 1;
          FUN_100f3f514(&stack0x00000260,in_stack_00000138,in_stack_00000140,in_stack_00000248,
                        in_stack_00000250);
          if (in_stack_00000090 == 0) {
            plVar11 = (long *)_malloc(puVar20);
            if (plVar11 == (long *)0x0) {
              func_0x0001087c9084(1,puVar20);
              goto LAB_100f60484;
            }
            _memcpy(plVar11,uVar12,puVar20);
          }
          else {
            if (bVar3 == 2) {
              FUN_108855060(&stack0x00000410,0,4,1,1);
              uRam0000000000000001 = 0x6d315b1b;
              uVar28 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca75a7,5);
              if (((((uVar28 & 1) != 0) ||
                   (uVar28 = func_0x0001055b8dfc(&stack0x00000260,uVar12,puVar20), (uVar28 & 1) != 0
                   )) || (uVar28 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca7598,5),
                         (uVar28 & 1) != 0)) ||
                 (iVar8 = FUN_100f1c4e0(&stack0x00000410,&UNK_108c96800,4), iVar8 != 0)) {
                func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000004e0,&UNK_10b235000,
                                    &UNK_10b2346c0);
                goto LAB_100f60484;
              }
            }
            else if (bVar3 == 1) {
              FUN_108855060(&stack0x00000410,0,4,1,1);
              uRam0000000000000001 = 0x6d315b1b;
              uVar28 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca75a2,5);
              if ((((uVar28 & 1) != 0) ||
                  (uVar28 = func_0x0001055b8dfc(&stack0x00000260,uVar12,puVar20), (uVar28 & 1) != 0)
                  ) || ((uVar28 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca7598,5),
                        (uVar28 & 1) != 0 ||
                        (iVar8 = FUN_100f1c4e0(&stack0x00000410,&UNK_108c96800,4), iVar8 != 0)))) {
                func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000004e0,&UNK_10b235000,
                                    &UNK_10b2346c0);
                goto LAB_100f60484;
              }
            }
            else {
              FUN_108855060(&stack0x00000410,0,4,1,1);
              uRam0000000000000001 = 0x6d315b1b;
              uVar28 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca759d,5);
              if ((((uVar28 & 1) != 0) ||
                  (uVar28 = func_0x0001055b8dfc(&stack0x00000260,uVar12,puVar20), (uVar28 & 1) != 0)
                  ) || ((uVar28 = FUN_100f1c4e0(&stack0x00000410,&UNK_108ca7598,5),
                        (uVar28 & 1) != 0 ||
                        (iVar8 = FUN_100f1c4e0(&stack0x00000410,&UNK_108c96800,4), iVar8 != 0)))) {
                func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x000004e0,&UNK_10b235000,
                                    &UNK_10b2346c0);
                goto LAB_100f60484;
              }
            }
            plVar10 = (long *)0x1;
            puVar31 = (undefined1 *)0x0;
            puVar20 = puVar31;
            plVar11 = plVar10;
          }
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000410,s__108acc73f,&stack0x00000260);
          if (puVar20 != (undefined1 *)0x0) {
            _free(plVar11);
          }
          if (in_stack_00000260 != (undefined1 *)0x0) {
            _free(&DAT_10112965c);
          }
          plVar16 = in_stack_00000138;
          if (in_stack_00000140 != (undefined1 *)0x0) {
            plVar21 = in_stack_00000138 + 1;
            puVar17 = in_stack_00000140;
            do {
              if (plVar21[-1] != 0) {
                _free(*plVar21);
              }
              plVar21 = plVar21 + 3;
              puVar17 = puVar17 + -1;
            } while (puVar17 != (undefined1 *)0x0);
          }
          if (in_stack_00000130 != (undefined1 *)0x0) {
            _free(plVar16);
          }
          if (in_stack_00000240 != 0) {
            _free(in_stack_00000248);
          }
          if (in_stack_00000220 != 0) {
            puVar9 = (undefined8 *)(in_stack_00000218 + 0x20);
            do {
              if (puVar9[-4] != 0) {
                _free(puVar9[-3]);
              }
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 7;
              in_stack_00000220 = in_stack_00000220 + -1;
            } while (in_stack_00000220 != 0);
          }
          if (in_stack_00000210 != 0) {
            _free(in_stack_00000218);
          }
          __ZN4core3fmt5write17h64810b21425781ecE
                    (unaff_x29 + -0xa0,&UNK_10b209290,s__108ac265a,&stack0x00000260);
          if (puVar31 != (undefined1 *)0x0) {
            _free(plVar10);
          }
          lVar26 = *(long *)(unaff_x29 + -0x90);
          lVar18 = lVar26;
          if (*(long *)(unaff_x29 + -0xa0) == lVar26) {
            FUN_108855060(unaff_x29 + -0xa0,lVar26,1,1,1);
            lVar18 = *(long *)(unaff_x29 + -0x90);
          }
          *(undefined1 *)(*(long *)(unaff_x29 + -0x98) + lVar18) = 10;
          *(long *)(unaff_x29 + -0x90) = lVar26 + 1;
          if (in_stack_00000070 == 0) {
            FUN_100f8ca60(&stack0x00000130,&UNK_108cc8c65,9,0x75,in_stack_00000098);
            FUN_100f87414(&stack0x00000350,&UNK_108cc8c6e,0xe,in_stack_00000098);
            FUN_100f8ca60(&stack0x000004e0,&UNK_108cc8c28,5,0x75,in_stack_00000098);
            FUN_100f87414(&stack0x00000410,&UNK_108cc8c2d,0x16,in_stack_00000098);
            __ZN4core3fmt5write17h64810b21425781ecE
                      (unaff_x29 + -0xa0,&UNK_10b209290,&UNK_108cc8c7c,&stack0x00000260);
            if (puVar31 != (undefined1 *)0x0) {
              _free(plVar10);
            }
            if (puVar20 != (undefined1 *)0x0) {
              _free(plVar11);
            }
            if (in_stack_00000260 != (undefined1 *)0x0) {
              _free(&DAT_10112965c);
            }
            if (in_stack_00000130 != (undefined1 *)0x0) {
              _free(in_stack_00000138);
            }
            FUN_100f8ca60(&stack0x000004e0,&UNK_108cb36dd,6,0x75,in_stack_00000098);
            FUN_100f87414(&stack0x00000410,&UNK_108cc8c43,0xf,in_stack_00000098);
            __ZN4core3fmt5write17h64810b21425781ecE
                      (unaff_x29 + -0xa0,&UNK_10b209290,s__108abe5c1,&stack0x00000260);
            if (puVar31 != (undefined1 *)0x0) {
              _free(plVar10);
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
            if (puVar20 != (undefined1 *)0x0) {
              _free(plVar11);
            }
            plVar11 = in_stack_00000138;
            puVar20 = in_stack_00000130;
            if (in_stack_00000260 != (undefined1 *)0x0) {
              _free(&DAT_10112965c);
              plVar11 = in_stack_00000138;
              puVar20 = in_stack_00000130;
            }
          }
          if (puVar20 != (undefined1 *)0x0) {
            _free(plVar11);
          }
          uVar12 = *(undefined8 *)(unaff_x29 + -0x98);
          lVar30 = *(long *)(unaff_x29 + -0xa0);
          lVar18 = *(long *)(unaff_x29 + -0x78);
          lVar26 = *(long *)(unaff_x29 + -0x70);
          if (lVar26 != 0) {
            puVar9 = (undefined8 *)(lVar18 + 0x20);
            do {
              if (puVar9[-4] != 0) {
                _free(puVar9[-3]);
              }
              if (puVar9[-1] != 0) {
                _free(*puVar9);
              }
              puVar9 = puVar9 + 7;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
          if (*(long *)(unaff_x29 + -0x80) != 0) {
            _free(lVar18);
          }
          func_0x00010602ab90(s__108b1bd74,&stack0x00000260);
          if (lVar30 != 0) {
            _free(uVar12);
          }
          if (in_stack_00000108._4_1_ != 2) {
            if (in_stack_000000c0 != 0) {
              _free(in_stack_000000c8);
            }
            lVar18 = in_stack_000000f8;
            lVar26 = in_stack_000000f8;
            lVar30 = in_stack_00000100;
            if (in_stack_000000d8 != 0) {
              _free(in_stack_000000e0);
              lVar18 = in_stack_000000f8;
              lVar26 = in_stack_000000f8;
              lVar30 = in_stack_00000100;
            }
            for (; lVar24 = in_stack_000000f8, in_stack_000000f8 = lVar26, lVar30 != 0;
                lVar30 = lVar30 + -1) {
              FUN_100de8fec(lVar18);
              lVar18 = lVar18 + 0xa0;
              lVar26 = in_stack_000000f8;
              in_stack_000000f8 = lVar24;
            }
            if (in_stack_000000f0 != 0) {
              _free(lVar24,0);
            }
            *in_stack_00000018 = 1;
            return ZEXT816(0);
          }
          __ZN3std7process4exit17h656c4fcb5bd11385E(1);
        }
        goto LAB_100f60484;
      }
    }
    uStack0000000000000068 = 0x3d;
  }
  uStack0000000000000060 = 1;
LAB_100f60420:
  func_0x0001087c9084(uStack0000000000000060,uStack0000000000000068);
LAB_100f60484:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100f60488);
  (*pcVar7)();
LAB_100f5c3d8:
  lVar23 = puVar19[1];
  do {
    if ((*(long *)(lVar24 + 0x28) == lVar23) &&
       (iVar8 = _memcmp(*(undefined8 *)(lVar24 + 0x20),*puVar19,lVar23), iVar8 == 0)) {
      if (uVar28 == uVar25) {
        uVar14 = uVar25 * 2;
        if (uVar14 < 5) {
          uVar14 = 4;
        }
        FUN_108854f18(&stack0x00000260,uVar25,plVar10,uVar14,8,8);
        if ((int)in_stack_00000260 == 1) {
          func_0x0001087c9084(&DAT_10112965c,puVar17);
          goto LAB_100f60484;
        }
        *(long *)(&DAT_10112965c + uVar28 * 8) = lVar24;
        uVar25 = uVar14;
        plVar10 = in_stack_00000268;
      }
      else {
        plVar10[uVar28] = lVar24;
      }
      lVar30 = lVar30 + 8;
      uVar28 = uVar28 + 1;
      puVar6 = puVar9;
      lVar24 = lVar24 + 0xa0;
      goto joined_r0x000100f5c484;
    }
    lVar24 = lVar24 + 0xa0;
  } while (lVar24 != lVar26);
LAB_100f5c488:
  if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar1)) goto code_r0x000100f5c494;
  if (bVar29) {
    lVar23 = *(long *)(unaff_x29 + -0x90);
    lVar24 = lVar23;
    if (*(long *)(unaff_x29 + -0xa0) == lVar23) {
      FUN_108855060(unaff_x29 + -0xa0,lVar23,1,1,1);
      lVar24 = *(long *)(unaff_x29 + -0x90);
    }
    *(undefined1 *)(*(long *)(unaff_x29 + -0x98) + lVar24) = 10;
    *(long *)(unaff_x29 + -0x90) = lVar23 + 1;
  }
  FUN_100f8758c(&stack0x00000260,*puVar27,puVar27[1],in_stack_00000098);
  __ZN4core3fmt5write17h64810b21425781ecE
            (unaff_x29 + -0xa0,&UNK_10b209290,s__108ac265a,&stack0x00000410);
  plVar11 = plVar10;
  if (in_stack_00000260 != (undefined1 *)0x0) {
    _free(&DAT_10112965c);
  }
  for (; lVar30 != 0; lVar30 = lVar30 + -8) {
    FUN_100f83130(unaff_x29 + -0xa0,*plVar11,in_stack_00000098);
    plVar11 = plVar11 + 1;
  }
  if (uVar25 != 0) {
    _free(plVar10);
  }
  bVar29 = true;
  puVar9 = puVar13 + 4;
  puVar27 = puVar13;
  if (puVar13 == (undefined8 *)&UNK_10b2398d8) goto LAB_100f5c5a0;
  goto LAB_100f5c32c;
code_r0x000100f5c494:
  puVar6 = puVar9 + 2;
  puVar19 = puVar9;
  lVar24 = in_stack_000000b8;
joined_r0x000100f5c484:
  puVar9 = puVar6;
  if (lVar24 != lVar26) goto LAB_100f5c3d8;
  goto LAB_100f5c488;
}

