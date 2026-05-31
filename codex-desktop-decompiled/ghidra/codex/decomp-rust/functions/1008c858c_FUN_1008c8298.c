
/* WARNING: Removing unreachable block (ram,0x0001008c83a4) */
/* WARNING: Removing unreachable block (ram,0x0001008c83b0) */
/* WARNING: Removing unreachable block (ram,0x0001008c83b4) */
/* WARNING: Removing unreachable block (ram,0x0001008c83b8) */
/* WARNING: Removing unreachable block (ram,0x0001008c83cc) */
/* WARNING: Removing unreachable block (ram,0x0001008c83dc) */
/* WARNING: Removing unreachable block (ram,0x0001008c83e4) */
/* WARNING: Removing unreachable block (ram,0x0001008c83e8) */
/* WARNING: Removing unreachable block (ram,0x0001008c83d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1008c8298(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long lVar11;
  long unaff_x22;
  long unaff_x23;
  ulong in_xzr;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000028;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char *pcStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (s_failed_to_list_apps__108aca4b7,&stack0x00000030);
  (**(code **)*in_stack_00000028)();
  lVar11 = *(long *)(unaff_x19 + 0x2548);
  uVar7 = *(ulong *)(lVar11 + 0x1c0);
  do {
    if ((uVar7 & 1) != 0) {
      if (in_stack_00000000 != 0) {
        _free(in_stack_00000008);
      }
      goto LAB_1008c8408;
    }
    if (uVar7 == 0xfffffffffffffffe) {
      __ZN3std7process5abort17hdc01e45e25b715e8E();
      FUN_107c05cc0(&UNK_10b225670);
      uVar9 = FUN_107c05cc4(&UNK_10b225670);
      FUN_100de93d0();
      FUN_100d366d0(unaff_x19 + 0x2548);
      *(undefined1 *)(unaff_x22 + 1) = 2;
      __Unwind_Resume(uVar9);
      uVar9 = FUN_107c05ccc();
      uVar7 = __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                        (___ZN16codex_app_server18request_processors14apps_processor20AppsRequestProcessor31workspace_codex_plugins_enabled28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8694194302053eeaE
                         ,uVar9);
      lVar11 = 
      ___ZN16codex_app_server18request_processors14apps_processor20AppsRequestProcessor31workspace_codex_plugins_enabled28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8694194302053eeaE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        uStack_c0 = *(undefined8 *)
                     (
                     ___ZN16codex_app_server18request_processors14apps_processor20AppsRequestProcessor31workspace_codex_plugins_enabled28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8694194302053eeaE
                     + 0x20);
        uStack_b8 = *(undefined8 *)
                     (
                     ___ZN16codex_app_server18request_processors14apps_processor20AppsRequestProcessor31workspace_codex_plugins_enabled28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h8694194302053eeaE
                     + 0x28);
        uStack_c8 = 2;
        puVar5 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar5 = &UNK_10b3c24c8;
        }
        puVar6 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar6 = &UNK_109adfc03;
        }
        uVar7 = (**(code **)(puVar5 + 0x18))(puVar6,&uStack_c8);
        if ((int)uVar7 != 0) {
          lStack_90 = *(long *)(lVar11 + 0x60);
          uStack_88 = *(undefined8 *)(lVar11 + 0x68);
          lStack_a8 = *(long *)(lVar11 + 0x50);
          uStack_a0 = *(undefined8 *)(lVar11 + 0x58);
          uStack_b0 = 1;
          if (lStack_a8 == 0) {
            uStack_b0 = 2;
          }
          uStack_68 = *(undefined4 *)(lVar11 + 8);
          uStack_64 = *(undefined4 *)(lVar11 + 0xc);
          uStack_48 = 1;
          puStack_40 = &uStack_50;
          puStack_38 = &DAT_1061c2098;
          uStack_98 = 1;
          if (lStack_90 == 0) {
            uStack_98 = 2;
          }
          uStack_78 = uStack_c0;
          uStack_80 = uStack_c8;
          uStack_70 = uStack_b8;
          ppuStack_58 = &puStack_40;
          pcStack_60 = s__108b39f4f;
          uStack_50 = uVar9;
          uVar7 = (**(code **)(puVar5 + 0x20))(puVar6,&uStack_b0);
        }
      }
      return uVar7;
    }
    uVar1 = uVar7 + 2;
    uVar3 = *(ulong *)(lVar11 + 0x1c0);
    bVar4 = uVar3 != uVar7;
    uVar7 = uVar3;
  } while (bVar4);
  *(ulong *)(lVar11 + 0x1c0) = uVar1;
  LOAcquire();
  uVar7 = *(ulong *)(lVar11 + 0x88);
  *(ulong *)(lVar11 + 0x88) = uVar7 + 1;
  lVar8 = func_0x000100fcb354(lVar11 + 0x80,uVar7);
  puVar10 = (undefined8 *)(lVar8 + (uVar7 & 0x1f) * 0x28);
  puVar10[1] = 1;
  *puVar10 = 1;
  puVar10[3] = in_stack_00000008;
  puVar10[2] = in_stack_00000000;
  puVar10[4] = in_stack_00000010;
  *(ulong *)(lVar8 + 0x510) = *(ulong *)(lVar8 + 0x510) | 1L << (uVar7 & 0x1f);
  LORelease();
  puVar2 = (ulong *)(lVar11 + 0x110);
  LOAcquire();
  uVar7 = *puVar2;
  *puVar2 = uVar7 | 2;
  LORelease();
  if (uVar7 == 0) {
    lVar8 = *(long *)(lVar11 + 0x100);
    *(undefined8 *)(lVar11 + 0x100) = 0;
    *puVar2 = in_xzr;
    LORelease();
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 8))(*(undefined8 *)(lVar11 + 0x108));
    }
  }
LAB_1008c8408:
  FUN_100de93d0();
  lVar8 = *(long *)(unaff_x19 + 0x2548);
  LOAcquire();
  lVar11 = *(long *)(lVar8 + 0x1c8);
  *(long *)(lVar8 + 0x1c8) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    LOAcquire();
    lVar11 = *(long *)(lVar8 + 0x88);
    *(long *)(lVar8 + 0x88) = lVar11 + 1;
    lVar11 = func_0x000100fcb354(lVar8 + 0x80,lVar11);
    *(ulong *)(lVar11 + 0x510) = *(ulong *)(lVar11 + 0x510) | 0x200000000;
    LORelease();
    puVar2 = (ulong *)(lVar8 + 0x110);
    LOAcquire();
    uVar7 = *puVar2;
    *puVar2 = uVar7 | 2;
    LORelease();
    if (uVar7 == 0) {
      lVar11 = *(long *)(lVar8 + 0x100);
      *(undefined8 *)(lVar8 + 0x100) = 0;
      *puVar2 = in_xzr;
      LORelease();
      if (lVar11 != 0) {
        (**(code **)(lVar11 + 8))(*(undefined8 *)(lVar8 + 0x108));
      }
    }
  }
  lVar11 = **(long **)(unaff_x19 + 0x2548);
  **(long **)(unaff_x19 + 0x2548) = lVar11 + -1;
  LORelease();
  if (lVar11 == 1) {
    DataMemoryBarrier(2,1);
    func_0x0001019926f0(unaff_x19 + 0x2548);
  }
  *(undefined1 *)(unaff_x22 + 1) = 1;
  return (ulong)(unaff_x23 == -0x7fffffffffffffff);
}

