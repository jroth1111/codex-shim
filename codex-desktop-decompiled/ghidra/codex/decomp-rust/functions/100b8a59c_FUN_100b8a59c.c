
/* WARNING: Removing unreachable block (ram,0x000100b89bfc) */
/* WARNING: Removing unreachable block (ram,0x000100b8a854) */
/* WARNING: Removing unreachable block (ram,0x000100b8ae80) */
/* WARNING: Removing unreachable block (ram,0x000100b8aeb8) */
/* WARNING: Removing unreachable block (ram,0x000100b8aee0) */
/* WARNING: Removing unreachable block (ram,0x000100b8aee4) */
/* WARNING: Removing unreachable block (ram,0x000100b8acf4) */
/* WARNING: Removing unreachable block (ram,0x000100b8afa8) */
/* WARNING: Removing unreachable block (ram,0x000100b8afe0) */
/* WARNING: Removing unreachable block (ram,0x000100b8b008) */
/* WARNING: Removing unreachable block (ram,0x000100b8b00c) */
/* WARNING: Removing unreachable block (ram,0x000100b8b018) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8a59c(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 uVar9;
  ulong uVar10;
  long unaff_x19;
  char *unaff_x20;
  long lVar11;
  undefined8 *unaff_x21;
  long lVar12;
  long *plVar13;
  undefined8 unaff_x22;
  long *plVar14;
  undefined1 *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  ulong *unaff_x26;
  undefined8 uVar15;
  undefined1 *unaff_x27;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  uint in_stack_00000040;
  uint in_stack_00000050;
  undefined1 *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  long *in_stack_00003180;
  long *in_stack_00003188;
  undefined1 *in_stack_00003190;
  undefined1 *in_stack_00003198;
  ulong in_stack_000031a0;
  undefined *in_stack_000031a8;
  undefined8 in_stack_000031b0;
  undefined8 in_stack_000031b8;
  undefined8 in_stack_000031c0;
  undefined8 in_stack_000031c8;
  undefined8 in_stack_000031d0;
  undefined8 in_stack_000031d8;
  undefined8 in_stack_000031e0;
  undefined8 in_stack_000031e8;
  undefined8 in_stack_000031f0;
  undefined8 in_stack_000031f8;
  undefined8 in_stack_00003200;
  undefined8 in_stack_00003208;
  undefined8 in_stack_00003210;
  undefined8 in_stack_00003218;
  undefined8 in_stack_00003220;
  ulong in_stack_0000dc20;
  undefined *in_stack_0000dc28;
  ulong in_stack_0000dc30;
  ulong in_stack_0000de00;
  long *in_stack_0000de08;
  long *in_stack_0000de10;
  undefined1 *in_stack_0000de18;
  undefined1 *in_stack_0000de20;
  ulong in_stack_0000de28;
  ulong in_stack_0000de30;
  ulong in_stack_0000e140;
  undefined8 in_stack_0000e148;
  undefined8 in_stack_0000e150;
  
code_r0x000100b8a59c:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003180,s__unsupported_remote_app_server_r_108ad0f85,&stack0x0000dc20);
  *(undefined1 *)(unaff_x19 + 0xf50) = 0;
  uVar15 = **(undefined8 **)(unaff_x19 + 0xf38);
  uVar3 = (*(undefined8 **)(unaff_x19 + 0xf38))[1];
  *(undefined1 **)(unaff_x19 + 0x1290) = unaff_x27;
  *(long **)(unaff_x19 + 0x12a0) = in_stack_00003188;
  *(long **)(unaff_x19 + 0x1298) = in_stack_00003180;
  *(undefined1 **)(unaff_x19 + 0x12a8) = in_stack_00003190;
  *(undefined1 **)(unaff_x19 + 0x12b0) = unaff_x27 + 3;
  *(undefined8 *)(unaff_x19 + 0x12f8) = 0xffffffffffff80a7;
  *(undefined8 *)(unaff_x19 + 0x1308) = in_stack_0000e148;
  *(ulong *)(unaff_x19 + 0x1300) = in_stack_0000e140;
  *(undefined8 *)(unaff_x19 + 0x1310) = in_stack_0000e150;
  *(undefined8 *)(unaff_x19 + 0x1338) = unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x1340) = uVar15;
  *(undefined8 *)(unaff_x19 + 0x1348) = uVar3;
  unaff_x20[0x408] = '\0';
  lVar12 = unaff_x19 + 0x1290;
  auVar18 = FUN_100b8de90(lVar12,in_stack_00000088);
  plVar13 = auVar18._8_8_;
  if ((auVar18._0_8_ & 1) == 0) {
    if (unaff_x20[0x408] == '\x03') {
      if ((*(long *)(unaff_x19 + 0x1408) != 6) &&
         (*(long *)(unaff_x19 + 0x1408) != 4 || *(short *)(unaff_x19 + 0x1430) != 0x12)) {
        (**(code **)(*(long *)(unaff_x19 + 0x1410) + 0x20))
                  (unaff_x19 + 0x1428,*(undefined8 *)(unaff_x19 + 0x1418),
                   *(undefined8 *)(unaff_x19 + 0x1420));
      }
      unaff_x20[0x409] = '\0';
      lVar12 = unaff_x19 + 0x1350;
LAB_100b8a6a4:
      FUN_100e3d46c(lVar12);
    }
    else if (unaff_x20[0x408] == '\0') goto LAB_100b8a6a4;
    if (plVar13 == (long *)0x0) {
      unaff_x24 = *(long **)(unaff_x19 + 0x10c8);
      if (*unaff_x24 == 1) {
        uVar10 = unaff_x24[1];
        if ((uVar10 & 3) != 1) goto LAB_100b8a724;
        puVar16 = (undefined8 *)(uVar10 - 1);
        uVar15 = *puVar16;
        puVar17 = *(undefined8 **)(uVar10 + 7);
        pcVar4 = (code *)*puVar17;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar15);
        }
        if (puVar17[1] != 0) {
          _free(uVar15);
        }
      }
      else {
        if ((*unaff_x24 != 0) || (unaff_x24[2] == 0)) goto LAB_100b8a724;
        puVar16 = (undefined8 *)unaff_x24[1];
      }
      _free(puVar16);
LAB_100b8a724:
      _free(unaff_x24);
LAB_100b8a734:
      if (*(long *)(unaff_x19 + 0x10b0) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x10b8));
      }
      if (((*(byte *)(unaff_x19 + 0xf50) & 1) != 0) &&
         ((in_stack_0000e140 & 0x7fffffffffffffff) != 0)) {
        _free(in_stack_0000e148);
      }
      *(undefined1 *)(unaff_x19 + 0xf50) = 0;
      *(undefined1 *)(unaff_x19 + 0xf55) = 0;
LAB_100b8a768:
      unaff_x27 = &stack0x00009350;
      uVar10 = *(long *)(unaff_x19 + 0xf60) + 0x8000000000000001U &
               *(long *)(unaff_x19 + 0xf60) >> 0x3f;
      if (1 < uVar10) {
        if (uVar10 == 2) {
          if ((*(byte *)(unaff_x19 + 0xf52) & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0xf68) != -0x8000000000000000) &&
               (*(long *)(unaff_x19 + 0xf68) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0xf70));
            }
            FUN_100de6690(unaff_x19 + 0xf80);
          }
        }
        else if ((*(byte *)(unaff_x19 + 0xf51) & 1) != 0) {
          FUN_100e37c3c(unaff_x19 + 0xf68);
        }
      }
      *(undefined2 *)(unaff_x19 + 0xf51) = 0;
      *(undefined2 *)(unaff_x19 + 0xf56) = 0;
      (**(code **)(*(long *)(unaff_x19 + 0x10d0) + 0x20))
                (unaff_x19 + 0x10e8,*(undefined8 *)(unaff_x19 + 0x10d8),
                 *(undefined8 *)(unaff_x19 + 0x10e0));
      uVar10 = *unaff_x26;
      if ((long)uVar10 < 6) goto LAB_100b89acc;
LAB_100b8a7b4:
      if (uVar10 == 6) goto LAB_100b8a7e0;
      if (uVar10 == 7) goto LAB_100b898c8;
      do {
        (**(code **)(*(long *)(unaff_x19 + 0xf00) + 0x20))
                  (unaff_x19 + 0xf18,*(undefined8 *)(unaff_x19 + 0xf08),
                   *(undefined8 *)(unaff_x19 + 0xf10));
        do {
          *(undefined1 *)(unaff_x19 + 0xf54) = 0;
LAB_100b8a7e0:
          *(undefined1 *)(unaff_x19 + 0xf53) = 0;
LAB_100b898c8:
          *(undefined2 *)(unaff_x19 + 0xf53) = 0;
          *(undefined8 *)(unaff_x19 + 0xf60) = *(undefined8 *)(unaff_x19 + 0xf30);
          FUN_101502664(&stack0x0000de00,*(undefined8 *)(unaff_x19 + 0xf30),in_stack_00000088);
          if (in_stack_0000de00 == 8) {
            *(undefined1 *)(unaff_x19 + 0xf58) = 3;
            goto LAB_100b8a938;
          }
          *(undefined2 *)(unaff_x19 + 0xf53) = 0x101;
          unaff_x26[1] = (ulong)in_stack_0000de08;
          *unaff_x26 = in_stack_0000de00;
          unaff_x26[3] = (ulong)in_stack_0000de18;
          unaff_x26[2] = (ulong)in_stack_0000de10;
          unaff_x26[5] = in_stack_0000de28;
          unaff_x26[4] = (ulong)in_stack_0000de20;
          unaff_x26[6] = in_stack_0000de30;
          uVar10 = *(ulong *)(unaff_x19 + 0xef8);
          if (3 < (long)uVar10) {
            if ((long)uVar10 < 6) {
              if (uVar10 == 5) goto LAB_100b89ac4;
              if ((((uint)in_stack_0000de28 & 0xffff) != 0x12) &&
                 (iVar6 = FUN_100f1c4e0(&stack0x00009350,in_stack_0000de10,in_stack_0000de18),
                 iVar6 != 0)) {
                func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x0000e040,&UNK_10b235000,
                                    &UNK_10b2346c0);
                goto LAB_100b8d32c;
              }
              puVar16 = (undefined8 *)_malloc(0x23);
              if (puVar16 == (undefined8 *)0x0) {
                func_0x0001087c9084(1,0x23);
                goto LAB_100b8d32c;
              }
              *(undefined4 *)((long)puVar16 + 0x1f) = 0x657a696c;
              puVar16[1] = 0x65736f6c63206e6f;
              *puVar16 = 0x697463656e6e6f63;
              puVar16[3] = 0x6c616974696e6920;
              puVar16[2] = 0x676e697275642064;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x0000dc20,s_remote_app_server_at_____closed_d_108ad128d,
                         &stack0x00009350);
              plVar13 = (long *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(6,&stack0x0000da40);
              _free(puVar16);
              in_stack_00003180 = in_stack_0000de08;
              in_stack_00003188 = in_stack_0000de10;
              in_stack_00003190 = in_stack_0000de18;
              in_stack_00003198 = in_stack_0000de20;
              in_stack_000031a0 = in_stack_0000de28;
              if ((short)in_stack_0000de28 != 0x12) {
                (*(code *)in_stack_0000de08[4])
                          (&stack0x00003198,in_stack_0000de10,in_stack_0000de18);
              }
            }
            else if (uVar10 == 6) {
              in_stack_00003180 = *(long **)(unaff_x19 + 0xf38);
              in_stack_00003188 = (long *)&DAT_100c7b3a0;
              in_stack_00003190 = &stack0x00009350;
              in_stack_00003198 =
                   &
                   __ZN64__LT_tungstenite__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h3070f71c62fe5785E
              ;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x0000dc20,s_remote_app_server_at______transp_108ad12c4,
                         &stack0x00003180);
              puVar8 = (ulong *)_malloc(0x18);
              if (puVar8 == (ulong *)0x0) {
                func_0x0001087c906c(8,0x18);
                goto LAB_100b8d32c;
              }
              *puVar8 = in_stack_0000dc20;
              puVar8[1] = (ulong)in_stack_0000dc28;
              puVar8[2] = in_stack_0000dc30;
              plVar13 = (long *)func_0x000106029c30(0x28,puVar8,&UNK_10b209118);
              FUN_100de8b24(&stack0x00009350);
            }
            else {
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x00003180,s_remote_app_server_at_____closed_d_108ad1227,
                         &stack0x0000dc20);
              plVar13 = (long *)__ZN3std2io5error5Error3new17h002dced88496ea8bE
                                          (0x25,&stack0x00009350);
            }
LAB_100b8a318:
            uVar10 = *unaff_x26;
            if (uVar10 == 7) goto LAB_100b8a91c;
            if ((uVar10 == 6) || ((*(byte *)(unaff_x19 + 0xf53) & 1) == 0)) goto LAB_100b8a918;
            if ((((*(byte *)(unaff_x19 + 0xf54) & 1) != 0) && ((uVar10 & 3) != 0)) &&
               ((uVar10 != 4 || (*(short *)(unaff_x19 + 0xf20) != 0x12)))) {
              (**(code **)(*(long *)(unaff_x19 + 0xf00) + 0x20))
                        (unaff_x19 + 0xf18,*(undefined8 *)(unaff_x19 + 0xf08),
                         *(undefined8 *)(unaff_x19 + 0xf10));
            }
            goto LAB_100b8a914;
          }
          if (2 < uVar10 - 1) {
            *(long **)(unaff_x19 + 0x10d8) = in_stack_0000de10;
            *(long **)(unaff_x19 + 0x10d0) = in_stack_0000de08;
            *(undefined1 **)(unaff_x19 + 0x10e8) = in_stack_0000de20;
            *(undefined1 **)(unaff_x19 + 0x10e0) = in_stack_0000de18;
            FUN_10065698c(&stack0x00003180,*(undefined8 *)(unaff_x19 + 0x10d8),
                          *(undefined8 *)(unaff_x19 + 0x10e0));
            unaff_x24 = *(long **)(unaff_x19 + 0xf38);
            if (in_stack_00003180 == (long *)0x8000000000000003) {
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x0000dc20,s_remote_app_server_at______sent_i_108ad133a,
                         &stack0x00009350);
              puVar8 = (ulong *)_malloc(0x18);
              if (puVar8 == (ulong *)0x0) {
                func_0x0001087c906c(8,0x18);
                goto LAB_100b8d32c;
              }
              *puVar8 = in_stack_0000dc20;
              puVar8[1] = (ulong)in_stack_0000dc28;
              puVar8[2] = in_stack_0000dc30;
              plVar13 = (long *)func_0x000106029c30(0x28,puVar8,&UNK_10b209118);
              if (*in_stack_00003188 == 1) {
                FUN_100de21d4(in_stack_00003188 + 1);
              }
              else if ((*in_stack_00003188 == 0) && (in_stack_00003188[2] != 0)) {
                _free(in_stack_00003188[1]);
              }
              _free(in_stack_00003188);
              goto LAB_100b8a8a8;
            }
            *(undefined2 *)(unaff_x19 + 0xf51) = 0x101;
            *(undefined2 *)(unaff_x19 + 0xf56) = 0x101;
            *(long **)(unaff_x19 + 0xf60) = in_stack_00003180;
            *(long **)(unaff_x19 + 0xf68) = in_stack_00003188;
            *(undefined8 *)(unaff_x19 + 0xfd8) = in_stack_000031f8;
            *(undefined8 *)(unaff_x19 + 0xfd0) = in_stack_000031f0;
            *(undefined8 *)(unaff_x19 + 0xfe8) = in_stack_00003208;
            *(undefined8 *)(unaff_x19 + 0xfe0) = in_stack_00003200;
            *(undefined8 *)(unaff_x19 + 0xff8) = in_stack_00003218;
            *(undefined8 *)(unaff_x19 + 0xff0) = in_stack_00003210;
            *(undefined8 *)(unaff_x19 + 0x1000) = in_stack_00003220;
            *(undefined8 *)(unaff_x19 + 0xf98) = in_stack_000031b8;
            *(undefined8 *)(unaff_x19 + 0xf90) = in_stack_000031b0;
            *(undefined8 *)(unaff_x19 + 0xfa8) = in_stack_000031c8;
            *(undefined8 *)(unaff_x19 + 4000) = in_stack_000031c0;
            *(undefined8 *)(unaff_x19 + 0xfb8) = in_stack_000031d8;
            *(undefined8 *)(unaff_x19 + 0xfb0) = in_stack_000031d0;
            *(undefined8 *)(unaff_x19 + 0xfc8) = in_stack_000031e8;
            *(undefined8 *)(unaff_x19 + 0xfc0) = in_stack_000031e0;
            *(undefined1 **)(unaff_x19 + 0xf78) = in_stack_00003198;
            *(undefined1 **)(unaff_x19 + 0xf70) = in_stack_00003190;
            uVar10 = (ulong)((long)in_stack_00003180 + -0x7fffffffffffffff) &
                     (long)in_stack_00003180 >> 0x3f;
            *(undefined **)(unaff_x19 + 0xf88) = in_stack_000031a8;
            *(ulong *)(unaff_x19 + 0xf80) = in_stack_000031a0;
            if (1 < (long)uVar10) {
              if (uVar10 == 2) {
                plVar13 = *(long **)(unaff_x19 + 0xf40);
                if ((in_stack_00003188 == (long *)0x8000000000000000) !=
                    (*plVar13 == -0x8000000000000000)) goto LAB_100b8a768;
                if (in_stack_00003188 == (long *)0x8000000000000000) {
                  if (*(long *)(unaff_x19 + 0xf70) != plVar13[1]) goto LAB_100b8a768;
                }
                else if ((*(long *)(unaff_x19 + 0xf78) != plVar13[2]) ||
                        (iVar6 = _memcmp(*(long *)(unaff_x19 + 0xf70),plVar13[1]), iVar6 != 0))
                goto LAB_100b8a768;
                *(undefined1 *)(unaff_x19 + 0xf52) = 0;
                in_stack_000031a8 = *(undefined **)(unaff_x19 + 0xf90);
                in_stack_000031a0 = *(ulong *)(unaff_x19 + 0xf88);
                in_stack_000031b8 = *(undefined8 *)(unaff_x19 + 4000);
                in_stack_000031b0 = *(undefined8 *)(unaff_x19 + 0xf98);
                in_stack_000031c8 = *(undefined8 *)(unaff_x19 + 0xfb0);
                in_stack_000031c0 = *(undefined8 *)(unaff_x19 + 0xfa8);
                in_stack_000031d8 = *(undefined8 *)(unaff_x19 + 0xfc0);
                in_stack_000031d0 = *(undefined8 *)(unaff_x19 + 0xfb8);
                in_stack_00003188 = *(long **)(unaff_x19 + 0xf70);
                in_stack_00003180 = *(long **)(unaff_x19 + 0xf68);
                in_stack_00003198 = *(undefined1 **)(unaff_x19 + 0xf80);
                in_stack_00003190 = *(undefined1 **)(unaff_x19 + 0xf78);
                FUN_100e40a74(&stack0x00003180);
                plVar13 = (long *)0x0;
              }
              else {
                plVar13 = *(long **)(unaff_x19 + 0xf40);
                if ((*(long *)(unaff_x19 + 0xfd0) == -0x8000000000000000) !=
                    (*plVar13 == -0x8000000000000000)) goto LAB_100b8a768;
                if (*(long *)(unaff_x19 + 0xfd0) == -0x8000000000000000) {
                  if (*(long *)(unaff_x19 + 0xfd8) != plVar13[1]) goto LAB_100b8a768;
                }
                else if ((*(long *)(unaff_x19 + 0xfe0) != plVar13[2]) ||
                        (iVar6 = _memcmp(*(undefined8 *)(unaff_x19 + 0xfd8),plVar13[1]), iVar6 != 0)
                        ) goto LAB_100b8a768;
                *(undefined1 *)(unaff_x19 + 0xf51) = 0;
                in_stack_000031c8 = *(undefined8 *)(unaff_x19 + 0xfb0);
                in_stack_000031c0 = *(undefined8 *)(unaff_x19 + 0xfa8);
                in_stack_000031d8 = *(undefined8 *)(unaff_x19 + 0xfc0);
                in_stack_000031d0 = *(undefined8 *)(unaff_x19 + 0xfb8);
                in_stack_00003188 = *(long **)(unaff_x19 + 0xf70);
                in_stack_00003180 = *(long **)(unaff_x19 + 0xf68);
                in_stack_00003198 = *(undefined1 **)(unaff_x19 + 0xf80);
                in_stack_00003190 = *(undefined1 **)(unaff_x19 + 0xf78);
                in_stack_000031a8 = *(undefined **)(unaff_x19 + 0xf90);
                in_stack_000031a0 = *(ulong *)(unaff_x19 + 0xf88);
                in_stack_000031b8 = *(undefined8 *)(unaff_x19 + 4000);
                in_stack_000031b0 = *(undefined8 *)(unaff_x19 + 0xf98);
                FUN_100f3f484(&stack0x0000dc20,s_remote_app_server_at_____rejecte_108ad125b,
                              &stack0x00009350);
                plVar13 = (long *)FUN_100c358e0(&stack0x0000da40);
                FUN_100e37c3c(&stack0x00003180);
              }
              *(undefined2 *)(unaff_x19 + 0xf51) = 0;
              *(undefined2 *)(unaff_x19 + 0xf56) = 0;
              (**(code **)(*(long *)(unaff_x19 + 0x10d0) + 0x20))
                        (unaff_x19 + 0x10e8,*(undefined8 *)(unaff_x19 + 0x10d8),
                         *(undefined8 *)(unaff_x19 + 0x10e0));
              goto LAB_100b8a318;
            }
            if (uVar10 != 0) {
              *(undefined1 *)(unaff_x19 + 0xf56) = 0;
              __ZN174__LT_codex_app_server_protocol__protocol__common__ServerNotification_u20_as_u20_core__convert__TryFrom_LT_codex_app_server_protocol__jsonrpc_lite__JSONRPCNotification_GT__GT_8try_from17h988f0ff0bafe3135E
                        (&stack0x00003180,&stack0x0000bc90);
              unaff_x24 = in_stack_00003180;
              if (in_stack_00003180 == (long *)0x8000000000000041) {
                FUN_101bbf470(in_stack_00003188);
                _free(in_stack_00003188);
              }
              else {
                _memcpy(&stack0x00009350,&stack0x00003188,0x1f0);
                _memcpy(&stack0x000069a8,&stack0x00009350,0x1f0);
                plVar13 = *(long **)(unaff_x19 + 0xf48);
                lVar12 = plVar13[2];
                if (lVar12 == *plVar13) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9e2a1aeada705eecE(plVar13);
                }
                puVar16 = (undefined8 *)(plVar13[1] + lVar12 * 0x1f8);
                *puVar16 = in_stack_00003180;
                _memcpy(puVar16 + 1,&stack0x00009350,0x1f0);
                plVar13[2] = lVar12 + 1;
              }
              goto LAB_100b8a768;
            }
            *(undefined1 *)(unaff_x19 + 0xf57) = 0;
            *(undefined1 *)(unaff_x19 + 0xf55) = 1;
            *(undefined8 *)(unaff_x19 + 0x10a8) = *(undefined8 *)(unaff_x19 + 0x1000);
            *(undefined8 *)(unaff_x19 + 0x1090) = *(undefined8 *)(unaff_x19 + 0xfe8);
            *(undefined8 *)(unaff_x19 + 0x1088) = *(undefined8 *)(unaff_x19 + 0xfe0);
            *(undefined8 *)(unaff_x19 + 0x10a0) = *(undefined8 *)(unaff_x19 + 0xff8);
            *(undefined8 *)(unaff_x19 + 0x1098) = *(undefined8 *)(unaff_x19 + 0xff0);
            *(undefined8 *)(unaff_x19 + 0x1050) = *(undefined8 *)(unaff_x19 + 0xfa8);
            *(undefined8 *)(unaff_x19 + 0x1048) = *(undefined8 *)(unaff_x19 + 4000);
            *(undefined8 *)(unaff_x19 + 0x1060) = *(undefined8 *)(unaff_x19 + 0xfb8);
            *(undefined8 *)(unaff_x19 + 0x1058) = *(undefined8 *)(unaff_x19 + 0xfb0);
            *(undefined8 *)(unaff_x19 + 0x1070) = *(undefined8 *)(unaff_x19 + 0xfc8);
            *(undefined8 *)(unaff_x19 + 0x1068) = *(undefined8 *)(unaff_x19 + 0xfc0);
            *(undefined8 *)(unaff_x19 + 0x1080) = *(undefined8 *)(unaff_x19 + 0xfd8);
            *(undefined8 *)(unaff_x19 + 0x1078) = *(undefined8 *)(unaff_x19 + 0xfd0);
            *(undefined8 *)(unaff_x19 + 0x1010) = *(undefined8 *)(unaff_x19 + 0xf68);
            *(undefined8 *)(unaff_x19 + 0x1008) = *(undefined8 *)(unaff_x19 + 0xf60);
            *(undefined8 *)(unaff_x19 + 0x1020) = *(undefined8 *)(unaff_x19 + 0xf78);
            *(undefined8 *)(unaff_x19 + 0x1018) = *(undefined8 *)(unaff_x19 + 0xf70);
            *(undefined8 *)(unaff_x19 + 0x1030) = *(undefined8 *)(unaff_x19 + 0xf88);
            *(undefined8 *)(unaff_x19 + 0x1028) = *(undefined8 *)(unaff_x19 + 0xf80);
            *(undefined8 *)(unaff_x19 + 0x1040) = *(undefined8 *)(unaff_x19 + 0xf98);
            *(undefined8 *)(unaff_x19 + 0x1038) = *(undefined8 *)(unaff_x19 + 0xf90);
            if (*(long *)(unaff_x19 + 0x1020) == -0x8000000000000000) {
              in_stack_0000e150 = *(undefined8 *)(unaff_x19 + 0xf88);
              in_stack_0000e148 = *(undefined8 *)(unaff_x19 + 0xf80);
              in_stack_0000e140 = *(ulong *)(unaff_x19 + 0xf78);
            }
            else {
              func_0x000100025ae8(&stack0x0000e140,unaff_x19 + 0x1020);
            }
            unaff_x24 = (long *)0x1;
            *(undefined1 *)(unaff_x19 + 0xf50) = 1;
            uVar10 = unaff_x19 + 0x10b0;
            uVar15 = *(undefined8 *)(unaff_x19 + 0x1010);
            lVar12 = *(long *)(unaff_x19 + 0x1018);
            if ((lVar12 != 0) && (unaff_x24 = (long *)_malloc(lVar12), unaff_x24 == (long *)0x0)) {
              func_0x0001087c9084(1,lVar12);
              goto LAB_100b8d32c;
            }
            _memcpy(unaff_x24,uVar15,lVar12);
            *(long *)(unaff_x19 + 0x10b0) = lVar12;
            *(long **)(unaff_x19 + 0x10b8) = unaff_x24;
            *(long *)(unaff_x19 + 0x10c0) = lVar12;
            *(undefined1 *)(unaff_x19 + 0xf55) = 0;
            in_stack_00003208 = *(undefined8 *)(unaff_x19 + 0x1090);
            in_stack_00003200 = *(undefined8 *)(unaff_x19 + 0x1088);
            in_stack_00003218 = *(undefined8 *)(unaff_x19 + 0x10a0);
            in_stack_00003210 = *(undefined8 *)(unaff_x19 + 0x1098);
            in_stack_00003220 = *(undefined8 *)(unaff_x19 + 0x10a8);
            in_stack_000031c8 = *(undefined8 *)(unaff_x19 + 0x1050);
            in_stack_000031c0 = *(undefined8 *)(unaff_x19 + 0x1048);
            in_stack_000031d8 = *(undefined8 *)(unaff_x19 + 0x1060);
            in_stack_000031d0 = *(undefined8 *)(unaff_x19 + 0x1058);
            in_stack_000031e8 = *(undefined8 *)(unaff_x19 + 0x1070);
            in_stack_000031e0 = *(undefined8 *)(unaff_x19 + 0x1068);
            in_stack_000031f8 = *(undefined8 *)(unaff_x19 + 0x1080);
            in_stack_000031f0 = *(undefined8 *)(unaff_x19 + 0x1078);
            in_stack_00003188 = *(long **)(unaff_x19 + 0x1010);
            in_stack_00003180 = *(long **)(unaff_x19 + 0x1008);
            in_stack_00003198 = *(undefined1 **)(unaff_x19 + 0x1020);
            in_stack_00003190 = *(undefined1 **)(unaff_x19 + 0x1018);
            in_stack_000031a8 = *(undefined **)(unaff_x19 + 0x1030);
            in_stack_000031a0 = *(ulong *)(unaff_x19 + 0x1028);
            in_stack_000031b8 = *(undefined8 *)(unaff_x19 + 0x1040);
            in_stack_000031b0 = *(undefined8 *)(unaff_x19 + 0x1038);
            __ZN164__LT_codex_app_server_protocol__protocol__common__ServerRequest_u20_as_u20_core__convert__TryFrom_LT_codex_app_server_protocol__jsonrpc_lite__JSONRPCRequest_GT__GT_8try_from17h9c69cd3485566ad3E
                      (unaff_x19 + 0x10f0,&stack0x00003180);
            unaff_x27 = (undefined1 *)0x8000000000000002;
            if (*(long *)(unaff_x19 + 0x10f0) != -0x7ffffffffffffff7) {
              _memcpy(&stack0x00003188,unaff_x19 + 0x10f0,0x1a0);
              puVar16 = *(undefined8 **)(unaff_x19 + 0xf48);
              in_stack_00003180 = (long *)0x8000000000000043;
              unaff_x24 = (long *)puVar16[2];
              if (unaff_x24 == (long *)*puVar16) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9e2a1aeada705eecE(puVar16);
              }
              _memcpy(puVar16[1] + (long)unaff_x24 * 0x1f8,&stack0x00003180,0x1f8);
              puVar16[2] = (undefined *)((long)unaff_x24 + 1);
              goto LAB_100b8a734;
            }
            *(undefined8 *)(unaff_x19 + 0x10c8) = *(undefined8 *)(unaff_x19 + 0x10f8);
            if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
              if (((1 < bRam000000010b628530 - 1) &&
                  ((unaff_x24 = (long *)&
                                        __ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                   , bRam000000010b628530 == 0 ||
                   (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                      (&
                                       __ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                                      ),
                   unaff_x24 = (long *)&
                                       __ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                   , cVar5 == '\0')))) ||
                 (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                                    ),
                 unaff_x24 = (long *)&
                                     __ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                 , (uVar7 & 1) == 0)) goto LAB_100b8a424;
              in_stack_00003180 = (long *)&stack0x0000da40;
              in_stack_00003188 = (long *)&UNK_10b208fd0;
              in_stack_00003190 = &stack0x0000d700;
              in_stack_00003198 = &UNK_10b218e98;
              in_stack_000031a8 = &UNK_10b2170c0;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                         ,&stack0x00009350);
              plVar13 = 
              ___ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
              ;
              in_stack_000031a0 = uVar10;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                in_stack_0000dc30 =
                     ___ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                     [5];
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                unaff_x24 = plRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  unaff_x24 = (long *)&UNK_109adfc03;
                }
                iVar6 = (**(code **)(puVar2 + 0x18))(unaff_x24,&stack0x0000dc20);
                if (iVar6 != 0) {
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (plVar13,unaff_x24,puVar2,&stack0x0000dc20,&stack0x00009350);
                }
              }
            }
            else {
LAB_100b8a424:
              plVar13 = 
              ___ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                uVar7 = ___ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                        [5];
                puVar2 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar2 = &UNK_10b3c24c8;
                }
                plVar14 = plRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  plVar14 = (long *)&UNK_109adfc03;
                }
                iVar6 = (**(code **)(puVar2 + 0x18))(plVar14,&stack0x0000e2a0);
                unaff_x24 = plVar13;
                if (iVar6 != 0) {
                  in_stack_00003180 = (long *)&stack0x0000da40;
                  in_stack_00003188 = (long *)&UNK_10b208fd0;
                  in_stack_00003190 = &stack0x0000d700;
                  in_stack_00003198 = &UNK_10b218e98;
                  in_stack_000031a8 = &UNK_10b2170c0;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (plVar13,plVar14,puVar2,&stack0x0000dc20,&stack0x00009350);
                  in_stack_000031a0 = uVar10;
                  in_stack_0000dc30 = uVar7;
                }
              }
            }
            unaff_x22 = *(undefined8 *)(unaff_x19 + 0xf30);
            in_stack_0000dc28 = &DAT_10112965c;
            in_stack_0000dc20 = uVar10;
            goto code_r0x000100b8a59c;
          }
LAB_100b89ac4:
          if (5 < (long)uVar10) goto LAB_100b8a7b4;
LAB_100b89acc:
        } while ((uVar10 == 0) || (uVar10 == 4));
      } while( true );
    }
    plVar14 = *(long **)(unaff_x19 + 0x10c8);
    if (*plVar14 == 1) {
      FUN_100de21d4(plVar14 + 1);
    }
    else if ((*plVar14 == 0) && (plVar14[2] != 0)) {
      _free(plVar14[1]);
    }
    _free(plVar14);
    if (*(long *)(unaff_x19 + 0x10b0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x10b8));
    }
    *(undefined1 *)(unaff_x19 + 0xf50) = 0;
    *(undefined1 *)(unaff_x19 + 0xf55) = 0;
LAB_100b8a8a8:
    *(undefined2 *)(unaff_x19 + 0xf51) = 0;
    *(undefined2 *)(unaff_x19 + 0xf56) = 0;
    (**(code **)(*(long *)(unaff_x19 + 0x10d0) + 0x20))
              (unaff_x19 + 0x10e8,*(undefined8 *)(unaff_x19 + 0x10d8),
               *(undefined8 *)(unaff_x19 + 0x10e0));
    uVar10 = *unaff_x26;
    if ((long)uVar10 < 6) {
      if ((uVar10 != 0) && (uVar10 != 4)) {
LAB_100b8a8fc:
        (**(code **)(*(long *)(unaff_x19 + 0xf00) + 0x20))
                  (unaff_x19 + 0xf18,*(undefined8 *)(unaff_x19 + 0xf08),
                   *(undefined8 *)(unaff_x19 + 0xf10));
      }
LAB_100b8a914:
      *(undefined1 *)(unaff_x19 + 0xf54) = 0;
LAB_100b8a918:
      *(undefined1 *)(unaff_x19 + 0xf53) = 0;
    }
    else {
      if (uVar10 == 6) goto LAB_100b8a918;
      if (uVar10 != 7) goto LAB_100b8a8fc;
    }
LAB_100b8a91c:
    *(undefined2 *)(unaff_x19 + 0xf53) = 0;
    bVar1 = false;
    *(undefined1 *)(unaff_x19 + 0xf58) = 1;
    unaff_x24 = plVar13;
    goto LAB_100b8a95c;
  }
  *(undefined1 *)(unaff_x19 + 0xf58) = 4;
LAB_100b8a938:
  bVar1 = true;
  uVar10 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                     ((in_stack_00000040 | in_stack_00000050) & 1,unaff_x19 + 0xe88,
                      in_stack_00000088);
  if ((uVar10 & 1) != 0) {
    uVar9 = 4;
LAB_100b87f54:
    *unaff_x23 = uVar9;
LAB_100b87f58:
    *in_stack_00000070 = 3;
    *unaff_x21 = 0x8000000000000001;
    uVar9 = 4;
LAB_100b88c6c:
    *(undefined1 *)(unaff_x19 + 0x180) = uVar9;
    return;
  }
LAB_100b8a95c:
  FUN_100d75b24();
  FUN_100de8a5c(unaff_x19 + 0xe88);
  if (bVar1) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00003180,s_0timed_out_waiting_for_initializ_108ad1305,&stack0x000069a0);
    unaff_x24 = (long *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(0x16,&stack0x00003180);
LAB_100b8aab8:
    uVar15 = *(undefined8 *)(unaff_x19 + 0xe70);
    FUN_100e28b64(uVar15,*(undefined8 *)(unaff_x19 + 0xe78));
    if (*(long *)(unaff_x19 + 0xe68) != 0) {
      _free(uVar15);
    }
    if ((*(ulong *)(unaff_x19 + 0xe50) & 0x7fffffffffffffff) != 0) {
      lVar12 = -0x8000000000000000;
LAB_100b8aafc:
      _free(*(undefined8 *)(unaff_x19 + 0xe58));
      goto LAB_100b8ab04;
    }
    *(undefined1 *)(unaff_x19 + 0xe81) = 0;
    *(undefined1 *)(unaff_x19 + 0xe80) = 1;
    lVar12 = -0x8000000000000000;
  }
  else {
    if (unaff_x24 != (long *)0x0) goto LAB_100b8aab8;
    uVar15 = *(undefined8 *)(unaff_x19 + 0xe28);
    __ZN23codex_app_server_client6remote45jsonrpc_notification_from_client_notification17hb7a79451c9a48ad0E
              (&stack0x00003180);
    *(undefined8 *)(unaff_x19 + 0xe88) = 0x8000000000000000;
    *(undefined **)(unaff_x19 + 0xeb8) = in_stack_000031a8;
    *(ulong *)(unaff_x19 + 0xeb0) = in_stack_000031a0;
    *(undefined8 *)(unaff_x19 + 0xec8) = in_stack_000031b8;
    *(undefined8 *)(unaff_x19 + 0xec0) = in_stack_000031b0;
    *(undefined8 *)(unaff_x19 + 0xed8) = in_stack_000031c8;
    *(undefined8 *)(unaff_x19 + 0xed0) = in_stack_000031c0;
    *(undefined8 *)(unaff_x19 + 0xee8) = in_stack_000031d8;
    *(undefined8 *)(unaff_x19 + 0xee0) = in_stack_000031d0;
    *(long **)(unaff_x19 + 0xe98) = in_stack_00003188;
    *(long **)(unaff_x19 + 0xe90) = in_stack_00003180;
    *(undefined1 **)(unaff_x19 + 0xea8) = in_stack_00003198;
    *(undefined1 **)(unaff_x19 + 0xea0) = in_stack_00003190;
    *(undefined8 *)(unaff_x19 + 0xf30) = uVar15;
    *(undefined8 *)(unaff_x19 + 0xf38) = *(undefined8 *)(unaff_x19 + 0xe30);
    *(undefined8 *)(unaff_x19 + 0xf40) = *(undefined8 *)(unaff_x19 + 0xe38);
    *unaff_x20 = '\0';
    lVar12 = unaff_x19 + 0xe88;
    auVar18 = FUN_100b8de90(lVar12,in_stack_00000088);
    unaff_x24 = auVar18._8_8_;
    if ((auVar18._0_8_ & 1) != 0) {
      uVar9 = 5;
      goto LAB_100b87f54;
    }
    if (*unaff_x20 == '\x03') {
      if ((*(long *)(unaff_x19 + 0x1000) != 6) &&
         ((*(long *)(unaff_x19 + 0x1000) != 4 || (*(short *)(unaff_x19 + 0x1028) != 0x12)))) {
        (**(code **)(*(long *)(unaff_x19 + 0x1008) + 0x20))
                  (unaff_x19 + 0x1020,*(undefined8 *)(unaff_x19 + 0x1010),
                   *(undefined8 *)(unaff_x19 + 0x1018));
      }
      unaff_x20[1] = '\0';
      lVar12 = unaff_x19 + 0xf48;
LAB_100b8aaac:
      FUN_100e3d46c(lVar12);
    }
    else if (*unaff_x20 == '\0') goto LAB_100b8aaac;
    if (unaff_x24 != (long *)0x0) goto LAB_100b8aab8;
    lVar12 = *(long *)(unaff_x19 + 0xe68);
    unaff_x24 = *(long **)(unaff_x19 + 0xe70);
    in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0xe78);
    if ((*(ulong *)(unaff_x19 + 0xe50) & 0x7fffffffffffffff) != 0) goto LAB_100b8aafc;
LAB_100b8ab04:
    *(undefined1 *)(unaff_x19 + 0xe81) = 0;
    *(undefined1 *)(unaff_x19 + 0xe80) = 1;
    if (lVar12 == -0x7fffffffffffffff) goto LAB_100b87f58;
  }
  FUN_100d243e4();
  if (lVar12 == -0x8000000000000000) {
    FUN_100d4014c(unaff_x19 + 0x938);
    FUN_100e0df24(unaff_x19 + 0x7e8);
    unaff_x20[0x411] = '\0';
    unaff_x20[0x412] = '\0';
    if (*(long *)(unaff_x19 + 2000) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x7d8));
    }
    unaff_x20[0x413] = '\0';
    *in_stack_00000070 = 1;
    FUN_100d9901c(in_stack_00000078);
    *(undefined1 *)(unaff_x19 + 0x184) = 0;
    *(undefined1 *)(unaff_x19 + 0x185) = 0;
    *(undefined1 *)(unaff_x19 + 0x181) = 0;
    if (*(long *)(unaff_x19 + 0x88) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x90));
    }
    if (*(long *)(unaff_x19 + 0xa0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xa8));
    }
    lVar12 = *(long *)(unaff_x19 + 0xc0);
    lVar11 = *(long *)(unaff_x19 + 200);
    if (lVar11 != 0) {
      puVar16 = (undefined8 *)(lVar12 + 8);
      do {
        if (puVar16[-1] != 0) {
          _free(*puVar16);
        }
        puVar16 = puVar16 + 3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    if (*(long *)(unaff_x19 + 0xb8) != 0) {
      _free(lVar12);
    }
    *(undefined2 *)(unaff_x19 + 0x186) = 0;
    *(undefined1 *)(unaff_x19 + 0x188) = 0;
    *unaff_x21 = 0x8000000000000000;
    unaff_x21[1] = unaff_x24;
    unaff_x21[2] = 0;
    unaff_x21[3] = in_stack_00000088;
    unaff_x21[4] = unaff_x25;
    unaff_x21[5] = unaff_x26;
    uVar9 = 1;
    unaff_x21[6] = unaff_x27;
    goto LAB_100b88c6c;
  }
  FUN_100fd27f8(*(undefined8 *)(unaff_x19 + 0x7c8));
  func_0x000100fd3504();
  unaff_x20[0x411] = '\0';
  unaff_x20[0x413] = '\0';
  _memcpy(&stack0x0000bc90,unaff_x19 + 0x7e8,0x5b0);
  do {
    lVar12 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar12;
  } while (bVar1);
  _memcpy(&stack0x00009360,&stack0x0000bc90,0x5c8);
  puVar8 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar8[9] == '\x01') {
LAB_100b8ad14:
    _memcpy(&stack0x000069a0,&stack0x00009350,0xd08);
    if (0x7ffffffffffffffe < *puVar8) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100b8d32c;
    }
    *puVar8 = *puVar8 + 1;
    uVar10 = puVar8[1];
    _memcpy(&stack0x00000640,&stack0x00009350,0xd08);
    if (uVar10 != 2) {
      if ((uVar10 & 1) == 0) {
        plVar13 = (long *)puVar8[2];
        lVar12 = *plVar13;
        *plVar13 = lVar12 + 1;
        if ((-1 < lVar12) &&
           ((plVar13 = (long *)plVar13[0x5e], plVar13 == (long *)0x0 ||
            (lVar12 = *plVar13, *plVar13 = lVar12 + 1, -1 < lVar12)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0xcf8);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0xcfc);
          _posix_memalign(&stack0x0000de00,0x80,0xd80);
          func_0x0001087c906c(0x80,0xd80);
        }
      }
      else {
        plVar13 = (long *)puVar8[2];
        lVar12 = *plVar13;
        *plVar13 = lVar12 + 1;
        if ((-1 < lVar12) &&
           ((plVar13 = (long *)plVar13[0x4a], plVar13 == (long *)0x0 ||
            (lVar12 = *plVar13, *plVar13 = lVar12 + 1, -1 < lVar12)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0xcf8);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0xcfc);
          _posix_memalign(&stack0x0000de00,0x80,0xd80);
          func_0x0001087c906c(0x80,0xd80);
        }
      }
      goto LAB_100b8d32c;
    }
    FUN_100da7f70(&stack0x00000650);
    *puVar8 = *puVar8 - 1;
  }
  else {
    if ((char)puVar8[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar8,&DAT_100c35d48);
      *(undefined1 *)(puVar8 + 9) = 1;
      goto LAB_100b8ad14;
    }
    FUN_100da7f70(&stack0x00009360);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00003180,&UNK_10b230bb0);
LAB_100b8d32c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8d330);
  (*pcVar4)();
}

