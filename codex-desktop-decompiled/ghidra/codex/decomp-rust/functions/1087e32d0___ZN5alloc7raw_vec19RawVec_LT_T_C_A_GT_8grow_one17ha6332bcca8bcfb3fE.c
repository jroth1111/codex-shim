
/* WARNING: Possible PIC construction at 0x0001087e2fc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e3030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e3098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e3100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e3168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e31d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e3238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e32a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e3308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087e32a4) */
/* WARNING: Removing unreachable block (ram,0x0001087e32c8) */
/* WARNING: Removing unreachable block (ram,0x0001087e32f4) */
/* WARNING: Removing unreachable block (ram,0x0001087e32b0) */
/* WARNING: Removing unreachable block (ram,0x0001087e323c) */
/* WARNING: Removing unreachable block (ram,0x0001087e3260) */
/* WARNING: Removing unreachable block (ram,0x0001087e328c) */
/* WARNING: Removing unreachable block (ram,0x0001087e3248) */
/* WARNING: Removing unreachable block (ram,0x0001087e31d4) */
/* WARNING: Removing unreachable block (ram,0x0001087e31f8) */
/* WARNING: Removing unreachable block (ram,0x0001087e3224) */
/* WARNING: Removing unreachable block (ram,0x0001087e31e0) */
/* WARNING: Removing unreachable block (ram,0x0001087e316c) */
/* WARNING: Removing unreachable block (ram,0x0001087e3190) */
/* WARNING: Removing unreachable block (ram,0x0001087e31bc) */
/* WARNING: Removing unreachable block (ram,0x0001087e3178) */
/* WARNING: Removing unreachable block (ram,0x0001087e3104) */
/* WARNING: Removing unreachable block (ram,0x0001087e3128) */
/* WARNING: Removing unreachable block (ram,0x0001087e3154) */
/* WARNING: Removing unreachable block (ram,0x0001087e3110) */
/* WARNING: Removing unreachable block (ram,0x0001087e309c) */
/* WARNING: Removing unreachable block (ram,0x0001087e30c0) */
/* WARNING: Removing unreachable block (ram,0x0001087e30ec) */
/* WARNING: Removing unreachable block (ram,0x0001087e30a8) */
/* WARNING: Removing unreachable block (ram,0x0001087e3034) */
/* WARNING: Removing unreachable block (ram,0x0001087e3058) */
/* WARNING: Removing unreachable block (ram,0x0001087e3084) */
/* WARNING: Removing unreachable block (ram,0x0001087e3040) */
/* WARNING: Removing unreachable block (ram,0x0001087e2fcc) */
/* WARNING: Removing unreachable block (ram,0x0001087e2ff0) */
/* WARNING: Removing unreachable block (ram,0x0001087e301c) */
/* WARNING: Removing unreachable block (ram,0x0001087e2fd8) */
/* WARNING: Removing unreachable block (ram,0x0001087e330c) */
/* WARNING: Removing unreachable block (ram,0x0001087e3330) */
/* WARNING: Removing unreachable block (ram,0x0001087e3318) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17ha6332bcca8bcfb3fE(long *param_1)

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
  if ((SUB168(ZEXT816(0x20) * auVar3,8) == 0) && (uVar5 = uVar5 * 0x20, uVar5 < 0x7ffffffffffffff9))
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
        _memcpy(lStack_88,lVar2,lVar1 * 0x20);
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

