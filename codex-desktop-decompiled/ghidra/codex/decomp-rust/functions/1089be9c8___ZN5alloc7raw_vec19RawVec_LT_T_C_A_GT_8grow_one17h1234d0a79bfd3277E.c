
/* WARNING: Possible PIC construction at 0x0001089bea00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089bea68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089bead0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089beb38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089beba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089bec08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089bec70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089becd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089bed40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089beda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089bee10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089bee78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089beee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089bef48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001089befb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001089bef4c) */
/* WARNING: Removing unreachable block (ram,0x0001089bef70) */
/* WARNING: Removing unreachable block (ram,0x0001089bef9c) */
/* WARNING: Removing unreachable block (ram,0x0001089bef58) */
/* WARNING: Removing unreachable block (ram,0x0001089beee4) */
/* WARNING: Removing unreachable block (ram,0x0001089bef08) */
/* WARNING: Removing unreachable block (ram,0x0001089bef34) */
/* WARNING: Removing unreachable block (ram,0x0001089beef0) */
/* WARNING: Removing unreachable block (ram,0x0001089bee7c) */
/* WARNING: Removing unreachable block (ram,0x0001089beea0) */
/* WARNING: Removing unreachable block (ram,0x0001089beecc) */
/* WARNING: Removing unreachable block (ram,0x0001089bee88) */
/* WARNING: Removing unreachable block (ram,0x0001089bee14) */
/* WARNING: Removing unreachable block (ram,0x0001089bee38) */
/* WARNING: Removing unreachable block (ram,0x0001089bee64) */
/* WARNING: Removing unreachable block (ram,0x0001089bee20) */
/* WARNING: Removing unreachable block (ram,0x0001089bedac) */
/* WARNING: Removing unreachable block (ram,0x0001089bedd0) */
/* WARNING: Removing unreachable block (ram,0x0001089bedfc) */
/* WARNING: Removing unreachable block (ram,0x0001089bedb8) */
/* WARNING: Removing unreachable block (ram,0x0001089bed44) */
/* WARNING: Removing unreachable block (ram,0x0001089bed68) */
/* WARNING: Removing unreachable block (ram,0x0001089bed94) */
/* WARNING: Removing unreachable block (ram,0x0001089bed50) */
/* WARNING: Removing unreachable block (ram,0x0001089becdc) */
/* WARNING: Removing unreachable block (ram,0x0001089bed00) */
/* WARNING: Removing unreachable block (ram,0x0001089bed2c) */
/* WARNING: Removing unreachable block (ram,0x0001089bece8) */
/* WARNING: Removing unreachable block (ram,0x0001089bec74) */
/* WARNING: Removing unreachable block (ram,0x0001089bec98) */
/* WARNING: Removing unreachable block (ram,0x0001089becc4) */
/* WARNING: Removing unreachable block (ram,0x0001089bec80) */
/* WARNING: Removing unreachable block (ram,0x0001089bec0c) */
/* WARNING: Removing unreachable block (ram,0x0001089bec30) */
/* WARNING: Removing unreachable block (ram,0x0001089bec5c) */
/* WARNING: Removing unreachable block (ram,0x0001089bec18) */
/* WARNING: Removing unreachable block (ram,0x0001089beba4) */
/* WARNING: Removing unreachable block (ram,0x0001089bebc8) */
/* WARNING: Removing unreachable block (ram,0x0001089bebf4) */
/* WARNING: Removing unreachable block (ram,0x0001089bebb0) */
/* WARNING: Removing unreachable block (ram,0x0001089beb3c) */
/* WARNING: Removing unreachable block (ram,0x0001089beb60) */
/* WARNING: Removing unreachable block (ram,0x0001089beb8c) */
/* WARNING: Removing unreachable block (ram,0x0001089beb48) */
/* WARNING: Removing unreachable block (ram,0x0001089bead4) */
/* WARNING: Removing unreachable block (ram,0x0001089beaf8) */
/* WARNING: Removing unreachable block (ram,0x0001089beb24) */
/* WARNING: Removing unreachable block (ram,0x0001089beae0) */
/* WARNING: Removing unreachable block (ram,0x0001089bea6c) */
/* WARNING: Removing unreachable block (ram,0x0001089bea90) */
/* WARNING: Removing unreachable block (ram,0x0001089beabc) */
/* WARNING: Removing unreachable block (ram,0x0001089bea78) */
/* WARNING: Removing unreachable block (ram,0x0001089bea04) */
/* WARNING: Removing unreachable block (ram,0x0001089bea28) */
/* WARNING: Removing unreachable block (ram,0x0001089bea54) */
/* WARNING: Removing unreachable block (ram,0x0001089bea10) */
/* WARNING: Removing unreachable block (ram,0x0001089befb4) */
/* WARNING: Removing unreachable block (ram,0x0001089befd8) */
/* WARNING: Removing unreachable block (ram,0x0001089befc0) */

void __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h1234d0a79bfd3277E(long *param_1)

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

