
/* WARNING: Possible PIC construction at 0x000105dc6548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105dc3afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105dc654c) */
/* WARNING: Removing unreachable block (ram,0x000105dc3b00) */

undefined8 * FUN_105dc6188(ulong *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  undefined1 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_80;
  undefined8 auStack_78 [2];
  undefined4 uStack_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  char cStack_61;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar13 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar13 = 5;
  }
  if ((long)uVar13 < 3) {
    if (uVar13 == 0) {
      lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,&UNK_108c78dd4,4);
    }
    else {
      if (uVar13 != 1) {
        param_2 = (undefined8 *)*param_2;
        if (param_1[1] == 0) {
          uVar13 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                             (param_1[2],auStack_78);
LAB_105dc64b4:
          lVar7 = FUN_105dc6688(*param_2,(long)auStack_78 + uVar13,0x14 - uVar13);
        }
        else {
          if (param_1[1] == 1) {
            uVar15 = param_1[2];
            uVar13 = -uVar15;
            if (-1 < (long)uVar15) {
              uVar13 = uVar15;
            }
            uVar6 = __ZN38__LT_u64_u20_as_u20_itoa__Unsigned_GT_3fmt17h24f06047e6494a0aE
                              (uVar13,auStack_78);
            uVar13 = uVar6;
            if ((long)uVar15 < 0) {
              uVar13 = uVar6 - 1;
              if (0x13 < uVar13) {
                uVar5 = func_0x000108a07bdc(uVar13,0x14,&UNK_10b46a408);
                puVar9 = (undefined8 *)_malloc(8);
                if (puVar9 == (undefined8 *)0x0) {
                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,8);
                }
                else {
                  *puVar9 = extraout_x1;
                  plVar8 = (long *)_malloc(0x18);
                  if (plVar8 != (long *)0x0) {
                    *plVar8 = (long)puVar9;
                    plVar8[1] = (long)&UNK_10b46a458;
                    *(undefined1 *)(plVar8 + 2) = uVar5;
                    return (undefined8 *)((long)plVar8 + 1);
                  }
                  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
                }
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x105dc6654);
                (*pcVar4)();
              }
              *(undefined1 *)((long)auStack_78 + (uVar6 - 1)) = 0x2d;
            }
            goto LAB_105dc64b4;
          }
          if (0x7fefffffffffffff < (param_1[2] & 0x7fffffffffffffff)) {
            lVar7 = FUN_105dc6688(*param_2,&UNK_108c78dd4,4);
            goto joined_r0x000105dc6500;
          }
          lVar7 = __ZN45__LT_f64_u20_as_u20_zmij__private__Sealed_GT_20write_to_zmij_buffer17h198f4ea1a070a853E
                            (auStack_78);
          lVar7 = FUN_105dc6688(*param_2,auStack_78,lVar7 - (long)auStack_78);
        }
        if (lVar7 == 0) {
          return (undefined8 *)0x0;
        }
        unaff_x20 = auStack_78;
        unaff_x30 = 0x105dc654c;
        register0x00000008 = (BADSPACEBASE *)&uStack_80;
        unaff_x19 = param_2;
        unaff_x29 = puVar1;
        goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      }
      if ((param_1[1] & 1) == 0) {
        puVar10 = &UNK_109b9f024;
        uVar11 = 5;
      }
      else {
        puVar10 = &UNK_108c78dd0;
        uVar11 = 4;
      }
      lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,puVar10,uVar11);
    }
  }
  else {
    if (uVar13 == 3) {
      uVar13 = param_1[2];
      unaff_x20 = (undefined8 *)param_1[3];
      unaff_x19 = (undefined8 *)*param_2;
      unaff_x29 = &stack0xfffffffffffffff0;
      lVar7 = FUN_105dc6688(*unaff_x19,&UNK_109b9f023,1);
      if (lVar7 == 0) {
        auStack_78[0] = 0;
        uStack_80 = 0x3030755c;
        do {
          while( true ) {
            puVar9 = (undefined8 *)0x0;
            do {
              puVar16 = puVar9;
              if (unaff_x20 == puVar16) {
                if (((unaff_x20 == (undefined8 *)0x0) ||
                    (lVar7 = FUN_105dc6688(*unaff_x19,uVar13,unaff_x20), lVar7 == 0)) &&
                   (lVar7 = FUN_105dc6688(*unaff_x19,&UNK_109b9f023,1), lVar7 == 0)) {
                  return (undefined8 *)0x0;
                }
                goto LAB_105dc3afc;
              }
              bVar2 = *(byte *)(uVar13 + (long)puVar16);
              cVar3 = (&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar2];
              puVar9 = (undefined8 *)((long)puVar16 + 1);
            } while (cVar3 == '\0');
            if ((puVar16 != (undefined8 *)0x0) &&
               (lVar7 = FUN_105dc6688(*unaff_x19,uVar13,puVar16), lVar7 != 0)) goto LAB_105dc3afc;
            uVar13 = uVar13 + (long)puVar9;
            unaff_x20 = (undefined8 *)((long)unaff_x20 - (long)puVar9);
            if (cVar3 != 'u') break;
            uStack_64 = (&
                        __ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E
                        )[bVar2 >> 4];
            uStack_63 = (&
                        __ZN10serde_json3ser9Formatter17write_char_escape10HEX_DIGITS17hacd2e64eb3708e20E
                        )[(ulong)bVar2 & 0xf];
            uStack_68 = (undefined4)uStack_80;
            lVar7 = FUN_105dc6688(*unaff_x19,&uStack_68,6);
            if (lVar7 != 0) goto LAB_105dc3afc;
          }
          uStack_62 = 0x5c;
          cStack_61 = cVar3;
          lVar7 = FUN_105dc6688(*unaff_x19,&uStack_62,2);
        } while (lVar7 == 0);
      }
LAB_105dc3afc:
      unaff_x30 = 0x105dc3b00;
      register0x00000008 = (BADSPACEBASE *)&uStack_80;
      goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
    }
    if (uVar13 == 4) {
      uVar13 = param_1[2];
      uVar15 = param_1[3];
      puVar9 = (undefined8 *)*param_2;
      lVar7 = FUN_105dc6688(*puVar9,&UNK_109b9f029,1);
      if (lVar7 == 0) {
        if (uVar15 == 0) {
          lVar7 = FUN_105dc6688(*puVar9,&UNK_109b9f02d,1);
        }
        else {
          puVar9 = (undefined8 *)FUN_105dc6188(uVar13,param_2);
          if (puVar9 != (undefined8 *)0x0) {
            return puVar9;
          }
          lVar12 = uVar15 * 0x48;
          while( true ) {
            lVar12 = lVar12 + -0x48;
            uVar13 = uVar13 + 0x48;
            if (lVar12 == 0) break;
            lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,&UNK_109b9f02b,1);
            if (lVar7 != 0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
            puVar9 = (undefined8 *)FUN_105dc6188(uVar13,param_2);
            if (puVar9 != (undefined8 *)0x0) {
              return puVar9;
            }
          }
          lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,&UNK_109b9f02d,1);
        }
        if (lVar7 == 0) {
          return (undefined8 *)0x0;
        }
      }
      goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
    }
    uVar13 = param_1[6];
    puVar9 = (undefined8 *)*param_2;
    lVar7 = FUN_105dc6688(*puVar9,&UNK_109b9f02a,1);
    if (lVar7 != 0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
    if (uVar13 == 0) {
      lVar7 = FUN_105dc6688(*puVar9,&UNK_109b9f022,1);
      if (lVar7 != 0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      uVar13 = param_1[2];
      if (uVar13 == 0) {
        return (undefined8 *)0x0;
      }
      uVar15 = param_1[1];
      uVar11 = *(undefined8 *)(uVar15 + 8);
      uVar17 = *(undefined8 *)(uVar15 + 0x10);
      lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,&UNK_109b9f02b,1);
      if (lVar7 != 0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      lVar12 = uVar15 + uVar13 * 0x68;
      puVar9 = (undefined8 *)FUN_105dc39ac(*param_2,uVar11,uVar17);
joined_r0x000105dc63f4:
      if (puVar9 != (undefined8 *)0x0) {
        return puVar9;
      }
      lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,&UNK_109b9f02c,1);
      if (lVar7 != 0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
      puVar9 = (undefined8 *)FUN_105dc6188(uVar15 + 0x18,param_2);
      if (puVar9 != (undefined8 *)0x0) {
        return puVar9;
      }
      lVar14 = uVar15 + 0x80;
      while (lVar14 + -0x18 != lVar12) {
        uVar11 = *(undefined8 *)(lVar14 + -0x10);
        uVar17 = *(undefined8 *)(lVar14 + -8);
        lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,&UNK_109b9f02b,1);
        if (lVar7 != 0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
        puVar9 = (undefined8 *)FUN_105dc39ac(*param_2,uVar11,uVar17);
        if (puVar9 != (undefined8 *)0x0) {
          return puVar9;
        }
        lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,&UNK_109b9f02c,1);
        if (lVar7 != 0) goto __ZN10serde_json5error5Error2io17hd03531c8cc0a8670E;
        puVar9 = (undefined8 *)FUN_105dc6188(lVar14,param_2);
        lVar14 = lVar14 + 0x68;
        if (puVar9 != (undefined8 *)0x0) {
          return puVar9;
        }
      }
    }
    else if (param_1[2] != 0) {
      uVar15 = param_1[1];
      lVar12 = uVar15 + param_1[2] * 0x68;
      puVar9 = (undefined8 *)
               FUN_105dc39ac(*param_2,*(undefined8 *)(uVar15 + 8),*(undefined8 *)(uVar15 + 0x10));
      goto joined_r0x000105dc63f4;
    }
    lVar7 = FUN_105dc6688(*(undefined8 *)*param_2,&UNK_109b9f022,1);
  }
joined_r0x000105dc6500:
  if (lVar7 == 0) {
    return (undefined8 *)0x0;
  }
__ZN10serde_json5error5Error2io17hd03531c8cc0a8670E:
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 1;
  *(long *)((long)register0x00000008 + -0x40) = lVar7;
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
  puVar9 = (undefined8 *)_malloc(0x28);
  if (puVar9 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x28);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x108a4a0e0);
    (*pcVar4)();
  }
  uVar11 = *(undefined8 *)((long)register0x00000008 + -0x48);
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0x30);
  uVar17 = *(undefined8 *)((long)register0x00000008 + -0x38);
  puVar9[1] = *(undefined8 *)((long)register0x00000008 + -0x40);
  *puVar9 = uVar11;
  puVar9[3] = uVar18;
  puVar9[2] = uVar17;
  puVar9[4] = *(undefined8 *)((long)register0x00000008 + -0x28);
  return puVar9;
}

