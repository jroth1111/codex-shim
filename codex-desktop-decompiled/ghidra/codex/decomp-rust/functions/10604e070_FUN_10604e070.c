
void FUN_10604e070(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ushort uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong extraout_x14_01;
  char cStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  uint *puStack_28;
  
  uVar2 = (uint)((ulong)param_3 >> 0x10);
  uVar4 = *(ushort *)((long)param_4 + 10);
  uVar21 = 0x1f00;
  puVar16 = (uint *)*param_2;
  uVar18 = param_2[1];
  uVar6 = uVar4;
code_r0x00010604e09c:
  uVar14 = uVar6;
  uVar12 = uVar18;
  puVar10 = puVar16;
  uVar7 = (uint)param_3;
  if (uVar14 < 0x1f01) {
    uVar17 = (uint)((ulong)puVar10 >> 8);
    uVar20 = (uint)((ulong)puVar10 >> 0x10);
    puVar16 = puVar10;
    switch(uVar14) {
    case 1:
      uVar2 = uVar7 & 0xff;
      if (uVar2 < 4) {
        if (uVar2 == 1) {
          if (uVar12 == 0) goto code_r0x00010604ef18;
          puVar16 = (uint *)((long)puVar10 + 1);
          puVar10 = (uint *)(ulong)(byte)*puVar10;
          uVar12 = uVar12 - 1;
        }
        else {
          if (uVar2 != 2) {
code_r0x00010604eed4:
            uVar7 = uVar7 & 0xff;
            uVar8 = 0x19;
            goto code_r0x00010604ef20;
          }
          if (uVar12 < 2) goto code_r0x00010604ef18;
          puVar16 = (uint *)((long)puVar10 + 2);
          puVar10 = (uint *)(ulong)(ushort)*puVar10;
          uVar12 = uVar12 - 2;
        }
code_r0x00010604ef00:
        *param_2 = (ulong)puVar16;
        param_2[1] = uVar12;
      }
      else {
        if (uVar2 == 4) {
          if (3 < uVar12) {
            puVar16 = puVar10 + 1;
            puVar10 = (uint *)(ulong)*puVar10;
            uVar12 = uVar12 - 4;
            goto code_r0x00010604ef00;
          }
code_r0x00010604ef18:
          uVar7 = 0;
          uVar8 = 0x13;
code_r0x00010604ef20:
          *(undefined1 *)(param_1 + 1) = uVar8;
          *(undefined1 *)((long)param_1 + 0xf) = 0;
          *(undefined2 *)((long)param_1 + 0xd) = 0;
          *(uint *)((long)param_1 + 9) = uVar7;
          goto LAB_10604ef48;
        }
        if (uVar2 != 8) goto code_r0x00010604eed4;
        if (uVar12 < 8) goto code_r0x00010604ef18;
        *param_2 = (ulong)(puVar10 + 2);
        param_2[1] = uVar12 - 8;
        puVar10 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                          (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
      }
      uVar13 = 0;
      uVar17 = (uint)((ulong)puVar10 >> 8);
      uVar20 = (uint)((ulong)puVar10 >> 0x10);
      uVar18 = (ulong)puVar10 & 0xffffffff00000000;
      goto LAB_10604ef88;
    default:
      goto LAB_10604eb34;
    case 3:
      uVar19 = uVar12 - 2;
      if (1 < uVar12) {
        puVar16 = (uint *)((long)puVar10 + 2);
        uVar21 = (ulong)(ushort)*puVar10;
        goto code_r0x00010604e6ec;
      }
      goto code_r0x00010604e9a0;
    case 4:
      uVar19 = uVar12 - 4;
      if (3 < uVar12) {
        puVar16 = puVar10 + 1;
        uVar21 = (ulong)*puVar10;
        goto code_r0x00010604e6ec;
      }
      goto code_r0x00010604e9a0;
    case 5:
      if (uVar12 < 2) {
        *(undefined2 *)(param_1 + 1) = 0x13;
        *(undefined2 *)((long)param_1 + 10) = 0;
        goto code_r0x00010604ef44;
      }
      uVar20 = 0;
      uVar18 = 0;
      uVar19 = (long)puVar10 + 2;
      uVar2 = *puVar10;
      puVar10 = (uint *)(ulong)(ushort)uVar2;
      *param_2 = uVar19;
      param_2[1] = uVar12 - 2;
      uVar17 = (uint)(ushort)((ushort)uVar2 >> 8);
      uVar13 = 3;
      goto LAB_10604ef88;
    case 6:
      if ((uVar7 & 0xff00) == 0x400) {
        uVar7 = *(ushort *)(param_4 + 1) - 2;
        if (uVar7 < 0x78) {
          uVar21 = (ulong)*(ushort *)(&UNK_109bd52d0 + (ulong)uVar7 * 2);
          switch((uint)*(ushort *)(param_4 + 1)) {
          case 2:
          case 0x10:
          case 0x19:
          case 0x2a:
          case 0x2c:
          case 0x40:
          case 0x43:
          case 0x46:
          case 0x48:
          case 0x4a:
          case 0x4d:
          case 0x55:
          case 0x79:
code_r0x00010604e584:
            if (uVar12 < 4) {
              *(undefined1 *)(param_1 + 1) = 0x13;
              *(undefined4 *)((long)param_1 + 9) = 0;
              *(undefined1 *)((long)param_1 + 0xf) = 0;
              *(undefined2 *)((long)param_1 + 0xd) = 0;
              goto LAB_10604ef48;
            }
            uVar18 = 0;
            puVar16 = puVar10 + 1;
            uVar20 = *puVar10;
            puVar10 = (uint *)(ulong)uVar20;
            *param_2 = (ulong)puVar16;
            param_2[1] = uVar12 - 4;
            uVar17 = uVar20 >> 8;
            uVar20 = uVar20 >> 0x10;
            uVar13 = 10;
            goto LAB_10604ef88;
          case 0x38:
            if ((uVar2 & 0xfffe) == 2) goto code_r0x00010604e584;
          }
        }
      }
      if (uVar12 < 4) {
        *(undefined2 *)((long)param_1 + 9) = 0;
        *(undefined1 *)((long)param_1 + 0xb) = 0;
        *(undefined1 *)(param_1 + 1) = 0x13;
        *(undefined4 *)((long)param_1 + 0xc) = 0;
        goto LAB_10604ef48;
      }
      uVar18 = 0;
      puVar16 = puVar10 + 1;
      uVar20 = *puVar10;
      puVar10 = (uint *)(ulong)uVar20;
      *param_2 = (ulong)puVar16;
      param_2[1] = uVar12 - 4;
      uVar17 = uVar20 >> 8;
      uVar20 = uVar20 >> 0x10;
      uVar13 = 4;
      goto LAB_10604ef88;
    case 7:
      if ((uVar7 & 0xff00) == 0x800) {
        uVar7 = *(ushort *)(param_4 + 1) - 2;
        if (uVar7 < 0x78) {
          uVar21 = (ulong)(byte)(&UNK_109bd5258)[uVar7];
          switch((uint)*(ushort *)(param_4 + 1)) {
          case 2:
          case 0x10:
          case 0x19:
          case 0x2a:
          case 0x2c:
          case 0x40:
          case 0x43:
          case 0x46:
          case 0x48:
          case 0x4a:
          case 0x4d:
          case 0x55:
          case 0x79:
code_r0x00010604e768:
            if (7 < uVar12) {
              *param_2 = (ulong)(puVar10 + 2);
              param_2[1] = uVar12 - 8;
              puVar16 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                                (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
              goto code_r0x00010604ec24;
            }
            goto LAB_10604ed18;
          case 0x38:
            if ((uVar2 & 0xfffe) == 2) goto code_r0x00010604e768;
          }
        }
      }
      if (uVar12 < 8) goto LAB_10604ed18;
      *param_2 = (ulong)(puVar10 + 2);
      param_2[1] = uVar12 - 8;
      pbVar1 = (byte *)((long)puVar10 + 7);
      puVar16 = puVar10 + 1;
      uVar20 = *puVar10;
      puVar10 = (uint *)(ulong)uVar20;
      uVar17 = uVar20 >> 8;
      uVar20 = uVar20 >> 0x10;
      uVar18 = (ulong)(uint3)*puVar16 << 0x20 | (ulong)*pbVar1 << 0x38;
      uVar13 = 5;
      goto LAB_10604ef88;
    case 8:
      if (uVar12 == 0) goto code_r0x00010604e9a0;
      uVar21 = 0;
      uVar12 = uVar12 - 1;
      goto code_r0x00010604e3d8;
    case 9:
      if (uVar12 == 0) goto code_r0x00010604eb54;
      uVar18 = 0;
      uVar21 = 0;
      uVar19 = 0;
      goto code_r0x00010604e650;
    case 10:
      if (uVar12 == 0) goto code_r0x00010604e9a0;
      puVar16 = (uint *)((long)puVar10 + 1);
      uVar21 = (ulong)(byte)*puVar10;
      uVar19 = uVar12 - 1;
code_r0x00010604e6ec:
      *param_2 = (ulong)puVar16;
      param_2[1] = uVar19;
      puVar10 = puVar16;
      if (uVar19 < uVar21) goto code_r0x00010604e9a0;
      uVar17 = (uint)((ulong)puVar16 >> 8);
      uVar20 = (uint)((ulong)puVar16 >> 0x10);
      uVar18 = (ulong)puVar16 & 0xffffffff00000000;
      *param_2 = (long)puVar16 + uVar21;
      param_2[1] = uVar19 - uVar21;
      uVar13 = 1;
      goto LAB_10604ef88;
    case 0xb:
      if (uVar12 != 0) {
        uVar17 = 0;
        uVar20 = 0;
        uVar18 = 0;
        uVar2 = *puVar10;
        *param_2 = (long)puVar10 + 1;
        param_2[1] = uVar12 - 1;
        uVar13 = 2;
        puVar10 = (uint *)(ulong)(byte)uVar2;
        goto LAB_10604ef88;
      }
      break;
    case 0xc:
      if (uVar12 != 0) {
        uVar17 = 0;
        uVar20 = 0;
        uVar18 = 0;
        uVar2 = *puVar10;
        *param_2 = (long)puVar10 + 1;
        param_2[1] = uVar12 - 1;
        uVar13 = 9;
        puVar10 = (uint *)(ulong)((char)uVar2 != '\0');
        goto LAB_10604ef88;
      }
      break;
    case 0xd:
      func_0x000106052cc4(&cStack_30);
      if (cStack_30 != 'R') {
        *(uint *)((long)param_1 + 9) =
             CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
        *(uint *)((long)param_1 + 0xc) =
             CONCAT13(uStack_29,CONCAT12(uStack_2a,CONCAT11(uStack_2b,uStack_2c)));
        *(char *)(param_1 + 1) = cStack_30;
        param_1[2] = puStack_28;
        *param_1 = 0x2e;
        return;
      }
      uVar17 = (uint)((ulong)puStack_28 >> 8);
      uVar20 = (uint)((ulong)puStack_28 >> 0x10);
      uVar18 = (ulong)puStack_28 & 0xffffffff00000000;
      uVar13 = 6;
      puVar10 = puStack_28;
      uVar21 = extraout_x14;
      goto LAB_10604ef88;
    case 0xe:
      if ((uVar7 >> 8 & 0xff) == 8) {
        if (uVar12 < 8) goto LAB_10604ed18;
        *param_2 = (ulong)(puVar10 + 2);
        param_2[1] = uVar12 - 8;
        puVar16 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                          (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
      }
      else {
        if (uVar12 < 4) goto LAB_10604ed18;
        puVar16 = (uint *)(ulong)*puVar10;
        *param_2 = (ulong)(puVar10 + 1);
        param_2[1] = uVar12 - 4;
      }
      uVar17 = (uint)((ulong)puVar16 >> 8);
      uVar20 = (uint)((ulong)puVar16 >> 0x10);
      uVar18 = (ulong)puVar16 & 0xffffffff00000000;
      uVar13 = 0x1a;
      puVar10 = puVar16;
      goto LAB_10604ef88;
    case 0xf:
      if (uVar12 == 0) goto LAB_10604ea64;
      puVar15 = (uint *)0x0;
      uVar18 = 0;
      lVar11 = 1 - uVar12;
      goto code_r0x00010604e6a4;
    case 0x10:
      if ((uVar2 & 0xffff) == 2) {
        func_0x000106052fb8(&cStack_30);
        uVar21 = extraout_x14_00;
      }
      else {
        func_0x000106052c10(&cStack_30,param_2,uVar7 >> 8);
        uVar21 = extraout_x14_01;
      }
      if (cStack_30 != 'R') {
        *(uint *)((long)param_1 + 9) =
             CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
        *(uint *)((long)param_1 + 0xc) =
             CONCAT13(uStack_29,CONCAT12(uStack_2a,CONCAT11(uStack_2b,uStack_2c)));
        *(char *)(param_1 + 1) = cStack_30;
        param_1[2] = puStack_28;
        *param_1 = 0x2e;
        return;
      }
      uVar17 = (uint)((ulong)puStack_28 >> 8);
      uVar20 = (uint)((ulong)puStack_28 >> 0x10);
      uVar18 = (ulong)puStack_28 & 0xffffffff00000000;
      uVar13 = 0xe;
      puVar10 = puStack_28;
      goto LAB_10604ef88;
    case 0x11:
      if (uVar12 != 0) {
        uVar17 = 0;
        uVar20 = 0;
        uVar18 = 0;
        uVar2 = *puVar10;
        *param_2 = (long)puVar10 + 1;
        param_2[1] = uVar12 - 1;
        uVar13 = 0xd;
        puVar10 = (uint *)(ulong)(byte)uVar2;
        goto LAB_10604ef88;
      }
      break;
    case 0x12:
      if (uVar12 < 2) goto code_r0x00010604e878;
      uVar20 = 0;
      uVar18 = 0;
      uVar2 = *puVar10;
      *param_2 = (long)puVar10 + 2;
      param_2[1] = uVar12 - 2;
      uVar17 = (uint)(ushort)((ushort)uVar2 >> 8);
      uVar13 = 0xd;
      puVar10 = (uint *)(ulong)(ushort)uVar2;
      goto LAB_10604ef88;
    case 0x13:
      if (uVar12 < 4) goto code_r0x00010604e924;
      uVar18 = 0;
      uVar2 = *puVar10;
      *param_2 = (ulong)(puVar10 + 1);
      param_2[1] = uVar12 - 4;
      uVar17 = uVar2 >> 8;
      uVar20 = uVar2 >> 0x10;
      uVar13 = 0xd;
      puVar10 = (uint *)(ulong)uVar2;
      goto LAB_10604ef88;
    case 0x14:
      if (uVar12 < 8) goto LAB_10604ed18;
      *param_2 = (ulong)(puVar10 + 2);
      param_2[1] = uVar12 - 8;
      uVar2 = *puVar10;
      uVar17 = uVar2 >> 8;
      uVar20 = uVar2 >> 0x10;
      uVar18 = (ulong)(uint3)puVar10[1] << 0x20 | (ulong)*(byte *)((long)puVar10 + 7) << 0x38;
      uVar13 = 0xd;
      puVar10 = (uint *)(ulong)uVar2;
      goto LAB_10604ef88;
    case 0x15:
      if (uVar12 == 0) goto LAB_10604ea64;
      puVar15 = (uint *)0x0;
      uVar18 = 0;
      lVar11 = 1 - uVar12;
      goto code_r0x00010604e364;
    case 0x16:
      if (uVar12 != 0) goto code_r0x00010604e0d0;
      uVar14 = 0;
      uVar8 = 0x13;
      goto code_r0x00010604ef38;
    case 0x17:
      if ((uVar7 >> 8 & 0xff) == 8) goto code_r0x00010604e768;
      if (uVar12 < 4) goto LAB_10604ed18;
      puVar16 = (uint *)(ulong)*puVar10;
      *param_2 = (ulong)(puVar10 + 1);
      param_2[1] = uVar12 - 4;
code_r0x00010604ec24:
      uVar17 = (uint)((ulong)puVar16 >> 8);
      uVar20 = (uint)((ulong)puVar16 >> 0x10);
      uVar18 = (ulong)puVar16 & 0xffffffff00000000;
      uVar13 = 10;
      puVar10 = puVar16;
      goto LAB_10604ef88;
    case 0x18:
      if (uVar12 == 0) goto code_r0x00010604eb54;
      uVar18 = 0;
      uVar21 = 0;
      uVar19 = 0;
      goto code_r0x00010604e8c0;
    case 0x19:
      uVar17 = 0;
      uVar20 = 0;
      uVar18 = 0;
      uVar13 = 9;
      puVar10 = (uint *)0x1;
      goto LAB_10604ef88;
    case 0x1a:
      goto code_r0x00010604e150;
    case 0x1b:
      goto LAB_10604e204;
    case 0x1c:
      if (uVar12 < 4) goto code_r0x00010604e924;
      uVar18 = 0;
      uVar2 = *puVar10;
      *param_2 = (ulong)(puVar10 + 1);
      param_2[1] = uVar12 - 4;
      uVar17 = uVar2 >> 8;
      uVar20 = uVar2 >> 0x10;
      uVar13 = 0xf;
      puVar10 = (uint *)(ulong)uVar2;
      goto LAB_10604ef88;
    case 0x1d:
      goto code_r0x00010604e1c0;
    case 0x1e:
      if (uVar12 < 0x10) goto code_r0x00010604e9a0;
      uVar18 = (ulong)puVar10 & 0xffffffff00000000;
      *param_2 = (ulong)(puVar10 + 4);
      param_2[1] = uVar12 - 0x10;
      uVar13 = 1;
      uVar21 = 0x10;
      goto LAB_10604ef88;
    case 0x1f:
      if ((uVar7 >> 8 & 0xff) == 8) {
        if (uVar12 < 8) goto LAB_10604ed18;
        *param_2 = (ulong)(puVar10 + 2);
        param_2[1] = uVar12 - 8;
        puVar16 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                          (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
      }
      else {
        if (uVar12 < 4) goto LAB_10604ed18;
        puVar16 = (uint *)(ulong)*puVar10;
        *param_2 = (ulong)(puVar10 + 1);
        param_2[1] = uVar12 - 4;
      }
      uVar17 = (uint)((ulong)puVar16 >> 8);
      uVar20 = (uint)((ulong)puVar16 >> 0x10);
      uVar18 = (ulong)puVar16 & 0xffffffff00000000;
      uVar13 = 0x1e;
      puVar10 = puVar16;
      goto LAB_10604ef88;
    case 0x20:
      if (uVar12 < 8) goto LAB_10604ed18;
      *param_2 = (ulong)(puVar10 + 2);
      param_2[1] = uVar12 - 8;
      uVar2 = *puVar10;
      uVar17 = uVar2 >> 8;
      uVar20 = uVar2 >> 0x10;
      uVar18 = (ulong)(uint3)puVar10[1] << 0x20 | (ulong)*(byte *)((long)puVar10 + 7) << 0x38;
      uVar13 = 0x19;
      puVar10 = (uint *)(ulong)uVar2;
      goto LAB_10604ef88;
    case 0x21:
      if (uVar4 != 0x21) {
        *(undefined1 *)(param_1 + 1) = 0x49;
        goto LAB_10604ef4c;
      }
      puVar10 = (uint *)*param_4;
      uVar17 = (uint)((ulong)puVar10 >> 8);
      uVar20 = (uint)((ulong)puVar10 >> 0x10);
      uVar18 = (ulong)puVar10 & 0xffffffff00000000;
      uVar13 = 6;
      goto LAB_10604ef88;
    case 0x22:
      if (uVar12 == 0) goto LAB_10604ea64;
      puVar15 = (uint *)0x0;
      uVar18 = 0;
      lVar11 = 1 - uVar12;
      goto code_r0x00010604ea20;
    case 0x23:
      if (uVar12 == 0) goto LAB_10604ea64;
      puVar15 = (uint *)0x0;
      uVar18 = 0;
      lVar11 = 1 - uVar12;
      goto code_r0x00010604e4e8;
    case 0x24:
      goto code_r0x00010604eafc;
    case 0x25:
      if (uVar12 != 0) {
        uVar17 = 0;
        uVar20 = 0;
        uVar18 = 0;
        uVar2 = *puVar10;
        *param_2 = (long)puVar10 + 1;
        param_2[1] = uVar12 - 1;
        uVar13 = 0x1d;
        puVar10 = (uint *)(ulong)(byte)uVar2;
        goto LAB_10604ef88;
      }
      break;
    case 0x26:
      if (uVar12 < 2) goto code_r0x00010604e878;
      uVar20 = 0;
      uVar18 = 0;
      uVar2 = *puVar10;
      *param_2 = (long)puVar10 + 2;
      param_2[1] = uVar12 - 2;
      uVar17 = (uint)(ushort)((ushort)uVar2 >> 8);
      uVar13 = 0x1d;
      puVar10 = (uint *)(ulong)(ushort)uVar2;
      goto LAB_10604ef88;
    case 0x27:
      if (uVar12 < 3) goto LAB_10604ed18;
      uVar18 = 0;
      *param_2 = (long)puVar10 + 3;
      param_2[1] = uVar12 - 3;
      uVar20 = (uint)*(byte *)((long)puVar10 + 2);
      uVar17 = (uint)(uint3)((uint3)*puVar10 >> 8);
      uVar13 = 0x1d;
      puVar10 = (uint *)(ulong)(uint3)*puVar10;
      goto LAB_10604ef88;
    case 0x28:
      if (uVar12 < 4) goto code_r0x00010604e924;
      uVar18 = 0;
      uVar2 = *puVar10;
      *param_2 = (ulong)(puVar10 + 1);
      param_2[1] = uVar12 - 4;
      uVar17 = uVar2 >> 8;
      uVar20 = uVar2 >> 0x10;
      uVar13 = 0x1d;
      puVar10 = (uint *)(ulong)uVar2;
      goto LAB_10604ef88;
    case 0x29:
      if (uVar12 != 0) {
        uVar17 = 0;
        uVar20 = 0;
        uVar18 = 0;
        uVar2 = *puVar10;
        *param_2 = (long)puVar10 + 1;
        param_2[1] = uVar12 - 1;
        uVar13 = 0xc;
        puVar10 = (uint *)(ulong)(byte)uVar2;
        goto LAB_10604ef88;
      }
      break;
    case 0x2a:
      if (uVar12 < 2) {
code_r0x00010604e878:
        *(undefined2 *)((long)param_1 + 9) = 0;
        *(undefined1 *)((long)param_1 + 0xf) = 0;
        *(undefined4 *)((long)param_1 + 0xb) = 0;
        goto code_r0x00010604e930;
      }
      uVar20 = 0;
      uVar18 = 0;
      uVar2 = *puVar10;
      *param_2 = (long)puVar10 + 2;
      param_2[1] = uVar12 - 2;
      uVar17 = (uint)(ushort)((ushort)uVar2 >> 8);
      uVar13 = 0xc;
      puVar10 = (uint *)(ulong)(ushort)uVar2;
      goto LAB_10604ef88;
    case 0x2b:
      if (uVar12 < 3) goto LAB_10604ed18;
      uVar18 = 0;
      *param_2 = (long)puVar10 + 3;
      param_2[1] = uVar12 - 3;
      uVar20 = (uint)*(byte *)((long)puVar10 + 2);
      uVar17 = (uint)(uint3)((uint3)*puVar10 >> 8);
      uVar13 = 0xc;
      puVar10 = (uint *)(ulong)(uint3)*puVar10;
      goto LAB_10604ef88;
    case 0x2c:
      if (3 < uVar12) {
        uVar18 = 0;
        uVar2 = *puVar10;
        *param_2 = (ulong)(puVar10 + 1);
        param_2[1] = uVar12 - 4;
        uVar17 = uVar2 >> 8;
        uVar20 = uVar2 >> 0x10;
        uVar13 = 0xc;
        puVar10 = (uint *)(ulong)uVar2;
        goto LAB_10604ef88;
      }
code_r0x00010604e924:
      *(undefined4 *)((long)param_1 + 9) = 0;
      *(undefined1 *)((long)param_1 + 0xf) = 0;
      *(undefined2 *)((long)param_1 + 0xd) = 0;
code_r0x00010604e930:
      *(undefined1 *)(param_1 + 1) = 0x13;
      goto LAB_10604ef48;
    }
    *(undefined2 *)(param_1 + 1) = 0x13;
    *(undefined2 *)((long)param_1 + 0xe) = 0;
    *(undefined4 *)((long)param_1 + 10) = 0;
    goto LAB_10604ef48;
  }
  if (0x1f1f < uVar14) {
    if (uVar14 == 0x1f20) {
      if ((uVar7 >> 8 & 0xff) == 8) {
code_r0x00010604eafc:
        if (7 < uVar12) {
          *param_2 = (ulong)(puVar10 + 2);
          param_2[1] = uVar12 - 8;
          puVar16 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                            (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
LAB_10604ed04:
          uVar17 = (uint)((ulong)puVar16 >> 8);
          uVar20 = (uint)((ulong)puVar16 >> 0x10);
          uVar18 = (ulong)puVar16 & 0xffffffff00000000;
          uVar13 = 0xf;
          puVar10 = puVar16;
LAB_10604ef88:
          uVar5 = *(undefined2 *)(param_4 + 1);
          *param_1 = uVar13;
          param_1[1] = uVar18 | ((uint)puVar10 & 0xff | (uVar17 & 0xff) << 8 | uVar20 << 0x10);
          param_1[2] = uVar21;
          *(undefined2 *)(param_1 + 3) = uVar5;
          return;
        }
      }
      else if (3 < uVar12) {
        puVar16 = (uint *)(ulong)*puVar10;
        *param_2 = (ulong)(puVar10 + 1);
        param_2[1] = uVar12 - 4;
        goto LAB_10604ed04;
      }
    }
    else {
      if (uVar14 != 0x1f21) {
LAB_10604eb34:
        *(undefined1 *)(param_1 + 1) = 0xc;
        *(ushort *)((long)param_1 + 10) = uVar14;
        goto LAB_10604ef4c;
      }
code_r0x00010604e1c0:
      if ((uVar7 >> 8 & 0xff) == 8) {
        if (7 < uVar12) {
          *param_2 = (ulong)(puVar10 + 2);
          param_2[1] = uVar12 - 8;
          puVar16 = (uint *)(((ulong)*puVar10 << 8 | (ulong)(uint3)puVar10[1] << 0x28) >> 8 |
                            (ulong)*(byte *)((long)puVar10 + 7) << 0x38);
LAB_10604eadc:
          uVar17 = (uint)((ulong)puVar16 >> 8);
          uVar20 = (uint)((ulong)puVar16 >> 0x10);
          uVar18 = (ulong)puVar16 & 0xffffffff00000000;
          uVar13 = 0x1b;
          puVar10 = puVar16;
          goto LAB_10604ef88;
        }
      }
      else if (3 < uVar12) {
        puVar16 = (uint *)(ulong)*puVar10;
        *param_2 = (ulong)(puVar10 + 1);
        param_2[1] = uVar12 - 4;
        goto LAB_10604eadc;
      }
    }
LAB_10604ed18:
    *(undefined1 *)(param_1 + 1) = 0x13;
    *(undefined1 *)((long)param_1 + 0xf) = 0;
    *(undefined2 *)((long)param_1 + 0xd) = 0;
    *(undefined4 *)((long)param_1 + 9) = 0;
LAB_10604ef48:
    param_1[2] = puVar10;
    goto LAB_10604ef4c;
  }
  if (uVar14 == 0x1f01) {
LAB_10604e204:
    if (uVar12 != 0) {
      puVar15 = (uint *)0x0;
      uVar18 = 0;
      lVar11 = 1 - uVar12;
      puVar16 = puVar10;
      do {
        puVar9 = (uint *)((long)puVar16 + 1);
        bVar3 = (byte)*puVar16;
        if (((int)uVar18 == 0x3f) && (1 < bVar3)) goto LAB_10604ea6c;
        uVar21 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f);
        puVar15 = (uint *)(uVar21 | (ulong)puVar15);
        if (-1 < (char)bVar3) {
          uVar17 = (uint)((ulong)puVar15 >> 8);
          uVar20 = (uint)((ulong)puVar15 >> 0x10);
          uVar18 = (ulong)puVar15 & 0xffffffff00000000;
          *param_2 = (ulong)puVar9;
          param_2[1] = -lVar11;
          uVar13 = 0xc;
          puVar10 = puVar15;
          goto LAB_10604ef88;
        }
        uVar18 = (ulong)((int)uVar18 + 7);
        lVar11 = lVar11 + 1;
        puVar16 = puVar9;
      } while (lVar11 != 1);
      goto LAB_10604ea58;
    }
  }
  else {
    if (uVar14 != 0x1f02) goto LAB_10604eb34;
code_r0x00010604e150:
    if (uVar12 != 0) {
      puVar15 = (uint *)0x0;
      uVar18 = 0;
      lVar11 = 1 - uVar12;
      puVar16 = puVar10;
      do {
        puVar9 = (uint *)((long)puVar16 + 1);
        bVar3 = (byte)*puVar16;
        if (((int)uVar18 == 0x3f) && (1 < bVar3)) goto LAB_10604ea6c;
        uVar21 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f);
        puVar15 = (uint *)(uVar21 | (ulong)puVar15);
        if (-1 < (char)bVar3) {
          uVar17 = (uint)((ulong)puVar15 >> 8);
          uVar20 = (uint)((ulong)puVar15 >> 0x10);
          uVar18 = (ulong)puVar15 & 0xffffffff00000000;
          *param_2 = (ulong)puVar9;
          param_2[1] = -lVar11;
          uVar13 = 0x1d;
          puVar10 = puVar15;
          goto LAB_10604ef88;
        }
        uVar18 = (ulong)((int)uVar18 + 7);
        lVar11 = lVar11 + 1;
        puVar16 = puVar9;
      } while (lVar11 != 1);
      goto LAB_10604ea58;
    }
  }
  goto LAB_10604ea64;
  while( true ) {
    uVar18 = (ulong)((int)uVar18 + 7);
    lVar11 = lVar11 + 1;
    puVar16 = puVar9;
    if (lVar11 == 1) break;
code_r0x00010604e4e8:
    puVar9 = (uint *)((long)puVar16 + 1);
    bVar3 = (byte)*puVar16;
    if (((int)uVar18 == 0x3f) && (1 < bVar3)) goto LAB_10604ea6c;
    uVar21 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f);
    puVar15 = (uint *)(uVar21 | (ulong)puVar15);
    if (-1 < (char)bVar3) {
      uVar17 = (uint)((ulong)puVar15 >> 8);
      uVar20 = (uint)((ulong)puVar15 >> 0x10);
      uVar18 = (ulong)puVar15 & 0xffffffff00000000;
      *param_2 = (ulong)puVar9;
      param_2[1] = -lVar11;
      uVar13 = 0x18;
      puVar10 = puVar15;
      goto LAB_10604ef88;
    }
  }
  goto LAB_10604ea58;
  while( true ) {
    uVar18 = (ulong)((int)uVar18 + 7);
    lVar11 = lVar11 + 1;
    puVar16 = puVar9;
    if (lVar11 == 1) break;
code_r0x00010604ea20:
    puVar9 = (uint *)((long)puVar16 + 1);
    bVar3 = (byte)*puVar16;
    if (((int)uVar18 == 0x3f) && (1 < bVar3)) goto LAB_10604ea6c;
    uVar21 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f);
    puVar15 = (uint *)(uVar21 | (ulong)puVar15);
    if (-1 < (char)bVar3) {
      uVar17 = (uint)((ulong)puVar15 >> 8);
      uVar20 = (uint)((ulong)puVar15 >> 0x10);
      uVar18 = (ulong)puVar15 & 0xffffffff00000000;
      *param_2 = (ulong)puVar9;
      param_2[1] = -lVar11;
      uVar13 = 0x13;
      puVar10 = puVar15;
      goto LAB_10604ef88;
    }
  }
  goto LAB_10604ea58;
  while( true ) {
    uVar19 = (ulong)((int)uVar19 + 7);
    uVar18 = uVar18 + 1;
    if (uVar12 == uVar18) break;
code_r0x00010604e8c0:
    bVar3 = *(byte *)((long)puVar10 + uVar18);
    if (((int)uVar19 == 0x3f) && (1 < bVar3)) goto code_r0x00010604ed40;
    uVar21 = ((ulong)bVar3 & 0x7f) << (uVar19 & 0x3f) | uVar21;
    if (-1 < (char)bVar3) {
      puVar16 = (uint *)((long)puVar10 + uVar18 + 1);
      uVar19 = ~uVar18 + uVar12;
      *param_2 = (ulong)puVar16;
      param_2[1] = uVar19;
      if (uVar19 < uVar21) goto code_r0x00010604eb54;
      *param_2 = (long)puVar10 + uVar18 + uVar21 + 1;
      param_2[1] = ~uVar18 + (uVar12 - uVar21);
      uVar17 = (uint)((ulong)puVar16 >> 8);
      uVar20 = (uint)((ulong)puVar16 >> 0x10);
      uVar18 = (ulong)puVar16 & 0xffffffff00000000;
      uVar13 = 8;
      puVar10 = puVar16;
      goto LAB_10604ef88;
    }
  }
  goto code_r0x00010604e8f4;
code_r0x00010604e0d0:
  puVar16 = (uint *)((long)puVar10 + 1);
  uVar7 = *puVar10;
  uVar18 = uVar12 - 1;
  *param_2 = (ulong)puVar16;
  param_2[1] = uVar18;
  uVar6 = (byte)uVar7 & 0x7f;
  if (-1 < (char)(byte)uVar7) goto code_r0x00010604e09c;
  if (uVar18 != 0) {
    uVar18 = uVar12 - 2;
    puVar16 = (uint *)((long)puVar10 + 2);
    *param_2 = (ulong)puVar16;
    param_2[1] = uVar18;
    uVar6 = uVar6 | (*(byte *)((long)puVar10 + 1) & 0x7f) << 7;
    if (-1 < (char)*(byte *)((long)puVar10 + 1)) goto code_r0x00010604e09c;
    if (uVar18 != 0) {
      puVar16 = (uint *)((long)puVar10 + 3);
      *param_2 = (ulong)puVar16;
      param_2[1] = uVar12 - 3;
      bVar3 = *(byte *)((long)puVar10 + 2);
      puVar10 = (uint *)(ulong)bVar3;
      if (bVar3 < 4) {
        uVar18 = uVar12 - 3;
        uVar6 = uVar6 | (ushort)bVar3 << 0xe;
        goto code_r0x00010604e09c;
      }
      uVar8 = 6;
      goto code_r0x00010604ef38;
    }
  }
  puVar10 = puVar16;
  uVar14 = 0;
  uVar8 = 0x13;
code_r0x00010604ef38:
  *(undefined1 *)(param_1 + 1) = uVar8;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(ushort *)((long)param_1 + 10) = uVar14;
code_r0x00010604ef44:
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  goto LAB_10604ef48;
  while( true ) {
    uVar18 = (ulong)((int)uVar18 + 7);
    lVar11 = lVar11 + 1;
    puVar16 = puVar9;
    if (lVar11 == 1) break;
code_r0x00010604e364:
    puVar9 = (uint *)((long)puVar16 + 1);
    bVar3 = (byte)*puVar16;
    if (((int)uVar18 == 0x3f) && (1 < bVar3)) goto LAB_10604ea6c;
    uVar21 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f);
    puVar15 = (uint *)(uVar21 | (ulong)puVar15);
    if (-1 < (char)bVar3) {
      uVar17 = (uint)((ulong)puVar15 >> 8);
      uVar20 = (uint)((ulong)puVar15 >> 0x10);
      uVar18 = (ulong)puVar15 & 0xffffffff00000000;
      *param_2 = (ulong)puVar9;
      param_2[1] = -lVar11;
      uVar13 = 0xd;
      puVar10 = puVar15;
      goto LAB_10604ef88;
    }
  }
  goto LAB_10604ea58;
code_r0x00010604ed40:
  puVar16 = (uint *)((long)puVar10 + uVar12);
  *param_2 = (long)puVar10 + uVar18 + 1;
  param_2[1] = ~uVar18 + uVar12;
  uVar13 = 6;
  goto code_r0x00010604ed58;
code_r0x00010604e3d8:
  if ((char)*puVar16 == '\0') {
    uVar18 = (ulong)puVar10 & 0xffffffff00000000;
    *param_2 = (long)puVar16 + 1U;
    param_2[1] = uVar12;
    uVar13 = 0x1f;
    goto LAB_10604ef88;
  }
  uVar21 = uVar21 + 1;
  uVar12 = uVar12 - 1;
  puVar16 = (uint *)((long)puVar16 + 1U);
  if (uVar12 == 0xffffffffffffffff) {
code_r0x00010604e9a0:
    param_1[1] = 0x13;
    param_1[2] = puVar10;
    *param_1 = 0x2e;
    return;
  }
  goto code_r0x00010604e3d8;
LAB_10604ea6c:
  puVar10 = (uint *)-lVar11;
  *param_2 = (ulong)puVar9;
  param_2[1] = (ulong)puVar10;
  uVar8 = 6;
  goto LAB_10604ea78;
  while( true ) {
    uVar19 = (ulong)((int)uVar19 + 7);
    uVar18 = uVar18 + 1;
    if (uVar12 == uVar18) break;
code_r0x00010604e650:
    bVar3 = *(byte *)((long)puVar10 + uVar18);
    if (((int)uVar19 == 0x3f) && (1 < bVar3)) goto code_r0x00010604ed40;
    uVar21 = ((ulong)bVar3 & 0x7f) << (uVar19 & 0x3f) | uVar21;
    if (-1 < (char)bVar3) {
      puVar16 = (uint *)((long)puVar10 + uVar18 + 1);
      uVar19 = ~uVar18 + uVar12;
      *param_2 = (ulong)puVar16;
      param_2[1] = uVar19;
      if (uVar19 < uVar21) goto code_r0x00010604eb54;
      *param_2 = (long)puVar10 + uVar18 + uVar21 + 1;
      param_2[1] = ~uVar18 + (uVar12 - uVar21);
      uVar17 = (uint)((ulong)puVar16 >> 8);
      uVar20 = (uint)((ulong)puVar16 >> 0x10);
      uVar18 = (ulong)puVar16 & 0xffffffff00000000;
      uVar13 = 1;
      puVar10 = puVar16;
      goto LAB_10604ef88;
    }
  }
code_r0x00010604e8f4:
  *param_2 = (long)puVar10 + uVar12;
  param_2[1] = 0;
  puVar16 = (uint *)((long)puVar10 + uVar12);
code_r0x00010604eb54:
  uVar13 = 0x13;
code_r0x00010604ed58:
  param_1[1] = uVar13;
  param_1[2] = puVar16;
  *param_1 = 0x2e;
  return;
  while( true ) {
    uVar18 = (ulong)((int)uVar18 + 7);
    lVar11 = lVar11 + 1;
    puVar16 = puVar9;
    if (lVar11 == 1) break;
code_r0x00010604e6a4:
    puVar9 = (uint *)((long)puVar16 + 1);
    bVar3 = (byte)*puVar16;
    if (((int)uVar18 == 0x3f) && (1 < bVar3)) goto LAB_10604ea6c;
    uVar21 = ((ulong)bVar3 & 0x7f) << (uVar18 & 0x3f);
    puVar15 = (uint *)(uVar21 | (ulong)puVar15);
    if (-1 < (char)bVar3) {
      uVar17 = (uint)((ulong)puVar15 >> 8);
      uVar20 = (uint)((ulong)puVar15 >> 0x10);
      uVar18 = (ulong)puVar15 & 0xffffffff00000000;
      *param_2 = (ulong)puVar9;
      param_2[1] = -lVar11;
      uVar13 = 7;
      puVar10 = puVar15;
      goto LAB_10604ef88;
    }
  }
LAB_10604ea58:
  puVar10 = (uint *)((long)puVar10 + uVar12);
  *param_2 = (ulong)puVar10;
  param_2[1] = 0;
LAB_10604ea64:
  uVar8 = 0x13;
LAB_10604ea78:
  *(undefined1 *)(param_1 + 1) = uVar8;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined2 *)((long)param_1 + 0xe) = 0;
  *(undefined4 *)((long)param_1 + 10) = 0;
  param_1[2] = puVar10;
LAB_10604ef4c:
  *param_1 = 0x2e;
  return;
}

