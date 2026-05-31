
/* WARNING: Possible PIC construction at 0x0001002cb6f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002cb6fc) */

void FUN_1002cb67c(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  ulong uVar7;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x138) != 0) {
    return;
  }
  if (*(ulong *)(param_1 + 0x1a0) < 0x8000000000000003) {
    return;
  }
  if ((*(byte *)(param_1 + 0xb1) & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
LAB_1002cb6c4:
    *(undefined1 *)(param_1 + 0x22d) = 1;
    return;
  }
  auVar8 = FUN_1002cb50c();
  lVar4 = auVar8._8_8_;
  if (auVar8._0_8_ == 2) {
    return;
  }
  if ((auVar8._0_8_ & 1) == 0) {
    if (lVar4 != 0) goto LAB_1002cb6c4;
    if (*(char *)(param_1 + 0x22f) != '\0') {
      if (((*(long *)(param_1 + 0x138) == 1) || (*(long *)(param_1 + 0x138) == 2)) &&
         (*(ulong *)(param_1 + 0x140) < 2 && *(long *)(param_1 + 0x170) != 0)) {
        plVar6 = *(long **)(param_1 + 0x188);
        if (((ulong)plVar6 & 1) == 0) {
          lVar4 = plVar6[4];
          plVar6[4] = lVar4 + -1;
          LORelease();
          if (lVar4 != 1) goto LAB_1057ac8f0;
          if (*plVar6 != 0) {
            _free(plVar6[1]);
          }
        }
        else {
          if (*(long *)(param_1 + 0x180) + ((ulong)plVar6 >> 5) == 0) goto LAB_1057ac8f0;
          plVar6 = (long *)(*(long *)(param_1 + 0x170) - ((ulong)plVar6 >> 5));
        }
        _free(plVar6);
      }
LAB_1057ac8f0:
      *(undefined8 *)(param_1 + 0x138) = 4;
      *(undefined1 *)(param_1 + 0x22f) = 2;
      return;
    }
  }
  else {
    unaff_x30 = 0x1002cb6fc;
    register0x00000008 = (BADSPACEBASE *)auStack_30;
    unaff_x19 = param_1;
    unaff_x20 = lVar4;
    unaff_x29 = puVar1;
    lStack_28 = lVar4;
  }
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (((*(long *)(param_1 + 0x138) == 1) || (*(long *)(param_1 + 0x138) == 2)) &&
     (*(ulong *)(param_1 + 0x140) < 2 && *(long *)(param_1 + 0x170) != 0)) {
    plVar6 = *(long **)(param_1 + 0x188);
    if (((ulong)plVar6 & 1) == 0) {
      lVar4 = plVar6[4];
      plVar6[4] = lVar4 + -1;
      LORelease();
      if (lVar4 != 1) goto LAB_1057acbbc;
      if (*plVar6 != 0) {
        _free(plVar6[1]);
      }
    }
    else {
      if (*(long *)(param_1 + 0x180) + ((ulong)plVar6 >> 5) == 0) goto LAB_1057acbbc;
      plVar6 = (long *)(*(long *)(param_1 + 0x170) - ((ulong)plVar6 >> 5));
    }
    _free(plVar6);
  }
LAB_1057acbbc:
  *(undefined8 *)(param_1 + 0x138) = 4;
  uVar7 = *(ulong *)(param_1 + 0x1a0);
  if (uVar7 < 0x8000000000000003) {
    uVar2 = uVar7;
    if (uVar7 < 0x8000000000000001) {
      uVar2 = 0;
    }
    if (uVar7 != 0x8000000000000000 && (uVar2 & 0x7fffffffffffffff) == 0) {
      lVar3 = *(long *)(param_1 + 0x1a8);
      lVar4 = *(long *)(param_1 + 0x1b0) + 1;
      lVar5 = lVar3 + 0x18;
      while (lVar4 = lVar4 + -1, lVar4 != 0) {
        (**(code **)(*(long *)(lVar5 + -0x18) + 0x20))
                  (lVar5,*(undefined8 *)(lVar5 + -0x10),*(undefined8 *)(lVar5 + -8));
        lVar5 = lVar5 + 0x28;
      }
      if (uVar7 != 0) {
        _free(lVar3);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0x8000000000000006;
  *(undefined1 *)(param_1 + 0x22f) = 2;
  return;
}

