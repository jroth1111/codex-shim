
void FUN_101254ce4(undefined8 param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong *puVar10;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *puVar11;
  long lVar12;
  long *unaff_x23;
  long *plVar13;
  ulong unaff_x24;
  ulong *unaff_x26;
  ulong *unaff_x27;
  long unaff_x29;
  long *plVar14;
  ulong uVar15;
  undefined8 in_stack_00000000;
  ulong *in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong *in_stack_00000020;
  ulong in_stack_00000028;
  long *in_stack_00000038;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  long *in_stack_00000080;
  ulong in_stack_00000088;
  ulong in_stack_00000090;
  ulong in_stack_00000098;
  ulong in_stack_000000a0;
  ulong in_stack_000000a8;
  ulong in_stack_000000b0;
  ulong in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong *in_stack_000000d0;
  long *in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  long *in_stack_00000108;
  long *in_stack_00000110;
  ulong in_stack_00000118;
  long *in_stack_00000120;
  
code_r0x000101254ce4:
  puVar5 = (ulong *)FUN_108856088(s_missing_field_____108ac28f7,param_2);
  plVar13 = unaff_x23;
  plVar7 = in_stack_00000110;
LAB_101254cf4:
  in_stack_00000110 = plVar7;
  FUN_100de8910(unaff_x22 + 9);
  uVar9 = 0x8000000000000000;
  puVar10 = unaff_x20;
  if (in_stack_000000c0 == unaff_x24) goto LAB_101254d14;
  do {
    FUN_100de6690(&stack0x000000c0);
    puVar10 = unaff_x20;
LAB_101254d14:
    do {
      if (((long)unaff_x21 < 0) && ((unaff_x21 & 0xfffffffffffffffe) != in_stack_00000028)) {
        FUN_100de6690(&stack0x00000078);
      }
      uVar3 = in_stack_00000070;
      uVar15 = in_stack_00000068;
      if ((uVar9 == 0x8000000000000000) || (uVar9 == 0x8000000000000001)) {
        *in_stack_00000008 = 0x8000000000000000;
        in_stack_00000008[1] = (ulong)puVar5;
        if (in_stack_00000070 != 0) {
          puVar11 = (undefined8 *)(in_stack_00000068 + 8);
          uVar9 = in_stack_00000070;
          do {
            if (puVar11[-1] != 0) {
              _free(*puVar11);
            }
            puVar11 = puVar11 + 3;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        if (in_stack_00000060 != 0) {
          _free(uVar15);
        }
LAB_101254fa4:
        lVar12 = ((ulong)((long)unaff_x27 - (long)puVar10) >> 3) * -0x71c71c71c71c71c7 + 1;
        while (lVar12 = lVar12 + -1, lVar12 != 0) {
          FUN_100de6690(puVar10);
          puVar10 = puVar10 + 9;
        }
        if (in_stack_00000010 != 0) {
          _free(in_stack_00000018);
        }
        return;
      }
      if (in_stack_00000070 == in_stack_00000060) {
        func_0x0001088bac74(&stack0x00000060);
      }
      puVar6 = (ulong *)(in_stack_00000068 + uVar3 * 0x18);
      *puVar6 = uVar9;
      puVar6[1] = (ulong)puVar5;
      puVar6[2] = (ulong)plVar13;
      in_stack_00000070 = uVar3 + 1;
      unaff_x20 = unaff_x27;
      if (puVar10 == unaff_x27) {
LAB_101254f50:
        in_stack_00000008[1] = in_stack_00000068;
        *in_stack_00000008 = in_stack_00000060;
        in_stack_00000008[2] = in_stack_00000070;
        puVar10 = unaff_x20;
        if (*in_stack_00000008 != 0x8000000000000000) {
          in_stack_000000c8 = in_stack_00000008[1];
          in_stack_000000c0 = *in_stack_00000008;
          in_stack_000000d0 = (ulong *)in_stack_00000008[2];
          puVar10 = unaff_x27;
          if (unaff_x27 != unaff_x20) {
            uVar9 = FUN_1087e422c(in_stack_00000000,&UNK_10b21cb80,&UNK_10b20a590);
            *in_stack_00000008 = 0x8000000000000000;
            in_stack_00000008[1] = uVar9;
            FUN_100ca9cd4(&stack0x000000c0);
            puVar10 = unaff_x20;
          }
        }
        goto LAB_101254fa4;
      }
      unaff_x20 = puVar10 + 9;
      unaff_x21 = *puVar10;
      if (unaff_x21 == unaff_x24) goto LAB_101254f50;
      uVar15 = puVar10[2];
      plVar14 = (long *)puVar10[1];
      in_stack_00000098 = puVar10[4];
      in_stack_00000090 = puVar10[3];
      uVar3 = puVar10[6];
      in_stack_000000a0 = puVar10[5];
      in_stack_000000b8 = puVar10[8];
      in_stack_000000b0 = puVar10[7];
      uVar9 = unaff_x21 ^ 0x8000000000000000;
      if (-1 < (long)unaff_x21) {
        uVar9 = 5;
      }
      in_stack_00000078 = unaff_x21;
      in_stack_00000080 = plVar14;
      in_stack_00000088 = uVar15;
      in_stack_000000a8 = uVar3;
      if (uVar9 == 4) {
        uVar15 = puVar10[1];
        puVar6 = (ulong *)puVar10[2];
        uVar3 = puVar10[3];
        unaff_x26 = puVar6 + uVar3 * 9;
        *(ulong **)(unaff_x29 + -0xb0) = puVar6;
        *(ulong **)(unaff_x29 + -0xa8) = puVar6;
        *(ulong *)(unaff_x29 + -0xa0) = uVar15;
        *(ulong **)(unaff_x29 + -0x98) = unaff_x26;
        puVar10 = puVar6;
        if (uVar3 == 0) {
LAB_101254b94:
          puVar4 = (ulong *)FUN_1087e422c(0,&UNK_10b231a38,&UNK_10b20a590);
LAB_101254bb0:
          uVar9 = 0x8000000000000000;
          puVar5 = puVar4;
        }
        else {
          puVar10 = puVar6 + 9;
          uVar8 = *puVar6;
          *(ulong **)(unaff_x29 + -0xa8) = puVar10;
          if (uVar8 == unaff_x24) goto LAB_101254b94;
          puVar4 = (ulong *)puVar6[2];
          uVar9 = puVar6[1];
          in_stack_000000e0 = puVar6[4];
          in_stack_000000d8 = (long *)puVar6[3];
          in_stack_000000f0 = puVar6[6];
          in_stack_000000e8 = puVar6[5];
          in_stack_00000100 = puVar6[8];
          in_stack_000000f8 = puVar6[7];
          unaff_x22 = &stack0x000000c0;
          in_stack_000000c0 = uVar8;
          in_stack_000000c8 = uVar9;
          in_stack_000000d0 = puVar4;
          if (uVar8 != 0x8000000000000003) {
            puVar4 = (ulong *)FUN_108832ea0(&stack0x000000c0,unaff_x29 + -0x68,&UNK_10b20a5e0);
            FUN_100de6690(&stack0x000000c0);
            goto LAB_101254bb0;
          }
          if ((uVar9 == 0x8000000000000000) || (uVar9 == 0x8000000000000001)) goto LAB_101254bb0;
          puVar5 = puVar4;
          in_stack_00000038 = in_stack_000000d8;
          if (uVar3 != 1) {
            puVar5 = (ulong *)FUN_1087e422c(uVar3,&UNK_10b21cb80,&UNK_10b20a590);
            if (uVar9 != 0) {
              _free(puVar4);
            }
            uVar9 = 0x8000000000000000;
          }
        }
        lVar12 = ((ulong)((long)unaff_x26 - (long)puVar10) >> 3) * -0x71c71c71c71c71c7 + 1;
        while (lVar12 = lVar12 + -1, lVar12 != 0) {
          unaff_x26 = puVar10 + 9;
          FUN_100de6690(puVar10);
          puVar10 = unaff_x26;
        }
        puVar10 = unaff_x20;
        plVar13 = in_stack_00000038;
        unaff_x27 = in_stack_00000020;
        if (uVar15 != 0) {
          _free(puVar6);
        }
        goto LAB_101254d14;
      }
      if (uVar9 != 5) {
        puVar5 = (ulong *)FUN_108832ea0(&stack0x00000078,unaff_x29 + -0x68,&UNK_10b20c620);
        uVar9 = 0x8000000000000000;
        puVar10 = unaff_x20;
        goto LAB_101254d14;
      }
      if ((in_stack_00000098 != 0) && (in_stack_00000098 * 9 != -0x11)) {
        _free(in_stack_00000090 + in_stack_00000098 * -8 + -8);
      }
      unaff_x23 = plVar14 + uVar15 * 0xd;
      in_stack_000000c0 = unaff_x24;
      in_stack_00000108 = plVar14;
      in_stack_00000110 = plVar14;
      in_stack_00000118 = unaff_x21;
      in_stack_00000120 = unaff_x23;
      if (uVar15 == 0) {
LAB_101254cb8:
        *(undefined **)(unaff_x29 + -0x68) = &UNK_108c61018;
        *(undefined8 *)(unaff_x29 + -0x60) = 4;
        *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x68;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
        param_2 = unaff_x29 + -0xb0;
        goto code_r0x000101254ce4;
      }
      uVar9 = 0x8000000000000000;
      do {
        plVar7 = plVar14 + 0xd;
        plVar1 = plVar7;
        plVar13 = in_stack_00000038;
        if (*plVar14 == -0x8000000000000000) break;
        in_stack_000000d8 = (long *)plVar14[6];
        in_stack_000000d0 = (ulong *)plVar14[5];
        in_stack_000000e8 = plVar14[8];
        in_stack_000000e0 = plVar14[7];
        in_stack_000000f8 = plVar14[10];
        in_stack_000000f0 = plVar14[9];
        in_stack_00000100 = plVar14[0xb];
        in_stack_000000c8 = plVar14[4];
        in_stack_000000c0 = plVar14[3];
        if (plVar14[2] == 4) {
          bVar2 = *(int *)plVar14[1] != 0x656d616e;
        }
        else {
          bVar2 = true;
        }
        if (*plVar14 != 0) {
          _free();
        }
        uVar15 = in_stack_000000c0;
        plVar13 = unaff_x23;
        if (bVar2) {
          in_stack_000000c0 = 0x8000000000000005;
          unaff_x24 = 0x8000000000000005;
          if (uVar15 == 0x8000000000000005) {
            in_stack_00000110 = plVar7;
            puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
            uVar9 = uVar9 & 0x7fffffffffffffff;
joined_r0x000101254e34:
            unaff_x27 = in_stack_00000020;
            plVar7 = in_stack_00000110;
            if (uVar9 != 0) {
              _free(unaff_x26);
              plVar7 = in_stack_00000110;
            }
            goto LAB_101254cf4;
          }
          *(ulong *)(unaff_x29 + -0xb0) = uVar15;
          *(ulong **)(unaff_x29 + -0xa0) = in_stack_000000d0;
          *(ulong *)(unaff_x29 + -0xa8) = in_stack_000000c8;
          *(ulong *)(unaff_x29 + -0x90) = in_stack_000000e0;
          *(long **)(unaff_x29 + -0x98) = in_stack_000000d8;
          *(ulong *)(unaff_x29 + -0x80) = in_stack_000000f0;
          *(ulong *)(unaff_x29 + -0x88) = in_stack_000000e8;
          *(ulong *)(unaff_x29 + -0x70) = in_stack_00000100;
          *(ulong *)(unaff_x29 + -0x78) = in_stack_000000f8;
          FUN_100de6690(unaff_x29 + -0xb0);
        }
        else {
          if (uVar9 != 0x8000000000000000) {
            *(undefined **)(unaff_x29 + -0x68) = &UNK_108c61018;
            *(undefined8 *)(unaff_x29 + -0x60) = 4;
            *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0x68;
            *(undefined **)(unaff_x29 + -0xa8) = &DAT_100c7b3a0;
            in_stack_00000110 = plVar7;
            puVar5 = (ulong *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xb0);
            goto joined_r0x000101254e34;
          }
          in_stack_000000c0 = 0x8000000000000005;
          unaff_x24 = 0x8000000000000005;
          if (uVar15 == 0x8000000000000005) {
            in_stack_00000110 = plVar7;
            puVar5 = (ulong *)FUN_1088561c0(&UNK_108cde170,0x10);
            unaff_x27 = in_stack_00000020;
            plVar7 = in_stack_00000110;
            goto LAB_101254cf4;
          }
          *(ulong *)(unaff_x29 + -0xb0) = uVar15;
          *(ulong **)(unaff_x29 + -0xa0) = in_stack_000000d0;
          *(ulong *)(unaff_x29 + -0xa8) = in_stack_000000c8;
          *(ulong *)(unaff_x29 + -0x90) = in_stack_000000e0;
          *(long **)(unaff_x29 + -0x98) = in_stack_000000d8;
          *(ulong *)(unaff_x29 + -0x80) = in_stack_000000f0;
          *(ulong *)(unaff_x29 + -0x88) = in_stack_000000e8;
          unaff_x22 = &stack0x000000c0;
          *(ulong *)(unaff_x29 + -0x70) = in_stack_00000100;
          *(ulong *)(unaff_x29 + -0x78) = in_stack_000000f8;
          if (uVar15 != 0x8000000000000003) {
            in_stack_00000110 = plVar7;
            puVar5 = (ulong *)FUN_108832ea0(unaff_x29 + -0xb0,unaff_x29 + -0x68,&UNK_10b20a5e0);
            FUN_100de6690(unaff_x29 + -0xb0);
            unaff_x27 = in_stack_00000020;
            plVar7 = in_stack_00000110;
            goto LAB_101254cf4;
          }
          unaff_x26 = in_stack_000000d0;
          unaff_x27 = in_stack_00000020;
          puVar5 = in_stack_000000d0;
          if (in_stack_000000c8 == 0x8000000000000000) goto LAB_101254cf4;
          in_stack_00000038 = in_stack_000000d8;
          uVar9 = in_stack_000000c8;
        }
        unaff_x22 = &stack0x000000c0;
        unaff_x24 = 0x8000000000000005;
        plVar14 = plVar7;
        plVar1 = unaff_x23;
        plVar13 = in_stack_00000038;
      } while (plVar7 != unaff_x23);
      unaff_x27 = in_stack_00000020;
      in_stack_00000038 = plVar13;
      in_stack_00000110 = plVar7;
      if (uVar9 == 0x8000000000000000) goto LAB_101254cb8;
      puVar5 = unaff_x26;
      if (unaff_x23 != plVar1) {
        puVar5 = (ulong *)FUN_1087e422c(uVar3,&UNK_10b21cb90,&UNK_10b20a590);
        if (uVar9 != 0) {
          _free(unaff_x26);
        }
        uVar9 = 0x8000000000000000;
      }
      FUN_100de8910(unaff_x22 + 9);
      puVar10 = unaff_x20;
    } while (in_stack_000000c0 == unaff_x24);
  } while( true );
}

