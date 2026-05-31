
undefined8 * __ZN3std6thread6thread6Thread3new17h356aa6fbdd76e3faE(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined1 auVar5 [16];
  
  if (*param_2 == -0x8000000000000000) {
    uVar4 = 0;
  }
  else {
    auVar5 = func_0x0001060214fc(param_2);
    unaff_x20 = auVar5._8_8_;
    uVar4 = auVar5._0_8_;
  }
  puVar2 = (undefined8 *)_malloc(0x38);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
  }
  else {
    puVar2[1] = 1;
    *puVar2 = 1;
    puVar2[3] = uVar4;
    puVar2[4] = unaff_x20;
    puVar2[2] = param_1;
    lVar3 = _dispatch_semaphore_create(0);
    if (lVar3 != 0) {
      puVar2[5] = lVar3;
      *(undefined1 *)(puVar2 + 6) = 0;
      return puVar2;
    }
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109bd61c6,0x7d,&UNK_10b4add98);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x106038ff0);
  (*pcVar1)();
}

