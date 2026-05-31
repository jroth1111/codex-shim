
void FUN_100e55ac0(long *param_1)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  
  switch((char)param_1[0x156]) {
  case '\0':
    lVar4 = *(long *)param_1[0x42];
    *(long *)param_1[0x42] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb65d9bdc952829e9E(param_1 + 0x42);
    }
    lVar4 = *(long *)param_1[0x43];
    *(long *)param_1[0x43] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(param_1 + 0x43);
    }
    lVar4 = *(long *)param_1[0x44];
    *(long *)param_1[0x44] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(param_1 + 0x44);
    }
    lVar6 = param_1[0x40];
    lVar4 = lVar6;
    for (lVar7 = param_1[0x41]; lVar7 != 0; lVar7 = lVar7 + -1) {
      FUN_100e06c08(lVar4);
      lVar4 = lVar4 + 0x38;
    }
    if (param_1[0x3f] != 0) {
      _free(lVar6);
    }
    if (*param_1 != 2) {
      FUN_100e08e20(param_1);
    }
    param_1 = param_1 + 0x45;
    __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
              (param_1);
    lVar4 = *(long *)*param_1;
    *(long *)*param_1 = lVar4 + -1;
    LORelease();
    if (lVar4 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    lVar4 = *param_1;
    FUN_10611d000(lVar4 + 0x30);
    if (lVar4 == -1) {
      return;
    }
    lVar7 = *(long *)(lVar4 + 8);
    *(long *)(lVar4 + 8) = lVar7 + -1;
    LORelease();
    if (lVar7 != 1) {
      return;
    }
    DataMemoryBarrier(2,1);
    goto code_r0x000108aa97c4;
  default:
    goto LAB_100e56278;
  case '\x03':
    cVar1 = *(char *)((long)param_1 + 0xafa);
    if (cVar1 == '\x05') {
      cVar1 = (char)param_1[0x163];
      if (cVar1 == '\x05') {
        func_0x000100e8b4b8(param_1 + 0x164);
      }
      else if (cVar1 == '\x04') {
        func_0x000100ccde68(param_1 + 0x164);
      }
      else if (cVar1 == '\x03') {
        func_0x000100cd84bc(param_1 + 0x164);
      }
    }
    else if (cVar1 == '\x04') {
      func_0x000100ca1dc8(param_1 + 0x160);
    }
    else if (cVar1 == '\x03') {
      func_0x000100cd8f90(param_1 + 0x160);
    }
    goto code_r0x000100e561a0;
  case '\x04':
    lVar4 = param_1[0x16c];
    puVar8 = (undefined8 *)param_1[0x16d];
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(lVar4);
    }
    if (puVar8[1] != 0) {
      _free(lVar4);
    }
    FUN_100df5738(param_1 + 0x159);
    goto code_r0x000100e561a0;
  case '\x05':
    FUN_100d80a18(param_1 + 0x159);
    goto code_r0x000100e561a0;
  case '\x06':
    FUN_100c9d288(param_1 + 0x159);
    goto code_r0x000100e561a0;
  case '\a':
    FUN_100cb7e8c(param_1 + 0x159);
    goto code_r0x000100e560b8;
  case '\b':
    FUN_100e82624(param_1 + 0x159);
    goto code_r0x000100e55e14;
  case '\t':
    FUN_100ca1af4(param_1 + 0x159);
    goto code_r0x000100e55e14;
  case '\n':
    FUN_100e7e654(param_1 + 0x159);
code_r0x000100e55e14:
    if ((*(byte *)((long)param_1 + 0xabd) & 1) == 0) {
code_r0x000100e56298:
      *(undefined1 *)((long)param_1 + 0xabd) = 0;
      lVar4 = param_1[0xa3];
    }
    else {
      if (param_1[0xa8] != -0x7ffffffffffffffb) {
        FUN_100e139e8(param_1 + 0xa8);
        goto code_r0x000100e56298;
      }
      lVar6 = param_1[0xaa];
      lVar4 = lVar6;
      for (lVar7 = param_1[0xab]; lVar7 != 0; lVar7 = lVar7 + -1) {
        FUN_100e06c08(lVar4);
        lVar4 = lVar4 + 0x38;
      }
      if (param_1[0xa9] == 0) goto code_r0x000100e56298;
      _free(lVar6);
      *(undefined1 *)((long)param_1 + 0xabd) = 0;
      lVar4 = param_1[0xa3];
    }
    goto joined_r0x000100e562a0;
  case '\v':
    FUN_100d50bc0(param_1 + 0x159);
    goto code_r0x000100e560b8;
  case '\f':
    FUN_100d533f8(param_1 + 0x159);
    goto code_r0x000100e560b8;
  case '\r':
    func_0x000100d50dec(param_1 + 0x18d);
    FUN_100e02a24(param_1 + 0x175);
    FUN_100e7c594(param_1 + 0x159);
    goto code_r0x000100e560b8;
  case '\x0e':
    FUN_100cce4c8(param_1 + 0x159);
    goto code_r0x000100e560b8;
  case '\x0f':
    if ((char)param_1[0x160] == '\x03') {
      lVar4 = param_1[0x161];
      puVar8 = (undefined8 *)param_1[0x162];
      pcVar5 = (code *)*puVar8;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(lVar4);
      }
      if (puVar8[1] != 0) goto code_r0x000100e5630c;
    }
    else if (((char)param_1[0x160] == '\x04') &&
            (FUN_100cab34c(param_1 + 0x164), param_1[0x161] != 0)) {
      lVar4 = param_1[0x162];
code_r0x000100e5630c:
      _free(lVar4);
    }
    lVar4 = *(long *)param_1[0x177];
    *(long *)param_1[0x177] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hca790a00580b4cf5E(param_1 + 0x177);
    }
    goto code_r0x000100e56098;
  case '\x10':
    FUN_100cce0d0(param_1 + 0x159);
    goto code_r0x000100e56078;
  case '\x11':
    FUN_100e82624(param_1 + 0x159);
    goto code_r0x000100e55efc;
  case '\x12':
    FUN_100ca1af4(param_1 + 0x159);
    goto code_r0x000100e55efc;
  case '\x13':
    FUN_100e7e654(param_1 + 0x159);
code_r0x000100e55efc:
    if ((*(byte *)((long)param_1 + 0xab9) & 1) != 0) {
      if (param_1[0xe2] == -0x7ffffffffffffffb) {
        lVar6 = param_1[0xe4];
        lVar4 = lVar6;
        for (lVar7 = param_1[0xe5]; lVar7 != 0; lVar7 = lVar7 + -1) {
          FUN_100e06c08(lVar4);
          lVar4 = lVar4 + 0x38;
        }
        if (param_1[0xe3] != 0) {
          _free(lVar6);
        }
      }
      else {
        FUN_100e139e8(param_1 + 0xe2);
      }
    }
    *(undefined1 *)((long)param_1 + 0xab9) = 0;
    FUN_100e37258(param_1[0xc6],((ulong)(param_1[200] - param_1[0xc6]) >> 3) * -0x70a3d70a3d70a3d7);
    if (param_1[199] != 0) {
      lVar6 = param_1[0xc5];
      goto code_r0x000100e56070;
    }
    goto code_r0x000100e56078;
  case '\x14':
    if (((((char)param_1[0x169] == '\x03') && ((char)param_1[0x168] == '\x03')) &&
        ((char)param_1[0x167] == '\x03')) && ((char)param_1[0x15e] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x15f);
      if (param_1[0x160] != 0) {
        (**(code **)(param_1[0x160] + 0x18))(param_1[0x161]);
      }
    }
    goto code_r0x000100e56078;
  case '\x15':
    FUN_100e82fa0(param_1 + 0x159);
    goto code_r0x000100e56020;
  case '\x16':
    FUN_100cce300(param_1 + 0x159);
    break;
  case '\x17':
    func_0x000100ca1dc8(param_1 + 0x159);
    break;
  case '\x18':
    if ((((char)param_1[0x16b] == '\x03') && ((char)param_1[0x16a] == '\x03')) &&
       (((char)param_1[0x169] == '\x03' && ((char)param_1[0x160] == '\x04')))) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x161);
      if (param_1[0x162] != 0) {
        (**(code **)(param_1[0x162] + 0x18))(param_1[0x163]);
      }
    }
    break;
  case '\x19':
    cVar1 = (char)param_1[0x15c];
    if (cVar1 == '\x05') {
      func_0x000100e8b4b8(param_1 + 0x15d);
    }
    else if (cVar1 == '\x04') {
      func_0x000100ccde68(param_1 + 0x15d);
    }
    else if (cVar1 == '\x03') {
      func_0x000100cd84bc(param_1 + 0x15d);
    }
    break;
  case '\x1a':
    lVar4 = param_1[0x16c];
    puVar8 = (undefined8 *)param_1[0x16d];
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(lVar4);
    }
    if (puVar8[1] != 0) {
      _free(lVar4);
    }
    FUN_100df5738(param_1 + 0x159);
    break;
  case '\x1b':
    FUN_100e7a7d4(param_1 + 0x159);
    break;
  case '\x1c':
    func_0x000100d50dec(param_1 + 0x189);
    FUN_100e02a24(param_1 + 0x171);
    goto code_r0x000100e55fa4;
  case '\x1d':
    FUN_100d1ddbc(param_1 + 0x159);
    goto code_r0x000100e55fa4;
  case '\x1e':
    FUN_100ca5f44(param_1 + 0x159);
code_r0x000100e55fa4:
    FUN_100e095b4(param_1 + 0x136);
    break;
  case '\x1f':
    if ((((char)param_1[0x167] == '\x03') && ((char)param_1[0x166] == '\x03')) &&
       ((char)param_1[0x15d] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x15e);
      if (param_1[0x15f] != 0) {
        (**(code **)(param_1[0x15f] + 0x18))(param_1[0x160]);
      }
    }
    goto code_r0x000100e55ff4;
  case ' ':
    FUN_100d1ddbc(param_1 + 0x159);
    *(undefined1 *)((long)param_1 + 0xabf) = 0;
    goto code_r0x000100e55ff4;
  case '!':
    lVar4 = param_1[0x159];
    puVar8 = (undefined8 *)param_1[0x15a];
    pcVar5 = (code *)*puVar8;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(lVar4);
    }
    if (puVar8[1] != 0) {
      _free(lVar4);
    }
    goto code_r0x000100e55fec;
  case '\"':
    FUN_100d1ddbc(param_1 + 0x159);
    *(undefined1 *)((long)param_1 + 0xabe) = 0;
code_r0x000100e55fec:
    FUN_100df5738(param_1 + 0x143);
    goto code_r0x000100e55ff4;
  }
  if (((*(byte *)((long)param_1 + 0xabb) & 1) == 0) ||
     (param_1[0x114] == -0x8000000000000000 || param_1[0x114] == 0)) {
    *(undefined1 *)((long)param_1 + 0xabb) = 0;
  }
  else {
    _free(param_1[0x115]);
    *(undefined1 *)((long)param_1 + 0xabb) = 0;
  }
code_r0x000100e55ff4:
  if ((param_1[0x101] != -0x7fffffffffffffe0) && (*(char *)((long)param_1 + 0xaba) == '\x01')) {
    FUN_100df5738(param_1 + 0x101);
  }
code_r0x000100e56020:
  *(undefined1 *)((long)param_1 + 0xaba) = 0;
  if (param_1[0xfe] != -0x8000000000000000 && param_1[0xfe] != 0) {
    _free(param_1[0xff]);
  }
  lVar6 = param_1[0xfc];
  lVar4 = param_1[0xfd] + 1;
  lVar7 = lVar6;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
    FUN_100e02a24(lVar7);
    lVar7 = lVar7 + 0xc0;
  }
  if (param_1[0xfb] != 0) {
code_r0x000100e56070:
    _free(lVar6);
  }
code_r0x000100e56078:
  lVar4 = *(long *)param_1[0xc4];
  *(long *)param_1[0xc4] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9d37e28164fd49c8E(param_1 + 0xc4);
  }
code_r0x000100e56098:
  if (param_1[0xc1] != -0x8000000000000000 && param_1[0xc1] != 0) {
    _free(param_1[0xc2]);
  }
  *(undefined1 *)(param_1 + 0x158) = 0;
code_r0x000100e560b8:
  lVar4 = param_1[0xa3];
joined_r0x000100e562a0:
  if (lVar4 != 0) {
    lVar7 = param_1[0xa5];
    if (lVar7 != 0) {
      plVar9 = (long *)param_1[0xa2];
      plVar10 = plVar9 + 1;
      lVar6 = *plVar9;
      uVar11 = CONCAT17(-(-1 < lVar6),
                        CONCAT16(-(-1 < (char)((ulong)lVar6 >> 0x30)),
                                 CONCAT15(-(-1 < (char)((ulong)lVar6 >> 0x28)),
                                          CONCAT14(-(-1 < (char)((ulong)lVar6 >> 0x20)),
                                                   CONCAT13(-(-1 < (char)((ulong)lVar6 >> 0x18)),
                                                            CONCAT12(-(-1 < (char)((ulong)lVar6 >>
                                                                                  0x10)),
                                                                     CONCAT11(-(-1 < (char)((ulong)
                                                  lVar6 >> 8)),-(-1 < (char)lVar6)))))))) &
               0x8080808080808080;
      do {
        while (uVar11 == 0) {
          lVar6 = *plVar10;
          plVar9 = plVar9 + -0x18;
          plVar10 = plVar10 + 1;
          uVar11 = CONCAT17(-(-1 < lVar6),
                            CONCAT16(-(-1 < (char)((ulong)lVar6 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar6 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar6 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar6 >> 0x18))
                                                                ,CONCAT12(-(-1 < (char)((ulong)lVar6
                                                                                       >> 0x10)),
                                                                          CONCAT11(-(-1 < (char)((
                                                  ulong)lVar6 >> 8)),-(-1 < (char)lVar6)))))))) &
                   0x8080808080808080;
        }
        uVar2 = (uVar11 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar11 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        iVar3 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
        if (plVar9[(long)-iVar3 * 3 + -3] != 0) {
          _free(plVar9[(long)-iVar3 * 3 + -2]);
        }
        uVar11 = uVar11 - 1 & uVar11;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lVar4 * 0x19 != -0x21) {
      _free(param_1[0xa2] + lVar4 * -0x18 + -0x18);
    }
  }
  if ((*(byte *)((long)param_1 + 0xabc) & 1) != 0) {
    lVar6 = param_1[0xa0];
    lVar4 = param_1[0xa1] + 1;
    lVar7 = lVar6;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      FUN_100e02a24(lVar7);
      lVar7 = lVar7 + 0xc0;
    }
    if (param_1[0x9f] != 0) {
      _free(lVar6);
    }
  }
  *(undefined1 *)((long)param_1 + 0xabc) = 0;
code_r0x000100e561a0:
  FUN_100e08e20(param_1 + 0x4d);
  plVar9 = param_1 + 0x4c;
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (plVar9);
  lVar4 = *(long *)*plVar9;
  *(long *)*plVar9 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(plVar9);
  }
  lVar6 = param_1[0x4a];
  lVar4 = lVar6;
  for (lVar7 = param_1[0x4b]; lVar7 != 0; lVar7 = lVar7 + -1) {
    FUN_100e06c08(lVar4);
    lVar4 = lVar4 + 0x38;
  }
  if (param_1[0x49] != 0) {
    _free(lVar6);
  }
  lVar4 = *(long *)param_1[0x48];
  *(long *)param_1[0x48] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h938b6eaa8ec54698E(param_1 + 0x48);
  }
  lVar4 = *(long *)param_1[0x47];
  *(long *)param_1[0x47] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h31b3b459000a0de9E(param_1 + 0x47);
  }
  lVar4 = *(long *)param_1[0x46];
  *(long *)param_1[0x46] = lVar4 + -1;
  LORelease();
  if (lVar4 != 1) {
LAB_100e56278:
    return;
  }
  DataMemoryBarrier(2,1);
  lVar4 = param_1[0x46];
  FUN_103399ec0(lVar4 + 0x10);
  if (lVar4 != -1) {
    lVar7 = *(long *)(lVar4 + 8);
    *(long *)(lVar4 + 8) = lVar7 + -1;
    LORelease();
    if (lVar7 == 1) {
      DataMemoryBarrier(2,1);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar4);
      return;
    }
  }
  return;
}

