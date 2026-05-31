
void FUN_108832fe8(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  FUN_1087e4020(&lStack_78,&UNK_108c73798,8);
  lStack_98 = lStack_68;
  lStack_a0 = lStack_70;
  lStack_88 = lStack_58;
  lStack_90 = lStack_60;
  if (lStack_78 != 2) {
    param_1[6] = lStack_48;
    param_1[5] = lStack_50;
    param_1[8] = lStack_38;
    param_1[7] = lStack_40;
    param_1[10] = lStack_28;
    param_1[9] = lStack_30;
    param_1[2] = lStack_68;
    param_1[1] = lStack_70;
    param_1[4] = lStack_58;
    param_1[3] = lStack_60;
    *param_1 = lStack_78;
    return;
  }
  lStack_b8 = lStack_68;
  lStack_c0 = lStack_70;
  lStack_a8 = lStack_58;
  lStack_b0 = lStack_60;
  func_0x000107c041c4(&lStack_78,&lStack_c0);
  if (lStack_78 != 2) {
    FUN_100de3b58(&lStack_78);
    func_0x000107c041c0(&lStack_78,&lStack_c0);
    if (lStack_78 != 2) {
      FUN_100de3b58(&lStack_78);
      puVar2 = (undefined8 *)_malloc(0x41);
      if (puVar2 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x41);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x108833128);
        (*pcVar1)();
      }
      *(undefined1 *)(puVar2 + 8) = 0x79;
      puVar2[1] = 0x74616d20746f6e20;
      *puVar2 = 0x6469642061746164;
      puVar2[3] = 0x6f20746e61697261;
      puVar2[2] = 0x7620796e61206863;
      puVar2[5] = 0x206d756e65206465;
      puVar2[4] = 0x676761746e752066;
      puVar2[7] = 0x7469746e65644972;
      puVar2[6] = 0x657672655370634d;
      *param_1 = 0;
      param_1[3] = 0x41;
      param_1[4] = (long)puVar2;
      param_1[6] = 0;
      param_1[5] = 0x41;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[7] = 8;
      goto LAB_108833100;
    }
  }
  param_1[2] = lStack_68;
  param_1[1] = lStack_70;
  param_1[4] = lStack_58;
  param_1[3] = lStack_60;
  *param_1 = lStack_78;
LAB_108833100:
  FUN_100e077ec(&lStack_c0);
  return;
}

