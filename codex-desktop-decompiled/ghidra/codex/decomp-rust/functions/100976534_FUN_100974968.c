
/* WARNING: Removing unreachable block (ram,0x000100975d24) */
/* WARNING: Removing unreachable block (ram,0x000100975d74) */
/* WARNING: Removing unreachable block (ram,0x000100975a28) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000140 : 0x000100974ba8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_100974968(void)

{
  bool bVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 extraout_w9;
  undefined1 *puVar8;
  undefined8 extraout_x12;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long unaff_x20;
  long *unaff_x22;
  long lVar12;
  undefined8 uVar13;
  int unaff_w25;
  long *plVar14;
  long *plVar15;
  long *unaff_x27;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  long unaff_x29;
  undefined1 auVar20 [16];
  long *in_stack_00000008;
  long *plStack0000000000000010;
  short sStack0000000000000020;
  undefined1 *in_stack_00000038;
  long *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  long *plStack0000000000000060;
  undefined1 *in_stack_00000070;
  undefined8 *in_stack_00000078;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  long *in_stack_00000140;
  long *in_stack_00000148;
  long *in_stack_00000150;
  long *in_stack_00000158;
  char cStack0000000000000160;
  long *in_stack_00000168;
  short sStack0000000000000170;
  undefined4 uStack0000000000000172;
  undefined2 uStack0000000000000176;
  long *in_stack_00000248;
  undefined8 in_stack_00004d00;
  undefined8 in_stack_00004d08;
  undefined8 in_stack_00004d10;
  undefined8 in_stack_00004d18;
  undefined8 in_stack_00004d20;
  undefined8 in_stack_00004d28;
  undefined8 in_stack_00004d30;
  long in_stack_00004d40;
  long in_stack_00004d48;
  long in_stack_00004d50;
  long in_stack_00004d58;
  long in_stack_00004d60;
  long in_stack_00004d68;
  long *in_stack_00004e80;
  long *in_stack_00004e88;
  long *plVar21;
  long *in_stack_00004e90;
  long *plVar22;
  long *in_stack_00004e98;
  long *in_stack_00004ea0;
  long *in_stack_00004ea8;
  long *plVar23;
  long *in_stack_00004eb0;
  undefined4 uVar24;
  ulong in_stack_00004eb8;
  undefined2 uVar25;
  undefined8 in_stack_00004ec0;
  undefined1 in_stack_00004ec8;
  undefined7 in_stack_00004ec9;
  undefined8 in_stack_00004ed0;
  undefined8 in_stack_00004ed8;
  undefined8 in_stack_00004ee0;
  undefined8 in_stack_00004ee8;
  undefined8 in_stack_00004ef0;
  undefined8 in_stack_00004ef8;
  undefined8 in_stack_00004f00;
  undefined4 in_stack_000050a8;
  undefined2 in_stack_000050ac;
  char in_stack_00005120;
  char in_stack_00005121;
  char cVar26;
  byte bVar27;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00004e80,s__ps_plugins___shares_108acf564,&stack0x00000140);
  *(long **)(unaff_x20 + 0x2750) = in_stack_00004e88;
  *(long **)(unaff_x20 + 0x2748) = in_stack_00004e80;
  *(long **)(unaff_x20 + 0x2758) = in_stack_00004e90;
  uVar5 = __ZN11codex_login4auth14default_client20build_reqwest_client17he41481ad98749143E();
  *(undefined8 *)(unaff_x20 + 0x2760) = uVar5;
  FUN_1011d51fc(&stack0x00000140,uVar5,&UNK_108cc3fd0,*(undefined8 *)(unaff_x20 + 0x2750),
                *(undefined8 *)(unaff_x20 + 0x2758));
  __ZN18codex_core_plugins6remote21authenticated_request17h250c66f122829838E
            (&stack0x00004e80,&stack0x00000140);
  plVar15 = (long *)((ulong)in_stack_00004ea8 & 0xff);
  uVar24 = (undefined4)(in_stack_00004eb8 >> 0x10);
  uVar25 = (undefined2)(in_stack_00004eb8 >> 0x30);
  plVar14 = in_stack_00004e80;
  plVar21 = in_stack_00004e88;
  plVar22 = in_stack_00004e90;
  if (in_stack_00004e80 == (long *)0x3) {
    _sStack0000000000000020 = in_stack_00004eb8 & 0xffff;
    plStack0000000000000060 = in_stack_00004e98;
    in_stack_000050a8 = uVar24;
    in_stack_000050ac = uVar25;
    goto LAB_100975e74;
  }
  *(undefined1 *)((long)unaff_x27 + 0x45a) = 0;
  *(long *)(unaff_x29 + -0xe8) = in_stack_00004d60;
  *(long *)(unaff_x29 + -0xf0) = in_stack_00004d58;
  *(long *)(unaff_x29 + -0xe0) = in_stack_00004d68;
  plVar19 = in_stack_00004e98;
  if (in_stack_00004e80 == (long *)0x2) {
    lVar4 = *(long *)(unaff_x29 + -0xe8);
    lVar12 = *(long *)(unaff_x29 + -0xe0);
  }
  else {
    plVar15 = (long *)_malloc(0x80);
    if (plVar15 == (long *)0x0) {
      func_0x0001087c9084(1,0x80);
      goto LAB_10097663c;
    }
    in_stack_00000140 = (long *)0x80;
    *(undefined1 *)plVar15 = 0x7b;
    in_stack_00000150 = (long *)0x1;
    plVar14 = (long *)CONCAT62((int6)((ulong)in_stack_00004e80 >> 0x10),0x100);
    plVar21 = (long *)&stack0x000050b0;
    in_stack_00000148 = plVar15;
    FUN_1013fe3ec(&stack0x00004e80,&UNK_108cb693f,0xf);
    if (in_stack_00000140 == in_stack_00000150) {
      FUN_108855060(&stack0x00000140,in_stack_00000150,1,1,1);
    }
    *(undefined1 *)((long)in_stack_00000148 + (long)in_stack_00000150) = 0x3a;
    plVar15 = (long *)((long)in_stack_00000150 + 1);
    if (unaff_w25 == 0) {
      if (in_stack_00000140 == plVar15) {
        FUN_108855060(&stack0x00000140,plVar15,1,1,1);
        plVar15 = in_stack_00000150;
      }
      *(undefined1 *)((long)in_stack_00000148 + (long)plVar15) = 0x22;
      FUN_100657654(&stack0x00000140,&UNK_108c98410,8);
      if (in_stack_00000140 == in_stack_00000150) {
        FUN_108855060(&stack0x00000140,in_stack_00000150,1,1,1);
      }
    }
    else {
      if (in_stack_00000140 == plVar15) {
        FUN_108855060(&stack0x00000140,plVar15,1,1,1);
        plVar15 = in_stack_00000150;
      }
      *(undefined1 *)((long)in_stack_00000148 + (long)plVar15) = 0x22;
      FUN_100657654(&stack0x00000140,&UNK_108cb6adc,7);
      if (in_stack_00000140 == in_stack_00000150) {
        FUN_108855060(&stack0x00000140,in_stack_00000150,1,1,1);
      }
    }
    *(undefined1 *)((long)in_stack_00000148 + (long)in_stack_00000150) = 0x22;
    lVar4 = *(long *)(unaff_x29 + -0xe8);
    lVar12 = *(long *)(unaff_x29 + -0xe0);
    FUN_1013fe3ec(&stack0x00004e80,&UNK_108cb6af7,7);
    if (in_stack_00000140 == in_stack_00000150) {
      FUN_108855060(&stack0x00000140,in_stack_00000150,1,1,1);
    }
    *(undefined1 *)((long)in_stack_00000148 + (long)in_stack_00000150) = 0x3a;
    plVar15 = (long *)func_0x00010064d4d8(lVar4,lVar12,plVar21);
    if (plVar15 == (long *)0x0) {
      if (in_stack_00000140 == in_stack_00000150) {
        FUN_108855060(&stack0x00000140,in_stack_00000150,1,1,1);
      }
      *(undefined1 *)((long)in_stack_00000148 + (long)in_stack_00000150) = 0x7d;
LAB_100974d54:
      plVar15 = in_stack_00000148;
      if (in_stack_00000140 != (long *)0x8000000000000000) {
        in_stack_00000148 = (long *)0x1d;
        in_stack_00000140 = (long *)0x0;
        in_stack_00000158 = (long *)0x0;
        in_stack_00000150 = (long *)0x0;
        uVar18 = FUN_100ea213c(&stack0x00004fc0,&stack0x00000140);
        if ((uVar18 & 1) == 0) {
          *(undefined8 *)(unaff_x29 + -200) = 0x1d;
          *(undefined8 *)(unaff_x29 + -0xd0) = 0;
          *(undefined8 *)(unaff_x29 + -0xb8) = 0;
          *(undefined8 *)(unaff_x29 + -0xc0) = 0;
          in_stack_00004ea0 = (long *)((ulong)in_stack_00004ea0 & 0xffffffffffffff00);
          FUN_100ea1868(&stack0x00000140,&stack0x00004fc0,unaff_x29 + -0xd0,&stack0x00004e80);
          if (cStack0000000000000160 == '\x03') {
            FUN_107c05cb4(&UNK_108caab02,0x17,unaff_x29 + -0x61,&UNK_10b234e80,&UNK_10b223528);
            goto LAB_10097663c;
          }
          if (((uint)_cStack0000000000000160 & 0xff) != 2) {
            (*(code *)in_stack_00000140[4])(&stack0x000050c8,in_stack_00000148,in_stack_00000150);
          }
        }
        __ZN92__LT_bytes__bytes__Bytes_u20_as_u20_core__convert__From_LT_alloc__vec__Vec_LT_u8_GT__GT__GT_4from17h299205a9d12065eaE
                  (&stack0x00000140,&stack0x000050b0);
        plVar19 = in_stack_00000158;
        plVar22 = in_stack_00000150;
        plVar21 = in_stack_00000148;
        plVar14 = in_stack_00000140;
        if (in_stack_00004e80 != (long *)0x0) {
          if (in_stack_00004e88 == (long *)0x0) {
            if ((code *)*in_stack_00004e98 != (code *)0x0) {
              (*(code *)*in_stack_00004e98)(in_stack_00004e90);
            }
            if (in_stack_00004e98[1] != 0) {
              _free(in_stack_00004e90);
            }
          }
          else {
            (*(code *)in_stack_00004e88[4])(&stack0x00004fb8,in_stack_00004e90,in_stack_00004e98);
          }
        }
        goto LAB_100974f00;
      }
    }
    else {
      if (plVar15 == (long *)0x0) goto LAB_100974d54;
      if (in_stack_00000140 != (long *)0x0) {
        _free(in_stack_00000148);
      }
    }
    in_stack_00000140 = (long *)((ulong)in_stack_00000140 & 0xffffffffffff0000);
    FUN_1011d7b00(&stack0x00000140,plVar15);
    FUN_100cc65c8(&stack0x00004f98);
  }
LAB_100974f00:
  _memcpy(&stack0x00004d70,&stack0x00004f98,0x110);
  *(undefined1 *)((long)unaff_x27 + 0x45c) = 1;
  if (lVar12 != 0) {
    puVar10 = (undefined8 *)(lVar4 + 8);
    do {
      if (puVar10[-1] != 0) {
        _free(*puVar10);
      }
      puVar10 = puVar10 + 4;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (*(long *)(unaff_x29 + -0xf0) != 0) {
    _free(lVar4);
  }
  *(undefined1 *)((long)unaff_x27 + 0x45c) = 0;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x2750);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x2758);
  lVar4 = unaff_x20 + 0x2768;
  _memcpy(lVar4,&stack0x00004d70,0x110);
  *(undefined8 *)(unaff_x20 + 0x2878) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x2880) = uVar13;
  *(undefined1 *)unaff_x27 = 0;
  *(undefined1 *)((long)unaff_x27 + 1) = 0;
  _memcpy(&stack0x00000140,lVar4,0x110);
  *(undefined8 *)(unaff_x20 + 0x2888) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x2890) = uVar13;
  if (in_stack_00000140 == (long *)0x2) {
    auVar20._8_8_ = in_stack_00000148;
    auVar20._0_8_ = 1;
  }
  else {
    auVar20 = FUN_105c4eee0(in_stack_00000248,&stack0x00000140);
  }
  plStack0000000000000010 = auVar20._8_8_;
  lVar12 = *in_stack_00000248;
  *in_stack_00000248 = lVar12 + -1;
  LORelease();
  if (lVar12 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(&stack0x00000248);
  }
  *(undefined1 (*) [16])(unaff_x20 + 0x28a0) = auVar20;
  plVar11 = (long *)(unaff_x20 + 0x28a8);
  if ((auVar20._0_8_ & 1) != 0) {
    *plVar11 = 0;
    if (plStack0000000000000010 == (long *)0x0) {
      FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
      goto LAB_10097663c;
    }
    lVar6 = 0;
    lVar12 = 1;
    plVar15 = (long *)0x3;
LAB_100975040:
    FUN_100e03d7c(lVar12,lVar6);
    if (plVar15 == (long *)0x3) {
      uVar5 = *(undefined8 *)(unaff_x20 + 0x2888);
      in_stack_00004e90 = *(long **)(unaff_x20 + 0x2890);
      if (in_stack_00004e90 == (long *)0x0) {
        plStack0000000000000060 = (long *)0x1;
      }
      else {
        plStack0000000000000060 =
             (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00004e90,1);
        if (plStack0000000000000060 == (long *)0x0) {
          func_0x0001087c9084(1,in_stack_00004e90);
          goto LAB_10097663c;
        }
      }
      _memcpy(plStack0000000000000060,uVar5,in_stack_00004e90);
      in_stack_00004e88 = (long *)0x8000000000000003;
      plVar23 = plStack0000000000000010;
      in_stack_00000040 = in_stack_00004e90;
      plVar14 = plStack0000000000000010;
      goto LAB_100975dd8;
    }
    *(long **)(unaff_x20 + 0x28a8) = plVar15;
    *(long **)(unaff_x20 + 0x28b0) = plStack0000000000000010;
    *(long **)(unaff_x20 + 0x28b8) = plVar22;
    *(long **)(unaff_x20 + 0x28c0) = plVar19;
    *(long **)(unaff_x20 + 0x28c8) = in_stack_00004ea0;
    *(long **)(unaff_x20 + 0x28d0) = in_stack_00004ea8;
    *(long **)(unaff_x20 + 0x28d8) = in_stack_00004eb0;
    *(short *)(unaff_x27 + 9) = (short)in_stack_00004eb8;
    *(undefined2 *)(unaff_x20 + 0x28e6) = uVar25;
    *(undefined4 *)(unaff_x20 + 0x28e2) = uVar24;
    *(undefined8 *)(unaff_x20 + 0x2928) = in_stack_00004f00;
    *(undefined8 *)(unaff_x20 + 0x2910) = in_stack_00004ee8;
    *(undefined8 *)(unaff_x20 + 0x2908) = in_stack_00004ee0;
    *(undefined8 *)(unaff_x20 + 0x2920) = in_stack_00004ef8;
    *(undefined8 *)(unaff_x20 + 0x2918) = in_stack_00004ef0;
    *(ulong *)(unaff_x20 + 0x28f0) = CONCAT71(in_stack_00004ec9,in_stack_00004ec8);
    *(undefined8 *)(unaff_x20 + 0x28e8) = in_stack_00004ec0;
    *(undefined8 *)(unaff_x20 + 0x2900) = in_stack_00004ed8;
    *(undefined8 *)(unaff_x20 + 0x28f8) = in_stack_00004ed0;
    *(short *)(unaff_x27 + 1) = (short)unaff_x27[0xf];
    *(undefined1 *)((long)unaff_x27 + 1) = 0;
    *(undefined8 *)(unaff_x20 + 0x29b0) = *(undefined8 *)(unaff_x20 + 0x2928);
    *(undefined8 *)(unaff_x20 + 0x29a8) = *(undefined8 *)(unaff_x20 + 0x2920);
    *(undefined8 *)(unaff_x20 + 0x29a0) = *(undefined8 *)(unaff_x20 + 0x2918);
    *(undefined8 *)(unaff_x20 + 0x2998) = *(undefined8 *)(unaff_x20 + 0x2910);
    *(undefined8 *)(unaff_x20 + 0x2990) = *(undefined8 *)(unaff_x20 + 0x2908);
    *(undefined8 *)(unaff_x20 + 0x2988) = *(undefined8 *)(unaff_x20 + 0x2900);
    *(undefined8 *)(unaff_x20 + 0x2980) = *(undefined8 *)(unaff_x20 + 0x28f8);
    *(undefined8 *)(unaff_x20 + 0x2938) = *(undefined8 *)(unaff_x20 + 0x28b0);
    *(long *)(unaff_x20 + 0x2930) = *plVar11;
    *(undefined8 *)(unaff_x20 + 0x2978) = *(undefined8 *)(unaff_x20 + 0x28f0);
    *(undefined8 *)(unaff_x20 + 0x2970) = *(undefined8 *)(unaff_x20 + 0x28e8);
    *(undefined8 *)(unaff_x20 + 0x2968) = *(undefined8 *)(unaff_x20 + 0x28e0);
    *(undefined8 *)(unaff_x20 + 0x2960) = *(undefined8 *)(unaff_x20 + 0x28d8);
    *(undefined8 *)(unaff_x20 + 0x2958) = *(undefined8 *)(unaff_x20 + 0x28d0);
    *(undefined8 *)(unaff_x20 + 0x2950) = *(undefined8 *)(unaff_x20 + 0x28c8);
    *(undefined8 *)(unaff_x20 + 0x2948) = *(undefined8 *)(unaff_x20 + 0x28c0);
    *(undefined8 *)(unaff_x20 + 0x2940) = *(undefined8 *)(unaff_x20 + 0x28b8);
    *(undefined1 *)(unaff_x27 + 0x8a) = 0;
    plVar11 = (long *)0x2930;
    FUN_1011d6b78(&stack0x00004e80,unaff_x20 + 0x2930,in_stack_00000040);
    if (plVar14 == (long *)0x8000000000000001) {
      uVar7 = 4;
      goto LAB_1009751f0;
    }
    if ((char)unaff_x27[0x8a] == '\x03') {
      FUN_100cbe7c8(unaff_x20 + 0x29b8);
    }
    else if ((char)unaff_x27[0x8a] == '\0') {
      FUN_100e0d524(unaff_x20 + 0x2930);
    }
    in_stack_00004eb0 = plVar22;
    plVar15 = plVar21;
    in_stack_00000040 = plVar14;
    if (plVar14 == (long *)0x8000000000000000) {
      FUN_100de20f8(plVar21);
      _free(plVar21);
      in_stack_00000040 = (long *)0x0;
      in_stack_00004eb0 = (long *)0x0;
      plVar15 = (long *)0x1;
    }
    uVar18 = (ulong)*(ushort *)(unaff_x27 + 1);
    if (*(ushort *)(unaff_x27 + 1) - 200 < 100) {
      plVar23 = (long *)0x0;
      plVar14 = (long *)0x0;
      plVar21 = (long *)0x1;
      plVar22 = (long *)0x0;
      if (in_stack_00004eb0 != (long *)0x0) {
        do {
          bVar2 = *(byte *)((long)plVar15 + (long)plVar23);
          if (0x20 < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
            cVar26 = (char)(in_stack_00004eb8 >> 0x10);
            bVar27 = (byte)(in_stack_00004eb8 >> 0x18);
            plVar16 = unaff_x27;
            if (bVar2 != 0x5b) {
              if (bVar2 == 0x7b) {
                *(undefined1 **)(unaff_x29 + -0xa8) = &stack0x00004e80;
                plVar11 = (long *)0x3;
                in_stack_00004e90 = (long *)0x8000000000000000;
                goto LAB_1009753cc;
              }
              plStack0000000000000060 =
                   (long *)FUN_108832208(&stack0x00004e80,unaff_x29 + -0x61,&UNK_10b24f278);
              goto LAB_100975d54;
            }
            *(undefined1 **)(unaff_x29 + -0x98) = &stack0x00004e80;
            FUN_1011de3f0(unaff_x29 + -0xd0,unaff_x29 + -0x98);
            if (in_stack_00005120 == '\x01') {
              in_stack_00004e90 = (long *)0x8000000000000000;
              plStack0000000000000060 = *(long **)(unaff_x29 + -200);
              goto LAB_1009758dc;
            }
            if (in_stack_00005121 != '\x01') {
              plStack0000000000000060 = (long *)FUN_1087e422c(0,&UNK_10b2305a8,&UNK_10b20a590);
LAB_1009756dc:
              in_stack_00004e90 = (long *)0x8000000000000000;
              goto LAB_1009758dc;
            }
            FUN_1012cc674(unaff_x29 + -0xd0,*(undefined8 *)(unaff_x29 + -0x98));
            in_stack_00004e90 = *(long **)(unaff_x29 + -0xd0);
            plStack0000000000000060 = *(long **)(unaff_x29 + -200);
            if (in_stack_00004e90 == (long *)0x8000000000000000) goto LAB_1009756dc;
            plVar16 = *(long **)(unaff_x29 + -0xc0);
            *(long **)(unaff_x29 + -0xd0) = in_stack_00004e90;
            *(long **)(unaff_x29 + -200) = plStack0000000000000060;
            *(long **)(unaff_x29 + -0xc0) = plVar16;
            FUN_1011de3f0(unaff_x29 + -0x80,unaff_x29 + -0x98);
            if (cVar26 == '\x01') {
LAB_100975694:
              plVar19 = *(long **)(unaff_x29 + -0x78);
            }
            else {
              if (bVar27 == 1) {
                FUN_100a774c0(unaff_x29 + -0x80,*(undefined8 *)(unaff_x29 + -0x98));
                if (cVar26 == '\x01') goto LAB_100975694;
                goto LAB_1009758dc;
              }
              plVar19 = (long *)FUN_1087e422c(1,&UNK_10b2305a8,&UNK_10b20a590);
            }
            if (plVar16 != (long *)0x0) {
              plVar11 = plStack0000000000000060 + 4;
              plVar17 = plVar16;
              do {
                if (plVar11[-4] != 0) {
                  _free(plVar11[-3]);
                }
                if (plVar11[-1] != 0) {
                  _free(*plVar11);
                }
                plVar11 = plVar11 + 7;
                plVar17 = (long *)((long)plVar17 + -1);
                plVar16 = (long *)0x0;
              } while (plVar17 != (long *)0x0);
            }
            if (in_stack_00004e90 != (long *)0x0) {
              _free(plStack0000000000000060);
            }
            in_stack_00004e90 = (long *)0x8000000000000000;
            plStack0000000000000060 = plVar19;
LAB_1009758dc:
            *(long **)(unaff_x29 + -0xd0) = in_stack_00004e90;
            *(long **)(unaff_x29 + -200) = plStack0000000000000060;
            *(long **)(unaff_x29 + -0xc0) = plVar16;
            plVar19 = (long *)FUN_10065474c(&stack0x00004e80);
            if (in_stack_00004e90 != (long *)0x8000000000000000) {
              if (plVar19 == (long *)0x0) goto LAB_100975cc0;
              plVar14 = plVar19;
              if (plVar16 != (long *)0x0) {
                plVar11 = plStack0000000000000060 + 4;
                do {
                  if (plVar11[-4] != 0) {
                    _free(plVar11[-3]);
                  }
                  if (plVar11[-1] != 0) {
                    _free(*plVar11);
                  }
                  plVar11 = plVar11 + 7;
                  plVar16 = (long *)((long)plVar16 + -1);
                } while (plVar16 != (long *)0x0);
              }
              goto LAB_100975cb4;
            }
            if (plVar19 != (long *)0x0) {
              lVar12 = *plVar19;
              if (lVar12 != 1) goto LAB_100975c34;
              FUN_100de21d4(plVar19 + 1);
              goto LAB_100975d50;
            }
            goto LAB_100975d54;
          }
          plVar23 = (long *)((long)plVar23 + 1);
        } while (in_stack_00004eb0 != plVar23);
      }
      *(undefined8 *)(unaff_x29 + -0xd0) = 5;
      plVar19 = (long *)FUN_108831e8c(&stack0x00004e80,unaff_x29 + -0xd0);
      goto LAB_100975d64;
    }
    in_stack_00004e88 = *(long **)(unaff_x20 + 0x2890);
    if (in_stack_00004e88 == (long *)0x0) {
      plStack0000000000000060 = (long *)0x0;
      in_stack_00004e90 = (long *)0x1;
      goto LAB_100975de4;
    }
    uVar5 = *(undefined8 *)(unaff_x20 + 0x2888);
    plVar11 = (long *)0x1;
    in_stack_00004e90 = (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00004e88,1);
    if (in_stack_00004e90 == (long *)0x0) {
      func_0x0001087c9084(1,in_stack_00004e88);
      goto LAB_10097663c;
    }
    _memcpy(in_stack_00004e90,uVar5,in_stack_00004e88);
    uVar18 = (ulong)*(ushort *)(unaff_x27 + 1);
    *(undefined2 *)unaff_x27 = 1;
    plStack0000000000000060 = in_stack_00004e88;
    if (in_stack_00004e88 == (long *)0x8000000000000015) goto LAB_1009751f4;
    goto LAB_100975dec;
  }
  __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
            (&stack0x00004e80,plStack0000000000000010,in_stack_00000040);
  if (plVar14 != (long *)0x4) {
    lVar12 = unaff_x27[1];
    lVar6 = *plVar11;
    plVar15 = plVar14;
    plStack0000000000000010 = plVar21;
    goto LAB_100975040;
  }
  uVar7 = 3;
LAB_1009751f0:
  *(undefined1 *)unaff_x27 = uVar7;
LAB_1009751f4:
  unaff_x22 = (long *)0x8000000000000014;
  *in_stack_00000038 = 3;
LAB_100975fb0:
  *in_stack_00000070 = 4;
LAB_100976384:
  *in_stack_00000078 = (undefined1 *)((long)unaff_x22 + 0x5d);
  uVar7 = 3;
  goto LAB_100976458;
code_r0x000100975d0c:
  plVar23 = (long *)((long)plVar23 + 1);
  if (in_stack_00004eb0 == plVar23) goto LAB_100975d2c;
  goto LAB_100975cf4;
LAB_1009753cc:
  do {
    FUN_1011ddbc4(unaff_x29 + -0xd0,unaff_x29 + -0xa8);
    iVar9 = (int)plVar11;
    if (in_stack_00005120 == '\x01') {
      plStack0000000000000010 = (long *)CONCAT44(plStack0000000000000010._4_4_,iVar9);
      *(long **)(unaff_x29 + -0x90) = in_stack_00000008;
      *(long **)(unaff_x29 + -0x88) = plVar16;
      *(long **)(unaff_x29 + -0x98) = in_stack_00004e90;
      plStack0000000000000060 = *(long **)(unaff_x29 + -200);
      goto LAB_10097575c;
    }
    if (in_stack_00005121 != '\x01') {
      *(long **)(unaff_x29 + -0x90) = in_stack_00000008;
      *(long **)(unaff_x29 + -0x88) = plVar16;
      *(long **)(unaff_x29 + -0x98) = in_stack_00004e90;
      if (in_stack_00004e90 == (long *)0x8000000000000000) {
        *(undefined **)(unaff_x29 + -0x80) = &UNK_108cb6b11;
        *(undefined8 *)(unaff_x29 + -0x78) = 10;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
        plStack0000000000000060 =
             (long *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
        goto LAB_100975864;
      }
      if (iVar9 == 3) {
        *(undefined **)(unaff_x29 + -0x80) = &UNK_108cb693f;
        *(undefined8 *)(unaff_x29 + -0x78) = 0xf;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
        plStack0000000000000060 =
             (long *)FUN_108856088(s_missing_field_____108ac28f7,unaff_x29 + -0xd0);
        if (plVar16 != (long *)0x0) {
          plVar19 = in_stack_00000008 + 4;
          plVar17 = plVar16;
          do {
            if (plVar19[-4] != 0) {
              _free(plVar19[-3]);
            }
            if (plVar19[-1] != 0) {
              _free(*plVar19);
            }
            plVar19 = plVar19 + 7;
            plVar17 = (long *)((long)plVar17 + -1);
            plVar16 = (long *)0x0;
          } while (plVar17 != (long *)0x0);
        }
        if (in_stack_00004e90 != (long *)0x0) {
          _free(in_stack_00000008);
        }
LAB_100975864:
        in_stack_00004e90 = (long *)0x8000000000000000;
        goto LAB_100975be0;
      }
      plStack0000000000000060 = in_stack_00000008;
      goto LAB_100975be0;
    }
    lVar12 = *(long *)(unaff_x29 + -0xa8);
    *(long *)(lVar12 + 0x28) = *(long *)(lVar12 + 0x28) + 1;
    *(undefined8 *)(lVar12 + 0x10) = 0;
    __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
              (unaff_x29 + -0xd0,lVar12 + 0x18,lVar12);
    plStack0000000000000060 = *(long **)(unaff_x29 + -200);
    if (*(long *)(unaff_x29 + -0xd0) == 2) break;
    if (*(long *)(unaff_x29 + -0xc0) != 0xf) {
      if ((*(long *)(unaff_x29 + -0xc0) != 10) ||
         (*plStack0000000000000060 != 0x617069636e697270 ||
          (short)plStack0000000000000060[1] != 0x736c)) goto LAB_1009754f4;
      plStack0000000000000010 = (long *)CONCAT44(plStack0000000000000010._4_4_,iVar9);
      if (in_stack_00004e90 != (long *)0x8000000000000000) {
        *(long **)(unaff_x29 + -0x90) = in_stack_00000008;
        *(long **)(unaff_x29 + -0x88) = plVar16;
        *(long **)(unaff_x29 + -0x98) = in_stack_00004e90;
        *(undefined **)(unaff_x29 + -0x80) = &UNK_108cb6b11;
        *(undefined8 *)(unaff_x29 + -0x78) = 10;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
        plStack0000000000000060 =
             (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
        goto joined_r0x000100975bc8;
      }
      uVar18 = *(ulong *)(lVar12 + 0x28);
      if (uVar18 < *(ulong *)(lVar12 + 0x20)) {
        while( true ) {
          bVar2 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar18);
          if (0x3a < bVar2) goto LAB_100976550;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          uVar18 = uVar18 + 1;
          *(ulong *)(lVar12 + 0x28) = uVar18;
          if (*(ulong *)(lVar12 + 0x20) == uVar18) goto LAB_1009759b4;
        }
        if ((ulong)bVar2 == 0x3a) {
          *(ulong *)(lVar12 + 0x28) = uVar18 + 1;
          FUN_1012cc674(unaff_x29 + -0x80,lVar12);
          in_stack_00004e90 = *(long **)(unaff_x29 + -0x80);
          in_stack_00000008 = *(long **)(unaff_x29 + -0x78);
          if (in_stack_00004e90 != (long *)0x8000000000000000) {
            plVar16 = *(long **)(unaff_x29 + -0x70);
            goto LAB_1009753cc;
          }
        }
        else {
LAB_100976550:
          *(long **)(unaff_x29 + -0x90) = in_stack_00000008;
          *(long **)(unaff_x29 + -0x88) = plVar16;
          *(undefined8 *)(unaff_x29 + -0x98) = 0x8000000000000000;
          *(undefined8 *)(unaff_x29 + -0xd0) = 6;
          in_stack_00000008 = (long *)FUN_108831e8c(lVar12,unaff_x29 + -0xd0);
        }
      }
      else {
LAB_1009759b4:
        *(long **)(unaff_x29 + -0x90) = in_stack_00000008;
        *(long **)(unaff_x29 + -0x88) = plVar16;
        *(undefined8 *)(unaff_x29 + -0x98) = 0x8000000000000000;
        *(undefined8 *)(unaff_x29 + -0xd0) = 3;
        in_stack_00000008 = (long *)FUN_108831e8c(lVar12,unaff_x29 + -0xd0);
      }
      plStack0000000000000060 = in_stack_00000008;
      goto LAB_100975bdc;
    }
    if (*plStack0000000000000060 == 0x7265766f63736964 &&
        *(long *)((long)plStack0000000000000060 + 7) == 0x7974696c69626172) {
      if (iVar9 != 3) {
        plStack0000000000000010 = (long *)CONCAT44(plStack0000000000000010._4_4_,iVar9);
        *(long **)(unaff_x29 + -0x90) = in_stack_00000008;
        *(long **)(unaff_x29 + -0x88) = plVar16;
        *(long **)(unaff_x29 + -0x98) = in_stack_00004e90;
        *(undefined **)(unaff_x29 + -0x80) = &UNK_108cb693f;
        *(undefined8 *)(unaff_x29 + -0x78) = 0xf;
        *(long *)(unaff_x29 + -0xd0) = unaff_x29 + -0x80;
        *(undefined **)(unaff_x29 + -200) = &DAT_100c7b3a0;
        plStack0000000000000060 =
             (long *)FUN_108856088(s_duplicate_field_____108ac2973,unaff_x29 + -0xd0);
        goto LAB_10097575c;
      }
      uVar18 = *(ulong *)(lVar12 + 0x28);
      if (uVar18 < *(ulong *)(lVar12 + 0x20)) {
        while( true ) {
          bVar2 = *(byte *)(*(long *)(lVar12 + 0x18) + uVar18);
          if (0x3a < bVar2) goto LAB_10097657c;
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) break;
          uVar18 = uVar18 + 1;
          *(ulong *)(lVar12 + 0x28) = uVar18;
          if (*(ulong *)(lVar12 + 0x20) == uVar18) goto LAB_10097597c;
        }
        if ((ulong)bVar2 == 0x3a) {
          *(ulong *)(lVar12 + 0x28) = uVar18 + 1;
          FUN_100a774c0(unaff_x29 + -0x80,lVar12);
          if (cVar26 != '\x01') {
            plVar11 = (long *)(ulong)bVar27;
            goto LAB_1009753cc;
          }
          plStack0000000000000060 = *(long **)(unaff_x29 + -0x78);
        }
        else {
LAB_10097657c:
          *(undefined8 *)(unaff_x29 + -0xd0) = 6;
          plStack0000000000000060 = (long *)FUN_108831e8c(lVar12,unaff_x29 + -0xd0);
        }
      }
      else {
LAB_10097597c:
        *(undefined8 *)(unaff_x29 + -0xd0) = 3;
        plStack0000000000000060 = (long *)FUN_108831e8c(lVar12,unaff_x29 + -0xd0);
      }
      plStack0000000000000010 = (long *)CONCAT44(plStack0000000000000010._4_4_,3);
      *(long **)(unaff_x29 + -0x90) = in_stack_00000008;
      *(long **)(unaff_x29 + -0x88) = plVar16;
      *(long **)(unaff_x29 + -0x98) = in_stack_00004e90;
      goto LAB_10097575c;
    }
LAB_1009754f4:
    plStack0000000000000060 = (long *)FUN_10062a8ec(lVar12);
  } while (plStack0000000000000060 == (long *)0x0);
  plStack0000000000000010 = (long *)CONCAT44(plStack0000000000000010._4_4_,iVar9);
  *(long **)(unaff_x29 + -0x90) = in_stack_00000008;
  *(long **)(unaff_x29 + -0x88) = plVar16;
  *(long **)(unaff_x29 + -0x98) = in_stack_00004e90;
LAB_10097575c:
  if (in_stack_00004e90 != (long *)0x8000000000000000) {
joined_r0x000100975bc8:
    if (plVar16 != (long *)0x0) {
      plVar19 = in_stack_00000008 + 4;
      plVar11 = plVar16;
      do {
        if (plVar19[-4] != 0) {
          _free(plVar19[-3]);
        }
        if (plVar19[-1] != 0) {
          _free(*plVar19);
        }
        plVar19 = plVar19 + 7;
        plVar11 = (long *)((long)plVar11 + -1);
        plVar16 = (long *)0x0;
      } while (plVar11 != (long *)0x0);
    }
    if (in_stack_00004e90 != (long *)0x0) {
      _free(in_stack_00000008);
    }
  }
LAB_100975bdc:
  in_stack_00004e90 = (long *)0x8000000000000000;
  plVar11 = (long *)((ulong)plStack0000000000000010 & 0xffffffff);
LAB_100975be0:
  *(long **)(unaff_x29 + -0xd0) = in_stack_00004e90;
  *(long **)(unaff_x29 + -200) = plStack0000000000000060;
  *(long **)(unaff_x29 + -0xc0) = plVar16;
  plVar19 = (long *)FUN_100654604(&stack0x00004e80);
  if (in_stack_00004e90 == (long *)0x8000000000000000) {
    if (plVar19 != (long *)0x0) {
      lVar12 = *plVar19;
      if (lVar12 == 1) {
        FUN_100de21d4(plVar19 + 1);
      }
      else {
LAB_100975c34:
        if ((lVar12 == 0) && (plVar19[2] != 0)) {
          _free(plVar19[1]);
          plVar11 = plVar19;
        }
      }
LAB_100975d50:
      _free(plVar19);
    }
LAB_100975d54:
    plVar19 = (long *)FUN_108832da4(plStack0000000000000060,&stack0x00004e80);
LAB_100975d64:
    *(long **)(unaff_x29 + -0xe8) = plVar19;
LAB_100975d6c:
    uVar5 = *(undefined8 *)(unaff_x20 + 0x2888);
    in_stack_00004e90 = *(long **)(unaff_x20 + 0x2890);
    if (in_stack_00004e90 == (long *)0x0) {
      plStack0000000000000060 = (long *)0x1;
    }
    else {
      plStack0000000000000060 =
           (long *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00004e90,1);
      if (plStack0000000000000060 == (long *)0x0) {
        func_0x0001087c9084(1,in_stack_00004e90);
LAB_10097663c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100976640);
        (*pcVar3)();
      }
    }
    _memcpy(plStack0000000000000060,uVar5,in_stack_00004e90);
    in_stack_00004e88 = (long *)0x8000000000000005;
    plVar16 = in_stack_00004e90;
    plVar14 = plVar19;
  }
  else {
    if (plVar19 != (long *)0x0) {
      plVar14 = plVar19;
      if (plVar16 != (long *)0x0) {
        plVar11 = plStack0000000000000060 + 4;
        do {
          if (plVar11[-4] != 0) {
            _free(plVar11[-3]);
          }
          if (plVar11[-1] != 0) {
            _free(*plVar11);
          }
          plVar11 = plVar11 + 7;
          plVar16 = (long *)((long)plVar16 + -1);
        } while (plVar16 != (long *)0x0);
      }
LAB_100975cb4:
      plVar19 = plStack0000000000000060;
      plStack0000000000000060 = plVar14;
      if (in_stack_00004e90 != (long *)0x0) goto LAB_100975d50;
      goto LAB_100975d54;
    }
LAB_100975cc0:
    plVar23 = (long *)((long)plVar23 + 1);
    plVar19 = *(long **)(unaff_x29 + -0xb8);
    *(long **)(unaff_x29 + -0xf0) = in_stack_00004e90;
    *(long **)(unaff_x29 + -0xe8) = plStack0000000000000060;
    *(long **)(unaff_x29 + -0xe0) = plVar16;
    *(long **)(unaff_x29 + -0xd8) = plVar19;
    if (plVar23 < in_stack_00004eb0) {
LAB_100975cf4:
      if (*(byte *)((long)plVar15 + (long)plVar23) < 0x21 &&
          (1L << ((ulong)*(byte *)((long)plVar15 + (long)plVar23) & 0x3f) & 0x100002600U) != 0)
      goto code_r0x000100975d0c;
      *(undefined8 *)(unaff_x29 + -0xd0) = 0x16;
      plVar19 = (long *)FUN_108831e8c(&stack0x00004e80,unaff_x29 + -0xd0);
      *(long **)(unaff_x29 + -0xe8) = plVar19;
      if (plVar16 != (long *)0x0) {
        plVar11 = plStack0000000000000060 + 4;
        do {
          if (plVar11[-4] != 0) {
            _free(plVar11[-3]);
          }
          if (plVar11[-1] != 0) {
            _free(*plVar11);
          }
          plVar11 = plVar11 + 7;
          plVar16 = (long *)((long)plVar16 + -1);
        } while (plVar16 != (long *)0x0);
      }
      if (in_stack_00004e90 != (long *)0x0) {
        _free(plStack0000000000000060);
      }
      goto LAB_100975d6c;
    }
LAB_100975d2c:
    in_stack_00004e88 = (long *)0x8000000000000014;
  }
  bVar1 = in_stack_00000040 != (long *)0x0;
  plVar23 = plVar19;
  in_stack_00000040 = plVar16;
  if (bVar1) {
    _free(plVar15);
  }
LAB_100975dd8:
  uVar18 = 0;
  in_stack_00004eb0 = plVar19;
  plVar15 = plVar23;
LAB_100975de4:
  *(undefined2 *)unaff_x27 = 1;
LAB_100975dec:
  unaff_x22 = (long *)0x8000000000000014;
  FUN_100d534e0(lVar4);
  in_stack_00004ea0 = in_stack_00000040;
  _sStack0000000000000020 = uVar18;
  in_stack_00004ea8 = plVar15;
  if (in_stack_00004e88 == (long *)0x8000000000000014) {
    *(undefined1 *)((long)unaff_x27 + 0x45c) = 0;
    lVar4 = **(long **)(unaff_x20 + 0x2760);
    **(long **)(unaff_x20 + 0x2760) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(unaff_x20 + 0x2760);
    }
    if (*(long *)(unaff_x20 + 0x2748) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2750));
    }
    sStack0000000000000020 = 0;
    *(undefined2 *)((long)unaff_x27 + 0x45a) = 0;
    *(undefined1 *)((long)unaff_x27 + 0x459) = 1;
  }
  else {
LAB_100975e74:
    uVar18 = (ulong)in_stack_00004ea8 >> 8;
    *(undefined1 *)((long)unaff_x27 + 0x45c) = 0;
    lVar4 = **(long **)(unaff_x20 + 0x2760);
    **(long **)(unaff_x20 + 0x2760) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(unaff_x20 + 0x2760);
    }
    if (*(long *)(unaff_x20 + 0x2748) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x2750));
    }
    if (*(char *)((long)unaff_x27 + 0x45a) == '\x01') {
      if (in_stack_00004d68 != 0) {
        puVar10 = (undefined8 *)(in_stack_00004d60 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 4;
          in_stack_00004d68 = in_stack_00004d68 + -1;
        } while (in_stack_00004d68 != 0);
      }
      if (in_stack_00004d58 != 0) {
        _free(in_stack_00004d60);
      }
      unaff_x22 = (long *)0x8000000000000014;
    }
    *(undefined1 *)((long)unaff_x27 + 0x45a) = 0;
    plVar11 = (long *)((long)unaff_x27 + 0x45b);
    if ((*(byte *)((long)unaff_x27 + 0x45b) & 1) != 0) {
      if (in_stack_00004d50 != 0) {
        puVar10 = (undefined8 *)(in_stack_00004d48 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 4;
          in_stack_00004d50 = in_stack_00004d50 + -1;
        } while (in_stack_00004d50 != 0);
      }
      if (in_stack_00004d40 != 0) {
        _free(in_stack_00004d48);
      }
      unaff_x22 = (long *)0x8000000000000014;
    }
    *(undefined1 *)plVar11 = 0;
    *in_stack_00000038 = 1;
    plStack0000000000000010 = in_stack_00004eb0;
    in_stack_00000040 = in_stack_00004ea0;
    in_stack_00000058 = in_stack_00004e88;
    if (in_stack_00004e88 == (long *)((long)unaff_x22 + 1)) goto LAB_100975fb0;
  }
  FUN_100ce1508(in_stack_00000050);
  if (in_stack_00000058 == unaff_x22) {
LAB_100976110:
    plVar21 = in_stack_00004e90;
    __ZN16codex_app_server18request_processors7plugins22PluginRequestProcessor27clear_plugin_related_caches17hb1255b89d75ef5e3E
              (*(undefined8 *)(unaff_x20 + 0x80));
    plVar11 = plStack0000000000000060;
    if (in_stack_00000040 != (long *)0x0) {
      lVar4 = (long)in_stack_00000040 * 0x38;
      plVar11 = plStack0000000000000060 + (long)in_stack_00000040 * 7;
      plVar14 = plStack0000000000000060;
      do {
        _cStack0000000000000160 = plVar14[4];
        in_stack_00000158 = (long *)plVar14[3];
        in_stack_00000168 = (long *)plVar14[5];
        in_stack_00000150 = (long *)plVar14[2];
        plVar14[3] = (long)in_stack_00000158;
        plVar14[2] = (long)in_stack_00000150;
        plVar14[5] = (long)in_stack_00000168;
        plVar14[4] = _cStack0000000000000160;
        plVar14 = plVar14 + 7;
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
    }
    if (*(long *)(unaff_x20 + 0x26d8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x26e0));
    }
    *(undefined1 *)(unaff_x20 + 0xc1) = 0;
    if (*(long *)(unaff_x20 + 0x26a8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x26b0));
    }
    if (*(long *)(unaff_x20 + 0x2610) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x20 + 0x2610);
    }
    FUN_100de93d0(unaff_x20 + 200);
    plVar19 = (long *)(((ulong)((long)plVar11 - (long)plStack0000000000000060) >> 3) *
                      0x6db6db6db6db6db7);
    *(undefined2 *)(unaff_x20 + 0xc2) = 0;
    *(undefined1 *)(unaff_x20 + 0xc0) = 1;
    plVar14 = (long *)0x8000000000000000;
    plVar22 = plVar15;
  }
  else {
    in_stack_00000140 = in_stack_00000058;
    in_stack_00000150 = plStack0000000000000060;
    in_stack_00000158 = in_stack_00000040;
    _cStack0000000000000160 =
         CONCAT17((char)(uVar18 >> 0x30),
                  CONCAT25((short)(uVar18 >> 0x20),CONCAT41((int)uVar18,(char)plVar15)));
    in_stack_00000168 = plStack0000000000000010;
    sStack0000000000000170 = sStack0000000000000020;
    in_stack_00000148 = in_stack_00004e90;
    uStack0000000000000172 = in_stack_000050a8;
    uStack0000000000000176 = in_stack_000050ac;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00004e80,s___108add0c1,&stack0x00004f98);
    plVar19 = in_stack_00000140;
    if (-1 < (long)in_stack_00000140) {
      plVar19 = (long *)0x4;
    }
    in_stack_00000050 = 0xffffffffffff80a8;
    if (((1L << ((ulong)plVar19 & 0x3f) & 0xeceecU) != 0) ||
       (((1L << ((ulong)plVar19 & 0x3f) & 0x13103U) == 0 && (sStack0000000000000170 != 0x194)))) {
      in_stack_00000050 = 0xffffffffffff80a5;
    }
    FUN_101960064(&stack0x00000140);
    plStack0000000000000060 = plVar22;
    if (plVar14 == (long *)0x8000000000000000) {
      in_stack_00000040 = (long *)((long)unaff_x22 + -0xf);
      in_stack_00004e90 = plVar21;
      goto LAB_100976110;
    }
    if (*(long *)(unaff_x20 + 0x26d8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x26e0));
    }
    if ((*(byte *)(unaff_x20 + 0xc1) & 1) != 0) {
      lVar12 = *(long *)(unaff_x20 + 0x26c8);
      lVar4 = *(long *)(unaff_x20 + 0x26d0);
      if (lVar4 != 0) {
        puVar10 = (undefined8 *)(lVar12 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      plVar11 = (long *)0x0;
      if (*(long *)(unaff_x20 + 0x26c0) != 0) {
        _free(lVar12);
      }
    }
    *(undefined1 *)(unaff_x20 + 0xc1) = 0;
    if (*(long *)(unaff_x20 + 0x26a8) != 0) {
      _free(*(undefined8 *)(unaff_x20 + 0x26b0));
    }
    if (*(long *)(unaff_x20 + 0x2610) != -0x7ffffffffffffffd) {
      FUN_100e0609c(unaff_x20 + 0x2610);
    }
    FUN_100de93d0(unaff_x20 + 200);
    plVar19 = (long *)0x8000000000000005;
    if (((*(byte *)(unaff_x20 + 0xc3) & 1) != 0) && (*(long *)(unaff_x20 + 0x88) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x90));
    }
    if ((*(byte *)(unaff_x20 + 0xc2) & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + 0xa8);
      lVar12 = *(long *)(unaff_x20 + 0xb0);
      if (lVar12 != 0) {
        puVar10 = (undefined8 *)(lVar4 + 8);
        do {
          if (puVar10[-1] != 0) {
            _free(*puVar10);
          }
          puVar10 = puVar10 + 4;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      if (*(long *)(unaff_x20 + 0xa0) != 0) {
        _free(lVar4);
      }
    }
    *(undefined2 *)(unaff_x20 + 0xc2) = 0;
    *(undefined1 *)(unaff_x20 + 0xc0) = 1;
    unaff_x22 = (long *)0x8000000000000014;
    if (plVar14 == (long *)0x8000000000000001) goto LAB_100976384;
  }
  uVar7 = SUB81(plVar22,0);
  FUN_100d5d9a8(in_stack_00000048);
  if (plVar14 == (long *)0x8000000000000000) {
    puVar8 = (undefined1 *)((long)unaff_x22 + 0x12);
    plVar15 = plVar11;
    in_stack_00000050 = extraout_x12;
    plVar23 = plStack0000000000000060;
    plVar14 = plVar21;
    plStack0000000000000060 = plVar19;
    uVar7 = extraout_w9;
  }
  else {
    plVar15 = (long *)((ulong)plVar19 >> 8);
    puVar8 = (undefined1 *)((long)unaff_x22 + 0x5c);
    plVar23 = plVar21;
    plVar22 = plVar19;
    in_stack_00000100 = in_stack_00004d00;
    in_stack_00000108 = in_stack_00004d08;
    in_stack_00000110 = in_stack_00004d10;
    in_stack_00000118 = in_stack_00004d18;
    in_stack_00000120 = in_stack_00004d20;
    in_stack_00000128 = in_stack_00004d28;
    in_stack_00000130 = in_stack_00004d30;
  }
  *in_stack_00000078 = puVar8;
  in_stack_00000078[1] = plVar14;
  in_stack_00000078[2] = plVar23;
  in_stack_00000078[3] = plStack0000000000000060;
  in_stack_00000078[4] = (ulong)plVar22 & 0xff | (long)plVar15 << 8;
  *(undefined1 *)(in_stack_00000078 + 5) = uVar7;
  *(int *)((long)in_stack_00000078 + 0x29) = (int)plVar11;
  *(char *)((long)in_stack_00000078 + 0x2f) = (char)((ulong)plVar11 >> 0x30);
  *(short *)((long)in_stack_00000078 + 0x2d) = (short)((ulong)plVar11 >> 0x20);
  in_stack_00000078[7] = in_stack_00000108;
  in_stack_00000078[6] = in_stack_00000100;
  in_stack_00000078[9] = in_stack_00000118;
  in_stack_00000078[8] = in_stack_00000110;
  in_stack_00000078[0xb] = in_stack_00000128;
  in_stack_00000078[10] = in_stack_00000120;
  uVar7 = 1;
  in_stack_00000078[0xc] = in_stack_00000130;
  in_stack_00000078[0xd] = in_stack_00000050;
LAB_100976458:
  *(undefined1 *)(unaff_x27 + 0x1a3) = uVar7;
  return;
}

