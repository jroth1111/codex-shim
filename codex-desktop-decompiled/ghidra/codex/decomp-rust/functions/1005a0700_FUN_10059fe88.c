
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10059fe88(void)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  char *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
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
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined1 uVar11;
  code *pcVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  code cVar16;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 *puVar17;
  long lVar18;
  code *unaff_x23;
  code *pcVar19;
  undefined8 *unaff_x25;
  undefined1 *puVar20;
  long unaff_x26;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  ulong in_stack_00000040;
  long in_stack_00000048;
  long *in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined1 *in_stack_00000080;
  undefined8 in_stack_00000088;
  code *in_stack_000001e0;
  code *in_stack_000001e8;
  code *in_stack_00000330;
  undefined8 in_stack_000003b0;
  undefined4 uVar25;
  long in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  code *in_stack_000004c0;
  code *pcVar26;
  code *in_stack_000004c8;
  code *in_stack_000004d0;
  code *in_stack_000004e0;
  code *in_stack_000004e8;
  long in_stack_000006d0;
  code *in_stack_000006d8;
  code *in_stack_000006e0;
  code *in_stack_000006f0;
  code *in_stack_000006f8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000004c0,s_raw_payload__108ad0b1d,&stack0x000006d0);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000006d0,s____json_108ad0b2c,&stack0x000004c0);
  uVar9 = unaff_x25[0x14];
  uVar23 = unaff_x25[0x15];
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xf0,s__json_108ad0b37,&stack0x000004c0);
  uVar21 = *(undefined8 *)(unaff_x29 + -0xe8);
  __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
            (&stack0x00000430,uVar9,uVar23,uVar21,*(undefined8 *)(unaff_x29 + -0xe0));
  if (*(long *)(unaff_x29 + -0xf0) != 0) {
    _free(uVar21);
  }
  *(undefined4 *)(unaff_x26 + 6) = 0;
  __ZN3std2fs11OpenOptions5_open17h96a6cc7eb221bb11E
            (&stack0x000003b0,&stack0x000004c0,in_stack_00000438,in_stack_00000440);
  if ((int)in_stack_000003b0 != 1) {
    uVar25 = (undefined4)((ulong)in_stack_000003b0 >> 0x20);
    *(undefined8 *)(unaff_x26 + 0x10) = 1;
    *(undefined8 *)(unaff_x26 + 8) = 2;
    lVar6 = FUN_100c34aa4(uVar25,&UNK_108ca7634,1);
    if (lVar6 != 0) goto LAB_1005a0390;
    in_stack_000001e0 = (code *)CONCAT62(in_stack_000001e0._2_6_,0x100);
    in_stack_000001e8 = (code *)&stack0x000004c0;
    lVar6 = FUN_1014b13bc(&stack0x000001e0,&UNK_108cdcfc0,0x10);
    if ((lVar6 == 0) &&
       (lVar6 = FUN_1014b13bc(&stack0x000001e0,&UNK_108ca1064,7,in_stack_00000078,in_stack_00000068)
       , pcVar5 = in_stack_000001e8, lVar6 == 0)) {
      if (((ulong)in_stack_000001e0 & 1) == 0) {
        puVar1 = &UNK_108ca14f4;
        if (in_stack_000001e0._1_1_ != '\x01') {
          puVar1 = &UNK_108cc4022;
        }
        uVar9 = 1;
        if (in_stack_000001e0._1_1_ != '\x01') {
          uVar9 = 2;
        }
        lVar6 = FUN_100c34aa4(*(undefined4 *)(in_stack_000001e8 + 0x20),puVar1,uVar9);
        if (lVar6 == 0) {
          uVar9 = *(undefined8 *)(pcVar5 + 8);
          uVar21 = *(undefined8 *)pcVar5;
          lVar6 = *(long *)(pcVar5 + 0x10) + 1;
          do {
            lVar6 = lVar6 + -1;
            if (lVar6 == 0) {
              lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca105e,6);
              if ((lVar6 == 0) &&
                 (lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108cc4020,2), lVar6 == 0
                 )) {
                lVar6 = *(long *)(unaff_x19 + 0x620);
                if (lVar6 < 3) {
                  if (lVar6 == 0) {
                    lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),&UNK_108cafc8c,0xc);
                  }
                  else if (lVar6 == 1) {
                    lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca8165,7);
                  }
                  else {
                    lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),&UNK_108cafc98,0xb);
                  }
                  goto LAB_1005a0334;
                }
                if (4 < lVar6) {
                  if (lVar6 == 5) {
                    lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),&UNK_108c98108,8);
                  }
                  else {
                    lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),&UNK_108cafcaa,9);
                  }
                  goto LAB_1005a0334;
                }
                if (lVar6 == 3) {
                  *(long *)(pcVar5 + 0x10) = *(long *)(pcVar5 + 0x10) + 1;
                  pcVar5[0x18] = (code)0x0;
                  lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca7634,1);
                  if ((lVar6 == 0) &&
                     (lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca14f4,1),
                     lVar6 == 0)) {
                    uVar9 = *(undefined8 *)(pcVar5 + 8);
                    uVar21 = *(undefined8 *)pcVar5;
                    lVar6 = *(long *)(pcVar5 + 0x10) + 1;
                    goto LAB_1005a01ec;
                  }
                }
                else {
                  uVar21 = *(undefined8 *)(unaff_x19 + 0x630);
                  uVar9 = *(undefined8 *)(unaff_x19 + 0x638);
                  *(long *)(pcVar5 + 0x10) = *(long *)(pcVar5 + 0x10) + 1;
                  pcVar5[0x18] = (code)0x0;
                  lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca7634,1);
                  if ((lVar6 == 0) &&
                     (lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca14f4,1),
                     lVar6 == 0)) {
                    uVar23 = *(undefined8 *)(pcVar5 + 8);
                    uVar22 = *(undefined8 *)pcVar5;
                    lVar6 = *(long *)(pcVar5 + 0x10) + 1;
                    goto LAB_1005a02dc;
                  }
                }
              }
              break;
            }
            lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),uVar21,uVar9);
          } while (lVar18 == 0);
        }
        goto LAB_1005a0390;
      }
      FUN_107c05dbc(&stack0x000006d0,0,0);
    }
    goto LAB_1005a0398;
  }
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001e0,s_create_108ad0b3f,&stack0x000004c0);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x000004c0);
  pcVar5 = (code *)thunk_FUN_108857510(&stack0x000004c0,&stack0x000006d0);
  in_stack_000006f0 = in_stack_000004e0;
  goto LAB_1005a0418;
  while (lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),uVar22,uVar23), lVar18 == 0) {
LAB_1005a02dc:
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),&UNK_108cafca3,7);
      if (((lVar6 == 0) &&
          (lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108cc4020,2), lVar6 == 0)) &&
         (lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),uVar21,uVar9), lVar6 == 0)) {
        pcVar5[0x18] = (code)0x1;
        lVar6 = *(long *)(pcVar5 + 0x10);
        *(long *)(pcVar5 + 0x10) = lVar6 + -1;
        lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca14f4,1);
        if (lVar18 == 0) {
          uVar9 = *(undefined8 *)pcVar5;
          uVar21 = *(undefined8 *)(pcVar5 + 8);
          goto LAB_1005a1d74;
        }
      }
      break;
    }
  }
  goto LAB_1005a0390;
  while (lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),uVar9,uVar21), lVar18 == 0) {
LAB_1005a1d74:
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca2104,1);
      goto LAB_1005a0334;
    }
  }
  goto LAB_1005a0390;
LAB_1005a1e08:
  lVar6 = lVar6 + -1;
  if (lVar6 != 0) goto code_r0x0001005a1e18;
  lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca2104,1);
LAB_1005a0334:
  if (lVar6 != 0) goto LAB_1005a0390;
  pcVar5[0x18] = (code)0x1;
  lVar6 = *(long *)(pcVar5 + 0x10);
  *(long *)(pcVar5 + 0x10) = lVar6 + -1;
  lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca14f4,1);
  if (lVar18 != 0) goto LAB_1005a0390;
  uVar9 = *(undefined8 *)pcVar5;
  uVar21 = *(undefined8 *)(pcVar5 + 8);
  while( true ) {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) break;
    lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),uVar9,uVar21);
    if (lVar18 != 0) goto LAB_1005a0390;
  }
  lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca2104,1);
  if (lVar6 != 0) goto LAB_1005a0390;
  _close(uVar25);
  if (in_stack_00000430 != 0) {
    _free(in_stack_00000438);
  }
  if ((((in_stack_00000040 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar10 = FUN_107c05e34(), (uVar10 & 1) == 0)) {
    *(undefined1 *)(unaff_x25 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x25);
  if (in_stack_000004c0 == (code *)0x8000000000000000) {
    if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) goto LAB_1005a048c;
    goto LAB_1005a05b4;
  }
  goto LAB_1005a06c8;
code_r0x0001005a1e18:
  lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),uVar9,uVar21);
  if (lVar18 != 0) goto LAB_1005a0390;
  goto LAB_1005a1e08;
code_r0x0001005a17c4:
  lVar6 = *plVar13;
  *plVar13 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_1005a2d40;
  plVar14 = *(long **)(pcVar8 + 0x58);
  lVar6 = *plVar14;
  *plVar14 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_1005a2d40;
  plVar15 = *(long **)(pcVar8 + 0x60);
  lVar6 = *plVar15;
  *plVar15 = lVar6 + 1;
  if (lVar6 < 0) goto LAB_1005a2d40;
  cVar16 = pcVar8[0x68];
  *(long **)(unaff_x19 + 0x5d0) = plVar13;
  *(long **)(unaff_x19 + 0x5d8) = plVar14;
  *(long **)(unaff_x19 + 0x5e0) = plVar15;
LAB_1005a1800:
  *(code *)(unaff_x19 + 0x5e8) = cVar16;
  if (*pcVar8 == (code)0x0) {
    *pcVar8 = (code)0x1;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar8,uVar9,1000000000);
  }
  FUN_1060fa678(pcVar8,1,pcVar8);
  if (*(char *)(unaff_x19 + 0x5e8) == '\x02') {
LAB_1005a19e0:
    *in_stack_00000330 = (code)0x1;
    FUN_100d11d00(puVar17);
    goto LAB_1005a19f0;
  }
  *(undefined8 *)(unaff_x19 + 0x5f8) = *(undefined8 *)(unaff_x19 + 0x5d8);
  *(undefined8 *)(unaff_x19 + 0x5f0) = *puVar17;
  *(undefined8 *)(unaff_x19 + 0x608) = *(undefined8 *)(unaff_x19 + 0x5e8);
  *(undefined8 *)(unaff_x19 + 0x600) = *(undefined8 *)(unaff_x19 + 0x5e0);
  *(undefined1 *)(unaff_x19 + 0x619) = 1;
  *(undefined8 *)(unaff_x19 + 0x620) = 0x8000000000000000;
  *(long *)(unaff_x19 + 0x638) = *(long *)(unaff_x19 + 0x5f8) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x6a8) = 0;
  auVar24 = FUN_100fd3e50(unaff_x19 + 0x638);
  uVar9 = auVar24._8_8_;
  pcVar7 = auVar24._0_8_;
  if (pcVar7 == (char *)0x0) {
    cVar16 = (code)0x4;
  }
  else {
    if (((*(char *)(unaff_x19 + 0x6a8) == '\x03') && (*(char *)(unaff_x19 + 0x6a0) == '\x03')) &&
       (*(char *)(unaff_x19 + 0x658) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x660);
      uVar9 = extraout_x1_08;
      if (*(long *)(unaff_x19 + 0x668) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x668) + 0x18))(*(undefined8 *)(unaff_x19 + 0x670));
        uVar9 = extraout_x1_09;
      }
    }
    lVar6 = *(long *)(pcVar7 + 0x28);
    if ((lVar6 != -0x8000000000000000) && (lVar6 != 0)) {
      _free(*(undefined8 *)(pcVar7 + 0x30));
      uVar9 = extraout_x1_10;
    }
    uVar21 = *(undefined8 *)(unaff_x19 + 0x628);
    lVar6 = *(long *)(unaff_x19 + 0x620);
    *(undefined8 *)(pcVar7 + 0x38) = *(undefined8 *)(unaff_x19 + 0x630);
    *(undefined8 *)(pcVar7 + 0x30) = uVar21;
    *(long *)(pcVar7 + 0x28) = lVar6;
    *(undefined1 *)(unaff_x19 + 0x619) = 0;
    if (*pcVar7 == '\0') {
      *pcVar7 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar7,uVar9,1000000000);
    }
    FUN_1060fa678(pcVar7,1,pcVar7);
    *(undefined1 *)(unaff_x19 + 0x618) = 1;
    *(undefined8 *)(unaff_x19 + 0x620) = 0x8000000000000000;
    *(long *)(unaff_x19 + 0x638) = *(long *)(unaff_x19 + 0x600) + 0x10;
    *(undefined1 *)(unaff_x19 + 0x6a8) = 0;
    auVar24 = FUN_100fd3e50(unaff_x19 + 0x638);
    uVar9 = auVar24._8_8_;
    pcVar7 = auVar24._0_8_;
    if (pcVar7 != (char *)0x0) {
      if (((*(char *)(unaff_x19 + 0x6a8) == '\x03') && (*(char *)(unaff_x19 + 0x6a0) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x658) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x660);
        uVar9 = extraout_x1_11;
        if (*(long *)(unaff_x19 + 0x668) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x668) + 0x18))(*(undefined8 *)(unaff_x19 + 0x670));
          uVar9 = extraout_x1_12;
        }
      }
      lVar6 = *(long *)(pcVar7 + 0x28);
      if ((lVar6 != -0x8000000000000000) && (lVar6 != 0)) {
        _free(*(undefined8 *)(pcVar7 + 0x30));
        uVar9 = extraout_x1_13;
      }
      uVar21 = *(undefined8 *)(unaff_x19 + 0x628);
      lVar6 = *(long *)(unaff_x19 + 0x620);
      *(undefined8 *)(pcVar7 + 0x38) = *(undefined8 *)(unaff_x19 + 0x630);
      *(undefined8 *)(pcVar7 + 0x30) = uVar21;
      *(long *)(pcVar7 + 0x28) = lVar6;
      *(undefined1 *)(unaff_x19 + 0x618) = 0;
      if (*pcVar7 == '\0') {
        *pcVar7 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar7,uVar9,1000000000);
      }
      FUN_1060fa678(pcVar7,1,pcVar7);
      FUN_100e3da24(unaff_x19 + 0x5f0);
      goto LAB_1005a19e0;
    }
    cVar16 = (code)0x5;
  }
LAB_1005a1a54:
  *in_stack_00000330 = cVar16;
  uVar11 = 4;
  goto LAB_1005a1a5c;
  while (lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),uVar21,uVar9), lVar18 == 0) {
LAB_1005a01ec:
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),&UNK_108cae19e,9);
      if ((lVar6 == 0) &&
         (lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108cc4020,2), lVar6 == 0)) {
        if (*(long *)(unaff_x19 + 0x628) == -0x8000000000000000) {
          lVar6 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108c78dd4,4);
        }
        else {
          lVar6 = FUN_100656df8(*(undefined4 *)(pcVar5 + 0x20),*(undefined8 *)(unaff_x19 + 0x630),
                                *(undefined8 *)(unaff_x19 + 0x638));
        }
        if (lVar6 == 0) {
          pcVar5[0x18] = (code)0x1;
          lVar6 = *(long *)(pcVar5 + 0x10);
          *(long *)(pcVar5 + 0x10) = lVar6 + -1;
          lVar18 = FUN_100c34aa4(*(undefined4 *)(pcVar5 + 0x20),&UNK_108ca14f4,1);
          if (lVar18 == 0) {
            uVar9 = *(undefined8 *)pcVar5;
            uVar21 = *(undefined8 *)(pcVar5 + 8);
            goto LAB_1005a1e08;
          }
        }
      }
      break;
    }
  }
LAB_1005a0390:
  func_0x000107c05db8();
LAB_1005a0398:
  _close(uVar25);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001e0,s_write_JSON_108ad0b49,&stack0x000004c0);
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&stack0x000004c0);
  pcVar5 = (code *)thunk_FUN_108857ac8(&stack0x000004c0,&stack0x000006d0);
  in_stack_000006f0 = (code *)CONCAT44((int)((ulong)in_stack_000004e0 >> 0x20),uVar25);
LAB_1005a0418:
  if (in_stack_00000430 != 0) {
    _free(in_stack_00000438);
  }
  if (in_stack_000006d0 != 0) {
    _free(in_stack_000006d8);
  }
  if (in_stack_000004c0 != (code *)0x0) {
    _free(in_stack_000004c8);
  }
  if ((((in_stack_00000040 & 1) == 0) &&
      ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
       0x7fffffffffffffff) != 0)) && (uVar10 = FUN_107c05e34(), (uVar10 & 1) == 0)) {
    *(undefined1 *)(unaff_x25 + 1) = 1;
  }
  _pthread_mutex_unlock(*unaff_x25);
  in_stack_000004c8 = pcVar5;
  in_stack_000006d8 =
       (code *)&
               __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
  ;
  in_stack_000006e0 = unaff_x23;
  in_stack_000006f8 = in_stack_000004e8;
  if (___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) {
LAB_1005a048c:
    if (((1 < bRam000000010b62ffa8 - 1) &&
        ((bRam000000010b62ffa8 == 0 ||
         (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                            (&
                             __ZN19codex_rollout_trace6thread25EnabledThreadTraceContext30write_json_payload_best_effort10__CALLSITE17h01a97c60a46b6edbE
                            ), cVar3 == '\0')))) ||
       (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                          (
                          ___ZN19codex_rollout_trace6thread25EnabledThreadTraceContext30write_json_payload_best_effort10__CALLSITE17h01a97c60a46b6edbE
                          ),
       lVar6 = 
       ___ZN19codex_rollout_trace6thread25EnabledThreadTraceContext30write_json_payload_best_effort10__CALLSITE17h01a97c60a46b6edbE
       , iVar4 == 0)) goto LAB_1005a05b4;
    in_stack_000001e0 = (code *)&stack0x000003b0;
    in_stack_000001e8 =
         __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
    ;
    *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cb8f4a;
    *(code ***)(unaff_x29 + -0xe8) = &stack0x000001e0;
    __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(lVar6,&stack0x000004c0);
    lVar6 = 
    ___ZN19codex_rollout_trace6thread25EnabledThreadTraceContext30write_json_payload_best_effort10__CALLSITE17h01a97c60a46b6edbE
    ;
    in_stack_000004d0 = in_stack_000006e0;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_000006d8 =
           *(code **)(
                     ___ZN19codex_rollout_trace6thread25EnabledThreadTraceContext30write_json_payload_best_effort10__CALLSITE17h01a97c60a46b6edbE
                     + 0x20);
      in_stack_000004d0 =
           *(code **)(
                     ___ZN19codex_rollout_trace6thread25EnabledThreadTraceContext30write_json_payload_best_effort10__CALLSITE17h01a97c60a46b6edbE
                     + 0x28);
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      pcVar5 = pcRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        pcVar5 = (code *)&UNK_109adfc03;
      }
      iVar4 = (**(code **)(puVar1 + 0x18))(pcVar5,&stack0x000006d0);
      if (iVar4 != 0) {
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar6,pcVar5,puVar1,&stack0x000006d0,&stack0x000004c0);
      }
    }
  }
  else {
LAB_1005a05b4:
    lVar6 = 
    ___ZN19codex_rollout_trace6thread25EnabledThreadTraceContext30write_json_payload_best_effort10__CALLSITE17h01a97c60a46b6edbE
    ;
    in_stack_000004d0 = in_stack_000006e0;
    if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
       (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      in_stack_000001e8 =
           *(code **)(
                     ___ZN19codex_rollout_trace6thread25EnabledThreadTraceContext30write_json_payload_best_effort10__CALLSITE17h01a97c60a46b6edbE
                     + 0x20);
      in_stack_000001e0 = (code *)0x2;
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      pcVar5 = pcRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        pcVar5 = (code *)&UNK_109adfc03;
      }
      iVar4 = (**(code **)(puVar1 + 0x18))(pcVar5,&stack0x000001e0);
      if (iVar4 != 0) {
        in_stack_000006d8 =
             __ZN6anyhow5error62__LT_impl_u20_core__fmt__Display_u20_for_u20_anyhow__Error_GT_3fmt17h62559356033ed7d7E
        ;
        *(undefined **)(unaff_x29 + -0xf0) = &UNK_108cb8f4a;
        *(undefined1 **)(unaff_x29 + -0xe8) = &stack0x000006d0;
        __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                  (lVar6,pcVar5,puVar1,&stack0x000001e0,&stack0x000004c0);
      }
    }
  }
  in_stack_000006e0 = in_stack_000006f8;
  in_stack_000004c0 = (code *)0x8000000000000000;
  (*(code *)**(undefined8 **)in_stack_000004c8)();
  in_stack_000004c8 = in_stack_000006d8;
  in_stack_000006d8 = in_stack_000006f0;
LAB_1005a06c8:
  func_0x000100025ae8(unaff_x29 + -0xf0,&stack0x00000290);
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000001e0,s_edge_agent_result______108ad0b02,&stack0x000004c0);
  pcVar12 = in_stack_000001e8;
  pcVar5 = in_stack_000001e0;
  func_0x000100025ae8(&stack0x000001e0,unaff_x27 + 0x238);
  if (in_stack_00000068 == (long *)0x0) {
    lVar6 = 1;
  }
  else {
    lVar6 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(in_stack_00000068,1);
    if (lVar6 == 0) {
      FUN_107c03c64(1,in_stack_00000068);
      goto LAB_1005a2d40;
    }
  }
  _memcpy(lVar6,in_stack_00000078,in_stack_00000068);
  pcVar26 = (code *)0x1a;
  __ZN19codex_rollout_trace6thread25EnabledThreadTraceContext31append_with_context_best_effort17h8b9c9c2fac59c2b6E
            (unaff_x27 + 0x220,unaff_x29 + -0xf0,&stack0x000004c0);
  if (in_stack_00000048 != 0) {
    _free(in_stack_00000078);
  }
  *(undefined2 *)((long)unaff_x28 + 0x11) = 0;
  *(undefined1 *)((long)unaff_x28 + 0x13) = 0;
  if (*(long *)(unaff_x19 + 0x620) == 4) {
    uVar10 = *(ulong *)(unaff_x19 + 0x628);
joined_r0x0001005a085c:
    if (uVar10 != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x630));
    }
  }
  else if (*(long *)(unaff_x19 + 0x620) == 3) {
    uVar10 = *(ulong *)(unaff_x19 + 0x628) & 0x7fffffffffffffff;
    goto joined_r0x0001005a085c;
  }
  *in_stack_00000080 = 1;
  FUN_100d65ad8(in_stack_00000088);
  *(undefined1 *)(unaff_x28 + 10) = 0;
  *unaff_x21 = 1;
  *(undefined8 *)(unaff_x19 + 0x5d0) = *(undefined8 *)(unaff_x19 + 0x1e8);
  *(long *)(unaff_x19 + 0x5d8) = unaff_x19 + 0x3d0;
  puVar20 = (undefined1 *)(unaff_x19 + 0x5e1);
  *(undefined1 *)(unaff_x19 + 0x5e1) = 0;
  *(undefined1 *)(unaff_x19 + 0x5e0) = 0;
  *(undefined8 *)(unaff_x19 + 0x5b0) = *(undefined8 *)(unaff_x19 + 0x1e8);
  __ZN10codex_core7session4turn23realtime_text_for_event17h28836209fba9a31eE(&stack0x000004c0);
  *(undefined1 *)(unaff_x19 + 0x5e0) = 1;
  *(code **)(unaff_x19 + 0x5c8) = pcVar12;
  *(code **)(unaff_x19 + 0x5c0) = pcVar5;
  *(undefined8 *)(unaff_x19 + 0x5b8) = 0x1a;
  *(long *)(unaff_x19 + 0x5e8) = *(long *)(*(long *)(unaff_x19 + 0x5b0) + 0x6e0) + 0x10;
  *(undefined1 *)(unaff_x19 + 0x668) = 0;
  puVar17 = (undefined8 *)(unaff_x19 + 0x5e8);
  bVar2 = FUN_10052acf0(puVar17);
  if (bVar2 == 2) {
    uVar11 = 3;
LAB_1005a0fc0:
    *puVar20 = uVar11;
    uVar9 = 1;
    uVar11 = 5;
  }
  else {
    if ((((*(char *)(unaff_x19 + 0x668) == '\x03') && (*(char *)(unaff_x19 + 0x660) == '\x03')) &&
        (*(char *)(unaff_x19 + 0x658) == '\x03')) && (*(char *)(unaff_x19 + 0x610) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x618);
      if (*(long *)(unaff_x19 + 0x620) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x620) + 0x18))(*(undefined8 *)(unaff_x19 + 0x628));
      }
    }
    if ((bVar2 & 1) == 0) {
LAB_1005a0ca4:
      if (*(long *)(unaff_x19 + 0x5b8) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x5c0));
      }
    }
    else {
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x5b0) + 0x6e0) + 0x10;
      *(long *)(unaff_x19 + 0x5e8) = lVar6;
      plVar13 = (long *)(unaff_x19 + 0x5f0);
      *(undefined1 *)(unaff_x19 + 0x5f0) = 0;
      *(long *)(unaff_x19 + 0x5f8) = lVar6;
      *(undefined1 *)(unaff_x19 + 0x668) = 0;
      auVar24 = FUN_100fd3e50(unaff_x19 + 0x5f8);
      uVar9 = auVar24._8_8_;
      pcVar8 = auVar24._0_8_;
      if (pcVar8 == (code *)0x0) {
        uVar11 = 3;
LAB_1005a0b1c:
        *(undefined1 *)plVar13 = uVar11;
        uVar11 = 4;
        goto LAB_1005a0fc0;
      }
      if (((*(char *)(unaff_x19 + 0x668) == '\x03') && (*(char *)(unaff_x19 + 0x660) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x618) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x620);
        uVar9 = extraout_x1;
        if (*(long *)(unaff_x19 + 0x628) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x628) + 0x18))(*(undefined8 *)(unaff_x19 + 0x630));
          uVar9 = extraout_x1_00;
        }
      }
      if (pcVar8[0x70] == (code)0x2) {
        cVar16 = (code)0x2;
        plVar14 = plVar13;
      }
      else {
        in_stack_00000068 = *(long **)(pcVar8 + 0x50);
        lVar6 = in_stack_00000068[0x54];
        in_stack_00000068[0x54] = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1005a1ad4;
        lVar6 = *in_stack_00000068;
        *in_stack_00000068 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1005a2d40;
        plVar14 = *(long **)(pcVar8 + 0x58);
        lVar6 = *plVar14;
        *plVar14 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1005a2d40;
        unaff_x28 = *(long **)(pcVar8 + 0x60);
        lVar6 = *unaff_x28;
        *unaff_x28 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1005a2d40;
        cVar16 = pcVar8[0x68];
      }
      if (*pcVar8 == (code)0x0) {
        *pcVar8 = (code)0x1;
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar8,uVar9,1000000000);
      }
      FUN_1060fa678(pcVar8,1,pcVar8);
      if (cVar16 == (code)0x2) {
        *(undefined1 *)plVar13 = 1;
        in_stack_00000330 = (code *)0x8000000000000000;
      }
      else {
        *(long **)(unaff_x19 + 0x670) = in_stack_00000068;
        *(long **)(unaff_x19 + 0x678) = plVar14;
        *(long **)(unaff_x19 + 0x680) = unaff_x28;
        *(code *)(unaff_x19 + 0x688) = cVar16;
        *(long **)(unaff_x19 + 0x5f8) = plVar14 + 2;
        *(undefined1 *)(unaff_x19 + 0x668) = 0;
        auVar24 = FUN_100fd3e50(unaff_x19 + 0x5f8);
        uVar9 = auVar24._8_8_;
        pcVar7 = auVar24._0_8_;
        if (pcVar7 == (char *)0x0) {
          uVar11 = 4;
          goto LAB_1005a0b1c;
        }
        if (((*(char *)(unaff_x19 + 0x668) == '\x03') && (*(char *)(unaff_x19 + 0x660) == '\x03'))
           && (*(char *)(unaff_x19 + 0x618) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x620);
          uVar9 = extraout_x1_01;
          if (*(long *)(unaff_x19 + 0x628) != 0) {
            (**(code **)(*(long *)(unaff_x19 + 0x628) + 0x18))(*(undefined8 *)(unaff_x19 + 0x630));
            uVar9 = extraout_x1_02;
          }
        }
        if (*(long *)(pcVar7 + 0x28) == -0x8000000000000000) {
          in_stack_00000330 = (code *)0x8000000000000000;
        }
        else {
          func_0x000100025ae8(&stack0x000004c0);
          uVar9 = extraout_x1_03;
          in_stack_00000330 = pcVar26;
        }
        if (*pcVar7 == '\0') {
          *pcVar7 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar7,uVar9,1000000000);
        }
        FUN_1060fa678(pcVar7,1,pcVar7);
        FUN_100e3da24(unaff_x19 + 0x670);
        *(undefined1 *)plVar13 = 1;
        pcVar8 = pcVar5;
        pcVar26 = in_stack_00000330;
        if (in_stack_00000330 == (code *)0x8000000000000001) {
          uVar11 = 4;
          goto LAB_1005a0fc0;
        }
      }
      FUN_100d09648(puVar17);
      if (in_stack_00000330 == (code *)0x8000000000000000) goto LAB_1005a0ca4;
      if (in_stack_00000330 != (code *)0x0) {
        _free(pcVar8);
      }
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x5b0) + 0x6e0) + 0x10;
      *(undefined1 *)(unaff_x19 + 0x5e0) = 0;
      *(undefined8 *)(unaff_x19 + 0x5f8) = *(undefined8 *)(unaff_x19 + 0x5c8);
      *(undefined8 *)(unaff_x19 + 0x5f0) = *(undefined8 *)(unaff_x19 + 0x5c0);
      *puVar17 = *(undefined8 *)(unaff_x19 + 0x5b8);
      *(long *)(unaff_x19 + 0x600) = lVar6;
      in_stack_00000068 = (long *)(unaff_x19 + 0x658);
      *(undefined1 *)(unaff_x19 + 0x658) = 0;
      puVar17 = (undefined8 *)(unaff_x19 + 0x5e8);
      *(undefined1 *)(unaff_x19 + 0x65c) = 0;
      *(undefined2 *)(unaff_x19 + 0x65a) = 0;
      *(undefined1 *)(unaff_x19 + 0x659) = 1;
      *(undefined8 *)(unaff_x19 + 0x610) = *(undefined8 *)(unaff_x19 + 0x5f0);
      *(undefined8 *)(unaff_x19 + 0x608) = *puVar17;
      *(undefined8 *)(unaff_x19 + 0x618) = *(undefined8 *)(unaff_x19 + 0x5f8);
      *(long *)(unaff_x19 + 0x660) = lVar6;
      *(undefined1 *)(unaff_x19 + 0x6d0) = 0;
      in_stack_00000330 = (code *)FUN_100fd3e50(unaff_x19 + 0x660);
      if (in_stack_00000330 == (code *)0x0) {
        uVar11 = 3;
        goto LAB_1005a0fb8;
      }
      if (((*(char *)(unaff_x19 + 0x6d0) == '\x03') && (*(char *)(unaff_x19 + 0x6c8) == '\x03')) &&
         (*(char *)(unaff_x19 + 0x680) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x688);
        if (*(long *)(unaff_x19 + 0x690) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x690) + 0x18))(*(undefined8 *)(unaff_x19 + 0x698));
        }
      }
      if (in_stack_00000330[0x70] != (code)0x2) {
        plVar13 = *(long **)(in_stack_00000330 + 0x50);
        lVar6 = plVar13[0x54];
        plVar13[0x54] = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1005a1ad4;
        lVar6 = *plVar13;
        *plVar13 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1005a2d40;
        plVar14 = *(long **)(in_stack_00000330 + 0x58);
        lVar6 = *plVar14;
        *plVar14 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1005a2d40;
        plVar15 = *(long **)(in_stack_00000330 + 0x60);
        lVar6 = *plVar15;
        *plVar15 = lVar6 + 1;
        if (lVar6 < 0) goto LAB_1005a2d40;
        cVar16 = in_stack_00000330[0x68];
        *(long **)(unaff_x19 + 0x620) = plVar13;
        *(long **)(unaff_x19 + 0x628) = plVar14;
        *(long **)(unaff_x19 + 0x630) = plVar15;
        *(code *)(unaff_x19 + 0x638) = cVar16;
        __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(in_stack_00000330,1);
        *(long *)(unaff_x19 + 0x660) = *(long *)(unaff_x19 + 0x628) + 0x10;
        *(undefined1 *)(unaff_x19 + 0x6d0) = 0;
        pcVar8 = (code *)FUN_100fd3e50((undefined8 *)(unaff_x19 + 0x660));
        if (pcVar8 == (code *)0x0) {
          uVar11 = 4;
        }
        else {
          if (((*(char *)(unaff_x19 + 0x6d0) == '\x03') && (*(char *)(unaff_x19 + 0x6c8) == '\x03'))
             && (*(char *)(unaff_x19 + 0x680) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x688);
            if (*(long *)(unaff_x19 + 0x690) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x690) + 0x18))(*(undefined8 *)(unaff_x19 + 0x698))
              ;
            }
          }
          if ((*(long *)(pcVar8 + 0x28) == -0x8000000000000000) ||
             (func_0x000100025ae8(&stack0x000006d0), in_stack_000004c0 == (code *)0x8000000000000000
             )) {
            __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(pcVar8,1);
            pcVar19 = (code *)0x8000000000000020;
LAB_1005a1028:
            FUN_100e3da24(unaff_x19 + 0x620);
            goto LAB_1005a1030;
          }
          *(undefined1 *)(unaff_x19 + 0x65b) = 1;
          *(code **)(unaff_x19 + 0x668) = in_stack_000004c8;
          *(undefined8 *)(unaff_x19 + 0x660) = in_stack_000004c0;
          *(code **)(unaff_x19 + 0x670) = in_stack_000004d0;
          __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(pcVar8,1);
          *(undefined1 *)(unaff_x19 + 0x659) = 0;
          pcVar5 = *(code **)(unaff_x19 + 0x610);
          pcVar26 = *(code **)(unaff_x19 + 0x608);
          pcVar12 = *(code **)(unaff_x19 + 0x618);
          __ZN10codex_core21realtime_conversation20prefix_realtime_text17h258f76f3bb635982E
                    (unaff_x19 + 0x640,&stack0x000006d0,&UNK_108ca3361,10,
                     *(undefined1 *)(unaff_x19 + 0x638));
          *(undefined1 *)(unaff_x19 + 0x65a) = 1;
          func_0x000100025ae8(&stack0x000006d0,unaff_x19 + 0x640);
          *(undefined1 *)(unaff_x19 + 0x65c) = 1;
          *(code **)(unaff_x19 + 0x688) = pcVar12;
          *(code **)(unaff_x19 + 0x680) = pcVar5;
          *(code **)(unaff_x19 + 0x678) = pcVar26;
          *(long *)(unaff_x19 + 0x690) = *(long *)(unaff_x19 + 0x630) + 0x10;
          *(undefined1 *)(unaff_x19 + 0x700) = 0;
          pcVar8 = (code *)FUN_100fd3e50(unaff_x19 + 0x690);
          if (pcVar8 == (code *)0x0) {
            uVar11 = 5;
          }
          else {
            if (((*(char *)(unaff_x19 + 0x700) == '\x03') &&
                (*(char *)(unaff_x19 + 0x6f8) == '\x03')) &&
               (*(char *)(unaff_x19 + 0x6b0) == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (unaff_x19 + 0x6b8);
              if (*(long *)(unaff_x19 + 0x6c0) != 0) {
                (**(code **)(*(long *)(unaff_x19 + 0x6c0) + 0x18))
                          (*(undefined8 *)(unaff_x19 + 0x6c8));
              }
            }
            lVar6 = *(long *)(pcVar8 + 0x28);
            if ((lVar6 != -0x8000000000000000) && (lVar6 != 0)) {
              _free(*(undefined8 *)(pcVar8 + 0x30));
            }
            uVar9 = *(undefined8 *)(unaff_x19 + 0x680);
            lVar6 = *(long *)(unaff_x19 + 0x678);
            *(undefined8 *)(pcVar8 + 0x38) = *(undefined8 *)(unaff_x19 + 0x688);
            *(undefined8 *)(pcVar8 + 0x30) = uVar9;
            *(long *)(pcVar8 + 0x28) = lVar6;
            *(undefined1 *)(unaff_x19 + 0x65c) = 0;
            __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(pcVar8,1);
            in_stack_000001e8 = *(code **)(unaff_x19 + 0x668);
            in_stack_000001e0 = *(code **)(unaff_x19 + 0x660);
            uVar9 = *(undefined8 *)(unaff_x19 + 0x670);
            *(undefined2 *)(unaff_x19 + 0x65a) = 0;
            *(undefined8 *)(unaff_x19 + 0x660) = 0;
            *(code **)(unaff_x19 + 0x670) = in_stack_000001e8;
            *(code **)(unaff_x19 + 0x668) = in_stack_000001e0;
            *(undefined8 *)(unaff_x19 + 0x678) = uVar9;
            *(undefined8 *)(unaff_x19 + 0x688) = *(undefined8 *)(unaff_x19 + 0x648);
            *(undefined8 *)(unaff_x19 + 0x680) = *(undefined8 *)(unaff_x19 + 0x640);
            *(undefined8 *)(unaff_x19 + 0x690) = *(undefined8 *)(unaff_x19 + 0x650);
            *(long *)(unaff_x19 + 0x698) = unaff_x19 + 0x620;
            *(undefined8 *)(unaff_x19 + 0x6a0) = 0;
            FUN_1011c463c(&stack0x000006d0,unaff_x19 + 0x660,*unaff_x20);
            if (pcVar26 != (code *)0x3) {
              FUN_100e7c8a8(unaff_x19 + 0x660);
              in_stack_000004c8 = pcVar5;
              in_stack_000004c0 = pcVar26;
              in_stack_000004d0 = pcVar12;
              if (pcVar26 != (code *)0x2) {
                pcVar8 = (code *)_malloc(0x1b);
                if (pcVar8 == (code *)0x0) {
                  FUN_107c03c64(1,0x1b);
                  goto LAB_1005a2d40;
                }
                *(undefined8 *)(pcVar8 + 8) = 0x207369206e6f6974;
                *(undefined8 *)pcVar8 = 0x61737265766e6f63;
                *(undefined8 *)(pcVar8 + 0x13) = 0x676e696e6e757220;
                *(undefined8 *)(pcVar8 + 0xb) = 0x746f6e207369206e;
                if (pcVar5 != (code *)0x0) {
                  _free(pcVar12);
                }
                if (in_stack_000006d8 != (code *)0x0) {
                  _free(in_stack_000006e0);
                }
                *(undefined2 *)(unaff_x19 + 0x65a) = 0;
                pcVar19 = (code *)0x800000000000000b;
                goto LAB_1005a1028;
              }
              *(undefined2 *)(unaff_x19 + 0x65a) = 0;
              FUN_100e3da24(unaff_x19 + 0x620);
              pcVar19 = (code *)0x8000000000000020;
              *(undefined1 *)(unaff_x19 + 0x659) = 0;
              goto LAB_1005a104c;
            }
            uVar11 = 6;
          }
        }
LAB_1005a0fb8:
        *(undefined1 *)in_stack_00000068 = uVar11;
        uVar11 = 5;
        goto LAB_1005a0fc0;
      }
      pcVar8 = (code *)_malloc(0x1b);
      if (pcVar8 == (code *)0x0) {
        FUN_107c03c64(1,0x1b);
        goto LAB_1005a2d40;
      }
      *(undefined8 *)(pcVar8 + 8) = 0x207369206e6f6974;
      *(undefined8 *)pcVar8 = 0x61737265766e6f63;
      *(undefined8 *)(pcVar8 + 0x13) = 0x676e696e6e757220;
      *(undefined8 *)(pcVar8 + 0xb) = 0x746f6e207369206e;
      __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(in_stack_00000330,1);
      pcVar19 = (code *)0x800000000000000b;
LAB_1005a1030:
      if (((*(byte *)(unaff_x19 + 0x659) & 1) != 0) && (*(long *)(unaff_x19 + 0x608) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x610));
      }
      *(undefined1 *)(unaff_x19 + 0x659) = 0;
LAB_1005a104c:
      *(undefined1 *)in_stack_00000068 = 1;
      FUN_100cf77cc(puVar17);
      in_stack_00000330 = pcVar19;
      if (pcVar19 != (code *)0x8000000000000020) {
        pcVar5 = (code *)0x1b;
        if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
            ((bRam000000010b62ad68 - 1 < 2 ||
             ((bRam000000010b62ad68 != 0 &&
              (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
                                 ), cVar3 != '\0')))))) &&
           (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                               (
                               ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
                               ), (uVar10 & 1) != 0)) {
          in_stack_000001e0 = (code *)&stack0x000004c0;
          in_stack_000001e8 =
               __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
          ;
          in_stack_000004c8 = (code *)&stack0x00000320;
          in_stack_000004c0 = (code *)0x1;
          in_stack_000004d0 = (code *)0x1;
          FUN_1005b3b90(&stack0x000006d0);
        }
        else {
          lVar6 = 
          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            uVar9 = *(undefined8 *)
                     (
                     ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
                     + 0x20);
            uVar21 = *(undefined8 *)
                      (
                      ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_35maybe_mirror_event_text_to_realtime28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h17292b5b8d289848E
                      + 0x28);
            *(undefined8 *)(unaff_x29 + -0xf0) = 4;
            *(undefined8 *)(unaff_x29 + -0xe8) = uVar9;
            *(undefined8 *)(unaff_x29 + -0xe0) = uVar21;
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            in_stack_00000330 = pcRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              in_stack_00000330 = (code *)&UNK_109adfc03;
            }
            iVar4 = (**(code **)(puVar1 + 0x18))(in_stack_00000330,unaff_x29 + -0xf0);
            if (iVar4 != 0) {
              in_stack_000001e0 = (code *)&stack0x000004c0;
              in_stack_000001e8 =
                   __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
              ;
              in_stack_000004c8 = (code *)&stack0x00000320;
              in_stack_000004c0 = (code *)0x1;
              in_stack_000004d0 = (code *)0x1;
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (lVar6,in_stack_00000330,puVar1,unaff_x29 + -0xf0,&stack0x000006d0);
            }
          }
        }
        FUN_100df5738(&stack0x000004c0);
        pcVar26 = pcVar19;
        pcVar12 = pcVar8;
      }
    }
    *(undefined1 *)(unaff_x19 + 0x5e0) = 0;
    *puVar20 = 1;
    FUN_100d68960(unaff_x19 + 0x5b0);
    lVar6 = *(long *)(unaff_x19 + 0x1e8);
    *(long *)(unaff_x19 + 0x5b0) = lVar6;
    *(int **)(unaff_x19 + 0x5b8) = (int *)(unaff_x19 + 0x3d0);
    puVar20 = (undefined1 *)(unaff_x19 + 0x5c8);
    *(undefined1 *)(unaff_x19 + 0x5c8) = 0;
    *(long *)(unaff_x19 + 0x5c0) = lVar6;
    if (*(int *)(unaff_x19 + 0x3d0) == 0xd) {
      lVar6 = *(long *)(lVar6 + 0x6e0) + 0x10;
      *(long *)(unaff_x19 + 0x610) = lVar6;
      in_stack_00000068 = (long *)(unaff_x19 + 0x61a);
      *(undefined1 *)(unaff_x19 + 0x61a) = 0;
      puVar17 = (undefined8 *)(unaff_x19 + 0x5d0);
      *(undefined2 *)(unaff_x19 + 0x618) = 0;
      *(long *)(unaff_x19 + 0x620) = lVar6;
      *(undefined1 *)(unaff_x19 + 0x690) = 0;
      auVar24 = FUN_100fd3e50(unaff_x19 + 0x620);
      uVar9 = auVar24._8_8_;
      pcVar8 = auVar24._0_8_;
      if (pcVar8 != (code *)0x0) {
        if (((*(char *)(unaff_x19 + 0x690) == '\x03') && (*(char *)(unaff_x19 + 0x688) == '\x03'))
           && (*(char *)(unaff_x19 + 0x640) == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (unaff_x19 + 0x648);
          uVar9 = extraout_x1_04;
          if (*(long *)(unaff_x19 + 0x650) != 0) {
            (**(code **)(*(long *)(unaff_x19 + 0x650) + 0x18))(*(undefined8 *)(unaff_x19 + 0x658));
            uVar9 = extraout_x1_05;
          }
        }
        if (pcVar8[0x70] != (code)0x2) {
          plVar13 = *(long **)(pcVar8 + 0x50);
          lVar6 = plVar13[0x54];
          plVar13[0x54] = lVar6 + 1;
          if (lVar6 < 0) goto LAB_1005a1ad4;
          lVar6 = *plVar13;
          *plVar13 = lVar6 + 1;
          if (-1 < lVar6) {
            plVar14 = *(long **)(pcVar8 + 0x58);
            lVar6 = *plVar14;
            *plVar14 = lVar6 + 1;
            if (-1 < lVar6) {
              plVar15 = *(long **)(pcVar8 + 0x60);
              lVar6 = *plVar15;
              *plVar15 = lVar6 + 1;
              if (-1 < lVar6) {
                cVar16 = pcVar8[0x68];
                *(long **)(unaff_x19 + 0x5d0) = plVar13;
                *(long **)(unaff_x19 + 0x5d8) = plVar14;
                *(long **)(unaff_x19 + 0x5e0) = plVar15;
                goto LAB_1005a1350;
              }
            }
          }
LAB_1005a2d40:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005a2d44);
          (*pcVar5)();
        }
        cVar16 = (code)0x2;
LAB_1005a1350:
        *(code *)(unaff_x19 + 0x5e8) = cVar16;
        if (*pcVar8 == (code)0x0) {
          *pcVar8 = (code)0x1;
          goto LAB_1005a1368;
        }
        do {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (pcVar8,uVar9,1000000000);
LAB_1005a1368:
          FUN_1060fa678(pcVar8,1,pcVar8);
          if (*(char *)(unaff_x19 + 0x5e8) == '\x02') {
LAB_1005a1520:
            pcVar8 = (code *)0x8000000000000020;
          }
          else {
            uVar21 = puVar17[1];
            uVar9 = *puVar17;
            uVar23 = puVar17[2];
            *(undefined8 *)(unaff_x19 + 0x608) = puVar17[3];
            *(undefined8 *)(unaff_x19 + 0x600) = uVar23;
            *(undefined8 *)(unaff_x19 + 0x5f8) = uVar21;
            *(undefined8 *)(unaff_x19 + 0x5f0) = uVar9;
            if ((*(byte *)(unaff_x19 + 0x608) & 1) == 0) {
LAB_1005a1518:
              FUN_100e3da24(unaff_x19 + 0x5f0);
              goto LAB_1005a1520;
            }
            *(long *)(unaff_x19 + 0x620) = *(long *)(unaff_x19 + 0x5f8) + 0x10;
            *(undefined1 *)(unaff_x19 + 0x690) = 0;
            in_stack_00000330 = (code *)(unaff_x19 + 0x620);
            lVar6 = FUN_100fd3e50(in_stack_00000330);
            if (lVar6 == 0) {
              uVar11 = 4;
              goto LAB_1005a12f4;
            }
            if (((*(char *)(unaff_x19 + 0x690) == '\x03') &&
                (*(char *)(unaff_x19 + 0x688) == '\x03')) &&
               (*(char *)(unaff_x19 + 0x640) == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (unaff_x19 + 0x648);
              if (*(long *)(unaff_x19 + 0x650) != 0) {
                (**(code **)(*(long *)(unaff_x19 + 0x650) + 0x18))
                          (*(undefined8 *)(unaff_x19 + 0x658));
              }
            }
            if ((*(long *)(lVar6 + 0x28) == -0x8000000000000000) ||
               (func_0x000100025ae8(&stack0x000006d0),
               in_stack_000004c0 == (code *)0x8000000000000000)) {
              __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar6,1);
              goto LAB_1005a1518;
            }
            *(undefined1 *)(unaff_x19 + 0x618) = 1;
            *(code **)(unaff_x19 + 0x628) = in_stack_000004c8;
            *(code **)in_stack_00000330 = in_stack_000004c0;
            *(code **)(unaff_x19 + 0x630) = in_stack_000004d0;
            __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E(lVar6,1);
            *(long *)(unaff_x19 + 0x638) = *(long *)(unaff_x19 + 0x600) + 0x10;
            *(undefined1 *)(unaff_x19 + 0x6a8) = 0;
            in_stack_00000330 = (code *)FUN_100fd3e50(unaff_x19 + 0x638);
            if (in_stack_00000330 == (code *)0x0) {
              uVar11 = 5;
              goto LAB_1005a12f4;
            }
            if (((*(char *)(unaff_x19 + 0x6a8) == '\x03') &&
                (*(char *)(unaff_x19 + 0x6a0) == '\x03')) &&
               (*(char *)(unaff_x19 + 0x658) == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (unaff_x19 + 0x660);
              if (*(long *)(unaff_x19 + 0x668) != 0) {
                (**(code **)(*(long *)(unaff_x19 + 0x668) + 0x18))
                          (*(undefined8 *)(unaff_x19 + 0x670));
              }
            }
            if ((*(long *)(in_stack_00000330 + 0x28) == -0x8000000000000000) ||
               (func_0x000100025ae8(&stack0x000006d0),
               in_stack_000004c0 == (code *)0x8000000000000000)) {
              __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E
                        (in_stack_00000330,1);
              if (*(long *)(unaff_x19 + 0x620) != 0) {
                _free(*(undefined8 *)(unaff_x19 + 0x628));
              }
              *(undefined1 *)(unaff_x19 + 0x618) = 0;
              goto LAB_1005a1518;
            }
            *(undefined1 *)(unaff_x19 + 0x619) = 1;
            __ZN5tokio4sync15batch_semaphore9Semaphore7release17h1934242e8bf150d2E
                      (in_stack_00000330,1);
            *(undefined2 *)(unaff_x19 + 0x618) = 0;
            in_stack_000001e8 = *(code **)(unaff_x19 + 0x628);
            in_stack_000001e0 = *(code **)(unaff_x19 + 0x620);
            uVar9 = *(undefined8 *)(unaff_x19 + 0x630);
            *(undefined8 *)(unaff_x19 + 0x620) = 1;
            *(code **)(unaff_x19 + 0x630) = in_stack_000001e8;
            *(code **)(unaff_x19 + 0x628) = in_stack_000001e0;
            *(undefined8 *)(unaff_x19 + 0x638) = uVar9;
            *(code **)(unaff_x19 + 0x640) = in_stack_000004c0;
            *(code **)(unaff_x19 + 0x648) = in_stack_000004c8;
            *(code **)(unaff_x19 + 0x650) = in_stack_000004d0;
            *(long *)(unaff_x19 + 0x658) = unaff_x19 + 0x5f0;
            *(undefined8 *)(unaff_x19 + 0x660) = 0;
            FUN_1011c463c(&stack0x000006d0,unaff_x19 + 0x620,*unaff_x20);
            if (in_stack_000004c0 == (code *)0x3) {
              uVar11 = 6;
              goto LAB_1005a12f4;
            }
            FUN_100e7c8a8(unaff_x19 + 0x620);
            pcVar8 = (code *)0x8000000000000020;
            if (in_stack_000004c0 != (code *)0x2) {
              in_stack_00000330 = (code *)_malloc(0x1b);
              if (in_stack_00000330 == (code *)0x0) {
                FUN_107c03c64(1,0x1b);
                goto LAB_1005a2d40;
              }
              *(undefined8 *)(in_stack_00000330 + 8) = 0x207369206e6f6974;
              *(undefined8 *)in_stack_00000330 = 0x61737265766e6f63;
              *(undefined8 *)(in_stack_00000330 + 0x13) = 0x676e696e6e757220;
              *(undefined8 *)(in_stack_00000330 + 0xb) = 0x746f6e207369206e;
              if (in_stack_000004c8 != (code *)0x0) {
                _free(in_stack_000004d0);
              }
              if (in_stack_000006d8 != (code *)0x0) {
                _free(in_stack_000006e0);
              }
              pcVar8 = (code *)0x800000000000000b;
            }
            *(undefined2 *)(unaff_x19 + 0x618) = 0;
            FUN_100e3da24(unaff_x19 + 0x5f0);
            pcVar26 = in_stack_000004c0;
            pcVar5 = in_stack_000004c8;
            pcVar12 = in_stack_000004d0;
          }
          *(undefined1 *)in_stack_00000068 = 1;
          FUN_100d05bf8(puVar17);
          if (pcVar8 != (code *)0x8000000000000020) {
            pcVar5 = (code *)0x1b;
            if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
                ((bRam000000010b62adf8 - 1 < 2 ||
                 ((bRam000000010b62adf8 != 0 &&
                  (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                                     ), cVar3 != '\0')))))) &&
               (uVar10 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                   (
                                   ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                                   ), (uVar10 & 1) != 0)) {
              in_stack_000001e0 = (code *)&stack0x000004c0;
              in_stack_000001e8 =
                   __ZN70__LT_codex_protocol__error__CodexErr_u20_as_u20_core__fmt__Display_GT_3fmt17h845996580fb769aeE
              ;
              in_stack_000004c8 = (code *)&stack0x00000320;
              in_stack_000004c0 = (code *)0x1;
              in_stack_000004d0 = (code *)0x1;
              FUN_1005b4b40(&stack0x000006d0);
            }
            else {
              lVar6 = 
              ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                in_stack_00000068 =
                     (long *)&
                             __ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                ;
                uVar9 = *(undefined8 *)
                         (
                         ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                         + 0x20);
                uVar21 = *(undefined8 *)
                          (
                          ___ZN10codex_core7session55__LT_impl_u20_codex_core__session__session__Session_GT_38maybe_clear_realtime_handoff_for_event28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h3d144dc79a4f01a8E
                          + 0x28);
                *(undefined8 *)(unaff_x29 + -0xf0) = 4;
                *(undefined8 *)(unaff_x29 + -0xe8) = uVar9;
                *(undefined8 *)(unaff_x29 + -0xe0) = uVar21;
                puVar1 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_10b3c24c8;
                }
                pcVar12 = pcRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  pcVar12 = (code *)&UNK_109adfc03;
                }
                iVar4 = (**(code **)(puVar1 + 0x18))(pcVar12,unaff_x29 + -0xf0);
                if (iVar4 != 0) {
                  in_stack_000004c8 = (code *)&stack0x00000290;
                  in_stack_000004c0 = (code *)0x1;
                  in_stack_000004d0 = (code *)0x1;
                  in_stack_000001e8 = *(code **)(unaff_x29 + -0xe8);
                  in_stack_000001e0 = *(code **)(unaff_x29 + -0xf0);
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (lVar6,pcVar12,puVar1,&stack0x000001e0,&stack0x000006d0);
                }
              }
            }
            FUN_100df5738(&stack0x000004c0);
            pcVar26 = pcVar8;
            pcVar12 = in_stack_00000330;
          }
          *(long *)(unaff_x19 + 0x610) = *(long *)(*(long *)(unaff_x19 + 0x5c0) + 0x6e0) + 0x10;
          in_stack_00000330 = (code *)(unaff_x19 + 0x61a);
          *(undefined1 *)(unaff_x19 + 0x61a) = 0;
          puVar17 = (undefined8 *)(unaff_x19 + 0x5d0);
          *(undefined2 *)(unaff_x19 + 0x618) = 0;
          *(undefined8 *)(unaff_x19 + 0x620) = *(undefined8 *)(unaff_x19 + 0x610);
          *(undefined1 *)(unaff_x19 + 0x690) = 0;
          auVar24 = FUN_100fd3e50(unaff_x19 + 0x620);
          uVar9 = auVar24._8_8_;
          pcVar8 = auVar24._0_8_;
          if (pcVar8 == (code *)0x0) {
            cVar16 = (code)0x3;
            goto LAB_1005a1a54;
          }
          if (((*(char *)(unaff_x19 + 0x690) == '\x03') && (*(char *)(unaff_x19 + 0x688) == '\x03'))
             && (*(char *)(unaff_x19 + 0x640) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x648);
            uVar9 = extraout_x1_06;
            if (*(long *)(unaff_x19 + 0x650) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x650) + 0x18))(*(undefined8 *)(unaff_x19 + 0x658))
              ;
              uVar9 = extraout_x1_07;
            }
          }
          if (pcVar8[0x70] == (code)0x2) {
            cVar16 = (code)0x2;
            goto LAB_1005a1800;
          }
          plVar13 = *(long **)(pcVar8 + 0x50);
          lVar6 = plVar13[0x54];
          plVar13[0x54] = lVar6 + 1;
          if (-1 < lVar6) goto code_r0x0001005a17c4;
LAB_1005a1ad4:
          __ZN3std7process5abort17hdc01e45e25b715e8E();
          uVar9 = extraout_x1_14;
        } while( true );
      }
      uVar11 = 3;
LAB_1005a12f4:
      *(undefined1 *)in_stack_00000068 = uVar11;
      uVar11 = 3;
LAB_1005a1a5c:
      *puVar20 = uVar11;
      uVar9 = 1;
      uVar11 = 6;
    }
    else {
LAB_1005a19f0:
      *(undefined1 *)(unaff_x19 + 0x5c8) = 1;
      __ZN95__LT_codex_protocol__protocol__EventMsg_u20_as_u20_codex_protocol__protocol__HasLegacyEvent_GT_16as_legacy_events17h9ae13226bb09f842E
                (&stack0x000004c0,unaff_x19 + 0x3d0,
                 *(undefined1 *)(*(long *)(unaff_x19 + 0x1e8) + 0x610));
      *(code **)(unaff_x19 + 0x788) = pcVar5;
      *(code **)(unaff_x19 + 0x790) = pcVar5;
      *(code **)(unaff_x19 + 0x798) = pcVar26;
      *(code **)(unaff_x19 + 0x7a0) = pcVar5 + (long)pcVar12 * 0x1d8;
      if (pcVar5 != pcVar5 + (long)pcVar12 * 0x1d8) {
        do {
          *(code **)(unaff_x19 + 0x790) = pcVar5 + 0x1d8;
          _memcpy(unaff_x19 + 0x5b0,pcVar5,0x1d8);
          if (*(int *)(unaff_x19 + 0x5b0) == 0x4a) goto LAB_1005a2d08;
          lVar6 = 1;
          *(undefined1 *)(unaff_x19 + 0x5a9) = 1;
          _memcpy(&stack0x000004c0,unaff_x19 + 0x5b0,0x1d8);
          uVar9 = *(undefined8 *)(*(long *)(unaff_x19 + 0x1f0) + 0x238);
          lVar18 = *(long *)(*(long *)(unaff_x19 + 0x1f0) + 0x240);
          if ((lVar18 != 0) && (lVar6 = _malloc(lVar18), lVar6 == 0)) {
            FUN_107c03c64(1,lVar18);
            goto LAB_1005a2d40;
          }
          _memcpy(lVar6,uVar9,lVar18);
          *(undefined1 *)(unaff_x19 + 0x5a9) = 0;
          uVar9 = *(undefined8 *)(unaff_x19 + 0x1e8);
          *(long *)(unaff_x19 + 0x7a8) = lVar18;
          *(long *)(unaff_x19 + 0x7b0) = lVar6;
          *(long *)(unaff_x19 + 0x7b8) = lVar18;
          _memcpy(unaff_x19 + 0x7c0,&stack0x000004c0,0x1d8);
          *(undefined8 *)(unaff_x19 + 0x998) = uVar9;
          *(undefined1 *)(unaff_x19 + 0xbb0) = 0;
          iVar4 = FUN_1005a4060(unaff_x19 + 0x7a8);
          if (iVar4 != 0) {
            uVar9 = 1;
            uVar11 = 7;
            goto LAB_1005a2ce4;
          }
          FUN_100d28c3c(unaff_x19 + 0x7a8);
          *(undefined1 *)(unaff_x19 + 0x5a9) = 0;
          pcVar5 = *(code **)(unaff_x19 + 0x790);
        } while (pcVar5 != *(code **)(unaff_x19 + 0x7a0));
      }
      *(undefined4 *)(unaff_x19 + 0x5b0) = 0x4a;
LAB_1005a2d08:
      FUN_100e76a44(unaff_x19 + 0x788);
      func_0x000100dfc74c(unaff_x19 + 0x3d0);
      uVar9 = 0;
      *(undefined1 *)(unaff_x19 + 0x5aa) = 0;
      uVar11 = 1;
    }
  }
LAB_1005a2ce4:
  *(undefined1 *)(unaff_x19 + 0x5a8) = uVar11;
  return uVar9;
}

