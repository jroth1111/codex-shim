
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_102877ca8(long *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 ******ppppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *unaff_x28;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_120 [16];
  undefined8 *****pppppuStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 *******pppppppuStack_100;
  undefined *puStack_f8;
  undefined8 *puStack_f0;
  undefined1 uStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *****pppppuStack_d8;
  ulong uStack_d0;
  undefined8 *******pppppppuStack_c8;
  long *plStack_c0;
  ulong uStack_b8;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 auStack_30 [15];
  undefined1 uStack_21;
  
  lVar8 = _malloc(0x20);
  if (lVar8 != 0) {
    lStack_48 = 0x20;
    lStack_38 = 0;
    lStack_40 = lVar8;
    __ZN6chrono5naive8datetime13NaiveDateTime22overflowing_add_offset17h3181715a776bebffE
              (auStack_30,param_2,0);
    uVar9 = func_0x000102876e24(&lStack_48,auStack_30,0);
    if ((int)uVar9 == 0) {
      param_1[1] = lStack_40;
      *param_1 = lStack_48;
      param_1[2] = lStack_38;
      return uVar9;
    }
    func_0x000108a07a3c(&UNK_108d43226,0x34,&uStack_21,&UNK_10b28f2b0,&UNK_10b28fb28);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102877d44);
    (*pcVar2)();
  }
  uVar9 = func_0x0001087c9084(1,0x20);
  if (lStack_48 != 0) {
    _free(lStack_40);
  }
  auVar16 = __Unwind_Resume(uVar9);
  puVar11 = auVar16._8_8_;
  plVar10 = auVar16._0_8_;
  auStack_120 = (**(code **)(*plVar10 + 8))();
  lVar8 = auStack_120._8_8_;
  uVar9 = auStack_120._0_8_;
  if (*(char *)((long)puVar11 + 0x12) < '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010002f44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar9 = (**(code **)(lVar8 + 0x18))(uVar9,puVar11);
    return uVar9;
  }
  puStack_f8 = &DAT_10002e8dc;
  pppppppuStack_100 = (undefined8 *******)auStack_120;
  uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                    (*puVar11,puVar11[1],s__108ab25ae,&pppppppuStack_100);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  auVar16 = (**(code **)(lVar8 + 0x30))(uVar9);
  lVar8 = auVar16._0_8_;
  if (lVar8 != 0) {
    uVar4 = (**(code **)(puVar11[1] + 0x18))(*puVar11,&UNK_108c533c8,0xc);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    lVar5 = (**(code **)(auVar16._8_8_ + 0x30))(lVar8);
    puVar13 = (undefined *)0x0;
    puVar14 = puVar13;
    if (lVar8 == 0) goto LAB_10002f498;
    do {
      auVar15 = (**(code **)(auVar16._8_8_ + 0x30))(auVar16._0_8_);
      puVar13 = puVar14 + 1;
      ppppppuVar12 = &pppppuStack_110;
      unaff_x28 = puVar14;
      auVar1 = auVar16;
      auVar16 = auVar15;
      while( true ) {
        ppppppuStack_108 = auVar1._0_8_;
        *ppppppuVar12 = auVar1._8_8_;
        if (ppppppuStack_108 == (undefined8 ******)0x0) goto LAB_10002f514;
        pppppppuStack_e0 = (undefined8 *******)ppppppuStack_108;
        pppppuStack_d8 = pppppuStack_110;
        uVar4 = (**(code **)(puVar11[1] + 0x18))(*puVar11,&UNK_108c533d4,1);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        uStack_e8 = 0;
        pppppppuStack_c8 = &pppppppuStack_e0;
        plStack_c0 = (long *)&DAT_10002e8dc;
        pppppppuStack_100 = (undefined8 *******)(ulong)(lVar5 != 0);
        puStack_f8 = unaff_x28;
        puStack_f0 = puVar11;
        uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                          (&pppppppuStack_100,&UNK_10b1d2f58,s__108ab25ae,&pppppppuStack_c8);
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        puVar14 = puVar13;
        if (auVar16._0_8_ != 0) break;
LAB_10002f498:
        auVar1._8_8_ = 0;
        auVar1._0_8_ = ppppppuStack_108;
        ppppppuVar12 = &ppppppuStack_108;
      }
    } while( true );
  }
LAB_10002f514:
  plVar6 = plVar10 + 1;
  lVar8 = *plVar6;
  if (lVar8 == 3) {
    plVar6 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10);
    if (plVar6 == (long *)0x0) {
      FUN_107c05cac(&UNK_108c533e8,0x18,&UNK_10b1d30e0);
      goto LAB_10002f694;
    }
    lVar8 = *plVar6;
  }
  if (lVar8 != 2) {
    return 0;
  }
  pppppppuStack_c8 = (undefined8 *******)0x0;
  plStack_c0 = (long *)0x1;
  uStack_b8 = 0;
  puStack_f0 = (undefined8 *)0x60000020;
  pppppppuStack_100 = &pppppppuStack_c8;
  puStack_f8 = &UNK_10b1d2ef0;
  iVar3 = func_0x000106055ddc(plVar6,&pppppppuStack_100);
  if (iVar3 != 0) {
LAB_10002f694:
    FUN_107c05cb4(&UNK_108c532f8,0x37,&ppppppuStack_108,&UNK_10b1d2f38,&UNK_10b1d2f20);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10002f6bc);
    (*pcVar2)();
  }
  pppppuStack_d8 = (undefined8 *****)plStack_c0;
  pppppppuStack_e0 = pppppppuStack_c8;
  uStack_d0 = uStack_b8;
  uVar7 = (**(code **)(puVar11[1] + 0x18))(*puVar11,&UNK_108c533d5,2);
  uVar4 = uStack_d0;
  if ((uVar7 & 1) == 0) {
    if ((uStack_d0 < 0x10) ||
       (*pppppuStack_d8 != (undefined8 ****)0x6162206b63617473 ||
        pppppuStack_d8[1] != (undefined8 ****)0x3a65636172746b63)) {
      uVar7 = (**(code **)(puVar11[1] + 0x18))(*puVar11,&UNK_108c533d7,0x11);
      if ((uVar7 & 1) != 0) goto LAB_10002f650;
    }
    else {
      func_0x00010002efa8(&pppppppuStack_e0);
      uVar4 = uStack_d0;
    }
    uVar9 = func_0x00010002ec74(pppppuStack_d8,uVar4);
    func_0x00010002f03c(&pppppppuStack_e0,uVar9);
    puStack_f8 = &LAB_10002f08c;
    pppppppuStack_100 = &pppppppuStack_e0;
    uVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                      (*puVar11,puVar11[1],s__108ab25ae,&pppppppuStack_100);
    if ((uVar4 & 1) == 0) {
      if (pppppppuStack_e0 != (undefined8 *******)0x0) {
        _free(pppppuStack_d8);
      }
      return 0;
    }
  }
LAB_10002f650:
  if (pppppppuStack_e0 != (undefined8 *******)0x0) {
    _free(pppppuStack_d8);
  }
  return 1;
}

