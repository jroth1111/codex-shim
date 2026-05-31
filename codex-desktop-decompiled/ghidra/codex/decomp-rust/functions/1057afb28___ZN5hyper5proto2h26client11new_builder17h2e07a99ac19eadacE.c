
/* WARNING: Possible PIC construction at 0x0001057b00ec: Changing call to branch */

void __ZN5hyper5proto2h26client11new_builder17h2e07a99ac19eadacE(undefined8 *param_1,int *param_2)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  long extraout_x1;
  int iVar16;
  undefined *puVar17;
  undefined8 *extraout_x8;
  int iVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  byte *unaff_x22;
  ulong unaff_x23;
  undefined8 unaff_x24;
  byte *unaff_x25;
  undefined *unaff_x26;
  undefined1 *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  puVar22 = &stack0xfffffffffffffff0;
  if (param_2[0x19] == 0) {
    iVar16 = param_2[0x1a];
    iVar5 = param_2[0x1b];
    iVar8 = param_2[0x1c];
    uVar25 = *(undefined8 *)(param_2 + 0x18);
    uVar23 = *(undefined8 *)(param_2 + 0x16);
    iVar18 = param_2[8];
    if (iVar18 == 1) {
      iVar18 = param_2[9];
      if (0xffbfff < iVar18 - 0x4000U) goto LAB_1057afb10;
      uVar19 = 1;
    }
    else {
      uVar19 = 0;
    }
    uVar20 = *(undefined8 *)(param_2 + 2);
    if (*param_2 == 0) {
      uVar20 = 0x32;
    }
    uVar21 = *(undefined8 *)(param_2 + 6);
    if (param_2[4] == 0) {
      uVar21 = 0x14;
    }
    iVar3 = param_2[10];
    iVar6 = param_2[0xb];
    iVar4 = param_2[0xc];
    iVar7 = param_2[0xd];
    param_1[1] = 0x400;
    *param_1 = 1;
    *(undefined4 *)(param_1 + 2) = 1;
    *(int *)((long)param_1 + 0x14) = iVar16;
    param_1[3] = 1;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[6] = uVar25;
    param_1[5] = uVar23;
    param_1[7] = uVar20;
    param_1[8] = uVar21;
    *(int *)(param_1 + 9) = iVar3;
    *(int *)((long)param_1 + 0x4c) = iVar6;
    param_1[10] = 1;
    *(int *)(param_1 + 0xb) = iVar4;
    *(int *)((long)param_1 + 0x5c) = iVar7;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(int *)((long)param_1 + 100) = iVar5;
    *(undefined4 *)(param_1 + 0xd) = uVar19;
    *(int *)((long)param_1 + 0x6c) = iVar18;
    *(undefined4 *)(param_1 + 0xe) = 1;
    *(int *)((long)param_1 + 0x74) = iVar8;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined4 *)((long)param_1 + 0x84) = 1;
    return;
  }
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a72dc6,0x2a,&UNK_10b3abee8);
LAB_1057afb10:
  puVar17 = &UNK_10b3a5f08;
  uVar23 = 0x1057afb28;
  auVar27 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_109a69478,0x4c);
  puVar11 = &stack0xfffffffffffffff0;
  do {
    lVar15 = auVar27._8_8_;
    plVar13 = auVar27._0_8_;
    *(undefined **)(puVar11 + -0x50) = unaff_x26;
    *(byte **)(puVar11 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar11 + -0x40) = unaff_x24;
    *(ulong *)(puVar11 + -0x38) = unaff_x23;
    *(byte **)(puVar11 + -0x30) = unaff_x22;
    *(long **)(puVar11 + -0x28) = unaff_x21;
    *(long **)(puVar11 + -0x20) = unaff_x20;
    *(undefined8 **)(puVar11 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar11 + -0x10) = puVar22;
    *(undefined8 *)(puVar11 + -8) = uVar23;
    *(long *)(puVar11 + -0x88) = lVar15;
    iVar16 = (int)puVar17;
    *(int *)(puVar11 + -0x80) = iVar16;
    *(undefined8 *)(puVar11 + -0x78) = 0;
    *(undefined4 *)(puVar11 + -0x70) = 0;
    unaff_x22 = puVar11 + -0x78;
    func_0x000106032878(puVar11 + -0x68,puVar11 + -0x88,puVar11 + -0x78);
    unaff_x24 = *(undefined8 *)(puVar11 + -0x68);
    uVar9 = *(uint *)(puVar11 + -0x58);
    unaff_x23 = (ulong)uVar9;
    plVar13[7] = 0;
    uVar23 = __ZN93__LT_httpdate__date__HttpDate_u20_as_u20_core__convert__From_LT_std__time__SystemTime_GT__GT_4from17h0acad8cfd2bffcbeE
                       (lVar15,puVar17);
    *(undefined8 *)(puVar11 + -0x78) = uVar23;
    *(byte **)(puVar11 + -0x68) = unaff_x22;
    *(undefined1 **)(puVar11 + -0x60) =
         &
         __ZN63__LT_httpdate__date__HttpDate_u20_as_u20_core__fmt__Display_GT_3fmt17h6268b0896efe1d20E
    ;
    __ZN4core3fmt5write17h64810b21425781ecE(plVar13,&UNK_10b3b4ef0,s__108b1bd74,puVar11 + -0x68);
    unaff_x25 = (byte *)(plVar13 + 8);
    bVar10 = *unaff_x25;
    if (bVar10 < 0x20) {
      if (bVar10 == 9) goto LAB_1057afbdc;
LAB_1057b0008:
      func_0x000108a07a3c(&UNK_109aa10d5,0x27,puVar11 + -0x68,&UNK_10b3b4370,&UNK_10b3b4ed8);
      pbVar12 = unaff_x22;
LAB_1057b002c:
      func_0x000108a079f0(&UNK_109bd7235,0x28,&UNK_10b4aef48);
      unaff_x22 = pbVar12;
    }
    else {
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afbdc:
      bVar10 = *(byte *)((long)plVar13 + 0x41);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afbfc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afbfc:
      bVar10 = *(byte *)((long)plVar13 + 0x42);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afc1c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afc1c:
      bVar10 = *(byte *)((long)plVar13 + 0x43);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afc3c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afc3c:
      bVar10 = *(byte *)((long)plVar13 + 0x44);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afc5c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afc5c:
      bVar10 = *(byte *)((long)plVar13 + 0x45);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afc7c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afc7c:
      bVar10 = *(byte *)((long)plVar13 + 0x46);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afc9c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afc9c:
      bVar10 = *(byte *)((long)plVar13 + 0x47);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afcbc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afcbc:
      bVar10 = *(byte *)(plVar13 + 9);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afcdc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afcdc:
      bVar10 = *(byte *)((long)plVar13 + 0x49);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afcfc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afcfc:
      bVar10 = *(byte *)((long)plVar13 + 0x4a);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afd1c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afd1c:
      bVar10 = *(byte *)((long)plVar13 + 0x4b);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afd3c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afd3c:
      bVar10 = *(byte *)((long)plVar13 + 0x4c);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afd5c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afd5c:
      bVar10 = *(byte *)((long)plVar13 + 0x4d);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afd7c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afd7c:
      bVar10 = *(byte *)((long)plVar13 + 0x4e);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afd9c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afd9c:
      bVar10 = *(byte *)((long)plVar13 + 0x4f);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afdbc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afdbc:
      bVar10 = *(byte *)(plVar13 + 10);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afddc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afddc:
      bVar10 = *(byte *)((long)plVar13 + 0x51);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afdfc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afdfc:
      bVar10 = *(byte *)((long)plVar13 + 0x52);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afe1c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afe1c:
      bVar10 = *(byte *)((long)plVar13 + 0x53);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afe3c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afe3c:
      bVar10 = *(byte *)((long)plVar13 + 0x54);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afe5c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afe5c:
      bVar10 = *(byte *)((long)plVar13 + 0x55);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afe7c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afe7c:
      bVar10 = *(byte *)((long)plVar13 + 0x56);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afe9c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afe9c:
      bVar10 = *(byte *)((long)plVar13 + 0x57);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afebc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afebc:
      bVar10 = *(byte *)(plVar13 + 0xb);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afedc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afedc:
      bVar10 = *(byte *)((long)plVar13 + 0x59);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057afefc;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057afefc:
      bVar10 = *(byte *)((long)plVar13 + 0x5a);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057aff1c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057aff1c:
      bVar10 = *(byte *)((long)plVar13 + 0x5b);
      if (bVar10 < 0x20) {
        if (bVar10 == 9) goto LAB_1057aff3c;
        goto LAB_1057b0008;
      }
      if (bVar10 == 0x7f) goto LAB_1057b0008;
LAB_1057aff3c:
      bVar10 = *(byte *)((long)plVar13 + 0x5c);
      if (bVar10 < 0x20) {
        if (bVar10 != 9) goto LAB_1057b0008;
      }
      else if (bVar10 == 0x7f) goto LAB_1057b0008;
      pbVar12 = (byte *)_malloc(0x1d);
      if (pbVar12 != (byte *)0x0) {
        lVar24 = *(long *)unaff_x25;
        *(long *)(pbVar12 + 8) = plVar13[9];
        *(long *)pbVar12 = lVar24;
        uVar23 = *(undefined8 *)((long)plVar13 + 0x4d);
        *(undefined8 *)(pbVar12 + 0x15) = *(undefined8 *)((long)plVar13 + 0x55);
        *(undefined8 *)(pbVar12 + 0xd) = uVar23;
        unaff_x26 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
        unaff_x25 = pbVar12;
        if (((ulong)pbVar12 & 1) == 0) {
          unaff_x26 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
          unaff_x25 = pbVar12 + 1;
        }
        (**(code **)(plVar13[2] + 0x20))(plVar13 + 5,plVar13[3],plVar13[4]);
        plVar13[2] = (long)unaff_x26;
        plVar13[3] = (long)pbVar12;
        plVar13[4] = 0x1d;
        plVar13[5] = (long)unaff_x25;
        *(undefined1 *)(plVar13 + 6) = 0;
        if (!SCARRY8(lVar15,1)) {
          uVar2 = 0;
          if ((int)unaff_x24 == 0) {
            uVar2 = uVar9;
          }
          iVar8 = iVar16 - uVar2;
          iVar5 = iVar8 + 1000000000;
          if ((int)uVar2 <= iVar16) {
            iVar5 = iVar8;
          }
          *plVar13 = lVar15 + 1 + (long)(iVar8 >> 0x1f);
          *(int *)(plVar13 + 1) = iVar5;
          return;
        }
        goto LAB_1057b002c;
      }
    }
    func_0x0001087c9084(1,0x1d);
    plVar13[2] = (long)unaff_x26;
    plVar13[3] = (long)unaff_x22;
    plVar13[4] = 0x1d;
    plVar13[5] = (long)unaff_x25;
    *(undefined1 *)(plVar13 + 6) = 0;
    __Unwind_Resume();
    *(byte **)(puVar11 + -0xc0) = unaff_x22;
    *(long *)(puVar11 + -0xb8) = lVar15;
    *(undefined **)(puVar11 + -0xb0) = puVar17;
    *(long **)(puVar11 + -0xa8) = plVar13;
    *(undefined1 **)(puVar11 + -0xa0) = puVar11 + -0x10;
    *(undefined8 *)(puVar11 + -0x98) = 0x1057b0064;
    puVar22 = puVar11 + -0xa0;
    unaff_x20 = (long *)(*pcRam000000010b66ca58)();
    if (((char)unaff_x20[0xd] != '\x01') &&
       (unaff_x20 = (long *)FUN_108a14e04(unaff_x20,0), unaff_x20 == (long *)0x0)) {
      func_0x000108a82a50(&UNK_10b3b4268);
LAB_1057b0158:
      __ZN4core4cell22panic_already_borrowed17he8deaa52232869b2E(&UNK_10b3b4f20);
      *unaff_x20 = *unaff_x20 + 1;
      plVar13 = (long *)__Unwind_Resume();
      *(long **)(puVar11 + -0x100) = unaff_x20;
      *(undefined8 **)(puVar11 + -0xf8) = extraout_x8;
      *(undefined1 **)(puVar11 + -0xf0) = puVar22;
      *(undefined8 *)(puVar11 + -0xe8) = 0x1057b0174;
      puVar14 = (ulong *)(*pcRam000000010b66ca58)();
      if (((char)puVar14[0xd] == '\x01') ||
         (puVar14 = (ulong *)FUN_108a14e04(puVar14,0), puVar14 != (ulong *)0x0)) {
        if (0x7ffffffffffffffe < *puVar14) goto LAB_1057b0228;
        *puVar14 = *puVar14 + 1;
        lVar15 = plVar13[2];
        if (0x1c < (ulong)(*plVar13 - lVar15)) goto LAB_1057b01d0;
      }
      else {
        func_0x000108a82a50(&UNK_10b3b4268);
LAB_1057b0228:
        func_0x000108a07858(&UNK_10b3b4f38);
        lVar15 = extraout_x1;
      }
      FUN_108a1531c(plVar13,lVar15,0x1d,1,1);
      lVar15 = plVar13[2];
LAB_1057b01d0:
      puVar1 = (ulong *)(plVar13[1] + lVar15);
      uVar25 = *(undefined8 *)((long)puVar14 + 0x5d);
      uVar23 = *(undefined8 *)((long)puVar14 + 0x55);
      uVar26 = puVar14[9];
      puVar1[1] = puVar14[10];
      *puVar1 = uVar26;
      *(undefined8 *)((long)puVar1 + 0x15) = uVar25;
      *(undefined8 *)((long)puVar1 + 0xd) = uVar23;
      plVar13[2] = lVar15 + 0x1d;
      *puVar14 = *puVar14 - 1;
      return;
    }
    if (*unaff_x20 != 0) goto LAB_1057b0158;
    unaff_x21 = unaff_x20 + 1;
    *unaff_x20 = -1;
    auVar28 = func_0x000106032954(0);
    puVar17 = auVar28._8_8_;
    lVar15 = auVar28._0_8_;
    auVar27._8_8_ = lVar15;
    auVar27._0_8_ = unaff_x21;
    if (lVar15 == *unaff_x21) {
      if (auVar28._8_4_ <= *(uint *)(unaff_x20 + 2)) goto LAB_1057b00f0;
    }
    else if (lVar15 <= *unaff_x21) {
LAB_1057b00f0:
      (**(code **)unaff_x20[3])(puVar11 + -0xe0,unaff_x20 + 6,unaff_x20[4],unaff_x20[5]);
      lVar15 = unaff_x20[7];
      uVar23 = *(undefined8 *)(puVar11 + -0xe0);
      uVar20 = *(undefined8 *)(puVar11 + -200);
      uVar25 = *(undefined8 *)(puVar11 + -0xd0);
      extraout_x8[1] = *(undefined8 *)(puVar11 + -0xd8);
      *extraout_x8 = uVar23;
      extraout_x8[3] = uVar20;
      extraout_x8[2] = uVar25;
      *unaff_x20 = *unaff_x20 + 1;
      *(char *)(extraout_x8 + 4) = (char)lVar15;
      return;
    }
    uVar23 = 0x1057b00f0;
    puVar11 = puVar11 + -0xe0;
    unaff_x19 = extraout_x8;
  } while( true );
}

