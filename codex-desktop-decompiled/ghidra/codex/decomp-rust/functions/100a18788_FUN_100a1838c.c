
undefined8 FUN_100a1838c(void)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long extraout_x1;
  undefined1 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long *unaff_x19;
  long *plVar11;
  undefined8 *puVar12;
  long unaff_x24;
  long *unaff_x25;
  ulong in_xzr;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  undefined *in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000040;
  undefined *in_stack_00000048;
  long *in_stack_00000050;
  code *in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000e0;
  long *in_stack_000000e8;
  undefined *in_stack_000000f0;
  long *in_stack_000000f8;
  code *in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  
code_r0x000100a1838c:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000040,s__failed_to_parse_JSON_RPC_messag_108acdeec,&stack0x000000e8);
  in_stack_00000028 = in_stack_00000048;
  in_stack_00000020 = in_stack_00000040;
  in_stack_00000030 = in_stack_00000050;
  unaff_x19[0x3c] = (long)in_stack_00000048;
  unaff_x19[0x3b] = (long)in_stack_00000040;
  unaff_x19[0x3d] = (long)in_stack_00000050;
  unaff_x19[0x3e] = (long)(unaff_x19 + 9);
  *(undefined1 *)(unaff_x19 + 0x7b) = 0;
  lVar8 = unaff_x19[0x3b];
  puVar6 = (undefined8 *)unaff_x19[0x3c];
  lVar10 = unaff_x19[0x3d];
  if (lVar8 == -0x8000000000000000) {
    puVar6 = (undefined8 *)_malloc(0x1a);
    if (puVar6 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x1a);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100a189d8);
      (*pcVar9)();
    }
    puVar6[1] = 0x522d4e4f534a2064;
    *puVar6 = 0x656d726f666c616d;
    *(undefined8 *)((long)puVar6 + 0x12) = 0x6567617373656d20;
    *(undefined8 *)((long)puVar6 + 10) = 0x4350522d4e4f534a;
    lVar8 = 0x1a;
    lVar10 = 0x1a;
  }
  unaff_x19[0x3f] = -0x7ffffffffffffffd;
  unaff_x19[0x40] = lVar8;
  unaff_x19[0x41] = (long)puVar6;
  unaff_x19[0x42] = lVar10;
  unaff_x19[0x54] = (long)(unaff_x19 + 9);
  *(undefined1 *)(unaff_x19 + 0x7a) = 0;
  FUN_100fcc9a4(&stack0x000000e8,unaff_x19 + 0x3f);
  if (in_stack_000000e8 == (long *)((long)unaff_x25 + 1)) {
    *(undefined1 *)(unaff_x19 + 0x7b) = 3;
    uVar5 = 1;
    uVar7 = 5;
LAB_100a189a4:
    *(undefined1 *)(unaff_x19 + 0x39) = uVar7;
    return uVar5;
  }
  *(undefined8 *)(unaff_x24 + 0x78) = in_stack_00000160;
  *(undefined8 *)(unaff_x24 + 0x70) = in_stack_00000158;
  *(undefined8 *)(unaff_x24 + 0x88) = in_stack_00000170;
  *(undefined8 *)(unaff_x24 + 0x80) = in_stack_00000168;
  *(undefined8 *)(unaff_x24 + 0x98) = in_stack_00000180;
  *(undefined8 *)(unaff_x24 + 0x90) = in_stack_00000178;
  in_stack_000000e0 = in_stack_00000188;
  *(undefined8 *)(unaff_x24 + 0x58) = in_stack_00000140;
  *(undefined8 *)(unaff_x24 + 0x50) = in_stack_00000138;
  *(undefined8 *)(unaff_x24 + 0x68) = in_stack_00000150;
  *(undefined8 *)(unaff_x24 + 0x60) = in_stack_00000148;
  in_stack_00000048 = in_stack_000000f0;
  in_stack_00000040 = in_stack_000000e8;
  in_stack_00000058 = in_stack_00000100;
  in_stack_00000050 = in_stack_000000f8;
  in_stack_00000078 = in_stack_00000120;
  in_stack_00000070 = in_stack_00000118;
  in_stack_00000088 = in_stack_00000130;
  in_stack_00000080 = in_stack_00000128;
  in_stack_00000068 = in_stack_00000110;
  in_stack_00000060 = in_stack_00000108;
  FUN_100d4fc80(unaff_x19 + 0x3f);
  if (in_stack_00000040 != unaff_x25) {
    lVar8 = 0;
    if ((long *)0x8000000000000001 < in_stack_00000040) {
      lVar8 = (long)in_stack_00000040 + 0x7ffffffffffffffe;
    }
    if (lVar8 == 0) {
      FUN_100e3d46c(&stack0x00000040);
    }
    else {
      puVar2 = in_stack_00000048;
      if (lVar8 != 1) {
        puVar2 = (undefined *)((ulong)in_stack_00000048 & 0x7fffffffffffffff);
      }
      if (puVar2 != (undefined *)0x0) {
        _free(in_stack_00000050);
      }
    }
  }
  *(undefined1 *)(unaff_x19 + 0x7b) = 1;
  plVar11 = (long *)unaff_x19[0x3a];
  if (*plVar11 == 1) {
    uVar3 = plVar11[1];
    if ((uVar3 & 3) != 1) goto LAB_100a1867c;
    puVar6 = (undefined8 *)(uVar3 - 1);
    uVar5 = *puVar6;
    puVar12 = *(undefined8 **)(uVar3 + 7);
    pcVar9 = (code *)*puVar12;
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(uVar5);
    }
    if (puVar12[1] != 0) {
      _free(uVar5);
    }
  }
  else {
    if ((*plVar11 != 0) || (plVar11[2] == 0)) goto LAB_100a1867c;
    puVar6 = (undefined8 *)plVar11[1];
  }
  _free(puVar6);
LAB_100a1867c:
  _free(plVar11);
  lVar8 = unaff_x19[0x21];
joined_r0x000100a18688:
  if (lVar8 != 0) {
    _free(unaff_x19[0x22]);
  }
  lVar8 = unaff_x19[0x1e];
  do {
    if (lVar8 == -0x7fffffffffffffff) goto LAB_100a182cc;
    do {
      *(undefined1 *)((long)unaff_x19 + 0x1c9) = 0;
LAB_100a182cc:
      *(undefined1 *)((long)unaff_x19 + 0x1c9) = 0;
      unaff_x19[0x3a] = (long)(unaff_x19 + 0xb);
      *(undefined1 *)(unaff_x19 + 0x3c) = 0;
      plVar11 = unaff_x19 + 0x3a;
      func_0x000100fc3cac(&stack0x00000008,plVar11);
      lVar8 = in_stack_00000018;
      uVar5 = 1;
      if (in_stack_00000008 == (long)unaff_x25 + -3) {
        uVar7 = 3;
        goto LAB_100a189a4;
      }
      *(undefined1 *)((long)unaff_x19 + 0x1c9) = 1;
      unaff_x19[0x1f] = in_stack_00000010;
      unaff_x19[0x1e] = in_stack_00000008;
      unaff_x19[0x20] = in_stack_00000018;
      if (unaff_x19[0x1e] == -0x7fffffffffffffff) {
        unaff_x19[0x3a] = unaff_x19[0x1f];
        in_stack_000000e8 = unaff_x19;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000040,s__failed_to_read_JSON_RPC_message_108acdf19,&stack0x000000e8);
        in_stack_00000028 = in_stack_00000048;
        in_stack_00000020 = in_stack_00000040;
        in_stack_00000030 = in_stack_00000050;
        unaff_x19[0x3c] = (long)in_stack_00000048;
        unaff_x19[0x3b] = (long)in_stack_00000040;
        unaff_x19[0x3d] = (long)in_stack_00000050;
        unaff_x19[0x3e] = (long)(unaff_x19 + 9);
        unaff_x19[0x3f] = (long)(unaff_x19 + 10);
        *(undefined1 *)(unaff_x19 + 0x7c) = 0;
        iVar4 = FUN_100a18ba8(unaff_x19 + 0x3b);
        if (iVar4 == 0) {
          if ((char)unaff_x19[0x7c] == '\x03') {
            FUN_100d4fc80(unaff_x19 + 0x40);
            *(undefined1 *)((long)unaff_x19 + 0x3e1) = 0;
          }
          else if ((((char)unaff_x19[0x7c] == '\0') && (unaff_x19[0x3b] != -0x8000000000000000)) &&
                  (unaff_x19[0x3b] != 0)) {
            _free(unaff_x19[0x3c]);
          }
          uVar3 = unaff_x19[0x3a];
          if ((uVar3 & 3) == 1) {
            puVar6 = (undefined8 *)(uVar3 - 1);
            uVar5 = *puVar6;
            puVar12 = *(undefined8 **)(uVar3 + 7);
            pcVar9 = (code *)*puVar12;
            if (pcVar9 != (code *)0x0) {
              (*pcVar9)(uVar5);
            }
            if (puVar12[1] != 0) {
              _free(uVar5);
            }
LAB_100a1889c:
            _free(puVar6);
          }
LAB_100a188a0:
          if (unaff_x19[0x1e] != -0x7fffffffffffffff) {
            *(undefined1 *)((long)unaff_x19 + 0x1c9) = 0;
          }
          *(undefined1 *)((long)unaff_x19 + 0x1c9) = 0;
          FUN_100cfe064(unaff_x19 + 0xb);
          plVar11 = unaff_x19 + 9;
          lVar10 = *plVar11;
          LOAcquire();
          lVar8 = *(long *)(lVar10 + 0x1f0);
          *(long *)(lVar10 + 0x1f0) = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            LOAcquire();
            lVar8 = *(long *)(lVar10 + 0x88);
            *(long *)(lVar10 + 0x88) = lVar8 + 1;
            lVar8 = func_0x000100fcb63c(lVar10 + 0x80,lVar8);
            *(ulong *)(lVar8 + 0x1510) = *(ulong *)(lVar8 + 0x1510) | 0x200000000;
            LORelease();
            puVar1 = (ulong *)(lVar10 + 0x110);
            LOAcquire();
            uVar3 = *puVar1;
            *puVar1 = uVar3 | 2;
            LORelease();
            if (uVar3 == 0) {
              lVar8 = *(long *)(lVar10 + 0x100);
              *(undefined8 *)(lVar10 + 0x100) = 0;
              *puVar1 = in_xzr;
              LORelease();
              if (lVar8 != 0) {
                (**(code **)(lVar8 + 8))(*(undefined8 *)(lVar10 + 0x108));
              }
            }
          }
          lVar8 = *(long *)*plVar11;
          *(long *)*plVar11 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd3ccbc0bef7a5ed1E(plVar11);
          }
          if (*unaff_x19 != 0) {
            _free(unaff_x19[1]);
          }
          plVar11 = unaff_x19 + 10;
          lVar10 = *plVar11;
          LOAcquire();
          lVar8 = *(long *)(lVar10 + 0x150);
          *(long *)(lVar10 + 0x150) = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            *(ulong *)(lVar10 + 0x140) = *(ulong *)(lVar10 + 0x140) | 1;
            LORelease();
            __ZN5tokio4sync5watch10big_notify9BigNotify14notify_waiters17h54480fa2f78f23cdE
                      (lVar10 + 0x10);
          }
          lVar8 = *(long *)*plVar11;
          *(long *)*plVar11 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h269a540ef0f2952fE(plVar11);
          }
          uVar5 = 0;
          uVar7 = 1;
        }
        else {
          uVar5 = 1;
          uVar7 = 7;
        }
        goto LAB_100a189a4;
      }
      if (unaff_x19[0x1e] == -0x8000000000000000) {
        unaff_x19[0x3a] = -0x8000000000000000;
        unaff_x19[0x3d] = (long)(unaff_x19 + 9);
        unaff_x19[0x3e] = (long)(unaff_x19 + 10);
        *(undefined1 *)(unaff_x19 + 0x7b) = 0;
        uVar3 = FUN_100a18ba8(unaff_x19 + 0x3a);
        if ((uVar3 & 1) == 0) {
          if ((char)unaff_x19[0x7b] == '\x03') {
            FUN_100d4fc80(unaff_x19 + 0x3f);
            *(undefined1 *)((long)unaff_x19 + 0x3d9) = 0;
          }
          else if ((((char)unaff_x19[0x7b] == '\0') && (unaff_x19[0x3a] != -0x8000000000000000)) &&
                  (unaff_x19[0x3a] != 0)) {
            puVar6 = (undefined8 *)unaff_x19[0x3b];
            goto LAB_100a1889c;
          }
          goto LAB_100a188a0;
        }
        uVar5 = 1;
        uVar7 = 6;
        goto LAB_100a189a4;
      }
      unaff_x19[0x22] = in_stack_00000010;
      unaff_x19[0x21] = in_stack_00000008;
      unaff_x19[0x23] = in_stack_00000018;
      lVar10 = unaff_x19[0x22];
      FUN_100e8d6f8(lVar10,in_stack_00000018);
      if (extraout_x1 != 0) {
        FUN_10065698c(unaff_x19 + 0x24,lVar10,lVar8);
        if (unaff_x19[0x24] == -0x7ffffffffffffffd) {
          unaff_x19[0x3a] = unaff_x19[0x25];
          in_stack_000000f0 = &DAT_10112965c;
          in_stack_00000100 =
               __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
          ;
          in_stack_000000e8 = unaff_x19;
          in_stack_000000f8 = plVar11;
          goto code_r0x000100a1838c;
        }
        unaff_x19[0x4b] = unaff_x19[0x35];
        unaff_x19[0x4a] = unaff_x19[0x34];
        unaff_x19[0x4d] = unaff_x19[0x37];
        unaff_x19[0x4c] = unaff_x19[0x36];
        unaff_x19[0x4e] = unaff_x19[0x38];
        unaff_x19[0x43] = unaff_x19[0x2d];
        unaff_x19[0x42] = unaff_x19[0x2c];
        unaff_x19[0x45] = unaff_x19[0x2f];
        unaff_x19[0x44] = unaff_x19[0x2e];
        unaff_x19[0x47] = unaff_x19[0x31];
        unaff_x19[0x46] = unaff_x19[0x30];
        unaff_x19[0x49] = unaff_x19[0x33];
        unaff_x19[0x48] = unaff_x19[0x32];
        unaff_x19[0x3b] = unaff_x19[0x25];
        *plVar11 = unaff_x19[0x24];
        unaff_x19[0x3d] = unaff_x19[0x27];
        unaff_x19[0x3c] = unaff_x19[0x26];
        unaff_x19[0x3f] = unaff_x19[0x29];
        unaff_x19[0x3e] = unaff_x19[0x28];
        unaff_x19[0x41] = unaff_x19[0x2b];
        unaff_x19[0x40] = unaff_x19[0x2a];
        unaff_x19[0x4f] = (long)(unaff_x19 + 9);
        *(undefined1 *)(unaff_x19 + 0x75) = 0;
        FUN_100fcc9a4(&stack0x000000e8,unaff_x19 + 0x3a);
        if (in_stack_000000e8 == (long *)((long)unaff_x25 + 1)) {
          uVar5 = 1;
          uVar7 = 4;
          goto LAB_100a189a4;
        }
        *(undefined8 *)(unaff_x24 + 0x78) = in_stack_00000160;
        *(undefined8 *)(unaff_x24 + 0x70) = in_stack_00000158;
        *(undefined8 *)(unaff_x24 + 0x88) = in_stack_00000170;
        *(undefined8 *)(unaff_x24 + 0x80) = in_stack_00000168;
        *(undefined8 *)(unaff_x24 + 0x98) = in_stack_00000180;
        *(undefined8 *)(unaff_x24 + 0x90) = in_stack_00000178;
        in_stack_000000e0 = in_stack_00000188;
        *(undefined8 *)(unaff_x24 + 0x58) = in_stack_00000140;
        *(undefined8 *)(unaff_x24 + 0x50) = in_stack_00000138;
        *(undefined8 *)(unaff_x24 + 0x68) = in_stack_00000150;
        *(undefined8 *)(unaff_x24 + 0x60) = in_stack_00000148;
        in_stack_00000048 = in_stack_000000f0;
        in_stack_00000040 = in_stack_000000e8;
        in_stack_00000058 = in_stack_00000100;
        in_stack_00000050 = in_stack_000000f8;
        in_stack_00000078 = in_stack_00000120;
        in_stack_00000070 = in_stack_00000118;
        in_stack_00000088 = in_stack_00000130;
        in_stack_00000080 = in_stack_00000128;
        in_stack_00000068 = in_stack_00000110;
        in_stack_00000060 = in_stack_00000108;
        FUN_100d4fc80(unaff_x19 + 0x3a);
        if (in_stack_00000040 != unaff_x25) {
          lVar8 = 0;
          if ((long *)0x8000000000000001 < in_stack_00000040) {
            lVar8 = (long)in_stack_00000040 + 0x7ffffffffffffffe;
          }
          if (lVar8 == 0) {
            FUN_100e3d46c(&stack0x00000040);
          }
          else {
            puVar2 = in_stack_00000048;
            if (lVar8 != 1) {
              puVar2 = (undefined *)((ulong)in_stack_00000048 & 0x7fffffffffffffff);
            }
            if (puVar2 != (undefined *)0x0) {
              _free(in_stack_00000050);
            }
          }
          if (unaff_x19[0x21] != 0) {
            puVar6 = (undefined8 *)unaff_x19[0x22];
            goto LAB_100a1889c;
          }
          goto LAB_100a188a0;
        }
        lVar8 = unaff_x19[0x21];
        goto joined_r0x000100a18688;
      }
    } while (unaff_x19[0x21] == 0);
    _free(lVar10);
    lVar8 = unaff_x19[0x1e];
  } while( true );
}

