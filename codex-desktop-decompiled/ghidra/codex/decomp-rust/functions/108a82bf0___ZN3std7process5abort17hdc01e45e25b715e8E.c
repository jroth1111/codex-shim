
bool __ZN3std7process5abort17hdc01e45e25b715e8E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  undefined1 *puStack_20;
  undefined8 uStack_18;
  
  auStack_38 = FUN_108a81ac8();
  uStack_18 = 0x108a82bf0;
  uStack_28 = param_3;
  puStack_20 = &stack0xfffffffffffffff0;
  __ZN3std3sys9backtrace26__rust_end_short_backtrace17h846c525f17c54642E(auStack_38);
  plVar1 = (long *)(*pcRam000000010b66cd10)();
  return *plVar1 == 0;
}

