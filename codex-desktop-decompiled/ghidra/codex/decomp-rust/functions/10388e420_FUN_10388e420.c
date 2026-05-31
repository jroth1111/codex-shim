
void FUN_10388e420(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint auStack_8c8 [2];
  long *plStack_8c0;
  ulong uStack_8b8;
  undefined1 auStack_8b0 [1040];
  long *plStack_4a0;
  ulong uStack_498;
  undefined1 auStack_490 [10];
  ushort uStack_486;
  undefined1 auStack_483 [1027];
  undefined4 uStack_80;
  ulong uStack_78;
  
  __ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha39b25c774f1f642E
            (auStack_8c8,param_2);
  if (auStack_8c8[0] == 1) {
    do {
      uVar7 = uStack_8b8;
      plVar1 = plStack_8c0;
      if (plStack_8c0 == (long *)0x0) {
        if ((uStack_8b8 & 3) == 1) {
          puVar5 = (undefined8 *)(uStack_8b8 - 1);
          uVar6 = *puVar5;
          puVar8 = *(undefined8 **)(uStack_8b8 + 7);
          pcVar4 = (code *)*puVar8;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar6);
          }
          if (puVar8[1] != 0) {
            _free(uVar6);
          }
LAB_10388e620:
          _free(puVar5);
        }
      }
      else {
        _memcpy(auStack_490,auStack_8b0,0x410);
        plStack_4a0 = plVar1;
        uStack_498 = uVar7;
        __ZN3std2fs8DirEntry9file_type17he7528247956b7510E(&uStack_80,&plStack_4a0);
        uVar2 = uStack_486;
        if ((uStack_80 & 1) == 0) {
          if ((uStack_80._2_2_ & 0xf000) == 0x4000) {
            uVar7 = (ulong)uStack_486;
            if (uVar7 == 0) {
              puVar5 = (undefined8 *)0x1;
            }
            else {
              puVar5 = (undefined8 *)_malloc(uVar7);
              if (puVar5 == (undefined8 *)0x0) {
                func_0x0001087c9084(1,uVar7);
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10388e670);
                (*pcVar4)();
              }
            }
            _memcpy(puVar5,auStack_483,uVar7);
            func_0x0001055bf348(&uStack_80,puVar5,uVar7);
            uVar9 = 0x8000000000000000;
            if (uStack_80 == 0) {
              uVar9 = uVar7;
            }
            if ((uVar2 != 0) && (uStack_80 != 0)) {
              _free(puVar5);
              uVar9 = 0x8000000000000000;
            }
            lVar3 = *plStack_4a0;
            *plStack_4a0 = lVar3 + -1;
            LORelease();
            if (lVar3 == 1) {
              DataMemoryBarrier(2,1);
              func_0x00010604ce90(&plStack_4a0);
            }
            if (uVar9 != 0x8000000000000000) {
              func_0x0001038db3bc(&plStack_4a0,puVar5,uVar7);
              plVar1 = plStack_4a0;
              if (((ulong)plStack_4a0 & 0x7fffffffffffffff) != 0) {
                _free(uStack_498);
              }
              if (plVar1 == (long *)0x8000000000000000) {
                *param_1 = uVar9;
                param_1[1] = (ulong)puVar5;
                param_1[2] = uVar7;
                return;
              }
              if (uVar9 != 0) goto LAB_10388e620;
            }
            goto LAB_10388e484;
          }
        }
        else if ((uStack_78 & 3) == 1) {
          puVar5 = (undefined8 *)(uStack_78 - 1);
          uVar6 = *puVar5;
          puVar8 = *(undefined8 **)(uStack_78 + 7);
          pcVar4 = (code *)*puVar8;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar6);
          }
          if (puVar8[1] != 0) {
            _free(uVar6);
          }
          _free(puVar5);
        }
        lVar3 = *plStack_4a0;
        *plStack_4a0 = lVar3 + -1;
        LORelease();
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          func_0x00010604ce90(&plStack_4a0);
        }
      }
LAB_10388e484:
      __ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha39b25c774f1f642E
                (auStack_8c8,param_2);
    } while ((auStack_8c8[0] & 1) != 0);
  }
  *param_1 = 0x8000000000000000;
  return;
}

