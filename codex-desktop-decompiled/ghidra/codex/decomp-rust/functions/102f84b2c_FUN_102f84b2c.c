
undefined8 FUN_102f84b2c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  plVar3 = (long *)param_1[9];
  lVar1 = param_1[10];
  plVar5 = (long *)param_1[8];
  if (*param_1 == 0) {
LAB_102f84b8c:
    if (plVar5 != (long *)0x0 && plVar5 != plVar3) {
      param_1[8] = (long)(plVar5 + 2);
      (**(code **)(plVar5[1] + 0x18))
                (&lStack_78,*plVar5 + (*(long *)(plVar5[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10
                 ,lVar1 + 0x140,lVar1 + 0x198);
      puVar4 = puStack_70;
      lVar6 = lStack_78;
      if (lStack_78 != -0x8000000000000000) {
        puVar7 = puStack_70 + lStack_68 * 2;
        func_0x000103343b70(param_1);
        plVar5 = plVar5 + 2;
        while( true ) {
          *param_1 = (long)puVar4;
          param_1[1] = (long)puVar4;
          param_1[2] = lVar6;
          param_1[3] = (long)puVar7;
          if (puVar4 != puVar7) break;
          func_0x000103343b70(param_1);
          *param_1 = 0;
          if (plVar5 == plVar3) goto LAB_102f84bd8;
          param_1[8] = (long)(plVar5 + 2);
          (**(code **)(plVar5[1] + 0x18))
                    (&lStack_78,
                     *plVar5 + (*(long *)(plVar5[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,
                     lVar1 + 0x140,lVar1 + 0x198);
          puVar4 = puStack_70;
          lVar6 = lStack_78;
          if (lStack_78 == -0x8000000000000000) goto LAB_102f84bd8;
          puVar7 = puStack_70 + lStack_68 * 2;
          func_0x000103343b70(param_1);
          plVar5 = plVar5 + 2;
        }
        goto LAB_102f84b70;
      }
    }
LAB_102f84bd8:
    plVar3 = param_1 + 4;
    if (*plVar3 == 0) {
      uVar2 = 0;
    }
    else {
      puVar4 = (undefined8 *)param_1[5];
      if (puVar4 == (undefined8 *)param_1[7]) {
        func_0x000103343b70(plVar3);
        uVar2 = 0;
        *plVar3 = 0;
      }
      else {
        param_1[5] = (long)(puVar4 + 2);
        uVar2 = *puVar4;
      }
    }
  }
  else {
    puVar4 = (undefined8 *)param_1[1];
    if (puVar4 == (undefined8 *)param_1[3]) {
      func_0x000103343b70(param_1);
      *param_1 = 0;
      goto LAB_102f84b8c;
    }
LAB_102f84b70:
    param_1[1] = (long)(puVar4 + 2);
    uVar2 = *puVar4;
  }
  return uVar2;
}

