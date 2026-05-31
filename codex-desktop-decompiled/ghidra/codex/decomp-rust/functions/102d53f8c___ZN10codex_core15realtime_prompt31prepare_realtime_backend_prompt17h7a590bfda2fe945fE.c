
void __ZN10codex_core15realtime_prompt31prepare_realtime_backend_prompt17h7a590bfda2fe945fE
               (long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  long extraout_x1;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  lVar10 = *param_3;
  puVar8 = (undefined8 *)0x8000000000000000;
  if (lVar10 != -0x8000000000000000) {
    lVar1 = param_3[1];
    lVar2 = param_3[2];
    FUN_1033f63d0(lVar1,lVar2);
    if (extraout_x1 != 0) {
      *param_1 = lVar10;
      param_1[1] = lVar1;
      param_1[2] = lVar2;
      if (*param_2 < -0x7ffffffffffffffe || *param_2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(param_2[1]);
      return;
    }
    if (lVar10 != 0) {
      _free(lVar1);
    }
  }
  if (*param_2 == -0x8000000000000000) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  if (*param_2 != -0x7fffffffffffffff) {
    lVar10 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar10;
    param_1[2] = param_2[2];
    return;
  }
  auVar14 = func_0x0001033f6614(&UNK_108d55f9d,0x1331);
  func_0x000106260920(&puStack_b8);
  puVar11 = puStack_a8;
  puVar6 = puStack_b0;
  puVar12 = puStack_b8;
  puVar13 = puStack_b0;
  if (puStack_b8 == (undefined8 *)0x8000000000000000) {
LAB_102d540dc:
    puStack_b8 = puVar13;
    func_0x000106260a44(&puStack_100);
    puVar11 = puStack_f0;
    puVar6 = puStack_f8;
    puVar12 = puStack_100;
    if (puStack_100 == (undefined8 *)0x8000000000000000) {
      puVar12 = (undefined8 *)0x8000000000000000;
      puVar11 = puVar8;
    }
    else {
      func_0x0001055bf348(&puStack_a0,puStack_f8,puStack_f0);
      puVar3 = puStack_90;
      puVar8 = puStack_98;
      if ((int)puStack_a0 == 1) {
        puStack_a0 = puVar12;
        puStack_98 = puVar6;
        puStack_90 = puVar11;
        puStack_80 = puVar3;
        puStack_88 = puVar8;
        puVar6 = (undefined8 *)func_0x000106260060(0x15,&puStack_a0);
        puVar12 = (undefined8 *)0x8000000000000000;
      }
    }
    if (((ulong)puVar13 & 3) == 1) {
      uVar9 = *(undefined8 *)((long)puVar13 + -1);
      puVar8 = *(undefined8 **)((long)puVar13 + 7);
      pcVar7 = (code *)*puVar8;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar9);
      }
      if (puVar8[1] != 0) {
        _free(uVar9);
      }
      _free((undefined8 *)((long)puVar13 + -1));
    }
    if (puVar12 == (undefined8 *)0x8000000000000000) {
      puStack_a0 = puVar6;
      puVar8 = (undefined8 *)_malloc(7);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,7);
        goto LAB_102d54500;
      }
      *(undefined4 *)((long)puVar8 + 3) = 0x6e776f6e;
      *(undefined4 *)puVar8 = 0x6e6b6e55;
      if (((ulong)puVar6 & 3) == 1) {
        uVar9 = *(undefined8 *)((long)puVar6 + -1);
        puVar11 = *(undefined8 **)((long)puVar6 + 7);
        pcVar7 = (code *)*puVar11;
        if (pcVar7 != (code *)0x0) {
          (*pcVar7)(uVar9);
        }
        if (puVar11[1] != 0) {
          _free(uVar9);
        }
        _free((undefined8 *)((long)puVar6 + -1));
      }
      puVar11 = (undefined8 *)0x7;
      puVar12 = (undefined8 *)0x7;
      puVar6 = puVar8;
    }
  }
  else {
    func_0x0001055bf348(&puStack_100,puStack_b0,puStack_a8);
    if (((ulong)puStack_100 & 1) != 0) {
      puStack_a0 = puVar12;
      puStack_98 = puVar6;
      puStack_90 = puVar11;
      puStack_80 = puStack_f0;
      puStack_88 = puStack_f8;
      puVar13 = (undefined8 *)func_0x000106260060(0x15,&puStack_a0);
      puVar8 = puVar11;
      goto LAB_102d540dc;
    }
  }
  func_0x000106260a44(&puStack_b8);
  puVar8 = puStack_b8;
  if (puStack_b8 == (undefined8 *)0x8000000000000000) {
LAB_102d54274:
    puStack_100 = puStack_b0;
    __ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h41dc6e412b237f7eE
              (&puStack_a0,&UNK_108d52471,7);
    puVar8 = puStack_b0;
    if (((ulong)puStack_b0 & 3) == 1) {
      puVar8 = (undefined8 *)((long)puStack_b0 + -1);
      uVar9 = *puVar8;
      puVar13 = *(undefined8 **)((long)puStack_b0 + 7);
      pcVar7 = (code *)*puVar13;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar9);
      }
      if (puVar13[1] != 0) {
        _free(uVar9);
      }
      _free(puVar8);
    }
  }
  else {
    func_0x0001055bf348(&puStack_100,puStack_b0,puStack_a8);
    if ((int)puStack_100 == 1) {
      puStack_a0 = puVar8;
      puStack_98 = puStack_b0;
      puStack_90 = puStack_a8;
      puStack_80 = puStack_f0;
      puStack_88 = puStack_f8;
      puStack_b0 = (undefined8 *)func_0x000106260060(0x15,&puStack_a0);
      goto LAB_102d54274;
    }
    puStack_a0 = puVar8;
    puStack_98 = puStack_b0;
    puStack_90 = puStack_a8;
    puVar8 = puStack_b0;
  }
  puStack_d0 = puStack_98;
  puStack_d8 = puStack_a0;
  puStack_c8 = puStack_90;
  puStack_f8 = (undefined8 *)0x2;
  puStack_100 = (undefined8 *)0x0;
  lStack_78 = (long)puVar6 + (long)puVar11;
  puStack_a0 = (undefined8 *)0x0;
  uStack_70 = 0;
  bVar4 = true;
  uStack_68 = 1;
  puStack_f0 = puVar12;
  puStack_e8 = puVar6;
  puStack_e0 = puVar11;
  puStack_98 = puVar11;
  puStack_90 = puVar6;
  puStack_88 = puVar11;
  puStack_80 = puVar6;
  auVar15 = func_0x0001033f8ff0(&puStack_a0);
  puVar13 = auVar15._8_8_;
  if (auVar15._0_8_ == 0) {
joined_r0x000102d54340:
    if (puVar12 != (undefined8 *)0x0) {
      _free(puVar6);
    }
    puVar6 = puStack_d0;
    puVar12 = puStack_d8;
    if (!bVar4) {
      if (puStack_d8 != (undefined8 *)0x0) {
        _free(puStack_d0);
      }
      goto LAB_102d54474;
    }
    lStack_78 = (long)puStack_d0 + (long)puStack_c8;
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = puStack_c8;
    puStack_90 = puStack_d0;
    puStack_88 = puStack_c8;
    puStack_80 = puStack_d0;
    uStack_70 = 0;
    bVar4 = true;
    uStack_68 = 1;
    auVar15 = func_0x0001033f8ff0(&puStack_a0);
    puVar13 = auVar15._8_8_;
    if (auVar15._0_8_ != 0) {
      if (puVar13 == (undefined8 *)0x0) {
        puStack_b8 = (undefined8 *)0x0;
        iVar5 = _posix_memalign(&puStack_b8,8,0);
        puVar8 = puStack_b8;
        if (iVar5 != 0) {
          puVar13 = (undefined8 *)0x0;
          puStack_100 = (undefined8 *)0x2;
          goto LAB_102d544f0;
        }
      }
      else {
        puVar8 = (undefined8 *)_malloc(puVar13);
      }
      if (puVar8 == (undefined8 *)0x0) {
        puStack_100 = (undefined8 *)0x2;
        goto LAB_102d544f0;
      }
      _memcpy(puVar8,auVar15._0_8_,puVar13);
      bVar4 = puVar13 == (undefined8 *)0x8000000000000000;
      puVar11 = puVar13;
    }
    if (puVar12 != (undefined8 *)0x0) {
      _free(puVar6);
    }
    if (bVar4) {
      puStack_100 = (undefined8 *)0x2;
      puVar8 = (undefined8 *)_malloc(5);
      if (puVar8 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,5);
        goto LAB_102d54500;
      }
      *(undefined1 *)((long)puVar8 + 4) = 0x65;
      *(undefined4 *)puVar8 = 0x72656874;
      puVar11 = (undefined8 *)0x5;
    }
LAB_102d54474:
    func_0x0001034c22bc(param_1,auVar14._0_8_,auVar14._8_8_,&UNK_108d572ce,0x15,puVar8,puVar11);
    _free(puVar8);
    return;
  }
  if (puVar13 == (undefined8 *)0x0) {
    puStack_b8 = (undefined8 *)0x0;
    iVar5 = _posix_memalign(&puStack_b8,8,0);
    puVar8 = puStack_b8;
    if (iVar5 == 0) goto joined_r0x000102d54364;
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)_malloc(puVar13);
joined_r0x000102d54364:
    if (puVar8 != (undefined8 *)0x0) {
      _memcpy(puVar8,auVar15._0_8_,puVar13);
      bVar4 = puVar13 == (undefined8 *)0x8000000000000000;
      puVar11 = puVar13;
      goto joined_r0x000102d54340;
    }
  }
  puStack_100 = (undefined8 *)0x1;
LAB_102d544f0:
  func_0x0001087c9084(1,puVar13);
LAB_102d54500:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x102d54504);
  (*pcVar7)();
}

