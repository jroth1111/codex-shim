
/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_100c34aa4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *****pppppuStack_1c0;
  undefined8 uStack_1b8;
  undefined1 ****ppppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined1 ***pppuStack_110;
  undefined8 uStack_108;
  undefined1 **ppuStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  if (param_3 != (undefined8 *)0x0) {
    puVar15 = (undefined *)0x7fffffff;
    do {
      while( true ) {
        puVar7 = param_3;
        if ((undefined8 *)0x7ffffffe < param_3) {
          puVar7 = (undefined8 *)0x7fffffff;
        }
        puVar7 = (undefined8 *)_write(param_1,param_2,puVar7);
        if (puVar7 == (undefined8 *)0xffffffffffffffff) break;
        if (puVar7 == (undefined8 *)0x0) {
          return (undefined8 *)&UNK_10b233fc8;
        }
        puVar13 = (undefined8 *)((long)param_3 - (long)puVar7);
        if (param_3 < puVar7) {
          auVar16 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                              (puVar7,param_3,param_3,&UNK_10b233fe0);
          lVar12 = auVar16._8_8_;
          uStack_48 = 0x100c34b5c;
          if (param_3 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          uVar8 = *auVar16._0_8_;
          puVar14 = (undefined *)auVar16._0_8_[1];
          puStack_50 = &stack0xfffffffffffffff0;
          goto LAB_100c34bac;
        }
        param_2 = param_2 + (long)puVar7;
        param_3 = puVar13;
        if (puVar13 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
      }
      piVar6 = (int *)___error();
      if (*piVar6 != 4) {
        return (undefined8 *)((long)*piVar6 << 0x20 | 2);
      }
    } while (param_3 != (undefined8 *)0x0);
  }
  return (undefined8 *)0x0;
LAB_100c34bac:
  auVar16 = func_0x0001060f8f1c(uVar8,puVar14,lVar12,param_3);
  puVar13 = auVar16._8_8_;
  puVar7 = (undefined8 *)0xd00000003;
  if ((auVar16._0_8_ == 2) || (puVar7 = puVar13, (auVar16._0_8_ & 1) != 0)) {
    uVar9 = (ulong)puVar7 & 3;
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        if (*(char *)(puVar7 + 2) != '#') {
          return puVar7;
        }
      }
      else {
        if (*(char *)((long)puVar7 + 0xf) != '#') {
          return puVar7;
        }
        puVar15 = (undefined *)((long)puVar7 + -1);
        unaff_x24 = *(undefined8 *)((long)puVar7 + -1);
        unaff_x27 = *(undefined8 **)((long)puVar7 + 7);
        if ((code *)*unaff_x27 != (code *)0x0) {
          (*(code *)*unaff_x27)(unaff_x24);
        }
        if (unaff_x27[1] != 0) {
          _free(unaff_x24);
        }
        _free(puVar15);
      }
    }
    else if (uVar9 == 2) {
      if ((ulong)puVar7 >> 0x20 != 4) {
        return puVar7;
      }
    }
    else if ((ulong)puVar7 >> 0x20 != 0x23) {
      return puVar7;
    }
  }
  else {
    if (puVar13 == (undefined8 *)0x0) {
      return (undefined8 *)&UNK_10b233fc8;
    }
    if (param_3 < puVar13) {
      uVar8 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (puVar13,param_3,param_3,&UNK_10b233fe0);
      if (unaff_x27[1] != 0) {
        _free(unaff_x24);
      }
      _free(puVar15);
      auVar16 = __Unwind_Resume(uVar8);
      lVar12 = auVar16._8_8_;
      uStack_a8 = 0x100c34cc4;
      if (param_3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar1 = *auVar16._0_8_;
      lVar3 = auVar16._0_8_[1];
      puVar7 = (undefined8 *)&UNK_10b233fc8;
      ppuStack_b0 = &puStack_50;
      goto LAB_100c34d14;
    }
    lVar12 = lVar12 + (long)puVar13;
    param_3 = (undefined8 *)((long)param_3 - (long)puVar13);
  }
  if (param_3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  goto LAB_100c34bac;
LAB_100c34d14:
  auVar16 = (**(code **)(*(long *)(lVar1 + 0x20) + 0x20))
                      (*(undefined8 *)(lVar1 + 0x18),lVar3,lVar12,param_3);
  puVar10 = auVar16._8_8_;
  puVar13 = (undefined8 *)0xd00000003;
  if ((auVar16._0_8_ == 2) || (puVar13 = puVar10, (auVar16._0_8_ & 1) != 0)) {
    uVar9 = (ulong)puVar13 & 3;
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        if (*(char *)(puVar13 + 2) != '#') {
          return puVar13;
        }
      }
      else {
        if (*(char *)((long)puVar13 + 0xf) != '#') {
          return puVar13;
        }
        puVar14 = (undefined *)((long)puVar13 + -1);
        puVar15 = *(undefined **)((long)puVar13 + -1);
        unaff_x27 = *(undefined8 **)((long)puVar13 + 7);
        if ((code *)*unaff_x27 != (code *)0x0) {
          (*(code *)*unaff_x27)(puVar15);
        }
        if (unaff_x27[1] != 0) {
          _free(puVar15);
        }
        _free(puVar14);
      }
    }
    else if (uVar9 == 2) {
      if ((ulong)puVar13 >> 0x20 != 4) {
        return puVar13;
      }
    }
    else if ((ulong)puVar13 >> 0x20 != 0x23) {
      return puVar13;
    }
  }
  else {
    if (puVar10 == (undefined8 *)0x0) {
      return puVar7;
    }
    if (param_3 < puVar10) {
      uVar8 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (puVar10,param_3,param_3,&UNK_10b233fe0);
      if (unaff_x27[1] != 0) {
        _free(puVar15);
      }
      _free(puVar14);
      auVar16 = __Unwind_Resume(uVar8);
      lVar11 = auVar16._8_8_;
      uStack_150 = 0xd00000003;
      puStack_148 = &UNK_10b233fc8;
      uStack_108 = 0x100c34e30;
      if (param_3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lStack_140 = lVar1;
      puStack_138 = puVar15;
      puStack_130 = puVar14;
      lStack_128 = lVar3;
      lStack_120 = lVar12;
      uStack_118 = uVar8;
      pppuStack_110 = &ppuStack_b0;
      goto LAB_100c34e74;
    }
    lVar12 = lVar12 + (long)puVar10;
    param_3 = (undefined8 *)((long)param_3 - (long)puVar10);
  }
  if (param_3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  goto LAB_100c34d14;
LAB_100c34e74:
  auVar17 = __ZN65__LT_codex_feedback__FeedbackWriter_u20_as_u20_std__io__Write_GT_5write17h112cce32b3f150fcE
                      (auVar16._0_8_,lVar11,param_3);
  puVar13 = auVar17._8_8_;
  if ((auVar17._0_8_ & 1) == 0) {
    if (puVar13 == (undefined8 *)0x0) {
      return (undefined8 *)&UNK_10b233fc8;
    }
    puVar10 = (undefined8 *)((long)param_3 - (long)puVar13);
    if (param_3 < puVar13) {
      uVar8 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (puVar13,param_3,param_3,&UNK_10b233fe0);
      if (puVar7[1] != 0) {
        _free(puVar15);
      }
      _free(puVar14);
      auVar16 = __Unwind_Resume(uVar8);
      lVar12 = auVar16._8_8_;
      uStack_158 = 0x100c34f7c;
      if (param_3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      plVar2 = (long *)*auVar16._0_8_;
      lVar1 = auVar16._0_8_[1];
      ppppuStack_160 = &pppuStack_110;
      goto LAB_100c34fd4;
    }
    lVar11 = lVar11 + (long)puVar13;
  }
  else {
    uVar9 = (ulong)puVar13 & 3;
    puVar10 = param_3;
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        if (*(char *)(puVar13 + 2) != '#') {
          return puVar13;
        }
      }
      else {
        if (*(char *)((long)puVar13 + 0xf) != '#') {
          return puVar13;
        }
        puVar14 = (undefined *)((long)puVar13 + -1);
        puVar15 = *(undefined **)((long)puVar13 + -1);
        puVar7 = *(undefined8 **)((long)puVar13 + 7);
        if ((code *)*puVar7 != (code *)0x0) {
          (*(code *)*puVar7)(puVar15);
        }
        if (puVar7[1] != 0) {
          _free(puVar15);
        }
        _free(puVar14);
      }
    }
    else if (uVar9 == 2) {
      if ((ulong)puVar13 >> 0x20 != 4) {
        return puVar13;
      }
    }
    else if ((ulong)puVar13 >> 0x20 != 0x23) {
      return puVar13;
    }
  }
  param_3 = puVar10;
  if (puVar10 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  goto LAB_100c34e74;
LAB_100c34fd4:
  puVar7 = (undefined8 *)0xd00000003;
  if (*plVar2 < -0x7ffffffffffffffe) {
    auVar16 = func_0x0001060f8f1c(plVar2 + 1,lVar1,lVar12,param_3);
    if (auVar16._0_8_ == 2) goto LAB_100c3504c;
LAB_100c35030:
    puVar7 = auVar16._8_8_;
    if ((auVar16._0_8_ & 1) != 0) goto LAB_100c3504c;
    if (puVar7 == (undefined8 *)0x0) {
      return (undefined8 *)&UNK_10b233fc8;
    }
    puVar13 = (undefined8 *)((long)param_3 - (long)puVar7);
    if (param_3 < puVar7) {
      uVar8 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                        (puVar7,param_3,param_3,&UNK_10b233fe0);
      if (unaff_x28[1] != 0) {
        _free(puVar15);
      }
      _free(puVar14);
      auVar16 = __Unwind_Resume(uVar8);
      uStack_1f0 = auVar16._0_8_;
      uStack_1b8 = 0x100c35124;
      puStack_1e8 = (undefined8 *)0x0;
      puStack_1e0 = puVar14;
      lStack_1d8 = lVar1;
      lStack_1d0 = lVar12;
      uStack_1c8 = uVar8;
      pppppuStack_1c0 = &ppppuStack_160;
      iVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                        (&uStack_1f0,&UNK_10b233ef0,s_____108acd9d0,auVar16._8_8_);
      if (iVar5 == 0) {
        if (((ulong)puStack_1e8 & 3) == 1) {
          puVar7 = (undefined8 *)((long)puStack_1e8 - 1);
          uVar8 = *puVar7;
          puVar13 = *(undefined8 **)((long)puStack_1e8 + 7);
          pcVar4 = (code *)*puVar13;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar8);
          }
          if (puVar13[1] != 0) {
            _free(uVar8);
          }
          _free(puVar7);
        }
        puStack_1e8 = (undefined8 *)0x0;
      }
      else if (puStack_1e8 == (undefined8 *)0x0) {
        __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc3c09,0xad,&UNK_10b233e78);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100c35184);
        (*pcVar4)();
      }
      return puStack_1e8;
    }
    lVar12 = lVar12 + (long)puVar7;
  }
  else {
    auVar16 = (**(code **)(plVar2[4] + 0x20))(plVar2[3],lVar1,lVar12,param_3);
    if (auVar16._0_8_ != 2) goto LAB_100c35030;
LAB_100c3504c:
    uVar9 = (ulong)puVar7 & 3;
    puVar13 = param_3;
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        if (*(char *)(puVar7 + 2) != '#') {
          return puVar7;
        }
      }
      else {
        if (*(char *)((long)puVar7 + 0xf) != '#') {
          return puVar7;
        }
        puVar14 = (undefined *)((long)puVar7 + -1);
        puVar15 = *(undefined **)((long)puVar7 + -1);
        unaff_x28 = *(undefined8 **)((long)puVar7 + 7);
        if ((code *)*unaff_x28 != (code *)0x0) {
          (*(code *)*unaff_x28)(puVar15);
        }
        if (unaff_x28[1] != 0) {
          _free(puVar15);
        }
        _free(puVar14);
      }
    }
    else if (uVar9 == 2) {
      if ((ulong)puVar7 >> 0x20 != 4) {
        return puVar7;
      }
    }
    else if ((ulong)puVar7 >> 0x20 != 0x23) {
      return puVar7;
    }
  }
  param_3 = puVar13;
  if (puVar13 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  goto LAB_100c34fd4;
}

