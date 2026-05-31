
/* WARNING: Possible PIC construction at 0x00010579778c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105797be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105797790) */
/* WARNING: Removing unreachable block (ram,0x0001057977c0) */
/* WARNING: Removing unreachable block (ram,0x00010579779c) */
/* WARNING: Removing unreachable block (ram,0x000105797800) */
/* WARNING: Removing unreachable block (ram,0x0001057978ac) */
/* WARNING: Removing unreachable block (ram,0x0001057978b0) */
/* WARNING: Removing unreachable block (ram,0x0001057978b8) */
/* WARNING: Removing unreachable block (ram,0x0001057978c0) */
/* WARNING: Removing unreachable block (ram,0x000105797814) */
/* WARNING: Removing unreachable block (ram,0x000105797818) */
/* WARNING: Removing unreachable block (ram,0x000105797828) */
/* WARNING: Removing unreachable block (ram,0x00010579784c) */
/* WARNING: Removing unreachable block (ram,0x000105797858) */
/* WARNING: Removing unreachable block (ram,0x0001057978cc) */
/* WARNING: Removing unreachable block (ram,0x0001057978d4) */
/* WARNING: Removing unreachable block (ram,0x0001057978dc) */
/* WARNING: Removing unreachable block (ram,0x0001057978e4) */
/* WARNING: Removing unreachable block (ram,0x0001057977a4) */
/* WARNING: Removing unreachable block (ram,0x0001057977ac) */
/* WARNING: Removing unreachable block (ram,0x0001057977b4) */
/* WARNING: Removing unreachable block (ram,0x0001057977bc) */
/* WARNING: Removing unreachable block (ram,0x0001057978ec) */
/* WARNING: Removing unreachable block (ram,0x0001057978f8) */
/* WARNING: Removing unreachable block (ram,0x00010579791c) */
/* WARNING: Removing unreachable block (ram,0x000105797920) */
/* WARNING: Removing unreachable block (ram,0x000105797be4) */
/* WARNING: Removing unreachable block (ram,0x000105797c18) */
/* WARNING: Removing unreachable block (ram,0x000105797bf0) */
/* WARNING: Removing unreachable block (ram,0x000105797c44) */
/* WARNING: Removing unreachable block (ram,0x000105797ca0) */
/* WARNING: Removing unreachable block (ram,0x000105797ca8) */
/* WARNING: Removing unreachable block (ram,0x000105797cb0) */
/* WARNING: Removing unreachable block (ram,0x000105797cb8) */
/* WARNING: Removing unreachable block (ram,0x000105797c58) */
/* WARNING: Removing unreachable block (ram,0x000105797c5c) */
/* WARNING: Removing unreachable block (ram,0x000105797c6c) */
/* WARNING: Removing unreachable block (ram,0x000105797c90) */
/* WARNING: Removing unreachable block (ram,0x000105797c9c) */
/* WARNING: Removing unreachable block (ram,0x000105797cc4) */
/* WARNING: Removing unreachable block (ram,0x000105797ccc) */
/* WARNING: Removing unreachable block (ram,0x000105797cd8) */
/* WARNING: Removing unreachable block (ram,0x000105797ce0) */
/* WARNING: Removing unreachable block (ram,0x000105797bf8) */
/* WARNING: Removing unreachable block (ram,0x000105797c04) */
/* WARNING: Removing unreachable block (ram,0x000105797c0c) */
/* WARNING: Removing unreachable block (ram,0x000105797c14) */
/* WARNING: Removing unreachable block (ram,0x000105797ce8) */
/* WARNING: Removing unreachable block (ram,0x000105797cf4) */

byte * __ZN4http6header4name10HeaderName10from_bytes17h99cd8f22dc0ad085E
                 (undefined8 *param_1,byte *param_2,ulong param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *extraout_x8;
  undefined1 *puVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  byte abStack_140 [64];
  undefined8 uStack_d0;
  undefined *puStack_c8;
  ulong *puStack_c0;
  undefined *puStack_b8;
  byte *pbStack_90;
  ulong uStack_88;
  ulong uStack_80;
  byte *pbStack_78;
  undefined *puStack_70;
  byte *pbStack_68;
  ulong uStack_60;
  byte *pbStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  pbVar9 = (byte *)&uStack_d0;
  if (param_3 == 0) {
LAB_105797934:
    *param_1 = 1;
    return param_2;
  }
  if (0x40 < param_3) {
    if (0xffff < param_3) goto LAB_105797934;
    pbVar9 = (byte *)_malloc(param_3);
    if (pbVar9 == (byte *)0x0) {
      uVar10 = func_0x0001087c9084(1,param_3);
      __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                (&pbStack_90);
      uVar10 = __Unwind_Resume(uVar10);
      FUN_10038df58(param_3);
      __Unwind_Resume(uVar10);
      uVar10 = func_0x000108a07bc4();
      __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
                (&pbStack_90);
      auVar18 = __Unwind_Resume(uVar10);
      param_3 = auVar18._8_8_;
      pbVar11 = auVar18._0_8_;
      if (param_3 != 0) {
        if (param_3 < 0x41) {
          if (param_3 < 4) {
            uVar12 = 0;
          }
          else {
            uVar12 = param_3 & 0x7c;
            pbVar9 = abStack_140 + 1;
            pbVar16 = pbVar11 + 1;
            uVar15 = uVar12;
            do {
              bVar5 = (&UNK_109a9ec0d)[*pbVar16];
              bVar6 = (&UNK_109a9ec0d)[pbVar16[1]];
              bVar7 = (&UNK_109a9ec0d)[pbVar16[2]];
              pbVar9[-1] = (&UNK_109a9ec0d)[pbVar16[-1]];
              *pbVar9 = bVar5;
              pbVar9[1] = bVar6;
              pbVar9[2] = bVar7;
              pbVar9 = pbVar9 + 4;
              pbVar16 = pbVar16 + 4;
              uVar15 = uVar15 - 4;
            } while (uVar15 != 0);
            pbVar9 = abStack_140;
            if (param_3 == uVar12)
            goto __ZN4http6header4name14StandardHeader10from_bytes17he3286ae997307705E;
          }
          lVar13 = param_3 - uVar12;
          pbVar16 = abStack_140 + uVar12;
          pbVar11 = pbVar11 + uVar12;
          do {
            *pbVar16 = (&UNK_109a9ec0d)[*pbVar11];
            lVar13 = lVar13 + -1;
            pbVar9 = abStack_140;
            pbVar16 = pbVar16 + 1;
            pbVar11 = pbVar11 + 1;
          } while (lVar13 != 0);
          goto __ZN4http6header4name14StandardHeader10from_bytes17he3286ae997307705E;
        }
        if (param_3 < 0x10000) {
          uVar15 = 0;
          uVar10 = 1;
          do {
            if (param_3 == uVar15) {
              uVar15 = _malloc(param_3);
              if (uVar15 == 0) {
                auVar18 = func_0x0001087c9084(1,param_3);
                param_3 = auVar18._8_8_;
                pbVar9 = auVar18._0_8_;
                goto __ZN4http6header4name14StandardHeader10from_bytes17he3286ae997307705E;
              }
              pbVar11 = (byte *)_memcpy(uVar15,pbVar11,param_3);
              uVar10 = 0;
              puVar1 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
              uVar12 = uVar15;
              if ((uVar15 & 1) == 0) {
                puVar1 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
                uVar12 = uVar15 + 1;
              }
              extraout_x8[1] = puVar1;
              extraout_x8[2] = uVar15;
              extraout_x8[3] = param_3;
              extraout_x8[4] = uVar12;
              break;
            }
            pbVar9 = pbVar11 + uVar15;
            uVar15 = uVar15 + 1;
          } while ((&UNK_109a9ec0d)[*pbVar9] != '\0');
          goto LAB_105797d2c;
        }
      }
      uVar10 = 1;
LAB_105797d2c:
      *extraout_x8 = uVar10;
      return pbVar11;
    }
    pbStack_78 = (byte *)(LZCOUNT(param_3 >> 10) * -4 + 0x101);
    uStack_88 = 0;
    uVar15 = param_3;
    pbStack_90 = pbVar9;
    uStack_80 = param_3;
    do {
      pbVar11 = pbStack_78;
      bVar5 = (&UNK_109a9e87b)[*param_2];
      if (bVar5 == 0) {
        *param_1 = 1;
        if (((ulong)pbStack_78 & 1) == 0) {
          lVar13 = *(long *)(pbStack_78 + 0x20);
          *(long *)(pbStack_78 + 0x20) = lVar13 + -1;
          LORelease();
          if (lVar13 != 1) {
            return pbStack_78;
          }
          if (*(long *)pbStack_78 != 0) {
            _free(*(long *)(pbStack_78 + 8));
          }
          pbVar9 = (byte *)_free(pbVar11);
          return pbVar9;
        }
        if (uStack_80 + ((ulong)pbStack_78 >> 5) == 0) {
          return pbStack_78;
        }
        pbVar9 = (byte *)_free((long)pbStack_90 - ((ulong)pbStack_78 >> 5));
        return pbVar9;
      }
      if (param_3 == uStack_88) {
        __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(&pbStack_90,1,1);
        pbStack_90[uStack_88] = bVar5;
        pbVar9 = pbStack_90;
        param_3 = uStack_80;
        if (uStack_80 == uStack_88) {
          puStack_c8 = (undefined *)0x0;
          uStack_d0 = (ulong *)0x1;
          __ZN5bytes13panic_advance17h894eeb3b0f978370E(&uStack_d0);
          goto LAB_105797a5c;
        }
      }
      else {
        pbVar9[uStack_88] = bVar5;
      }
      uVar12 = uStack_88 + 1;
      uVar15 = uVar15 - 1;
      param_2 = param_2 + 1;
      uStack_88 = uVar12;
    } while (uVar15 != 0);
    if (((ulong)pbStack_78 & 1) == 0) {
      puStack_70 = &__ZN5bytes9bytes_mut13SHARED_VTABLE17h0a6377dc8dadf18bE;
    }
    else {
      uVar17 = (ulong)pbStack_78 >> 5;
      pbVar9 = pbVar9 + -uVar17;
      uVar15 = uVar17 + uVar12;
      if (uVar12 == uStack_80) {
        if (uVar15 == 0) {
          uStack_60 = 0;
          pbStack_58 = (byte *)0x0;
          pbStack_68 = (byte *)0x1;
          puStack_70 = &UNK_10b205a90;
        }
        else if (((ulong)pbVar9 & 1) == 0) {
          puStack_70 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
          pbStack_68 = pbVar9;
          uStack_60 = uVar15;
          pbStack_58 = (byte *)((ulong)pbVar9 | 1);
        }
        else {
          puStack_70 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
          pbStack_68 = pbVar9;
          uStack_60 = uVar15;
          pbStack_58 = pbVar9;
        }
      }
      else {
        lVar13 = uStack_80 + uVar17;
        pbVar11 = (byte *)_malloc(0x18);
        if (pbVar11 == (byte *)0x0) {
          func_0x0001087c906c(8,0x18);
          goto LAB_105797a5c;
        }
        *(byte **)pbVar11 = pbVar9;
        *(long *)(pbVar11 + 8) = lVar13;
        pbVar11[0x10] = 1;
        pbVar11[0x11] = 0;
        pbVar11[0x12] = 0;
        pbVar11[0x13] = 0;
        pbVar11[0x14] = 0;
        pbVar11[0x15] = 0;
        pbVar11[0x16] = 0;
        pbVar11[0x17] = 0;
        puStack_70 = &UNK_10b205b08;
        pbStack_68 = pbVar9;
        uStack_60 = uVar15;
        pbStack_58 = pbVar11;
      }
      if (uVar15 < uVar17) {
        uStack_d0 = &uStack_50;
        puStack_c8 = &DAT_105796138;
        puStack_c0 = &uStack_48;
        puStack_b8 = &DAT_105796138;
        uStack_50 = uVar17;
        uStack_48 = uVar15;
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                  (s__cannot_advance_past__remaining__108aba12e,&uStack_d0,&UNK_10b3b3ae0);
LAB_105797a5c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x105797a60);
        (*pcVar8)();
      }
      pbVar9 = pbStack_68 + uVar17;
      pbStack_78 = pbStack_58;
    }
    param_1[2] = pbVar9;
    param_1[3] = uVar12;
    param_1[4] = pbStack_78;
    param_1[1] = puStack_70;
    *param_1 = 0;
    return pbVar9;
  }
  if (param_3 < 4) {
    uVar12 = 0;
  }
  else {
    uVar12 = param_3 & 0x7c;
    puVar14 = (undefined1 *)((long)&uStack_d0 + 1);
    pbVar11 = param_2 + 1;
    uVar15 = uVar12;
    do {
      uVar2 = (&UNK_109a9e87b)[*pbVar11];
      uVar3 = (&UNK_109a9e87b)[pbVar11[1]];
      uVar4 = (&UNK_109a9e87b)[pbVar11[2]];
      puVar14[-1] = (&UNK_109a9e87b)[pbVar11[-1]];
      *puVar14 = uVar2;
      puVar14[1] = uVar3;
      puVar14[2] = uVar4;
      puVar14 = puVar14 + 4;
      pbVar11 = pbVar11 + 4;
      uVar15 = uVar15 - 4;
    } while (uVar15 != 0);
    if (param_3 == uVar12)
    goto __ZN4http6header4name14StandardHeader10from_bytes17he3286ae997307705E;
  }
  lVar13 = param_3 - uVar12;
  puVar14 = (undefined1 *)((long)&uStack_d0 + uVar12);
  pbVar11 = param_2 + uVar12;
  do {
    *puVar14 = (&UNK_109a9e87b)[*pbVar11];
    lVar13 = lVar13 + -1;
    pbVar9 = (byte *)&uStack_d0;
    puVar14 = puVar14 + 1;
    pbVar11 = pbVar11 + 1;
  } while (lVar13 != 0);
__ZN4http6header4name14StandardHeader10from_bytes17he3286ae997307705E:
  switch(param_3) {
  case 2:
    if ((*pbVar9 == 0x74) && (pbVar9[1] == 0x65)) {
      return (byte *)0x43;
    }
    break;
  case 3:
    bVar5 = *pbVar9;
    if (bVar5 == 0x61) {
      if ((pbVar9[1] == 0x67) && (pbVar9[2] == 0x65)) {
        return (byte *)0xd;
      }
    }
    else if (bVar5 == 100) {
      if ((pbVar9[1] == 0x6e) && (pbVar9[2] == 0x74)) {
        return (byte *)0x1f;
      }
    }
    else if (((bVar5 == 0x76) && (pbVar9[1] == 0x69)) && (pbVar9[2] == 0x61)) {
      return (byte *)0x4a;
    }
    break;
  case 4:
    bVar5 = *pbVar9;
    if (bVar5 < 0x68) {
      if (bVar5 == 100) {
        if (((pbVar9[1] == 0x61) && (pbVar9[2] == 0x74)) && (pbVar9[3] == 0x65)) {
          return (byte *)0x20;
        }
      }
      else if (bVar5 == 0x65) {
        if (((pbVar9[1] == 0x74) && (pbVar9[2] == 0x61)) && (pbVar9[3] == 0x67)) {
          return (byte *)0x21;
        }
      }
      else if (((bVar5 == 0x66) && (pbVar9[1] == 0x72)) &&
              ((pbVar9[2] == 0x6f && (pbVar9[3] == 0x6d)))) {
        return (byte *)0x25;
      }
    }
    else if (bVar5 == 0x68) {
      if (((pbVar9[1] == 0x6f) && (pbVar9[2] == 0x73)) && (pbVar9[3] == 0x74)) {
        return (byte *)0x26;
      }
    }
    else if (bVar5 == 0x6c) {
      if (((pbVar9[1] == 0x69) && (pbVar9[2] == 0x6e)) && (pbVar9[3] == 0x6b)) {
        return (byte *)0x2d;
      }
    }
    else if (((bVar5 == 0x76) && (pbVar9[1] == 0x61)) &&
            ((pbVar9[2] == 0x72 && (pbVar9[3] == 0x79)))) {
      return (byte *)0x49;
    }
    break;
  case 5:
    if (*pbVar9 == 0x61) {
      if (((pbVar9[1] == 0x6c) && (pbVar9[2] == 0x6c)) &&
         ((pbVar9[3] == 0x6f && (pbVar9[4] == 0x77)))) {
        return (byte *)0xe;
      }
    }
    else if (((*pbVar9 == 0x72) && (pbVar9[1] == 0x61)) &&
            ((pbVar9[2] == 0x6e && ((pbVar9[3] == 0x67 && (pbVar9[4] == 0x65)))))) {
      return (byte *)0x36;
    }
    break;
  case 6:
    bVar5 = *pbVar9;
    if (bVar5 < 0x6f) {
      if (bVar5 == 0x61) {
        if (((pbVar9[1] == 99) && (pbVar9[2] == 99)) &&
           ((pbVar9[3] == 0x65 && ((pbVar9[4] == 0x70 && (pbVar9[5] == 0x74)))))) {
          return (byte *)0x0;
        }
      }
      else if (bVar5 == 99) {
        if ((((pbVar9[1] == 0x6f) && (pbVar9[2] == 0x6f)) && (pbVar9[3] == 0x6b)) &&
           ((pbVar9[4] == 0x69 && (pbVar9[5] == 0x65)))) {
          return (byte *)0x1e;
        }
      }
      else if (((bVar5 == 0x65) && (pbVar9[1] == 0x78)) &&
              ((pbVar9[2] == 0x70 &&
               (((pbVar9[3] == 0x65 && (pbVar9[4] == 99)) && (pbVar9[5] == 0x74)))))) {
        return (byte *)0x22;
      }
    }
    else if (bVar5 == 0x6f) {
      if (((pbVar9[1] == 0x72) && (pbVar9[2] == 0x69)) &&
         ((pbVar9[3] == 0x67 && ((pbVar9[4] == 0x69 && (pbVar9[5] == 0x6e)))))) {
        return (byte *)0x30;
      }
    }
    else if (bVar5 == 0x70) {
      if ((((pbVar9[1] == 0x72) && (pbVar9[2] == 0x61)) && (pbVar9[3] == 0x67)) &&
         ((pbVar9[4] == 0x6d && (pbVar9[5] == 0x61)))) {
        return (byte *)0x31;
      }
    }
    else if (((bVar5 == 0x73) && (pbVar9[1] == 0x65)) &&
            ((pbVar9[2] == 0x72 &&
             (((pbVar9[3] == 0x76 && (pbVar9[4] == 0x65)) && (pbVar9[5] == 0x72)))))) {
      return (byte *)0x40;
    }
    break;
  case 7:
    bVar5 = *pbVar9;
    if (bVar5 < 0x74) {
      if (bVar5 == 0x61) {
        if (((((pbVar9[1] == 0x6c) && (pbVar9[2] == 0x74)) && (pbVar9[3] == 0x2d)) &&
            ((pbVar9[4] == 0x73 && (pbVar9[5] == 0x76)))) && (pbVar9[6] == 99)) {
          return (byte *)0xf;
        }
      }
      else if (bVar5 == 0x65) {
        if (((pbVar9[1] == 0x78) && (pbVar9[2] == 0x70)) &&
           ((pbVar9[3] == 0x69 &&
            (((pbVar9[4] == 0x72 && (pbVar9[5] == 0x65)) && (pbVar9[6] == 0x73)))))) {
          return (byte *)0x23;
        }
      }
      else if (((bVar5 == 0x72) && (pbVar9[1] == 0x65)) && (pbVar9[2] == 0x66)) {
        if (pbVar9[3] == 0x72) {
          if (((pbVar9[4] == 0x65) && (pbVar9[5] == 0x73)) && (pbVar9[6] == 0x68)) {
            return (byte *)0x39;
          }
        }
        else if ((((pbVar9[3] == 0x65) && (pbVar9[4] == 0x72)) && (pbVar9[5] == 0x65)) &&
                (pbVar9[6] == 0x72)) {
          return (byte *)0x37;
        }
      }
    }
    else if (bVar5 == 0x74) {
      if ((((pbVar9[1] == 0x72) && (pbVar9[2] == 0x61)) && (pbVar9[3] == 0x69)) &&
         (((pbVar9[4] == 0x6c && (pbVar9[5] == 0x65)) && (pbVar9[6] == 0x72)))) {
        return (byte *)0x44;
      }
    }
    else if (bVar5 == 0x75) {
      if (((pbVar9[1] == 0x70) && (pbVar9[2] == 0x67)) &&
         ((pbVar9[3] == 0x72 && (((pbVar9[4] == 0x61 && (pbVar9[5] == 100)) && (pbVar9[6] == 0x65)))
          ))) {
        return (byte *)0x47;
      }
    }
    else if ((((bVar5 == 0x77) && (pbVar9[1] == 0x61)) &&
             (((pbVar9[2] == 0x72 && ((pbVar9[3] == 0x6e && (pbVar9[4] == 0x69)))) &&
              (pbVar9[5] == 0x6e)))) && (pbVar9[6] == 0x67)) {
      return (byte *)0x4b;
    }
    break;
  case 8:
    if (*pbVar9 == 0x69) {
      if ((pbVar9[1] == 0x66) && (pbVar9[2] == 0x2d)) {
        if (pbVar9[3] == 0x72) {
          if ((((pbVar9[4] == 0x61) && (pbVar9[5] == 0x6e)) && (pbVar9[6] == 0x67)) &&
             (pbVar9[7] == 0x65)) {
            return (byte *)0x2a;
          }
        }
        else if (((pbVar9[3] == 0x6d) && (pbVar9[4] == 0x61)) &&
                ((pbVar9[5] == 0x74 && ((pbVar9[6] == 99 && (pbVar9[7] == 0x68)))))) {
          return (byte *)0x27;
        }
      }
    }
    else if ((((((*pbVar9 == 0x6c) && (pbVar9[1] == 0x6f)) && (pbVar9[2] == 99)) &&
              ((pbVar9[3] == 0x61 && (pbVar9[4] == 0x74)))) && (pbVar9[5] == 0x69)) &&
            ((pbVar9[6] == 0x6f && (pbVar9[7] == 0x6e)))) {
      return (byte *)0x2e;
    }
    break;
  case 9:
    if (((*pbVar9 == 0x66) && (pbVar9[1] == 0x6f)) &&
       (((pbVar9[2] == 0x72 && (((pbVar9[3] == 0x77 && (pbVar9[4] == 0x61)) && (pbVar9[5] == 0x72)))
         ) && (((pbVar9[6] == 100 && (pbVar9[7] == 0x65)) && (pbVar9[8] == 100)))))) {
      return (byte *)0x24;
    }
    break;
  case 10:
    bVar5 = *pbVar9;
    if (bVar5 == 99) {
      if ((((pbVar9[1] == 0x6f) && (pbVar9[2] == 0x6e)) &&
          ((pbVar9[3] == 0x6e && (((pbVar9[4] == 0x65 && (pbVar9[5] == 99)) && (pbVar9[6] == 0x74)))
           ))) && (((pbVar9[7] == 0x69 && (pbVar9[8] == 0x6f)) && (pbVar9[9] == 0x6e)))) {
        return (byte *)0x14;
      }
    }
    else if (bVar5 == 0x73) {
      if ((((pbVar9[1] == 0x65) && (pbVar9[2] == 0x74)) &&
          ((pbVar9[3] == 0x2d && (((pbVar9[4] == 99 && (pbVar9[5] == 0x6f)) && (pbVar9[6] == 0x6f)))
           ))) && (((pbVar9[7] == 0x6b && (pbVar9[8] == 0x69)) && (pbVar9[9] == 0x65)))) {
        return (byte *)0x41;
      }
    }
    else if (((((bVar5 == 0x75) && (pbVar9[1] == 0x73)) &&
              ((pbVar9[2] == 0x65 &&
               ((((pbVar9[3] == 0x72 && (pbVar9[4] == 0x2d)) && (pbVar9[5] == 0x61)) &&
                ((pbVar9[6] == 0x67 && (pbVar9[7] == 0x65)))))))) && (pbVar9[8] == 0x6e)) &&
            (pbVar9[9] == 0x74)) {
      return (byte *)0x46;
    }
    break;
  case 0xb:
    if ((((*pbVar9 == 0x72) && (pbVar9[1] == 0x65)) &&
        (((pbVar9[2] == 0x74 && ((pbVar9[3] == 0x72 && (pbVar9[4] == 0x79)))) && (pbVar9[5] == 0x2d)
         ))) && ((((pbVar9[6] == 0x61 && (pbVar9[7] == 0x66)) && (pbVar9[8] == 0x74)) &&
                 ((pbVar9[9] == 0x65 && (pbVar9[10] == 0x72)))))) {
      return (byte *)0x3a;
    }
    break;
  case 0xc:
    if (*pbVar9 == 99) {
      if (pbVar9[1] == 0x61) {
        if (((((pbVar9[2] == 99) && (pbVar9[3] == 0x68)) && (pbVar9[4] == 0x65)) &&
            ((pbVar9[5] == 0x2d && (pbVar9[6] == 0x73)))) &&
           (((pbVar9[7] == 0x74 && ((pbVar9[8] == 0x61 && (pbVar9[9] == 0x74)))) &&
            ((pbVar9[10] == 0x75 && (pbVar9[0xb] == 0x73)))))) {
          return (byte *)0x12;
        }
      }
      else if (((((((pbVar9[1] == 0x6f) && (pbVar9[2] == 0x6e)) && (pbVar9[3] == 0x74)) &&
                 ((pbVar9[4] == 0x65 && (pbVar9[5] == 0x6e)))) && (pbVar9[6] == 0x74)) &&
               ((pbVar9[7] == 0x2d && (pbVar9[8] == 0x74)))) &&
              ((pbVar9[9] == 0x79 && ((pbVar9[10] == 0x70 && (pbVar9[0xb] == 0x65)))))) {
        return (byte *)0x1d;
      }
    }
    else if ((((*pbVar9 == 0x6d) && (pbVar9[1] == 0x61)) && (pbVar9[2] == 0x78)) &&
            (((((pbVar9[3] == 0x2d && (pbVar9[4] == 0x66)) &&
               ((pbVar9[5] == 0x6f && ((pbVar9[6] == 0x72 && (pbVar9[7] == 0x77)))))) &&
              (pbVar9[8] == 0x61)) &&
             (((pbVar9[9] == 0x72 && (pbVar9[10] == 100)) && (pbVar9[0xb] == 0x73)))))) {
      return (byte *)0x2f;
    }
    break;
  case 0xd:
    bVar5 = *pbVar9;
    if (bVar5 < 0x69) {
      if (bVar5 == 0x61) {
        if (pbVar9[1] == 99) {
          if ((((pbVar9[2] == 99) && (pbVar9[3] == 0x65)) &&
              ((pbVar9[4] == 0x70 &&
               (((pbVar9[5] == 0x74 && (pbVar9[6] == 0x2d)) && (pbVar9[7] == 0x72)))))) &&
             ((((pbVar9[8] == 0x61 && (pbVar9[9] == 0x6e)) && (pbVar9[10] == 0x67)) &&
              ((pbVar9[0xb] == 0x65 && (pbVar9[0xc] == 0x73)))))) {
            return (byte *)0x4;
          }
        }
        else if (((((pbVar9[1] == 0x75) && (pbVar9[2] == 0x74)) && (pbVar9[3] == 0x68)) &&
                 ((pbVar9[4] == 0x6f && (pbVar9[5] == 0x72)))) &&
                ((((pbVar9[6] == 0x69 && ((pbVar9[7] == 0x7a && (pbVar9[8] == 0x61)))) &&
                  (pbVar9[9] == 0x74)) &&
                 (((pbVar9[10] == 0x69 && (pbVar9[0xb] == 0x6f)) && (pbVar9[0xc] == 0x6e)))))) {
          return (byte *)0x10;
        }
      }
      else if (bVar5 == 99) {
        if (pbVar9[1] == 0x61) {
          if ((((pbVar9[2] == 99) && (pbVar9[3] == 0x68)) &&
              ((pbVar9[4] == 0x65 && ((pbVar9[5] == 0x2d && (pbVar9[6] == 99)))))) &&
             ((pbVar9[7] == 0x6f &&
              ((((pbVar9[8] == 0x6e && (pbVar9[9] == 0x74)) && (pbVar9[10] == 0x72)) &&
               ((pbVar9[0xb] == 0x6f && (pbVar9[0xc] == 0x6c)))))))) {
            return (byte *)0x11;
          }
        }
        else if ((((pbVar9[1] == 0x6f) && (pbVar9[2] == 0x6e)) &&
                 ((pbVar9[3] == 0x74 &&
                  (((pbVar9[4] == 0x65 && (pbVar9[5] == 0x6e)) && (pbVar9[6] == 0x74)))))) &&
                (((((pbVar9[7] == 0x2d && (pbVar9[8] == 0x72)) && (pbVar9[9] == 0x61)) &&
                  ((pbVar9[10] == 0x6e && (pbVar9[0xb] == 0x67)))) && (pbVar9[0xc] == 0x65)))) {
          return (byte *)0x1a;
        }
      }
    }
    else if (bVar5 == 0x69) {
      if ((((((pbVar9[1] == 0x66) && (pbVar9[2] == 0x2d)) && (pbVar9[3] == 0x6e)) &&
           ((pbVar9[4] == 0x6f && (pbVar9[5] == 0x6e)))) &&
          ((pbVar9[6] == 0x65 && ((pbVar9[7] == 0x2d && (pbVar9[8] == 0x6d)))))) &&
         ((pbVar9[9] == 0x61 &&
          (((pbVar9[10] == 0x74 && (pbVar9[0xb] == 99)) && (pbVar9[0xc] == 0x68)))))) {
        return (byte *)0x29;
      }
    }
    else if ((((bVar5 == 0x6c) && (pbVar9[1] == 0x61)) &&
             ((pbVar9[2] == 0x73 && ((pbVar9[3] == 0x74 && (pbVar9[4] == 0x2d)))))) &&
            ((pbVar9[5] == 0x6d &&
             (((((pbVar9[6] == 0x6f && (pbVar9[7] == 100)) && (pbVar9[8] == 0x69)) &&
               ((pbVar9[9] == 0x66 && (pbVar9[10] == 0x69)))) &&
              ((pbVar9[0xb] == 0x65 && (pbVar9[0xc] == 100)))))))) {
      return (byte *)0x2c;
    }
    break;
  case 0xe:
    if (*pbVar9 == 0x61) {
      if ((((pbVar9[1] == 99) && (pbVar9[2] == 99)) &&
          (((pbVar9[3] == 0x65 && ((pbVar9[4] == 0x70 && (pbVar9[5] == 0x74)))) &&
           (pbVar9[6] == 0x2d)))) &&
         ((((((pbVar9[7] == 99 && (pbVar9[8] == 0x68)) && (pbVar9[9] == 0x61)) &&
            ((pbVar9[10] == 0x72 && (pbVar9[0xb] == 0x73)))) && (pbVar9[0xc] == 0x65)) &&
          (pbVar9[0xd] == 0x74)))) {
        return (byte *)0x1;
      }
    }
    else if (((((*pbVar9 == 99) && (pbVar9[1] == 0x6f)) &&
              ((pbVar9[2] == 0x6e &&
               (((pbVar9[3] == 0x74 && (pbVar9[4] == 0x65)) && (pbVar9[5] == 0x6e)))))) &&
             ((pbVar9[6] == 0x74 && (pbVar9[7] == 0x2d)))) &&
            ((pbVar9[8] == 0x6c &&
             (((pbVar9[9] == 0x65 && (pbVar9[10] == 0x6e)) &&
              ((pbVar9[0xb] == 0x67 && ((pbVar9[0xc] == 0x74 && (pbVar9[0xd] == 0x68)))))))))) {
      return (byte *)0x18;
    }
    break;
  case 0xf:
    bVar5 = *pbVar9;
    if (bVar5 < 0x72) {
      if (bVar5 == 0x61) {
        if ((((pbVar9[1] == 99) && (pbVar9[2] == 99)) &&
            ((pbVar9[3] == 0x65 && ((pbVar9[4] == 0x70 && (pbVar9[5] == 0x74)))))) &&
           (pbVar9[6] == 0x2d)) {
          if (pbVar9[7] == 0x6c) {
            if ((((pbVar9[8] == 0x61) && (pbVar9[9] == 0x6e)) && (pbVar9[10] == 0x67)) &&
               (((pbVar9[0xb] == 0x75 && (pbVar9[0xc] == 0x61)) &&
                ((pbVar9[0xd] == 0x67 && (pbVar9[0xe] == 0x65)))))) {
              return (byte *)0x3;
            }
          }
          else if (((pbVar9[7] == 0x65) && (pbVar9[8] == 0x6e)) &&
                  ((pbVar9[9] == 99 &&
                   ((((pbVar9[10] == 0x6f && (pbVar9[0xb] == 100)) && (pbVar9[0xc] == 0x69)) &&
                    ((pbVar9[0xd] == 0x6e && (pbVar9[0xe] == 0x67)))))))) {
            return (byte *)0x2;
          }
        }
      }
      else if (((bVar5 == 0x70) && (pbVar9[1] == 0x75)) &&
              ((((pbVar9[2] == 0x62 &&
                 (((pbVar9[3] == 0x6c && (pbVar9[4] == 0x69)) && (pbVar9[5] == 99)))) &&
                (((pbVar9[6] == 0x2d && (pbVar9[7] == 0x6b)) && (pbVar9[8] == 0x65)))) &&
               (((pbVar9[9] == 0x79 && (pbVar9[10] == 0x2d)) &&
                ((pbVar9[0xb] == 0x70 &&
                 (((pbVar9[0xc] == 0x69 && (pbVar9[0xd] == 0x6e)) && (pbVar9[0xe] == 0x73))))))))))
      {
        return (byte *)0x34;
      }
    }
    else if (bVar5 == 0x72) {
      if ((((((pbVar9[1] == 0x65) && (pbVar9[2] == 0x66)) && (pbVar9[3] == 0x65)) &&
           ((pbVar9[4] == 0x72 && (pbVar9[5] == 0x72)))) &&
          (((pbVar9[6] == 0x65 && ((pbVar9[7] == 0x72 && (pbVar9[8] == 0x2d)))) &&
           ((pbVar9[9] == 0x70 &&
            (((pbVar9[10] == 0x6f && (pbVar9[0xb] == 0x6c)) && (pbVar9[0xc] == 0x69)))))))) &&
         ((pbVar9[0xd] == 99 && (pbVar9[0xe] == 0x79)))) {
        return (byte *)0x38;
      }
    }
    else if ((((((bVar5 == 0x78) && (pbVar9[1] == 0x2d)) &&
               ((pbVar9[2] == 0x66 &&
                ((((pbVar9[3] == 0x72 && (pbVar9[4] == 0x61)) && (pbVar9[5] == 0x6d)) &&
                 ((pbVar9[6] == 0x65 && (pbVar9[7] == 0x2d)))))))) && (pbVar9[8] == 0x6f)) &&
             ((pbVar9[9] == 0x70 && (pbVar9[10] == 0x74)))) &&
            ((pbVar9[0xb] == 0x69 &&
             (((pbVar9[0xc] == 0x6f && (pbVar9[0xd] == 0x6e)) && (pbVar9[0xe] == 0x73)))))) {
      return (byte *)0x4f;
    }
    break;
  case 0x10:
    bVar5 = *pbVar9;
    if (bVar5 == 99) {
      if ((((pbVar9[1] == 0x6f) && (pbVar9[2] == 0x6e)) &&
          ((pbVar9[3] == 0x74 &&
           (((pbVar9[4] == 0x65 && (pbVar9[5] == 0x6e)) && (pbVar9[6] == 0x74)))))) &&
         (pbVar9[7] == 0x2d)) {
        if (pbVar9[8] == 0x6c) {
          if (pbVar9[9] == 0x61) {
            if (((pbVar9[10] == 0x6e) && (pbVar9[0xb] == 0x67)) &&
               (((pbVar9[0xc] == 0x75 && ((pbVar9[0xd] == 0x61 && (pbVar9[0xe] == 0x67)))) &&
                (pbVar9[0xf] == 0x65)))) {
              return (byte *)0x17;
            }
          }
          else if (((((pbVar9[9] == 0x6f) && (pbVar9[10] == 99)) && (pbVar9[0xb] == 0x61)) &&
                   ((pbVar9[0xc] == 0x74 && (pbVar9[0xd] == 0x69)))) &&
                  ((pbVar9[0xe] == 0x6f && (pbVar9[0xf] == 0x6e)))) {
            return (byte *)0x19;
          }
        }
        else if ((((pbVar9[8] == 0x65) && (pbVar9[9] == 0x6e)) &&
                 ((pbVar9[10] == 99 &&
                  (((pbVar9[0xb] == 0x6f && (pbVar9[0xc] == 100)) && (pbVar9[0xd] == 0x69)))))) &&
                ((pbVar9[0xe] == 0x6e && (pbVar9[0xf] == 0x67)))) {
          return (byte *)0x16;
        }
      }
    }
    else if (bVar5 == 0x77) {
      if ((((pbVar9[1] == 0x77) && (pbVar9[2] == 0x77)) &&
          ((pbVar9[3] == 0x2d &&
           (((pbVar9[4] == 0x61 && (pbVar9[5] == 0x75)) && (pbVar9[6] == 0x74)))))) &&
         (((pbVar9[7] == 0x68 && (pbVar9[8] == 0x65)) &&
          ((pbVar9[9] == 0x6e &&
           (((pbVar9[10] == 0x74 && (pbVar9[0xb] == 0x69)) &&
            ((pbVar9[0xc] == 99 &&
             (((pbVar9[0xd] == 0x61 && (pbVar9[0xe] == 0x74)) && (pbVar9[0xf] == 0x65)))))))))))) {
        return (byte *)0x4c;
      }
    }
    else if (((bVar5 == 0x78) && (pbVar9[1] == 0x2d)) &&
            ((((pbVar9[2] == 0x78 && ((pbVar9[3] == 0x73 && (pbVar9[4] == 0x73)))) &&
              (pbVar9[5] == 0x2d)) &&
             ((((((pbVar9[6] == 0x70 && (pbVar9[7] == 0x72)) && (pbVar9[8] == 0x6f)) &&
                ((pbVar9[9] == 0x74 && (pbVar9[10] == 0x65)))) && (pbVar9[0xb] == 99)) &&
              (((pbVar9[0xc] == 0x74 && (pbVar9[0xd] == 0x69)) &&
               ((pbVar9[0xe] == 0x6f && (pbVar9[0xf] == 0x6e)))))))))) {
      return (byte *)0x50;
    }
    break;
  case 0x11:
    bVar5 = *pbVar9;
    if (bVar5 < 0x73) {
      if (bVar5 == 99) {
        if ((((((pbVar9[1] == 100) && (pbVar9[2] == 0x6e)) && (pbVar9[3] == 0x2d)) &&
             (((pbVar9[4] == 99 && (pbVar9[5] == 0x61)) &&
              ((pbVar9[6] == 99 && ((pbVar9[7] == 0x68 && (pbVar9[8] == 0x65)))))))) &&
            ((pbVar9[9] == 0x2d &&
             (((pbVar9[10] == 99 && (pbVar9[0xb] == 0x6f)) && (pbVar9[0xc] == 0x6e)))))) &&
           (((pbVar9[0xd] == 0x74 && (pbVar9[0xe] == 0x72)) &&
            ((pbVar9[0xf] == 0x6f && (pbVar9[0x10] == 0x6c)))))) {
          return (byte *)0x13;
        }
      }
      else if ((((bVar5 == 0x69) && (pbVar9[1] == 0x66)) &&
               ((pbVar9[2] == 0x2d &&
                ((((pbVar9[3] == 0x6d && (pbVar9[4] == 0x6f)) && (pbVar9[5] == 100)) &&
                 ((pbVar9[6] == 0x69 && (pbVar9[7] == 0x66)))))))) &&
              (((pbVar9[8] == 0x69 && ((pbVar9[9] == 0x65 && (pbVar9[10] == 100)))) &&
               (((pbVar9[0xb] == 0x2d &&
                 (((pbVar9[0xc] == 0x73 && (pbVar9[0xd] == 0x69)) && (pbVar9[0xe] == 0x6e)))) &&
                ((pbVar9[0xf] == 99 && (pbVar9[0x10] == 0x65)))))))) {
        return (byte *)0x28;
      }
    }
    else if (bVar5 == 0x73) {
      if ((((pbVar9[1] == 0x65) && (pbVar9[2] == 99)) &&
          (((((pbVar9[3] == 0x2d &&
              (((pbVar9[4] == 0x77 && (pbVar9[5] == 0x65)) && (pbVar9[6] == 0x62)))) &&
             (((pbVar9[7] == 0x73 && (pbVar9[8] == 0x6f)) && (pbVar9[9] == 99)))) &&
            ((pbVar9[10] == 0x6b && (pbVar9[0xb] == 0x65)))) &&
           ((pbVar9[0xc] == 0x74 &&
            (((pbVar9[0xd] == 0x2d && (pbVar9[0xe] == 0x6b)) && (pbVar9[0xf] == 0x65)))))))) &&
         (pbVar9[0x10] == 0x79)) {
        return (byte *)0x3d;
      }
    }
    else if (((((bVar5 == 0x74) && (pbVar9[1] == 0x72)) &&
              (((pbVar9[2] == 0x61 && ((pbVar9[3] == 0x6e && (pbVar9[4] == 0x73)))) &&
               (pbVar9[5] == 0x66)))) &&
             ((((((pbVar9[6] == 0x65 && (pbVar9[7] == 0x72)) && (pbVar9[8] == 0x2d)) &&
                ((pbVar9[9] == 0x65 && (pbVar9[10] == 0x6e)))) && (pbVar9[0xb] == 99)) &&
              ((pbVar9[0xc] == 0x6f && (pbVar9[0xd] == 100)))))) &&
            ((pbVar9[0xe] == 0x69 && ((pbVar9[0xf] == 0x6e && (pbVar9[0x10] == 0x67)))))) {
      return (byte *)0x45;
    }
    break;
  case 0x12:
    if ((((*pbVar9 == 0x70) && (pbVar9[1] == 0x72)) &&
        ((pbVar9[2] == 0x6f && (((pbVar9[3] == 0x78 && (pbVar9[4] == 0x79)) && (pbVar9[5] == 0x2d)))
         ))) && (((pbVar9[6] == 0x61 && (pbVar9[7] == 0x75)) &&
                 ((pbVar9[8] == 0x74 &&
                  ((((pbVar9[9] == 0x68 && (pbVar9[10] == 0x65)) &&
                    ((pbVar9[0xb] == 0x6e &&
                     ((((pbVar9[0xc] == 0x74 && (pbVar9[0xd] == 0x69)) && (pbVar9[0xe] == 99)) &&
                      ((pbVar9[0xf] == 0x61 && (pbVar9[0x10] == 0x74)))))))) &&
                   (pbVar9[0x11] == 0x65)))))))) {
      return (byte *)0x32;
    }
    break;
  case 0x13:
    bVar5 = *pbVar9;
    if (bVar5 == 99) {
      if ((((pbVar9[1] == 0x6f) && (pbVar9[2] == 0x6e)) &&
          ((pbVar9[3] == 0x74 &&
           (((pbVar9[4] == 0x65 && (pbVar9[5] == 0x6e)) && (pbVar9[6] == 0x74)))))) &&
         (((pbVar9[7] == 0x2d && (pbVar9[8] == 100)) &&
          ((pbVar9[9] == 0x69 &&
           (((pbVar9[10] == 0x73 && (pbVar9[0xb] == 0x70)) &&
            ((pbVar9[0xc] == 0x6f &&
             (((((pbVar9[0xd] == 0x73 && (pbVar9[0xe] == 0x69)) && (pbVar9[0xf] == 0x74)) &&
               ((pbVar9[0x10] == 0x69 && (pbVar9[0x11] == 0x6f)))) && (pbVar9[0x12] == 0x6e)))))))))
          ))) {
        return (byte *)0x15;
      }
    }
    else if (bVar5 == 0x69) {
      if (((((pbVar9[1] == 0x66) && (pbVar9[2] == 0x2d)) &&
           ((pbVar9[3] == 0x75 &&
            (((pbVar9[4] == 0x6e && (pbVar9[5] == 0x6d)) && (pbVar9[6] == 0x6f)))))) &&
          ((((pbVar9[7] == 100 && (pbVar9[8] == 0x69)) && (pbVar9[9] == 0x66)) &&
           ((pbVar9[10] == 0x69 && (pbVar9[0xb] == 0x65)))))) &&
         ((((pbVar9[0xc] == 100 &&
            (((pbVar9[0xd] == 0x2d && (pbVar9[0xe] == 0x73)) && (pbVar9[0xf] == 0x69)))) &&
           ((pbVar9[0x10] == 0x6e && (pbVar9[0x11] == 99)))) && (pbVar9[0x12] == 0x65)))) {
        return (byte *)0x2b;
      }
    }
    else if (((((bVar5 == 0x70) && (pbVar9[1] == 0x72)) &&
              ((pbVar9[2] == 0x6f &&
               ((((pbVar9[3] == 0x78 && (pbVar9[4] == 0x79)) && (pbVar9[5] == 0x2d)) &&
                ((pbVar9[6] == 0x61 && (pbVar9[7] == 0x75)))))))) &&
             ((pbVar9[8] == 0x74 && ((pbVar9[9] == 0x68 && (pbVar9[10] == 0x6f)))))) &&
            (((pbVar9[0xb] == 0x72 &&
              (((pbVar9[0xc] == 0x69 && (pbVar9[0xd] == 0x7a)) && (pbVar9[0xe] == 0x61)))) &&
             ((((pbVar9[0xf] == 0x74 && (pbVar9[0x10] == 0x69)) && (pbVar9[0x11] == 0x6f)) &&
              (pbVar9[0x12] == 0x6e)))))) {
      return (byte *)0x33;
    }
    break;
  case 0x14:
    if ((((((*pbVar9 == 0x73) && (pbVar9[1] == 0x65)) &&
          ((pbVar9[2] == 99 && ((pbVar9[3] == 0x2d && (pbVar9[4] == 0x77)))))) &&
         (pbVar9[5] == 0x65)) &&
        (((((pbVar9[6] == 0x62 && (pbVar9[7] == 0x73)) && (pbVar9[8] == 0x6f)) &&
          ((pbVar9[9] == 99 && (pbVar9[10] == 0x6b)))) &&
         ((pbVar9[0xb] == 0x65 && ((pbVar9[0xc] == 0x74 && (pbVar9[0xd] == 0x2d)))))))) &&
       (((pbVar9[0xe] == 0x61 &&
         (((pbVar9[0xf] == 99 && (pbVar9[0x10] == 99)) && (pbVar9[0x11] == 0x65)))) &&
        ((pbVar9[0x12] == 0x70 && (pbVar9[0x13] == 0x74)))))) {
      return (byte *)0x3b;
    }
    break;
  case 0x15:
    if (((((*pbVar9 == 0x73) && (pbVar9[1] == 0x65)) && (pbVar9[2] == 99)) &&
        (((pbVar9[3] == 0x2d && (pbVar9[4] == 0x77)) &&
         ((pbVar9[5] == 0x65 && ((pbVar9[6] == 0x62 && (pbVar9[7] == 0x73)))))))) &&
       ((pbVar9[8] == 0x6f &&
        (((((((pbVar9[9] == 99 && (pbVar9[10] == 0x6b)) && (pbVar9[0xb] == 0x65)) &&
            ((pbVar9[0xc] == 0x74 && (pbVar9[0xd] == 0x2d)))) &&
           ((pbVar9[0xe] == 0x76 && ((pbVar9[0xf] == 0x65 && (pbVar9[0x10] == 0x72)))))) &&
          (pbVar9[0x11] == 0x73)) &&
         (((pbVar9[0x12] == 0x69 && (pbVar9[0x13] == 0x6f)) && (pbVar9[0x14] == 0x6e)))))))) {
      return (byte *)0x3f;
    }
    break;
  case 0x16:
    bVar5 = *pbVar9;
    if (bVar5 == 0x61) {
      if ((((((pbVar9[1] == 99) && (pbVar9[2] == 99)) &&
            ((pbVar9[3] == 0x65 &&
             (((pbVar9[4] == 0x73 && (pbVar9[5] == 0x73)) && (pbVar9[6] == 0x2d)))))) &&
           ((pbVar9[7] == 99 && (pbVar9[8] == 0x6f)))) &&
          ((pbVar9[9] == 0x6e &&
           (((pbVar9[10] == 0x74 && (pbVar9[0xb] == 0x72)) &&
            ((pbVar9[0xc] == 0x6f &&
             ((((pbVar9[0xd] == 0x6c && (pbVar9[0xe] == 0x2d)) && (pbVar9[0xf] == 0x6d)) &&
              ((pbVar9[0x10] == 0x61 && (pbVar9[0x11] == 0x78)))))))))))) &&
         ((pbVar9[0x12] == 0x2d &&
          (((pbVar9[0x13] == 0x61 && (pbVar9[0x14] == 0x67)) && (pbVar9[0x15] == 0x65)))))) {
        return (byte *)0xa;
      }
    }
    else if (bVar5 == 0x73) {
      if ((((((pbVar9[1] == 0x65) && (pbVar9[2] == 99)) && (pbVar9[3] == 0x2d)) &&
           (((pbVar9[4] == 0x77 && (pbVar9[5] == 0x65)) &&
            ((pbVar9[6] == 0x62 && ((pbVar9[7] == 0x73 && (pbVar9[8] == 0x6f)))))))) &&
          (((pbVar9[9] == 99 &&
            (((pbVar9[10] == 0x6b && (pbVar9[0xb] == 0x65)) && (pbVar9[0xc] == 0x74)))) &&
           (((pbVar9[0xd] == 0x2d && (pbVar9[0xe] == 0x70)) &&
            (((pbVar9[0xf] == 0x72 && ((pbVar9[0x10] == 0x6f && (pbVar9[0x11] == 0x74)))) &&
             (pbVar9[0x12] == 0x6f)))))))) &&
         (((pbVar9[0x13] == 99 && (pbVar9[0x14] == 0x6f)) && (pbVar9[0x15] == 0x6c)))) {
        return (byte *)0x3e;
      }
    }
    else if ((bVar5 == 0x78) && (pbVar9[1] == 0x2d)) {
      if (pbVar9[2] == 100) {
        if ((((((pbVar9[3] == 0x6e) && (pbVar9[4] == 0x73)) &&
              ((pbVar9[5] == 0x2d &&
               (((((pbVar9[6] == 0x70 && (pbVar9[7] == 0x72)) && (pbVar9[8] == 0x65)) &&
                 ((pbVar9[9] == 0x66 && (pbVar9[10] == 0x65)))) && (pbVar9[0xb] == 0x74)))))) &&
             ((pbVar9[0xc] == 99 && (pbVar9[0xd] == 0x68)))) && (pbVar9[0xe] == 0x2d)) &&
           ((((pbVar9[0xf] == 99 && (pbVar9[0x10] == 0x6f)) && (pbVar9[0x11] == 0x6e)) &&
            (((pbVar9[0x12] == 0x74 && (pbVar9[0x13] == 0x72)) &&
             ((pbVar9[0x14] == 0x6f && (pbVar9[0x15] == 0x6c)))))))) {
          return (byte *)0x4e;
        }
      }
      else if ((((((pbVar9[2] == 99) && (pbVar9[3] == 0x6f)) &&
                 ((pbVar9[4] == 0x6e &&
                  (((pbVar9[5] == 0x74 && (pbVar9[6] == 0x65)) && (pbVar9[7] == 0x6e)))))) &&
                (((pbVar9[8] == 0x74 && (pbVar9[9] == 0x2d)) && (pbVar9[10] == 0x74)))) &&
               ((pbVar9[0xb] == 0x79 && (pbVar9[0xc] == 0x70)))) &&
              ((((pbVar9[0xd] == 0x65 &&
                 ((((pbVar9[0xe] == 0x2d && (pbVar9[0xf] == 0x6f)) && (pbVar9[0x10] == 0x70)) &&
                  ((pbVar9[0x11] == 0x74 && (pbVar9[0x12] == 0x69)))))) && (pbVar9[0x13] == 0x6f))
               && ((pbVar9[0x14] == 0x6e && (pbVar9[0x15] == 0x73)))))) {
        return (byte *)0x4d;
      }
    }
    break;
  case 0x17:
    if (((((*pbVar9 == 99) && (pbVar9[1] == 0x6f)) && (pbVar9[2] == 0x6e)) &&
        ((pbVar9[3] == 0x74 && (pbVar9[4] == 0x65)))) &&
       (((pbVar9[5] == 0x6e && ((pbVar9[6] == 0x74 && (pbVar9[7] == 0x2d)))) &&
        (((pbVar9[8] == 0x73 &&
          ((((pbVar9[9] == 0x65 && (pbVar9[10] == 99)) && (pbVar9[0xb] == 0x75)) &&
           ((pbVar9[0xc] == 0x72 && (pbVar9[0xd] == 0x69)))))) &&
         ((((pbVar9[0xe] == 0x74 && ((pbVar9[0xf] == 0x79 && (pbVar9[0x10] == 0x2d)))) &&
           (pbVar9[0x11] == 0x70)) &&
          ((((pbVar9[0x12] == 0x6f && (pbVar9[0x13] == 0x6c)) && (pbVar9[0x14] == 0x69)) &&
           ((pbVar9[0x15] == 99 && (pbVar9[0x16] == 0x79)))))))))))) {
      return (byte *)0x1b;
    }
    break;
  case 0x18:
    if (((((*pbVar9 == 0x73) && (pbVar9[1] == 0x65)) &&
         ((pbVar9[2] == 99 && ((pbVar9[3] == 0x2d && (pbVar9[4] == 0x77)))))) &&
        ((pbVar9[5] == 0x65 &&
         ((((((((pbVar9[6] == 0x62 && (pbVar9[7] == 0x73)) && (pbVar9[8] == 0x6f)) &&
              ((pbVar9[9] == 99 && (pbVar9[10] == 0x6b)))) && (pbVar9[0xb] == 0x65)) &&
            ((pbVar9[0xc] == 0x74 && (pbVar9[0xd] == 0x2d)))) && (pbVar9[0xe] == 0x65)) &&
          (((pbVar9[0xf] == 0x78 && (pbVar9[0x10] == 0x74)) && (pbVar9[0x11] == 0x65)))))))) &&
       ((((pbVar9[0x12] == 0x6e && (pbVar9[0x13] == 0x73)) &&
         ((pbVar9[0x14] == 0x69 && ((pbVar9[0x15] == 0x6f && (pbVar9[0x16] == 0x6e)))))) &&
        (pbVar9[0x17] == 0x73)))) {
      return (byte *)0x3c;
    }
    break;
  case 0x19:
    if (*pbVar9 == 0x73) {
      if ((((((((pbVar9[1] == 0x74) && (pbVar9[2] == 0x72)) && (pbVar9[3] == 0x69)) &&
             ((pbVar9[4] == 99 && (pbVar9[5] == 0x74)))) &&
            ((pbVar9[6] == 0x2d && ((pbVar9[7] == 0x74 && (pbVar9[8] == 0x72)))))) &&
           ((pbVar9[9] == 0x61 &&
            ((((pbVar9[10] == 0x6e && (pbVar9[0xb] == 0x73)) && (pbVar9[0xc] == 0x70)) &&
             ((pbVar9[0xd] == 0x6f && (pbVar9[0xe] == 0x72)))))))) &&
          (((pbVar9[0xf] == 0x74 && ((pbVar9[0x10] == 0x2d && (pbVar9[0x11] == 0x73)))) &&
           (pbVar9[0x12] == 0x65)))) &&
         ((((pbVar9[0x13] == 99 && (pbVar9[0x14] == 0x75)) && (pbVar9[0x15] == 0x72)) &&
          (((pbVar9[0x16] == 0x69 && (pbVar9[0x17] == 0x74)) && (pbVar9[0x18] == 0x79)))))) {
        return (byte *)0x42;
      }
    }
    else if (((((*pbVar9 == 0x75) && (pbVar9[1] == 0x70)) &&
              ((pbVar9[2] == 0x67 &&
               ((((pbVar9[3] == 0x72 && (pbVar9[4] == 0x61)) && (pbVar9[5] == 100)) &&
                ((pbVar9[6] == 0x65 && (pbVar9[7] == 0x2d)))))))) && (pbVar9[8] == 0x69)) &&
            ((((pbVar9[9] == 0x6e && (pbVar9[10] == 0x73)) &&
              ((pbVar9[0xb] == 0x65 &&
               (((pbVar9[0xc] == 99 && (pbVar9[0xd] == 0x75)) && (pbVar9[0xe] == 0x72)))))) &&
             (((((pbVar9[0xf] == 0x65 && (pbVar9[0x10] == 0x2d)) && (pbVar9[0x11] == 0x72)) &&
               ((pbVar9[0x12] == 0x65 && (pbVar9[0x13] == 0x71)))) &&
              (((pbVar9[0x14] == 0x75 &&
                (((pbVar9[0x15] == 0x65 && (pbVar9[0x16] == 0x73)) && (pbVar9[0x17] == 0x74)))) &&
               (pbVar9[0x18] == 0x73)))))))) {
      return (byte *)0x48;
    }
    break;
  case 0x1b:
    if (*pbVar9 == 0x61) {
      if ((((pbVar9[1] == 99) && (pbVar9[2] == 99)) &&
          ((pbVar9[3] == 0x65 && ((pbVar9[4] == 0x73 && (pbVar9[5] == 0x73)))))) &&
         (((pbVar9[6] == 0x2d && (((pbVar9[7] == 99 && (pbVar9[8] == 0x6f)) && (pbVar9[9] == 0x6e)))
           ) && ((((((((pbVar9[10] == 0x74 && (pbVar9[0xb] == 0x72)) &&
                      ((pbVar9[0xc] == 0x6f && ((pbVar9[0xd] == 0x6c && (pbVar9[0xe] == 0x2d))))))
                     && (pbVar9[0xf] == 0x61)) &&
                    (((pbVar9[0x10] == 0x6c && (pbVar9[0x11] == 0x6c)) && (pbVar9[0x12] == 0x6f))))
                   && ((pbVar9[0x13] == 0x77 && (pbVar9[0x14] == 0x2d)))) &&
                  (((pbVar9[0x15] == 0x6f && ((pbVar9[0x16] == 0x72 && (pbVar9[0x17] == 0x69)))) &&
                   (pbVar9[0x18] == 0x67)))) && ((pbVar9[0x19] == 0x69 && (pbVar9[0x1a] == 0x6e)))))
          ))) {
        return (byte *)0x8;
      }
    }
    else if (((((((((*pbVar9 == 0x70) && (pbVar9[1] == 0x75)) && (pbVar9[2] == 0x62)) &&
                 ((pbVar9[3] == 0x6c && (pbVar9[4] == 0x69)))) && (pbVar9[5] == 99)) &&
               (((pbVar9[6] == 0x2d && (pbVar9[7] == 0x6b)) &&
                ((pbVar9[8] == 0x65 &&
                 (((pbVar9[9] == 0x79 && (pbVar9[10] == 0x2d)) && (pbVar9[0xb] == 0x70)))))))) &&
              ((((pbVar9[0xc] == 0x69 && (pbVar9[0xd] == 0x6e)) &&
                ((pbVar9[0xe] == 0x73 &&
                 (((pbVar9[0xf] == 0x2d && (pbVar9[0x10] == 0x72)) &&
                  ((pbVar9[0x11] == 0x65 &&
                   (((pbVar9[0x12] == 0x70 && (pbVar9[0x13] == 0x6f)) && (pbVar9[0x14] == 0x72))))))
                 )))) && ((pbVar9[0x15] == 0x74 && (pbVar9[0x16] == 0x2d)))))) &&
             (pbVar9[0x17] == 0x6f)) &&
            (((pbVar9[0x18] == 0x6e && (pbVar9[0x19] == 0x6c)) && (pbVar9[0x1a] == 0x79)))) {
      return (byte *)0x35;
    }
    break;
  case 0x1c:
    if (((((*pbVar9 == 0x61) && (pbVar9[1] == 99)) &&
         ((pbVar9[2] == 99 &&
          ((((pbVar9[3] == 0x65 && (pbVar9[4] == 0x73)) && (pbVar9[5] == 0x73)) &&
           ((pbVar9[6] == 0x2d && (pbVar9[7] == 99)))))))) &&
        ((pbVar9[8] == 0x6f && ((pbVar9[9] == 0x6e && (pbVar9[10] == 0x74)))))) &&
       ((((pbVar9[0xb] == 0x72 &&
          (((pbVar9[0xc] == 0x6f && (pbVar9[0xd] == 0x6c)) && (pbVar9[0xe] == 0x2d)))) &&
         (((pbVar9[0xf] == 0x61 && (pbVar9[0x10] == 0x6c)) && (pbVar9[0x11] == 0x6c)))) &&
        (((pbVar9[0x12] == 0x6f && (pbVar9[0x13] == 0x77)) && (pbVar9[0x14] == 0x2d)))))) {
      if (pbVar9[0x15] == 0x6d) {
        if (((((pbVar9[0x16] == 0x65) && (pbVar9[0x17] == 0x74)) && (pbVar9[0x18] == 0x68)) &&
            ((pbVar9[0x19] == 0x6f && (pbVar9[0x1a] == 100)))) && (pbVar9[0x1b] == 0x73)) {
          return (byte *)0x7;
        }
      }
      else if (((pbVar9[0x15] == 0x68) && (pbVar9[0x16] == 0x65)) &&
              ((pbVar9[0x17] == 0x61 &&
               ((((pbVar9[0x18] == 100 && (pbVar9[0x19] == 0x65)) && (pbVar9[0x1a] == 0x72)) &&
                (pbVar9[0x1b] == 0x73)))))) {
        return (byte *)0x6;
      }
    }
    break;
  case 0x1d:
    if (((((*pbVar9 == 0x61) && (pbVar9[1] == 99)) && (pbVar9[2] == 99)) &&
        ((((pbVar9[3] == 0x65 && (pbVar9[4] == 0x73)) &&
          ((pbVar9[5] == 0x73 && ((pbVar9[6] == 0x2d && (pbVar9[7] == 99)))))) &&
         ((pbVar9[8] == 0x6f &&
          (((pbVar9[9] == 0x6e && (pbVar9[10] == 0x74)) && (pbVar9[0xb] == 0x72)))))))) &&
       (((pbVar9[0xc] == 0x6f && (pbVar9[0xd] == 0x6c)) && (pbVar9[0xe] == 0x2d)))) {
      if (pbVar9[0xf] == 0x72) {
        if ((((((pbVar9[0x10] == 0x65) && (pbVar9[0x11] == 0x71)) &&
              ((pbVar9[0x12] == 0x75 &&
               ((((pbVar9[0x13] == 0x65 && (pbVar9[0x14] == 0x73)) && (pbVar9[0x15] == 0x74)) &&
                ((pbVar9[0x16] == 0x2d && (pbVar9[0x17] == 0x6d)))))))) && (pbVar9[0x18] == 0x65))
            && ((pbVar9[0x19] == 0x74 && (pbVar9[0x1a] == 0x68)))) &&
           ((pbVar9[0x1b] == 0x6f && (pbVar9[0x1c] == 100)))) {
          return (byte *)0xc;
        }
      }
      else if ((((((pbVar9[0xf] == 0x65) && (pbVar9[0x10] == 0x78)) && (pbVar9[0x11] == 0x70)) &&
                (((pbVar9[0x12] == 0x6f && (pbVar9[0x13] == 0x73)) &&
                 ((pbVar9[0x14] == 0x65 && ((pbVar9[0x15] == 0x2d && (pbVar9[0x16] == 0x68))))))))
               && ((pbVar9[0x17] == 0x65 &&
                   (((pbVar9[0x18] == 0x61 && (pbVar9[0x19] == 100)) && (pbVar9[0x1a] == 0x65))))))
              && ((pbVar9[0x1b] == 0x72 && (pbVar9[0x1c] == 0x73)))) {
        return (byte *)0x9;
      }
    }
    break;
  case 0x1e:
    if (((((((*pbVar9 == 0x61) && (pbVar9[1] == 99)) &&
           ((pbVar9[2] == 99 &&
            (((pbVar9[3] == 0x65 && (pbVar9[4] == 0x73)) && (pbVar9[5] == 0x73)))))) &&
          (((pbVar9[6] == 0x2d && (pbVar9[7] == 99)) &&
           ((pbVar9[8] == 0x6f &&
            ((((pbVar9[9] == 0x6e && (pbVar9[10] == 0x74)) &&
              ((pbVar9[0xb] == 0x72 &&
               (((pbVar9[0xc] == 0x6f && (pbVar9[0xd] == 0x6c)) && (pbVar9[0xe] == 0x2d)))))) &&
             ((pbVar9[0xf] == 0x72 && (pbVar9[0x10] == 0x65)))))))))) && (pbVar9[0x11] == 0x71)) &&
        (((pbVar9[0x12] == 0x75 && (pbVar9[0x13] == 0x65)) &&
         ((pbVar9[0x14] == 0x73 &&
          (((((pbVar9[0x15] == 0x74 && (pbVar9[0x16] == 0x2d)) && (pbVar9[0x17] == 0x68)) &&
            ((pbVar9[0x18] == 0x65 && (pbVar9[0x19] == 0x61)))) && (pbVar9[0x1a] == 100)))))))) &&
       (((pbVar9[0x1b] == 0x65 && (pbVar9[0x1c] == 0x72)) && (pbVar9[0x1d] == 0x73)))) {
      return (byte *)0xb;
    }
    break;
  case 0x20:
    if (((((((*pbVar9 == 0x61) && (pbVar9[1] == 99)) && (pbVar9[2] == 99)) &&
          ((pbVar9[3] == 0x65 && (pbVar9[4] == 0x73)))) &&
         ((pbVar9[5] == 0x73 && ((pbVar9[6] == 0x2d && (pbVar9[7] == 99)))))) && (pbVar9[8] == 0x6f)
        ) && ((((((pbVar9[9] == 0x6e && (pbVar9[10] == 0x74)) && (pbVar9[0xb] == 0x72)) &&
                (((pbVar9[0xc] == 0x6f && (pbVar9[0xd] == 0x6c)) &&
                 ((pbVar9[0xe] == 0x2d && ((pbVar9[0xf] == 0x61 && (pbVar9[0x10] == 0x6c)))))))) &&
               ((pbVar9[0x11] == 0x6c &&
                ((((pbVar9[0x12] == 0x6f && (pbVar9[0x13] == 0x77)) && (pbVar9[0x14] == 0x2d)) &&
                 ((pbVar9[0x15] == 99 && (pbVar9[0x16] == 0x72)))))))) &&
              ((((pbVar9[0x17] == 0x65 && ((pbVar9[0x18] == 100 && (pbVar9[0x19] == 0x65)))) &&
                (pbVar9[0x1a] == 0x6e)) &&
               ((((pbVar9[0x1b] == 0x74 && (pbVar9[0x1c] == 0x69)) && (pbVar9[0x1d] == 0x61)) &&
                ((pbVar9[0x1e] == 0x6c && (pbVar9[0x1f] == 0x73)))))))))) {
      return (byte *)0x5;
    }
    break;
  case 0x23:
    if (((((((*pbVar9 == 99) && (pbVar9[1] == 0x6f)) && (pbVar9[2] == 0x6e)) &&
          (((pbVar9[3] == 0x74 && (pbVar9[4] == 0x65)) &&
           ((pbVar9[5] == 0x6e && ((pbVar9[6] == 0x74 && (pbVar9[7] == 0x2d)))))))) &&
         (pbVar9[8] == 0x73)) &&
        (((((((pbVar9[9] == 0x65 && (pbVar9[10] == 99)) && (pbVar9[0xb] == 0x75)) &&
            ((pbVar9[0xc] == 0x72 && (pbVar9[0xd] == 0x69)))) && (pbVar9[0xe] == 0x74)) &&
          ((pbVar9[0xf] == 0x79 && (pbVar9[0x10] == 0x2d)))) &&
         (((((pbVar9[0x11] == 0x70 &&
             (((pbVar9[0x12] == 0x6f && (pbVar9[0x13] == 0x6c)) && (pbVar9[0x14] == 0x69)))) &&
            ((pbVar9[0x15] == 99 && (pbVar9[0x16] == 0x79)))) && (pbVar9[0x17] == 0x2d)) &&
          (((((pbVar9[0x18] == 0x72 && (pbVar9[0x19] == 0x65)) &&
             ((pbVar9[0x1a] == 0x70 &&
              (((pbVar9[0x1b] == 0x6f && (pbVar9[0x1c] == 0x72)) && (pbVar9[0x1d] == 0x74)))))) &&
            ((pbVar9[0x1e] == 0x2d && (pbVar9[0x1f] == 0x6f)))) && (pbVar9[0x20] == 0x6e)))))))) &&
       ((pbVar9[0x21] == 0x6c && (pbVar9[0x22] == 0x79)))) {
      return (byte *)0x1c;
    }
  }
  return (byte *)0x51;
}

