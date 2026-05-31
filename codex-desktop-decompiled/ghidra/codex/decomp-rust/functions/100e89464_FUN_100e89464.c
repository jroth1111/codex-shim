
/* WARNING: Type propagation algorithm not settling */

void FUN_100e89464(long *param_1)

{
  ulong *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong in_xzr;
  
  if (0x18 < *(byte *)((long)param_1 + 0xaaf1)) {
    return;
  }
  switch(*(byte *)((long)param_1 + 0xaaf1)) {
  case 0:
    if (param_1[3] == -0x8000000000000000 || param_1[3] == 0) {
      if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) {
code_r0x000100e894d8:
        lVar4 = param_1[9];
        goto joined_r0x000100e894e4;
      }
    }
    else {
      _free(param_1[4]);
      if (param_1[6] == -0x8000000000000000 || param_1[6] == 0) goto code_r0x000100e894d8;
    }
    _free(param_1[7]);
    lVar4 = param_1[9];
joined_r0x000100e894e4:
    if ((lVar4 != -0x8000000000000000) && (lVar4 != 0)) {
      _free(param_1[10]);
    }
    lVar4 = param_1[1];
    lVar8 = param_1[2];
    if (lVar8 != 0) {
      puVar10 = (undefined8 *)(lVar4 + 8);
      do {
        if (puVar10[-1] != 0) {
          _free(*puVar10);
        }
        puVar10 = puVar10 + 3;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if (*param_1 != 0) {
      _free(lVar4);
    }
    FUN_100e01cdc(param_1 + 0xc);
    if (((short)param_1[0x38] == 3) && (param_1[0x39] != 0)) {
      _free(param_1[0x3a]);
    }
    lVar4 = param_1[0x2c] + 0x7ffffffffffffffa;
    if ((ulong)param_1[0x2c] < 0x8000000000000006) {
      lVar4 = 6;
    }
    if (lVar4 == 6) {
      FUN_100e0fca4(param_1 + 0x2c);
    }
    else if ((lVar4 == 4) && (param_1[0x2d] != 0)) {
      _free(param_1[0x2e]);
    }
    lVar4 = param_1[0x22];
    if (lVar4 == -0x7fffffffffffffff) {
      return;
    }
    if (lVar4 == -0x8000000000000000) {
      if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
        return;
      }
      if (param_1[0x24] == 0) {
        return;
      }
      lVar4 = 0x18;
    }
    else {
      if (lVar4 != 0) {
        _free(param_1[0x23]);
      }
      if ((param_1[0x25] != -0x8000000000000000) && (param_1[0x25] != 0)) {
        _free(param_1[0x26]);
      }
      if ((param_1[0x28] & 0x7fffffffffffffffU) == 0) {
        return;
      }
      lVar4 = 0x38;
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(*(undefined8 *)((long)param_1 + lVar4 + 0x110));
    return;
  default:
    goto LAB_100e8a15c;
  case 3:
    FUN_100cc57f4(param_1 + 0x1564);
    goto code_r0x000100e89da8;
  case 4:
    FUN_100d73020(param_1 + 0x1564);
    goto code_r0x000100e89da8;
  case 5:
    if ((char)param_1[0x160d] == '\x03') {
      FUN_100ced36c(param_1 + 0x156b);
      FUN_100e76384(param_1 + 0x1568);
      *(undefined1 *)((long)param_1 + 0xb069) = 0;
      bVar2 = *(byte *)((long)param_1 + 0xab04);
      goto joined_r0x000100e89a78;
    }
    if (((char)param_1[0x160d] == '\0') &&
       (param_1[0x1564] != -0x8000000000000000 && param_1[0x1564] != 0)) {
      _free(param_1[0x1565]);
      bVar2 = *(byte *)((long)param_1 + 0xab04);
      goto joined_r0x000100e89a78;
    }
    goto code_r0x000100e89d5c;
  case 6:
    if ((char)param_1[0x1b83] == '\x03') {
      if (*(char *)((long)param_1 + 0xdc02) == '\x03') {
        func_0x000100e78740(param_1 + 0x1a13);
      }
      else if (*(char *)((long)param_1 + 0xdc02) == '\0') {
        if (param_1[0x1a0d] != 0) {
          _free(param_1[0x1a0e]);
        }
        if (param_1[0x1a10] != -0x8000000000000000 && param_1[0x1a10] != 0) {
          _free(param_1[0x1a11]);
        }
      }
    }
    lVar4 = *(long *)param_1[0x1b84];
    *(long *)param_1[0x1b84] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(param_1 + 0x1b84);
    }
    FUN_100de93d0(param_1 + 0x1564);
    *(undefined1 *)((long)param_1 + 0xab1b) = 0;
    bVar2 = *(byte *)((long)param_1 + 0xab04);
    goto joined_r0x000100e89a78;
  case 7:
    if ((char)param_1[0x160d] == '\x03') {
      FUN_100ced36c(param_1 + 0x156b);
      FUN_100e76384(param_1 + 0x1568);
      *(undefined1 *)((long)param_1 + 0xb069) = 0;
    }
    else if (((char)param_1[0x160d] == '\0') &&
            (param_1[0x1564] != -0x8000000000000000 && param_1[0x1564] != 0)) {
      _free(param_1[0x1565]);
    }
    goto code_r0x000100e89cc4;
  case 8:
    if ((char)param_1[0x1a38] == '\x03') {
      FUN_100cf5450(param_1 + 0x1567);
    }
    uVar5 = param_1[0x1564];
    if ((uVar5 & 3) == 1) {
      uVar9 = *(undefined8 *)(uVar5 - 1);
      puVar10 = *(undefined8 **)(uVar5 + 7);
      pcVar7 = (code *)*puVar10;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar9);
      }
      if (puVar10[1] != 0) {
        _free(uVar9);
      }
      _free((undefined8 *)(uVar5 - 1));
    }
    *(undefined1 *)((long)param_1 + 0xaafc) = 0;
    goto code_r0x000100e89cc4;
  case 9:
    FUN_100d0ea60(param_1 + 0x1564);
    goto code_r0x000100e897c0;
  case 10:
    FUN_100d0338c(param_1 + 0x1565);
    _close((int)param_1[0x1564]);
code_r0x000100e897c0:
    *(undefined1 *)((long)param_1 + 0xab19) = 0;
    goto code_r0x000100e89c88;
  case 0xb:
    FUN_100ccf6e0(param_1 + 0x1564);
    goto code_r0x000100e89c70;
  case 0xc:
    FUN_100cc4448(param_1 + 0x1564);
    goto code_r0x000100e89888;
  case 0xd:
    if ((char)param_1[0x160d] == '\x03') {
      FUN_100ced36c(param_1 + 0x156b);
      FUN_100e76384(param_1 + 0x1568);
      *(undefined1 *)((long)param_1 + 0xb069) = 0;
    }
    else if (((char)param_1[0x160d] == '\0') &&
            (param_1[0x1564] != -0x8000000000000000 && param_1[0x1564] != 0)) {
      _free(param_1[0x1565]);
    }
code_r0x000100e89888:
    FUN_100e04ad4(param_1 + 0x1202);
    goto code_r0x000100e89c48;
  case 0xe:
    if (((char)param_1[0x15a6] == '\x03') && ((char)param_1[0x15a5] == '\x03')) {
      FUN_100e6ae88(param_1 + 0x1566);
    }
    goto code_r0x000100e89c48;
  case 0xf:
    FUN_100ca1c08(param_1 + 0x1564);
    goto code_r0x000100e89bf0;
  case 0x10:
    FUN_100cddca4(param_1 + 0x1564);
    *(undefined2 *)((long)param_1 + 0xab11) = 0;
    break;
  case 0x11:
    FUN_100d0926c(param_1 + 0x1564);
    break;
  case 0x12:
    FUN_100cf4fd4(param_1 + 0x156e);
    break;
  case 0x13:
    if ((char)param_1[0x16da] == '\x03') {
      if (*(char *)((long)param_1 + 0xb6ba) == '\x03') {
        func_0x000100e78740(param_1 + 0x156a);
      }
      else if (*(char *)((long)param_1 + 0xb6ba) == '\0') {
        if (param_1[0x1564] != 0) {
          _free(param_1[0x1565]);
        }
        if (param_1[0x1567] != -0x8000000000000000 && param_1[0x1567] != 0) {
          _free(param_1[0x1568]);
        }
      }
    }
    break;
  case 0x14:
    FUN_100cf7494(param_1 + 0x1564);
    lVar4 = *(long *)param_1[0x1558];
    *(long *)param_1[0x1558] = lVar4 + -1;
    LORelease();
    if (lVar4 != 1) break;
    goto code_r0x000100e89b18;
  case 0x15:
    if ((char)param_1[0x16da] == '\x03') {
      if (*(char *)((long)param_1 + 0xb6ba) == '\x03') {
        func_0x000100e78740(param_1 + 0x156a);
      }
      else if (*(char *)((long)param_1 + 0xb6ba) == '\0') {
        if (param_1[0x1564] != 0) {
          _free(param_1[0x1565]);
        }
        if (param_1[0x1567] != -0x8000000000000000 && param_1[0x1567] != 0) {
          _free(param_1[0x1568]);
        }
      }
    }
    goto code_r0x000100e89a8c;
  case 0x16:
    plVar6 = (long *)param_1[0x1564];
    if (*plVar6 == 0xcc) {
      *plVar6 = 0x84;
    }
    else {
      (**(code **)(plVar6[2] + 0x20))();
    }
    goto code_r0x000100e89a8c;
  case 0x17:
    plVar6 = (long *)param_1[0x1564];
    if (*plVar6 == 0xcc) {
      *plVar6 = 0x84;
    }
    else {
      (**(code **)(plVar6[2] + 0x20))();
    }
    goto code_r0x000100e89a8c;
  case 0x18:
    plVar6 = (long *)param_1[0x1565];
    if (*plVar6 == 0xcc) {
      *plVar6 = 0x84;
    }
    else {
      (**(code **)(plVar6[2] + 0x20))();
    }
    FUN_100cd11ec(param_1 + 0x1566);
code_r0x000100e89a8c:
    *(undefined1 *)((long)param_1 + 0xab0f) = 0;
    if ((*(byte *)((long)param_1 + 0xaafe) & 1) != 0) {
      plVar6 = (long *)param_1[0x155c];
      if (*plVar6 == 0xcc) {
        *plVar6 = 0x84;
      }
      else {
        (**(code **)(plVar6[2] + 0x20))();
      }
    }
    *(undefined1 *)((long)param_1 + 0xaafe) = 0;
    lVar4 = *(long *)param_1[0x1559];
    *(long *)param_1[0x1559] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h9199b62ca8ac1a11E();
    }
    lVar4 = *(long *)param_1[0x155a];
    *(long *)param_1[0x155a] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hda5723bf9a18ab94E();
    }
    *(undefined1 *)(param_1 + 0x1562) = 0;
    lVar4 = *(long *)param_1[0x1558];
    *(long *)param_1[0x1558] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
code_r0x000100e89b18:
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h57cc79fc3dca54deE();
    }
  }
  if (((*(byte *)((long)param_1 + 0xaafa) & 1) != 0) && (param_1[0x1556] != 0)) {
    FUN_100e498fc(param_1 + 0x1557);
  }
  *(undefined1 *)((long)param_1 + 0xaafa) = 0;
  if ((*(byte *)((long)param_1 + 0xaaff) & 1) != 0) {
    puVar10 = (undefined8 *)param_1[0x1554];
    if (param_1[0x1555] != 0) {
      lVar4 = 1 - param_1[0x1555];
      puVar3 = puVar10;
      do {
        plVar6 = (long *)*puVar3;
        if (*plVar6 == 0xcc) {
          *plVar6 = 0x84;
        }
        else {
          (**(code **)(plVar6[2] + 0x20))();
        }
        lVar4 = lVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 1);
    }
    if (param_1[0x1553] != 0) {
      _free(puVar10);
    }
  }
  *(undefined1 *)((long)param_1 + 0xaaff) = 0;
  __ZN97__LT_tokio_util__sync__cancellation_token__CancellationToken_u20_as_u20_core__ops__drop__Drop_GT_4drop17h41b2bd289c4eedfeE
            (param_1 + 0x1552);
  lVar4 = *(long *)param_1[0x1552];
  *(long *)param_1[0x1552] = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17ha29a3ea10b50cafaE(param_1 + 0x1552);
  }
  if (((char)param_1[0x1560] == '\x01') && (param_1[0x154f] != 0)) {
    _free(param_1[0x1550]);
  }
code_r0x000100e89bf0:
  *(undefined1 *)(param_1 + 0x1560) = 0;
  *(undefined2 *)((long)param_1 + 0xab13) = 0;
  *(undefined1 *)((long)param_1 + 0xab15) = 0;
  if (((*(byte *)((long)param_1 + 0xab01) & 1) != 0) && (param_1[0x154b] != -0x8000000000000000)) {
    FUN_100df6098();
  }
  *(undefined1 *)((long)param_1 + 0xab01) = 0;
  *(undefined2 *)((long)param_1 + 0xab16) = 0;
  *(undefined1 *)(param_1 + 0x1563) = 0;
  plVar6 = (long *)param_1[0x154a];
  lVar4 = *plVar6;
  *plVar6 = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hc9edeb079b4dcf91E(param_1 + 0x154a);
  }
code_r0x000100e89c48:
  plVar6 = (long *)param_1[0xebb];
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    *plVar6 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4d407ca5c062c376E(param_1 + 0xebb);
    }
  }
code_r0x000100e89c70:
  if (((*(byte *)((long)param_1 + 0xaafb) & 1) != 0) && ((int)param_1[0x155d] != -1)) {
    _close();
  }
code_r0x000100e89c88:
  *(undefined1 *)((long)param_1 + 0xaafb) = 0;
  if (param_1[0xeaa] != -0x7fffffffffffffff) {
    FUN_100dfc5b8(param_1 + 0xeaa);
  }
  *(undefined1 *)((long)param_1 + 0xab1a) = 0;
  if ((*(byte *)((long)param_1 + 0xab02) & 1) != 0) {
    FUN_100de93d0(param_1 + 0x558);
  }
  *(undefined1 *)((long)param_1 + 0xab02) = 0;
code_r0x000100e89cc4:
  if ((*(byte *)((long)param_1 + 0xab03) & 1) == 0) {
code_r0x000100e89d68:
    *(undefined1 *)((long)param_1 + 0xab03) = 0;
    bVar2 = *(byte *)((long)param_1 + 0xab04);
  }
  else {
    lVar8 = param_1[0x556];
    lVar4 = param_1[0x557];
    if (lVar4 != 0) {
      puVar10 = (undefined8 *)(lVar8 + 0x60);
      do {
        while( true ) {
          if (puVar10[-7] != 0) {
            _free(puVar10[-6]);
          }
          if (puVar10[-4] != -0x8000000000000000 && puVar10[-4] != 0) break;
          if (puVar10[-1] == -0x8000000000000000 || puVar10[-1] == 0) goto code_r0x000100e89cfc;
code_r0x000100e89d38:
          _free(*puVar10);
          lVar4 = lVar4 + -1;
          puVar10 = puVar10 + 0xe;
          if (lVar4 == 0) goto code_r0x000100e89d48;
        }
        _free(puVar10[-3]);
        if (puVar10[-1] != -0x8000000000000000 && puVar10[-1] != 0) goto code_r0x000100e89d38;
code_r0x000100e89cfc:
        puVar10 = puVar10 + 0xe;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
code_r0x000100e89d48:
    if (param_1[0x555] == 0) goto code_r0x000100e89d68;
    _free(lVar8);
    *(undefined1 *)((long)param_1 + 0xab03) = 0;
code_r0x000100e89d5c:
    bVar2 = *(byte *)((long)param_1 + 0xab04);
  }
joined_r0x000100e89a78:
  if ((bVar2 & 1) != 0) {
    FUN_100e23b84(param_1 + 0x85);
  }
  *(undefined1 *)((long)param_1 + 0xab04) = 0;
  if ((*(byte *)((long)param_1 + 0xab05) & 1) != 0) {
    lVar4 = *(long *)param_1[0x84];
    *(long *)param_1[0x84] = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2208656e6791b8a3E(param_1 + 0x84);
    }
  }
code_r0x000100e89da8:
  *(undefined1 *)((long)param_1 + 0xab05) = 0;
  *(undefined1 *)((long)param_1 + 0xab1c) = 0;
  if (param_1[0x81] != 0) {
    _free(param_1[0x82]);
  }
  FUN_100e76384(param_1 + 0x7e);
  if ((*(byte *)((long)param_1 + 0xab06) & 1) != 0) {
    FUN_100ca8e80(param_1 + 0x7d);
  }
  *(undefined1 *)((long)param_1 + 0xab06) = 0;
  if ((*(byte *)((long)param_1 + 0xab07) & 1) != 0) {
    lVar8 = param_1[0x7c];
    LOAcquire();
    lVar4 = *(long *)(lVar8 + 0x1f0);
    *(long *)(lVar8 + 0x1f0) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = *(long *)(lVar8 + 0x88);
      *(long *)(lVar8 + 0x88) = lVar4 + 1;
      lVar4 = func_0x000100fcb944(lVar8 + 0x80,lVar4);
      *(ulong *)(lVar4 + 0x710) = *(ulong *)(lVar4 + 0x710) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar8 + 0x110);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = *(long *)(lVar8 + 0x100);
        *(undefined8 *)(lVar8 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar8 + 0x108));
        }
      }
    }
    plVar6 = (long *)param_1[0x7c];
    lVar4 = *plVar6;
    *plVar6 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h2e07aa192be82696E(param_1 + 0x7c);
    }
  }
  *(undefined1 *)((long)param_1 + 0xab07) = 0;
  if ((*(byte *)(param_1 + 0x1561) & 1) != 0) {
    FUN_100cdcba0(param_1 + 0x7b);
  }
  *(undefined1 *)(param_1 + 0x1561) = 0;
  if ((*(byte *)((long)param_1 + 0xab09) & 1) != 0) {
    lVar8 = param_1[0x7a];
    LOAcquire();
    lVar4 = *(long *)(lVar8 + 0x1f0);
    *(long *)(lVar8 + 0x1f0) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = *(long *)(lVar8 + 0x88);
      *(long *)(lVar8 + 0x88) = lVar4 + 1;
      lVar4 = func_0x000100fcc058(lVar8 + 0x80,lVar4);
      *(ulong *)(lVar4 + 0x4210) = *(ulong *)(lVar4 + 0x4210) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar8 + 0x110);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = *(long *)(lVar8 + 0x100);
        *(undefined8 *)(lVar8 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar8 + 0x108));
        }
      }
    }
    plVar6 = (long *)param_1[0x7a];
    lVar4 = *plVar6;
    *plVar6 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h4e24a6b0dfe710d9E(param_1 + 0x7a);
    }
  }
  *(undefined1 *)((long)param_1 + 0xab09) = 0;
  if ((*(byte *)((long)param_1 + 0xab0a) & 1) != 0) {
    FUN_100cdff70(param_1 + 0x79);
  }
  *(undefined1 *)((long)param_1 + 0xab0a) = 0;
  if ((*(byte *)((long)param_1 + 0xab0b) & 1) != 0) {
    lVar8 = param_1[0x78];
    LOAcquire();
    lVar4 = *(long *)(lVar8 + 0x1f0);
    *(long *)(lVar8 + 0x1f0) = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      LOAcquire();
      lVar4 = *(long *)(lVar8 + 0x88);
      *(long *)(lVar8 + 0x88) = lVar4 + 1;
      lVar4 = func_0x000100fcb05c(lVar8 + 0x80,lVar4);
      *(ulong *)(lVar4 + 0x1610) = *(ulong *)(lVar4 + 0x1610) | 0x200000000;
      LORelease();
      puVar1 = (ulong *)(lVar8 + 0x110);
      LOAcquire();
      uVar5 = *puVar1;
      *puVar1 = uVar5 | 2;
      LORelease();
      if (uVar5 == 0) {
        lVar4 = *(long *)(lVar8 + 0x100);
        *(undefined8 *)(lVar8 + 0x100) = 0;
        *puVar1 = in_xzr;
        LORelease();
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar8 + 0x108));
        }
      }
    }
    plVar6 = (long *)param_1[0x78];
    lVar4 = *plVar6;
    *plVar6 = lVar4 + -1;
    LORelease();
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h5f0e02d478b254faE(param_1 + 0x78);
    }
  }
  *(undefined1 *)((long)param_1 + 0xab0b) = 0;
  lVar4 = param_1[0x6e];
  if (lVar4 != -0x7fffffffffffffff) {
    if (lVar4 == -0x8000000000000000) {
      if (((*(byte *)(param_1 + 0x6f) & 1) == 0) && (param_1[0x70] != 0)) {
        lVar4 = 0x18;
code_r0x000100e8a01c:
        _free(*(undefined8 *)((long)param_1 + lVar4 + 0x370));
      }
    }
    else {
      if (lVar4 != 0) {
        _free(param_1[0x6f]);
      }
      if ((param_1[0x71] != -0x8000000000000000) && (param_1[0x71] != 0)) {
        _free(param_1[0x72]);
      }
      if ((param_1[0x74] & 0x7fffffffffffffffU) != 0) {
        lVar4 = 0x38;
        goto code_r0x000100e8a01c;
      }
    }
  }
  if ((*(byte *)((long)param_1 + 0xab0c) & 1) != 0) {
    lVar4 = param_1[0x62] + 0x7ffffffffffffffa;
    if ((ulong)param_1[0x62] < 0x8000000000000006) {
      lVar4 = 6;
    }
    if (lVar4 == 6) {
      FUN_100e0fca4(param_1 + 0x62);
    }
    else if ((lVar4 == 4) && (param_1[99] != 0)) {
      _free(param_1[100]);
    }
  }
  *(undefined1 *)((long)param_1 + 0xab0c) = 0;
  if ((((*(byte *)((long)param_1 + 0xab0d) & 1) != 0) && ((short)param_1[0x5e] == 3)) &&
     (param_1[0x5f] != 0)) {
    _free(param_1[0x60]);
  }
  *(undefined1 *)((long)param_1 + 0xab0d) = 0;
  if ((*(byte *)((long)param_1 + 0xaafd) & 1) != 0) {
    FUN_100e01cdc(param_1 + 0x48);
  }
  *(undefined1 *)((long)param_1 + 0xaafd) = 0;
  lVar8 = param_1[0x46];
  lVar4 = param_1[0x47];
  if (lVar4 != 0) {
    puVar10 = (undefined8 *)(lVar8 + 8);
    do {
      if (puVar10[-1] != 0) {
        _free(*puVar10);
      }
      puVar10 = puVar10 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (param_1[0x45] != 0) {
    _free(lVar8);
  }
  if ((*(byte *)((long)param_1 + 0xab0e) & 1) != 0) {
    if ((param_1[0x3c] != -0x8000000000000000) && (param_1[0x3c] != 0)) {
      _free(param_1[0x3d]);
    }
    if ((param_1[0x3f] != -0x8000000000000000) && (param_1[0x3f] != 0)) {
      _free(param_1[0x40]);
    }
    if ((param_1[0x42] != -0x8000000000000000) && (param_1[0x42] != 0)) {
      _free(param_1[0x43]);
    }
  }
  *(undefined1 *)((long)param_1 + 0xab0e) = 0;
LAB_100e8a15c:
  return;
}

