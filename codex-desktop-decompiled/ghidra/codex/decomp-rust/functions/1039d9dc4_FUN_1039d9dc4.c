
void FUN_1039d9dc4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  plVar4 = (long *)*param_2;
  auVar5 = func_0x000103a13810(param_2 + 2);
  lVar2 = auVar5._0_8_;
  do {
    if (lVar2 == 0) {
LAB_1039d9eb4:
      *param_1 = 6;
      return;
    }
    if (auVar5._8_8_ != 0) {
      __ZN18tracing_subscriber6filter3env9directive9Directive5parse17h80e53e44a81d3f1fE
                (&lStack_e0,auVar5._0_8_,auVar5._8_8_,*(undefined1 *)(*(long *)param_2[1] + 0x68));
      if (lStack_e0 == 6) {
        if (*plVar4 == 0) {
          lVar2 = plVar4[1];
          puVar1 = (undefined8 *)plVar4[2];
          pcVar3 = (code *)*puVar1;
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar2);
          }
          if (puVar1[1] != 0) {
            _free(lVar2);
          }
        }
        plVar4[1] = lStack_d0;
        *plVar4 = lStack_d8;
        plVar4[2] = lStack_c8;
        goto LAB_1039d9eb4;
      }
      if (lStack_e0 != 7) {
        *param_1 = lStack_e0;
        param_1[4] = lStack_c0;
        param_1[3] = lStack_c8;
        param_1[6] = lStack_b0;
        param_1[5] = lStack_b8;
        param_1[8] = lStack_a0;
        param_1[7] = lStack_a8;
        param_1[9] = lStack_98;
        param_1[2] = lStack_d0;
        param_1[1] = lStack_d8;
        return;
      }
    }
    auVar5 = func_0x000103a13810(param_2 + 2);
    lVar2 = auVar5._0_8_;
  } while( true );
}

