
void FUN_100e49d48(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  long *plVar8;
  
  if (*param_1 == 9) {
    FUN_100ce249c(param_1 + 1);
    lVar4 = param_1[4];
    puVar3 = (undefined8 *)param_1[5];
    pcVar6 = (code *)*puVar3;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(lVar4);
    }
    if (puVar3[1] != 0) {
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(lVar4);
      return;
    }
  }
  else {
    FUN_100e2fa20(param_1);
    if (param_1[0x28] != 0) {
      plVar1 = param_1 + 0x28;
      plVar8 = (long *)param_1[0x2a];
      if (plVar8 != (long *)0x0) {
        uVar2 = plVar8[6];
        do {
          uVar7 = uVar2;
          if (((uint)uVar7 >> 2 & 1) != 0) goto LAB_100e09dc4;
          uVar2 = plVar8[6];
        } while (uVar2 != uVar7);
        plVar8[6] = uVar7 | 2;
LAB_100e09dc4:
        if ((uVar7 & 5) == 1) {
          (**(code **)(plVar8[4] + 0x10))(plVar8[5]);
        }
        lVar4 = *plVar8;
        *plVar8 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17he2c2884f02320114E(param_1 + 0x2a);
        }
      }
      plVar8 = (long *)param_1[0x2b];
      if (plVar8 != (long *)0x0) {
        lVar4 = *plVar8;
        *plVar8 = lVar4 + -1;
        LORelease();
        if (lVar4 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h8637da121dc559e8E();
        }
      }
      __ZN63__LT_h2__share__RecvStream_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3385e806ba686c92E
                ();
      __ZN86__LT_h2__proto__streams__streams__OpaqueStreamRef_u20_as_u20_core__ops__drop__Drop_GT_4drop17h0d2bf830884bd95eE
                (plVar1);
      lVar4 = *(long *)*plVar1;
      *(long *)*plVar1 = lVar4 + -1;
      LORelease();
      if (lVar4 != 1) {
        return;
      }
      DataMemoryBarrier(2,1);
      lVar4 = *plVar1;
      FUN_1057147f4(lVar4 + 0x10);
      if (lVar4 != -1) {
        lVar5 = *(long *)(lVar4 + 8);
        *(long *)(lVar4 + 8) = lVar5 + -1;
        LORelease();
        if (lVar5 == 1) {
          DataMemoryBarrier(2,1);
          goto _free;
        }
      }
      return;
    }
  }
  return;
}

