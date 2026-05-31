
void FUN_10603f0f4(void)

{
  uint uVar1;
  uint *puVar2;
  undefined8 in_x4;
  int iStack_14;
  
  iStack_14 = _pthread_mutexattr_destroy();
  if (iStack_14 == 0) {
    return;
  }
  puVar2 = (uint *)__ZN4core9panicking13assert_failed17h79e72469a32bf64eE
                             (0,&iStack_14,&UNK_109bd62d8,0,in_x4,&UNK_10b4aeec8);
  if (*puVar2 < 2) {
    uVar1 = puVar2[2];
  }
  else {
    _close(puVar2[1]);
    uVar1 = puVar2[2];
  }
  if (uVar1 < 2) {
    uVar1 = puVar2[4];
  }
  else {
    _close(puVar2[3]);
    uVar1 = puVar2[4];
  }
  if (uVar1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000108aa949c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__close_10b61ae88)(puVar2[5]);
  return;
}

