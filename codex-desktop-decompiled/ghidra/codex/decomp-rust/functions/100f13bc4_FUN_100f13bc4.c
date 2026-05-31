
/* WARNING: Possible PIC construction at 0x000100f14028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f1402c) */

void FUN_100f13bc4(long *param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar11;
  ulong unaff_x21;
  ulong uVar12;
  undefined ***unaff_x22;
  long lVar13;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  undefined8 unaff_x30;
  undefined1 auStack_720 [80];
  undefined *puStack_6d0;
  undefined *puStack_6c8;
  undefined *puStack_6c0;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  undefined *puStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined *puStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined *puStack_590;
  undefined **ppuStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  undefined *puStack_570;
  undefined **ppuStack_568;
  undefined *puStack_560;
  undefined *puStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  undefined *puStack_540;
  undefined *puStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined *puStack_210;
  undefined *puStack_208;
  ulong uStack_200;
  undefined *puStack_1f8;
  
  puVar14 = &stack0xfffffffffffffff0;
  ppuVar4 = &puStack_6d0;
  puStack_6d0 = (undefined *)0x0;
  uVar12 = *param_2;
  uVar9 = uVar12 ^ 0x8000000000000000;
  if (-1 < (long)uVar12) {
    uVar9 = 6;
  }
  if (3 < (long)uVar9) {
    unaff_x22 = &ppuStack_588;
    if (uVar9 == 5) {
      uVar9 = param_2[1];
      puVar1 = (undefined *)param_2[2];
      uVar12 = param_2[3];
      puStack_1f8 = puVar1 + uVar12 * 0x50;
      puStack_3c0 = (undefined *)CONCAT71(puStack_3c0._1_7_,10);
      puStack_210 = puVar1;
      puStack_208 = puVar1;
      uStack_200 = uVar9;
      FUN_1087e3db0(&ppuStack_588,&puStack_3c0,&puStack_5a0,&UNK_10b21a7b0);
      puStack_6c8 = puStack_578;
      puStack_6d0 = puStack_580;
      puStack_6c0 = puStack_570;
      if (ppuStack_588 == (undefined **)0x2) {
        puStack_5f8 = puStack_578;
        puStack_600 = puStack_580;
        puStack_5f0 = puStack_570;
        if (uVar12 == 0) {
          param_1[2] = (long)puStack_578;
          param_1[1] = (long)puStack_580;
          param_1[3] = (long)puStack_570;
          *param_1 = 2;
        }
        else {
          FUN_1087e427c(&ppuStack_588,uVar12,&UNK_10b21cb80,&UNK_10b20a590);
          param_1[5] = (long)puStack_560;
          param_1[4] = (long)ppuStack_568;
          param_1[7] = (long)puStack_550;
          param_1[6] = (long)puStack_558;
          param_1[9] = (long)puStack_540;
          param_1[8] = (long)puStack_548;
          param_1[10] = (long)puStack_538;
          param_1[1] = (long)puStack_580;
          *param_1 = (long)ppuStack_588;
          param_1[3] = (long)puStack_570;
          param_1[2] = (long)puStack_578;
          FUN_100d0def8(&puStack_600);
        }
        lVar13 = uVar12 + 1;
        puVar6 = puVar1;
        while (lVar13 = lVar13 + -1, lVar13 != 0) {
          FUN_100ddb5bc(puVar6);
          puVar6 = puVar6 + 0x50;
        }
      }
      else {
        param_1[5] = (long)puStack_560;
        param_1[4] = (long)ppuStack_568;
        param_1[7] = (long)puStack_550;
        param_1[6] = (long)puStack_558;
        param_1[9] = (long)puStack_540;
        param_1[8] = (long)puStack_548;
        param_1[10] = (long)puStack_538;
        param_1[2] = (long)puStack_578;
        param_1[1] = (long)puStack_580;
        param_1[3] = (long)puStack_570;
        lVar13 = uVar12 + 1;
        *param_1 = (long)ppuStack_588;
        puVar6 = puVar1;
        while (lVar13 = lVar13 + -1, lVar13 != 0) {
          FUN_100ddb5bc(puVar6);
          puVar6 = puVar6 + 0x50;
        }
      }
      if (uVar9 == 0) {
        return;
      }
      _free(puVar1);
      return;
    }
    if (uVar9 == 6) {
      uVar11 = param_2[6];
      uVar9 = param_2[1];
      uVar2 = param_2[2];
      uVar10 = param_2[4];
      if ((uVar10 != 0) && (uVar10 * 9 != -0x11)) {
        _free(param_2[3] + uVar10 * -8 + -8);
      }
      uStack_650 = uVar9 + uVar2 * 0x70;
      puStack_6d0 = (undefined *)0x8000000000000000;
      puStack_5a0 = (undefined *)0x0;
      puStack_590 = (undefined *)0x0;
      uStack_668 = uVar9;
      uStack_660 = uVar9;
      uStack_658 = uVar12;
      do {
        func_0x000100f1c750(&ppuStack_588,&puStack_6d0);
        ppuVar4 = ppuStack_568;
        if (puStack_570 == (undefined *)0x2) {
          puStack_5b8 = puStack_598;
          puStack_5c0 = puStack_5a0;
          puStack_5b0 = puStack_590;
LAB_100f13f2c:
          puStack_638 = puStack_5b8;
          puStack_640 = puStack_5c0;
          puStack_630 = puStack_5b0;
          if (uStack_650 == uStack_660) {
            param_1[2] = (long)puStack_5b8;
            param_1[1] = (long)puStack_5c0;
            param_1[3] = (long)puStack_5b0;
            *param_1 = 2;
          }
          else {
            FUN_1087e427c(&ppuStack_588,uVar11,&UNK_10b21cb90,&UNK_10b20a590);
            param_1[5] = (long)puStack_560;
            param_1[4] = (long)ppuStack_568;
            param_1[7] = (long)puStack_550;
            param_1[6] = (long)puStack_558;
            param_1[9] = (long)puStack_540;
            param_1[8] = (long)puStack_548;
            param_1[10] = (long)puStack_538;
            param_1[1] = (long)puStack_580;
            *param_1 = (long)ppuStack_588;
            param_1[3] = (long)puStack_570;
            param_1[2] = (long)puStack_578;
            FUN_100d0def8(&puStack_640);
          }
LAB_100f13f9c:
          FUN_100deffc0(&puStack_6d0);
          return;
        }
        if (puStack_570 == (undefined *)0x3) {
          puStack_5b8 = puStack_558;
          puStack_5c0 = puStack_560;
          puStack_5b0 = puStack_550;
          puStack_5f8 = puStack_540;
          puStack_600 = puStack_548;
          lStack_5e8 = lStack_530;
          puStack_5f0 = puStack_538;
          lStack_5d8 = lStack_520;
          lStack_5e0 = lStack_528;
          lStack_5d0 = lStack_518;
          if (puStack_5a0 == (undefined *)0x0) {
            puStack_548 = (undefined *)0x0;
          }
          else {
            puStack_580 = (undefined *)0x0;
            puStack_578 = puStack_5a0;
            puStack_570 = puStack_598;
            puStack_560 = (undefined *)0x0;
            puStack_558 = puStack_5a0;
            puStack_550 = puStack_598;
            puStack_548 = puStack_590;
          }
          ppuStack_588 = (undefined **)(ulong)(puStack_5a0 != (undefined *)0x0);
          ppuStack_568 = ppuStack_588;
          while (FUN_100f3b35c(&puStack_210,&ppuStack_588), uVar9 = uStack_200, puVar1 = puStack_210
                , puStack_210 != (undefined *)0x0) {
            if (*(long *)(puStack_210 + uStack_200 * 0x18 + 0x1298) != 0) {
              _free(*(undefined8 *)(puStack_210 + uStack_200 * 0x18 + 0x12a0));
            }
            FUN_100e0ea40(puVar1 + uVar9 * 0x1b0);
          }
          if (ppuVar4 != (undefined **)0x2) {
            puStack_618 = puStack_5b8;
            puStack_620 = puStack_5c0;
            puStack_610 = puStack_5b0;
            param_1[5] = (long)puStack_5f8;
            param_1[4] = (long)puStack_600;
            param_1[7] = lStack_5e8;
            param_1[6] = (long)puStack_5f0;
            param_1[9] = lStack_5d8;
            param_1[8] = lStack_5e0;
            param_1[10] = lStack_5d0;
            param_1[2] = (long)puStack_5b8;
            param_1[1] = (long)puStack_5c0;
            param_1[3] = (long)puStack_5b0;
            *param_1 = (long)ppuVar4;
            goto LAB_100f13f9c;
          }
          goto LAB_100f13f2c;
        }
        puStack_3c0 = puStack_570;
        _memcpy(&uStack_3b8,&ppuStack_568,0x1a8);
        func_0x000100f35724(&puStack_210,&puStack_5a0,&ppuStack_588,&puStack_3c0);
        if (puStack_210 != (undefined *)0x2) {
          FUN_100e0ea40(&puStack_210);
        }
      } while( true );
    }
    puStack_6c8 = (undefined *)param_2[2];
    puStack_6d0 = (undefined *)param_2[1];
    puStack_6c0 = (undefined *)param_2[3];
    puStack_210 = (undefined *)0x0;
    puStack_208 = (undefined *)0x1;
    uStack_200 = 0;
    puStack_578 = (undefined *)0x60000020;
    ppuStack_588 = &puStack_210;
    puStack_580 = &UNK_10b209290;
    iVar5 = __ZN72__LT_toml_datetime__datetime__Datetime_u20_as_u20_core__fmt__Display_GT_3fmt17h738d057b6bf54964E
                      (&puStack_6d0,&ppuStack_588);
    if (iVar5 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,&puStack_5a0,&UNK_10b235000,&UNK_10b2346c0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100f140e8);
      (*pcVar3)();
    }
    uStack_3b8 = puStack_208;
    puStack_3c0 = puStack_210;
    lStack_3b0 = uStack_200;
    ppuVar7 = &puStack_3c0;
    unaff_x30 = 0x100f1402c;
    unaff_x19 = param_1;
SUB_108814d34:
    *(undefined ****)((long)ppuVar4 + -0x30) = unaff_x22;
    *(ulong *)((long)ppuVar4 + -0x28) = uVar12;
    *(undefined8 *)((long)ppuVar4 + -0x20) = unaff_x20;
    *(long **)((long)ppuVar4 + -0x18) = unaff_x19;
    *(undefined1 **)((long)ppuVar4 + -0x10) = puVar14;
    *(undefined8 *)((long)ppuVar4 + -8) = unaff_x30;
    puVar1 = ppuVar7[1];
    puVar6 = ppuVar7[2];
    *(undefined **)((long)ppuVar4 + -0x48) = puVar1;
    *(undefined **)((long)ppuVar4 + -0x40) = puVar6;
    *(undefined1 *)((long)ppuVar4 + -0x50) = 5;
    FUN_1087e3db0(param_1,(undefined1 *)((long)ppuVar4 + -0x50),
                  (undefined1 *)((long)ppuVar4 + -0x31),&UNK_10b21a7b0);
    if (*ppuVar7 != (undefined *)0x0) {
      _free(puVar1);
    }
    return;
  }
  if ((long)uVar9 < 2) {
    if (uVar9 == 0) {
      ppuVar7 = (undefined **)(param_2 + 1);
      ppuVar4 = (undefined **)register0x00000008;
      uVar12 = unaff_x21;
      puVar14 = unaff_x29;
      goto SUB_108814d34;
    }
    puStack_580 = (undefined *)param_2[1];
    uVar8 = 2;
  }
  else {
    if (uVar9 != 2) {
      ppuStack_588 = (undefined **)((ulong)CONCAT61(ppuStack_588._2_6_,(char)param_2[1]) << 8);
      goto LAB_100f13dec;
    }
    puStack_580 = (undefined *)param_2[1];
    uVar8 = 3;
  }
  ppuStack_588 = (undefined **)CONCAT71(ppuStack_588._1_7_,uVar8);
LAB_100f13dec:
  FUN_1087e3db0(param_1,&ppuStack_588,&puStack_5a0,&UNK_10b21a7b0);
  return;
}

