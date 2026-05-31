
/* WARNING: Removing unreachable block (ram,0x00010177dbd8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10177d934(undefined1 param_1 [16])

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lVar6;
  ulong uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  code *UNRECOVERED_JUMPTABLE;
  ulong in_x4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long lVar14;
  ulong uVar15;
  undefined8 unaff_x26;
  long unaff_x27;
  ulong *unaff_x28;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *in_stack_00000048;
  long in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  char cStack0000000000000078;
  long in_stack_00000080;
  char *pcStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  long alStack_c8 [2];
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack00000000000000a8 = param_1._8_8_;
  uStack00000000000000a0 = param_1._0_8_;
  do {
    pcStack0000000000000098 =
         "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs"
    ;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000078);
    plVar12 = unaff_x22;
    do {
      if (4 < *unaff_x28) {
        _cStack0000000000000078 = (long *)0x0;
        pcStack0000000000000098 =
             "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs"
        ;
        uStack00000000000000a8 = in_stack_00000028;
        uStack00000000000000a0 = in_stack_00000020;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        in_stack_00000080 = unaff_x19;
        (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000078);
      }
      in_stack_00000050 = unaff_x20[0x89] + 0x10;
      in_stack_00000048 = &UNK_10b259578;
      in_stack_00000058 = &stack0x00000048;
      in_stack_00000068 = 0;
      in_stack_00000060 = in_stack_00000058;
      if (4 < *unaff_x28) {
        _cStack0000000000000078 = (long *)0x0;
        pcStack0000000000000098 =
             "/Users/runner/.cargo/git/checkouts/tokio-tungstenite-ea4445d9acecae62/132f5b3/src/compat.rs"
        ;
        uStack00000000000000a8 = in_stack_00000028;
        uStack00000000000000a0 = in_stack_00000020;
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        in_stack_00000080 = unaff_x19;
        (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000078);
      }
      if (*unaff_x20 == 2) {
        auVar19 = func_0x0001060f8f1c(unaff_x20 + 1,&stack0x00000058);
        lVar16 = auVar19._0_8_;
joined_r0x00010177dae4:
        plVar11 = (long *)0xd00000003;
        if (lVar16 == 2) goto LAB_10177dcc8;
      }
      else {
        unaff_x22 = (long *)0x0;
        do {
          if (plVar12 < unaff_x22) goto LAB_10177dd34;
          in_stack_00000080 = unaff_x23 + (long)unaff_x22;
          _cStack0000000000000078 = (long *)0x0;
          lVar16 = __ZN6rustls12common_state11CommonState16buffer_plaintext17h2406345ecef1dad4E
                             (unaff_x20 + 4,&stack0x00000078,unaff_x20 + 0x7d);
          cVar8 = *(char *)((long)unaff_x20 + 0x35f);
          *(undefined1 *)((long)unaff_x20 + 0x35f) = 0;
          if (cVar8 == '\x01') {
            if ((char)unaff_x20[0x74] == '\x16') {
              (**(code **)(unaff_x20[0x76] + 0x30))(&stack0x00000078,unaff_x20[0x75],unaff_x20 + 4);
            }
            else {
              FUN_1017ad5e4(&stack0x00000078,unaff_x20 + 0x74);
            }
            if (cStack0000000000000078 != '\x16') {
              FUN_1017a4218(&stack0x00000078);
            }
          }
          unaff_x22 = (long *)(lVar16 + (long)unaff_x22);
LAB_10177db84:
          if (unaff_x20[0x1a] != 0) {
            _cStack0000000000000078 = unaff_x20;
            in_stack_00000080 = unaff_x27;
            auVar19 = __ZN6rustls6vecbuf14ChunkVecBuffer8write_to17h57071789928213f2E
                                (unaff_x20 + 0x15,&stack0x00000078);
            uVar15 = auVar19._8_8_;
            if ((auVar19._0_8_ & 1) == 0) goto code_r0x00010177dba8;
            cVar8 = FUN_101798024(uVar15);
            if (cVar8 == '\r') {
              if ((uVar15 & 3) == 1) {
                in_stack_00000010 = *(undefined8 *)(uVar15 - 1);
                in_stack_00000008 = *(undefined8 **)(uVar15 + 7);
                if ((code *)*in_stack_00000008 != (code *)0x0) {
                  (*(code *)*in_stack_00000008)(in_stack_00000010);
                }
                if (in_stack_00000008[1] != 0) {
                  _free(in_stack_00000010);
                }
                _free((undefined8 *)(uVar15 - 1));
              }
              goto LAB_10177dc30;
            }
            auVar19._8_8_ = uVar15;
            auVar19._0_8_ = 1;
            unaff_x26 = 0x19;
            goto LAB_10177dc78;
          }
          unaff_x26 = 0x19;
        } while (unaff_x22 != plVar12);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = plVar12;
        auVar19 = auVar5 << 0x40;
      }
LAB_10177dc78:
      plVar11 = auVar19._8_8_;
      if ((auVar19._0_8_ & 1) != 0) {
LAB_10177dcc8:
        *in_stack_00000018 = 0xb;
        in_stack_00000018[1] = plVar11;
        return;
      }
      if (plVar11 == (long *)0x0) {
        uVar9 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(3,&UNK_108ce309b,0x1e);
        *in_stack_00000018 = 0xb;
        in_stack_00000018[1] = uVar9;
        return;
      }
      unaff_x22 = (long *)((long)plVar12 - (long)plVar11);
      if (plVar12 < plVar11) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                  (0,plVar11,plVar12,&UNK_10b25a340);
LAB_10177dd34:
        uVar15 = 0;
        uVar9 = __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(unaff_x22,plVar12);
        if (in_stack_00000008[1] != 0) {
          _free(in_stack_00000010);
        }
        _free(unaff_x26);
        auVar19 = __Unwind_Resume(uVar9);
        plVar11 = auVar19._8_8_;
        puVar10 = auVar19._0_8_;
        if ((uVar15 & 1) == 0) {
          in_x4 = 0xffffffffffffffff;
        }
        lVar16 = *plVar11;
        if (lVar16 == -0x8000000000000000) {
          uVar15 = plVar11[3];
          lVar16 = plVar12[1];
          uVar13 = plVar12[2];
          if (uVar15 <= in_x4 && uVar13 <= in_x4 - uVar15) {
            if (plVar11[1] - uVar15 < uVar13) {
              FUN_108880448(plVar11 + 1,uVar15,uVar13,1,1);
              uVar15 = plVar11[3];
            }
            _memcpy(plVar11[2] + uVar15,lVar16);
            plVar11[3] = uVar15 + uVar13;
            *puVar10 = 0x15;
            lVar16 = plVar12[1];
            UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x20);
            uVar13 = plVar12[2];
            goto LAB_10177de68;
          }
        }
        else {
          lVar14 = plVar11[2];
          bVar3 = *(byte *)(plVar11 + 3);
          uVar15 = (ulong)*(byte *)((long)plVar11 + 0x1d);
          if ((bVar3 & 1) == 0) {
            uVar15 = 0;
          }
          uVar13 = plVar12[2];
          uVar15 = uVar15 + lVar14;
          if (uVar15 <= in_x4 && uVar13 <= in_x4 - uVar15) {
            uVar13 = plVar12[1];
            lVar17 = *plVar12;
            alStack_c8[0] = plVar12[3];
            lVar18 = plVar12[2];
            *(undefined1 *)(plVar11 + 3) = 0;
            uVar15 = uVar13;
            lVar4 = lVar18;
            if ((bVar3 & 1) == 0) {
joined_r0x00010177def8:
              if (lVar4 != 0) {
                func_0x000106240afc(&uStack_b0,uVar15,lVar4);
                if (uStack_b0 == 1) {
                  if (lStack_a8 != 0) {
                    if ((ulong)(*plVar11 - lVar14) < uStack_a0) {
                      FUN_108880448(plVar11,lVar14,uStack_a0,1,1);
                      lVar14 = plVar11[2];
                    }
                    _memcpy(plVar11[1] + lVar14,lStack_a8,uStack_a0);
                    plVar11[2] = lVar14 + uStack_a0;
                    __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                              (&lStack_78,uStack_98,CONCAT44(uStack_8c,uStack_90));
                    goto joined_r0x00010177df74;
                  }
                  if ((ulong)(*plVar11 - lVar14) < uStack_98) {
                    FUN_108880448(plVar11,lVar14,uStack_98,1,1);
                    lVar14 = plVar11[2];
                  }
                  _memcpy(plVar11[1] + lVar14,uStack_a0,uStack_98);
                  plVar11[2] = lVar14 + uStack_98;
                  *(undefined1 *)(plVar11 + 3) = 1;
                  *(undefined4 *)((long)plVar11 + 0x19) = uStack_90;
                  *(undefined1 *)((long)plVar11 + 0x1d) = (undefined1)uStack_8c;
                }
                else {
                  if ((ulong)(*plVar11 - lVar14) < uStack_a0) {
                    FUN_108880448(plVar11,lVar14,uStack_a0,1,1);
                    lVar14 = plVar11[2];
                  }
                  _memcpy(plVar11[1] + lVar14,lStack_a8,uStack_a0);
                  plVar11[2] = lVar14 + uStack_a0;
                }
              }
            }
            else {
              uStack_b8 = *(undefined4 *)((long)plVar11 + 0x19);
              uStack_b4 = *(undefined1 *)((long)plVar11 + 0x1d);
              __ZN4utf810Incomplete12try_complete17hc50bf562f815cd62E
                        (&uStack_b0,&uStack_b8,uVar13,lVar18);
              uVar15 = uStack_98;
              uVar7 = uStack_a0;
              lVar6 = lStack_a8;
              if (CONCAT44(uStack_ac,uStack_b0) != 2) {
                if ((uStack_b0 & 1) == 0) {
                  lVar4 = CONCAT44(uStack_8c,uStack_90);
                  if ((ulong)(lVar16 - lVar14) < uStack_a0) {
                    FUN_108880448(plVar11,lVar14,uStack_a0,1,1);
                    lVar14 = plVar11[2];
                  }
                  _memcpy(plVar11[1] + lVar14,lVar6,uVar7);
                  lVar14 = lVar14 + uVar7;
                  plVar11[2] = lVar14;
                  goto joined_r0x00010177def8;
                }
                __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE
                          (&lStack_78,lStack_a8,uStack_a0);
joined_r0x00010177df74:
                lVar16 = lStack_70;
                if (lStack_78 == -0x8000000000000000) {
                  if (lStack_68 == 0) {
                    lVar16 = 1;
                  }
                  else {
                    lVar16 = _malloc(lStack_68);
                    if (lVar16 == 0) {
                      func_0x0001087c9084(1,lStack_68);
                    /* WARNING: Does not return */
                      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10177e194);
                      (*UNRECOVERED_JUMPTABLE)();
                    }
                  }
                  _memcpy(lVar16,lStack_70,lStack_68);
                  lStack_78 = lStack_68;
                }
                puVar10[2] = lVar16;
                puVar10[3] = lStack_68;
                *puVar10 = 0x10;
                puVar10[1] = lStack_78;
                goto LAB_10177e0a8;
              }
              *(undefined1 *)(plVar11 + 3) = 1;
              *(undefined4 *)((long)plVar11 + 0x19) = uStack_b8;
              *(undefined1 *)((long)plVar11 + 0x1d) = uStack_b4;
            }
            *puVar10 = 0x15;
LAB_10177e0a8:
            (**(code **)(lVar17 + 0x20))(alStack_c8,uVar13,lVar18);
            return;
          }
          lVar16 = plVar12[1];
        }
        puVar10[1] = 1;
        *puVar10 = 0xd;
        puVar10[2] = uVar15 + uVar13;
        puVar10[3] = in_x4;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar12 + 0x20);
LAB_10177de68:
                    /* WARNING: Could not recover jumptable at 0x00010177de84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar12 + 3,lVar16,uVar13);
        return;
      }
      *(undefined8 *)(unaff_x21 + 0x10) = 0;
      if (unaff_x22 == (long *)0x0) {
        *in_stack_00000018 = 0x15;
        return;
      }
      _memmove();
      *(long **)(unaff_x21 + 0x10) = unaff_x22;
      plVar12 = unaff_x22;
    } while (*unaff_x28 < 5);
    _cStack0000000000000078 = (long *)0x0;
    uStack00000000000000a0 = in_stack_00000020;
    uStack00000000000000a8 = in_stack_00000028;
    in_stack_00000080 = unaff_x19;
  } while( true );
code_r0x00010177dba8:
  if (uVar15 == 0) {
LAB_10177dc30:
    lVar16 = 2;
    if (unaff_x22 != (long *)0x0) {
      lVar16 = 0;
    }
    auVar19._8_8_ = unaff_x22;
    auVar19._0_8_ = lVar16;
    unaff_x26 = 0x19;
    goto joined_r0x00010177dae4;
  }
  goto LAB_10177db84;
}

