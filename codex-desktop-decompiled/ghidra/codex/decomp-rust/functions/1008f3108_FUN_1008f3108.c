
/* WARNING: Removing unreachable block (ram,0x0001008f348c) */
/* WARNING: Removing unreachable block (ram,0x0001008f33bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008f3108(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined1 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x19;
  undefined *puVar16;
  long unaff_x21;
  long *plVar17;
  long lVar18;
  undefined8 *unaff_x22;
  undefined8 uVar19;
  char *pcVar20;
  long lVar21;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined1 *in_stack_00000028;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  long in_stack_00000a10;
  undefined *puVar30;
  undefined *in_stack_00000a18;
  long in_stack_00000a20;
  code *in_stack_00000a28;
  long in_stack_00000a30;
  undefined *in_stack_00000a38;
  long in_stack_00000a40;
  undefined8 in_stack_00000a48;
  undefined8 in_stack_00000a50;
  undefined8 in_stack_00000a58;
  undefined8 in_stack_00000a60;
  undefined8 in_stack_00000a68;
  undefined *in_stack_00000a70;
  int in_stack_00000c60;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000a10,s_invalid_thread_id__108aca2c9,unaff_x29 + -0x80);
  if (in_stack_00000a10 != -0x8000000000000000) {
    *(undefined **)(unaff_x29 + -0xd8) = in_stack_00000a38;
    *(long *)(unaff_x29 + -0xe0) = in_stack_00000a30;
    *(undefined8 *)(unaff_x29 + -200) = in_stack_00000a48;
    *(long *)(unaff_x29 + -0xd0) = in_stack_00000a40;
    *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000a58;
    *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000a50;
    *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000a68;
    *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000a60;
    puVar16 = (undefined *)0xffffffffffff80a8;
    in_stack_00000a28 = (code *)0x8000000000000005;
LAB_1008f3834:
    if (*(long *)(unaff_x19 + 0x140) != 0) goto LAB_1008f383c;
    goto LAB_1008f384c;
  }
  *(undefined **)(unaff_x19 + 0x158) = in_stack_00000a18;
  *(long *)(unaff_x19 + 0x160) = in_stack_00000a20;
  puVar6 = (undefined8 *)_malloc(0x10);
  if (puVar6 == (undefined8 *)0x0) {
    func_0x0001087c906c(1,0x10);
    goto LAB_1008f4538;
  }
  uVar19 = *(undefined8 *)(unaff_x19 + 0x158);
  puVar6[1] = *(undefined8 *)(unaff_x19 + 0x160);
  *puVar6 = uVar19;
  *(undefined8 *)(unaff_x19 + 0x168) = 1;
  *(undefined8 **)(unaff_x19 + 0x170) = puVar6;
  *(undefined8 *)(unaff_x19 + 0x178) = 1;
  *(undefined1 *)(unaff_x19 + 0x1ea) = 1;
  lVar10 = *(long *)(unaff_x19 + 0x138);
  uVar8 = 0x8000000000000000;
  if (*(long *)(lVar10 + 0x218) != 0) {
    lVar10 = *(long *)(lVar10 + 0x218) + 0x10;
    *(long *)(unaff_x19 + 0x1f0) = lVar10;
    *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x160);
    *(undefined8 *)(unaff_x19 + 0x1f8) = *(undefined8 *)(unaff_x19 + 0x158);
    *(undefined1 *)(unaff_x19 + 0x2b0) = 0;
    *(undefined8 *)(unaff_x19 + 0x210) = *(undefined8 *)(unaff_x19 + 0x200);
    *(undefined8 *)(unaff_x19 + 0x208) = *(undefined8 *)(unaff_x19 + 0x1f8);
    *(long *)(unaff_x19 + 0x2a0) = lVar10;
    *(undefined2 *)(unaff_x19 + 0x2aa) = 0x200;
    FUN_1006eea9c(&stack0x00000a10,unaff_x19 + 0x208);
    FUN_100d79a10(unaff_x19 + 0x208);
    *(undefined1 *)(unaff_x19 + 0x2b0) = 1;
    uVar8 = unaff_x19 + 0x158;
    *(undefined **)(unaff_x29 + -0xa0) = in_stack_00000a18;
    in_stack_00000a20 = unaff_x29 + -0xa0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000004e0,s_1failed_to_list_spawned_descenda_108acb083,&stack0x00000a10);
    (**(code **)**(undefined8 **)(unaff_x29 + -0xa0))();
    if (in_stack_00000a30 == -0x8000000000000000) {
      in_stack_00000a28 =
           __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
      ;
      in_stack_00000a18 =
           &
           __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      FUN_108832ee0(&stack0x00000a10,&stack0x000004e0);
      lVar10 = 0;
      do {
        uVar22 = ((undefined8 *)(in_stack_00000a40 + lVar10))[1];
        uVar19 = *(undefined8 *)(in_stack_00000a40 + lVar10);
        uVar7 = FUN_1016e82ec(&stack0x00000a10,&stack0x000004e0);
        if ((uVar7 & 1) == 0) {
          lVar21 = *(long *)(unaff_x19 + 0x178);
          if (lVar21 == *(long *)(unaff_x19 + 0x168)) {
            FUN_107c05c4c(unaff_x19 + 0x168);
          }
          puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x170) + lVar21 * 0x10);
          puVar6[1] = uVar22;
          *puVar6 = uVar19;
          *(long *)(unaff_x19 + 0x178) = lVar21 + 1;
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != 0x50);
      if (in_stack_00000a38 != (undefined *)0x0) {
        _free(in_stack_00000a40);
      }
      _free(unaff_x19 + -0x1049ca8bb8);
      lVar10 = *(long *)(unaff_x19 + 0x138);
      goto LAB_1008f3548;
    }
    puVar16 = (undefined *)0xffffffffffff80a5;
    in_stack_00000a28 = (code *)0x8000000000000005;
    bVar3 = *(byte *)(unaff_x19 + 0x1ea);
    in_stack_00000a10 = in_stack_00000a30;
    in_stack_00000a18 = in_stack_00000a38;
    in_stack_00000a20 = in_stack_00000a40;
joined_r0x0001008f3814:
    if (((bVar3 & 1) != 0) && (*(long *)(unaff_x19 + 0x168) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x170));
    }
    *(undefined1 *)(unaff_x19 + 0x1ea) = 0;
    goto LAB_1008f3834;
  }
LAB_1008f3548:
  *(undefined8 *)(unaff_x19 + 0x180) = 0;
  *(undefined8 *)(unaff_x19 + 0x188) = 1;
  *(undefined8 *)(unaff_x19 + 400) = 0;
  lVar21 = *(long *)(lVar10 + 0x1a0);
  lVar10 = *(long *)(lVar10 + 0x1a8);
  lVar14 = *(long *)(lVar10 + 0x10);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x158);
  *(undefined8 *)(unaff_x21 + 10) = *(undefined8 *)(unaff_x19 + 0x160);
  *(undefined8 *)(unaff_x21 + 2) = uVar19;
  puVar30 = (undefined *)(uVar8 & 0xffffffffffff0000);
  auVar29 = (**(code **)(lVar10 + 0x68))
                      (lVar21 + (lVar14 - 1U & 0xfffffffffffffff0) + 0x10,&stack0x00000a10);
  *(undefined1 (*) [16])(unaff_x19 + 0x1f0) = auVar29;
  (**(code **)(auVar29._8_8_ + 0x18))(&stack0x00000a10);
  if (puVar30 == (undefined *)0x3) {
    uVar9 = 4;
  }
  else {
    uVar23 = *(undefined8 *)(unaff_x21 + 0x10);
    uVar22 = *(undefined8 *)(unaff_x21 + 8);
    uVar26 = *(undefined8 *)(unaff_x21 + 0x20);
    uVar24 = *(undefined8 *)(unaff_x21 + 0x18);
    _memcpy(&stack0x00000530,&stack0x00000a38,0x250);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x1f0);
    puVar6 = *(undefined8 **)(unaff_x19 + 0x1f8);
    pcVar11 = (code *)*puVar6;
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(uVar19);
    }
    if (puVar6[1] != 0) {
      _free(uVar19);
    }
    if (puVar30 == (undefined *)0x2) {
      __ZN16codex_app_server18request_processors16thread_processor26thread_store_archive_error17hc2330e62bdfebbb5E
                (&stack0x00000a10,&UNK_108cb296c,7,&stack0x00000780);
      *(undefined **)(unaff_x29 + -0xd8) = in_stack_00000a38;
      *(long *)(unaff_x29 + -0xe0) = in_stack_00000a30;
      *(undefined8 *)(unaff_x29 + -200) = in_stack_00000a48;
      *(long *)(unaff_x29 + -0xd0) = in_stack_00000a40;
      *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000a58;
      *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000a50;
      *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000a68;
      *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000a60;
      in_stack_00000a10 = 2;
      puVar16 = in_stack_00000a70;
LAB_1008f3648:
      if (*(long *)(unaff_x19 + 0x180) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x188));
      }
      bVar3 = *(byte *)(unaff_x19 + 0x1ea);
      goto joined_r0x0001008f3814;
    }
    *(undefined8 *)(unaff_x21 + 0x10) = uVar23;
    *(undefined8 *)(unaff_x21 + 8) = uVar22;
    *(undefined8 *)(unaff_x21 + 0x20) = uVar26;
    *(undefined8 *)(unaff_x21 + 0x18) = uVar24;
    _memcpy(&stack0x00000a38,&stack0x00000530,0x250);
    puVar16 = puVar30;
    if (in_stack_00000c60 == 0) {
      uVar22 = *(undefined8 *)(unaff_x19 + 0x160);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x158);
      puVar16 = *(undefined **)(unaff_x19 + 400);
      if (puVar16 == *(undefined **)(unaff_x19 + 0x180)) {
        FUN_107c05c4c(unaff_x19 + 0x180);
      }
      puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x188) + (long)puVar16 * 0x10);
      puVar6[1] = uVar22;
      *puVar6 = uVar19;
      *(undefined **)(unaff_x19 + 400) = puVar16 + 1;
    }
    FUN_100e0ce70(&stack0x00000a10);
    *(undefined1 *)(unaff_x19 + 0x1ea) = 0;
    lVar10 = *(long *)(unaff_x19 + 0x170);
    *(long *)(unaff_x19 + 0x1f0) = lVar10;
    *(long *)(unaff_x19 + 0x1f8) = lVar10;
    *(undefined8 *)(unaff_x19 + 0x200) = *(undefined8 *)(unaff_x19 + 0x168);
    *(long *)(unaff_x19 + 0x208) = lVar10 + *(long *)(unaff_x19 + 0x178) * 0x10;
    uVar8 = 1;
    *(undefined8 *)(unaff_x19 + 0x210) = 1;
LAB_1008f3e2c:
    if (uVar8 != 0) {
      *(undefined8 *)(unaff_x19 + 0x210) = 0;
      puVar6 = *(undefined8 **)(unaff_x19 + 0x208);
      uVar15 = (ulong)((long)puVar6 - *(long *)(unaff_x19 + 0x1f8)) >> 4;
      uVar7 = uVar8;
      if (uVar15 <= uVar8) {
        uVar7 = uVar15;
      }
      puVar13 = (undefined8 *)(*(long *)(unaff_x19 + 0x1f8) + uVar7 * 0x10);
      *(undefined8 **)(unaff_x19 + 0x1f8) = puVar13;
      if (uVar8 <= uVar15) goto LAB_1008f3e38;
LAB_1008f4280:
      if (*(long *)(unaff_x19 + 0x200) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x1f0));
      }
      *(undefined8 *)(unaff_x19 + 0x198) = 0;
      *(undefined8 *)(unaff_x19 + 0x1a0) = 8;
      *(undefined8 *)(unaff_x19 + 0x1a8) = 0;
      *(undefined1 *)(unaff_x19 + 0x1e9) = 1;
      if (*(long *)(unaff_x19 + 400) == 0) {
        in_stack_00000a28 = (code *)0x0;
        in_stack_00000a18 = (undefined *)0x0;
        *(undefined1 *)(unaff_x19 + 0x1e9) = 0;
        in_stack_00000a10 = -0x8000000000000000;
        in_stack_00000a20 = 8;
        *(undefined1 *)(unaff_x19 + 0x1e9) = 0;
        goto LAB_1008f3648;
      }
      puVar6 = *(undefined8 **)(unaff_x19 + 0x188);
      *(undefined8 **)(unaff_x19 + 0x1b0) = puVar6;
      *(undefined8 **)(unaff_x19 + 0x1b8) = puVar6 + 2;
      *(long *)(unaff_x19 + 0x1c0) = *(long *)(unaff_x19 + 400) + -1;
      uVar22 = puVar6[1];
      uVar19 = *puVar6;
      *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x138);
      *(undefined8 *)(unaff_x19 + 0x200) = uVar22;
      *(undefined8 *)(unaff_x19 + 0x1f8) = uVar19;
      *(undefined1 *)(unaff_x19 + 0x228) = 0;
      iVar5 = FUN_100912608(unaff_x19 + 0x1f0);
      if (iVar5 != 0) {
        uVar9 = 6;
        goto LAB_1008f4ac0;
      }
      FUN_100d5b224(unaff_x19 + 0x1f0);
      lVar10 = *(long *)(*(long *)(unaff_x19 + 0x138) + 0x1a8);
      in_stack_00000a18 = (undefined *)(*(long **)(unaff_x19 + 0x1b0))[1];
      in_stack_00000a10 = **(long **)(unaff_x19 + 0x1b0);
      auVar29 = (**(code **)(lVar10 + 0x98))
                          (*(long *)(*(long *)(unaff_x19 + 0x138) + 0x1a0) +
                           (*(long *)(lVar10 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                           &stack0x00000a10);
      *(undefined1 (*) [16])(unaff_x19 + 0x1f0) = auVar29;
      (**(code **)(auVar29._8_8_ + 0x18))(&stack0x00000a10);
      if ((char)in_stack_00000a10 == '\x06') {
        uVar9 = 7;
        goto LAB_1008f4ac0;
      }
      uVar19 = *(undefined8 *)(unaff_x19 + 0x1f0);
      puVar6 = *(undefined8 **)(unaff_x19 + 0x1f8);
      pcVar11 = (code *)*puVar6;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar19);
      }
      if (puVar6[1] != 0) {
        _free(uVar19);
      }
      if ((char)in_stack_00000a10 != '\x05') {
        __ZN16codex_app_server18request_processors16thread_processor26thread_store_archive_error17hc2330e62bdfebbb5E
                  (&stack0x00000a10,&UNK_108cb296c,7,&stack0x00000cc0);
        *(undefined **)(unaff_x29 + -0xd8) = in_stack_00000a38;
        *(long *)(unaff_x29 + -0xe0) = in_stack_00000a30;
        *(undefined8 *)(unaff_x29 + -200) = in_stack_00000a48;
        *(long *)(unaff_x29 + -0xd0) = in_stack_00000a40;
        *(undefined8 *)(unaff_x29 + -0xb8) = in_stack_00000a58;
        *(undefined8 *)(unaff_x29 + -0xc0) = in_stack_00000a50;
        *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000a68;
        *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000a60;
        if ((*(byte *)(unaff_x19 + 0x1e9) & 1) != 0) {
          lVar10 = *(long *)(unaff_x19 + 0x1a0);
          lVar21 = *(long *)(unaff_x19 + 0x1a8);
          if (lVar21 != 0) {
            puVar6 = (undefined8 *)(lVar10 + 8);
            do {
              if (puVar6[-1] != 0) {
                _free(*puVar6);
              }
              puVar6 = puVar6 + 3;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
          }
          if (*(long *)(unaff_x19 + 0x198) != 0) {
            _free(lVar10);
          }
        }
        *(undefined1 *)(unaff_x19 + 0x1e9) = 0;
        puVar16 = in_stack_00000a70;
        goto LAB_1008f3648;
      }
      FUN_10624142c(&stack0x00000a10,*(undefined8 *)(unaff_x19 + 0x1b0),0);
      iVar5 = FUN_100f1c4e0(&stack0x000004e0,&stack0x00000a10,0x24);
      if (iVar5 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,&stack0x00000a10,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_1008f4538;
      }
      puVar16 = (undefined *)0x0;
      lVar10 = *(long *)(unaff_x19 + 0x1a8);
      if (lVar10 == *(long *)(unaff_x19 + 0x198)) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(unaff_x19 + 0x198);
      }
      puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x1a0) + lVar10 * 0x18);
      *puVar6 = 0;
      puVar6[1] = 1;
      puVar6[2] = 0;
      *(long *)(unaff_x19 + 0x1a8) = lVar10 + 1;
      lVar21 = *(long *)(unaff_x19 + 0x1b8);
      lVar10 = lVar21 + *(long *)(unaff_x19 + 0x1c0) * 0x10;
      *(long *)(unaff_x19 + 0x1c8) = lVar21;
      *(long *)(unaff_x19 + 0x1d0) = lVar10;
      goto LAB_1008f49f8;
    }
    puVar6 = *(undefined8 **)(unaff_x19 + 0x208);
    puVar13 = *(undefined8 **)(unaff_x19 + 0x1f8);
LAB_1008f3e38:
    if (puVar13 == puVar6) goto LAB_1008f4280;
    *(undefined8 **)(unaff_x19 + 0x1f8) = puVar13 + 2;
    uVar19 = *puVar13;
    *(undefined8 *)(unaff_x19 + 0x220) = puVar13[1];
    *(undefined8 *)(unaff_x19 + 0x218) = uVar19;
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x138) + 0x1a0);
    lVar21 = *(long *)(*(long *)(unaff_x19 + 0x138) + 0x1a8);
    lVar14 = *(long *)(lVar21 + 0x10);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x218);
    *(undefined8 *)(unaff_x21 + 10) = *(undefined8 *)(unaff_x19 + 0x220);
    *(undefined8 *)(unaff_x21 + 2) = uVar19;
    puVar30 = (undefined *)CONCAT62((int6)((ulong)puVar30 >> 0x10),1);
    auVar29 = (**(code **)(lVar21 + 0x68))
                        (lVar10 + (lVar14 - 1U & 0xfffffffffffffff0) + 0x10,&stack0x00000a10);
    *(undefined1 (*) [16])(unaff_x19 + 0x228) = auVar29;
    (**(code **)(auVar29._8_8_ + 0x18))(&stack0x00000a10);
    if (puVar30 != (undefined *)0x3) {
      uVar23 = *(undefined8 *)(unaff_x21 + 0x10);
      uVar22 = *(undefined8 *)(unaff_x21 + 8);
      uVar26 = *(undefined8 *)(unaff_x21 + 0x20);
      uVar24 = *(undefined8 *)(unaff_x21 + 0x18);
      _memcpy(&stack0x000007a0,&stack0x00000a38,0x250);
      uVar19 = *(undefined8 *)(unaff_x19 + 0x228);
      puVar6 = *(undefined8 **)(unaff_x19 + 0x230);
      pcVar11 = (code *)*puVar6;
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(uVar19);
      }
      if (puVar6[1] != 0) {
        _free(uVar19);
      }
      puVar16 = puVar30;
      if (puVar30 == (undefined *)0x2) {
        *(undefined8 *)(unaff_x29 + -0x98) = uVar23;
        *(undefined8 *)(unaff_x29 + -0xa0) = uVar22;
        *(undefined8 *)(unaff_x29 + -0x88) = uVar26;
        *(undefined8 *)(unaff_x29 + -0x90) = uVar24;
        if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
          if (((1 < bRam000000010b627ac8 - 1) &&
              ((puVar16 = &
                          __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
               , bRam000000010b627ac8 == 0 ||
               (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                  (&
                                   __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
                                  ),
               puVar16 = &
                         __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
               , cVar4 == '\0')))) ||
             (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
                                ),
             lVar10 = 
             ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
             , puVar16 = &
                         __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
             , (uVar8 & 1) == 0)) goto LAB_1008f40e0;
          puVar30 = (undefined *)(unaff_x19 + 0x218);
          in_stack_00000a20 = unaff_x19 + 0x158;
          in_stack_00000a28 =
               (code *)&
                       __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
          ;
          in_stack_00000a30 = unaff_x29 + -0xa0;
          in_stack_00000a38 =
               &
               __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
          ;
          *(char **)(unaff_x29 + -0xf0) = s__failed_to_read_spawned_descenda_108acaffa;
          *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000a10;
          *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xf0;
          *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
          __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar10,&stack0x000004e0);
          lVar10 = 
          ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar19 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
                      + 0x20);
            uVar22 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
                      + 0x28);
            *(undefined8 *)(unaff_x29 + -0x80) = 2;
            *(undefined8 *)(unaff_x29 + -0x78) = uVar19;
            *(undefined8 *)(unaff_x29 + -0x70) = uVar22;
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar1 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_109adfc03;
            }
            iVar5 = (**(code **)(puVar2 + 0x18))(puVar1,unaff_x29 + -0x80);
            puVar16 = &
                      __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
            ;
            if (iVar5 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar10,puVar1,puVar2,unaff_x29 + -0x80,&stack0x000004e0);
            }
          }
        }
        else {
LAB_1008f40e0:
          lVar10 = 
          ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar16 = &
                      __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
            ;
            uVar19 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
                      + 0x20);
            uVar22 = *(undefined8 *)
                      (
                      ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hade41d27ce7ccd53E
                      + 0x28);
            puVar2 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_10b3c24c8;
            }
            puVar1 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_109adfc03;
            }
            iVar5 = (**(code **)(puVar2 + 0x18))(puVar1,&stack0x00000c88);
            if (iVar5 != 0) {
              puVar30 = (undefined *)(unaff_x19 + 0x218);
              in_stack_00000a20 = unaff_x19 + 0x158;
              in_stack_00000a28 =
                   (code *)&
                           __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
              ;
              in_stack_00000a30 = unaff_x29 + -0xa0;
              in_stack_00000a38 =
                   &
                   __ZN82__LT_codex_thread_store__error__ThreadStoreError_u20_as_u20_core__fmt__Display_GT_3fmt17h84f7238d240df794E
              ;
              *(char **)(unaff_x29 + -0xf0) = s__failed_to_read_spawned_descenda_108acaffa;
              *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000a10;
              *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xf0;
              *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
              *(undefined8 *)(unaff_x29 + -0x78) = uVar19;
              *(undefined8 *)(unaff_x29 + -0x80) = 2;
              *(undefined8 *)(unaff_x29 + -0x70) = uVar22;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar10,puVar1,puVar2,unaff_x29 + -0x80,&stack0x000004e0);
            }
          }
        }
        bVar3 = *(byte *)(unaff_x29 + -0xa0);
        if (1 < bVar3) {
          if ((bVar3 == 2) || (bVar3 != 3)) goto LAB_1008f4238;
          goto LAB_1008f40d4;
        }
        if (bVar3 == 0) goto LAB_1008f40d4;
LAB_1008f4238:
        if (*(long *)(unaff_x29 + -0x98) == 0) goto LAB_1008f40d4;
        _free(*(undefined8 *)(unaff_x29 + -0x90));
        uVar8 = *(ulong *)(unaff_x19 + 0x210);
      }
      else {
        *(undefined8 *)(unaff_x21 + 0x10) = uVar23;
        *(undefined8 *)(unaff_x21 + 8) = uVar22;
        *(undefined8 *)(unaff_x21 + 0x20) = uVar26;
        *(undefined8 *)(unaff_x21 + 0x18) = uVar24;
        _memcpy(&stack0x00000a38,&stack0x000007a0,0x250);
        if (in_stack_00000c60 == 0) {
          uVar22 = *(undefined8 *)(unaff_x19 + 0x220);
          uVar19 = *(undefined8 *)(unaff_x19 + 0x218);
          puVar16 = *(undefined **)(unaff_x19 + 400);
          if (puVar16 == *(undefined **)(unaff_x19 + 0x180)) {
            FUN_107c05c4c(unaff_x19 + 0x180);
          }
          puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x188) + (long)puVar16 * 0x10);
          puVar6[1] = uVar22;
          *puVar6 = uVar19;
          *(undefined **)(unaff_x19 + 400) = puVar16 + 1;
        }
        FUN_100e0ce70(&stack0x00000a10);
LAB_1008f40d4:
        uVar8 = *(ulong *)(unaff_x19 + 0x210);
      }
      goto LAB_1008f3e2c;
    }
    uVar9 = 5;
  }
LAB_1008f4ac0:
  *in_stack_00000018 = uVar9;
LAB_1008f4ac8:
  *in_stack_00000028 = 4;
  *unaff_x22 = 0x8000000000000071;
  uVar9 = 3;
  goto LAB_1008f4ae8;
LAB_1008f49f8:
  if (lVar21 == lVar10) goto LAB_1008f4a7c;
  *(long *)(unaff_x19 + 0x1d0) = lVar10 + -0x10;
  uVar22 = *(undefined8 *)(lVar10 + -8);
  uVar19 = *(undefined8 *)(lVar10 + -0x10);
  *(undefined8 *)(unaff_x19 + 0x1e0) = uVar22;
  *(undefined8 *)(unaff_x19 + 0x1d8) = uVar19;
  *(undefined8 *)(unaff_x19 + 0x1f0) = *(undefined8 *)(unaff_x19 + 0x138);
  *(undefined8 *)(unaff_x19 + 0x200) = uVar22;
  *(undefined8 *)(unaff_x19 + 0x1f8) = uVar19;
  *(undefined1 *)(unaff_x19 + 0x228) = 0;
  uVar8 = FUN_100912608(unaff_x19 + 0x1f0);
  if ((uVar8 & 1) != 0) {
    uVar9 = 8;
    goto LAB_1008f4ac0;
  }
  FUN_100d5b224(unaff_x19 + 0x1f0);
  lVar10 = *(long *)(*(long *)(unaff_x19 + 0x138) + 0x1a8);
  uVar19 = *(undefined8 *)(unaff_x19 + 0x1e0);
  uVar8 = *(ulong *)(unaff_x19 + 0x1d8);
  auVar29 = (**(code **)(lVar10 + 0x98))
                      (*(long *)(*(long *)(unaff_x19 + 0x138) + 0x1a0) +
                       (*(long *)(lVar10 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,&stack0x00000a10)
  ;
  *(undefined1 (*) [16])(unaff_x19 + 0x1f0) = auVar29;
  (**(code **)(auVar29._8_8_ + 0x18))(&stack0x00000a10);
  cVar4 = (char)uVar8;
  if (cVar4 == '\x06') {
    uVar9 = 9;
    goto LAB_1008f4ac0;
  }
  uVar24 = *(undefined8 *)(unaff_x21 + 9);
  uVar23 = *(undefined8 *)(unaff_x21 + 1);
  uVar22 = *(undefined8 *)(unaff_x19 + 0x1f0);
  puVar6 = *(undefined8 **)(unaff_x19 + 0x1f8);
  pcVar11 = (code *)*puVar6;
  if (pcVar11 != (code *)0x0) {
    (*pcVar11)(uVar22);
  }
  if (puVar6[1] != 0) {
    _free(uVar22);
  }
  if (cVar4 == '\x05') {
    FUN_10624142c(&stack0x00000a10,unaff_x19 + 0x1d8,0);
    FUN_108855060(&stack0x000004e0,0,0x24,1,1);
    uRam0000000000000021 = (undefined4)in_stack_00000a30;
    puVar16 = (undefined *)0x0;
    lVar10 = *(long *)(unaff_x19 + 0x1a8);
    uRam0000000000000001 = uVar8;
    uRam0000000000000009 = uVar19;
    lRam0000000000000011 = in_stack_00000a20;
    pcRam0000000000000019 = in_stack_00000a28;
    if (lVar10 == *(long *)(unaff_x19 + 0x198)) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(unaff_x19 + 0x198);
    }
    puVar6 = (undefined8 *)(*(long *)(unaff_x19 + 0x1a0) + lVar10 * 0x18);
    *puVar6 = 0;
    puVar6[1] = 1;
    puVar6[2] = 0x24;
    *(long *)(unaff_x19 + 0x1a8) = lVar10 + 1;
  }
  else {
    *(char *)(unaff_x29 + -0xa0) = cVar4;
    *(ulong *)(unaff_x29 + -0x97) = CONCAT17((char)in_stack_00000a20,(int7)uVar24);
    *(undefined8 *)(unaff_x29 + -0x9f) = uVar23;
    *(code **)(unaff_x29 + -0x88) = in_stack_00000a28;
    *(long *)(unaff_x29 + -0x90) = in_stack_00000a20;
    puVar16 = (undefined *)(uVar8 & 0xff);
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
      if (((1 < bRam000000010b627ab0 - 1) &&
          ((puVar16 = &
                      __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
           , bRam000000010b627ab0 == 0 ||
           (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                              (&
                               __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
                              ),
           puVar16 = &
                     __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
           , cVar4 == '\0')))) ||
         (uVar8 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                            (
                            ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
                            ),
         lVar10 = 
         ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
         , puVar16 = &
                     __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
         , (uVar8 & 1) == 0)) goto LAB_1008f488c;
      in_stack_00000a20 = unaff_x19 + 0x158;
      in_stack_00000a28 =
           (code *)&
                   __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      in_stack_00000a30 = unaff_x29 + -0xa0;
      *(char **)(unaff_x29 + -0xf0) = s__failed_to_archive_spawned_desce_108acb03d;
      *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000a10;
      *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xf0;
      *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar10,&stack0x000004e0);
      lVar10 = 
      ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uVar19 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
                  + 0x20);
        uVar22 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
                  + 0x28);
        *(undefined8 *)(unaff_x29 + -0x80) = 2;
        *(undefined8 *)(unaff_x29 + -0x78) = uVar19;
        *(undefined8 *)(unaff_x29 + -0x70) = uVar22;
        puVar30 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar30 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar30 + 0x18))(puVar2,unaff_x29 + -0x80);
        puVar16 = &
                  __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
        ;
        if (iVar5 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar10,puVar2,puVar30,unaff_x29 + -0x80,&stack0x000004e0);
        }
      }
    }
    else {
LAB_1008f488c:
      lVar10 = 
      ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar16 = &
                  __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
        ;
        uVar19 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
                  + 0x20);
        uVar22 = *(undefined8 *)
                  (
                  ___ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor23thread_archive_response28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9a0850a901534d32E
                  + 0x28);
        puVar30 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar30 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar5 = (**(code **)(puVar30 + 0x18))(puVar2,&stack0x00000d08);
        if (iVar5 != 0) {
          in_stack_00000a20 = unaff_x19 + 0x158;
          in_stack_00000a28 =
               (code *)&
                       __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
          ;
          in_stack_00000a30 = unaff_x29 + -0xa0;
          *(char **)(unaff_x29 + -0xf0) = s__failed_to_archive_spawned_desce_108acb03d;
          *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x00000a10;
          *(long *)(unaff_x29 + -0x100) = unaff_x29 + -0xf0;
          *(undefined **)(unaff_x29 + -0xf8) = &UNK_10b208fd0;
          *(undefined8 *)(unaff_x29 + -0x78) = uVar19;
          *(undefined8 *)(unaff_x29 + -0x80) = 2;
          *(undefined8 *)(unaff_x29 + -0x70) = uVar22;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar10,puVar2,puVar30,unaff_x29 + -0x80,&stack0x000004e0);
        }
      }
    }
    bVar3 = *(byte *)(unaff_x29 + -0xa0);
    if (bVar3 < 2) {
      if (bVar3 != 0) {
LAB_1008f49e4:
        if (*(long *)(unaff_x29 + -0x98) != 0) {
          _free(*(undefined8 *)(unaff_x29 + -0x90));
        }
      }
    }
    else if ((bVar3 == 2) || (bVar3 != 3)) goto LAB_1008f49e4;
  }
  lVar21 = *(long *)(unaff_x19 + 0x1c8);
  lVar10 = *(long *)(unaff_x19 + 0x1d0);
  goto LAB_1008f49f8;
LAB_1008f4a7c:
  in_stack_00000a18 = *(undefined **)(unaff_x19 + 0x198);
  in_stack_00000a20 = *(long *)(unaff_x19 + 0x1a0);
  in_stack_00000a28 = *(code **)(unaff_x19 + 0x1a8);
  *(undefined1 *)(unaff_x19 + 0x1e9) = 0;
  if (*(long *)(unaff_x19 + 0x180) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x188));
  }
  *(undefined1 *)(unaff_x19 + 0x1ea) = 0;
  if (*(long *)(unaff_x19 + 0x140) == 0) {
    uVar23 = *(undefined8 *)(unaff_x29 + -0xd8);
    uVar19 = *(undefined8 *)(unaff_x29 + -0xe0);
    uVar27 = *(undefined8 *)(unaff_x29 + -200);
    uVar26 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar24 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar22 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar28 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar25 = *(undefined8 *)(unaff_x29 + -0xb0);
    *in_stack_00000018 = 1;
    in_stack_00000a10 = -0x8000000000000000;
  }
  else {
    in_stack_00000a10 = -0x8000000000000000;
LAB_1008f383c:
    _free(*(undefined8 *)(unaff_x19 + 0x148));
LAB_1008f384c:
    uVar23 = *(undefined8 *)(unaff_x29 + -0xd8);
    uVar19 = *(undefined8 *)(unaff_x29 + -0xe0);
    uVar27 = *(undefined8 *)(unaff_x29 + -200);
    uVar26 = *(undefined8 *)(unaff_x29 + -0xd0);
    uVar24 = *(undefined8 *)(unaff_x29 + -0xb8);
    uVar22 = *(undefined8 *)(unaff_x29 + -0xc0);
    uVar28 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar25 = *(undefined8 *)(unaff_x29 + -0xb0);
    *in_stack_00000018 = 1;
    if (in_stack_00000a10 == -0x7fffffffffffffff) goto LAB_1008f4ac8;
  }
  FUN_100d529d4(in_stack_00000010);
  iVar5 = *(int *)(unaff_x19 + 0x108);
  if (iVar5 != 0) {
    pcVar20 = *(char **)(unaff_x19 + 0x100);
    if (*pcVar20 == '\0') {
      *pcVar20 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                (pcVar20,extraout_x1,1000000000);
    }
    FUN_1060fa678(pcVar20,iVar5,pcVar20);
  }
  *(undefined2 *)(unaff_x19 + 0x110) = 1;
  plVar17 = (long *)(unaff_x19 + 0x68);
  *plVar17 = in_stack_00000a10;
  *(undefined8 *)(unaff_x19 + 0x70) = in_stack_00000a18;
  *(long *)(unaff_x19 + 0x78) = in_stack_00000a20;
  *(code **)(unaff_x19 + 0x80) = in_stack_00000a28;
  *(undefined8 *)(unaff_x19 + 0x90) = uVar23;
  *(undefined8 *)(unaff_x19 + 0x88) = uVar19;
  *(undefined8 *)(unaff_x19 + 0xa0) = uVar27;
  *(undefined8 *)(unaff_x19 + 0x98) = uVar26;
  *(undefined8 *)(unaff_x19 + 0xb0) = uVar24;
  *(undefined8 *)(unaff_x19 + 0xa8) = uVar22;
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar28;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar25;
  *(undefined **)(unaff_x19 + 200) = puVar16;
  FUN_100d48994(unaff_x28);
  if (*plVar17 == -0x8000000000000000) {
    *(undefined1 *)(unaff_x19 + 0xd1) = 1;
    uVar22 = *(undefined8 *)(unaff_x19 + 0x78);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x70);
    unaff_x28[2] = *(undefined8 *)(unaff_x19 + 0x80);
    unaff_x28[1] = uVar22;
    *unaff_x28 = uVar19;
    lVar10 = *(long *)(*(long *)(unaff_x19 + 0x40) + 400);
    uVar19 = *(undefined8 *)(unaff_x19 + 0x60);
    if (*(long *)(unaff_x19 + 0x48) == -0x8000000000000000) {
      lVar14 = *(long *)(unaff_x19 + 0x50);
      lVar21 = *(long *)(unaff_x19 + 0x58);
      lVar18 = -0x8000000000000000;
    }
    else {
      uVar22 = *(undefined8 *)(unaff_x19 + 0x50);
      lVar21 = *(long *)(unaff_x19 + 0x58);
      if (lVar21 == 0) {
        lVar14 = 1;
      }
      else {
        lVar14 = _malloc(lVar21);
        if (lVar14 == 0) {
          func_0x0001087c9084(1,lVar21);
LAB_1008f4538:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1008f453c);
          (*pcVar11)();
        }
      }
      _memcpy(lVar14,uVar22,lVar21);
      lVar18 = lVar21;
    }
    *(long *)(unaff_x19 + 0xf0) = lVar18;
    *(long *)(unaff_x19 + 0xf8) = lVar14;
    *(long *)(unaff_x19 + 0x100) = lVar21;
    *(undefined8 *)(unaff_x19 + 0x108) = uVar19;
    *(long *)(unaff_x19 + 0x110) = lVar10 + 0x10;
    *(undefined1 *)(unaff_x19 + 0xf18) = 0;
    *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x19 + 0xf0);
    *(undefined8 *)(unaff_x19 + 0x120) = *(undefined8 *)(unaff_x19 + 0xf8);
    *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0x108);
    *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x19 + 0x100);
    *(undefined8 *)(unaff_x19 + 0x138) = 0x8000000000000004;
    *(undefined8 *)(unaff_x19 + 0x4f0) = *(undefined8 *)(unaff_x19 + 0x110);
    *(undefined1 *)(unaff_x19 + 0x588) = 0;
    uVar8 = FUN_100892e70(unaff_x19 + 0x118);
    if ((uVar8 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0xf18) = 3;
      *unaff_x22 = 0x8000000000000071;
      uVar9 = 4;
      goto LAB_1008f4ae8;
    }
    FUN_100cf6de0(unaff_x19 + 0x118);
    *(undefined1 *)(unaff_x19 + 0xf18) = 1;
    *(undefined1 *)(unaff_x19 + 0xd1) = 0;
    puVar6 = *(undefined8 **)(unaff_x19 + 0xe0);
    puVar13 = puVar6 + *(long *)(unaff_x19 + 0xe8) * 3;
    *(undefined8 **)(unaff_x19 + 0xdc8) = puVar6;
    *(undefined8 **)(unaff_x19 + 0xdd0) = puVar6;
    *(undefined8 *)(unaff_x19 + 0xdd8) = *(undefined8 *)(unaff_x19 + 0xd8);
    *(undefined8 **)(unaff_x19 + 0xde0) = puVar13;
    if (puVar6 != puVar13) {
      do {
        puVar12 = puVar6 + 3;
        *(undefined8 **)(unaff_x19 + 0xdd0) = puVar12;
        uVar19 = puVar6[2];
        uVar22 = *puVar6;
        *(undefined8 *)(unaff_x19 + 0xe0) = puVar6[1];
        *(undefined8 *)(unaff_x19 + 0xd8) = uVar22;
        *(undefined8 *)(unaff_x19 + 0xe8) = uVar19;
        if (*(long *)(unaff_x19 + 0xd8) == -0x8000000000000000) {
          uVar8 = (long)puVar13 - (long)puVar12;
          if (uVar8 == 0) goto LAB_1008f3d68;
          goto LAB_1008f3d30;
        }
        *(undefined1 *)(unaff_x19 + 0xd2) = 1;
        lVar10 = *(long *)(*(long *)(unaff_x19 + 0x40) + 400);
        *(undefined8 *)(unaff_x19 + 0xf0) = 0x8000000000000003;
        lVar10 = lVar10 + 0x10;
        *(undefined1 *)(unaff_x19 + 0xd2) = 0;
        *(long *)(unaff_x19 + 0xf8) = *(long *)(unaff_x19 + 0xd8);
        *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x19 + 0xe0);
        *(undefined8 *)(unaff_x19 + 0x108) = *(undefined8 *)(unaff_x19 + 0xe8);
        *(long *)(unaff_x19 + 0x2e8) = lVar10;
        *(undefined1 *)(unaff_x19 + 0xdc0) = 0;
        _memcpy(unaff_x19 + 0x2f0,(undefined8 *)(unaff_x19 + 0xf0),0x1f8);
        *(long *)(unaff_x19 + 0x4e8) = lVar10;
        *(undefined8 *)(unaff_x19 + 0x4f0) = 8;
        *(undefined8 *)(unaff_x19 + 0x4f8) = 0;
        *(undefined1 *)(unaff_x19 + 0x700) = 0;
        uVar8 = FUN_100897c70(unaff_x19 + 0x2f0);
        if ((uVar8 & 1) != 0) {
          *(undefined1 *)(unaff_x19 + 0xdc0) = 3;
          *unaff_x22 = 0x8000000000000071;
          uVar9 = 5;
          goto LAB_1008f4ae8;
        }
        FUN_100d40d08(unaff_x19 + 0x2f0);
        *(undefined1 *)(unaff_x19 + 0xdc0) = 1;
        *(undefined1 *)(unaff_x19 + 0xd2) = 0;
        puVar13 = *(undefined8 **)(unaff_x19 + 0xde0);
        puVar6 = *(undefined8 **)(unaff_x19 + 0xdd0);
      } while (puVar6 != puVar13);
    }
    *(undefined8 *)(unaff_x19 + 0xd8) = 0x8000000000000000;
    uVar8 = (long)puVar13 - (long)puVar6;
    puVar12 = puVar6;
    if (uVar8 != 0) {
LAB_1008f3d30:
      uVar8 = uVar8 / 0x18;
      puVar12 = puVar12 + 1;
      do {
        if (puVar12[-1] != 0) {
          _free(*puVar12);
        }
        puVar12 = puVar12 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
LAB_1008f3d68:
    if (*(long *)(unaff_x19 + 0xdd8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xdc8));
    }
    *(undefined1 *)(unaff_x19 + 0xd1) = 0;
    uVar19 = 0x800000000000006f;
    uVar8 = *(ulong *)(unaff_x19 + 0x48);
  }
  else {
    in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0xb0);
    in_stack_000000b0 = *(undefined8 *)(unaff_x19 + 0xa8);
    in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0xc0);
    in_stack_000000c0 = *(undefined8 *)(unaff_x19 + 0xb8);
    in_stack_000000d0 = *(undefined8 *)(unaff_x19 + 200);
    in_stack_00000078 = *(undefined8 *)(unaff_x19 + 0x70);
    in_stack_00000070 = *plVar17;
    in_stack_00000088 = *(undefined8 *)(unaff_x19 + 0x80);
    in_stack_00000080 = *(undefined8 *)(unaff_x19 + 0x78);
    in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x90);
    in_stack_00000090 = *(undefined8 *)(unaff_x19 + 0x88);
    in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0xa0);
    in_stack_000000a0 = *(undefined8 *)(unaff_x19 + 0x98);
    uVar19 = 0x8000000000000070;
    uVar8 = *(ulong *)(unaff_x19 + 0x48);
  }
  if ((uVar8 & 0x7fffffffffffffff) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x50));
  }
  *unaff_x22 = uVar19;
  _memcpy(unaff_x22 + 1,&stack0x00000070,0x3b0);
  uVar9 = 1;
LAB_1008f4ae8:
  *(undefined1 *)(unaff_x19 + 0xd0) = uVar9;
  return;
}

