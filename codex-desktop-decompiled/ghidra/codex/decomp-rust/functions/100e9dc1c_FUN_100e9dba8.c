
void FUN_100e9dba8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  puStack_30 = (undefined1 *)&lStack_a0;
  if (*param_2 == 2) {
    lVar2 = param_2[4];
    lVar1 = param_2[3];
    lVar3 = param_2[5];
    lVar5 = param_2[8];
    lVar4 = param_2[7];
    param_1[5] = param_2[6];
    param_1[4] = lVar3;
    param_1[7] = lVar5;
    param_1[6] = lVar4;
    lVar3 = param_2[9];
    param_1[9] = param_2[10];
    param_1[8] = lVar3;
    lVar3 = param_2[1];
    param_1[1] = param_2[2];
    *param_1 = lVar3;
    param_1[3] = lVar2;
    param_1[2] = lVar1;
  }
  else {
    lStack_78 = param_2[5];
    lStack_80 = param_2[4];
    lStack_68 = param_2[7];
    lStack_70 = param_2[6];
    lStack_58 = param_2[9];
    lStack_60 = param_2[8];
    lStack_50 = param_2[10];
    lStack_98 = param_2[1];
    lStack_a0 = *param_2;
    lStack_88 = param_2[3];
    lStack_90 = param_2[2];
    puStack_28 = &
                 __ZN61__LT_toml__de__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h65029d4c3eea911dE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (auStack_48,s_invalid_existing_config_toml__108acca8a,&puStack_30);
    lVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,auStack_48);
    FUN_100de3b58(&lStack_a0);
    *param_1 = -0x7ffffffffffffffa;
    param_1[1] = lVar1;
  }
  return;
}

