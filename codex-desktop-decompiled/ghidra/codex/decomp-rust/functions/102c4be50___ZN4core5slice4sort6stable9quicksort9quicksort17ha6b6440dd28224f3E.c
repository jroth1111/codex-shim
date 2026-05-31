
/* WARNING: Possible PIC construction at 0x000102c4b720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c4c5f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c4b724) */
/* WARNING: Removing unreachable block (ram,0x000102c4b730) */
/* WARNING: Removing unreachable block (ram,0x000102c4c5fc) */
/* WARNING: Type propagation algorithm not settling */

void __ZN4core5slice4sort6stable9quicksort9quicksort17ha6b6440dd28224f3E
               (ulong param_1,ulong param_2,undefined8 *param_3,ulong param_4,undefined8 *param_5,
               undefined1 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 **ppuVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  uint uVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  ulong uVar30;
  ulong *puVar31;
  undefined8 uVar32;
  ulong uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  undefined1 *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined1 *puStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined1 auStack_2d8 [632];
  
  puVar39 = &stack0xfffffffffffffff0;
  uStack_308 = param_7;
  puStack_300 = param_6;
  uStack_2f0 = param_4;
  uVar36 = uStack_2e0;
  if (0x20 < param_2) {
    puStack_310 = param_3 + -0x4e;
    lVar37 = 0x270;
    puVar34 = param_5;
    uStack_2e0 = param_1;
LAB_102c4aa0c:
    uVar36 = uStack_2e0;
    if ((int)puVar34 == 0) {
      func_0x000102c49a14(param_1,param_2,param_3,uStack_2f0,1,uStack_308);
      return;
    }
    uVar30 = param_1 + (param_2 >> 3) * 0x9c0;
    uVar33 = param_1 + (param_2 >> 3) * 0x1110;
    uStack_2e8 = CONCAT44(uStack_2e8._4_4_,(int)puVar34);
    if (param_2 < 0x40) {
      bVar4 = *(byte *)(uVar30 + 0x268);
      bVar5 = *(byte *)(param_1 + 0x268);
      uVar26 = (uint)bVar4 - (uint)bVar5;
      if (uVar26 == 0xffffffff) {
        uVar22 = 1;
        bVar6 = *(byte *)(uVar33 + 0x268);
        uVar17 = (uint)bVar6 - (uint)bVar5;
joined_r0x000102c4aa88:
        uVar26 = (uint)bVar6;
        uVar21 = uVar26;
        if (uVar17 != 0) goto LAB_102c4aac8;
LAB_102c4ab20:
        param_1 = uStack_2e0;
        uVar18 = *(ulong *)(uStack_2e0 + 0x28);
        uVar19 = *(ulong *)(uVar33 + 0x28);
        uVar36 = uVar18;
        if (uVar19 <= uVar18) {
          uVar36 = uVar19;
        }
        uStack_2f8 = uVar22;
        iVar12 = _memcmp(*(undefined8 *)(uStack_2e0 + 0x20),*(undefined8 *)(uVar33 + 0x20),uVar36);
        lVar28 = uVar18 - uVar19;
        if (iVar12 != 0) {
          lVar28 = (long)iVar12;
        }
        uVar26 = uVar21;
        if (lVar28 == 0) {
          uVar22 = *(ulong *)(param_1 + 0x10);
          uVar18 = *(ulong *)(uVar33 + 0x10);
          uVar36 = uVar22;
          if (uVar18 <= uVar22) {
            uVar36 = uVar18;
          }
          iVar12 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(uVar33 + 8),uVar36);
          lVar28 = uVar22 - uVar18;
          if (iVar12 != 0) {
            lVar28 = (long)iVar12;
          }
          uVar21 = (uint)uStack_2f8;
          uVar7 = (uVar21 ^ lVar28 < 0) & 1;
        }
        else {
          uVar21 = (uint)uStack_2f8;
          uVar7 = (uVar21 ^ lVar28 < 0) & 1;
        }
joined_r0x000102c4ab9c:
        uVar36 = param_1;
        if (uVar7 != 0) goto LAB_102c4ac2c;
      }
      else {
        uVar17 = (uint)bVar5;
        if ((uVar26 & 0xff) == 1) {
          uVar22 = 0;
          bVar6 = *(byte *)(uVar33 + 0x268);
          uVar17 = bVar6 - uVar17;
          goto joined_r0x000102c4aa88;
        }
        uVar18 = *(ulong *)(uStack_2e0 + 0x28);
        uVar19 = *(ulong *)(uVar30 + 0x28);
        uVar22 = uVar18;
        if (uVar19 <= uVar18) {
          uVar22 = uVar19;
        }
        iVar12 = _memcmp(*(undefined8 *)(uStack_2e0 + 0x20),*(undefined8 *)(uVar30 + 0x20),uVar22);
        uVar22 = uVar18 - uVar19;
        if (iVar12 != 0) {
          uVar22 = (long)iVar12;
        }
        if (uVar22 != 0) {
          uVar22 = uVar22 >> 0x3f;
          bVar6 = *(byte *)(uVar33 + 0x268);
          uVar17 = bVar6 - uVar17;
          goto joined_r0x000102c4aa88;
        }
        uVar18 = *(ulong *)(uVar36 + 0x10);
        uVar19 = *(ulong *)(uVar30 + 0x10);
        uVar22 = uVar18;
        if (uVar19 <= uVar18) {
          uVar22 = uVar19;
        }
        iVar12 = _memcmp(*(undefined8 *)(uVar36 + 8),*(undefined8 *)(uVar30 + 8),uVar22);
        uVar22 = uVar18 - uVar19;
        if (iVar12 != 0) {
          uVar22 = (long)iVar12;
        }
        uVar22 = uVar22 >> 0x3f;
        bVar5 = *(byte *)(uVar33 + 0x268);
        uVar21 = (uint)bVar5;
        uVar26 = (uint)bVar5;
        uVar17 = bVar5 - uVar17;
        if (uVar17 == 0) goto LAB_102c4ab20;
LAB_102c4aac8:
        uVar21 = (uint)uVar22;
        param_1 = uStack_2e0;
        uVar7 = uVar21;
        if ((uVar17 & 0xff) == 1) goto joined_r0x000102c4ab9c;
        uVar36 = uStack_2e0;
        if (uVar21 == 0) goto LAB_102c4ac2c;
      }
      uVar26 = uVar26 - bVar4;
      if (uVar26 == 0xffffffff) {
        uVar26 = 1;
      }
      else if ((uVar26 & 0xff) == 1) {
        uVar26 = 0;
      }
      else {
        uVar22 = *(ulong *)(uVar30 + 0x28);
        uVar18 = *(ulong *)(uVar33 + 0x28);
        uVar36 = uVar22;
        if (uVar18 <= uVar22) {
          uVar36 = uVar18;
        }
        iVar12 = _memcmp(*(undefined8 *)(uVar30 + 0x20),*(undefined8 *)(uVar33 + 0x20),uVar36);
        lVar28 = uVar22 - uVar18;
        if (iVar12 != 0) {
          lVar28 = (long)iVar12;
        }
        if (lVar28 == 0) {
          uVar22 = *(ulong *)(uVar30 + 0x10);
          uVar18 = *(ulong *)(uVar33 + 0x10);
          uVar36 = uVar22;
          if (uVar18 <= uVar22) {
            uVar36 = uVar18;
          }
          iVar12 = _memcmp(*(undefined8 *)(uVar30 + 8),*(undefined8 *)(uVar33 + 8),uVar36);
          lVar28 = uVar22 - uVar18;
          if (iVar12 != 0) {
            lVar28 = (long)iVar12;
          }
        }
        uVar26 = (uint)((ulong)lVar28 >> 0x3f);
      }
      uVar36 = uVar33;
      if (uVar21 == uVar26) {
        uVar36 = uVar30;
      }
    }
    else {
      uVar36 = func_0x000102c483a8(param_1,uVar30,uVar33);
    }
LAB_102c4ac2c:
    uStack_2e8 = CONCAT44(uStack_2e8._4_4_,(int)uStack_2e8 + -1);
    uStack_2f8 = (uVar36 - param_1 >> 4) * 0x6f96f96f96f96f97;
    _memcpy(auStack_2d8,uVar36,0x270);
    puVar10 = puStack_300;
    if (puStack_300 != (undefined1 *)0x0) {
      if (*(char *)(uVar36 + 0x268) == puStack_300[0x268]) {
        uVar33 = *(ulong *)(puStack_300 + 0x28);
        uVar22 = *(ulong *)(uVar36 + 0x28);
        uVar30 = uVar33;
        if (uVar22 <= uVar33) {
          uVar30 = uVar22;
        }
        iVar12 = _memcmp(*(undefined8 *)(puStack_300 + 0x20),*(undefined8 *)(uVar36 + 0x20),uVar30);
        lVar28 = uVar33 - uVar22;
        if (iVar12 != 0) {
          lVar28 = (long)iVar12;
        }
        if (lVar28 == 0) {
          uVar33 = *(ulong *)(puVar10 + 0x10);
          uVar22 = *(ulong *)(uVar36 + 0x10);
          uVar30 = uVar33;
          if (uVar22 <= uVar33) {
            uVar30 = uVar22;
          }
          iVar12 = _memcmp(*(undefined8 *)(puVar10 + 8),*(undefined8 *)(uVar36 + 8),uVar30);
          lVar28 = uVar33 - uVar22;
          if (iVar12 != 0) {
            lVar28 = (long)iVar12;
          }
        }
        if (lVar28 < 0) goto LAB_102c4acdc;
      }
      else if ((char)(*(char *)(uVar36 + 0x268) - puStack_300[0x268]) == -1) goto LAB_102c4acdc;
      goto LAB_102c4ae70;
    }
LAB_102c4acdc:
    if (param_2 <= uStack_2f0) {
      uVar30 = 0;
      puVar34 = param_3 + param_2 * 0x4e;
      uVar33 = uStack_2f8;
      uVar22 = param_1;
      do {
        for (uVar18 = param_1; param_1 = uStack_2e0, uVar18 < uVar22 + uVar33 * 0x270;
            uVar18 = uVar18 + 0x270) {
          if (*(char *)(uVar36 + 0x268) == *(char *)(uVar18 + 0x268)) {
            uVar23 = *(ulong *)(uVar18 + 0x28);
            uVar2 = *(ulong *)(uVar36 + 0x28);
            uVar19 = uVar23;
            if (uVar2 <= uVar23) {
              uVar19 = uVar2;
            }
            iVar12 = _memcmp(*(undefined8 *)(uVar18 + 0x20),*(undefined8 *)(uVar36 + 0x20),uVar19);
            lVar28 = uVar23 - uVar2;
            if (iVar12 != 0) {
              lVar28 = (long)iVar12;
            }
            if (lVar28 == 0) {
              uVar23 = *(ulong *)(uVar18 + 0x10);
              uVar2 = *(ulong *)(uVar36 + 0x10);
              uVar19 = uVar23;
              if (uVar2 <= uVar23) {
                uVar19 = uVar2;
              }
              iVar12 = _memcmp(*(undefined8 *)(uVar18 + 8),*(undefined8 *)(uVar36 + 8),uVar19);
              lVar28 = uVar23 - uVar2;
              if (iVar12 != 0) {
                lVar28 = (long)iVar12;
              }
            }
            if (lVar28 < 0) goto LAB_102c4adac;
LAB_102c4ad08:
            puVar14 = puVar34 + -0x4e;
            lVar28 = 0;
          }
          else {
            if ((char)(*(char *)(uVar36 + 0x268) - *(char *)(uVar18 + 0x268)) == '\x01')
            goto LAB_102c4ad08;
LAB_102c4adac:
            lVar28 = 1;
            puVar14 = param_3;
          }
          puVar34 = puVar34 + -0x4e;
          _memcpy(puVar14 + uVar30 * 0x4e,uVar18,0x270);
          uVar30 = lVar28 + uVar30;
        }
        if (uVar33 == param_2) goto LAB_102c4ade4;
        puVar34 = puVar34 + -0x4e;
        _memcpy(puVar34 + uVar30 * 0x4e,uVar18,0x270);
        param_1 = uVar18 + 0x270;
        uVar33 = param_2;
        uVar22 = uStack_2e0;
      } while( true );
    }
    goto LAB_102c4b2e0;
  }
LAB_102c4a990:
  uStack_2e0 = uVar36;
  if (param_2 < 2) {
    return;
  }
  if (uStack_2f0 < param_2 + 0x10) goto LAB_102c4b2e0;
  uVar36 = param_2 >> 1;
  puVar34 = param_3 + uVar36 * 0x4e;
  uStack_2e0 = param_1;
  if (param_2 < 8) {
    _memcpy(param_3,param_1,0x270);
    _memcpy(puVar34,param_1 + uVar36 * 0x270,0x270);
    uVar30 = 1;
    uVar33 = param_2 - uVar36;
    lVar37 = uVar36 - 1;
    if (uVar36 != 0 && lVar37 != 0) goto LAB_102c4b034;
  }
  else {
    func_0x000102c48b08(param_1,param_3);
    func_0x000102c48b08(param_1 + uVar36 * 0x270,puVar34);
    uVar30 = 4;
    uVar33 = param_2 - uVar36;
    lVar37 = uVar36 - 4;
    if (3 < uVar36 && lVar37 != 0) {
LAB_102c4b034:
      puVar14 = param_3 + uVar30 * 0x4e;
      lVar28 = uStack_2e0 + uVar30 * 0x270;
      do {
        _memcpy(puVar14,lVar28,0x270);
        FUN_102c48788(param_3,puVar14);
        puVar14 = puVar14 + 0x4e;
        lVar28 = lVar28 + 0x270;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
    }
  }
  uVar22 = uStack_2e0;
  if (uVar30 < uVar33) {
    puVar14 = param_3 + uVar30 * 0x4e + uVar36 * 0x4e;
    lVar37 = uStack_2e0 + uVar36 * 0x270 + uVar30 * 0x270;
    lVar28 = (uVar30 + uVar36) - param_2;
    do {
      _memcpy(puVar14,lVar37,0x270);
      FUN_102c48788(puVar34,puVar14);
      puVar14 = puVar14 + 0x4e;
      lVar37 = lVar37 + 0x270;
      bVar11 = lVar28 != -1;
      lVar28 = lVar28 + 1;
    } while (bVar11);
  }
  lVar37 = param_2 * 0x270;
  puVar14 = param_3 + param_2 * 0x4e + -0x4e;
  puVar24 = puVar34 + -0x4e;
  uStack_2e8 = uVar36;
  do {
    lVar37 = lVar37 + -0x270;
    if (*(char *)(param_3 + 0x4d) == *(char *)(puVar34 + 0x4d)) {
      uVar30 = puVar34[5];
      uVar33 = param_3[5];
      uVar36 = uVar30;
      if (uVar33 <= uVar30) {
        uVar36 = uVar33;
      }
      iVar12 = _memcmp(puVar34[4],param_3[4],uVar36);
      lVar28 = uVar30 - uVar33;
      if (iVar12 != 0) {
        lVar28 = (long)iVar12;
      }
      if (lVar28 == 0) {
        uVar30 = puVar34[2];
        uVar33 = param_3[2];
        uVar36 = uVar30;
        if (uVar33 <= uVar30) {
          uVar36 = uVar33;
        }
        iVar12 = _memcmp(puVar34[1],param_3[1],uVar36);
        lVar28 = uVar30 - uVar33;
        if (iVar12 != 0) {
          lVar28 = (long)iVar12;
        }
        if (-1 < lVar28) goto LAB_102c4b19c;
        goto LAB_102c4b160;
      }
      if (lVar28 < 0) goto LAB_102c4b160;
LAB_102c4b19c:
      uVar26 = 0;
      puVar35 = param_3;
    }
    else {
      if ((char)(*(char *)(param_3 + 0x4d) - *(char *)(puVar34 + 0x4d)) == '\x01')
      goto LAB_102c4b19c;
LAB_102c4b160:
      uVar26 = 1;
      puVar35 = puVar34;
    }
    _memcpy(uVar22,puVar35,0x270);
    if ((char)(*(char *)(puVar24 + 0x4d) - *(char *)(puVar14 + 0x4d)) == -1) {
LAB_102c4b21c:
      lVar28 = 1;
      puVar35 = puVar24;
    }
    else {
      if ((char)(*(char *)(puVar24 + 0x4d) - *(char *)(puVar14 + 0x4d)) != '\x01') {
        uVar30 = puVar14[5];
        uVar33 = puVar24[5];
        uVar36 = uVar30;
        if (uVar33 <= uVar30) {
          uVar36 = uVar33;
        }
        iVar12 = _memcmp(puVar14[4],puVar24[4],uVar36);
        lVar28 = uVar30 - uVar33;
        if (iVar12 != 0) {
          lVar28 = (long)iVar12;
        }
        if (lVar28 == 0) {
          uVar30 = puVar14[2];
          uVar33 = puVar24[2];
          uVar36 = uVar30;
          if (uVar33 <= uVar30) {
            uVar36 = uVar33;
          }
          iVar12 = _memcmp(puVar14[1],puVar24[1],uVar36);
          lVar28 = uVar30 - uVar33;
          if (iVar12 != 0) {
            lVar28 = (long)iVar12;
          }
        }
        if (lVar28 < 0) goto LAB_102c4b21c;
      }
      lVar28 = 0;
      puVar35 = puVar14;
    }
    puVar34 = puVar34 + (ulong)uVar26 * 0x4e;
    param_3 = param_3 + (ulong)(uVar26 ^ 1) * 0x4e;
    uVar22 = uVar22 + 0x270;
    _memcpy(uStack_2e0 + lVar37,puVar35,0x270);
    puVar35 = puVar14 + lVar28 * 0x4e;
    puVar14 = puVar35 + -0x4e;
    puVar24 = puVar24 + (long)-(int)lVar28 * 0x4e;
    uStack_2e8 = uStack_2e8 - 1;
  } while (uStack_2e8 != 0);
  if ((param_2 & 1) != 0) {
    bVar11 = puVar24 + 0x4e <= param_3;
    puVar14 = param_3;
    if (bVar11) {
      puVar14 = puVar34;
    }
    _memcpy(uVar22,puVar14,0x270);
    param_3 = param_3 + (ulong)!bVar11 * 0x4e;
    puVar34 = puVar34 + (ulong)bVar11 * 0x4e;
  }
  if ((param_3 == puVar24 + 0x4e) && (puVar34 == puVar35)) {
    return;
  }
LAB_102c4b2dc:
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_102c4b2e0:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x102c4b2e4);
  (*pcVar8)();
LAB_102c4ade4:
  _memcpy(uStack_2e0,param_3,uVar30 * 0x270);
  lVar28 = param_2 - uVar30;
  if (lVar28 != 0) {
    lVar38 = param_1 + uVar30 * 0x270;
    puVar34 = puStack_310 + param_2 * 0x4e;
    lVar25 = lVar28;
    do {
      _memcpy(lVar38,puVar34,0x270);
      puVar34 = puVar34 + -0x4e;
      lVar38 = lVar38 + 0x270;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
  }
  if (uVar30 == 0) {
LAB_102c4ae70:
    if (param_2 <= uStack_2f0) {
      uVar33 = 0;
      puVar34 = param_3 + param_2 * 0x4e;
      uVar30 = uStack_2f8;
      do {
        uVar22 = uStack_2e0 + uVar30 * 0x270;
        for (; uVar18 = uStack_2e0, param_1 < uVar22; param_1 = param_1 + 0x270) {
          if (*(char *)(param_1 + 0x268) == *(char *)(uVar36 + 0x268)) {
            uVar19 = *(ulong *)(uVar36 + 0x28);
            uVar23 = *(ulong *)(param_1 + 0x28);
            uVar18 = uVar19;
            if (uVar23 <= uVar19) {
              uVar18 = uVar23;
            }
            iVar12 = _memcmp(*(undefined8 *)(uVar36 + 0x20),*(undefined8 *)(param_1 + 0x20),uVar18);
            lVar28 = uVar19 - uVar23;
            if (iVar12 != 0) {
              lVar28 = (long)iVar12;
            }
            if (lVar28 == 0) {
              uVar19 = *(ulong *)(uVar36 + 0x10);
              uVar23 = *(ulong *)(param_1 + 0x10);
              uVar18 = uVar19;
              if (uVar23 <= uVar19) {
                uVar18 = uVar23;
              }
              iVar12 = _memcmp(*(undefined8 *)(uVar36 + 8),*(undefined8 *)(param_1 + 8),uVar18);
              lVar28 = uVar19 - uVar23;
              if (iVar12 != 0) {
                lVar28 = (long)iVar12;
              }
              if (-1 < lVar28) goto LAB_102c4aec4;
              goto LAB_102c4af0c;
            }
            if (lVar28 < 0) goto LAB_102c4af0c;
LAB_102c4aec4:
            lVar28 = 1;
            puVar14 = param_3;
          }
          else {
            if ((char)(*(char *)(param_1 + 0x268) - *(char *)(uVar36 + 0x268)) == '\x01')
            goto LAB_102c4aec4;
LAB_102c4af0c:
            lVar28 = 0;
            puVar14 = puVar34 + -0x4e;
          }
          puVar34 = puVar34 + -0x4e;
          _memcpy(puVar14 + uVar33 * 0x4e,param_1,0x270);
          uVar33 = lVar28 + uVar33;
        }
        if (uVar30 == param_2) goto LAB_102c4af70;
        puVar34 = puVar34 + -0x4e;
        _memcpy(param_3 + uVar33 * 0x4e,param_1,0x270);
        uVar33 = uVar33 + 1;
        param_1 = param_1 + 0x270;
        uVar30 = param_2;
      } while( true );
    }
    goto LAB_102c4b2e0;
  }
  if (param_2 < uVar30) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108d4de50,0x13,&UNK_10b299ea8);
    goto LAB_102c4b2dc;
  }
  param_6 = auStack_2d8;
  puVar34 = (undefined8 *)(uStack_2e8 & 0xffffffff);
  param_5 = puVar34;
  param_7 = uStack_308;
  __ZN4core5slice4sort6stable9quicksort9quicksort17ha6b6440dd28224f3E
            (param_1 + uVar30 * 0x270,lVar28,param_3,uStack_2f0);
  param_2 = uVar30;
  uVar30 = uStack_2e0;
  uVar36 = uStack_2e0;
joined_r0x000102c4afd8:
  uStack_2e0 = uVar30;
  if (param_2 < 0x21) goto LAB_102c4a990;
  goto LAB_102c4aa0c;
LAB_102c4af70:
  _memcpy(uStack_2e0,param_3,uVar33 * 0x270);
  uVar36 = param_2 - uVar33;
  if (uVar36 == 0) {
    return;
  }
  param_1 = uVar18 + uVar33 * 0x270;
  puVar34 = puStack_310 + param_2 * 0x4e;
  uVar18 = uVar36;
  uVar22 = param_1;
  do {
    _memcpy(uVar22,puVar34,0x270);
    puVar34 = puVar34 + -0x4e;
    uVar22 = uVar22 + 0x270;
    uVar18 = uVar18 - 1;
  } while (uVar18 != 0);
  if (param_2 < uVar33) {
    puVar16 = &UNK_10b299ec0;
    uVar22 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar33,param_2,param_2);
    puVar14 = (undefined8 *)(uVar36 * 0x270);
    _memcpy(0,param_3);
    uVar40 = 0x102c4b31c;
    auVar43 = __Unwind_Resume(uVar22);
    uVar18 = 0;
    ppuVar9 = &puStack_310;
    goto __ZN4core5slice4sort6stable9quicksort9quicksort17hf0092fb5a5ca0746E;
  }
  puStack_300 = (undefined1 *)0x0;
  puVar34 = (undefined8 *)(uStack_2e8 & 0xffffffff);
  param_2 = uVar36;
  uVar30 = param_1;
  uVar36 = uStack_2e0;
  goto joined_r0x000102c4afd8;
code_r0x000102c4b6fc:
  if (uVar36 < uVar22) {
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108d4de50,0x13,&UNK_10b299ea8);
    goto LAB_102c4be10;
  }
  auVar43._8_8_ = lVar37;
  auVar43._0_8_ = uVar33 + uVar22 * 0x270;
  param_6 = (undefined1 *)((long)ppuVar9 + -0x2d8);
  puVar16 = *(undefined **)((long)ppuVar9 + -0x2f0);
  param_7 = *(undefined8 *)((long)ppuVar9 + -0x308);
  uVar40 = 0x102c4b724;
  ppuVar9 = (undefined8 **)((long)ppuVar9 + -0x340);
  param_3 = puVar14;
  puVar34 = param_5;
  goto __ZN4core5slice4sort6stable9quicksort9quicksort17hf0092fb5a5ca0746E;
  while( true ) {
    puVar31 = puVar31 + 3;
    uVar36 = uVar36 + 1;
    uVar33 = uVar19;
    uVar22 = uVar23;
    if (uVar18 == uVar36) break;
LAB_102c4bfb0:
    uVar19 = puVar31[-1];
    uVar23 = *puVar31;
    uVar30 = uVar23;
    if (uVar22 <= uVar23) {
      uVar30 = uVar22;
    }
    iVar12 = _memcmp(uVar19,uVar33,uVar30);
    lVar28 = uVar23 - uVar22;
    if (iVar12 != 0) {
      lVar28 = (long)iVar12;
    }
    if (-1 < lVar28) goto LAB_102c4bf08;
  }
  goto LAB_102c4bf10;
LAB_102c4bf08:
  if (uVar36 != uVar18) {
    uVar30 = (ulong)((int)LZCOUNT(uVar18 | 1) << 1 ^ 0x7e);
    uVar15 = 0;
    puVar39 = *(undefined1 **)((long)ppuVar9 + -0x350);
    uVar32 = *(undefined8 *)((long)ppuVar9 + -0x348);
    lVar28 = *(long *)((long)ppuVar9 + -0x360);
    puVar35 = *(undefined8 **)((long)ppuVar9 + -0x358);
    puVar24 = *(undefined8 **)((long)ppuVar9 + -0x370);
    lVar38 = *(long *)((long)ppuVar9 + -0x368);
    uVar40 = *(undefined8 *)((long)ppuVar9 + -0x380);
    uVar36 = *(ulong *)((long)ppuVar9 + -0x378);
    puVar34 = *(undefined8 **)((long)ppuVar9 + -0x390);
    puVar14 = *(undefined8 **)((long)ppuVar9 + -0x3a0);
    lVar37 = *(long *)((long)ppuVar9 + -0x398);
    puVar10 = (undefined1 *)((long)ppuVar9 + -0x340);
    uVar33 = *(ulong *)((long)ppuVar9 + -0x388);
    do {
      uVar22 = auVar44._8_8_;
      *(undefined8 **)(puVar10 + -0x60) = puVar14;
      *(long *)(puVar10 + -0x58) = lVar37;
      *(undefined8 **)(puVar10 + -0x50) = puVar34;
      *(ulong *)(puVar10 + -0x48) = uVar33;
      *(undefined8 *)(puVar10 + -0x40) = uVar40;
      *(ulong *)(puVar10 + -0x38) = uVar36;
      *(undefined8 **)(puVar10 + -0x30) = puVar24;
      *(long *)(puVar10 + -0x28) = lVar38;
      *(long *)(puVar10 + -0x20) = lVar28;
      *(undefined8 **)(puVar10 + -0x18) = puVar35;
      *(undefined1 **)(puVar10 + -0x10) = puVar39;
      *(undefined8 *)(puVar10 + -8) = uVar32;
      puVar39 = puVar10 + -0x10;
      while( true ) {
        puVar14 = auVar44._0_8_;
        uVar33 = auVar44._8_8_;
        if (uVar22 < 0x21) {
          *(undefined8 *)(puVar10 + -0x60) = *(undefined8 *)(puVar10 + -0x60);
          *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)(puVar10 + -0x58);
          *(undefined8 *)(puVar10 + -0x50) = *(undefined8 *)(puVar10 + -0x50);
          *(undefined8 *)(puVar10 + -0x48) = *(undefined8 *)(puVar10 + -0x48);
          *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
          *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
          *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x30);
          *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)(puVar10 + -0x28);
          *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(puVar10 + -0x20);
          *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
          *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
          *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
          *(undefined8 *)(puVar10 + -0x530) = 0;
          if (uVar33 < 2) {
            return;
          }
          uVar36 = uVar33 >> 1;
          puVar34 = puVar14 + uVar36 * 3;
          puVar24 = (undefined8 *)(puVar10 + uVar36 * 0x18 + -0x4f0);
          *(undefined8 **)(puVar10 + -0x518) = puVar24;
          *(undefined8 **)(puVar10 + -0x508) = puVar34;
          if (uVar33 < 8) {
            uVar40 = *puVar14;
            *(undefined8 *)(puVar10 + -0x4e8) = puVar14[1];
            *(undefined8 *)(puVar10 + -0x4f0) = uVar40;
            *(undefined8 *)(puVar10 + -0x4e0) = puVar14[2];
            uVar40 = *puVar34;
            puVar24[1] = puVar34[1];
            *puVar24 = uVar40;
            puVar24[2] = puVar34[2];
            uVar30 = 1;
          }
          else {
            func_0x000102c48988(puVar14,puVar10 + -0x4f0);
            func_0x000102c48988(puVar34,puVar24);
            uVar30 = 4;
          }
          *(ulong *)(puVar10 + -0x528) = uVar33;
          *(ulong *)(puVar10 + -0x520) = uVar36;
          *(ulong *)(puVar10 + -0x500) = uVar33 - uVar36;
          *(undefined8 **)(puVar10 + -0x4f8) = puVar14;
          *(ulong *)(puVar10 + -0x510) = uVar30 * 3;
          if (uVar36 <= uVar30) goto LAB_102c492f4;
          lVar37 = *(long *)(puVar10 + -0x510) << 3;
          uVar33 = uVar30;
          goto LAB_102c49250;
        }
        iVar12 = (int)uVar30;
        if (iVar12 == 0) {
          lVar37 = uVar33 + (uVar33 >> 1);
          if (lVar37 == 0) {
            return;
          }
          *(undefined8 *)(puVar10 + -0x60) = *(undefined8 *)(puVar10 + -0x60);
          *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)(puVar10 + -0x58);
          *(undefined8 *)(puVar10 + -0x50) = *(undefined8 *)(puVar10 + -0x50);
          *(undefined8 *)(puVar10 + -0x48) = *(undefined8 *)(puVar10 + -0x48);
          *(undefined8 *)(puVar10 + -0x40) = *(undefined8 *)(puVar10 + -0x40);
          *(undefined8 *)(puVar10 + -0x38) = *(undefined8 *)(puVar10 + -0x38);
          *(undefined8 *)(puVar10 + -0x30) = *(undefined8 *)(puVar10 + -0x30);
          *(undefined8 *)(puVar10 + -0x28) = *(undefined8 *)(puVar10 + -0x28);
          *(undefined8 *)(puVar10 + -0x20) = *(undefined8 *)(puVar10 + -0x20);
          *(undefined8 *)(puVar10 + -0x18) = *(undefined8 *)(puVar10 + -0x18);
          *(undefined8 *)(puVar10 + -0x10) = *(undefined8 *)(puVar10 + -0x10);
          *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
          *(ulong *)(puVar10 + -0x90) = uVar33;
          goto LAB_102c4c030;
        }
        *(undefined8 **)(puVar10 + -0x98) = puVar14;
        *(undefined8 *)(puVar10 + -0x90) = uVar15;
        puVar34 = puVar14 + (uVar33 >> 3) * 0xc;
        puVar24 = puVar14 + (uVar33 >> 3) * 0x15;
        if (uVar33 < 0x40) {
          *(int *)(puVar10 + -0x84) = iVar12;
          uVar40 = puVar14[1];
          uVar30 = puVar14[2];
          uVar32 = puVar34[1];
          uVar22 = puVar34[2];
          uVar36 = uVar30;
          if (uVar22 <= uVar30) {
            uVar36 = uVar22;
          }
          *(undefined8 *)(puVar10 + -0xa0) = uVar32;
          iVar12 = _memcmp(uVar40,uVar32,uVar36);
          uVar36 = uVar30 - uVar22;
          if (iVar12 != 0) {
            uVar36 = (long)iVar12;
          }
          uVar32 = puVar24[1];
          uVar19 = puVar24[2];
          uVar18 = uVar30;
          if (uVar19 <= uVar30) {
            uVar18 = uVar19;
          }
          iVar12 = *(int *)(puVar10 + -0x84);
          iVar13 = _memcmp(uVar40,uVar32,uVar18);
          uVar30 = uVar30 - uVar19;
          if (iVar13 != 0) {
            uVar30 = (long)iVar13;
          }
          puVar14 = *(undefined8 **)(puVar10 + -0x98);
          puVar35 = puVar14;
          if (-1 < (long)(uVar30 ^ uVar36)) {
            uVar30 = uVar22;
            if (uVar19 <= uVar22) {
              uVar30 = uVar19;
            }
            iVar13 = _memcmp(*(undefined8 *)(puVar10 + -0xa0),uVar32,uVar30);
            uVar30 = uVar22 - uVar19;
            if (iVar13 != 0) {
              uVar30 = (long)iVar13;
            }
            puVar35 = puVar24;
            if (-1 < (long)(uVar30 ^ uVar36)) {
              puVar35 = puVar34;
            }
          }
        }
        else {
          puVar35 = (undefined8 *)func_0x000102c48274(puVar14,puVar34,puVar24);
        }
        *(int *)(puVar10 + -0x84) = iVar12 + -1;
        *(ulong *)(puVar10 + -0xa0) = uVar33;
        lVar37 = *(long *)(puVar10 + -0x90);
        if (lVar37 == 0) break;
        puVar34 = (undefined8 *)((long)puVar14 + ((long)puVar35 - (long)puVar14));
        uVar30 = *(ulong *)(lVar37 + 0x10);
        uVar22 = puVar34[2];
        uVar36 = uVar30;
        if (uVar22 <= uVar30) {
          uVar36 = uVar22;
        }
        iVar12 = _memcmp(*(undefined8 *)(lVar37 + 8),puVar34[1],uVar36);
        lVar37 = uVar30 - uVar22;
        if (iVar12 != 0) {
          lVar37 = (long)iVar12;
        }
        if (lVar37 < 0) break;
        uVar36 = 0;
        uVar32 = puVar14[1];
        uVar40 = *puVar14;
        *(undefined8 *)(puVar10 + -0x70) = puVar14[2];
        *(undefined8 *)(puVar10 + -0x78) = uVar32;
        *(undefined8 *)(puVar10 + -0x80) = uVar40;
        uVar32 = puVar34[1];
        uVar40 = *puVar34;
        puVar14[2] = puVar34[2];
        puVar14[1] = uVar32;
        *puVar14 = uVar40;
        uVar32 = *(undefined8 *)(puVar10 + -0x78);
        uVar40 = *(undefined8 *)(puVar10 + -0x80);
        puVar34[2] = *(undefined8 *)(puVar10 + -0x70);
        puVar34[1] = uVar32;
        *puVar34 = uVar40;
        uVar40 = puVar14[3];
        *(undefined8 *)(puVar10 + -0x78) = puVar14[4];
        *(undefined8 *)(puVar10 + -0x80) = uVar40;
        *(undefined8 *)(puVar10 + -0x70) = puVar14[5];
        puVar34 = puVar14 + 6;
        uVar40 = puVar14[1];
        uVar30 = puVar14[2];
        lVar37 = uVar33 * 0x18 + -0x48;
        lVar28 = uVar33 * 0x18 + -0x30;
        do {
          lVar38 = lVar28;
          lVar25 = lVar37;
          uVar18 = puVar34[2];
          uVar22 = uVar30;
          if (uVar18 <= uVar30) {
            uVar22 = uVar18;
          }
          iVar12 = _memcmp(uVar40,puVar34[1],uVar22);
          uVar22 = uVar30 - uVar18;
          if (iVar12 != 0) {
            uVar22 = (long)iVar12;
          }
          puVar24 = puVar14 + uVar36 * 3 + 3;
          uVar32 = puVar24[2];
          uVar15 = *puVar24;
          puVar34[-2] = puVar24[1];
          puVar34[-3] = uVar15;
          puVar34[-1] = uVar32;
          uVar15 = puVar34[1];
          uVar32 = *puVar34;
          uVar36 = uVar36 - ((long)~uVar22 >> 0x3f);
          puVar24[2] = puVar34[2];
          puVar24[1] = uVar15;
          *puVar24 = uVar32;
          puVar34 = puVar34 + 3;
          lVar37 = lVar25 + -0x18;
          lVar28 = lVar38 + -0x18;
        } while (puVar34 < puVar14 + uVar33 * 3);
        do {
          puVar24 = (undefined8 *)(puVar10 + -0x80);
          if (lVar25 != 0) {
            puVar24 = puVar34;
          }
          uVar22 = puVar24[2];
          uVar33 = uVar30;
          if (uVar22 <= uVar30) {
            uVar33 = uVar22;
          }
          iVar12 = _memcmp(uVar40,puVar24[1],uVar33);
          uVar33 = uVar30 - uVar22;
          if (iVar12 != 0) {
            uVar33 = (long)iVar12;
          }
          puVar35 = puVar14 + uVar36 * 3 + 3;
          uVar32 = puVar35[2];
          uVar15 = *puVar35;
          puVar34[-2] = puVar35[1];
          puVar34[-3] = uVar15;
          puVar34[-1] = uVar32;
          uVar15 = puVar24[1];
          uVar32 = *puVar24;
          puVar35[2] = puVar24[2];
          puVar35[1] = uVar15;
          *puVar35 = uVar32;
          uVar36 = uVar36 - ((long)~uVar33 >> 0x3f);
          puVar34 = puVar34 + 3;
          lVar25 = lVar25 + -0x18;
          lVar38 = lVar38 + -0x18;
        } while (lVar38 != 0);
        uVar22 = *(ulong *)(puVar10 + -0xa0);
        if (uVar22 <= uVar36) goto LAB_102c4c62c;
        uVar15 = 0;
        puVar14 = *(undefined8 **)(puVar10 + -0x98);
        puVar34 = puVar14 + uVar36 * 3;
        uVar32 = puVar14[1];
        uVar40 = *puVar14;
        *(undefined8 *)(puVar10 + -0x70) = puVar14[2];
        *(undefined8 *)(puVar10 + -0x78) = uVar32;
        *(undefined8 *)(puVar10 + -0x80) = uVar40;
        uVar32 = puVar34[1];
        uVar40 = *puVar34;
        puVar14[2] = puVar34[2];
        puVar14[1] = uVar32;
        *puVar14 = uVar40;
        uVar32 = *(undefined8 *)(puVar10 + -0x78);
        uVar40 = *(undefined8 *)(puVar10 + -0x80);
        puVar34[2] = *(undefined8 *)(puVar10 + -0x70);
        puVar34[1] = uVar32;
        *puVar34 = uVar40;
        uVar22 = ~uVar36 + uVar22;
        auVar44._8_8_ = uVar22;
        auVar44._0_8_ = puVar34 + 3;
        uVar30 = (ulong)*(uint *)(puVar10 + -0x84);
      }
      uVar36 = 0;
      puVar34 = (undefined8 *)((long)puVar14 + ((long)puVar35 - (long)puVar14));
      uVar32 = puVar14[1];
      uVar40 = *puVar14;
      *(undefined8 *)(puVar10 + -0x70) = puVar14[2];
      *(undefined8 *)(puVar10 + -0x78) = uVar32;
      *(undefined8 *)(puVar10 + -0x80) = uVar40;
      uVar32 = puVar34[1];
      uVar40 = *puVar34;
      puVar14[2] = puVar34[2];
      puVar14[1] = uVar32;
      *puVar14 = uVar40;
      uVar32 = *(undefined8 *)(puVar10 + -0x78);
      uVar40 = *(undefined8 *)(puVar10 + -0x80);
      puVar34[2] = *(undefined8 *)(puVar10 + -0x70);
      puVar34[1] = uVar32;
      *puVar34 = uVar40;
      uVar40 = puVar14[3];
      *(undefined8 *)(puVar10 + -0x78) = puVar14[4];
      *(undefined8 *)(puVar10 + -0x80) = uVar40;
      *(undefined8 *)(puVar10 + -0x70) = puVar14[5];
      puVar24 = puVar14 + uVar33 * 3;
      puVar34 = puVar14 + 6;
      uVar40 = puVar14[1];
      uVar30 = puVar14[2];
      lVar37 = uVar33 * 0x18 + -0x30;
      lVar28 = uVar33 * 0x18 + -0x48;
      do {
        lVar38 = lVar28;
        lVar25 = lVar37;
        uVar22 = puVar34[2];
        uVar33 = uVar22;
        if (uVar30 <= uVar22) {
          uVar33 = uVar30;
        }
        iVar12 = _memcmp(puVar34[1],uVar40,uVar33);
        lVar37 = uVar22 - uVar30;
        if (iVar12 != 0) {
          lVar37 = (long)iVar12;
        }
        puVar35 = puVar14 + uVar36 * 3 + 3;
        uVar32 = puVar35[2];
        uVar15 = *puVar35;
        puVar34[-2] = puVar35[1];
        puVar34[-3] = uVar15;
        puVar34[-1] = uVar32;
        uVar15 = puVar34[1];
        uVar32 = *puVar34;
        uVar36 = uVar36 - (lVar37 >> 0x3f);
        puVar35[2] = puVar34[2];
        puVar35[1] = uVar15;
        *puVar35 = uVar32;
        puVar34 = puVar34 + 3;
        lVar37 = lVar25 + -0x18;
        lVar28 = lVar38 + -0x18;
      } while (puVar34 < puVar24);
      do {
        puVar35 = (undefined8 *)(puVar10 + -0x80);
        if (lVar38 != 0) {
          puVar35 = puVar34;
        }
        uVar33 = puVar35[2];
        lVar28 = uVar33 - uVar30;
        if (uVar30 <= uVar33) {
          uVar33 = uVar30;
        }
        iVar12 = _memcmp(puVar35[1],uVar40,uVar33);
        lVar37 = lVar28;
        if (iVar12 != 0) {
          lVar37 = (long)iVar12;
        }
        puVar27 = puVar14 + uVar36 * 3 + 3;
        uVar32 = puVar27[2];
        uVar15 = *puVar27;
        puVar34[-2] = puVar27[1];
        puVar34[-3] = uVar15;
        puVar34[-1] = uVar32;
        uVar15 = puVar35[1];
        uVar32 = *puVar35;
        puVar27[2] = puVar35[2];
        puVar27[1] = uVar15;
        *puVar27 = uVar32;
        uVar36 = uVar36 - (lVar37 >> 0x3f);
        puVar34 = puVar34 + 3;
        lVar38 = lVar38 + -0x18;
        lVar25 = lVar25 + -0x18;
      } while (lVar25 != 0);
      uVar30 = *(ulong *)(puVar10 + -0xa0);
      if (uVar30 <= uVar36) {
LAB_102c4c62c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102c4c630);
        (*pcVar8)();
      }
      puVar14 = *(undefined8 **)(puVar10 + -0x98);
      auVar44._8_8_ = uVar36;
      auVar44._0_8_ = puVar14;
      uVar15 = *(undefined8 *)(puVar10 + -0x90);
      puVar35 = puVar14 + uVar36 * 3;
      uVar41 = puVar14[1];
      uVar32 = *puVar14;
      *(undefined8 *)(puVar10 + -0x70) = puVar14[2];
      *(undefined8 *)(puVar10 + -0x78) = uVar41;
      *(undefined8 *)(puVar10 + -0x80) = uVar32;
      uVar41 = puVar35[1];
      uVar32 = *puVar35;
      puVar14[2] = puVar35[2];
      puVar14[1] = uVar41;
      *puVar14 = uVar32;
      uVar41 = *(undefined8 *)(puVar10 + -0x78);
      uVar32 = *(undefined8 *)(puVar10 + -0x80);
      puVar35[2] = *(undefined8 *)(puVar10 + -0x70);
      puVar35[1] = uVar41;
      *puVar35 = uVar32;
      puVar14 = puVar35 + 3;
      lVar37 = uVar30 + ~uVar36;
      uVar30 = (ulong)*(uint *)(puVar10 + -0x84);
      uVar32 = 0x102c4c5fc;
      puVar10 = puVar10 + -0xa0;
      uVar33 = uVar30;
    } while( true );
  }
  goto LAB_102c4bf10;
LAB_102c4c030:
  uVar30 = lVar37 - 1;
  uVar36 = uVar30 - uVar33;
  if (uVar30 < uVar33) {
    uVar36 = 0;
    puVar34 = puVar14 + uVar30 * 3;
    uVar40 = puVar14[2];
    uVar41 = puVar14[1];
    uVar15 = *puVar14;
    uVar32 = puVar34[2];
    uVar42 = *puVar34;
    puVar14[1] = puVar34[1];
    *puVar14 = uVar42;
    puVar14[2] = uVar32;
    puVar34[1] = uVar41;
    *puVar34 = uVar15;
    puVar34[2] = uVar40;
  }
  *(ulong *)(puVar10 + -0x88) = uVar30;
  if (uVar30 <= uVar33) {
    uVar33 = uVar30;
  }
  while (uVar30 = (uVar36 & 0x3fffffffffffffff) << 1 | 1, uVar30 < uVar33) {
    uVar22 = uVar36 * 2 + 2;
    if (uVar22 < uVar33) {
      uVar19 = puVar14[uVar30 * 3 + 2];
      uVar23 = puVar14[uVar22 * 3 + 2];
      uVar18 = uVar19;
      if (uVar23 <= uVar19) {
        uVar18 = uVar23;
      }
      iVar12 = _memcmp(puVar14[uVar30 * 3 + 1],puVar14[uVar22 * 3 + 1],uVar18);
      lVar37 = uVar19 - uVar23;
      if (iVar12 != 0) {
        lVar37 = (long)iVar12;
      }
      uVar30 = uVar30 - (lVar37 >> 0x3f);
    }
    puVar34 = puVar14 + uVar36 * 3;
    puVar24 = puVar14 + uVar30 * 3;
    uVar40 = puVar34[1];
    uVar22 = puVar34[2];
    uVar32 = puVar24[1];
    uVar18 = puVar24[2];
    uVar36 = uVar22;
    if (uVar18 <= uVar22) {
      uVar36 = uVar18;
    }
    iVar12 = _memcmp(uVar40,uVar32,uVar36);
    lVar37 = uVar22 - uVar18;
    if (iVar12 != 0) {
      lVar37 = (long)iVar12;
    }
    if (-1 < lVar37) break;
    uVar15 = *puVar34;
    *puVar34 = *puVar24;
    puVar34[1] = uVar32;
    *puVar24 = uVar15;
    puVar24[1] = uVar40;
    puVar34[2] = uVar18;
    puVar24[2] = uVar22;
    uVar36 = uVar30;
  }
  uVar33 = *(ulong *)(puVar10 + -0x90);
  lVar37 = *(long *)(puVar10 + -0x88);
  if (lVar37 == 0) {
    return;
  }
  goto LAB_102c4c030;
LAB_102c49250:
  do {
    uVar18 = uVar33 + 1;
    puVar34 = puVar14 + uVar33 * 3;
    puVar24 = (undefined8 *)(puVar10 + uVar33 * 0x18 + -0x4f0);
    uVar40 = *puVar34;
    puVar24[1] = puVar34[1];
    *puVar24 = uVar40;
    uVar19 = puVar34[2];
    puVar24[2] = uVar19;
    uVar40 = puVar24[1];
    uVar22 = puVar24[-1];
    uVar33 = uVar19;
    if (uVar22 <= uVar19) {
      uVar33 = uVar22;
    }
    iVar12 = _memcmp(uVar40,puVar24[-2],uVar33);
    lVar28 = uVar19 - uVar22;
    if (iVar12 != 0) {
      lVar28 = (long)iVar12;
    }
    if (lVar28 < 0) {
      uVar32 = *puVar24;
      lVar28 = lVar37;
      do {
        lVar38 = lVar28;
        puVar34 = (undefined8 *)(puVar10 + -0x4f0);
        puVar14 = (undefined8 *)((long)puVar34 + lVar38);
        puVar14[1] = puVar14[-2];
        *puVar14 = puVar14[-3];
        puVar14[2] = puVar14[-1];
        if (lVar38 + -0x18 == 0) goto LAB_102c4922c;
        uVar33 = *(ulong *)(puVar10 + lVar38 + -0x510);
        uVar36 = uVar19;
        if (uVar33 <= uVar19) {
          uVar36 = uVar33;
        }
        iVar12 = _memcmp(uVar40,*(undefined8 *)(puVar10 + lVar38 + -0x518),uVar36);
        lVar25 = uVar19 - uVar33;
        if (iVar12 != 0) {
          lVar25 = (long)iVar12;
        }
        lVar28 = lVar38 + -0x18;
      } while (lVar25 < 0);
      puVar34 = (undefined8 *)(puVar10 + lVar38 + -0x508);
LAB_102c4922c:
      puVar14 = *(undefined8 **)(puVar10 + -0x4f8);
      *puVar34 = uVar32;
      *(undefined8 *)(puVar10 + lVar38 + -0x500) = uVar40;
      *(ulong *)(puVar10 + lVar38 + -0x4f8) = uVar19;
      uVar36 = *(ulong *)(puVar10 + -0x520);
    }
    lVar37 = lVar37 + 0x18;
    uVar33 = uVar18;
  } while (uVar18 < uVar36);
LAB_102c492f4:
  puVar34 = *(undefined8 **)(puVar10 + -0x518);
  puVar24 = puVar34;
  if (uVar30 < *(ulong *)(puVar10 + -0x500)) {
    lVar37 = *(long *)(puVar10 + -0x510);
    lVar28 = 0x18;
    do {
      uVar33 = uVar30 + 1;
      puVar35 = (undefined8 *)(*(long *)(puVar10 + -0x508) + uVar30 * 0x18);
      puVar27 = puVar24 + uVar30 * 3;
      uVar40 = *puVar35;
      puVar27[1] = puVar35[1];
      *puVar27 = uVar40;
      uVar22 = puVar35[2];
      puVar27[2] = uVar22;
      uVar40 = puVar27[1];
      uVar30 = puVar27[-1];
      uVar36 = uVar22;
      if (uVar30 <= uVar22) {
        uVar36 = uVar30;
      }
      iVar12 = _memcmp(uVar40,puVar27[-2],uVar36);
      lVar38 = uVar22 - uVar30;
      if (iVar12 != 0) {
        lVar38 = (long)iVar12;
      }
      if (lVar38 < 0) {
        *(undefined8 *)(puVar10 + -0x510) = *puVar27;
        puVar35 = puVar34;
        lVar38 = lVar28;
        do {
          puVar27 = puVar35 + lVar37;
          puVar27[1] = puVar27[-2];
          *puVar27 = puVar27[-3];
          puVar27[2] = puVar27[-1];
          if (lVar37 * 8 - lVar38 == 0) {
            puVar35 = *(undefined8 **)(puVar10 + -0x518);
            puVar14 = *(undefined8 **)(puVar10 + -0x4f8);
            puVar24 = puVar35;
            goto LAB_102c49328;
          }
          uVar30 = puVar27[-4];
          uVar36 = uVar22;
          if (uVar30 <= uVar22) {
            uVar36 = uVar30;
          }
          iVar12 = _memcmp(uVar40,puVar27[-5],uVar36);
          lVar25 = uVar22 - uVar30;
          if (iVar12 != 0) {
            lVar25 = (long)iVar12;
          }
          puVar35 = puVar35 + -3;
          lVar38 = lVar38 + 0x18;
        } while (lVar25 < 0);
        puVar35 = puVar35 + lVar37;
        puVar14 = *(undefined8 **)(puVar10 + -0x4f8);
        puVar24 = *(undefined8 **)(puVar10 + -0x518);
LAB_102c49328:
        *puVar35 = *(undefined8 *)(puVar10 + -0x510);
        puVar27[-2] = uVar40;
        puVar27[-1] = uVar22;
      }
      lVar28 = lVar28 + -0x18;
      puVar34 = puVar34 + 3;
      uVar30 = uVar33;
    } while (uVar33 < *(ulong *)(puVar10 + -0x500));
  }
  lVar37 = *(long *)(puVar10 + -0x528) * 0x18;
  puVar34 = (undefined8 *)(puVar10 + -0x4f0);
  puVar35 = puVar34 + *(long *)(puVar10 + -0x528) * 3 + -3;
  puVar27 = puVar24 + -3;
  lVar28 = *(long *)(puVar10 + -0x520);
  do {
    puVar29 = puVar14;
    lVar37 = lVar37 + -0x18;
    puVar14 = (undefined8 *)(*(long *)(puVar10 + -0x4f8) + lVar37);
    uVar30 = puVar24[2];
    uVar33 = puVar34[2];
    uVar36 = uVar30;
    if (uVar33 <= uVar30) {
      uVar36 = uVar33;
    }
    iVar12 = _memcmp(puVar24[1],puVar34[1],uVar36);
    uVar36 = uVar30 - uVar33;
    if (iVar12 != 0) {
      uVar36 = (long)iVar12;
    }
    puVar1 = puVar34;
    if (0x7fffffffffffffff < uVar36) {
      puVar1 = puVar24;
    }
    uVar40 = *puVar1;
    puVar29[1] = puVar1[1];
    *puVar29 = uVar40;
    puVar29[2] = puVar1[2];
    puVar24 = puVar24 + ((long)uVar36 >> 0x3f) * -3;
    puVar34 = (undefined8 *)((long)puVar34 + ((ulong)~(uint)((long)uVar36 >> 0x3f) & 0x18));
    uVar30 = puVar35[2];
    uVar33 = puVar27[2];
    uVar36 = uVar30;
    if (uVar33 <= uVar30) {
      uVar36 = uVar33;
    }
    iVar12 = _memcmp(puVar35[1],puVar27[1],uVar36);
    uVar36 = uVar30 - uVar33;
    if (iVar12 != 0) {
      uVar36 = (long)iVar12;
    }
    puVar1 = puVar35;
    if (0x7fffffffffffffff < uVar36) {
      puVar1 = puVar27;
    }
    uVar40 = *puVar1;
    puVar14[1] = puVar1[1];
    *puVar14 = uVar40;
    puVar14[2] = puVar1[2];
    uVar26 = (uint)((long)uVar36 >> 0x3f);
    puVar35 = puVar35 + (long)(int)~uVar26 * 3;
    puVar27 = puVar27 + (long)(int)uVar26 * 3;
    lVar28 = lVar28 + -1;
    puVar14 = puVar29 + 3;
  } while (lVar28 != 0);
  if ((*(ulong *)(puVar10 + -0x528) & 1) != 0) {
    bVar11 = puVar27 + 3 <= puVar34;
    puVar14 = puVar34;
    if (bVar11) {
      puVar14 = puVar24;
    }
    uVar40 = *puVar14;
    puVar29[4] = puVar14[1];
    puVar29[3] = uVar40;
    puVar29[5] = puVar14[2];
    lVar37 = 0x18;
    if (bVar11) {
      lVar37 = 0;
    }
    puVar34 = (undefined8 *)((long)puVar34 + lVar37);
    lVar37 = 0;
    if (bVar11) {
      lVar37 = 0x18;
    }
    puVar24 = (undefined8 *)((long)puVar24 + lVar37);
  }
  if (puVar34 == puVar27 + 3 && puVar24 == puVar35 + 3) {
    return;
  }
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x102c49550);
  (*pcVar8)();
__ZN4core5slice4sort6stable9quicksort9quicksort17hf0092fb5a5ca0746E:
  *(ulong *)((long)ppuVar9 + -0x60) = uVar30;
  *(ulong *)((long)ppuVar9 + -0x58) = param_1;
  *(ulong *)((long)ppuVar9 + -0x50) = uVar33;
  *(ulong *)((long)ppuVar9 + -0x48) = uVar36;
  *(ulong *)((long)ppuVar9 + -0x40) = param_2;
  *(long *)((long)ppuVar9 + -0x38) = lVar37;
  *(undefined8 **)((long)ppuVar9 + -0x30) = puVar34;
  *(ulong *)((long)ppuVar9 + -0x28) = uVar22;
  *(ulong *)((long)ppuVar9 + -0x20) = uVar18;
  *(undefined8 **)((long)ppuVar9 + -0x18) = param_3;
  *(undefined1 **)((long)ppuVar9 + -0x10) = puVar39;
  *(undefined8 *)((long)ppuVar9 + -8) = uVar40;
  puVar39 = (undefined1 *)((long)ppuVar9 + -0x10);
  *(undefined8 *)((long)ppuVar9 + -0x308) = param_7;
  *(undefined1 **)((long)ppuVar9 + -0x2f8) = param_6;
  *(undefined **)((long)ppuVar9 + -0x2f0) = puVar16;
  if (0x20 < auVar43._8_8_) {
    *(undefined8 **)((long)ppuVar9 + -800) = puVar14 + -0x4e;
    param_2 = 0x270;
    do {
      uVar36 = auVar43._8_8_;
      uVar33 = auVar43._0_8_;
      iVar12 = (int)param_5;
      *(ulong *)((long)ppuVar9 + -0x2e0) = uVar33;
      if (iVar12 == 0) {
        func_0x000102c4a248(uVar33,uVar36,puVar14,*(undefined8 *)((long)ppuVar9 + -0x2f0),1,
                            *(undefined8 *)((long)ppuVar9 + -0x308));
        return;
      }
      uVar22 = uVar33 + (uVar36 >> 3) * 0x9c0;
      uVar30 = uVar33 + (uVar36 >> 3) * 0x1110;
      if (uVar36 < 0x40) {
        *(int *)((long)ppuVar9 + -0x2e8) = iVar12;
        uVar40 = *(undefined8 *)(uVar33 + 0x20);
        uVar19 = *(ulong *)(uVar33 + 0x28);
        uVar32 = *(undefined8 *)(uVar22 + 0x20);
        uVar23 = *(ulong *)(uVar22 + 0x28);
        uVar18 = uVar19;
        if (uVar23 <= uVar19) {
          uVar18 = uVar23;
        }
        *(undefined8 *)((long)ppuVar9 + -0x310) = uVar32;
        iVar12 = _memcmp(uVar40,uVar32,uVar18);
        lVar37 = uVar19 - uVar23;
        if (iVar12 != 0) {
          lVar37 = (long)iVar12;
        }
        *(long *)((long)ppuVar9 + -0x300) = lVar37;
        if (lVar37 == 0) {
          uVar2 = *(ulong *)(uVar33 + 0x10);
          uVar3 = *(ulong *)(uVar22 + 0x10);
          uVar18 = uVar2;
          if (uVar3 <= uVar2) {
            uVar18 = uVar3;
          }
          iVar12 = _memcmp(*(undefined8 *)(uVar33 + 8),*(undefined8 *)(uVar22 + 8),uVar18);
          lVar37 = uVar2 - uVar3;
          if (iVar12 != 0) {
            lVar37 = (long)iVar12;
          }
          *(long *)((long)ppuVar9 + -0x300) = lVar37;
        }
        uVar32 = *(undefined8 *)(uVar30 + 0x20);
        uVar18 = *(ulong *)(uVar30 + 0x28);
        uVar33 = uVar19;
        if (uVar18 <= uVar19) {
          uVar33 = uVar18;
        }
        *(undefined8 *)((long)ppuVar9 + -0x318) = uVar32;
        iVar12 = _memcmp(uVar40,uVar32,uVar33);
        uVar19 = uVar19 - uVar18;
        if (iVar12 != 0) {
          uVar19 = (long)iVar12;
        }
        if (uVar19 == 0) {
          uVar19 = *(ulong *)(*(long *)((long)ppuVar9 + -0x2e0) + 0x10);
          uVar2 = *(ulong *)(uVar30 + 0x10);
          uVar33 = uVar19;
          if (uVar2 <= uVar19) {
            uVar33 = uVar2;
          }
          iVar12 = _memcmp(*(undefined8 *)(*(long *)((long)ppuVar9 + -0x2e0) + 8),
                           *(undefined8 *)(uVar30 + 8),uVar33);
          uVar19 = uVar19 - uVar2;
          if (iVar12 != 0) {
            uVar19 = (long)iVar12;
          }
          uVar19 = uVar19 ^ *(ulong *)((long)ppuVar9 + -0x300);
          uVar33 = *(ulong *)((long)ppuVar9 + -0x2e0);
          iVar12 = *(int *)((long)ppuVar9 + -0x2e8);
        }
        else {
          uVar19 = uVar19 ^ *(ulong *)((long)ppuVar9 + -0x300);
          uVar33 = *(ulong *)((long)ppuVar9 + -0x2e0);
          iVar12 = *(int *)((long)ppuVar9 + -0x2e8);
        }
        param_1 = uVar33;
        if (-1 < (long)uVar19) {
          uVar33 = uVar23;
          if (uVar18 <= uVar23) {
            uVar33 = uVar18;
          }
          iVar13 = _memcmp(*(undefined8 *)((long)ppuVar9 + -0x310),
                           *(undefined8 *)((long)ppuVar9 + -0x318),uVar33);
          uVar33 = uVar23 - uVar18;
          if (iVar13 != 0) {
            uVar33 = (long)iVar13;
          }
          if (uVar33 == 0) {
            uVar18 = *(ulong *)(uVar22 + 0x10);
            uVar19 = *(ulong *)(uVar30 + 0x10);
            uVar33 = uVar18;
            if (uVar19 <= uVar18) {
              uVar33 = uVar19;
            }
            iVar13 = _memcmp(*(undefined8 *)(uVar22 + 8),*(undefined8 *)(uVar30 + 8),uVar33);
            uVar33 = uVar18 - uVar19;
            if (iVar13 != 0) {
              uVar33 = (long)iVar13;
            }
          }
          if (-1 < (long)(uVar33 ^ *(ulong *)((long)ppuVar9 + -0x300))) {
            uVar30 = uVar22;
          }
          uVar33 = *(ulong *)((long)ppuVar9 + -0x2e0);
          param_1 = uVar30;
        }
      }
      else {
        param_1 = func_0x000102c485e8(uVar33,uVar22,uVar30);
      }
      *(ulong *)((long)ppuVar9 + -0x300) = (param_1 - uVar33 >> 4) * 0x6f96f96f96f96f97;
      _memcpy((undefined1 *)((long)ppuVar9 + -0x2d8),param_1,0x270);
      *(int *)((long)ppuVar9 + -0x2e8) = iVar12 + -1;
      uVar18 = uVar33;
      if (*(long *)((long)ppuVar9 + -0x2f8) == 0) {
LAB_102c4b5e0:
        if (*(ulong *)((long)ppuVar9 + -0x2f0) < uVar36) goto LAB_102c4be14;
        uVar22 = 0;
        puVar34 = puVar14 + uVar36 * 0x4e;
        uVar19 = *(ulong *)((long)ppuVar9 + -0x300);
        uVar30 = uVar33;
        while( true ) {
          for (; uVar30 < uVar33 + uVar19 * 0x270; uVar30 = uVar30 + 0x270) {
            uVar23 = *(ulong *)(uVar30 + 0x28);
            uVar2 = *(ulong *)(param_1 + 0x28);
            uVar18 = uVar23;
            if (uVar2 <= uVar23) {
              uVar18 = uVar2;
            }
            iVar12 = _memcmp(*(undefined8 *)(uVar30 + 0x20),*(undefined8 *)(param_1 + 0x20),uVar18);
            uVar18 = uVar23 - uVar2;
            if (iVar12 != 0) {
              uVar18 = (long)iVar12;
            }
            if (uVar18 == 0) {
              uVar23 = *(ulong *)(uVar30 + 0x10);
              uVar2 = *(ulong *)(param_1 + 0x10);
              uVar18 = uVar23;
              if (uVar2 <= uVar23) {
                uVar18 = uVar2;
              }
              iVar12 = _memcmp(*(undefined8 *)(uVar30 + 8),*(undefined8 *)(param_1 + 8),uVar18);
              uVar18 = uVar23 - uVar2;
              if (iVar12 != 0) {
                uVar18 = (long)iVar12;
              }
            }
            puVar34 = puVar34 + -0x4e;
            puVar24 = puVar14;
            if (-1 < (long)uVar18) {
              puVar24 = puVar34;
            }
            _memcpy(puVar24 + uVar22 * 0x4e,uVar30,0x270);
            uVar22 = uVar22 - ((long)uVar18 >> 0x3f);
          }
          if (uVar19 == uVar36) break;
          puVar34 = puVar34 + -0x4e;
          _memcpy(puVar34 + uVar22 * 0x4e,uVar30,0x270);
          uVar30 = uVar30 + 0x270;
          uVar33 = *(ulong *)((long)ppuVar9 + -0x2e0);
          uVar19 = uVar36;
        }
        _memcpy(*(undefined8 *)((long)ppuVar9 + -0x2e0),puVar14,uVar22 * 0x270);
        lVar37 = uVar36 - uVar22;
        if (lVar37 != 0) {
          lVar28 = *(long *)((long)ppuVar9 + -0x2e0) + uVar22 * 0x270;
          uVar30 = *(long *)((long)ppuVar9 + -800) + uVar36 * 0x270;
          lVar38 = lVar37;
          do {
            _memcpy(lVar28,uVar30,0x270);
            uVar30 = uVar30 - 0x270;
            lVar28 = lVar28 + 0x270;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
        }
        uVar33 = *(ulong *)((long)ppuVar9 + -0x2e0);
        param_5 = (undefined8 *)(ulong)*(uint *)((long)ppuVar9 + -0x2e8);
        if (uVar22 != 0) goto code_r0x000102c4b6fc;
      }
      else {
        uVar30 = *(ulong *)(*(long *)((long)ppuVar9 + -0x2f8) + 0x28);
        uVar22 = *(ulong *)(param_1 + 0x28);
        uVar18 = uVar30 - uVar22;
        if (uVar22 <= uVar30) {
          uVar30 = uVar22;
        }
        iVar12 = _memcmp(*(undefined8 *)(*(long *)((long)ppuVar9 + -0x2f8) + 0x20),
                         *(undefined8 *)(param_1 + 0x20),uVar30);
        uVar30 = uVar18;
        if (iVar12 != 0) {
          uVar30 = (long)iVar12;
        }
        if (uVar30 == 0) {
          uVar30 = *(ulong *)(*(long *)((long)ppuVar9 + -0x2f8) + 0x10);
          uVar22 = *(ulong *)(param_1 + 0x10);
          uVar18 = uVar30 - uVar22;
          if (uVar22 <= uVar30) {
            uVar30 = uVar22;
          }
          iVar12 = _memcmp(*(undefined8 *)(*(long *)((long)ppuVar9 + -0x2f8) + 8),
                           *(undefined8 *)(param_1 + 8),uVar30);
          uVar30 = uVar18;
          if (iVar12 != 0) {
            uVar30 = (long)iVar12;
          }
        }
        if ((long)uVar30 < 0) goto LAB_102c4b5e0;
      }
      if (*(ulong *)((long)ppuVar9 + -0x2f0) < uVar36) goto LAB_102c4be14;
      uVar30 = 0;
      puVar34 = puVar14 + uVar36 * 0x4e;
      uVar22 = *(ulong *)((long)ppuVar9 + -0x300);
      while( true ) {
        lVar37 = *(long *)((long)ppuVar9 + -0x2e0);
        for (; uVar33 < lVar37 + uVar22 * 0x270; uVar33 = uVar33 + 0x270) {
          uVar19 = *(ulong *)(param_1 + 0x28);
          uVar23 = *(ulong *)(uVar33 + 0x28);
          uVar18 = uVar19;
          if (uVar23 <= uVar19) {
            uVar18 = uVar23;
          }
          iVar12 = _memcmp(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(uVar33 + 0x20),uVar18);
          uVar18 = uVar19 - uVar23;
          if (iVar12 != 0) {
            uVar18 = (long)iVar12;
          }
          if (uVar18 == 0) {
            uVar19 = *(ulong *)(param_1 + 0x10);
            uVar23 = *(ulong *)(uVar33 + 0x10);
            uVar18 = uVar19;
            if (uVar23 <= uVar19) {
              uVar18 = uVar23;
            }
            iVar12 = _memcmp(*(undefined8 *)(param_1 + 8),*(undefined8 *)(uVar33 + 8),uVar18);
            uVar18 = uVar19 - uVar23;
            if (iVar12 != 0) {
              uVar18 = (long)iVar12;
            }
          }
          puVar34 = puVar34 + -0x4e;
          puVar24 = puVar14;
          if (0x7fffffffffffffff < uVar18) {
            puVar24 = puVar34;
          }
          _memcpy(puVar24 + uVar30 * 0x4e,uVar33,0x270);
          uVar30 = uVar30 + ((uint)(uVar18 >> 0x3f) ^ 1);
        }
        if (uVar22 == uVar36) break;
        puVar34 = puVar34 + -0x4e;
        _memcpy(puVar14 + uVar30 * 0x4e,uVar33,0x270);
        uVar30 = uVar30 + 1;
        uVar33 = uVar33 + 0x270;
        uVar22 = uVar36;
      }
      lVar37 = *(long *)((long)ppuVar9 + -0x2e0);
      _memcpy(lVar37,puVar14,uVar30 * 0x270);
      uVar33 = uVar36 - uVar30;
      if (uVar33 == 0) {
        return;
      }
      lVar37 = lVar37 + uVar30 * 0x270;
      auVar43._8_8_ = uVar33;
      auVar43._0_8_ = lVar37;
      lVar38 = *(long *)((long)ppuVar9 + -800) + uVar36 * 0x270;
      lVar28 = lVar37;
      uVar18 = uVar33;
      do {
        _memcpy(lVar28,lVar38,0x270);
        lVar38 = lVar38 + -0x270;
        lVar28 = lVar28 + 0x270;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
      if (uVar36 < uVar30) {
        uVar40 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                           (uVar30,uVar36,uVar36,&UNK_10b299ec0);
        _memcpy(lVar37,puVar14,uVar33 * 0x270);
        auVar44 = __Unwind_Resume(uVar40);
        uVar18 = auVar44._8_8_;
        lVar38 = auVar44._0_8_;
        *(ulong *)((long)ppuVar9 + -0x3a0) = uVar22;
        *(undefined8 *)((long)ppuVar9 + -0x398) = 0;
        *(ulong *)((long)ppuVar9 + -0x390) = uVar30;
        *(ulong *)((long)ppuVar9 + -0x388) = uVar36;
        *(undefined8 *)((long)ppuVar9 + -0x380) = 0x270;
        *(long *)((long)ppuVar9 + -0x378) = lVar28;
        *(undefined8 *)((long)ppuVar9 + -0x370) = uVar40;
        *(ulong *)((long)ppuVar9 + -0x368) = uVar33;
        *(long *)((long)ppuVar9 + -0x360) = lVar37;
        *(undefined8 **)((long)ppuVar9 + -0x358) = puVar14;
        *(undefined1 **)((long)ppuVar9 + -0x350) = puVar39;
        *(undefined8 *)((long)ppuVar9 + -0x348) = 0x102c4be50;
        if (uVar18 < 2) {
          return;
        }
        uVar33 = *(ulong *)(lVar38 + 0x20);
        uVar22 = *(ulong *)(lVar38 + 0x28);
        uVar30 = *(ulong *)(lVar38 + 0x10);
        uVar36 = uVar22;
        if (uVar30 <= uVar22) {
          uVar36 = uVar30;
        }
        iVar12 = _memcmp(uVar33,*(undefined8 *)(lVar38 + 8),uVar36);
        lVar37 = uVar22 - uVar30;
        if (iVar12 != 0) {
          lVar37 = (long)iVar12;
        }
        if (lVar37 < 0) {
          if (uVar18 != 2) {
            puVar31 = (ulong *)(lVar38 + 0x40);
            uVar36 = 2;
            goto LAB_102c4bfb0;
          }
        }
        else if (uVar18 != 2) {
          puVar31 = (ulong *)(lVar38 + 0x40);
          uVar36 = 2;
          goto LAB_102c4bebc;
        }
        uVar36 = 2;
        goto LAB_102c4bf08;
      }
      *(undefined8 *)((long)ppuVar9 + -0x2f8) = 0;
      param_5 = (undefined8 *)(ulong)*(uint *)((long)ppuVar9 + -0x2e8);
      if (uVar33 < 0x21) break;
    } while( true );
  }
  uVar36 = auVar43._8_8_;
  lVar37 = auVar43._0_8_;
  if (uVar36 < 2) {
    return;
  }
  if (*(ulong *)((long)ppuVar9 + -0x2f0) < uVar36 + 0x10) goto LAB_102c4be14;
  uVar30 = uVar36 >> 1;
  lVar28 = lVar37 + uVar30 * 0x270;
  puVar34 = puVar14 + uVar30 * 0x4e;
  *(undefined8 **)((long)ppuVar9 + -0x310) = puVar34;
  *(long *)((long)ppuVar9 + -0x330) = lVar28;
  if (uVar36 < 8) {
    _memcpy(puVar14,lVar37,0x270);
    _memcpy(puVar34,lVar28,0x270);
    *(ulong *)((long)ppuVar9 + -0x338) = uVar36 - uVar30;
    *(undefined8 *)((long)ppuVar9 + -0x318) = 1;
    *(ulong *)((long)ppuVar9 + -0x2e8) = uVar30;
    *(long *)((long)ppuVar9 + -0x2e0) = lVar37;
    if (1 < uVar30) goto LAB_102c4b8d4;
  }
  else {
    func_0x000102c48f00(lVar37,puVar14);
    func_0x000102c48f00(lVar28,puVar34);
    *(ulong *)((long)ppuVar9 + -0x338) = uVar36 - uVar30;
    *(undefined8 *)((long)ppuVar9 + -0x318) = 4;
    *(ulong *)((long)ppuVar9 + -0x2e8) = uVar30;
    *(long *)((long)ppuVar9 + -0x2e0) = lVar37;
    if (4 < uVar30) {
LAB_102c4b8d4:
      uVar33 = *(ulong *)((long)ppuVar9 + -0x318);
      lVar28 = (uVar33 & 0xffffffff) * 0x270;
      do {
        lVar38 = lVar37 + uVar33 * 0x270;
        puVar34 = puVar14 + uVar33 * 0x4e;
        *(long *)((long)ppuVar9 + -0x300) = lVar38;
        *(ulong *)((long)ppuVar9 + -0x2f8) = uVar33 + 1;
        _memcpy(puVar34,lVar38,0x270);
        uVar40 = puVar34[4];
        uVar22 = puVar34[5];
        uVar18 = puVar34[-0x49];
        uVar33 = uVar22;
        if (uVar18 <= uVar22) {
          uVar33 = uVar18;
        }
        iVar12 = _memcmp(uVar40,puVar34[-0x4a],uVar33);
        lVar38 = uVar22 - uVar18;
        if (iVar12 != 0) {
          lVar38 = (long)iVar12;
        }
        if (lVar38 == 0) {
          uVar18 = puVar34[2];
          uVar19 = puVar34[-0x4c];
          uVar33 = uVar18;
          if (uVar19 <= uVar18) {
            uVar33 = uVar19;
          }
          iVar12 = _memcmp(puVar34[1],puVar34[-0x4d],uVar33);
          lVar38 = uVar18 - uVar19;
          if (iVar12 != 0) {
            lVar38 = (long)iVar12;
          }
        }
        if (lVar38 < 0) {
          uVar32 = puVar34[1];
          *(undefined8 *)((long)ppuVar9 + -0x308) = *puVar34;
          *(undefined8 *)((long)ppuVar9 + -0x2f0) = uVar32;
          uVar30 = puVar34[2];
          *(undefined8 *)((long)ppuVar9 + -800) = puVar34[3];
          lVar37 = lVar28;
          do {
            lVar38 = (long)puVar14 + lVar37;
            _memcpy(lVar38,lVar38 + -0x270,0x270);
            lVar25 = lVar37 + -0x270;
            puVar34 = puVar14;
            if (lVar25 == 0) goto LAB_102c4b8ec;
            uVar18 = *(ulong *)(lVar38 + -0x4b8);
            uVar33 = uVar22;
            if (uVar18 <= uVar22) {
              uVar33 = uVar18;
            }
            iVar12 = _memcmp(uVar40,*(undefined8 *)(lVar38 + -0x4c0),uVar33);
            lVar20 = uVar22 - uVar18;
            if (iVar12 != 0) {
              lVar20 = (long)iVar12;
            }
            if (lVar20 == 0) {
              uVar18 = *(ulong *)((long)puVar14 + lVar37 + -0x4d0);
              uVar33 = uVar30;
              if (uVar18 <= uVar30) {
                uVar33 = uVar18;
              }
              iVar12 = _memcmp(*(undefined8 *)((long)ppuVar9 + -0x2f0),
                               *(undefined8 *)((long)puVar14 + lVar37 + -0x4d8),uVar33);
              lVar20 = uVar30 - uVar18;
              if (iVar12 != 0) {
                lVar20 = (long)iVar12;
              }
            }
            lVar37 = lVar25;
          } while (lVar20 < 0);
          puVar34 = (undefined8 *)((long)puVar14 + lVar25);
LAB_102c4b8ec:
          *puVar34 = *(undefined8 *)((long)ppuVar9 + -0x308);
          *(undefined8 *)(lVar38 + -0x268) = *(undefined8 *)((long)ppuVar9 + -0x2f0);
          *(ulong *)(lVar38 + -0x260) = uVar30;
          *(undefined8 *)(lVar38 + -600) = *(undefined8 *)((long)ppuVar9 + -800);
          *(undefined8 *)(lVar38 + -0x250) = uVar40;
          *(ulong *)(lVar38 + -0x248) = uVar22;
          _memcpy(lVar38 + -0x240,*(long *)((long)ppuVar9 + -0x300) + 0x30,0x240);
          uVar30 = *(ulong *)((long)ppuVar9 + -0x2e8);
          lVar37 = *(long *)((long)ppuVar9 + -0x2e0);
        }
        lVar28 = lVar28 + 0x270;
        uVar33 = *(ulong *)((long)ppuVar9 + -0x2f8);
      } while (uVar33 < uVar30);
    }
  }
  uVar30 = *(ulong *)((long)ppuVar9 + -0x318);
  puVar34 = *(undefined8 **)((long)ppuVar9 + -0x310);
  uVar33 = *(ulong *)((long)ppuVar9 + -0x338);
  lVar37 = *(long *)((long)ppuVar9 + -0x330);
  if (uVar30 < uVar33) {
    uVar22 = uVar30 + 1;
    lVar28 = (uVar30 & 0xffffffff) * 0x270;
    *(undefined8 *)((long)ppuVar9 + -0x300) = 0x270;
    *(undefined8 **)((long)ppuVar9 + -0x2f8) = puVar34;
    do {
      lVar38 = lVar37 + uVar30 * 0x270;
      puVar34 = puVar34 + uVar30 * 0x4e;
      *(long *)((long)ppuVar9 + -0x308) = lVar38;
      _memcpy(puVar34,lVar38,0x270);
      uVar40 = puVar34[4];
      uVar18 = puVar34[5];
      uVar19 = puVar34[-0x49];
      uVar30 = uVar18;
      if (uVar19 <= uVar18) {
        uVar30 = uVar19;
      }
      iVar12 = _memcmp(uVar40,puVar34[-0x4a],uVar30);
      lVar38 = uVar18 - uVar19;
      if (iVar12 != 0) {
        lVar38 = (long)iVar12;
      }
      if (lVar38 == 0) {
        uVar19 = puVar34[2];
        uVar23 = puVar34[-0x4c];
        uVar30 = uVar19;
        if (uVar23 <= uVar19) {
          uVar30 = uVar23;
        }
        iVar12 = _memcmp(puVar34[1],puVar34[-0x4d],uVar30);
        lVar38 = uVar19 - uVar23;
        if (iVar12 != 0) {
          lVar38 = (long)iVar12;
        }
      }
      uVar30 = uVar22;
      if (lVar38 < 0) {
        uVar32 = puVar34[1];
        *(undefined8 *)((long)ppuVar9 + -800) = *puVar34;
        *(ulong *)((long)ppuVar9 + -0x318) = uVar22;
        *(undefined8 *)((long)ppuVar9 + -0x2f0) = uVar32;
        lVar37 = *(long *)((long)ppuVar9 + -0x300);
        lVar38 = *(long *)((long)ppuVar9 + -0x2f8);
        uVar30 = puVar34[2];
        *(undefined8 *)((long)ppuVar9 + -0x328) = puVar34[3];
        do {
          lVar25 = lVar38 + lVar28;
          _memcpy(lVar25,lVar25 + -0x270,0x270);
          if (lVar28 - lVar37 == 0) {
            puVar34 = *(undefined8 **)((long)ppuVar9 + -0x310);
            goto LAB_102c4bab4;
          }
          uVar22 = *(ulong *)(lVar25 + -0x4b8);
          uVar33 = uVar18;
          if (uVar22 <= uVar18) {
            uVar33 = uVar22;
          }
          iVar12 = _memcmp(uVar40,*(undefined8 *)(lVar25 + -0x4c0),uVar33);
          lVar20 = uVar18 - uVar22;
          if (iVar12 != 0) {
            lVar20 = (long)iVar12;
          }
          if (lVar20 == 0) {
            uVar22 = *(ulong *)(lVar38 + lVar28 + -0x4d0);
            uVar33 = uVar30;
            if (uVar22 <= uVar30) {
              uVar33 = uVar22;
            }
            iVar12 = _memcmp(*(undefined8 *)((long)ppuVar9 + -0x2f0),
                             *(undefined8 *)(lVar38 + lVar28 + -0x4d8),uVar33);
            lVar20 = uVar30 - uVar22;
            if (iVar12 != 0) {
              lVar20 = (long)iVar12;
            }
          }
          lVar37 = lVar37 + 0x270;
          lVar38 = lVar38 + -0x270;
        } while (lVar20 < 0);
        puVar34 = (undefined8 *)(lVar38 + lVar28);
LAB_102c4bab4:
        *puVar34 = *(undefined8 *)((long)ppuVar9 + -800);
        *(undefined8 *)(lVar25 + -0x268) = *(undefined8 *)((long)ppuVar9 + -0x2f0);
        *(ulong *)(lVar25 + -0x260) = uVar30;
        *(undefined8 *)(lVar25 + -600) = *(undefined8 *)((long)ppuVar9 + -0x328);
        *(undefined8 *)(lVar25 + -0x250) = uVar40;
        *(ulong *)(lVar25 + -0x248) = uVar18;
        _memcpy(lVar25 + -0x240,*(long *)((long)ppuVar9 + -0x308) + 0x30,0x240);
        uVar33 = *(ulong *)((long)ppuVar9 + -0x338);
        lVar37 = *(long *)((long)ppuVar9 + -0x330);
        uVar30 = *(ulong *)((long)ppuVar9 + -0x318);
      }
      *(long *)((long)ppuVar9 + -0x300) = *(long *)((long)ppuVar9 + -0x300) + -0x270;
      *(long *)((long)ppuVar9 + -0x2f8) = *(long *)((long)ppuVar9 + -0x2f8) + 0x270;
      uVar22 = uVar30;
      if (uVar30 < uVar33) {
        uVar22 = uVar30 + 1;
      }
      puVar34 = *(undefined8 **)((long)ppuVar9 + -0x310);
    } while (uVar30 < uVar33);
  }
  lVar28 = uVar36 * 0x270;
  puVar24 = puVar14 + uVar36 * 0x4e + -0x4e;
  puVar35 = puVar34 + -0x4e;
  lVar37 = *(long *)((long)ppuVar9 + -0x2e0);
  do {
    *(long *)((long)ppuVar9 + -0x2f0) = lVar28 + -0x270;
    uVar33 = puVar34[5];
    uVar22 = puVar14[5];
    uVar30 = uVar33;
    if (uVar22 <= uVar33) {
      uVar30 = uVar22;
    }
    iVar12 = _memcmp(puVar34[4],puVar14[4],uVar30);
    uVar30 = uVar33 - uVar22;
    if (iVar12 != 0) {
      uVar30 = (long)iVar12;
    }
    if (uVar30 == 0) {
      uVar33 = puVar34[2];
      uVar22 = puVar14[2];
      uVar30 = uVar33;
      if (uVar22 <= uVar33) {
        uVar30 = uVar22;
      }
      iVar12 = _memcmp(puVar34[1],puVar14[1],uVar30);
      uVar30 = uVar33 - uVar22;
      if (iVar12 != 0) {
        uVar30 = (long)iVar12;
      }
    }
    puVar27 = puVar14;
    if (0x7fffffffffffffff < uVar30) {
      puVar27 = puVar34;
    }
    *(long *)((long)ppuVar9 + -0x2f8) = lVar37;
    _memcpy(lVar37,puVar27,0x270);
    uVar22 = puVar24[5];
    uVar18 = puVar35[5];
    uVar33 = uVar22;
    if (uVar18 <= uVar22) {
      uVar33 = uVar18;
    }
    iVar12 = _memcmp(puVar24[4],puVar35[4],uVar33);
    uVar33 = uVar22 - uVar18;
    if (iVar12 != 0) {
      uVar33 = (long)iVar12;
    }
    lVar28 = *(long *)((long)ppuVar9 + -0x2f0);
    if (uVar33 == 0) {
      uVar22 = puVar24[2];
      uVar18 = puVar35[2];
      uVar33 = uVar22;
      if (uVar18 <= uVar22) {
        uVar33 = uVar18;
      }
      iVar12 = _memcmp(puVar24[1],puVar35[1],uVar33);
      uVar33 = uVar22 - uVar18;
      if (iVar12 != 0) {
        uVar33 = (long)iVar12;
      }
    }
    puVar34 = puVar34 + ((long)uVar30 >> 0x3f) * -0x4e;
    puVar14 = puVar14 + (ulong)((uint)(uVar30 >> 0x3f) ^ 1) * 0x4e;
    lVar37 = *(long *)((long)ppuVar9 + -0x2f8) + 0x270;
    puVar27 = puVar24;
    if (0x7fffffffffffffff < uVar33) {
      puVar27 = puVar35;
    }
    _memcpy(*(long *)((long)ppuVar9 + -0x2e0) + lVar28,puVar27,0x270);
    uVar26 = (uint)((long)uVar33 >> 0x3f);
    puVar24 = puVar24 + (long)(int)~uVar26 * 0x4e;
    puVar35 = puVar35 + (long)(int)uVar26 * 0x4e;
    lVar38 = *(long *)((long)ppuVar9 + -0x2e8);
    *(long *)((long)ppuVar9 + -0x2e8) = lVar38 + -1;
  } while (lVar38 + -1 != 0);
  if ((uVar36 & 1) != 0) {
    bVar11 = puVar35 + 0x4e <= puVar14;
    puVar27 = puVar14;
    if (bVar11) {
      puVar27 = puVar34;
    }
    _memcpy(lVar37,puVar27,0x270);
    puVar14 = puVar14 + (ulong)!bVar11 * 0x4e;
    puVar34 = puVar34 + (ulong)bVar11 * 0x4e;
  }
  if (puVar14 == puVar35 + 0x4e && puVar34 == puVar24 + 0x4e) {
    return;
  }
LAB_102c4be10:
  __ZN4core5slice4sort6shared9smallsort22panic_on_ord_violation17h7d8e6153c5d32400E();
LAB_102c4be14:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x102c4be18);
  (*pcVar8)();
  while( true ) {
    puVar31 = puVar31 + 3;
    uVar36 = uVar36 + 1;
    uVar33 = uVar19;
    uVar22 = uVar23;
    if (uVar18 == uVar36) break;
LAB_102c4bebc:
    uVar19 = puVar31[-1];
    uVar23 = *puVar31;
    uVar30 = uVar23;
    if (uVar22 <= uVar23) {
      uVar30 = uVar22;
    }
    iVar12 = _memcmp(uVar19,uVar33,uVar30);
    lVar28 = uVar23 - uVar22;
    if (iVar12 != 0) {
      lVar28 = (long)iVar12;
    }
    if (lVar28 < 0) goto LAB_102c4bf08;
  }
LAB_102c4bf10:
  if (lVar37 < 0) {
    uVar36 = uVar18 >> 1;
    puVar34 = (undefined8 *)(lVar38 + 0x10);
    puVar14 = (undefined8 *)(lVar38 + (uVar18 * 3 + -1) * 8);
    do {
      uVar32 = puVar34[-1];
      uVar40 = puVar34[-2];
      uVar15 = puVar14[-2];
      puVar34[-1] = puVar14[-1];
      puVar34[-2] = uVar15;
      puVar14[-1] = uVar32;
      puVar14[-2] = uVar40;
      uVar40 = *puVar34;
      *puVar34 = *puVar14;
      *puVar14 = uVar40;
      uVar36 = uVar36 - 1;
      puVar34 = puVar34 + 3;
      puVar14 = puVar14 + -3;
    } while (uVar36 != 0);
  }
  return;
}

