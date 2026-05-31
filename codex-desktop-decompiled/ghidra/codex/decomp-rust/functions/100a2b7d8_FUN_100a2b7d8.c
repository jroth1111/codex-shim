
long FUN_100a2b7d8(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x21;
  undefined *puStack_1480;
  undefined *puStack_1478;
  undefined *puStack_1470;
  undefined *puStack_1468;
  undefined *puStack_1460;
  undefined *puStack_1458;
  undefined *puStack_1450;
  long lStack_1448;
  undefined *puStack_1440;
  undefined *puStack_1438;
  undefined *puStack_1430;
  undefined *puStack_1428;
  undefined *puStack_1420;
  undefined *puStack_1418;
  undefined *puStack_1410;
  undefined *puStack_1408;
  long lStack_1400;
  long lStack_13f8;
  long *plStack_13f0;
  long lStack_13e8;
  undefined8 uStack_13e0;
  undefined8 uStack_1040;
  undefined1 uStack_48;
  
  uStack_1040 = 0;
  puStack_1440 = (undefined *)0x8000000000000001;
  if (*param_1 != -0x7fffffffffffffff) {
    if (*param_1 == -0x8000000000000000) {
      puStack_1440 = (undefined *)0x8000000000000000;
      if (param_1[9] != -0x8000000000000000) goto LAB_100a2b8a0;
LAB_100a2b840:
      unaff_x20 = -0x8000000000000000;
    }
    else {
      puStack_1460 = (undefined *)0x0;
      puStack_1468 = &UNK_108c56c70;
      puStack_1450 = (undefined *)0x0;
      puStack_1458 = (undefined *)0x0;
      puStack_1480 = (undefined *)0x0;
      puStack_1478 = (undefined *)0x8;
      puStack_1470 = (undefined *)0x0;
      FUN_1011a27dc(&puStack_1480,param_1);
      puStack_1438 = puStack_1478;
      puStack_1440 = puStack_1480;
      puStack_1428 = puStack_1468;
      puStack_1430 = puStack_1470;
      puStack_1418 = puStack_1458;
      puStack_1420 = puStack_1460;
      puStack_1410 = puStack_1450;
      lStack_1400 = param_1[8];
      puStack_1408 = (undefined *)param_1[7];
      if (param_1[9] == -0x8000000000000000) goto LAB_100a2b840;
LAB_100a2b8a0:
      lVar2 = param_1[10];
      unaff_x20 = param_1[0xb];
      if (unaff_x20 == 0) {
        param_1 = (long *)0x1;
      }
      else {
        param_1 = (long *)_malloc(unaff_x20);
        if (param_1 == (long *)0x0) {
          func_0x0001087c9084(1,unaff_x20);
          goto LAB_100a2b970;
        }
      }
      _memcpy(param_1,lVar2,unaff_x20);
    }
    puStack_1478 = puStack_1430;
    puStack_1480 = puStack_1438;
    puStack_1468 = puStack_1420;
    puStack_1470 = puStack_1428;
    puStack_1458 = puStack_1410;
    puStack_1460 = puStack_1418;
    lStack_1448 = lStack_1400;
    puStack_1450 = puStack_1408;
    unaff_x21 = param_1;
  }
  puStack_1430 = puStack_1478;
  puStack_1438 = puStack_1480;
  puStack_1420 = puStack_1468;
  puStack_1428 = puStack_1470;
  puStack_1410 = puStack_1458;
  puStack_1418 = puStack_1460;
  lStack_1400 = lStack_1448;
  puStack_1408 = puStack_1450;
  uStack_48 = 0;
  lStack_13f8 = unaff_x20;
  plStack_13f0 = unaff_x21;
  lStack_13e8 = unaff_x20;
  uStack_13e0 = param_2;
  lVar2 = _malloc(0x1400);
  if (lVar2 != 0) {
    _memcpy(lVar2,&puStack_1440,0x1400);
    return lVar2;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1400);
LAB_100a2b970:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a2b974);
  (*pcVar1)();
}

