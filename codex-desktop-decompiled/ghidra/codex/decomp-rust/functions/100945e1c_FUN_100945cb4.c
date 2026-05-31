
/* WARNING: Type propagation algorithm not settling */

void FUN_100945cb4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long ******pppppplVar4;
  long ****pppplVar5;
  undefined1 uVar6;
  long *****ppppplVar7;
  long *******ppppppplVar8;
  long *******unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *******ppppppplVar13;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  code *pcStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  code *pcStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  
  bVar2 = *(byte *)(param_2 + 6);
  if (bVar2 < 3) {
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        FUN_107c05cc0(&UNK_10b2286f0);
      }
      FUN_107c05cc4();
LAB_1009461d8:
      func_0x0001087c9084(1,0x2c);
LAB_1009461e4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009461e8);
      (*pcVar3)();
    }
    param_2[3] = (long *)*param_2;
    param_2[5] = param_2[2];
    param_2[4] = param_2[1];
    param_2[7] = *(long *)*param_2 + 0x10;
    param_2[9] = param_2[2];
    param_2[8] = param_2[1];
    *(undefined1 *)(param_2 + 0x1c) = 0;
LAB_100945d30:
    FUN_10050e55c(&ppppppplStack_168,param_2 + 7,param_3);
    if (ppppppplStack_168 == (long *******)0x8000000000000021) {
      *param_1 = 0x8000000000000001;
      uVar6 = 3;
      goto LAB_100946168;
    }
    uStack_198 = uStack_100;
    uStack_1a0 = uStack_108;
    uStack_188 = uStack_f0;
    uStack_190 = uStack_f8;
    uStack_178 = uStack_e0;
    uStack_180 = uStack_e8;
    uStack_170 = uStack_d8;
    uStack_1e0 = CONCAT44(uStack_144,uStack_148);
    ppppppplStack_1d8 = ppppppplStack_140;
    pcStack_1c8 = pcStack_130;
    ppppppplStack_1d0 = ppppppplStack_138;
    ppppppplStack_1b8 = ppppppplStack_120;
    uStack_1c0 = uStack_128;
    pcStack_1a8 = pcStack_110;
    ppppppplStack_1b0 = ppppppplStack_118;
    ppppppplStack_1f8 = ppppppplStack_160;
    ppppppplStack_200 = ppppppplStack_168;
    pcStack_1e8 = pcStack_150;
    ppppppplStack_1f0 = ppppppplStack_158;
    if ((((*(char *)(param_2 + 0x1c) == '\x03') && (*(char *)(param_2 + 0x1b) == '\x03')) &&
        (*(char *)(param_2 + 0x1a) == '\x03')) && (*(char *)(param_2 + 0x19) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_2 + 0x11);
      if (param_2[0x12] != 0) {
        (**(code **)(param_2[0x12] + 0x18))(param_2[0x13]);
      }
    }
    if (ppppppplStack_200 != (long *******)0x8000000000000020) {
      FUN_100df5738(&ppppppplStack_200);
      uVar10 = *(undefined8 *)(*(long *)(param_2[3] + 0x10) + 0x1c10);
      uVar9 = *(undefined8 *)(*(long *)(param_2[3] + 0x10) + 0x1c18);
      ppppppplStack_88 = (long *******)0x0;
      ppppppplStack_80 = (long *******)0x1;
      ppppppplStack_78 = (long *******)0x0;
      FUN_10624142c(&ppppppplStack_168,param_2 + 4,0);
      FUN_108855060(&ppppppplStack_88,0,0x24,1,1);
      puVar11 = (undefined8 *)((long)ppppppplStack_80 + (long)ppppppplStack_78);
      puVar11[1] = ppppppplStack_160;
      *puVar11 = ppppppplStack_168;
      puVar11[3] = pcStack_150;
      puVar11[2] = ppppppplStack_158;
      *(undefined4 *)(puVar11 + 4) = uStack_148;
      ppppppplStack_78 = (long *******)((long)ppppppplStack_78 + 0x24);
      param_2[8] = ppppppplStack_80;
      param_2[7] = ppppppplStack_88;
      param_2[9] = ppppppplStack_78;
      lVar1 = 0;
      if (*(long *)(param_2[3] + 0x20) != 0) {
        lVar1 = *(long *)(param_2[3] + 0x20) + 0x10;
      }
      param_2[10] = uVar10;
      param_2[0xb] = uVar9;
      param_2[0xc] = param_2[8];
      param_2[0xd] = param_2[9];
      param_2[0xe] = lVar1;
      *(undefined1 *)(param_2 + 0x2e0) = 0;
      goto LAB_100945f20;
    }
    ppppppplStack_90 = ppppppplStack_1f8;
    if ((ppppppplStack_1f8[0x30] != (long ******)0x8000000000000000) &&
       (ppppppplStack_1f8[0x32] != (long ******)0x8000000000000000)) {
      pppppplVar4 = ppppppplStack_1f8[0x44];
      ppppplVar7 = pppppplVar4[0xc1];
      if (ppppplVar7 != (long *****)0x0) {
        pppplVar5 = *ppppplVar7;
        *ppppplVar7 = (long ****)((long)pppplVar5 + 1);
        if ((long)pppplVar5 < 0) goto LAB_1009461e4;
        ppppppplVar8 = (long *******)pppppplVar4[0xc1];
        pppppplVar4 = *ppppppplStack_1f8;
        *ppppppplStack_1f8 = (long ******)((long)pppppplVar4 + -1);
        LORelease();
        ppppppplVar13 = (long *******)0x8000000000000000;
        goto joined_r0x0001009460e8;
      }
      pppppplVar4 = *ppppppplStack_1f8;
      *ppppppplStack_1f8 = (long ******)((long)pppppplVar4 + -1);
      LORelease();
      if (pppppplVar4 == (long ******)0x1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(&ppppppplStack_90);
      }
      if (ppppppplStack_200 != (long *******)0x8000000000000020) {
        FUN_100d33d1c(&ppppppplStack_200);
      }
      goto LAB_100946040;
    }
    ppppppplStack_88 = (long *******)(param_2 + 4);
    ppppppplStack_80 =
         (long *******)
         &
         __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
    ;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&ppppppplStack_168,s__ephemeral_thread_does_not_suppo_108acbba6,&ppppppplStack_88);
    pppppplVar4 = *ppppppplStack_90;
    *ppppppplStack_90 = (long ******)((long)pppppplVar4 + -1);
    LORelease();
    ppppppplVar8 = ppppppplStack_160;
    ppppppplVar13 = ppppppplStack_168;
    unaff_x22 = ppppppplStack_158;
joined_r0x0001009460e8:
    if (pppppplVar4 == (long ******)0x1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(&ppppppplStack_90);
    }
    if (ppppppplStack_200 != (long *******)0x8000000000000020) {
      FUN_100df5738(&ppppppplStack_200);
    }
    uVar10 = 0xffffffffffff80a8;
  }
  else {
    if (bVar2 == 3) goto LAB_100945d30;
LAB_100945f20:
    FUN_100768d14(&ppppppplStack_168,param_2 + 10,param_3);
    unaff_x22 = ppppppplStack_160;
    ppppppplVar8 = ppppppplStack_168;
    if (ppppppplStack_168 == (long *******)0x8000000000000002) {
      *param_1 = 0x8000000000000001;
      uVar6 = 4;
      goto LAB_100946168;
    }
    if (*(char *)(param_2 + 0x2e0) == '\x03') {
      FUN_100cba64c(param_2 + 0xf);
    }
    if (ppppppplVar8 == (long *******)0x8000000000000001) {
      ppppppplStack_90 = unaff_x22;
      ppppppplStack_160 =
           (long *******)
           &
           __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
      ;
      ppppppplStack_158 = (long *******)&ppppppplStack_90;
      pcStack_150 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      ppppppplStack_168 = (long *******)(param_2 + 4);
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&ppppppplStack_88,s_failed_to_locate_thread_id___108acbb84,&ppppppplStack_168);
      unaff_x22 = ppppppplStack_78;
      ppppppplVar8 = ppppppplStack_80;
      ppppppplVar13 = ppppppplStack_88;
      if (((ulong)ppppppplStack_90 & 3) == 1) {
        puVar11 = (undefined8 *)((long)ppppppplStack_90 + -1);
        uVar10 = *puVar11;
        puVar12 = *(undefined8 **)((long)ppppppplStack_90 + 7);
        pcVar3 = (code *)*puVar12;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar10);
        }
        if (puVar12[1] != 0) {
          _free(uVar10);
        }
        _free(puVar11);
      }
      if (ppppppplVar13 == (long *******)0x8000000000000000) goto LAB_100945fd4;
      uVar10 = 0xffffffffffff80a5;
LAB_100946134:
      if (param_2[7] != 0) {
        _free(param_2[8]);
      }
    }
    else {
LAB_100945fd4:
      if (ppppppplVar8 == (long *******)0x8000000000000000) {
        ppppppplStack_80 =
             (long *******)
             &
             __ZN76__LT_codex_protocol__session_id__SessionId_u20_as_u20_core__fmt__Display_GT_3fmt17h9ddf7e0d342b7dabE
        ;
        ppppppplStack_88 = (long *******)(param_2 + 4);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&ppppppplStack_168,s_thread_not_found__108aca2df,&ppppppplStack_88);
        ppppppplStack_200 = (long *******)CONCAT44(uStack_144,uStack_148);
        ppppppplStack_1f8 = ppppppplStack_140;
        pcStack_1e8 = pcStack_130;
        ppppppplStack_1f0 = ppppppplStack_138;
        ppppppplStack_1d8 = ppppppplStack_120;
        uStack_1e0 = uStack_128;
        pcStack_1c8 = pcStack_110;
        ppppppplStack_1d0 = ppppppplStack_118;
        ppppppplVar8 = ppppppplStack_160;
        unaff_x22 = ppppppplStack_158;
        if (ppppppplStack_168 != (long *******)0x8000000000000000) {
          ppppppplStack_c8 = ppppppplStack_140;
          pcStack_b8 = pcStack_130;
          ppppppplStack_c0 = ppppppplStack_138;
          ppppppplStack_a8 = ppppppplStack_120;
          uStack_b0 = uStack_128;
          pcStack_98 = pcStack_110;
          ppppppplStack_a0 = ppppppplStack_118;
          uVar10 = 0xffffffffffff80a8;
          ppppppplVar13 = ppppppplStack_168;
          ppppppplStack_d0 = ppppppplStack_200;
          goto LAB_100946134;
        }
      }
      if (ppppppplVar8 != (long *******)0x0) {
        _free(unaff_x22);
      }
      if (param_2[7] != 0) {
        _free(param_2[8]);
      }
LAB_100946040:
      ppppppplVar8 = *(long ********)(param_2[3] + 0x20);
      if (ppppppplVar8 == (long *******)0x0) {
        ppppppplVar8 = (long *******)_malloc(0x2c);
        if (ppppppplVar8 == (long *******)0x0) goto LAB_1009461d8;
        ppppppplVar8[1] = (long ******)0x2062642065746174;
        *ppppppplVar8 = (long ******)0x73206574696c7173;
        ppppppplVar8[3] = (long ******)0x20726f6620656c62;
        ppppppplVar8[2] = (long ******)0x616c696176616e75;
        *(undefined8 *)((long)ppppppplVar8 + 0x24) = 0x736c616f67206461;
        *(undefined8 *)((long)ppppppplVar8 + 0x1c) = 0x6572687420726f66;
        uVar10 = 0xffffffffffff80a5;
        ppppppplVar13 = (long *******)0x2c;
        unaff_x22 = (long *******)0x2c;
      }
      else {
        pppppplVar4 = *ppppppplVar8;
        *ppppppplVar8 = (long ******)((long)pppppplVar4 + 1);
        if ((long)pppppplVar4 < 0) goto LAB_1009461e4;
        uVar10 = 0xffffffffffff80a5;
        ppppppplVar13 = (long *******)0x8000000000000000;
        unaff_x22 = (long *******)0x2c;
      }
    }
  }
  *param_1 = ppppppplVar13;
  param_1[1] = ppppppplVar8;
  param_1[2] = unaff_x22;
  param_1[3] = 0x8000000000000005;
  param_1[5] = ppppppplStack_c8;
  param_1[4] = ppppppplStack_d0;
  param_1[7] = pcStack_b8;
  param_1[6] = ppppppplStack_c0;
  param_1[9] = ppppppplStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = pcStack_98;
  param_1[10] = ppppppplStack_a0;
  uVar6 = 1;
  param_1[0xc] = uVar10;
LAB_100946168:
  *(undefined1 *)(param_2 + 6) = uVar6;
  return;
}

