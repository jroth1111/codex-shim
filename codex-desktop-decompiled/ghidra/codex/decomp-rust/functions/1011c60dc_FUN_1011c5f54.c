
undefined8 * FUN_1011c5f54(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined1 uVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auVar12 [16];
  undefined8 uStack_118;
  long lStack_110;
  undefined1 *puStack_108;
  undefined1 uStack_f9;
  undefined8 *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  bVar1 = *(byte *)(param_2 + 7);
  uVar9 = param_3;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uStack_48 = param_2[1];
      uStack_50 = *param_2;
      uStack_40 = param_2[2];
      auVar12 = (**(code **)(param_2[4] + 0x20))
                          (param_2[3] + (*(long *)(param_2[4] + 0x10) - 1U & 0xfffffffffffffff0) +
                           0x10,&uStack_50);
      *(undefined1 (*) [16])(param_2 + 5) = auVar12;
LAB_1011c5fcc:
      puVar4 = (undefined8 *)(**(code **)(auVar12._8_8_ + 0x18))(param_1,auVar12._0_8_,param_3);
      if (*param_1 == -0x7fffffffffffffff) {
        uVar11 = 3;
      }
      else {
        uVar9 = param_2[5];
        puVar4 = (undefined8 *)param_2[6];
        UNRECOVERED_JUMPTABLE = (code *)*puVar4;
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          (*UNRECOVERED_JUMPTABLE)(uVar9);
        }
        if (puVar4[1] != 0) {
          _free(uVar9);
        }
        puVar4 = param_2 + 3;
        lVar2 = *(long *)*puVar4;
        *(long *)*puVar4 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          puVar4 = (undefined8 *)func_0x000105a519b4();
        }
        uVar11 = 1;
      }
      *(undefined1 *)(param_2 + 7) = uVar11;
      return puVar4;
    }
    func_0x000108a07af4(&UNK_10b24a830);
  }
  else if (bVar1 == 3) {
    auVar12 = *(undefined1 (*) [16])(param_2 + 5);
    goto LAB_1011c5fcc;
  }
  func_0x000108a07b10(&UNK_10b24a830);
  *(undefined1 *)(param_2 + 7) = 2;
  uVar5 = __Unwind_Resume();
  if (param_1[1] != 0) {
    _free(param_3);
  }
  lVar2 = *(long *)param_2[3];
  *(long *)param_2[3] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105a519b4();
  }
  *(undefined1 *)(param_2 + 7) = 2;
  __Unwind_Resume(uVar5);
  auVar12 = func_0x000108a07bc4();
  puVar4 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  bVar1 = *(byte *)(puVar4 + 7);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uStack_98 = puVar4[1];
      uStack_a0 = *puVar4;
      uStack_90 = puVar4[2];
      auVar12 = (**(code **)(puVar4[4] + 0x28))
                          (puVar4[3] + (*(long *)(puVar4[4] + 0x10) - 1U & 0xfffffffffffffff0) +
                           0x10,&uStack_a0);
      *(undefined1 (*) [16])(puVar4 + 5) = auVar12;
LAB_1011c6154:
      puVar7 = (undefined8 *)(**(code **)(auVar12._8_8_ + 0x18))(plVar6,auVar12._0_8_,uVar9);
      if (*plVar6 == -0x7fffffffffffffff) {
        uVar11 = 3;
      }
      else {
        uVar9 = puVar4[5];
        puVar7 = (undefined8 *)puVar4[6];
        UNRECOVERED_JUMPTABLE = (code *)*puVar7;
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          (*UNRECOVERED_JUMPTABLE)(uVar9);
        }
        if (puVar7[1] != 0) {
          _free(uVar9);
        }
        puVar7 = puVar4 + 3;
        lVar2 = *(long *)*puVar7;
        *(long *)*puVar7 = lVar2 + -1;
        LORelease();
        if (lVar2 == 1) {
          DataMemoryBarrier(2,1);
          puVar7 = (undefined8 *)func_0x000105a519b4();
        }
        uVar11 = 1;
      }
      *(undefined1 *)(puVar4 + 7) = uVar11;
      return puVar7;
    }
    func_0x000108a07af4(&UNK_10b24a848);
  }
  else if (bVar1 == 3) {
    auVar12 = *(undefined1 (*) [16])(puVar4 + 5);
    goto LAB_1011c6154;
  }
  func_0x000108a07b10(&UNK_10b24a848);
  *(undefined1 *)(puVar4 + 7) = 2;
  uVar5 = __Unwind_Resume();
  if (plVar6[1] != 0) {
    _free(uVar9);
  }
  lVar2 = *(long *)puVar4[3];
  *(long *)puVar4[3] = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105a519b4();
  }
  *(undefined1 *)(puVar4 + 7) = 2;
  __Unwind_Resume(uVar5);
  auVar12 = func_0x000108a07bc4();
  puVar4 = auVar12._8_8_;
  plVar6 = auVar12._0_8_;
  lVar2 = *plVar6;
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      uVar9 = *puVar4;
      UNRECOVERED_JUMPTABLE = *(code **)(puVar4[1] + 0x18);
      puVar10 = &UNK_108c78aa0;
      uVar5 = 4;
      goto LAB_1011c6334;
    }
    uVar9 = *puVar4;
    lVar2 = puVar4[1];
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
    uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar9,&UNK_108c78a60,8);
    if ((uVar8 & 1) != 0) {
      return (undefined8 *)0x1;
    }
    if (*(char *)((long)puVar4 + 0x12) < '\0') {
      uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar9,&UNK_108f5892f,2);
      uStack_118 = uVar9;
      lStack_110 = lVar2;
      goto joined_r0x0001011c6400;
    }
    uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar9,&UNK_108f5892e,1);
  }
  else {
    if (lVar2 != 2) {
      if (lVar2 == 3) {
        uVar9 = *puVar4;
        UNRECOVERED_JUMPTABLE = *(code **)(puVar4[1] + 0x18);
        puVar10 = &UNK_108ccc2d8;
        uVar5 = 9;
      }
      else {
        uVar9 = *puVar4;
        UNRECOVERED_JUMPTABLE = *(code **)(puVar4[1] + 0x18);
        puVar10 = &UNK_108cca4b0;
        uVar5 = 6;
      }
LAB_1011c6334:
                    /* WARNING: Could not recover jumptable at 0x0001011c6348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar4 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(uVar9,puVar10,uVar5);
      return puVar4;
    }
    uVar9 = *puVar4;
    lVar2 = puVar4[1];
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
    uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar9,&UNK_108c78aa4,4);
    if ((uVar8 & 1) != 0) {
      return (undefined8 *)0x1;
    }
    if (*(char *)((long)puVar4 + 0x12) < '\0') {
      uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar9,&UNK_108f5892f,2);
      uStack_118 = uVar9;
      lStack_110 = lVar2;
joined_r0x0001011c6400:
      if ((uVar8 & 1) != 0) {
        return (undefined8 *)0x1;
      }
      uStack_f9 = 1;
      puStack_108 = &uStack_f9;
      uStack_e8 = puVar4[2];
      puStack_f8 = &uStack_118;
      puStack_f0 = &UNK_10b392408;
      iVar3 = __ZN79__LT_rama_http_core__proto__h1__decode__Decoder_u20_as_u20_core__fmt__Debug_GT_3fmt17hd1a2820307836d37E
                        (plVar6 + 1,&puStack_f8);
      if (iVar3 != 0) {
        return (undefined8 *)0x1;
      }
      uVar8 = (**(code **)(puStack_f0 + 0x18))(puStack_f8,&UNK_108f5892c,2);
      goto joined_r0x0001011c6454;
    }
    uVar8 = (*UNRECOVERED_JUMPTABLE)(uVar9,&UNK_108f5892e,1);
  }
  if ((uVar8 & 1) != 0) {
    return (undefined8 *)0x1;
  }
  uVar8 = __ZN79__LT_rama_http_core__proto__h1__decode__Decoder_u20_as_u20_core__fmt__Debug_GT_3fmt17hd1a2820307836d37E
                    (plVar6 + 1,puVar4);
joined_r0x0001011c6454:
  if ((uVar8 & 1) != 0) {
    return (undefined8 *)0x1;
  }
  puVar4 = (undefined8 *)(**(code **)(puVar4[1] + 0x18))(*puVar4,&UNK_108f58934,1);
  return puVar4;
}

