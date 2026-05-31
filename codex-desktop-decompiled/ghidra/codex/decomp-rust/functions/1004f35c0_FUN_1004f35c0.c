
undefined8 FUN_1004f35c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_68 [24];
  
  puVar1 = param_1 + 0x95;
  bVar3 = *(byte *)(param_1 + 0x3c);
  if (bVar3 < 3) {
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        FUN_107c05cc0(&UNK_10b215a28);
      }
      FUN_107c05cc4();
LAB_1004f3a48:
      FUN_107c05cc0(&UNK_10b2187e8);
LAB_1004f3a54:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004f3a58);
      (*pcVar4)();
    }
    param_1[0x1e] = (long *)param_1[0x1c];
    param_1[0x1f] = (long *)param_1[0x1d];
    param_1[0x35] = param_1[0x18];
    param_1[0x34] = param_1[0x17];
    param_1[0x37] = param_1[0x1a];
    param_1[0x36] = param_1[0x19];
    param_1[0x38] = param_1[0x1b];
    param_1[0x2d] = param_1[0x10];
    param_1[0x2c] = param_1[0xf];
    param_1[0x2f] = param_1[0x12];
    param_1[0x2e] = param_1[0x11];
    param_1[0x31] = param_1[0x14];
    param_1[0x30] = param_1[0x13];
    param_1[0x33] = param_1[0x16];
    param_1[0x32] = param_1[0x15];
    param_1[0x25] = param_1[8];
    param_1[0x24] = param_1[7];
    param_1[0x27] = param_1[10];
    param_1[0x26] = param_1[9];
    param_1[0x29] = param_1[0xc];
    param_1[0x28] = param_1[0xb];
    param_1[0x2b] = param_1[0xe];
    param_1[0x2a] = param_1[0xd];
    param_1[0x21] = param_1[4];
    param_1[0x20] = param_1[3];
    param_1[0x23] = param_1[6];
    param_1[0x22] = param_1[5];
    *(undefined1 *)((long)param_1 + 0x1e1) = 1;
    param_1[0x3a] = param_1[1];
    param_1[0x39] = *param_1;
    param_1[0x3b] = param_1[2];
    if (param_1[0x20] == -0x7ffffffffffffffb) {
      param_1[0x3e] = param_1[5];
      param_1[0x3d] = param_1[4];
      uVar7 = param_1[6];
      param_1[0x3f] = uVar7;
      lVar10 = *(long *)param_1[0x1c] + 0x10;
      lVar9 = *(long *)param_1[0x1d] + 0x10;
      uVar6 = param_1[0x3e];
      param_1[0x8e] = uVar6;
      param_1[0x8f] = uVar7;
      param_1[0x92] = lVar10;
      param_1[0x93] = lVar9;
      *(undefined1 *)((long)param_1 + 0x4a1) = 0;
LAB_1004f36cc:
      *(undefined1 *)(param_1 + 0x94) = 0;
      param_1[0x90] = lVar10;
      param_1[0x91] = lVar9;
      param_1[0x8c] = uVar6;
      param_1[0x8d] = uVar7;
      func_0x0001013ed5e4(auStack_68);
      func_0x0001048f0450(&uStack_130,auStack_68);
      __ZN125__LT_codex_protocol__models__ResponseItem_u20_as_u20_core__convert__From_LT_codex_protocol__models__ResponseInputItem_GT__GT_4from17h66ff5ba3292144e2E
                (param_1 + 0x40,&uStack_130);
      param_1[0x96] = param_1[0x91];
      *puVar1 = param_1[0x90];
      param_1[0x97] = param_1 + 0x40;
      param_1[0x98] = 1;
      *(undefined1 *)(param_1 + 0x9d) = 0;
LAB_1004f3718:
      uVar5 = FUN_1005af7fc(puVar1,param_2);
      if ((uVar5 & 1) == 0) {
        func_0x000100d50dec(puVar1);
        __ZN14codex_protocol5items15UserMessageItem3new17h295426dc9a779359E
                  (&uStack_130,param_1[0x8c],param_1[0x8d]);
        *(undefined1 *)(param_1 + 0x94) = 1;
        param_1[0x5a] = uStack_128;
        param_1[0x59] = uStack_130;
        param_1[0x5c] = uStack_118;
        param_1[0x5b] = uStack_120;
        param_1[0x5e] = uStack_108;
        param_1[0x5d] = uStack_110;
        param_1[0x58] = 0x8000000000000000;
        param_1[0x96] = param_1[0x91];
        *puVar1 = param_1[0x90];
        param_1[0x97] = param_1 + 0x58;
        *(undefined1 *)(param_1 + 0x3b6) = 0;
LAB_1004f38d0:
        uVar5 = func_0x0001005ad358(param_1 + 0x95,param_2);
        if ((uVar5 & 1) == 0) {
          if (*(char *)(param_1 + 0x3b6) == '\x03') {
            FUN_100d1ddbc(param_1 + 0x98);
          }
          *(undefined1 *)(param_1 + 0x94) = 0;
          _memcpy(param_1 + 0x95,param_1 + 0x58,0x1a0);
          param_1[0xca] = param_1[0x91];
          param_1[0xc9] = param_1[0x90];
          *(undefined1 *)(param_1 + 0x101) = 0;
LAB_1004f391c:
          uVar5 = FUN_1005aedfc(param_1 + 0x95,param_2);
          if ((uVar5 & 1) == 0) {
            FUN_100d4e420(param_1 + 0x95);
            param_1[0x95] = param_1[0x90];
            *(undefined1 *)(param_1 + 0x191) = 0;
            goto LAB_1004f3968;
          }
          uVar8 = 5;
        }
        else {
          uVar8 = 4;
        }
      }
      else {
        uVar8 = 3;
      }
LAB_1004f397c:
      *(undefined1 *)((long)param_1 + 0x4a1) = uVar8;
      uVar6 = 1;
      uVar8 = 3;
      goto LAB_1004f3988;
    }
    uStack_168 = param_1[0x16];
    uStack_170 = param_1[0x15];
    uStack_158 = param_1[0x18];
    uStack_160 = param_1[0x17];
    uStack_148 = param_1[0x1a];
    uStack_150 = param_1[0x19];
    uStack_140 = param_1[0x1b];
    uStack_1a8 = param_1[0xe];
    uStack_1b0 = param_1[0xd];
    uStack_198 = param_1[0x10];
    uStack_1a0 = param_1[0xf];
    uStack_188 = param_1[0x12];
    uStack_190 = param_1[0x11];
    uStack_178 = param_1[0x14];
    uStack_180 = param_1[0x13];
    uStack_1e8 = param_1[6];
    uStack_1f0 = param_1[5];
    uStack_1d8 = param_1[8];
    uStack_1e0 = param_1[7];
    uStack_1c8 = param_1[10];
    uStack_1d0 = param_1[9];
    uStack_1b8 = param_1[0xc];
    uStack_1c0 = param_1[0xb];
    uStack_1f8 = param_1[4];
    uStack_200 = param_1[3];
    __ZN125__LT_codex_protocol__models__ResponseItem_u20_as_u20_core__convert__From_LT_codex_protocol__models__ResponseInputItem_GT__GT_4from17h66ff5ba3292144e2E
              (param_1 + 0x3d,&uStack_200);
    lVar10 = *(long *)param_1[0x1f];
    param_1[0x55] = *(long *)param_1[0x1e] + 0x10;
    param_1[0x56] = lVar10 + 0x10;
    param_1[0x57] = param_1 + 0x3d;
    param_1[0x58] = 1;
    *(undefined1 *)(param_1 + 0x5d) = 0;
LAB_1004f37d0:
    uVar5 = FUN_1005af7fc(param_1 + 0x55,param_2);
    if ((uVar5 & 1) != 0) {
      uVar6 = 1;
      uVar8 = 4;
      goto LAB_1004f3988;
    }
    func_0x000100d50dec(param_1 + 0x55);
    FUN_100e02a24(param_1 + 0x3d);
LAB_1004f37fc:
    *(undefined1 *)((long)param_1 + 0x1e1) = 0;
    param_1[0x3f] = param_1[0x3b];
    param_1[0x3e] = param_1[0x3a];
    param_1[0x3d] = param_1[0x39];
    param_1[0x41] = param_1[0x1f];
    param_1[0x40] = param_1[0x1e];
    *(undefined1 *)(param_1 + 0x375) = 0;
  }
  else {
    if (bVar3 == 3) {
      bVar3 = *(byte *)((long)param_1 + 0x4a1);
      if (bVar3 < 4) {
        if (1 < bVar3) {
          if (bVar3 != 3) {
            FUN_107c05cc4(&UNK_10b2187e8);
            goto LAB_1004f3a54;
          }
          goto LAB_1004f3718;
        }
        if (bVar3 == 0) {
          lVar10 = param_1[0x92];
          lVar9 = param_1[0x93];
          uVar6 = param_1[0x8e];
          uVar7 = param_1[0x8f];
          goto LAB_1004f36cc;
        }
        goto LAB_1004f3a48;
      }
      if (bVar3 == 4) goto LAB_1004f38d0;
      if (bVar3 == 5) goto LAB_1004f391c;
LAB_1004f3968:
      uVar5 = FUN_1005b0e68(param_1 + 0x95,param_2);
      if ((uVar5 & 1) != 0) {
        uVar8 = 6;
        goto LAB_1004f397c;
      }
      if ((*(char *)(param_1 + 0x191) == '\x03') && (*(char *)(param_1 + 400) == '\x03')) {
        FUN_100c97ff8(param_1 + 0x97);
      }
      *(undefined1 *)(param_1 + 0x94) = 0;
      FUN_100e02a24(param_1 + 0x40);
      *(undefined1 *)((long)param_1 + 0x4a1) = 1;
      func_0x000100d6d4f0(param_1 + 0x40);
      lVar9 = param_1[0x3e];
      lVar10 = lVar9;
      for (lVar2 = param_1[0x3f]; lVar2 != 0; lVar2 = lVar2 + -1) {
        FUN_100e06c08(lVar10);
        lVar10 = lVar10 + 0x38;
      }
      if (param_1[0x3d] != 0) {
        _free(lVar9);
      }
      goto LAB_1004f37fc;
    }
    if (bVar3 == 4) goto LAB_1004f37d0;
  }
  uVar5 = func_0x0001004f6c44(param_1 + 0x3d,param_2);
  if ((uVar5 & 1) == 0) {
    func_0x000100ca1af4(param_1 + 0x3d);
    uVar6 = 0;
    *(undefined1 *)((long)param_1 + 0x1e1) = 0;
    uVar8 = 1;
  }
  else {
    uVar6 = 1;
    uVar8 = 5;
  }
LAB_1004f3988:
  *(undefined1 *)(param_1 + 0x3c) = uVar8;
  return uVar6;
}

