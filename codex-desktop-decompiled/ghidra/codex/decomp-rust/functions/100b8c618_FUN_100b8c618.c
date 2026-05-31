
/* WARNING: Removing unreachable block (ram,0x000100b8bc98) */
/* WARNING: Removing unreachable block (ram,0x000100b8c8bc) */
/* WARNING: Removing unreachable block (ram,0x000100b8cef0) */
/* WARNING: Removing unreachable block (ram,0x000100b8cf24) */
/* WARNING: Removing unreachable block (ram,0x000100b8cf4c) */
/* WARNING: Removing unreachable block (ram,0x000100b8cf50) */
/* WARNING: Removing unreachable block (ram,0x000100b8cd64) */
/* WARNING: Removing unreachable block (ram,0x000100b8d018) */
/* WARNING: Removing unreachable block (ram,0x000100b8d04c) */
/* WARNING: Removing unreachable block (ram,0x000100b8d074) */
/* WARNING: Removing unreachable block (ram,0x000100b8d078) */
/* WARNING: Removing unreachable block (ram,0x000100b8d084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b8c618(void)

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
  long lVar11;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined1 *unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  ulong *unaff_x26;
  undefined8 uVar16;
  undefined1 *unaff_x27;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  uint in_stack_00000040;
  uint in_stack_00000050;
  undefined1 *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000088;
  undefined1 *in_stack_00003180;
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
  undefined1 *in_stack_0000de08;
  long *in_stack_0000de10;
  undefined1 *in_stack_0000de18;
  undefined1 *in_stack_0000de20;
  ulong in_stack_0000de28;
  ulong in_stack_0000de30;
  ulong in_stack_0000e140;
  undefined8 in_stack_0000e148;
  undefined8 in_stack_0000e150;
  
code_r0x000100b8c618:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00003180,s__unsupported_remote_app_server_r_108ad0f85,&stack0x0000dc20);
  *(undefined1 *)(unaff_x19 + 0x700) = 0;
  uVar16 = **(undefined8 **)(unaff_x19 + 0x6e8);
  uVar3 = (*(undefined8 **)(unaff_x19 + 0x6e8))[1];
  *(undefined1 **)(unaff_x19 + 0xa40) = unaff_x27;
  *(long **)(unaff_x19 + 0xa50) = in_stack_00003188;
  *(undefined1 **)(unaff_x19 + 0xa48) = in_stack_00003180;
  *(undefined1 **)(unaff_x19 + 0xa58) = in_stack_00003190;
  *(undefined1 **)(unaff_x19 + 0xa60) = unaff_x27 + 3;
  *(undefined8 *)(unaff_x19 + 0xaa8) = 0xffffffffffff80a7;
  *(undefined8 *)(unaff_x19 + 0xab8) = in_stack_0000e148;
  *(ulong *)(unaff_x19 + 0xab0) = in_stack_0000e140;
  *(undefined8 *)(unaff_x19 + 0xac0) = in_stack_0000e150;
  *(undefined8 *)(unaff_x19 + 0xae8) = unaff_x20;
  *(undefined8 *)(unaff_x19 + 0xaf0) = uVar16;
  *(undefined8 *)(unaff_x19 + 0xaf8) = uVar3;
  *(undefined1 *)(unaff_x19 + 0xbf8) = 0;
  lVar12 = unaff_x19 + 0xa40;
  auVar18 = func_0x000100b8e2a4(lVar12,in_stack_00000088);
  plVar14 = auVar18._8_8_;
  if ((auVar18._0_8_ & 1) == 0) {
    if (*(char *)(unaff_x19 + 0xbf8) == '\x03') {
      if ((*(long *)(unaff_x19 + 3000) != 6) &&
         (*(long *)(unaff_x19 + 3000) != 4 || *(short *)(unaff_x19 + 0xbe0) != 0x12)) {
        (**(code **)(*(long *)(unaff_x19 + 0xbc0) + 0x20))
                  (unaff_x19 + 0xbd8,*(undefined8 *)(unaff_x19 + 0xbc8),
                   *(undefined8 *)(unaff_x19 + 0xbd0));
      }
      *(undefined1 *)(unaff_x19 + 0xbf9) = 0;
      lVar12 = unaff_x19 + 0xb00;
LAB_100b8c70c:
      FUN_100e3d46c(lVar12);
    }
    else if (*(char *)(unaff_x19 + 0xbf8) == '\0') goto LAB_100b8c70c;
    if (plVar14 == (long *)0x0) {
      unaff_x24 = *(long **)(unaff_x19 + 0x878);
      if (*unaff_x24 == 1) {
        uVar10 = unaff_x24[1];
        if ((uVar10 & 3) != 1) goto LAB_100b8c754;
        puVar17 = (undefined8 *)(uVar10 - 1);
        uVar16 = *puVar17;
        puVar13 = *(undefined8 **)(uVar10 + 7);
        pcVar4 = (code *)*puVar13;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar16);
        }
        if (puVar13[1] != 0) {
          _free(uVar16);
        }
      }
      else {
        if ((*unaff_x24 != 0) || (unaff_x24[2] == 0)) goto LAB_100b8c754;
        puVar17 = (undefined8 *)unaff_x24[1];
      }
      _free(puVar17);
LAB_100b8c754:
      _free(unaff_x24);
LAB_100b8c75c:
      unaff_x27 = &stack0x00009350;
      if (*(long *)(unaff_x19 + 0x860) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x868));
      }
      if (((*(byte *)(unaff_x19 + 0x700) & 1) != 0) &&
         ((in_stack_0000e140 & 0x7fffffffffffffff) != 0)) {
        _free(in_stack_0000e148);
      }
      *(undefined1 *)(unaff_x19 + 0x700) = 0;
      *(undefined1 *)(unaff_x19 + 0x705) = 0;
LAB_100b8c7a8:
      uVar10 = *(long *)(unaff_x19 + 0x710) + 0x8000000000000001U &
               *(long *)(unaff_x19 + 0x710) >> 0x3f;
      if (1 < uVar10) {
        if (uVar10 == 2) {
          if ((*(byte *)(unaff_x19 + 0x702) & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0x718) != -0x8000000000000000) &&
               (*(long *)(unaff_x19 + 0x718) != 0)) {
              _free(*(undefined8 *)(unaff_x19 + 0x720));
            }
            FUN_100de6690(unaff_x19 + 0x730);
          }
        }
        else if ((*(byte *)(unaff_x19 + 0x701) & 1) != 0) {
          FUN_100e37c3c(unaff_x19 + 0x718);
        }
      }
      *(undefined2 *)(unaff_x19 + 0x701) = 0;
      *(undefined2 *)(unaff_x19 + 0x706) = 0;
      (**(code **)(*(long *)(unaff_x19 + 0x880) + 0x20))
                (unaff_x19 + 0x898,*(undefined8 *)(unaff_x19 + 0x888),
                 *(undefined8 *)(unaff_x19 + 0x890));
      uVar10 = *unaff_x26;
      if ((long)uVar10 < 6) goto LAB_100b8bb68;
LAB_100b8c7f0:
      if (uVar10 == 6) goto LAB_100b8c81c;
      if (uVar10 == 7) goto LAB_100b8b968;
      do {
        (**(code **)(*(long *)(unaff_x19 + 0x6b0) + 0x20))
                  (unaff_x19 + 0x6c8,*(undefined8 *)(unaff_x19 + 0x6b8),
                   *(undefined8 *)(unaff_x19 + 0x6c0));
        do {
          *(undefined1 *)(unaff_x19 + 0x704) = 0;
LAB_100b8c81c:
          *(undefined1 *)(unaff_x19 + 0x703) = 0;
LAB_100b8b968:
          *(undefined2 *)(unaff_x19 + 0x703) = 0;
          *(undefined8 *)(unaff_x19 + 0x710) = *(undefined8 *)(unaff_x19 + 0x6e0);
          func_0x000101500c50(&stack0x0000de00,*(undefined8 *)(unaff_x19 + 0x6e0),in_stack_00000088)
          ;
          if (in_stack_0000de00 == 8) {
            *(undefined1 *)(unaff_x19 + 0x708) = 3;
            goto LAB_100b8c99c;
          }
          *(undefined2 *)(unaff_x19 + 0x703) = 0x101;
          unaff_x26[1] = (ulong)in_stack_0000de08;
          *unaff_x26 = in_stack_0000de00;
          unaff_x26[3] = (ulong)in_stack_0000de18;
          unaff_x26[2] = (ulong)in_stack_0000de10;
          unaff_x26[5] = in_stack_0000de28;
          unaff_x26[4] = (ulong)in_stack_0000de20;
          unaff_x26[6] = in_stack_0000de30;
          uVar10 = *(ulong *)(unaff_x19 + 0x6a8);
          if (3 < (long)uVar10) {
            if ((long)uVar10 < 6) {
              if (uVar10 == 5) goto LAB_100b8bb60;
              if ((((uint)in_stack_0000de28 & 0xffff) != 0x12) &&
                 (iVar6 = FUN_100f1c4e0(&stack0x00009350,in_stack_0000de10,in_stack_0000de18),
                 iVar6 != 0)) {
                func_0x000108a07a3c(&UNK_108cc3daa,0x37,&stack0x0000e040,&UNK_10b235000,
                                    &UNK_10b2346c0);
                goto LAB_100b8d32c;
              }
              puVar13 = (undefined8 *)_malloc(0x23);
              if (puVar13 == (undefined8 *)0x0) {
                func_0x0001087c9084(1,0x23);
                goto LAB_100b8d32c;
              }
              *(undefined4 *)((long)puVar13 + 0x1f) = 0x657a696c;
              puVar13[1] = 0x65736f6c63206e6f;
              *puVar13 = 0x697463656e6e6f63;
              puVar13[3] = 0x6c616974696e6920;
              puVar13[2] = 0x676e697275642064;
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x0000dc20,s_remote_app_server_at_____closed_d_108ad128d,
                         &stack0x00009350);
              plVar14 = (long *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(6,&stack0x0000da40);
              _free(puVar13);
              in_stack_00003180 = in_stack_0000de08;
              in_stack_00003188 = in_stack_0000de10;
              in_stack_00003190 = in_stack_0000de18;
              in_stack_00003198 = in_stack_0000de20;
              in_stack_000031a0 = in_stack_0000de28;
              if ((short)in_stack_0000de28 != 0x12) {
                (**(code **)(in_stack_0000de08 + 0x20))
                          (&stack0x00003198,in_stack_0000de10,in_stack_0000de18);
              }
            }
            else if (uVar10 == 6) {
              in_stack_00003180 = *(undefined1 **)(unaff_x19 + 0x6e8);
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
              plVar14 = (long *)func_0x000106029c30(0x28,puVar8,&UNK_10b209118);
              FUN_100de8b24(&stack0x00009350);
            }
            else {
              __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                        (&stack0x00003180,s_remote_app_server_at_____closed_d_108ad1227,
                         &stack0x0000dc20);
              plVar14 = (long *)__ZN3std2io5error5Error3new17h002dced88496ea8bE
                                          (0x25,&stack0x00009350);
            }
LAB_100b8c38c:
            uVar10 = *unaff_x26;
            if (uVar10 == 7) goto LAB_100b8c980;
            if ((uVar10 == 6) || ((*(byte *)(unaff_x19 + 0x703) & 1) == 0)) goto LAB_100b8c97c;
            if ((((*(byte *)(unaff_x19 + 0x704) & 1) != 0) && ((uVar10 & 3) != 0)) &&
               ((uVar10 != 4 || (*(short *)(unaff_x19 + 0x6d0) != 0x12)))) {
              (**(code **)(*(long *)(unaff_x19 + 0x6b0) + 0x20))
                        (unaff_x19 + 0x6c8,*(undefined8 *)(unaff_x19 + 0x6b8),
                         *(undefined8 *)(unaff_x19 + 0x6c0));
            }
            goto LAB_100b8c978;
          }
          if (2 < uVar10 - 1) {
            *(long **)(unaff_x19 + 0x888) = in_stack_0000de10;
            *(undefined1 **)(unaff_x19 + 0x880) = in_stack_0000de08;
            *(undefined1 **)(unaff_x19 + 0x898) = in_stack_0000de20;
            *(undefined1 **)(unaff_x19 + 0x890) = in_stack_0000de18;
            FUN_10065698c(&stack0x00003180,*(undefined8 *)(unaff_x19 + 0x888),
                          *(undefined8 *)(unaff_x19 + 0x890));
            if (in_stack_00003180 == (undefined1 *)0x8000000000000003) {
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
              plVar14 = (long *)func_0x000106029c30(0x28,puVar8,&UNK_10b209118);
              if (*in_stack_00003188 == 1) {
                FUN_100de21d4(in_stack_00003188 + 1);
              }
              else if ((*in_stack_00003188 == 0) && (in_stack_00003188[2] != 0)) {
                _free(in_stack_00003188[1]);
              }
              _free(in_stack_00003188);
              goto LAB_100b8c910;
            }
            *(undefined2 *)(unaff_x19 + 0x701) = 0x101;
            *(undefined2 *)(unaff_x19 + 0x706) = 0x101;
            *(undefined1 **)(unaff_x19 + 0x710) = in_stack_00003180;
            *(long **)(unaff_x19 + 0x718) = in_stack_00003188;
            *(undefined8 *)(unaff_x19 + 0x788) = in_stack_000031f8;
            *(undefined8 *)(unaff_x19 + 0x780) = in_stack_000031f0;
            *(undefined8 *)(unaff_x19 + 0x798) = in_stack_00003208;
            *(undefined8 *)(unaff_x19 + 0x790) = in_stack_00003200;
            *(undefined8 *)(unaff_x19 + 0x7a8) = in_stack_00003218;
            *(undefined8 *)(unaff_x19 + 0x7a0) = in_stack_00003210;
            *(undefined8 *)(unaff_x19 + 0x7b0) = in_stack_00003220;
            *(undefined8 *)(unaff_x19 + 0x748) = in_stack_000031b8;
            *(undefined8 *)(unaff_x19 + 0x740) = in_stack_000031b0;
            *(undefined8 *)(unaff_x19 + 0x758) = in_stack_000031c8;
            *(undefined8 *)(unaff_x19 + 0x750) = in_stack_000031c0;
            *(undefined8 *)(unaff_x19 + 0x768) = in_stack_000031d8;
            *(undefined8 *)(unaff_x19 + 0x760) = in_stack_000031d0;
            *(undefined8 *)(unaff_x19 + 0x778) = in_stack_000031e8;
            *(undefined8 *)(unaff_x19 + 0x770) = in_stack_000031e0;
            *(undefined1 **)(unaff_x19 + 0x728) = in_stack_00003198;
            *(undefined1 **)(unaff_x19 + 0x720) = in_stack_00003190;
            uVar10 = (ulong)(in_stack_00003180 + -0x7fffffffffffffff) &
                     (long)in_stack_00003180 >> 0x3f;
            *(undefined **)(unaff_x19 + 0x738) = in_stack_000031a8;
            *(ulong *)(unaff_x19 + 0x730) = in_stack_000031a0;
            if (1 < (long)uVar10) {
              if (uVar10 == 2) {
                plVar14 = *(long **)(unaff_x19 + 0x6f0);
                if ((in_stack_00003188 == (long *)0x8000000000000000) !=
                    (*plVar14 == -0x8000000000000000)) goto LAB_100b8c7a8;
                if (in_stack_00003188 == (long *)0x8000000000000000) {
                  if (*(long *)(unaff_x19 + 0x720) != plVar14[1]) goto LAB_100b8c7a8;
                }
                else if ((*(long *)(unaff_x19 + 0x728) != plVar14[2]) ||
                        (iVar6 = _memcmp(*(long *)(unaff_x19 + 0x720),plVar14[1]), iVar6 != 0))
                goto LAB_100b8c7a8;
                *(undefined1 *)(unaff_x19 + 0x702) = 0;
                in_stack_000031a8 = *(undefined **)(unaff_x19 + 0x740);
                in_stack_000031a0 = *(ulong *)(unaff_x19 + 0x738);
                in_stack_000031b8 = *(undefined8 *)(unaff_x19 + 0x750);
                in_stack_000031b0 = *(undefined8 *)(unaff_x19 + 0x748);
                in_stack_000031c8 = *(undefined8 *)(unaff_x19 + 0x760);
                in_stack_000031c0 = *(undefined8 *)(unaff_x19 + 0x758);
                in_stack_000031d8 = *(undefined8 *)(unaff_x19 + 0x770);
                in_stack_000031d0 = *(undefined8 *)(unaff_x19 + 0x768);
                in_stack_00003188 = *(long **)(unaff_x19 + 0x720);
                in_stack_00003180 = *(undefined1 **)(unaff_x19 + 0x718);
                in_stack_00003198 = *(undefined1 **)(unaff_x19 + 0x730);
                in_stack_00003190 = *(undefined1 **)(unaff_x19 + 0x728);
                FUN_100e40a74(&stack0x00003180);
                plVar14 = (long *)0x0;
              }
              else {
                plVar14 = *(long **)(unaff_x19 + 0x6f0);
                if ((*(long *)(unaff_x19 + 0x780) == -0x8000000000000000) !=
                    (*plVar14 == -0x8000000000000000)) goto LAB_100b8c7a8;
                if (*(long *)(unaff_x19 + 0x780) == -0x8000000000000000) {
                  if (*(long *)(unaff_x19 + 0x788) != plVar14[1]) goto LAB_100b8c7a8;
                }
                else if ((*(long *)(unaff_x19 + 0x790) != plVar14[2]) ||
                        (iVar6 = _memcmp(*(undefined8 *)(unaff_x19 + 0x788),plVar14[1]), iVar6 != 0)
                        ) goto LAB_100b8c7a8;
                *(undefined1 *)(unaff_x19 + 0x701) = 0;
                in_stack_000031c8 = *(undefined8 *)(unaff_x19 + 0x760);
                in_stack_000031c0 = *(undefined8 *)(unaff_x19 + 0x758);
                in_stack_000031d8 = *(undefined8 *)(unaff_x19 + 0x770);
                in_stack_000031d0 = *(undefined8 *)(unaff_x19 + 0x768);
                in_stack_00003188 = *(long **)(unaff_x19 + 0x720);
                in_stack_00003180 = *(undefined1 **)(unaff_x19 + 0x718);
                in_stack_00003198 = *(undefined1 **)(unaff_x19 + 0x730);
                in_stack_00003190 = *(undefined1 **)(unaff_x19 + 0x728);
                in_stack_000031a8 = *(undefined **)(unaff_x19 + 0x740);
                in_stack_000031a0 = *(ulong *)(unaff_x19 + 0x738);
                in_stack_000031b8 = *(undefined8 *)(unaff_x19 + 0x750);
                in_stack_000031b0 = *(undefined8 *)(unaff_x19 + 0x748);
                FUN_100f3f484(&stack0x0000dc20,s_remote_app_server_at_____rejecte_108ad125b,
                              &stack0x00009350);
                plVar14 = (long *)FUN_100c358e0(&stack0x0000da40);
                FUN_100e37c3c(&stack0x00003180);
              }
              *(undefined2 *)(unaff_x19 + 0x701) = 0;
              *(undefined2 *)(unaff_x19 + 0x706) = 0;
              (**(code **)(*(long *)(unaff_x19 + 0x880) + 0x20))
                        (unaff_x19 + 0x898,*(undefined8 *)(unaff_x19 + 0x888),
                         *(undefined8 *)(unaff_x19 + 0x890));
              goto LAB_100b8c38c;
            }
            if (uVar10 != 0) {
              *(undefined1 *)(unaff_x19 + 0x706) = 0;
              __ZN174__LT_codex_app_server_protocol__protocol__common__ServerNotification_u20_as_u20_core__convert__TryFrom_LT_codex_app_server_protocol__jsonrpc_lite__JSONRPCNotification_GT__GT_8try_from17h988f0ff0bafe3135E
                        (&stack0x00003180,&stack0x0000bc90);
              if (in_stack_00003180 == (undefined1 *)0x8000000000000041) {
                FUN_101bbf470(in_stack_00003188);
                _free(in_stack_00003188);
              }
              else {
                _memcpy(&stack0x00009350,&stack0x00003188,0x1f0);
                _memcpy(&stack0x000069a8,&stack0x00009350,0x1f0);
                puVar13 = *(undefined8 **)(unaff_x19 + 0x6f8);
                unaff_x24 = (long *)puVar13[2];
                if (unaff_x24 == (long *)*puVar13) {
                  __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9e2a1aeada705eecE(puVar13);
                }
                puVar17 = (undefined8 *)(puVar13[1] + (long)unaff_x24 * 0x1f8);
                *puVar17 = in_stack_00003180;
                _memcpy(puVar17 + 1,&stack0x00009350,0x1f0);
                puVar13[2] = (undefined *)((long)unaff_x24 + 1);
              }
              goto LAB_100b8c7a8;
            }
            *(undefined1 *)(unaff_x19 + 0x707) = 0;
            *(undefined1 *)(unaff_x19 + 0x705) = 1;
            *(undefined8 *)(unaff_x19 + 0x840) = *(undefined8 *)(unaff_x19 + 0x798);
            *(undefined8 *)(unaff_x19 + 0x838) = *(undefined8 *)(unaff_x19 + 0x790);
            *(undefined8 *)(unaff_x19 + 0x850) = *(undefined8 *)(unaff_x19 + 0x7a8);
            *(undefined8 *)(unaff_x19 + 0x848) = *(undefined8 *)(unaff_x19 + 0x7a0);
            *(undefined8 *)(unaff_x19 + 0x858) = *(undefined8 *)(unaff_x19 + 0x7b0);
            *(undefined8 *)(unaff_x19 + 0x800) = *(undefined8 *)(unaff_x19 + 0x758);
            *(undefined8 *)(unaff_x19 + 0x7f8) = *(undefined8 *)(unaff_x19 + 0x750);
            *(undefined8 *)(unaff_x19 + 0x810) = *(undefined8 *)(unaff_x19 + 0x768);
            *(undefined8 *)(unaff_x19 + 0x808) = *(undefined8 *)(unaff_x19 + 0x760);
            *(undefined8 *)(unaff_x19 + 0x820) = *(undefined8 *)(unaff_x19 + 0x778);
            *(undefined8 *)(unaff_x19 + 0x818) = *(undefined8 *)(unaff_x19 + 0x770);
            *(undefined8 *)(unaff_x19 + 0x830) = *(undefined8 *)(unaff_x19 + 0x788);
            *(undefined8 *)(unaff_x19 + 0x828) = *(undefined8 *)(unaff_x19 + 0x780);
            *(undefined8 *)(unaff_x19 + 0x7c0) = *(undefined8 *)(unaff_x19 + 0x718);
            *(long *)(unaff_x19 + 0x7b8) = *(long *)(unaff_x19 + 0x710);
            *(undefined8 *)(unaff_x19 + 2000) = *(undefined8 *)(unaff_x19 + 0x728);
            *(undefined8 *)(unaff_x19 + 0x7c8) = *(undefined8 *)(unaff_x19 + 0x720);
            *(undefined8 *)(unaff_x19 + 0x7e0) = *(undefined8 *)(unaff_x19 + 0x738);
            *(undefined8 *)(unaff_x19 + 0x7d8) = *(undefined8 *)(unaff_x19 + 0x730);
            *(undefined8 *)(unaff_x19 + 0x7f0) = *(undefined8 *)(unaff_x19 + 0x748);
            *(undefined8 *)(unaff_x19 + 0x7e8) = *(undefined8 *)(unaff_x19 + 0x740);
            if (*(long *)(unaff_x19 + 2000) == -0x8000000000000000) {
              in_stack_0000e150 = *(undefined8 *)(unaff_x19 + 0x738);
              in_stack_0000e148 = *(undefined8 *)(unaff_x19 + 0x730);
              in_stack_0000e140 = *(ulong *)(unaff_x19 + 0x728);
            }
            else {
              func_0x000100025ae8(&stack0x0000e140,unaff_x19 + 2000);
            }
            unaff_x24 = (long *)0x1;
            *(undefined1 *)(unaff_x19 + 0x700) = 1;
            uVar10 = unaff_x19 + 0x860;
            uVar16 = *(undefined8 *)(unaff_x19 + 0x7c0);
            lVar12 = *(long *)(unaff_x19 + 0x7c8);
            if ((lVar12 != 0) && (unaff_x24 = (long *)_malloc(lVar12), unaff_x24 == (long *)0x0)) {
              func_0x0001087c9084(1,lVar12);
              goto LAB_100b8d32c;
            }
            _memcpy(unaff_x24,uVar16,lVar12);
            *(long *)(unaff_x19 + 0x860) = lVar12;
            *(long **)(unaff_x19 + 0x868) = unaff_x24;
            *(long *)(unaff_x19 + 0x870) = lVar12;
            *(undefined1 *)(unaff_x19 + 0x705) = 0;
            in_stack_00003208 = *(undefined8 *)(unaff_x19 + 0x840);
            in_stack_00003200 = *(undefined8 *)(unaff_x19 + 0x838);
            in_stack_00003218 = *(undefined8 *)(unaff_x19 + 0x850);
            in_stack_00003210 = *(undefined8 *)(unaff_x19 + 0x848);
            in_stack_00003220 = *(undefined8 *)(unaff_x19 + 0x858);
            in_stack_000031c8 = *(undefined8 *)(unaff_x19 + 0x800);
            in_stack_000031c0 = *(undefined8 *)(unaff_x19 + 0x7f8);
            in_stack_000031d8 = *(undefined8 *)(unaff_x19 + 0x810);
            in_stack_000031d0 = *(undefined8 *)(unaff_x19 + 0x808);
            in_stack_000031e8 = *(undefined8 *)(unaff_x19 + 0x820);
            in_stack_000031e0 = *(undefined8 *)(unaff_x19 + 0x818);
            in_stack_000031f8 = *(undefined8 *)(unaff_x19 + 0x830);
            in_stack_000031f0 = *(undefined8 *)(unaff_x19 + 0x828);
            in_stack_00003188 = *(long **)(unaff_x19 + 0x7c0);
            in_stack_00003180 = *(undefined1 **)(unaff_x19 + 0x7b8);
            in_stack_00003198 = *(undefined1 **)(unaff_x19 + 2000);
            in_stack_00003190 = *(undefined1 **)(unaff_x19 + 0x7c8);
            in_stack_000031a8 = *(undefined **)(unaff_x19 + 0x7e0);
            in_stack_000031a0 = *(ulong *)(unaff_x19 + 0x7d8);
            in_stack_000031b8 = *(undefined8 *)(unaff_x19 + 0x7f0);
            in_stack_000031b0 = *(undefined8 *)(unaff_x19 + 0x7e8);
            plVar14 = (long *)(unaff_x19 + 0x8a0);
            __ZN164__LT_codex_app_server_protocol__protocol__common__ServerRequest_u20_as_u20_core__convert__TryFrom_LT_codex_app_server_protocol__jsonrpc_lite__JSONRPCRequest_GT__GT_8try_from17h9c69cd3485566ad3E
                      (plVar14,&stack0x00003180);
            unaff_x27 = (undefined1 *)0x8000000000000002;
            if (*plVar14 != -0x7ffffffffffffff7) {
              _memcpy(&stack0x00003188,plVar14,0x1a0);
              plVar14 = *(long **)(unaff_x19 + 0x6f8);
              in_stack_00003180 = (undefined1 *)0x8000000000000043;
              lVar12 = plVar14[2];
              if (lVar12 == *plVar14) {
                __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h9e2a1aeada705eecE(plVar14);
              }
              _memcpy(plVar14[1] + lVar12 * 0x1f8,&stack0x00003180,0x1f8);
              plVar14[2] = lVar12 + 1;
              goto LAB_100b8c75c;
            }
            *(undefined8 *)(unaff_x19 + 0x878) = *(undefined8 *)(unaff_x19 + 0x8a8);
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
                ((bRam000000010b628530 - 1 < 2 ||
                 ((bRam000000010b628530 != 0 &&
                  (cVar5 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                                     ), cVar5 != '\0')))))) &&
               (uVar7 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                  (
                                  ___ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                                  ), (uVar7 & 1) != 0)) {
              in_stack_00003180 = &stack0x0000da40;
              in_stack_00003188 = (long *)&UNK_10b208fd0;
              in_stack_00003190 = &stack0x0000d700;
              in_stack_00003198 = &UNK_10b218e98;
              in_stack_000031a8 = &UNK_10b2170c0;
              __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN23codex_app_server_client6remote28initialize_remote_connection28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hba92a051ba711c8fE
                         ,&stack0x00009350);
              plVar14 = 
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
                            (plVar14,unaff_x24,puVar2,&stack0x0000dc20,&stack0x00009350);
                }
              }
            }
            else {
              plVar14 = 
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
                plVar15 = plRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  plVar15 = (long *)&UNK_109adfc03;
                }
                iVar6 = (**(code **)(puVar2 + 0x18))(plVar15,&stack0x0000e2a0);
                unaff_x24 = plVar14;
                if (iVar6 != 0) {
                  in_stack_00003180 = &stack0x0000da40;
                  in_stack_00003188 = (long *)&UNK_10b208fd0;
                  in_stack_00003190 = &stack0x0000d700;
                  in_stack_00003198 = &UNK_10b218e98;
                  in_stack_000031a8 = &UNK_10b2170c0;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (plVar14,plVar15,puVar2,&stack0x0000dc20,&stack0x00009350);
                  in_stack_000031a0 = uVar10;
                  in_stack_0000dc30 = uVar7;
                }
              }
            }
            unaff_x20 = *(undefined8 *)(unaff_x19 + 0x6e0);
            in_stack_0000dc28 = &DAT_10112965c;
            in_stack_0000dc20 = uVar10;
            goto code_r0x000100b8c618;
          }
LAB_100b8bb60:
          if (5 < (long)uVar10) goto LAB_100b8c7f0;
LAB_100b8bb68:
        } while ((uVar10 == 0) || (uVar10 == 4));
      } while( true );
    }
    plVar15 = *(long **)(unaff_x19 + 0x878);
    if (*plVar15 == 1) {
      FUN_100de21d4(plVar15 + 1);
    }
    else if ((*plVar15 == 0) && (plVar15[2] != 0)) {
      _free(plVar15[1]);
    }
    _free(plVar15);
    if (*(long *)(unaff_x19 + 0x860) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x868));
    }
    *(undefined1 *)(unaff_x19 + 0x700) = 0;
    *(undefined1 *)(unaff_x19 + 0x705) = 0;
LAB_100b8c910:
    *(undefined2 *)(unaff_x19 + 0x701) = 0;
    *(undefined2 *)(unaff_x19 + 0x706) = 0;
    (**(code **)(*(long *)(unaff_x19 + 0x880) + 0x20))
              (unaff_x19 + 0x898,*(undefined8 *)(unaff_x19 + 0x888),
               *(undefined8 *)(unaff_x19 + 0x890));
    uVar10 = *unaff_x26;
    if ((long)uVar10 < 6) {
      if ((uVar10 != 0) && (uVar10 != 4)) {
LAB_100b8c960:
        (**(code **)(*(long *)(unaff_x19 + 0x6b0) + 0x20))
                  (unaff_x19 + 0x6c8,*(undefined8 *)(unaff_x19 + 0x6b8),
                   *(undefined8 *)(unaff_x19 + 0x6c0));
      }
LAB_100b8c978:
      *(undefined1 *)(unaff_x19 + 0x704) = 0;
LAB_100b8c97c:
      *(undefined1 *)(unaff_x19 + 0x703) = 0;
    }
    else {
      if (uVar10 == 6) goto LAB_100b8c97c;
      if (uVar10 != 7) goto LAB_100b8c960;
    }
LAB_100b8c980:
    *(undefined2 *)(unaff_x19 + 0x703) = 0;
    bVar1 = false;
    *(undefined1 *)(unaff_x19 + 0x708) = 1;
    unaff_x24 = plVar14;
    goto LAB_100b8c9c0;
  }
  *(undefined1 *)(unaff_x19 + 0x708) = 4;
LAB_100b8c99c:
  bVar1 = true;
  uVar10 = __ZN5tokio4time7timeout10poll_delay17hf2380a7a6975c730E
                     ((in_stack_00000040 | in_stack_00000050) & 1,unaff_x19 + 0x638,
                      in_stack_00000088);
  if ((uVar10 & 1) != 0) {
    uVar9 = 4;
LAB_100b88c50:
    *unaff_x23 = uVar9;
LAB_100b88c54:
    *in_stack_00000070 = 3;
    *unaff_x21 = 0x8000000000000001;
    uVar9 = 6;
LAB_100b88c6c:
    *(undefined1 *)(unaff_x19 + 0x180) = uVar9;
    return;
  }
LAB_100b8c9c0:
  FUN_100d75b24();
  FUN_100de8a5c(unaff_x19 + 0x638);
  if (bVar1) {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00003180,s_0timed_out_waiting_for_initializ_108ad1305,&stack0x000069a0);
    unaff_x24 = (long *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(0x16,&stack0x00003180);
LAB_100b8cb18:
    uVar16 = *(undefined8 *)(unaff_x19 + 0x620);
    FUN_100e28b64(uVar16,*(undefined8 *)(unaff_x19 + 0x628));
    if (*(long *)(unaff_x19 + 0x618) != 0) {
      _free(uVar16);
    }
    if ((*(ulong *)(unaff_x19 + 0x600) & 0x7fffffffffffffff) != 0) {
      lVar12 = -0x8000000000000000;
LAB_100b8cb5c:
      _free(*(undefined8 *)(unaff_x19 + 0x608));
      goto LAB_100b8cb64;
    }
    *(undefined1 *)(unaff_x19 + 0x631) = 0;
    *(undefined1 *)(unaff_x19 + 0x630) = 1;
    lVar12 = -0x8000000000000000;
  }
  else {
    if (unaff_x24 != (long *)0x0) goto LAB_100b8cb18;
    uVar16 = *(undefined8 *)(unaff_x19 + 0x5d8);
    __ZN23codex_app_server_client6remote45jsonrpc_notification_from_client_notification17hb7a79451c9a48ad0E
              (&stack0x00003180);
    *(undefined8 *)(unaff_x19 + 0x638) = 0x8000000000000000;
    *(undefined **)(unaff_x19 + 0x668) = in_stack_000031a8;
    *(ulong *)(unaff_x19 + 0x660) = in_stack_000031a0;
    *(undefined8 *)(unaff_x19 + 0x678) = in_stack_000031b8;
    *(undefined8 *)(unaff_x19 + 0x670) = in_stack_000031b0;
    *(undefined8 *)(unaff_x19 + 0x688) = in_stack_000031c8;
    *(undefined8 *)(unaff_x19 + 0x680) = in_stack_000031c0;
    *(undefined8 *)(unaff_x19 + 0x698) = in_stack_000031d8;
    *(undefined8 *)(unaff_x19 + 0x690) = in_stack_000031d0;
    *(long **)(unaff_x19 + 0x648) = in_stack_00003188;
    *(undefined1 **)(unaff_x19 + 0x640) = in_stack_00003180;
    *(undefined1 **)(unaff_x19 + 0x658) = in_stack_00003198;
    *(undefined1 **)(unaff_x19 + 0x650) = in_stack_00003190;
    *(undefined8 *)(unaff_x19 + 0x6e0) = uVar16;
    *(undefined8 *)(unaff_x19 + 0x6e8) = *(undefined8 *)(unaff_x19 + 0x5e0);
    *(undefined8 *)(unaff_x19 + 0x6f0) = *(undefined8 *)(unaff_x19 + 0x5e8);
    *(undefined1 *)(unaff_x19 + 0x7f0) = 0;
    lVar12 = unaff_x19 + 0x638;
    auVar18 = func_0x000100b8e2a4(lVar12,in_stack_00000088);
    unaff_x24 = auVar18._8_8_;
    if ((auVar18._0_8_ & 1) != 0) {
      uVar9 = 5;
      goto LAB_100b88c50;
    }
    if (*(char *)(unaff_x19 + 0x7f0) == '\x03') {
      if ((*(long *)(unaff_x19 + 0x7b0) != 6) &&
         ((*(long *)(unaff_x19 + 0x7b0) != 4 || (*(short *)(unaff_x19 + 0x7d8) != 0x12)))) {
        (**(code **)(*(long *)(unaff_x19 + 0x7b8) + 0x20))
                  (unaff_x19 + 2000,*(undefined8 *)(unaff_x19 + 0x7c0),
                   *(undefined8 *)(unaff_x19 + 0x7c8));
      }
      *(undefined1 *)(unaff_x19 + 0x7f1) = 0;
      lVar12 = unaff_x19 + 0x6f8;
LAB_100b8cb0c:
      FUN_100e3d46c(lVar12);
    }
    else if (*(char *)(unaff_x19 + 0x7f0) == '\0') goto LAB_100b8cb0c;
    if (unaff_x24 != (long *)0x0) goto LAB_100b8cb18;
    lVar12 = *(long *)(unaff_x19 + 0x618);
    unaff_x24 = *(long **)(unaff_x19 + 0x620);
    in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0x628);
    if ((*(ulong *)(unaff_x19 + 0x600) & 0x7fffffffffffffff) != 0) goto LAB_100b8cb5c;
LAB_100b8cb64:
    *(undefined1 *)(unaff_x19 + 0x631) = 0;
    *(undefined1 *)(unaff_x19 + 0x630) = 1;
    if (lVar12 == -0x7fffffffffffffff) goto LAB_100b88c54;
  }
  FUN_100d243e4();
  if (lVar12 == -0x8000000000000000) {
    FUN_100e57728(unaff_x19 + 0x3c0);
    FUN_100e0df24(unaff_x19 + 0x3f0);
    *(undefined2 *)(unaff_x19 + 0xc01) = 0;
    if (*(long *)(unaff_x19 + 0x3a8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x3b0));
    }
    *(undefined1 *)(unaff_x19 + 0xc03) = 0;
    *in_stack_00000070 = 1;
    FUN_100d55468(in_stack_00000078);
    *(undefined1 *)(unaff_x19 + 0x182) = 0;
    *(undefined1 *)(unaff_x19 + 0x183) = 0;
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
      puVar13 = (undefined8 *)(lVar12 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 3;
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
  FUN_100fd27f8(*(undefined8 *)(unaff_x19 + 0x3a0));
  func_0x000100fd3504();
  *(undefined1 *)(unaff_x19 + 0xc01) = 0;
  *(undefined1 *)(unaff_x19 + 0xc03) = 0;
  _memcpy(&stack0x0000bc90,unaff_x19 + 0x3c0,0x188);
  do {
    lVar12 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
    bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
    ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar12;
  } while (bVar1);
  _memcpy(&stack0x00009360,&stack0x0000bc90,0x1a0);
  puVar8 = (ulong *)(*
                    ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                    )();
  if ((char)puVar8[9] == '\x01') {
LAB_100b8cd84:
    _memcpy(&stack0x000069a0,&stack0x00009350,0x8e0);
    if (0x7ffffffffffffffe < *puVar8) {
      func_0x000108a07858(&UNK_10b2435a0);
      goto LAB_100b8d32c;
    }
    *puVar8 = *puVar8 + 1;
    uVar10 = puVar8[1];
    _memcpy(&stack0x00000640,&stack0x00009350,0x8e0);
    if (uVar10 != 2) {
      if ((uVar10 & 1) == 0) {
        plVar14 = (long *)puVar8[2];
        lVar12 = *plVar14;
        *plVar14 = lVar12 + 1;
        if ((-1 < lVar12) &&
           ((plVar14 = (long *)plVar14[0x5e], plVar14 == (long *)0x0 ||
            (lVar12 = *plVar14, *plVar14 = lVar12 + 1, -1 < lVar12)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0x8d0);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0x8d4);
          _posix_memalign(&stack0x0000de00,0x80,0x980);
          func_0x0001087c906c(0x80,0x980);
        }
      }
      else {
        plVar14 = (long *)puVar8[2];
        lVar12 = *plVar14;
        *plVar14 = lVar12 + 1;
        if ((-1 < lVar12) &&
           ((plVar14 = (long *)plVar14[0x4a], plVar14 == (long *)0x0 ||
            (lVar12 = *plVar14, *plVar14 = lVar12 + 1, -1 < lVar12)))) {
          _memcpy(&stack0x0000c2c4,&stack0x000069b0,0x8d0);
          _memcpy((ulong)&stack0x00003180 | 0x34,&stack0x0000c2c0,0x8d4);
          _posix_memalign(&stack0x0000de00,0x80,0x980);
          func_0x0001087c906c(0x80,0x980);
        }
      }
      goto LAB_100b8d32c;
    }
    FUN_100d833e4(&stack0x00000650);
    *puVar8 = *puVar8 - 1;
  }
  else {
    if ((char)puVar8[9] != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar8,&DAT_100c35d48);
      *(undefined1 *)(puVar8 + 9) = 1;
      goto LAB_100b8cd84;
    }
    FUN_100d833e4(&stack0x00009360);
  }
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00003180,&UNK_10b230bb0);
LAB_100b8d32c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8d330);
  (*pcVar4)();
}

