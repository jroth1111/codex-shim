
void FUN_100ae63a0(undefined2 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 5) {
    if (param_3 == 3) {
      if (*param_2 == 0x61) {
        if ((param_2[1] != 0x73) || (param_2[2] != 0x68)) goto LAB_100ae6894;
        uVar3 = 0x200;
      }
      else {
        if (((*param_2 != 0x73) || (param_2[1] != 0x6f)) || (param_2[2] != 0x6c))
        goto LAB_100ae6894;
        uVar3 = 0xf00;
      }
    }
    else {
      if (param_3 != 4) goto LAB_100ae6894;
      bVar1 = *param_2;
      if (bVar1 < 0x73) {
        if (bVar1 == 99) {
          if (((param_2[1] != 0x6f) || (param_2[2] != 0x76)) || (param_2[3] != 0x65))
          goto LAB_100ae6894;
          uVar3 = 0x700;
        }
        else {
          if (((bVar1 != 0x65) || (param_2[1] != 99)) ||
             ((param_2[2] != 0x68 || (param_2[3] != 0x6f)))) goto LAB_100ae6894;
          uVar3 = 0x800;
        }
      }
      else if (bVar1 == 0x73) {
        if (((param_2[1] != 0x61) || (param_2[2] != 0x67)) || (param_2[3] != 0x65))
        goto LAB_100ae6894;
        uVar3 = 0xd00;
      }
      else {
        if (((bVar1 != 0x76) || (param_2[1] != 0x61)) ||
           ((param_2[2] != 0x6c || (param_2[3] != 0x65)))) goto LAB_100ae6894;
        uVar3 = 0x1100;
      }
    }
  }
  else {
    if (param_3 == 5) {
      bVar1 = *param_2;
      if (bVar1 < 0x65) {
        if (bVar1 == 0x61) {
          if (param_2[1] == 0x6c) {
            if (((param_2[2] == 0x6c) && (param_2[3] == 0x6f)) && (param_2[4] == 0x79)) {
              *param_1 = 0;
              return;
            }
          }
          else if ((((param_2[1] == 0x72) && (param_2[2] == 0x62)) && (param_2[3] == 0x6f)) &&
                  (param_2[4] == 0x72)) {
            uVar3 = 0x100;
            goto LAB_100ae687c;
          }
        }
        else if (bVar1 == 99) {
          if (param_2[1] == 0x65) {
            if (((param_2[2] != 100) || (param_2[3] != 0x61)) || (param_2[4] != 0x72))
            goto LAB_100ae6894;
            uVar3 = 0x500;
          }
          else {
            if (((param_2[1] != 0x6f) || (param_2[2] != 0x72)) ||
               ((param_2[3] != 0x61 || (param_2[4] != 0x6c)))) goto LAB_100ae6894;
            uVar3 = 0x600;
          }
          goto LAB_100ae687c;
        }
      }
      else if (bVar1 == 0x65) {
        if ((((param_2[1] == 0x6d) && (param_2[2] == 0x62)) && (param_2[3] == 0x65)) &&
           (param_2[4] == 0x72)) {
          uVar3 = 0x900;
          goto LAB_100ae687c;
        }
      }
      else if (bVar1 == 0x6d) {
        if (param_2[1] == 0x61) {
          if (param_2[2] == 0x72) {
            if ((param_2[3] != 0x69) || (param_2[4] != 0x6e)) goto LAB_100ae6894;
            uVar3 = 0xc00;
          }
          else {
            if (((param_2[2] != 0x70) || (param_2[3] != 0x6c)) || (param_2[4] != 0x65))
            goto LAB_100ae6894;
            uVar3 = 0xb00;
          }
          goto LAB_100ae687c;
        }
      }
      else if ((((bVar1 == 0x76) && (param_2[1] == 0x65)) && (param_2[2] == 0x72)) &&
              ((param_2[3] == 0x73 && (param_2[4] == 0x65)))) {
        uVar3 = 0x1200;
        goto LAB_100ae687c;
      }
LAB_100ae6894:
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
      uVar2 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b222c98,0x13);
      *(undefined8 *)(param_1 + 4) = uVar2;
      *(undefined1 *)param_1 = 1;
      if ((uStack_48 & 0x7fffffffffffffff) == 0) {
        return;
      }
      _free(uStack_40);
      return;
    }
    if (param_3 == 6) {
      if (*param_2 == 0x62) {
        if (param_2[1] == 0x61) {
          if ((((param_2[2] != 0x6c) || (param_2[3] != 0x6c)) || (param_2[4] != 0x61)) ||
             (param_2[5] != 100)) goto LAB_100ae6894;
          uVar3 = 0x300;
        }
        else {
          if (((param_2[1] != 0x72) || (param_2[2] != 0x65)) ||
             ((param_2[3] != 0x65 || ((param_2[4] != 0x7a || (param_2[5] != 0x65))))))
          goto LAB_100ae6894;
          uVar3 = 0x400;
        }
      }
      else {
        if ((((*param_2 != 0x73) || (param_2[1] != 0x70)) || (param_2[2] != 0x72)) ||
           (((param_2[3] != 0x75 || (param_2[4] != 99)) || (param_2[5] != 0x65))))
        goto LAB_100ae6894;
        uVar3 = 0x1000;
      }
    }
    else {
      if (param_3 != 7) goto LAB_100ae6894;
      if (*param_2 == 0x73) {
        if (((param_2[1] != 0x68) || (param_2[2] != 0x69)) ||
           ((param_2[3] != 0x6d ||
            (((param_2[4] != 0x6d || (param_2[5] != 0x65)) || (param_2[6] != 0x72))))))
        goto LAB_100ae6894;
        uVar3 = 0xe00;
      }
      else {
        if (((((*param_2 != 0x6a) || (param_2[1] != 0x75)) ||
             ((param_2[2] != 0x6e || ((param_2[3] != 0x69 || (param_2[4] != 0x70)))))) ||
            (param_2[5] != 0x65)) || (param_2[6] != 0x72)) goto LAB_100ae6894;
        uVar3 = 0xa00;
      }
    }
  }
LAB_100ae687c:
  *param_1 = uVar3;
  return;
}

