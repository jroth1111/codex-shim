
void FUN_101c1631c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long unaff_x26;
  long *unaff_x28;
  long lVar10;
  long in_stack_00000000;
  long *in_stack_00000008;
  long in_stack_00000010;
  long *in_stack_00000018;
  long *in_stack_00000020;
  long in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined *in_stack_00000058;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined2 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_20;
  long lStack_18;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s____108ae59cb,param_3);
    uVar1 = in_stack_00000040;
    lVar10 = in_stack_00000038;
    if (unaff_x23 < in_stack_00000048) {
      if (in_stack_00000038 != 0) {
        _free(in_stack_00000040);
      }
    }
    else {
      iVar4 = _memcmp(in_stack_00000040,unaff_x22 + (unaff_x23 - in_stack_00000048));
      if (lVar10 != 0) {
        _free(uVar1);
      }
      if (iVar4 == 0) {
LAB_101c16368:
        if (unaff_x26 == 0) {
LAB_101c163e4:
          *in_stack_00000018 = -0x8000000000000000;
        }
        else {
          uVar1 = *(undefined8 *)(unaff_x26 + 8);
          lVar10 = *(long *)(unaff_x26 + 0x10);
          if (lVar10 == 0) {
            lVar5 = 1;
          }
          else {
            lVar5 = _malloc(lVar10);
            if (lVar5 == 0) {
              func_0x0001087c9084(1,lVar10);
              lStack_20 = lVar10;
              lStack_18 = unaff_x19;
              puVar6 = (undefined2 *)_malloc(3);
              if (puVar6 != (undefined2 *)0x0) {
                *(undefined1 *)(puVar6 + 1) = 0x2f;
                *puVar6 = 0x3276;
                lStack_80 = 3;
                uStack_70 = 3;
                puStack_48 = &DAT_1023201f4;
                puStack_78 = puVar6;
                puStack_50 = (undefined1 *)&lStack_80;
                __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                          (&uStack_68,s_AddCreditsNudgeCreditType_ts_108ae125a,&puStack_50);
                uStack_38 = uStack_60;
                uStack_40 = uStack_68;
                uStack_30 = uStack_58;
                if (lStack_80 != 0) {
                  _free(puStack_78);
                }
                extraout_x8[1] = uStack_38;
                *extraout_x8 = uStack_40;
                extraout_x8[2] = uStack_30;
                return;
              }
              uVar7 = func_0x0001087c9084(1,3);
              if (lStack_80 != 0) {
                _free(puStack_78);
              }
              __Unwind_Resume(uVar7);
              uStack_88 = 0x101c16508;
              lStack_b0 = unaff_x22;
              uStack_a8 = uVar1;
              lStack_a0 = lVar10;
              uStack_98 = uVar7;
              puStack_90 = &stack0xfffffffffffffff0;
              puVar8 = (undefined8 *)_malloc(9);
              if (puVar8 == (undefined8 *)0x0) {
                func_0x0001087c9084(1,9);
              }
              else {
                *(undefined1 *)(puVar8 + 1) = 0x22;
                *puVar8 = 0x7374696465726322;
                puVar9 = (undefined8 *)_malloc(0xd);
                if (puVar9 != (undefined8 *)0x0) {
                  *puVar9 = 0x6c5f656761737522;
                  *(undefined8 *)((long)puVar9 + 5) = 0x2274696d696c5f65;
                  uStack_f8 = 9;
                  uStack_e0 = 0xd;
                  uStack_e8 = 9;
                  uStack_d0 = 0xd;
                  puStack_f0 = puVar8;
                  puStack_d8 = puVar9;
                  FUN_1021676b8(&uStack_c8,&uStack_f8,2,&UNK_108cf9ded,3);
                  extraout_x8_00[1] = uStack_c0;
                  *extraout_x8_00 = uStack_c8;
                  extraout_x8_00[2] = uStack_b8;
                  _free(puVar8);
                  _free(puVar9);
                  return;
                }
              }
              func_0x0001087c9084(1,0xd);
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101c165f8);
              (*pcVar3)();
            }
          }
          _memcpy(lVar5,uVar1,lVar10);
          *in_stack_00000018 = lVar10;
          in_stack_00000018[1] = lVar5;
          in_stack_00000018[2] = lVar10;
        }
        return;
      }
    }
    unaff_x21 = unaff_x21 - 1 & unaff_x21;
    unaff_x19 = unaff_x19 + -1;
    lVar10 = in_stack_00000010;
    if (unaff_x19 == 0) {
      do {
        in_stack_00000010 = lVar10;
        if (in_stack_00000010 == in_stack_00000000) goto LAB_101c163e4;
        lVar10 = in_stack_00000010 + 0x68;
        *in_stack_00000008 = lVar10;
        unaff_x19 = in_stack_00000020[3];
      } while (unaff_x19 == 0);
      unaff_x28 = (long *)*in_stack_00000020;
      lVar5 = *unaff_x28;
      unaff_x21 = CONCAT17(-(-1 < lVar5),
                           CONCAT16(-(-1 < (char)((ulong)lVar5 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar5 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar5 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar5 >> 0x18)),
                                                               CONCAT12(-(-1 < (char)((ulong)lVar5
                                                                                     >> 0x10)),
                                                                        CONCAT11(-(-1 < (char)((
                                                  ulong)lVar5 >> 8)),-(-1 < (char)lVar5)))))))) &
                  0x8080808080808080;
      unaff_x20 = unaff_x28 + 1;
      unaff_x22 = *(long *)(in_stack_00000010 + 8);
      unaff_x23 = *(ulong *)(in_stack_00000010 + 0x10);
      unaff_x26 = in_stack_00000010;
    }
    while (in_stack_00000010 = lVar10, unaff_x21 == 0) {
      lVar10 = *unaff_x20;
      unaff_x28 = unaff_x28 + -0x18;
      unaff_x21 = CONCAT17(-(-1 < lVar10),
                           CONCAT16(-(-1 < (char)((ulong)lVar10 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar10 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar10 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar10 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar10
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar10 >> 8)),-(-1 < (char)lVar10)))))))) &
                  0x8080808080808080;
      unaff_x20 = unaff_x20 + 1;
      lVar10 = in_stack_00000010;
    }
    uVar2 = (unaff_x21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x21 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    iVar4 = (int)((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3);
    in_stack_00000028 = unaff_x28[(long)-iVar4 * 3 + -2];
    in_stack_00000030 = unaff_x28[(long)-iVar4 * 3 + -1];
    if ((unaff_x23 == in_stack_00000030) &&
       (iVar4 = _memcmp(unaff_x22,in_stack_00000028,unaff_x23), iVar4 == 0)) goto LAB_101c16368;
    in_stack_00000050 = &stack0x00000028;
    in_stack_00000058 = &DAT_102024cac;
    param_1 = &stack0x00000038;
    param_3 = &stack0x00000050;
  } while( true );
}

