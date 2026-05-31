
/* WARNING: Type propagation algorithm not settling */

void FUN_100445034(undefined1 param_1 [16],undefined1 param_2 [16],byte *******param_3,
                  byte *******param_4,undefined1 *param_5,undefined *param_6)

{
  code *pcVar1;
  byte *******pppppppbVar2;
  undefined1 in_ZR;
  byte bVar3;
  byte *******pppppppbVar4;
  byte ******ppppppbVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******unaff_x19;
  byte ******unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  byte *******unaff_x23;
  byte *******unaff_x24;
  undefined1 unaff_w25;
  byte *******unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar8;
  undefined8 unaff_x30;
  byte *******pppppppbVar9;
  undefined8 uVar10;
  byte *****pppppbVar11;
  byte *******pppppppbVar12;
  byte ******ppppppbVar13;
  byte ******ppppppbVar14;
  byte ******ppppppbVar15;
  undefined1 auStack_1a0 [80];
  byte *******pppppppbStack_150;
  byte *******pppppppbStack_148;
  byte ******ppppppbStack_140;
  byte ******ppppppbStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  undefined1 auStack_f0 [8];
  byte ******ppppppbStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d0;
  byte bStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  byte ******ppppppbStack_b0;
  byte ******ppppppbStack_a8;
  byte ******ppppppbStack_a0;
  byte ******ppppppbStack_98;
  byte ******ppppppbStack_90;
  byte ******ppppppbStack_88;
  byte ******ppppppbStack_80;
  undefined1 auStack_71 [17];
  
  ppppppbVar15 = param_2._8_8_;
  ppppppbVar14 = param_2._0_8_;
  ppppppbVar13 = param_1._8_8_;
  pppppppbVar12 = param_1._0_8_;
  puVar8 = &stack0xfffffffffffffff0;
  bVar3 = *(byte *)param_4;
  pppppppbVar4 = (byte *******)(ulong)bVar3;
  ppppppbVar5 = (byte ******)&UNK_108c98dce;
  pppppppbVar7 = (byte *******)(ulong)*(byte *)((long)pppppppbVar4 + 0x108c98dce);
  pppppppbVar6 = (byte *******)(&UNK_100445070 + (long)pppppppbVar7 * 4);
  pppppppbVar2 = (byte *******)&pppppppbStack_150;
  pppppppbVar9 = pppppppbVar12;
  switch(bVar3) {
  case 0:
    bVar3 = *(byte *)((long)param_4 + 1);
  case 0xe4:
    pppppppbStack_d0 = (byte *******)((ulong)CONCAT61(pppppppbStack_d0._2_6_,bVar3) << 8);
    goto code_r0x000100445424;
  case 1:
    pppppppbVar4 = (byte *******)(ulong)*(byte *)((long)param_4 + 1);
  case 0xcc:
code_r0x0001004453d8:
    bStack_c8 = (byte)pppppppbVar4;
    uStack_c7 = (undefined7)((ulong)pppppppbVar4 >> 8);
    bVar3 = 1;
code_r0x0001004453e0:
    break;
  case 2:
    pppppppbVar4 = (byte *******)(ulong)*(ushort *)((long)param_4 + 2);
    goto code_r0x0001004453d8;
  case 3:
  case 0xd8:
    pppppppbVar4 = (byte *******)(ulong)*(uint *)((long)param_4 + 4);
  case 0xba:
    goto code_r0x0001004453d8;
  case 4:
    pppppppbVar4 = (byte *******)param_4[1];
    goto code_r0x0001004453d8;
  case 5:
    pppppppbVar4 = (byte *******)(long)(char)*(byte *)((long)param_4 + 1);
  case 0xb0:
  case 0xc6:
    goto code_r0x000100445418;
  case 6:
    pppppppbVar4 = (byte *******)(long)*(short *)((long)param_4 + 2);
    goto code_r0x000100445418;
  case 7:
    pppppppbVar4 = (byte *******)(long)*(int *)((long)param_4 + 4);
  case 0xb6:
  case 0xca:
code_r0x000100445418:
    bStack_c8 = (byte)pppppppbVar4;
    uStack_c7 = (undefined7)((ulong)pppppppbVar4 >> 8);
    bVar3 = 2;
    break;
  case 8:
  case 0x8a:
    pppppppbVar4 = (byte *******)param_4[1];
    goto code_r0x000100445418;
  case 9:
    pppppppbVar12 = (byte *******)(double)*(float *)((long)param_4 + 4);
  case 0xd0:
code_r0x000100445408:
    bStack_c8 = (byte)pppppppbVar12;
    uStack_c7 = (undefined7)((ulong)pppppppbVar12 >> 8);
code_r0x00010044540c:
    bVar3 = 3;
code_r0x000100445410:
    break;
  case 10:
    pppppppbVar12 = (byte *******)param_4[1];
    goto code_r0x000100445408;
  case 0xb:
  case 0xdc:
    FUN_1087e3db0(param_3,&stack0xffffffffffffffd0,&stack0xffffffffffffffef,&UNK_10b21b8b0);
    return;
  case 0xc:
    param_4 = param_4 + 1;
    puVar8 = unaff_x29;
  case 0xce:
    pppppppbVar2 = (byte *******)register0x00000008;
code_r0x00010044538c:
    *(undefined8 *)((long)pppppppbVar2 + -0x30) = unaff_x22;
    *(undefined8 *)((long)pppppppbVar2 + -0x28) = unaff_x21;
    *(byte *******)((long)pppppppbVar2 + -0x20) = unaff_x20;
    *(byte ********)((long)pppppppbVar2 + -0x18) = unaff_x19;
    *(undefined1 **)((long)pppppppbVar2 + -0x10) = puVar8;
    *(undefined8 *)((long)pppppppbVar2 + -8) = unaff_x30;
    ppppppbVar5 = param_4[1];
    ppppppbVar13 = param_4[2];
    *(byte *******)((long)pppppppbVar2 + -0x48) = ppppppbVar5;
    *(byte *******)((long)pppppppbVar2 + -0x40) = ppppppbVar13;
    *(undefined1 *)((long)pppppppbVar2 + -0x50) = 5;
    FUN_1087e3db0(param_3,(undefined1 *)((long)pppppppbVar2 + -0x50),
                  (undefined1 *)((long)pppppppbVar2 + -0x31),&UNK_10b21b8b0);
    if (*param_4 != (byte ******)0x0) {
      _free(ppppppbVar5);
    }
    return;
  case 0xd:
    bStack_c8 = (byte)param_4[1];
    uStack_c7 = (undefined7)((ulong)param_4[1] >> 8);
    uStack_c0 = SUB81(param_4[2],0);
    uStack_bf = (undefined7)((ulong)param_4[2] >> 8);
    bVar3 = 5;
  case 200:
    break;
  case 0xe:
    param_4 = param_4 + 1;
  case 0xe6:
code_r0x000100445334:
    ppppppbVar5 = param_4[1];
    FUN_1087e3db0(param_3,&stack0xffffffffffffffb0,&stack0xffffffffffffffcf,&UNK_10b21b8b0);
    if (*param_4 != (byte ******)0x0) {
      _free(ppppppbVar5);
    }
    return;
  case 0xf:
    bStack_c8 = (byte)param_4[1];
    uStack_c7 = (undefined7)((ulong)param_4[1] >> 8);
    uStack_c0 = SUB81(param_4[2],0);
    uStack_bf = (undefined7)((ulong)param_4[2] >> 8);
    bVar3 = 6;
    break;
  case 0x10:
    bVar3 = 8;
    break;
  case 0x11:
  case 0x38:
  case 0x39:
  case 0x41:
  case 100:
  case 0x65:
  case 0x69:
  case 0x6b:
  case 0x6d:
  case 0x90:
  case 0x91:
  case 0x99:
  case 0xbc:
  case 0xbd:
  case 0xc5:
  case 0xe8:
  case 0xe9:
  case 0xf1:
    unaff_x20 = param_4[1];
  case 0x3d:
  case 0x3f:
  case 0x59:
  case 0x5f:
  case 99:
  case 0x77:
  case 0x85:
  case 0x87:
  case 0x8b:
  case 0x8f:
  case 0x95:
  case 0x97:
  case 0x9a:
  case 0x9f:
  case 0xa1:
  case 0xa3:
  case 0xa9:
  case 0xad:
  case 0xb1:
  case 0xb3:
  case 0xb7:
  case 0xb9:
  case 0xbb:
  case 0xc1:
  case 0xc3:
  case 199:
  case 0xc9:
  case 0xcb:
  case 0xcd:
  case 0xcf:
  case 0xd1:
  case 0xd3:
  case 0xd5:
  case 0xd7:
  case 0xd9:
  case 0xdb:
  case 0xdd:
  case 0xdf:
  case 0xe1:
  case 0xe3:
  case 0xe5:
  case 0xe7:
  case 0xed:
  case 0xef:
    ppppppbVar13 = (byte ******)unaff_x20[1];
    pppppppbVar9 = (byte *******)*unaff_x20;
code_r0x000100445078:
    bStack_c8 = (byte)ppppppbVar13;
    uStack_c7 = (undefined7)((ulong)ppppppbVar13 >> 8);
    ppppppbVar13 = (byte ******)unaff_x20[3];
    pppppppbVar12 = (byte *******)unaff_x20[2];
    pppppppbStack_d0 = pppppppbVar9;
code_r0x000100445080:
    uStack_b8 = SUB81(ppppppbVar13,0);
    uStack_b7 = (undefined7)((ulong)ppppppbVar13 >> 8);
    uStack_c0 = SUB81(pppppppbVar12,0);
    uStack_bf = (undefined7)((ulong)pppppppbVar12 >> 8);
code_r0x000100445084:
    param_4 = (byte *******)&pppppppbStack_d0;
code_r0x000100445088:
    func_0x000107c049d4(param_3,param_4);
code_r0x000100445248:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(unaff_x20);
    return;
  case 0x12:
  case 0x58:
    bVar3 = 7;
    break;
  case 0x13:
    unaff_x20 = param_4[1];
    ppppppbVar13 = (byte ******)unaff_x20[1];
    pppppppbVar12 = (byte *******)*unaff_x20;
  case 0xfe:
    bStack_c8 = (byte)ppppppbVar13;
    uStack_c7 = (undefined7)((ulong)ppppppbVar13 >> 8);
    pppppppbStack_d0 = pppppppbVar12;
code_r0x000100445238:
    uStack_b8 = SUB81(unaff_x20[3],0);
    uStack_b7 = (undefined7)((ulong)unaff_x20[3] >> 8);
    uStack_c0 = SUB81(unaff_x20[2],0);
    uStack_bf = (undefined7)((ulong)unaff_x20[2] >> 8);
    func_0x000107c0532c(param_3,&pppppppbStack_d0);
    goto code_r0x000100445248;
  case 0x14:
    pppppppbVar4 = (byte *******)param_4[1];
    ppppppbVar5 = param_4[2];
    pppppppbVar6 = (byte *******)(ppppppbVar5 + (long)param_4[3] * 4);
    unaff_x19 = param_3;
  case 0x3e:
    param_3 = unaff_x19;
    pppppppbStack_120 = (byte *******)0x0;
    ppppppbStack_140 = ppppppbVar5;
    ppppppbStack_138 = ppppppbVar5;
    pppppppbStack_130 = pppppppbVar4;
    pppppppbStack_128 = pppppppbVar6;
    func_0x000100fbc814(&pppppppbStack_d0,&ppppppbStack_140);
    if (pppppppbStack_d0 == (byte *******)0x2) {
      param_3[1] = (byte ******)0x8000000000000000;
      *param_3 = (byte ******)0x2;
    }
    else {
code_r0x0001004452f0:
      param_3[5] = ppppppbStack_a8;
      param_3[4] = ppppppbStack_b0;
      param_3[7] = ppppppbStack_98;
      param_3[6] = ppppppbStack_a0;
      param_3[9] = ppppppbStack_88;
      param_3[8] = ppppppbStack_90;
      param_3[10] = ppppppbStack_80;
      param_3[1] = (byte ******)CONCAT71(uStack_c7,bStack_c8);
      *param_3 = (byte ******)pppppppbStack_d0;
      param_3[3] = (byte ******)CONCAT71(uStack_b7,uStack_b8);
      param_3[2] = (byte ******)CONCAT71(uStack_bf,uStack_c0);
    }
    goto code_r0x000100445438;
  case 0x15:
    pppppppbVar6 = (byte *******)param_4[1];
    pppppppbVar4 = (byte *******)param_4[2];
  case 0x40:
  case 0x6c:
  case 0x80:
  case 0x98:
  case 0xa4:
  case 0xc4:
  case 0xf0:
    pppppppbVar7 = (byte *******)param_4[3];
    ppppppbVar5 = (byte ******)((long)pppppppbVar7 << 6);
code_r0x00010044509c:
    unaff_x19 = (byte *******)((long)pppppppbVar4 + (long)ppppppbVar5);
code_r0x0001004450a0:
    pppppppbStack_120 = pppppppbVar4;
    pppppppbStack_118 = pppppppbVar4;
    pppppppbStack_110 = pppppppbVar6;
    pppppppbStack_108 = unaff_x19;
code_r0x0001004450a8:
    unaff_w25 = 0x16;
code_r0x0001004450ac:
    ppppppbStack_140 = (byte ******)CONCAT71(ppppppbStack_140._1_7_,unaff_w25);
code_r0x0001004450b0:
    pppppppbStack_100 = (byte *******)0x0;
code_r0x0001004450b4:
    pppppppbVar6 = pppppppbStack_118;
    pppppppbVar12 = pppppppbStack_100;
    if (pppppppbVar7 != (byte *******)0x0) {
code_r0x0001004450b8:
      unaff_x23 = (byte *******)0x0;
code_r0x0001004450bc:
      pppppppbVar7 = &ppppppbStack_140;
code_r0x0001004450c0:
      pppppppbVar6 = (byte *******)auStack_f0;
code_r0x0001004450c4:
      unaff_x27 = (undefined8 *)((ulong)pppppppbVar6 | 1);
code_r0x0001004450c8:
      unaff_x28 = (undefined8 *)((ulong)pppppppbVar7 | 1);
      unaff_x20 = (byte ******)((ulong)&pppppppbStack_d0 | 1);
code_r0x0001004450d4:
      ppppppbVar5 = ppppppbVar5 + -8;
code_r0x0001004450d8:
      ppppppbVar5 = (byte ******)((ulong)ppppppbVar5 >> 6);
code_r0x0001004450dc:
      pppppppbStack_150 = (byte *******)((long)ppppppbVar5 + 1);
      pppppppbStack_148 = param_3;
code_r0x0001004450e4:
      unaff_x24 = pppppppbVar4 + 8;
code_r0x0001004450e8:
      unaff_x22 = 1;
      unaff_x21 = 0xa012;
code_r0x0001004450f0:
      do {
        unaff_x26 = unaff_x24;
code_r0x0001004450f4:
        unaff_x26 = unaff_x26 + -8;
        pppppppbVar4 = (byte *******)(ulong)*(byte *)unaff_x26;
        param_3 = pppppppbStack_148;
        pppppppbVar6 = unaff_x24;
        pppppppbVar12 = unaff_x23;
        if (*(byte *)unaff_x26 == 0x16) goto code_r0x0001004452c4;
code_r0x000100445100:
        auStack_f0[0] = SUB81(pppppppbVar4,0);
code_r0x000100445104:
        ppppppbVar13 = unaff_x26[3];
        pppppppbVar12 = (byte *******)unaff_x26[2];
        ppppppbVar15 = unaff_x26[5];
        ppppppbVar14 = unaff_x26[4];
code_r0x000100445108:
        *(byte *******)((long)unaff_x27 + 0x17) = ppppppbVar13;
        *(byte ********)((long)unaff_x27 + 0xf) = pppppppbVar12;
code_r0x00010044510c:
        uVar10 = *(undefined8 *)((long)unaff_x26 + 1);
        unaff_x27[1] = *(undefined8 *)((long)unaff_x26 + 9);
        *unaff_x27 = uVar10;
code_r0x000100445114:
        ppppppbVar13 = unaff_x26[7];
        pppppppbVar12 = (byte *******)unaff_x26[6];
code_r0x000100445118:
        ppppppbStack_140 = ppppppbVar14;
        ppppppbStack_138 = ppppppbVar15;
        pppppppbStack_130 = pppppppbVar12;
        pppppppbStack_128 = (byte *******)ppppppbVar13;
code_r0x00010044511c:
        if ((uint)pppppppbVar4 < 0x10) {
code_r0x000100445124:
          param_3 = pppppppbStack_e0;
          ppppppbVar5 = ppppppbStack_e8;
          if (((int)unaff_x22 << (ulong)((uint)pppppppbVar4 & 0x1f) & (uint)unaff_x21) == 0) {
code_r0x000100445140:
            in_ZR = (int)pppppppbVar4 == 0xc;
code_r0x000100445144:
            if (!(bool)in_ZR) {
code_r0x000100445148:
              in_ZR = (int)pppppppbVar4 == 0xe;
code_r0x00010044514c:
              if (!(bool)in_ZR) goto code_r0x00010044519c;
            }
            if (ppppppbVar5 != (byte ******)0x0) {
              _free(param_3);
            }
          }
          else {
            param_3 = (byte *******)auStack_f0;
code_r0x000100445134:
            FUN_100e077ec(param_3);
          }
        }
        else {
code_r0x00010044519c:
          param_3 = (byte *******)&pppppppbStack_d0;
code_r0x0001004451a0:
          param_4 = (byte *******)auStack_f0;
          param_5 = auStack_71;
code_r0x0001004451a8:
          func_0x000107c058c8(param_3,param_4,param_5,&UNK_10b20fa80);
          pppppppbVar4 = pppppppbStack_d0;
code_r0x0001004451b8:
          if (pppppppbVar4 != (byte *******)0x2) {
            pppppppbStack_100 = (byte *******)((long)unaff_x23 + 1);
            ppppppbVar5 = (byte ******)(ulong)bStack_c8;
            pppppppbVar7 = (byte *******)&pppppppbStack_d0;
            pppppppbStack_118 = unaff_x24;
            goto code_r0x0001004451d4;
          }
        }
code_r0x000100445158:
        pppppppbVar4 = (byte *******)((ulong)ppppppbStack_140 & 0xff);
        ppppppbStack_140 = (byte ******)CONCAT71(ppppppbStack_140._1_7_,unaff_w25);
code_r0x000100445160:
        bVar3 = (byte)pppppppbVar4;
        if ((int)pppppppbVar4 == 0x16) {
          pppppppbVar4 = (byte *******)((long)unaff_x23 + 1);
          goto code_r0x000100445464;
        }
code_r0x000100445168:
        pppppbVar11 = (byte *****)*unaff_x28;
        unaff_x20[1] = (byte *****)unaff_x28[1];
        *unaff_x20 = pppppbVar11;
        uVar10 = *(undefined8 *)((long)unaff_x28 + 0xf);
        *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x28 + 0x17);
        *(undefined8 *)((long)unaff_x20 + 0xf) = uVar10;
code_r0x000100445178:
        pppppppbStack_d0 = (byte *******)CONCAT71(pppppppbStack_d0._1_7_,bVar3);
        FUN_100e077ec(&pppppppbStack_d0);
        unaff_x24 = unaff_x24 + 8;
code_r0x000100445188:
        pppppppbVar4 = unaff_x26 + 8;
        unaff_x23 = (byte *******)((long)unaff_x23 + 1);
code_r0x000100445190:
      } while (pppppppbVar4 != unaff_x19);
code_r0x000100445198:
      param_3 = pppppppbStack_148;
      pppppppbVar6 = unaff_x19;
      pppppppbVar12 = pppppppbStack_150;
    }
code_r0x0001004452c4:
    pppppppbStack_100 = pppppppbVar12;
    pppppppbStack_118 = pppppppbVar6;
    param_3[1] = (byte ******)0x8000000000000000;
    func_0x000100fbc59c(&pppppppbStack_d0,&ppppppbStack_140);
    if (pppppppbStack_d0 != (byte *******)0x2) goto code_r0x0001004452f0;
    *param_3 = (byte ******)0x2;
    goto code_r0x000100445438;
  case 0x16:
  case 0x66:
    goto code_r0x000100445168;
  default:
    goto code_r0x000100445078;
  case 0x18:
    goto code_r0x000100445178;
  case 0x1a:
    goto code_r0x000100445140;
  case 0x1c:
    goto code_r0x000100445158;
  case 0x1e:
  case 0x4c:
    goto code_r0x000100445104;
  case 0x20:
    goto code_r0x000100445188;
  case 0x22:
    goto code_r0x0001004451a0;
  case 0x24:
    goto code_r0x000100445160;
  case 0x26:
    goto code_r0x0001004451b8;
  case 0x28:
  case 0x52:
    goto code_r0x000100445134;
  case 0x2a:
    goto code_r0x0001004451a8;
  case 0x2c:
  case 0x50:
    goto code_r0x0001004450dc;
  case 0x2e:
  case 0x5c:
    goto code_r0x00010044510c;
  case 0x30:
    goto code_r0x000100445190;
  case 0x32:
  case 0xae:
    goto code_r0x0001004450b4;
  case 0x34:
    goto code_r0x000100445148;
  case 0x36:
  case 0xa6:
    goto code_r0x0001004450ac;
  case 0x3a:
  case 0xf8:
    goto code_r0x0001004451ec;
  case 0x3c:
    goto code_r0x000100445238;
  case 0x42:
    goto code_r0x0001004450e4;
  case 0x44:
    goto code_r0x0001004450f4;
  case 0x46:
  case 0x94:
  case 0xee:
    goto code_r0x0001004450bc;
  case 0x48:
    goto code_r0x0001004450d4;
  case 0x4a:
  case 0xc0:
    goto code_r0x000100445080;
  case 0x4e:
    goto code_r0x00010044511c;
  case 0x54:
    goto code_r0x0001004450b0;
  case 0x56:
    goto code_r0x000100445124;
  case 0x5a:
  case 0xea:
    goto code_r0x000100445088;
  case 0x5e:
    goto code_r0x000100445430;
  case 0x60:
  case 0xaa:
  case 0xc2:
    goto code_r0x0001004450c4;
  case 0x62:
  case 0xda:
    goto code_r0x000100445428;
  case 0x68:
  case 0x7a:
  case 0x96:
    goto code_r0x000100445100;
  case 0x6a:
    goto code_r0x000100445144;
  case 0x6e:
    goto code_r0x0001004450c8;
  case 0x70:
    goto code_r0x0001004450d8;
  case 0x72:
    goto code_r0x0001004450a0;
  case 0x74:
    goto code_r0x0001004450b8;
  case 0x76:
  case 0xa0:
code_r0x000100445464:
    pppppppbStack_118 = unaff_x24;
    pppppppbStack_100 = pppppppbVar4;
  case 0x86:
  case 0xa8:
    FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100445488);
    (*pcVar1)();
  case 0x78:
    goto code_r0x0001004450e8;
  case 0x7c:
    goto code_r0x0001004450c0;
  case 0x7e:
    goto code_r0x000100445118;
  case 0x82:
    goto code_r0x000100445108;
  case 0x84:
    goto code_r0x00010044543c;
  case 0x88:
    goto code_r0x0001004450f0;
  case 0x8c:
    goto code_r0x0001004450a8;
  case 0x8e:
    goto code_r0x00010044540c;
  case 0x92:
    goto code_r0x00010044514c;
  case 0x9c:
    goto code_r0x000100445084;
  case 0x9e:
    goto code_r0x00010044544c;
  case 0xa2:
  case 0xe0:
    goto code_r0x000100445410;
  case 0xac:
    goto code_r0x000100445440;
  case 0xb2:
    goto code_r0x000100445418;
  case 0xb4:
    goto code_r0x00010044509c;
  case 0xb8:
    goto code_r0x000100445454;
  case 0xbe:
    goto code_r0x000100445114;
  case 0xd2:
    break;
  case 0xd4:
    goto code_r0x0001004453e0;
  case 0xd6:
    goto code_r0x000100445438;
  case 0xde:
    goto code_r0x00010044538c;
  case 0xe2:
    goto code_r0x000100445334;
  case 0xf2:
    goto code_r0x0001004451fc;
  case 0xf4:
    goto code_r0x00010044520c;
  case 0xf6:
code_r0x0001004451d4:
    uVar10 = *(undefined8 *)((long)pppppppbVar7 + 0x19);
    *(undefined8 *)((long)pppppppbStack_148 + 0x21) = *(undefined8 *)((long)pppppppbVar7 + 0x21);
    *(undefined8 *)((long)pppppppbStack_148 + 0x19) = uVar10;
    uVar10 = *(undefined8 *)((long)pppppppbVar7 + 0x29);
    *(undefined8 *)((long)pppppppbStack_148 + 0x31) = *(undefined8 *)((long)pppppppbVar7 + 0x31);
    *(undefined8 *)((long)pppppppbStack_148 + 0x29) = uVar10;
    ppppppbVar13 = *(byte *******)((long)pppppppbVar7 + 0x41);
    pppppppbVar12 = *(byte ********)((long)pppppppbVar7 + 0x39);
    pppppppbVar6 = pppppppbStack_148;
code_r0x0001004451ec:
    *(byte *******)((long)pppppppbVar6 + 0x41) = ppppppbVar13;
    *(byte ********)((long)pppppppbVar6 + 0x39) = pppppppbVar12;
    ppppppbVar13 = pppppppbVar7[9];
    pppppppbVar6[10] = pppppppbVar7[10];
    pppppppbVar6[9] = ppppppbVar13;
    ppppppbVar13 = (byte ******)CONCAT17(uStack_b8,uStack_bf);
    pppppppbVar12 = (byte *******)CONCAT17(uStack_c0,uStack_c7);
code_r0x0001004451fc:
    *(byte *******)((long)pppppppbVar6 + 0x11) = ppppppbVar13;
    *(byte ********)((long)pppppppbVar6 + 9) = pppppppbVar12;
    *pppppppbVar6 = (byte ******)pppppppbVar4;
    *(byte *)(pppppppbVar6 + 1) = (byte)ppppppbVar5;
    pppppppbVar4 = &ppppppbStack_140;
code_r0x00010044520c:
    FUN_100d34830(pppppppbVar4 + 4);
    in_ZR = (char)ppppppbStack_140 == '\x16';
code_r0x00010044521c:
    if (!(bool)in_ZR) {
      FUN_100e077ec(&ppppppbStack_140);
    }
    goto code_r0x000100445438;
  case 0xfa:
    goto code_r0x000100445198;
  case 0xfc:
    goto code_r0x00010044521c;
  }
  pppppppbStack_d0 = (byte *******)CONCAT71(pppppppbStack_d0._1_7_,bVar3);
code_r0x000100445424:
  param_6 = &UNK_10b21b000;
code_r0x000100445428:
  param_6 = param_6 + 0x8b0;
  param_4 = (byte *******)&pppppppbStack_d0;
code_r0x000100445430:
  thunk_FUN_1087e3db0(param_3,param_4,auStack_71,param_6);
code_r0x000100445438:
code_r0x00010044543c:
code_r0x000100445440:
code_r0x00010044544c:
code_r0x000100445454:
  return;
}

