
undefined8 FUN_105400770(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined6 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong unaff_x20;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined1 auVar19 [16];
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_80;
  uint uStack_78;
  ulong uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  int iStack_50;
  ulong uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  
  uStack_68 = param_2;
  uStack_60 = param_3;
  if (*(int *)(param_1 + 0x5b0) == 1000000000) {
    lStack_80 = -0x7fffffffffffffff;
    uStack_78 = 1000000000;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x5ca);
    unaff_x20 = (ulong)bVar1;
    uStack_58 = *(undefined8 *)(param_1 + 0x5a8);
    iStack_50 = *(int *)(param_1 + 0x5b0);
    func_0x000106032878(&uStack_48,&uStack_68,&uStack_58);
    lStack_80 = -0x7fffffffffffffff;
    uStack_78 = (uint)uStack_48;
    if (((uStack_48 & 1) == 0) && (CONCAT44(uStack_3c,uStack_40) != 0 || 8000000 < uStack_38)) {
      if (((bVar1 & 1) == 0) && (*(long *)(param_1 + 0x588) == 0)) {
        uStack_78 = *(uint *)(param_1 + 0x590);
        *(undefined4 *)(param_1 + 0x590) = 0x110000;
        lStack_80 = -0x8000000000000000;
        if (uStack_78 == 0x110000) {
          lStack_80 = -0x7fffffffffffffff;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x5ca) = 0;
        lStack_80 = *(long *)(param_1 + 0x578);
        uStack_78 = *(uint *)(param_1 + 0x580);
        uStack_6c = *(undefined4 *)(param_1 + 0x58c);
        uStack_74 = *(ulong *)(param_1 + 0x584);
        *(undefined8 *)(param_1 + 0x578) = 0;
        *(undefined8 *)(param_1 + 0x580) = 1;
        *(undefined8 *)(param_1 + 0x588) = 0;
        uStack_48 = uStack_74;
        uStack_40 = uStack_6c;
        if (-1 < lStack_80) {
          FUN_1053f6398(param_1,&lStack_80);
          return 1;
        }
      }
    }
  }
  if (lStack_80 == -0x7fffffffffffffff) {
    return 0;
  }
  uVar5 = (undefined6)(uStack_58 >> 0x10);
  uVar2 = (undefined1)uStack_78;
  if (uStack_78 < 0x80) {
    uStack_58 = CONCAT71((int7)(uStack_58 >> 8),uVar2) & 0xffffffff000000ff;
    uVar17 = 1;
  }
  else if (uStack_78 < 0x800) {
    uStack_58 = CONCAT62(uVar5,CONCAT11(uVar2,(char)(uStack_78 >> 6))) & 0xffffffff00003fff | 0x80c0
    ;
    uVar17 = 2;
  }
  else {
    uVar3 = (undefined1)(uStack_78 >> 6);
    if (uStack_78 < 0x10000) {
      uVar12 = CONCAT62(uVar5,CONCAT11(uVar3,(char)(uStack_78 >> 0xc))) & 0xffffffff00003fff;
      uStack_58._3_5_ = (undefined5)(uVar12 >> 0x18);
      uStack_58 = CONCAT53(uStack_58._3_5_,CONCAT12(uVar2,(short)uVar12)) & 0xffffffffff3fffff |
                  0x8080e0;
      uVar17 = 3;
    }
    else {
      uVar12 = CONCAT62(uVar5,CONCAT11((char)(uStack_78 >> 0xc),(char)(uStack_78 >> 0x12))) &
               0xffffffff00003fff;
      uStack_58._3_5_ = (undefined5)(uVar12 >> 0x18);
      uVar12 = CONCAT53(uStack_58._3_5_,CONCAT12(uVar3,(short)uVar12)) & 0xffffffffff3fffff;
      uStack_58._4_4_ = (undefined4)(uVar12 >> 0x20);
      uStack_58 = CONCAT44(uStack_58._4_4_,CONCAT13(uVar2,(int3)uVar12)) & 0xffffffff3fffffff |
                  0x808080f0;
      uVar17 = 4;
    }
  }
  lVar10 = _malloc(uVar17);
  if (lVar10 != 0) {
    _memcpy(lVar10,&uStack_58,uVar17);
    FUN_10543cf90(param_1,*(undefined8 *)(param_1 + 0x520),lVar10,uVar17);
    if ((((*(byte *)(param_1 + 0x640) & 1) == 0) && (*(long *)(param_1 + 0x20) != 0)) &&
       (**(char **)(param_1 + 0x18) == '!')) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar12 = 1;
      }
      else {
        lVar13 = *(long *)(param_1 + 0x30);
        lVar14 = lVar13 + *(long *)(param_1 + 0x38) * 0x30;
        uVar12 = 1;
        lVar15 = lVar13;
        bVar8 = false;
LAB_105400994:
        do {
          bVar4 = bVar8;
          if (*(ulong *)(lVar15 + 0x20) < uVar12) {
            uVar16 = *(ulong *)(lVar15 + 0x28);
            bVar8 = uVar12 < uVar16;
            if (uVar12 <= uVar16) {
              uVar12 = uVar16;
            }
            bVar4 = (bool)(bVar8 | bVar4);
            bVar9 = lVar15 + 0x30 == lVar14;
            lVar15 = lVar15 + 0x30;
            if (bVar9) {
              lVar15 = lVar13;
            }
            bVar8 = (bool)(!bVar9 & bVar4);
            if (!bVar9) goto LAB_105400994;
          }
          else {
            bVar9 = lVar15 + 0x30 != lVar14;
            lVar15 = lVar15 + 0x30;
            if (!bVar9) {
              lVar15 = lVar13;
            }
            bVar8 = (bool)(bVar9 & bVar4);
            if (bVar9) goto LAB_105400994;
          }
        } while (bVar4);
      }
      func_0x00010543f594(param_1,0,uVar12,1,0);
      *(undefined1 *)(param_1 + 0x640) = 1;
    }
    FUN_1053f1ea4(param_1);
    _free(lVar10);
    return 1;
  }
  uVar17 = func_0x0001087c9084(1,uVar17);
  _free(unaff_x20);
  auVar19 = __Unwind_Resume(uVar17);
  lVar10 = auVar19._8_8_;
  plVar11 = auVar19._0_8_;
  if ((*(byte *)(lVar10 + 0x640) & 1) != 0) {
    uStack_e8 = *(undefined8 *)(lVar10 + 0x18);
    uStack_e0 = *(undefined8 *)(lVar10 + 0x20);
    puStack_118 = &uStack_e8;
    puStack_110 = &DAT_105150c8c;
    uVar17 = __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                       (&lStack_130,s___108afdf52,&puStack_118);
    lVar14 = *(long *)(lVar10 + 0x570);
    lVar15 = lStack_120;
    lVar13 = lStack_128;
    goto joined_r0x000105400b8c;
  }
  uVar17 = *(undefined8 *)(lVar10 + 0x18);
  lVar15 = *(long *)(lVar10 + 0x20);
  if (lVar15 == 0) {
LAB_105400b6c:
    lVar13 = 1;
  }
  else {
    lVar13 = _malloc(lVar15);
    if (lVar13 == 0) {
      func_0x0001087c9084(1,lVar15);
      goto LAB_105400b6c;
    }
  }
  uVar17 = _memcpy(lVar13,uVar17,lVar15);
  lVar14 = *(long *)(lVar10 + 0x570);
  lStack_130 = lVar15;
joined_r0x000105400b8c:
  if (lVar14 == 0) {
    plVar11[1] = lVar13;
    *plVar11 = lStack_130;
    plVar11[2] = lVar15;
  }
  else {
    lStack_128 = lVar13;
    lStack_120 = lVar15;
    func_0x0001053fd054(&uStack_e8,lVar10);
    uVar17 = FUN_1053fd174(&puStack_118,lVar13,lVar15,&uStack_e8,*(undefined8 *)(lVar10 + 0x568),
                           *(undefined8 *)(lVar10 + 0x570));
    puVar7 = puStack_110;
    puVar6 = puStack_118;
    if (lStack_f0 != 0) {
      puVar18 = (undefined8 *)(lStack_f8 + 8);
      lVar10 = lStack_f0;
      do {
        if ((puVar18[-1] & 0x7fffffffffffffff) != 0) {
          uVar17 = _free(*puVar18);
        }
        puVar18 = puVar18 + 5;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    if (lStack_100 != 0) {
      uVar17 = _free(lStack_f8);
    }
    *plVar11 = (long)puVar6;
    plVar11[1] = (long)puVar7;
    plVar11[2] = lStack_108;
    if (lStack_130 != 0) {
      uVar17 = _free(lVar13);
    }
  }
  return uVar17;
}

