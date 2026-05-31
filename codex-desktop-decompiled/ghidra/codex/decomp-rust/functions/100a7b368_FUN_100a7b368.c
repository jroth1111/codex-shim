
/* WARNING: Removing unreachable block (ram,0x000100a7a4f0) */
/* WARNING: Removing unreachable block (ram,0x000100a7a4f4) */
/* WARNING: Removing unreachable block (ram,0x000100a7a4f8) */
/* WARNING: Removing unreachable block (ram,0x000100a7a500) */
/* WARNING: Removing unreachable block (ram,0x000100a7a7a8) */
/* WARNING: Removing unreachable block (ram,0x000100a7a50c) */
/* WARNING: Removing unreachable block (ram,0x000100a7a7e8) */
/* WARNING: Removing unreachable block (ram,0x000100a7a7f8) */
/* WARNING: Removing unreachable block (ram,0x000100a7a808) */
/* WARNING: Removing unreachable block (ram,0x000100a7a80c) */
/* WARNING: Removing unreachable block (ram,0x000100a7af24) */
/* WARNING: Removing unreachable block (ram,0x000100a7af48) */
/* WARNING: Removing unreachable block (ram,0x000100a7af50) */
/* WARNING: Removing unreachable block (ram,0x000100a7af58) */
/* WARNING: Removing unreachable block (ram,0x000100a7a810) */
/* WARNING: Removing unreachable block (ram,0x000100a7a820) */
/* WARNING: Removing unreachable block (ram,0x000100a7a830) */
/* WARNING: Removing unreachable block (ram,0x000100a7a838) */
/* WARNING: Removing unreachable block (ram,0x000100a7ab04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a7b368(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  long unaff_x19;
  long lVar15;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar16;
  long unaff_x25;
  long lVar17;
  ulong unaff_x26;
  long lVar18;
  long unaff_x28;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined1 *in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  long *in_stack_000000e8;
  undefined2 uStack000000000000016c;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 uStack0000000000000188;
  undefined2 uStack000000000000018c;
  long in_stack_00000190;
  undefined8 *in_stack_00000198;
  long in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined4 in_stack_000007c8;
  undefined2 in_stack_000007cc;
  
  puVar13 = (undefined8 *)FUN_108856088(s_duplicate_field_____108ac2973,&stack0x00000190);
  if ((-0x7fffffffffffffff < unaff_x28) && (unaff_x28 != 0)) {
    _free();
    unaff_x20 = puVar13;
  }
  if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
    _free(in_stack_000000d0);
  }
  in_stack_00000190 = -0x8000000000000000;
  in_stack_00000198 = puVar13;
  plVar10 = (long *)FUN_100654604(&stack0x00000450);
  if (plVar10 != (long *)0x0) {
    if (*plVar10 == 1) {
      FUN_100de21d4(plVar10 + 1);
    }
    else if ((*plVar10 == 0) && (plVar10[2] != 0)) {
      _free(plVar10[1]);
    }
    _free(plVar10);
  }
  lVar11 = FUN_108832da4(puVar13,&stack0x00000450);
  if (in_stack_00000450 != 0) {
    _free(in_stack_00000458);
  }
  uVar16 = *(undefined8 *)(unaff_x19 + 0x340);
  lVar17 = *(long *)(unaff_x19 + 0x348);
  if (lVar17 == 0) {
    in_stack_000000d0 = (undefined8 *)0x1;
  }
  else {
    in_stack_000000d0 = (undefined8 *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar17,1);
    if (in_stack_000000d0 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,lVar17);
      goto LAB_100a7b6b8;
    }
  }
  _memcpy(in_stack_000000d0,uVar16,lVar17);
  lVar18 = unaff_x25 + -0xf;
  if (unaff_x22 != 0) {
    _free(in_stack_000000a0);
  }
  *(undefined2 *)(unaff_x19 + 0x350) = 1;
  FUN_100d534e0(in_stack_000000b0);
  *(undefined1 *)(unaff_x19 + 0x7a9) = 0;
  lVar7 = **(long **)(unaff_x19 + 0x218);
  **(long **)(unaff_x19 + 0x218) = lVar7 + -1;
  LORelease();
  if (lVar7 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4(unaff_x19 + 0x218);
  }
  if (*(long *)(unaff_x19 + 0x200) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x208));
  }
  if (*(long *)(unaff_x19 + 0x1a0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1a8));
  }
  if (*(long *)(unaff_x19 + 0x1b8) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x1c0));
  }
  lVar7 = *(long *)(unaff_x19 + 0x1d0);
  if (lVar7 != -0x8000000000000000) {
    lVar3 = *(long *)(unaff_x19 + 0x1d8);
    lVar15 = *(long *)(unaff_x19 + 0x1e0);
    if (lVar15 != 0) {
      puVar13 = (undefined8 *)(lVar3 + 8);
      do {
        if (puVar13[-1] != 0) {
          _free(*puVar13);
        }
        puVar13 = puVar13 + 4;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    unaff_x25 = -0x7fffffffffffffec;
    if (lVar7 != 0) {
      _free(lVar3);
    }
  }
  *in_stack_000000c8 = 1;
  if (lVar18 == unaff_x25 + 1) {
    *in_stack_000000e8 = unaff_x25 + 1;
    uVar14 = 6;
    goto LAB_100a7ac60;
  }
  uStack000000000000016c = in_stack_000007cc;
  FUN_100cdb5a8(in_stack_00000098);
  if (lVar18 == unaff_x25) {
    if (lVar17 == 0) {
      in_stack_000000d0 = (undefined8 *)_malloc(0x3c);
      if (in_stack_000000d0 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x3c);
LAB_100a7b6b8:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a7b6bc);
        (*pcVar6)();
      }
      in_stack_000000d0[1] = 0x6e6967756c702065;
      *in_stack_000000d0 = 0x636170736b726f77;
      in_stack_000000d0[3] = 0x65736e6f70736572;
      in_stack_000000d0[2] = 0x2065746165726320;
      in_stack_000000d0[5] = 0x6564756c636e6920;
      in_stack_000000d0[4] = 0x746f6e2064696420;
      *(undefined8 *)((long)in_stack_000000d0 + 0x34) = 0x6469206e6967756c;
      *(undefined8 *)((long)in_stack_000000d0 + 0x2c) = 0x702061206564756c;
      lVar18 = unaff_x25 + -2;
      if ((lVar11 != -0x8000000000000000) && (lVar11 != 0)) {
        _free(unaff_x20);
      }
      lVar17 = 0x3c;
      unaff_x20 = in_stack_000000d0;
      goto LAB_100a7ab34;
    }
    uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x19 + 0x68);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 0x70) + 8);
    lVar18 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x10);
    if (lVar18 == 0) {
      lVar7 = 1;
    }
    else {
      lVar7 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar18,1);
      if (lVar7 == 0) {
        func_0x0001087c9084(1,lVar18);
        goto LAB_100a7b6b8;
      }
    }
    _memcpy(lVar7,uVar4,lVar18);
    lVar7 = __ZN18codex_core_plugins6remote5share11local_paths30record_plugin_share_local_path17hd60302db9c30fb24E
                      (uVar16,uVar5,in_stack_000000d0,lVar17,&stack0x00000680);
    lVar18 = -0x7fffffffffffffec;
    if (lVar7 != 0) {
      in_stack_00000190 = lVar7;
      if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
         (((bRam000000010b62b8b0 - 1 < 2 ||
           ((bRam000000010b62b8b0 != 0 &&
            (cVar8 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN18codex_core_plugins6remote5share24save_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1929610c5058e46E
                               ), cVar8 != '\0')))) &&
          (uVar12 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                              (
                              ___ZN18codex_core_plugins6remote5share24save_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1929610c5058e46E
                              ), (uVar12 & 1) != 0)))) {
        FUN_100a7c260(&stack0x00000560);
      }
      else {
        lVar7 = 
        ___ZN18codex_core_plugins6remote5share24save_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1929610c5058e46E
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          in_stack_00000178 =
               *(undefined8 *)
                (
                ___ZN18codex_core_plugins6remote5share24save_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1929610c5058e46E
                + 0x20);
          in_stack_00000180 =
               *(undefined8 *)
                (
                ___ZN18codex_core_plugins6remote5share24save_remote_plugin_share28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17ha1929610c5058e46E
                + 0x28);
          in_stack_00000170 = 2;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar9 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000170);
          if (iVar9 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar7,puVar2,puVar1,&stack0x00000450,&stack0x00000560);
          }
        }
      }
      FUN_100de21d4(&stack0x00000190);
    }
    uStack000000000000018c = uStack000000000000016c;
    *(undefined1 *)(unaff_x19 + 0x12d) = 0;
    *(undefined1 *)(unaff_x19 + 0x129) = 0;
    uStack0000000000000188 = in_stack_000007c8;
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x100));
    }
    *(undefined2 *)(unaff_x19 + 0x12a) = 0;
    *(undefined1 *)(unaff_x19 + 0x12e) = 0;
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xb8));
    }
    *(undefined1 *)(unaff_x19 + 300) = 0;
  }
  else {
    uStack000000000000018c = uStack000000000000016c;
    uStack0000000000000188 = in_stack_000007c8;
LAB_100a7ab34:
    *(undefined1 *)(unaff_x19 + 0x12d) = 0;
    if (((*(byte *)(unaff_x19 + 0x129) & 1) != 0) && (*(long *)(unaff_x19 + 0x130) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x138));
    }
    *(undefined1 *)(unaff_x19 + 0x129) = 0;
    if (((*(byte *)(unaff_x19 + 0x12a) & 1) != 0) && (*(long *)(unaff_x19 + 0xe0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0xe8));
    }
    if (*(long *)(unaff_x19 + 0xf8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x100));
    }
    *(undefined1 *)(unaff_x19 + 0x12a) = 0;
    *(undefined1 *)(unaff_x19 + 0x12e) = 0;
    if (((*(byte *)(unaff_x19 + 299) & 1) != 0) && (*(long *)(unaff_x19 + 200) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0xd0));
    }
    *(undefined1 *)(unaff_x19 + 299) = 0;
    if (*(long *)(unaff_x19 + 0xb0) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0xb8));
    }
    if (((*(byte *)(unaff_x19 + 300) & 1) != 0) &&
       (lVar7 = *(long *)(unaff_x19 + 0x88), lVar7 != -0x8000000000000000)) {
      lVar3 = *(long *)(unaff_x19 + 0x90);
      lVar15 = *(long *)(unaff_x19 + 0x98);
      if (lVar15 != 0) {
        puVar13 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar13[-1] != 0) {
            _free(*puVar13);
          }
          puVar13 = puVar13 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      if (lVar7 != 0) {
        _free(lVar3);
      }
    }
    *(undefined1 *)(unaff_x19 + 300) = 0;
  }
  *in_stack_000000e8 = lVar18;
  in_stack_000000e8[1] = lVar17;
  in_stack_000000e8[2] = (long)in_stack_000000d0;
  in_stack_000000e8[3] = lVar17;
  in_stack_000000e8[4] = lVar11;
  in_stack_000000e8[5] = (long)unaff_x20;
  *(undefined2 *)(in_stack_000000e8 + 6) = 0;
  *(undefined4 *)((long)in_stack_000000e8 + 0x32) = uStack0000000000000188;
  uVar14 = 1;
  *(undefined2 *)((long)in_stack_000000e8 + 0x36) = uStack000000000000018c;
LAB_100a7ac60:
  *(undefined1 *)(unaff_x19 + 0x128) = uVar14;
  return;
}

