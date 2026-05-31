
void FUN_103ec26c0(undefined8 *param_1,uint *param_2,undefined8 param_3)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  if (*(ulong *)(param_2 + 0x2ac) != 2) {
    lVar3 = *(long *)(param_2 + 0x2ae);
    if ((*(ulong *)(param_2 + 0x2ac) & 1) != 0) {
      lVar3 = lVar3 + (*(long *)(*(long *)(param_2 + 0x2b0) + 0x10) - 1U & 0xfffffffffffffff0) +
              0x10;
    }
    (**(code **)(*(long *)(param_2 + 0x2b0) + 0x60))(lVar3,param_2 + 0x2b2);
  }
  puVar1 = (ulong *)(param_2 + 0x2ac);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (lVar3 = *(long *)(param_2 + 0x2b4), lVar3 != 0)) {
    puStack_d0 = *(undefined1 **)(lVar3 + 0x10);
    puStack_c8 = *(undefined **)(lVar3 + 0x18);
    puStack_88 = &DAT_103d8be04;
    puStack_90 = (undefined1 *)&puStack_d0;
    func_0x000103e76334(puVar1,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_90);
  }
  if (*param_2 == 1) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc118f,0x36,&UNK_10b2f7080);
LAB_103ec2958:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec295c);
    (*pcVar2)();
  }
  func_0x000103d5ad4c(&puStack_90,param_2 + 2,param_3);
  if ((short)puStack_90 == 0x20) {
    *param_1 = 0x8000000000000003;
    uVar6 = *puVar1;
  }
  else {
    puStack_c8 = puStack_88;
    puStack_d0 = puStack_90;
    uStack_b8 = uStack_78;
    puStack_c0 = puStack_80;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_98 = uStack_58;
    uStack_a0 = uStack_60;
    if ((*param_2 & 1) != 0) {
      param_2[0] = 1;
      param_2[1] = 0;
      __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2f7068);
      goto LAB_103ec2958;
    }
    puStack_80 = *(undefined **)(param_2 + 0x2aa);
    puStack_88 = *(undefined **)(param_2 + 0x2a8);
    puStack_90 = (undefined1 *)0x0;
    puVar4 = (undefined8 *)func_0x000103da56c8(param_2 + 2);
    puStack_90 = puStack_88;
    puStack_48 = puStack_80;
    puStack_50 = puStack_88;
    param_2[0] = 1;
    param_2[1] = 0;
    puStack_88 = puStack_80;
    if ((short)puStack_d0 == 0x1f) {
      uVar5 = 0x8000000000000001;
    }
    else {
      puVar4 = (undefined8 *)_malloc(0x40);
      if (puVar4 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
        goto LAB_103ec2958;
      }
      puVar4[1] = puStack_c8;
      *puVar4 = puStack_d0;
      puVar4[3] = uStack_b8;
      puVar4[2] = puStack_c0;
      puVar4[5] = uStack_a8;
      puVar4[4] = uStack_b0;
      puVar4[7] = uStack_98;
      puVar4[6] = uStack_a0;
      uVar5 = 0x8000000000000000;
    }
    *param_1 = 0x8000000000000002;
    param_1[1] = uVar5;
    param_1[2] = &UNK_108dc3b41;
    param_1[3] = 0xd5;
    param_1[4] = puVar4;
    param_1[5] = &UNK_10b2fb258;
    param_1[7] = 0xf1537bb5d2b7a7a2;
    param_1[6] = 0x606a26116f8f396f;
    param_1[9] = puStack_48;
    param_1[8] = puStack_50;
    uVar6 = *puVar1;
  }
  if (uVar6 != 2) {
    lVar3 = *(long *)(param_2 + 0x2ae);
    if ((uVar6 & 1) != 0) {
      lVar3 = lVar3 + (*(long *)(*(long *)(param_2 + 0x2b0) + 0x10) - 1U & 0xfffffffffffffff0) +
              0x10;
    }
    (**(code **)(*(long *)(param_2 + 0x2b0) + 0x68))(lVar3,param_2 + 0x2b2);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (lVar3 = *(long *)(param_2 + 0x2b4), lVar3 != 0)) {
    puStack_d0 = *(undefined1 **)(lVar3 + 0x10);
    puStack_c8 = *(undefined **)(lVar3 + 0x18);
    puStack_88 = &DAT_103d8be04;
    puStack_90 = (undefined1 *)&puStack_d0;
    func_0x000103e76334(puVar1,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_90);
  }
  return;
}

