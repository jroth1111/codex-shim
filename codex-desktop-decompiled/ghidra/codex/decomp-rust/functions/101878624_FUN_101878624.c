
/* WARNING: Removing unreachable block (ram,0x0001018787b0) */
/* WARNING: Removing unreachable block (ram,0x0001018787e4) */
/* WARNING: Removing unreachable block (ram,0x00010187880c) */
/* WARNING: Removing unreachable block (ram,0x000101878810) */
/* WARNING: Removing unreachable block (ram,0x0001018788c8) */
/* WARNING: Removing unreachable block (ram,0x0001018788fc) */
/* WARNING: Removing unreachable block (ram,0x000101878924) */
/* WARNING: Removing unreachable block (ram,0x000101878928) */
/* WARNING: Removing unreachable block (ram,0x000101878934) */

void FUN_101878624(void)

{
  code *pcVar1;
  long lVar2;
  ulong *unaff_x19;
  ulong uVar3;
  long *plVar4;
  
  do {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108add0bf,&stack0x00001c80,&UNK_10b262208);
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE();
    *(undefined1 *)(unaff_x19 + 9) = 1;
    _memcpy(&stack0x000009b0,&stack0x00000048,0x968);
    if (0x7ffffffffffffffe < *unaff_x19) {
      func_0x000108a07858(&UNK_10b269bc8);
LAB_101878a44:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101878a48);
      (*pcVar1)();
    }
    *unaff_x19 = *unaff_x19 + 1;
    uVar3 = unaff_x19[1];
    _memcpy(&stack0x00001318,&stack0x00000048,0x968);
    if (uVar3 != 2) {
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)unaff_x19[2];
        lVar2 = *plVar4;
        *plVar4 = lVar2 + 1;
        if ((-1 < lVar2) &&
           ((plVar4 = (long *)plVar4[0x5e], plVar4 == (long *)0x0 ||
            (lVar2 = *plVar4, *plVar4 = lVar2 + 1, -1 < lVar2)))) {
          _memcpy(&stack0x000026d8,&stack0x000009c0,0x958);
          _memcpy((ulong)&stack0x00001c80 | 0x34,&stack0x000026d4,0x95c);
          _posix_memalign(&stack0x00003030,0x80,0xa00);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xa00);
        }
      }
      else {
        plVar4 = (long *)unaff_x19[2];
        lVar2 = *plVar4;
        *plVar4 = lVar2 + 1;
        if ((-1 < lVar2) &&
           ((plVar4 = (long *)plVar4[0x4a], plVar4 == (long *)0x0 ||
            (lVar2 = *plVar4, *plVar4 = lVar2 + 1, -1 < lVar2)))) {
          _memcpy(&stack0x000026d8,&stack0x000009c0,0x958);
          _memcpy((ulong)&stack0x00001c80 | 0x34,&stack0x000026d4,0x95c);
          _posix_memalign(&stack0x00003030,0x80,0xa00);
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0xa00);
        }
      }
      goto LAB_101878a44;
    }
    FUN_101930648(&stack0x00001328);
    *unaff_x19 = *unaff_x19 - 1;
  } while( true );
}

