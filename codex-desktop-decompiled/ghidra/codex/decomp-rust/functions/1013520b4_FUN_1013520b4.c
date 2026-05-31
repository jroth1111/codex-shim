
int * FUN_1013520b4(undefined8 param_1)

{
  long lVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  long lStack_48;
  int *piStack_40;
  long lStack_38;
  
  FUN_1004e07f8(&lStack_48,param_1);
  piVar2 = piStack_40;
  lVar1 = lStack_48;
  piVar4 = piStack_40;
  if (lStack_48 != -0x8000000000000000) {
    if ((lStack_38 == 7) &&
       (*piStack_40 == 0x65746e69 && *(int *)((long)piStack_40 + 3) == 0x72656765)) {
      piVar4 = (int *)0x0;
      lStack_38 = 7;
    }
    else {
      piStack_40 = (int *)_malloc(0x23);
      if (piStack_40 == (int *)0x0) {
        func_0x0001087c9084(1,0x23);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101352198);
        (*pcVar3)();
      }
      *(undefined4 *)((long)piStack_40 + 0x1f) = 0x22726567;
      piStack_40[2] = 0x74736e6f;
      piStack_40[3] = 0x72747320;
      piStack_40[0] = 0x65707865;
      piStack_40[1] = 0x63207463;
      piStack_40[6] = 0x69222065;
      piStack_40[7] = 0x6765746e;
      piStack_40[4] = 0x20676e69;
      piStack_40[5] = 0x756c6176;
      lStack_48 = 0x23;
      lStack_38 = 0x23;
      piVar4 = (int *)func_0x000108856114(&lStack_48);
    }
    if (lVar1 != 0) {
      _free(piVar2);
    }
  }
  return piVar4;
}

