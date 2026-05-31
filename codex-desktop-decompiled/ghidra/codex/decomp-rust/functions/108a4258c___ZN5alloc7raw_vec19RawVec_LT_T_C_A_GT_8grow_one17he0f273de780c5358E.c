
/* WARNING: Possible PIC construction at 0x000108a4248c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a424f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a4255c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a425c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a4262c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a425c8) */
/* WARNING: Removing unreachable block (ram,0x000108a425ec) */
/* WARNING: Removing unreachable block (ram,0x000108a42618) */
/* WARNING: Removing unreachable block (ram,0x000108a425d4) */
/* WARNING: Removing unreachable block (ram,0x000108a42560) */
/* WARNING: Removing unreachable block (ram,0x000108a42584) */
/* WARNING: Removing unreachable block (ram,0x000108a425b0) */
/* WARNING: Removing unreachable block (ram,0x000108a4256c) */
/* WARNING: Removing unreachable block (ram,0x000108a424f8) */
/* WARNING: Removing unreachable block (ram,0x000108a4251c) */
/* WARNING: Removing unreachable block (ram,0x000108a42548) */
/* WARNING: Removing unreachable block (ram,0x000108a42504) */
/* WARNING: Removing unreachable block (ram,0x000108a42490) */
/* WARNING: Removing unreachable block (ram,0x000108a424b4) */
/* WARNING: Removing unreachable block (ram,0x000108a424e0) */
/* WARNING: Removing unreachable block (ram,0x000108a4249c) */
/* WARNING: Removing unreachable block (ram,0x000108a42630) */
/* WARNING: Removing unreachable block (ram,0x000108a42654) */
/* WARNING: Removing unreachable block (ram,0x000108a4263c) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17he0f273de780c5358E(long *param_1)

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
  if ((SUB168(ZEXT816(0x48) * auVar3,8) == 0) && (uVar5 = uVar5 * 0x48, uVar5 < 0x7ffffffffffffff9))
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
        _memcpy(lStack_88,lVar2,lVar1 * 0x48);
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

