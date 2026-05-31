
undefined1  [16] FUN_1011c1f54(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  byte bVar4;
  undefined1 uVar5;
  ulong *puVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  int iVar10;
  code *pcVar11;
  char cVar12;
  undefined8 uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 extraout_x1;
  undefined8 *puVar19;
  int *piVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined8 *unaff_x22;
  long lVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  int *piVar27;
  ulong uVar28;
  ulong extraout_d0;
  ulong uVar29;
  ulong extraout_var;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulong uStack_178;
  ulong uStack_170;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  ulong uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  ulong uStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined8 *puStack_50;
  undefined2 uStack_48;
  
  puVar19 = (undefined8 *)0x0;
  bVar4 = *(byte *)(param_1 + 0x4d9);
  puVar16 = (undefined8 *)0x1;
  if (bVar4 < 2) {
    if (bVar4 != 0) goto LAB_1011c2058;
LAB_1011c1f9c:
    if (((bVar4 & 1) == 0) && (*(long *)(param_1 + 0x78) == 0)) {
      while( true ) {
        if (((*(byte *)(param_1 + 0x33b) & 1) != 0) ||
           (((*(byte *)(param_1 + 0x336) & 1) == 0 && (*(long *)(param_1 + 0xb0) != 0))))
        goto LAB_1011c1fa8;
        auVar32 = FUN_100750488(param_1 + 0x490,param_1,param_2);
        puVar16 = auVar32._8_8_;
        if (auVar32._0_8_ == 2) break;
        if ((auVar32._0_8_ & 1) != 0) goto LAB_1011c2110;
        bVar8 = false;
        unaff_x22 = puVar16;
        if ((puVar16 == (undefined8 *)0x0) || (*(long *)(param_1 + 0x78) != 0)) goto LAB_1011c1fac;
      }
      bVar8 = true;
    }
    else {
LAB_1011c1fa8:
      bVar8 = false;
    }
LAB_1011c1fac:
    if (*(long *)(param_1 + 0x78) != 0) {
      uVar26 = 0;
      if (*(ulong *)(param_1 + 0x60) <= *(ulong *)(param_1 + 0x70)) {
        uVar26 = *(ulong *)(param_1 + 0x60);
      }
      lVar23 = *(long *)(param_1 + 0x68) + (*(ulong *)(param_1 + 0x70) - uVar26) * 0x18;
      uVar26 = *(ulong *)(param_1 + 0x80);
      uVar17 = *(ulong *)(lVar23 + 0x10);
      auVar32._8_8_ = uVar17;
      auVar32._0_8_ = uVar26;
      puVar19 = (undefined8 *)(uVar17 - uVar26);
      if (uVar26 <= uVar17) {
        puVar16 = (undefined8 *)(*(long *)(lVar23 + 8) + uVar26);
        if (puVar19 == (undefined8 *)0x0) goto LAB_1011c2048;
        goto LAB_1011c2058;
      }
      goto LAB_1011c21c8;
    }
    if ((*(byte *)(param_1 + 0x33b) & 1) != 0) {
      puVar16 = (undefined8 *)0x1;
LAB_1011c2048:
      puVar19 = (undefined8 *)0x0;
      *(byte *)(param_1 + 0x4d9) = *(byte *)(param_1 + 0x4d9) | 1;
      goto LAB_1011c2058;
    }
    if (*(char *)(param_1 + 0x33c) == '\0') {
      puVar19 = (undefined8 *)0xd00000003;
      cVar12 = FUN_100c355d4(0xd00000003,puVar16);
    }
    else {
      puVar19 = (undefined8 *)
                __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x25,&UNK_109b96b54,0x88);
      cVar12 = FUN_100c355d4();
    }
    puVar16 = puVar19;
    if (cVar12 == '\r') {
      puStack_50 = puVar19;
      if (!bVar8) {
        (**(code **)(*(long *)*param_2 + 0x10))(((long *)*param_2)[1]);
      }
      if (((ulong)puVar19 & 3) == 1) {
        puVar16 = (undefined8 *)((long)puVar19 - 1);
        uVar13 = *puVar16;
        puVar19 = *(undefined8 **)((long)puVar19 + 7);
        pcVar11 = (code *)*puVar19;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar13);
        }
        if (puVar19[1] != 0) {
          _free(uVar13);
        }
        _free(puVar16);
      }
      uVar13 = 1;
      goto LAB_1011c20c4;
    }
LAB_1011c2110:
    cVar12 = FUN_100c355d4(puVar16);
    if (cVar12 == '\x06') {
      uVar13 = 0;
      *(byte *)(param_1 + 0x4d9) = *(byte *)(param_1 + 0x4d9) | 1;
      goto LAB_1011c20c4;
    }
  }
  else {
    if (bVar4 == 2) goto LAB_1011c1f9c;
LAB_1011c2058:
    puVar1 = (undefined8 *)param_3[1];
    puVar2 = (undefined8 *)param_3[2];
    param_2 = (undefined8 *)((long)puVar1 - (long)puVar2);
    if (puVar19 <= (undefined8 *)((long)puVar1 - (long)puVar2)) {
      param_2 = puVar19;
    }
    unaff_x22 = (undefined8 *)((long)param_2 + (long)puVar2);
    if (unaff_x22 < puVar2 || puVar1 < unaff_x22) {
      auVar32 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                          (puVar2,unaff_x22,puVar1,&UNK_10b24e5b0);
LAB_1011c21c8:
      uVar13 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                         (auVar32._0_8_,auVar32._8_8_,auVar32._8_8_,&UNK_10b466918);
      if (param_2[1] != 0) {
        _free(param_3);
      }
      _free(unaff_x22);
      uVar13 = __Unwind_Resume(uVar13);
      FUN_100de21d4(&puStack_50);
      __Unwind_Resume(uVar13);
      auVar32 = func_0x000108a07bc4();
      puVar18 = auVar32._8_8_;
      puVar14 = auVar32._0_8_;
      uVar9 = puVar18[0xb];
      uVar26 = puVar18[9];
      uVar17 = puVar18[10];
      lVar23 = uVar17 << 2;
      if (uVar17 == 0) {
LAB_1011c2264:
        uVar15 = 2;
      }
      else {
        uVar15 = _malloc(lVar23);
        if (uVar15 == 0) {
          func_0x0001087c9084(2,lVar23);
          goto LAB_1011c2264;
        }
      }
      auVar33 = _memcpy(uVar15,uVar26,lVar23);
      uVar26 = puVar18[5];
      if (uVar26 == 0) {
        uStack_178 = 0;
        uStack_170 = 8;
      }
      else {
        piVar20 = (int *)puVar18[4];
        auVar33 = _malloc(uVar26 * 0x68);
        uStack_170 = auVar33._0_8_;
        if (uStack_170 == 0) {
          func_0x0001087c9084(8,uVar26 * 0x68);
          goto LAB_1011c252c;
        }
        lVar23 = 0;
        uVar24 = 0;
        piVar27 = piVar20;
        do {
          uStack_178 = uVar26;
          if (uVar26 * 0x68 - lVar23 == 0) break;
          iVar10 = piVar27[0x18];
          if (*(undefined8 **)(piVar27 + 0x10) == (undefined8 *)0x0) {
            uVar22 = 0;
            uVar5 = *(undefined1 *)((long)piVar20 + lVar23 + 0x48);
          }
          else {
            (*(code *)**(undefined8 **)(piVar27 + 0x10))
                      (&uStack_f0,(long)piVar20 + lVar23 + 0x58,
                       *(undefined8 *)((long)piVar20 + lVar23 + 0x48),
                       *(undefined8 *)((long)piVar20 + lVar23 + 0x50));
            uStack_120 = CONCAT17(uStack_e0,uStack_e7);
            uStack_118 = uStack_df;
            uStack_111 = uStack_d8;
            uStack_110 = uStack_d7;
            uVar22 = uStack_f0;
            uVar5 = uStack_e8;
          }
          uStack_137 = (undefined7)uStack_120;
          uStack_130 = (undefined1)(uStack_120 >> 0x38);
          uVar13 = (*(code *)**(undefined8 **)(piVar27 + 6))
                             (&uStack_f0,piVar27 + 0xc,*(undefined8 *)(piVar27 + 8),
                              *(undefined8 *)(piVar27 + 10));
          auVar33._8_8_ = extraout_x1;
          auVar33._0_8_ = uVar13;
          uStack_d0 = (undefined1)piVar27[0xe];
          iVar3 = *piVar27;
          uVar28 = extraout_d0;
          uVar29 = extraout_var;
          if (iVar3 == 1) {
            uVar29 = *(ulong *)((long)piVar20 + lVar23 + 0x10);
            uVar28 = *(ulong *)((long)piVar20 + lVar23 + 8);
          }
          piVar27 = piVar27 + 0x1a;
          uVar24 = uVar24 + 1;
          uVar7 = CONCAT71(uStack_110,uStack_111);
          uVar30 = CONCAT71(uStack_118,uStack_130);
          uStack_118 = (undefined7)CONCAT71(uStack_e7,uStack_e8);
          uStack_111 = (undefined1)((uint7)uStack_e7 >> 0x30);
          uStack_120 = uStack_f0;
          uStack_110 = (undefined7)CONCAT71(uStack_df,uStack_e0);
          puVar25 = (ulong *)(uStack_170 + lVar23);
          *puVar25 = (ulong)(iVar3 == 1);
          puVar25[2] = uVar29;
          puVar25[1] = uVar28;
          puVar25[4] = CONCAT71(uStack_e7,uStack_e8);
          puVar25[3] = uStack_f0;
          puVar25[6] = CONCAT71(uStack_d7,uStack_d8);
          puVar25[5] = CONCAT71(uStack_df,uStack_e0);
          puVar25[7] = CONCAT71(uStack_cf,uStack_d0);
          puVar25[9] = CONCAT71(uStack_137,uVar5);
          puVar25[8] = uVar22;
          puVar25[0xb] = uVar7;
          puVar25[10] = uVar30;
          *(short *)(puVar25 + 0xc) = (short)iVar10;
          lVar23 = lVar23 + 0x68;
        } while (uVar26 != uVar24);
      }
      uVar24 = puVar18[8];
      if (uVar24 == 0) {
        uStack_e8 = 8;
        uStack_e7 = 0;
        uVar22 = *puVar18;
        uVar28 = 0;
      }
      else {
        puVar25 = (ulong *)puVar18[7];
        lVar23 = uVar24 * 0x48;
        auVar33 = _malloc(lVar23);
        if (auVar33._0_8_ == 0) {
          func_0x0001087c9084(8,lVar23);
LAB_1011c252c:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1011c2530);
          (*pcVar11)();
        }
        uVar22 = 0;
        uStack_138 = auVar33[0];
        uStack_137 = auVar33._1_7_;
        puVar21 = (ulong *)(auVar33._0_8_ + 0x20);
        do {
          if (lVar23 == 0) break;
          auVar33 = (**(code **)puVar25[4])(&uStack_f0,puVar25 + 7,puVar25[5],puVar25[6]);
          uVar22 = uVar22 + 1;
          uStack_d0 = (undefined1)puVar25[8];
          puVar6 = puVar25 + 1;
          uVar28 = *puVar25;
          uVar30 = puVar25[3];
          uVar29 = puVar25[2];
          puVar25 = puVar25 + 9;
          uStack_120 = uStack_f0;
          uStack_118 = (undefined7)CONCAT71(uStack_e7,uStack_e8);
          uStack_111 = (undefined1)((uint7)uStack_e7 >> 0x30);
          puVar21[-3] = *puVar6;
          puVar21[-4] = uVar28;
          puVar21[-1] = uVar30;
          puVar21[-2] = uVar29;
          puVar21[1] = CONCAT71(uStack_e7,uStack_e8);
          *puVar21 = uStack_f0;
          puVar21[3] = CONCAT71(uStack_d7,uStack_d8);
          puVar21[2] = CONCAT71(uStack_df,uStack_e0);
          puVar21[4] = CONCAT71(uStack_cf,uStack_d0);
          lVar23 = lVar23 + -0x48;
          puVar21 = puVar21 + 9;
        } while (uVar24 != uVar22);
        uVar22 = *puVar18;
        uVar28 = uVar24;
        uStack_e8 = uStack_138;
        uStack_e7 = uStack_137;
      }
      if (1 < uVar22) {
        uStack_120 = puVar18[1];
        uStack_118 = (undefined7)puVar18[2];
        uStack_111 = (undefined1)(puVar18[2] >> 0x38);
      }
      *(short *)(puVar14 + 0xb) = (short)uVar9;
      puVar14[9] = uVar15;
      puVar14[10] = uVar17;
      puVar14[4] = uStack_170;
      puVar14[3] = uStack_178;
      puVar14[5] = uVar26;
      puVar14[7] = CONCAT71(uStack_e7,uStack_e8);
      puVar14[6] = uVar28;
      puVar14[8] = uVar24;
      *puVar14 = uVar22;
      puVar14[2] = CONCAT17(uStack_111,uStack_118);
      puVar14[1] = uStack_120;
      return auVar33;
    }
    _memcpy(*param_3 + (long)puVar2,puVar16,param_2);
    if ((undefined8 *)param_3[3] < unaff_x22) {
      param_3[3] = (long)unaff_x22;
    }
    param_3[2] = (long)unaff_x22;
    puStack_50 = (undefined8 *)(param_1 + 0x50);
    uStack_48 = *(undefined2 *)(param_1 + 0x33b);
    __ZN69__LT_rustls__conn__connection__Reader_u20_as_u20_std__io__BufRead_GT_7consume17h73db1d9f18e45efaE
              (&puStack_50,param_2);
    puVar16 = (undefined8 *)0x0;
  }
  uVar13 = 0;
LAB_1011c20c4:
  auVar31._8_8_ = puVar16;
  auVar31._0_8_ = uVar13;
  return auVar31;
}

