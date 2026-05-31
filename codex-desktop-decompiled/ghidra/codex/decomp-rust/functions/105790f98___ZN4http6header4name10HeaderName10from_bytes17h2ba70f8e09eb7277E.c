
/* WARNING: Possible PIC construction at 0x000105790c50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105790c54) */
/* WARNING: Removing unreachable block (ram,0x000105790c84) */
/* WARNING: Removing unreachable block (ram,0x000105790c60) */
/* WARNING: Removing unreachable block (ram,0x000105790cc4) */
/* WARNING: Removing unreachable block (ram,0x000105790d70) */
/* WARNING: Removing unreachable block (ram,0x000105790d74) */
/* WARNING: Removing unreachable block (ram,0x000105790d7c) */
/* WARNING: Removing unreachable block (ram,0x000105790d84) */
/* WARNING: Removing unreachable block (ram,0x000105790cd8) */
/* WARNING: Removing unreachable block (ram,0x000105790cdc) */
/* WARNING: Removing unreachable block (ram,0x000105790cec) */
/* WARNING: Removing unreachable block (ram,0x000105790d10) */
/* WARNING: Removing unreachable block (ram,0x000105790d1c) */
/* WARNING: Removing unreachable block (ram,0x000105790d90) */
/* WARNING: Removing unreachable block (ram,0x000105790d98) */
/* WARNING: Removing unreachable block (ram,0x000105790da0) */
/* WARNING: Removing unreachable block (ram,0x000105790da8) */
/* WARNING: Removing unreachable block (ram,0x000105790c68) */
/* WARNING: Removing unreachable block (ram,0x000105790c70) */
/* WARNING: Removing unreachable block (ram,0x000105790c78) */
/* WARNING: Removing unreachable block (ram,0x000105790c80) */
/* WARNING: Removing unreachable block (ram,0x000105790db0) */
/* WARNING: Removing unreachable block (ram,0x000105790dbc) */
/* WARNING: Removing unreachable block (ram,0x000105790de0) */
/* WARNING: Removing unreachable block (ram,0x000105790de4) */

byte * __ZN4http6header4name10HeaderName10from_bytes17h2ba70f8e09eb7277E
                 (undefined8 *param_1,byte *param_2,ulong param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
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
  
  pbVar6 = (byte *)&uStack_d0;
  if (param_3 == 0) {
LAB_105790df8:
    *param_1 = 1;
    return param_2;
  }
  if (param_3 < 0x41) {
    if (param_3 < 4) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_3 & 0x7c;
      puVar11 = (undefined1 *)((long)&uStack_d0 + 1);
      pbVar7 = param_2 + 1;
      uVar12 = uVar9;
      do {
        uVar2 = (&UNK_109a9d74f)[*pbVar7];
        uVar3 = (&UNK_109a9d74f)[pbVar7[1]];
        uVar4 = (&UNK_109a9d74f)[pbVar7[2]];
        puVar11[-1] = (&UNK_109a9d74f)[pbVar7[-1]];
        *puVar11 = uVar2;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11 = puVar11 + 4;
        pbVar7 = pbVar7 + 4;
        uVar12 = uVar12 - 4;
      } while (uVar12 != 0);
      if (param_3 == uVar9)
      goto __ZN4http6header4name14StandardHeader10from_bytes17h3191e913e3643622E;
    }
    lVar10 = param_3 - uVar9;
    puVar11 = (undefined1 *)((long)&uStack_d0 + uVar9);
    pbVar7 = param_2 + uVar9;
    do {
      *puVar11 = (&UNK_109a9d74f)[*pbVar7];
      lVar10 = lVar10 + -1;
      pbVar6 = (byte *)&uStack_d0;
      puVar11 = puVar11 + 1;
      pbVar7 = pbVar7 + 1;
    } while (lVar10 != 0);
__ZN4http6header4name14StandardHeader10from_bytes17h3191e913e3643622E:
    switch(param_3) {
    case 2:
      if ((*pbVar6 == 0x74) && (pbVar6[1] == 0x65)) {
        return (byte *)0x43;
      }
      break;
    case 3:
      bVar1 = *pbVar6;
      if (bVar1 == 0x61) {
        if ((pbVar6[1] == 0x67) && (pbVar6[2] == 0x65)) {
          return (byte *)0xd;
        }
      }
      else if (bVar1 == 100) {
        if ((pbVar6[1] == 0x6e) && (pbVar6[2] == 0x74)) {
          return (byte *)0x1f;
        }
      }
      else if (((bVar1 == 0x76) && (pbVar6[1] == 0x69)) && (pbVar6[2] == 0x61)) {
        return (byte *)0x4a;
      }
      break;
    case 4:
      bVar1 = *pbVar6;
      if (bVar1 < 0x68) {
        if (bVar1 == 100) {
          if (((pbVar6[1] == 0x61) && (pbVar6[2] == 0x74)) && (pbVar6[3] == 0x65)) {
            return (byte *)0x20;
          }
        }
        else if (bVar1 == 0x65) {
          if (((pbVar6[1] == 0x74) && (pbVar6[2] == 0x61)) && (pbVar6[3] == 0x67)) {
            return (byte *)0x21;
          }
        }
        else if (((bVar1 == 0x66) && (pbVar6[1] == 0x72)) &&
                ((pbVar6[2] == 0x6f && (pbVar6[3] == 0x6d)))) {
          return (byte *)0x25;
        }
      }
      else if (bVar1 == 0x68) {
        if (((pbVar6[1] == 0x6f) && (pbVar6[2] == 0x73)) && (pbVar6[3] == 0x74)) {
          return (byte *)0x26;
        }
      }
      else if (bVar1 == 0x6c) {
        if (((pbVar6[1] == 0x69) && (pbVar6[2] == 0x6e)) && (pbVar6[3] == 0x6b)) {
          return (byte *)0x2d;
        }
      }
      else if (((bVar1 == 0x76) && (pbVar6[1] == 0x61)) &&
              ((pbVar6[2] == 0x72 && (pbVar6[3] == 0x79)))) {
        return (byte *)0x49;
      }
      break;
    case 5:
      if (*pbVar6 == 0x61) {
        if (((pbVar6[1] == 0x6c) && (pbVar6[2] == 0x6c)) &&
           ((pbVar6[3] == 0x6f && (pbVar6[4] == 0x77)))) {
          return (byte *)0xe;
        }
      }
      else if (((*pbVar6 == 0x72) && (pbVar6[1] == 0x61)) &&
              ((pbVar6[2] == 0x6e && ((pbVar6[3] == 0x67 && (pbVar6[4] == 0x65)))))) {
        return (byte *)0x36;
      }
      break;
    case 6:
      bVar1 = *pbVar6;
      if (bVar1 < 0x6f) {
        if (bVar1 == 0x61) {
          if (((pbVar6[1] == 99) && (pbVar6[2] == 99)) &&
             ((pbVar6[3] == 0x65 && ((pbVar6[4] == 0x70 && (pbVar6[5] == 0x74)))))) {
            return (byte *)0x0;
          }
        }
        else if (bVar1 == 99) {
          if ((((pbVar6[1] == 0x6f) && (pbVar6[2] == 0x6f)) && (pbVar6[3] == 0x6b)) &&
             ((pbVar6[4] == 0x69 && (pbVar6[5] == 0x65)))) {
            return (byte *)0x1e;
          }
        }
        else if (((bVar1 == 0x65) && (pbVar6[1] == 0x78)) &&
                ((pbVar6[2] == 0x70 &&
                 (((pbVar6[3] == 0x65 && (pbVar6[4] == 99)) && (pbVar6[5] == 0x74)))))) {
          return (byte *)0x22;
        }
      }
      else if (bVar1 == 0x6f) {
        if (((pbVar6[1] == 0x72) && (pbVar6[2] == 0x69)) &&
           ((pbVar6[3] == 0x67 && ((pbVar6[4] == 0x69 && (pbVar6[5] == 0x6e)))))) {
          return (byte *)0x30;
        }
      }
      else if (bVar1 == 0x70) {
        if ((((pbVar6[1] == 0x72) && (pbVar6[2] == 0x61)) && (pbVar6[3] == 0x67)) &&
           ((pbVar6[4] == 0x6d && (pbVar6[5] == 0x61)))) {
          return (byte *)0x31;
        }
      }
      else if (((bVar1 == 0x73) && (pbVar6[1] == 0x65)) &&
              ((pbVar6[2] == 0x72 &&
               (((pbVar6[3] == 0x76 && (pbVar6[4] == 0x65)) && (pbVar6[5] == 0x72)))))) {
        return (byte *)0x40;
      }
      break;
    case 7:
      bVar1 = *pbVar6;
      if (bVar1 < 0x74) {
        if (bVar1 == 0x61) {
          if (((((pbVar6[1] == 0x6c) && (pbVar6[2] == 0x74)) && (pbVar6[3] == 0x2d)) &&
              ((pbVar6[4] == 0x73 && (pbVar6[5] == 0x76)))) && (pbVar6[6] == 99)) {
            return (byte *)0xf;
          }
        }
        else if (bVar1 == 0x65) {
          if (((pbVar6[1] == 0x78) && (pbVar6[2] == 0x70)) &&
             ((pbVar6[3] == 0x69 &&
              (((pbVar6[4] == 0x72 && (pbVar6[5] == 0x65)) && (pbVar6[6] == 0x73)))))) {
            return (byte *)0x23;
          }
        }
        else if (((bVar1 == 0x72) && (pbVar6[1] == 0x65)) && (pbVar6[2] == 0x66)) {
          if (pbVar6[3] == 0x72) {
            if (((pbVar6[4] == 0x65) && (pbVar6[5] == 0x73)) && (pbVar6[6] == 0x68)) {
              return (byte *)0x39;
            }
          }
          else if ((((pbVar6[3] == 0x65) && (pbVar6[4] == 0x72)) && (pbVar6[5] == 0x65)) &&
                  (pbVar6[6] == 0x72)) {
            return (byte *)0x37;
          }
        }
      }
      else if (bVar1 == 0x74) {
        if ((((pbVar6[1] == 0x72) && (pbVar6[2] == 0x61)) && (pbVar6[3] == 0x69)) &&
           (((pbVar6[4] == 0x6c && (pbVar6[5] == 0x65)) && (pbVar6[6] == 0x72)))) {
          return (byte *)0x44;
        }
      }
      else if (bVar1 == 0x75) {
        if (((pbVar6[1] == 0x70) && (pbVar6[2] == 0x67)) &&
           ((pbVar6[3] == 0x72 &&
            (((pbVar6[4] == 0x61 && (pbVar6[5] == 100)) && (pbVar6[6] == 0x65)))))) {
          return (byte *)0x47;
        }
      }
      else if ((((bVar1 == 0x77) && (pbVar6[1] == 0x61)) &&
               (((pbVar6[2] == 0x72 && ((pbVar6[3] == 0x6e && (pbVar6[4] == 0x69)))) &&
                (pbVar6[5] == 0x6e)))) && (pbVar6[6] == 0x67)) {
        return (byte *)0x4b;
      }
      break;
    case 8:
      if (*pbVar6 == 0x69) {
        if ((pbVar6[1] == 0x66) && (pbVar6[2] == 0x2d)) {
          if (pbVar6[3] == 0x72) {
            if ((((pbVar6[4] == 0x61) && (pbVar6[5] == 0x6e)) && (pbVar6[6] == 0x67)) &&
               (pbVar6[7] == 0x65)) {
              return (byte *)0x2a;
            }
          }
          else if (((pbVar6[3] == 0x6d) && (pbVar6[4] == 0x61)) &&
                  ((pbVar6[5] == 0x74 && ((pbVar6[6] == 99 && (pbVar6[7] == 0x68)))))) {
            return (byte *)0x27;
          }
        }
      }
      else if ((((((*pbVar6 == 0x6c) && (pbVar6[1] == 0x6f)) && (pbVar6[2] == 99)) &&
                ((pbVar6[3] == 0x61 && (pbVar6[4] == 0x74)))) && (pbVar6[5] == 0x69)) &&
              ((pbVar6[6] == 0x6f && (pbVar6[7] == 0x6e)))) {
        return (byte *)0x2e;
      }
      break;
    case 9:
      if (((*pbVar6 == 0x66) && (pbVar6[1] == 0x6f)) &&
         (((pbVar6[2] == 0x72 &&
           (((pbVar6[3] == 0x77 && (pbVar6[4] == 0x61)) && (pbVar6[5] == 0x72)))) &&
          (((pbVar6[6] == 100 && (pbVar6[7] == 0x65)) && (pbVar6[8] == 100)))))) {
        return (byte *)0x24;
      }
      break;
    case 10:
      bVar1 = *pbVar6;
      if (bVar1 == 99) {
        if ((((pbVar6[1] == 0x6f) && (pbVar6[2] == 0x6e)) &&
            ((pbVar6[3] == 0x6e &&
             (((pbVar6[4] == 0x65 && (pbVar6[5] == 99)) && (pbVar6[6] == 0x74)))))) &&
           (((pbVar6[7] == 0x69 && (pbVar6[8] == 0x6f)) && (pbVar6[9] == 0x6e)))) {
          return (byte *)0x14;
        }
      }
      else if (bVar1 == 0x73) {
        if ((((pbVar6[1] == 0x65) && (pbVar6[2] == 0x74)) &&
            ((pbVar6[3] == 0x2d &&
             (((pbVar6[4] == 99 && (pbVar6[5] == 0x6f)) && (pbVar6[6] == 0x6f)))))) &&
           (((pbVar6[7] == 0x6b && (pbVar6[8] == 0x69)) && (pbVar6[9] == 0x65)))) {
          return (byte *)0x41;
        }
      }
      else if (((((bVar1 == 0x75) && (pbVar6[1] == 0x73)) &&
                ((pbVar6[2] == 0x65 &&
                 ((((pbVar6[3] == 0x72 && (pbVar6[4] == 0x2d)) && (pbVar6[5] == 0x61)) &&
                  ((pbVar6[6] == 0x67 && (pbVar6[7] == 0x65)))))))) && (pbVar6[8] == 0x6e)) &&
              (pbVar6[9] == 0x74)) {
        return (byte *)0x46;
      }
      break;
    case 0xb:
      if ((((*pbVar6 == 0x72) && (pbVar6[1] == 0x65)) &&
          (((pbVar6[2] == 0x74 && ((pbVar6[3] == 0x72 && (pbVar6[4] == 0x79)))) &&
           (pbVar6[5] == 0x2d)))) &&
         ((((pbVar6[6] == 0x61 && (pbVar6[7] == 0x66)) && (pbVar6[8] == 0x74)) &&
          ((pbVar6[9] == 0x65 && (pbVar6[10] == 0x72)))))) {
        return (byte *)0x3a;
      }
      break;
    case 0xc:
      if (*pbVar6 == 99) {
        if (pbVar6[1] == 0x61) {
          if (((((pbVar6[2] == 99) && (pbVar6[3] == 0x68)) && (pbVar6[4] == 0x65)) &&
              ((pbVar6[5] == 0x2d && (pbVar6[6] == 0x73)))) &&
             (((pbVar6[7] == 0x74 && ((pbVar6[8] == 0x61 && (pbVar6[9] == 0x74)))) &&
              ((pbVar6[10] == 0x75 && (pbVar6[0xb] == 0x73)))))) {
            return (byte *)0x12;
          }
        }
        else if (((((((pbVar6[1] == 0x6f) && (pbVar6[2] == 0x6e)) && (pbVar6[3] == 0x74)) &&
                   ((pbVar6[4] == 0x65 && (pbVar6[5] == 0x6e)))) && (pbVar6[6] == 0x74)) &&
                 ((pbVar6[7] == 0x2d && (pbVar6[8] == 0x74)))) &&
                ((pbVar6[9] == 0x79 && ((pbVar6[10] == 0x70 && (pbVar6[0xb] == 0x65)))))) {
          return (byte *)0x1d;
        }
      }
      else if ((((*pbVar6 == 0x6d) && (pbVar6[1] == 0x61)) && (pbVar6[2] == 0x78)) &&
              (((((pbVar6[3] == 0x2d && (pbVar6[4] == 0x66)) &&
                 ((pbVar6[5] == 0x6f && ((pbVar6[6] == 0x72 && (pbVar6[7] == 0x77)))))) &&
                (pbVar6[8] == 0x61)) &&
               (((pbVar6[9] == 0x72 && (pbVar6[10] == 100)) && (pbVar6[0xb] == 0x73)))))) {
        return (byte *)0x2f;
      }
      break;
    case 0xd:
      bVar1 = *pbVar6;
      if (bVar1 < 0x69) {
        if (bVar1 == 0x61) {
          if (pbVar6[1] == 99) {
            if ((((pbVar6[2] == 99) && (pbVar6[3] == 0x65)) &&
                ((pbVar6[4] == 0x70 &&
                 (((pbVar6[5] == 0x74 && (pbVar6[6] == 0x2d)) && (pbVar6[7] == 0x72)))))) &&
               ((((pbVar6[8] == 0x61 && (pbVar6[9] == 0x6e)) && (pbVar6[10] == 0x67)) &&
                ((pbVar6[0xb] == 0x65 && (pbVar6[0xc] == 0x73)))))) {
              return (byte *)0x4;
            }
          }
          else if (((((pbVar6[1] == 0x75) && (pbVar6[2] == 0x74)) && (pbVar6[3] == 0x68)) &&
                   ((pbVar6[4] == 0x6f && (pbVar6[5] == 0x72)))) &&
                  ((((pbVar6[6] == 0x69 && ((pbVar6[7] == 0x7a && (pbVar6[8] == 0x61)))) &&
                    (pbVar6[9] == 0x74)) &&
                   (((pbVar6[10] == 0x69 && (pbVar6[0xb] == 0x6f)) && (pbVar6[0xc] == 0x6e)))))) {
            return (byte *)0x10;
          }
        }
        else if (bVar1 == 99) {
          if (pbVar6[1] == 0x61) {
            if ((((pbVar6[2] == 99) && (pbVar6[3] == 0x68)) &&
                ((pbVar6[4] == 0x65 && ((pbVar6[5] == 0x2d && (pbVar6[6] == 99)))))) &&
               ((pbVar6[7] == 0x6f &&
                ((((pbVar6[8] == 0x6e && (pbVar6[9] == 0x74)) && (pbVar6[10] == 0x72)) &&
                 ((pbVar6[0xb] == 0x6f && (pbVar6[0xc] == 0x6c)))))))) {
              return (byte *)0x11;
            }
          }
          else if ((((pbVar6[1] == 0x6f) && (pbVar6[2] == 0x6e)) &&
                   ((pbVar6[3] == 0x74 &&
                    (((pbVar6[4] == 0x65 && (pbVar6[5] == 0x6e)) && (pbVar6[6] == 0x74)))))) &&
                  (((((pbVar6[7] == 0x2d && (pbVar6[8] == 0x72)) && (pbVar6[9] == 0x61)) &&
                    ((pbVar6[10] == 0x6e && (pbVar6[0xb] == 0x67)))) && (pbVar6[0xc] == 0x65)))) {
            return (byte *)0x1a;
          }
        }
      }
      else if (bVar1 == 0x69) {
        if ((((((pbVar6[1] == 0x66) && (pbVar6[2] == 0x2d)) && (pbVar6[3] == 0x6e)) &&
             ((pbVar6[4] == 0x6f && (pbVar6[5] == 0x6e)))) &&
            ((pbVar6[6] == 0x65 && ((pbVar6[7] == 0x2d && (pbVar6[8] == 0x6d)))))) &&
           ((pbVar6[9] == 0x61 &&
            (((pbVar6[10] == 0x74 && (pbVar6[0xb] == 99)) && (pbVar6[0xc] == 0x68)))))) {
          return (byte *)0x29;
        }
      }
      else if ((((bVar1 == 0x6c) && (pbVar6[1] == 0x61)) &&
               ((pbVar6[2] == 0x73 && ((pbVar6[3] == 0x74 && (pbVar6[4] == 0x2d)))))) &&
              ((pbVar6[5] == 0x6d &&
               (((((pbVar6[6] == 0x6f && (pbVar6[7] == 100)) && (pbVar6[8] == 0x69)) &&
                 ((pbVar6[9] == 0x66 && (pbVar6[10] == 0x69)))) &&
                ((pbVar6[0xb] == 0x65 && (pbVar6[0xc] == 100)))))))) {
        return (byte *)0x2c;
      }
      break;
    case 0xe:
      if (*pbVar6 == 0x61) {
        if ((((pbVar6[1] == 99) && (pbVar6[2] == 99)) &&
            (((pbVar6[3] == 0x65 && ((pbVar6[4] == 0x70 && (pbVar6[5] == 0x74)))) &&
             (pbVar6[6] == 0x2d)))) &&
           ((((((pbVar6[7] == 99 && (pbVar6[8] == 0x68)) && (pbVar6[9] == 0x61)) &&
              ((pbVar6[10] == 0x72 && (pbVar6[0xb] == 0x73)))) && (pbVar6[0xc] == 0x65)) &&
            (pbVar6[0xd] == 0x74)))) {
          return (byte *)0x1;
        }
      }
      else if (((((*pbVar6 == 99) && (pbVar6[1] == 0x6f)) &&
                ((pbVar6[2] == 0x6e &&
                 (((pbVar6[3] == 0x74 && (pbVar6[4] == 0x65)) && (pbVar6[5] == 0x6e)))))) &&
               ((pbVar6[6] == 0x74 && (pbVar6[7] == 0x2d)))) &&
              ((pbVar6[8] == 0x6c &&
               (((pbVar6[9] == 0x65 && (pbVar6[10] == 0x6e)) &&
                ((pbVar6[0xb] == 0x67 && ((pbVar6[0xc] == 0x74 && (pbVar6[0xd] == 0x68)))))))))) {
        return (byte *)0x18;
      }
      break;
    case 0xf:
      bVar1 = *pbVar6;
      if (bVar1 < 0x72) {
        if (bVar1 == 0x61) {
          if ((((pbVar6[1] == 99) && (pbVar6[2] == 99)) &&
              ((pbVar6[3] == 0x65 && ((pbVar6[4] == 0x70 && (pbVar6[5] == 0x74)))))) &&
             (pbVar6[6] == 0x2d)) {
            if (pbVar6[7] == 0x6c) {
              if ((((pbVar6[8] == 0x61) && (pbVar6[9] == 0x6e)) && (pbVar6[10] == 0x67)) &&
                 (((pbVar6[0xb] == 0x75 && (pbVar6[0xc] == 0x61)) &&
                  ((pbVar6[0xd] == 0x67 && (pbVar6[0xe] == 0x65)))))) {
                return (byte *)0x3;
              }
            }
            else if (((pbVar6[7] == 0x65) && (pbVar6[8] == 0x6e)) &&
                    ((pbVar6[9] == 99 &&
                     ((((pbVar6[10] == 0x6f && (pbVar6[0xb] == 100)) && (pbVar6[0xc] == 0x69)) &&
                      ((pbVar6[0xd] == 0x6e && (pbVar6[0xe] == 0x67)))))))) {
              return (byte *)0x2;
            }
          }
        }
        else if (((bVar1 == 0x70) && (pbVar6[1] == 0x75)) &&
                ((((pbVar6[2] == 0x62 &&
                   (((pbVar6[3] == 0x6c && (pbVar6[4] == 0x69)) && (pbVar6[5] == 99)))) &&
                  (((pbVar6[6] == 0x2d && (pbVar6[7] == 0x6b)) && (pbVar6[8] == 0x65)))) &&
                 (((pbVar6[9] == 0x79 && (pbVar6[10] == 0x2d)) &&
                  ((pbVar6[0xb] == 0x70 &&
                   (((pbVar6[0xc] == 0x69 && (pbVar6[0xd] == 0x6e)) && (pbVar6[0xe] == 0x73)))))))))
                ) {
          return (byte *)0x34;
        }
      }
      else if (bVar1 == 0x72) {
        if ((((((pbVar6[1] == 0x65) && (pbVar6[2] == 0x66)) && (pbVar6[3] == 0x65)) &&
             ((pbVar6[4] == 0x72 && (pbVar6[5] == 0x72)))) &&
            (((pbVar6[6] == 0x65 && ((pbVar6[7] == 0x72 && (pbVar6[8] == 0x2d)))) &&
             ((pbVar6[9] == 0x70 &&
              (((pbVar6[10] == 0x6f && (pbVar6[0xb] == 0x6c)) && (pbVar6[0xc] == 0x69)))))))) &&
           ((pbVar6[0xd] == 99 && (pbVar6[0xe] == 0x79)))) {
          return (byte *)0x38;
        }
      }
      else if ((((((bVar1 == 0x78) && (pbVar6[1] == 0x2d)) &&
                 ((pbVar6[2] == 0x66 &&
                  ((((pbVar6[3] == 0x72 && (pbVar6[4] == 0x61)) && (pbVar6[5] == 0x6d)) &&
                   ((pbVar6[6] == 0x65 && (pbVar6[7] == 0x2d)))))))) && (pbVar6[8] == 0x6f)) &&
               ((pbVar6[9] == 0x70 && (pbVar6[10] == 0x74)))) &&
              ((pbVar6[0xb] == 0x69 &&
               (((pbVar6[0xc] == 0x6f && (pbVar6[0xd] == 0x6e)) && (pbVar6[0xe] == 0x73)))))) {
        return (byte *)0x4f;
      }
      break;
    case 0x10:
      bVar1 = *pbVar6;
      if (bVar1 == 99) {
        if ((((pbVar6[1] == 0x6f) && (pbVar6[2] == 0x6e)) &&
            ((pbVar6[3] == 0x74 &&
             (((pbVar6[4] == 0x65 && (pbVar6[5] == 0x6e)) && (pbVar6[6] == 0x74)))))) &&
           (pbVar6[7] == 0x2d)) {
          if (pbVar6[8] == 0x6c) {
            if (pbVar6[9] == 0x61) {
              if (((pbVar6[10] == 0x6e) && (pbVar6[0xb] == 0x67)) &&
                 (((pbVar6[0xc] == 0x75 && ((pbVar6[0xd] == 0x61 && (pbVar6[0xe] == 0x67)))) &&
                  (pbVar6[0xf] == 0x65)))) {
                return (byte *)0x17;
              }
            }
            else if (((((pbVar6[9] == 0x6f) && (pbVar6[10] == 99)) && (pbVar6[0xb] == 0x61)) &&
                     ((pbVar6[0xc] == 0x74 && (pbVar6[0xd] == 0x69)))) &&
                    ((pbVar6[0xe] == 0x6f && (pbVar6[0xf] == 0x6e)))) {
              return (byte *)0x19;
            }
          }
          else if ((((pbVar6[8] == 0x65) && (pbVar6[9] == 0x6e)) &&
                   ((pbVar6[10] == 99 &&
                    (((pbVar6[0xb] == 0x6f && (pbVar6[0xc] == 100)) && (pbVar6[0xd] == 0x69)))))) &&
                  ((pbVar6[0xe] == 0x6e && (pbVar6[0xf] == 0x67)))) {
            return (byte *)0x16;
          }
        }
      }
      else if (bVar1 == 0x77) {
        if ((((pbVar6[1] == 0x77) && (pbVar6[2] == 0x77)) &&
            ((pbVar6[3] == 0x2d &&
             (((pbVar6[4] == 0x61 && (pbVar6[5] == 0x75)) && (pbVar6[6] == 0x74)))))) &&
           (((pbVar6[7] == 0x68 && (pbVar6[8] == 0x65)) &&
            ((pbVar6[9] == 0x6e &&
             (((pbVar6[10] == 0x74 && (pbVar6[0xb] == 0x69)) &&
              ((pbVar6[0xc] == 99 &&
               (((pbVar6[0xd] == 0x61 && (pbVar6[0xe] == 0x74)) && (pbVar6[0xf] == 0x65))))))))))))
        {
          return (byte *)0x4c;
        }
      }
      else if (((bVar1 == 0x78) && (pbVar6[1] == 0x2d)) &&
              ((((pbVar6[2] == 0x78 && ((pbVar6[3] == 0x73 && (pbVar6[4] == 0x73)))) &&
                (pbVar6[5] == 0x2d)) &&
               ((((((pbVar6[6] == 0x70 && (pbVar6[7] == 0x72)) && (pbVar6[8] == 0x6f)) &&
                  ((pbVar6[9] == 0x74 && (pbVar6[10] == 0x65)))) && (pbVar6[0xb] == 99)) &&
                (((pbVar6[0xc] == 0x74 && (pbVar6[0xd] == 0x69)) &&
                 ((pbVar6[0xe] == 0x6f && (pbVar6[0xf] == 0x6e)))))))))) {
        return (byte *)0x50;
      }
      break;
    case 0x11:
      bVar1 = *pbVar6;
      if (bVar1 < 0x73) {
        if (bVar1 == 99) {
          if ((((((pbVar6[1] == 100) && (pbVar6[2] == 0x6e)) && (pbVar6[3] == 0x2d)) &&
               (((pbVar6[4] == 99 && (pbVar6[5] == 0x61)) &&
                ((pbVar6[6] == 99 && ((pbVar6[7] == 0x68 && (pbVar6[8] == 0x65)))))))) &&
              ((pbVar6[9] == 0x2d &&
               (((pbVar6[10] == 99 && (pbVar6[0xb] == 0x6f)) && (pbVar6[0xc] == 0x6e)))))) &&
             (((pbVar6[0xd] == 0x74 && (pbVar6[0xe] == 0x72)) &&
              ((pbVar6[0xf] == 0x6f && (pbVar6[0x10] == 0x6c)))))) {
            return (byte *)0x13;
          }
        }
        else if ((((bVar1 == 0x69) && (pbVar6[1] == 0x66)) &&
                 ((pbVar6[2] == 0x2d &&
                  ((((pbVar6[3] == 0x6d && (pbVar6[4] == 0x6f)) && (pbVar6[5] == 100)) &&
                   ((pbVar6[6] == 0x69 && (pbVar6[7] == 0x66)))))))) &&
                (((pbVar6[8] == 0x69 && ((pbVar6[9] == 0x65 && (pbVar6[10] == 100)))) &&
                 (((pbVar6[0xb] == 0x2d &&
                   (((pbVar6[0xc] == 0x73 && (pbVar6[0xd] == 0x69)) && (pbVar6[0xe] == 0x6e)))) &&
                  ((pbVar6[0xf] == 99 && (pbVar6[0x10] == 0x65)))))))) {
          return (byte *)0x28;
        }
      }
      else if (bVar1 == 0x73) {
        if ((((pbVar6[1] == 0x65) && (pbVar6[2] == 99)) &&
            (((((pbVar6[3] == 0x2d &&
                (((pbVar6[4] == 0x77 && (pbVar6[5] == 0x65)) && (pbVar6[6] == 0x62)))) &&
               (((pbVar6[7] == 0x73 && (pbVar6[8] == 0x6f)) && (pbVar6[9] == 99)))) &&
              ((pbVar6[10] == 0x6b && (pbVar6[0xb] == 0x65)))) &&
             ((pbVar6[0xc] == 0x74 &&
              (((pbVar6[0xd] == 0x2d && (pbVar6[0xe] == 0x6b)) && (pbVar6[0xf] == 0x65)))))))) &&
           (pbVar6[0x10] == 0x79)) {
          return (byte *)0x3d;
        }
      }
      else if (((((bVar1 == 0x74) && (pbVar6[1] == 0x72)) &&
                (((pbVar6[2] == 0x61 && ((pbVar6[3] == 0x6e && (pbVar6[4] == 0x73)))) &&
                 (pbVar6[5] == 0x66)))) &&
               ((((((pbVar6[6] == 0x65 && (pbVar6[7] == 0x72)) && (pbVar6[8] == 0x2d)) &&
                  ((pbVar6[9] == 0x65 && (pbVar6[10] == 0x6e)))) && (pbVar6[0xb] == 99)) &&
                ((pbVar6[0xc] == 0x6f && (pbVar6[0xd] == 100)))))) &&
              ((pbVar6[0xe] == 0x69 && ((pbVar6[0xf] == 0x6e && (pbVar6[0x10] == 0x67)))))) {
        return (byte *)0x45;
      }
      break;
    case 0x12:
      if ((((*pbVar6 == 0x70) && (pbVar6[1] == 0x72)) &&
          ((pbVar6[2] == 0x6f &&
           (((pbVar6[3] == 0x78 && (pbVar6[4] == 0x79)) && (pbVar6[5] == 0x2d)))))) &&
         (((pbVar6[6] == 0x61 && (pbVar6[7] == 0x75)) &&
          ((pbVar6[8] == 0x74 &&
           ((((pbVar6[9] == 0x68 && (pbVar6[10] == 0x65)) &&
             ((pbVar6[0xb] == 0x6e &&
              ((((pbVar6[0xc] == 0x74 && (pbVar6[0xd] == 0x69)) && (pbVar6[0xe] == 99)) &&
               ((pbVar6[0xf] == 0x61 && (pbVar6[0x10] == 0x74)))))))) && (pbVar6[0x11] == 0x65))))))
         )) {
        return (byte *)0x32;
      }
      break;
    case 0x13:
      bVar1 = *pbVar6;
      if (bVar1 == 99) {
        if ((((pbVar6[1] == 0x6f) && (pbVar6[2] == 0x6e)) &&
            ((pbVar6[3] == 0x74 &&
             (((pbVar6[4] == 0x65 && (pbVar6[5] == 0x6e)) && (pbVar6[6] == 0x74)))))) &&
           (((pbVar6[7] == 0x2d && (pbVar6[8] == 100)) &&
            ((pbVar6[9] == 0x69 &&
             (((pbVar6[10] == 0x73 && (pbVar6[0xb] == 0x70)) &&
              ((pbVar6[0xc] == 0x6f &&
               (((((pbVar6[0xd] == 0x73 && (pbVar6[0xe] == 0x69)) && (pbVar6[0xf] == 0x74)) &&
                 ((pbVar6[0x10] == 0x69 && (pbVar6[0x11] == 0x6f)))) && (pbVar6[0x12] == 0x6e)))))))
             ))))) {
          return (byte *)0x15;
        }
      }
      else if (bVar1 == 0x69) {
        if (((((pbVar6[1] == 0x66) && (pbVar6[2] == 0x2d)) &&
             ((pbVar6[3] == 0x75 &&
              (((pbVar6[4] == 0x6e && (pbVar6[5] == 0x6d)) && (pbVar6[6] == 0x6f)))))) &&
            ((((pbVar6[7] == 100 && (pbVar6[8] == 0x69)) && (pbVar6[9] == 0x66)) &&
             ((pbVar6[10] == 0x69 && (pbVar6[0xb] == 0x65)))))) &&
           ((((pbVar6[0xc] == 100 &&
              (((pbVar6[0xd] == 0x2d && (pbVar6[0xe] == 0x73)) && (pbVar6[0xf] == 0x69)))) &&
             ((pbVar6[0x10] == 0x6e && (pbVar6[0x11] == 99)))) && (pbVar6[0x12] == 0x65)))) {
          return (byte *)0x2b;
        }
      }
      else if (((((bVar1 == 0x70) && (pbVar6[1] == 0x72)) &&
                ((pbVar6[2] == 0x6f &&
                 ((((pbVar6[3] == 0x78 && (pbVar6[4] == 0x79)) && (pbVar6[5] == 0x2d)) &&
                  ((pbVar6[6] == 0x61 && (pbVar6[7] == 0x75)))))))) &&
               ((pbVar6[8] == 0x74 && ((pbVar6[9] == 0x68 && (pbVar6[10] == 0x6f)))))) &&
              (((pbVar6[0xb] == 0x72 &&
                (((pbVar6[0xc] == 0x69 && (pbVar6[0xd] == 0x7a)) && (pbVar6[0xe] == 0x61)))) &&
               ((((pbVar6[0xf] == 0x74 && (pbVar6[0x10] == 0x69)) && (pbVar6[0x11] == 0x6f)) &&
                (pbVar6[0x12] == 0x6e)))))) {
        return (byte *)0x33;
      }
      break;
    case 0x14:
      if ((((((*pbVar6 == 0x73) && (pbVar6[1] == 0x65)) &&
            ((pbVar6[2] == 99 && ((pbVar6[3] == 0x2d && (pbVar6[4] == 0x77)))))) &&
           (pbVar6[5] == 0x65)) &&
          (((((pbVar6[6] == 0x62 && (pbVar6[7] == 0x73)) && (pbVar6[8] == 0x6f)) &&
            ((pbVar6[9] == 99 && (pbVar6[10] == 0x6b)))) &&
           ((pbVar6[0xb] == 0x65 && ((pbVar6[0xc] == 0x74 && (pbVar6[0xd] == 0x2d)))))))) &&
         (((pbVar6[0xe] == 0x61 &&
           (((pbVar6[0xf] == 99 && (pbVar6[0x10] == 99)) && (pbVar6[0x11] == 0x65)))) &&
          ((pbVar6[0x12] == 0x70 && (pbVar6[0x13] == 0x74)))))) {
        return (byte *)0x3b;
      }
      break;
    case 0x15:
      if (((((*pbVar6 == 0x73) && (pbVar6[1] == 0x65)) && (pbVar6[2] == 99)) &&
          (((pbVar6[3] == 0x2d && (pbVar6[4] == 0x77)) &&
           ((pbVar6[5] == 0x65 && ((pbVar6[6] == 0x62 && (pbVar6[7] == 0x73)))))))) &&
         ((pbVar6[8] == 0x6f &&
          (((((((pbVar6[9] == 99 && (pbVar6[10] == 0x6b)) && (pbVar6[0xb] == 0x65)) &&
              ((pbVar6[0xc] == 0x74 && (pbVar6[0xd] == 0x2d)))) &&
             ((pbVar6[0xe] == 0x76 && ((pbVar6[0xf] == 0x65 && (pbVar6[0x10] == 0x72)))))) &&
            (pbVar6[0x11] == 0x73)) &&
           (((pbVar6[0x12] == 0x69 && (pbVar6[0x13] == 0x6f)) && (pbVar6[0x14] == 0x6e)))))))) {
        return (byte *)0x3f;
      }
      break;
    case 0x16:
      bVar1 = *pbVar6;
      if (bVar1 == 0x61) {
        if ((((((pbVar6[1] == 99) && (pbVar6[2] == 99)) &&
              ((pbVar6[3] == 0x65 &&
               (((pbVar6[4] == 0x73 && (pbVar6[5] == 0x73)) && (pbVar6[6] == 0x2d)))))) &&
             ((pbVar6[7] == 99 && (pbVar6[8] == 0x6f)))) &&
            ((pbVar6[9] == 0x6e &&
             (((pbVar6[10] == 0x74 && (pbVar6[0xb] == 0x72)) &&
              ((pbVar6[0xc] == 0x6f &&
               ((((pbVar6[0xd] == 0x6c && (pbVar6[0xe] == 0x2d)) && (pbVar6[0xf] == 0x6d)) &&
                ((pbVar6[0x10] == 0x61 && (pbVar6[0x11] == 0x78)))))))))))) &&
           ((pbVar6[0x12] == 0x2d &&
            (((pbVar6[0x13] == 0x61 && (pbVar6[0x14] == 0x67)) && (pbVar6[0x15] == 0x65)))))) {
          return (byte *)0xa;
        }
      }
      else if (bVar1 == 0x73) {
        if ((((((pbVar6[1] == 0x65) && (pbVar6[2] == 99)) && (pbVar6[3] == 0x2d)) &&
             (((pbVar6[4] == 0x77 && (pbVar6[5] == 0x65)) &&
              ((pbVar6[6] == 0x62 && ((pbVar6[7] == 0x73 && (pbVar6[8] == 0x6f)))))))) &&
            (((pbVar6[9] == 99 &&
              (((pbVar6[10] == 0x6b && (pbVar6[0xb] == 0x65)) && (pbVar6[0xc] == 0x74)))) &&
             (((pbVar6[0xd] == 0x2d && (pbVar6[0xe] == 0x70)) &&
              (((pbVar6[0xf] == 0x72 && ((pbVar6[0x10] == 0x6f && (pbVar6[0x11] == 0x74)))) &&
               (pbVar6[0x12] == 0x6f)))))))) &&
           (((pbVar6[0x13] == 99 && (pbVar6[0x14] == 0x6f)) && (pbVar6[0x15] == 0x6c)))) {
          return (byte *)0x3e;
        }
      }
      else if ((bVar1 == 0x78) && (pbVar6[1] == 0x2d)) {
        if (pbVar6[2] == 100) {
          if ((((((pbVar6[3] == 0x6e) && (pbVar6[4] == 0x73)) &&
                ((pbVar6[5] == 0x2d &&
                 (((((pbVar6[6] == 0x70 && (pbVar6[7] == 0x72)) && (pbVar6[8] == 0x65)) &&
                   ((pbVar6[9] == 0x66 && (pbVar6[10] == 0x65)))) && (pbVar6[0xb] == 0x74)))))) &&
               ((pbVar6[0xc] == 99 && (pbVar6[0xd] == 0x68)))) && (pbVar6[0xe] == 0x2d)) &&
             ((((pbVar6[0xf] == 99 && (pbVar6[0x10] == 0x6f)) && (pbVar6[0x11] == 0x6e)) &&
              (((pbVar6[0x12] == 0x74 && (pbVar6[0x13] == 0x72)) &&
               ((pbVar6[0x14] == 0x6f && (pbVar6[0x15] == 0x6c)))))))) {
            return (byte *)0x4e;
          }
        }
        else if ((((((pbVar6[2] == 99) && (pbVar6[3] == 0x6f)) &&
                   ((pbVar6[4] == 0x6e &&
                    (((pbVar6[5] == 0x74 && (pbVar6[6] == 0x65)) && (pbVar6[7] == 0x6e)))))) &&
                  (((pbVar6[8] == 0x74 && (pbVar6[9] == 0x2d)) && (pbVar6[10] == 0x74)))) &&
                 ((pbVar6[0xb] == 0x79 && (pbVar6[0xc] == 0x70)))) &&
                ((((pbVar6[0xd] == 0x65 &&
                   ((((pbVar6[0xe] == 0x2d && (pbVar6[0xf] == 0x6f)) && (pbVar6[0x10] == 0x70)) &&
                    ((pbVar6[0x11] == 0x74 && (pbVar6[0x12] == 0x69)))))) && (pbVar6[0x13] == 0x6f))
                 && ((pbVar6[0x14] == 0x6e && (pbVar6[0x15] == 0x73)))))) {
          return (byte *)0x4d;
        }
      }
      break;
    case 0x17:
      if (((((*pbVar6 == 99) && (pbVar6[1] == 0x6f)) && (pbVar6[2] == 0x6e)) &&
          ((pbVar6[3] == 0x74 && (pbVar6[4] == 0x65)))) &&
         (((pbVar6[5] == 0x6e && ((pbVar6[6] == 0x74 && (pbVar6[7] == 0x2d)))) &&
          (((pbVar6[8] == 0x73 &&
            ((((pbVar6[9] == 0x65 && (pbVar6[10] == 99)) && (pbVar6[0xb] == 0x75)) &&
             ((pbVar6[0xc] == 0x72 && (pbVar6[0xd] == 0x69)))))) &&
           ((((pbVar6[0xe] == 0x74 && ((pbVar6[0xf] == 0x79 && (pbVar6[0x10] == 0x2d)))) &&
             (pbVar6[0x11] == 0x70)) &&
            ((((pbVar6[0x12] == 0x6f && (pbVar6[0x13] == 0x6c)) && (pbVar6[0x14] == 0x69)) &&
             ((pbVar6[0x15] == 99 && (pbVar6[0x16] == 0x79)))))))))))) {
        return (byte *)0x1b;
      }
      break;
    case 0x18:
      if (((((*pbVar6 == 0x73) && (pbVar6[1] == 0x65)) &&
           ((pbVar6[2] == 99 && ((pbVar6[3] == 0x2d && (pbVar6[4] == 0x77)))))) &&
          ((pbVar6[5] == 0x65 &&
           ((((((((pbVar6[6] == 0x62 && (pbVar6[7] == 0x73)) && (pbVar6[8] == 0x6f)) &&
                ((pbVar6[9] == 99 && (pbVar6[10] == 0x6b)))) && (pbVar6[0xb] == 0x65)) &&
              ((pbVar6[0xc] == 0x74 && (pbVar6[0xd] == 0x2d)))) && (pbVar6[0xe] == 0x65)) &&
            (((pbVar6[0xf] == 0x78 && (pbVar6[0x10] == 0x74)) && (pbVar6[0x11] == 0x65)))))))) &&
         ((((pbVar6[0x12] == 0x6e && (pbVar6[0x13] == 0x73)) &&
           ((pbVar6[0x14] == 0x69 && ((pbVar6[0x15] == 0x6f && (pbVar6[0x16] == 0x6e)))))) &&
          (pbVar6[0x17] == 0x73)))) {
        return (byte *)0x3c;
      }
      break;
    case 0x19:
      if (*pbVar6 == 0x73) {
        if ((((((((pbVar6[1] == 0x74) && (pbVar6[2] == 0x72)) && (pbVar6[3] == 0x69)) &&
               ((pbVar6[4] == 99 && (pbVar6[5] == 0x74)))) &&
              ((pbVar6[6] == 0x2d && ((pbVar6[7] == 0x74 && (pbVar6[8] == 0x72)))))) &&
             ((pbVar6[9] == 0x61 &&
              ((((pbVar6[10] == 0x6e && (pbVar6[0xb] == 0x73)) && (pbVar6[0xc] == 0x70)) &&
               ((pbVar6[0xd] == 0x6f && (pbVar6[0xe] == 0x72)))))))) &&
            (((pbVar6[0xf] == 0x74 && ((pbVar6[0x10] == 0x2d && (pbVar6[0x11] == 0x73)))) &&
             (pbVar6[0x12] == 0x65)))) &&
           ((((pbVar6[0x13] == 99 && (pbVar6[0x14] == 0x75)) && (pbVar6[0x15] == 0x72)) &&
            (((pbVar6[0x16] == 0x69 && (pbVar6[0x17] == 0x74)) && (pbVar6[0x18] == 0x79)))))) {
          return (byte *)0x42;
        }
      }
      else if (((((*pbVar6 == 0x75) && (pbVar6[1] == 0x70)) &&
                ((pbVar6[2] == 0x67 &&
                 ((((pbVar6[3] == 0x72 && (pbVar6[4] == 0x61)) && (pbVar6[5] == 100)) &&
                  ((pbVar6[6] == 0x65 && (pbVar6[7] == 0x2d)))))))) && (pbVar6[8] == 0x69)) &&
              ((((pbVar6[9] == 0x6e && (pbVar6[10] == 0x73)) &&
                ((pbVar6[0xb] == 0x65 &&
                 (((pbVar6[0xc] == 99 && (pbVar6[0xd] == 0x75)) && (pbVar6[0xe] == 0x72)))))) &&
               (((((pbVar6[0xf] == 0x65 && (pbVar6[0x10] == 0x2d)) && (pbVar6[0x11] == 0x72)) &&
                 ((pbVar6[0x12] == 0x65 && (pbVar6[0x13] == 0x71)))) &&
                (((pbVar6[0x14] == 0x75 &&
                  (((pbVar6[0x15] == 0x65 && (pbVar6[0x16] == 0x73)) && (pbVar6[0x17] == 0x74)))) &&
                 (pbVar6[0x18] == 0x73)))))))) {
        return (byte *)0x48;
      }
      break;
    case 0x1b:
      if (*pbVar6 == 0x61) {
        if ((((pbVar6[1] == 99) && (pbVar6[2] == 99)) &&
            ((pbVar6[3] == 0x65 && ((pbVar6[4] == 0x73 && (pbVar6[5] == 0x73)))))) &&
           (((pbVar6[6] == 0x2d &&
             (((pbVar6[7] == 99 && (pbVar6[8] == 0x6f)) && (pbVar6[9] == 0x6e)))) &&
            ((((((((pbVar6[10] == 0x74 && (pbVar6[0xb] == 0x72)) &&
                  ((pbVar6[0xc] == 0x6f && ((pbVar6[0xd] == 0x6c && (pbVar6[0xe] == 0x2d)))))) &&
                 (pbVar6[0xf] == 0x61)) &&
                (((pbVar6[0x10] == 0x6c && (pbVar6[0x11] == 0x6c)) && (pbVar6[0x12] == 0x6f)))) &&
               ((pbVar6[0x13] == 0x77 && (pbVar6[0x14] == 0x2d)))) &&
              (((pbVar6[0x15] == 0x6f && ((pbVar6[0x16] == 0x72 && (pbVar6[0x17] == 0x69)))) &&
               (pbVar6[0x18] == 0x67)))) && ((pbVar6[0x19] == 0x69 && (pbVar6[0x1a] == 0x6e))))))))
        {
          return (byte *)0x8;
        }
      }
      else if (((((((((*pbVar6 == 0x70) && (pbVar6[1] == 0x75)) && (pbVar6[2] == 0x62)) &&
                   ((pbVar6[3] == 0x6c && (pbVar6[4] == 0x69)))) && (pbVar6[5] == 99)) &&
                 (((pbVar6[6] == 0x2d && (pbVar6[7] == 0x6b)) &&
                  ((pbVar6[8] == 0x65 &&
                   (((pbVar6[9] == 0x79 && (pbVar6[10] == 0x2d)) && (pbVar6[0xb] == 0x70)))))))) &&
                ((((pbVar6[0xc] == 0x69 && (pbVar6[0xd] == 0x6e)) &&
                  ((pbVar6[0xe] == 0x73 &&
                   (((pbVar6[0xf] == 0x2d && (pbVar6[0x10] == 0x72)) &&
                    ((pbVar6[0x11] == 0x65 &&
                     (((pbVar6[0x12] == 0x70 && (pbVar6[0x13] == 0x6f)) && (pbVar6[0x14] == 0x72))))
                    )))))) && ((pbVar6[0x15] == 0x74 && (pbVar6[0x16] == 0x2d)))))) &&
               (pbVar6[0x17] == 0x6f)) &&
              (((pbVar6[0x18] == 0x6e && (pbVar6[0x19] == 0x6c)) && (pbVar6[0x1a] == 0x79)))) {
        return (byte *)0x35;
      }
      break;
    case 0x1c:
      if (((((*pbVar6 == 0x61) && (pbVar6[1] == 99)) &&
           ((pbVar6[2] == 99 &&
            ((((pbVar6[3] == 0x65 && (pbVar6[4] == 0x73)) && (pbVar6[5] == 0x73)) &&
             ((pbVar6[6] == 0x2d && (pbVar6[7] == 99)))))))) &&
          ((pbVar6[8] == 0x6f && ((pbVar6[9] == 0x6e && (pbVar6[10] == 0x74)))))) &&
         ((((pbVar6[0xb] == 0x72 &&
            (((pbVar6[0xc] == 0x6f && (pbVar6[0xd] == 0x6c)) && (pbVar6[0xe] == 0x2d)))) &&
           (((pbVar6[0xf] == 0x61 && (pbVar6[0x10] == 0x6c)) && (pbVar6[0x11] == 0x6c)))) &&
          (((pbVar6[0x12] == 0x6f && (pbVar6[0x13] == 0x77)) && (pbVar6[0x14] == 0x2d)))))) {
        if (pbVar6[0x15] == 0x6d) {
          if (((((pbVar6[0x16] == 0x65) && (pbVar6[0x17] == 0x74)) && (pbVar6[0x18] == 0x68)) &&
              ((pbVar6[0x19] == 0x6f && (pbVar6[0x1a] == 100)))) && (pbVar6[0x1b] == 0x73)) {
            return (byte *)0x7;
          }
        }
        else if (((pbVar6[0x15] == 0x68) && (pbVar6[0x16] == 0x65)) &&
                ((pbVar6[0x17] == 0x61 &&
                 ((((pbVar6[0x18] == 100 && (pbVar6[0x19] == 0x65)) && (pbVar6[0x1a] == 0x72)) &&
                  (pbVar6[0x1b] == 0x73)))))) {
          return (byte *)0x6;
        }
      }
      break;
    case 0x1d:
      if (((((*pbVar6 == 0x61) && (pbVar6[1] == 99)) && (pbVar6[2] == 99)) &&
          ((((pbVar6[3] == 0x65 && (pbVar6[4] == 0x73)) &&
            ((pbVar6[5] == 0x73 && ((pbVar6[6] == 0x2d && (pbVar6[7] == 99)))))) &&
           ((pbVar6[8] == 0x6f &&
            (((pbVar6[9] == 0x6e && (pbVar6[10] == 0x74)) && (pbVar6[0xb] == 0x72)))))))) &&
         (((pbVar6[0xc] == 0x6f && (pbVar6[0xd] == 0x6c)) && (pbVar6[0xe] == 0x2d)))) {
        if (pbVar6[0xf] == 0x72) {
          if ((((((pbVar6[0x10] == 0x65) && (pbVar6[0x11] == 0x71)) &&
                ((pbVar6[0x12] == 0x75 &&
                 ((((pbVar6[0x13] == 0x65 && (pbVar6[0x14] == 0x73)) && (pbVar6[0x15] == 0x74)) &&
                  ((pbVar6[0x16] == 0x2d && (pbVar6[0x17] == 0x6d)))))))) && (pbVar6[0x18] == 0x65))
              && ((pbVar6[0x19] == 0x74 && (pbVar6[0x1a] == 0x68)))) &&
             ((pbVar6[0x1b] == 0x6f && (pbVar6[0x1c] == 100)))) {
            return (byte *)0xc;
          }
        }
        else if ((((((pbVar6[0xf] == 0x65) && (pbVar6[0x10] == 0x78)) && (pbVar6[0x11] == 0x70)) &&
                  (((pbVar6[0x12] == 0x6f && (pbVar6[0x13] == 0x73)) &&
                   ((pbVar6[0x14] == 0x65 && ((pbVar6[0x15] == 0x2d && (pbVar6[0x16] == 0x68))))))))
                 && ((pbVar6[0x17] == 0x65 &&
                     (((pbVar6[0x18] == 0x61 && (pbVar6[0x19] == 100)) && (pbVar6[0x1a] == 0x65)))))
                 ) && ((pbVar6[0x1b] == 0x72 && (pbVar6[0x1c] == 0x73)))) {
          return (byte *)0x9;
        }
      }
      break;
    case 0x1e:
      if (((((((*pbVar6 == 0x61) && (pbVar6[1] == 99)) &&
             ((pbVar6[2] == 99 &&
              (((pbVar6[3] == 0x65 && (pbVar6[4] == 0x73)) && (pbVar6[5] == 0x73)))))) &&
            (((pbVar6[6] == 0x2d && (pbVar6[7] == 99)) &&
             ((pbVar6[8] == 0x6f &&
              ((((pbVar6[9] == 0x6e && (pbVar6[10] == 0x74)) &&
                ((pbVar6[0xb] == 0x72 &&
                 (((pbVar6[0xc] == 0x6f && (pbVar6[0xd] == 0x6c)) && (pbVar6[0xe] == 0x2d)))))) &&
               ((pbVar6[0xf] == 0x72 && (pbVar6[0x10] == 0x65)))))))))) && (pbVar6[0x11] == 0x71))
          && (((pbVar6[0x12] == 0x75 && (pbVar6[0x13] == 0x65)) &&
              ((pbVar6[0x14] == 0x73 &&
               (((((pbVar6[0x15] == 0x74 && (pbVar6[0x16] == 0x2d)) && (pbVar6[0x17] == 0x68)) &&
                 ((pbVar6[0x18] == 0x65 && (pbVar6[0x19] == 0x61)))) && (pbVar6[0x1a] == 100))))))))
         && (((pbVar6[0x1b] == 0x65 && (pbVar6[0x1c] == 0x72)) && (pbVar6[0x1d] == 0x73)))) {
        return (byte *)0xb;
      }
      break;
    case 0x20:
      if (((((((*pbVar6 == 0x61) && (pbVar6[1] == 99)) && (pbVar6[2] == 99)) &&
            ((pbVar6[3] == 0x65 && (pbVar6[4] == 0x73)))) &&
           ((pbVar6[5] == 0x73 && ((pbVar6[6] == 0x2d && (pbVar6[7] == 99)))))) &&
          (pbVar6[8] == 0x6f)) &&
         ((((((pbVar6[9] == 0x6e && (pbVar6[10] == 0x74)) && (pbVar6[0xb] == 0x72)) &&
            (((pbVar6[0xc] == 0x6f && (pbVar6[0xd] == 0x6c)) &&
             ((pbVar6[0xe] == 0x2d && ((pbVar6[0xf] == 0x61 && (pbVar6[0x10] == 0x6c)))))))) &&
           ((pbVar6[0x11] == 0x6c &&
            ((((pbVar6[0x12] == 0x6f && (pbVar6[0x13] == 0x77)) && (pbVar6[0x14] == 0x2d)) &&
             ((pbVar6[0x15] == 99 && (pbVar6[0x16] == 0x72)))))))) &&
          ((((pbVar6[0x17] == 0x65 && ((pbVar6[0x18] == 100 && (pbVar6[0x19] == 0x65)))) &&
            (pbVar6[0x1a] == 0x6e)) &&
           ((((pbVar6[0x1b] == 0x74 && (pbVar6[0x1c] == 0x69)) && (pbVar6[0x1d] == 0x61)) &&
            ((pbVar6[0x1e] == 0x6c && (pbVar6[0x1f] == 0x73)))))))))) {
        return (byte *)0x5;
      }
      break;
    case 0x23:
      if (((((((*pbVar6 == 99) && (pbVar6[1] == 0x6f)) && (pbVar6[2] == 0x6e)) &&
            (((pbVar6[3] == 0x74 && (pbVar6[4] == 0x65)) &&
             ((pbVar6[5] == 0x6e && ((pbVar6[6] == 0x74 && (pbVar6[7] == 0x2d)))))))) &&
           (pbVar6[8] == 0x73)) &&
          (((((((pbVar6[9] == 0x65 && (pbVar6[10] == 99)) && (pbVar6[0xb] == 0x75)) &&
              ((pbVar6[0xc] == 0x72 && (pbVar6[0xd] == 0x69)))) && (pbVar6[0xe] == 0x74)) &&
            ((pbVar6[0xf] == 0x79 && (pbVar6[0x10] == 0x2d)))) &&
           (((((pbVar6[0x11] == 0x70 &&
               (((pbVar6[0x12] == 0x6f && (pbVar6[0x13] == 0x6c)) && (pbVar6[0x14] == 0x69)))) &&
              ((pbVar6[0x15] == 99 && (pbVar6[0x16] == 0x79)))) && (pbVar6[0x17] == 0x2d)) &&
            (((((pbVar6[0x18] == 0x72 && (pbVar6[0x19] == 0x65)) &&
               ((pbVar6[0x1a] == 0x70 &&
                (((pbVar6[0x1b] == 0x6f && (pbVar6[0x1c] == 0x72)) && (pbVar6[0x1d] == 0x74)))))) &&
              ((pbVar6[0x1e] == 0x2d && (pbVar6[0x1f] == 0x6f)))) && (pbVar6[0x20] == 0x6e))))))))
         && ((pbVar6[0x21] == 0x6c && (pbVar6[0x22] == 0x79)))) {
        return (byte *)0x1c;
      }
    }
    return (byte *)0x51;
  }
  if (0xffff < param_3) goto LAB_105790df8;
  pbVar6 = (byte *)_malloc(param_3);
  if (pbVar6 == (byte *)0x0) {
    uVar8 = func_0x0001087c9084(1,param_3);
    __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
              (&pbStack_90);
    uVar8 = __Unwind_Resume(uVar8);
    FUN_10038df58(param_3);
    __Unwind_Resume(uVar8);
    uVar8 = func_0x000108a07bc4();
    __ZN68__LT_bytes__bytes_mut__BytesMut_u20_as_u20_core__ops__drop__Drop_GT_4drop17he79217772a577486E
              (&pbStack_90);
    auVar14 = __Unwind_Resume(uVar8);
    param_3 = auVar14._8_8_;
    pbVar6 = auVar14._0_8_;
    goto __ZN4http6header4name14StandardHeader10from_bytes17h3191e913e3643622E;
  }
  pbStack_78 = (byte *)(LZCOUNT(param_3 >> 10) * -4 + 0x101);
  uStack_88 = 0;
  uVar12 = param_3;
  pbStack_90 = pbVar6;
  uStack_80 = param_3;
  do {
    pbVar7 = pbStack_78;
    bVar1 = (&UNK_109a9d74f)[*param_2];
    if (bVar1 == 0) {
      *param_1 = 1;
      if (((ulong)pbStack_78 & 1) == 0) {
        lVar10 = *(long *)(pbStack_78 + 0x20);
        *(long *)(pbStack_78 + 0x20) = lVar10 + -1;
        LORelease();
        if (lVar10 != 1) {
          return pbStack_78;
        }
        if (*(long *)pbStack_78 != 0) {
          _free(*(long *)(pbStack_78 + 8));
        }
        pbVar6 = (byte *)_free(pbVar7);
        return pbVar6;
      }
      if (uStack_80 + ((ulong)pbStack_78 >> 5) == 0) {
        return pbStack_78;
      }
      pbVar6 = (byte *)_free((long)pbStack_90 - ((ulong)pbStack_78 >> 5));
      return pbVar6;
    }
    if (param_3 == uStack_88) {
      __ZN5bytes9bytes_mut8BytesMut13reserve_inner17h27c45947f3de9d03E(&pbStack_90,1,1);
      pbStack_90[uStack_88] = bVar1;
      pbVar6 = pbStack_90;
      param_3 = uStack_80;
      if (uStack_80 == uStack_88) {
        puStack_c8 = (undefined *)0x0;
        uStack_d0 = (ulong *)0x1;
        __ZN5bytes13panic_advance17h894eeb3b0f978370E(&uStack_d0);
        goto LAB_105790f20;
      }
    }
    else {
      pbVar6[uStack_88] = bVar1;
    }
    uVar9 = uStack_88 + 1;
    uVar12 = uVar12 - 1;
    param_2 = param_2 + 1;
    uStack_88 = uVar9;
  } while (uVar12 != 0);
  if (((ulong)pbStack_78 & 1) == 0) {
    puStack_70 = &__ZN5bytes9bytes_mut13SHARED_VTABLE17h0a6377dc8dadf18bE;
  }
  else {
    uVar13 = (ulong)pbStack_78 >> 5;
    pbVar6 = pbVar6 + -uVar13;
    uVar12 = uVar13 + uVar9;
    if (uVar9 == uStack_80) {
      if (uVar12 == 0) {
        uStack_60 = 0;
        pbStack_58 = (byte *)0x0;
        pbStack_68 = (byte *)0x1;
        puStack_70 = &UNK_10b205a90;
      }
      else if (((ulong)pbVar6 & 1) == 0) {
        puStack_70 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
        pbStack_68 = pbVar6;
        uStack_60 = uVar12;
        pbStack_58 = (byte *)((ulong)pbVar6 | 1);
      }
      else {
        puStack_70 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        pbStack_68 = pbVar6;
        uStack_60 = uVar12;
        pbStack_58 = pbVar6;
      }
    }
    else {
      lVar10 = uStack_80 + uVar13;
      pbVar7 = (byte *)_malloc(0x18);
      if (pbVar7 == (byte *)0x0) {
        func_0x0001087c906c(8,0x18);
        goto LAB_105790f20;
      }
      *(byte **)pbVar7 = pbVar6;
      *(long *)(pbVar7 + 8) = lVar10;
      pbVar7[0x10] = 1;
      pbVar7[0x11] = 0;
      pbVar7[0x12] = 0;
      pbVar7[0x13] = 0;
      pbVar7[0x14] = 0;
      pbVar7[0x15] = 0;
      pbVar7[0x16] = 0;
      pbVar7[0x17] = 0;
      puStack_70 = &UNK_10b205b08;
      pbStack_68 = pbVar6;
      uStack_60 = uVar12;
      pbStack_58 = pbVar7;
    }
    if (uVar12 < uVar13) {
      uStack_d0 = &uStack_50;
      puStack_c8 = &DAT_10578f2f8;
      puStack_c0 = &uStack_48;
      puStack_b8 = &DAT_10578f2f8;
      uStack_50 = uVar13;
      uStack_48 = uVar12;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s__cannot_advance_past__remaining__108aba12e,&uStack_d0,&UNK_10b3b3238);
LAB_105790f20:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x105790f24);
      (*pcVar5)();
    }
    pbVar6 = pbStack_68 + uVar13;
    pbStack_78 = pbStack_58;
  }
  param_1[2] = pbVar6;
  param_1[3] = uVar9;
  param_1[4] = pbStack_78;
  param_1[1] = puStack_70;
  *param_1 = 0;
  return pbVar6;
}

