
void __ZN18tracing_subscriber6filter3env9EnvFilter20try_from_default_env17hedbfae85a42b1052E
               (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 unaff_x21;
  undefined8 auStack_7c0 [10];
  undefined8 uStack_770;
  undefined1 uStack_758;
  int iStack_750;
  undefined4 uStack_74c;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_758 = 1;
  uVar1 = 0x8000000000000000;
  uStack_770 = 0x8000000000000000;
  auStack_7c0[0] = 6;
  __ZN3std3env7_var_os17h6bd9111edd9950c4E(&lStack_58,&UNK_109bf5c82,8);
  if ((lStack_58 == -0x8000000000000000) ||
     (func_0x0001055bf348(&iStack_750,uStack_50,uStack_48), uVar1 = uStack_50, unaff_x21 = uStack_48
     , iStack_750 == 1)) {
    param_1[2] = lStack_58;
    param_1[3] = uVar1;
    param_1[4] = unaff_x21;
    param_1[1] = 1;
    *param_1 = 2;
  }
  else {
    func_0x0001061d78f0(&iStack_750,auStack_7c0,&lStack_58);
    if (CONCAT44(uStack_74c,iStack_750) == 2) {
      param_1[4] = uStack_738;
      param_1[1] = 0;
      *param_1 = 2;
      param_1[3] = uStack_740;
      param_1[2] = uStack_748;
    }
    else {
      _memcpy(param_1,&iStack_750,0x6f8);
    }
  }
  return;
}

