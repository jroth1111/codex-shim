
/* WARNING: Type propagation algorithm not settling */

long * FUN_102c58734(long *param_1,ulong param_2,undefined *param_3,int param_4)

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
  code *pcVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined *unaff_x20;
  ulong uVar15;
  ulong unaff_x23;
  ulong uVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  long lStack_48;
  
  if (param_3 < (undefined *)0xf) {
    uVar15 = 4;
    if ((undefined *)0x3 < param_3) {
      uVar15 = ((ulong)param_3 & 8) + 8;
    }
LAB_102c587b0:
    auVar18._8_8_ = 0;
    auVar18._0_8_ = param_2;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar15;
    if ((SUB168(auVar18 * auVar9,8) == 0) && (param_2 * uVar15 < 0xfffffffffffffff9)) {
      unaff_x23 = param_2 * uVar15 + 7 & 0xfffffffffffffff8;
      uVar1 = uVar15 + 8;
      unaff_x20 = (undefined *)(unaff_x23 + uVar1);
      if ((!CARRY8(unaff_x23,uVar1)) && (unaff_x20 < (undefined *)0x7ffffffffffffff9)) {
        if (unaff_x20 == (undefined *)0x0) {
          lVar11 = 8;
LAB_102c58818:
          uVar16 = uVar15 - 1;
          uVar4 = uVar16;
          if (7 < uVar16) {
            uVar4 = (uVar15 >> 3) * 7;
          }
          plVar12 = (long *)_memset(lVar11 + unaff_x23,0xff,uVar1);
          *param_1 = lVar11 + unaff_x23;
          param_1[1] = uVar16;
          param_1[2] = uVar4;
          param_1[3] = 0;
          return plVar12;
        }
        if (unaff_x20 < (undefined *)0x8) {
          lStack_48 = 0;
          param_3 = unaff_x20;
          plVar12 = (long *)_posix_memalign(&lStack_48,8);
          if ((int)plVar12 == 0) {
            lVar11 = lStack_48;
            if (lStack_48 != 0) goto LAB_102c58818;
            plVar12 = (long *)0x0;
          }
        }
        else {
          lVar11 = _malloc(unaff_x20);
          if (lVar11 != 0) goto LAB_102c58818;
          plVar12 = (long *)0x0;
        }
        if (param_4 != 0) goto LAB_102c588c0;
        lVar11 = 8;
        goto LAB_102c58870;
      }
    }
    if (param_4 == 0) {
      lVar11 = 0;
      plVar12 = param_1;
LAB_102c58870:
      param_1[1] = lVar11;
      param_1[2] = (long)unaff_x20;
      *param_1 = 0;
      return plVar12;
    }
  }
  else {
    if ((ulong)param_3 >> 0x3d == 0) {
      uVar15 = (0xffffffffffffffffU >> (LZCOUNT((ulong)((long)param_3 * 8) / 7 - 1) & 0x3fU)) + 1;
      goto LAB_102c587b0;
    }
    if (param_4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
  }
  param_3 = &UNK_10b3ad9c8;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109a75098,0x39);
LAB_102c588c0:
  auVar18 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x20);
  lVar13 = auVar18._8_8_;
  plVar12 = auVar18._0_8_;
  lVar11 = plVar12[2];
  if (*plVar12 == lVar11) {
    FUN_10893e30c(plVar12,lVar11,1,1,1);
    lVar11 = plVar12[2];
  }
  *(undefined1 *)(plVar12[1] + lVar11) = 0x22;
  lVar11 = lVar11 + 1;
  plVar12[2] = lVar11;
  while( true ) {
    puVar2 = (undefined *)0x0;
    do {
      puVar17 = puVar2;
      if (param_3 == puVar17) {
        if (param_3 != (undefined *)0x0) {
          lVar11 = func_0x0001037e1928(plVar12);
          if (lVar11 != 0) goto LAB_102c58ac8;
          lVar11 = plVar12[2];
        }
        if (*plVar12 == lVar11) {
          FUN_10893e30c(plVar12,lVar11,1,1,1);
          lVar11 = plVar12[2];
        }
        *(undefined1 *)(plVar12[1] + lVar11) = 0x22;
        plVar12[2] = lVar11 + 1;
        return (long *)0x0;
      }
      bVar5 = puVar17[lVar13];
      cVar6 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar5];
      puVar2 = puVar17 + 1;
    } while (cVar6 == '\0');
    if ((puVar17 != (undefined *)0x0) &&
       (lVar11 = func_0x0001037e1928(plVar12,lVar13,puVar17), lVar11 != 0)) break;
    lVar13 = lVar13 + (long)puVar2;
    param_3 = param_3 + -(long)puVar2;
    if (cVar6 == 'u') {
      uVar7 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [bVar5 >> 4];
      uVar8 = (&__ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
              [(ulong)bVar5 & 0xf];
      lVar11 = plVar12[2];
      if ((ulong)(*plVar12 - lVar11) < 6) {
        FUN_10893e30c(plVar12,lVar11,6,1,1);
        lVar11 = plVar12[2];
      }
      puVar3 = (undefined4 *)(plVar12[1] + lVar11);
      *puVar3 = 0x3030755c;
      *(undefined1 *)(puVar3 + 1) = uVar7;
      *(undefined1 *)((long)puVar3 + 5) = uVar8;
      lVar11 = lVar11 + 6;
      plVar12[2] = lVar11;
    }
    else {
      lVar11 = plVar12[2];
      if ((ulong)(*plVar12 - lVar11) < 2) {
        FUN_10893e30c(plVar12,lVar11,2,1,1);
        lVar11 = plVar12[2];
      }
      lVar14 = plVar12[1];
      *(undefined1 *)(lVar14 + lVar11) = 0x5c;
      ((undefined1 *)(lVar14 + lVar11))[1] = cVar6;
      lVar11 = lVar11 + 2;
      plVar12[2] = lVar11;
    }
  }
LAB_102c58ac8:
  plVar12 = (long *)_malloc(0x28);
  if (plVar12 != (long *)0x0) {
    plVar12[1] = lVar11;
    *plVar12 = 1;
    plVar12[3] = 0;
    plVar12[2] = unaff_x23;
    plVar12[4] = 0;
    return plVar12;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
  (*pcVar10)();
}

