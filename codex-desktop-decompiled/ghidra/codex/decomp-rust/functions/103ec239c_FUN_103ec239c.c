
void FUN_103ec239c(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  undefined *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  
  puVar7 = param_2 + 5;
  if (*param_2 != 2) {
    uVar5 = param_2[1];
    if ((*param_2 & 1) != 0) {
      uVar5 = uVar5 + (*(long *)(param_2[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_2[2] + 0x60))(uVar5,param_2 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar5 = param_2[4], uVar5 != 0)) {
    puStack_b0 = *(undefined **)(uVar5 + 0x10);
    uStack_a8 = *(ulong *)(uVar5 + 0x18);
    ppuStack_90 = &puStack_b0;
    puStack_88 = &DAT_103d8be04;
    func_0x000103e76334(param_2,&UNK_108dc6570,0x15,s__>___108ab67cd,&ppuStack_90);
  }
  if (*puVar7 == 0x8000000000000002) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc118f,0x36,&UNK_10b2f7080);
  }
  else {
    auVar8 = func_0x000103d3b71c(param_2 + 0xb,param_3);
    lVar4 = auVar8._8_8_;
    if ((auVar8._0_8_ & 1) != 0) {
      *param_1 = 0x8000000000000003;
      uVar5 = *param_2;
joined_r0x000103ec2560:
      if (uVar5 != 2) {
        uVar6 = param_2[1];
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar6 + (*(long *)(param_2[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(param_2[2] + 0x68))(uVar6,param_2 + 3);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (uVar5 = param_2[4], uVar5 != 0)) {
        puStack_b0 = *(undefined **)(uVar5 + 0x10);
        uStack_a8 = *(undefined8 *)(uVar5 + 0x18);
        ppuStack_90 = &puStack_b0;
        puStack_88 = &DAT_103d8be04;
        func_0x000103e76334(param_2,&UNK_108dc6570,0x15,s_<____108ab67c5,&ppuStack_90);
      }
      return;
    }
    if (*puVar7 != 0x8000000000000002) {
      puStack_88 = (undefined *)param_2[6];
      ppuStack_90 = (undefined **)*puVar7;
      uStack_78 = param_2[8];
      uStack_80 = param_2[7];
      uStack_68 = param_2[10];
      uStack_70 = param_2[9];
      plVar3 = (long *)func_0x000103da66bc(param_2 + 0xb);
      uVar5 = uStack_68;
      ppuVar1 = ppuStack_90;
      uStack_a8 = uStack_80;
      puStack_b0 = puStack_88;
      uStack_98 = uStack_70;
      uStack_a0 = uStack_78;
      *puVar7 = 0x8000000000000002;
      if (ppuStack_90 != (undefined **)0x8000000000000002) {
        uStack_60 = uStack_68;
        if (lVar4 == 0) {
          uVar6 = 0x8000000000000001;
        }
        else {
          lStack_58 = lVar4;
          plVar3 = (long *)_malloc(8);
          if (plVar3 == (long *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
            goto LAB_103ec2634;
          }
          *plVar3 = lVar4;
          uVar6 = 0x8000000000000000;
        }
        param_1[2] = uStack_a8;
        param_1[1] = (ulong)puStack_b0;
        param_1[4] = uStack_98;
        param_1[3] = uStack_a0;
        *param_1 = (ulong)ppuVar1;
        param_1[5] = uVar6;
        param_1[6] = (ulong)&UNK_108dc3c16;
        param_1[7] = 0xcf;
        param_1[8] = (ulong)plVar3;
        param_1[9] = (ulong)&UNK_10b2f7bf8;
        param_1[0xb] = 0x77fd844a23686779;
        param_1[10] = 0xd5c836f49bf5bbd0;
        param_1[0xc] = uVar5;
        uVar5 = *param_2;
        goto joined_r0x000103ec2560;
      }
    }
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2f7068);
  }
LAB_103ec2634:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec2638);
  (*pcVar2)();
}

