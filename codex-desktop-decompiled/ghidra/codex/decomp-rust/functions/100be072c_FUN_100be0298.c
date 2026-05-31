
/* WARNING: Removing unreachable block (ram,0x000100be065c) */

undefined1  [16] FUN_100be0298(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 **ppuVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint *puVar10;
  undefined1 uVar11;
  uint uVar12;
  uint extraout_w8;
  undefined8 uVar13;
  undefined8 *unaff_x20;
  undefined8 *puVar14;
  byte *unaff_x25;
  undefined1 auVar15 [16];
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 **ppuStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined2 uStack_250;
  undefined1 uStack_24e;
  undefined8 **ppuStack_108;
  undefined *puStack_100;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  bVar2 = *(byte *)(param_1 + 4);
  puVar8 = unaff_x20;
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        func_0x000108a07af4(&UNK_10b232a20);
LAB_100be08e0:
        func_0x000108a07af4(&UNK_10b2524f0);
        goto LAB_100be091c;
      }
      uStack_288 = (undefined8 **)*param_1;
      puStack_280 = (undefined8 *)param_1[1];
      param_1[2] = uStack_288;
      param_1[3] = puStack_280;
      if (puStack_280 == (undefined8 *)0x0) {
        uStack_24e = false;
      }
      else {
        uStack_24e = *(char *)uStack_288 == '/';
      }
      uStack_278 = CONCAT71(uStack_278._1_7_,6);
      uStack_250 = 0x201;
      __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                (&ppuStack_320,&uStack_288);
      if (((byte)ppuStack_320 - 7 < 3) &&
         (auVar15 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&uStack_288),
         auVar15._0_8_ != 0)) {
        *(undefined1 (*) [16])(param_1 + 5) = auVar15;
        *(undefined1 *)(param_1 + 0x2d) = 0;
        goto LAB_100be03d0;
      }
LAB_100be0404:
      param_1[5] = param_1[2];
      param_1[6] = param_1[3];
      *(undefined1 *)(param_1 + 0x22) = 0;
      goto LAB_100be0410;
    }
    if (bVar2 != 3) {
      func_0x000108a07b10(&UNK_10b232a20);
      uVar12 = extraout_w8;
LAB_100be0354:
      if (uVar12 != 3) {
        func_0x000108a07b10(&UNK_10b2524f0);
LAB_100be091c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100be0920);
        (*pcVar4)();
      }
      bVar2 = *(byte *)(param_1 + 0x15);
      if (bVar2 < 2) {
        if (bVar2 != 0) {
          func_0x000108a07af4(&UNK_10b252568);
          goto LAB_100be091c;
        }
        uVar7 = param_1[9];
        uVar13 = param_1[10];
        goto LAB_100be0378;
      }
      if (bVar2 != 3) {
        func_0x000108a07b10(&UNK_10b252568);
        goto LAB_100be091c;
      }
      goto LAB_100be0564;
    }
LAB_100be03d0:
    auVar15 = FUN_1016e2d40(param_1 + 5,param_2);
    puVar8 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) == 0) {
      if (*(char *)(param_1 + 0x2d) == '\x03') {
        func_0x000100ca802c(param_1 + 9);
      }
      if (puVar8 == (undefined8 *)0x0) goto LAB_100be0404;
      goto LAB_100be0884;
    }
    uVar11 = 3;
  }
  else if (bVar2 == 4) {
LAB_100be0410:
    FUN_1016e2b94(&uStack_288,param_1 + 5,param_2);
    uVar7 = uStack_278;
    puVar14 = puStack_280;
    ppuVar3 = uStack_288;
    if (uStack_288 != (undefined8 **)0x3) {
      if (((*(char *)(param_1 + 0x22) == '\x03') && (*(char *)(param_1 + 0x21) == '\x03')) &&
         (*(char *)((long)param_1 + 0x101) == '\x03')) {
        FUN_100deb62c(param_1 + 0xb);
        *(undefined1 *)(param_1 + 0x20) = 0;
      }
      if (ppuVar3 == (undefined8 **)0x2) {
        cVar5 = FUN_100c355d4(puVar14);
        if (cVar5 == '\0') {
          if (((ulong)puVar14 & 3) == 1) {
            uVar7 = *(undefined8 *)((long)puVar14 + -1);
            puVar8 = *(undefined8 **)((long)puVar14 + 7);
            pcVar4 = (code *)*puVar8;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar7);
            }
            if (puVar8[1] != 0) {
              _free(uVar7);
            }
            _free((undefined8 *)((long)puVar14 + -1));
          }
        }
        else {
          cVar5 = FUN_100c355d4(puVar14);
          if (cVar5 == '\x02') {
            unaff_x20 = puVar14;
            if (((ulong)puVar14 & 3) == 1) {
              unaff_x20 = (undefined8 *)((long)puVar14 + -1);
              uVar7 = *unaff_x20;
              puVar8 = *(undefined8 **)((long)puVar14 + 7);
              pcVar4 = (code *)*puVar8;
              if (pcVar4 != (code *)0x0) {
                (*pcVar4)(uVar7);
              }
              if (puVar8[1] != 0) {
                _free(uVar7);
              }
              _free(unaff_x20);
            }
            __ZN3std3sys2fs6exists17h1e470253a5e37a4fE(&uStack_288,param_1[2],param_1[3]);
            puVar8 = puStack_280;
            if (((ulong)uStack_288 & 1) != 0) goto LAB_100be0884;
            if (uStack_288._1_1_ == '\x01') {
              *(undefined1 *)(param_1 + 0x16) = 0;
              uVar7 = param_1[2];
              uVar13 = param_1[3];
              param_1[5] = uVar7;
              param_1[6] = uVar13;
              goto LAB_100be02fc;
            }
          }
          else {
            puStack_330 = puVar14;
            uVar1 = param_1[3];
            puVar8 = puVar14;
            if (uVar1 < 0x180) {
              _memcpy(&uStack_288,param_1[2],uVar1);
              *(undefined1 *)((long)&uStack_288 + uVar1) = 0;
              __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
                        (&ppuStack_108,&uStack_288,uVar1 + 1);
              if ((int)ppuStack_108 == 1) {
                puStack_318 = (undefined8 *)&UNK_10b4add80;
              }
              else {
                uStack_78 = 0;
                uStack_80 = 0;
                uStack_68 = 0;
                uStack_70 = 0;
                uStack_98 = 0;
                uStack_a0 = 0;
                uStack_88 = 0;
                uStack_90 = 0;
                uStack_b8 = 0;
                uStack_c0 = 0;
                uStack_a8 = 0;
                uStack_b0 = 0;
                uStack_d8 = 0;
                uStack_e0 = 0;
                uStack_c8 = 0;
                uStack_d0 = 0;
                puStack_e8 = (undefined *)0x0;
                pppuStack_f0 = (undefined8 ***)0x0;
                iVar6 = _stat(puStack_100,&pppuStack_f0);
                if (iVar6 != -1) goto LAB_100be0884;
                puVar10 = (uint *)___error();
                puStack_318 = (undefined8 *)((ulong)*puVar10 << 0x20 | 2);
              }
            }
            else {
              FUN_108a820a8(&ppuStack_320,param_1[2],uVar1,&DAT_10603cc64);
              if ((undefined8 ***)ppuStack_320 == (undefined8 ***)0x0) goto LAB_100be0884;
            }
            if (((ulong)puStack_318 & 3) == 1) {
              puVar8 = (undefined8 *)((long)puStack_318 + -1);
              uVar7 = *puVar8;
              puVar14 = *(undefined8 **)((long)puStack_318 + 7);
              pcVar4 = (code *)*puVar14;
              if (pcVar4 != (code *)0x0) {
                (*pcVar4)(uVar7);
              }
              if (puVar14[1] != 0) {
                _free(uVar7);
              }
              _free(puVar8);
            }
            FUN_100de21d4(&puStack_330);
          }
        }
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puStack_330 = (undefined8 *)param_1[2];
        uStack_328 = param_1[3];
        ppuStack_108 = &puStack_330;
        puStack_100 = &
                      __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        uStack_288 = ppuVar3;
        puStack_280 = puVar14;
        uStack_278 = uVar7;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&ppuStack_320,s__app_server_control_socket_is_al_108ad1cc1,&ppuStack_108);
        puStack_e8 = (undefined *)puStack_318;
        pppuStack_f0 = (undefined8 ***)ppuStack_320;
        uStack_e0 = uStack_310;
        puVar8 = (undefined8 *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(8,&pppuStack_f0);
        FUN_100deb62c(&uStack_288);
      }
      goto LAB_100be0884;
    }
    uVar11 = 4;
    unaff_x20 = puVar8;
  }
  else if (bVar2 == 5) {
    unaff_x25 = (byte *)(param_1 + 0x16);
    bVar2 = *unaff_x25;
    uVar12 = (uint)bVar2;
    if (1 < bVar2) goto LAB_100be0354;
    if (bVar2 != 0) goto LAB_100be08e0;
    uVar7 = param_1[5];
    uVar13 = param_1[6];
LAB_100be02fc:
    unaff_x25 = (byte *)(param_1 + 0x16);
    param_1[9] = uVar7;
    param_1[7] = uVar7;
    param_1[8] = uVar13;
    param_1[10] = uVar13;
    *(undefined1 *)(param_1 + 0x15) = 0;
LAB_100be0378:
    param_1[0xb] = uVar7;
    param_1[0xc] = uVar13;
    *(undefined1 *)(param_1 + 0x14) = 0;
    puVar8 = unaff_x20;
LAB_100be0564:
    FUN_100fc0c58(&uStack_288,param_1 + 0xb,param_2);
    unaff_x20 = puStack_280;
    ppuVar3 = uStack_288;
    if (uStack_288 != (undefined8 **)0x2) {
      if (*(char *)(param_1 + 0x14) == '\x03') {
        if (*(char *)(param_1 + 0x13) == '\x03') {
          plVar9 = (long *)param_1[0x12];
          if (*plVar9 == 0xcc) {
            *plVar9 = 0x84;
          }
          else {
            (**(code **)(plVar9[2] + 0x20))();
          }
        }
        else if ((*(char *)(param_1 + 0x13) == '\0') && (param_1[0xf] != 0)) {
          _free(param_1[0x10]);
        }
      }
      if (((ulong)ppuVar3 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x15) = 1;
        *unaff_x25 = 1;
        if (((ulong)unaff_x20 & 0xf00000000000) == 0xc00000000000) {
          param_1[5] = param_1[2];
          param_1[6] = param_1[3];
          *(undefined1 *)(param_1 + 0xe) = 0;
          goto LAB_100be06c0;
        }
        ppuStack_108 = (undefined8 **)param_1[2];
        puStack_100 = (undefined *)param_1[3];
        pppuStack_f0 = &ppuStack_108;
        puStack_e8 = &
                     __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&uStack_288,s__app_server_control_socket_path_e_108ad1cf3,&pppuStack_f0);
        puStack_318 = puStack_280;
        ppuStack_320 = uStack_288;
        uStack_310 = uStack_278;
        puVar8 = (undefined8 *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(0xc,&ppuStack_320);
      }
      else {
        *(undefined1 *)(param_1 + 0x15) = 1;
        *unaff_x25 = 1;
        puVar8 = unaff_x20;
      }
      goto LAB_100be0884;
    }
    *(undefined1 *)(param_1 + 0x15) = 3;
    *(undefined1 *)(param_1 + 0x16) = 3;
    uVar11 = 5;
    unaff_x20 = puVar8;
  }
  else {
LAB_100be06c0:
    auVar15 = FUN_100fbd64c(param_1 + 5,*param_2);
    puVar8 = auVar15._8_8_;
    if ((auVar15._0_8_ & 1) == 0) {
      if (*(char *)(param_1 + 0xe) == '\x03') {
        if (*(char *)(param_1 + 0xd) == '\x03') {
          plVar9 = (long *)param_1[0xc];
          if (*plVar9 == 0xcc) {
            *plVar9 = 0x84;
          }
          else {
            (**(code **)(plVar9[2] + 0x20))();
          }
        }
        else if ((*(char *)(param_1 + 0xd) == '\0') && (param_1[9] != 0)) {
          _free(param_1[10]);
        }
      }
LAB_100be0884:
      uVar7 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
      goto LAB_100be0890;
    }
    uVar11 = 6;
  }
  *(undefined1 *)(param_1 + 4) = uVar11;
  uVar7 = 1;
  puVar8 = unaff_x20;
LAB_100be0890:
  auVar15._8_8_ = puVar8;
  auVar15._0_8_ = uVar7;
  return auVar15;
}

