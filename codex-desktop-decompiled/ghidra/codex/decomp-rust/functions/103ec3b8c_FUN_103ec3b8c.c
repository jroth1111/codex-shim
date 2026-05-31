
void FUN_103ec3b8c(ulong *param_1,ulong *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_58;
  
  puVar6 = param_2 + 5;
  if (*param_2 != 2) {
    uVar4 = param_2[1];
    if ((*param_2 & 1) != 0) {
      uVar4 = uVar4 + (*(long *)(param_2[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
    }
    (**(code **)(param_2[2] + 0x60))(uVar4,param_2 + 3);
  }
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (uVar4 = param_2[4], uVar4 != 0)) {
    puStack_100 = *(undefined1 **)(uVar4 + 0x10);
    puStack_f8 = *(undefined **)(uVar4 + 0x18);
    puStack_b8 = &DAT_103d8be04;
    puStack_c0 = (undefined1 *)&puStack_100;
    func_0x000103e76334(param_2,&UNK_108dc6570,0x15,s__>___108ab67cd,&puStack_c0);
  }
  if (*puVar6 == 0x8000000000000002) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc118f,0x36,&UNK_10b2f7080);
  }
  else {
    func_0x000103d5ad4c(&puStack_c0,param_2 + 0xb,param_3);
    if ((short)puStack_c0 == 0x20) {
      *param_1 = 0x8000000000000003;
      uVar4 = *param_2;
joined_r0x000103ec3d7c:
      if (uVar4 != 2) {
        uVar5 = param_2[1];
        if ((uVar4 & 1) != 0) {
          uVar5 = uVar5 + (*(long *)(param_2[2] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10;
        }
        (**(code **)(param_2[2] + 0x68))(uVar5,param_2 + 3);
      }
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (uVar4 = param_2[4], uVar4 != 0)) {
        puStack_100 = *(undefined1 **)(uVar4 + 0x10);
        puStack_f8 = *(undefined **)(uVar4 + 0x18);
        puStack_b8 = &DAT_103d8be04;
        puStack_c0 = (undefined1 *)&puStack_100;
        func_0x000103e76334(param_2,&UNK_108dc6570,0x15,s_<____108ab67c5,&puStack_c0);
      }
      return;
    }
    puStack_f8 = puStack_b8;
    puStack_100 = puStack_c0;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    uStack_d8 = uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    if (*puVar6 != 0x8000000000000002) {
      puStack_b8 = (undefined *)param_2[6];
      puStack_c0 = (undefined1 *)*puVar6;
      uStack_a8 = param_2[8];
      uStack_b0 = param_2[7];
      uStack_98 = param_2[10];
      uStack_a0 = param_2[9];
      puVar3 = (ulong *)func_0x000103da56c8(param_2 + 0xb);
      uVar4 = uStack_98;
      puVar1 = puStack_c0;
      uStack_78 = uStack_b0;
      puStack_80 = puStack_b8;
      uStack_68 = uStack_a0;
      uStack_70 = uStack_a8;
      *puVar6 = 0x8000000000000002;
      if (puStack_c0 != (undefined1 *)0x8000000000000002) {
        uStack_58 = uStack_98;
        if ((short)puStack_100 == 0x1f) {
          uVar5 = 0x8000000000000001;
        }
        else {
          puVar3 = (ulong *)_malloc(0x40);
          if (puVar3 == (ulong *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
            goto LAB_103ec3e50;
          }
          puVar3[1] = (ulong)puStack_f8;
          *puVar3 = (ulong)puStack_100;
          puVar3[3] = uStack_e8;
          puVar3[2] = uStack_f0;
          puVar3[5] = uStack_d8;
          puVar3[4] = uStack_e0;
          puVar3[7] = uStack_c8;
          puVar3[6] = uStack_d0;
          uVar5 = 0x8000000000000000;
        }
        param_1[2] = uStack_78;
        param_1[1] = (ulong)puStack_80;
        param_1[4] = uStack_68;
        param_1[3] = uStack_70;
        *param_1 = (ulong)puVar1;
        param_1[5] = uVar5;
        param_1[6] = (ulong)&UNK_108dc3b41;
        param_1[7] = 0xd5;
        param_1[8] = (ulong)puVar3;
        param_1[9] = (ulong)&UNK_10b2fb258;
        param_1[0xb] = 0xf1537bb5d2b7a7a2;
        param_1[10] = 0x606a26116f8f396f;
        param_1[0xc] = uVar4;
        uVar4 = *param_2;
        goto joined_r0x000103ec3d7c;
      }
    }
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2f7068);
  }
LAB_103ec3e50:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ec3e54);
  (*pcVar2)();
}

