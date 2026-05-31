
/* WARNING: Removing unreachable block (ram,0x0001017feb9c) */
/* WARNING: Removing unreachable block (ram,0x0001017febac) */
/* WARNING: Removing unreachable block (ram,0x0001017feb78) */
/* WARNING: Removing unreachable block (ram,0x0001017ff0d4) */
/* WARNING: Removing unreachable block (ram,0x0001017ff0d8) */
/* WARNING: Removing unreachable block (ram,0x0001017fec34) */
/* WARNING: Removing unreachable block (ram,0x0001017fec44) */
/* WARNING: Removing unreachable block (ram,0x0001017fec14) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1017fdeb4(void)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  long *plVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  undefined8 *unaff_x22;
  long *plVar34;
  undefined8 unaff_x23;
  long lVar35;
  char *pcVar36;
  undefined8 uVar37;
  ulong uVar38;
  long *plVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 *puVar42;
  undefined8 *unaff_x26;
  long lVar43;
  ulong uVar44;
  undefined8 uVar45;
  ulong uVar46;
  long unaff_x29;
  long *plVar47;
  long *plVar48;
  long *plVar49;
  long *plVar50;
  long *plVar51;
  undefined1 auVar52 [16];
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000038;
  long *in_stack_00000040;
  long *in_stack_00000058;
  long *in_stack_00000060;
  ulong in_stack_00000068;
  long *in_stack_00000098;
  undefined8 *in_stack_000000a0;
  undefined8 *puStack00000000000000b0;
  long *plStack00000000000000b8;
  undefined8 *in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long *in_stack_00000110;
  long *in_stack_00000118;
  long *in_stack_00000120;
  long *in_stack_00000128;
  long *in_stack_00000130;
  long in_stack_00000138;
  long in_stack_00000140;
  long in_stack_00000148;
  long in_stack_00000150;
  long *in_stack_00000160;
  long *in_stack_00000168;
  long *in_stack_00000170;
  long *in_stack_00000178;
  long *in_stack_00000180;
  long in_stack_00000188;
  long in_stack_00000190;
  long in_stack_00000198;
  long in_stack_000001a0;
  long *in_stack_000001b0;
  long *in_stack_000001b8;
  long *in_stack_000001c0;
  ulong in_stack_000001c8;
  long *in_stack_000001d0;
  undefined8 in_stack_000001d8;
  long *in_stack_000001e0;
  ulong in_stack_000001e8;
  long *in_stack_00000210;
  long *in_stack_00000218;
  long *plVar53;
  long *in_stack_00000220;
  long *plVar54;
  long *in_stack_00000228;
  long *plVar55;
  long *in_stack_00000230;
  long *plVar56;
  long *in_stack_00000238;
  long *plVar57;
  long *in_stack_00000240;
  long *plVar58;
  long *in_stack_00000248;
  long *plVar59;
  long in_stack_00000250;
  long in_stack_00000258;
  long *in_stack_000002b0;
  long *in_stack_000002b8;
  long *in_stack_000002c0;
  long *in_stack_000002c8;
  long *in_stack_000002d0;
  long *in_stack_000002d8;
  long *in_stack_000002e0;
  long *in_stack_000002e8;
  long in_stack_000002f0;
  long in_stack_000002f8;
  long in_stack_00000300;
  long in_stack_00000308;
  long *plVar60;
  long *in_stack_00000410;
  long *in_stack_00000418;
  
code_r0x0001017fdeb4:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0xb0,s_duplicate_agent_role_name_____di_108ac0ed7,&stack0x000002b0);
  unaff_x26[0xb] = in_stack_00000418;
  unaff_x26[10] = in_stack_00000410;
  in_stack_000001c0 = *(long **)(unaff_x29 + -0xa0);
  uVar13 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x000001b0);
  __ZN10codex_core6config11agent_roles23push_agent_role_warning17h3a3efcd5ce1839a4E
            (unaff_x23,uVar13);
  if (*(long *)(unaff_x29 + -0xe0) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xd8));
  }
  if ((in_stack_00000228 != (long *)0x8000000000000000) && (in_stack_00000228 != (long *)0x0)) {
    _free(in_stack_00000230);
  }
  if (in_stack_00000240 != (long *)0x8000000000000000) {
    if (in_stack_00000250 != 0) {
      plVar19 = in_stack_00000248 + 1;
      lVar28 = in_stack_00000250;
      do {
        if (plVar19[-1] != 0) {
          _free(*plVar19);
        }
        plVar19 = plVar19 + 3;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
    }
    if (in_stack_00000240 != (long *)0x0) {
      _free(in_stack_00000248);
    }
  }
  FUN_10194c9ac(&stack0x00000258);
  plVar19 = in_stack_00000210;
  plVar53 = in_stack_00000218;
  plVar54 = in_stack_00000220;
  plVar55 = in_stack_00000228;
  plVar56 = in_stack_00000230;
  plVar57 = in_stack_00000238;
  plVar58 = in_stack_00000240;
  plVar59 = in_stack_00000248;
  lVar28 = in_stack_00000250;
  lVar33 = in_stack_00000258;
  in_stack_00000210 = in_stack_000002b0;
  in_stack_00000218 = in_stack_000002b8;
  in_stack_00000220 = in_stack_000002c0;
  in_stack_00000238 = in_stack_000002d8;
  in_stack_00000240 = in_stack_000002e0;
  in_stack_00000248 = in_stack_000002e8;
  in_stack_00000250 = in_stack_000002f0;
  in_stack_00000258 = in_stack_000002f8;
LAB_1017fe0cc:
  lVar17 = unaff_x22[0x43];
  in_stack_00000228 = in_stack_000002c8;
  in_stack_00000230 = in_stack_000002d0;
joined_r0x0001017fe0d0:
  if (lVar17 != 0) {
    _free(unaff_x22[0x44]);
  }
LAB_1017fe0dc:
  puVar20 = (undefined8 *)unaff_x22[0x52];
  if (puVar20 == (undefined8 *)unaff_x22[0x54]) {
    unaff_x22[0x40] = 0x8000000000000000;
    puVar22 = puVar20;
  }
  else {
    unaff_x22[0x52] = puVar20 + 3;
    uVar13 = puVar20[2];
    uVar45 = *puVar20;
    unaff_x22[0x41] = puVar20[1];
    unaff_x22[0x40] = uVar45;
    unaff_x22[0x42] = uVar13;
    puVar22 = puVar20 + 3;
    if (unaff_x22[0x40] != -0x8000000000000000) goto code_r0x0001017fe118;
  }
  uVar29 = (long)unaff_x22[0x54] - (long)puVar22;
  if (uVar29 != 0) {
    uVar29 = uVar29 / 0x18;
    puVar22 = puVar22 + 1;
    do {
      if (puVar22[-1] != 0) {
        _free(*puVar22);
      }
      puVar22 = puVar22 + 3;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  if (unaff_x22[0x53] != 0) {
    _free(unaff_x22[0x51]);
  }
  bVar10 = false;
  plStack00000000000000b8 = (long *)unaff_x22[0x39];
  uVar29 = unaff_x22[0x3a];
  lVar17 = unaff_x22[0x3b];
  do {
    *(undefined1 *)in_stack_000000a0 = 1;
    FUN_1019361c4(in_stack_00000098);
    if (bVar10) {
      if (unaff_x22[0x2c] != 0) {
        _free(unaff_x22[0x2d]);
      }
      if (unaff_x22[0x29] != 0) {
        _free(unaff_x22[0x2a]);
      }
      *(undefined1 *)((long)unaff_x22 + 0x129) = 0;
      if ((unaff_x22[0x16] & 0x7fffffffffffffff) != 0) {
        _free(unaff_x22[0x17]);
      }
      while (FUN_101991238(&stack0x00000210,&stack0x000002b0), plVar19 != (long *)0x0) {
        if (plVar19[(long)plVar54 * 3 + 1] != 0) {
          _free(plVar19[(long)plVar54 * 3 + 2]);
        }
      }
      FUN_101990a78(&stack0x00000210,&stack0x000002b0);
      *(undefined1 *)((long)unaff_x22 + 0x12a) = 0;
      if (unaff_x22[2] != 0) {
        _free(*unaff_x22);
      }
      FUN_101990a78(&stack0x00000210,&stack0x000002b0);
      uVar13 = 1;
      if (((*(byte *)(in_stack_000000c0 + 0x25) & 1) != 0) && (in_stack_000000c0[9] != 0)) {
        _free(in_stack_000000c0[10]);
      }
LAB_1017fcff8:
      *(undefined1 *)(in_stack_000000c0 + 0x25) = 0;
      *in_stack_00000018 = uVar13;
      in_stack_00000018[1] = plStack00000000000000b8;
      uVar13 = unaff_x26[0x14];
      in_stack_00000018[3] = unaff_x26[0x15];
      in_stack_00000018[2] = uVar13;
      uVar15 = 1;
      goto LAB_1017fff44;
    }
    bVar10 = plStack00000000000000b8 != (long *)0x0;
    if (bVar10) {
      in_stack_00000038 = uVar29;
    }
    if (bVar10) {
      in_stack_00000040 = plStack00000000000000b8;
    }
    lVar43 = 0;
    if (plStack00000000000000b8 != (long *)0x0) {
      lVar43 = lVar17;
    }
    plVar39 = (long *)0x0;
    plVar34 = in_stack_00000040;
    plVar21 = plVar39;
    uVar44 = in_stack_00000038;
    bVar8 = bVar10;
    bVar9 = bVar10;
    if (lVar43 == 0) {
      bVar9 = false;
      lVar43 = 0;
      uVar46 = in_stack_00000038;
      plVar60 = in_stack_00000040;
      plVar21 = (long *)0x0;
      if (bVar10) {
joined_r0x0001017fe7e8:
        for (; plVar39 = plVar21, plVar21 = plVar34, uVar44 != 0; uVar44 = uVar44 - 1) {
          plVar34 = (long *)plVar21[0x86];
          plVar21 = plVar39;
        }
        goto LAB_1017fe7f8;
      }
    }
    else {
      do {
        lVar43 = lVar43 + -1;
        if (!bVar10) {
          func_0x000108a07a20(&UNK_10b2690f8);
          goto LAB_1017fdc7c;
        }
        if (plVar21 == (long *)0x0) {
          for (; plVar21 = plVar34, uVar44 != 0; uVar44 = uVar44 - 1) {
            plVar34 = (long *)plVar21[0x86];
          }
          uVar44 = 0;
          plVar34 = (long *)0x0;
          bVar9 = true;
          bVar8 = true;
          plVar39 = plVar21;
          if (*(short *)((long)plVar21 + 0x42a) == 0) goto LAB_1017fe42c;
        }
        else {
          plVar39 = plVar21;
          if (*(ushort *)((long)plVar21 + 0x42a) <= uVar44) {
LAB_1017fe42c:
            do {
              plVar21 = (long *)*plVar39;
              if (plVar21 == (long *)0x0) {
                _free(plVar39);
                func_0x000108a07a20(&UNK_10b2690c8);
                goto LAB_1017fdc7c;
              }
              plVar34 = (long *)((long)plVar34 + 1);
              uVar5 = *(ushort *)(plVar39 + 0x85);
              uVar44 = (ulong)uVar5;
              _free(plVar39);
              plVar39 = plVar21;
            } while (*(ushort *)((long)plVar21 + 0x42a) <= uVar5);
          }
        }
        uVar46 = uVar44 + 1;
        plVar39 = plVar21;
        if (plVar34 != (long *)0x0) {
          plVar39 = plVar21 + uVar46;
          do {
            plVar39 = (long *)plVar39[0x86];
            plVar34 = (long *)((long)plVar34 + -1);
          } while (plVar34 != (long *)0x0);
          uVar46 = 0;
        }
        plVar60 = (long *)0x0;
        plVar34 = (long *)plVar21[uVar44 * 3 + 1];
        in_stack_00000218 = (long *)plVar21[uVar44 * 3 + 3];
        in_stack_00000210 = (long *)plVar21[uVar44 * 3 + 2];
        in_stack_00000228 = (long *)plVar21[uVar44 * 9 + 0x23];
        in_stack_00000220 = (long *)plVar21[uVar44 * 9 + 0x22];
        in_stack_00000300 = plVar21[uVar44 * 9 + 0x2a];
        in_stack_00000248 = (long *)plVar21[uVar44 * 9 + 0x27];
        in_stack_00000240 = (long *)plVar21[uVar44 * 9 + 0x26];
        in_stack_00000258 = plVar21[uVar44 * 9 + 0x29];
        in_stack_00000250 = plVar21[uVar44 * 9 + 0x28];
        in_stack_00000238 = (long *)plVar21[uVar44 * 9 + 0x25];
        in_stack_00000230 = (long *)plVar21[uVar44 * 9 + 0x24];
        unaff_x26[0x1b] = in_stack_00000238;
        unaff_x26[0x1a] = in_stack_00000230;
        unaff_x26[0x1d] = in_stack_00000248;
        unaff_x26[0x1c] = in_stack_00000240;
        unaff_x26[0x1f] = in_stack_00000258;
        unaff_x26[0x1e] = in_stack_00000250;
        unaff_x26[0x17] = in_stack_00000218;
        unaff_x26[0x16] = in_stack_00000210;
        unaff_x26[0x19] = in_stack_00000228;
        unaff_x26[0x18] = in_stack_00000220;
        if (plVar34 == (long *)0x8000000000000000) goto LAB_1017fe844;
        plVar47 = (long *)unaff_x26[0x17];
        plVar21 = (long *)unaff_x26[0x16];
        lVar41 = in_stack_000000c0[0x10];
        in_stack_000001b0 = plVar34;
        in_stack_000001b8 = plVar21;
        in_stack_000001c0 = plVar47;
        if (lVar41 != 0) {
          plStack00000000000000b8 = (long *)in_stack_000000c0[0x11];
LAB_1017fe550:
          uVar5 = *(ushort *)(lVar41 + 0x42a);
          lVar27 = (ulong)uVar5 * 0x18;
          uVar44 = 0xffffffffffffffff;
          lVar26 = lVar41 + 8;
          do {
            uVar25 = (ulong)uVar5;
            if (lVar27 == 0) goto joined_r0x0001017fe5d0;
            plVar48 = *(long **)(lVar26 + 0x10);
            plVar34 = plVar47;
            if (plVar48 <= plVar47) {
              plVar34 = plVar48;
            }
            iVar12 = _memcmp(plVar21,*(undefined8 *)(lVar26 + 8),plVar34);
            lVar18 = (long)plVar47 - (long)plVar48;
            if (iVar12 != 0) {
              lVar18 = (long)iVar12;
            }
            cVar11 = 0 < lVar18;
            if (lVar18 < 0) {
              cVar11 = -1;
            }
            lVar27 = lVar27 + -0x18;
            uVar44 = uVar44 + 1;
            lVar26 = lVar26 + 0x18;
          } while (cVar11 == '\x01');
          uVar25 = uVar44;
          if (cVar11 == '\0') {
            uVar45 = in_stack_000000c0[8];
            *(long ***)(unaff_x29 + -0xe0) = &stack0x000001b0;
            *(undefined **)(unaff_x29 + -0xd8) = &DAT_1019a7324;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x000002b0,s_duplicate_agent_role_name______d_108ac0e5f,
                       unaff_x29 + -0xe0);
            *(long **)(unaff_x29 + -0xa0) = in_stack_00000220;
            uVar13 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,unaff_x29 + -0xb0);
            __ZN10codex_core6config11agent_roles23push_agent_role_warning17h3a3efcd5ce1839a4E
                      (uVar45,uVar13);
            if (((ulong)plVar54 & 0x7fffffffffffffff) != 0) {
              _free(plVar55);
            }
            if (((ulong)plVar57 & 0x7fffffffffffffff) != 0) {
              _free(plVar58);
            }
            if (lVar28 != -0x8000000000000000) {
              if (in_stack_00000300 != 0) {
                puVar20 = (undefined8 *)(lVar33 + 8);
                lVar41 = in_stack_00000300;
                do {
                  if (puVar20[-1] != 0) {
                    _free(*puVar20);
                  }
                  puVar20 = puVar20 + 3;
                  lVar41 = lVar41 + -1;
                } while (lVar41 != 0);
              }
              if (lVar28 != 0) {
                _free(lVar33);
              }
            }
            in_stack_00000410 = in_stack_00000210;
            in_stack_00000418 = in_stack_00000218;
            if (in_stack_000001b0 != (long *)0x0) {
              _free(in_stack_000001b8);
            }
            goto LAB_1017fe3bc;
          }
joined_r0x0001017fe5d0:
          if (plStack00000000000000b8 != (long *)0x0) goto LAB_1017fe5d4;
        }
        in_stack_00000418 = in_stack_000001b8;
        in_stack_00000410 = in_stack_000001b0;
        *(long **)(unaff_x29 + -0xa0) = in_stack_000001c0;
        FUN_10198b81c(&stack0x000002b0,in_stack_000000c0 + 0x10,unaff_x29 + -0xb0,&stack0x00000220);
        if (in_stack_00000210 != (long *)0x8000000000000001) {
          if ((in_stack_00000210 != (long *)0x8000000000000000) &&
             (in_stack_00000210 != (long *)0x0)) {
            _free(in_stack_00000218);
          }
          if ((in_stack_00000228 != (long *)0x8000000000000000) &&
             (in_stack_00000228 != (long *)0x0)) {
            _free(in_stack_00000230);
          }
          if (in_stack_00000240 != (long *)0x8000000000000000) {
            if (in_stack_00000250 != 0) {
              plVar34 = in_stack_00000248 + 1;
              lVar41 = in_stack_00000250;
              do {
                if (plVar34[-1] != 0) {
                  _free(*plVar34);
                }
                plVar34 = plVar34 + 3;
                lVar41 = lVar41 + -1;
              } while (lVar41 != 0);
            }
            if (in_stack_00000240 != (long *)0x0) {
              _free(in_stack_00000248);
            }
          }
        }
LAB_1017fe3bc:
        unaff_x26 = &stack0x00000160;
        bVar10 = true;
        plVar34 = (long *)0x0;
        plVar21 = plVar39;
        uVar44 = uVar46;
      } while (lVar43 != 0);
      bVar9 = false;
      if (bVar8) {
        plVar34 = plVar60;
        if (plVar39 == (long *)0x0) goto joined_r0x0001017fe7e8;
LAB_1017fe7f8:
        bVar9 = false;
        plVar34 = (long *)*plVar21;
        while (plVar47 = plVar34, plVar47 != (long *)0x0) {
          _free(plVar21);
          plVar21 = plVar47;
          plVar34 = (long *)*plVar47;
        }
        _free(plVar21);
      }
    }
LAB_1017fe844:
    plVar34 = plVar39;
    uVar44 = uVar46;
    bVar10 = bVar9;
    if (lVar43 == 0) {
      if (bVar9) goto LAB_1017fea10;
    }
    else {
      do {
        lVar43 = lVar43 + -1;
        if (!bVar10) {
          func_0x000108a07a20(&UNK_10b2690f8);
          goto LAB_1017fdc7c;
        }
        if (plVar34 == (long *)0x0) {
          for (; plVar34 = plVar60, uVar44 != 0; uVar44 = uVar44 - 1) {
            plVar60 = (long *)plVar34[0x86];
          }
          uVar44 = 0;
          plVar60 = (long *)0x0;
          bVar9 = true;
          plVar39 = plVar34;
          if (*(short *)((long)plVar34 + 0x42a) == 0) goto LAB_1017fe8c4;
        }
        else {
          plVar39 = plVar34;
          if (*(ushort *)((long)plVar34 + 0x42a) <= uVar44) {
LAB_1017fe8c4:
            do {
              plVar34 = (long *)*plVar39;
              if (plVar34 == (long *)0x0) {
                _free(plVar39);
                func_0x000108a07a20(&UNK_10b2690c8);
                goto LAB_1017fdc7c;
              }
              plVar60 = (long *)((long)plVar60 + 1);
              uVar5 = *(ushort *)(plVar39 + 0x85);
              uVar44 = (ulong)uVar5;
              _free(plVar39);
              plVar39 = plVar34;
            } while (*(ushort *)((long)plVar34 + 0x42a) <= uVar5);
          }
        }
        uVar46 = uVar44 + 1;
        if (plVar60 == (long *)0x0) {
          plVar21 = plVar34 + uVar44 * 3 + 1;
          lVar41 = *plVar21;
          plVar39 = plVar34;
        }
        else {
          plVar39 = plVar34 + uVar46;
          do {
            plVar39 = (long *)plVar39[0x86];
            plVar60 = (long *)((long)plVar60 + -1);
          } while (plVar60 != (long *)0x0);
          uVar46 = 0;
          plVar21 = plVar34 + uVar44 * 3 + 1;
          lVar41 = *plVar21;
        }
        if (lVar41 != 0) {
          _free(plVar21[1]);
        }
        plVar60 = (long *)0x0;
        if (plVar34[uVar44 * 9 + 0x22] == -0x8000000000000000 || plVar34[uVar44 * 9 + 0x22] == 0) {
          if (plVar34[uVar44 * 9 + 0x25] != -0x8000000000000000 && plVar34[uVar44 * 9 + 0x25] != 0)
          goto LAB_1017fe99c;
LAB_1017fe954:
          lVar41 = plVar34[uVar44 * 9 + 0x28];
        }
        else {
          _free(plVar34[uVar44 * 9 + 0x23]);
          if (plVar34[uVar44 * 9 + 0x25] == -0x8000000000000000 || plVar34[uVar44 * 9 + 0x25] == 0)
          goto LAB_1017fe954;
LAB_1017fe99c:
          _free(plVar34[uVar44 * 9 + 0x26]);
          lVar41 = plVar34[uVar44 * 9 + 0x28];
        }
        if (lVar41 != -0x8000000000000000) {
          lVar26 = plVar34[uVar44 * 9 + 0x29];
          lVar27 = plVar34[uVar44 * 9 + 0x2a];
          if (lVar27 != 0) {
            puVar20 = (undefined8 *)(lVar26 + 8);
            do {
              if (puVar20[-1] != 0) {
                _free(*puVar20);
              }
              puVar20 = puVar20 + 3;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          if (lVar41 != 0) {
            _free(lVar26);
          }
        }
        plVar34 = plVar39;
        uVar44 = uVar46;
        bVar10 = true;
      } while (lVar43 != 0);
      plVar60 = (long *)0x0;
      if (bVar9) {
LAB_1017fea10:
        if (plVar39 == (long *)0x0) {
          for (; plVar39 = plVar60, uVar46 != 0; uVar46 = uVar46 - 1) {
            plVar60 = (long *)plVar39[0x86];
          }
        }
        plVar34 = (long *)*plVar39;
        while (plVar21 = plVar34, plVar21 != (long *)0x0) {
          _free(plVar39);
          plVar39 = plVar21;
          plVar34 = (long *)*plVar21;
        }
        _free(plVar39);
      }
    }
    if (in_stack_000000c0[0x2c] != 0) {
      _free(in_stack_000000c0[0x2d]);
    }
    if (in_stack_000000c0[0x29] != 0) {
      _free(in_stack_000000c0[0x2a]);
    }
    do {
      lVar43 = 0;
      *(undefined1 *)((long)in_stack_000000c0 + 0x12a) = 0;
      plVar34 = (long *)in_stack_000000c0[0x10];
      bVar10 = plVar34 != (long *)0x0;
      if (bVar10) {
        in_stack_00000068 = in_stack_000000c0[0x11];
        lVar43 = in_stack_000000c0[0x12];
        in_stack_00000058 = plVar34;
        in_stack_00000060 = plVar34;
      }
      plVar21 = (long *)(ulong)bVar10;
      in_stack_000001b8 = (long *)0x0;
      in_stack_000001c0 = in_stack_00000058;
      in_stack_000001c8 = in_stack_00000068;
      in_stack_000001d8 = 0;
      in_stack_000001e0 = in_stack_00000060;
      in_stack_000001e8 = in_stack_00000068;
      plVar39 = (long *)0x0;
      plVar34 = in_stack_00000058;
      uVar44 = in_stack_00000068;
      in_stack_00000098 = plVar21;
      in_stack_000001b0 = plVar21;
      in_stack_000001d0 = plVar21;
      if (lVar43 == 0) {
        in_stack_000001b0 = (long *)0x0;
        lVar43 = 0;
        uVar46 = in_stack_00000068;
        if (bVar10) {
joined_r0x0001017ff24c:
          for (; plVar60 = plVar34, uVar46 != 0; uVar46 = uVar46 - 1) {
            plVar34 = (long *)plVar60[0x86];
          }
          goto LAB_1017ff25c;
        }
      }
      else {
        do {
          lVar43 = lVar43 + -1;
          if ((int)plVar21 == 0) {
            func_0x000108a07a20(&UNK_10b2690f8);
            goto LAB_1017fdc7c;
          }
          if (plVar39 == (long *)0x0) {
            for (; plVar39 = plVar34, uVar44 != 0; uVar44 = uVar44 - 1) {
              plVar34 = (long *)plVar39[0x86];
            }
            uVar44 = 0;
            plVar34 = (long *)0x0;
            in_stack_000001b0 = (long *)0x1;
            in_stack_00000098 = (long *)0x1;
            plVar21 = plVar39;
            if (*(short *)((long)plVar39 + 0x42a) == 0) goto LAB_1017feef8;
          }
          else {
            plVar21 = plVar39;
            if (*(ushort *)((long)plVar39 + 0x42a) <= uVar44) {
LAB_1017feef8:
              do {
                plVar39 = (long *)*plVar21;
                if (plVar39 == (long *)0x0) {
                  _free(plVar21);
                  func_0x000108a07a20(&UNK_10b2690c8);
                  goto LAB_1017fdc7c;
                }
                plVar34 = (long *)((long)plVar34 + 1);
                uVar5 = *(ushort *)(plVar21 + 0x85);
                uVar44 = (ulong)uVar5;
                _free(plVar21);
                plVar21 = plVar39;
              } while (*(ushort *)((long)plVar39 + 0x42a) <= uVar5);
            }
          }
          uVar46 = uVar44 + 1;
          plVar60 = plVar39;
          if (plVar34 != (long *)0x0) {
            plVar60 = plVar39 + uVar46;
            do {
              plVar60 = (long *)plVar60[0x86];
              plVar34 = (long *)((long)plVar34 + -1);
            } while (plVar34 != (long *)0x0);
            uVar46 = 0;
          }
          in_stack_000001c0 = (long *)0x0;
          plVar34 = (long *)plVar39[uVar44 * 3 + 1];
          plVar21 = (long *)plVar39[uVar44 * 3 + 2];
          uVar25 = plVar39[uVar44 * 3 + 3];
          in_stack_00000418 = (long *)plVar39[uVar44 * 9 + 0x23];
          in_stack_00000410 = (long *)plVar39[uVar44 * 9 + 0x22];
          plVar48 = (long *)plVar39[uVar44 * 9 + 0x25];
          plVar47 = (long *)plVar39[uVar44 * 9 + 0x24];
          plVar50 = (long *)plVar39[uVar44 * 9 + 0x27];
          plVar49 = (long *)plVar39[uVar44 * 9 + 0x26];
          plVar51 = (long *)plVar39[uVar44 * 9 + 0x29];
          plVar23 = (long *)plVar39[uVar44 * 9 + 0x28];
          *(long *)(unaff_x29 + -0x70) = plVar39[uVar44 * 9 + 0x2a];
          plVar39 = plVar60;
          in_stack_000001b8 = plVar60;
          in_stack_000001c8 = uVar46;
          if (plVar34 == (long *)0x8000000000000000) goto LAB_1017ff294;
          lVar41 = *(long *)(unaff_x29 + -0x70);
          lVar26 = in_stack_000000c0[0xc];
          if (lVar26 != 0) {
            plStack00000000000000b8 = (long *)in_stack_000000c0[0xd];
            while( true ) {
              uVar5 = *(ushort *)(lVar26 + 0x42a);
              lVar35 = (ulong)uVar5 * 0x18;
              lVar27 = lVar26 + 200;
              uVar44 = 0xffffffffffffffff;
              lVar18 = lVar26 + 8;
              do {
                uVar31 = (ulong)uVar5;
                if (lVar35 == 0) goto joined_r0x0001017ff048;
                uVar2 = *(ulong *)(lVar18 + 0x10);
                uVar31 = uVar25;
                if (uVar2 <= uVar25) {
                  uVar31 = uVar2;
                }
                iVar12 = _memcmp(plVar21,*(undefined8 *)(lVar18 + 8),uVar31);
                lVar32 = uVar25 - uVar2;
                if (iVar12 != 0) {
                  lVar32 = (long)iVar12;
                }
                cVar11 = 0 < lVar32;
                if (lVar32 < 0) {
                  cVar11 = -1;
                }
                lVar35 = lVar35 + -0x18;
                lVar27 = lVar27 + 0x48;
                uVar44 = uVar44 + 1;
                lVar18 = lVar18 + 0x18;
              } while (cVar11 == '\x01');
              uVar31 = uVar44;
              if (cVar11 == '\0') break;
joined_r0x0001017ff048:
              if (plStack00000000000000b8 == (long *)0x0) goto LAB_1017ff06c;
              lVar26 = *(long *)(lVar26 + uVar31 * 8 + 0x430);
              plStack00000000000000b8 = (long *)((long)plStack00000000000000b8 + -1);
            }
            __ZN10codex_core6config11agent_roles25merge_missing_role_fields17h2be7b73f39649cbdE
                      (&stack0x00000350,lVar27);
          }
LAB_1017ff06c:
          *(long **)(unaff_x29 + -0xe0) = plVar21;
          *(ulong *)(unaff_x29 + -0xd8) = uVar25;
          if (in_stack_00000410 == (long *)0x8000000000000000) {
            plVar19 = (long *)(unaff_x29 + -0xe0);
            plVar53 = (long *)&DAT_103296230;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x000002b0,s_agent_role_____must_define_a_des_108af4f98,
                       &stack0x00000210);
            uVar13 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x000002b0);
            __ZN10codex_core6config11agent_roles23push_agent_role_warning17h3a3efcd5ce1839a4E
                      (in_stack_000000c0[8],uVar13);
            if ((plVar48 != (long *)0x8000000000000000) && (plVar48 != (long *)0x0)) {
              _free(plVar49);
            }
            plVar47 = in_stack_00000220;
            plVar48 = in_stack_00000228;
            plVar49 = in_stack_00000230;
            plVar50 = in_stack_00000238;
            if (plVar23 != (long *)0x8000000000000000) {
              if (lVar41 != 0) {
                plVar30 = plVar51 + 1;
                do {
                  if (plVar30[-1] != 0) {
                    _free(*plVar30);
                  }
                  plVar30 = plVar30 + 3;
                  lVar41 = lVar41 + -1;
                } while (lVar41 != 0);
              }
              if (plVar23 != (long *)0x0) {
                _free(plVar51);
              }
            }
joined_r0x0001017ff21c:
            plVar51 = in_stack_00000248;
            plVar23 = in_stack_00000240;
            lVar41 = in_stack_00000250;
            if (plVar34 != (long *)0x0) {
              _free(plVar21);
            }
          }
          else {
            *(long **)(unaff_x29 + -0xe0) = plVar34;
            *(long **)(unaff_x29 + -0xd8) = plVar21;
            *(ulong *)(unaff_x29 + -0xd0) = uVar25;
            FUN_10198b81c(&stack0x00000210,in_stack_000000c0 + 0xc,unaff_x29 + -0xe0,
                          &stack0x000002b0);
            in_stack_00000210 = in_stack_00000410;
            in_stack_00000218 = in_stack_00000418;
            if (plVar19 != (long *)0x8000000000000001) {
              if ((plVar19 != (long *)0x8000000000000000) && (plVar19 != (long *)0x0)) {
                _free(plVar53);
              }
              if ((plVar55 != (long *)0x8000000000000000) && (plVar55 != (long *)0x0)) {
                _free(plVar56);
              }
              if (plVar58 != (long *)0x8000000000000000) {
                in_stack_00000250 = lVar41;
                in_stack_00000240 = plVar23;
                in_stack_00000248 = plVar51;
                plVar21 = plVar59;
                plVar34 = plVar58;
                if (lVar28 != 0) {
                  plVar23 = plVar59 + 1;
                  lVar41 = lVar28;
                  do {
                    if (plVar23[-1] != 0) {
                      _free(*plVar23);
                    }
                    plVar23 = plVar23 + 3;
                    lVar41 = lVar41 + -1;
                  } while (lVar41 != 0);
                }
                goto joined_r0x0001017ff21c;
              }
            }
          }
          plVar21 = (long *)0x1;
          plVar34 = (long *)0x0;
          uVar44 = uVar46;
          in_stack_00000220 = plVar47;
          in_stack_00000228 = plVar48;
          in_stack_00000230 = plVar49;
          in_stack_00000238 = plVar50;
          in_stack_00000240 = plVar23;
          in_stack_00000248 = plVar51;
          in_stack_00000250 = lVar41;
        } while (lVar43 != 0);
        in_stack_000001b0 = (long *)0x0;
        if (in_stack_00000098 != (long *)0x0) {
          plVar34 = (long *)0x0;
          if (plVar60 == (long *)0x0) goto joined_r0x0001017ff24c;
LAB_1017ff25c:
          in_stack_000001b0 = (long *)0x0;
          plVar34 = (long *)*plVar60;
          while (plVar39 = plVar34, plVar39 != (long *)0x0) {
            _free(plVar60);
            plVar60 = plVar39;
            plVar34 = (long *)*plVar39;
          }
          _free(plVar60);
          plVar39 = in_stack_000001b8;
          uVar46 = in_stack_000001c8;
        }
      }
LAB_1017ff294:
      plVar21 = in_stack_000001b0;
      plVar34 = plVar39;
      uVar44 = uVar46;
      if (lVar43 == 0) {
        plVar34 = in_stack_000001c0;
        if (((ulong)in_stack_000001b0 & 1) != 0) goto LAB_1017ff448;
LAB_1017ff490:
        *(undefined1 *)((long)in_stack_000000c0 + 0x129) = 0;
        if ((in_stack_000000c0[0x16] & 0x7fffffffffffffff) != 0) goto LAB_1017ff610;
LAB_1017ff4a4:
        plVar34 = (long *)in_stack_000000c0[0x13];
        if (plVar34 == (long *)0x0) goto LAB_1017ff624;
LAB_1017ff4b0:
        uVar44 = in_stack_000000c0[0x14];
        lVar43 = in_stack_000000c0[0x15];
        plVar39 = plVar34;
        if (lVar43 == 0) {
          for (; uVar44 != 0; uVar44 = uVar44 - 1) {
            plVar39 = (long *)plVar39[0x23];
          }
        }
        else {
          plVar39 = (long *)0x0;
          do {
            if (plVar39 == (long *)0x0) {
              for (; plVar39 = plVar34, uVar44 != 0; uVar44 = uVar44 - 1) {
                plVar34 = (long *)plVar39[0x23];
              }
              plVar34 = (long *)0x0;
              uVar44 = 0;
              if (*(short *)((long)plVar39 + 0x112) == 0) goto LAB_1017ff538;
            }
            else if (*(ushort *)((long)plVar39 + 0x112) <= uVar44) {
LAB_1017ff538:
              do {
                plVar21 = (long *)*plVar39;
                if (plVar21 == (long *)0x0) {
                  _free();
                  func_0x000108a07a20(&UNK_10b2690c8);
                  goto LAB_1017fdc7c;
                }
                plVar34 = (long *)((long)plVar34 + 1);
                uVar5 = *(ushort *)(plVar39 + 0x22);
                uVar44 = (ulong)uVar5;
                _free();
                plVar39 = plVar21;
              } while (*(ushort *)((long)plVar21 + 0x112) <= uVar5);
            }
            if (plVar34 == (long *)0x0) {
              plVar34 = plVar39 + uVar44 * 3 + 1;
              lVar41 = *plVar34;
              uVar44 = uVar44 + 1;
            }
            else {
              plVar21 = plVar39 + uVar44 + 1;
              do {
                plVar21 = (long *)plVar21[0x23];
                plVar34 = (long *)((long)plVar34 + -1);
              } while (plVar34 != (long *)0x0);
              plVar34 = plVar39 + uVar44 * 3 + 1;
              lVar41 = *plVar34;
              uVar44 = 0;
              plVar39 = plVar21;
            }
            if (lVar41 != 0) {
              _free(plVar34[1]);
            }
            plVar34 = (long *)0x0;
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
        }
        plVar34 = (long *)*plVar39;
        while (plVar21 = plVar34, plVar21 != (long *)0x0) {
          _free(plVar39);
          plVar39 = plVar21;
          plVar34 = (long *)*plVar21;
        }
        _free(plVar39);
        *(undefined1 *)((long)in_stack_000000c0 + 0x12a) = 0;
        puVar20 = (undefined8 *)in_stack_000000c0[1];
        if (puVar20 == (undefined8 *)in_stack_000000c0[3]) {
LAB_1017fcfd8:
          unaff_x26 = &stack0x00000160;
          if (in_stack_000000c0[2] != 0) {
            _free(*in_stack_000000c0);
          }
          uVar13 = 0;
          plStack00000000000000b8 = (long *)in_stack_000000c0[0xc];
          goto LAB_1017fcff8;
        }
      }
      else {
        do {
          lVar43 = lVar43 + -1;
          if (((ulong)plVar21 & 1) == 0) {
            func_0x000108a07a20(&UNK_10b2690f8);
            goto LAB_1017fdc7c;
          }
          plVar39 = in_stack_000001c0;
          if (plVar34 == (long *)0x0) {
            for (; plVar34 = plVar39, uVar44 != 0; uVar44 = uVar44 - 1) {
              plVar39 = (long *)plVar34[0x86];
            }
            uVar44 = 0;
            plVar21 = (long *)0x0;
            in_stack_000001b0 = (long *)0x1;
            plVar39 = plVar34;
            if (*(short *)((long)plVar34 + 0x42a) == 0) goto LAB_1017ff314;
          }
          else {
            plVar21 = in_stack_000001c0;
            plVar39 = plVar34;
            if (*(ushort *)((long)plVar34 + 0x42a) <= uVar44) {
LAB_1017ff314:
              do {
                plVar34 = (long *)*plVar39;
                if (plVar34 == (long *)0x0) {
                  _free(plVar39);
                  func_0x000108a07a20(&UNK_10b2690c8);
                  goto LAB_1017fdc7c;
                }
                plVar21 = (long *)((long)plVar21 + 1);
                uVar5 = *(ushort *)(plVar39 + 0x85);
                uVar44 = (ulong)uVar5;
                _free(plVar39);
                plVar39 = plVar34;
              } while (*(ushort *)((long)plVar34 + 0x42a) <= uVar5);
            }
          }
          uVar46 = uVar44 + 1;
          if (plVar21 == (long *)0x0) {
            plVar21 = plVar34 + uVar44 * 3 + 1;
            lVar41 = *plVar21;
            plVar39 = plVar34;
          }
          else {
            plVar39 = plVar34 + uVar46;
            do {
              plVar39 = (long *)plVar39[0x86];
              plVar21 = (long *)((long)plVar21 + -1);
            } while (plVar21 != (long *)0x0);
            uVar46 = 0;
            plVar21 = plVar34 + uVar44 * 3 + 1;
            lVar41 = *plVar21;
          }
          in_stack_000001c0 = (long *)0x0;
          in_stack_000001b8 = plVar39;
          in_stack_000001c8 = uVar46;
          if (lVar41 != 0) {
            in_stack_000001c0 = (long *)0x0;
            _free(plVar21[1]);
          }
          if (plVar34[uVar44 * 9 + 0x22] == -0x8000000000000000 || plVar34[uVar44 * 9 + 0x22] == 0)
          {
            if (plVar34[uVar44 * 9 + 0x25] != -0x8000000000000000 && plVar34[uVar44 * 9 + 0x25] != 0
               ) goto LAB_1017ff3e4;
LAB_1017ff3a0:
            lVar41 = plVar34[uVar44 * 9 + 0x28];
          }
          else {
            _free(plVar34[uVar44 * 9 + 0x23]);
            if (plVar34[uVar44 * 9 + 0x25] == -0x8000000000000000 || plVar34[uVar44 * 9 + 0x25] == 0
               ) goto LAB_1017ff3a0;
LAB_1017ff3e4:
            _free(plVar34[uVar44 * 9 + 0x26]);
            lVar41 = plVar34[uVar44 * 9 + 0x28];
          }
          if (lVar41 != -0x8000000000000000) {
            lVar26 = plVar34[uVar44 * 9 + 0x29];
            lVar27 = plVar34[uVar44 * 9 + 0x2a];
            if (lVar27 != 0) {
              puVar20 = (undefined8 *)(lVar26 + 8);
              do {
                if (puVar20[-1] != 0) {
                  _free(*puVar20);
                }
                puVar20 = puVar20 + 3;
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
            }
            if (lVar41 != 0) {
              _free(lVar26);
            }
          }
          plVar21 = (long *)0x1;
          plVar34 = plVar39;
          uVar44 = uVar46;
        } while (lVar43 != 0);
        plVar34 = (long *)0x0;
        if (((ulong)in_stack_000001b0 & 1) == 0) goto LAB_1017ff490;
LAB_1017ff448:
        if (plVar39 == (long *)0x0) {
          for (; plVar39 = plVar34, uVar46 != 0; uVar46 = uVar46 - 1) {
            plVar34 = (long *)plVar39[0x86];
          }
        }
        plVar34 = (long *)*plVar39;
        while (plVar21 = plVar34, plVar21 != (long *)0x0) {
          _free(plVar39);
          plVar39 = plVar21;
          plVar34 = (long *)*plVar21;
        }
        _free(plVar39);
        *(undefined1 *)((long)in_stack_000000c0 + 0x129) = 0;
        if ((in_stack_000000c0[0x16] & 0x7fffffffffffffff) == 0) goto LAB_1017ff4a4;
LAB_1017ff610:
        _free(in_stack_000000c0[0x17]);
        plVar34 = (long *)in_stack_000000c0[0x13];
        if (plVar34 != (long *)0x0) goto LAB_1017ff4b0;
LAB_1017ff624:
        *(undefined1 *)((long)in_stack_000000c0 + 0x12a) = 0;
        puVar20 = (undefined8 *)in_stack_000000c0[1];
        if (puVar20 == (undefined8 *)in_stack_000000c0[3]) goto LAB_1017fcfd8;
      }
      uVar13 = *puVar20;
      in_stack_000000c0[1] = puVar20 + 1;
      in_stack_000000c0[0xf] = uVar13;
      in_stack_000000c0[0x10] = 0;
      in_stack_000000c0[0x12] = 0;
      in_stack_000000c0[0x13] = 0;
      *(undefined1 *)((long)in_stack_000000c0 + 0x12a) = 1;
      in_stack_000000c0[0x15] = 0;
      __ZN12codex_config5state16ConfigLayerEntry13config_folder17h164a4a8a75c4d2e0E
                (in_stack_000000c0 + 0x16);
      uVar13 = 0;
      if (in_stack_000000c0[0x16] != -0x8000000000000000) {
        uVar13 = in_stack_000000c0[0x17];
      }
      __ZN10codex_core6config11agent_roles22agents_toml_from_layer17h36763d8d8a695d58E
                (&stack0x000000c8,in_stack_000000c0[0xf] + 0x98,uVar13,in_stack_000000c0[0x18]);
      if (in_stack_000000c8 == 3) {
        __ZN10codex_core6config11agent_roles23push_agent_role_warning17h3a3efcd5ce1839a4E
                  (in_stack_000000c0[8],in_stack_000000d0);
        *(undefined1 *)((long)in_stack_000000c0 + 0x129) = 1;
        in_stack_000000c0[0x19] = 2;
      }
      else {
        *(undefined1 *)((long)in_stack_000000c0 + 0x129) = 1;
        in_stack_000000c0[0x1a] = in_stack_000000d0;
        in_stack_000000c0[0x19] = in_stack_000000c8;
        in_stack_000000c0[0x1c] = in_stack_000000e0;
        in_stack_000000c0[0x1b] = in_stack_000000d8;
        in_stack_000000c0[0x1e] = in_stack_000000f0;
        in_stack_000000c0[0x1d] = in_stack_000000e8;
        in_stack_000000c0[0x20] = in_stack_00000100;
        in_stack_000000c0[0x1f] = in_stack_000000f8;
        in_stack_000000c0[0x21] = in_stack_00000108;
        if (in_stack_000000c0[0x19] != 2) {
          uVar13 = 0;
          *(undefined1 *)((long)in_stack_000000c0 + 0x129) = 0;
          in_stack_000000c0[0x2b] = in_stack_000000f0;
          in_stack_000000c0[0x2a] = in_stack_000000e8;
          in_stack_000000c0[0x2d] = in_stack_00000100;
          in_stack_000000c0[0x2c] = in_stack_000000f8;
          in_stack_000000c0[0x2e] = in_stack_00000108;
          in_stack_000000c0[0x27] = in_stack_000000d0;
          in_stack_000000c0[0x26] = in_stack_000000c8;
          in_stack_000000c0[0x29] = in_stack_000000e0;
          in_stack_000000c0[0x28] = in_stack_000000d8;
          lVar43 = in_stack_000000c0[0x2b];
          if (lVar43 != 0) {
            in_stack_00000010 = in_stack_000000c0[0x2c];
            uVar13 = in_stack_000000c0[0x2d];
            in_stack_00000000 = lVar43;
            in_stack_00000008 = lVar43;
          }
          uVar44 = (ulong)(lVar43 != 0);
          in_stack_000000c0[0x2f] = uVar44;
          in_stack_000000c0[0x30] = 0;
          in_stack_000000c0[0x31] = in_stack_00000008;
          in_stack_000000c0[0x32] = in_stack_00000010;
          in_stack_000000c0[0x33] = uVar44;
          in_stack_000000c0[0x34] = 0;
          in_stack_000000c0[0x35] = in_stack_00000000;
          in_stack_000000c0[0x36] = in_stack_00000010;
          in_stack_000000c0[0x37] = uVar13;
          plVar34 = in_stack_00000210;
          plVar39 = in_stack_00000218;
          plVar21 = in_stack_00000220;
LAB_1017ff82c:
          while( true ) {
            in_stack_00000220 = plVar21;
            in_stack_00000218 = plVar39;
            in_stack_00000210 = plVar34;
            auVar52 = FUN_1017f81d4(in_stack_000000c0 + 0x2f);
            lVar43 = auVar52._0_8_;
            if (lVar43 == 0) break;
            uVar13 = *(undefined8 *)(lVar43 + 8);
            uVar45 = *(undefined8 *)(lVar43 + 0x10);
            in_stack_000000c0[0x3d] = in_stack_000000c0[5];
            in_stack_000000c0[0x3c] = in_stack_000000c0[4];
            in_stack_000000c0[0x3e] = uVar13;
            in_stack_000000c0[0x3f] = uVar45;
            in_stack_000000c0[0x40] = auVar52._8_8_;
            *(undefined1 *)((long)in_stack_000000c0 + 0x20a) = 0;
            FUN_101800624(&stack0x000002b0,in_stack_000000c0 + 0x38,in_stack_00000020);
            if (in_stack_00000210 == (long *)0x8000000000000001) {
              *in_stack_00000018 = 2;
              uVar15 = 4;
              goto LAB_1017fff44;
            }
            in_stack_00000160 = in_stack_00000228;
            in_stack_00000168 = in_stack_00000230;
            in_stack_00000170 = in_stack_00000238;
            in_stack_00000178 = in_stack_00000240;
            in_stack_00000180 = in_stack_00000248;
            in_stack_00000188 = in_stack_00000250;
            in_stack_00000190 = in_stack_00000258;
            in_stack_00000198 = in_stack_00000300;
            in_stack_000001a0 = in_stack_00000308;
            FUN_10192ffb4(in_stack_000000c0 + 0x38);
            lVar43 = in_stack_00000188;
            plVar47 = in_stack_00000180;
            plVar60 = in_stack_00000178;
            plVar34 = in_stack_00000210;
            plVar39 = in_stack_00000218;
            plVar21 = in_stack_00000220;
            if (in_stack_00000210 != (long *)0x8000000000000000) {
              in_stack_00000138 = in_stack_00000188;
              in_stack_00000130 = in_stack_00000180;
              in_stack_00000148 = in_stack_00000198;
              in_stack_00000140 = in_stack_00000190;
              in_stack_00000150 = in_stack_000001a0;
              in_stack_00000118 = in_stack_00000168;
              in_stack_00000110 = in_stack_00000160;
              in_stack_00000128 = in_stack_00000178;
              in_stack_00000120 = in_stack_00000170;
              if (in_stack_00000178 == (long *)0x8000000000000000) {
LAB_1017ffb8c:
                lVar43 = in_stack_000000c0[0x10];
                goto joined_r0x0001017ffb94;
              }
              pcVar36 = (char *)0x1;
              if (in_stack_00000188 != 0) {
                pcVar36 = (char *)_malloc(in_stack_00000188);
                if (pcVar36 == (char *)0x0) {
                  func_0x0001087c9084(1,lVar43);
                  goto LAB_1017fdc7c;
                }
                _memcpy(pcVar36,plVar47,lVar43);
                if (lVar43 == -0x8000000000000000) goto LAB_1017ffb8c;
              }
              puVar20 = (undefined8 *)in_stack_000000c0[0x13];
              if (puVar20 != (undefined8 *)0x0) {
                uVar46 = in_stack_000000c0[0x14];
                puVar22 = puVar20;
                uVar44 = uVar46;
                do {
                  puVar42 = puVar22 + 1;
                  uVar31 = (ulong)*(ushort *)((long)puVar22 + 0x112);
                  lVar41 = uVar31 * 0x18;
                  uVar25 = 0xffffffffffffffff;
                  puVar14 = puVar42;
                  if (lVar43 == 0) {
                    do {
                      if (lVar41 == 0) goto joined_r0x0001017ffa78;
                      plVar34 = (long *)puVar14[1];
                      plVar39 = (long *)puVar14[2];
                      plVar59 = (long *)CONCAT62((uint6)((ulong)plVar59 >> 0x10) & 0xffffffffff00,
                                                 0x201);
                      if (plVar39 == (long *)0x0) {
                        bVar10 = false;
                      }
                      else {
                        bVar10 = (char)*plVar34 == '/';
                      }
                      plVar21 = (long *)CONCAT71((int7)((ulong)plVar21 >> 8),6);
                      in_stack_00000248 =
                           (long *)CONCAT62(CONCAT51((int5)((ulong)in_stack_00000248 >> 0x18),bVar10
                                                    ),0x201);
                      cVar11 = func_0x00010603668c(&stack0x00000210,&stack0x000002b0);
                      puVar14 = puVar14 + 3;
                      lVar41 = lVar41 + -0x18;
                      uVar25 = uVar25 + 1;
                    } while (cVar11 == '\x01');
                  }
                  else {
                    do {
                      if (lVar41 == 0) goto joined_r0x0001017ffa78;
                      plVar34 = (long *)puVar14[1];
                      plVar39 = (long *)puVar14[2];
                      plVar59 = (long *)CONCAT62(CONCAT51((int5)((ulong)plVar59 >> 0x18),
                                                          *pcVar36 == '/'),0x201);
                      if (plVar39 == (long *)0x0) {
                        bVar10 = false;
                      }
                      else {
                        bVar10 = (char)*plVar34 == '/';
                      }
                      plVar21 = (long *)CONCAT71((int7)((ulong)plVar21 >> 8),6);
                      in_stack_00000248 =
                           (long *)CONCAT62(CONCAT51((int5)((ulong)in_stack_00000248 >> 0x18),bVar10
                                                    ),0x201);
                      cVar11 = func_0x00010603668c(&stack0x00000210,&stack0x000002b0);
                      puVar14 = puVar14 + 3;
                      lVar41 = lVar41 + -0x18;
                      uVar25 = uVar25 + 1;
                    } while (cVar11 == '\x01');
                  }
                  uVar31 = uVar25;
                  if (cVar11 == '\0') {
                    if (lVar43 != 0) {
                      _free(pcVar36);
                    }
                    goto LAB_1017ffb8c;
                  }
joined_r0x0001017ffa78:
                  if (uVar44 == 0) goto LAB_1017fff68;
                  puVar22 = (undefined8 *)puVar22[uVar31 + 0x23];
                  uVar44 = uVar44 - 1;
                } while( true );
              }
              puVar20 = (undefined8 *)_malloc(0x118);
              if (puVar20 != (undefined8 *)0x0) {
                in_stack_000000c0[0x13] = puVar20;
                in_stack_000000c0[0x14] = 0;
                *(undefined2 *)((long)puVar20 + 0x112) = 1;
                *puVar20 = 0;
                puVar20[1] = lVar43;
                puVar20[2] = pcVar36;
                puVar20[3] = lVar43;
                goto LAB_1017ffe54;
              }
              func_0x0001087c906c(8,0x118);
              goto LAB_1017fdc7c;
            }
            __ZN10codex_core6config11agent_roles23push_agent_role_warning17h3a3efcd5ce1839a4E
                      (in_stack_000000c0[8],in_stack_00000218);
          }
          plVar34 = (long *)in_stack_000000c0[0x2b];
          if (plVar34 != (long *)0x0) {
            uVar44 = in_stack_000000c0[0x2c];
            lVar43 = in_stack_000000c0[0x2d];
            plVar39 = plVar34;
            if (lVar43 == 0) {
              for (; uVar44 != 0; uVar44 = uVar44 - 1) {
                plVar39 = (long *)plVar39[0x86];
              }
            }
            else {
              plVar39 = (long *)0x0;
              do {
                plVar21 = plVar34;
                if (plVar39 == (long *)0x0) {
                  for (; uVar44 != 0; uVar44 = uVar44 - 1) {
                    plVar21 = (long *)plVar21[0x86];
                  }
                  plVar34 = (long *)0x0;
                  uVar46 = 0;
                  if (*(short *)((long)plVar21 + 0x42a) == 0) goto LAB_1017ffb24;
                }
                else {
                  plVar21 = plVar39;
                  uVar46 = uVar44;
                  if (*(ushort *)((long)plVar39 + 0x42a) <= uVar44) {
LAB_1017ffb24:
                    do {
                      plVar39 = (long *)*plVar21;
                      if (plVar39 == (long *)0x0) {
                        _free();
                        func_0x000108a07a20(&UNK_10b2690c8);
                        goto LAB_1017fdc7c;
                      }
                      plVar34 = (long *)((long)plVar34 + 1);
                      uVar5 = *(ushort *)(plVar21 + 0x85);
                      _free();
                      plVar21 = plVar39;
                      uVar46 = (ulong)uVar5;
                    } while (*(ushort *)((long)plVar39 + 0x42a) <= uVar5);
                  }
                }
                uVar44 = uVar46 + 1;
                if (plVar34 == (long *)0x0) {
                  plVar34 = plVar21 + uVar46 * 3 + 1;
                  lVar41 = *plVar34;
                  plVar39 = plVar21;
                }
                else {
                  plVar39 = plVar21 + uVar44;
                  do {
                    plVar39 = (long *)plVar39[0x86];
                    plVar34 = (long *)((long)plVar34 + -1);
                  } while (plVar34 != (long *)0x0);
                  uVar44 = 0;
                  plVar34 = plVar21 + uVar46 * 3 + 1;
                  lVar41 = *plVar34;
                }
                if (lVar41 != 0) {
                  _free(plVar34[1]);
                }
                lVar43 = lVar43 + -1;
                FUN_101956784(plVar21 + uVar46 * 9 + 0x22);
                plVar34 = (long *)0x0;
              } while (lVar43 != 0);
            }
            plVar34 = (long *)*plVar39;
            while (plVar21 = plVar34, plVar21 != (long *)0x0) {
              _free(plVar39);
              plVar39 = plVar21;
              plVar34 = (long *)*plVar21;
            }
            _free(plVar39);
          }
        }
      }
      __ZN12codex_config5state16ConfigLayerEntry13config_folder17h164a4a8a75c4d2e0E
                (in_stack_000000c0 + 0x26,in_stack_000000c0[0xf]);
    } while (in_stack_000000c0[0x26] == -0x8000000000000000);
    in_stack_000000c0[0x2a] = in_stack_000000c0[0x27];
    in_stack_000000c0[0x29] = in_stack_000000c0[0x26];
    uVar37 = in_stack_000000c0[0x28];
    in_stack_000000c0[0x2b] = uVar37;
    uVar13 = in_stack_000000c0[4];
    uVar45 = in_stack_000000c0[5];
    uVar40 = in_stack_000000c0[0x2a];
    __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
              (&stack0x00000210,&UNK_108cea4d0,6);
    __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
              (&stack0x000002b0,plVar53,plVar54,uVar40,uVar37);
    puVar20 = in_stack_000000c0 + 0x2c;
    in_stack_000000c0[0x2d] = in_stack_00000218;
    *puVar20 = in_stack_00000210;
    in_stack_000000c0[0x2e] = in_stack_00000220;
    if (plVar19 != (long *)0x0) {
      _free(plVar53);
    }
    in_stack_00000098 = in_stack_000000c0 + 0x2f;
    in_stack_000000c0[0x2f] = uVar13;
    in_stack_000000c0[0x30] = uVar45;
    in_stack_000000c0[0x31] = puVar20;
    in_stack_000000c0[0x32] = in_stack_000000c0 + 0x13;
    in_stack_000000c0[0x33] = in_stack_000000c0[8];
    in_stack_000000a0 = in_stack_000000c0 + 0x3c;
    *(undefined1 *)(in_stack_000000c0 + 0x3c) = 0;
    in_stack_000000c0[0x34] = uVar13;
    in_stack_000000c0[0x35] = uVar45;
    in_stack_000000c0[0x36] = puVar20;
    in_stack_000000c0[0x37] = in_stack_000000c0 + 0x13;
    in_stack_000000c0[0x38] = in_stack_000000c0[8];
    in_stack_000000c0[0x39] = 0;
    in_stack_000000c0[0x3b] = 0;
    in_stack_000000c0[0x41] = uVar13;
    in_stack_000000c0[0x42] = uVar45;
    in_stack_000000c0[0x4f] = puVar20;
    *(undefined1 *)((long)in_stack_000000c0 + 0x281) = 0;
    in_stack_000000c0[0x3d] = uVar13;
    in_stack_000000c0[0x3e] = uVar45;
    in_stack_000000c0[0x43] = 0;
    in_stack_000000c0[0x44] = 8;
    in_stack_000000c0[0x45] = 0;
    *(undefined1 *)(in_stack_000000c0 + 0x50) = 1;
    plVar34 = (long *)_malloc(0x18);
    if (plVar34 == (long *)0x0) {
      func_0x0001087c906c(8,0x18);
      goto LAB_1017fdc7c;
    }
    uVar13 = in_stack_000000c0[0x2d];
    lVar43 = in_stack_000000c0[0x2e];
    lVar41 = 1;
    if ((lVar43 != 0) && (lVar41 = _malloc(lVar43), lVar41 == 0)) {
      func_0x0001087c9084(1,lVar43);
      goto LAB_1017fdc7c;
    }
    _memcpy(lVar41,uVar13,lVar43);
    *plVar34 = lVar43;
    plVar34[1] = lVar41;
    plVar34[2] = lVar43;
    in_stack_000000c0[0x46] = 1;
    in_stack_000000c0[0x47] = plVar34;
    in_stack_000000c0[0x48] = 1;
    while( true ) {
      unaff_x26 = &stack0x00000160;
      if (in_stack_000000c0[0x48] == 0) break;
      lVar43 = in_stack_000000c0[0x48] + -1;
      in_stack_000000c0[0x48] = lVar43;
      puVar20 = (undefined8 *)(in_stack_000000c0[0x47] + lVar43 * 0x18);
      uVar13 = puVar20[2];
      uVar45 = *puVar20;
      in_stack_000000c0[0x4a] = puVar20[1];
      in_stack_000000c0[0x49] = uVar45;
      in_stack_000000c0[0x4b] = uVar13;
      if (in_stack_000000c0[0x49] == -0x8000000000000000) goto LAB_1017fd458;
      uVar45 = puVar20[1];
      uVar13 = *puVar20;
      in_stack_000000c0[0x4e] = puVar20[2];
      in_stack_000000c0[0x4d] = uVar45;
      in_stack_000000c0[0x4c] = uVar13;
      auVar52 = (**(code **)(in_stack_000000c0[0x3e] + 0x40))
                          (in_stack_000000c0[0x3d],in_stack_000000c0 + 0x4c,0);
      *(undefined1 (*) [16])(in_stack_000000c0 + 0x3f) = auVar52;
      (**(code **)(auVar52._8_8_ + 0x18))(&stack0x000002b0,auVar52._0_8_,in_stack_00000020);
      if (in_stack_00000210 == (long *)0x8000000000000001) {
        uVar15 = 3;
        *(undefined1 *)((long)in_stack_000000c0 + 0x281) = 3;
        goto LAB_1017fe050;
      }
      uVar13 = in_stack_000000c0[0x3f];
      puVar20 = (undefined8 *)in_stack_000000c0[0x40];
      pcVar16 = (code *)*puVar20;
      if (pcVar16 != (code *)0x0) {
        (*pcVar16)(uVar13);
      }
      if (puVar20[1] != 0) {
        _free(uVar13);
      }
      plVar34 = in_stack_00000210;
      plVar39 = in_stack_00000218;
      plVar21 = in_stack_00000220;
      if (in_stack_00000210 == (long *)0x8000000000000000) {
        cVar11 = FUN_10192b4fc(in_stack_00000218);
        if (cVar11 == '\0') {
          if (((ulong)in_stack_00000218 & 3) == 1) {
            plVar60 = (long *)((long)in_stack_00000218 + -1);
            lVar43 = *plVar60;
            puVar20 = *(undefined8 **)((long)in_stack_00000218 + 7);
            pcVar16 = (code *)*puVar20;
            if (pcVar16 != (code *)0x0) {
              (*pcVar16)(lVar43);
            }
            if (puVar20[1] != 0) {
              _free(lVar43);
            }
            goto LAB_1017fd698;
          }
          goto LAB_1017fd69c;
        }
        if (in_stack_000000c0[0x4c] != 0) {
          _free(in_stack_000000c0[0x4d]);
        }
        lVar41 = in_stack_000000c0[0x47];
        lVar43 = in_stack_000000c0[0x48];
        plVar34 = in_stack_00000218;
        if (lVar43 != 0) {
          plVar34 = (long *)(lVar41 + 8);
          do {
            if (plVar34[-1] != 0) {
              _free(*plVar34);
            }
            plVar34 = plVar34 + 3;
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
        }
        if (in_stack_000000c0[0x46] != 0) {
          _free(lVar41);
        }
        lVar41 = in_stack_000000c0[0x44];
        lVar43 = in_stack_000000c0[0x45];
        if (lVar43 != 0) {
          plVar34 = (long *)(lVar41 + 8);
          do {
            if (plVar34[-1] != 0) {
              _free(*plVar34);
            }
            plVar34 = plVar34 + 3;
            lVar43 = lVar43 + -1;
          } while (lVar43 != 0);
        }
        if (in_stack_000000c0[0x43] != 0) {
          _free(lVar41);
        }
        *(undefined2 *)(in_stack_000000c0 + 0x50) = 0x100;
        lVar41 = -0x8000000000000000;
        plStack00000000000000b8 = in_stack_00000218;
        goto LAB_1017fd53c;
      }
      plVar47 = in_stack_00000218 + (long)in_stack_00000220 * 4;
      *(long **)(unaff_x29 + -0xb0) = in_stack_00000218;
      *(long **)(unaff_x29 + -0xa0) = in_stack_00000210;
      *(long **)(unaff_x29 + -0x98) = plVar47;
      plVar60 = in_stack_00000218;
      plVar48 = in_stack_00000218;
      plVar49 = in_stack_00000218;
      if (in_stack_00000220 == (long *)0x0) {
LAB_1017fd650:
        *(long **)(unaff_x29 + -0xa8) = plVar60;
        if ((long)plVar47 - (long)plVar60 != 0) {
          uVar44 = (ulong)((long)plVar47 - (long)plVar60) >> 5;
          plVar60 = plVar60 + 1;
          do {
            if (plVar60[-1] != 0) {
              _free(*plVar60);
            }
            plVar60 = plVar60 + 4;
            uVar44 = uVar44 - 1;
          } while (uVar44 != 0);
        }
      }
      else {
        do {
          plVar60 = plVar48 + 4;
          lVar43 = *plVar48;
          plVar39 = plVar49;
          plVar21 = in_stack_00000220;
          if (lVar43 == -0x8000000000000000) goto LAB_1017fd650;
          bVar3 = *(byte *)(plVar48 + 3);
          bVar4 = *(byte *)((long)plVar48 + 0x19);
          lVar41 = plVar48[1];
          uVar13 = in_stack_000000c0[0x4d];
          uVar45 = in_stack_000000c0[0x4e];
          __ZN25codex_utils_absolute_path15AbsolutePathBuf27maybe_expand_home_directory17hf2e9b6acae8f87c8E
                    (&stack0x00000210,lVar41,plVar48[2]);
          __ZN25codex_utils_absolute_path10absolutize15absolutize_from17h7c78eeaa90c9e1dfE
                    (&stack0x000002b0,plVar53,plVar54,uVar13,uVar45);
          if (plVar19 != (long *)0x0) {
            _free(plVar53);
          }
          if (lVar43 != 0) {
            _free(lVar41);
          }
          if ((bVar3 & 1) == 0) {
            plVar48 = plVar34;
            if ((bVar4 & 1) != 0) {
              if (in_stack_00000220 == (long *)0x0) {
                bVar10 = false;
              }
              else {
                bVar10 = (char)*plVar49 == '/';
              }
              plVar21 = (long *)CONCAT71((int7)((ulong)in_stack_00000220 >> 8),6);
              in_stack_00000248 =
                   (long *)CONCAT62(CONCAT51((int5)((ulong)in_stack_00000248 >> 0x18),bVar10),0x201)
              ;
              __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
                        (&stack0x00000210,&stack0x000002b0);
              plVar48 = plVar49;
              plVar39 = in_stack_00000220;
              if (((char)plVar19 == '\t') &&
                 ((plVar50 = plVar54, plVar54 != (long *)0x2 || ((short)*plVar53 != 0x2e2e)))) {
                do {
                  if (plVar50 == (long *)0x0) goto LAB_1017fd404;
                  plVar23 = (long *)((long)plVar50 + -1);
                  pcVar36 = (char *)((long)plVar53 + (long)plVar50);
                  plVar50 = plVar23;
                } while (pcVar36[-1] != '.');
                if (((plVar23 != (long *)0x0) && ((long *)((long)plVar54 + -5) == plVar23)) &&
                   (*(int *)((char *)((long)plVar53 + (long)plVar23) + 1) == 0x6c6d6f74)) {
                  lVar43 = in_stack_000000c0[0x45];
                  if (lVar43 == in_stack_000000c0[0x43]) {
                    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E
                              (in_stack_000000c0 + 0x43);
                  }
                  puVar20 = (undefined8 *)(in_stack_000000c0[0x44] + lVar43 * 0x18);
                  *puVar20 = plVar34;
                  puVar20[1] = plVar49;
                  puVar20[2] = in_stack_00000220;
                  in_stack_000000c0[0x45] = lVar43 + 1;
                  plVar34 = plVar49;
                  goto LAB_1017fd290;
                }
              }
            }
LAB_1017fd404:
            bVar10 = plVar34 != (long *)0x0;
            plVar34 = plVar48;
            if (bVar10) {
              _free(plVar49);
            }
          }
          else {
            lVar43 = in_stack_000000c0[0x48];
            if (lVar43 == in_stack_000000c0[0x46]) {
              __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h0fc00cbe580b1e89E
                        (in_stack_000000c0 + 0x46);
            }
            puVar20 = (undefined8 *)(in_stack_000000c0[0x47] + lVar43 * 0x18);
            *puVar20 = plVar34;
            puVar20[1] = plVar49;
            puVar20[2] = in_stack_00000220;
            in_stack_000000c0[0x48] = lVar43 + 1;
          }
LAB_1017fd290:
          plVar48 = plVar60;
          plVar49 = plVar39;
          in_stack_00000220 = plVar21;
        } while (plVar60 != plVar47);
      }
      plVar60 = in_stack_00000218;
      if (in_stack_00000210 != (long *)0x0) {
LAB_1017fd698:
        _free(plVar60);
      }
LAB_1017fd69c:
      in_stack_00000210 = plVar34;
      in_stack_00000218 = plVar39;
      in_stack_00000220 = plVar21;
      if (in_stack_000000c0[0x4c] != 0) {
        _free(in_stack_000000c0[0x4d]);
      }
    }
    in_stack_000000c0[0x49] = 0x8000000000000000;
LAB_1017fd458:
    uVar44 = in_stack_000000c0[0x45];
    if (1 < uVar44) {
      if (uVar44 < 0x15) {
        FUN_101974258();
      }
      else {
        func_0x000103405834(in_stack_000000c0[0x44],uVar44,&stack0x000002b0);
      }
    }
    *(undefined1 *)(in_stack_000000c0 + 0x50) = 0;
    lVar41 = in_stack_000000c0[0x43];
    plStack00000000000000b8 = (long *)in_stack_000000c0[0x44];
    plVar34 = (long *)in_stack_000000c0[0x45];
    lVar26 = in_stack_000000c0[0x47];
    lVar43 = in_stack_000000c0[0x48];
    if (lVar43 != 0) {
      puVar20 = (undefined8 *)(lVar26 + 8);
      do {
        if (puVar20[-1] != 0) {
          _free(*puVar20);
        }
        puVar20 = puVar20 + 3;
        lVar43 = lVar43 + -1;
      } while (lVar43 != 0);
    }
    if (in_stack_000000c0[0x46] != 0) {
      _free(lVar26);
    }
    *(undefined2 *)(in_stack_000000c0 + 0x50) = 0x100;
    if (lVar41 == -0x7fffffffffffffff) {
      uVar15 = 3;
      goto LAB_1017fe050;
    }
LAB_1017fd53c:
    FUN_101933c08(in_stack_000000c0 + 0x3d);
    if (lVar41 != -0x8000000000000000) goto LAB_1017fd5dc;
    in_stack_00000250 = 0;
    in_stack_000000c0[0x3d] = 0x8000000000000000;
    in_stack_000000c0[0x3e] = plStack00000000000000b8;
    plVar34 = (long *)in_stack_000000c0[0x39];
    if (plVar34 != (long *)0x0) {
      in_stack_00000228 = (long *)in_stack_000000c0[0x3a];
      in_stack_00000250 = in_stack_000000c0[0x3b];
      in_stack_00000218 = (long *)0x0;
      in_stack_00000238 = (long *)0x0;
      in_stack_00000220 = plVar34;
      in_stack_00000240 = plVar34;
      in_stack_00000248 = in_stack_00000228;
    }
    in_stack_00000210 = (long *)(ulong)(plVar34 != (long *)0x0);
    while (FUN_101990a78(&stack0x00000210,&stack0x000002b0), plVar19 != (long *)0x0) {
      if (plVar19[(long)plVar54 * 3 + 1] != 0) {
        _free(plVar19[(long)plVar54 * 3 + 2]);
      }
      FUN_101951d58(plVar19 + (long)plVar54 * 9 + 0x22);
    }
    bVar10 = true;
    unaff_x22 = in_stack_000000c0;
    in_stack_00000230 = in_stack_00000210;
  } while( true );
code_r0x0001017fe118:
  plVar34 = (long *)puVar20[2];
  uVar13 = *puVar20;
  unaff_x22[0x44] = puVar20[1];
  unaff_x22[0x43] = uVar13;
  unaff_x22[0x45] = plVar34;
  lVar17 = *(long *)unaff_x22[0x37];
  if (lVar17 == 0) goto LAB_1017fdcf4;
  plVar39 = (long *)in_stack_000000c0[0x44];
  lVar41 = ((long *)unaff_x22[0x37])[1];
  lVar43 = lVar17 + 8;
  uVar44 = (ulong)*(ushort *)(lVar17 + 0x112);
  lVar26 = uVar44 * 0x18;
  uVar29 = 0xffffffffffffffff;
  if (plVar34 == (long *)0x0) goto LAB_1017fe1f0;
LAB_1017fe16c:
  do {
    if (lVar26 == 0) goto joined_r0x0001017fe260;
    in_stack_00000210 = *(long **)(lVar43 + 8);
    in_stack_00000218 = *(long **)(lVar43 + 0x10);
    plVar54 = (long *)CONCAT71((int7)((ulong)plVar54 >> 8),6);
    plVar59 = (long *)CONCAT62(CONCAT51((int5)((ulong)plVar59 >> 0x18),(char)*plVar39 == '/'),0x201)
    ;
    if (in_stack_00000218 == (long *)0x0) {
      bVar10 = false;
    }
    else {
      bVar10 = (char)*in_stack_00000210 == '/';
    }
    in_stack_00000220 = (long *)CONCAT71((int7)((ulong)in_stack_00000220 >> 8),6);
    in_stack_00000248 =
         (long *)CONCAT62(CONCAT51((int5)((ulong)in_stack_00000248 >> 0x18),bVar10),0x201);
    cVar11 = func_0x00010603668c(&stack0x00000210,&stack0x000002b0);
    lVar43 = lVar43 + 0x18;
    lVar26 = lVar26 + -0x18;
    uVar29 = uVar29 + 1;
    plVar19 = plVar39;
    plVar53 = plVar34;
  } while (cVar11 == '\x01');
LAB_1017fe25c:
  uVar44 = uVar29;
  plVar19 = plVar39;
  if (cVar11 != '\0') {
joined_r0x0001017fe260:
    while (lVar41 != 0) {
      lVar17 = *(long *)(lVar17 + uVar44 * 8 + 0x118);
      lVar41 = lVar41 + -1;
      lVar43 = lVar17 + 8;
      uVar44 = (ulong)*(ushort *)(lVar17 + 0x112);
      lVar26 = uVar44 * 0x18;
      uVar29 = 0xffffffffffffffff;
      if (plVar34 != (long *)0x0) goto LAB_1017fe16c;
LAB_1017fe1f0:
      while (lVar26 != 0) {
        in_stack_00000210 = *(long **)(lVar43 + 8);
        in_stack_00000218 = *(long **)(lVar43 + 0x10);
        plVar53 = (long *)0x0;
        plVar54 = (long *)CONCAT71((int7)((ulong)plVar54 >> 8),6);
        plVar59 = (long *)CONCAT62((uint6)((ulong)plVar59 >> 0x10) & 0xffffffffff00,0x201);
        if (in_stack_00000218 == (long *)0x0) {
          bVar10 = false;
        }
        else {
          bVar10 = (char)*in_stack_00000210 == '/';
        }
        in_stack_00000220 = (long *)CONCAT71((int7)((ulong)in_stack_00000220 >> 8),6);
        in_stack_00000248 =
             (long *)CONCAT62(CONCAT51((int5)((ulong)in_stack_00000248 >> 0x18),bVar10),0x201);
        cVar11 = func_0x00010603668c(&stack0x00000210,&stack0x000002b0);
        lVar43 = lVar43 + 0x18;
        lVar26 = lVar26 + -0x18;
        uVar29 = uVar29 + 1;
        plVar19 = plVar39;
        if (cVar11 != '\x01') goto LAB_1017fe25c;
      }
    }
    goto LAB_1017fdcf4;
  }
  unaff_x26 = &stack0x00000160;
  lVar17 = in_stack_000000c0[0x43];
  unaff_x22 = in_stack_000000c0;
  goto joined_r0x0001017fe0d0;
LAB_1017fdcf4:
  in_stack_000000c0[0x47] = in_stack_000000c0[0x35];
  in_stack_000000c0[0x46] = in_stack_000000c0[0x34];
  in_stack_000000c0[0x48] = unaff_x22 + 0x43;
  in_stack_000000c0[0x49] = 0;
  *(undefined1 *)(in_stack_000000c0 + 0x50) = 0;
  unaff_x26 = &stack0x00000160;
  FUN_101801194(&stack0x000002b0,in_stack_000000c0 + 0x46,in_stack_00000020);
  if (in_stack_00000210 == (long *)0x8000000000000001) {
    uVar15 = 4;
LAB_1017fe050:
    *(undefined1 *)in_stack_000000a0 = uVar15;
    *in_stack_00000018 = 2;
    uVar15 = 5;
LAB_1017fff44:
    *(undefined1 *)((long)in_stack_000000c0 + 299) = uVar15;
    return;
  }
  if (*(char *)(in_stack_000000c0 + 0x50) == '\x03') {
    uVar13 = in_stack_000000c0[0x4e];
    puVar20 = (undefined8 *)in_stack_000000c0[0x4f];
    pcVar16 = (code *)*puVar20;
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)(uVar13);
    }
    if (puVar20[1] != 0) {
      _free(uVar13);
    }
  }
  in_stack_000002d0 = in_stack_00000230;
  if (in_stack_00000210 == (long *)0x8000000000000000) {
    __ZN10codex_core6config11agent_roles23push_agent_role_warning17h3a3efcd5ce1839a4E
              (in_stack_000000c0[0x38],in_stack_00000218);
    unaff_x22 = in_stack_000000c0;
    in_stack_000002c8 = in_stack_00000228;
  }
  else {
    *(long **)(unaff_x29 + -0xd0) = in_stack_00000220;
    lVar28 = in_stack_000000c0[0x39];
    if (lVar28 != 0) {
      uVar13 = *(undefined8 *)(unaff_x29 + -0xd8);
      lVar33 = in_stack_000000c0[0x3a];
      do {
        uVar5 = *(ushort *)(lVar28 + 0x42a);
        lVar43 = (ulong)uVar5 * 0x18;
        uVar29 = 0xffffffffffffffff;
        lVar17 = lVar28 + 8;
        do {
          uVar44 = (ulong)uVar5;
          if (lVar43 == 0) goto joined_r0x0001017fde64;
          plVar53 = *(long **)(lVar17 + 0x10);
          plVar19 = in_stack_00000220;
          if (plVar53 <= in_stack_00000220) {
            plVar19 = plVar53;
          }
          iVar12 = _memcmp(uVar13,*(undefined8 *)(lVar17 + 8),plVar19);
          lVar41 = (long)in_stack_00000220 - (long)plVar53;
          if (iVar12 != 0) {
            lVar41 = (long)iVar12;
          }
          cVar11 = 0 < lVar41;
          if (lVar41 < 0) {
            cVar11 = -1;
          }
          lVar43 = lVar43 + -0x18;
          uVar29 = uVar29 + 1;
          lVar17 = lVar17 + 0x18;
        } while (cVar11 == '\x01');
        unaff_x26 = &stack0x00000160;
        uVar44 = uVar29;
        if (cVar11 == '\0') {
          unaff_x23 = in_stack_000000c0[0x38];
          uVar13 = *(undefined8 *)(in_stack_000000c0[0x36] + 0x10);
          *(undefined8 *)(unaff_x29 + -0xc0) = *(undefined8 *)(in_stack_000000c0[0x36] + 8);
          *(undefined8 *)(unaff_x29 + -0xb8) = uVar13;
          in_stack_000002b0 = (long *)(unaff_x29 + -0xe0);
          in_stack_000002b8 = (long *)&DAT_1019a7324;
          in_stack_000002c0 = (long *)(unaff_x29 + -0xc0);
          in_stack_000002c8 =
               (long *)&
                       __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
          ;
          unaff_x22 = in_stack_000000c0;
          in_stack_000002d8 = in_stack_00000238;
          in_stack_000002e0 = in_stack_00000240;
          in_stack_000002e8 = in_stack_00000248;
          in_stack_000002f0 = in_stack_00000250;
          in_stack_000002f8 = in_stack_00000258;
          goto code_r0x0001017fdeb4;
        }
joined_r0x0001017fde64:
        if (lVar33 == 0) break;
        lVar28 = *(long *)(lVar28 + uVar44 * 8 + 0x430);
        lVar33 = lVar33 + -1;
      } while( true );
    }
    uVar13 = in_stack_000000c0[0x44];
    in_stack_000002d0 = (long *)0x1;
    in_stack_000002c8 = (long *)in_stack_000000c0[0x45];
    if ((in_stack_000002c8 != (long *)0x0) &&
       (in_stack_000002d0 = (long *)_malloc(in_stack_000002c8), in_stack_000002d0 == (long *)0x0)) {
      func_0x0001087c9084(1,in_stack_000002c8);
LAB_1017fdc7c:
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1017fdc80);
      (*pcVar16)();
    }
    _memcpy(in_stack_000002d0,uVar13,in_stack_000002c8);
    FUN_10198b81c(unaff_x29 + -0xb0,in_stack_000000c0 + 0x39,&stack0x00000210,&stack0x000002b0);
    lVar28 = *(long *)(unaff_x29 + -0xb0);
    unaff_x26 = &stack0x00000160;
    if (lVar28 != -0x7fffffffffffffff) {
      if ((lVar28 != -0x8000000000000000) && (lVar28 != 0)) {
        _free(*(undefined8 *)(unaff_x29 + -0xa8));
      }
      if (*(long *)(unaff_x29 + -0x98) == -0x8000000000000000 || *(long *)(unaff_x29 + -0x98) == 0)
      {
        lVar28 = *(long *)(unaff_x29 + -0x80);
      }
      else {
        _free(*(undefined8 *)(unaff_x29 + -0x90));
        lVar28 = *(long *)(unaff_x29 + -0x80);
      }
      if (lVar28 != -0x8000000000000000) {
        lVar33 = *(long *)(unaff_x29 + -0x78);
        lVar17 = *(long *)(unaff_x29 + -0x70);
        if (lVar17 != 0) {
          puVar20 = (undefined8 *)(lVar33 + 8);
          do {
            if (puVar20[-1] != 0) {
              _free(*puVar20);
            }
            puVar20 = puVar20 + 3;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        if (lVar28 != 0) {
          _free(lVar33);
        }
      }
    }
    FUN_10194c9ac(&stack0x00000258);
    unaff_x22 = in_stack_000000c0;
    plVar19 = in_stack_00000210;
    plVar53 = in_stack_00000218;
    plVar54 = in_stack_00000220;
    plVar55 = in_stack_00000228;
    plVar56 = in_stack_00000230;
    plVar57 = in_stack_00000238;
    plVar58 = in_stack_00000240;
    plVar59 = in_stack_00000248;
    lVar28 = in_stack_00000250;
    lVar33 = in_stack_00000258;
    in_stack_00000210 = in_stack_00000228;
    in_stack_00000218 = in_stack_00000230;
    in_stack_00000220 = in_stack_00000238;
    in_stack_00000238 = in_stack_000002c8;
  }
  goto LAB_1017fe0cc;
LAB_1017fe5d4:
  lVar41 = *(long *)(lVar41 + uVar25 * 8 + 0x430);
  plStack00000000000000b8 = (long *)((long)plStack00000000000000b8 + -1);
  goto LAB_1017fe550;
LAB_1017fff68:
  uVar5 = *(ushort *)((long)puVar22 + 0x112);
  if (uVar5 < 0xb) {
    lVar41 = uVar5 - uVar31;
    if (uVar31 <= uVar5 && lVar41 != 0) {
      _memmove(puVar42 + uVar31 * 3 + 3,puVar42 + uVar31 * 3,lVar41 * 0x18);
    }
    plVar19 = puVar42 + uVar31 * 3;
    *plVar19 = lVar43;
    plVar19[1] = (long)pcVar36;
    plVar19[2] = lVar43;
    *(ushort *)((long)puVar22 + 0x112) = uVar5 + 1;
  }
  else {
    uVar44 = 0;
    if (uVar31 != 6) {
      uVar44 = uVar31 - 7;
    }
    uVar25 = 5;
    if (uVar31 != 6) {
      uVar25 = 6;
    }
    uVar2 = uVar31;
    uVar38 = uVar31;
    if (uVar31 != 5) {
      uVar2 = uVar25;
      uVar38 = uVar44;
    }
    uVar44 = uVar31;
    if (4 < uVar31) {
      uVar44 = uVar38;
    }
    uVar25 = 4;
    if (4 < uVar31) {
      uVar25 = uVar2;
    }
    puStack00000000000000b0 = (undefined8 *)_malloc(0x118);
    if (puStack00000000000000b0 == (undefined8 *)0x0) {
      func_0x0001087c906c(8,0x118);
      goto LAB_1017fdc7c;
    }
    *puStack00000000000000b0 = 0;
    uVar2 = (ulong)*(ushort *)((long)puVar22 + 0x112) + ~uVar25;
    *(short *)((long)puStack00000000000000b0 + 0x112) = (short)uVar2;
    plVar19 = puVar42 + uVar25 * 3;
    lVar41 = *plVar19;
    lVar26 = plVar19[1];
    if (0xb < uVar2) {
      __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar2,0xb,&UNK_10b269068);
      goto LAB_1017fdc7c;
    }
    lVar27 = plVar19[2];
    _memcpy(puStack00000000000000b0 + 1,plVar19 + 3,uVar2 * 0x18);
    *(short *)((long)puVar22 + 0x112) = (short)uVar25;
    puVar42 = puStack00000000000000b0;
    if (uVar31 < 6) {
      puVar42 = puVar22;
    }
    uVar5 = *(ushort *)((long)puVar42 + 0x112);
    lVar18 = uVar5 - uVar44;
    if (uVar44 <= uVar5 && lVar18 != 0) {
      _memmove(puVar42 + uVar44 * 3 + 1 + 3,puVar42 + uVar44 * 3 + 1,lVar18 * 0x18);
    }
    plVar19 = puVar42 + uVar44 * 3 + 1;
    *plVar19 = lVar43;
    plVar19[1] = (long)pcVar36;
    plVar19[2] = lVar43;
    *(ushort *)((long)puVar42 + 0x112) = uVar5 + 1;
    if (lVar41 != -0x8000000000000000) {
      uVar44 = 0;
      do {
        puVar42 = (undefined8 *)*puVar22;
        if (puVar42 == (undefined8 *)0x0) {
          puVar22 = (undefined8 *)_malloc(0x178);
          if (puVar22 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x178);
            goto LAB_1017fdc7c;
          }
          *puVar22 = 0;
          *(undefined2 *)((long)puVar22 + 0x112) = 0;
          puVar22[0x23] = puVar20;
          if (0xfffffffffffffffe < uVar46) {
            func_0x000108a07a20(&UNK_10b269038);
            goto LAB_1017fdc7c;
          }
          *puVar20 = puVar22;
          *(undefined2 *)(puVar20 + 0x22) = 0;
          in_stack_000000c0[0x13] = puVar22;
          in_stack_000000c0[0x14] = uVar46 + 1;
          if (uVar44 != uVar46) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cf2051,0x30,&UNK_10b269008);
            goto LAB_1017fdc7c;
          }
          *(undefined2 *)((long)puVar22 + 0x112) = 1;
          puVar22[1] = lVar41;
          puVar22[2] = lVar26;
          puVar22[3] = lVar27;
          puVar22[0x24] = puStack00000000000000b0;
          *puStack00000000000000b0 = puVar22;
          *(undefined2 *)(puStack00000000000000b0 + 0x22) = 1;
          break;
        }
        uVar5 = *(ushort *)(puVar22 + 0x22);
        uVar25 = (ulong)uVar5;
        uVar6 = *(ushort *)((long)puVar42 + 0x112);
        uVar31 = (ulong)uVar6;
        if (uVar6 < 0xb) {
          plVar19 = puVar42 + uVar25 * 3 + 1;
          if (uVar5 < uVar6) {
            _memmove(puVar42 + (uVar25 + 1) * 3 + 1,plVar19,(uVar31 - uVar25) * 0x18);
            *plVar19 = lVar41;
            plVar19[1] = lVar26;
            plVar19[2] = lVar27;
            _memmove(puVar42 + uVar25 + 0x25,puVar42 + uVar25 + 0x24,(uVar31 - uVar25) * 8);
          }
          else {
            *plVar19 = lVar41;
            plVar19[1] = lVar26;
            plVar19[2] = lVar27;
          }
          puVar42[uVar25 + 0x24] = puStack00000000000000b0;
          *(ushort *)((long)puVar42 + 0x112) = uVar6 + 1;
          if (uVar25 + 1 < uVar31 + 2) {
            lVar43 = uVar25 + 0x24;
            do {
              puVar20 = (undefined8 *)puVar42[lVar43];
              *puVar20 = puVar42;
              *(short *)(puVar20 + 0x22) = (short)lVar43 + -0x23;
              lVar43 = lVar43 + 1;
            } while (lVar43 - uVar31 != 0x25);
          }
          break;
        }
        uVar44 = uVar44 + 1;
        uVar2 = 5;
        if (uVar5 != 6) {
          uVar2 = 6;
        }
        uVar38 = 0;
        if (uVar5 != 6) {
          uVar38 = uVar25 - 7;
        }
        uVar1 = uVar25;
        uVar7 = uVar25;
        if (uVar5 != 5) {
          uVar1 = uVar38;
          uVar7 = uVar2;
        }
        uVar2 = 4;
        if (4 < uVar5) {
          uVar25 = uVar1;
          uVar2 = uVar7;
        }
        puVar14 = (undefined8 *)_malloc(0x178);
        if (puVar14 == (undefined8 *)0x0) {
          func_0x0001087c906c(8,0x178);
          goto LAB_1017fdc7c;
        }
        *puVar14 = 0;
        uVar38 = (ulong)*(ushort *)((long)puVar42 + 0x112) + ~uVar2;
        *(short *)((long)puVar14 + 0x112) = (short)uVar38;
        lVar43 = puVar42[uVar2 * 3 + 1];
        lVar18 = puVar42[uVar2 * 3 + 2];
        if (0xb < uVar38) {
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar38,0xb,&UNK_10b269068);
          goto LAB_1017fdc7c;
        }
        lVar32 = puVar42[uVar2 * 3 + 3];
        _memcpy(puVar14 + 1,puVar42 + uVar2 * 3 + 4,uVar38 * 0x18);
        *(short *)((long)puVar42 + 0x112) = (short)uVar2;
        uVar38 = (ulong)*(ushort *)((long)puVar14 + 0x112);
        lVar35 = uVar38 + 1;
        if (0xb < uVar38) {
          __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,lVar35,0xc,&UNK_10b269080);
          goto LAB_1017fdc7c;
        }
        if (uVar31 - uVar2 != lVar35) {
          __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cf2081,0x28,&UNK_10b269050);
          goto LAB_1017fdc7c;
        }
        _memcpy(puVar14 + 0x23,puVar42 + uVar2 + 0x24,lVar35 * 8);
        uVar31 = 0;
        do {
          puVar22 = (undefined8 *)(puVar14 + 0x23)[uVar31];
          *puVar22 = puVar14;
          *(short *)(puVar22 + 0x22) = (short)uVar31;
          if (uVar38 <= uVar31) break;
          uVar31 = uVar31 + 1;
        } while (uVar31 <= uVar38);
        puVar22 = puVar14;
        if (uVar5 < 6) {
          puVar22 = puVar42;
        }
        uVar5 = *(ushort *)((long)puVar22 + 0x112);
        uVar31 = (ulong)uVar5;
        plVar19 = puVar22 + (long)(int)uVar25 * 3 + 1;
        lVar35 = uVar31 - uVar25;
        if (uVar31 < uVar25 || lVar35 == 0) {
          *plVar19 = lVar41;
          plVar19[1] = lVar26;
          plVar19[2] = lVar27;
        }
        else {
          _memmove(puVar22 + (long)(int)(uVar25 + 1) * 3 + 1,plVar19,lVar35 * 0x18);
          *plVar19 = lVar41;
          plVar19[1] = lVar26;
          plVar19[2] = lVar27;
          _memmove(puVar22 + uVar25 + 0x25,puVar22 + uVar25 + 0x24,lVar35 * 8);
        }
        puVar22[uVar25 + 0x24] = puStack00000000000000b0;
        *(ushort *)((long)puVar22 + 0x112) = uVar5 + 1;
        if (uVar25 + 1 < uVar31 + 2) {
          lVar41 = uVar25 + 0x24;
          do {
            puVar24 = (undefined8 *)puVar22[lVar41];
            *puVar24 = puVar22;
            *(short *)(puVar24 + 0x22) = (short)lVar41 + -0x23;
            lVar41 = lVar41 + 1;
          } while (lVar41 - uVar31 != 0x25);
        }
        lVar27 = lVar32;
        puVar22 = puVar42;
        lVar26 = lVar18;
        lVar41 = lVar43;
        puStack00000000000000b0 = puVar14;
      } while (lVar43 != -0x8000000000000000);
    }
  }
LAB_1017ffe54:
  in_stack_000000c0[0x15] = in_stack_000000c0[0x15] + 1;
  lVar43 = in_stack_000000c0[0x10];
joined_r0x0001017ffb94:
  if (lVar43 != 0) {
    lVar41 = in_stack_000000c0[0x11];
    do {
      uVar5 = *(ushort *)(lVar43 + 0x42a);
      lVar27 = (ulong)uVar5 * 0x18;
      uVar44 = 0xffffffffffffffff;
      lVar26 = lVar43 + 8;
      do {
        uVar46 = (ulong)uVar5;
        if (lVar27 == 0) goto joined_r0x0001017ffc20;
        plVar53 = *(long **)(lVar26 + 0x10);
        plVar19 = in_stack_00000220;
        if (plVar53 <= in_stack_00000220) {
          plVar19 = plVar53;
        }
        iVar12 = _memcmp(in_stack_00000218,*(undefined8 *)(lVar26 + 8),plVar19);
        lVar18 = (long)in_stack_00000220 - (long)plVar53;
        if (iVar12 != 0) {
          lVar18 = (long)iVar12;
        }
        cVar11 = 0 < lVar18;
        if (lVar18 < 0) {
          cVar11 = -1;
        }
        lVar27 = lVar27 + -0x18;
        uVar44 = uVar44 + 1;
        lVar26 = lVar26 + 0x18;
      } while (cVar11 == '\x01');
      uVar46 = uVar44;
      if (cVar11 == '\0') {
        uVar45 = in_stack_000000c0[8];
        *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000350;
        *(undefined **)(unaff_x29 + -0xa8) = &DAT_1019a7324;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x000002b0,s_duplicate_agent_role_name______d_108ac0e5f,unaff_x29 + -0xb0);
        uVar13 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x14,&stack0x00000210);
        __ZN10codex_core6config11agent_roles23push_agent_role_warning17h3a3efcd5ce1839a4E
                  (uVar45,uVar13);
        if ((in_stack_00000110 != (long *)0x8000000000000000) && (in_stack_00000110 != (long *)0x0))
        {
          _free(in_stack_00000118);
        }
        if ((plVar60 != (long *)0x8000000000000000) && (plVar60 != (long *)0x0)) {
          _free(in_stack_00000130);
        }
        lVar41 = in_stack_00000148;
        lVar43 = in_stack_00000140;
        plVar60 = in_stack_00000218;
        plVar19 = plVar34;
        plVar53 = plVar39;
        plVar54 = plVar21;
        plVar47 = in_stack_00000210;
        if (in_stack_00000140 != -0x8000000000000000) {
          if (in_stack_00000150 != 0) {
            puVar20 = (undefined8 *)(in_stack_00000148 + 8);
            lVar26 = in_stack_00000150;
            do {
              if (puVar20[-1] != 0) {
                _free(*puVar20);
              }
              puVar20 = puVar20 + 3;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
          if (lVar43 != 0) {
            _free(lVar41);
          }
        }
        goto joined_r0x0001017ffd18;
      }
joined_r0x0001017ffc20:
      if (lVar41 == 0) break;
      lVar43 = *(long *)(lVar43 + uVar46 * 8 + 0x430);
      lVar41 = lVar41 + -1;
    } while( true );
  }
  FUN_10198b81c(&stack0x000002b0,in_stack_000000c0 + 0x10,&stack0x00000210,&stack0x00000110);
  plVar19 = in_stack_00000210;
  plVar53 = in_stack_00000218;
  plVar54 = in_stack_00000220;
  if (plVar34 != (long *)0x8000000000000001) {
    if ((plVar34 != (long *)0x8000000000000000) && (plVar34 != (long *)0x0)) {
      _free(plVar39);
    }
    if ((in_stack_00000228 != (long *)0x8000000000000000) && (in_stack_00000228 != (long *)0x0)) {
      _free(in_stack_00000230);
    }
    if (in_stack_00000240 != (long *)0x8000000000000000) {
      plVar60 = in_stack_00000248;
      plVar47 = in_stack_00000240;
      if (in_stack_00000250 != 0) {
        plVar48 = in_stack_00000248 + 1;
        lVar43 = in_stack_00000250;
        do {
          if (plVar48[-1] != 0) {
            _free(*plVar48);
          }
          plVar48 = plVar48 + 3;
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
      }
joined_r0x0001017ffd18:
      if (plVar47 != (long *)0x0) {
        _free(plVar60);
      }
    }
  }
  goto LAB_1017ff82c;
LAB_1017fd5dc:
  in_stack_000000c0[0x3d] = lVar41;
  in_stack_000000c0[0x3e] = plStack00000000000000b8;
  in_stack_000000c0[0x3f] = plVar34;
  in_stack_000000c0[0x51] = plStack00000000000000b8;
  in_stack_000000c0[0x52] = plStack00000000000000b8;
  in_stack_000000c0[0x53] = lVar41;
  in_stack_000000c0[0x54] = plStack00000000000000b8 + (long)plVar34 * 3;
  unaff_x22 = in_stack_000000c0;
  goto LAB_1017fe0dc;
}

