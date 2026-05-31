
/* WARNING: Possible PIC construction at 0x000108a858d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a859a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a85d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a85d14) */
/* WARNING: Removing unreachable block (ram,0x000108a85d38) */
/* WARNING: Removing unreachable block (ram,0x000108a85d64) */
/* WARNING: Removing unreachable block (ram,0x000108a85d20) */
/* WARNING: Removing unreachable block (ram,0x000108a85cac) */
/* WARNING: Removing unreachable block (ram,0x000108a85cd0) */
/* WARNING: Removing unreachable block (ram,0x000108a85cfc) */
/* WARNING: Removing unreachable block (ram,0x000108a85cb8) */
/* WARNING: Removing unreachable block (ram,0x000108a85c1c) */
/* WARNING: Removing unreachable block (ram,0x000108a85c40) */
/* WARNING: Removing unreachable block (ram,0x000108a85c6c) */
/* WARNING: Removing unreachable block (ram,0x000108a85c94) */
/* WARNING: Removing unreachable block (ram,0x000108a85c64) */
/* WARNING: Removing unreachable block (ram,0x000108a85c28) */
/* WARNING: Removing unreachable block (ram,0x000108a85bb4) */
/* WARNING: Removing unreachable block (ram,0x000108a85bd8) */
/* WARNING: Removing unreachable block (ram,0x000108a85c04) */
/* WARNING: Removing unreachable block (ram,0x000108a85bc0) */
/* WARNING: Removing unreachable block (ram,0x000108a85b4c) */
/* WARNING: Removing unreachable block (ram,0x000108a85b70) */
/* WARNING: Removing unreachable block (ram,0x000108a85b9c) */
/* WARNING: Removing unreachable block (ram,0x000108a85b58) */
/* WARNING: Removing unreachable block (ram,0x000108a85ae4) */
/* WARNING: Removing unreachable block (ram,0x000108a85b08) */
/* WARNING: Removing unreachable block (ram,0x000108a85b34) */
/* WARNING: Removing unreachable block (ram,0x000108a85af0) */
/* WARNING: Removing unreachable block (ram,0x000108a85a7c) */
/* WARNING: Removing unreachable block (ram,0x000108a85aa0) */
/* WARNING: Removing unreachable block (ram,0x000108a85acc) */
/* WARNING: Removing unreachable block (ram,0x000108a85a88) */
/* WARNING: Removing unreachable block (ram,0x000108a85a14) */
/* WARNING: Removing unreachable block (ram,0x000108a85a38) */
/* WARNING: Removing unreachable block (ram,0x000108a85a64) */
/* WARNING: Removing unreachable block (ram,0x000108a85a20) */
/* WARNING: Removing unreachable block (ram,0x000108a859ac) */
/* WARNING: Removing unreachable block (ram,0x000108a859d0) */
/* WARNING: Removing unreachable block (ram,0x000108a859fc) */
/* WARNING: Removing unreachable block (ram,0x000108a859b8) */
/* WARNING: Removing unreachable block (ram,0x000108a85944) */
/* WARNING: Removing unreachable block (ram,0x000108a85968) */
/* WARNING: Removing unreachable block (ram,0x000108a85994) */
/* WARNING: Removing unreachable block (ram,0x000108a85950) */
/* WARNING: Removing unreachable block (ram,0x000108a858dc) */
/* WARNING: Removing unreachable block (ram,0x000108a85900) */
/* WARNING: Removing unreachable block (ram,0x000108a8592c) */
/* WARNING: Removing unreachable block (ram,0x000108a858e8) */
/* WARNING: Removing unreachable block (ram,0x000108a85d7c) */
/* WARNING: Removing unreachable block (ram,0x000108a85da0) */
/* WARNING: Removing unreachable block (ram,0x000108a85d88) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(long *param_1)

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
  if ((SUB168(ZEXT816(0x18) * auVar3,8) == 0) && (uVar5 = uVar5 * 0x18, uVar5 < 0x7ffffffffffffff9))
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
        _memcpy(lStack_88,lVar2,lVar1 * 0x18);
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

