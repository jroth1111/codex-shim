
void FUN_103d5ad4c(short *param_1,long param_2,undefined8 param_3)

{
  ulong *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  long lVar10;
  ulong in_xzr;
  undefined8 auStack_ad0 [105];
  undefined1 auStack_788 [840];
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_40a;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined6 uStack_3d8;
  undefined2 uStack_3d2;
  undefined6 uStack_3d0;
  undefined8 uStack_3ca;
  short sStack_3c0;
  undefined6 uStack_3be;
  undefined2 uStack_3b8;
  undefined6 uStack_3b6;
  undefined2 uStack_3b0;
  undefined6 uStack_3ae;
  undefined2 uStack_3a8;
  undefined8 uStack_3a6;
  undefined8 uStack_39e;
  undefined8 uStack_388;
  
  puVar6 = auStack_ad0;
  auStack_ad0[0] = 0;
  bVar3 = *(byte *)(param_2 + 0x360);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        func_0x000108a07af4(&UNK_10b2f97b8);
      }
      func_0x000108a07b10();
LAB_103d5b290:
      func_0x000108a07af4(&UNK_10b2fba38);
LAB_103d5b2f4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103d5b2f8);
      (*pcVar2)();
    }
    *(undefined1 *)(param_2 + 0x361) = 1;
    plVar9 = (long *)(param_2 + 0x350);
    _memcpy(param_2 + 0x368,param_2,0x350);
    *(long **)(param_2 + 0x6b8) = plVar9;
    *(undefined1 *)(param_2 + 0xa90) = 0;
LAB_103d5ade4:
    *(undefined1 *)(param_2 + 0xa91) = 1;
    _memcpy(param_2 + 0x6c0,param_2 + 0x368,0x350);
    *(long **)(param_2 + 0xa10) = plVar9;
    *(undefined1 *)(param_2 + 0xa88) = 0;
LAB_103d5ae0c:
    *(long **)(param_2 + 0xa18) = plVar9;
    *(long **)(param_2 + 0xa20) = plVar9;
    uVar5 = 1;
    *(undefined8 *)(param_2 + 0xa28) = 1;
    *(undefined1 *)(param_2 + 0xa40) = 0;
LAB_103d5ae28:
    *(long **)(param_2 + 0xa30) = plVar9;
    *(ulong *)(param_2 + 0xa38) = uVar5;
    lVar7 = *plVar9;
    if (*(ulong *)(lVar7 + 0x1e8) < uVar5) {
LAB_103d5ae40:
      *(undefined1 *)(param_2 + 0xa40) = 1;
LAB_103d5af38:
      *(undefined1 *)(param_2 + 0xa88) = 1;
      lVar7 = *(long *)(param_2 + 0x6c0);
      *(undefined1 *)(param_2 + 0xa91) = 0;
      _memcpy(auStack_ad0,param_2 + 0x6c8,0x348);
      *(undefined1 *)(param_2 + 0xa90) = 1;
      if (lVar7 != 0x18) {
LAB_103d5b008:
        _memcpy(auStack_788,auStack_ad0,0x348);
        func_0x000103da1c94(param_2 + 0x368);
        if (lVar7 == 0x17) {
          *(undefined1 *)(param_2 + 0x361) = 0;
          *(undefined8 *)(param_2 + 0x368) = *(undefined8 *)(param_2 + 0x358);
          goto LAB_103d5b038;
        }
        sStack_3c0 = (short)lVar7;
        uStack_3be = (undefined6)((ulong)lVar7 >> 0x10);
        _memcpy(&uStack_3b8,auStack_788,0x348);
        FUN_103d9ceb4(&sStack_3c0);
        sVar8 = 0x1b;
        plVar9 = *(long **)(param_2 + 0x350);
        LOAcquire();
        lVar7 = plVar9[0x3e];
        plVar9[0x3e] = lVar7 + -1;
        LORelease();
        goto joined_r0x000103d5b158;
      }
    }
    else {
LAB_103d5aeb0:
      uStack_3b8 = 0;
      uStack_3b6 = 0;
      uStack_3b0 = 0;
      uStack_3ae = 0;
      *(long *)(param_2 + 0xa48) = lVar7 + 0x1c0;
      *(undefined8 *)(param_2 + 0xa50) = 0;
      *(undefined8 *)(param_2 + 0xa68) = 0;
      *(undefined8 *)(param_2 + 0xa60) = 0;
      *(ulong *)(param_2 + 0xa58) = CONCAT62(uStack_3be,sStack_3c0);
      *(ulong *)(param_2 + 0xa70) = uVar5;
      *(ulong *)(param_2 + 0xa78) = uVar5;
      *(undefined1 *)(param_2 + 0xa80) = 0;
LAB_103d5aee0:
      bVar3 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                        (param_2 + 0xa48,param_3);
      if (bVar3 != 2) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_2 + 0xa48);
        if (*(long *)(param_2 + 0xa50) != 0) {
          (**(code **)(*(long *)(param_2 + 0xa50) + 0x18))(*(undefined8 *)(param_2 + 0xa58));
        }
        *(undefined1 *)(param_2 + 0xa40) = 1;
        if ((bVar3 & 1) != 0) goto LAB_103d5af38;
        plVar9 = *(long **)(param_2 + 0xa18);
        *(undefined1 *)(param_2 + 0xa88) = 1;
        *(undefined1 *)(param_2 + 0xa91) = 0;
        _memcpy(&sStack_3c0,param_2 + 0x6c0,0x350);
        lVar10 = *plVar9;
        LOAcquire();
        uVar5 = *(ulong *)(lVar10 + 0x88);
        *(ulong *)(lVar10 + 0x88) = uVar5 + 1;
        lVar7 = func_0x000103e334e8(lVar10 + 0x80,uVar5);
        _memcpy(lVar7 + (uVar5 & 0x1f) * 0x350,&sStack_3c0,0x350);
        *(ulong *)(lVar7 + 0x6a10) = *(ulong *)(lVar7 + 0x6a10) | 1L << (uVar5 & 0x1f);
        LORelease();
        puVar1 = (ulong *)(lVar10 + 0x110);
        LOAcquire();
        uVar5 = *puVar1;
        *puVar1 = uVar5 | 2;
        LORelease();
        if (uVar5 == 0) {
          lVar7 = *(long *)(lVar10 + 0x100);
          *(undefined8 *)(lVar10 + 0x100) = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar10 + 0x108));
          }
        }
        *(undefined2 *)(param_2 + 0xa90) = 1;
        lVar7 = 0x17;
        goto LAB_103d5b008;
      }
      *(undefined1 *)(param_2 + 0xa40) = 4;
      *(undefined1 *)(param_2 + 0xa88) = 3;
      *(undefined1 *)(param_2 + 0xa90) = 3;
    }
    *param_1 = 0x20;
    uVar4 = 3;
  }
  else {
    if (bVar3 == 3) {
      bVar3 = *(byte *)(param_2 + 0xa90);
      if (bVar3 < 2) {
        if (bVar3 != 0) goto LAB_103d5b290;
        plVar9 = *(long **)(param_2 + 0x6b8);
        goto LAB_103d5ade4;
      }
      if (bVar3 != 3) {
        func_0x000108a07b10(&UNK_10b2fba38);
        goto LAB_103d5b2f4;
      }
      bVar3 = *(byte *)(param_2 + 0xa88);
      if (bVar3 < 2) {
        if (bVar3 != 0) {
          func_0x000108a07af4(&UNK_10b2fba50);
          goto LAB_103d5b2f4;
        }
        plVar9 = *(long **)(param_2 + 0xa10);
        goto LAB_103d5ae0c;
      }
      if (bVar3 != 3) {
        func_0x000108a07b10(&UNK_10b2fba50);
        goto LAB_103d5b2f4;
      }
      bVar3 = *(byte *)(param_2 + 0xa40);
      if (bVar3 < 3) {
        if (bVar3 != 0) {
          if (bVar3 == 1) {
            func_0x000108a07af4(&UNK_10b2fba20);
          }
          else {
            func_0x000108a07b10(&UNK_10b2fba20);
          }
          goto LAB_103d5b2f4;
        }
        plVar9 = *(long **)(param_2 + 0xa20);
        uVar5 = *(ulong *)(param_2 + 0xa28);
        goto LAB_103d5ae28;
      }
      if (bVar3 != 3) goto LAB_103d5aee0;
      uVar5 = *(ulong *)(param_2 + 0xa38);
      lVar7 = **(long **)(param_2 + 0xa30);
      if (uVar5 <= *(ulong *)(lVar7 + 0x1e8)) goto LAB_103d5aeb0;
      goto LAB_103d5ae40;
    }
LAB_103d5b038:
    func_0x000103ea86a4(&sStack_3c0,param_2 + 0x368,param_3);
    sVar8 = sStack_3c0;
    if (sStack_3c0 == 0x21) {
      *param_1 = 0x20;
      uVar4 = 4;
      goto LAB_103d5b244;
    }
    uStack_438 = CONCAT26(uStack_3b0,uStack_3b6);
    uStack_440 = CONCAT26(uStack_3b8,uStack_3be);
    uStack_430 = CONCAT26(uStack_3a8,uStack_3ae);
    uStack_428 = uStack_3a6;
    uStack_420 = uStack_39e;
    uStack_40a = uStack_388;
    func_0x000103d9df1c(param_2 + 0x368);
    if (sVar8 == 0x20) {
      sVar8 = 0x1b;
LAB_103d5b170:
      uStack_3f8 = puVar6[1];
      uStack_400 = *puVar6;
      uStack_3e8 = puVar6[3];
      uStack_3f0 = puVar6[2];
      uStack_3e0 = puVar6[4];
      uStack_3d8 = (undefined6)puVar6[5];
      uStack_3ca = *(undefined8 *)((long)puVar6 + 0x36);
      uStack_3d2 = (undefined2)*(undefined8 *)((long)puVar6 + 0x2e);
      uStack_3d0 = (undefined6)((ulong)*(undefined8 *)((long)puVar6 + 0x2e) >> 0x10);
      plVar9 = *(long **)(param_2 + 0x350);
      LOAcquire();
      lVar7 = plVar9[0x3e];
      plVar9[0x3e] = lVar7 + -1;
      LORelease();
joined_r0x000103d5b158:
      if (lVar7 == 1) {
        LOAcquire();
        lVar7 = plVar9[0x11];
        plVar9[0x11] = lVar7 + 1;
        lVar7 = func_0x000103e334e8(plVar9 + 0x10,lVar7);
        *(ulong *)(lVar7 + 0x6a10) = *(ulong *)(lVar7 + 0x6a10) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(plVar9 + 0x22);
        LOAcquire();
        uVar5 = *puVar1;
        *puVar1 = uVar5 | 2;
        LORelease();
        if (uVar5 == 0) {
          lVar7 = plVar9[0x20];
          plVar9[0x20] = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 8))(plVar9[0x21]);
          }
        }
      }
      lVar7 = *plVar9;
      *plVar9 = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf2891ba2e980c99bE(param_2 + 0x350);
      }
      if (*(char *)(param_2 + 0x361) == '\x01') {
        func_0x000103d9df1c(param_2 + 0x358);
      }
    }
    else {
      if (sVar8 != 0x1f) {
        puVar6 = &uStack_440;
        goto LAB_103d5b170;
      }
      plVar9 = *(long **)(param_2 + 0x350);
      LOAcquire();
      lVar7 = plVar9[0x3e];
      plVar9[0x3e] = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        LOAcquire();
        lVar7 = plVar9[0x11];
        plVar9[0x11] = lVar7 + 1;
        lVar7 = func_0x000103e334e8(plVar9 + 0x10,lVar7);
        *(ulong *)(lVar7 + 0x6a10) = *(ulong *)(lVar7 + 0x6a10) | 0x200000000;
        LORelease();
        puVar1 = (ulong *)(plVar9 + 0x22);
        LOAcquire();
        uVar5 = *puVar1;
        *puVar1 = uVar5 | 2;
        LORelease();
        if (uVar5 == 0) {
          lVar7 = plVar9[0x20];
          plVar9[0x20] = 0;
          *puVar1 = in_xzr;
          LORelease();
          if (lVar7 != 0) {
            (**(code **)(lVar7 + 8))(plVar9[0x21]);
          }
        }
      }
      lVar7 = *plVar9;
      *plVar9 = lVar7 + -1;
      LORelease();
      if (lVar7 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf2891ba2e980c99bE(param_2 + 0x350);
      }
      sVar8 = 0x1f;
    }
    *param_1 = sVar8;
    *(undefined8 *)(param_1 + 5) = uStack_3f8;
    *(undefined8 *)(param_1 + 1) = uStack_400;
    *(undefined8 *)(param_1 + 0xd) = uStack_3e8;
    *(undefined8 *)(param_1 + 9) = uStack_3f0;
    *(ulong *)(param_1 + 0x15) = CONCAT26(uStack_3d2,uStack_3d8);
    *(undefined8 *)(param_1 + 0x11) = uStack_3e0;
    *(undefined8 *)(param_1 + 0x1c) = uStack_3ca;
    *(ulong *)(param_1 + 0x18) = CONCAT62(uStack_3d0,uStack_3d2);
    uVar4 = 1;
  }
LAB_103d5b244:
  *(undefined1 *)(param_2 + 0x360) = uVar4;
  return;
}

