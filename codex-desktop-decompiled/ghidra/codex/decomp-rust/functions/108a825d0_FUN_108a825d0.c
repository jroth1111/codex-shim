
undefined8 * FUN_108a825d0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)_malloc(0x40);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x108a8267c);
    (*pcVar1)();
  }
  puVar2[1] = 0;
  *puVar2 = 0x32aaaba7;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  __ZN3std3sys3pal4unix4sync5mutex5Mutex4init17ha789dcd9cd89f57cE();
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    *param_1 = puVar2;
    puVar3 = puVar2;
  }
  else {
    _pthread_mutex_destroy(puVar2);
    _free(puVar2);
  }
  return puVar3;
}

