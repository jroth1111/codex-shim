
void FUN_1009f6cfc(void)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 uVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000028;
  long in_stack_000000d8;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  long in_stack_000004a8;
  undefined8 in_stack_000004b0;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000370,s_startup__base_url__path_style__108acd801,unaff_x29 + -0x100);
  FUN_1009f8e14(&stack0x00000410);
  uVar8 = *(undefined8 *)(unaff_x28 + 8);
  lVar6 = *(long *)(unaff_x28 + 0x10);
  if (lVar6 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = _malloc(lVar6);
    if (lVar4 == 0) {
      func_0x0001087c9084(1,lVar6);
      goto LAB_1009f6e34;
    }
  }
  _memcpy(lVar4,uVar8,lVar6);
  unaff_x19[0x5b] = lVar6;
  unaff_x19[0x5c] = lVar4;
  unaff_x19[0x5d] = lVar6;
  *(undefined1 *)(unaff_x19 + 0x507) = 0;
  FUN_1009f9068(&stack0x000000d8,unaff_x19 + 0x5b);
  if (in_stack_000000d8 == -0x7fffffffffffffff) {
    *unaff_x20 = 0x8000000000000001;
    uVar5 = 3;
LAB_1009f69f0:
    *(undefined1 *)((long)unaff_x19 + 0x2d3) = uVar5;
    return;
  }
  plVar1 = unaff_x19 + 0x19;
  _memcpy(plVar1,&stack0x000000d8,0x208);
  FUN_100e6dec0(unaff_x19 + 0x5b);
  if (*plVar1 != -0x8000000000000000) {
    unaff_x19[0x5c] = plVar1;
    *(undefined1 *)((long)unaff_x19 + 0x2e9) = 0;
    FUN_1006dd9c8(unaff_x29 + -0x100,unaff_x19 + 0x5b,in_stack_00000028);
    lVar6 = *(long *)(unaff_x29 + -0x100);
    if (lVar6 == -0x7ffffffffffffffc) {
      *unaff_x20 = 0x8000000000000001;
      uVar5 = 4;
      goto LAB_1009f69f0;
    }
    if (*(char *)((long)unaff_x19 + 0x2e9) == '\x04') {
      FUN_100cab424(unaff_x19 + 0x71);
      FUN_100e0609c(unaff_x19 + 0x5e);
      *(undefined1 *)(unaff_x19 + 0x5d) = 0;
    }
    else if (*(char *)((long)unaff_x19 + 0x2e9) == '\x03') {
      FUN_100ce72d8(unaff_x19 + 0x5e);
    }
    if (lVar6 != -0x7ffffffffffffffd) {
      __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E
                (&stack0x000004a8,&stack0x00000370);
      if (in_stack_000004a8 != -0x8000000000000000) {
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x100,s_auth__mode_ChatGPT_account_id__108acd824,&stack0x000004e0);
        in_stack_00000378 = *(undefined8 *)(unaff_x29 + -0xf8);
        in_stack_00000370 = *(undefined8 *)(unaff_x29 + -0x100);
        in_stack_00000380 = *(undefined8 *)(unaff_x29 + -0xf0);
        FUN_1009f8e14(&stack0x00000410);
        if (in_stack_000004a8 != 0) {
          _free(in_stack_000004b0);
        }
      }
      if ((lVar6 < 0) && (2 < lVar6 + 0x7fffffffffffffffU)) {
        __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(&UNK_108cb4f2f,0xb9);
        __ZN3std7process4exit17h656c4fcb5bd11385E(1);
      }
      else {
        auVar16 = __ZN20codex_model_provider4auth23auth_provider_from_auth17h1d4b85161056ffcaE
                            (&stack0x00000370);
        *(undefined1 *)(unaff_x19 + 0x5a) = 0;
        uVar8 = unaff_x19[0xc];
        uVar7 = unaff_x19[0xf];
        uVar9 = unaff_x19[0xe];
        *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19[0xd];
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar8;
        *(undefined8 *)(unaff_x29 + -0x88) = uVar7;
        *(undefined8 *)(unaff_x29 + -0x90) = uVar9;
        uVar8 = unaff_x19[0x10];
        *(undefined8 *)(unaff_x29 + -0x78) = unaff_x19[0x11];
        *(undefined8 *)(unaff_x29 + -0x80) = uVar8;
        uVar8 = unaff_x19[4];
        uVar7 = unaff_x19[7];
        uVar9 = unaff_x19[6];
        *(undefined8 *)(unaff_x29 + -0xd8) = unaff_x19[5];
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar8;
        *(undefined8 *)(unaff_x29 + -200) = uVar7;
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar9;
        uVar7 = unaff_x19[8];
        uVar9 = unaff_x19[0xb];
        uVar8 = unaff_x19[10];
        *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x19[9];
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar7;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
        *(undefined8 *)(unaff_x29 + -0xb0) = uVar8;
        uVar7 = *unaff_x19;
        uVar9 = unaff_x19[3];
        uVar8 = unaff_x19[2];
        *(undefined8 *)(unaff_x29 + -0xf8) = unaff_x19[1];
        *(undefined8 *)(unaff_x29 + -0x100) = uVar7;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar9;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar8;
        __ZN24codex_cloud_tasks_client4http10HttpClient18with_auth_provider17hcb32d172f92cae01E
                  (&stack0x00000410,unaff_x29 + -0x100,auVar16._0_8_,auVar16._8_8_);
        *(undefined1 *)(unaff_x19 + 0x5a) = 1;
        unaff_x19[0xd] = in_stack_00000478;
        unaff_x19[0xc] = in_stack_00000470;
        unaff_x19[0xf] = in_stack_00000488;
        unaff_x19[0xe] = in_stack_00000480;
        unaff_x19[0x11] = in_stack_00000498;
        unaff_x19[0x10] = in_stack_00000490;
        unaff_x19[5] = in_stack_00000438;
        unaff_x19[4] = in_stack_00000430;
        unaff_x19[7] = in_stack_00000448;
        unaff_x19[6] = in_stack_00000440;
        unaff_x19[9] = in_stack_00000458;
        unaff_x19[8] = in_stack_00000450;
        unaff_x19[0xb] = in_stack_00000468;
        unaff_x19[10] = in_stack_00000460;
        unaff_x19[1] = in_stack_00000378;
        *unaff_x19 = in_stack_00000370;
        unaff_x19[3] = in_stack_00000428;
        unaff_x19[2] = in_stack_00000380;
        __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E
                  (&stack0x000004a8,&stack0x00000370);
        if (in_stack_000004a8 != -0x8000000000000000) {
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x100,s__auth__set_ChatGPT_Account_Id_he_108acd845,
                     &stack0x000004e0);
          FUN_1009f8e14(&stack0x00000410);
          if (in_stack_000004a8 != 0) {
            _free(in_stack_000004b0);
          }
        }
        uVar9 = unaff_x19[0xd];
        uVar8 = unaff_x19[0xc];
        uVar10 = unaff_x19[0xf];
        uVar7 = unaff_x19[0xe];
        uVar13 = unaff_x19[9];
        uVar12 = unaff_x19[8];
        uVar11 = unaff_x19[10];
        *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19[0xb];
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar11;
        *(undefined8 *)(unaff_x29 + -0x88) = uVar9;
        *(undefined8 *)(unaff_x29 + -0x90) = uVar8;
        uVar9 = unaff_x19[0x11];
        uVar8 = unaff_x19[0x10];
        *(undefined8 *)(unaff_x29 + -0x78) = uVar10;
        *(undefined8 *)(unaff_x29 + -0x80) = uVar7;
        *(undefined8 *)(unaff_x29 + -0x68) = uVar9;
        *(undefined8 *)(unaff_x29 + -0x70) = uVar8;
        uVar9 = unaff_x19[5];
        uVar8 = unaff_x19[4];
        uVar10 = unaff_x19[7];
        uVar7 = unaff_x19[6];
        uVar15 = unaff_x19[1];
        uVar14 = *unaff_x19;
        uVar11 = unaff_x19[2];
        *(undefined8 *)(unaff_x29 + -0xd8) = unaff_x19[3];
        *(undefined8 *)(unaff_x29 + -0xe0) = uVar11;
        *(undefined8 *)(unaff_x29 + -200) = uVar9;
        *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
        *(undefined1 *)(unaff_x19 + 0x5a) = 0;
        *(undefined8 *)(unaff_x29 + -0xb8) = uVar10;
        *(undefined8 *)(unaff_x29 + -0xc0) = uVar7;
        *(undefined8 *)(unaff_x29 + -0xa8) = uVar13;
        *(undefined8 *)(unaff_x29 + -0xb0) = uVar12;
        *(undefined8 *)(unaff_x29 + -0xf8) = 1;
        *(undefined8 *)(unaff_x29 + -0x100) = 1;
        *(undefined8 *)(unaff_x29 + -0xe8) = uVar15;
        *(undefined8 *)(unaff_x29 + -0xf0) = uVar14;
        puVar3 = (undefined8 *)_malloc(0xa0);
        if (puVar3 != (undefined8 *)0x0) {
          uVar8 = *(undefined8 *)(unaff_x29 + -0xa0);
          uVar7 = *(undefined8 *)(unaff_x29 + -0x88);
          uVar9 = *(undefined8 *)(unaff_x29 + -0x90);
          puVar3[0xd] = *(undefined8 *)(unaff_x29 + -0x98);
          puVar3[0xc] = uVar8;
          puVar3[0xf] = uVar7;
          puVar3[0xe] = uVar9;
          uVar8 = *(undefined8 *)(unaff_x29 + -0x80);
          uVar7 = *(undefined8 *)(unaff_x29 + -0x68);
          uVar9 = *(undefined8 *)(unaff_x29 + -0x70);
          puVar3[0x11] = *(undefined8 *)(unaff_x29 + -0x78);
          puVar3[0x10] = uVar8;
          puVar3[0x13] = uVar7;
          puVar3[0x12] = uVar9;
          uVar8 = *(undefined8 *)(unaff_x29 + -0xe0);
          uVar7 = *(undefined8 *)(unaff_x29 + -200);
          uVar9 = *(undefined8 *)(unaff_x29 + -0xd0);
          puVar3[5] = *(undefined8 *)(unaff_x29 + -0xd8);
          puVar3[4] = uVar8;
          puVar3[7] = uVar7;
          puVar3[6] = uVar9;
          uVar8 = *(undefined8 *)(unaff_x29 + -0xc0);
          uVar7 = *(undefined8 *)(unaff_x29 + -0xa8);
          uVar9 = *(undefined8 *)(unaff_x29 + -0xb0);
          puVar3[9] = *(undefined8 *)(unaff_x29 + -0xb8);
          puVar3[8] = uVar8;
          puVar3[0xb] = uVar7;
          puVar3[10] = uVar9;
          uVar8 = *(undefined8 *)(unaff_x29 + -0x100);
          uVar7 = *(undefined8 *)(unaff_x29 + -0xe8);
          uVar9 = *(undefined8 *)(unaff_x29 + -0xf0);
          puVar3[1] = *(undefined8 *)(unaff_x29 + -0xf8);
          *puVar3 = uVar8;
          puVar3[3] = uVar7;
          puVar3[2] = uVar9;
          *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
          uVar8 = unaff_x19[0x16];
          uVar9 = unaff_x19[0x17];
          uVar7 = unaff_x19[0x18];
          FUN_100e0609c(&stack0x00000370);
          if (unaff_x19[0x19] != -0x8000000000000000) {
            FUN_100e0c320();
          }
          *(undefined2 *)(unaff_x19 + 0x5a) = 0;
          *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
          *unaff_x20 = uVar8;
          unaff_x20[1] = uVar9;
          unaff_x20[2] = uVar7;
          unaff_x20[3] = puVar3;
          unaff_x20[4] = &UNK_10b229fe8;
          uVar5 = 1;
          goto LAB_1009f69f0;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa0);
      }
      goto LAB_1009f6e34;
    }
  }
  __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(&UNK_108cb4f2f,0xb9);
  __ZN3std7process4exit17h656c4fcb5bd11385E(1);
LAB_1009f6e34:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009f6e38);
  (*pcVar2)();
}

