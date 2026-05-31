
/* WARNING: Type propagation algorithm not settling */

void FUN_10258c3bc(long *param_1,ulong param_2,undefined *param_3,int param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  byte bVar5;
  char cVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 auVar9 [16];
  int iVar10;
  long lVar11;
  long lVar13;
  undefined *unaff_x19;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  long lStack_48;
  long *plVar12;
  
  if (param_3 == (undefined *)0x0) {
    param_1[1] = 0;
    *param_1 = (long)&UNK_108c56c70;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  if (param_3 < (undefined *)0xf) {
    uVar14 = 4;
    if ((undefined *)0x3 < param_3) {
      uVar14 = ((ulong)param_3 & 8) + 8;
    }
LAB_10258c44c:
    auVar19._8_8_ = 0;
    auVar19._0_8_ = param_2;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar14;
    if ((SUB168(auVar19 * auVar9,8) == 0) && (param_2 * uVar14 < 0xfffffffffffffff9)) {
      uVar16 = param_2 * uVar14 + 7 & 0xfffffffffffffff8;
      uVar1 = uVar14 + 8;
      unaff_x19 = (undefined *)(uVar16 + uVar1);
      if ((!CARRY8(uVar16,uVar1)) && (unaff_x19 < (undefined *)0x7ffffffffffffff9)) {
        if (unaff_x19 == (undefined *)0x0) {
          lVar11 = 8;
          goto LAB_10258c4bc;
        }
        if (unaff_x19 < (undefined *)0x8) {
          lStack_48 = 0;
          param_3 = unaff_x19;
          iVar10 = _posix_memalign(&lStack_48,8);
          lVar11 = lStack_48;
          if (iVar10 == 0) goto joined_r0x00010258c53c;
        }
        else {
          lVar11 = _malloc(unaff_x19);
joined_r0x00010258c53c:
          if (lVar11 != 0) {
LAB_10258c4bc:
            uVar17 = uVar14 - 1;
            uVar4 = uVar17;
            if (7 < uVar17) {
              uVar4 = (uVar14 >> 3) * 7;
            }
            _memset(lVar11 + uVar16,0xff,uVar1);
            *param_1 = lVar11 + uVar16;
            param_1[1] = uVar17;
            param_1[2] = uVar4;
            param_1[3] = 0;
            return;
          }
        }
        if (param_4 != 0) goto LAB_10258c568;
        lVar11 = 8;
        goto LAB_10258c518;
      }
    }
    if (param_4 == 0) {
      lVar11 = 0;
LAB_10258c518:
      param_1[1] = lVar11;
      param_1[2] = (long)unaff_x19;
      *param_1 = 0;
      return;
    }
  }
  else {
    if ((ulong)param_3 >> 0x3d == 0) {
      uVar14 = (0xffffffffffffffffU >> (LZCOUNT((ulong)((long)param_3 * 8) / 7 - 1) & 0x3fU)) + 1;
      goto LAB_10258c44c;
    }
    if (param_4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
  param_3 = &UNK_10b3ad9c8;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
LAB_10258c568:
  auVar19 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x19);
  lVar11 = auVar19._8_8_;
  plVar12 = auVar19._0_8_;
  lVar13 = plVar12[2];
  if (*plVar12 == lVar13) {
    FUN_1088e6a54(plVar12,lVar13,1,1,1);
    lVar13 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar13) = 0x22;
  puVar15 = (undefined *)(lVar13 + 1);
  plVar12[2] = (long)puVar15;
  do {
    puVar2 = (undefined *)0x0;
    do {
      puVar18 = puVar2;
      if (param_3 == puVar18) {
        if (param_3 != (undefined *)0x0) {
          if ((undefined *)(*plVar12 - (long)puVar15) < param_3) {
            FUN_1088e6a54(plVar12,puVar15,param_3,1,1);
            puVar15 = (undefined *)plVar12[2];
          }
          _memcpy(puVar15 + plVar12[1],lVar11,param_3);
          puVar15 = puVar15 + (long)param_3;
          plVar12[2] = (long)puVar15;
        }
        if ((undefined *)*plVar12 == puVar15) {
          FUN_1088e6a54(plVar12,puVar15,1,1,1);
          puVar15 = (undefined *)plVar12[2];
        }
        puVar15[plVar12[1]] = 0x22;
        plVar12[2] = (long)(puVar15 + 1);
        return;
      }
      bVar5 = puVar18[lVar11];
      cVar6 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar5];
      puVar2 = puVar18 + 1;
    } while (cVar6 == '\0');
    if (puVar18 != (undefined *)0x0) {
      if ((undefined *)(*plVar12 - (long)puVar15) < puVar18) {
        FUN_1088e6a54(plVar12,puVar15,puVar18,1,1);
        puVar15 = (undefined *)plVar12[2];
      }
      _memcpy(puVar15 + plVar12[1],lVar11,puVar18);
      puVar15 = puVar2 + (long)(puVar15 + -1);
      plVar12[2] = (long)puVar15;
    }
    lVar11 = lVar11 + (long)puVar2;
    param_3 = param_3 + -(long)puVar2;
    if (cVar6 == 'u') {
      uVar7 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [bVar5 >> 4];
      uVar8 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [(ulong)bVar5 & 0xf];
      if ((ulong)(*plVar12 - (long)puVar15) < 6) {
        FUN_1088e6a54(plVar12,puVar15,6,1,1);
        puVar15 = (undefined *)plVar12[2];
      }
      puVar3 = (undefined4 *)(puVar15 + plVar12[1]);
      *puVar3 = 0x3030755c;
      *(undefined1 *)(puVar3 + 1) = uVar7;
      *(undefined1 *)((long)puVar3 + 5) = uVar8;
      puVar15 = puVar15 + 6;
      plVar12[2] = (long)puVar15;
    }
    else {
      if ((ulong)(*plVar12 - (long)puVar15) < 2) {
        FUN_1088e6a54(plVar12,puVar15,2,1,1);
        puVar15 = (undefined *)plVar12[2];
      }
      lVar13 = plVar12[1];
      puVar15[lVar13] = 0x5c;
      (puVar15 + lVar13)[1] = cVar6;
      puVar15 = puVar15 + 2;
      plVar12[2] = (long)puVar15;
    }
  } while( true );
}

