
void FUN_1009f66f0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  undefined8 uVar4;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  long in_stack_00000370;
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
  long in_stack_000004c0;
  undefined8 in_stack_000004c8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x100,s_auth__mode_ChatGPT_account_id__108acd824,&stack0x000004e0);
  uVar4 = *(undefined8 *)(unaff_x29 + -0xf8);
  uVar5 = *(undefined8 *)(unaff_x29 + -0x100);
  uVar3 = *(undefined8 *)(unaff_x29 + -0xf0);
  FUN_1009f8e14(&stack0x00000410);
  if (in_stack_000004c0 != 0) {
    _free(in_stack_000004c8);
  }
  if ((in_stack_00000370 < 0) && (2 < in_stack_00000370 + 0x7fffffffffffffffU)) {
    __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(&UNK_108cb4f2f,0xb9);
    __ZN3std7process4exit17h656c4fcb5bd11385E(1);
  }
  else {
    auVar14 = __ZN20codex_model_provider4auth23auth_provider_from_auth17h1d4b85161056ffcaE
                        (&stack0x00000370);
    *(undefined1 *)(unaff_x19 + 0x5a) = 0;
    uVar6 = unaff_x19[0xc];
    uVar10 = unaff_x19[0xf];
    uVar8 = unaff_x19[0xe];
    *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19[0xd];
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x88) = uVar10;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar8;
    uVar6 = unaff_x19[0x10];
    *(undefined8 *)(unaff_x29 + -0x78) = unaff_x19[0x11];
    *(undefined8 *)(unaff_x29 + -0x80) = uVar6;
    uVar6 = unaff_x19[4];
    uVar10 = unaff_x19[7];
    uVar8 = unaff_x19[6];
    *(undefined8 *)(unaff_x29 + -0xd8) = unaff_x19[5];
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar6;
    *(undefined8 *)(unaff_x29 + -200) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar8;
    uVar10 = unaff_x19[8];
    uVar8 = unaff_x19[0xb];
    uVar6 = unaff_x19[10];
    *(undefined8 *)(unaff_x29 + -0xb8) = unaff_x19[9];
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar8;
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar6;
    uVar10 = *unaff_x19;
    uVar8 = unaff_x19[3];
    uVar6 = unaff_x19[2];
    *(undefined8 *)(unaff_x29 + -0xf8) = unaff_x19[1];
    *(undefined8 *)(unaff_x29 + -0x100) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xe8) = uVar8;
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar6;
    __ZN24codex_cloud_tasks_client4http10HttpClient18with_auth_provider17hcb32d172f92cae01E
              (&stack0x00000410,unaff_x29 + -0x100,auVar14._0_8_,auVar14._8_8_);
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
    unaff_x19[1] = uVar4;
    *unaff_x19 = uVar5;
    unaff_x19[3] = in_stack_00000428;
    unaff_x19[2] = uVar3;
    __ZN11codex_login4auth7manager9CodexAuth14get_account_id17h3938ba2de81bdca4E
              (&stack0x000004a8,&stack0x00000370);
    if (in_stack_000004a8 != -0x8000000000000000) {
      lVar9 = unaff_x21[1];
      lVar7 = *unaff_x21;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x100,s__auth__set_ChatGPT_Account_Id_he_108acd845,&stack0x000004e0);
      FUN_1009f8e14(&stack0x00000410);
      if (lVar7 != 0) {
        _free(lVar9);
      }
    }
    uVar5 = unaff_x19[0xd];
    uVar3 = unaff_x19[0xc];
    uVar6 = unaff_x19[0xf];
    uVar4 = unaff_x19[0xe];
    uVar11 = unaff_x19[9];
    uVar10 = unaff_x19[8];
    uVar8 = unaff_x19[10];
    *(undefined8 *)(unaff_x29 + -0x98) = unaff_x19[0xb];
    *(undefined8 *)(unaff_x29 + -0xa0) = uVar8;
    *(undefined8 *)(unaff_x29 + -0x88) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x90) = uVar3;
    uVar5 = unaff_x19[0x11];
    uVar3 = unaff_x19[0x10];
    *(undefined8 *)(unaff_x29 + -0x78) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x80) = uVar4;
    *(undefined8 *)(unaff_x29 + -0x68) = uVar5;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
    uVar5 = unaff_x19[5];
    uVar3 = unaff_x19[4];
    uVar6 = unaff_x19[7];
    uVar4 = unaff_x19[6];
    uVar13 = unaff_x19[1];
    uVar12 = *unaff_x19;
    uVar8 = unaff_x19[2];
    *(undefined8 *)(unaff_x29 + -0xd8) = unaff_x19[3];
    *(undefined8 *)(unaff_x29 + -0xe0) = uVar8;
    *(undefined8 *)(unaff_x29 + -200) = uVar5;
    *(undefined8 *)(unaff_x29 + -0xd0) = uVar3;
    *(undefined1 *)(unaff_x19 + 0x5a) = 0;
    *(undefined8 *)(unaff_x29 + -0xb8) = uVar6;
    *(undefined8 *)(unaff_x29 + -0xc0) = uVar4;
    *(undefined8 *)(unaff_x29 + -0xa8) = uVar11;
    *(undefined8 *)(unaff_x29 + -0xb0) = uVar10;
    *(undefined8 *)(unaff_x29 + -0xf8) = 1;
    *(undefined8 *)(unaff_x29 + -0x100) = 1;
    *(undefined8 *)(unaff_x29 + -0xe8) = uVar13;
    *(undefined8 *)(unaff_x29 + -0xf0) = uVar12;
    puVar2 = (undefined8 *)_malloc(0xa0);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *(undefined8 *)(unaff_x29 + -0xa0);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x88);
      uVar5 = *(undefined8 *)(unaff_x29 + -0x90);
      puVar2[0xd] = *(undefined8 *)(unaff_x29 + -0x98);
      puVar2[0xc] = uVar3;
      puVar2[0xf] = uVar4;
      puVar2[0xe] = uVar5;
      uVar3 = *(undefined8 *)(unaff_x29 + -0x80);
      uVar4 = *(undefined8 *)(unaff_x29 + -0x68);
      uVar5 = *(undefined8 *)(unaff_x29 + -0x70);
      puVar2[0x11] = *(undefined8 *)(unaff_x29 + -0x78);
      puVar2[0x10] = uVar3;
      puVar2[0x13] = uVar4;
      puVar2[0x12] = uVar5;
      uVar3 = *(undefined8 *)(unaff_x29 + -0xe0);
      uVar4 = *(undefined8 *)(unaff_x29 + -200);
      uVar5 = *(undefined8 *)(unaff_x29 + -0xd0);
      puVar2[5] = *(undefined8 *)(unaff_x29 + -0xd8);
      puVar2[4] = uVar3;
      puVar2[7] = uVar4;
      puVar2[6] = uVar5;
      uVar3 = *(undefined8 *)(unaff_x29 + -0xc0);
      uVar4 = *(undefined8 *)(unaff_x29 + -0xa8);
      uVar5 = *(undefined8 *)(unaff_x29 + -0xb0);
      puVar2[9] = *(undefined8 *)(unaff_x29 + -0xb8);
      puVar2[8] = uVar3;
      puVar2[0xb] = uVar4;
      puVar2[10] = uVar5;
      uVar3 = *(undefined8 *)(unaff_x29 + -0x100);
      uVar4 = *(undefined8 *)(unaff_x29 + -0xe8);
      uVar5 = *(undefined8 *)(unaff_x29 + -0xf0);
      puVar2[1] = *(undefined8 *)(unaff_x29 + -0xf8);
      *puVar2 = uVar3;
      puVar2[3] = uVar4;
      puVar2[2] = uVar5;
      *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
      uVar3 = unaff_x19[0x16];
      uVar5 = unaff_x19[0x17];
      uVar4 = unaff_x19[0x18];
      FUN_100e0609c(&stack0x00000370);
      if (unaff_x19[0x19] != -0x8000000000000000) {
        FUN_100e0c320();
      }
      *(undefined2 *)(unaff_x19 + 0x5a) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
      *unaff_x20 = uVar3;
      unaff_x20[1] = uVar5;
      unaff_x20[2] = uVar4;
      unaff_x20[3] = puVar2;
      unaff_x20[4] = &UNK_10b229fe8;
      *(undefined1 *)((long)unaff_x19 + 0x2d3) = 1;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xa0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009f6e38);
  (*pcVar1)();
}

