
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a99a8(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined1 uVar8;
  code *pcVar9;
  long *plVar10;
  long *plVar11;
  long unaff_x19;
  long *unaff_x23;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 *unaff_x25;
  undefined1 *unaff_x26;
  long lVar14;
  undefined8 *puVar15;
  long unaff_x29;
  char in_wzr;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 *puStack0000000000000048;
  undefined *puStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  char *pcStack0000000000000070;
  undefined8 *puStack0000000000000078;
  char *in_stack_00000080;
  code *in_stack_00000088;
  undefined8 uStack0000000000000090;
  undefined1 *puStack0000000000000098;
  undefined8 uStack00000000000000a0;
  long lStack00000000000000a8;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  long in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined4 uStack0000000000000150;
  undefined4 uStack0000000000000154;
  char *in_stack_00000158;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  
code_r0x0001014a99a8:
  puStack0000000000000078 = &stack0x00000080;
  pcStack0000000000000070 = s_accept_error__108ad3406;
  puStack0000000000000048 = (undefined1 *)&stack0x00000070;
  puStack0000000000000050 = &UNK_10b208fd0;
  puStack0000000000000098 = (undefined1 *)&stack0x00000048;
  uStack0000000000000090 = 1;
  uStack00000000000000a0 = 1;
  lStack00000000000000a8 = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,&stack0x00000090);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    lVar14 = *unaff_x23;
    uVar13 = *(undefined8 *)(lVar14 + 0x20);
    uVar16 = *(undefined8 *)(lVar14 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x98) = 1;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar13;
    *(undefined8 *)(unaff_x29 + -0x88) = uVar16;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,unaff_x29 + -0x98);
    if (iVar6 != 0) {
      in_stack_00000128 = *(long *)(lVar14 + 0x60);
      in_stack_00000130 = *(undefined8 *)(lVar14 + 0x68);
      in_stack_00000110 = *(long *)(lVar14 + 0x50);
      in_stack_00000118 = *(undefined8 *)(lVar14 + 0x58);
      in_stack_00000108 = 1;
      if (in_stack_00000110 == 0) {
        in_stack_00000108 = 2;
      }
      uStack0000000000000150 = *(undefined4 *)(lVar14 + 8);
      uStack0000000000000154 = *(undefined4 *)(lVar14 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x80) = &stack0x00000090;
      *(undefined1 *)(unaff_x29 + -0x78) = 1;
      *(long *)(unaff_x29 + -0x70) = unaff_x29 + -0x80;
      *(undefined **)(unaff_x29 + -0x68) = &DAT_1061c2098;
      in_stack_00000120 = 1;
      if (in_stack_00000128 == 0) {
        in_stack_00000120 = 2;
      }
      in_stack_00000140 = *(undefined8 *)(unaff_x29 + -0x90);
      in_stack_00000138 = *(undefined8 *)(unaff_x29 + -0x98);
      in_stack_00000148 = *(undefined8 *)(unaff_x29 + -0x88);
      in_stack_00000160 = unaff_x29 + -0x70;
      in_stack_00000158 = s__108b39f4f;
      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000108);
    }
  }
LAB_1014a9afc:
  __ZN5tokio4time5sleep5sleep17h2755eaf31c7f2ee9E(&stack0x00000108,1,0,&UNK_10b234938);
  unaff_x25[9] = CONCAT44(uStack0000000000000154,uStack0000000000000150);
  unaff_x25[8] = in_stack_00000148;
  unaff_x25[0xb] = in_stack_00000160;
  unaff_x25[10] = in_stack_00000158;
  unaff_x25[0xd] = in_stack_00000170;
  unaff_x25[0xc] = in_stack_00000168;
  unaff_x25[1] = in_stack_00000110;
  *unaff_x25 = in_stack_00000108;
  unaff_x25[3] = in_stack_00000120;
  unaff_x25[2] = in_stack_00000118;
  unaff_x25[5] = in_stack_00000130;
  unaff_x25[4] = in_stack_00000128;
  unaff_x25[7] = in_stack_00000140;
  unaff_x25[6] = in_stack_00000138;
  *(undefined8 *)(unaff_x19 + 0xa0) = in_stack_00000140;
  *(undefined8 *)(unaff_x19 + 0x98) = in_stack_00000138;
  *(ulong *)(unaff_x19 + 0xb0) = CONCAT44(uStack0000000000000154,uStack0000000000000150);
  *(undefined8 *)(unaff_x19 + 0xa8) = in_stack_00000148;
  *(long *)(unaff_x19 + 0xc0) = in_stack_00000160;
  *(char **)(unaff_x19 + 0xb8) = in_stack_00000158;
  *(undefined8 *)(unaff_x19 + 0xd0) = in_stack_00000170;
  *(undefined8 *)(unaff_x19 + 200) = in_stack_00000168;
  *(long *)(unaff_x19 + 0x70) = in_stack_00000110;
  *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000108;
  *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000120;
  *(undefined8 *)(unaff_x19 + 0x78) = in_stack_00000118;
  *(undefined8 *)(unaff_x19 + 0x90) = in_stack_00000130;
  *(long *)(unaff_x19 + 0x88) = in_stack_00000128;
  uVar7 = func_0x000106114748(unaff_x19 + 0x68);
  if ((uVar7 & 1) != 0) {
    *unaff_x26 = 3;
    *in_stack_00000000 = 2;
    uVar8 = 4;
LAB_1014a9e80:
    *(undefined1 *)(unaff_x19 + 0x50) = uVar8;
    return;
  }
  FUN_100de8a5c(unaff_x19 + 0x68);
  uVar7 = *(ulong *)(unaff_x19 + 0x60);
  do {
    if ((uVar7 & 3) == 1) {
      uVar13 = *(undefined8 *)(uVar7 - 1);
      puVar15 = *(undefined8 **)(uVar7 + 7);
      pcVar9 = (code *)*puVar15;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar13);
      }
      if (puVar15[1] != 0) {
        _free(uVar13);
      }
      _free((undefined8 *)(uVar7 - 1));
    }
    *(undefined1 *)(unaff_x19 + 0xd8) = 1;
    *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 8);
    *(undefined1 *)(unaff_x19 + 0x108) = 0;
    func_0x000100fc4db0(&stack0x00000008,unaff_x19 + 0x58);
    if (in_stack_00000008 == 3) {
      *in_stack_00000000 = 2;
      uVar8 = 3;
      goto LAB_1014a9e80;
    }
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
    *(long *)(unaff_x19 + 0x10) = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000020;
    *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000030;
    *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000028;
    *(undefined8 *)(unaff_x19 + 0x48) = in_stack_00000040;
    *(undefined8 *)(unaff_x19 + 0x40) = in_stack_00000038;
    if ((((*(char *)(unaff_x19 + 0x108) == '\x03') && (*(char *)(unaff_x19 + 0x90) == '\x03')) &&
        (*(char *)(unaff_x19 + 0x100) == '\x03')) && (*(char *)(unaff_x19 + 0xf8) == '\x03')) {
      lVar14 = *(long *)(unaff_x19 + 0xb8);
      pcVar1 = (char *)(lVar14 + 0x18);
      if (*pcVar1 == '\0') {
        *pcVar1 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar1,extraout_x1,1000000000);
      }
      plVar10 = (long *)(unaff_x19 + 0xc0);
      if (*plVar10 == 0) {
        if (*(long **)(lVar14 + 0x20) == plVar10) {
          plVar11 = *(long **)(unaff_x19 + 200);
          *(long **)(lVar14 + 0x20) = plVar11;
          goto joined_r0x0001014a9e14;
        }
      }
      else {
        plVar11 = *(long **)(unaff_x19 + 200);
        *(long **)(*plVar10 + 8) = plVar11;
joined_r0x0001014a9e14:
        if (plVar11 == (long *)0x0) {
          if (*(long **)(lVar14 + 0x28) != plVar10) goto LAB_1014a9e24;
          *(long *)(lVar14 + 0x28) = *plVar10;
        }
        else {
          *plVar11 = *plVar10;
        }
        *plVar10 = 0;
        *(undefined8 *)(unaff_x19 + 200) = 0;
      }
LAB_1014a9e24:
      if (*pcVar1 == '\x01') {
        *pcVar1 = in_wzr;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
      }
      if (*(long *)(unaff_x19 + 0xd0) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0xd0) + 0x18))(*(undefined8 *)(unaff_x19 + 0xd8));
      }
    }
    if (*(long *)(unaff_x19 + 0x10) != 2) {
      uVar13 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar17 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x20);
      in_stack_00000000[1] = *(undefined8 *)(unaff_x19 + 0x18);
      *in_stack_00000000 = uVar13;
      in_stack_00000000[3] = uVar17;
      in_stack_00000000[2] = uVar16;
      uVar13 = *(undefined8 *)(unaff_x19 + 0x30);
      uVar17 = *(undefined8 *)(unaff_x19 + 0x48);
      uVar16 = *(undefined8 *)(unaff_x19 + 0x40);
      in_stack_00000000[5] = *(undefined8 *)(unaff_x19 + 0x38);
      in_stack_00000000[4] = uVar13;
      in_stack_00000000[7] = uVar17;
      in_stack_00000000[6] = uVar16;
      uVar8 = 1;
      goto LAB_1014a9e80;
    }
    unaff_x26 = (undefined1 *)(unaff_x19 + 0xd8);
    *unaff_x26 = 0;
    uVar7 = *(ulong *)(unaff_x19 + 0x18);
    *(ulong *)(unaff_x19 + 0x58) = uVar7;
    puVar12 = (ulong *)(unaff_x19 + 0x60);
    *puVar12 = uVar7;
    uVar5 = FUN_10034f0fc(uVar7);
  } while ((uVar5 & 0xff) < 7 && (1 << (ulong)(uVar5 & 0x1f) & 0x4cU) != 0);
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 5) {
    unaff_x23 = (long *)&
                        __ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
    ;
    if (((bRam000000010b626000 - 1 < 2) ||
        ((bRam000000010b626000 != 0 &&
         (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
                            ), cVar4 != '\0')))) &&
       (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
                          ), (uVar7 & 1) != 0)) goto code_r0x0001014a9994;
  }
  lVar14 = 
  ___ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E != 0)) {
    in_stack_00000060 =
         *(undefined8 *)
          (
          ___ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
          + 0x20);
    in_stack_00000068 =
         *(undefined8 *)
          (
          ___ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
          + 0x28);
    in_stack_00000058 = 1;
    puVar2 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_10b3c24c8;
    }
    puVar3 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar3 = &UNK_109adfc03;
    }
    iVar6 = (**(code **)(puVar2 + 0x18))(puVar3,&stack0x00000058);
    if (iVar6 != 0) {
      lStack00000000000000a8 =
           ___ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
           + 0x30;
      *(ulong **)(unaff_x29 + -0x80) = puVar12;
      *(code **)(unaff_x29 + -0x78) =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      in_stack_00000088 = (code *)(unaff_x29 + -0x80);
      in_stack_00000080 = s_accept_error__108ad3406;
      pcStack0000000000000070 = (char *)&stack0x00000080;
      puStack0000000000000078 = (undefined8 *)&UNK_10b208fd0;
      puStack0000000000000098 = (undefined1 *)&stack0x00000070;
      uStack0000000000000090 = 1;
      uStack00000000000000a0 = 1;
      in_stack_00000128 = *(long *)(lVar14 + 0x60);
      in_stack_00000130 = *(undefined8 *)(lVar14 + 0x68);
      in_stack_00000110 = *(long *)(lVar14 + 0x50);
      in_stack_00000118 = *(undefined8 *)(lVar14 + 0x58);
      in_stack_00000108 = 1;
      if (in_stack_00000110 == 0) {
        in_stack_00000108 = 2;
      }
      uStack0000000000000150 = *(undefined4 *)(lVar14 + 8);
      uStack0000000000000154 = *(undefined4 *)(lVar14 + 0xc);
      *(undefined8 **)(unaff_x29 + -0x70) = &stack0x00000090;
      *(undefined1 *)(unaff_x29 + -0x68) = 1;
      *(long *)(unaff_x29 + -0x98) = unaff_x29 + -0x70;
      *(undefined **)(unaff_x29 + -0x90) = &DAT_1061c2098;
      in_stack_00000120 = 1;
      if (in_stack_00000128 == 0) {
        in_stack_00000120 = 2;
      }
      in_stack_00000140 = in_stack_00000060;
      in_stack_00000138 = in_stack_00000058;
      in_stack_00000148 = in_stack_00000068;
      in_stack_00000160 = unaff_x29 + -0x98;
      in_stack_00000158 = s__108b39f4f;
      (**(code **)(puVar2 + 0x20))(puVar3,&stack0x00000108);
    }
  }
  goto LAB_1014a9afc;
code_r0x0001014a9994:
  param_1 = ___ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
            + 0x30;
  in_stack_00000088 =
       __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
  param_2 = 
  ___ZN4axum5serve8listener19handle_accept_error28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17haa6083eccedcebafE
  ;
  in_stack_00000080 = (char *)puVar12;
  goto code_r0x0001014a99a8;
}

