
long FUN_100a48504(long param_1,undefined8 *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar3 = (undefined8 *)_malloc(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    uVar5 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar5;
    puVar3[2] = param_2[2];
    lVar4 = *(long *)(param_1 + 0x70);
    if (lVar4 == *(long *)(param_1 + 0x60)) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17hd9055ff48b871d5aE(param_1 + 0x60);
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x68) + lVar4 * 0x20);
    *plVar1 = (long)puVar3;
    plVar1[1] = (long)&UNK_10b237ed0;
    plVar1[3] = 0x4f74f856fdcd0b81;
    plVar1[2] = -0x3f9ead5fe06d61f0;
    *(long *)(param_1 + 0x70) = lVar4 + 1;
    return param_1;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a485a4);
  (*pcVar2)();
}

