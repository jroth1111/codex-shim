
void FUN_100e489dc(long param_1)

{
  long *plVar1;
  
  FUN_100e0f38c();
  __ZN88__LT_codex_network_proxy__proxy__NetworkProxyHandle_u20_as_u20_core__ops__drop__Drop_GT_4drop17h7475fa153e4f7c07E
            (param_1 + 0x70);
  plVar1 = *(long **)(param_1 + 0x70);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 == 0xcc) {
      *plVar1 = 0x84;
    }
    else {
      (**(code **)(plVar1[2] + 0x20))();
    }
  }
  plVar1 = *(long **)(param_1 + 0x78);
  if (plVar1 != (long *)0x0) {
    if (*plVar1 != 0xcc) {
                    /* WARNING: Could not recover jumptable at 0x000100e48a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(plVar1[2] + 0x20))();
      return;
    }
    *plVar1 = 0x84;
  }
  return;
}

