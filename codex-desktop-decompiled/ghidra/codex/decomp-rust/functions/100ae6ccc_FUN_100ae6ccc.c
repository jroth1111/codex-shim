
void FUN_100ae6ccc(undefined8 *param_1,int *param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  int *piStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  int **ppiStack_68;
  undefined *puStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_3 < 5) {
    if (param_3 == 3) {
      if ((short)*param_2 == 0x7361 && *(char *)((long)param_2 + 2) == 'h') {
        *(undefined1 *)(param_1 + 1) = 2;
        *param_1 = 2;
        return;
      }
      if ((short)*param_2 == 0x6f73 && *(char *)((long)param_2 + 2) == 'l') {
        *(undefined1 *)(param_1 + 1) = 0xf;
        *param_1 = 2;
        return;
      }
    }
    else if (param_3 == 4) {
      if (*param_2 == 0x65766f63) {
        *(undefined1 *)(param_1 + 1) = 7;
        *param_1 = 2;
        return;
      }
      if (*param_2 == 0x6f686365) {
        *(undefined1 *)(param_1 + 1) = 8;
        *param_1 = 2;
        return;
      }
      if (*param_2 == 0x65676173) {
        *(undefined1 *)(param_1 + 1) = 0xd;
        *param_1 = 2;
        return;
      }
      if (*param_2 == 0x656c6176) {
        *(undefined1 *)(param_1 + 1) = 0x11;
        *param_1 = 2;
        return;
      }
    }
  }
  else if (param_3 == 7) {
    if (*param_2 == 0x696e756a && *(int *)((long)param_2 + 3) == 0x72657069) {
      *(undefined1 *)(param_1 + 1) = 10;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x6d696873 && *(int *)((long)param_2 + 3) == 0x72656d6d) {
      *(undefined1 *)(param_1 + 1) = 0xe;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 6) {
    if (*param_2 == 0x6c6c6162 && (short)param_2[1] == 0x6461) {
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x65657262 && (short)param_2[1] == 0x657a) {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x75727073 && (short)param_2[1] == 0x6563) {
      *(undefined1 *)(param_1 + 1) = 0x10;
      *param_1 = 2;
      return;
    }
  }
  else if (param_3 == 5) {
    if (*param_2 == 0x6f6c6c61 && (char)param_2[1] == 'y') {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x6f627261 && (char)param_2[1] == 'r') {
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x61646563 && (char)param_2[1] == 'r') {
      *(undefined1 *)(param_1 + 1) = 5;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x61726f63 && (char)param_2[1] == 'l') {
      *(undefined1 *)(param_1 + 1) = 6;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x65626d65 && (char)param_2[1] == 'r') {
      *(undefined1 *)(param_1 + 1) = 9;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x6c70616d && (char)param_2[1] == 'e') {
      *(undefined1 *)(param_1 + 1) = 0xb;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x6972616d && (char)param_2[1] == 'n') {
      *(undefined1 *)(param_1 + 1) = 0xc;
      *param_1 = 2;
      return;
    }
    if (*param_2 == 0x73726576 && (char)param_2[1] == 'e') {
      *(undefined1 *)(param_1 + 1) = 0x12;
      *param_1 = 2;
      return;
    }
  }
  puStack_78 = &UNK_10b222c98;
  uStack_70 = 0x13;
  ppiStack_68 = &piStack_88;
  puStack_60 = &DAT_100c7b3a0;
  ppuStack_58 = &puStack_78;
  puStack_50 = &
               __ZN60__LT_serde_core__de__OneOf_u20_as_u20_core__fmt__Display_GT_3fmt17hd5744e9bc51436a2E
  ;
  piStack_88 = param_2;
  lStack_80 = param_3;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_48,s_unknown_variant______expected_108ac2989,&ppiStack_68);
  if (lStack_38 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = _malloc(lStack_38);
    if (lVar2 == 0) {
      func_0x0001087c9084(1,lStack_38);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1087e4560);
      (*pcVar1)();
    }
  }
  _memcpy(lVar2,uStack_40,lStack_38);
  param_1[3] = lStack_38;
  param_1[4] = lVar2;
  param_1[5] = lStack_38;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 8;
  *param_1 = 0;
  if (lStack_48 != 0) {
    _free(uStack_40);
  }
  return;
}

