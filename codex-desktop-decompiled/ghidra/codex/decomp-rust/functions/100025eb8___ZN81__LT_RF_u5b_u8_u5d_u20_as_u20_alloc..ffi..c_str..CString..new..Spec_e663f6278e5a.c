
void __ZN81__LT__RF__u5b_u8_u5d__u20_as_u20_alloc__ffi__c_str__CString__new__SpecNewImpl_GT_13spec_new_impl17hb987ddbe28dfb313E
               (long *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_58;
  long lStack_50;
  ulong uStack_48;
  
  auVar11._8_8_ = param_3;
  auVar11._0_8_ = param_2;
  param_3 = param_3 + 1;
  if (param_3 < 0) {
    auVar11 = FUN_107c03c64(0,param_3);
    param_1 = extraout_x8;
  }
  uVar8 = auVar11._8_8_;
  lVar10 = auVar11._0_8_;
  lStack_50 = _malloc(param_3);
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = lStack_50;
  if (lStack_50 != 0) {
    _memcpy(lStack_50,lVar10,uVar8);
    if (uVar8 < 0x10) {
      if (uVar8 != 0) {
        uVar7 = 0;
        do {
          if (*(char *)(lVar10 + uVar7) == '\0') goto LAB_100025fe8;
          uVar7 = uVar7 + 1;
        } while (uVar8 != uVar7);
      }
LAB_100025fc4:
      lStack_58 = param_3;
      uStack_48 = uVar8;
      auVar12 = __ZN5alloc3ffi5c_str7CString19_from_vec_unchecked17h1836188feadd5beaE(&lStack_58);
      param_3 = -0x8000000000000000;
      goto LAB_100025fec;
    }
    uVar3 = (lVar10 + 7U & 0xfffffffffffffff8) - lVar10;
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        if (*(char *)(lVar10 + uVar7) == '\0') goto LAB_100025fe8;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
      if (uVar8 - 0x10 < uVar3) goto LAB_100025fbc;
    }
    do {
      uVar7 = *(ulong *)(lVar10 + uVar3);
      uVar9 = ((ulong *)(lVar10 + uVar3))[1];
      if ((((0x101010101010100 - uVar7 | uVar7) & (0x101010101010100 - uVar9 | uVar9) ^
           0xffffffffffffffff) & 0x8080808080808080) != 0) break;
      uVar3 = uVar3 + 0x10;
    } while (uVar3 <= uVar8 - 0x10);
LAB_100025fbc:
    do {
      if (uVar8 == uVar3) goto LAB_100025fc4;
      uVar7 = uVar3;
      if (*(char *)(lVar10 + uVar3) == '\0') goto LAB_100025fe8;
      uVar3 = uVar3 + 1;
    } while( true );
  }
  auVar11 = FUN_107c03c64(1,param_3);
  puVar2 = auVar11._0_8_;
  uVar8 = puVar2[2];
  if (uVar8 != 0) {
    if (param_4 == 0) {
      return;
    }
    uVar7 = *puVar2;
    if (*puVar2 != 0x8000000000000000) {
LAB_100026170:
      if (uVar7 - uVar8 < param_4) {
        thunk_FUN_1087c9198(puVar2,uVar8,param_4);
        uVar8 = puVar2[2];
      }
      _memcpy(puVar2[1] + uVar8,auVar11._8_8_,param_4);
      param_4 = uVar8 + param_4;
      goto LAB_100026194;
    }
    uVar3 = uVar8 + param_4;
    if (-1 < (long)uVar3) {
      uVar9 = puVar2[1];
      if (uVar3 == 0) goto LAB_100026138;
      uVar7 = _malloc(uVar3);
      if (uVar7 == 0) {
        FUN_107c03c64(1,uVar3);
LAB_1000261d4:
        uVar4 = FUN_107c03c64(1,uVar8);
        if (uStack_b8 != 0) {
          _free(uStack_b0);
        }
        plVar5 = (long *)__Unwind_Resume(uVar4);
        if (*plVar5 == -0x8000000000000000) {
          lVar10 = plVar5[1];
          lVar1 = plVar5[2];
          if (lVar1 == 0) {
            lVar6 = 1;
          }
          else {
            lVar6 = _malloc(lVar1);
            if (lVar6 == 0) {
              FUN_107c03c64(1,lVar1);
              return;
            }
          }
          _memcpy(lVar6,lVar10,lVar1);
          *extraout_x8_00 = lVar1;
          extraout_x8_00[1] = lVar6;
          extraout_x8_00[2] = lVar1;
        }
        else {
          lVar10 = *plVar5;
          extraout_x8_00[1] = plVar5[1];
          *extraout_x8_00 = lVar10;
          extraout_x8_00[2] = plVar5[2];
        }
        return;
      }
      uStack_b8 = uVar3;
      uStack_b0 = uVar7;
      if (uVar3 < uVar8) goto LAB_10002614c;
      do {
        uStack_a8 = 0;
        while( true ) {
          uVar7 = uStack_a8;
          _memcpy(uStack_b0 + uStack_a8,uVar9,uVar8);
          uVar8 = uVar7 + uVar8;
          puVar2[1] = uStack_b0;
          *puVar2 = uStack_b8;
          puVar2[2] = uVar8;
          uVar7 = *puVar2;
          uStack_a8 = uVar8;
          if (*puVar2 != 0x8000000000000000) goto LAB_100026170;
          if (uVar8 == 0) {
            uVar7 = 0;
            *puVar2 = 0;
            puVar2[1] = 1;
            goto LAB_100026170;
          }
          uVar9 = puVar2[1];
          uVar3 = _malloc(uVar8);
          if (uVar3 == 0) goto LAB_1000261d4;
          _memcpy(uVar3,uVar9,uVar8);
          *puVar2 = uVar8;
          puVar2[1] = uVar3;
          uVar7 = uVar8;
          if (uVar8 != 0x8000000000000000) goto LAB_100026170;
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108c5192e,0x28,&UNK_10b1d25c0);
          uVar8 = 0x8000000000000000;
LAB_100026138:
          uStack_b0 = 1;
          uStack_b8 = uVar3;
          if (uVar8 <= uVar3) break;
LAB_10002614c:
          uStack_a8 = 0;
          thunk_FUN_1087c9198(&uStack_b8,0,uVar8);
        }
      } while( true );
    }
    FUN_107c03c64(0,uVar3);
  }
  if ((*puVar2 & 0x7fffffffffffffff) != 0) {
    _free(puVar2[1]);
  }
  *puVar2 = 0x8000000000000000;
  puVar2[1] = auVar11._8_8_;
LAB_100026194:
  puVar2[2] = param_4;
  return;
LAB_100025fe8:
  param_1[3] = uVar7;
LAB_100025fec:
  *param_1 = param_3;
  *(undefined1 (*) [16])(param_1 + 1) = auVar12;
  return;
}

