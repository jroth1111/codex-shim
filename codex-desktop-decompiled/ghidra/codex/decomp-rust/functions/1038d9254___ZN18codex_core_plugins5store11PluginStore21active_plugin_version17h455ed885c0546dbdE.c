
void __ZN18codex_core_plugins5store11PluginStore21active_plugin_version17h455ed885c0546dbdE
               (undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plStack_c0;
  undefined8 *puStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  char cStack_88;
  long *plStack_80;
  undefined8 *puStack_78;
  long *plStack_70;
  long *plStack_68;
  char cStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  
  __ZN18codex_core_plugins5store11PluginStore16plugin_base_root17h95242e0097c3d31aE(&plStack_a8);
  puVar3 = puStack_a0;
  __ZN3std3sys2fs8read_dir17h302bd5d3caaeb353E(&plStack_68,puStack_a0,uStack_98);
  if (cStack_60 == '\x02') {
    if (((ulong)plStack_68 & 3) == 1) {
      uVar8 = *(undefined8 *)((long)plStack_68 + -1);
      puVar9 = *(undefined8 **)((long)plStack_68 + 7);
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar8);
      }
      if (puVar9[1] != 0) {
        _free(uVar8);
      }
      _free((undefined8 *)((long)plStack_68 + -1));
      *param_1 = 0x8000000000000000;
    }
    else {
      *param_1 = 0x8000000000000000;
    }
  }
  else {
    plStack_90 = plStack_68;
    cStack_88 = cStack_60;
    func_0x00010388e420(&plStack_68,&plStack_90);
    uVar8 = uStack_58;
    plVar7 = plStack_68;
    if (plStack_68 == (long *)0x8000000000000000) {
      plStack_c0 = (long *)0x0;
      puStack_b8 = (undefined8 *)0x8;
      plStack_b0 = (long *)0x0;
      lVar2 = *plStack_90;
      *plStack_90 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x00010604ce90(&plStack_90);
      }
    }
    else {
      uVar1 = CONCAT71(uStack_5f,cStack_60);
      puVar3 = (undefined8 *)_malloc(0x60);
      if (puVar3 == (undefined8 *)0x0) {
        func_0x0001087c9084(8,0x60);
LAB_1038d958c:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1038d9590);
        (*pcVar5)();
      }
      lVar2 = 0;
      *puVar3 = plVar7;
      puVar3[1] = uVar1;
      puVar3[2] = uVar8;
      plStack_80 = (long *)0x4;
      plStack_70 = (long *)0x1;
      plStack_c0 = plStack_90;
      puStack_b8 = (undefined8 *)CONCAT71(puStack_b8._1_7_,cStack_88);
      puStack_78 = puVar3;
      while (plVar7 = plStack_70, func_0x00010388e420(&plStack_68,&plStack_c0), uVar8 = uStack_58,
            plVar6 = plStack_68, plStack_68 != (long *)0x8000000000000000) {
        uVar1 = CONCAT71(uStack_5f,cStack_60);
        if (plVar7 == plStack_80) {
          FUN_108950dcc(&plStack_80,plVar7,1,8,0x18);
          puVar3 = puStack_78;
        }
        *(long **)((long)puVar3 + lVar2 + 0x18) = plVar6;
        *(undefined8 *)((long)puVar3 + lVar2 + 0x20) = uVar1;
        *(undefined8 *)((long)puVar3 + lVar2 + 0x28) = uVar8;
        plStack_70 = (long *)((long)plVar7 + 1);
        lVar2 = lVar2 + 0x18;
      }
      lVar2 = *plStack_c0;
      *plStack_c0 = lVar2 + -1;
      LORelease();
      if (lVar2 == 1) {
        DataMemoryBarrier(2,1);
        func_0x00010604ce90(&plStack_c0);
      }
      puStack_b8 = puStack_78;
      plStack_c0 = plStack_80;
      plStack_b0 = plStack_70;
    }
    if (plStack_a8 != (long *)0x0) {
      _free(puStack_a0);
    }
    plVar7 = plStack_b0;
    puVar3 = puStack_b8;
    if (plStack_b0 < (long *)0x2) {
      if (plStack_b0 == (long *)0x0) {
        *param_1 = 0x8000000000000000;
        plStack_a8 = plStack_c0;
        goto joined_r0x0001038d9540;
      }
    }
    else if (plStack_b0 < (long *)0x15) {
      func_0x00010394d628(puStack_b8,plStack_b0);
    }
    else {
      func_0x000103957f38(puStack_b8,plStack_b0);
    }
    lVar2 = (long)plVar7 * 0x18;
    plVar6 = puVar3 + 2;
    do {
      if ((*plVar6 == 5) &&
         (*(int *)plVar6[-1] == 0x61636f6c && (char)((int *)plVar6[-1])[1] == 'l')) {
        puVar4 = (undefined4 *)_malloc(5);
        if (puVar4 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar4 + 1) = 0x6c;
          *puVar4 = 0x61636f6c;
          *param_1 = 5;
          param_1[1] = puVar4;
          param_1[2] = 5;
          goto joined_r0x0001038d94a0;
        }
        func_0x0001087c9084(1,5);
        goto LAB_1038d958c;
      }
      plVar6 = plVar6 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
    plVar7 = (long *)((long)plVar7 - 1);
    puVar9 = puVar3 + (long)plVar7 * 3;
    uVar8 = *puVar9;
    param_1[1] = puVar9[1];
    *param_1 = uVar8;
    param_1[2] = puVar9[2];
joined_r0x0001038d94a0:
    plStack_a8 = plStack_c0;
    if (plVar7 != (long *)0x0) {
      puVar9 = puVar3 + 1;
      do {
        if (puVar9[-1] != 0) {
          _free(*puVar9);
        }
        puVar9 = puVar9 + 3;
        plVar7 = (long *)((long)plVar7 - 1);
        plStack_a8 = plStack_c0;
      } while (plVar7 != (long *)0x0);
    }
  }
joined_r0x0001038d9540:
  if (plStack_a8 != (long *)0x0) {
    _free(puVar3);
  }
  return;
}

