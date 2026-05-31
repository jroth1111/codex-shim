
void FUN_100970908(void)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  long unaff_x19;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *unaff_x25;
  undefined8 unaff_x26;
  long in_stack_00000060;
  undefined8 *in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined7 uStack0000000000000120;
  undefined8 uStack0000000000000127;
  long in_stack_00004d20;
  undefined8 in_stack_00004d28;
  undefined8 in_stack_00004d30;
  undefined8 in_stack_00004d38;
  undefined8 in_stack_00004d40;
  undefined8 in_stack_00004d48;
  long in_stack_00004d50;
  undefined8 in_stack_00004d58;
  undefined8 in_stack_00004d60;
  long in_stack_00004d68;
  undefined8 in_stack_00004d70;
  undefined8 in_stack_00004d78;
  undefined8 in_stack_00004d80;
  undefined8 in_stack_00004d88;
  undefined8 in_stack_00004d90;
  undefined8 in_stack_00004d98;
  undefined8 in_stack_00004da0;
  undefined8 in_stack_00004da8;
  undefined8 in_stack_00004db0;
  undefined8 in_stack_00004db8;
  undefined8 in_stack_00004dc0;
  undefined8 in_stack_00004dc8;
  undefined8 in_stack_00004dd0;
  undefined8 in_stack_00004dd8;
  undefined8 in_stack_00004de0;
  undefined8 in_stack_00004de8;
  undefined8 in_stack_00004df0;
  undefined8 in_stack_00004df8;
  long in_stack_00004e00;
  undefined8 in_stack_00004e08;
  long in_stack_00004e18;
  
  FUN_100973ee0(&stack0x00007360);
  unaff_x25[2] = 0;
  _memcpy(unaff_x19 + 0x26f0,unaff_x19 + 0xa0,0x2548);
  if (in_stack_00004e18 != -0x7ffffffffffffffb) {
    FUN_100de6690(&stack0x00004e18);
  }
  if (in_stack_00004e00 != 0) {
    _free(in_stack_00004e08);
  }
  plVar5 = *(long **)(*(long *)(unaff_x19 + 0x50) + 0x140);
  lVar2 = *plVar5;
  *plVar5 = lVar2 + 1;
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100973368);
    (*pcVar1)();
  }
  FUN_1019e66f0(&stack0x00004e00);
  FUN_1018a3038(plVar5,&stack0x00004e00);
  *(undefined8 *)(unaff_x19 + 0x4d28) = *(undefined8 *)(unaff_x19 + 0x26d8);
  *(undefined8 *)(unaff_x19 + 0x4d30) = *(undefined8 *)(unaff_x19 + 0x26e0);
  unaff_x25[0x350] = 0;
  FUN_100a69298(&stack0x00004d20,unaff_x19 + 0x4d28,in_stack_00000078);
  if (in_stack_00004d20 == 0) {
    *in_stack_00000070 = 0x8000000000000001;
    uVar4 = 9;
  }
  else {
    unaff_x25[1] = 1;
    *(undefined8 *)(unaff_x19 + 0x4c40) = in_stack_00004d28;
    *(long *)(unaff_x19 + 0x4c38) = in_stack_00004d20;
    *(undefined8 *)(unaff_x19 + 0x4c50) = in_stack_00004d38;
    *(undefined8 *)(unaff_x19 + 0x4c48) = in_stack_00004d30;
    *(undefined8 *)(unaff_x19 + 0x4c60) = in_stack_00004d48;
    *(undefined8 *)(unaff_x19 + 0x4c58) = in_stack_00004d40;
    FUN_100c9db44(unaff_x19 + 0x4d28);
    if (*(long *)(unaff_x19 + 0x4c50) != 0) {
      uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
      unaff_x25[1] = 0;
      _memcpy(&stack0x00007360,&stack0x00004e00,0x910);
      _memcpy(unaff_x19 + 0x4d28,&stack0x00007360,0x910);
      *(undefined8 *)(unaff_x19 + 0x5638) = uVar7;
      *(long *)(unaff_x19 + 0x5640) = unaff_x19 + 0x26f0;
      unaff_x25[0x932] = 0;
      iVar3 = FUN_100976c48(unaff_x19 + 0x4d28,in_stack_00000078);
      if (iVar3 != 0) {
        *in_stack_00000070 = 0x8000000000000001;
        uVar4 = 10;
        goto LAB_100973228;
      }
      FUN_100d487e8(unaff_x19 + 0x4d28);
    }
    *(undefined8 *)(unaff_x19 + 0x4d28) = *(undefined8 *)(unaff_x19 + 0x26d8);
    *(undefined8 *)(unaff_x19 + 0x4d30) = *(undefined8 *)(unaff_x19 + 0x26e0);
    unaff_x25[0x20] = 0;
    FUN_100a66fec(&stack0x00004d50,unaff_x19 + 0x4d28,in_stack_00000078);
    if (in_stack_00004d50 == -0x8000000000000000) {
      *in_stack_00000070 = 0x8000000000000001;
      uVar4 = 0xb;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0x4c70) = in_stack_00004d58;
      *(long *)(unaff_x19 + 0x4c68) = in_stack_00004d50;
      *(undefined8 *)(unaff_x19 + 0x4c78) = in_stack_00004d60;
      if (unaff_x25[0x20] == '\x04') {
        FUN_100e86c44(unaff_x19 + 0x4d40);
      }
      else if (unaff_x25[0x20] == '\x03') {
        FUN_100e86c44(unaff_x19 + 0x5170);
        func_0x000100e1ca08(unaff_x19 + 0x4f58);
      }
      *(long *)(unaff_x19 + 0x4d30) = *(long *)(*(long *)(unaff_x19 + 0x50) + 0x138) + 0x10;
      unaff_x25[0x21] = 0;
      FUN_1006dd9c8(&stack0x00004d68,unaff_x19 + 0x4d28,in_stack_00000078);
      if (in_stack_00004d68 == -0x7ffffffffffffffc) {
        *in_stack_00000070 = 0x8000000000000001;
        uVar4 = 0xc;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x4ce8) = in_stack_00004dd0;
        *(undefined8 *)(unaff_x19 + 0x4ce0) = in_stack_00004dc8;
        *(undefined8 *)(unaff_x19 + 0x4cf8) = in_stack_00004de0;
        *(undefined8 *)(unaff_x19 + 0x4cf0) = in_stack_00004dd8;
        *(undefined8 *)(unaff_x19 + 0x4d08) = in_stack_00004df0;
        *(undefined8 *)(unaff_x19 + 0x4d00) = in_stack_00004de8;
        *(undefined8 *)(unaff_x19 + 0x4ca8) = in_stack_00004d90;
        *(undefined8 *)(unaff_x19 + 0x4ca0) = in_stack_00004d88;
        *(undefined8 *)(unaff_x19 + 0x4cb8) = in_stack_00004da0;
        *(undefined8 *)(unaff_x19 + 0x4cb0) = in_stack_00004d98;
        *(undefined8 *)(unaff_x19 + 0x4cc8) = in_stack_00004db0;
        *(undefined8 *)(unaff_x19 + 0x4cc0) = in_stack_00004da8;
        *(undefined8 *)(unaff_x19 + 0x4cd8) = in_stack_00004dc0;
        *(undefined8 *)(unaff_x19 + 0x4cd0) = in_stack_00004db8;
        *(undefined8 *)(unaff_x19 + 0x4c88) = in_stack_00004d70;
        *(long *)(unaff_x19 + 0x4c80) = in_stack_00004d68;
        *(undefined8 *)(unaff_x19 + 0x4d10) = in_stack_00004df8;
        *(undefined8 *)(unaff_x19 + 0x4c98) = in_stack_00004d80;
        *(undefined8 *)(unaff_x19 + 0x4c90) = in_stack_00004d78;
        if (unaff_x25[0x21] == '\x04') {
          FUN_100cab424(unaff_x19 + 0x4dd8);
          FUN_100e0609c(unaff_x19 + 0x4d40);
          unaff_x25[0x20] = 0;
        }
        else if (unaff_x25[0x21] == '\x03') {
          FUN_100ce72d8(unaff_x19 + 0x4d40);
        }
        uVar7 = *(undefined8 *)(unaff_x19 + 0x50);
        lVar2 = *(long *)(unaff_x19 + 0x4c80);
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x19 + 0x4d28,s___108b03abb,&stack0x00004e00);
        *(undefined8 *)(unaff_x19 + 0x4d88) = *(undefined8 *)(unaff_x19 + 0x4d38);
        *(undefined8 *)(unaff_x19 + 0x4d80) = *(undefined8 *)(unaff_x19 + 0x4d30);
        *(undefined8 *)(unaff_x19 + 0x4d90) = *(undefined8 *)(unaff_x19 + 0x4c70);
        *(undefined8 *)(unaff_x19 + 0x4d98) = *(undefined8 *)(unaff_x19 + 0x4c78);
        *(undefined8 *)(unaff_x19 + 0x4dc8) = uVar7;
        *(long *)(unaff_x19 + 0x4dd0) = unaff_x19 + 0x26f0;
        unaff_x25[0xc4] = 0;
        unaff_x25[0xc5] = lVar2 + 0x7fffffffffffffffU < 2;
        FUN_100978ca8(&stack0x00004e00,unaff_x19 + 0x4d40,in_stack_00000078);
        if (unaff_x19 + 0x2688 == -0x8000000000000000) {
          *in_stack_00000070 = 0x8000000000000001;
          uVar4 = 0xd;
        }
        else {
          FUN_100d5d740(unaff_x19 + 0x4d40);
          if (*(long *)(unaff_x19 + 0x4d28) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x4d30));
          }
          uVar4 = *(undefined1 *)(in_stack_00000060 + 0x50);
          if (*(long *)(unaff_x19 + 0x4c80) != -0x7ffffffffffffffd) {
            FUN_100e0609c(unaff_x19 + 0x4c80);
          }
          lVar6 = *(long *)(unaff_x19 + 0x4c70);
          lVar2 = *(long *)(unaff_x19 + 0x4c78);
          if (lVar2 != 0) {
            puVar8 = (undefined8 *)(lVar6 + 8);
            do {
              if (puVar8[-1] != 0) {
                _free(*puVar8);
              }
              puVar8 = puVar8 + 3;
              lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
          }
          if (*(long *)(unaff_x19 + 0x4c68) != 0) {
            _free(lVar6);
          }
          if ((unaff_x25[1] & 1) != 0) {
            FUN_100cf8c18(unaff_x19 + 0x4c38);
          }
          unaff_x25[1] = 0;
          FUN_100de93d0(unaff_x19 + 0x26f0);
          if (*(long *)(unaff_x19 + 0x2688) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x2690));
          }
          if (*(long *)(unaff_x19 + 0x26a0) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x26a8));
          }
          if (*(long *)(unaff_x19 + 0x26b8) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x26c0));
          }
          if (*(long *)(unaff_x19 + 0x26d0) != 0) {
            _free(*(undefined8 *)(unaff_x19 + 0x26d8));
          }
          unaff_x25[8] = 0;
          lVar2 = **(long **)(unaff_x19 + 0x2680);
          **(long **)(unaff_x19 + 0x2680) = lVar2 + -1;
          LORelease();
          if (lVar2 == 1) {
            DataMemoryBarrier(2,1);
            __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hb1fe494329e418d7E(unaff_x19 + 0x2680);
          }
          if (*(long *)(unaff_x19 + 0x25e8) != -0x7ffffffffffffffd) {
            FUN_100e0609c(unaff_x19 + 0x25e8);
          }
          if ((unaff_x25[2] & 1) != 0) {
            FUN_100de93d0(unaff_x19 + 0xa0);
          }
          *(undefined2 *)(unaff_x25 + 2) = 0;
          *(undefined2 *)(unaff_x25 + 6) = 0;
          *(undefined8 *)((long)in_stack_00000070 + 0x29) = in_stack_000000f8;
          *(undefined8 *)((long)in_stack_00000070 + 0x21) = in_stack_000000f0;
          *in_stack_00000070 = 0x8000000000000000;
          in_stack_00000070[1] = unaff_x19 + 0x2688;
          in_stack_00000070[2] = &DAT_1048e978c;
          in_stack_00000070[3] = unaff_x19 + 0x26a0;
          *(undefined1 *)(in_stack_00000070 + 4) = uVar4;
          *(undefined8 *)((long)in_stack_00000070 + 0x39) = in_stack_00000108;
          *(undefined8 *)((long)in_stack_00000070 + 0x31) = in_stack_00000100;
          *(undefined8 *)((long)in_stack_00000070 + 0x49) = in_stack_00000118;
          *(undefined8 *)((long)in_stack_00000070 + 0x41) = in_stack_00000110;
          in_stack_00000070[0xb] = uStack0000000000000127;
          in_stack_00000070[10] = CONCAT71(uStack0000000000000120,in_stack_00000118._7_1_);
          uVar4 = 1;
          in_stack_00000070[0xc] = unaff_x26;
        }
      }
    }
  }
LAB_100973228:
  *unaff_x25 = uVar4;
  return;
}

