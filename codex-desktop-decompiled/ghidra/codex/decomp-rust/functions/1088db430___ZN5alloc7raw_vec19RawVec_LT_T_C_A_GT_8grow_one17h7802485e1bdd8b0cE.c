
/* WARNING: Possible PIC construction at 0x0001088db260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db398: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db468: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db4d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db5a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088db608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001088db5a4) */
/* WARNING: Removing unreachable block (ram,0x0001088db5c8) */
/* WARNING: Removing unreachable block (ram,0x0001088db5f4) */
/* WARNING: Removing unreachable block (ram,0x0001088db5b0) */
/* WARNING: Removing unreachable block (ram,0x0001088db53c) */
/* WARNING: Removing unreachable block (ram,0x0001088db560) */
/* WARNING: Removing unreachable block (ram,0x0001088db58c) */
/* WARNING: Removing unreachable block (ram,0x0001088db548) */
/* WARNING: Removing unreachable block (ram,0x0001088db4d4) */
/* WARNING: Removing unreachable block (ram,0x0001088db4f8) */
/* WARNING: Removing unreachable block (ram,0x0001088db524) */
/* WARNING: Removing unreachable block (ram,0x0001088db4e0) */
/* WARNING: Removing unreachable block (ram,0x0001088db46c) */
/* WARNING: Removing unreachable block (ram,0x0001088db490) */
/* WARNING: Removing unreachable block (ram,0x0001088db4bc) */
/* WARNING: Removing unreachable block (ram,0x0001088db478) */
/* WARNING: Removing unreachable block (ram,0x0001088db404) */
/* WARNING: Removing unreachable block (ram,0x0001088db428) */
/* WARNING: Removing unreachable block (ram,0x0001088db454) */
/* WARNING: Removing unreachable block (ram,0x0001088db410) */
/* WARNING: Removing unreachable block (ram,0x0001088db39c) */
/* WARNING: Removing unreachable block (ram,0x0001088db3c0) */
/* WARNING: Removing unreachable block (ram,0x0001088db3ec) */
/* WARNING: Removing unreachable block (ram,0x0001088db3a8) */
/* WARNING: Removing unreachable block (ram,0x0001088db334) */
/* WARNING: Removing unreachable block (ram,0x0001088db358) */
/* WARNING: Removing unreachable block (ram,0x0001088db384) */
/* WARNING: Removing unreachable block (ram,0x0001088db340) */
/* WARNING: Removing unreachable block (ram,0x0001088db2cc) */
/* WARNING: Removing unreachable block (ram,0x0001088db2f0) */
/* WARNING: Removing unreachable block (ram,0x0001088db31c) */
/* WARNING: Removing unreachable block (ram,0x0001088db2d8) */
/* WARNING: Removing unreachable block (ram,0x0001088db264) */
/* WARNING: Removing unreachable block (ram,0x0001088db288) */
/* WARNING: Removing unreachable block (ram,0x0001088db2b4) */
/* WARNING: Removing unreachable block (ram,0x0001088db270) */
/* WARNING: Removing unreachable block (ram,0x0001088db60c) */
/* WARNING: Removing unreachable block (ram,0x0001088db630) */
/* WARNING: Removing unreachable block (ram,0x0001088db618) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h7802485e1bdd8b0cE(long *param_1)

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
  if ((SUB168(ZEXT816(0x270) * auVar3,8) == 0) &&
     (uVar5 = uVar5 * 0x270, uVar5 < 0x7ffffffffffffff9)) {
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
        _memcpy(lStack_88,lVar2,lVar1 * 0x270);
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

