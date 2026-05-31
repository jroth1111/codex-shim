
undefined1  [16]
__ZN9hashbrown3raw21RawTable_LT_T_C_A_GT_14reserve_rehash17habce87dc4fb8e647E
          (ulong *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  char *pcVar10;
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auVar16 [16];
  
  uVar12 = param_1[3];
  uVar6 = uVar12 + param_2;
  if (CARRY8(uVar12,param_2)) {
    param_3 = param_3 & 1;
    param_1 = unaff_x19;
    goto joined_r0x000108a4afb0;
  }
  uVar11 = param_1[1];
  uVar13 = uVar11 + 1;
  uVar8 = uVar13 >> 3;
  uVar1 = uVar11;
  if (7 < uVar11) {
    uVar1 = uVar8 * 7;
  }
  if (uVar6 <= uVar1 >> 1) {
    puVar5 = (ulong *)*param_1;
    if (uVar13 == 0) {
LAB_108a4af08:
      _memmove(puVar5 + 1,puVar5,uVar13);
    }
    else {
      puVar9 = puVar5;
      if ((uVar13 & 7) != 0) {
        uVar8 = uVar8 + 1;
      }
      do {
        uVar6 = *puVar9;
        *puVar9 = CONCAT17(-((long)uVar6 < 0),
                           CONCAT16(-((char)(uVar6 >> 0x30) < '\0'),
                                    CONCAT15(-((char)(uVar6 >> 0x28) < '\0'),
                                             CONCAT14(-((char)(uVar6 >> 0x20) < '\0'),
                                                      CONCAT13(-((char)(uVar6 >> 0x18) < '\0'),
                                                               CONCAT12(-((char)(uVar6 >> 0x10) <
                                                                         '\0'),CONCAT11(-((char)(
                                                  uVar6 >> 8) < '\0'),-((char)uVar6 < '\0')))))))) |
                  0x8080808080808080;
        uVar8 = uVar8 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar8 != 0);
      if (uVar13 < 8) goto LAB_108a4af08;
      *(ulong *)((long)puVar5 + uVar13) = *puVar5;
    }
    uVar6 = param_1[1];
    pcVar10 = (char *)*param_1;
    uVar12 = uVar6 + 1;
    do {
      if (uVar12 == 0) {
        if (7 < uVar6) {
          uVar6 = (uVar6 + 1 >> 3) * 7;
        }
        param_1[2] = uVar6 - param_1[3];
        goto LAB_108a4af7c;
      }
      cVar2 = *pcVar10;
      uVar12 = uVar12 - 1;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != -0x80);
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a5c0);
    goto LAB_108a4b008;
  }
  if (uVar6 < uVar1 + 1) {
    uVar6 = uVar1 + 1;
  }
  if (uVar6 < 0xf) {
    uVar13 = 4;
    if (3 < uVar6) {
      uVar13 = (uVar6 & 8) + 8;
    }
    uVar8 = uVar13 * 8;
    uVar6 = uVar13 + 8;
    unaff_x20 = uVar6 + uVar8;
    if (CARRY8(uVar6,uVar8)) goto joined_r0x000108a4afb0;
LAB_108a4ae60:
    if (0x7ffffffffffffff8 < unaff_x20) goto joined_r0x000108a4afb0;
    lVar15 = _malloc(unaff_x20);
    if (lVar15 == 0) {
      if (param_3 == 0) {
        uVar4 = 8;
        goto LAB_108a4af80;
      }
      goto LAB_108a4afcc;
    }
    uVar14 = uVar13 - 1;
    uVar1 = uVar14;
    if (7 < uVar14) {
      uVar1 = (uVar13 >> 3) * 7;
    }
    unaff_x20 = lVar15 + uVar8;
    _memset(unaff_x20,0xff,uVar6);
    if (uVar12 == 0) {
      uVar6 = *param_1;
      *param_1 = unaff_x20;
      param_1[1] = uVar14;
      param_1[2] = uVar1;
      if ((uVar11 != 0) && (lVar15 = uVar11 * 8 + 8, uVar11 + lVar15 != -9)) {
        _free(uVar6 - lVar15);
      }
LAB_108a4af7c:
      uVar4 = 0x8000000000000001;
      goto LAB_108a4af80;
    }
  }
  else {
    if ((uVar6 >> 0x3d == 0) &&
       (uVar6 = 0xffffffffffffffff >> (LZCOUNT((uVar6 * 8) / 7 - 1) & 0x3fU),
       uVar6 < 0x1fffffffffffffff)) {
      uVar13 = uVar6 + 1;
      uVar8 = uVar13 * 8;
      uVar6 = uVar6 + 9;
      unaff_x20 = uVar6 + uVar8;
      if (!CARRY8(uVar6,uVar8)) goto LAB_108a4ae60;
    }
joined_r0x000108a4afb0:
    if (param_3 == 0) {
      uVar4 = 0;
LAB_108a4af80:
      auVar16._8_8_ = unaff_x20;
      auVar16._0_8_ = uVar4;
      return auVar16;
    }
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_109b9f7f0,0x39,&UNK_10b46a610);
LAB_108a4afcc:
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,unaff_x20);
  }
  plVar7 = (long *)*param_1;
  do {
    lVar15 = *plVar7;
    plVar7 = plVar7 + 1;
  } while ((CONCAT17(-(-1 < lVar15),
                     CONCAT16(-(-1 < (char)((ulong)lVar15 >> 0x30)),
                              CONCAT15(-(-1 < (char)((ulong)lVar15 >> 0x28)),
                                       CONCAT14(-(-1 < (char)((ulong)lVar15 >> 0x20)),
                                                CONCAT13(-(-1 < (char)((ulong)lVar15 >> 0x18)),
                                                         CONCAT12(-(-1 < (char)((ulong)lVar15 >>
                                                                               0x10)),
                                                                  CONCAT11(-(-1 < (char)((ulong)
                                                  lVar15 >> 8)),-(-1 < (char)lVar15)))))))) &
           0x8080808080808080) == 0);
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109b9e649,0x28,&UNK_10b46a5c0);
LAB_108a4b008:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x108a4b00c);
  (*pcVar3)();
}

