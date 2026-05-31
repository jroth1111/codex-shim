
/* WARNING: Possible PIC construction at 0x000100d2e644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e73c18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100d2e648) */

void FUN_100d38c3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong *puVar14;
  char cVar15;
  long lVar16;
  ulong uVar17;
  ulong *unaff_x19;
  long *plVar18;
  undefined8 unaff_x20;
  ulong uVar19;
  ulong uVar20;
  long unaff_x21;
  ulong uVar21;
  undefined8 *unaff_x22;
  undefined8 *puVar22;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long in_stack_ffffffffffffffc8;
  long in_stack_ffffffffffffffd8;
  
  bVar3 = *(byte *)(param_1 + 0x82);
  if (4 < bVar3) {
    if (bVar3 == 5) {
      if (*(char *)(param_1 + 0x98) == '\x03') {
        if (*(char *)(param_1 + 0x191) == '\x03') {
          if (((*(char *)(param_1 + 0x180) == '\x03') && (*(char *)(param_1 + 0x178) == '\x03')) &&
             (*(char *)(param_1 + 0x130) == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (param_1 + 0x138);
            if (*(long *)(param_1 + 0x140) != 0) {
              (**(code **)(*(long *)(param_1 + 0x140) + 0x18))(*(undefined8 *)(param_1 + 0x148));
            }
          }
          lVar9 = **(long **)(param_1 + 0x108);
          **(long **)(param_1 + 0x108) = lVar9 + -1;
          LORelease();
          if (lVar9 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbc4ddf33f5ab629fE();
          }
          FUN_100d957f0(param_1 + 0xa0);
          lVar16 = *(long *)(param_1 + 0xe0);
          lVar9 = *(long *)(param_1 + 0xe8) + 1;
          lVar23 = lVar16 + 0x10;
          while (lVar9 = lVar9 + -1, lVar9 != 0) {
            func_0x000100e45ab8(lVar23);
            lVar23 = lVar23 + 0x1b0;
          }
          if (*(long *)(param_1 + 0xd8) != 0) {
            _free(lVar16);
          }
          *(undefined1 *)(param_1 + 400) = 0;
        }
        return;
      }
      if (*(char *)(param_1 + 0x98) != '\x04') {
        return;
      }
      FUN_100d612a4(param_1 + 0x410);
      func_0x000100e45ab8(param_1 + 0x270);
      lVar9 = ((ulong)(*(long *)(param_1 + 0x268) - *(long *)(param_1 + 600)) >> 4) *
              -0x7b425ed097b425ed + 1;
      lVar16 = *(long *)(param_1 + 600) + 0x10;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        func_0x000100e45ab8(lVar16);
        lVar16 = lVar16 + 0x1b0;
      }
      if (*(long *)(param_1 + 0x260) == 0) {
        return;
      }
      plVar11 = *(long **)(param_1 + 0x250);
      goto code_r0x000108aa97c4;
    }
    if (bVar3 != 6) {
      return;
    }
    if (*(char *)(param_1 + 0x8098) != '\x03') {
      return;
    }
    puVar14 = (ulong *)(param_1 + 0xc0);
SUB_100d2e5d0:
    puVar7 = &stack0xffffffffffffffe0;
    puVar24 = &stack0xfffffffffffffff0;
    bVar3 = *(byte *)((long)puVar14 + 0x44d);
    if (bVar3 < 7) {
      if (4 < bVar3) {
        if (bVar3 == 5) {
          if (*(char *)((long)puVar14 + 0x6fa) == '\x03') {
            if ((((char)puVar14[0xdd] == '\x03') && ((char)puVar14[0xdc] == '\x03')) &&
               ((char)puVar14[0xd3] == '\x04')) {
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (puVar14 + 0xd4);
              if (puVar14[0xd5] != 0) {
                (**(code **)(puVar14[0xd5] + 0x18))(puVar14[0xd6]);
              }
            }
            if (puVar14[0xce] != 0) {
              FUN_100cd65bc(puVar14 + 0xce);
            }
            *(undefined1 *)((long)puVar14 + 0x6f9) = 0;
            FUN_100ca819c(puVar14 + 0x8c);
            *(undefined1 *)(puVar14 + 0xdf) = 0;
          }
          return;
        }
        if (bVar3 != 6) {
          return;
        }
        if ((char)puVar14[0x90] != '\x04') {
          if ((char)puVar14[0x90] != '\x03') {
            return;
          }
          if (*(char *)((long)puVar14 + 0x529) != '\x03') {
            return;
          }
          if ((char)puVar14[0xa3] != '\x03') {
            return;
          }
          if ((char)puVar14[0xa2] != '\x03') {
            return;
          }
          if ((char)puVar14[0x99] != '\x04') {
            return;
          }
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (puVar14 + 0x9a);
          if (puVar14[0x9b] == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000100d2e6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(puVar14[0x9b] + 0x18))(puVar14[0x9c]);
          return;
        }
        puVar14 = puVar14 + 0x91;
code_r0x000100d51964:
        if (*(char *)((long)puVar14 + 0x103) == '\x03') {
          if ((((char)puVar14[0x1c] == '\x03') && ((char)puVar14[0x1b] == '\x03')) &&
             ((char)puVar14[0x12] == '\x04')) {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (puVar14 + 0x13);
            if (puVar14[0x14] != 0) {
              (**(code **)(puVar14[0x14] + 0x18))(puVar14[0x15]);
            }
          }
          lVar9 = *(long *)puVar14[0xd];
          *(long *)puVar14[0xd] = lVar9 + -1;
          LORelease();
          if (lVar9 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hbc4ddf33f5ab629fE();
          }
          FUN_100d957f0(puVar14);
          if (puVar14[7] != 0) {
            _free(puVar14[8]);
          }
          *(undefined2 *)((long)puVar14 + 0x101) = 0;
        }
        return;
      }
      if (bVar3 == 3) {
        if (*(char *)((long)puVar14 + 0xde2) != '\x03') {
          return;
        }
        if ((char)puVar14[0x1ad] == '\x03') {
          FUN_100d7ee48(puVar14 + 0x8e);
        }
        uVar17 = puVar14[0x1b3];
        if (uVar17 != 0x8000000000000001) {
          if ((uVar17 != 0x8000000000000000) && (uVar17 != 0)) {
            _free(puVar14[0x1b4]);
          }
          if ((puVar14[0x1b6] != 0x8000000000000000) && (puVar14[0x1b6] != 0)) {
            _free(puVar14[0x1b7]);
          }
        }
        *(undefined1 *)((long)puVar14 + 0xde1) = 0;
        return;
      }
      if (bVar3 != 4) {
        return;
      }
      bVar3 = *(byte *)((long)puVar14 + 0x85b);
      if (bVar3 < 5) {
        if (bVar3 == 3) {
          puVar10 = puVar14 + 0x10c;
          puVar7 = (undefined1 *)register0x00000008;
          puVar14 = unaff_x19;
          puVar24 = unaff_x29;
          goto SUB_100cc5f74;
        }
        if (bVar3 != 4) {
          return;
        }
        if ((char)puVar14[0x22f] == '\x03') {
          FUN_100d7ee48(puVar14 + 0x110);
        }
      }
      else {
        if (bVar3 != 5) {
          if (bVar3 != 6) {
            if (bVar3 == 7) {
              if ((((char)puVar14[0x11e] == '\x03') && ((char)puVar14[0x11d] == '\x03')) &&
                 ((char)puVar14[0x114] == '\x04')) {
                __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                          (puVar14 + 0x115);
                if (puVar14[0x116] != 0) {
                  (**(code **)(puVar14[0x116] + 0x18))(puVar14[0x117]);
                }
              }
              uVar21 = puVar14[0x10e];
              lVar9 = puVar14[0x10f] + 1;
              uVar17 = uVar21;
              while (lVar9 = lVar9 + -1, lVar9 != 0) {
                FUN_100e4623c(uVar17);
                uVar17 = uVar17 + 0xa0;
              }
              if (puVar14[0x10d] != 0) {
                _free(uVar21);
              }
              *(undefined1 *)(puVar14 + 0x10b) = 0;
              FUN_100e1d37c(puVar14 + 0x11f);
              *(undefined1 *)((long)puVar14 + 0x859) = 0;
            }
            return;
          }
          if (*(char *)((long)puVar14 + 0xe52) == '\x03') {
            FUN_100e7b314(puVar14 + 0x14e);
            FUN_100e1d37c(puVar14 + 0x18c);
            *(undefined2 *)(puVar14 + 0x1ca) = 0;
          }
          uVar21 = puVar14[0x14c];
          lVar9 = puVar14[0x14d] + 1;
          uVar17 = uVar21;
          while (lVar9 = lVar9 + -1, lVar9 != 0) {
            FUN_100e4623c(uVar17);
            uVar17 = uVar17 + 0xa0;
          }
          if (puVar14[0x14b] != 0) {
            _free(uVar21);
          }
          FUN_100e4affc(puVar14 + 0x10c);
          goto LAB_100d59b38;
        }
        if ((char)puVar14[0x230] == '\x03') {
          FUN_100d7ee48(puVar14 + 0x111);
        }
        (*(code *)**(undefined8 **)puVar14[0x10c])();
      }
      *(undefined1 *)((long)puVar14 + 0x85a) = 0;
LAB_100d59b38:
                    /* WARNING: Could not recover jumptable at 0x000100d59b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)puVar14[0xc9])();
      return;
    }
    if (8 < bVar3) {
      if (bVar3 == 9) {
        FUN_100d38d8c(puVar14 + 0x8a);
      }
      else {
        if (bVar3 != 10) {
          return;
        }
        FUN_100d51964(puVar14 + 0x8a);
      }
LAB_100d2e77c:
      if ((*(byte *)((long)puVar14 + 1099) & 1) != 0) {
        FUN_100e2e5ec(puVar14 + 7);
      }
      *(undefined1 *)((long)puVar14 + 1099) = 0;
      if ((*(byte *)((long)puVar14 + 0x44c) & 1) != 0) {
        FUN_100cd65bc(puVar14 + 0x8a);
      }
      *(undefined1 *)((long)puVar14 + 0x44c) = 0;
      return;
    }
    if (bVar3 == 7) {
      if (*(char *)((long)puVar14 + 0x4f9) == '\x03') {
        if ((((char)puVar14[0x9d] == '\x03') && ((char)puVar14[0x9c] == '\x03')) &&
           ((char)puVar14[0x93] == '\x04')) {
          __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                    (puVar14 + 0x94);
          if (puVar14[0x95] != 0) {
            (**(code **)(puVar14[0x95] + 0x18))(puVar14[0x96]);
          }
        }
        FUN_100cd65bc(puVar14 + 0x8e);
        *(undefined1 *)(puVar14 + 0x9f) = 0;
      }
      return;
    }
    if (bVar3 != 8) {
      return;
    }
    if ((char)puVar14[0xcd] == '\x04') {
      FUN_100d4f32c(puVar14 + 0xce);
      goto LAB_100d2e77c;
    }
    if ((char)puVar14[0xcd] != '\x03') goto LAB_100d2e77c;
    puVar10 = puVar14 + 0xce;
    unaff_x30 = 0x100d2e648;
SUB_100cc5f74:
    *(undefined8 **)(puVar7 + -0x30) = unaff_x22;
    *(long *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 *)(puVar7 + -0x20) = unaff_x20;
    *(ulong **)(puVar7 + -0x18) = puVar14;
    *(undefined1 **)(puVar7 + -0x10) = puVar24;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    bVar3 = (byte)puVar10[0x9b5];
    if (bVar3 < 4) {
      if (bVar3 != 0) {
        if (bVar3 != 3) {
          return;
        }
        FUN_100d7ee48(puVar10 + 0x9b6);
        goto LAB_100cc607c;
      }
    }
    else {
      if (bVar3 == 4) {
        if (((char)puVar10[0xadd] == '\x03') && ((char)puVar10[0xadc] == '\x03')) {
          FUN_100d7ee48(puVar10 + 0x9bd);
        }
      }
      else {
        if (bVar3 != 5) {
          return;
        }
        if (*(char *)((long)puVar10 + 0x7771) == '\x03') {
          if (*(char *)((long)puVar10 + 0x7769) == '\x03') {
            FUN_100cef81c(puVar10 + 0xa6f);
            *(undefined1 *)(puVar10 + 0xeed) = 0;
          }
          lVar9 = 0x5098;
LAB_100cc6040:
          FUN_100e61180((long)puVar10 + lVar9);
        }
        else if (*(char *)((long)puVar10 + 0x7771) == '\0') {
          lVar9 = 0x4db0;
          goto LAB_100cc6040;
        }
        if ((puVar10[0x9b2] != 0x8000000000000000) && (puVar10[0x9b2] != 0)) {
          _free(puVar10[0x9b3]);
        }
      }
      *(undefined1 *)((long)puVar10 + 0x4daa) = 0;
      if ((*(byte *)((long)puVar10 + 0x4da9) & 1) != 0) {
        FUN_100e61180(puVar10 + 0x956);
      }
LAB_100cc607c:
      *(undefined1 *)((long)puVar10 + 0x4da9) = 0;
      *(undefined1 *)((long)puVar10 + 0x4dab) = 0;
      puVar10 = puVar10 + 0x4ad;
    }
    *(undefined8 *)(puVar7 + -0x40) = unaff_x24;
    *(long *)(puVar7 + -0x38) = unaff_x23;
    *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
    *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
    *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    FUN_100e05b5c();
    uVar21 = puVar10[0x36e];
    uVar17 = puVar10[0x36f];
    if (uVar17 != 0) {
      puVar22 = (undefined8 *)(uVar21 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar10[0x36d] != 0) {
      _free(uVar21);
    }
    if (puVar10[0x3d4] == 0x8000000000000000 || puVar10[0x3d4] == 0) {
      uVar17 = puVar10[0x3d7];
    }
    else {
      _free(puVar10[0x3d5]);
      uVar17 = puVar10[0x3d7];
    }
    if ((uVar17 != 0x8000000000000000) && (uVar17 != 0)) {
      _free(puVar10[0x3d8]);
    }
    if ((puVar10[0x3da] != 0x8000000000000000) && (puVar10[0x3da] != 0)) {
      _free(puVar10[0x3db]);
    }
    if (puVar10[0x370] != 0) {
      _free(puVar10[0x371]);
    }
    FUN_100e1ccd8(puVar10 + 0x130);
    FUN_100df5514(puVar10 + 0x186);
    uVar21 = puVar10[0x374];
    uVar17 = puVar10[0x375];
    if (uVar17 != 0) {
      puVar22 = (undefined8 *)(uVar21 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar10[0x373] != 0) {
      _free(uVar21);
    }
    lVar9 = *(long *)puVar10[0x47c];
    *(long *)puVar10[0x47c] = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000102a3fc54(puVar10 + 0x47c);
    }
    plVar11 = (long *)puVar10[0x47e];
    if (plVar11 != (long *)0x0) {
      lVar9 = *plVar11;
      *plVar11 = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000102a3fc54(puVar10 + 0x47e);
      }
    }
    if ((puVar10[0x3dd] != 0x8000000000000000) && (puVar10[0x3dd] != 0)) {
      _free(puVar10[0x3de]);
    }
    if ((puVar10[0x3e0] != 0x8000000000000000) && (puVar10[0x3e0] != 0)) {
      _free(puVar10[0x3e1]);
    }
    if ((puVar10[0x3e3] != 0x8000000000000000) && (puVar10[0x3e3] != 0)) {
      _free(puVar10[0x3e4]);
    }
    if ((puVar10[0x3e6] != 0x8000000000000000) && (puVar10[0x3e6] != 0)) {
      _free(puVar10[999]);
    }
    if ((puVar10[0x3e9] != 0x8000000000000000) && (puVar10[0x3e9] != 0)) {
      _free(puVar10[0x3ea]);
    }
    uVar17 = puVar10[0x3ec];
    if (uVar17 != 0x8000000000000000) {
      uVar19 = puVar10[0x3ed];
      uVar21 = puVar10[0x3ee];
      if (uVar21 != 0) {
        puVar22 = (undefined8 *)(uVar19 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar19);
      }
    }
    uVar17 = puVar10[0x3ef];
    if (uVar17 != 0x8000000000000000) {
      uVar19 = puVar10[0x3f0];
      uVar21 = puVar10[0x3f1];
      if (uVar21 != 0) {
        puVar22 = (undefined8 *)(uVar19 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar19);
      }
    }
    uVar17 = puVar10[0x487];
    if (uVar17 != 0) {
      uVar21 = puVar10[0x489];
      if (uVar21 != 0) {
        plVar11 = (long *)puVar10[0x486];
        plVar12 = plVar11 + 1;
        lVar9 = *plVar11;
        uVar19 = CONCAT17(-(-1 < lVar9),
                          CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar9 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar9 >> 8)),-(-1 < (char)lVar9)))))))) &
                 0x8080808080808080;
        do {
          while (uVar19 == 0) {
            lVar9 = *plVar12;
            plVar11 = plVar11 + -0x20;
            plVar12 = plVar12 + 1;
            uVar19 = CONCAT17(-(-1 < lVar9),
                              CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar9 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar9 >> 8)),
                                                           -(-1 < (char)lVar9)))))))) &
                     0x8080808080808080;
          }
          uVar20 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          uVar20 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) & 0x78;
          if (*(long *)((long)plVar11 + uVar20 * -4 + -0x20) != 0) {
            _free(*(undefined8 *)((long)plVar11 + uVar20 * -4 + -0x18));
          }
          uVar19 = uVar19 - 1 & uVar19;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 * 0x21 != -0x29) {
        _free(puVar10[0x486] + uVar17 * -0x20 + -0x20);
      }
    }
    uVar17 = puVar10[0x3f3];
    if (uVar17 != 0x8000000000000000) {
      uVar19 = puVar10[0x3f4];
      uVar21 = puVar10[0x3f5];
      if (uVar21 != 0) {
        puVar22 = (undefined8 *)(uVar19 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar19);
      }
    }
    uVar17 = puVar10[0x3f6];
    if (uVar17 != 0x8000000000000000) {
      uVar19 = puVar10[0x3f7];
      uVar21 = puVar10[0x3f8];
      if (uVar21 != 0) {
        puVar22 = (undefined8 *)(uVar19 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar19);
      }
    }
    if (puVar10[0x3f9] == 0x8000000000000000 || puVar10[0x3f9] == 0) {
      uVar17 = puVar10[0x3fc];
    }
    else {
      _free(puVar10[0x3fa]);
      uVar17 = puVar10[0x3fc];
    }
    if ((uVar17 != 0x8000000000000000) && (uVar17 != 0)) {
      _free(puVar10[0x3fd]);
    }
    FUN_100e0bbc0(puVar10 + 0x1e9);
    FUN_100e0ba70(puVar10 + 0x211);
    FUN_100e18a28(puVar10 + 0x21d);
    FUN_100e127ac(puVar10 + 0x231);
    FUN_100e1bc08(puVar10 + 0x275);
    FUN_100e2093c(puVar10 + 0x2cd);
    FUN_100e0bbc0(puVar10 + 0x2fd);
    FUN_100e0bbc0(puVar10 + 0x325);
    FUN_100e186f8(puVar10 + 0x34d);
    if (puVar10[0x376] != 0) {
      _free(puVar10[0x377]);
    }
    uVar21 = puVar10[0x37a];
    uVar17 = puVar10[0x37b];
    if (uVar17 != 0) {
      puVar22 = (undefined8 *)(uVar21 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar10[0x379] != 0) {
      _free(uVar21);
    }
    FUN_100cf8c18(puVar10 + 0x48c);
    lVar9 = *(long *)puVar10[0x492];
    *(long *)puVar10[0x492] = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(puVar10 + 0x492);
    }
    plVar11 = (long *)puVar10[0x494];
    if (plVar11 != (long *)0x0) {
      lVar9 = *plVar11;
      *plVar11 = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hdb6aef29e0ecda98E(puVar10 + 0x494);
      }
    }
    if ((puVar10[0x3ff] != 0x8000000000000000) && (puVar10[0x3ff] != 0)) {
      _free(puVar10[0x400]);
    }
    FUN_100d04a7c(puVar10 + 0x496);
    uVar21 = puVar10[0x37d];
    uVar17 = puVar10[0x37e];
    if (uVar17 != 0) {
      puVar22 = (undefined8 *)(uVar21 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar10[0x37c] != 0) {
      _free(uVar21);
    }
    uVar17 = puVar10[0x49d];
    if (uVar17 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = puVar10[0x49f];
      uVar19 = puVar10[0x49e];
      *(undefined8 *)(puVar7 + -0x98) = 0;
      *(ulong *)(puVar7 + -0x90) = uVar17;
      *(ulong *)(puVar7 + -0x88) = uVar19;
      *(undefined8 *)(puVar7 + -0x78) = 0;
      *(ulong *)(puVar7 + -0x70) = uVar17;
      *(ulong *)(puVar7 + -0x68) = uVar19;
    }
    uVar17 = (ulong)(uVar17 != 0);
    *(ulong *)(puVar7 + -0xa0) = uVar17;
    *(ulong *)(puVar7 + -0x80) = uVar17;
    *(ulong *)(puVar7 + -0x60) = uVar21;
    while( true ) {
      FUN_100f3b678(puVar7 + -0x58,puVar7 + -0xa0);
      lVar9 = *(long *)(puVar7 + -0x58);
      if (lVar9 == 0) break;
      lVar23 = *(long *)(puVar7 + -0x48);
      lVar16 = lVar9 + lVar23 * 0x18;
      if (*(long *)(lVar16 + 8) != 0) {
        _free(*(undefined8 *)(lVar16 + 0x10));
      }
      FUN_100dff5f8(lVar9 + lVar23 * 0x48 + 0x110);
    }
    if (puVar10[0x402] == 0x8000000000000000 || puVar10[0x402] == 0) {
      if (puVar10[0x405] != 0x8000000000000000 && puVar10[0x405] != 0) goto LAB_100de9dc8;
LAB_100de9a08:
      uVar17 = puVar10[0x37f];
    }
    else {
      _free(puVar10[0x403]);
      if (puVar10[0x405] == 0x8000000000000000 || puVar10[0x405] == 0) goto LAB_100de9a08;
LAB_100de9dc8:
      _free(puVar10[0x406]);
      uVar17 = puVar10[0x37f];
    }
    if (uVar17 != 0) {
      _free(puVar10[0x380]);
    }
    if (puVar10[0x382] != 0) {
      _free(puVar10[899]);
    }
    if (puVar10[0x385] != 0) {
      _free(puVar10[0x386]);
    }
    if ((puVar10[0x40f] & 0x7fffffffffffffff) == 0) {
      plVar11 = (long *)puVar10[0x4a0];
    }
    else {
      _free(puVar10[0x410]);
      plVar11 = (long *)puVar10[0x4a0];
    }
    if (plVar11 != (long *)0x0) {
      lVar9 = *plVar11;
      *plVar11 = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hf037e8b028e32f13E(puVar10 + 0x4a0);
      }
    }
    if ((puVar10[0x412] != 0x8000000000000000) && (puVar10[0x412] != 0)) {
      _free(puVar10[0x413]);
    }
    if ((puVar10[0x415] != 0x8000000000000000) && (puVar10[0x415] != 0)) {
      _free(puVar10[0x416]);
    }
    if ((puVar10[0x418] != 0x8000000000000000) && (puVar10[0x418] != 0)) {
      _free(puVar10[0x419]);
    }
    if ((puVar10[0x41b] != 0x8000000000000000) && (puVar10[0x41b] != 0)) {
      _free(puVar10[0x41c]);
    }
    uVar17 = puVar10[0x41e];
    if (uVar17 != 0x8000000000000000) {
      uVar20 = puVar10[0x41f];
      uVar21 = uVar20;
      for (uVar19 = puVar10[0x420]; uVar19 != 0; uVar19 = uVar19 - 1) {
        FUN_100e0f5d0(uVar21);
        uVar21 = uVar21 + 0x1f8;
      }
      if (uVar17 != 0) {
        _free(uVar20);
      }
    }
    if (puVar10[0x388] != 0) {
      _free(puVar10[0x389]);
    }
    if ((puVar10[0x421] != 0x8000000000000000) && (puVar10[0x421] != 0)) {
      _free(puVar10[0x422]);
    }
    if ((puVar10[0x424] != 0x8000000000000000) && (puVar10[0x424] != 0)) {
      _free(puVar10[0x425]);
    }
    if ((puVar10[0x427] != 0x8000000000000000) && (puVar10[0x427] != 0)) {
      _free(puVar10[0x428]);
    }
    if ((puVar10[0x42a] != 0x8000000000000000) && (puVar10[0x42a] != 0)) {
      _free(puVar10[0x42b]);
    }
    if ((puVar10[0x42d] != 0x8000000000000000) && (puVar10[0x42d] != 0)) {
      _free(puVar10[0x42e]);
    }
    if ((puVar10[0x430] != 0x8000000000000000) && (puVar10[0x430] != 0)) {
      _free(puVar10[0x431]);
    }
    if ((puVar10[0x433] != 0x8000000000000000) && (puVar10[0x433] != 0)) {
      _free(puVar10[0x434]);
    }
    if ((puVar10[0x436] != 0x8000000000000000) && (puVar10[0x436] != 0)) {
      _free(puVar10[0x437]);
    }
    if ((puVar10[0x439] != 0x8000000000000000) && (puVar10[0x439] != 0)) {
      _free(puVar10[0x43a]);
    }
    if ((puVar10[0x43c] != 0x8000000000000000) && (puVar10[0x43c] != 0)) {
      _free(puVar10[0x43d]);
    }
    if ((puVar10[0x43f] & 0x7fffffffffffffff) == 0) {
      uVar17 = puVar10[0x442];
    }
    else {
      _free(puVar10[0x440]);
      uVar17 = puVar10[0x442];
    }
    if (uVar17 != 0x8000000000000000) {
      uVar19 = puVar10[0x443];
      uVar21 = puVar10[0x444];
      if (uVar21 != 0) {
        puVar22 = (undefined8 *)(uVar19 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar19);
      }
    }
    lVar9 = *(long *)puVar10[0x481];
    *(long *)puVar10[0x481] = lVar9 + -1;
    LORelease();
    if (lVar9 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000102a3fc54(puVar10 + 0x481);
    }
    plVar11 = (long *)puVar10[0x483];
    if (plVar11 != (long *)0x0) {
      lVar9 = *plVar11;
      *plVar11 = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000102a3fc54(puVar10 + 0x483);
      }
    }
    FUN_100e78c9c(puVar10 + 0x459);
    if ((puVar10[0x445] != 0x8000000000000000) && (puVar10[0x445] != 0)) {
      _free(puVar10[0x446]);
    }
    if ((puVar10[0x448] != 0x8000000000000000) && (puVar10[0x448] != 0)) {
      _free(puVar10[0x449]);
    }
    if ((puVar10[1099] != 0x8000000000000000) && (puVar10[1099] != 0)) {
      _free(puVar10[0x44c]);
    }
    if ((puVar10[0x44e] != 0x8000000000000000) && (puVar10[0x44e] != 0)) {
      _free(puVar10[0x44f]);
    }
    FUN_100e68ba8(puVar10 + 0x46f);
    uVar17 = puVar10[0x469];
    if (uVar17 != 0x8000000000000006) {
      uVar21 = uVar17 ^ 0x8000000000000000;
      if (-1 < (long)uVar17) {
        uVar21 = 1;
      }
      if (uVar21 == 1) {
        if (uVar17 != 0) {
          _free(puVar10[0x46a]);
        }
        if (puVar10[0x46c] != 0) {
          lVar9 = 0x20;
          goto LAB_100de9df4;
        }
      }
      else if (((uVar21 == 3) || (uVar21 == 4)) && (puVar10[0x46a] != 0)) {
        lVar9 = 0x10;
LAB_100de9df4:
        _free(*(undefined8 *)((long)(puVar10 + 0x469) + lVar9));
      }
    }
    FUN_100e8831c(puVar10 + 0x479);
    if ((puVar10[0x456] != 0x8000000000000000) && (puVar10[0x456] != 0)) {
      _free(puVar10[0x457]);
    }
    FUN_100decb54(puVar10 + 0x179);
    uVar21 = puVar10[0x38c];
    uVar17 = puVar10[0x38d];
    if (uVar17 != 0) {
      puVar22 = (undefined8 *)(uVar21 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar10[0x38b] != 0) {
      _free(uVar21);
    }
    uVar21 = puVar10[0x38f];
    uVar17 = puVar10[0x390];
    if (uVar17 != 0) {
      puVar22 = (undefined8 *)(uVar21 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar10[0x38e] != 0) {
      _free(uVar21);
    }
    uVar1 = *(undefined8 *)(puVar7 + -0x40);
    uVar2 = *(undefined8 *)(puVar7 + -0x38);
    *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
    *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
    *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    if (puVar10[0x391] != 0) {
      _free(puVar10[0x392]);
    }
    FUN_100e05ca4(puVar10 + 0x394);
    FUN_100e05ca4(puVar10 + 0x3a7);
    FUN_100e05ca4(puVar10 + 0x3ba);
    uVar17 = puVar10[0x3cd];
    if (uVar17 == 0) {
      uVar21 = 0;
    }
    else {
      uVar19 = puVar10[0x3ce];
      uVar21 = puVar10[0x3cf];
      *(undefined8 *)(puVar7 + -0x88) = 0;
      *(ulong *)(puVar7 + -0x80) = uVar17;
      *(ulong *)(puVar7 + -0x78) = uVar19;
      *(undefined8 *)(puVar7 + -0x68) = 0;
      *(ulong *)(puVar7 + -0x60) = uVar17;
      *(ulong *)(puVar7 + -0x58) = uVar19;
    }
    uVar17 = (ulong)(uVar17 != 0);
    *(ulong *)(puVar7 + -0x90) = uVar17;
    *(ulong *)(puVar7 + -0x70) = uVar17;
    *(ulong *)(puVar7 + -0x50) = uVar21;
    while( true ) {
      FUN_100f3a3c8(puVar7 + -0x48,puVar7 + -0x90);
      if (*(long *)(puVar7 + -0x48) == 0) break;
      lVar9 = *(long *)(puVar7 + -0x48) + *(long *)(puVar7 + -0x38) * 0x18;
      if (*(long *)(lVar9 + 8) != 0) {
        _free(*(undefined8 *)(lVar9 + 0x10));
      }
      if (*(long *)(lVar9 + 0x110) != 0) {
        _free(*(undefined8 *)(lVar9 + 0x118));
      }
    }
    *(undefined8 *)(puVar7 + -0x60) = unaff_x28;
    *(undefined8 *)(puVar7 + -0x58) = unaff_x27;
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(undefined8 *)(puVar7 + -0x48) = unaff_x25;
    *(undefined8 *)(puVar7 + -0x40) = uVar1;
    *(undefined8 *)(puVar7 + -0x38) = uVar2;
    *(undefined8 *)(puVar7 + -0x30) = *(undefined8 *)(puVar7 + -0x30);
    *(undefined8 *)(puVar7 + -0x28) = *(undefined8 *)(puVar7 + -0x28);
    *(undefined8 *)(puVar7 + -0x20) = *(undefined8 *)(puVar7 + -0x20);
    *(undefined8 *)(puVar7 + -0x18) = *(undefined8 *)(puVar7 + -0x18);
    *(undefined8 *)(puVar7 + -0x10) = *(undefined8 *)(puVar7 + -0x10);
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
    plVar12 = (long *)puVar10[0x3d0];
    uVar17 = puVar10[0x3d1];
    bVar8 = plVar12 != (long *)0x0;
    uVar21 = puVar10[0x3d2];
    if (plVar12 == (long *)0x0 || uVar21 == 0) {
      plVar11 = plVar12;
      if (plVar12 == (long *)0x0) {
        return;
      }
joined_r0x000100d856f8:
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        plVar11 = (long *)plVar11[0x44];
      }
    }
    else {
      plVar11 = (long *)0x0;
      do {
        if (!bVar8) {
          func_0x000108a07a20(&UNK_10b2382e0);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100d8578c);
          (*pcVar6)();
        }
        if (plVar11 == (long *)0x0) {
          for (; plVar11 = plVar12, uVar17 != 0; uVar17 = uVar17 - 1) {
            plVar12 = (long *)plVar11[0x44];
          }
          plVar12 = (long *)0x0;
          uVar17 = 0;
          if (*(short *)((long)plVar11 + 0x21a) == 0) goto LAB_100d8554c;
        }
        else if (*(ushort *)((long)plVar11 + 0x21a) <= uVar17) {
LAB_100d8554c:
          do {
            plVar18 = (long *)*plVar11;
            if (plVar18 == (long *)0x0) {
              _free(plVar11);
              func_0x000108a07a20(&UNK_10b2382b0);
LAB_100d85778:
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100d8577c);
              (*pcVar6)();
            }
            plVar12 = (long *)((long)plVar12 + 1);
            uVar4 = *(ushort *)(plVar11 + 0x43);
            uVar17 = (ulong)uVar4;
            _free(plVar11);
            plVar11 = plVar18;
          } while (*(ushort *)((long)plVar18 + 0x21a) <= uVar4);
        }
        if (plVar12 == (long *)0x0) {
          plVar12 = plVar11 + uVar17 * 3 + 1;
          lVar9 = *plVar12;
          uVar17 = uVar17 + 1;
        }
        else {
          plVar18 = plVar11 + uVar17 + 1;
          do {
            plVar18 = (long *)plVar18[0x44];
            plVar12 = (long *)((long)plVar12 + -1);
          } while (plVar12 != (long *)0x0);
          plVar12 = plVar11 + uVar17 * 3 + 1;
          lVar9 = *plVar12;
          uVar17 = 0;
          plVar11 = plVar18;
        }
        if (lVar9 != 0) {
          _free(plVar12[1]);
        }
        plVar18 = (long *)plVar12[0x21];
        if (plVar18 != (long *)0x0) {
          uVar19 = plVar12[0x22];
          lVar9 = plVar12[0x23];
          plVar12 = plVar18;
          if (lVar9 == 0) {
            for (; uVar19 != 0; uVar19 = uVar19 - 1) {
              plVar12 = (long *)plVar12[0x44];
            }
          }
          else {
            plVar12 = (long *)0x0;
            do {
              if (plVar12 == (long *)0x0) {
                for (; plVar12 = plVar18, uVar19 != 0; uVar19 = uVar19 - 1) {
                  plVar18 = (long *)plVar12[0x44];
                }
                plVar18 = (long *)0x0;
                uVar19 = 0;
                if (*(short *)((long)plVar12 + 0x21a) == 0) goto LAB_100d85614;
              }
              else if (*(ushort *)((long)plVar12 + 0x21a) <= uVar19) {
LAB_100d85614:
                do {
                  plVar13 = (long *)*plVar12;
                  if (plVar13 == (long *)0x0) {
                    _free();
                    func_0x000108a07a20(&UNK_10b2382b0);
                    goto LAB_100d85778;
                  }
                  plVar18 = (long *)((long)plVar18 + 1);
                  uVar4 = *(ushort *)(plVar12 + 0x43);
                  uVar19 = (ulong)uVar4;
                  _free();
                  plVar12 = plVar13;
                } while (*(ushort *)((long)plVar13 + 0x21a) <= uVar4);
              }
              if (plVar18 == (long *)0x0) {
                plVar18 = plVar12 + uVar19 * 3 + 1;
                lVar16 = *plVar18;
                uVar19 = uVar19 + 1;
              }
              else {
                plVar13 = plVar12 + uVar19 + 1;
                do {
                  plVar13 = (long *)plVar13[0x44];
                  plVar18 = (long *)((long)plVar18 + -1);
                } while (plVar18 != (long *)0x0);
                plVar18 = plVar12 + uVar19 * 3 + 1;
                lVar16 = *plVar18;
                uVar19 = 0;
                plVar12 = plVar13;
              }
              if (lVar16 != 0) {
                _free(plVar18[1]);
              }
              if (plVar18[0x21] != 0) {
                _free(plVar18[0x22]);
              }
              plVar18 = (long *)0x0;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
          }
          plVar18 = (long *)*plVar12;
          while (plVar13 = plVar18, plVar13 != (long *)0x0) {
            _free(plVar12);
            plVar12 = plVar13;
            plVar18 = (long *)*plVar13;
          }
          _free(plVar12);
        }
        plVar12 = (long *)0x0;
        bVar8 = true;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
      if (plVar11 == (long *)0x0) goto joined_r0x000100d856f8;
    }
    plVar12 = (long *)*plVar11;
    while (plVar18 = plVar12, plVar18 != (long *)0x0) {
      _free(plVar11);
      plVar11 = plVar18;
      plVar12 = (long *)*plVar18;
    }
    goto code_r0x000108aa97c4;
  }
  if (bVar3 == 3) {
    puVar14 = (ulong *)(param_1 + 0x88);
    goto SUB_100d2e5d0;
  }
  if (bVar3 != 4) {
    return;
  }
  cVar15 = *(char *)(param_1 + 200);
  if (cVar15 == '\x05') {
    if (*(char *)(param_1 + 0x100) == '\x03') {
      if (*(char *)(param_1 + 0x118) != '\x04') {
        if (*(char *)(param_1 + 0x118) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x1c1) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x1b0) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x1a8) != '\x03') {
          return;
        }
        if (*(char *)(param_1 + 0x160) != '\x04') {
          return;
        }
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x168);
        if (*(long *)(param_1 + 0x170) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000100d1ba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(param_1 + 0x170) + 0x18))(*(undefined8 *)(param_1 + 0x178));
        return;
      }
      puVar14 = (ulong *)(param_1 + 0x120);
    }
    else {
      if (*(char *)(param_1 + 0x100) != '\x04') {
        return;
      }
      puVar14 = (ulong *)(param_1 + 0x108);
    }
    goto code_r0x000100d51964;
  }
  if (cVar15 != '\x04') {
    if (cVar15 != '\x03') {
      return;
    }
    cVar15 = *(char *)(param_1 + 0x120);
    if (cVar15 == '\x03') {
      if ((((*(char *)(param_1 + 0x1c8) == '\x03') && (*(char *)(param_1 + 0x1c0) == '\x03')) &&
          (*(char *)(param_1 + 0x1b8) == '\x03')) && (*(char *)(param_1 + 0x170) == '\x04')) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (param_1 + 0x178);
        if (*(long *)(param_1 + 0x180) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100d0a020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(param_1 + 0x180) + 0x18))(*(undefined8 *)(param_1 + 0x188));
          return;
        }
      }
      return;
    }
    if (cVar15 == '\x04') {
      if (*(char *)(param_1 + 0xa58) == '\x03') {
        FUN_100d7ee48(param_1 + 0x168);
        *(undefined1 *)(param_1 + 0xa59) = 0;
        return;
      }
      if (*(char *)(param_1 + 0xa58) != '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x128) == 0) {
        return;
      }
      plVar11 = *(long **)(param_1 + 0x130);
    }
    else {
      if (cVar15 != '\x05') {
        return;
      }
      if (*(char *)(param_1 + 0xa78) != '\x03') {
        return;
      }
      if (*(char *)(param_1 + 0xa70) == '\x03') {
        FUN_100d7ee48(param_1 + 0x180);
        *(undefined1 *)(param_1 + 0xa71) = 0;
        return;
      }
      if (*(char *)(param_1 + 0xa70) != '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x140) == 0) {
        return;
      }
      plVar11 = *(long **)(param_1 + 0x148);
    }
    goto code_r0x000108aa97c4;
  }
  if (*(char *)(param_1 + 0x9e8) != '\x03') {
    return;
  }
  puVar14 = (ulong *)(param_1 + 0xf8);
  cVar15 = *(char *)(param_1 + 0x2c0);
  if (cVar15 != '\0') {
    if (cVar15 == '\x03') {
      cVar15 = *(char *)(param_1 + 0x9e0);
      if (cVar15 == '\x03') {
        FUN_100cbc1e8(param_1 + 0x668);
        goto LAB_100d7eeb8;
      }
    }
    else {
      if (cVar15 != '\x04') {
        return;
      }
      cVar15 = *(char *)(param_1 + 0x9e0);
      if (cVar15 == '\x03') {
        FUN_100cbc1e8(param_1 + 0x668);
LAB_100d7eeb8:
        if (*(long *)(param_1 + 0x650) != 0) {
          _free(*(undefined8 *)(param_1 + 0x658));
        }
        *(undefined2 *)(param_1 + 0x9e1) = 0;
        return;
      }
    }
    if (cVar15 != '\0') {
      return;
    }
    puVar14 = (ulong *)(param_1 + 0x2c8);
  }
  uVar17 = *puVar14 ^ 0x8000000000000000;
  if (-1 < (long)*puVar14) {
    uVar17 = 0x37;
  }
  switch(uVar17) {
  case 0:
    if (puVar14[0xe] != 0x8000000000000000 && puVar14[0xe] != 0) {
      _free(puVar14[0xf]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
      uVar17 = puVar14[4];
    }
    else {
      _free(puVar14[8]);
      uVar17 = puVar14[4];
    }
    if (uVar17 != 0) {
      _free(puVar14[5]);
    }
    uVar17 = puVar14[10];
    if (-0x7fffffffffffffff < (long)uVar17) {
      plVar11 = (long *)puVar14[0xb];
      uVar21 = puVar14[0xc];
      if (uVar21 != 0) {
        plVar12 = plVar11 + 1;
        do {
          if (plVar12[-1] != 0) {
            _free(*plVar12);
          }
          plVar12 = plVar12 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) break;
    }
    return;
  case 1:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      if (puVar14[7] != 0x8000000000000000 && puVar14[7] != 0) goto LAB_100e5d6b0;
LAB_100e5d600:
      if (-0x7fffffffffffffff < (long)puVar14[0x25] && puVar14[0x25] != 0) goto LAB_100e5d6d0;
LAB_100e5d618:
      uVar17 = puVar14[10];
    }
    else {
      _free(puVar14[5]);
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) goto LAB_100e5d600;
LAB_100e5d6b0:
      _free(puVar14[8]);
      if ((long)puVar14[0x25] < -0x7ffffffffffffffe || puVar14[0x25] == 0) goto LAB_100e5d618;
LAB_100e5d6d0:
      _free(puVar14[0x26]);
      uVar17 = puVar14[10];
    }
    if ((uVar17 != 0x8000000000000000) && (uVar17 != 0)) {
      _free(puVar14[0xb]);
    }
    uVar17 = puVar14[0xd];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[0xe];
      uVar19 = puVar14[0xf];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if (puVar14[0x10] == 0x8000000000000000 || puVar14[0x10] == 0) {
      uVar17 = puVar14[0x28];
    }
    else {
      _free(puVar14[0x11]);
      uVar17 = puVar14[0x28];
    }
    if (uVar17 != 0) {
      FUN_100cc2fb4(puVar14 + 0x28);
    }
    if ((puVar14[0x13] != 0x8000000000000000) && (puVar14[0x13] != 0)) {
      _free(puVar14[0x14]);
    }
    if ((puVar14[0x16] != 0x8000000000000000) && (puVar14[0x16] != 0)) {
      _free(puVar14[0x17]);
    }
    if ((puVar14[0x19] != 0x8000000000000000) && (puVar14[0x19] != 0)) {
      _free(puVar14[0x1a]);
    }
    uVar17 = puVar14[0x1c];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[0x1d];
      uVar19 = puVar14[0x1e];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 0x20);
        do {
          if (puVar22[-4] != 0) {
            _free(puVar22[-3]);
          }
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 6;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    uVar17 = puVar14[0x1f];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[0x20];
      FUN_100e40160(uVar21,puVar14[0x21]);
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if ((puVar14[0x22] == 0x8000000000000000) || (puVar14[0x22] == 0)) {
      return;
    }
    plVar11 = (long *)puVar14[0x23];
    break;
  case 2:
    if (puVar14[0x2a] != 0x8000000000000000 && puVar14[0x2a] != 0) {
      _free(puVar14[0x2b]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar17 = puVar14[4];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[5];
      lVar9 = puVar14[6] + 1;
      uVar19 = uVar21;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        FUN_100e02a24(uVar19);
        uVar19 = uVar19 + 0xc0;
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
      if (puVar14[10] != 0x8000000000000000 && puVar14[10] != 0) goto LAB_100e615d4;
LAB_100e615a8:
      uVar17 = puVar14[0xd];
    }
    else {
      _free(puVar14[8]);
      if (puVar14[10] == 0x8000000000000000 || puVar14[10] == 0) goto LAB_100e615a8;
LAB_100e615d4:
      _free(puVar14[0xb]);
      uVar17 = puVar14[0xd];
    }
    if ((uVar17 != 0x8000000000000000) && (uVar17 != 0)) {
      _free(puVar14[0xe]);
    }
    uVar17 = puVar14[0x1f];
    if (((uVar17 != 0x8000000000000001) && (uVar17 != 0x8000000000000000)) && (uVar17 != 0)) {
      _free(puVar14[0x20]);
    }
    if ((puVar14[0x10] != 0x8000000000000000) && (puVar14[0x10] != 0)) {
      _free(puVar14[0x11]);
    }
    uVar17 = puVar14[0x13];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[0x14];
      uVar19 = puVar14[0x15];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if (puVar14[0x16] == 0x8000000000000000 || puVar14[0x16] == 0) {
      uVar17 = puVar14[0x22];
    }
    else {
      _free(puVar14[0x17]);
      uVar17 = puVar14[0x22];
    }
    if (uVar17 != 0) {
      FUN_100cc2fb4(puVar14 + 0x22);
    }
    if ((puVar14[0x19] != 0x8000000000000000) && (puVar14[0x19] != 0)) {
      _free(puVar14[0x1a]);
    }
    if ((puVar14[0x1c] == 0x8000000000000000) || (puVar14[0x1c] == 0)) {
      return;
    }
    plVar11 = (long *)puVar14[0x1d];
    break;
  case 3:
    if (puVar14[0x27] != 0x8000000000000000 && puVar14[0x27] != 0) {
      _free(puVar14[0x28]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      if (puVar14[7] != 0x8000000000000000 && puVar14[7] != 0) goto LAB_100e595b4;
LAB_100e59574:
      if (puVar14[10] != 0x8000000000000000 && puVar14[10] != 0) goto LAB_100e595d0;
LAB_100e59588:
      uVar17 = puVar14[0x1c];
    }
    else {
      _free(puVar14[5]);
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) goto LAB_100e59574;
LAB_100e595b4:
      _free(puVar14[8]);
      if (puVar14[10] == 0x8000000000000000 || puVar14[10] == 0) goto LAB_100e59588;
LAB_100e595d0:
      _free(puVar14[0xb]);
      uVar17 = puVar14[0x1c];
    }
    if (((uVar17 != 0x8000000000000001) && (uVar17 != 0x8000000000000000)) && (uVar17 != 0)) {
      _free(puVar14[0x1d]);
    }
    if ((puVar14[0xd] != 0x8000000000000000) && (puVar14[0xd] != 0)) {
      _free(puVar14[0xe]);
    }
    uVar17 = puVar14[0x10];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[0x11];
      uVar19 = puVar14[0x12];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if (puVar14[0x13] == 0x8000000000000000 || puVar14[0x13] == 0) {
      uVar17 = puVar14[0x1f];
    }
    else {
      _free(puVar14[0x14]);
      uVar17 = puVar14[0x1f];
    }
    if (uVar17 != 0) {
      FUN_100cc2fb4();
    }
    if ((puVar14[0x16] != 0x8000000000000000) && (puVar14[0x16] != 0)) {
      _free(puVar14[0x17]);
    }
    if ((puVar14[0x19] == 0x8000000000000000) || (puVar14[0x19] == 0)) {
      return;
    }
    plVar11 = (long *)puVar14[0x1a];
    break;
  default:
    if (puVar14[4] != 0x8000000000000000 && puVar14[4] != 0) {
      uVar17 = puVar14[5];
LAB_100e45008:
      _free(uVar17);
    }
    goto LAB_100e45018;
  case 8:
  case 0x12:
  case 0x39:
  case 0x3c:
  case 0x4a:
  case 0x6c:
    if (puVar14[7] != 0x8000000000000000 && puVar14[7] != 0) {
      _free(puVar14[8]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[5];
    break;
  case 9:
    if (puVar14[10] != 0x8000000000000000 && puVar14[10] != 0) {
      _free(puVar14[0xb]);
    }
    if (puVar14[3] != 0) {
      _free(puVar14[4]);
    }
    if (puVar14[6] == 0x8000000000000000 || puVar14[6] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[7];
    break;
  case 0xc:
    if (puVar14[0xd] != 0x8000000000000000 && puVar14[0xd] != 0) {
      _free(puVar14[0xe]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar17 = puVar14[4];
    if (uVar17 != 0x8000000000000002) {
      if ((long)uVar17 < -0x7ffffffffffffffe || uVar17 == 0) {
        uVar17 = puVar14[7];
      }
      else {
        _free(puVar14[5]);
        uVar17 = puVar14[7];
      }
      if (((uVar17 != 0x8000000000000001) && (uVar17 != 0x8000000000000000)) && (uVar17 != 0)) {
        _free(puVar14[8]);
      }
      uVar17 = puVar14[10];
      if (((uVar17 != 0x8000000000000001) && (uVar17 != 0x8000000000000000)) && (uVar17 != 0)) {
        plVar11 = (long *)puVar14[0xb];
        break;
      }
    }
    return;
  case 0xd:
    if (puVar14[0x1e] != 0x8000000000000000 && puVar14[0x1e] != 0) {
      _free(puVar14[0x1f]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      uVar17 = puVar14[0x18];
    }
    else {
      _free(puVar14[5]);
      uVar17 = puVar14[0x18];
    }
    if (-0x7ffffffffffffffd < (long)uVar17) {
      uVar21 = puVar14[0x19];
      uVar19 = puVar14[0x1a];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
      uVar17 = puVar14[10];
    }
    else {
      _free(puVar14[8]);
      uVar17 = puVar14[10];
    }
    if ((uVar17 != 0x8000000000000000) && (uVar17 != 0)) {
      _free(puVar14[0xb]);
    }
    uVar17 = puVar14[0x15];
    if (((uVar17 != 0x8000000000000001) && (uVar17 != 0x8000000000000000)) && (uVar17 != 0)) {
      _free(puVar14[0x16]);
    }
    if (puVar14[0xd] != 0x8000000000000000) {
      if (puVar14[0xd] != 0) {
        _free(puVar14[0xe]);
      }
      if ((puVar14[0x10] != 0x8000000000000000) && (puVar14[0x10] != 0)) {
        plVar11 = (long *)puVar14[0x11];
        break;
      }
    }
    return;
  case 0xe:
  case 0x15:
  case 0x18:
  case 0x2d:
  case 0x30:
  case 0x5b:
  case 0x5f:
    if (puVar14[5] != 0x8000000000000000 && puVar14[5] != 0) {
      uVar17 = puVar14[6];
      goto LAB_100e45008;
    }
LAB_100e45018:
    if (puVar14[1] == 0) {
      return;
    }
code_r0x000100e45020:
    plVar11 = (long *)puVar14[2];
    break;
  case 0xf:
  case 0x27:
  case 0x3e:
  case 0x41:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4c:
  case 0x51:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x65:
  case 0x66:
  case 0x69:
    if (puVar14[1] == 0x8000000000000000 || puVar14[1] == 0) {
      return;
    }
    goto code_r0x000100e45020;
  case 0x13:
    if (puVar14[0xd] != 0x8000000000000000 && puVar14[0xd] != 0) {
      _free(puVar14[0xe]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    puVar14 = puVar14 + 4;
    goto code_r0x000100de6690;
  case 0x16:
    if (puVar14[0x13] != 0x8000000000000000 && puVar14[0x13] != 0) {
      _free(puVar14[0x14]);
    }
    if (puVar14[5] == 0x8000000000000000 || puVar14[5] == 0) {
      uVar17 = puVar14[8];
    }
    else {
      _free(puVar14[6]);
      uVar17 = puVar14[8];
    }
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[9];
      uVar19 = puVar14[10];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if ((puVar14[0xb] & 0x7fffffffffffffff) == 0) {
      uVar17 = puVar14[1];
    }
    else {
      _free(puVar14[0xc]);
      uVar17 = puVar14[1];
    }
    if (uVar17 != 2) {
      if (uVar17 == 0) {
        if (puVar14[2] != 0) {
          uVar17 = puVar14[3];
          goto LAB_100e5983c;
        }
      }
      else {
        uVar17 = puVar14[3];
        uVar21 = puVar14[4];
        if (uVar21 != 0) {
          puVar22 = (undefined8 *)(uVar17 + 8);
          do {
            if (puVar22[-1] != 0) {
              _free(*puVar22);
            }
            puVar22 = puVar22 + 3;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
        if (puVar14[2] != 0) {
LAB_100e5983c:
          _free(uVar17);
        }
      }
    }
    if (puVar14[0xe] == 0x8000000000000000 || puVar14[0xe] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[0xf];
    break;
  case 0x17:
  case 0x20:
  case 0x40:
  case 0x49:
  case 0x4d:
  case 0x50:
  case 0x60:
  case 0x67:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if ((puVar14[4] & 0x7fffffffffffffff) == 0) {
      return;
    }
    plVar11 = (long *)puVar14[5];
    break;
  case 0x19:
    if (puVar14[9] != 0x8000000000000000 && puVar14[9] != 0) {
      _free(puVar14[10]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[5];
    break;
  case 0x1a:
    if (puVar14[0xc] != 0x8000000000000000 && puVar14[0xc] != 0) {
      _free(puVar14[0xd]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] != 0) {
      _free(puVar14[5]);
    }
    if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x1b:
    if (puVar14[7] != 0x8000000000000000 && puVar14[7] != 0) {
      _free(puVar14[8]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    plVar11 = (long *)puVar14[5];
    lVar9 = puVar14[6] + 1;
    plVar12 = plVar11;
    while (lVar9 = lVar9 + -1, lVar9 != 0) {
      FUN_100de6690(plVar12);
      plVar12 = plVar12 + 9;
    }
    if (puVar14[4] == 0) {
      return;
    }
    break;
  case 0x1c:
    if (puVar14[5] != 0x8000000000000000 && puVar14[5] != 0) {
      _free(puVar14[6]);
    }
    plVar11 = (long *)puVar14[2];
    uVar17 = puVar14[3];
    if (uVar17 != 0) {
      plVar12 = plVar11 + 1;
      do {
        if (plVar12[-1] != 0) {
          _free(*plVar12);
        }
        plVar12 = plVar12 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar14[1] == 0) {
      return;
    }
    break;
  case 0x1d:
    if (puVar14[4] != 0x8000000000000000 && puVar14[4] != 0) {
      _free(puVar14[5]);
    }
    plVar11 = (long *)puVar14[2];
    uVar17 = puVar14[3];
    if (uVar17 != 0) {
      plVar12 = plVar11 + 1;
      do {
        if (plVar12[-1] != 0) {
          _free(*plVar12);
        }
        plVar12 = plVar12 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar14[1] == 0) {
      return;
    }
    break;
  case 0x1e:
    if (puVar14[10] != 0x8000000000000000 && puVar14[10] != 0) {
      _free(puVar14[0xb]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      uVar17 = puVar14[7];
    }
    else {
      _free(puVar14[5]);
      uVar17 = puVar14[7];
    }
    if (uVar17 != 0x8000000000000000) {
      plVar11 = (long *)puVar14[8];
      uVar21 = puVar14[9];
      if (uVar21 != 0) {
        plVar12 = plVar11 + 1;
        do {
          if (plVar12[-1] != 0) {
            _free(*plVar12);
          }
          plVar12 = plVar12 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) break;
    }
    return;
  case 0x21:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar17 = puVar14[4];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[5];
      uVar19 = puVar14[6];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if ((puVar14[7] & 0x7fffffffffffffff) == 0) {
      return;
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x22:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar17 = puVar14[4];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[5];
      uVar19 = puVar14[6];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    uVar17 = puVar14[7];
    if (uVar17 != 0x8000000000000000) {
      plVar11 = (long *)puVar14[8];
      uVar21 = puVar14[9];
      if (uVar21 != 0) {
        plVar12 = plVar11 + 1;
        do {
          if (plVar12[-1] != 0) {
            _free(*plVar12);
          }
          plVar12 = plVar12 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) break;
    }
    return;
  case 0x23:
  case 0x35:
    if (puVar14[10] != 0x8000000000000000 && puVar14[10] != 0) {
      _free(puVar14[0xb]);
    }
    if ((puVar14[4] & 0x7fffffffffffffff) == 0) {
      if (puVar14[7] != 0x8000000000000000 && puVar14[7] != 0) goto code_r0x000100e5949c;
code_r0x000100e59468:
      uVar17 = puVar14[1];
    }
    else {
      _free(puVar14[5]);
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) goto code_r0x000100e59468;
code_r0x000100e5949c:
      _free(puVar14[8]);
      uVar17 = puVar14[1];
    }
    if (uVar17 == 0) {
      return;
    }
    plVar11 = (long *)puVar14[2];
    break;
  case 0x24:
    if (puVar14[10] != 0x8000000000000000 && puVar14[10] != 0) {
      _free(puVar14[0xb]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] != 0) {
      _free(puVar14[5]);
    }
    if (puVar14[7] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x25:
    if (puVar14[0xb] != 0x8000000000000000 && puVar14[0xb] != 0) {
      _free(puVar14[0xc]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      uVar17 = puVar14[7];
    }
    else {
      _free(puVar14[5]);
      uVar17 = puVar14[7];
    }
    if (uVar17 != 0x8000000000000000) {
      plVar11 = (long *)puVar14[8];
      uVar21 = puVar14[9];
      if (uVar21 != 0) {
        plVar12 = plVar11 + 1;
        do {
          if (plVar12[-1] != 0) {
            _free(*plVar12);
          }
          plVar12 = plVar12 + 4;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) break;
    }
    return;
  case 0x26:
    if (puVar14[8] != 0x8000000000000000 && puVar14[8] != 0) {
      _free(puVar14[9]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    plVar11 = (long *)puVar14[5];
    uVar17 = puVar14[6];
    if (uVar17 != 0) {
      plVar12 = plVar11 + 1;
      do {
        if (plVar12[-1] != 0) {
          _free(*plVar12);
        }
        plVar12 = plVar12 + 4;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar14[4] == 0) {
      return;
    }
    break;
  case 0x2a:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    else {
      _free(puVar14[5]);
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x2c:
    if (puVar14[7] != 0x8000000000000000 && puVar14[7] != 0) {
      _free(puVar14[8]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[5];
    break;
  case 0x31:
    if (puVar14[8] != 0x8000000000000000 && puVar14[8] != 0) {
      _free(puVar14[9]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[5];
    break;
  case 0x32:
    if (puVar14[7] != 0x8000000000000000 && puVar14[7] != 0) {
      _free(puVar14[8]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[5];
    break;
  case 0x34:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if ((puVar14[4] & 0x7fffffffffffffff) == 0) {
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    else {
      _free(puVar14[5]);
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x37:
    if (puVar14[0x35] != 0x8000000000000000 && puVar14[0x35] != 0) {
      _free(puVar14[0x36]);
    }
    if (*puVar14 != 0) {
      _free(puVar14[1]);
    }
    uVar21 = puVar14[4];
    uVar17 = uVar21;
    for (uVar19 = puVar14[5]; uVar19 != 0; uVar19 = uVar19 - 1) {
      FUN_100e06c08(uVar17);
      uVar17 = uVar17 + 0x38;
    }
    if (puVar14[3] != 0) {
      _free(uVar21);
    }
    if (puVar14[0x2d] != 0) {
      FUN_100cb56bc(puVar14 + 0x2d);
    }
    uVar17 = puVar14[6];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[7];
      uVar19 = puVar14[8];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 0x20);
        do {
          if (puVar22[-4] != 0) {
            _free(puVar22[-3]);
          }
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 6;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if ((puVar14[9] != 0x8000000000000000) && (puVar14[9] != 0)) {
      _free(puVar14[10]);
    }
    uVar17 = puVar14[0xc];
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[0xd];
      uVar19 = puVar14[0xe];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    uVar17 = puVar14[0x20];
    if (-0x7ffffffffffffffd < (long)uVar17) {
      uVar21 = puVar14[0x21];
      uVar19 = puVar14[0x22];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if (puVar14[0xf] == 0x8000000000000000 || puVar14[0xf] == 0) {
      uVar17 = puVar14[0x12];
    }
    else {
      _free(puVar14[0x10]);
      uVar17 = puVar14[0x12];
    }
    if ((uVar17 != 0x8000000000000000) && (uVar17 != 0)) {
      _free(puVar14[0x13]);
    }
    uVar17 = puVar14[0x1d];
    if (((uVar17 != 0x8000000000000001) && (uVar17 != 0x8000000000000000)) && (uVar17 != 0)) {
      _free(puVar14[0x1e]);
    }
    if (puVar14[0x24] != 0x8000000000000005) {
      FUN_100de6690(puVar14 + 0x24);
    }
    if (puVar14[0x15] != 0x8000000000000000) {
      if (puVar14[0x15] != 0) {
        _free(puVar14[0x16]);
      }
      if ((puVar14[0x18] != 0x8000000000000000) && (puVar14[0x18] != 0)) {
        plVar11 = (long *)puVar14[0x19];
        break;
      }
    }
    return;
  case 0x38:
    if (puVar14[0x10] != 0x8000000000000000 && puVar14[0x10] != 0) {
      _free(puVar14[0x11]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar21 = puVar14[5];
    uVar17 = uVar21;
    for (uVar19 = puVar14[6]; uVar19 != 0; uVar19 = uVar19 - 1) {
      FUN_100e06c08(uVar17);
      uVar17 = uVar17 + 0x38;
    }
    if (puVar14[4] != 0) {
      _free(uVar21);
    }
    if (puVar14[10] != 0) {
      FUN_100cb56bc();
    }
    if (puVar14[7] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x3a:
    if (puVar14[0xe] != 0x8000000000000000 && puVar14[0xe] != 0) {
      _free(puVar14[0xf]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if ((long)puVar14[7] < -0x7ffffffffffffffe || puVar14[7] == 0) {
      if (puVar14[4] != 0x8000000000000000 && puVar14[4] != 0) goto code_r0x000100e821e8;
code_r0x000100e821ac:
      if ((long)puVar14[10] < -0x7ffffffffffffffe || puVar14[10] == 0) {
        return;
      }
    }
    else {
      _free(puVar14[8]);
      if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) goto code_r0x000100e821ac;
code_r0x000100e821e8:
      _free(puVar14[5]);
      if ((long)puVar14[10] < -0x7ffffffffffffffe || puVar14[10] == 0) {
        return;
      }
    }
    plVar11 = (long *)puVar14[0xb];
    break;
  case 0x3b:
    if (puVar14[0xc] != 0x8000000000000000 && puVar14[0xc] != 0) {
      _free(puVar14[0xd]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] != 0) {
      _free(puVar14[5]);
    }
    if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x3f:
    if (puVar14[0xb] != 0x8000000000000000 && puVar14[0xb] != 0) {
      _free(puVar14[0xc]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar21 = puVar14[4];
    uVar17 = uVar21 ^ 0x8000000000000000;
    if (-1 < (long)uVar21) {
      uVar17 = 2;
    }
    if (uVar17 == 0) {
      return;
    }
    if ((uVar17 == 1) || (uVar17 != 2)) {
      if (puVar14[5] == 0) {
        return;
      }
      lVar9 = 0x10;
    }
    else {
      if (uVar21 != 0) {
        _free(puVar14[5]);
      }
      if ((puVar14[7] & 0x7fffffffffffffff) == 0) {
        return;
      }
      lVar9 = 0x20;
    }
    plVar11 = *(long **)((long)(puVar14 + 4) + lVar9);
    break;
  case 0x42:
  case 0x43:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    else {
      _free(puVar14[5]);
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x44:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar17 = puVar14[4];
    if (uVar17 != 0) {
      uStack_68 = puVar14[5];
      uStack_78 = 0;
      uStack_58 = 0;
      uStack_70 = uVar17;
    }
    uStack_80 = (ulong)(uVar17 != 0);
    uStack_60 = uStack_80;
    FUN_100f3a554(&stack0xffffffffffffffc8,&uStack_80);
    while (in_stack_ffffffffffffffc8 != 0) {
      lVar9 = in_stack_ffffffffffffffc8 + in_stack_ffffffffffffffd8 * 0x18;
      if (*(long *)(lVar9 + 8) != 0) {
        _free(*(undefined8 *)(lVar9 + 0x10));
      }
      FUN_100f3a554(&stack0xffffffffffffffc8,&uStack_80);
    }
    return;
  case 0x4b:
    if (puVar14[9] != 0x8000000000000000 && puVar14[9] != 0) {
      _free(puVar14[10]);
    }
    if (puVar14[3] != 0) {
      _free(puVar14[4]);
    }
    uVar17 = puVar14[6];
    if (uVar17 != 0x8000000000000000) {
      plVar11 = (long *)puVar14[7];
      uVar21 = puVar14[8];
      if (uVar21 != 0) {
        plVar12 = plVar11 + 1;
        do {
          if (plVar12[-1] != 0) {
            _free(*plVar12);
          }
          plVar12 = plVar12 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) break;
    }
    return;
  case 0x4e:
    if (puVar14[10] != 0x8000000000000000 && puVar14[10] != 0) {
      _free(puVar14[0xb]);
    }
    if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
      uVar17 = puVar14[1];
    }
    else {
      _free(puVar14[8]);
      uVar17 = puVar14[1];
    }
    if (uVar17 != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[5];
    break;
  case 0x4f:
    if (puVar14[0x1c] != 0x8000000000000000 && puVar14[0x1c] != 0) {
      _free(puVar14[0x1d]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] != 0) {
      _free(puVar14[5]);
    }
    if (puVar14[7] != 0) {
      _free(puVar14[8]);
    }
    if (puVar14[10] != 0x8000000000000005) {
      FUN_100de6690();
    }
    puVar14 = puVar14 + 0x13;
    if (*puVar14 == 0x8000000000000005) {
      return;
    }
code_r0x000100de6690:
    uVar17 = *puVar14 ^ 0x8000000000000000;
    if (-1 < (long)*puVar14) {
      uVar17 = 5;
    }
    if (uVar17 < 3) {
      return;
    }
    if (uVar17 == 3) {
      if (puVar14[1] == 0) {
        return;
      }
      plVar11 = (long *)puVar14[2];
    }
    else if (uVar17 == 4) {
      plVar11 = (long *)puVar14[2];
      lVar9 = puVar14[3] + 1;
      plVar12 = plVar11;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        FUN_100de6690(plVar12);
        plVar12 = plVar12 + 9;
      }
      if (puVar14[1] == 0) {
        return;
      }
    }
    else {
      uVar17 = puVar14[4];
      if ((uVar17 != 0) && (uVar17 * 9 != -0x11)) {
        _free(puVar14[3] + uVar17 * -8 + -8);
      }
      plVar11 = (long *)puVar14[1];
      lVar9 = puVar14[2] + 1;
      plVar12 = plVar11;
      while (lVar9 = lVar9 + -1, lVar9 != 0) {
        if (*plVar12 != 0) {
          _free(plVar12[1]);
        }
        FUN_100de6690(plVar12 + 3);
        plVar12 = plVar12 + 0xd;
      }
      if (*puVar14 == 0) {
        return;
      }
    }
    break;
  case 0x52:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar21 = puVar14[4];
    uVar17 = uVar21 ^ 0x8000000000000000;
    if (-1 < (long)uVar21) {
      uVar17 = 3;
    }
    if (uVar17 - 1 < 2) {
      return;
    }
    if (uVar17 == 0) {
      if (puVar14[5] == 0) {
        return;
      }
      plVar11 = (long *)puVar14[6];
    }
    else {
      if (uVar21 != 0) {
        _free(puVar14[5]);
      }
      if (puVar14[7] != 0) {
        _free(puVar14[8]);
      }
      if ((puVar14[10] & 0x7fffffffffffffff) == 0) {
        return;
      }
      plVar11 = (long *)puVar14[0xb];
    }
    break;
  case 0x57:
    if (puVar14[0x12] != 0x8000000000000000 && puVar14[0x12] != 0) {
      _free(puVar14[0x13]);
    }
    if (puVar14[5] != 0) {
      _free(puVar14[6]);
    }
    if (puVar14[8] == 0x8000000000000000 || puVar14[8] == 0) {
      if (puVar14[0xb] == 0x8000000000000000 || puVar14[0xb] == 0) {
LAB_100e6dbbc:
        uVar17 = puVar14[0xe];
        goto joined_r0x000100e6dbc8;
      }
    }
    else {
      _free(puVar14[9]);
      if (puVar14[0xb] == 0x8000000000000000 || puVar14[0xb] == 0) goto LAB_100e6dbbc;
    }
    _free(puVar14[0xc]);
    uVar17 = puVar14[0xe];
joined_r0x000100e6dbc8:
    if (uVar17 != 0x8000000000000000) {
      uVar21 = puVar14[0xf];
      uVar19 = puVar14[0x10];
      if (uVar19 != 0) {
        puVar22 = (undefined8 *)(uVar21 + 8);
        do {
          if (puVar22[-1] != 0) {
            _free(*puVar22);
          }
          puVar22 = puVar22 + 3;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      if (uVar17 != 0) {
        _free(uVar21);
      }
    }
    if (puVar14[1] != 0) {
      uVar17 = puVar14[2];
      if (uVar17 != 0) {
        uStack_68 = puVar14[3];
        uStack_78 = 0;
        uStack_58 = 0;
        uStack_70 = uVar17;
      }
      uStack_80 = (ulong)(uVar17 != 0);
      uStack_60 = uStack_80;
      FUN_100f3a3c8(&stack0xffffffffffffffc8,&uStack_80);
      while (unaff_x23 != 0) {
        lVar9 = unaff_x23 + unaff_x21 * 0x18;
        if (*(long *)(lVar9 + 8) != 0) {
          _free(*(undefined8 *)(lVar9 + 0x10));
        }
        if (*(long *)(lVar9 + 0x110) != 0) {
          _free(*(undefined8 *)(lVar9 + 0x118));
        }
        FUN_100f3a3c8(&stack0xffffffffffffffc8,&uStack_80);
      }
    }
    return;
  case 0x58:
    if (puVar14[0x1d] != 0x8000000000000000 && puVar14[0x1d] != 0) {
      _free(puVar14[0x1e]);
    }
    unaff_x19 = puVar14 + 1;
    unaff_x29 = &stack0xfffffffffffffff0;
    uVar17 = puVar14[6];
    uVar21 = puVar14[7];
    if (uVar21 != 0) {
      unaff_x22 = (undefined8 *)(uVar17 + 8);
      do {
        if (unaff_x22[-1] != 0) {
          _free(*unaff_x22);
        }
        unaff_x22 = unaff_x22 + 3;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    unaff_x21 = 0;
    if (puVar14[5] != 0) {
      _free(uVar17);
    }
    unaff_x20 = 0x8000000000000000;
    if (puVar14[8] == 0x8000000000000000 || puVar14[8] == 0) {
      if (puVar14[0xb] != 0x8000000000000000 && puVar14[0xb] != 0) goto LAB_100e73c78;
LAB_100e73c0c:
      uVar17 = puVar14[0x15];
    }
    else {
      _free(puVar14[9]);
      if (puVar14[0xb] == 0x8000000000000000 || puVar14[0xb] == 0) goto LAB_100e73c0c;
LAB_100e73c78:
      _free(puVar14[0xc]);
      uVar17 = puVar14[0x15];
    }
    if (uVar17 == 0) {
      uVar17 = puVar14[0x11];
      if ((uVar17 != 0x8000000000000003) && (-0x7ffffffffffffffe < (long)uVar17)) {
        uVar21 = puVar14[0x12];
        uVar19 = puVar14[0x13];
        if (uVar19 != 0) {
          puVar22 = (undefined8 *)(uVar21 + 8);
          do {
            if (puVar22[-1] != 0) {
              _free(*puVar22);
            }
            puVar22 = puVar22 + 3;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        if (uVar17 != 0) {
          _free(uVar21);
        }
      }
      if (puVar14[0xe] == 0x8000000000000000 || puVar14[0xe] == 0) {
        return;
      }
      plVar11 = (long *)puVar14[0xf];
      break;
    }
    puVar14 = puVar14 + 0x15;
    unaff_x30 = 0x100e73c1c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    goto SUB_100d12d04;
  case 0x59:
  case 0x5d:
    if (puVar14[8] != 0x8000000000000000 && puVar14[8] != 0) {
      _free(puVar14[9]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[5];
    break;
  case 0x5c:
    if (puVar14[0x16] != 0x8000000000000000 && puVar14[0x16] != 0) {
      _free(puVar14[0x17]);
    }
    uVar17 = puVar14[6];
    uVar21 = puVar14[7];
    if (uVar21 != 0) {
      puVar22 = (undefined8 *)(uVar17 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 3;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (puVar14[5] != 0) {
      _free(uVar17);
    }
    if (puVar14[8] != 0) {
      _free(puVar14[9]);
    }
    if (puVar14[0xb] != 0) {
      _free(puVar14[0xc]);
    }
    puVar14 = puVar14 + 0xe;
    if (*puVar14 == 0) {
      return;
    }
SUB_100d12d04:
    *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    uVar17 = puVar14[1];
    if (uVar17 != 0) {
      uVar21 = puVar14[3];
      if (uVar21 != 0) {
        plVar11 = (long *)*puVar14;
        plVar12 = plVar11 + 1;
        lVar9 = *plVar11;
        uVar19 = CONCAT17(-(-1 < lVar9),
                          CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar9 >>
                                                                                    0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar9 >> 8)),-(-1 < (char)lVar9)))))))) &
                 0x8080808080808080;
        do {
          while (uVar19 == 0) {
            lVar9 = *plVar12;
            plVar11 = plVar11 + -0x30;
            plVar12 = plVar12 + 1;
            uVar19 = CONCAT17(-(-1 < lVar9),
                              CONCAT16(-(-1 < (char)((ulong)lVar9 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar9 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar9 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar9 >> 0x18
                                                                               )),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar9 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar9 >> 8)),
                                                           -(-1 < (char)lVar9)))))))) &
                     0x8080808080808080;
          }
          uVar20 = (uVar19 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar19 >> 7 & 0xff00ff00ff00ff) << 8;
          uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
          iVar5 = (int)((ulong)LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) >> 3);
          if (plVar11[(long)-iVar5 * 6 + -6] != 0) {
            _free(plVar11[(long)-iVar5 * 6 + -5]);
          }
          if (plVar11[(long)-iVar5 * 6 + -3] != -0x8000000000000000 &&
              plVar11[(long)-iVar5 * 6 + -3] != 0) {
            _free(plVar11[(long)-iVar5 * 6 + -2]);
          }
          uVar19 = uVar19 - 1 & uVar19;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 * 0x31 != -0x39) {
        plVar11 = (long *)(*puVar14 + uVar17 * -0x30 + -0x30);
        break;
      }
    }
    return;
  case 0x61:
    if (puVar14[1] != 0x8000000000000000 && puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar17 = puVar14[4];
    if (uVar17 != 0x8000000000000000) {
      plVar11 = (long *)puVar14[5];
      uVar21 = puVar14[6];
      if (uVar21 != 0) {
        plVar12 = plVar11 + 1;
        do {
          if (plVar12[-1] != 0) {
            _free(*plVar12);
          }
          plVar12 = plVar12 + 3;
          uVar21 = uVar21 - 1;
        } while (uVar21 != 0);
      }
      if (uVar17 != 0) break;
    }
    return;
  case 0x62:
    if (puVar14[4] != 0x8000000000000000 && puVar14[4] != 0) {
      _free(puVar14[5]);
    }
    plVar11 = (long *)puVar14[2];
    uVar17 = puVar14[3];
    if (uVar17 != 0) {
      plVar12 = plVar11 + 6;
      do {
        if (plVar12[-6] != 0) {
          _free(plVar12[-5]);
        }
        if (plVar12[-3] == -0x8000000000000000 || plVar12[-3] == 0) {
          lVar9 = *plVar12;
        }
        else {
          _free(plVar12[-2]);
          lVar9 = *plVar12;
        }
        if (lVar9 != -0x8000000000000000) {
          FUN_100e589f4(plVar12);
        }
        plVar12 = plVar12 + 0x19;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar14[1] == 0) {
      return;
    }
    break;
  case 99:
    if (puVar14[0x14] != 0x8000000000000000 && puVar14[0x14] != 0) {
      _free(puVar14[0x15]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    FUN_100de6690(puVar14 + 10);
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    else {
      _free(puVar14[5]);
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 100:
    if (puVar14[0xb] != 0x8000000000000000 && puVar14[0xb] != 0) {
      _free(puVar14[0xc]);
    }
    FUN_100ca4b40();
    if (puVar14[4] == 0x8000000000000000 || puVar14[4] == 0) {
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    else {
      _free(puVar14[5]);
      if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
        return;
      }
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x6a:
    if (puVar14[10] != 0x8000000000000000 && puVar14[10] != 0) {
      _free(puVar14[0xb]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    uVar17 = puVar14[5];
    uVar21 = puVar14[6];
    if (uVar21 != 0) {
      puVar22 = (undefined8 *)(uVar17 + 8);
      do {
        if (puVar22[-1] != 0) {
          _free(*puVar22);
        }
        puVar22 = puVar22 + 3;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (puVar14[4] != 0) {
      _free(uVar17);
    }
    if (puVar14[7] == 0x8000000000000000 || puVar14[7] == 0) {
      return;
    }
    plVar11 = (long *)puVar14[8];
    break;
  case 0x6b:
    if (puVar14[7] != 0x8000000000000000 && puVar14[7] != 0) {
      _free(puVar14[8]);
    }
    if (puVar14[1] != 0) {
      _free(puVar14[2]);
    }
    plVar11 = (long *)puVar14[5];
    uVar17 = puVar14[6];
    if (uVar17 != 0) {
      plVar12 = plVar11 + 1;
      do {
        if (plVar12[-1] != 0) {
          _free(*plVar12);
        }
        plVar12 = plVar12 + 3;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (puVar14[4] == 0) {
      return;
    }
  }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar11);
  return;
}

