
void FUN_100fe7c78(long *param_1,long *param_2,undefined8 param_3)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 extraout_x1;
  undefined1 uVar8;
  undefined1 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long *plVar10;
  int iVar11;
  long unaff_x21;
  int unaff_w22;
  long *plVar12;
  long unaff_x23;
  long lVar13;
  char in_wzr;
  undefined1 auVar14 [16];
  undefined8 uStack_170;
  undefined1 uStack_168;
  byte bStack_167;
  undefined4 uStack_166;
  undefined2 uStack_162;
  undefined4 uStack_160;
  undefined2 uStack_15c;
  undefined4 uStack_158;
  undefined2 uStack_154;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  bVar2 = *(byte *)(param_2 + 0x6c);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      func_0x000108a07af4(&UNK_10b23ad08);
      *(undefined1 *)(param_2 + 0x6c) = 2;
      uVar4 = __Unwind_Resume();
      FUN_100e676e8(param_2 + 0x24);
      *(undefined1 *)(param_2 + 0x6c) = 2;
      __Unwind_Resume(uVar4);
      auVar14 = func_0x000108a07bc4();
      plVar7 = auVar14._8_8_;
      piVar5 = auVar14._0_8_;
      bVar2 = *(byte *)(plVar7 + 0x28);
      if (bVar2 < 2) {
        if (bVar2 != 0) {
          uVar4 = func_0x000108a07af4(&UNK_10b23ad20);
          FUN_100de2564();
          *(undefined1 *)(plVar7 + 0x28) = 2;
          __Unwind_Resume(uVar4);
          auVar14 = func_0x000108a07bc4();
          plVar7 = auVar14._8_8_;
          puVar6 = auVar14._0_8_;
          bVar2 = *(byte *)(plVar7 + 0xd);
          if (bVar2 < 2) {
            if (bVar2 == 0) {
              lVar13 = *(long *)(*plVar7 + 0x10) + 0x80;
              plVar7[2] = lVar13;
              lVar9 = plVar7[1];
              plVar7[3] = lVar9;
              *(undefined1 *)(plVar7 + 0xc) = 0;
LAB_100fe7ffc:
              plVar7[4] = lVar13;
              plVar7[5] = 0;
              plVar7[6] = 0;
              plVar7[7] = 0;
              plVar7[9] = lVar9;
              *(undefined1 *)(plVar7 + 10) = 0;
              *(undefined1 *)(plVar7 + 0xb) = 0;
LAB_100fe801c:
              __ZN92__LT_tokio__runtime__io__scheduled_io__Readiness_u20_as_u20_core__future__future__Future_GT_4poll17h5354a2ab31b3c75eE
                        (&uStack_170,plVar7 + 4,param_3);
              if (bStack_167 == 2) {
                uVar8 = 3;
                *(undefined1 *)(plVar7 + 0xc) = 3;
                *(undefined1 *)((long)puVar6 + 9) = 3;
                goto LAB_100fe8148;
              }
              lVar13 = plVar7[4];
              pcVar1 = (char *)(lVar13 + 0x18);
              if (*pcVar1 == '\0') {
                *pcVar1 = '\x01';
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                          (pcVar1,extraout_x1,1000000000);
              }
              plVar12 = plVar7 + 5;
              if (*plVar12 == 0) {
                if (*(long **)(lVar13 + 0x20) == plVar12) {
                  plVar10 = (long *)plVar7[6];
                  *(long **)(lVar13 + 0x20) = plVar10;
                  goto joined_r0x000100fe80a0;
                }
              }
              else {
                plVar10 = (long *)plVar7[6];
                *(long **)(*plVar12 + 8) = plVar10;
joined_r0x000100fe80a0:
                if (plVar10 == (long *)0x0) {
                  if (*(long **)(lVar13 + 0x28) != plVar12) goto LAB_100fe80b0;
                  *(long *)(lVar13 + 0x28) = *plVar12;
                }
                else {
                  *plVar10 = *plVar12;
                }
                *plVar12 = 0;
                plVar7[6] = 0;
              }
LAB_100fe80b0:
              if (*pcVar1 == '\x01') {
                *pcVar1 = in_wzr;
              }
              else {
                __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(pcVar1,0);
              }
              if (plVar7[7] != 0) {
                (**(code **)(plVar7[7] + 0x18))(plVar7[8]);
              }
              *(undefined1 *)(plVar7 + 0xc) = 1;
              uStack_160 = uStack_166;
              uStack_15c = uStack_162;
              if ((bStack_167 & 1) == 0) {
                uVar8 = 0;
                uStack_158 = uStack_166;
                uStack_154 = uStack_162;
              }
              else {
                uStack_170 = __ZN3std2io5error5Error3new17h949302c01fe11b24E
                                       (0x28,&UNK_109beb6bb,0x38);
                uVar8 = 2;
                uStack_168 = extraout_w8;
              }
              *puVar6 = uStack_170;
              *(undefined1 *)(puVar6 + 1) = uStack_168;
              *(undefined1 *)((long)puVar6 + 9) = uVar8;
              *(undefined4 *)((long)puVar6 + 10) = uStack_158;
              *(undefined2 *)((long)puVar6 + 0xe) = uStack_154;
              uVar8 = 1;
LAB_100fe8148:
              *(undefined1 *)(plVar7 + 0xd) = uVar8;
              return;
            }
            func_0x000108a07af4(&UNK_10b23ad50);
LAB_100fe81a4:
            func_0x000108a07b10(&UNK_10b23ad50);
          }
          else {
            if (bVar2 != 3) goto LAB_100fe81a4;
            bVar2 = *(byte *)(plVar7 + 0xc);
            if (1 < bVar2) {
              if (bVar2 != 3) {
                func_0x000108a07b10(&UNK_10b23ad68);
                goto LAB_100fe81cc;
              }
              goto LAB_100fe801c;
            }
            if (bVar2 == 0) {
              lVar13 = plVar7[2];
              lVar9 = plVar7[3];
              goto LAB_100fe7ffc;
            }
          }
          func_0x000108a07af4(&UNK_10b23ad68);
LAB_100fe81cc:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe81d0);
          (*pcVar3)();
        }
        lVar13 = *plVar7;
        unaff_x23 = plVar7[1];
        if (lVar13 != 3) goto LAB_100fe7e2c;
        iVar11 = 1;
      }
      else {
        if (bVar2 != 3) {
          func_0x000108a07b10(&UNK_10b23ad20);
          lVar13 = extraout_x8_00;
LAB_100fe7e2c:
          plVar12 = plVar7 + 0x12;
          *plVar12 = lVar13;
          plVar7[0x13] = unaff_x23;
          plVar7[0x1d] = plVar7[0xb];
          plVar7[0x1c] = plVar7[10];
          plVar7[0x1f] = plVar7[0xd];
          plVar7[0x1e] = plVar7[0xc];
          plVar7[0x21] = plVar7[0xf];
          plVar7[0x20] = plVar7[0xe];
          plVar7[0x23] = plVar7[0x11];
          plVar7[0x22] = plVar7[0x10];
          plVar7[0x15] = plVar7[3];
          plVar7[0x14] = plVar7[2];
          plVar7[0x17] = plVar7[5];
          plVar7[0x16] = plVar7[4];
          plVar7[0x19] = plVar7[7];
          plVar7[0x18] = plVar7[6];
          plVar7[0x1b] = plVar7[9];
          plVar7[0x1a] = plVar7[8];
          lStack_f8 = plVar7[0x13];
          uStack_100 = *plVar12;
          lStack_e8 = plVar7[0x15];
          lStack_f0 = plVar7[0x14];
          *plVar12 = 2;
          if (uStack_100 != 2) {
            func_0x000100df6bcc(&uStack_100);
          }
          lStack_f8 = plVar7[0x17];
          uStack_100 = plVar7[0x16];
          lStack_e8 = plVar7[0x19];
          lStack_f0 = plVar7[0x18];
          plVar7[0x16] = 2;
          if (uStack_100 != 2) {
            func_0x000100df6bcc(&uStack_100);
          }
          lStack_f8 = plVar7[0x1b];
          uStack_100 = plVar7[0x1a];
          lStack_e8 = plVar7[0x1d];
          lStack_f0 = plVar7[0x1c];
          plVar7[0x1a] = 2;
          if (uStack_100 != 2) {
            func_0x000100df6bcc(&uStack_100);
          }
          plVar7[0x24] = (long)plVar12;
          *(undefined1 *)(plVar7 + 0x27) = 0;
        }
        FUN_100fe76f8(&uStack_100,plVar7 + 0x24,param_3);
        unaff_x23 = lStack_f8;
        iVar11 = (int)uStack_100;
        if ((int)uStack_100 == 2) {
          *piVar5 = 2;
          uVar8 = 3;
          goto LAB_100fe7f10;
        }
        unaff_w22 = uStack_100._4_4_;
        FUN_100de2564(plVar7 + 0x12);
      }
      *piVar5 = iVar11;
      piVar5[1] = unaff_w22;
      uVar8 = 1;
      *(long *)(piVar5 + 2) = unaff_x23;
LAB_100fe7f10:
      *(undefined1 *)(plVar7 + 0x28) = uVar8;
      return;
    }
    lVar13 = *param_2;
    unaff_x21 = param_2[1];
    if (lVar13 != 3) goto LAB_100fe7cd0;
    param_2[0x12] = 3;
    param_2[0x13] = unaff_x21;
    lStack_98 = -0x8000000000000000;
    lStack_90 = unaff_x21;
  }
  else {
    if (bVar2 != 3) {
      func_0x000108a07b10(&UNK_10b23ad08);
      lVar13 = extraout_x8;
LAB_100fe7cd0:
      param_2[0x12] = lVar13;
      param_2[0x13] = unaff_x21;
      param_2[0x19] = param_2[7];
      param_2[0x18] = param_2[6];
      param_2[0x1b] = param_2[9];
      param_2[0x1a] = param_2[8];
      param_2[0x15] = param_2[3];
      param_2[0x14] = param_2[2];
      param_2[0x17] = param_2[5];
      param_2[0x16] = param_2[4];
      param_2[0x1d] = param_2[0xb];
      param_2[0x1c] = param_2[10];
      param_2[0x1f] = param_2[0xd];
      param_2[0x1e] = param_2[0xc];
      param_2[0x21] = param_2[0xf];
      param_2[0x20] = param_2[0xe];
      param_2[0x23] = param_2[0x11];
      param_2[0x22] = param_2[0x10];
      param_2[0x25] = param_2[0x13];
      param_2[0x24] = param_2[0x12];
      param_2[0x27] = param_2[0x15];
      param_2[0x26] = param_2[0x14];
      param_2[0x29] = param_2[0x17];
      param_2[0x28] = param_2[0x16];
      param_2[0x2b] = param_2[0x19];
      param_2[0x2a] = param_2[0x18];
      param_2[0x33] = param_2[0x21];
      param_2[0x32] = param_2[0x20];
      param_2[0x35] = param_2[0x23];
      param_2[0x34] = param_2[0x22];
      param_2[0x2f] = param_2[0x1d];
      param_2[0x2e] = param_2[0x1c];
      param_2[0x31] = param_2[0x1f];
      param_2[0x30] = param_2[0x1e];
      param_2[0x2d] = param_2[0x1b];
      param_2[0x2c] = param_2[0x1a];
      *(undefined1 *)(param_2 + 0x6b) = 0;
    }
    func_0x000100fe64f0(&lStack_98,param_2 + 0x24);
    if (lStack_98 == -0x7fffffffffffffff) {
      *param_1 = -0x7fffffffffffffff;
      uVar8 = 3;
      goto LAB_100fe7d80;
    }
    lStack_58 = lStack_80;
    lStack_60 = lStack_88;
    lStack_48 = lStack_70;
    lStack_50 = lStack_78;
    lStack_40 = lStack_68;
    FUN_100e676e8(param_2 + 0x24);
  }
  *param_1 = lStack_98;
  param_1[1] = lStack_90;
  param_1[3] = lStack_58;
  param_1[2] = lStack_60;
  param_1[5] = lStack_48;
  param_1[4] = lStack_50;
  param_1[6] = lStack_40;
  uVar8 = 1;
LAB_100fe7d80:
  *(undefined1 *)(param_2 + 0x6c) = uVar8;
  return;
}

