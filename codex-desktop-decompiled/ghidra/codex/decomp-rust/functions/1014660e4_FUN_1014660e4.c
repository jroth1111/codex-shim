
void FUN_1014660e4(ushort *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  byte bVar6;
  undefined1 uVar7;
  short sStack_140;
  undefined4 uStack_13e;
  ushort uStack_13a;
  undefined8 uStack_138;
  char *pcStack_130;
  char *pcStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  char cStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined8 uStack_99;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  
  cVar3 = *param_2;
  if ((cVar3 == '\f') || (cVar3 == '\r')) {
    bVar6 = 0;
    uStack_c8 = *(undefined8 *)(param_2 + 8);
    uStack_d0 = *(undefined8 *)param_2;
    uStack_b8 = *(undefined8 *)(param_2 + 0x18);
    uStack_c0 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = 0x16;
LAB_1014661d8:
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_67 = uStack_a8;
    uStack_6f = (undefined7)uStack_b0;
    uStack_68 = (undefined1)((ulong)uStack_b0 >> 0x38);
    uStack_58 = uStack_99;
    uStack_60 = uStack_a1;
    uStack_5f = uStack_a0;
    uStack_70 = uVar7;
    func_0x000100ad2678(&sStack_140,&uStack_90);
    bVar1 = (bool)(bVar6 ^ 1);
    if (cVar3 == '\x15') {
      bVar1 = true;
    }
    if (bVar1) goto joined_r0x0001014662c4;
  }
  else {
    if (cVar3 == '\x15') {
      uStack_120 = *(undefined8 *)(param_2 + 8);
      pcStack_130 = *(char **)(param_2 + 0x10);
      lVar5 = *(long *)(param_2 + 0x18);
      pcStack_118 = pcStack_130 + lVar5 * 0x40;
      pcStack_128 = pcStack_130;
      if (lVar5 == 0) {
LAB_101466234:
        uStack_90 = CONCAT71(uStack_90._1_7_,0xb);
        uStack_138 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                               (&uStack_90,&UNK_10b20a580,&UNK_10b20a590);
        sStack_140 = 1;
      }
      else {
        pcVar4 = pcStack_130 + 0x40;
        cVar2 = *pcStack_130;
        pcStack_128 = pcVar4;
        if (cVar2 == '\x16') goto LAB_101466234;
        uStack_107 = (undefined7)*(undefined8 *)(pcStack_130 + 9);
        uStack_10f = (undefined7)*(undefined8 *)(pcStack_130 + 1);
        uStack_108 = (undefined1)((ulong)*(undefined8 *)(pcStack_130 + 1) >> 0x38);
        uStack_f8 = *(undefined8 *)(pcStack_130 + 0x18);
        uStack_c0 = *(undefined8 *)(pcStack_130 + 0x10);
        uStack_e8 = *(undefined8 *)(pcStack_130 + 0x28);
        uStack_f0 = *(undefined8 *)(pcStack_130 + 0x20);
        uStack_100 = (undefined1)uStack_c0;
        uStack_ff = (undefined7)((ulong)uStack_c0 >> 8);
        uStack_d8 = *(undefined8 *)(pcStack_130 + 0x38);
        uStack_e0 = *(undefined8 *)(pcStack_130 + 0x30);
        cStack_110 = cVar2;
        if (lVar5 == 1) {
LAB_10146619c:
          uStack_c8 = CONCAT71(uStack_107,uStack_108);
          uStack_d0 = CONCAT71(uStack_10f,cVar2);
          uVar7 = (undefined1)uStack_f0;
          uStack_b0 = *(undefined8 *)(pcStack_130 + 0x21);
          uStack_a8 = (undefined7)*(undefined8 *)(pcStack_130 + 0x29);
          uStack_99 = *(undefined8 *)(pcStack_130 + 0x38);
          uStack_a1 = (undefined1)*(undefined8 *)(pcStack_130 + 0x30);
          uStack_a0 = (undefined7)((ulong)*(undefined8 *)(pcStack_130 + 0x30) >> 8);
          uStack_b8 = uStack_f8;
          FUN_100d34830(&pcStack_130);
          bVar6 = 1;
          goto LAB_1014661d8;
        }
        pcStack_128 = pcStack_130 + 0x80;
        uStack_88 = *(undefined8 *)(pcStack_130 + 0x48);
        uStack_90 = *(undefined8 *)pcVar4;
        uStack_78 = *(undefined8 *)(pcStack_130 + 0x58);
        uStack_80 = *(undefined8 *)(pcStack_130 + 0x50);
        uStack_58 = *(undefined8 *)(pcStack_130 + 0x78);
        uStack_68 = (undefined1)*(undefined8 *)(pcStack_130 + 0x68);
        uStack_67 = (undefined7)((ulong)*(undefined8 *)(pcStack_130 + 0x68) >> 8);
        uStack_70 = (undefined1)*(undefined8 *)(pcStack_130 + 0x60);
        uStack_6f = (undefined7)((ulong)*(undefined8 *)(pcStack_130 + 0x60) >> 8);
        uStack_60 = (undefined1)*(undefined8 *)(pcStack_130 + 0x70);
        uStack_5f = (undefined7)((ulong)*(undefined8 *)(pcStack_130 + 0x70) >> 8);
        if ((char)uStack_90 == '\x16') goto LAB_10146619c;
        FUN_100e077ec(&uStack_90);
        FUN_100e077ec(&uStack_70);
        uStack_90 = CONCAT71(uStack_90._1_7_,0xb);
        uStack_138 = __ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                               (&uStack_90,&UNK_10b20a580,&UNK_10b20a590);
        sStack_140 = 1;
        FUN_100e077ec(&uStack_f0);
        FUN_100e077ec(&cStack_110);
      }
      FUN_100d34830(&pcStack_130);
      goto joined_r0x0001014662c4;
    }
    FUN_1088556a8(&uStack_90,param_2);
    uStack_138 = func_0x000108a4a50c(&uStack_90,&UNK_10b20a5b0,&UNK_10b20a590);
    sStack_140 = 1;
  }
  FUN_100e077ec(param_2);
joined_r0x0001014662c4:
  if (sStack_140 != 1) {
    *(undefined4 *)(param_1 + 1) = uStack_13e;
    param_1[3] = uStack_13a;
  }
  else {
    *(undefined8 *)(param_1 + 4) = uStack_138;
  }
  *param_1 = (ushort)(sStack_140 == 1);
  return;
}

