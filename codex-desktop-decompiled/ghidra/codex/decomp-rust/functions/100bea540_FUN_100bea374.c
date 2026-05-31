
undefined1 FUN_100bea374(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  long alStack_f0 [22];
  
  bVar2 = *(byte *)(param_1 + 0x55);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      param_1[0x26] = param_1[0xf];
      param_1[0x25] = param_1[0xe];
      param_1[0x28] = param_1[0x11];
      param_1[0x27] = param_1[0x10];
      param_1[0x2a] = param_1[0x13];
      param_1[0x29] = param_1[0x12];
      param_1[0x2c] = param_1[0x15];
      param_1[0x2b] = param_1[0x14];
      param_1[0x1e] = param_1[7];
      param_1[0x1d] = param_1[6];
      param_1[0x20] = param_1[9];
      param_1[0x1f] = param_1[8];
      param_1[0x22] = param_1[0xb];
      param_1[0x21] = param_1[10];
      param_1[0x24] = param_1[0xd];
      param_1[0x23] = param_1[0xc];
      param_1[0x18] = param_1[1];
      param_1[0x17] = *param_1;
      param_1[0x1a] = param_1[3];
      param_1[0x19] = param_1[2];
      param_1[0x1c] = param_1[5];
      param_1[0x1b] = param_1[4];
      param_1[0x2d] = param_1[0x16] + 0x78;
      *(undefined1 *)(param_1 + 0x54) = 0;
LAB_100bea3fc:
      FUN_100fce1a4(alStack_f0,param_1 + 0x17);
      if (alStack_f0[0] == -0x7ffffffffffffffa) {
        uVar6 = 2;
        uVar11 = 3;
      }
      else {
        FUN_100d4fbc0(param_1 + 0x17);
        if (alStack_f0[0] != -0x7ffffffffffffffb) {
          func_0x000100e37f24(alStack_f0);
        }
        uVar6 = alStack_f0[0] != -0x7ffffffffffffffb;
        uVar11 = 1;
      }
      *(undefined1 *)(param_1 + 0x55) = uVar11;
      return uVar6;
    }
    func_0x000108a07af4(&UNK_10b232c30,param_2,param_2);
  }
  else if (bVar2 == 3) goto LAB_100bea3fc;
  func_0x000108a07b10(&UNK_10b232c30);
  *(undefined1 *)(param_1 + 0x55) = 2;
  uVar9 = __Unwind_Resume();
  FUN_100d4fbc0(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x55) = 2;
  __Unwind_Resume(uVar9);
  auVar21 = func_0x000108a07bc4();
  puVar13 = auVar21._8_8_;
  plVar10 = auVar21._0_8_;
  bVar2 = *(byte *)(plVar10 + 2);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      plVar10[1] = *plVar10;
      __ZN10tokio_util4sync18cancellation_token17CancellationToken6cancel17h8a1429fcd1dbeedcE
                (*plVar10 + 0x80);
      goto LAB_100bea5fc;
    }
    if (bVar2 == 1) {
      func_0x000108a07af4(&UNK_10b232c60);
    }
    func_0x000108a07b10();
  }
  else {
    if (bVar2 == 3) {
      while (cVar8 = FUN_100be8b2c(plVar10 + 0x14,puVar13), cVar8 != '\x02') {
        if ((char)plVar10[0x73] == '\x03') {
          if ((char)plVar10[0x72] == '\x03') {
            FUN_100d4fbc0(plVar10 + 0x34);
          }
          else if ((char)plVar10[0x72] == '\0') {
            func_0x000100e37f24(plVar10 + 0x1d);
          }
          FUN_100ca4ff4(plVar10 + 0x16);
        }
        if (plVar10[0xe] != 0) {
          _free(plVar10[0xf]);
        }
        if (plVar10[0x11] != 0) {
          _free(plVar10[0x12]);
        }
LAB_100bea5fc:
        plVar12 = (long *)plVar10[1];
        plVar14 = (long *)*plVar12;
        lVar20 = plVar12[1];
        lVar19 = *plVar14;
        uVar16 = CONCAT17(-(-1 < lVar19),
                          CONCAT16(-(-1 < (char)((ulong)lVar19 >> 0x30)),
                                   CONCAT15(-(-1 < (char)((ulong)lVar19 >> 0x28)),
                                            CONCAT14(-(-1 < (char)((ulong)lVar19 >> 0x20)),
                                                     CONCAT13(-(-1 < (char)((ulong)lVar19 >> 0x18)),
                                                              CONCAT12(-(-1 < (char)((ulong)lVar19
                                                                                    >> 0x10)),
                                                                       CONCAT11(-(-1 < (char)((ulong
                                                  )lVar19 >> 8)),-(-1 < (char)lVar19)))))))) &
                 0x8080808080808080;
        lVar19 = plVar12[3];
        plVar10[3] = (long)plVar14;
        plVar10[4] = uVar16;
        plVar10[5] = (long)(plVar14 + 1);
        plVar10[6] = (long)plVar14 + lVar20 + 1;
        plVar10[7] = lVar19;
        if (lVar19 == 0) {
          plVar10[8] = -0x8000000000000000;
LAB_100bea78c:
          *(undefined1 *)(plVar10 + 8) = 0;
          plVar10[3] = (long)plVar12;
          uVar9 = *puVar13;
          plVar10[4] = (long)plVar12;
          goto LAB_100bea8e8;
        }
        plVar12 = plVar14 + 1;
        if (uVar16 == 0) {
          do {
            plVar15 = plVar12 + 1;
            lVar20 = *plVar12;
            plVar14 = plVar14 + -0x68;
            uVar16 = CONCAT17(-(-1 < lVar20),
                              CONCAT16(-(-1 < (char)((ulong)lVar20 >> 0x30)),
                                       CONCAT15(-(-1 < (char)((ulong)lVar20 >> 0x28)),
                                                CONCAT14(-(-1 < (char)((ulong)lVar20 >> 0x20)),
                                                         CONCAT13(-(-1 < (char)((ulong)lVar20 >>
                                                                               0x18)),
                                                                  CONCAT12(-(-1 < (char)((ulong)
                                                  lVar20 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar20 >> 8)),
                                                           -(-1 < (char)lVar20)))))))) &
                     0x8080808080808080;
            plVar12 = plVar15;
          } while (uVar16 == 0);
          plVar10[5] = (long)plVar15;
          plVar10[3] = (long)plVar14;
        }
        uVar3 = (uVar16 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar16 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        plVar10[4] = uVar16 - 1 & uVar16;
        iVar4 = (int)((ulong)LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) >> 3);
        plVar10[7] = lVar19 + -1;
        lVar20 = plVar14[(long)-iVar4 * 0xd + -0xc];
        lVar19 = plVar14[(long)-iVar4 * 0xd + -0xb];
        lVar17 = 1;
        if ((lVar19 != 0) && (lVar17 = _malloc(lVar19), lVar17 == 0)) {
          func_0x0001087c9084(1,lVar19);
          goto LAB_100bea7cc;
        }
        _memcpy(lVar17,lVar20,lVar19);
        lVar20 = plVar14[(long)-iVar4 * 0xd + -9];
        lVar1 = plVar14[(long)-iVar4 * 0xd + -8];
        lVar18 = 1;
        if ((lVar1 != 0) && (lVar18 = _malloc(lVar1), lVar18 == 0)) {
          func_0x0001087c9084(1,lVar1);
          goto LAB_100bea7cc;
        }
        _memcpy(lVar18,lVar20,lVar1);
        plVar10[8] = lVar19;
        plVar10[9] = lVar17;
        plVar10[10] = lVar19;
        plVar10[0xb] = lVar1;
        plVar10[0xc] = lVar18;
        plVar10[0xd] = lVar1;
        plVar12 = (long *)plVar10[1];
        if (lVar19 == -0x8000000000000000) goto LAB_100bea78c;
        plVar10[0xf] = plVar10[9];
        plVar10[0xe] = plVar10[8];
        plVar10[0x11] = plVar10[0xb];
        plVar10[0x10] = plVar10[10];
        plVar10[0x13] = plVar10[0xd];
        plVar10[0x12] = plVar10[0xc];
        plVar10[0x14] = (long)plVar12;
        plVar10[0x15] = (long)(plVar10 + 0xe);
        *(undefined1 *)(plVar10 + 0x73) = 0;
      }
      bVar7 = true;
      uVar6 = 3;
      goto LAB_100bea840;
    }
    bVar2 = *(byte *)(plVar10 + 8);
    uVar9 = *puVar13;
    if (1 < bVar2) {
      if (bVar2 == 3) goto LAB_100bea860;
      func_0x000108a07b10(&UNK_10b232b40);
      goto LAB_100bea7cc;
    }
    if (bVar2 == 0) {
      plVar12 = (long *)plVar10[3];
      plVar10[4] = (long)plVar12;
LAB_100bea8e8:
      do {
        plVar10[5] = (long)(plVar12 + 0xc);
        *(undefined1 *)(plVar10 + 7) = 0;
LAB_100bea860:
        FUN_100fe38cc(&lStack_220,plVar10 + 5,uVar9);
        lVar20 = lStack_200;
        puVar13 = puStack_208;
        lVar19 = lStack_210;
        bVar7 = lStack_220 == -0x7ffffffffffffffe;
        if (bVar7) goto LAB_100bea834;
        if (lStack_220 == -0x8000000000000000) {
          if (lStack_210 != 0) {
            if ((code *)*puStack_208 != (code *)0x0) {
              (*(code *)*puStack_208)(lStack_210);
            }
            puVar13 = (undefined8 *)puVar13[1];
            lVar20 = lVar19;
            goto joined_r0x000100bea8d8;
          }
        }
        else {
          if (lStack_220 != 0) {
            if (lStack_220 == -0x7fffffffffffffff) {
              uVar11 = 1;
              uVar6 = 1;
              goto LAB_100bea83c;
            }
            _free(uStack_218);
          }
joined_r0x000100bea8d8:
          if (puVar13 != (undefined8 *)0x0) {
            _free(lVar20);
          }
        }
        plVar12 = (long *)plVar10[4];
      } while( true );
    }
  }
  func_0x000108a07af4(&UNK_10b232b40);
LAB_100bea7cc:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100bea7d0);
  (*pcVar5)();
LAB_100bea834:
  uVar6 = 4;
  uVar11 = 3;
LAB_100bea83c:
  *(undefined1 *)(plVar10 + 8) = uVar11;
LAB_100bea840:
  *(undefined1 *)(plVar10 + 2) = uVar6;
  return bVar7;
}

