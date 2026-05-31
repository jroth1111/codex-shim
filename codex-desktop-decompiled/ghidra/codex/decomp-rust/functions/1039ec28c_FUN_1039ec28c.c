
void FUN_1039ec28c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_100 [16];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined *puStack_80;
  long *plStack_78;
  undefined *puStack_70;
  
  plVar3 = (long *)*param_2;
  auVar4 = func_0x000103a13810(param_2 + 1);
  if (auVar4._0_8_ != 0) {
    do {
      if (auVar4._8_8_ != 0) {
        auStack_100 = auVar4;
        __ZN18tracing_subscriber6filter3env9directive9Directive5parse17h80e53e44a81d3f1fE
                  (&lStack_f0,auVar4._0_8_,auVar4._8_8_,*(undefined1 *)(*plVar3 + 0x68));
        if (lStack_f0 != 6) {
          param_1[4] = lStack_d0;
          param_1[3] = (long)puStack_d8;
          param_1[6] = lStack_c0;
          param_1[5] = lStack_c8;
          param_1[8] = lStack_b0;
          param_1[7] = lStack_b8;
          param_1[9] = lStack_a8;
          param_1[2] = lStack_e0;
          param_1[1] = lStack_e8;
          goto LAB_1039ec3ac;
        }
        lStack_98 = lStack_e0;
        lStack_a0 = lStack_e8;
        puStack_90 = puStack_d8;
        puStack_80 = &DAT_1039f66e8;
        puStack_70 = &
                     __ZN88__LT_tracing_subscriber__filter__directive__ParseError_u20_as_u20_core__fmt__Display_GT_3fmt17hbce547d212670a75E
        ;
        puStack_88 = (undefined8 *)auStack_100;
        plStack_78 = &lStack_a0;
        __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s_ignoring______108acfa71,&puStack_88);
        puVar2 = puStack_90;
        lVar1 = lStack_98;
        if (lStack_a0 == 0) {
          if ((code *)*puStack_90 != (code *)0x0) {
            (*(code *)*puStack_90)(lStack_98);
          }
          if (puVar2[1] != 0) {
            _free(lVar1);
          }
        }
      }
      auVar4 = func_0x000103a13810(param_2 + 1);
    } while (auVar4._0_8_ != 0);
  }
  lStack_f0 = 6;
LAB_1039ec3ac:
  *param_1 = lStack_f0;
  return;
}

