
/* WARNING: Possible PIC construction at 0x000108a32614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a3267c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a326e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a32680) */
/* WARNING: Removing unreachable block (ram,0x000108a326a4) */
/* WARNING: Removing unreachable block (ram,0x000108a326d0) */
/* WARNING: Removing unreachable block (ram,0x000108a3268c) */
/* WARNING: Removing unreachable block (ram,0x000108a32618) */
/* WARNING: Removing unreachable block (ram,0x000108a3263c) */
/* WARNING: Removing unreachable block (ram,0x000108a32668) */
/* WARNING: Removing unreachable block (ram,0x000108a32624) */
/* WARNING: Removing unreachable block (ram,0x000108a326e8) */
/* WARNING: Removing unreachable block (ram,0x000108a3270c) */
/* WARNING: Removing unreachable block (ram,0x000108a326f4) */

void __ZN4core9panicking13assert_failed17ha5e8165797617720E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_a8;
  ulong auStack_58 [3];
  
  plVar5 = (long *)FUN_105ac038c(param_1,param_2,&UNK_10b406348,param_4,param_5,param_4,param_5,
                                 param_6);
  lVar1 = *plVar5;
  lVar2 = plVar5[1];
  uVar6 = lVar1 * 2;
  if (uVar6 < 5) {
    uVar6 = 4;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  lVar7 = 8;
  uVar8 = 0;
  if ((SUB168(ZEXT816(0x10) * auVar3,8) == 0) && (uVar6 = uVar6 * 0x10, uVar6 < 0x7ffffffffffffff9))
  {
    if (lVar1 == 0) {
      if (uVar6 != 0) {
        if (uVar6 < 8) {
          lStack_a8 = 0;
          _posix_memalign(&lStack_a8,8,uVar6);
        }
        else {
          _malloc(uVar6);
        }
      }
    }
    else if (uVar6 < 8) {
      lStack_a8 = 0;
      iVar4 = _posix_memalign(&lStack_a8,8,uVar6);
      if (iVar4 == 0 && lStack_a8 != 0) {
        _memcpy(lStack_a8,lVar2,lVar1 * 0x10);
        _free(lVar2);
      }
    }
    else {
      _realloc(lVar2,uVar6);
    }
    lVar7 = 0x10;
    uVar8 = uVar6;
  }
  *(ulong *)((long)auStack_58 + lVar7) = uVar8;
  return;
}

