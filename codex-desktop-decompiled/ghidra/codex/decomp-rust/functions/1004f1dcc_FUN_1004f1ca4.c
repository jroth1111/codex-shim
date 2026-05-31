
void FUN_1004f1ca4(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 uVar7;
  uint uVar8;
  uint extraout_w8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  char cVar15;
  undefined8 **ppuVar16;
  undefined1 auVar17 [16];
  undefined8 auStack_a50 [74];
  undefined1 auStack_800 [592];
  undefined8 *puStack_5b0;
  undefined8 *puStack_5a8;
  undefined4 uStack_598;
  undefined3 uStack_594;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined4 uStack_580;
  undefined3 uStack_57c;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 *puStack_568;
  undefined8 *puStack_560;
  undefined8 *puStack_558;
  undefined1 auStack_550 [552];
  long lStack_328;
  long lStack_320;
  undefined1 uStack_318;
  undefined8 *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined4 uStack_98;
  undefined3 uStack_94;
  
  bVar2 = *(byte *)(param_2 + 0x12);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      param_2[1] = *param_2 + 0x1e8;
      *(undefined1 *)(param_2 + 0x11) = 0;
LAB_1004f1ce4:
      FUN_1005c252c(param_1,param_2 + 1);
      if (*param_1 == -0x8000000000000000) {
        uVar7 = 3;
      }
      else {
        if ((((char)param_2[0x11] == '\x03') && ((char)param_2[0x10] == '\x03')) &&
           (((char)param_2[0xf] == '\x03' && ((char)param_2[6] == '\x04')))) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_2 + 7);
          if (param_2[8] != 0) {
            (**(code **)(param_2[8] + 0x18))(param_2[9]);
          }
        }
        uVar7 = 1;
      }
      *(undefined1 *)(param_2 + 0x12) = uVar7;
      return;
    }
    FUN_107c05cc0(&UNK_10b215778);
  }
  else if (bVar2 == 3) goto LAB_1004f1ce4;
  FUN_107c05cc4(&UNK_10b215778);
  *(undefined1 *)(param_2 + 0x12) = 2;
  uVar4 = __Unwind_Resume();
  if (param_2[8] != 0) {
    (**(code **)(param_2[8] + 0x18))(param_2[9]);
  }
  *(undefined1 *)(param_2 + 0x12) = 2;
  __Unwind_Resume(uVar4);
  auVar17 = FUN_107c05ccc();
  lVar6 = auVar17._8_8_;
  puVar5 = auVar17._0_8_;
  auStack_a50[0] = 0;
  bVar2 = *(byte *)(lVar6 + 0xec1);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      FUN_107c05cc0(&UNK_10b215850);
LAB_1004f21ec:
      FUN_107c05cc4(&UNK_10b215850);
      uVar8 = extraout_w8;
LAB_1004f21f8:
      if (uVar8 == 1) {
        FUN_107c05cc0(&UNK_10b22c338);
      }
      else {
        FUN_107c05cc4(&UNK_10b22c338);
      }
LAB_1004f2244:
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1004f2248);
      (*pcVar10)();
    }
    lVar12 = *(long *)(lVar6 + 0x250);
    *(undefined1 *)(lVar6 + 0xec2) = 1;
    _memcpy(auStack_a50,lVar6,0x250);
    uVar7 = *(undefined1 *)(lVar6 + 0xec0);
    lVar12 = *(long *)(lVar12 + 0x210);
    puStack_300 = (undefined8 *)&UNK_108ca2b0c;
    puStack_2f8 = (undefined8 *)0x16;
    if (*(char *)(lVar12 + 0x368) == '\x02') {
      uStack_570 = (undefined8 *)&DAT_103296230;
      uStack_578 = &puStack_300;
      puVar13 = (undefined8 *)
                thunk_FUN_10894170c(s__Session_persistence_is_disabled_108af5d85,&uStack_578);
      puStack_300 = (undefined8 *)0x0;
      puStack_2f8 = (undefined8 *)0x1;
      puStack_2f0 = (undefined8 *)0x0;
      puStack_568 = (undefined8 *)0x60000020;
      uStack_570 = (undefined8 *)&UNK_10b209290;
      puStack_590 = puVar13;
      uStack_578 = &puStack_300;
      iVar3 = __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
                        (&puStack_590,&uStack_578);
      puVar14 = puStack_300;
      if (iVar3 != 0) {
        FUN_107c05cb4(&UNK_108cc3daa,0x37,&puStack_b0,&UNK_10b235000,&UNK_10b2346c0);
        goto LAB_1004f2244;
      }
      puStack_a8 = puStack_2f0;
      puStack_b0 = puStack_2f8;
      (**(code **)*puVar13)(puVar13);
      puStack_5a8 = puStack_a8;
      puStack_5b0 = puStack_b0;
      FUN_100e21f20(auStack_a50);
      *(undefined1 *)(lVar6 + 0xec2) = 0;
      cVar15 = '\x04';
      ppuVar16 = (undefined8 **)0x2;
      goto LAB_1004f20e0;
    }
    lVar12 = lVar12 + 0x340;
    *(undefined1 *)(lVar6 + 0xec2) = 0;
    _memcpy(lVar6 + 600,lVar6,0x250);
    *(long *)(lVar6 + 0x4a8) = lVar12;
    *(undefined1 *)(lVar6 + 0x4b8) = uVar7;
    *(undefined1 *)(lVar6 + 0x4b9) = 0;
LAB_1004f1ec4:
    *(long *)(lVar6 + 0x4b0) = lVar12;
    *(undefined1 *)(lVar6 + 0x4bb) = 1;
    _memcpy(lVar6 + 0x4c0,lVar6 + 600,0x250);
    *(undefined1 *)(lVar6 + 0x4ba) = uVar7;
    *(long *)(lVar6 + 0x718) = lVar12;
    *(undefined1 *)(lVar6 + 0x721) = 0;
LAB_1004f1eec:
    FUN_100a8481c(&uStack_578,lVar6 + 0x710,param_3);
    puVar14 = uStack_570;
    cVar15 = (char)uStack_578;
    if ((char)uStack_578 != '\x06') {
      uStack_57c = (undefined3)((ulong)uStack_578 >> 0x28);
      puStack_588 = puStack_560;
      puStack_590 = puStack_568;
      uStack_580 = uStack_578._1_4_;
      if (*(char *)(lVar6 + 0x721) == '\x04') {
        FUN_100cf5bf8(lVar6 + 0x728);
LAB_1004f1f8c:
        *(undefined1 *)(lVar6 + 0x720) = 0;
      }
      else if (*(char *)(lVar6 + 0x721) == '\x03') {
        if (((*(char *)(lVar6 + 0x798) == '\x03') && (*(char *)(lVar6 + 0x790) == '\x03')) &&
           (*(char *)(lVar6 + 0x748) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (lVar6 + 0x750);
          if (*(long *)(lVar6 + 0x758) != 0) {
            (**(code **)(*(long *)(lVar6 + 0x758) + 0x18))(*(undefined8 *)(lVar6 + 0x760));
          }
        }
        goto LAB_1004f1f8c;
      }
      if (cVar15 == '\x05') {
        plVar9 = *(long **)(lVar6 + 0x4b0);
        lVar12 = *plVar9;
        lVar1 = plVar9[1];
        lVar11 = *(long *)(lVar1 + 0x10);
        lStack_320 = plVar9[4];
        lStack_328 = plVar9[3];
        *(undefined1 *)(lVar6 + 0x4bb) = 0;
        _memcpy(&uStack_578,lVar6 + 0x4c0,0x250);
        uStack_318 = *(undefined1 *)(lVar6 + 0x4ba);
        auVar17 = (**(code **)(lVar1 + 0x90))
                            (lVar12 + (lVar11 - 1U & 0xfffffffffffffff0) + 0x10,&uStack_578);
        *(undefined1 (*) [16])(lVar6 + 0x4c0) = auVar17;
        goto LAB_1004f1fec;
      }
      uStack_98 = uStack_580;
      uStack_94 = uStack_57c;
      puStack_a8 = puStack_588;
      puStack_b0 = puStack_590;
      FUN_100e21f20(lVar6 + 0x4c0);
      ppuVar16 = (undefined8 **)0x2;
      goto LAB_1004f20a0;
    }
    uVar7 = 3;
  }
  else {
    if (bVar2 != 3) goto LAB_1004f21ec;
    bVar2 = *(byte *)(lVar6 + 0x4b9);
    uVar8 = (uint)bVar2;
    if (bVar2 < 3) {
      if (bVar2 == 0) {
        lVar12 = *(long *)(lVar6 + 0x4a8);
        uVar7 = *(undefined1 *)(lVar6 + 0x4b8);
        goto LAB_1004f1ec4;
      }
      goto LAB_1004f21f8;
    }
    if (bVar2 == 3) goto LAB_1004f1eec;
    auVar17 = *(undefined1 (*) [16])(lVar6 + 0x4c0);
LAB_1004f1fec:
    (**(code **)(auVar17._8_8_ + 0x18))(&uStack_578,auVar17._0_8_,param_3);
    puVar14 = puStack_568;
    ppuVar16 = uStack_578;
    if (uStack_578 != (undefined8 **)0x3) {
      cVar15 = (char)uStack_570;
      uStack_94 = (undefined3)((ulong)uStack_570 >> 0x28);
      puStack_a8 = puStack_558;
      puStack_b0 = puStack_560;
      uStack_98 = uStack_570._1_4_;
      _memcpy(&puStack_300,auStack_550,0x250);
      uVar4 = *(undefined8 *)(lVar6 + 0x4c0);
      puVar13 = *(undefined8 **)(lVar6 + 0x4c8);
      pcVar10 = (code *)*puVar13;
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(uVar4);
      }
      if (puVar13[1] != 0) {
        _free(uVar4);
      }
LAB_1004f20a0:
      *(undefined1 *)(lVar6 + 0x4bb) = 0;
      uStack_598 = uStack_98;
      uStack_594 = uStack_94;
      puStack_5a8 = puStack_a8;
      puStack_5b0 = puStack_b0;
      _memcpy(auStack_800,&puStack_300,0x250);
      *(undefined1 *)(lVar6 + 0x4b9) = 1;
      FUN_100cc5d1c(lVar6 + 600);
      *(undefined1 *)(lVar6 + 0xec2) = 0;
LAB_1004f20e0:
      *puVar5 = ppuVar16;
      *(char *)(puVar5 + 1) = cVar15;
      *(undefined4 *)((long)puVar5 + 9) = uStack_598;
      *(uint *)((long)puVar5 + 0xc) = CONCAT31(uStack_594,uStack_598._3_1_);
      puVar5[2] = puVar14;
      puVar5[4] = puStack_5a8;
      puVar5[3] = puStack_5b0;
      _memcpy(puVar5 + 5,auStack_800,0x250);
      uVar7 = 1;
      goto LAB_1004f2118;
    }
    uVar7 = 4;
  }
  *(undefined1 *)(lVar6 + 0x4b9) = uVar7;
  uVar7 = 3;
  *puVar5 = 3;
LAB_1004f2118:
  *(undefined1 *)(lVar6 + 0xec1) = uVar7;
  return;
}

