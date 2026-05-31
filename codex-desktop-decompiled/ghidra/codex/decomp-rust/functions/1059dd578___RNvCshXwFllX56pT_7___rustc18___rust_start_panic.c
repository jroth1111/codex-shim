
void __RNvCshXwFllX56pT_7___rustc18___rust_start_panic(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  
  auVar3 = (**(code **)(param_2 + 0x20))();
  puVar2 = (undefined8 *)_malloc(0x38);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x54535552005a4f4d;
    puVar2[1] = 0x1059dd670;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = &UNK_109af9aa0;
    *(undefined1 (*) [16])(puVar2 + 5) = auVar3;
                    /* WARNING: Could not recover jumptable at 0x000108aa8fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Unwind_RaiseException_10b61ab60)();
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1059dd5f4);
  (*pcVar1)();
}

