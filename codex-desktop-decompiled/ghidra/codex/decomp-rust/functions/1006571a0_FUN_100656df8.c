
/* WARNING: Removing unreachable block (ram,0x000100657010) */
/* WARNING: Removing unreachable block (ram,0x000100656f50) */
/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_100656df8(undefined8 param_1,undefined *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  undefined4 *unaff_x28;
  undefined1 auVar17 [16];
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  char cStack_e1;
  undefined4 *puStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined4 *puStack_b0;
  undefined *puStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  byte bStack_61;
  
  puVar16 = (undefined *)0x7fffffff;
  puVar15 = &UNK_108ca7632;
  puVar11 = (undefined4 *)0x1;
  do {
    while( true ) {
      puVar6 = puVar11;
      if ((undefined4 *)0x7ffffffe < puVar11) {
        puVar6 = (undefined4 *)0x7fffffff;
      }
      puVar6 = (undefined4 *)_write(param_1,puVar15,puVar6);
      if (puVar6 == (undefined4 *)0xffffffffffffffff) break;
      if (puVar6 == (undefined4 *)0x0) goto LAB_100657120;
      puVar9 = (undefined4 *)((long)puVar11 - (long)puVar6);
      if (puVar11 < puVar6) goto LAB_100657150;
      puVar15 = puVar15 + (long)puVar6;
      puVar11 = puVar9;
      if (puVar9 == (undefined4 *)0x0) goto LAB_100656e80;
    }
    piVar7 = (int *)___error();
    lVar14 = (long)*piVar7;
    if (*piVar7 != 4) goto LAB_100657114;
  } while (puVar11 != (undefined4 *)0x0);
LAB_100656e80:
  puVar16 = &__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E;
  unaff_x26 = 0x7fffffff;
  uStack_78 = 0;
  uStack_80 = 0x3030755c;
LAB_100656e98:
  do {
    unaff_x28 = (undefined4 *)0x0;
    do {
      puVar6 = unaff_x28;
      if (param_3 == puVar6) {
        if (param_3 == (undefined4 *)0x0) goto LAB_1006570a8;
        puVar11 = (undefined4 *)0x7fffffff;
        goto LAB_100657074;
      }
      bVar1 = param_2[(long)puVar6];
      unaff_x27 = (ulong)bVar1;
      bVar2 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[unaff_x27];
      unaff_x25 = (ulong)bVar2;
      unaff_x28 = (undefined4 *)((long)puVar6 + 1);
      puVar8 = param_2;
      puVar11 = puVar6;
    } while (bVar2 == 0);
    while (puVar15 = puVar8, puVar11 != (undefined4 *)0x0) {
      while( true ) {
        puVar6 = puVar11;
        if ((undefined4 *)0x7ffffffe < puVar11) {
          puVar6 = (undefined4 *)0x7fffffff;
        }
        puVar6 = (undefined4 *)_write(param_1,puVar15,puVar6);
        if (puVar6 == (undefined4 *)0xffffffffffffffff) break;
        if (puVar6 == (undefined4 *)0x0) goto LAB_100657120;
        puVar9 = (undefined4 *)((long)puVar11 - (long)puVar6);
        if (puVar11 < puVar6) goto LAB_100657150;
        puVar15 = puVar15 + (long)puVar6;
        puVar11 = puVar9;
        if (puVar9 == (undefined4 *)0x0) goto LAB_100656ebc;
      }
      piVar7 = (int *)___error();
      lVar14 = (long)*piVar7;
      puVar8 = puVar15;
      if (*piVar7 != 4) goto LAB_100657114;
    }
LAB_100656ebc:
    param_2 = param_2 + (long)unaff_x28;
    param_3 = (undefined4 *)((long)param_3 - (long)unaff_x28);
    if (bVar2 == 0x75) {
      uStack_64 = (&
                  __ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
                  [bVar1 >> 4];
      uStack_63 = (&
                  __ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
                  [unaff_x27 & 0xf];
      uStack_68 = (undefined4)uStack_80;
      puVar11 = &uStack_68;
      puVar15 = (undefined *)0x6;
      do {
        puVar8 = puVar15;
        if ((undefined *)0x7ffffffe < puVar15) {
          puVar8 = (undefined *)0x7fffffff;
        }
        puVar8 = (undefined *)_write(param_1,puVar11,puVar8);
        if (puVar8 == (undefined *)0xffffffffffffffff) {
          piVar7 = (int *)___error();
          iVar4 = *piVar7;
          if (iVar4 != 4) goto joined_r0x00010065703c;
        }
        else {
          if (puVar8 == (undefined *)0x0) {
            return (undefined4 *)&UNK_10b233fc8;
          }
          if (puVar15 < puVar8) goto LAB_100657164;
          puVar11 = (undefined4 *)((long)puVar11 + (long)puVar8);
          puVar15 = puVar15 + -(long)puVar8;
        }
      } while (puVar15 != (undefined *)0x0);
      goto LAB_100656e98;
    }
    uStack_62 = 0x5c;
    puVar11 = (undefined4 *)&uStack_62;
    puVar15 = (undefined *)0x2;
    bStack_61 = bVar2;
    do {
      puVar8 = puVar15;
      if ((undefined *)0x7ffffffe < puVar15) {
        puVar8 = (undefined *)0x7fffffff;
      }
      puVar8 = (undefined *)_write(param_1,puVar11,puVar8);
      if (puVar8 == (undefined *)0xffffffffffffffff) {
        piVar7 = (int *)___error();
        iVar4 = *piVar7;
        if (iVar4 != 4) goto joined_r0x00010065703c;
      }
      else {
        if (puVar8 == (undefined *)0x0) {
          return (undefined4 *)&UNK_10b233fc8;
        }
        if (puVar15 < puVar8) goto LAB_100657164;
        puVar11 = (undefined4 *)((long)puVar11 + (long)puVar8);
        puVar15 = puVar15 + -(long)puVar8;
      }
    } while (puVar15 != (undefined *)0x0);
  } while( true );
LAB_100657074:
  do {
    puVar9 = param_3;
    if ((undefined4 *)0x7ffffffe < param_3) {
      puVar9 = (undefined4 *)0x7fffffff;
    }
    puVar9 = (undefined4 *)_write(param_1,param_2,puVar9);
    if (puVar9 == (undefined4 *)0xffffffffffffffff) {
      piVar7 = (int *)___error();
      lVar14 = (long)*piVar7;
      if (*piVar7 != 4) goto LAB_100657114;
    }
    else {
      if (puVar9 == (undefined4 *)0x0) {
LAB_100657120:
        return (undefined4 *)&UNK_10b233fc8;
      }
      if (param_3 < puVar9) goto LAB_10065718c;
      param_2 = param_2 + (long)puVar9;
      param_3 = (undefined4 *)((long)param_3 - (long)puVar9);
    }
  } while (param_3 != (undefined4 *)0x0);
LAB_1006570a8:
  param_3 = (undefined4 *)&UNK_108ca7632;
  puVar15 = (undefined *)0x7fffffff;
  puVar11 = (undefined4 *)&UNK_10b233fc8;
  param_2 = (undefined *)0x1;
  do {
    while( true ) {
      puVar8 = param_2;
      if ((undefined *)0x7ffffffe < param_2) {
        puVar8 = (undefined *)0x7fffffff;
      }
      puVar8 = (undefined *)_write(param_1,param_3,puVar8);
      if (puVar8 != (undefined *)0xffffffffffffffff) break;
      piVar7 = (int *)___error();
      lVar14 = (long)*piVar7;
      if (*piVar7 != 4) {
LAB_100657114:
        return (undefined4 *)(lVar14 << 0x20 | 2);
      }
      if (param_2 == (undefined *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    if (puVar8 == (undefined *)0x0) {
      return puVar11;
    }
    puVar5 = param_2 + -(long)puVar8;
    if (param_2 < puVar8) goto LAB_100657178;
    param_3 = (undefined4 *)((long)param_3 + (long)puVar8);
    param_2 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      return (undefined4 *)0x0;
    }
  } while( true );
joined_r0x00010065703c:
  puVar11 = (undefined4 *)((long)iVar4 << 0x20 | 2);
  if (puVar11 != (undefined4 *)0x0) {
    return puVar11;
  }
  goto LAB_100656e98;
LAB_100657150:
  puVar8 = (undefined *)
           __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                     (puVar6,puVar11,puVar11,&UNK_10b233fe0);
LAB_100657164:
  puVar8 = (undefined *)
           __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                     (puVar8,puVar15,puVar15,&UNK_10b233fe0);
  puVar6 = unaff_x28;
LAB_100657178:
  puVar9 = (undefined4 *)
           __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                     (puVar8,param_2,param_2,&UNK_10b233fe0);
LAB_10065718c:
  puVar8 = &UNK_10b233fe0;
  puVar13 = param_3;
  auVar17 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(puVar9,param_3);
  uVar12 = auVar17._8_8_;
  uVar10 = auVar17._0_8_;
  uStack_88 = 0x1006571a0;
  puStack_e0 = puVar6;
  uStack_d8 = unaff_x27;
  uStack_d0 = unaff_x26;
  uStack_c8 = unaff_x25;
  puStack_c0 = puVar16;
  puStack_b8 = puVar15;
  puStack_b0 = puVar11;
  puStack_a8 = param_2;
  puStack_a0 = param_3;
  uStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  while( true ) {
    puVar15 = (undefined *)0x0;
    do {
      puVar16 = puVar15;
      if (puVar8 == puVar16) {
        if (puVar8 == (undefined *)0x0) {
          return (undefined4 *)0x0;
        }
        puVar11 = (undefined4 *)FUN_100c34858(uVar10,uVar12,puVar13,puVar8);
        return puVar11;
      }
      bVar1 = *(byte *)((long)puVar13 + (long)puVar16);
      cVar3 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar1];
      puVar15 = puVar16 + 1;
    } while (cVar3 == '\0');
    if ((puVar16 != (undefined *)0x0) &&
       (puVar11 = (undefined4 *)FUN_100c34858(uVar10,uVar12,puVar13,puVar16),
       puVar11 != (undefined4 *)0x0)) break;
    puVar13 = (undefined4 *)((long)puVar13 + (long)puVar15);
    puVar8 = puVar8 + -(long)puVar15;
    if (cVar3 == 'u') {
      uStack_e4 = (&
                  __ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
                  [bVar1 >> 4];
      uStack_e3 = (&
                  __ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E)
                  [(ulong)bVar1 & 0xf];
      uStack_e8 = 0x3030755c;
      puVar11 = (undefined4 *)FUN_100c34858(uVar10,uVar12,&uStack_e8,6);
      if (puVar11 != (undefined4 *)0x0) {
        return puVar11;
      }
    }
    else {
      uStack_e2 = 0x5c;
      cStack_e1 = cVar3;
      puVar11 = (undefined4 *)FUN_100c34858(uVar10,uVar12,&uStack_e2,2);
      if (puVar11 != (undefined4 *)0x0) {
        return puVar11;
      }
    }
  }
  return puVar11;
}

