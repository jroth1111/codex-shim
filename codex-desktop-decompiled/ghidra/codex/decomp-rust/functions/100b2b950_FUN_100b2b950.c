
void FUN_100b2b950(undefined2 *param_1,char *param_2,long param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_3 < 0x21) {
    if (param_3 == 0x12) {
      if (((((*param_2 == 'r') && (param_2[1] == 'a')) && (param_2[2] == 't')) &&
          ((((param_2[3] == 'e' && (param_2[4] == '_')) &&
            ((param_2[5] == 'l' && ((param_2[6] == 'i' && (param_2[7] == 'm')))))) &&
           (param_2[8] == 'i')))) &&
         (((((param_2[9] == 't' && (param_2[10] == '_')) && (param_2[0xb] == 'r')) &&
           ((param_2[0xc] == 'e' && (param_2[0xd] == 'a')))) &&
          (((param_2[0xe] == 'c' && ((param_2[0xf] == 'h' && (param_2[0x10] == 'e')))) &&
           (param_2[0x11] == 'd')))))) {
        *param_1 = 0;
        return;
      }
    }
    else if ((((((((param_3 == 0x20) && (*param_2 == 'w')) && (param_2[1] == 'o')) &&
                ((param_2[2] == 'r' && (param_2[3] == 'k')))) && (param_2[4] == 's')) &&
              (((param_2[5] == 'p' && (param_2[6] == 'a')) &&
               ((param_2[7] == 'c' &&
                (((param_2[8] == 'e' && (param_2[9] == '_')) && (param_2[10] == 'o')))))))) &&
             ((param_2[0xb] == 'w' && (param_2[0xc] == 'n')))) &&
            ((((param_2[0xd] == 'e' &&
               (((param_2[0xe] == 'r' && (param_2[0xf] == '_')) &&
                ((param_2[0x10] == 'c' &&
                 (((param_2[0x11] == 'r' && (param_2[0x12] == 'e')) && (param_2[0x13] == 'd'))))))))
              && (((param_2[0x14] == 'i' && (param_2[0x15] == 't')) && (param_2[0x16] == 's')))) &&
             ((((param_2[0x17] == '_' && (param_2[0x18] == 'd')) &&
               ((param_2[0x19] == 'e' &&
                ((((param_2[0x1a] == 'p' && (param_2[0x1b] == 'l')) && (param_2[0x1c] == 'e')) &&
                 ((param_2[0x1d] == 't' && (param_2[0x1e] == 'e')))))))) && (param_2[0x1f] == 'd')))
             ))) {
      uVar2 = 0x100;
      goto LAB_100b2c0f0;
    }
  }
  else if (param_3 == 0x21) {
    if ((((*param_2 == 'w') && (param_2[1] == 'o')) &&
        ((param_2[2] == 'r' &&
         ((((param_2[3] == 'k' && (param_2[4] == 's')) && (param_2[5] == 'p')) &&
          ((param_2[6] == 'a' && (param_2[7] == 'c')))))))) &&
       ((((param_2[8] == 'e' && ((param_2[9] == '_' && (param_2[10] == 'm')))) &&
         ((param_2[0xb] == 'e' &&
          (((param_2[0xc] == 'm' && (param_2[0xd] == 'b')) && (param_2[0xe] == 'e')))))) &&
        (((((((param_2[0xf] == 'r' && (param_2[0x10] == '_')) && (param_2[0x11] == 'c')) &&
            ((param_2[0x12] == 'r' && (param_2[0x13] == 'e')))) &&
           ((param_2[0x14] == 'd' &&
            (((param_2[0x15] == 'i' && (param_2[0x16] == 't')) && (param_2[0x17] == 's')))))) &&
          ((param_2[0x18] == '_' && (param_2[0x19] == 'd')))) &&
         ((param_2[0x1a] == 'e' &&
          (((param_2[0x1b] == 'p' && (param_2[0x1c] == 'l')) &&
           ((param_2[0x1d] == 'e' &&
            (((param_2[0x1e] == 't' && (param_2[0x1f] == 'e')) && (param_2[0x20] == 'd')))))))))))))
       ) {
      uVar2 = 0x200;
      goto LAB_100b2c0f0;
    }
  }
  else if (param_3 == 0x23) {
    if ((((*param_2 == 'w') && (param_2[1] == 'o')) &&
        ((param_2[2] == 'r' && (((param_2[3] == 'k' && (param_2[4] == 's')) && (param_2[5] == 'p')))
         ))) && (((param_2[6] == 'a' && (param_2[7] == 'c')) &&
                 ((((param_2[8] == 'e' &&
                    (((param_2[9] == '_' && (param_2[10] == 'o')) &&
                     ((param_2[0xb] == 'w' &&
                      ((((((param_2[0xc] == 'n' && (param_2[0xd] == 'e')) && (param_2[0xe] == 'r'))
                         && ((param_2[0xf] == '_' && (param_2[0x10] == 'u')))) &&
                        (param_2[0x11] == 's')) &&
                       ((param_2[0x12] == 'a' && (param_2[0x13] == 'g')))))))))) &&
                   ((param_2[0x14] == 'e' &&
                    (((param_2[0x15] == '_' && (param_2[0x16] == 'l')) && (param_2[0x17] == 'i')))))
                   ) && ((((param_2[0x18] == 'm' && (param_2[0x19] == 'i')) &&
                          ((((param_2[0x1a] == 't' &&
                             ((param_2[0x1b] == '_' && (param_2[0x1c] == 'r')))) &&
                            (param_2[0x1d] == 'e')) &&
                           (((param_2[0x1e] == 'a' && (param_2[0x1f] == 'c')) &&
                            (param_2[0x20] == 'h')))))) &&
                         ((param_2[0x21] == 'e' && (param_2[0x22] == 'd')))))))))) {
      uVar2 = 0x300;
LAB_100b2c0f0:
      *param_1 = uVar2;
      return;
    }
  }
  else if (((((param_3 == 0x24) && (*param_2 == 'w')) &&
            (((param_2[1] == 'o' &&
              (((param_2[2] == 'r' && (param_2[3] == 'k')) && (param_2[4] == 's')))) &&
             (((param_2[5] == 'p' && (param_2[6] == 'a')) && (param_2[7] == 'c')))))) &&
           ((param_2[8] == 'e' && (param_2[9] == '_')))) &&
          ((((param_2[10] == 'm' &&
             (((param_2[0xb] == 'e' && (param_2[0xc] == 'm')) && (param_2[0xd] == 'b')))) &&
            (((param_2[0xe] == 'e' && (param_2[0xf] == 'r')) &&
             ((param_2[0x10] == '_' &&
              ((((param_2[0x11] == 'u' && (param_2[0x12] == 's')) &&
                ((param_2[0x13] == 'a' &&
                 ((((param_2[0x14] == 'g' && (param_2[0x15] == 'e')) && (param_2[0x16] == '_')) &&
                  ((param_2[0x17] == 'l' && (param_2[0x18] == 'i')))))))) && (param_2[0x19] == 'm'))
              )))))) &&
           (((param_2[0x1a] == 'i' && (param_2[0x1b] == 't')) &&
            ((((param_2[0x1c] == '_' &&
               (((param_2[0x1d] == 'r' && (param_2[0x1e] == 'e')) && (param_2[0x1f] == 'a')))) &&
              (((param_2[0x20] == 'c' && (param_2[0x21] == 'h')) && (param_2[0x22] == 'e')))) &&
             (param_2[0x23] == 'd')))))))) {
    uVar2 = 0x400;
    goto LAB_100b2c0f0;
  }
  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_48,param_2,param_3);
  uVar1 = FUN_1087e4494(uStack_40,uStack_38,&UNK_10b2227e8,5);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined1 *)param_1 = 1;
  if ((uStack_48 & 0x7fffffffffffffff) != 0) {
    _free(uStack_40);
  }
  return;
}

