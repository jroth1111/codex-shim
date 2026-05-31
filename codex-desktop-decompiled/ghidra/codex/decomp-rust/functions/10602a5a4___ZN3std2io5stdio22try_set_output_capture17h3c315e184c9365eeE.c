
undefined8 __ZN3std2io5stdio22try_set_output_capture17h3c315e184c9365eeE(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plStack_28;
  
  if ((param_1 != (long *)0x0) || (cRam000000010b6fde60 != '\0')) {
    cRam000000010b6fde60 = '\x01';
    plStack_28 = param_1;
    puVar2 = (undefined8 *)(*pcRam000000010b66cc38)();
    if (*(char *)(puVar2 + 1) != '\x01') {
      if (*(char *)(puVar2 + 1) == '\x02') {
        if (param_1 != (long *)0x0) {
          lVar1 = *param_1;
          *param_1 = lVar1 + -1;
          LORelease();
          if (lVar1 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h78c4ac9972565606E(&plStack_28);
          }
        }
        return 1;
      }
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar2,&DAT_10602d3d4);
      *(undefined1 *)(puVar2 + 1) = 1;
    }
    *puVar2 = param_1;
  }
  return 0;
}

