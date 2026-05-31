
void FUN_1007db7f4(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte abStack_498 [24];
  undefined8 uStack_480;
  long lStack_478;
  long lStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined *puStack_450;
  undefined1 auStack_448 [464];
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  byte bStack_98;
  char cStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lStack_470 = param_2 + param_3 * 0x40;
  abStack_498[0] = 0x16;
  puStack_468 = &UNK_10b222a68;
  uStack_460 = 2;
  puVar6 = (undefined8 *)((ulong)abStack_498 | 1);
  puVar7 = (undefined8 *)((ulong)&uStack_278 | 1);
  lStack_478 = param_2;
  while( true ) {
    uStack_278 = &UNK_108cde34c;
    puStack_270 = (undefined *)0x4;
    puStack_268 = &UNK_108caf1ae;
    uStack_260 = 7;
    FUN_1014acaf4(&uStack_458,abStack_498,&uStack_278);
    bVar1 = abStack_498[0];
    puVar4 = puStack_450;
    if (((ulong)uStack_458 & 1) != 0) break;
    if (uStack_458._1_1_ != '\x02') {
      if (uStack_458._1_1_ == '\0') {
        FUN_1014acc08(&uStack_278,abStack_498);
        if (((ulong)uStack_278 & 1) == 0) {
          bVar1 = uStack_278._1_1_;
          puVar7 = (undefined8 *)((ulong)&uStack_278 | 1);
          goto LAB_1007dba24;
        }
        *param_1 = 5;
        param_1[1] = puStack_270;
        goto LAB_1007dbaa0;
      }
      if (uStack_458._1_1_ == '\x01') {
        abStack_498[0] = 0x16;
        if (bVar1 != 0x16) {
          cStack_97 = (char)*(undefined4 *)puVar6;
          uStack_96 = (undefined2)((uint)*(undefined4 *)puVar6 >> 8);
          uStack_94 = *(undefined4 *)((long)puVar6 + 3);
          uStack_80 = uStack_480;
          uStack_88 = (undefined1)abStack_498._16_8_;
          uStack_87 = SUB87(abStack_498._16_8_,1);
          bStack_98 = bVar1;
          uStack_90 = (undefined1)abStack_498._8_8_;
          uStack_8f = SUB87(abStack_498._8_8_,1);
          puVar7 = (undefined8 *)((ulong)&uStack_278 | 1);
          goto LAB_1007db99c;
        }
        puVar4 = (undefined *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
      }
      else {
        uStack_458 = &UNK_108cde34c;
        puStack_450 = (undefined *)0x4;
        uStack_278 = (byte *)&uStack_458;
        puStack_270 = &DAT_100c7b3a0;
        puVar4 = (undefined *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_278);
      }
      break;
    }
    abStack_498[0] = 0x16;
    if (bVar1 == 0x16) {
      puVar4 = (undefined *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
      break;
    }
    uVar5 = *puVar6;
    puVar7[1] = puVar6[1];
    *puVar7 = uVar5;
    uVar5 = *(undefined8 *)((long)puVar6 + 0xf);
    *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)((long)puVar6 + 0x17);
    *(undefined8 *)((long)puVar7 + 0xf) = uVar5;
    uStack_278 = (byte *)CONCAT71(uStack_278._1_7_,bVar1);
    FUN_100e077ec(&uStack_278);
  }
LAB_1007dba98:
  *param_1 = 5;
  param_1[1] = puVar4;
  goto LAB_1007dbaa0;
LAB_1007dba24:
  uStack_278 = &UNK_108cde34c;
  puStack_270 = (undefined *)0x4;
  puStack_268 = &UNK_108caf1ae;
  uStack_260 = 7;
  FUN_1014acaf4(&uStack_458,abStack_498,&uStack_278);
  bVar2 = abStack_498[0];
  puVar4 = puStack_450;
  if (((ulong)uStack_458 & 1) != 0) goto LAB_1007dba98;
  if (uStack_458._1_1_ == '\x03') {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        uStack_458 = &UNK_108caf1ae;
        puStack_450 = (undefined *)0x7;
        uStack_278 = (byte *)&uStack_458;
        puStack_270 = &DAT_100c7b3a0;
        puVar4 = (undefined *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_278);
      }
      else {
        uStack_458 = &UNK_108caf1ae;
        puStack_450 = (undefined *)0x7;
        uStack_278 = (byte *)&uStack_458;
        puStack_270 = &DAT_100c7b3a0;
        puVar4 = (undefined *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_278);
      }
    }
    else if (bVar1 == 2) {
      uStack_458 = &UNK_108caf1ae;
      puStack_450 = (undefined *)0x7;
      uStack_278 = (byte *)&uStack_458;
      puStack_270 = &DAT_100c7b3a0;
      puVar4 = (undefined *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_278);
    }
    else if (bVar1 == 3) {
      uStack_458 = &UNK_108caf1ae;
      puStack_450 = (undefined *)0x7;
      uStack_278 = (byte *)&uStack_458;
      puStack_270 = &DAT_100c7b3a0;
      puVar4 = (undefined *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_278);
    }
    else {
      uStack_458 = &UNK_108caf1ae;
      puStack_450 = (undefined *)0x7;
      uStack_278 = (byte *)&uStack_458;
      puStack_270 = &DAT_100c7b3a0;
      puVar4 = (undefined *)thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_278);
    }
    goto LAB_1007dba98;
  }
  if (uStack_458._1_1_ == '\0') {
    uStack_458 = &UNK_108cde34c;
    puStack_450 = (undefined *)0x4;
    uStack_278 = (byte *)&uStack_458;
    puStack_270 = &DAT_100c7b3a0;
    puVar4 = (undefined *)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_278);
    goto LAB_1007dba98;
  }
  if (uStack_458._1_1_ == '\x01') {
    abStack_498[0] = 0x16;
    if (bVar2 == 0x16) {
      puVar4 = (undefined *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
      goto LAB_1007dbdb4;
    }
    uVar5 = *puVar6;
    uStack_8f = (undefined7)puVar6[1];
    cStack_97 = (char)uVar5;
    uStack_96 = (undefined2)((ulong)uVar5 >> 8);
    uStack_94 = (undefined4)((ulong)uVar5 >> 0x18);
    uStack_90 = (undefined1)((ulong)uVar5 >> 0x38);
    uStack_80 = *(undefined8 *)((long)puVar6 + 0x17);
    uStack_88 = (undefined1)*(undefined8 *)((long)puVar6 + 0xf);
    uStack_87 = (undefined7)((ulong)*(undefined8 *)((long)puVar6 + 0xf) >> 8);
    bStack_98 = bVar2;
    FUN_100adb950(&uStack_278,bVar1,&bStack_98);
    puVar4 = puStack_270;
    pbVar3 = uStack_278;
    if (uStack_278 == (byte *)0x5) goto LAB_1007dbdb4;
    _memcpy(auStack_448,&puStack_268,0x1d0);
    uStack_458 = pbVar3;
    puStack_450 = puVar4;
    puVar7 = (undefined8 *)((ulong)&uStack_278 | 1);
    goto LAB_1007dbd30;
  }
  abStack_498[0] = 0x16;
  if (bVar2 == 0x16) {
    puVar4 = (undefined *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
    goto LAB_1007dba98;
  }
  uVar5 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar5;
  uVar5 = *(undefined8 *)((long)puVar6 + 0xf);
  *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)((long)puVar6 + 0x17);
  *(undefined8 *)((long)puVar7 + 0xf) = uVar5;
  uStack_278 = (byte *)CONCAT71(uStack_278._1_7_,bVar2);
  FUN_100e077ec(&uStack_278);
  goto LAB_1007dba24;
LAB_1007dbd30:
  uStack_278 = &UNK_108cde34c;
  puStack_270 = (undefined *)0x4;
  puStack_268 = &UNK_108caf1ae;
  uStack_260 = 7;
  FUN_1014acaf4(&bStack_98,abStack_498,&uStack_278);
  bVar1 = abStack_498[0];
  if ((bStack_98 & 1) != 0) goto LAB_1007dbedc;
  if (cStack_97 != '\x02') {
    if (cStack_97 == '\0') {
      bStack_98 = 0x4c;
      cStack_97 = -0x1d;
      uStack_96 = 0x8cd;
      uStack_94 = 1;
      uStack_90 = 4;
      uStack_8f = 0;
      uStack_278 = &bStack_98;
      puStack_270 = &DAT_100c7b3a0;
      uVar5 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_278);
    }
    else {
      if (cStack_97 != '\x01') goto LAB_1007dbec8;
      bStack_98 = 0xae;
      cStack_97 = -0xf;
      uStack_96 = 0x8ca;
      uStack_94 = 1;
      uStack_90 = 7;
      uStack_8f = 0;
      uStack_278 = &bStack_98;
      puStack_270 = &DAT_100c7b3a0;
      uVar5 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_278);
    }
    *param_1 = 5;
    param_1[1] = uVar5;
    FUN_100e068b8(&uStack_458);
    goto LAB_1007dbaa0;
  }
  abStack_498[0] = 0x16;
  if (bVar1 == 0x16) {
    uVar5 = thunk_FUN_1088561c0(&UNK_108cde170,0x10);
    goto LAB_1007dbf7c;
  }
  uVar5 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar5;
  uVar5 = *(undefined8 *)((long)puVar6 + 0xf);
  *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)((long)puVar6 + 0x17);
  *(undefined8 *)((long)puVar7 + 0xf) = uVar5;
  uStack_278 = (byte *)CONCAT71(uStack_278._1_7_,bVar1);
  FUN_100e077ec(&uStack_278);
  goto LAB_1007dbd30;
LAB_1007db99c:
  uStack_278 = &UNK_108cde34c;
  puStack_270 = (undefined *)0x4;
  puStack_268 = &UNK_108caf1ae;
  uStack_260 = 7;
  FUN_1014acaf4(&uStack_458,abStack_498,&uStack_278);
  bVar1 = abStack_498[0];
  puVar4 = puStack_450;
  if (((ulong)uStack_458 & 1) != 0) goto LAB_1007dbc14;
  if (uStack_458._1_1_ == '\x03') {
    uStack_458 = &UNK_108cde34c;
    puStack_450 = (undefined *)0x4;
    uStack_278 = (byte *)&uStack_458;
    puStack_270 = &DAT_100c7b3a0;
    uVar5 = thunk_FUN_108856088(s_missing_field_____108ac28f7,&uStack_278);
LAB_1007dbb00:
    *param_1 = 5;
    param_1[1] = uVar5;
    FUN_100e077ec(&bStack_98);
    goto LAB_1007dbaa0;
  }
  if (uStack_458._1_1_ == '\0') {
    FUN_1014acc08(&uStack_278,abStack_498);
    puVar4 = puStack_270;
    if (((ulong)uStack_278 & 1) == 0) {
      FUN_100adb950(&uStack_278,uStack_278._1_1_,&bStack_98);
      puVar4 = puStack_270;
      pbVar3 = uStack_278;
      if (uStack_278 == (byte *)0x5) goto LAB_1007dbdb4;
      _memcpy(auStack_448,&puStack_268,0x1d0);
      uStack_458 = pbVar3;
      puStack_450 = puVar4;
      puVar7 = (undefined8 *)((ulong)&uStack_278 | 1);
      goto LAB_1007dbdec;
    }
    goto LAB_1007dbc14;
  }
  if (uStack_458._1_1_ == '\x01') {
    uStack_458 = &UNK_108caf1ae;
    puStack_450 = (undefined *)0x7;
    uStack_278 = (byte *)&uStack_458;
    puStack_270 = &DAT_100c7b3a0;
    uVar5 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_278);
    goto LAB_1007dbb00;
  }
  abStack_498[0] = 0x16;
  if (bVar1 == 0x16) {
    puVar4 = (undefined *)thunk_FUN_1088561c0(&UNK_108cde170,0x10);
    goto LAB_1007dbc14;
  }
  uVar5 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar5;
  uVar5 = *(undefined8 *)((long)puVar6 + 0xf);
  *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)((long)puVar6 + 0x17);
  *(undefined8 *)((long)puVar7 + 0xf) = uVar5;
  uStack_278 = (byte *)CONCAT71(uStack_278._1_7_,bVar1);
  FUN_100e077ec(&uStack_278);
  goto LAB_1007db99c;
LAB_1007dbdb4:
  *param_1 = 5;
  param_1[1] = puVar4;
  goto LAB_1007dbaa0;
LAB_1007dbdec:
  uStack_278 = &UNK_108cde34c;
  puStack_270 = (undefined *)0x4;
  puStack_268 = &UNK_108caf1ae;
  uStack_260 = 7;
  FUN_1014acaf4(&uStack_78,abStack_498,&uStack_278);
  bVar1 = abStack_498[0];
  uVar5 = uStack_70;
  if (((ulong)uStack_78 & 1) != 0) goto LAB_1007dbfa0;
  if (uStack_78._1_1_ != '\x02') {
    if (uStack_78._1_1_ == '\0') {
      uStack_78 = &UNK_108cde34c;
      uStack_70 = 4;
      uStack_278 = (byte *)&uStack_78;
      puStack_270 = &DAT_100c7b3a0;
      uVar5 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_278);
    }
    else {
      if (uStack_78._1_1_ != '\x01') goto LAB_1007dbec8;
      uStack_78 = &UNK_108caf1ae;
      uStack_70 = 7;
      uStack_278 = (byte *)&uStack_78;
      puStack_270 = &DAT_100c7b3a0;
      uVar5 = thunk_FUN_108856088(s_duplicate_field_____108ac2973,&uStack_278);
    }
    *param_1 = 5;
    param_1[1] = uVar5;
    FUN_100e068b8(&uStack_458);
    goto LAB_1007dbaa0;
  }
  abStack_498[0] = 0x16;
  if (bVar1 == 0x16) {
    uVar5 = thunk_FUN_1088561c0(&UNK_108cde170,0x10);
    goto LAB_1007dbfa0;
  }
  uVar5 = *puVar6;
  puVar7[1] = puVar6[1];
  *puVar7 = uVar5;
  uVar5 = *(undefined8 *)((long)puVar6 + 0xf);
  *(undefined8 *)((long)puVar7 + 0x17) = *(undefined8 *)((long)puVar6 + 0x17);
  *(undefined8 *)((long)puVar7 + 0xf) = uVar5;
  uStack_278 = (byte *)CONCAT71(uStack_278._1_7_,bVar1);
  FUN_100e077ec(&uStack_278);
  goto LAB_1007dbdec;
LAB_1007dbec8:
  _memcpy(param_1,&uStack_458,0x1e0);
  goto LAB_1007dbaa0;
LAB_1007dbfa0:
  *param_1 = 5;
  param_1[1] = uVar5;
  FUN_100e068b8(&uStack_458);
  goto LAB_1007dbaa0;
LAB_1007dbc14:
  *param_1 = 5;
  param_1[1] = puVar4;
  FUN_100e077ec(&bStack_98);
  goto LAB_1007dbaa0;
LAB_1007dbedc:
  uVar5 = CONCAT71(uStack_8f,uStack_90);
LAB_1007dbf7c:
  *param_1 = 5;
  param_1[1] = uVar5;
  FUN_100e068b8(&uStack_458);
LAB_1007dbaa0:
  if (abStack_498[0] != 0x16) {
    FUN_100e077ec(abStack_498);
  }
  return;
}

