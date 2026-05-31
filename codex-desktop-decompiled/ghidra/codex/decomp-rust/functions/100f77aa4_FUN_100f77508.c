
/* WARNING: Removing unreachable block (ram,0x000100f77580) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100f77508(long *param_1,long param_2,ulong param_3,long *param_4,undefined8 *param_5)

{
  long lVar1;
  long *******ppppppplVar2;
  long ******pppppplVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long *******ppppppplStack_300;
  long *******ppppppplStack_2f8;
  long lStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *******ppppppplStack_268;
  code *pcStack_260;
  undefined8 uStack_258;
  int aiStack_e8 [2];
  undefined8 uStack_e0;
  long *******ppppppplStack_d0;
  long lStack_c8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar11 = param_3;
  if (param_3 < 0x180) {
    _memcpy(&ppppppplStack_268,param_2,param_3);
    *(undefined1 *)((long)&ppppppplStack_268 + param_3) = 0;
    __ZN4core3ffi5c_str4CStr19from_bytes_with_nul17h3eb41042a4761af1E
              (aiStack_e8,&ppppppplStack_268,param_3 + 1);
    if (aiStack_e8[0] == 1) {
      ppppppplStack_2f8 = (long *******)&UNK_10b4add80;
    }
    else {
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
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
      lStack_c8 = 0;
      ppppppplStack_d0 = (long *******)0x0;
      iVar5 = _stat(uStack_e0,&ppppppplStack_d0);
      if (iVar5 != -1) {
        uStack_2a0 = uStack_78;
        uStack_2a8 = uStack_80;
        uStack_290 = uStack_68;
        uStack_298 = uStack_70;
        uStack_280 = uStack_58;
        uStack_288 = uStack_60;
        uStack_270 = uStack_48;
        uStack_278 = uStack_50;
        uStack_2e0 = uStack_b8;
        uStack_2e8 = uStack_c0;
        uStack_2d0 = uStack_a8;
        uStack_2d8 = uStack_b0;
        uStack_2c0 = uStack_98;
        uStack_2c8 = uStack_a0;
        uStack_2b0 = uStack_88;
        uStack_2b8 = uStack_90;
        lStack_2f0 = lStack_c8;
        ppppppplStack_2f8 = ppppppplStack_d0;
        goto LAB_100f7772c;
      }
      puVar6 = (uint *)___error();
      ppppppplStack_2f8 = (long *******)((ulong)*puVar6 << 0x20 | 2);
    }
  }
  else {
    param_4 = (long *)&DAT_10603cc64;
    FUN_108a820a8(&ppppppplStack_300,param_2,param_3);
    if (ppppppplStack_300 == (long *******)0x0) {
LAB_100f7772c:
      ppppppplVar2 = ppppppplStack_2f8;
      if (((uint)((ulong)ppppppplStack_2f8 >> 0x20) & 0xf000) == 0x4000) {
        __ZN3std3sys2fs8read_dir17h302bd5d3caaeb353E(&ppppppplStack_268,param_2,param_3);
        ppppppplStack_300 = ppppppplStack_268;
        ppppppplStack_2f8 = (long *******)CONCAT71(ppppppplStack_2f8._1_7_,(char)pcStack_260);
        if ((char)pcStack_260 == '\x02') {
          ppppppplStack_d0 = ppppppplStack_268;
          ppppppplStack_268 = (long *******)&ppppppplStack_d0;
          pcStack_260 = 
          __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&lStack_330,s_dir_unreadable__108ad5214,&ppppppplStack_268);
          param_1[1] = lStack_328;
          *param_1 = lStack_330;
          param_1[2] = lStack_320;
          *(undefined1 *)(param_1 + 3) = 1;
          if (((ulong)ppppppplStack_d0 & 3) == 1) {
            puVar10 = (undefined8 *)((long)ppppppplStack_d0 + -1);
            uVar12 = *puVar10;
            puVar13 = *(undefined8 **)((long)ppppppplStack_d0 + 7);
            pcVar9 = (code *)*puVar13;
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)(uVar12);
            }
            if (puVar13[1] != 0) {
              _free(uVar12);
            }
            _free(puVar10);
          }
          else {
          }
          if ((char)ppppppplStack_2f8 == '\x02') {
            return;
          }
          pppppplVar3 = *ppppppplStack_300;
          *ppppppplStack_300 = (long ******)((long)pppppplVar3 + -1);
          LORelease();
joined_r0x000100f778b4:
          if (pppppplVar3 != (long ******)0x1) {
            return;
          }
          DataMemoryBarrier(2,1);
          func_0x00010604ce90(&ppppppplStack_300);
          return;
        }
        puVar7 = (undefined2 *)_malloc(3);
        if (puVar7 != (undefined2 *)0x0) {
          *(undefined1 *)(puVar7 + 1) = 0x72;
          *puVar7 = 0x6964;
          *param_1 = 3;
          param_1[1] = (long)puVar7;
          param_1[2] = 3;
          *(undefined1 *)(param_1 + 3) = 0;
          pppppplVar3 = *ppppppplStack_300;
          *ppppppplStack_300 = (long ******)((long)pppppplVar3 + -1);
          LORelease();
          goto joined_r0x000100f778b4;
        }
        func_0x0001087c9084(1,3);
        goto LAB_100f779c8;
      }
      if (-0x7001 < (short)((ulong)ppppppplStack_2f8 >> 0x20)) {
        puVar10 = (undefined8 *)_malloc(0x17);
        if (puVar10 != (undefined8 *)0x0) {
          puVar10[1] = 0x696420726f20656c;
          *puVar10 = 0x6966206120746f6e;
          *(undefined8 *)((long)puVar10 + 0xf) = 0x79726f7463657269;
          *param_1 = 0x17;
          param_1[1] = (long)puVar10;
          param_1[2] = 0x17;
          *(undefined1 *)(param_1 + 3) = 1;
          return;
        }
        func_0x0001087c9084(1,0x17);
LAB_100f779d8:
        uVar12 = func_0x0001087c9084(1,4);
        if (*(long *)(param_2 + 8) != 0) {
          _free(param_3);
        }
        _free(ppppppplVar2);
        uVar12 = __Unwind_Resume(uVar12);
        FUN_100de21d4(&ppppppplStack_300);
        __Unwind_Resume(uVar12);
        auVar16 = func_0x000108a07bc4();
        puVar10 = auVar16._0_8_;
        lVar15 = param_4[2];
        if (lVar15 == *param_4) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(param_4);
        }
        puVar13 = (undefined8 *)(param_4[1] + lVar15 * 0x18);
        uVar12 = *param_5;
        puVar13[1] = param_5[1];
        *puVar13 = uVar12;
        puVar13[2] = param_5[2];
        param_4[2] = lVar15 + 1;
        FUN_100f60e24(&uStack_420,&UNK_108cc8356,0x1e,&UNK_108ca16c0,9,1,auVar16._8_8_,uVar11);
        lVar15 = *param_4;
        lVar1 = param_4[1];
        uVar11 = param_4[2];
        lVar14 = lStack_3c8;
        if ((ulong)(lStack_3d8 - lStack_3c8) < uVar11) {
          FUN_108855060(&lStack_3d8,lStack_3c8,uVar11,8,0x18);
          lVar14 = lStack_3c8;
        }
        _memcpy(lStack_3d0 + lVar14 * 0x18,lVar1,uVar11 * 0x18);
        lStack_3c8 = lVar14 + uVar11;
        if (lVar15 != 0) {
          _free(lVar1);
        }
        lVar15 = lStack_3c8;
        puVar13 = (undefined8 *)_malloc(0x49);
        if (puVar13 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x49);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100f77c98);
          (*pcVar9)();
        }
        puVar13[5] = 0x20646e61202c4143;
        puVar13[4] = 0x206d6f7473756320;
        puVar13[7] = 0x7963696c6f702074;
        puVar13[6] = 0x656b636f53626557;
        *(undefined8 *)((long)puVar13 + 0x41) = 0x2e74726f70707573;
        *(undefined8 *)((long)puVar13 + 0x39) = 0x207963696c6f7020;
        puVar13[1] = 0x4e5056202c79786f;
        *puVar13 = 0x7270206b63656843;
        puVar13[3] = 0x2c534e44202c6c6c;
        puVar13[2] = 0x617765726966202c;
        if ((lStack_3a8 != -0x8000000000000000) && (lStack_3a8 != 0)) {
          _free(uStack_3a0);
        }
        puVar10[5] = uStack_3f8;
        puVar10[4] = uStack_400;
        puVar10[7] = uStack_3e8;
        puVar10[6] = uStack_3f0;
        puVar10[9] = lStack_3d8;
        puVar10[8] = uStack_3e0;
        puVar10[0xb] = lVar15;
        puVar10[10] = lStack_3d0;
        puVar10[1] = uStack_418;
        *puVar10 = uStack_420;
        puVar10[3] = uStack_408;
        puVar10[2] = uStack_410;
        puVar10[0xd] = uStack_3b8;
        puVar10[0xc] = uStack_3c0;
        puVar10[0xf] = 0x49;
        puVar10[0xe] = uStack_3b0;
        puVar10[0x11] = 0x49;
        puVar10[0x10] = puVar13;
        puVar10[0x13] = uStack_388;
        puVar10[0x12] = uStack_390;
        return;
      }
      ppppppplStack_300 = (long *******)FUN_100f73214(param_2,param_3);
      if (ppppppplStack_300 == (long *******)0x0) {
        puVar8 = (undefined4 *)_malloc(4);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0x656c6966;
          *param_1 = 4;
          param_1[1] = (long)puVar8;
          param_1[2] = 4;
          *(undefined1 *)(param_1 + 3) = 0;
          return;
        }
        goto LAB_100f779d8;
      }
      ppppppplStack_268 = (long *******)&ppppppplStack_300;
      pcStack_260 = 
      __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&lStack_318,s_file_unreadable__108ad5200,&ppppppplStack_268);
      param_1[1] = lStack_310;
      *param_1 = lStack_318;
      param_1[2] = lStack_308;
      *(undefined1 *)(param_1 + 3) = 1;
      if (((ulong)ppppppplStack_300 & 3) != 1) {
        return;
      }
      puVar10 = (undefined8 *)((long)ppppppplStack_300 + -1);
      uVar12 = *puVar10;
      puVar13 = *(undefined8 **)((long)ppppppplStack_300 + 7);
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar12);
      }
      goto LAB_100f7785c;
    }
  }
  ppppppplVar2 = ppppppplStack_2f8;
  cVar4 = FUN_100c355d4(ppppppplStack_2f8);
  if (cVar4 == '\0') {
    ppppppplStack_268 = ppppppplVar2;
    puVar8 = (undefined4 *)_malloc(7);
    if (puVar8 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,7);
      goto LAB_100f779c8;
    }
    *(undefined4 *)((long)puVar8 + 3) = 0x676e6973;
    *puVar8 = 0x7373696d;
    *param_1 = 7;
    param_1[1] = (long)puVar8;
    param_1[2] = 7;
    *(undefined1 *)(param_1 + 3) = 1;
    if (((ulong)ppppppplVar2 & 3) != 1) {
      return;
    }
    puVar10 = (undefined8 *)((long)ppppppplVar2 + -1);
    uVar12 = *puVar10;
    puVar13 = *(undefined8 **)((long)ppppppplVar2 + 7);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)(uVar12);
    }
  }
  else {
    ppppppplStack_300 = (long *******)0x0;
    ppppppplStack_2f8 = (long *******)0x1;
    lStack_2f0 = 0;
    uStack_258 = 0x60000020;
    ppppppplStack_268 = (long *******)&ppppppplStack_300;
    pcStack_260 = (code *)&UNK_10b209290;
    ppppppplStack_d0 = ppppppplVar2;
    iVar5 = __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
                      (&ppppppplStack_d0,&ppppppplStack_268);
    if (iVar5 != 0) {
      func_0x000108a07a3c(&UNK_108cc3daa,0x37,aiStack_e8,&UNK_10b235000,&UNK_10b2346c0);
LAB_100f779c8:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100f779cc);
      (*pcVar9)();
    }
    param_1[1] = (long)ppppppplStack_2f8;
    *param_1 = (long)ppppppplStack_300;
    param_1[2] = lStack_2f0;
    *(undefined1 *)(param_1 + 3) = 1;
    if (((ulong)ppppppplVar2 & 3) != 1) {
      return;
    }
    puVar10 = (undefined8 *)((long)ppppppplVar2 + -1);
    uVar12 = *puVar10;
    puVar13 = *(undefined8 **)((long)ppppppplVar2 + 7);
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)(uVar12);
    }
  }
LAB_100f7785c:
  if (puVar13[1] != 0) {
    _free(uVar12);
  }
  _free(puVar10);
  return;
}

