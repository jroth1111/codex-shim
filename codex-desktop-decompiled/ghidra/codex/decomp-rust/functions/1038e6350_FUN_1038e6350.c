
/* WARNING: Type propagation algorithm not settling */

void FUN_1038e6350(ulong *param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined8 ******ppppppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_220 [96];
  undefined1 auStack_1c0 [104];
  undefined8 *******pppppppuStack_158;
  undefined8 *puStack_150;
  undefined8 **ppuStack_148;
  code *pcStack_140;
  undefined1 *puStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined1 auStack_120 [16];
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 *puStack_e8;
  undefined8 **ppuStack_e0;
  undefined1 auStack_d8 [16];
  undefined8 *******pppppppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 **ppuStack_b8;
  code *pcStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  undefined *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 ******ppppppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  __ZN3std3sys7process4unix6common7Command3new17h3172692053ff4dc3E(auStack_220,&UNK_108d96273,3);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E(auStack_220,*param_2,param_2[1]);
  if ((((param_3 != 1) &&
       (__ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                  (auStack_220,param_2[2],param_2[3]), param_3 != 2)) &&
      (__ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                 (auStack_220,param_2[4],param_2[5]), param_3 != 3)) &&
     ((__ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                 (auStack_220,param_2[6],param_2[7]), param_3 != 4 &&
      (__ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                 (auStack_220,param_2[8],param_2[9]), param_3 != 5)))) {
    __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
              (auStack_220,param_2[10],param_2[0xb]);
  }
  __ZN3std3sys7process3env10CommandEnv3set17hb1c24f691b771ca9E
            (auStack_1c0,&UNK_108d97759,0x13,&UNK_108d96a9c,1);
  if (param_4 != 0) {
    __ZN3std3sys7process4unix6common7Command3cwd17h4267741f6f8380b4E(auStack_220,param_4,param_5);
  }
  __ZN3std7process7Command6output17h1646daf4eeeb893cE(&pppppppuStack_c8,auStack_220);
  if (pppppppuStack_c8 == (undefined8 *******)0x8000000000000000) {
    auStack_d8._0_8_ = puStack_c0;
    func_0x000103962b30(&pppppppuStack_158,param_2,param_3);
    uStack_68 = puStack_150;
    ppppppuStack_70 = pppppppuStack_158;
    uStack_60 = ppuStack_148;
    pppppppuStack_158 = &ppppppuStack_70;
    puStack_150 = (undefined8 *)&DAT_103972de0;
    ppuStack_148 = (undefined8 **)auStack_d8;
    pcStack_140 = 
    __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&uStack_88,s_failed_to_run_git___108af966c,&pppppppuStack_158);
    if (ppppppuStack_70 != (undefined8 ******)0x0) {
      _free(uStack_68);
    }
    if ((auStack_d8._0_8_ & 3) == 1) {
      puVar3 = (undefined8 *)(auStack_d8._0_8_ + -1);
      uVar4 = *puVar3;
      puVar5 = *(undefined8 **)(auStack_d8._0_8_ + 7);
      pcVar2 = (code *)*puVar5;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar4);
      }
      if (puVar5[1] != 0) {
        _free(uVar4);
      }
      _free(puVar3);
    }
    auStack_120._8_8_ = uStack_80;
    auStack_120._0_8_ = uStack_88;
    uStack_110 = uStack_78;
    param_1[1] = uStack_80;
    *param_1 = uStack_88;
    param_1[2] = uStack_78;
  }
  else {
    puStack_130 = puStack_a0;
    puStack_138 = puStack_a8;
    puStack_128 = puStack_98;
    ppuStack_148 = ppuStack_b8;
    puStack_150 = puStack_c0;
    pcStack_140 = pcStack_b0;
    pppppppuStack_158 = pppppppuStack_c8;
    if ((int)puStack_98 == 0) {
      *param_1 = 0x8000000000000000;
    }
    else {
      func_0x000103962b30(&pppppppuStack_c8,param_2,param_3);
      puStack_e8 = puStack_c0;
      pppppppuStack_f0 = pppppppuStack_c8;
      ppuStack_e0 = ppuStack_b8;
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                (&uStack_88,puStack_150,ppuStack_148);
      auStack_d8 = FUN_1039467ac(uStack_80,uStack_78);
      __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                (&ppppppuStack_70,puStack_138,puStack_130);
      uVar4 = uStack_68;
      ppppppuVar1 = ppppppuStack_70;
      auStack_120 = FUN_1039467ac(uStack_68,uStack_60);
      pppppppuStack_c8 = &pppppppuStack_f0;
      puStack_c0 = (undefined8 *)&DAT_103972de0;
      pcStack_b0 = (code *)&
                           __ZN63__LT_std__process__ExitStatus_u20_as_u20_core__fmt__Display_GT_3fmt17h50f79940b94001c9E
      ;
      puStack_a8 = auStack_d8;
      puStack_a0 = &DAT_103925cd0;
      puStack_98 = (undefined8 *)auStack_120;
      puStack_90 = &DAT_103925cd0;
      ppuStack_b8 = &puStack_128;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&uStack_108,s_git_failed_with_status_stdout__s_108af9639,&pppppppuStack_c8);
      if (((ulong)ppppppuVar1 & 0x7fffffffffffffff) != 0) {
        _free(uVar4);
      }
      if ((uStack_88 & 0x7fffffffffffffff) != 0) {
        _free(uStack_80);
      }
      if (pppppppuStack_f0 != (undefined8 *******)0x0) {
        _free(puStack_e8);
      }
      param_1[1] = uStack_100;
      *param_1 = uStack_108;
      param_1[2] = uStack_f8;
    }
    if (pppppppuStack_158 != (undefined8 *******)0x0) {
      _free(puStack_150);
    }
    if (pcStack_140 != (code *)0x0) {
      _free(puStack_138);
    }
  }
  func_0x000103938ac4(auStack_220);
  return;
}

