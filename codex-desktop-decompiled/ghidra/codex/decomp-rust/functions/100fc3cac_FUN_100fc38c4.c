
void FUN_100fc38c4(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong unaff_x23;
  long lVar19;
  long unaff_x24;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long unaff_x28;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined1 uStack_268;
  char cStack_267;
  undefined6 uStack_266;
  ulong uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  bVar4 = *(byte *)(param_2 + 2);
  if (bVar4 < 2) {
    if (bVar4 != 0) {
      func_0x000108a07af4(&UNK_10b23a550);
LAB_100fc3c64:
      uVar18 = func_0x000108a07b10(&UNK_10b23a550);
      if (unaff_x24 != 0) {
        _free();
      }
      if ((unaff_x23 & 1) == 0) {
        FUN_100de21d4(unaff_x28 + 8);
      }
      *(undefined1 *)(param_2 + 2) = 2;
      auVar27 = __Unwind_Resume(uVar18);
      plVar12 = auVar27._8_8_;
      plVar9 = auVar27._0_8_;
      bVar4 = *(byte *)(plVar12 + 2);
      uVar18 = param_3;
      if (bVar4 < 2) {
        if (bVar4 != 0) {
          func_0x000108a07af4(&UNK_10b23a550);
LAB_100fc404c:
          uVar8 = func_0x000108a07b10(&UNK_10b23a550);
          if (unaff_x24 != 0) {
            _free();
          }
          if ((unaff_x23 & 1) == 0) {
            FUN_100de21d4(unaff_x28 + 8);
          }
          *(undefined1 *)(plVar12 + 2) = 2;
          auVar27 = __Unwind_Resume(uVar8);
          puVar13 = auVar27._8_8_;
          bVar4 = *(byte *)(puVar13 + 7);
          uStack_1b0 = param_3;
          if (bVar4 < 2) {
            if (bVar4 == 0) {
              uStack_208 = puVar13[1];
              uStack_210 = *puVar13;
              uStack_200 = puVar13[2];
              __ZN5tokio3net4addr95__LT_impl_u20_tokio__net__addr__sealed__ToSocketAddrsPriv_u20_for_u20__LP__RF_str_C_u16_RP__GT_15to_socket_addrs17hd245392d8bda99ccE
                        (&uStack_1d0,&uStack_210);
              uStack_1e8 = uStack_1c8;
              uStack_1f0 = uStack_1d0;
              uStack_1d8 = uStack_1b8;
              uStack_1e0 = uStack_1c0;
              puVar13[4] = uStack_1c8;
              puVar13[3] = uStack_1d0;
              puVar13[6] = uStack_1b8;
              puVar13[5] = uStack_1c0;
LAB_100fc40fc:
              __ZN85__LT_tokio__net__addr__sealed__MaybeReady_u20_as_u20_core__future__future__Future_GT_4poll17h1a3da82d40572efbE
                        (auVar27._0_8_,puVar13 + 3,uVar18);
              iVar6 = *auVar27._0_8_;
              if (iVar6 != 3) {
                if (*(short *)(puVar13 + 3) == 3) {
                  plVar9 = (long *)puVar13[4];
                  if (*plVar9 == 0xcc) {
                    *plVar9 = 0x84;
                  }
                  else {
                    (**(code **)(plVar9[2] + 0x20))();
                  }
                }
                iVar6 = 1;
              }
              *(char *)(puVar13 + 7) = (char)iVar6;
              return;
            }
            func_0x000108a07af4(&UNK_10b23a580);
          }
          else if (bVar4 == 3) goto LAB_100fc40fc;
          func_0x000108a07b10(&UNK_10b23a580);
          *(undefined1 *)(puVar13 + 7) = 2;
          uVar8 = __Unwind_Resume();
          if (*(short *)(puVar13 + 3) == 3) {
            plVar9 = (long *)puVar13[4];
            if (*plVar9 == 0xcc) {
              *plVar9 = 0x84;
            }
            else {
              (**(code **)(plVar9[2] + 0x20))();
            }
          }
          *(undefined1 *)(puVar13 + 7) = 2;
          __Unwind_Resume(uVar8);
          auVar27 = func_0x000108a07bc4();
          puVar13 = auVar27._8_8_;
          plVar9 = auVar27._0_8_;
          bVar4 = *(byte *)(puVar13 + 10);
          if (bVar4 < 2) {
            if (bVar4 != 0) {
              func_0x000108a07af4(&UNK_10b23a5b0);
LAB_100fc43bc:
              func_0x000108a07b10(&UNK_10b23a5b0);
LAB_100fc43c8:
              func_0x000108a07af4(&UNK_10b23a598);
LAB_100fc43e4:
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100fc43e8);
              (*pcVar5)();
            }
            uStack_2b8 = puVar13[1];
            uStack_2c0 = *puVar13;
            uStack_2a8 = puVar13[3];
            uStack_2b0 = puVar13[2];
            __ZN3mio3net3tcp6stream9TcpStream7connect17h6b254999cc05dd0bE(&uStack_270,&uStack_2c0);
            if ((uStack_270 & 1) == 0) {
              *(undefined1 *)((long)puVar13 + 0x4c) = 0;
              *(undefined4 *)(puVar13 + 9) = uStack_26c;
              uVar3 = uStack_26c;
LAB_100fc427c:
              puVar10 = puVar13 + 4;
              FUN_1060f7d54(&uStack_270,uVar3,&UNK_10b4cd2d0);
              uVar21 = CONCAT62(uStack_266,CONCAT11(cStack_267,uStack_268));
              if (CONCAT44(uStack_26c,uStack_270) != 2) {
                uStack_278 = uStack_258;
                uStack_280 = uStack_260;
                puVar13[4] = CONCAT44(uStack_26c,uStack_270);
                puVar13[5] = uVar21;
                puVar13[7] = uStack_258;
                puVar13[6] = uStack_260;
                puVar13[8] = puVar10;
                goto LAB_100fc42b0;
              }
LAB_100fc4360:
              *(undefined1 *)((long)puVar13 + 0x4c) = 1;
              lVar16 = 2;
              goto LAB_100fc436c;
            }
            uVar21 = CONCAT62(uStack_266,CONCAT11(cStack_267,uStack_268));
            lVar16 = 2;
          }
          else {
            if (bVar4 != 3) goto LAB_100fc43bc;
            bVar4 = *(byte *)((long)puVar13 + 0x4c);
            if (bVar4 < 2) {
              if (bVar4 == 0) {
                uVar3 = *(undefined4 *)(puVar13 + 9);
                goto LAB_100fc427c;
              }
              goto LAB_100fc43c8;
            }
            if (bVar4 != 3) {
              func_0x000108a07b10(&UNK_10b23a598);
              goto LAB_100fc43e4;
            }
            puVar10 = (undefined8 *)puVar13[8];
LAB_100fc42b0:
            __ZN5tokio7runtime2io12registration12Registration10poll_ready17hed3d476e59e79c4fE
                      (&uStack_270,puVar10,uVar18,1);
            if (cStack_267 == '\x03') {
              *(undefined1 *)((long)puVar13 + 0x4c) = 3;
LAB_100fc42d0:
              uVar15 = 3;
              *plVar9 = 3;
              goto LAB_100fc4384;
            }
            if (cStack_267 == '\x02') {
              uVar21 = CONCAT44(uStack_26c,uStack_270);
LAB_100fc4358:
              FUN_100deb62c(puVar13 + 4);
              goto LAB_100fc4360;
            }
            if (*(int *)(puVar13 + 7) == -1) {
              func_0x000108a07a20(&UNK_10b23a610);
              goto LAB_100fc43e4;
            }
            uStack_280 = uStack_280 & 0xffffffff00000000;
            uStack_270 = 4;
            iVar6 = _getsockopt(*(int *)(puVar13 + 7),0xffff,0x1007,&uStack_280,&uStack_270);
            if (iVar6 == -1) {
              puVar11 = (uint *)___error();
              uVar21 = (ulong)*puVar11;
LAB_100fc4350:
              uVar21 = uVar21 << 0x20 | 2;
              goto LAB_100fc4358;
            }
            uVar21 = (ulong)(int)uStack_280;
            if ((int)uStack_280 != 0) goto LAB_100fc4350;
            lVar16 = puVar13[4];
            uVar21 = puVar13[5];
            lStack_298 = puVar13[7];
            lStack_2a0 = puVar13[6];
            *(undefined1 *)((long)puVar13 + 0x4c) = 1;
            if (lVar16 == 3) goto LAB_100fc42d0;
LAB_100fc436c:
            lStack_288 = lStack_298;
            lStack_290 = lStack_2a0;
          }
          *plVar9 = lVar16;
          plVar9[1] = uVar21;
          plVar9[3] = lStack_288;
          plVar9[2] = lStack_290;
          uVar15 = 1;
LAB_100fc4384:
          *(undefined1 *)(puVar13 + 10) = uVar15;
          return;
        }
        lVar16 = *plVar12;
        plVar12[1] = lVar16;
      }
      else {
        if (bVar4 != 3) goto LAB_100fc404c;
        lVar16 = plVar12[1];
      }
      uVar21 = *(ulong *)(lVar16 + 0x50);
      uVar22 = *(ulong *)(lVar16 + 0x58);
      lVar17 = *(long *)(lVar16 + 0x90);
      do {
        uVar20 = uVar22;
        uVar24 = uVar21;
        if (uVar22 <= uVar21) {
          uStack_140 = *(undefined8 *)(lVar16 + 0x40);
          uStack_138 = *(ulong *)(lVar16 + 0x48);
          uStack_130 = 0;
          uStack_128 = uStack_138;
          auVar27 = __ZN76__LT_tokio__io__stdin__Stdin_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17h512ff36f4d89f5c1E
                              (lVar16 + 0x10,param_3,&uStack_140);
          lVar7 = auVar27._8_8_;
          if ((auVar27._0_8_ & 1) != 0) goto LAB_100fc3ef4;
          if (lVar7 != 0) {
            uVar23 = *(ulong *)(lVar16 + 0x80);
            uVar25 = *(ulong *)(lVar16 + 0x88);
            uVar18 = 1;
            goto LAB_100fc3e70;
          }
          uVar20 = uStack_130;
          if (uStack_138 < uStack_130) {
            uVar24 = 0;
            puVar14 = &UNK_10b209248;
            uVar26 = uStack_138;
            goto LAB_100fc3ffc;
          }
          uVar24 = 0;
          *(undefined8 *)(lVar16 + 0x50) = 0;
          *(ulong *)(lVar16 + 0x58) = uStack_130;
        }
        uVar26 = uVar20 - uVar24;
        if ((uVar20 < uVar24) || (*(ulong *)(lVar16 + 0x48) < uVar20)) {
          puVar14 = &UNK_10b212c20;
          uVar26 = *(ulong *)(lVar16 + 0x48);
LAB_100fc3ffc:
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar24,uVar20,uVar26,puVar14);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100fc4010);
          (*pcVar5)();
        }
        lVar1 = *(long *)(lVar16 + 0x40) + uVar24;
        lVar7 = _memchr(lVar1,10,uVar26);
        if (lVar7 != 0) {
          uVar20 = lVar7 - lVar1;
          if (uVar26 <= uVar20) {
            uVar24 = 0;
            puVar14 = &UNK_10b23a478;
            goto LAB_100fc3ffc;
          }
          lVar7 = uVar20 + 1;
          lVar19 = *(long *)(lVar16 + 0x88);
          if ((ulong)(*(long *)(lVar16 + 0x78) - lVar19) <= uVar20) {
            FUN_108855060(lVar16 + 0x78,lVar19,lVar7,1,1);
            lVar19 = *(long *)(lVar16 + 0x88);
          }
          uVar23 = *(ulong *)(lVar16 + 0x80);
          _memcpy(uVar23 + lVar19,lVar1,lVar7);
          uVar25 = lVar19 + lVar7;
          *(ulong *)(lVar16 + 0x88) = uVar25;
          uVar21 = *(long *)(lVar16 + 0x50) + lVar7;
          uVar22 = *(ulong *)(lVar16 + 0x58);
          if (uVar21 <= *(ulong *)(lVar16 + 0x58)) {
            uVar22 = uVar21;
          }
          *(ulong *)(lVar16 + 0x50) = uVar22;
          lVar7 = lVar7 + lVar17;
          break;
        }
        lVar7 = *(long *)(lVar16 + 0x88);
        if ((ulong)(*(long *)(lVar16 + 0x78) - lVar7) < uVar26) {
          FUN_108855060(lVar16 + 0x78,lVar7,uVar26,1,1);
          lVar7 = *(long *)(lVar16 + 0x88);
        }
        uVar23 = *(ulong *)(lVar16 + 0x80);
        _memcpy(uVar23 + lVar7,lVar1,uVar26);
        uVar25 = lVar7 + uVar26;
        uVar22 = *(ulong *)(lVar16 + 0x58);
        uVar2 = *(long *)(lVar16 + 0x50) + uVar26;
        uVar21 = uVar22;
        if (uVar2 <= uVar22) {
          uVar21 = uVar2;
        }
        *(ulong *)(lVar16 + 0x50) = uVar21;
        lVar7 = uVar26 + lVar17;
        *(ulong *)(lVar16 + 0x88) = uVar25;
        *(long *)(lVar16 + 0x90) = lVar7;
        lVar17 = lVar7;
      } while (uVar20 != uVar24);
      uVar18 = 0;
      *(undefined8 *)(lVar16 + 0x90) = 0;
      lVar17 = 0;
LAB_100fc3e70:
      uVar21 = *(ulong *)(lVar16 + 0x78);
      *(undefined8 *)(lVar16 + 0x78) = 0;
      *(undefined8 *)(lVar16 + 0x80) = 1;
      *(undefined8 *)(lVar16 + 0x88) = 0;
      func_0x0001055bf348(&uStack_140,uVar23,uVar25);
      if ((int)uStack_140 == 1) {
        uStack_148 = uStack_130;
        uStack_150 = uStack_138;
        uStack_168 = uVar21;
        uVar21 = uVar23;
        uVar23 = uVar25;
      }
      else {
        uStack_168 = 0x8000000000000000;
        uStack_150 = uVar25;
      }
      uStack_160 = uVar21;
      uStack_158 = uVar23;
      auVar27 = __ZN5tokio2io4util9read_line18finish_string_read17h6ccd4c0d34d1b87cE
                          (uVar18,lVar7,&uStack_168,lVar17,lVar16 + 0x60,0);
      if (auVar27._0_8_ == 2) {
LAB_100fc3ef4:
        *plVar9 = -0x7ffffffffffffffe;
        uVar15 = 3;
        goto LAB_100fc3fa8;
      }
      if ((auVar27._0_8_ & 1) != 0) {
        *plVar9 = -0x7fffffffffffffff;
        plVar9[1] = auVar27._8_8_;
        uVar15 = 1;
        goto LAB_100fc3fa8;
      }
      lVar17 = *(long *)(lVar16 + 0x70);
      if (auVar27._8_8_ == 0) {
        if (lVar17 == 0) {
          *plVar9 = -0x8000000000000000;
          uVar15 = 1;
          goto LAB_100fc3fa8;
        }
LAB_100fc3f38:
        if (*(char *)(*(long *)(lVar16 + 0x68) + lVar17 + -1) == '\n') {
          lVar7 = lVar17 + -1;
          *(long *)(lVar16 + 0x70) = lVar7;
          if ((lVar7 != 0) && (*(char *)(*(long *)(lVar16 + 0x68) + lVar7 + -1) == '\r')) {
            *(long *)(lVar16 + 0x70) = lVar17 + -2;
          }
        }
      }
      else if (lVar17 != 0) goto LAB_100fc3f38;
      lVar17 = *(long *)(lVar16 + 0x60);
      plVar9[1] = *(long *)(lVar16 + 0x68);
      *plVar9 = lVar17;
      plVar9[2] = *(long *)(lVar16 + 0x70);
      *(undefined8 *)(lVar16 + 0x60) = 0;
      *(undefined8 *)(lVar16 + 0x68) = 1;
      *(undefined8 *)(lVar16 + 0x70) = 0;
      uVar15 = 3;
      if (*plVar9 != -0x7ffffffffffffffe) {
        uVar15 = 1;
      }
LAB_100fc3fa8:
      *(undefined1 *)(plVar12 + 2) = uVar15;
      return;
    }
    lVar16 = *param_2;
    param_2[1] = lVar16;
  }
  else {
    if (bVar4 != 3) goto LAB_100fc3c64;
    lVar16 = param_2[1];
  }
  uVar21 = *(ulong *)(lVar16 + 0x88);
  uVar22 = *(ulong *)(lVar16 + 0x90);
  lVar17 = *(long *)(lVar16 + 200);
  do {
    uVar20 = uVar22;
    uVar24 = uVar21;
    if (uVar22 <= uVar21) {
      uStack_80 = *(undefined8 *)(lVar16 + 0x78);
      uStack_78 = *(ulong *)(lVar16 + 0x80);
      uStack_70 = 0;
      uStack_68 = uStack_78;
      auVar27 = __ZN74__LT_tokio__fs__file__File_u20_as_u20_tokio__io__async_read__AsyncRead_GT_9poll_read17h16dcf49802ff277eE
                          (lVar16 + 0x10,param_3,&uStack_80);
      lVar7 = auVar27._8_8_;
      if ((auVar27._0_8_ & 1) != 0) goto LAB_100fc3b0c;
      if (lVar7 != 0) {
        uVar23 = *(ulong *)(lVar16 + 0xb8);
        uVar25 = *(ulong *)(lVar16 + 0xc0);
        uVar18 = 1;
        goto LAB_100fc3a88;
      }
      uVar20 = uStack_70;
      if (uStack_78 < uStack_70) {
        uVar24 = 0;
        puVar14 = &UNK_10b209248;
        uVar26 = uStack_78;
        goto LAB_100fc3c14;
      }
      uVar24 = 0;
      *(undefined8 *)(lVar16 + 0x88) = 0;
      *(ulong *)(lVar16 + 0x90) = uStack_70;
    }
    uVar26 = uVar20 - uVar24;
    if ((uVar20 < uVar24) || (*(ulong *)(lVar16 + 0x80) < uVar20)) {
      puVar14 = &UNK_10b212c20;
      uVar26 = *(ulong *)(lVar16 + 0x80);
LAB_100fc3c14:
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar24,uVar20,uVar26,puVar14);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100fc3c28);
      (*pcVar5)();
    }
    lVar1 = *(long *)(lVar16 + 0x78) + uVar24;
    lVar7 = _memchr(lVar1,10,uVar26);
    if (lVar7 != 0) {
      uVar20 = lVar7 - lVar1;
      if (uVar26 <= uVar20) {
        uVar24 = 0;
        puVar14 = &UNK_10b23a478;
        goto LAB_100fc3c14;
      }
      lVar7 = uVar20 + 1;
      lVar19 = *(long *)(lVar16 + 0xc0);
      if ((ulong)(*(long *)(lVar16 + 0xb0) - lVar19) <= uVar20) {
        FUN_108855060(lVar16 + 0xb0,lVar19,lVar7,1,1);
        lVar19 = *(long *)(lVar16 + 0xc0);
      }
      uVar23 = *(ulong *)(lVar16 + 0xb8);
      _memcpy(uVar23 + lVar19,lVar1,lVar7);
      uVar25 = lVar19 + lVar7;
      *(ulong *)(lVar16 + 0xc0) = uVar25;
      uVar21 = *(long *)(lVar16 + 0x88) + lVar7;
      uVar22 = *(ulong *)(lVar16 + 0x90);
      if (uVar21 <= *(ulong *)(lVar16 + 0x90)) {
        uVar22 = uVar21;
      }
      *(ulong *)(lVar16 + 0x88) = uVar22;
      lVar7 = lVar7 + lVar17;
      break;
    }
    lVar7 = *(long *)(lVar16 + 0xc0);
    if ((ulong)(*(long *)(lVar16 + 0xb0) - lVar7) < uVar26) {
      FUN_108855060(lVar16 + 0xb0,lVar7,uVar26,1,1);
      lVar7 = *(long *)(lVar16 + 0xc0);
    }
    uVar23 = *(ulong *)(lVar16 + 0xb8);
    _memcpy(uVar23 + lVar7,lVar1,uVar26);
    uVar25 = lVar7 + uVar26;
    uVar22 = *(ulong *)(lVar16 + 0x90);
    uVar2 = *(long *)(lVar16 + 0x88) + uVar26;
    uVar21 = uVar22;
    if (uVar2 <= uVar22) {
      uVar21 = uVar2;
    }
    *(ulong *)(lVar16 + 0x88) = uVar21;
    lVar7 = uVar26 + lVar17;
    *(ulong *)(lVar16 + 0xc0) = uVar25;
    *(long *)(lVar16 + 200) = lVar7;
    lVar17 = lVar7;
  } while (uVar20 != uVar24);
  uVar18 = 0;
  *(undefined8 *)(lVar16 + 200) = 0;
  lVar17 = 0;
LAB_100fc3a88:
  uVar21 = *(ulong *)(lVar16 + 0xb0);
  *(undefined8 *)(lVar16 + 0xb0) = 0;
  *(undefined8 *)(lVar16 + 0xb8) = 1;
  *(undefined8 *)(lVar16 + 0xc0) = 0;
  func_0x0001055bf348(&uStack_80,uVar23,uVar25);
  if ((int)uStack_80 == 1) {
    uStack_88 = uStack_70;
    uStack_90 = uStack_78;
    uStack_a8 = uVar21;
    uVar21 = uVar23;
    uVar23 = uVar25;
  }
  else {
    uStack_a8 = 0x8000000000000000;
    uStack_90 = uVar25;
  }
  uStack_a0 = uVar21;
  uStack_98 = uVar23;
  auVar27 = __ZN5tokio2io4util9read_line18finish_string_read17h6ccd4c0d34d1b87cE
                      (uVar18,lVar7,&uStack_a8,lVar17,lVar16 + 0x98,0);
  if (auVar27._0_8_ == 2) {
LAB_100fc3b0c:
    *param_1 = -0x7ffffffffffffffe;
    uVar15 = 3;
    goto LAB_100fc3bc0;
  }
  if ((auVar27._0_8_ & 1) != 0) {
    *param_1 = -0x7fffffffffffffff;
    param_1[1] = auVar27._8_8_;
    uVar15 = 1;
    goto LAB_100fc3bc0;
  }
  lVar17 = *(long *)(lVar16 + 0xa8);
  if (auVar27._8_8_ == 0) {
    if (lVar17 == 0) {
      *param_1 = -0x8000000000000000;
      uVar15 = 1;
      goto LAB_100fc3bc0;
    }
LAB_100fc3b50:
    if (*(char *)(*(long *)(lVar16 + 0xa0) + lVar17 + -1) == '\n') {
      lVar7 = lVar17 + -1;
      *(long *)(lVar16 + 0xa8) = lVar7;
      if ((lVar7 != 0) && (*(char *)(*(long *)(lVar16 + 0xa0) + lVar7 + -1) == '\r')) {
        *(long *)(lVar16 + 0xa8) = lVar17 + -2;
      }
    }
  }
  else if (lVar17 != 0) goto LAB_100fc3b50;
  lVar17 = *(long *)(lVar16 + 0x98);
  param_1[1] = *(long *)(lVar16 + 0xa0);
  *param_1 = lVar17;
  param_1[2] = *(long *)(lVar16 + 0xa8);
  *(undefined8 *)(lVar16 + 0x98) = 0;
  *(undefined8 *)(lVar16 + 0xa0) = 1;
  *(undefined8 *)(lVar16 + 0xa8) = 0;
  uVar15 = 3;
  if (*param_1 != -0x7ffffffffffffffe) {
    uVar15 = 1;
  }
LAB_100fc3bc0:
  *(undefined1 *)(param_2 + 2) = uVar15;
  return;
}

