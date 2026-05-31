
undefined1  [16]
FUN_100710f90(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong in_xzr;
  undefined1 auVar10 [16];
  long *plStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plVar4 = (long *)*param_1;
  lVar5 = *plVar4;
  lVar9 = *param_2;
  if (lVar9 == 0) {
    FUN_107c05cac(&UNK_108cd5ee8,0x21,&UNK_10b24da48);
LAB_1007111e0:
    FUN_107c05cac(&UNK_108c56c98,0x21,&UNK_10b1d5120);
LAB_1007111f8:
    FUN_107c05cac(&UNK_108c56c98,0x21,&UNK_10b1d5138);
  }
  else {
    uVar8 = param_2[1] & 7;
    uVar7 = uVar8;
    if (*(long *)(lVar9 + uVar8 * 8) == 3) {
LAB_100711050:
      plVar3 = (long *)(lVar9 + uVar7 * 8);
      LOAcquire();
      *plVar3 = lVar5;
      LORelease();
      param_2[1] = uVar7 + 1;
      if (lVar5 == *plVar4) {
        plStack_38 = (long *)(*plVar4 + -0x10);
        goto LAB_1007111b4;
      }
      if (*plVar3 != lVar5) {
        plVar3 = (long *)0x0;
        plStack_38 = (long *)(lVar5 + -0x10);
        goto LAB_1007111b4;
      }
      *plVar3 = 3;
      lVar9 = *param_2;
      if (lVar9 == 0) goto LAB_1007111e0;
    }
    else {
      iVar6 = (int)param_2[1];
      uVar7 = (ulong)(iVar6 + 1) & 7;
      if ((((*(long *)(lVar9 + uVar7 * 8) == 3) ||
           (uVar7 = (ulong)(iVar6 + 2) & 7, *(long *)(lVar9 + uVar7 * 8) == 3)) ||
          (uVar7 = (ulong)(iVar6 + 3) & 7, *(long *)(lVar9 + uVar7 * 8) == 3)) ||
         (((uVar7 = uVar8 ^ 4, *(long *)(lVar9 + uVar7 * 8) == 3 ||
           (uVar7 = (ulong)(iVar6 + 5) & 7, *(long *)(lVar9 + uVar7 * 8) == 3)) ||
          ((uVar7 = (ulong)(iVar6 + 6) & 7, *(long *)(lVar9 + uVar7 * 8) == 3 ||
           (uVar7 = (ulong)(iVar6 - 1) & 7, *(long *)(lVar9 + uVar7 * 8) == 3))))))
      goto LAB_100711050;
    }
    uVar7 = param_2[2] + 4;
    param_2[2] = uVar7;
    *(long **)(lVar9 + 0x50) = plVar4;
    LOAcquire();
    *(ulong *)(lVar9 + 0x40) = uVar7 | 2;
    LORelease();
    if (uVar7 != 0) {
LAB_1007110d8:
      lVar5 = *plVar4;
      lVar9 = *param_2;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 0x48);
        LOAcquire();
        *plVar4 = lVar5;
        LORelease();
        LOAcquire();
        uVar8 = *(ulong *)(lVar9 + 0x40);
        *(ulong *)(lVar9 + 0x40) = in_xzr;
        LORelease();
        if (uVar8 != (uVar7 | 2)) {
          plVar3 = (long *)(uVar8 & 0xfffffffffffffffc);
          lVar2 = *plVar3;
          *(long **)(lVar9 + 0x60) = plVar3;
          if (*plVar4 == lVar5) {
            *plVar4 = 3;
          }
          else {
            plStack_38 = (long *)(lVar5 + -0x10);
            lVar5 = *plStack_38;
            *plStack_38 = lVar5 + -1;
            LORelease();
            if (lVar5 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&plStack_38);
            }
          }
          plVar3 = (long *)0x0;
          plStack_38 = (long *)(lVar2 + -0x10);
LAB_1007111b4:
          auVar10._8_8_ = plVar3;
          auVar10._0_8_ = plStack_38;
          return auVar10;
        }
        plStack_38 = (long *)(lVar5 + -0x10);
        uStack_30 = 0;
        lVar2 = *plStack_38;
        *plStack_38 = lVar2 + 1;
        if (-1 < lVar2) {
          if (*(long *)(lVar9 + 0x48) == lVar5) {
            *(long *)(lVar9 + 0x48) = 3;
          }
          else {
            lVar5 = *plStack_38;
            *plStack_38 = lVar5 + -1;
            LORelease();
            if (lVar5 == 1) {
              DataMemoryBarrier(2,1);
              plStack_28 = plStack_38;
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h32a9232bca572953E(&plStack_28);
            }
          }
          plVar3 = (long *)0x0;
          goto LAB_1007111b4;
        }
        goto LAB_100711230;
      }
      goto LAB_1007111f8;
    }
    plVar3 = (long *)(lVar9 + 0x78);
    LOAcquire();
    *plVar3 = *plVar3 + 1;
    plStack_38 = *(long **)(lVar9 + 0x68);
    *(long *)(lVar9 + 0x68) = 2;
    LORelease();
    if (plStack_38 == (long *)0x1) {
      *plVar3 = *plVar3 + -1;
      LORelease();
      *param_2 = 0;
      goto LAB_1007110d8;
    }
  }
  FUN_107c05cc8(0,&UNK_108c56c90,&plStack_38,0,param_5,&UNK_10b1d5108);
LAB_100711230:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100711234);
  (*pcVar1)();
}

