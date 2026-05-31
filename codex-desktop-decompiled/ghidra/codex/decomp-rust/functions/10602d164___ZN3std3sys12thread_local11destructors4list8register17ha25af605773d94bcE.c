
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  byte *pbVar6;
  ulong *puVar7;
  ulong uVar8;
  long *unaff_x19;
  long lVar9;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_50;
  undefined1 uStack_41;
  
  plVar5 = (long *)(*pcRam000000010b66cc50)();
  if (*plVar5 == 0) {
    *plVar5 = -1;
    pbVar6 = (byte *)(*pcRam000000010b66cc68)();
    bVar3 = *pbVar6;
    *pbVar6 = 1;
    if ((bVar3 & 1) == 0) {
      __tlv_atexit(0x10602d260,0);
    }
    lVar9 = plVar5[3];
    if (lVar9 == plVar5[1]) {
      func_0x000108a85c48(plVar5 + 1);
    }
    puVar1 = (undefined8 *)(plVar5[2] + lVar9 * 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    plVar5[3] = lVar9 + 1;
    *plVar5 = *plVar5 + 1;
    return;
  }
  uStack_50 = FUN_10602995c(&uStack_41,&UNK_109bd5db3,0xab);
  FUN_10603f834(&uStack_50);
  __ZN3std7process5abort17hdc01e45e25b715e8E();
  *unaff_x19 = *unaff_x19 + 1;
  __Unwind_Resume();
  uStack_70 = param_2;
  plVar5 = (long *)(*pcRam000000010b66cc50)();
  lVar9 = *plVar5;
  while( true ) {
    if (lVar9 != 0) {
      __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b4adae0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10602d2d0);
      (*pcVar4)();
    }
    *plVar5 = -1;
    if (plVar5[3] == 0) break;
    lVar9 = plVar5[3] + -1;
    plVar5[3] = lVar9;
    puVar1 = (undefined8 *)(plVar5[2] + lVar9 * 0x10);
    uVar2 = *puVar1;
    pcVar4 = (code *)puVar1[1];
    *plVar5 = 0;
    (*pcVar4)(uVar2);
    lVar9 = *plVar5;
  }
  lVar9 = 0;
  if (plVar5[1] != 0) {
    _free(plVar5[2]);
    lVar9 = *plVar5 + 1;
  }
  plVar5[2] = 8;
  plVar5[3] = 0;
  *plVar5 = lVar9;
  plVar5[1] = 0;
  puVar7 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
  uVar8 = *puVar7;
  if (2 < uVar8) {
    *puVar7 = 2;
    plStack_78 = (long *)(uVar8 - 0x10);
    lVar9 = *plStack_78;
    *plStack_78 = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h52bc04ad50f5b4b2E(&plStack_78);
    }
  }
  return;
}

