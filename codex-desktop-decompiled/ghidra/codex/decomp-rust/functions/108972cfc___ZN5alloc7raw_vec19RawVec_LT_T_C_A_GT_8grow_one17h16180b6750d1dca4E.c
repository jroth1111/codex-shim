
/* WARNING: Possible PIC construction at 0x000108972bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108972c64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108972ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108972d34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108972cd0) */
/* WARNING: Removing unreachable block (ram,0x000108972cf4) */
/* WARNING: Removing unreachable block (ram,0x000108972d20) */
/* WARNING: Removing unreachable block (ram,0x000108972cdc) */
/* WARNING: Removing unreachable block (ram,0x000108972c68) */
/* WARNING: Removing unreachable block (ram,0x000108972c8c) */
/* WARNING: Removing unreachable block (ram,0x000108972cb8) */
/* WARNING: Removing unreachable block (ram,0x000108972c74) */
/* WARNING: Removing unreachable block (ram,0x000108972c00) */
/* WARNING: Removing unreachable block (ram,0x000108972c24) */
/* WARNING: Removing unreachable block (ram,0x000108972c50) */
/* WARNING: Removing unreachable block (ram,0x000108972c0c) */
/* WARNING: Removing unreachable block (ram,0x000108972d38) */
/* WARNING: Removing unreachable block (ram,0x000108972d5c) */
/* WARNING: Removing unreachable block (ram,0x000108972d44) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h16180b6750d1dca4E(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_88;
  ulong auStack_38 [3];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  uVar5 = lVar1 * 2;
  if (uVar5 < 5) {
    uVar5 = 4;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  lVar6 = 8;
  uVar7 = 0;
  if ((SUB168(ZEXT816(0x40) * auVar3,8) == 0) && (uVar5 = uVar5 * 0x40, uVar5 < 0x7ffffffffffffff9))
  {
    if (lVar1 == 0) {
      if (uVar5 != 0) {
        if (uVar5 < 8) {
          lStack_88 = 0;
          _posix_memalign(&lStack_88,8,uVar5);
        }
        else {
          _malloc(uVar5);
        }
      }
    }
    else if (uVar5 < 8) {
      lStack_88 = 0;
      iVar4 = _posix_memalign(&lStack_88,8,uVar5);
      if (iVar4 == 0 && lStack_88 != 0) {
        _memcpy(lStack_88,lVar2,lVar1 * 0x40);
        _free(lVar2);
      }
    }
    else {
      _realloc(lVar2,uVar5);
    }
    lVar6 = 0x10;
    uVar7 = uVar5;
  }
  *(ulong *)((long)auStack_38 + lVar6) = uVar7;
  return;
}

