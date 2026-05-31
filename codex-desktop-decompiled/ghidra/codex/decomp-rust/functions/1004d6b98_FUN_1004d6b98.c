
long FUN_1004d6b98(long *param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uStack_100;
  byte *pbStack_f8;
  ulong uStack_f0;
  uint auStack_e8 [6];
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  
  lVar1 = param_1[1];
  lVar16 = param_1[2];
  lVar9 = *param_1;
  do {
    lVar15 = lVar9;
    if (lVar15 == lVar1) {
      return 0;
    }
    *param_1 = lVar15 + 0x50;
    if (*(long *)(lVar16 + 0x10) == 0) {
      return lVar15;
    }
    uStack_100 = 0;
    pbStack_f8 = (byte *)0x1;
    uStack_f0 = 0;
    if (*(long *)(lVar15 + 0x18) != -0x8000000000000000) {
      __ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h41dc6e412b237f7eE
                (&lStack_d0,*(undefined8 *)(lVar15 + 0x20),*(undefined8 *)(lVar15 + 0x28));
      uVar10 = uStack_c0;
      uVar4 = uStack_c8;
      if (uStack_c0 == 0) {
        pbVar13 = (byte *)0x1;
        uVar7 = 0;
      }
      else {
        thunk_FUN_108855060(&uStack_100,0,uStack_c0,1,1);
        pbVar13 = pbStack_f8;
        uVar7 = uStack_f0;
      }
      _memcpy(pbVar13 + uVar7,uVar4,uVar10);
      uVar7 = uVar7 + uVar10;
      uStack_f0 = uVar7;
      if (lStack_d0 != 0) {
        _free(uVar4);
      }
      uVar10 = uVar7;
      if (uStack_100 == uVar7) {
        thunk_FUN_108855060(&uStack_100,uVar7,1,1,1);
        uVar10 = uStack_f0;
        pbVar13 = pbStack_f8;
      }
      pbVar13[uVar10] = 0x20;
      uStack_f0 = uVar7 + 1;
    }
    uVar10 = uStack_f0;
    __ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h41dc6e412b237f7eE
              (&lStack_d0,*(undefined8 *)(lVar15 + 8),*(undefined8 *)(lVar15 + 0x10));
    uVar7 = uStack_c0;
    uVar4 = uStack_c8;
    if (uStack_100 - uVar10 < uStack_c0) {
      thunk_FUN_108855060(&uStack_100,uVar10,uStack_c0,1,1);
      uVar10 = uStack_f0;
    }
    pbVar13 = pbStack_f8;
    _memcpy(pbStack_f8 + uVar10,uVar4,uVar7);
    uVar10 = uVar10 + uVar7;
    uStack_f0 = uVar10;
    if (lStack_d0 != 0) {
      _free(uVar4);
    }
    if (*(long *)(lVar15 + 0x30) != -0x8000000000000000) {
      uVar7 = uVar10;
      if (uStack_100 == uVar10) {
        thunk_FUN_108855060(&uStack_100,uVar10,1,1,1);
        uVar7 = uStack_f0;
        pbVar13 = pbStack_f8;
      }
      pbVar13[uVar7] = 0x20;
      uVar10 = uVar10 + 1;
      uStack_f0 = uVar10;
      __ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h41dc6e412b237f7eE
                (&lStack_d0,*(undefined8 *)(lVar15 + 0x38),*(undefined8 *)(lVar15 + 0x40));
      uVar7 = uStack_c0;
      uVar4 = uStack_c8;
      if (uStack_100 - uVar10 < uStack_c0) {
        thunk_FUN_108855060(&uStack_100,uVar10,uStack_c0,1,1);
        pbVar13 = pbStack_f8;
        uVar10 = uStack_f0;
      }
      _memcpy(pbVar13 + uVar10,uVar4,uVar7);
      uVar10 = uVar10 + uVar7;
      uStack_f0 = uVar10;
      if (lStack_d0 != 0) {
        _free(uVar4);
      }
    }
    uVar7 = *(ulong *)(lVar16 + 0x10);
    if (uVar7 == 0) {
LAB_1004d6e58:
      uVar14 = 1;
      goto LAB_1004d6e5c;
    }
    if (uVar7 < uVar10) {
      if (uVar7 == 1) {
        bVar3 = **(byte **)(lVar16 + 8);
        pbVar8 = pbVar13;
        if (uVar10 < 0x10) {
          do {
            uVar10 = uVar10 - 1;
            bVar2 = *pbVar8;
            uVar14 = (uint)(bVar2 == bVar3);
            pbVar8 = pbVar8 + 1;
          } while (bVar2 != bVar3 && uVar10 != 0);
        }
        else {
          uVar7 = ((ulong)(pbVar13 + 7) & 0xfffffffffffffff8) - (long)pbVar13;
          if (uVar7 == 0) {
LAB_1004d6dd0:
            do {
              uVar12 = *(ulong *)(pbVar13 + uVar7) ^ (ulong)bVar3 * 0x101010101010101;
              uVar11 = *(ulong *)((long)(pbVar13 + uVar7) + 8) ^ (ulong)bVar3 * 0x101010101010101;
              if ((((0x101010101010100 - uVar12 | uVar12) & (0x101010101010100 - uVar11 | uVar11) ^
                   0xffffffffffffffff) & 0x8080808080808080) != 0) break;
              uVar7 = uVar7 + 0x10;
            } while (uVar7 <= uVar10 - 0x10);
          }
          else {
            lVar9 = (long)pbVar13 - ((ulong)(pbVar13 + 7) & 0xfffffffffffffff8);
            do {
              if (*pbVar8 == bVar3) goto LAB_1004d6e58;
              bVar5 = lVar9 != -1;
              lVar9 = lVar9 + 1;
              pbVar8 = pbVar8 + 1;
            } while (bVar5);
            if (uVar7 <= uVar10 - 0x10) goto LAB_1004d6dd0;
          }
          if (uVar10 == uVar7) goto LAB_1004d6e50;
          lVar9 = ~uVar7 + uVar10;
          pbVar8 = pbVar13 + uVar7;
          do {
            bVar2 = *pbVar8;
            uVar14 = (uint)(bVar2 == bVar3);
            bVar5 = lVar9 != 0;
            lVar9 = lVar9 + -1;
            pbVar8 = pbVar8 + 1;
          } while (bVar2 != bVar3 && bVar5);
        }
      }
      else {
        __ZN4core3str7pattern11StrSearcher3new17h644cd50388149c5cE(&lStack_d0,pbVar13,uVar10);
        FUN_1011dd528(auStack_e8,&lStack_d0);
        uVar14 = auStack_e8[0];
      }
    }
    else {
      if (uVar7 == uVar10) {
        iVar6 = _memcmp(*(byte **)(lVar16 + 8),pbVar13,uVar10);
        uVar14 = (uint)(iVar6 == 0);
        goto LAB_1004d6e5c;
      }
LAB_1004d6e50:
      uVar14 = 0;
    }
LAB_1004d6e5c:
    if (uStack_100 != 0) {
      _free(pbVar13);
    }
    lVar9 = lVar15 + 0x50;
    if (uVar14 != 0) {
      return lVar15;
    }
  } while( true );
}

