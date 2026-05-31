
void FUN_1038dae6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ushort uVar2;
  long *plVar3;
  ulong *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  code *pcVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uStack_900;
  ulong uStack_8f8;
  long *plStack_8f0;
  char cStack_8e8;
  long *plStack_8e0;
  ulong uStack_8d8;
  undefined1 auStack_8d0 [10];
  ushort uStack_8c6;
  undefined1 auStack_8c3 [1027];
  ulong uStack_4c0;
  int *piStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long *plStack_488;
  ulong *puStack_480;
  undefined *apuStack_478 [131];
  
  uStack_900 = param_4;
  uStack_8f8 = param_5;
  __ZN3std3sys2fs8read_dir17h302bd5d3caaeb353E(&uStack_490,param_2,param_3);
  if ((char)plStack_488 == '\x02') {
    if (((ulong)uStack_490 & 3) == 1) {
      uVar12 = *(undefined8 *)((long)uStack_490 + -1);
      puVar13 = *(undefined8 **)((long)uStack_490 + 7);
      pcVar9 = (code *)*puVar13;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(uVar12);
      }
      if (puVar13[1] != 0) {
        _free(uVar12);
      }
      _free((undefined8 *)((long)uStack_490 + -1));
    }
  }
  else {
    plStack_8f0 = uStack_490;
    cStack_8e8 = (char)plStack_488;
    while( true ) {
      __ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha39b25c774f1f642E
                (&uStack_490,&plStack_8f0);
      puVar4 = puStack_480;
      plVar3 = plStack_488;
      if ((int)uStack_490 != 1) break;
      if (plStack_488 == (long *)0x0) {
        if (((ulong)puStack_480 & 3) == 1) {
          puVar13 = (undefined8 *)((long)puStack_480 - 1);
          uVar12 = *puVar13;
          puVar14 = *(undefined8 **)((long)puStack_480 + 7);
          pcVar9 = (code *)*puVar14;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(uVar12);
          }
          if (puVar14[1] != 0) {
            _free(uVar12);
          }
          _free(puVar13);
        }
      }
      else {
        _memcpy(auStack_8d0,apuStack_478,0x410);
        plStack_8e0 = plVar3;
        uStack_8d8 = (ulong)puVar4;
        __ZN3std2fs8DirEntry9file_type17he7528247956b7510E(&uStack_490,&plStack_8e0);
        uVar2 = uStack_8c6;
        if (((ulong)uStack_490 & 1) == 0) {
          if ((uStack_490._2_2_ & 0xf000) == 0x4000) {
            uVar11 = (ulong)uStack_8c6;
            if (uStack_8c6 == 0) {
              piVar10 = (int *)0x1;
            }
            else {
              piVar10 = (int *)_malloc(uVar11);
              if (piVar10 == (int *)0x0) {
                func_0x0001087c9084(1,uVar11);
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1038db294);
                (*pcVar9)();
              }
            }
            _memcpy(piVar10,auStack_8c3,uVar11);
            func_0x0001055bf348(&uStack_490,piVar10,uVar11);
            uVar1 = uStack_8f8;
            if ((((ulong)uStack_490 & 1) == 0) &&
               ((uStack_4c0 = uVar11, piStack_4b8 = piVar10, uStack_4b0 = uVar11,
                uStack_8f8 != uVar11 || (iVar7 = _memcmp(piVar10,uStack_900,uVar11), iVar7 != 0))))
            {
              __ZN18codex_core_plugins5store31validate_plugin_version_segment17h5df62f799c52e62aE
                        (&uStack_490,piVar10,uVar11);
              if (uStack_490 == (long *)0x8000000000000000) {
                __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                          (&uStack_490,plStack_8e0[3],plStack_8e0[4],auStack_8c3,uStack_8c6);
                plVar3 = plStack_488;
                uVar8 = __ZN3std3sys2fs14remove_dir_all17hdb59b8bf4e7e6c95E(plStack_488,puStack_480)
                ;
                if (uStack_490 != (long *)0x0) {
                  _free(plVar3);
                }
                if (uVar8 != 0) {
                  if ((uVar8 & 3) == 1) {
                    uVar12 = *(undefined8 *)(uVar8 - 1);
                    puVar13 = *(undefined8 **)(uVar8 + 7);
                    pcVar9 = (code *)*puVar13;
                    if (pcVar9 != (code *)0x0) {
                      (*pcVar9)(uVar12);
                    }
                    if (puVar13[1] != 0) {
                      _free(uVar12);
                    }
                    _free((undefined8 *)(uVar8 - 1));
                  }
                  if (((uVar2 == 5) && (*piVar10 == 0x61636f6c && (char)piVar10[1] == 'l')) ||
                     (cVar6 = FUN_1038d9fcc(piVar10,uVar11,uStack_900,uVar1), '\0' < cVar6)) {
                    plStack_488 = (long *)&DAT_103925cd0;
                    puStack_480 = &uStack_4c0;
                    apuStack_478[0] = &DAT_103972de0;
                    uStack_490 = &uStack_900;
                    FUN_103962aa0(&uStack_4a8,s_1failed_to_activate_updated_plug_108af9f0d,
                                  &uStack_490);
                    param_1[2] = uStack_4a0;
                    param_1[1] = uStack_4a8;
                    param_1[3] = uStack_498;
                    *param_1 = 1;
                    if (uStack_4c0 != 0) {
                      _free(piStack_4b8);
                    }
                    lVar5 = *plStack_8e0;
                    *plStack_8e0 = lVar5 + -1;
                    LORelease();
                    if (lVar5 == 1) {
                      DataMemoryBarrier(2,1);
                      func_0x00010604ce90(&plStack_8e0);
                    }
                    lVar5 = *plStack_8f0;
                    *plStack_8f0 = lVar5 + -1;
                    LORelease();
                    if (lVar5 != 1) {
                      return;
                    }
                    DataMemoryBarrier(2,1);
                    func_0x00010604ce90(&plStack_8f0);
                    return;
                  }
                }
              }
              else if (uStack_490 != (long *)0x0) {
                _free(plStack_488);
              }
            }
            if (uVar2 != 0) goto LAB_1038db170;
          }
        }
        else if (((ulong)plStack_488 & 3) == 1) {
          piVar10 = (int *)((long)plStack_488 + -1);
          uVar12 = *(undefined8 *)piVar10;
          puVar13 = *(undefined8 **)((long)plStack_488 + 7);
          pcVar9 = (code *)*puVar13;
          if (pcVar9 != (code *)0x0) {
            (*pcVar9)(uVar12);
          }
          if (puVar13[1] != 0) {
            _free(uVar12);
          }
LAB_1038db170:
          _free(piVar10);
        }
        lVar5 = *plStack_8e0;
        *plStack_8e0 = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          func_0x00010604ce90(&plStack_8e0);
        }
      }
    }
    lVar5 = *plStack_8f0;
    *plStack_8f0 = lVar5 + -1;
    LORelease();
    if (lVar5 == 1) {
      DataMemoryBarrier(2,1);
      func_0x00010604ce90(&plStack_8f0);
    }
  }
  *param_1 = 2;
  return;
}

