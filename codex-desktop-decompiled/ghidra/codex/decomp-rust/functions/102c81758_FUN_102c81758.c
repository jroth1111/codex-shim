
void FUN_102c81758(long *param_1,long *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x26;
  long *plVar17;
  byte bVar18;
  long unaff_d8;
  long unaff_d9;
  undefined8 uVar19;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  lVar13 = *param_2;
  lVar14 = param_2[1];
  if (lVar13 == lVar14) goto LAB_102c81900;
  plVar17 = (long *)param_2[2];
  if (plVar17[3] != 0) {
    lStack_88 = plVar17[4];
    lStack_90 = plVar17[5];
    plStack_78 = param_1;
LAB_102c817a4:
    lStack_80 = lVar13 + 0x80;
    *param_2 = lStack_80;
    uVar15 = *(undefined8 *)(lVar13 + 8);
    lVar8 = *(long *)(lVar13 + 0x10);
    uVar6 = FUN_1033f7644(lStack_88,lStack_90,uVar15,lVar8);
    lVar11 = 0;
    lVar7 = *plVar17;
    uVar12 = plVar17[1];
    bVar9 = (byte)(uVar6 >> 0x39);
    uVar6 = uVar6 & uVar12;
    uVar19 = *(undefined8 *)(lVar7 + uVar6);
    uVar10 = CONCAT17(-((byte)((ulong)uVar19 >> 0x38) == bVar9),
                      CONCAT16(-((byte)((ulong)uVar19 >> 0x30) == bVar9),
                               CONCAT15(-((byte)((ulong)uVar19 >> 0x28) == bVar9),
                                        CONCAT14(-((byte)((ulong)uVar19 >> 0x20) == bVar9),
                                                 CONCAT13(-((byte)((ulong)uVar19 >> 0x18) == bVar9),
                                                          CONCAT12(-((byte)((ulong)uVar19 >> 0x10)
                                                                    == bVar9),
                                                                   CONCAT11(-((byte)((ulong)uVar19
                                                                                    >> 8) == bVar9),
                                                                            -((byte)uVar19 == bVar9)
                                                                           ))))))) &
             0x8080808080808080;
    param_1 = plStack_78;
    do {
      for (; plStack_78 = param_1, uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
        uVar2 = (uVar10 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar10 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        lVar16 = lVar7 + (uVar6 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar12) *
                         -0x18;
        if ((lVar8 == *(long *)(lVar16 + -8)) &&
           (iVar5 = _memcmp(uVar15,*(undefined8 *)(lVar16 + -0x10),lVar8), plVar3 = plStack_78,
           iVar5 == 0)) {
          param_1 = plStack_78;
          if (lVar13 != 0) {
            lVar14 = *(long *)(lVar13 + 8);
            lVar11 = *(long *)(lVar13 + 0x10);
            if (lVar11 == 0) {
              lVar7 = 1;
              _memcpy(1,lVar14,0);
              uVar15 = *(undefined8 *)(lVar13 + 0x20);
              lVar14 = *(long *)(lVar13 + 0x28);
              if (lVar14 == 0) goto LAB_103615888;
LAB_103615858:
              lVar8 = _malloc(lVar14);
              if (lVar8 == 0) goto LAB_10361595c;
            }
            else {
              lVar7 = _malloc(lVar11);
              if (lVar7 == 0) {
                func_0x0001087c9084(1,lVar11);
LAB_10361595c:
                func_0x0001087c9084(1,lVar14);
                goto LAB_103615978;
              }
              _memcpy(lVar7,lVar14,lVar11);
              uVar15 = *(undefined8 *)(lVar13 + 0x20);
              lVar14 = *(long *)(lVar13 + 0x28);
              if (lVar14 != 0) goto LAB_103615858;
LAB_103615888:
              lVar8 = 1;
            }
            _memcpy(lVar8,uVar15,lVar14);
            lVar16 = -0x8000000000000000;
            if (*(long *)(lVar13 + 0x60) != -0x8000000000000000) {
              uVar15 = *(undefined8 *)(lVar13 + 0x68);
              lVar16 = *(long *)(lVar13 + 0x70);
              if (lVar16 == 0) {
                unaff_x26 = 1;
              }
              else {
                unaff_x26 = _malloc(lVar16);
                if (unaff_x26 == 0) {
                  func_0x0001087c9084(1,lVar16);
LAB_103615978:
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x10361597c);
                  (*pcVar4)();
                }
              }
              _memcpy(unaff_x26,uVar15,lVar16);
            }
            uVar1 = *(undefined1 *)(lVar13 + 0x78);
            func_0x0001035ad330(&lStack_90,*(undefined8 *)(lVar13 + 0x38),
                                *(undefined8 *)(lVar13 + 0x40));
            FUN_1035ac690(&plStack_78,*(undefined8 *)(lVar13 + 0x50),*(undefined8 *)(lVar13 + 0x58))
            ;
            *plVar3 = lVar11;
            plVar3[1] = lVar7;
            plVar3[2] = lVar11;
            plVar3[3] = lVar14;
            plVar3[4] = lVar8;
            plVar3[5] = lVar14;
            plVar3[0xd] = unaff_x26;
            plVar3[0xe] = lVar16;
            *(undefined1 *)(plVar3 + 0xf) = uVar1;
            plVar3[7] = lStack_88;
            plVar3[6] = lStack_90;
            plVar3[8] = lStack_80;
            plVar3[10] = unaff_d9;
            plVar3[9] = (long)plStack_78;
            plVar3[0xb] = unaff_d8;
            plVar3[0xc] = lVar16;
            return;
          }
          goto LAB_102c81900;
        }
        param_1 = plStack_78;
      }
      bVar18 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar19 >> 0x38) == -1),
                                   CONCAT16(-((char)((ulong)uVar19 >> 0x30) == -1),
                                            CONCAT15(-((char)((ulong)uVar19 >> 0x28) == -1),
                                                     CONCAT14(-((char)((ulong)uVar19 >> 0x20) == -1)
                                                              ,CONCAT13(-((char)((ulong)uVar19 >>
                                                                                0x18) == -1),
                                                                        CONCAT12(-((char)((ulong)
                                                  uVar19 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar19 >> 8) == -1),
                                                           -((char)uVar19 == -1)))))))),1);
      if ((bVar18 & 1) != 0) goto LAB_102c81874;
      lVar11 = lVar11 + 8;
      uVar6 = uVar6 + lVar11 & uVar12;
      uVar19 = *(undefined8 *)(lVar7 + uVar6);
      uVar10 = CONCAT17(-((byte)((ulong)uVar19 >> 0x38) == bVar9),
                        CONCAT16(-((byte)((ulong)uVar19 >> 0x30) == bVar9),
                                 CONCAT15(-((byte)((ulong)uVar19 >> 0x28) == bVar9),
                                          CONCAT14(-((byte)((ulong)uVar19 >> 0x20) == bVar9),
                                                   CONCAT13(-((byte)((ulong)uVar19 >> 0x18) == bVar9
                                                             ),CONCAT12(-((byte)((ulong)uVar19 >>
                                                                                0x10) == bVar9),
                                                                        CONCAT11(-((byte)((ulong)
                                                  uVar19 >> 8) == bVar9),-((byte)uVar19 == bVar9))))
                                                  )))) & 0x8080808080808080;
    } while( true );
  }
  uVar10 = (lVar14 - lVar13) - 0x80;
  if (uVar10 < 0x180) {
LAB_102c818f0:
    do {
      lVar13 = lVar13 + 0x80;
    } while (lVar13 != lVar14);
  }
  else {
    uVar10 = (uVar10 >> 7) + 1;
    uVar6 = uVar10 & 0x3fffffffffffffc;
    lVar13 = lVar13 + uVar6 * 0x80;
    uVar12 = uVar6;
    do {
      uVar12 = uVar12 - 4;
    } while (uVar12 != 0);
    if (uVar10 != uVar6) goto LAB_102c818f0;
  }
  *param_2 = lVar13;
LAB_102c81900:
  *param_1 = -0x8000000000000000;
  return;
LAB_102c81874:
  lVar13 = lStack_80;
  if (lStack_80 == lVar14) goto LAB_102c81900;
  goto LAB_102c817a4;
}

