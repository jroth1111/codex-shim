
/* WARNING: Possible PIC construction at 0x000108876218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000108876288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010887621c) */
/* WARNING: Removing unreachable block (ram,0x00010887628c) */

byte * FUN_108875fcc(undefined1 param_1 [16],undefined1 param_2 [16],byte *param_3,ulong param_4,
                    byte *param_5,undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  byte *pbVar5;
  byte *extraout_x1;
  byte *extraout_x1_00;
  byte *pbVar6;
  undefined *puVar7;
  byte bVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *unaff_x19;
  byte *pbVar11;
  byte *unaff_x20;
  byte *unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar12;
  code *pcVar13;
  long extraout_d0;
  long extraout_d0_00;
  long lVar14;
  long extraout_var;
  long extraout_var_00;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_40 [8];
  int aiStack_38 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  lVar17 = param_2._8_8_;
  lVar16 = param_2._0_8_;
  puVar2 = (undefined8 *)auStack_40;
  puVar12 = &stack0xfffffffffffffff0;
  uVar4 = CARRY8((ulong)param_5,param_4);
  pbVar5 = param_5 + param_4;
  if ((bool)uVar4) {
    func_0x0001087c9084(0);
  }
  else {
    param_5 = *(byte **)(param_3 + 8);
    pbVar9 = (byte *)(*(long *)param_3 * 2);
    if (pbVar5 <= pbVar9) {
      pbVar5 = pbVar9;
    }
    pbVar9 = (byte *)0x8;
    if (param_7 != 1) {
      pbVar9 = (byte *)0x4;
    }
    unaff_x20 = pbVar5;
    if (pbVar5 <= pbVar9) {
      unaff_x20 = pbVar9;
    }
    pbVar5 = (byte *)func_0x000108875e84(aiStack_38,*(long *)param_3,param_5,unaff_x20,param_6);
    uVar4 = aiStack_38[0] != 0;
    unaff_x19 = param_3;
    if (aiStack_38[0] != 1) {
      *(byte **)param_3 = unaff_x20;
      *(long *)(param_3 + 8) = lStack_30;
      return pbVar5;
    }
  }
  pcVar13 = (code *)0x108876058;
  pbVar5 = (byte *)func_0x0001087c9084(lStack_30,uStack_28);
  pbVar9 = extraout_x1;
  lVar14 = extraout_d0;
  lVar15 = extraout_var;
  do {
    pbVar6 = pbVar9;
    auVar1._8_8_ = pbVar6;
    auVar1._0_8_ = unaff_x20;
    auVar18._8_8_ = pbVar6;
    auVar18._0_8_ = pbVar5;
    bVar8 = *pbVar6;
    uVar10 = (ulong)bVar8;
    puVar7 = (undefined *)0x8;
    puVar3 = (undefined1 *)puVar2;
    pbVar9 = pbVar5;
    pbVar11 = unaff_x19;
    switch(bVar8) {
    case 0:
    case 0x67:
      bVar8 = pbVar6[1];
    case 0xef:
      pbVar5[1] = bVar8;
    case 0x1c:
      *pbVar5 = 0;
      return pbVar5;
    case 1:
    case 0x9f:
    case 0xfb:
      *(ulong *)(pbVar5 + 8) = (ulong)pbVar6[1];
      *pbVar5 = 1;
      return pbVar5;
    case 2:
      puVar7 = (undefined *)(ulong)*(ushort *)(pbVar6 + 2);
    case 0x19:
      *(undefined **)(pbVar5 + 8) = puVar7;
      *pbVar5 = 1;
code_r0x0001088760f8:
      return pbVar5;
    case 3:
      *(ulong *)(pbVar5 + 8) = (ulong)*(uint *)(pbVar6 + 4);
    case 0xd7:
      puVar7 = (undefined *)0x1;
code_r0x00010887611c:
      *pbVar5 = (byte)puVar7;
      return pbVar5;
    case 4:
    case 0x5c:
      *(long *)(pbVar5 + 8) = *(long *)(pbVar6 + 8);
    case 0x1f:
    case 0xaf:
      *pbVar5 = 1;
      return pbVar5;
    case 5:
    case 0x20:
    case 0x4d:
      *(long *)(pbVar5 + 8) = (long)(char)pbVar6[1];
      puVar7 = (undefined *)0x2;
    case 0xbd:
      *pbVar5 = (byte)puVar7;
      return pbVar5;
    case 6:
    case 0x50:
      puVar7 = (undefined *)(long)*(short *)(pbVar6 + 2);
    case 0xd1:
      *(undefined **)(pbVar5 + 8) = puVar7;
      *pbVar5 = 2;
      return pbVar5;
    case 7:
    case 0x1b:
      puVar7 = (undefined *)(long)*(int *)(pbVar6 + 4);
    case 0x79:
      *(undefined **)(pbVar5 + 8) = puVar7;
      *pbVar5 = 2;
code_r0x000108876134:
      return pbVar5;
    case 8:
    case 0x55:
      *(long *)(pbVar5 + 8) = *(long *)(pbVar6 + 8);
    case 0xe9:
      *pbVar5 = 2;
      return pbVar5;
    case 9:
    case 0x18:
    case 0xf5:
      *(double *)(pbVar5 + 8) = (double)*(float *)(pbVar6 + 4);
      puVar7 = (undefined *)0x3;
    case 0xcb:
      *pbVar5 = (byte)puVar7;
code_r0x0001088760e4:
      return pbVar5;
    case 10:
    case 0x51:
      *(long *)(pbVar5 + 8) = *(long *)(pbVar6 + 8);
    case 0x87:
      puVar7 = (undefined *)0x3;
code_r0x0001088761a4:
      *pbVar5 = (byte)puVar7;
      return pbVar5;
    case 0xb:
    case 0x1a:
      *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar6 + 4);
    case 0xc9:
      *pbVar5 = 4;
code_r0x0001088760a4:
      return pbVar5;
    case 0xc:
    case 0x59:
    case 0xed:
      lVar16 = *(long *)(pbVar6 + 0x18);
      *(long *)(pbVar5 + 8) = *(long *)(pbVar6 + 0x10);
      *(long *)(pbVar5 + 0x10) = lVar16;
    case 0x7d:
      *pbVar5 = 5;
      return pbVar5;
    case 0xd:
    case 0x1e:
    case 0x57:
      lVar16 = *(long *)(pbVar6 + 0x10);
      *(long *)(pbVar5 + 8) = *(long *)(pbVar6 + 8);
      *(long *)(pbVar5 + 0x10) = lVar16;
      puVar7 = (undefined *)0x5;
    case 0xd9:
      *pbVar5 = (byte)puVar7;
code_r0x000108876180:
      return pbVar5;
    default:
      puVar7 = *(undefined **)(pbVar6 + 0x10);
      uVar10 = *(ulong *)(pbVar6 + 0x18);
    case 0x16:
    case 0x92:
    case 0xba:
    case 0xc4:
    case 0xc6:
    case 0xca:
    case 0xcc:
    case 0xe6:
    case 0xee:
    case 0xf0:
    case 0xf2:
    case 0xfa:
      *(undefined **)(pbVar5 + 8) = puVar7;
      *(ulong *)(pbVar5 + 0x10) = uVar10;
      *pbVar5 = 6;
      return pbVar5;
    case 0xf:
    case 0xc5:
      lVar16 = *(long *)(pbVar6 + 0x10);
      *(long *)(pbVar5 + 8) = *(long *)(pbVar6 + 8);
      *(long *)(pbVar5 + 0x10) = lVar16;
    case 0xb5:
      puVar7 = (undefined *)0x6;
code_r0x000108876108:
      *pbVar5 = (byte)puVar7;
      return pbVar5;
    case 0x10:
    case 0x11:
    case 0x17:
    case 0x21:
    case 0x30:
    case 0x3f:
    case 0x4e:
    case 0x5d:
    case 0x5e:
    case 0x91:
    case 0xa4:
    case 0xa6:
    case 0xa8:
    case 0xb4:
    case 0xbc:
    case 0xc2:
    case 200:
    case 0xce:
    case 0xe2:
    case 0xe8:
    case 0xea:
    case 0xec:
    case 0xf4:
    case 0xf8:
    case 0xfc:
    case 0xfe:
      *pbVar5 = 8;
      return pbVar5;
    case 0x12:
      puVar7 = (undefined *)0x7;
    case 0xf7:
      *pbVar5 = (byte)puVar7;
      return pbVar5;
    case 0x13:
    case 0x69:
      *pbVar5 = 9;
      return pbVar5;
    case 0x14:
    case 0x4f:
    case 0x77:
      puVar7 = (undefined *)0xa;
    case 0xc3:
      *pbVar5 = (byte)puVar7;
code_r0x0001088761c8:
      return pbVar5;
    case 0x15:
    case 0x73:
      *pbVar5 = 0xb;
      return pbVar5;
    case 0x1d:
      goto code_r0x000108876108;
    case 0x22:
    case 0x31:
      goto code_r0x00010887636c;
    case 0x23:
    case 0x32:
    case 0x61:
      goto code_r0x000108876348;
    case 0x24:
    case 0x33:
      goto code_r0x000108876354;
    case 0x25:
    case 0x34:
      goto code_r0x000108876324;
    case 0x27:
    case 0x36:
      goto code_r0x000108876390;
    case 0x28:
    case 0x37:
    case 199:
      goto LAB_108876360;
    case 0x29:
    case 0x38:
    case 0xbb:
      goto code_r0x0001088763a8;
    case 0x2a:
    case 0x39:
    case 0xa7:
      goto code_r0x00010887633c;
    case 0x2b:
    case 0x3a:
      goto code_r0x00010887639c;
    case 0x2c:
    case 0x3b:
      goto code_r0x000108876318;
    case 0x2d:
    case 0x3c:
    case 0x47:
      goto code_r0x000108876330;
    case 0x2f:
    case 0x3e:
    case 0x49:
      goto code_r0x00010887630c;
    case 0x40:
      goto code_r0x00010887627c;
    case 0x42:
      goto code_r0x000108876234;
    case 0x43:
      goto code_r0x0001088761a4;
    case 0x44:
      goto code_r0x0001088762a0;
    case 0x45:
      goto code_r0x0001088762e8;
    case 0x48:
    case 0xff:
      return pbVar5;
    case 0x4a:
    case 0xf1:
      goto code_r0x000108876180;
    case 0x4b:
      goto code_r0x0001088761c8;
    case 0x4c:
      goto code_r0x0001088762c4;
    case 0x52:
    case 0x85:
      goto code_r0x0001088760f8;
    case 0x53:
      return pbVar5;
    case 0x54:
    case 99:
    case 0xb1:
      goto code_r0x0001088763b0;
    case 0x56:
      goto code_r0x0001088763d8;
    case 0x58:
      goto code_r0x0001088763c4;
    case 0x5a:
      goto code_r0x000108876134;
    case 0x5b:
      goto code_r0x0001088762dc;
    case 0x5f:
    case 0xf3:
      goto code_r0x0001088763ec;
    case 0x60:
    case 0x62:
    case 100:
    case 0x66:
    case 0x6c:
    case 0x70:
    case 0x74:
    case 0x76:
    case 0x7a:
    case 0x7c:
    case 0x7e:
    case 0x80:
    case 0x8e:
    case 0x90:
    case 0x94:
    case 0x9c:
    case 0xa0:
    case 0xa2:
    case 0xae:
    case 0xb6:
    case 0xbe:
    case 0xc0:
    case 0xd2:
    case 0xd6:
    case 0xdc:
    case 0xde:
    case 0xe4:
      return pbVar5;
    case 0x65:
      goto code_r0x000108876238;
    case 0x6b:
      goto code_r0x0001088763cc;
    case 0x6d:
      goto code_r0x000108876248;
    case 0x6f:
      goto code_r0x0001088762e0;
    case 0x7b:
      goto code_r0x000108876364;
    case 0x7f:
      goto code_r0x000108876470;
    case 0x81:
    case 0xf9:
      unaff_x19 = pbVar5;
      unaff_x20 = param_5;
      unaff_x21 = pbVar6;
    case 0x41:
      pbVar5 = (byte *)((long)puVar2 + 8);
code_r0x000108876214:
      pcVar13 = (code *)0x10887621c;
      pbVar9 = unaff_x19;
      break;
    case 0x83:
      goto code_r0x000108876368;
    case 0x89:
      goto code_r0x0001088762f8;
    case 0x8b:
      goto code_r0x0001088763f4;
    case 0x8d:
      goto code_r0x000108876328;
    case 0x8f:
      goto code_r0x000108876304;
    case 0x95:
      goto code_r0x000108876414;
    case 0x97:
    case 0xa5:
      goto code_r0x000108876434;
    case 0x99:
      goto code_r0x00010887626c;
    case 0x9b:
      pbVar5 = *(byte **)(unaff_x19 + 8);
    case 0xa9:
      _free(pbVar5);
code_r0x000108876458:
      pbVar5 = (byte *)__Unwind_Resume(unaff_x20);
      puVar3 = (undefined1 *)((long)puVar2 + -0x50);
      *(byte **)((long)puVar2 + -0x20) = unaff_x20;
      *(byte **)((long)puVar2 + -0x18) = unaff_x19;
      *(undefined1 **)((long)puVar2 + -0x10) = puVar12;
      *(undefined8 *)((long)puVar2 + -8) = 0x108876460;
code_r0x000108876470:
      __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(puVar3);
      pbVar5 = (byte *)func_0x000108876534(pbVar5,puVar3);
      return pbVar5;
    case 0x9d:
      pbVar5 = (byte *)func_0x000108a4a50c(pbVar5,unaff_x20,unaff_x19);
    case 0xdd:
code_r0x0001088762a0:
      return pbVar5;
    case 0xa1:
      goto code_r0x0001088760a4;
    case 0xa3:
      goto code_r0x000108876410;
    case 0xab:
      goto code_r0x000108876344;
    case 0xb3:
      goto code_r0x000108876268;
    case 0xb7:
      *(undefined8 *)((long)puVar2 + 0x20) = unaff_x22;
      *(byte **)((long)puVar2 + 0x28) = unaff_x21;
      *(byte **)((long)puVar2 + 0x30) = unaff_x20;
      *(byte **)((long)puVar2 + 0x38) = unaff_x19;
      *(undefined1 **)((long)puVar2 + 0x40) = puVar12;
      *(code **)((long)puVar2 + 0x48) = pcVar13;
    case 0x75:
      puVar12 = (undefined1 *)((long)puVar2 + 0x40);
      unaff_x19 = pbVar6;
code_r0x0001088762c4:
      pbVar9 = (byte *)_malloc(pbVar6);
      unaff_x20 = pbVar5;
      if (pbVar9 != (byte *)0x0) {
code_r0x0001088762d4:
        pbVar6 = unaff_x20;
        unaff_x21 = pbVar9;
code_r0x0001088762dc:
code_r0x0001088762e0:
        _memcpy(pbVar9,pbVar6);
        *(byte **)((long)puVar2 + 8) = unaff_x19;
        *(byte **)((long)puVar2 + 0x10) = unaff_x21;
code_r0x0001088762e8:
        *(byte **)((long)puVar2 + 0x18) = unaff_x19;
        pbVar5 = (byte *)__ZN10serde_json5error10make_error17h192c88b3464e8daaE
                                   ((undefined1 *)((long)puVar2 + 8));
code_r0x0001088762f4:
code_r0x0001088762f8:
code_r0x000108876304:
        return pbVar5;
      }
      pbVar9 = (byte *)0x1;
code_r0x00010887630c:
      pcVar13 = FUN_108876314;
      auVar18 = func_0x0001087c9084(pbVar9,unaff_x19);
code_r0x000108876314:
      puVar2 = (undefined8 *)((long)puVar2 + -0x50);
code_r0x000108876318:
      *(undefined8 *)((long)puVar2 + 0x20) = unaff_x22;
      *(byte **)((long)puVar2 + 0x28) = unaff_x21;
      *(byte **)((long)puVar2 + 0x30) = unaff_x20;
      *(byte **)((long)puVar2 + 0x38) = unaff_x19;
      *(undefined1 **)((long)puVar2 + 0x40) = puVar12;
      *(code **)((long)puVar2 + 0x48) = pcVar13;
code_r0x000108876324:
      puVar12 = (undefined1 *)((long)puVar2 + 0x40);
code_r0x000108876328:
      auVar1 = auVar18;
      if ((auVar18._8_8_ & 1) == 0) {
        puVar7 = (undefined *)((long)puVar2 + 8);
code_r0x000108876330:
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(puVar7);
      }
      else {
code_r0x00010887633c:
        unaff_x20 = auVar1._0_8_;
        uVar4 = 1 < auVar1._8_8_;
        unaff_x19 = (byte *)(auVar1._8_8_ >> 1);
code_r0x000108876344:
        pbVar5 = unaff_x19;
        unaff_x19 = pbVar5;
        if ((bool)uVar4) {
code_r0x000108876354:
          pbVar6 = unaff_x19;
          unaff_x21 = (byte *)_malloc(pbVar5);
          unaff_x19 = pbVar6;
          if (unaff_x21 == (byte *)0x0) {
            pbVar5 = (byte *)0x1;
            puVar3 = (undefined1 *)puVar2;
code_r0x00010887639c:
            func_0x0001087c9084(pbVar5,pbVar6);
            puVar2 = (undefined8 *)(puVar3 + -0x30);
            *(undefined1 **)(puVar3 + -0x10) = puVar12;
            *(undefined8 *)(puVar3 + -8) = 0x1088763a0;
code_r0x0001088763a8:
            puVar12 = (undefined1 *)((long)puVar2 + 0x20);
            pbVar5 = (byte *)0x26;
code_r0x0001088763b0:
            pbVar5 = (byte *)_malloc(pbVar5);
            if (pbVar5 == (byte *)0x0) {
              pbVar5 = (byte *)0x1;
              puVar3 = (undefined1 *)puVar2;
              pbVar11 = unaff_x19;
code_r0x0001088763f4:
              unaff_x19 = (byte *)func_0x0001087c9084(pbVar5,0x26);
              puVar2 = (undefined8 *)(puVar3 + -0x80);
              *(byte **)(puVar3 + -0x20) = unaff_x20;
              *(byte **)(puVar3 + -0x18) = pbVar11;
              *(undefined1 **)(puVar3 + -0x10) = puVar12;
              *(undefined8 *)(puVar3 + -8) = 0x1088763fc;
code_r0x000108876410:
              puVar7 = (undefined *)((long)puVar2 + 0x30);
code_r0x000108876414:
              __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(puVar7);
              puVar2[1] = puVar2[7];
              *puVar2 = puVar2[6];
              puVar2[3] = puVar2[9];
              puVar2[2] = puVar2[8];
              puVar2[5] = puVar2[0xb];
              puVar2[4] = puVar2[10];
              pbVar5 = (byte *)func_0x000108876498(unaff_x19,puVar2);
code_r0x000108876434:
              return pbVar5;
            }
            puVar7 = &UNK_108cdff4e;
            lVar15 = 0x6e6920736e696174;
            lVar14 = 0x6e6f632068746170;
            lVar17 = 0x7261686320382d46;
            lVar16 = 0x54552064696c6176;
code_r0x0001088763c4:
            *(long *)(pbVar5 + 8) = lVar15;
            *(long *)pbVar5 = lVar14;
            *(long *)(pbVar5 + 0x18) = lVar17;
            *(long *)(pbVar5 + 0x10) = lVar16;
code_r0x0001088763c8:
            puVar7 = *(undefined **)(puVar7 + 0x1e);
code_r0x0001088763cc:
            *(undefined **)(pbVar5 + 0x1e) = puVar7;
code_r0x0001088763d0:
            puVar7 = (undefined *)0x26;
            *(undefined8 *)((long)puVar2 + 8) = 0x26;
            *(byte **)((long)puVar2 + 0x10) = pbVar5;
code_r0x0001088763d8:
            *(undefined **)((long)puVar2 + 0x18) = puVar7;
            pbVar5 = (byte *)__ZN10serde_json5error10make_error17h192c88b3464e8daaE
                                       ((undefined1 *)((long)puVar2 + 8));
code_r0x0001088763ec:
            return pbVar5;
          }
        }
        else {
code_r0x000108876348:
          unaff_x21 = (byte *)0x1;
        }
LAB_108876360:
        pbVar5 = unaff_x21;
        unaff_x21 = pbVar5;
code_r0x000108876364:
        pbVar6 = unaff_x20;
code_r0x000108876368:
code_r0x00010887636c:
        _memcpy(pbVar5,pbVar6);
        *(byte **)((long)puVar2 + 8) = unaff_x19;
        *(byte **)((long)puVar2 + 0x10) = unaff_x21;
        *(byte **)((long)puVar2 + 0x18) = unaff_x19;
      }
    case 0x26:
    case 0x35:
      pbVar5 = (byte *)__ZN10serde_json5error10make_error17h192c88b3464e8daaE
                                 ((undefined1 *)((long)puVar2 + 8));
    case 0x2e:
    case 0x3d:
    case 0xcf:
    case 0xdb:
code_r0x000108876390:
      return pbVar5;
    case 0xb9:
      goto code_r0x00010887611c;
    case 0xbf:
      goto code_r0x000108876214;
    case 0xc1:
      pbVar6 = unaff_x21;
    case 0x71:
      unaff_x20 = (byte *)func_0x000108a4a50c(pbVar5,pbVar6);
      pbVar5 = unaff_x19;
code_r0x000108876234:
      FUN_10174f874(pbVar5);
code_r0x000108876238:
      pbVar5 = unaff_x20;
code_r0x000108876248:
      return pbVar5;
    case 0xcd:
      goto code_r0x0001088763c8;
    case 0xd3:
      goto code_r0x0001088763d0;
    case 0xd5:
      goto code_r0x000108876278;
    case 0xdf:
      return pbVar5;
    case 0xe1:
      goto code_r0x0001088762d4;
    case 0xe3:
      goto code_r0x0001088760e4;
    case 0xe5:
      pbVar9 = unaff_x19;
      unaff_x20 = pbVar5;
    case 0x46:
    case 0xad:
      FUN_10174f874(pbVar9);
      __Unwind_Resume(unaff_x20);
      pcVar13 = FUN_108876268;
      pbVar5 = (byte *)func_0x000108a07bc4();
      pbVar6 = extraout_x1_00;
      lVar14 = extraout_d0_00;
      lVar15 = extraout_var_00;
code_r0x000108876268:
      puVar2 = (undefined8 *)((long)puVar2 + -0x40);
code_r0x00010887626c:
      *(byte **)((long)puVar2 + 0x20) = unaff_x20;
      *(byte **)((long)puVar2 + 0x28) = unaff_x19;
      *(undefined1 **)((long)puVar2 + 0x30) = puVar12;
      *(code **)((long)puVar2 + 0x38) = pcVar13;
      puVar12 = (undefined1 *)((long)puVar2 + 0x30);
code_r0x000108876278:
      pbVar9 = pbVar5;
      unaff_x19 = param_5;
code_r0x00010887627c:
      pbVar5 = (byte *)((long)puVar2 + 8);
      pcVar13 = (code *)0x10887628c;
      unaff_x20 = pbVar6;
      break;
    case 0xe7:
      goto code_r0x000108876458;
    case 0xeb:
      goto code_r0x000108876314;
    case 0xfd:
      goto code_r0x0001088762f4;
    }
  } while( true );
}

