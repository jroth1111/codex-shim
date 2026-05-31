
/* WARNING: Possible PIC construction at 0x000108919e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108919e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108919eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108919f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108919fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010891a024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010891a08c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010891a0f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010891a090) */
/* WARNING: Removing unreachable block (ram,0x00010891a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010891a0e0) */
/* WARNING: Removing unreachable block (ram,0x00010891a09c) */
/* WARNING: Removing unreachable block (ram,0x00010891a028) */
/* WARNING: Removing unreachable block (ram,0x00010891a04c) */
/* WARNING: Removing unreachable block (ram,0x00010891a078) */
/* WARNING: Removing unreachable block (ram,0x00010891a034) */
/* WARNING: Removing unreachable block (ram,0x000108919fc0) */
/* WARNING: Removing unreachable block (ram,0x000108919fe4) */
/* WARNING: Removing unreachable block (ram,0x00010891a010) */
/* WARNING: Removing unreachable block (ram,0x000108919fcc) */
/* WARNING: Removing unreachable block (ram,0x000108919f58) */
/* WARNING: Removing unreachable block (ram,0x000108919f7c) */
/* WARNING: Removing unreachable block (ram,0x000108919fa8) */
/* WARNING: Removing unreachable block (ram,0x000108919f64) */
/* WARNING: Removing unreachable block (ram,0x000108919ef0) */
/* WARNING: Removing unreachable block (ram,0x000108919f14) */
/* WARNING: Removing unreachable block (ram,0x000108919f40) */
/* WARNING: Removing unreachable block (ram,0x000108919efc) */
/* WARNING: Removing unreachable block (ram,0x000108919e88) */
/* WARNING: Removing unreachable block (ram,0x000108919eac) */
/* WARNING: Removing unreachable block (ram,0x000108919ed8) */
/* WARNING: Removing unreachable block (ram,0x000108919e94) */
/* WARNING: Removing unreachable block (ram,0x000108919e20) */
/* WARNING: Removing unreachable block (ram,0x000108919e44) */
/* WARNING: Removing unreachable block (ram,0x000108919e70) */
/* WARNING: Removing unreachable block (ram,0x000108919e2c) */
/* WARNING: Removing unreachable block (ram,0x00010891a0f8) */
/* WARNING: Removing unreachable block (ram,0x00010891a11c) */
/* WARNING: Removing unreachable block (ram,0x00010891a104) */

void FUN_107c05aec(long *param_1)

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

