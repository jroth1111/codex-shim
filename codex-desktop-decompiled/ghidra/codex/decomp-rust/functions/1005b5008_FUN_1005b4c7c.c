
undefined8 FUN_1005b4c7c(long *param_1)

{
  char cVar1;
  ulong *puVar2;
  byte bVar3;
  code *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  ulong uStack_2c8;
  long lStack_2c0;
  ulong uStack_2b8;
  char cStack_2b0;
  long *plStack_158;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar3 = *(byte *)(param_1 + 4);
  if (2 < bVar3) {
    if (bVar3 == 3) {
LAB_1005b4ca8:
      pcVar5 = (char *)FUN_100fd3e50(param_1 + 5);
      if (pcVar5 == (char *)0x0) {
        uVar6 = 1;
        uVar15 = 3;
      }
      else {
        if ((((char)param_1[0x13] == '\x03') && ((char)param_1[0x12] == '\x03')) &&
           ((char)param_1[9] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (param_1 + 10);
          if (param_1[0xb] != 0) {
            (**(code **)(param_1[0xb] + 0x18))(param_1[0xc]);
          }
        }
        plVar17 = (long *)param_1[3];
        lVar9 = plVar17[4];
        if (*plVar17 == -0x8000000000000000) {
          lStack_80 = -0x8000000000000000;
          uStack_98 = 0x8000000000000000;
        }
        else {
          func_0x000101149e6c(&uStack_98,plVar17[1],plVar17[2]);
          lStack_80 = plVar17[3];
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
        }
        uStack_88 = uStack_68;
        uStack_90 = uStack_70;
        uStack_78 = (char)lVar9;
        __ZN10codex_core5state4turn9TurnState26record_granted_permissions17h9bf085429bb9a7e0E
                  (pcVar5 + 0x28,&uStack_98);
        if ((*(byte *)(param_1[3] + 0x29) & 1) != 0) {
          pcVar5[0x189] = '\x01';
        }
        if (*pcVar5 == '\0') {
          *pcVar5 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar5,extraout_x1_00,1000000000);
        }
        uVar15 = 1;
        FUN_1060fa678(pcVar5,1,pcVar5);
        uVar6 = 0;
      }
      goto LAB_1005b4ee0;
    }
LAB_1005b4d4c:
    pcVar5 = (char *)FUN_100fd3e50(param_1 + 5);
    if (pcVar5 == (char *)0x0) {
      uVar6 = 1;
      uVar15 = 4;
    }
    else {
      if ((((char)param_1[0x13] == '\x03') && ((char)param_1[0x12] == '\x03')) &&
         ((char)param_1[9] == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 10);
        if (param_1[0xb] != 0) {
          (**(code **)(param_1[0xb] + 0x18))(param_1[0xc]);
        }
      }
      plVar17 = (long *)param_1[3];
      lVar9 = plVar17[4];
      if (*plVar17 == -0x8000000000000000) {
        lStack_80 = -0x8000000000000000;
        uStack_48 = 0x8000000000000000;
      }
      else {
        func_0x000101149e6c(&uStack_48,plVar17[1],plVar17[2]);
        lStack_80 = plVar17[3];
        uStack_58 = uStack_38;
        uStack_60 = uStack_40;
      }
      uStack_88 = uStack_58;
      uStack_90 = uStack_60;
      uStack_98 = uStack_48;
      uStack_78 = (char)lVar9;
      __ZN10codex_core5state7session12SessionState26record_granted_permissions17hd78d5ec26cc6196fE
                (pcVar5 + 0x28,&uStack_98);
      if (*pcVar5 == '\0') {
        *pcVar5 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar5,extraout_x1,1000000000);
      }
      uVar15 = 1;
      FUN_1060fa678(pcVar5,1,pcVar5);
      uVar6 = 0;
    }
LAB_1005b4ee0:
    *(undefined1 *)(param_1 + 4) = uVar15;
    return uVar6;
  }
  if (bVar3 == 0) {
    plVar17 = (long *)param_1[1];
    param_1[3] = (long)plVar17;
    if ((char)plVar17[4] != '\x03' || *plVar17 != -0x8000000000000000) {
      if ((*(byte *)(plVar17 + 5) & 1) != 0) {
        param_1[5] = *param_1 + 0x790;
        *(undefined1 *)(param_1 + 0x13) = 0;
        goto LAB_1005b4d4c;
      }
      if ((long *)param_1[2] != (long *)0x0) {
        param_1[5] = *(long *)param_1[2] + 0x10;
        *(undefined1 *)(param_1 + 0x13) = 0;
        goto LAB_1005b4ca8;
      }
    }
    uVar6 = 0;
    uVar15 = 1;
    goto LAB_1005b4ee0;
  }
  if (bVar3 == 1) {
    FUN_107c05cc0(&UNK_10b218848);
  }
  FUN_107c05cc4();
  *(undefined1 *)(param_1 + 4) = 2;
  __Unwind_Resume();
  *(undefined1 *)(param_1 + 4) = 2;
  uVar6 = __Unwind_Resume();
  if (param_1[0xb] != 0) {
    (**(code **)(param_1[0xb] + 0x18))(param_1[0xc]);
  }
  *(undefined1 *)(param_1 + 4) = 2;
  __Unwind_Resume(uVar6);
  plVar17 = (long *)FUN_107c05ccc();
  bVar3 = *(byte *)(plVar17 + 0x13);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      FUN_107c05cc0(&UNK_10b218860);
LAB_1005b5144:
      FUN_107c05cc4(&UNK_10b218860);
      *(undefined1 *)(plVar17 + 0x13) = 2;
      uVar6 = __Unwind_Resume();
      if (plVar17[10] != 0) {
        (**(code **)(plVar17[10] + 0x18))(plVar17[0xb]);
      }
      *(undefined1 *)(plVar17 + 0x13) = 2;
      __Unwind_Resume(uVar6);
      auVar19 = FUN_107c05ccc();
      uVar6 = auVar19._8_8_;
      plVar17 = auVar19._0_8_;
      bVar3 = *(byte *)((long)plVar17 + 0x319);
      if (bVar3 < 5) {
        if (bVar3 < 3) {
          if (bVar3 != 0) {
            if (bVar3 == 1) {
              FUN_107c05cc0(&UNK_10b218878);
            }
            FUN_107c05cc4();
LAB_1005b58bc:
            FUN_107c05cc0(&UNK_10b218570);
            goto LAB_1005b58e8;
          }
          *(undefined1 *)(plVar17 + 99) = 0;
          plVar17[0x5d] = plVar17[0x62];
          plVar17[0x5c] = plVar17[0x61];
          plVar17[100] = plVar17[0x61] + 0x790;
          *(undefined1 *)(plVar17 + 0x72) = 0;
LAB_1005b5258:
          auVar19 = FUN_100fd3e50(plVar17 + 100,uVar6);
          uVar7 = auVar19._8_8_;
          pcVar5 = auVar19._0_8_;
          if (pcVar5 == (char *)0x0) {
            uVar7 = 1;
            uVar15 = 3;
            goto LAB_1005b5844;
          }
          if ((((char)plVar17[0x72] == '\x03') && ((char)plVar17[0x71] == '\x03')) &&
             ((char)plVar17[0x68] == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (plVar17 + 0x69);
            uVar7 = extraout_x1_03;
            if (plVar17[0x6a] != 0) {
              (**(code **)(plVar17[0x6a] + 0x18))(plVar17[0x6b]);
              uVar7 = extraout_x1_04;
            }
          }
          if (*(long *)(pcVar5 + 0x550) == 3) {
            *plVar17 = 3;
          }
          else {
            FUN_103631bd8(plVar17,pcVar5 + 0x550);
            uVar7 = extraout_x1_05;
          }
          if (*pcVar5 == '\0') {
            *pcVar5 = '\x01';
          }
          else {
            __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                      (pcVar5,uVar7,1000000000);
          }
          FUN_1060fa678(pcVar5,1,pcVar5);
          lVar9 = plVar17[0x5c];
          lVar10 = plVar17[0x5d];
          if (*plVar17 != 3) {
            plVar17[100] = lVar9;
            plVar17[0x65] = lVar10;
            plVar17[0x66] = (long)plVar17;
            *(undefined1 *)(plVar17 + 0x79) = 0;
            plVar11 = plVar17;
            goto LAB_1005b5380;
          }
          plVar17[0xc0] = lVar9;
          plVar17[0xc1] = lVar10;
          *(undefined1 *)((long)plVar17 + 0x617) = 0;
        }
        else if (bVar3 == 3) goto LAB_1005b5258;
        func_0x0001005a7d60(&lStack_468,plVar17 + 100,uVar6);
        if (lStack_468 == -0x8000000000000000) {
          uVar7 = 1;
          uVar15 = 4;
          goto LAB_1005b5844;
        }
        plVar17[0x5f] = lStack_460;
        plVar17[0x5e] = lStack_468;
        plVar17[0x60] = lStack_458;
        FUN_100d41eac(plVar17 + 100);
LAB_1005b5640:
        __ZN10codex_core7session12turn_context11TurnContext20to_turn_context_item17h5d0fccc460ed0390E
                  (plVar17 + 0x2e,plVar17[0x5d]);
        *(undefined1 *)(plVar17 + 99) = 1;
        if (plVar17[0x60] != 0) {
          plVar17[0x65] = plVar17[0x5d];
          plVar17[100] = plVar17[0x5c];
          plVar17[0x66] = plVar17[0x5f];
          plVar17[0x67] = plVar17[0x60];
          *(undefined1 *)(plVar17 + 0x6c) = 0;
LAB_1005b5674:
          uVar8 = FUN_1005af7fc(plVar17 + 100,uVar6);
          if ((uVar8 & 1) != 0) {
            uVar7 = 1;
            uVar15 = 6;
            goto LAB_1005b5844;
          }
          func_0x000100d50dec(plVar17 + 100);
        }
        lVar9 = plVar17[0x5c];
        FUN_1011dcc18(&uStack_2c8,plVar17 + 0x2e);
        _memcpy(&lStack_438,&uStack_2c8,0x170);
        plVar17[0x115] = 3;
        _memcpy(plVar17 + 0x116,&lStack_438,0x170);
        plVar17[100] = lVar9;
        plVar17[0x65] = (long)(plVar17 + 0x115);
        plVar17[0x66] = 1;
        *(undefined1 *)(plVar17 + 0x114) = 0;
LAB_1005b56e8:
        uVar8 = FUN_1005abe28(plVar17 + 100,uVar6);
        if ((uVar8 & 1) != 0) {
          uVar7 = 1;
          uVar15 = 7;
          goto LAB_1005b5844;
        }
        if ((char)plVar17[0x114] == '\x03') {
          FUN_100cba81c(plVar17 + 0x67);
        }
        FUN_100e068b8(plVar17 + 0x115);
        plVar17[100] = plVar17[0x5c] + 0x790;
        *(undefined1 *)(plVar17 + 0x72) = 0;
      }
      else {
        if (bVar3 < 7) {
          if (bVar3 == 5) {
            bVar3 = *(byte *)(plVar17 + 0x79);
            if (bVar3 < 2) {
              if (bVar3 != 0) goto LAB_1005b58bc;
              lVar9 = plVar17[100];
              lVar10 = plVar17[0x65];
              plVar11 = (long *)plVar17[0x66];
LAB_1005b5380:
              plVar17[0x67] = lVar9;
              plVar17[0x68] = (long)plVar11;
              plVar17[0x69] = lVar10;
              plVar17[0x6a] = lVar9 + 0x790;
              *(undefined1 *)(plVar17 + 0x78) = 0;
            }
            else if (bVar3 != 3) {
              FUN_107c05cc4(&UNK_10b218570);
              goto LAB_1005b58e8;
            }
            auVar19 = FUN_100fd3e50(plVar17 + 0x6a,uVar6);
            uVar7 = auVar19._8_8_;
            pcVar5 = auVar19._0_8_;
            if (pcVar5 == (char *)0x0) {
              *(undefined1 *)(plVar17 + 0x79) = 3;
              uVar7 = 1;
              uVar15 = 5;
              goto LAB_1005b5844;
            }
            if ((((char)plVar17[0x78] == '\x03') && ((char)plVar17[0x77] == '\x03')) &&
               ((char)plVar17[0x6e] == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (plVar17 + 0x6f);
              uVar7 = extraout_x1_06;
              if (plVar17[0x70] != 0) {
                (**(code **)(plVar17[0x70] + 0x18))(plVar17[0x71]);
                uVar7 = extraout_x1_07;
              }
            }
            if (*(long *)(pcVar5 + 0x7c0) == -0x8000000000000000) {
              uStack_2c8 = 0x8000000000000000;
            }
            else {
              uVar7 = *(undefined8 *)(pcVar5 + 0x7c8);
              uVar8 = *(ulong *)(pcVar5 + 2000);
              if (uVar8 == 0) {
                lVar9 = 1;
              }
              else {
                lVar9 = _malloc(uVar8);
                if (lVar9 == 0) {
                  FUN_107c03c64(1,uVar8);
                  goto LAB_1005b58e8;
                }
              }
              _memcpy(lVar9,uVar7,uVar8);
              cStack_2b0 = pcVar5[0x7d8];
              uVar7 = extraout_x1_08;
              uStack_2c8 = uVar8;
              lStack_2c0 = lVar9;
              uStack_2b8 = uVar8;
            }
            if (*pcVar5 == '\0') {
              *pcVar5 = '\x01';
            }
            else {
              __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                        (pcVar5,uVar7,1000000000);
            }
            FUN_1060fa678(pcVar5,1,pcVar5);
            lVar10 = plVar17[0x67];
            plVar11 = *(long **)(lVar10 + 0x368);
            lVar9 = *plVar11;
            *plVar11 = lVar9 + 1;
            if (lVar9 < 0) {
LAB_1005b58e8:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1005b58ec);
              (*pcVar4)();
            }
            plVar18 = *(long **)(lVar10 + 0x368);
            plStack_148 = (long *)(*(long *)(plVar17[0x67] + 0x378) + 0x10);
            plStack_158 = plVar18;
            auVar19 = FUN_1037cc90c(&plStack_148);
            plVar11 = auVar19._8_8_;
            plStack_148 = auVar19._0_8_;
            uStack_140 = 0;
            if (plVar11 != (long *)0x0) {
              lVar9 = *plStack_148;
              *plStack_148 = lVar9 + 1;
              if (lVar9 < 0) goto LAB_1005b58e8;
              if ((long *)*plVar11 == plStack_148 + 2) {
                *plVar11 = 3;
              }
              else {
                lVar9 = *plStack_148;
                *plStack_148 = lVar9 + -1;
                LORelease();
                plStack_138 = plStack_148;
                if (lVar9 == 1) {
                  DataMemoryBarrier(2,1);
                  __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h651c099e6cbbe2daE(&plStack_138);
                }
              }
            }
            plStack_150 = plStack_148;
            lVar9 = *(long *)(plVar17[0x67] + 0x670);
            if (lVar9 != 0) {
              lVar10 = *(long *)(plVar17[0x67] + 0x678);
              do {
                uVar13 = (ulong)*(ushort *)(lVar9 + 10);
                uVar8 = 0xffffffffffffffff;
                pbVar12 = (byte *)(lVar9 + 0xc);
                uVar14 = uVar13;
                do {
                  if (uVar14 == 0) goto LAB_1005b5578;
                  cVar1 = *pbVar12 < 0x2f;
                  if (0x2f < *pbVar12) {
                    cVar1 = -1;
                  }
                  uVar14 = uVar14 - 1;
                  uVar8 = uVar8 + 1;
                  pbVar12 = pbVar12 + 1;
                } while (cVar1 == '\x01');
                uVar13 = uVar8;
                if (cVar1 == '\0') {
                  uVar7 = 1;
                  goto LAB_1005b5598;
                }
LAB_1005b5578:
                if (lVar10 == 0) break;
                lVar9 = *(long *)(lVar9 + uVar13 * 8 + 0x18);
                lVar10 = lVar10 + -1;
              } while( true );
            }
            uVar7 = 0;
LAB_1005b5598:
            puVar2 = (ulong *)0x0;
            if (uStack_2c8 != 0x8000000000000000) {
              puVar2 = &uStack_2c8;
            }
            func_0x000102d50e58(&lStack_438,plVar17[0x68],puVar2,plVar17[0x69],plVar18 + 2,
                                plStack_148 + 2,uVar7);
            lVar9 = *plStack_150;
            *plStack_150 = lVar9 + -1;
            LORelease();
            if (lVar9 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h651c099e6cbbe2daE(&plStack_150);
            }
            lVar9 = *plStack_158;
            *plStack_158 = lVar9 + -1;
            LORelease();
            if (lVar9 == 1) {
              DataMemoryBarrier(2,1);
              __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h720d6d94d44d546aE(&plStack_158);
            }
            if ((uStack_2c8 & 0x7fffffffffffffff) != 0) {
              _free(lStack_2c0);
            }
            lStack_448 = lStack_428;
            lStack_450 = lStack_430;
            uVar7 = 1;
            *(undefined1 *)(plVar17 + 0x79) = 1;
            if (lStack_438 == -0x8000000000000000) {
              uVar15 = 5;
              goto LAB_1005b5844;
            }
            plVar17[0x5e] = lStack_438;
            plVar17[0x60] = lStack_428;
            plVar17[0x5f] = lStack_430;
            goto LAB_1005b5640;
          }
          goto LAB_1005b5674;
        }
        if (bVar3 == 7) goto LAB_1005b56e8;
      }
      pcVar5 = (char *)FUN_100fd3e50(plVar17 + 100,uVar6);
      if (pcVar5 == (char *)0x0) {
        uVar7 = 1;
        uVar15 = 8;
      }
      else {
        if ((((char)plVar17[0x72] == '\x03') && ((char)plVar17[0x71] == '\x03')) &&
           ((char)plVar17[0x68] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (plVar17 + 0x69);
          if (plVar17[0x6a] != 0) {
            (**(code **)(plVar17[0x6a] + 0x18))(plVar17[0x6b]);
          }
        }
        *(undefined1 *)(plVar17 + 99) = 0;
        _memcpy(&uStack_2c8,plVar17 + 0x2e,0x170);
        if (*(long *)(pcVar5 + 0x550) != 3) {
          FUN_1033a593c(pcVar5 + 0x550);
        }
        _memcpy(pcVar5 + 0x550,&uStack_2c8,0x170);
        if (*pcVar5 == '\0') {
          *pcVar5 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar5,extraout_x1_09,1000000000);
        }
        FUN_1060fa678(pcVar5,1,pcVar5);
        *(undefined1 *)(plVar17 + 99) = 0;
        lVar16 = plVar17[0x5f];
        lVar9 = plVar17[0x60] + 1;
        lVar10 = lVar16;
        while (lVar9 = lVar9 + -1, lVar9 != 0) {
          FUN_100e02a24(lVar10);
          lVar10 = lVar10 + 0xc0;
        }
        if (plVar17[0x5e] != 0) {
          _free(lVar16);
        }
        if (*plVar17 != 3) {
          FUN_100e13e9c(plVar17);
        }
        uVar7 = 0;
        uVar15 = 1;
      }
LAB_1005b5844:
      *(undefined1 *)((long)plVar17 + 0x319) = uVar15;
      return uVar7;
    }
    plVar17[3] = plVar17[2];
    if ((*(byte *)(*(long *)(plVar17[1] + 0x788) + 0x252c) & 1) == 0) {
      uVar6 = 0;
      uVar15 = 1;
      goto LAB_1005b5110;
    }
    plVar17[4] = *plVar17 + 0x790;
    *(undefined1 *)(plVar17 + 0x12) = 0;
  }
  else if (bVar3 != 3) goto LAB_1005b5144;
  auVar19 = FUN_100fd3e50(plVar17 + 4);
  uVar6 = auVar19._8_8_;
  pcVar5 = auVar19._0_8_;
  if (pcVar5 == (char *)0x0) {
    uVar6 = 1;
    uVar15 = 3;
  }
  else {
    if ((((char)plVar17[0x12] == '\x03') && ((char)plVar17[0x11] == '\x03')) &&
       ((char)plVar17[8] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (plVar17 + 9);
      uVar6 = extraout_x1_01;
      if (plVar17[10] != 0) {
        (**(code **)(plVar17[10] + 0x18))(plVar17[0xb]);
        uVar6 = extraout_x1_02;
      }
    }
    if (*(long *)(pcVar5 + 0x6e0) != 0) {
      uVar8 = plVar17[3];
      pcVar5[0x6e0] = '\x01';
      pcVar5[0x6e1] = '\0';
      pcVar5[0x6e2] = '\0';
      pcVar5[0x6e3] = '\0';
      pcVar5[0x6e4] = '\0';
      pcVar5[0x6e5] = '\0';
      pcVar5[0x6e6] = '\0';
      pcVar5[0x6e7] = '\0';
      *(ulong *)(pcVar5 + 0x6e8) = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    }
    if (*pcVar5 == '\0') {
      *pcVar5 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar5,uVar6,1000000000);
    }
    uVar15 = 1;
    FUN_1060fa678(pcVar5,1,pcVar5);
    uVar6 = 0;
  }
LAB_1005b5110:
  *(undefined1 *)(plVar17 + 0x13) = uVar15;
  return uVar6;
}

