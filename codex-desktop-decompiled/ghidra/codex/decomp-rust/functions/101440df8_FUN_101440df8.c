
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101440df8(ulong *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  char *pcVar3;
  code *pcVar4;
  char *pcVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long unaff_x23;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  ulong uStack_b0;
  char *pcStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  char *pcStack_90;
  ulong uStack_88;
  ulong uStack_80;
  char *pcStack_78;
  ulong uStack_70;
  undefined1 uStack_61;
  
  if (*param_2 == '\x14') {
    lVar11 = *(long *)(param_2 + 0x10);
    uVar12 = *(ulong *)(param_2 + 0x18);
    lVar15 = uVar12 * 0x20;
    lVar1 = lVar11 + lVar15;
    uVar9 = uVar12;
    if (0xaaa9 < uVar12) {
      uVar9 = 0xaaaa;
    }
    if (uVar12 == 0) {
      uVar9 = 0;
      uStack_b0 = 0;
      pcStack_a8 = (char *)0x8;
      uStack_a0 = 0;
      lVar10 = lVar11;
    }
    else {
      lVar10 = uVar9 * 0x18;
      pcVar5 = (char *)_malloc(lVar10);
      if (pcVar5 == (char *)0x0) {
        uVar7 = func_0x0001087c9084(8,lVar10);
        FUN_100e582c8(&uStack_80);
        uVar7 = __Unwind_Resume(uVar7);
        if (unaff_x23 != 0) {
          _free(lVar10);
        }
        uVar9 = uStack_a0;
        if (uStack_a0 != 0) goto LAB_1014411fc;
        do {
          if (uStack_b0 != 0) {
            _free(pcStack_a8);
          }
          __Unwind_Resume(uVar7);
LAB_1014411fc:
          puVar13 = (undefined8 *)((long)pcStack_a8 + 8);
          do {
            if (puVar13[-1] != 0) {
              _free(*puVar13);
            }
            puVar13 = puVar13 + 3;
            uVar9 = uVar9 + -1;
          } while (uVar9 != 0);
        } while( true );
      }
      uStack_a0 = 0;
      uStack_b0 = uVar9;
      pcStack_a8 = pcVar5;
      puVar6 = (ulong *)(*
                        ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                        )();
      uVar9 = (lVar15 - 0x20U >> 5) + 1;
      do {
        func_0x0001004e0ca0(&uStack_80,lVar11);
        uVar2 = uStack_70;
        pcVar3 = pcStack_78;
        uVar12 = uStack_80;
        pcVar5 = pcStack_78;
        if (uStack_80 == 0x8000000000000000) goto LAB_10144109c;
        uStack_98 = uStack_80;
        pcStack_90 = pcStack_78;
        uStack_88 = uStack_70;
        if ((char)puVar6[4] != '\x01') {
          if ((char)puVar6[4] != '\x02') {
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (puVar6,&DAT_100c35cd4);
            *(undefined1 *)(puVar6 + 4) = 1;
            goto LAB_101440edc;
          }
          if (uStack_80 != 0) {
            _free(pcStack_78);
          }
LAB_101440fe4:
          func_0x000108a82a50(&UNK_10b234430);
LAB_101441108:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10144110c);
          (*pcVar4)();
        }
LAB_101440edc:
        if (0x7ffffffffffffffe < *puVar6) {
          func_0x000108a07858(&UNK_10b24de60);
          goto LAB_101441108;
        }
        *puVar6 = *puVar6 + 1;
        if (puVar6[1] != 0x8000000000000000) {
          FUN_100bdc6e8(&uStack_80,&uStack_98,puVar6[2],puVar6[3]);
          *puVar6 = *puVar6 - 1;
          if (uStack_80 == 0x8000000000000001) goto LAB_101440fe4;
          pcVar5 = pcStack_78;
          uVar12 = uStack_80;
          uVar16 = uStack_70;
          if (uStack_80 != 0x8000000000000000) goto LAB_101440f88;
LAB_10144109c:
          pcVar3 = pcStack_a8;
          if (uStack_a0 != 0) {
            pcVar14 = pcStack_a8 + 8;
            uVar9 = uStack_a0;
            do {
              if (*(long *)(pcVar14 + -8) != 0) {
                _free(*(undefined8 *)pcVar14);
              }
              pcVar14 = pcVar14 + 0x18;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          if (uStack_b0 != 0) {
            _free(pcVar3);
          }
          goto LAB_101441028;
        }
        if ((uVar2 == 0) || (*pcVar3 != '/')) {
          pcVar5 = (char *)FUN_1088561c0(&UNK_108cd61aa,0x30);
          *puVar6 = *puVar6 - 1;
          if (uVar12 != 0) {
            _free(pcVar3);
          }
          goto LAB_10144109c;
        }
        FUN_100bdc488(&uStack_80,&uStack_98);
        uVar12 = uStack_80;
        pcVar5 = pcStack_78;
        uVar16 = uStack_70;
        if (uStack_80 == 0x8000000000000000) {
          pcVar5 = (char *)FUN_1088562f8(pcStack_78);
          uVar16 = uVar2;
        }
        *puVar6 = *puVar6 - 1;
        if (uVar12 == 0x8000000000000000) goto LAB_10144109c;
LAB_101440f88:
        uVar2 = uStack_a0;
        if (uStack_a0 == uStack_b0) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E(&uStack_b0);
        }
        lVar11 = lVar11 + 0x20;
        puVar8 = (ulong *)(pcStack_a8 + uVar2 * 0x18);
        *puVar8 = uVar12;
        puVar8[1] = (ulong)pcVar5;
        puVar8[2] = uVar16;
        uStack_a0 = uVar2 + 1;
        lVar15 = lVar15 + -0x20;
        lVar10 = lVar1;
      } while (lVar15 != 0);
    }
    uVar12 = uStack_a0;
    pcVar3 = pcStack_a8;
    uVar2 = uStack_b0;
    pcStack_78 = pcStack_a8;
    uStack_80 = uStack_b0;
    uStack_70 = uStack_a0;
    pcVar5 = pcStack_a8;
    if (uStack_b0 != 0x8000000000000000) {
      uVar16 = lVar1 - lVar10;
      if (uVar16 == 0) {
        param_1[1] = (ulong)pcStack_a8;
        *param_1 = uStack_b0;
        param_1[2] = uStack_a0;
        return;
      }
      uStack_98 = uVar9;
      pcVar5 = (char *)FUN_1087e422c(uVar9 + (uVar16 >> 5),&uStack_98,&UNK_10b23a1b0);
      if (uVar12 != 0) {
        pcVar14 = pcVar3 + 8;
        do {
          if (*(long *)(pcVar14 + -8) != 0) {
            _free(*(undefined8 *)pcVar14);
          }
          pcVar14 = pcVar14 + 0x18;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      if (uVar2 != 0) {
        _free(pcVar3);
      }
    }
  }
  else {
    pcVar5 = (char *)FUN_108855c40(param_2,&uStack_61,&UNK_10b20a460);
  }
LAB_101441028:
  *param_1 = 0x8000000000000001;
  param_1[1] = (ulong)pcVar5;
  return;
}

