
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10603a978(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 extraout_w8;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = *param_1;
  uStack_18 = param_1[1];
  uVar2 = __ZN3std9panicking15panic_with_hook17hb885411bb59bebf4E
                    (&uStack_20,&UNK_10b4ae390,param_1[2],1,0);
  lVar1 = ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
  ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE =
       ___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE + 1;
  if (lVar1 < 0) {
    return 0;
  }
  plVar3 = (long *)(*pcRam000000010b66cd10)(uVar2);
  if ((*(byte *)(plVar3 + 1) & 1) != 0) {
    return 1;
  }
  *plVar3 = *plVar3 + 1;
  *(undefined1 *)(plVar3 + 1) = extraout_w8;
  return 2;
}

