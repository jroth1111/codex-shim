
void FUN_100b2465c(undefined8 *param_1,char *param_2,long param_3)

{
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 6) {
    if (((((*param_2 != 'p') || (param_2[1] != 'r')) || (param_2[2] != 'o')) ||
        ((param_2[3] != 'm' || (param_2[4] != 'p')))) || (param_2[5] != 't')) goto LAB_100b2479c;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else if (param_3 == 7) {
    if ((((*param_2 != 'c') || (param_2[1] != 'o')) ||
        ((param_2[2] != 'm' || ((param_2[3] != 'm' || (param_2[4] != 'a')))))) ||
       ((param_2[5] != 'n' || (param_2[6] != 'd')))) {
LAB_100b2479c:
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_a0,param_2,param_3);
      FUN_1087e44e4(&uStack_88,uStack_98,uStack_90,&UNK_10b222fc8,3);
      param_1[5] = uStack_60;
      param_1[4] = uStack_68;
      param_1[7] = uStack_50;
      param_1[6] = uStack_58;
      param_1[9] = uStack_40;
      param_1[8] = uStack_48;
      param_1[10] = uStack_38;
      param_1[1] = uStack_80;
      *param_1 = uStack_88;
      param_1[3] = uStack_70;
      param_1[2] = uStack_78;
      if ((uStack_a0 & 0x7fffffffffffffff) == 0) {
        return;
      }
      _free(uStack_98);
      return;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    if (((param_3 != 5) || (*param_2 != 'a')) ||
       ((param_2[1] != 'g' || (((param_2[2] != 'e' || (param_2[3] != 'n')) || (param_2[4] != 't'))))
       )) goto LAB_100b2479c;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  *param_1 = 2;
  return;
}

