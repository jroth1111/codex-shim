
void FUN_1061d35c0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  
  plVar3 = (long *)*param_2;
  auVar5 = FUN_1061e1024(param_2 + 2);
  if (auVar5._0_8_ == 0) {
LAB_1061d36ac:
    lVar4 = 6;
  }
  else {
    lVar4 = 6;
    do {
      if (auVar5._8_8_ != 0) {
        __ZN18tracing_subscriber6filter3env9directive9Directive5parse17h80e53e44a81d3f1fE
                  (&lStack_f0,auVar5._0_8_,auVar5._8_8_,*(undefined1 *)(*(long *)param_2[1] + 0x68))
        ;
        if (lStack_f0 == 6) {
          if (*plVar3 == 0) {
            lVar4 = plVar3[1];
            puVar1 = (undefined8 *)plVar3[2];
            pcVar2 = (code *)*puVar1;
            if (pcVar2 != (code *)0x0) {
              (*pcVar2)(lVar4);
            }
            if (puVar1[1] != 0) {
              _free(lVar4);
            }
          }
          plVar3[1] = lStack_e0;
          *plVar3 = lStack_e8;
          plVar3[2] = lStack_d8;
          goto LAB_1061d36ac;
        }
        if (lStack_f0 != 7) {
          param_1[4] = lStack_d0;
          param_1[3] = lStack_d8;
          param_1[6] = lStack_c0;
          param_1[5] = lStack_c8;
          param_1[8] = lStack_b0;
          param_1[7] = lStack_b8;
          param_1[9] = lStack_a8;
          param_1[2] = lStack_e0;
          param_1[1] = lStack_e8;
          lVar4 = lStack_f0;
          break;
        }
      }
      auVar5 = FUN_1061e1024(param_2 + 2);
    } while (auVar5._0_8_ != 0);
  }
  *param_1 = lVar4;
  return;
}

