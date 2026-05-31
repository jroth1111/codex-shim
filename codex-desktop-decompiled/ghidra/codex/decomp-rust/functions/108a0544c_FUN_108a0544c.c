
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108a0544c(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  int aiStack_38 [2];
  ulong uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *param_1 * 2;
  if (uVar2 < param_2 + 1U) {
    uVar2 = param_2 + 1;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  uVar1 = func_0x000108a053d8(aiStack_38,*param_1,param_1[1],uVar2);
  if (aiStack_38[0] != 1) {
    *param_1 = uVar2;
    param_1[1] = uStack_30;
    return uVar1;
  }
  func_0x0001087c9084(uStack_30,uStack_28);
  func_0x00010558e070();
  func_0x00010558f1b4();
  auVar3 = __ZN3std7process5abort17hdc01e45e25b715e8E();
  uVar1 = FUN_108a05958(&UNK_108f568ba,0x1a);
  if ((((auVar3._8_8_ & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar2 = func_0x000108a82c0c(), (uVar2 & 1) == 0)) {
    *(undefined1 *)(auVar3._0_8_ + 1) = 1;
  }
  _pthread_mutex_unlock(*auVar3._0_8_);
  return uVar1;
}

