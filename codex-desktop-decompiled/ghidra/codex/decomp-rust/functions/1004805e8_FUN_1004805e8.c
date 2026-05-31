
/* WARNING: Type propagation algorithm not settling */

void FUN_1004805e8(undefined1 param_1 [16],code *******param_2,code *******param_3,
                  undefined *param_4)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  code *******pppppppcVar6;
  code *******pppppppcVar7;
  code *******pppppppcVar8;
  code *******pppppppcVar9;
  code *******pppppppcVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  code *******pppppppcVar15;
  undefined1 in_ZR;
  bool bVar16;
  code *******pppppppcVar17;
  code ******ppppppcVar18;
  uint uVar19;
  code *******extraout_x1;
  byte bVar20;
  code *******pppppppcVar21;
  undefined8 uVar22;
  code *******pppppppcVar23;
  code *******pppppppcVar24;
  code *******UNRECOVERED_JUMPTABLE;
  code ******ppppppcVar25;
  code *******unaff_x19;
  code *******pppppppcVar26;
  int iVar27;
  code *******unaff_x20;
  code *******unaff_x21;
  code *******pppppppcVar28;
  code *******unaff_x22;
  code *******pppppppcVar29;
  code *******unaff_x23;
  code *******unaff_x24;
  long lVar30;
  code *******pppppppcVar31;
  code *******unaff_x25;
  code *******unaff_x26;
  code *******unaff_x27;
  int *unaff_x28;
  undefined1 *unaff_x29;
  undefined1 *puVar32;
  code *unaff_x30;
  code *******pppppppcVar33;
  byte abStack_260 [80];
  code *******pppppppcStack_210;
  code *******pppppppcStack_208;
  code *******pppppppcStack_200;
  code *******pppppppcStack_1f8;
  code *******pppppppcStack_1f0;
  code *******pppppppcStack_1e8;
  code *******pppppppcStack_1e0;
  code *******pppppppcStack_1d0;
  code *******pppppppcStack_1c8;
  code *******pppppppcStack_1c0;
  code *******pppppppcStack_1b8;
  code *******pppppppcStack_1b0;
  code *******pppppppcStack_1a8;
  code *******pppppppcStack_1a0;
  code ******ppppppcStack_198;
  code *******pppppppcStack_190;
  code ******ppppppcStack_188;
  code *******pppppppcStack_c0;
  code ******ppppppcStack_b8;
  code *******pppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *******pppppppcStack_a0;
  char cStack_98;
  char cStack_97;
  undefined6 uStack_96;
  char cStack_90;
  char cStack_8f;
  undefined6 uStack_8e;
  undefined1 uStack_88;
  undefined7 uStack_87;
  code *******pppppppcStack_80;
  undefined8 uStack_78;
  code *******pppppppcStack_70;
  
  ppppppcVar18 = param_1._8_8_;
  pppppppcVar33 = param_1._0_8_;
  puVar32 = &stack0xfffffffffffffff0;
  pppppppcVar12 = (code *******)&pppppppcStack_210;
  pppppppcVar9 = (code *******)&pppppppcStack_210;
  pppppppcVar7 = (code *******)&pppppppcStack_210;
  bVar20 = *(byte *)param_3;
  pppppppcVar21 = (code *******)(ulong)bVar20;
  pppppppcVar23 = (code *******)&UNK_108c999aa;
  ppppppcVar25 = (code ******)(ulong)*(ushort *)(&UNK_108c999aa + (long)pppppppcVar21 * 2);
  UNRECOVERED_JUMPTABLE = (code *******)(&UNK_100480628 + (long)ppppppcVar25 * 4);
  pppppppcVar13 = (code *******)&pppppppcStack_210;
  pppppppcVar14 = (code *******)&pppppppcStack_210;
  pppppppcVar15 = (code *******)&pppppppcStack_210;
  pppppppcVar10 = (code *******)&pppppppcStack_210;
  pppppppcVar11 = (code *******)&pppppppcStack_210;
  pppppppcVar8 = (code *******)&pppppppcStack_210;
  pppppppcVar6 = (code *******)&pppppppcStack_210;
  pppppppcVar17 = param_2;
  pppppppcVar24 = UNRECOVERED_JUMPTABLE;
  pppppppcVar26 = param_2;
  pppppppcVar28 = unaff_x21;
  pppppppcVar29 = unaff_x22;
  pppppppcVar31 = unaff_x24;
  switch(bVar20) {
  case 0:
    bVar20 = *(byte *)((long)param_3 + 1);
  case 0x35:
  case 0xe2:
    pppppppcStack_1b0 = (code *******)((ulong)CONCAT61(pppppppcStack_1b0._2_6_,bVar20) << 8);
code_r0x000100480c08:
    goto code_r0x000100480c5c;
  case 1:
  case 0x2e:
    pppppppcStack_1a8 = (code *******)(ulong)*(byte *)((long)param_3 + 1);
    goto code_r0x000100480c14;
  case 2:
    pppppppcVar21 = (code *******)(ulong)*(ushort *)((long)param_3 + 2);
  case 0x38:
  case 0xdd:
    pppppppcStack_1a8 = pppppppcVar21;
    goto code_r0x000100480c14;
  case 3:
    pppppppcVar21 = (code *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0xe9:
    pppppppcStack_1a8 = pppppppcVar21;
    goto code_r0x000100480c14;
  case 4:
    pppppppcStack_1a8 = (code *******)param_3[1];
    goto code_r0x000100480c14;
  case 5:
    pppppppcStack_1a8 = (code *******)(long)(char)*(byte *)((long)param_3 + 1);
  case 0x31:
code_r0x000100480c54:
    bVar20 = 2;
    break;
  case 6:
  case 0x2c:
    pppppppcStack_1a8 = (code *******)(long)*(short *)((long)param_3 + 2);
    goto code_r0x000100480c54;
  case 7:
    pppppppcStack_1a8 = (code *******)(long)*(int *)((long)param_3 + 4);
    goto code_r0x000100480c54;
  case 8:
    pppppppcStack_1a8 = (code *******)param_3[1];
    goto code_r0x000100480c54;
  case 9:
  case 0xdc:
    pppppppcVar33 = (code *******)(double)*(float *)((long)param_3 + 4);
  case 0x30:
    pppppppcStack_1a8 = pppppppcVar33;
code_r0x000100480c44:
    bVar20 = 3;
    break;
  case 10:
    pppppppcStack_1a8 = (code *******)param_3[1];
    goto code_r0x000100480c44;
  case 0xb:
    param_3 = (code *******)(ulong)*(uint *)((long)param_3 + 4);
  case 0x3c:
    pppppppcVar8 = (code *******)&stack0xffffffffffffffa0;
    puVar32 = unaff_x29;
code_r0x000100480b80:
    unaff_x20 = *(code ********)((long)pppppppcVar8 + 0x40);
    pppppppcVar17 = *(code ********)((long)pppppppcVar8 + 0x48);
    pppppppcVar9 = (code *******)((long)pppppppcVar8 + 0x60);
code_r0x000100480b94:
    *(code ********)((long)pppppppcVar9 + -0x20) = unaff_x20;
    *(code ********)((long)pppppppcVar9 + -0x18) = pppppppcVar17;
    *(undefined1 **)((long)pppppppcVar9 + -0x10) = puVar32;
    *(code **)((long)pppppppcVar9 + -8) = unaff_x30;
    *(undefined4 *)((long)pppppppcVar9 + -0x44) = 0;
    uVar19 = (uint)param_3;
    if (uVar19 < 0x80) {
      *(byte *)((long)pppppppcVar9 + -0x44) = (byte)param_3;
      uVar22 = 1;
    }
    else {
      bVar20 = (byte)param_3 & 0x3f | 0x80;
      if (uVar19 < 0x800) {
        *(byte *)((long)pppppppcVar9 + -0x44) = (byte)(uVar19 >> 6) | 0xc0;
        *(byte *)((long)pppppppcVar9 + -0x43) = bVar20;
        uVar22 = 2;
      }
      else {
        bVar4 = (byte)(uVar19 >> 6) & 0x3f | 0x80;
        if (uVar19 < 0x10000) {
          *(byte *)((long)pppppppcVar9 + -0x44) = (byte)(uVar19 >> 0xc) | 0xe0;
          *(byte *)((long)pppppppcVar9 + -0x43) = bVar4;
          *(byte *)((long)pppppppcVar9 + -0x42) = bVar20;
          uVar22 = 3;
        }
        else {
          *(byte *)((long)pppppppcVar9 + -0x44) = (byte)(uVar19 >> 0x12) | 0xf0;
          *(byte *)((long)pppppppcVar9 + -0x43) = (byte)(uVar19 >> 0xc) & 0x3f | 0x80;
          *(byte *)((long)pppppppcVar9 + -0x42) = bVar4;
          *(byte *)((long)pppppppcVar9 + -0x41) = bVar20;
          uVar22 = 4;
        }
      }
    }
    *(undefined1 **)((long)pppppppcVar9 + -0x38) = (undefined1 *)((long)pppppppcVar9 + -0x44);
    *(undefined8 *)((long)pppppppcVar9 + -0x30) = uVar22;
    *(undefined1 *)((long)pppppppcVar9 + -0x40) = 5;
    ppppppcVar25 = (code ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppcVar9 + -0x40),
                                       (undefined1 *)((long)pppppppcVar9 + -0x21),&UNK_10b219e10);
    *param_2 = (code ******)0x1d;
    param_2[1] = ppppppcVar25;
    return;
  case 0xc:
  case 0xde:
    param_3 = param_3 + 1;
  case 0x37:
  case 0xeb:
    pppppppcVar10 = (code *******)&stack0xffffffffffffffa0;
    pppppppcVar17 = unaff_x19;
    puVar32 = unaff_x29;
code_r0x000100480bb8:
    pppppppcVar11 = pppppppcVar10;
code_r0x000100480bc0:
    *(code ********)((long)pppppppcVar11 + 0x30) = unaff_x22;
    *(code ********)((long)pppppppcVar11 + 0x38) = unaff_x21;
    *(code ********)((long)pppppppcVar11 + 0x40) = unaff_x20;
    *(code ********)((long)pppppppcVar11 + 0x48) = pppppppcVar17;
    *(undefined1 **)((long)pppppppcVar11 + 0x50) = puVar32;
    *(code **)((long)pppppppcVar11 + 0x58) = unaff_x30;
    ppppppcVar25 = param_3[1];
    ppppppcVar18 = param_3[2];
    *(code *******)((long)pppppppcVar11 + 0x18) = ppppppcVar25;
    *(code *******)((long)pppppppcVar11 + 0x20) = ppppppcVar18;
    *(undefined1 *)((long)pppppppcVar11 + 0x10) = 5;
    ppppppcVar18 = (code ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppcVar11 + 0x10),
                                       (undefined1 *)((long)pppppppcVar11 + 0x2f),&UNK_10b219e10);
    *param_2 = (code ******)0x1d;
    param_2[1] = ppppppcVar18;
    if (*param_3 != (code ******)0x0) {
      _free(ppppppcVar25);
    }
    return;
  case 0xd:
  case 0x2f:
    pppppppcStack_1a8 = (code *******)param_3[1];
    pppppppcStack_1a0 = (code *******)param_3[2];
  case 0x33:
    bVar20 = 5;
    break;
  case 0xe:
    param_3 = param_3 + 1;
    pppppppcVar6 = (code *******)&stack0xffffffffffffffa0;
    pppppppcVar17 = unaff_x19;
    puVar32 = unaff_x29;
  case 0xe0:
    pppppppcVar7 = (code *******)((long)pppppppcVar6 + 0x60);
code_r0x000100480b6c:
    *(code ********)((long)pppppppcVar7 + -0x30) = unaff_x22;
    *(code ********)((long)pppppppcVar7 + -0x28) = unaff_x21;
    *(code ********)((long)pppppppcVar7 + -0x20) = unaff_x20;
    *(code ********)((long)pppppppcVar7 + -0x18) = pppppppcVar17;
    *(undefined1 **)((long)pppppppcVar7 + -0x10) = puVar32;
    *(code **)((long)pppppppcVar7 + -8) = unaff_x30;
    ppppppcVar25 = param_3[1];
    ppppppcVar18 = param_3[2];
    *(code *******)((long)pppppppcVar7 + -0x48) = ppppppcVar25;
    *(code *******)((long)pppppppcVar7 + -0x40) = ppppppcVar18;
    *(undefined1 *)((long)pppppppcVar7 + -0x50) = 6;
    ppppppcVar18 = (code ******)
                   func_0x000108a4a50c((undefined1 *)((long)pppppppcVar7 + -0x50),
                                       (undefined1 *)((long)pppppppcVar7 + -0x31),&UNK_10b219e10);
    *param_2 = (code ******)0x1d;
    param_2[1] = ppppppcVar18;
    if (*param_3 != (code ******)0x0) {
      _free(ppppppcVar25);
    }
    return;
  case 0xf:
    pppppppcStack_1a8 = (code *******)param_3[1];
    pppppppcStack_1a0 = (code *******)param_3[2];
    bVar20 = 6;
  case 0xe1:
    break;
  case 0x10:
    bVar20 = 8;
    break;
  default:
    ppppppcVar25 = param_3[1];
    pppppppcStack_1a8 = (code *******)ppppppcVar25[1];
    pppppppcStack_1b0 = (code *******)*ppppppcVar25;
    ppppppcStack_198 = (code ******)ppppppcVar25[3];
    pppppppcStack_1a0 = (code *******)ppppppcVar25[2];
    func_0x000107c04874(param_2,&pppppppcStack_1b0);
    goto code_r0x000100480948;
  case 0x12:
    bVar20 = 7;
    break;
  case 0x13:
    ppppppcVar25 = param_3[1];
    pppppppcStack_1a8 = (code *******)ppppppcVar25[1];
    pppppppcStack_1b0 = (code *******)*ppppppcVar25;
    ppppppcStack_198 = (code ******)ppppppcVar25[3];
    pppppppcStack_1a0 = (code *******)ppppppcVar25[2];
  case 0xf0:
    func_0x000107c053ec(param_2,&pppppppcStack_1b0);
code_r0x000100480948:
code_r0x000107c06034:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)();
    return;
  case 0x14:
    unaff_x23 = (code *******)param_3[1];
    unaff_x20 = (code *******)param_3[2];
    unaff_x22 = unaff_x20 + (long)param_3[3] * 4;
    pppppppcStack_1e0 = (code *******)0x0;
    unaff_x21 = unaff_x20;
    pppppppcStack_200 = unaff_x20;
    pppppppcStack_1f0 = unaff_x23;
    pppppppcStack_1e8 = unaff_x22;
    if (param_3[3] != (code ******)0x0) {
      unaff_x21 = unaff_x20 + 4;
      if (*(char *)unaff_x20 != '\x16') {
        uVar22 = *(undefined8 *)((long)unaff_x20 + 1);
        cStack_8f = (char)*(undefined8 *)((long)unaff_x20 + 9);
        uStack_8e = (undefined6)((ulong)*(undefined8 *)((long)unaff_x20 + 9) >> 8);
        cStack_97 = (char)uVar22;
        uStack_96 = (undefined6)((ulong)uVar22 >> 8);
        cStack_90 = (char)((ulong)uVar22 >> 0x38);
        pppppppcStack_80 = (code *******)unaff_x20[3];
        uStack_88 = SUB81(unaff_x20[2],0);
        uStack_87 = (undefined7)((ulong)unaff_x20[2] >> 8);
        pppppppcStack_1e0 = (code *******)0x1;
        pppppppcStack_1f8 = unaff_x21;
        cStack_98 = *(char *)unaff_x20;
        FUN_101283ac4(&uStack_78,&cStack_98);
        if ((char)uStack_78 == '\x01') goto code_r0x0001004809a0;
        *param_2 = (code ******)0x5;
        *(undefined1 *)(param_2 + 1) = uStack_78._1_1_;
        _memcpy(&pppppppcStack_1b0,param_2,0x118);
        pppppppcVar17 = (code *******)FUN_100fbc738(&pppppppcStack_200);
        goto code_r0x000100480b0c;
      }
    }
    param_3 = (code *******)&UNK_10b22e000;
    pppppppcStack_1f8 = unaff_x21;
  case 0x40:
    pppppppcStack_70 = (code *******)thunk_FUN_1087e422c(0,param_3 + 0x191,&UNK_10b20a590);
code_r0x0001004809a0:
    *param_2 = (code ******)0x1d;
    param_2[1] = (code ******)pppppppcStack_70;
    lVar30 = ((ulong)((long)unaff_x22 - (long)unaff_x21) >> 5) + 1;
    while (lVar30 = lVar30 + -1, lVar30 != 0) {
      FUN_100e077ec(unaff_x21);
      unaff_x21 = unaff_x21 + 4;
    }
    if (unaff_x23 == (code *******)0x0) {
      return;
    }
    _free(unaff_x20);
    return;
  case 0x15:
  case 0x2b:
  case 0x41:
  case 0x57:
  case 0x6d:
  case 0x83:
  case 0x99:
  case 0xaf:
  case 0xc5:
  case 0xdb:
  case 0xf1:
    pppppppcStack_1d0 = (code *******)param_3[1];
    pppppppcStack_1e0 = (code *******)param_3[2];
    ppppppcVar25 = param_3[3];
    pppppppcStack_1c8 = pppppppcStack_1e0 + (long)ppppppcVar25 * 8;
    unaff_x23 = (code *******)&pppppppcStack_200;
    pppppppcStack_200 = (code *******)CONCAT71(pppppppcStack_200._1_7_,0x16);
    pppppppcStack_1c0 = (code *******)0x0;
    if (ppppppcVar25 != (code ******)0x0) {
      unaff_x22 = (code *******)0x0;
      unaff_x26 = (code *******)((ulong)&cStack_98 | 1);
      unaff_x27 = (code *******)((ulong)unaff_x23 | 1);
      pppppppcStack_210 = (code *******)(((long)ppppppcVar25 * 0x40 - 0x40U >> 6) + 1);
      unaff_x20 = (code *******)0x4;
      unaff_x25 = pppppppcStack_1c8;
      unaff_x23 = pppppppcStack_1e0;
      pppppppcStack_208 = param_2;
code_r0x0001004806bc:
      unaff_x21 = unaff_x23 + 8;
      pppppppcVar21 = (code *******)(ulong)*(byte *)unaff_x23;
      pppppppcVar29 = unaff_x22;
      if (*(byte *)unaff_x23 == 0x16) goto code_r0x000100480a24;
code_r0x0001004806cc:
      cVar3 = cStack_97;
      iVar27 = (int)unaff_x20;
      uVar19 = (uint)pppppppcVar21;
      cStack_98 = (char)pppppppcVar21;
      ppppppcVar25 = unaff_x23[2];
      *(code *******)((long)unaff_x26 + 0x17) = unaff_x23[3];
      *(code *******)((long)unaff_x26 + 0xf) = ppppppcVar25;
      ppppppcVar25 = *(code *******)((long)unaff_x23 + 1);
      unaff_x26[1] = *(code *******)((long)unaff_x23 + 9);
      *unaff_x26 = ppppppcVar25;
      pppppppcStack_1f8 = (code *******)unaff_x23[5];
      pppppppcStack_200 = (code *******)unaff_x23[4];
      pppppppcStack_1e8 = (code *******)unaff_x23[7];
      pppppppcStack_1f0 = (code *******)unaff_x23[6];
      unaff_x28 = (int *)CONCAT62(uStack_8e,CONCAT11(cStack_8f,cStack_90));
      param_2 = (code *******)CONCAT71(uStack_87,uStack_88);
      if (uVar19 < 0xd) {
        if (uVar19 == 1) {
          FUN_100e077ec(&cStack_98);
code_r0x000100480868:
          if (cVar3 != '\0') goto code_r0x0001004808dc;
code_r0x00010048088c:
          if (iVar27 != 4) {
            pppppppcVar21 = (code *******)((long)unaff_x22 + 1);
            goto code_r0x000100480cd0;
          }
          cVar3 = (char)pppppppcStack_200;
          pppppppcStack_200 = (code *******)CONCAT71(pppppppcStack_200._1_7_,0x16);
          if (cVar3 == '\x16') goto code_r0x000100480ca0;
          ppppppcVar25 = *unaff_x27;
          unaff_x26[1] = unaff_x27[1];
          *unaff_x26 = ppppppcVar25;
          uVar22 = *(undefined8 *)((long)unaff_x27 + 0xf);
          *(undefined8 *)((long)unaff_x26 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
          *(undefined8 *)((long)unaff_x26 + 0xf) = uVar22;
          cStack_98 = cVar3;
          FUN_101283ac4(&uStack_78,&cStack_98);
          if (((ulong)uStack_78 & 1) != 0) {
            pppppppcStack_1c0 = (code *******)((long)unaff_x22 + 1);
            unaff_x23 = (code *******)&pppppppcStack_200;
            param_2 = pppppppcStack_70;
            pppppppcVar26 = pppppppcStack_208;
            goto code_r0x000100480b3c;
          }
          unaff_x20 = (code *******)((ulong)uStack_78 >> 8 & 0xff);
          pppppppcVar28 = unaff_x21;
          unaff_x21 = unaff_x25;
          goto code_r0x0001004806a8;
        }
        if (uVar19 == 4) {
          FUN_100e077ec(&cStack_98);
          if (unaff_x28 == (int *)0x0) goto code_r0x00010048088c;
          goto code_r0x0001004808dc;
        }
        pppppppcVar23 = pppppppcStack_80;
        if (uVar19 != 0xc) {
code_r0x000100480d10:
          pppppppcVar21 = (code *******)((long)unaff_x22 + 1);
          goto code_r0x000100480d14;
        }
code_r0x000100480710:
        iVar27 = (int)unaff_x20;
        if (pppppppcVar23 == (code *******)0x6) {
          uVar19 = *(uint *)param_2;
          uVar2 = *(ushort *)((long)param_2 + 4) ^ 0x7375;
          bVar16 = (uVar19 ^ 0x74617473) != 0 || uVar2 != 0;
          if (unaff_x28 == (int *)0x0) goto code_r0x000100480888;
          _free();
          if ((uVar19 ^ 0x74617473) == 0 && uVar2 == 0) goto code_r0x00010048088c;
        }
        else if (unaff_x28 != (int *)0x0) {
          _free();
        }
      }
      else if (uVar19 == 0xd) {
        if (param_2 == (code *******)0x6) {
          cVar3 = *unaff_x28 != 0x74617473 || (short)unaff_x28[1] != 0x7375;
          FUN_100e077ec(&cStack_98);
          goto code_r0x000100480868;
        }
code_r0x000100480870:
        FUN_100e077ec(&cStack_98);
      }
      else if (uVar19 == 0xe) {
        if (((((pppppppcStack_80 == (code *******)0x6) && (*(char *)param_2 == 's')) &&
             (*(char *)((long)param_2 + 1) == 't')) &&
            ((*(char *)((long)param_2 + 2) == 'a' && (*(char *)((long)param_2 + 3) == 't')))) &&
           (*(char *)((long)param_2 + 4) == 'u')) {
          bVar16 = *(char *)((long)param_2 + 5) != 's';
        }
        else {
          bVar16 = true;
        }
        if (unaff_x28 != (int *)0x0) {
          _free();
        }
code_r0x000100480888:
        iVar27 = (int)unaff_x20;
        if (!bVar16) goto code_r0x00010048088c;
      }
      else {
        if (uVar19 != 0xf) goto code_r0x000100480d10;
        if (((param_2 != (code *******)0x6) || ((char)*unaff_x28 != 's')) ||
           ((*(char *)((long)unaff_x28 + 1) != 't' ||
            (((*(char *)((long)unaff_x28 + 2) != 'a' || (*(char *)((long)unaff_x28 + 3) != 't')) ||
             ((char)unaff_x28[1] != 'u')))))) goto code_r0x000100480870;
        cVar3 = *(char *)((long)unaff_x28 + 5);
        FUN_100e077ec(&cStack_98);
        if (cVar3 == 's') goto code_r0x00010048088c;
      }
code_r0x0001004808dc:
      pppppppcVar21 = (code *******)((ulong)pppppppcStack_200 & 0xff);
      pppppppcVar28 = unaff_x21;
code_r0x0001004808e0:
      unaff_x21 = unaff_x25;
      pppppppcStack_200 = (code *******)CONCAT71(pppppppcStack_200._1_7_,0x16);
      if ((int)pppppppcVar21 == 0x16) {
code_r0x000100480ca0:
        pppppppcStack_1c0 = (code *******)((long)unaff_x22 + 1);
        FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100480cc8);
        (*pcVar5)();
      }
      ppppppcVar25 = *unaff_x27;
      unaff_x26[1] = unaff_x27[1];
      *unaff_x26 = ppppppcVar25;
      uVar22 = *(undefined8 *)((long)unaff_x27 + 0xf);
      *(undefined8 *)((long)unaff_x26 + 0x17) = *(undefined8 *)((long)unaff_x27 + 0x17);
      *(undefined8 *)((long)unaff_x26 + 0xf) = uVar22;
      cStack_98 = (char)pppppppcVar21;
      FUN_100e077ec(&cStack_98);
code_r0x0001004806a8:
      pppppppcVar17 = unaff_x23 + 8;
      unaff_x22 = (code *******)((long)unaff_x22 + 1);
      pppppppcVar29 = pppppppcStack_210;
      unaff_x25 = unaff_x21;
      unaff_x23 = pppppppcVar28;
      if (pppppppcVar17 == unaff_x21) goto code_r0x000100480a24;
      goto code_r0x0001004806bc;
    }
    goto code_r0x000100480a3c;
  case 0x16:
  case 0x85:
    goto code_r0x000100480e4c;
  case 0x17:
  case 0x89:
  case 0xd3:
    goto code_r0x000100480e5c;
  case 0x18:
  case 0xb5:
  case 0xc9:
    goto code_r0x000100480e24;
  case 0x19:
  case 0x84:
  case 0xb6:
    goto code_r0x000100480e3c;
  case 0x1a:
    while( true ) {
code_r0x000100480dd0:
      pppppppcVar31 = (code *******)((long)pppppppcVar31 + -1);
      unaff_x24 = (code *******)0x0;
      if (pppppppcVar31 == (code *******)0x0) break;
code_r0x000100480dd8:
      unaff_x21 = unaff_x22 + 4;
code_r0x000100480ddc:
      pppppppcVar17 = unaff_x22;
code_r0x000100480de0:
      FUN_100e077ec(pppppppcVar17);
code_r0x000100480de4:
      unaff_x22 = unaff_x21;
    }
  case 0xa6:
    if (unaff_x23 != (code *******)0x0) {
code_r0x000100480df0:
code_r0x000100480df4:
      _free();
code_r0x000100480dfc:
      __Unwind_Resume(param_2);
code_r0x000100480e00:
      param_2 = (code *******)FUN_107c05ccc();
code_r0x000100480e04:
      pppppppcVar17 = param_2;
code_r0x000100480e08:
      param_2 = (code *******)&pppppppcStack_200;
code_r0x000100480e0c:
      FUN_100e7b998(param_2);
      param_2 = pppppppcVar17;
    }
    goto code_r0x000100480e14;
  case 0x1b:
  case 0x5c:
  case 0xcc:
  case 0xf6:
    goto code_r0x000100480e6c;
  case 0x1c:
  case 0xce:
    UNRECOVERED_JUMPTABLE = (code *******)param_3[1];
    pppppppcVar21 = (code *******)param_3[2];
  case 0xa4:
    ppppppcVar25 = param_3[3];
code_r0x000100480e8c:
    pppppppcVar23 = (code *******)((long)ppppppcVar25 * 0x40);
    unaff_x22 = pppppppcVar21 + (long)ppppppcVar25 * 8;
    unaff_x26 = (code *******)&pppppppcStack_1f0;
code_r0x000100480e98:
    pppppppcVar24 = UNRECOVERED_JUMPTABLE;
    pppppppcStack_1d0 = pppppppcVar21;
    pppppppcStack_1c8 = pppppppcVar21;
code_r0x000100480e9c:
    UNRECOVERED_JUMPTABLE = (code *******)0x16;
    pppppppcStack_1c0 = pppppppcVar24;
    pppppppcStack_1b8 = unaff_x22;
code_r0x000100480ea4:
    pppppppcStack_1f0 = (code *******)CONCAT71(pppppppcStack_1f0._1_7_,(char)UNRECOVERED_JUMPTABLE);
code_r0x000100480ea8:
    pppppppcStack_1b0 = (code *******)0x0;
    if (ppppppcVar25 == (code ******)0x0) {
      unaff_x24 = (code *******)0x0;
      pppppppcVar17 = unaff_x27;
code_r0x000100481418:
      pppppppcStack_b0 = (code *******)&UNK_108ca26b0;
      pppppppcStack_a8 = (code *******)0x2;
      cStack_90 = (char)&pppppppcStack_b0;
      cStack_8f = (char)((ulong)&pppppppcStack_b0 >> 8);
      uStack_8e = (undefined6)((ulong)&pppppppcStack_b0 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      unaff_x23 = (code *******)0x8000000000000001;
      ppppppcVar25 = (code ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&cStack_90);
LAB_10048144c:
      *param_2 = (code ******)0x800000000000006e;
      param_2[1] = ppppppcVar25;
      unaff_x24 = (code *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
      pppppppcVar23 = unaff_x26;
joined_r0x000100481588:
      if (unaff_x24 != (code *******)0x0) {
        _free(pppppppcVar17);
      }
LAB_10048158c:
      if ((long)unaff_x23 < -0x7ffffffffffffffe) goto LAB_1004815a8;
    }
    else {
code_r0x000100480eb0:
      unaff_x25 = (code *******)0x0;
      unaff_x20 = (code *******)((ulong)&cStack_90 | 1);
      unaff_x21 = (code *******)((ulong)unaff_x26 | 1);
code_r0x000100480ec0:
      pppppppcVar23 = (code *******)((ulong)(pppppppcVar23 + -8) >> 6);
code_r0x000100480ec8:
      pppppppcStack_210 = (code *******)((long)pppppppcVar23 + 1);
code_r0x000100480ed0:
      unaff_x26 = pppppppcVar21 + 8;
code_r0x000100480ed4:
      unaff_x23 = (code *******)0x8000000000000001;
      unaff_x24 = (code *******)0x8000000000000000;
code_r0x000100480edc:
code_r0x000100480f08:
      do {
        unaff_x27 = unaff_x26 + -8;
        pppppppcVar23 = (code *******)(ulong)*(byte *)unaff_x27;
code_r0x000100480f10:
        pppppppcVar17 = unaff_x25;
        pppppppcVar21 = unaff_x26;
        if ((int)pppppppcVar23 == 0x16) break;
        cStack_90 = (char)pppppppcVar23;
        ppppppcVar18 = unaff_x27[3];
        pppppppcVar33 = (code *******)unaff_x27[2];
code_r0x000100480f20:
        pppppppcVar17 = pppppppcStack_200;
        *(code *******)((long)unaff_x20 + 0x17) = ppppppcVar18;
        *(code ********)((long)unaff_x20 + 0xf) = pppppppcVar33;
        ppppppcVar25 = *(code *******)((long)unaff_x27 + 1);
        unaff_x20[1] = *(code *******)((long)unaff_x27 + 9);
        *unaff_x20 = ppppppcVar25;
        pppppppcStack_1e8 = (code *******)unaff_x27[5];
        pppppppcStack_1f0 = (code *******)unaff_x27[4];
        pppppppcStack_1e0 = (code *******)unaff_x27[6];
        pppppppcVar21 = (code *******)CONCAT71(uStack_87,uStack_88);
        uVar19 = (uint)pppppppcVar23;
        if (uVar19 < 0xd) {
          if (uVar19 == 1) {
            uVar19 = 1;
            if (cStack_8f != '\x01') {
              uVar19 = 2;
            }
            uVar1 = 0;
            if (cStack_8f != '\0') {
              uVar1 = uVar19;
            }
            unaff_x28 = (int *)(ulong)uVar1;
            goto code_r0x00010048116c;
          }
          if (uVar19 == 4) {
            uVar19 = 1;
            if (pppppppcVar21 != (code *******)0x1) {
              uVar19 = 2;
            }
            pppppppcVar23 = (code *******)(ulong)uVar19;
            in_ZR = pppppppcVar21 == (code *******)0x0;
code_r0x000100480fe0:
            uVar19 = 0;
            if (!(bool)in_ZR) {
              uVar19 = (uint)pppppppcVar23;
            }
            unaff_x28 = (int *)(ulong)uVar19;
            goto code_r0x00010048116c;
          }
          if (uVar19 != 0xc) {
code_r0x0001004818e0:
            pppppppcStack_1b0 = (code *******)((long)unaff_x25 + 1);
            pppppppcStack_1c8 = unaff_x26;
            ppppppcVar25 = (code ******)
                           thunk_FUN_108855b04(&cStack_90,&pppppppcStack_b0,&UNK_10b20ea80);
            unaff_x26 = (code *******)&pppppppcStack_1f0;
            unaff_x21 = pppppppcStack_1f8;
            goto LAB_10048144c;
          }
          if (uStack_78 == (code *******)0x6) {
            pppppppcVar23 = (code *******)(ulong)*(uint *)pppppppcStack_80;
            UNRECOVERED_JUMPTABLE = (code *******)0x6170;
            pppppppcVar17 = pppppppcStack_80;
code_r0x0001004810bc:
            uVar19 = 1;
            if ((uint)pppppppcVar23 != ((uint)UNRECOVERED_JUMPTABLE & 0xffff | 0x61720000) ||
                *(short *)((long)pppppppcVar17 + 4) != 0x736d) {
              uVar19 = 2;
            }
            unaff_x28 = (int *)(ulong)uVar19;
          }
          else if (uStack_78 == (code *******)0x2) {
            pppppppcVar23 = (code *******)(ulong)*(ushort *)pppppppcStack_80;
code_r0x000100480f70:
            uVar19 = 2;
            if ((int)pppppppcVar23 == 0x6469) {
              uVar19 = 0;
            }
            unaff_x28 = (int *)(ulong)uVar19;
          }
          else {
            unaff_x28 = (int *)0x2;
          }
joined_r0x000100480f80:
          if (pppppppcVar21 != (code *******)0x0) {
            _free();
          }
        }
        else {
          if (uVar19 == 0xd) {
            pppppppcVar17 = pppppppcStack_80;
            if (pppppppcStack_80 == (code *******)0x6) {
              uVar19 = 1;
              if (*(uint *)pppppppcVar21 != 0x61726170 ||
                  *(short *)((long)pppppppcVar21 + 4) != 0x736d) {
                uVar19 = 2;
              }
              unaff_x28 = (int *)(ulong)uVar19;
            }
            else {
code_r0x000100481038:
              if (pppppppcVar17 != (code *******)0x2) goto code_r0x000100481138;
              pppppppcVar21 = (code *******)(ulong)*(ushort *)pppppppcVar21;
code_r0x000100481044:
              in_ZR = (int)pppppppcVar21 == 0x6469;
code_r0x00010048104c:
              uVar19 = 2;
              if ((bool)in_ZR) {
                uVar19 = 0;
              }
              unaff_x28 = (int *)(ulong)uVar19;
            }
          }
          else {
            if (uVar19 == 0xe) {
              if (uStack_78 == (code *******)0x6) {
                pppppppcVar23 = (code *******)(ulong)*(byte *)pppppppcStack_80;
                pppppppcVar17 = pppppppcStack_80;
code_r0x00010048105c:
                if ((int)pppppppcVar23 == 0x70) {
code_r0x000100481064:
                  in_ZR = *(char *)((long)pppppppcVar17 + 1) == 'a';
code_r0x00010048106c:
                  if (((bool)in_ZR) && (*(char *)((long)pppppppcVar17 + 2) == 'r')) {
code_r0x00010048107c:
                    if (*(char *)((long)pppppppcVar17 + 3) == 'a') {
                      pppppppcVar23 = (code *******)(ulong)*(byte *)((long)pppppppcVar17 + 4);
code_r0x00010048108c:
                      if ((int)pppppppcVar23 == 0x6d) {
code_r0x000100481094:
                        if (*(char *)((long)pppppppcVar17 + 5) == 's') {
                          unaff_x28 = (int *)0x1;
code_r0x0001004810a4:
                          goto code_r0x0001004810ac;
                        }
                      }
                    }
                  }
                }
code_r0x0001004810a8:
                unaff_x28 = (int *)0x2;
              }
              else {
                if ((uStack_78 != (code *******)0x2) || (*(char *)pppppppcStack_80 != 'i'))
                goto code_r0x0001004810a8;
                pppppppcVar23 = (code *******)(ulong)*(byte *)((long)pppppppcStack_80 + 1);
code_r0x000100481008:
                if ((int)pppppppcVar23 != 100) goto code_r0x0001004810a8;
code_r0x000100481010:
                unaff_x28 = (int *)0x0;
              }
code_r0x0001004810ac:
              goto joined_r0x000100480f80;
            }
            if (uVar19 != 0xf) goto code_r0x0001004818e0;
            if (pppppppcStack_80 == (code *******)0x6) {
              pppppppcVar23 = (code *******)(ulong)*(byte *)pppppppcVar21;
code_r0x0001004810ec:
              if (((((int)pppppppcVar23 == 0x70) && (*(char *)((long)pppppppcVar21 + 1) == 'a')) &&
                  (*(char *)((long)pppppppcVar21 + 2) == 'r')) &&
                 (((*(char *)((long)pppppppcVar21 + 3) == 'a' &&
                   (*(char *)((long)pppppppcVar21 + 4) == 'm')) &&
                  (*(char *)((long)pppppppcVar21 + 5) == 's')))) {
                unaff_x28 = (int *)0x1;
                goto code_r0x00010048116c;
              }
            }
            else if (pppppppcStack_80 == (code *******)0x2) {
code_r0x000100480fb0:
              in_ZR = *(char *)pppppppcVar21 == 'i';
code_r0x000100480fb8:
              if (((bool)in_ZR) && (*(char *)((long)pppppppcVar21 + 1) == 'd')) {
                unaff_x28 = (int *)0x0;
                goto code_r0x00010048116c;
              }
            }
code_r0x000100481138:
            unaff_x28 = (int *)0x2;
          }
code_r0x00010048116c:
          FUN_100e077ec(&cStack_90);
        }
        pppppppcVar17 = pppppppcStack_200;
        cVar3 = (char)pppppppcStack_1f0;
        if (((ulong)unaff_x28 & 0xff) == 0) {
          if (unaff_x23 != (code *******)0x8000000000000001) {
            pppppppcStack_1b0 = (code *******)((long)unaff_x25 + 1);
            pppppppcStack_b0 = (code *******)&UNK_108ca26b0;
            pppppppcStack_a8 = (code *******)0x2;
            cStack_90 = (char)&pppppppcStack_b0;
            cStack_8f = (char)((ulong)&pppppppcStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&pppppppcStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppcStack_1c8 = unaff_x26;
            ppppppcVar25 = (code ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
            unaff_x26 = (code *******)&pppppppcStack_1f0;
            unaff_x21 = pppppppcStack_1f8;
            goto LAB_10048144c;
          }
          pppppppcStack_1f0 = (code *******)CONCAT71(pppppppcStack_1f0._1_7_,0x16);
          if (cVar3 == '\x16') {
            pppppppcStack_1b0 = (code *******)((long)unaff_x25 + 1);
            pppppppcStack_1c8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004818dc;
          }
          ppppppcVar25 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppcVar25;
          uVar22 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar22;
          cStack_90 = cVar3;
          FUN_10135ba2c(&pppppppcStack_b0,&cStack_90);
          if (pppppppcStack_b0 == (code *******)0x8000000000000001) {
            pppppppcStack_1b0 = (code *******)((long)unaff_x25 + 1);
            unaff_x23 = (code *******)0x8000000000000001;
            *param_2 = (code ******)0x800000000000006e;
            param_2[1] = (code ******)pppppppcStack_a8;
            unaff_x24 = (code *******)((ulong)unaff_x24 & 0x7fffffffffffffff);
            pppppppcVar23 = (code *******)&pppppppcStack_1f0;
            pppppppcStack_1c8 = unaff_x26;
            pppppppcVar17 = pppppppcStack_200;
            unaff_x21 = pppppppcStack_1f8;
            goto joined_r0x000100481588;
          }
          pppppppcStack_1f8 = pppppppcStack_a8;
          pppppppcStack_208 = pppppppcStack_a0;
          unaff_x23 = pppppppcStack_b0;
        }
        else if (((uint)unaff_x28 & 0xff) == 1) {
          if (unaff_x24 != (code *******)0x8000000000000000) {
            pppppppcStack_1b0 = (code *******)((long)unaff_x25 + 1);
            pppppppcStack_b0 = (code *******)&UNK_108cb9606;
            pppppppcStack_a8 = (code *******)0x6;
            cStack_90 = (char)&pppppppcStack_b0;
            cStack_8f = (char)((ulong)&pppppppcStack_b0 >> 8);
            uStack_8e = (undefined6)((ulong)&pppppppcStack_b0 >> 0x10);
            uStack_88 = 0xa0;
            uStack_87 = 0x100c7b3;
            pppppppcStack_1c8 = unaff_x26;
            ppppppcVar25 = (code ******)
                           thunk_FUN_108856088(s_duplicate_field_____108ac2973,&cStack_90);
            *param_2 = (code ******)0x800000000000006e;
            param_2[1] = ppppppcVar25;
            pppppppcVar23 = (code *******)&pppppppcStack_1f0;
            unaff_x21 = pppppppcStack_1f8;
            goto joined_r0x000100481588;
          }
          pppppppcStack_1f0 = (code *******)CONCAT71(pppppppcStack_1f0._1_7_,0x16);
          if (cVar3 == '\x16') {
            pppppppcStack_1b0 = (code *******)((long)unaff_x25 + 1);
            pppppppcStack_1c8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
            goto code_r0x0001004818dc;
          }
          ppppppcVar25 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppcVar25;
          uVar22 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar22;
          cStack_90 = cVar3;
          FUN_10124fe6c(&pppppppcStack_b0,&cStack_90);
          unaff_x24 = pppppppcStack_b0;
          if (pppppppcStack_b0 == (code *******)0x8000000000000000) {
            pppppppcStack_1b0 = (code *******)((long)unaff_x25 + 1);
            *param_2 = (code ******)0x800000000000006e;
            param_2[1] = (code ******)pppppppcStack_a8;
            pppppppcVar23 = (code *******)&pppppppcStack_1f0;
            unaff_x21 = pppppppcStack_1f8;
            pppppppcStack_1c8 = unaff_x26;
            goto LAB_10048158c;
          }
code_r0x000100480ee0:
          pppppppcStack_200 = pppppppcStack_a8;
code_r0x000100480ee8:
          pppppppcVar21 = (code *******)&pppppppcStack_b0;
code_r0x000100480eec:
          ppppppcVar18 = pppppppcVar21[3];
          pppppppcVar33 = (code *******)pppppppcVar21[2];
code_r0x000100480ef0:
          pppppppcStack_c0 = pppppppcVar33;
          ppppppcStack_b8 = ppppppcVar18;
        }
        else {
          pppppppcStack_1f0 = (code *******)CONCAT71(pppppppcStack_1f0._1_7_,0x16);
          if (cVar3 == '\x16') {
            pppppppcStack_1b0 = (code *******)((long)unaff_x25 + 1);
            pppppppcStack_1c8 = unaff_x26;
            FUN_107c05cac(&UNK_108ca1a98,0x2c,&UNK_10b24f848);
code_r0x0001004818dc:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1004818e0);
            (*pcVar5)();
          }
          ppppppcVar25 = *unaff_x21;
          unaff_x20[1] = unaff_x21[1];
          *unaff_x20 = ppppppcVar25;
          uVar22 = *(undefined8 *)((long)unaff_x21 + 0xf);
          *(undefined8 *)((long)unaff_x20 + 0x17) = *(undefined8 *)((long)unaff_x21 + 0x17);
          *(undefined8 *)((long)unaff_x20 + 0xf) = uVar22;
          cStack_90 = cVar3;
          FUN_100e077ec(&cStack_90);
        }
        unaff_x26 = unaff_x26 + 8;
code_r0x000100480ef8:
        unaff_x25 = (code *******)((long)unaff_x25 + 1);
        pppppppcVar17 = pppppppcStack_210;
        pppppppcVar21 = unaff_x22;
      } while (unaff_x27 + 8 != unaff_x22);
      unaff_x21 = pppppppcStack_1f8;
      pppppppcStack_1c8 = pppppppcVar21;
      pppppppcStack_1b0 = pppppppcVar17;
      if (unaff_x23 == (code *******)0x8000000000000001) {
        unaff_x26 = (code *******)&pppppppcStack_1f0;
        pppppppcVar17 = pppppppcStack_200;
        goto code_r0x000100481418;
      }
      if (unaff_x24 != (code *******)0x8000000000000000) {
        param_2[4] = ppppppcStack_b8;
        param_2[3] = (code ******)pppppppcStack_c0;
        *param_2 = (code ******)0x800000000000002d;
        param_2[1] = (code ******)unaff_x24;
        param_2[2] = (code ******)pppppppcStack_200;
        param_2[5] = (code ******)unaff_x23;
        param_2[6] = (code ******)pppppppcStack_1f8;
        param_2[7] = (code ******)pppppppcStack_208;
        _memcpy(&pppppppcStack_1a0,param_2,0x1c0);
        FUN_100d34830(&pppppppcStack_1d0);
        if (unaff_x22 == pppppppcVar21) {
          return;
        }
        cStack_90 = (char)pppppppcVar17;
        cStack_8f = (char)((ulong)pppppppcVar17 >> 8);
        uStack_8e = (undefined6)((ulong)pppppppcVar17 >> 0x10);
        ppppppcVar25 = (code ******)
                       thunk_FUN_1087e422c((undefined *)
                                           ((long)pppppppcVar17 +
                                           ((ulong)((long)unaff_x22 - (long)pppppppcVar21) >> 6)),
                                           &cStack_90,&UNK_10b23a190);
        *param_2 = (code ******)0x800000000000006e;
        param_2[1] = ppppppcVar25;
        FUN_100e44f40(&pppppppcStack_1a0);
        return;
      }
      pppppppcStack_b0 = (code *******)&UNK_108cb9606;
      pppppppcStack_a8 = (code *******)0x6;
      cStack_90 = (char)&pppppppcStack_b0;
      cStack_8f = (char)((ulong)&pppppppcStack_b0 >> 8);
      uStack_8e = (undefined6)((ulong)&pppppppcStack_b0 >> 0x10);
      uStack_88 = 0xa0;
      uStack_87 = 0x100c7b3;
      ppppppcVar25 = (code ******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&cStack_90);
      *param_2 = (code ******)0x800000000000006e;
      param_2[1] = ppppppcVar25;
      unaff_x23 = (code *******)((ulong)unaff_x23 & 0x7fffffffffffffff);
      pppppppcVar23 = (code *******)&pppppppcStack_1f0;
    }
    if (unaff_x23 != (code *******)0x0) {
      _free(unaff_x21);
    }
LAB_1004815a8:
    FUN_100d34830(pppppppcVar23 + 4);
    if ((char)pppppppcStack_1f0 != '\x16') {
      FUN_100e077ec(&pppppppcStack_1f0);
    }
    return;
  case 0x1d:
  case 99:
  case 0xba:
  case 199:
  case 0xfd:
    goto code_r0x000100480e44;
  case 0x1e:
  case 0x61:
  case 0xfb:
    goto code_r0x000100480e9c;
  case 0x1f:
    goto code_r0x000100480e18;
  case 0x20:
  case 0x8c:
    goto code_r0x000100480e8c;
  case 0x21:
  case 0x47:
    goto code_r0x000100480dc0;
  case 0x22:
  case 0x4a:
    goto code_r0x000100480df0;
  case 0x23:
  case 100:
  case 0x8a:
  case 0xd0:
  case 0xfe:
    goto code_r0x000100480e74;
  case 0x24:
  case 0x49:
    goto code_r0x000100480d98;
  case 0x25:
  case 0x87:
  case 0xbd:
  case 0xcd:
    goto code_r0x000100480e2c;
  case 0x26:
  case 0x45:
    goto code_r0x000100480d90;
  case 0x28:
    goto code_r0x000100480eec;
  case 0x29:
    goto code_r0x000100480a4c;
  case 0x2a:
    goto code_r0x000100480a90;
  case 0x2d:
    goto code_r0x000100480c44;
  case 0x32:
    goto code_r0x000100480c6c;
  case 0x34:
    goto code_r0x000100480c84;
  case 0x36:
    goto code_r0x000100480c74;
  case 0x39:
    goto code_r0x000100480c5c;
  case 0x3a:
    goto code_r0x000100480b80;
  case 0x3b:
    goto code_r0x000100480c14;
  case 0x3e:
code_r0x000100480cd0:
    uStack_78 = (code *******)&UNK_108ca105e;
    pppppppcStack_70 = (code *******)0x6;
    pppppppcStack_1c0 = pppppppcVar21;
  case 0x52:
    pppppppcVar21 = (code *******)&uStack_78;
    pppppppcVar23 = (code *******)&UNK_100c7b000;
code_r0x000100480cec:
    pppppppcVar23 = pppppppcVar23 + 0x74;
    cStack_98 = (char)pppppppcVar21;
    cStack_97 = (char)((ulong)pppppppcVar21 >> 8);
    uStack_96 = (undefined6)((ulong)pppppppcVar21 >> 0x10);
    cStack_90 = (char)pppppppcVar23;
    cStack_8f = (char)((ulong)pppppppcVar23 >> 8);
    uStack_8e = (undefined6)((ulong)pppppppcVar23 >> 0x10);
    param_2 = (code *******)thunk_FUN_108856088(s_duplicate_field_____108ac2973,&cStack_98);
    unaff_x23 = (code *******)&pppppppcStack_200;
    pppppppcVar26 = pppppppcStack_208;
    goto LAB_100480a6c;
  case 0x3f:
    goto code_r0x000100480948;
  case 0x42:
  case 0xb4:
    goto code_r0x000100480da0;
  case 0x43:
  case 0x8f:
    goto code_r0x000100480db0;
  case 0x44:
  case 0xbb:
  case 0xd6:
    param_2 = (code *******)FUN_107c05ccc();
  case 0x51:
  case 0x94:
  case 0xd4:
    FUN_100e81e80(&pppppppcStack_200);
code_r0x000100480d88:
    goto code_r0x000100480e14;
  case 0x46:
    pppppppcVar17 = (code *******)&pppppppcStack_1b0;
  case 0x4e:
    FUN_100e35e0c(pppppppcVar17);
code_r0x000100480d48:
    goto code_r0x000100480e14;
  case 0x48:
  case 0x88:
  case 0xd2:
    goto code_r0x000100480dd8;
  case 0x4b:
    FUN_100e077ec(&pppppppcStack_200);
    goto code_r0x000100480e14;
  case 0x4c:
  case 0x90:
    goto code_r0x000100480de0;
  case 0x4d:
code_r0x000100480d14:
    pppppppcStack_1c0 = pppppppcVar21;
    param_2 = (code *******)thunk_FUN_108855b04(&cStack_98,&uStack_78,&UNK_10b20e780);
    unaff_x23 = (code *******)&pppppppcStack_200;
    pppppppcVar26 = pppppppcStack_208;
    goto LAB_100480a6c;
  case 0x4f:
    goto code_r0x000100480dc8;
  case 0x50:
    goto code_r0x000100480cec;
  case 0x54:
  case 0xa1:
    goto code_r0x000100480e40;
  case 0x55:
    goto code_r0x000100480a30;
  case 0x56:
    goto code_r0x000100480a74;
  case 0x58:
  case 0xf2:
    goto code_r0x000100480ed0;
  case 0x59:
  case 0xf3:
    goto code_r0x000100480ee0;
  case 0x5a:
  case 0xf4:
    goto code_r0x000100480ea8;
  case 0x5b:
  case 0xf5:
    goto code_r0x000100480ec0;
  case 0x5d:
  case 0xf7:
    goto code_r0x000100480ef0;
  case 0x5e:
  case 0xf8:
    goto code_r0x000100480f08;
  case 0x5f:
  case 0xf9:
    goto code_r0x000100480ec8;
  case 0x60:
  case 0xfa:
    goto code_r0x000100480f20;
  case 0x62:
  case 0xfc:
    goto code_r0x000100480f10;
  case 0x65:
  case 0xff:
    goto code_r0x000100480ef8;
  case 0x66:
  case 0x93:
    goto code_r0x000100480e1c;
  case 0x67:
    goto code_r0x000100480eb0;
  case 0x68:
  case 0x86:
  case 0xa3:
  case 0xb1:
  case 0xd5:
    goto code_r0x000100480e14;
  case 0x6a:
    goto code_r0x000100480f70;
  case 0x6b:
    goto code_r0x000100480a70;
  case 0x6c:
    goto code_r0x000100480ab4;
  case 0x6e:
    goto code_r0x00010048106c;
  case 0x6f:
    goto code_r0x00010048107c;
  case 0x70:
    goto code_r0x000100481044;
  case 0x71:
    goto code_r0x00010048105c;
  case 0x72:
    goto code_r0x000100481008;
  case 0x73:
    goto code_r0x00010048108c;
  case 0x74:
    goto code_r0x0001004810a4;
  case 0x75:
    goto code_r0x000100481064;
  case 0x76:
    goto code_r0x0001004810bc;
  case 0x77:
    goto code_r0x000100481038;
  case 0x78:
    goto code_r0x0001004810ac;
  case 0x79:
    goto code_r0x000100480fe0;
  case 0x7a:
    goto code_r0x000100481010;
  case 0x7b:
    goto code_r0x000100481094;
  case 0x7c:
    goto code_r0x000100480fb8;
  case 0x7d:
    goto code_r0x00010048104c;
  case 0x7e:
    goto code_r0x000100480fb0;
  case 0x80:
    goto code_r0x0001004810ec;
  case 0x81:
    goto code_r0x0001004806cc;
  case 0x82:
    goto code_r0x000100480710;
  case 0x8b:
  case 0xc6:
    goto code_r0x000100480e34;
  case 0x8d:
    goto code_r0x000100480e08;
  case 0x8e:
    goto code_r0x000100480e7c;
  case 0x91:
    ppppppcVar18 = unaff_x20[1];
    pppppppcVar33 = (code *******)*unaff_x20;
  case 0x9f:
    pppppppcStack_1a0 = pppppppcVar33;
    ppppppcStack_198 = ppppppcVar18;
code_r0x000100480e6c:
    ppppppcVar18 = unaff_x20[3];
    pppppppcVar33 = (code *******)unaff_x20[2];
code_r0x000100480e70:
    pppppppcStack_190 = pppppppcVar33;
    ppppppcStack_188 = ppppppcVar18;
code_r0x000100480e74:
    param_3 = (code *******)&pppppppcStack_1a0;
code_r0x000100480e7c:
    thunk_FUN_108801848(param_2,param_3);
code_r0x000100480e80:
    goto code_r0x000107c06034;
  case 0x92:
    goto code_r0x000100480d88;
  case 0x96:
    goto code_r0x000100480edc;
  case 0x97:
  case 0xd9:
    goto code_r0x000100480a44;
  case 0x98:
  case 0xda:
    goto code_r0x000100480a88;
  case 0x9a:
    goto code_r0x000100480e48;
  case 0x9b:
    goto code_r0x000100480e58;
  case 0x9c:
    goto code_r0x000100480e20;
  case 0x9d:
    goto code_r0x000100480e38;
  case 0x9e:
  case 0xbf:
    goto code_r0x000100480de4;
  case 0xa0:
    goto code_r0x000100480e80;
  case 0xa2:
    goto code_r0x000100480e98;
  case 0xa5:
    goto code_r0x000100480dbc;
  case 0xa7:
    goto code_r0x000100480e70;
  case 0xa8:
    goto code_r0x000100480d94;
  case 0xa9:
    goto code_r0x000100480e28;
  case 0xaa:
    param_2 = (code *******)FUN_107c05ccc();
code_r0x000100480d90:
code_r0x000100480d94:
code_r0x000100480d98:
    _free();
code_r0x000100480da0:
    param_2 = (code *******)__Unwind_Resume(param_2);
code_r0x000100480da8:
    _free();
code_r0x000100480db0:
    param_2 = (code *******)__Unwind_Resume(param_2);
code_r0x000100480dbc:
    pppppppcVar21 = (code *******)((long)unaff_x22 + 1);
code_r0x000100480dc0:
    pppppppcVar17 = param_2;
    pppppppcStack_1c0 = pppppppcVar21;
code_r0x000100480dc8:
    goto code_r0x000100480e08;
  case 0xac:
    goto code_r0x000100480ee8;
  case 0xad:
    goto code_r0x000100480a40;
  case 0xae:
    goto code_r0x000100480a84;
  case 0xb0:
    goto code_r0x000100480e04;
  case 0xb2:
    goto code_r0x000100480ddc;
  case 0xb3:
    goto code_r0x000100480df4;
  case 0xb7:
    goto code_r0x000100480dfc;
  case 0xb8:
  case 0xcb:
    goto code_r0x000100480e54;
  case 0xb9:
  case 0xca:
    goto code_r0x000100480dd0;
  case 0xbc:
  case 0xd1:
    goto code_r0x000100480da8;
  case 0xbe:
    FUN_100e35e0c(&pppppppcStack_1b0);
code_r0x000100480e14:
    __Unwind_Resume(param_2);
code_r0x000100480e18:
    unaff_x30 = FUN_100480e1c;
    FUN_107c05ccc();
    param_3 = extraout_x1;
code_r0x000100480e1c:
    pppppppcVar12 = (code *******)&stack0xfffffffffffffd90;
code_r0x000100480e20:
    *(code ********)((long)pppppppcVar12 + 0x10) = unaff_x26;
    *(code ********)((long)pppppppcVar12 + 0x18) = unaff_x25;
    pppppppcVar13 = pppppppcVar12;
code_r0x000100480e24:
    *(code ********)((long)pppppppcVar13 + 0x20) = unaff_x24;
    *(code ********)((long)pppppppcVar13 + 0x28) = unaff_x23;
    pppppppcVar14 = pppppppcVar13;
code_r0x000100480e28:
    *(code ********)((long)pppppppcVar14 + 0x30) = unaff_x22;
    *(code ********)((long)pppppppcVar14 + 0x38) = unaff_x21;
    pppppppcVar15 = pppppppcVar14;
code_r0x000100480e2c:
    *(code ********)((long)pppppppcVar15 + 0x40) = unaff_x20;
    *(code ********)((long)pppppppcVar15 + 0x48) = param_2;
    *(undefined1 **)((long)pppppppcVar15 + 0x50) = puVar32;
    *(code **)((long)pppppppcVar15 + 0x58) = unaff_x30;
code_r0x000100480e34:
code_r0x000100480e38:
code_r0x000100480e3c:
code_r0x000100480e40:
    pppppppcVar21 = (code *******)(ulong)*(byte *)param_3;
code_r0x000100480e44:
code_r0x000100480e48:
    pppppppcVar23 = (code *******)&UNK_108c99000;
code_r0x000100480e4c:
    pppppppcVar23 = (code *******)((long)pppppppcVar23 + 0x9d6);
    UNRECOVERED_JUMPTABLE = (code *******)&UNK_100480e60;
code_r0x000100480e54:
    ppppppcVar25 = (code ******)(ulong)*(ushort *)((long)pppppppcVar23 + (long)pppppppcVar21 * 2);
code_r0x000100480e58:
    UNRECOVERED_JUMPTABLE = (code *******)((long)UNRECOVERED_JUMPTABLE + (long)ppppppcVar25 * 4);
code_r0x000100480e5c:
                    /* WARNING: Could not recover jumptable at 0x000100480e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return;
  case 0xc0:
    goto code_r0x000100480d48;
  case 0xc2:
    goto code_r0x000100480ea4;
  case 0xc3:
    goto code_r0x000100480a38;
  case 0xc4:
    goto code_r0x000100480a7c;
  case 200:
    goto code_r0x000100480e0c;
  case 0xcf:
    goto code_r0x000100480e00;
  case 0xd8:
    goto code_r0x000100480ed4;
  case 0xdf:
    goto code_r0x000100480bb8;
  case 0xe3:
    goto code_r0x000100480bc0;
  case 0xe4:
    goto code_r0x000100480c18;
  case 0xe5:
    goto code_r0x000100480b94;
  case 0xe6:
    goto code_r0x000100480c08;
  case 0xe7:
code_r0x000100480b3c:
LAB_100480a6c:
    pppppppcVar21 = (code *******)0x1d;
code_r0x000100480a70:
    *pppppppcVar26 = (code ******)pppppppcVar21;
    pppppppcVar26[1] = (code ******)param_2;
code_r0x000100480a74:
    FUN_100d34830(unaff_x23 + 4);
code_r0x000100480a7c:
    in_ZR = (char)pppppppcStack_200 == '\x16';
code_r0x000100480a84:
    if ((bool)in_ZR) {
      return;
    }
code_r0x000100480a88:
    FUN_100e077ec(&pppppppcStack_200);
code_r0x000100480a90:
    return;
  case 0xe8:
    goto code_r0x000100480b6c;
  case 0xea:
    goto code_r0x000100480b14;
  case 0xec:
code_r0x000100480b0c:
    if (pppppppcVar17 == (code *******)0x0) {
      return;
    }
    goto code_r0x000100480b10;
  case 0xee:
    goto code_r0x000100480c64;
  case 0xef:
    goto code_r0x0001004808e0;
  }
code_r0x000100480c58:
  pppppppcStack_1b0 = (code *******)CONCAT71(pppppppcStack_1b0._1_7_,bVar20);
code_r0x000100480c5c:
  param_4 = &UNK_10b219e10;
code_r0x000100480c64:
  pppppppcVar17 = (code *******)&pppppppcStack_1b0;
  param_3 = (code *******)&uStack_78;
code_r0x000100480c6c:
  pppppppcVar17 = (code *******)FUN_107c05dcc(pppppppcVar17,param_3,param_4);
  pppppppcVar21 = (code *******)0x1d;
code_r0x000100480c74:
  *param_2 = (code ******)pppppppcVar21;
  param_2[1] = (code ******)pppppppcVar17;
code_r0x000100480c84:
  return;
code_r0x000100480c14:
  bVar20 = 1;
code_r0x000100480c18:
  goto code_r0x000100480c58;
code_r0x000100480a24:
  in_ZR = (int)unaff_x20 == 4;
  pppppppcStack_1c0 = pppppppcVar29;
code_r0x000100480a30:
  unaff_x23 = (code *******)&pppppppcStack_200;
  pppppppcVar26 = pppppppcStack_208;
code_r0x000100480a38:
  if ((bool)in_ZR) {
code_r0x000100480a3c:
    pppppppcVar21 = (code *******)&UNK_108ca1000;
code_r0x000100480a40:
    pppppppcVar21 = (code *******)((long)pppppppcVar21 + 0x5e);
code_r0x000100480a44:
    pppppppcStack_70 = (code *******)0x6;
    uStack_78 = pppppppcVar21;
code_r0x000100480a4c:
    cStack_98 = (char)&uStack_78;
    cStack_97 = (char)((ulong)&uStack_78 >> 8);
    uStack_96 = (undefined6)((ulong)&uStack_78 >> 0x10);
    cStack_90 = -0x60;
    cStack_8f = -0x4d;
    uStack_8e = 0x100c7;
    param_2 = (code *******)thunk_FUN_108856088(s_missing_field_____108ac28f7,&cStack_98);
    goto LAB_100480a6c;
  }
  *pppppppcVar26 = (code ******)0x5;
  *(char *)(pppppppcVar26 + 1) = (char)unaff_x20;
  _memcpy(&pppppppcStack_1b0,pppppppcVar26,0x118);
  param_2 = unaff_x23 + 4;
code_r0x000100480ab4:
  FUN_100d34830(param_2);
  if (unaff_x25 == unaff_x21) {
    return;
  }
  cStack_98 = (char)pppppppcVar29;
  cStack_97 = (char)((ulong)pppppppcVar29 >> 8);
  uStack_96 = (undefined6)((ulong)pppppppcVar29 >> 0x10);
  pppppppcVar17 =
       (code *******)
       thunk_FUN_1087e422c((undefined *)
                           ((long)pppppppcVar29 + ((ulong)((long)unaff_x25 - (long)unaff_x21) >> 6))
                           ,&cStack_98,&UNK_10b23a190);
  param_2 = pppppppcVar26;
code_r0x000100480b10:
  pppppppcVar21 = (code *******)0x1d;
code_r0x000100480b14:
  *param_2 = (code ******)pppppppcVar21;
  param_2[1] = (code ******)pppppppcVar17;
  FUN_100e35e0c(&pppppppcStack_1b0);
  return;
}

