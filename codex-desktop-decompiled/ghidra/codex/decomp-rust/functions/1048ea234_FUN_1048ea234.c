
void FUN_1048ea234(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  long lStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  
  if (param_4 == 0) {
    plVar5 = (long *)*param_2;
  }
  else {
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == '\x03') {
      uStack_68 = 0;
      plVar5 = (long *)*param_2;
      lStack_78 = param_3;
      uStack_70 = param_4;
      auVar6 = func_0x000105a1ac40(&lStack_78);
      lVar2 = auVar6._0_8_;
      while (lVar2 != 0) {
        uVar3 = auVar6._8_8_;
        lVar2 = plVar5[2];
        if ((ulong)(*plVar5 - lVar2) < 9) {
          FUN_1089a4f48(plVar5,lVar2,9,1,1);
          lVar2 = plVar5[2];
        }
        lVar4 = plVar5[1];
        *(undefined8 *)(lVar4 + lVar2) = 0x41544144435b213c;
        *(undefined1 *)((undefined8 *)(lVar4 + lVar2) + 1) = 0x5b;
        lVar2 = lVar2 + 9;
        plVar5[2] = lVar2;
        if ((ulong)(*plVar5 - lVar2) < uVar3) {
          FUN_1089a4f48(plVar5,lVar2,uVar3,1,1);
          lVar2 = plVar5[2];
        }
        _memcpy(plVar5[1] + lVar2,auVar6._0_8_,uVar3);
        lVar2 = lVar2 + uVar3;
        plVar5[2] = lVar2;
        if ((ulong)(*plVar5 - lVar2) < 3) {
          FUN_1089a4f48(plVar5,lVar2,3,1,1);
          lVar2 = plVar5[2];
        }
        lVar4 = plVar5[1];
        *(undefined2 *)(lVar4 + lVar2) = 0x5d5d;
        *(undefined1 *)((undefined2 *)(lVar4 + lVar2) + 1) = 0x3e;
        plVar5[2] = lVar2 + 3;
        auVar6 = func_0x000105a1ac40(&lStack_78);
        lVar2 = auVar6._0_8_;
      }
    }
    else {
      if (*(char *)((long)param_2 + 9) == '\0') {
        uVar3 = 0;
        plVar5 = (long *)*param_2;
        lVar2 = param_3;
        do {
          lVar4 = 0;
          while (0x3e < *(byte *)(lVar2 + lVar4) ||
                 (1L << ((ulong)*(byte *)(lVar2 + lVar4) & 0x3f) & 0x500000c400000000U) == 0) {
            lVar4 = lVar4 + 1;
            if (lVar2 + lVar4 == param_3 + param_4) goto LAB_1048ea718;
          }
          func_0x000104a0f49c(plVar5,param_3,param_4,uVar3,uVar3 + lVar4);
          uVar3 = uVar3 + lVar4 + 1;
          lVar2 = lVar2 + lVar4 + 1;
        } while (lVar2 != param_3 + param_4);
      }
      else if (*(char *)((long)param_2 + 9) == '\x01') {
        if (cVar1 == '\0') {
          uVar3 = 0;
          plVar5 = (long *)*param_2;
          lVar2 = param_3;
          do {
            lVar4 = 0;
            while (0x3e < *(byte *)(lVar2 + lVar4) ||
                   (1L << ((ulong)*(byte *)(lVar2 + lVar4) & 0x3f) & 0x5000004000000000U) == 0) {
              lVar4 = lVar4 + 1;
              if (lVar2 + lVar4 == param_3 + param_4) goto LAB_1048ea718;
            }
            func_0x000104a0f49c(plVar5,param_3,param_4,uVar3,uVar3 + lVar4);
            uVar3 = uVar3 + lVar4 + 1;
            lVar2 = lVar2 + lVar4 + 1;
          } while (lVar2 != param_3 + param_4);
        }
        else if (cVar1 == '\x01') {
          uVar3 = 0;
          plVar5 = (long *)*param_2;
          lVar2 = param_3;
          do {
            lVar4 = 0;
            while (0x3e < *(byte *)(lVar2 + lVar4) ||
                   (1L << ((ulong)*(byte *)(lVar2 + lVar4) & 0x3f) & 0x5000004400000000U) == 0) {
              lVar4 = lVar4 + 1;
              if (lVar2 + lVar4 == param_3 + param_4) goto LAB_1048ea718;
            }
            func_0x000104a0f49c(plVar5,param_3,param_4,uVar3,uVar3 + lVar4);
            uVar3 = uVar3 + lVar4 + 1;
            lVar2 = lVar2 + lVar4 + 1;
          } while (lVar2 != param_3 + param_4);
        }
        else {
          uVar3 = 0;
          plVar5 = (long *)*param_2;
          lVar2 = param_3;
          do {
            lVar4 = 0;
            while (0x3e < *(byte *)(lVar2 + lVar4) ||
                   (1L << ((ulong)*(byte *)(lVar2 + lVar4) & 0x3f) & 0x500000c000000000U) == 0) {
              lVar4 = lVar4 + 1;
              if (lVar2 + lVar4 == param_3 + param_4) goto LAB_1048ea718;
            }
            func_0x000104a0f49c(plVar5,param_3,param_4,uVar3,uVar3 + lVar4);
            uVar3 = uVar3 + lVar4 + 1;
            lVar2 = lVar2 + lVar4 + 1;
          } while (lVar2 != param_3 + param_4);
        }
      }
      else if (cVar1 == '\0') {
        uVar3 = 0;
        plVar5 = (long *)*param_2;
        lVar2 = param_3;
        do {
          lVar4 = 0;
          while ((*(char *)(lVar2 + lVar4) != '&' && (*(char *)(lVar2 + lVar4) != '<'))) {
            lVar4 = lVar4 + 1;
            if (lVar2 + lVar4 == param_3 + param_4) goto LAB_1048ea718;
          }
          func_0x000104a0f49c(plVar5,param_3,param_4,uVar3,uVar3 + lVar4);
          uVar3 = uVar3 + lVar4 + 1;
          lVar2 = lVar2 + lVar4 + 1;
        } while (lVar2 != param_3 + param_4);
      }
      else if (cVar1 == '\x01') {
        uVar3 = 0;
        plVar5 = (long *)*param_2;
        lVar2 = param_3;
        do {
          lVar4 = 0;
          while (0x3c < *(byte *)(lVar2 + lVar4) ||
                 (1L << ((ulong)*(byte *)(lVar2 + lVar4) & 0x3f) & 0x1000004400000000U) == 0) {
            lVar4 = lVar4 + 1;
            if (lVar2 + lVar4 == param_3 + param_4) goto LAB_1048ea718;
          }
          func_0x000104a0f49c(plVar5,param_3,param_4,uVar3,uVar3 + lVar4);
          uVar3 = uVar3 + lVar4 + 1;
          lVar2 = lVar2 + lVar4 + 1;
        } while (lVar2 != param_3 + param_4);
      }
      else {
        uVar3 = 0;
        plVar5 = (long *)*param_2;
        lVar2 = param_3;
        do {
          lVar4 = 0;
          while (0x3c < *(byte *)(lVar2 + lVar4) ||
                 (1L << ((ulong)*(byte *)(lVar2 + lVar4) & 0x3f) & 0x100000c000000000U) == 0) {
            lVar4 = lVar4 + 1;
            if (lVar2 + lVar4 == param_3 + param_4) goto LAB_1048ea718;
          }
          func_0x000104a0f49c(plVar5,param_3,param_4,uVar3,uVar3 + lVar4);
          uVar3 = uVar3 + lVar4 + 1;
          lVar2 = lVar2 + lVar4 + 1;
        } while (lVar2 != param_3 + param_4);
      }
LAB_1048ea718:
      if (uVar3 != 0) {
        if (uVar3 < param_4) {
          if (*(char *)(param_3 + uVar3) < -0x40) goto LAB_1048ea76c;
        }
        else if (param_4 != uVar3) goto LAB_1048ea76c;
      }
      param_4 = param_4 - uVar3;
      lVar2 = plVar5[2];
      if ((ulong)(*plVar5 - lVar2) < param_4) {
        FUN_1089a4f48(plVar5,lVar2,param_4,1,1);
        lVar2 = plVar5[2];
      }
      _memcpy(plVar5[1] + lVar2,param_3 + uVar3,param_4);
      plVar5[2] = lVar2 + param_4;
    }
  }
LAB_1048ea76c:
  *param_1 = 5;
  param_1[1] = plVar5;
  return;
}

