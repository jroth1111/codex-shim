
long __ZN10codex_core6config36apply_managed_filesystem_constraints17h46165931510513a3E
               (long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  
  lVar8 = param_1;
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar19 = *(long *)(param_2 + 8);
    lVar18 = lVar19 + *(long *)(param_2 + 0x10) * 0x18;
    do {
      pbVar1 = *(byte **)(lVar19 + 8);
      uVar2 = *(ulong *)(lVar19 + 0x10);
      lVar19 = lVar19 + 0x18;
      pbVar13 = pbVar1;
      do {
        if (pbVar13 == pbVar1 + uVar2) {
LAB_102e671a0:
          __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                    (&lStack_90,pbVar1,uVar2);
          uVar6 = uStack_88;
          lVar8 = __ZN25codex_utils_absolute_path10absolutize10absolutize17h28de722e70c9dcbeE
                            (&uStack_78,uStack_88,uStack_80);
          uVar4 = uStack_68;
          puVar9 = puStack_70;
          uVar2 = uStack_78;
          if (uStack_78 != 0x8000000000000000) {
            if (lStack_90 != 0) {
              lVar8 = _free(uVar6);
            }
            uStack_c8 = 0x8000000000000005;
            lVar11 = *(long *)(param_1 + 0x20);
            puVar5 = puVar9;
            uStack_b0 = uVar4;
            goto joined_r0x000102e672d4;
          }
          if (lStack_90 != 0) {
            lVar8 = _free(uVar6);
          }
          if (((ulong)puVar9 & 3) != 1) goto LAB_102e670d4;
          puVar5 = (undefined8 *)((long)puVar9 + -1);
          uVar6 = *puVar5;
          puVar9 = *(undefined8 **)((long)puVar9 + 7);
          pcVar10 = (code *)*puVar9;
          if (pcVar10 != (code *)0x0) {
            (*pcVar10)(uVar6);
          }
          if (puVar9[1] != 0) {
            _free(uVar6);
          }
          goto LAB_102e67288;
        }
        pbVar15 = pbVar13 + 1;
        uVar14 = (uint)*pbVar13;
        if ((char)*pbVar13 < '\0') {
          if (uVar14 < 0xe0) {
            pbVar15 = pbVar13 + 2;
            uVar14 = pbVar13[1] & 0x3f | (uVar14 & 0x1f) << 6;
          }
          else {
            uVar3 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
            if (uVar14 < 0xf0) {
              pbVar15 = pbVar13 + 3;
              uVar14 = uVar3 | (uVar14 & 0x1f) << 0xc;
            }
            else {
              uVar14 = pbVar13[3] & 0x3f | uVar3 << 6 | (uVar14 & 7) << 0x12;
              if (uVar14 == 0x110000) goto LAB_102e671a0;
              pbVar15 = pbVar13 + 4;
            }
          }
        }
        pbVar13 = pbVar15;
      } while (0x31 < uVar14 - 0x2a ||
               (1L << ((ulong)(uVar14 - 0x2a) & 0x3f) & 0x2000000200001U) == 0);
      if (uVar2 == 0) {
        puVar5 = (undefined8 *)0x1;
      }
      else {
        puVar5 = (undefined8 *)_malloc(uVar2);
        if (puVar5 == (undefined8 *)0x0) {
          uVar6 = func_0x0001087c9084(1,uVar2);
          if (*(long *)(pbVar1 + 8) != 0) {
            _free(uVar2);
          }
          _free(0);
          uVar6 = __Unwind_Resume(uVar6);
          FUN_1033bcf84(&uStack_c8);
          uVar6 = __Unwind_Resume(uVar6);
          FUN_1033bcf84(&uStack_c8);
          auStack_150 = __Unwind_Resume(uVar6);
          uStack_d8 = 0x102e67378;
          if ((long)param_3 < 0) {
            puStack_100 = &UNK_108d532e8;
            pcVar7 = s_must_be_at_least_108af5704;
            puVar16 = auStack_140;
            puVar12 = auStack_140;
          }
          else {
            if (param_3 < 0x36ee81) {
              return 0;
            }
            puStack_100 = &UNK_108d6c278;
            pcVar7 = s_must_be_at_most_108af56ef;
            puVar16 = auStack_128;
            puVar12 = auStack_128;
          }
          puStack_110 = (undefined8 *)auStack_150;
          puStack_f8 = &
                       __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_isize_GT_3fmt17h6f8f019831ac49f2E
          ;
          puStack_108 = &DAT_103296230;
          uStack_f0 = uVar2;
          uStack_e8 = uVar6;
          puStack_e0 = &stack0xfffffffffffffff0;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(puVar12,pcVar7,&puStack_110);
          lVar8 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,puVar16);
          return lVar8;
        }
      }
      param_3 = uVar2;
      lVar8 = _memcpy(puVar5,pbVar1);
      uStack_c8 = 0x8000000000000006;
      lVar11 = *(long *)(param_1 + 0x20);
      uStack_b0 = uVar2;
joined_r0x000102e672d4:
      uStack_c0 = uVar2;
      puStack_b8 = puVar5;
      if (lVar11 == 0) {
        uStack_98 = 2;
        lVar11 = 0;
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_102e6709c;
      }
      else {
        uStack_98 = 2;
        lVar17 = *(long *)(param_1 + 0x18);
        lVar11 = lVar11 * 0x38;
        do {
          lVar8 = FUN_103657148(lVar17,&uStack_c8);
          if (((int)lVar8 != 0) && (*(char *)(lVar17 + 0x30) == '\x02')) {
            if (uVar2 != 0) {
LAB_102e67288:
              lVar8 = _free(puVar5);
            }
            goto LAB_102e670d4;
          }
          lVar17 = lVar17 + 0x38;
          lVar11 = lVar11 + -0x38;
        } while (lVar11 != 0);
        lVar11 = *(long *)(param_1 + 0x20);
        if (lVar11 == *(long *)(param_1 + 0x10)) {
LAB_102e6709c:
          lVar8 = func_0x0001089a4d98(param_1 + 0x10);
        }
      }
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar11 * 0x38);
      puVar9[1] = uStack_c0;
      *puVar9 = uStack_c8;
      puVar9[3] = uStack_b0;
      puVar9[2] = puStack_b8;
      puVar9[5] = uStack_a0;
      puVar9[4] = uStack_a8;
      puVar9[6] = CONCAT71(uStack_97,uStack_98);
      *(long *)(param_1 + 0x20) = lVar11 + 1;
LAB_102e670d4:
    } while (lVar19 != lVar18);
  }
  return lVar8;
}

