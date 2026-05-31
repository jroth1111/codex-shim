
/* WARNING: Possible PIC construction at 0x000108a120c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a12130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a12198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a12200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a12268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108a122d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108a1226c) */
/* WARNING: Removing unreachable block (ram,0x000108a12290) */
/* WARNING: Removing unreachable block (ram,0x000108a122bc) */
/* WARNING: Removing unreachable block (ram,0x000108a12278) */
/* WARNING: Removing unreachable block (ram,0x000108a12204) */
/* WARNING: Removing unreachable block (ram,0x000108a12228) */
/* WARNING: Removing unreachable block (ram,0x000108a12254) */
/* WARNING: Removing unreachable block (ram,0x000108a12210) */
/* WARNING: Removing unreachable block (ram,0x000108a1219c) */
/* WARNING: Removing unreachable block (ram,0x000108a121c0) */
/* WARNING: Removing unreachable block (ram,0x000108a121ec) */
/* WARNING: Removing unreachable block (ram,0x000108a121a8) */
/* WARNING: Removing unreachable block (ram,0x000108a12134) */
/* WARNING: Removing unreachable block (ram,0x000108a12158) */
/* WARNING: Removing unreachable block (ram,0x000108a12184) */
/* WARNING: Removing unreachable block (ram,0x000108a12140) */
/* WARNING: Removing unreachable block (ram,0x000108a120cc) */
/* WARNING: Removing unreachable block (ram,0x000108a120f0) */
/* WARNING: Removing unreachable block (ram,0x000108a1211c) */
/* WARNING: Removing unreachable block (ram,0x000108a120d8) */
/* WARNING: Removing unreachable block (ram,0x000108a122d4) */
/* WARNING: Removing unreachable block (ram,0x000108a122f8) */
/* WARNING: Removing unreachable block (ram,0x000108a122e0) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h27544599c7fa16b6E(long *param_1)

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
  if ((SUB168(ZEXT816(0x68) * auVar3,8) == 0) && (uVar5 = uVar5 * 0x68, uVar5 < 0x7ffffffffffffff9))
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
        _memcpy(lStack_88,lVar2,lVar1 * 0x68);
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

