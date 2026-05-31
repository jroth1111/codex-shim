
/* WARNING: Possible PIC construction at 0x0001088ed234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088ed29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001088ed238) */
/* WARNING: Removing unreachable block (ram,0x0001088ed25c) */
/* WARNING: Removing unreachable block (ram,0x0001088ed288) */
/* WARNING: Removing unreachable block (ram,0x0001088ed244) */
/* WARNING: Removing unreachable block (ram,0x0001088ed2a0) */
/* WARNING: Removing unreachable block (ram,0x0001088ed2c4) */
/* WARNING: Removing unreachable block (ram,0x0001088ed2ac) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h6ba5139b5be014e6E(long *param_1)

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
  if ((SUB168(ZEXT816(0x250) * auVar3,8) == 0) &&
     (uVar5 = uVar5 * 0x250, uVar5 < 0x7ffffffffffffff9)) {
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
        _memcpy(lStack_88,lVar2,lVar1 * 0x250);
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

