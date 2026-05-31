
void FUN_10164b6f4(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lStack_440;
  undefined8 *puStack_438;
  undefined *puStack_430;
  
  puVar2 = (undefined8 *)_malloc(0x18);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10164b750);
    (*pcVar4)();
  }
  uVar9 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar9;
  puVar2[2] = param_2[2];
  if ((((*(byte *)(param_1 + 0x5441) & 1) == 0) && (*(long *)(param_1 + 0x1b50) != 0)) &&
     ((**(code **)(*(long *)(*(long *)(param_1 + 7000) + 0x28) + 0x18))(&lStack_440),
     puStack_438 == (undefined8 *)0x58f80a22845f20bc && lStack_440 == 0x4f466d7537fba9c4))
  goto LAB_10533d6dc;
  (*(code *)&
            __ZN104__LT_codex_tui__history_cell__base__PlainHistoryCell_u20_as_u20_codex_tui__history_cell__HistoryCell_GT_13display_lines17hde0073052add6cfdE
  )(&lStack_440,puVar2,0xffff);
  puVar1 = puStack_438;
  if (puStack_430 == (undefined *)0x0) {
    if (lStack_440 != 0) {
      _free(puStack_438);
    }
    goto LAB_10533d6dc;
  }
  lVar8 = 0;
  do {
    plVar7 = (long *)((long)puVar1 + lVar8 * 0x30);
    lVar6 = plVar7[1];
    lVar3 = plVar7[2];
    if (lVar3 != 0) {
      puVar5 = (undefined8 *)(lVar6 + 8);
      do {
        if (puVar5[-1] != -0x8000000000000000 && puVar5[-1] != 0) {
          _free(*puVar5);
        }
        puVar5 = puVar5 + 5;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    if (*plVar7 != 0) {
      _free(lVar6);
    }
    lVar8 = lVar8 + 1;
  } while ((undefined *)lVar8 != puStack_430);
  if (lStack_440 != 0) {
    _free(puVar1);
  }
  lVar8 = *(long *)(param_1 + 0x1b50);
  if ((*(long *)(param_1 + 0x4120) == 2) && (*(long *)(param_1 + 0x4258) == 2)) {
    lVar6 = *(long *)(param_1 + 7000);
    *(undefined8 *)(param_1 + 0x1b50) = 0;
    if (lVar8 != 0) {
LAB_10533d614:
      *(undefined1 *)(param_1 + 0x1b72) = 1;
      lStack_440 = -0x7fffffffffffffb1;
      puStack_438 = (undefined8 *)lVar8;
      puStack_430 = (undefined *)lVar6;
      __ZN9codex_tui16app_event_sender14AppEventSender4send17h8493fff0e745a28cE
                (param_1 + 0x5110,&lStack_440);
    }
  }
  else if (lVar8 != 0) {
    lVar6 = *(long *)(param_1 + 7000);
    pcVar4 = *(code **)(*(long *)(lVar6 + 0x28) + 0x18);
    (*pcVar4)(&lStack_440,lVar8);
    if ((puStack_438 != (undefined8 *)0x289e264c8e182b3a || lStack_440 != -0x13cd1e9f424dbd35) &&
       ((*pcVar4)(&lStack_440,lVar8),
       puStack_438 != (undefined8 *)0xa296680f24971b6f || lStack_440 != -0x232f067d845e1e56)) {
      *(undefined8 *)(param_1 + 0x1b50) = 0;
      goto LAB_10533d614;
    }
  }
  *(undefined1 *)(param_1 + 0x1b72) = 1;
LAB_10533d6dc:
  puStack_430 = &UNK_10b2503a0;
  lStack_440 = -0x7fffffffffffffb1;
  puStack_438 = puVar2;
  __ZN9codex_tui16app_event_sender14AppEventSender4send17h8493fff0e745a28cE
            (param_1 + 0x5110,&lStack_440);
  return;
}

