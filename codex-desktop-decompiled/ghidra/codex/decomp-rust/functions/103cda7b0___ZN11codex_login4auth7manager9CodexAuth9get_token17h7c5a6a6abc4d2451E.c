
undefined8 *
__ZN11codex_login4auth7manager9CodexAuth9get_token17h7c5a6a6abc4d2451E
          (ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x20;
  ulong unaff_x21;
  undefined1 auVar9 [16];
  undefined1 auStack_1c8 [16];
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_100;
  undefined8 uStack_f8;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  undefined8 uStack_c8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  ulong uStack_80;
  undefined8 uStack_78;
  
  uVar8 = *param_2 ^ 0x8000000000000000;
  if (-1 < (long)*param_2) {
    uVar8 = 3;
  }
  if (uVar8 - 1 < 2) {
    puVar3 = (undefined8 *)
             __ZN11codex_login4auth7manager9CodexAuth14get_token_data17h095fbfd8845cb054E
                       (&lStack_130);
    if (lStack_130 != -0x8000000000000000) {
      if ((uStack_118 & 0x7fffffffffffffff) != 0) {
        puVar3 = (undefined8 *)_free(uStack_110);
      }
      if ((-0x7fffffffffffffff < lStack_d0) && (lStack_d0 != 0)) {
        puVar3 = (undefined8 *)_free(uStack_c8);
      }
      if ((uStack_100 & 0x7fffffffffffffff) != 0) {
        puVar3 = (undefined8 *)_free(uStack_f8);
      }
      if ((uStack_e8 & 0x7fffffffffffffff) != 0) {
        puVar3 = (undefined8 *)_free(uStack_e0);
      }
      if (lStack_130 != 0) {
        puVar3 = (undefined8 *)_free(uStack_128);
      }
      if (lStack_98 != 0) {
        puVar3 = (undefined8 *)_free(uStack_90);
      }
      if ((uStack_80 & 0x7fffffffffffffff) != 0) {
        puVar3 = (undefined8 *)_free(uStack_78);
      }
      *param_1 = uStack_b0;
      param_1[1] = uStack_a8;
      param_1[2] = uStack_a0;
      return puVar3;
    }
    *param_1 = 0x8000000000000000;
    param_1[1] = uStack_128;
    return puVar3;
  }
  if (uVar8 == 0) {
    unaff_x21 = param_2[2];
    unaff_x20 = param_2[3];
    if (unaff_x20 == 0) {
      uVar8 = 1;
LAB_103cda680:
      puVar3 = (undefined8 *)_memcpy(uVar8,unaff_x21,unaff_x20);
      *param_1 = unaff_x20;
      param_1[1] = uVar8;
      param_1[2] = unaff_x20;
      return puVar3;
    }
    uVar8 = _malloc(unaff_x20);
    if (uVar8 != 0) goto LAB_103cda680;
  }
  else {
    puVar3 = (undefined8 *)_malloc(0x32);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined2 *)(puVar3 + 6) = 0x6e65;
      puVar3[1] = 0x6120797469746e65;
      *puVar3 = 0x646920746e656761;
      puVar3[3] = 0x70786520746f6e20;
      puVar3[2] = 0x73656f6420687475;
      puVar3[5] = 0x6b6f742072657261;
      puVar3[4] = 0x656220612065736f;
      puVar4 = (undefined8 *)_malloc(0x18);
      if (puVar4 == (undefined8 *)0x0) {
        func_0x0001087c906c(8,0x18);
      }
      else {
        *puVar4 = 0x32;
        puVar4[1] = puVar3;
        puVar4[2] = 0x32;
        puVar3 = (undefined8 *)_malloc(0x18);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = puVar4;
          puVar3[1] = &UNK_10b2f3aa0;
          *(undefined1 *)(puVar3 + 2) = 0x28;
          *param_1 = 0x8000000000000000;
          param_1[1] = (long)puVar3 + 1;
          return puVar3;
        }
        func_0x0001087c906c(8,0x18);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103cda768);
      (*pcVar1)();
    }
    func_0x0001087c9084(1,0x32);
  }
  uVar5 = func_0x0001087c9084(1,unaff_x20);
  FUN_10603e354(unaff_x21,&UNK_10b2f3aa0);
  auVar9 = __Unwind_Resume(uVar5);
  lVar2 = auVar9._8_8_;
  if (lVar2 != 0) {
    lVar6 = _malloc(lVar2);
    if (lVar6 != 0) goto LAB_103cda7fc;
    func_0x0001087c9084(1,lVar2);
  }
  lVar6 = 1;
LAB_103cda7fc:
  _memcpy(lVar6,auVar9._0_8_,lVar2);
  lStack_1b8 = lVar2;
  lStack_1b0 = lVar6;
  lStack_1a8 = lVar2;
  auStack_1c8 = __ZN11codex_login4auth7storage19create_auth_storage17hd564faa02d4d1f30E
                          (&lStack_1b8,param_5);
  plVar7 = auStack_1c8._0_8_;
  puVar3 = (undefined8 *)
           (**(code **)(auStack_1c8._8_8_ + 0x28))
                     ((long)plVar7 +
                      (*(long *)(auStack_1c8._8_8_ + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,param_4
                     );
  lVar2 = *plVar7;
  *plVar7 = lVar2 + -1;
  LORelease();
  if (lVar2 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000103d03378(auStack_1c8);
  }
  return puVar3;
}

