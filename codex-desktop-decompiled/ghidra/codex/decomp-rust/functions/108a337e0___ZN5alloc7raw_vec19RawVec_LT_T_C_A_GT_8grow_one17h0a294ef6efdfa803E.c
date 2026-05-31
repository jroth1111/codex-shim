
/* WARNING: Possible PIC construction at 0x000108a3374c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a337b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a33814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a33878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a338dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a33940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a338e0) */
/* WARNING: Removing unreachable block (ram,0x000108a33904) */
/* WARNING: Removing unreachable block (ram,0x000108a33930) */
/* WARNING: Removing unreachable block (ram,0x000108a338ec) */
/* WARNING: Removing unreachable block (ram,0x000108a3387c) */
/* WARNING: Removing unreachable block (ram,0x000108a338a0) */
/* WARNING: Removing unreachable block (ram,0x000108a338cc) */
/* WARNING: Removing unreachable block (ram,0x000108a33888) */
/* WARNING: Removing unreachable block (ram,0x000108a33818) */
/* WARNING: Removing unreachable block (ram,0x000108a3383c) */
/* WARNING: Removing unreachable block (ram,0x000108a33868) */
/* WARNING: Removing unreachable block (ram,0x000108a33824) */
/* WARNING: Removing unreachable block (ram,0x000108a337b4) */
/* WARNING: Removing unreachable block (ram,0x000108a337d8) */
/* WARNING: Removing unreachable block (ram,0x000108a33804) */
/* WARNING: Removing unreachable block (ram,0x000108a337c0) */
/* WARNING: Removing unreachable block (ram,0x000108a33750) */
/* WARNING: Removing unreachable block (ram,0x000108a33774) */
/* WARNING: Removing unreachable block (ram,0x000108a337a0) */
/* WARNING: Removing unreachable block (ram,0x000108a3375c) */
/* WARNING: Removing unreachable block (ram,0x000108a33944) */
/* WARNING: Removing unreachable block (ram,0x000108a33968) */
/* WARNING: Removing unreachable block (ram,0x000108a33950) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0a294ef6efdfa803E(long *param_1)

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
  if ((SUB168(ZEXT816(0x80) * auVar3,8) == 0) && (uVar5 = uVar5 * 0x80, uVar5 < 0x7ffffffffffffff9))
  {
    if (lVar1 == 0) {
      if (uVar5 != 0) {
        _malloc(uVar5);
      }
    }
    else if (uVar5 == 0) {
      lStack_88 = 0;
      iVar4 = _posix_memalign(&lStack_88,8,0);
      if ((iVar4 == 0) && (lStack_88 != 0)) {
        _memcpy(lStack_88,lVar2,lVar1 * 0x80);
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

