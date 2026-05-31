
void FUN_1005f9370(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  undefined1 uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined1 *in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  
code_r0x0001005f9370:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000058,s_3Failed_to_read_global_AGENTS_md_108ac224a,&stack0x00000020);
  lVar6 = in_stack_00000068;
  lVar5 = in_stack_00000060;
  lVar11 = in_stack_00000058;
  lVar15 = unaff_x22[2];
  if (lVar15 == *unaff_x22) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(unaff_x22);
  }
  plVar10 = (long *)(unaff_x22[1] + lVar15 * 0x18);
  *plVar10 = lVar11;
  plVar10[1] = lVar5;
  plVar10[2] = lVar6;
  unaff_x22[2] = lVar15 + 1;
  if (((ulong)in_stack_00000008 & 3) != 1) goto LAB_1005f9400;
  puVar12 = (undefined8 *)(in_stack_00000008 + -1);
  uVar13 = *puVar12;
  puVar14 = *(undefined8 **)(in_stack_00000008 + 7);
  if ((code *)*puVar14 != (code *)0x0) {
    (*(code *)*puVar14)(uVar13);
  }
LAB_1005f93e8:
  if (puVar14[1] != 0) {
    _free(uVar13);
  }
  _free(puVar12);
LAB_1005f9400:
  lVar11 = unaff_x19[0xf];
  do {
    if (lVar11 != 0) {
      _free(unaff_x19[0x10]);
    }
    *(undefined1 *)(unaff_x19 + 0x13) = 0;
    lVar11 = unaff_x19[2];
    if (unaff_x19[3] == lVar11) {
      lVar11 = -0x8000000000000000;
LAB_1005f950c:
      *unaff_x20 = lVar11;
      unaff_x20[1] = unaff_x21;
      unaff_x20[2] = lVar11;
      unaff_x20[4] = in_stack_00000048;
      unaff_x20[3] = in_stack_00000040;
      unaff_x20[5] = in_stack_00000050;
      uVar8 = 1;
LAB_1005f9528:
      *(undefined1 *)((long)unaff_x19 + 0x99) = uVar8;
      return;
    }
    unaff_x19[2] = lVar11 + 1;
    uVar13 = *(undefined8 *)(unaff_x19[0xe] + 8);
    uVar2 = *(undefined8 *)(unaff_x19[0xe] + 0x10);
    __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
              (&stack0x00000058,unaff_x19[lVar11 * 2 + 4],unaff_x19[lVar11 * 2 + 5]);
    lVar11 = in_stack_00000060;
    __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
              (&stack0x00000020,in_stack_00000060,in_stack_00000068,uVar13,uVar2);
    unaff_x19[0x10] = in_stack_00000028;
    unaff_x19[0xf] = in_stack_00000020;
    unaff_x19[0x11] = in_stack_00000030;
    if (in_stack_00000058 != 0) {
      _free(lVar11);
    }
    *(undefined1 *)(unaff_x19 + 0x13) = 1;
    auVar16 = (**(code **)(unaff_x19[1] + 0x18))(*unaff_x19,unaff_x19 + 0xf,0);
    *(undefined1 (*) [16])(unaff_x19 + 8) = auVar16;
    (**(code **)(auVar16._8_8_ + 0x18))(&stack0x00000020);
    puVar14 = in_stack_00000030;
    puVar3 = in_stack_00000028;
    puVar12 = in_stack_00000020;
    if (in_stack_00000020 == (undefined8 *)0x8000000000000001) {
      *unaff_x20 = -0x7fffffffffffffff;
      uVar8 = 3;
      goto LAB_1005f9528;
    }
    uVar13 = unaff_x19[8];
    puVar1 = (undefined8 *)unaff_x19[9];
    pcVar9 = (code *)*puVar1;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar13);
    }
    if (puVar1[1] != 0) {
      _free(uVar13);
    }
    if (puVar12 == (undefined8 *)0x8000000000000000) break;
    __ZN10codex_core9agents_md17warn_invalid_utf817h01868a62316891b7E
              (unaff_x19 + 0xf,puVar3,puVar14,&UNK_108ca2137,6,unaff_x19[0xd]);
    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&stack0x00000020,puVar3,puVar14);
    puVar4 = in_stack_00000028;
    auVar16 = FUN_100e8d6f8(in_stack_00000028,in_stack_00000030);
    lVar11 = auVar16._8_8_;
    if (lVar11 != 0) {
      unaff_x21 = _malloc(lVar11);
      if (unaff_x21 == 0) {
        FUN_107c03c64(1,lVar11);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1005f9558);
        (*pcVar9)();
      }
      _memcpy(unaff_x21,auVar16._0_8_,lVar11);
      *(undefined1 *)(unaff_x19 + 0x13) = 0;
      in_stack_00000048 = unaff_x19[0x10];
      in_stack_00000040 = unaff_x19[0xf];
      in_stack_00000050 = unaff_x19[0x11];
      if (((ulong)in_stack_00000020 & 0x7fffffffffffffff) != 0) {
        _free(puVar4);
      }
      if (puVar12 != (undefined8 *)0x0) {
        _free(puVar3);
      }
      *(undefined1 *)(unaff_x19 + 0x13) = 0;
      goto LAB_1005f950c;
    }
    if (((ulong)in_stack_00000020 & 0x7fffffffffffffff) != 0) {
      _free(puVar4);
    }
    if (puVar12 != (undefined8 *)0x0) {
      _free(puVar3);
    }
    lVar11 = unaff_x19[0xf];
  } while( true );
  cVar7 = FUN_100c355d4(puVar3);
  if (cVar7 == '\0') {
    if (((ulong)puVar3 & 3) == 1) {
      puVar12 = (undefined8 *)(puVar3 + -1);
      uVar13 = *puVar12;
      puVar14 = *(undefined8 **)(puVar3 + 7);
      if ((code *)*puVar14 != (code *)0x0) {
        (*(code *)*puVar14)(uVar13);
      }
      goto LAB_1005f93e8;
    }
    goto LAB_1005f9400;
  }
  cVar7 = FUN_100c355d4(puVar3);
  if (cVar7 != '\x0f') {
    in_stack_00000008 = puVar3;
    unaff_x22 = (long *)unaff_x19[0xd];
    in_stack_00000010 = unaff_x19[0x10];
    in_stack_00000018 = unaff_x19[0x11];
    in_stack_00000020 = &stack0x00000010;
    in_stack_00000028 =
         &__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE;
    in_stack_00000030 = &stack0x00000008;
    in_stack_00000038 =
         &__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
    ;
    goto code_r0x0001005f9370;
  }
  if (((ulong)puVar3 & 3) == 1) goto code_r0x0001005f9288;
  goto LAB_1005f9400;
code_r0x0001005f9288:
  puVar12 = (undefined8 *)(puVar3 + -1);
  uVar13 = *puVar12;
  puVar14 = *(undefined8 **)(puVar3 + 7);
  if ((code *)*puVar14 != (code *)0x0) {
    (*(code *)*puVar14)(uVar13);
  }
  goto LAB_1005f93e8;
}

