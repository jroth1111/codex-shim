
/* WARNING: Possible PIC construction at 0x000108880200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108880268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001088802d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010888026c) */
/* WARNING: Removing unreachable block (ram,0x000108880290) */
/* WARNING: Removing unreachable block (ram,0x0001088802bc) */
/* WARNING: Removing unreachable block (ram,0x000108880278) */
/* WARNING: Removing unreachable block (ram,0x000108880204) */
/* WARNING: Removing unreachable block (ram,0x000108880228) */
/* WARNING: Removing unreachable block (ram,0x000108880254) */
/* WARNING: Removing unreachable block (ram,0x000108880210) */
/* WARNING: Removing unreachable block (ram,0x0001088802d4) */
/* WARNING: Removing unreachable block (ram,0x0001088802f8) */
/* WARNING: Removing unreachable block (ram,0x0001088802e0) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h4b7aff9a7f3d5f15E(void)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lStack_98;
  ulong auStack_48 [3];
  
  plVar5 = (long *)func_0x0001087c9098();
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
  if ((SUB168(ZEXT816(0x18) * auVar3,8) == 0) && (uVar6 = uVar6 * 0x18, uVar6 < 0x7ffffffffffffff9))
  {
    if (lVar1 == 0) {
      if (uVar6 != 0) {
        if (uVar6 < 8) {
          lStack_98 = 0;
          _posix_memalign(&lStack_98,8,uVar6);
        }
        else {
          _malloc(uVar6);
        }
      }
    }
    else if (uVar6 < 8) {
      lStack_98 = 0;
      iVar4 = _posix_memalign(&lStack_98,8,uVar6);
      if (iVar4 == 0 && lStack_98 != 0) {
        _memcpy(lStack_98,lVar2,lVar1 * 0x18);
        _free(lVar2);
      }
    }
    else {
      _realloc(lVar2,uVar6);
    }
    lVar7 = 0x10;
    uVar8 = uVar6;
  }
  *(ulong *)((long)auStack_48 + lVar7) = uVar8;
  return;
}

