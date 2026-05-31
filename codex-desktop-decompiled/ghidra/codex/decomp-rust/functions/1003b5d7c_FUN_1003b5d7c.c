
void FUN_1003b5d7c(void)

{
  undefined *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  byte *unaff_x19;
  byte unaff_w20;
  uint unaff_w21;
  long lVar8;
  long *unaff_x24;
  long unaff_x25;
  long lVar9;
  long lVar10;
  long unaff_x28;
  long unaff_x29;
  byte *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
code_r0x0001003b5d7c:
  __ZN4core3fmt5write17h64810b21425781ecE();
LAB_1003b5d88:
  if (*(long *)(unaff_x25 + 0x90) != 0) {
    lVar8 = *(long *)(unaff_x25 + 0x88);
    lVar9 = *(long *)(unaff_x25 + 0x90) * 0x280;
    lVar6 = lVar8 + 0x280;
    lVar10 = lVar9;
    if ((unaff_w20 & 1) == 0) {
      do {
        uVar2 = *(uint *)(lVar6 + -8);
        if ((uVar2 >> 2 & 1) == 0) {
          if ((uVar2 >> 0xe & 1) == 0) {
            if ((uVar2 >> 1 & 1) == 0) goto LAB_1003b5e00;
          }
          else if ((uVar2 & unaff_w21) == 8) goto LAB_1003b5e00;
        }
        lVar6 = lVar6 + 0x280;
        lVar10 = lVar10 + -0x280;
      } while (lVar10 != 0);
    }
    else {
      do {
        uVar2 = *(uint *)(lVar6 + -8);
        if ((uVar2 >> 2 & 1) == 0) {
          if ((uVar2 >> 0xf & 1) == 0) {
            if ((uVar2 >> 1 & 1) == 0) goto LAB_1003b5e00;
          }
          else if ((uVar2 & unaff_w21) == 8) goto LAB_1003b5e00;
        }
        lVar6 = lVar6 + 0x280;
        lVar10 = lVar10 + -0x280;
      } while (lVar10 != 0);
    }
  }
  lVar10 = 0;
  lVar6 = 0;
  plVar5 = (long *)0x8;
  goto LAB_1003b5f30;
LAB_1003b5e00:
  plVar5 = (long *)_malloc(0x20);
  if (plVar5 == (long *)0x0) {
    FUN_107c03c64(8,0x20);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003b6828);
    (*pcVar3)();
  }
  *plVar5 = lVar6 + -0x280;
  *(undefined8 *)(unaff_x29 + -0xb0) = 4;
  *(long **)(unaff_x29 + -0xa8) = plVar5;
  lVar8 = lVar8 + lVar9;
  *(undefined8 *)(unaff_x29 + -0xa0) = 1;
  lVar10 = 1;
  if (lVar6 != lVar8) {
LAB_1003b5e3c:
    lVar6 = lVar6 + 0x280;
    if ((unaff_w20 & 1) != 0) {
      do {
        uVar2 = *(uint *)(lVar6 + -8);
        if ((uVar2 >> 2 & 1) == 0) {
          if ((uVar2 >> 0xf & 1) == 0) {
            if ((uVar2 >> 1 & 1) == 0) goto LAB_1003b5e9c;
          }
          else if ((uVar2 & unaff_w21) == 8) goto LAB_1003b5e9c;
        }
        bVar4 = lVar6 == lVar8;
        lVar6 = lVar6 + 0x280;
        if (bVar4) goto LAB_1003b5ee0;
      } while( true );
    }
    do {
      uVar2 = *(uint *)(lVar6 + -8);
      if ((uVar2 >> 2 & 1) == 0) {
        if ((uVar2 >> 0xe & 1) == 0) {
          if ((uVar2 >> 1 & 1) == 0) goto LAB_1003b5e9c;
        }
        else if ((uVar2 & unaff_w21) == 8) goto LAB_1003b5e9c;
      }
      bVar4 = lVar6 == lVar8;
      lVar6 = lVar6 + 0x280;
      if (bVar4) goto LAB_1003b5ee0;
    } while( true );
  }
  lVar6 = 4;
  lVar8 = unaff_x24[2];
  if (*unaff_x24 != lVar8) goto LAB_1003b5f20;
LAB_1003b5fb4:
  thunk_FUN_1087e3480();
  lVar8 = unaff_x24[2];
LAB_1003b5f20:
  *(char *)(unaff_x24[1] + lVar8) = (char)unaff_w21;
  unaff_x24[2] = lVar8 + 1;
  unaff_x19 = in_stack_00000040;
LAB_1003b5f30:
  *(long *)(unaff_x29 + -0xa0) = unaff_x25;
  *(undefined8 *)(unaff_x29 + -0x98) = in_stack_00000060;
  *(undefined8 *)(unaff_x29 + -0x90) = in_stack_00000058;
  *(undefined1 *)(unaff_x29 + -0x88) = in_stack_00000050;
  *(undefined8 *)(unaff_x29 + -0xb0) = in_stack_00000048;
  *(long **)(unaff_x29 + -0xa8) = unaff_x24;
  *(byte *)(unaff_x29 + -0x87) = unaff_w20;
  FUN_1003b0804(unaff_x29 + -0xb0,plVar5,lVar10,&DAT_1003b8678);
  if ((*(char *)(unaff_x25 + 0x2bd) < '\0') || (*(char *)(unaff_x25 + 0x2c1) < '\0')) {
    FUN_1003b5b90(unaff_x29 + -0xb0,unaff_x25,unaff_x19);
  }
  if (lVar6 != 0) {
    _free(plVar5);
  }
  FUN_1003d5f70(unaff_x29 + -0xb0,&stack0x00000090);
  lVar6 = *(long *)(unaff_x29 + -0xb0);
  if ((lVar6 == 0) || (*(long *)(lVar6 + *(long *)(unaff_x29 + -0xa0) * 0x18 + 0x10) == 0)) {
    do {
      FUN_1003d5f70(unaff_x29 + -0xb0,&stack0x00000090);
    } while (*(long *)(unaff_x29 + -0xb0) != 0);
    return;
  }
  unaff_x25 = *(long *)(lVar6 + *(long *)(unaff_x29 + -0xa0) * 8 + 0x110);
  if ((*unaff_x19 & 1) == 0) {
    lVar6 = unaff_x24[2];
    if ((ulong)(*unaff_x24 - lVar6) < 2) {
      thunk_FUN_1087e3480();
      lVar6 = unaff_x24[2];
    }
    *(undefined2 *)(unaff_x24[1] + lVar6) = 0xa0a;
    unaff_x24[2] = lVar6 + 2;
  }
  *unaff_x19 = 0;
  if (*(long *)(unaff_x25 + 0x1e8) == unaff_x28) {
    bVar4 = *(long *)(unaff_x25 + 0x128) != unaff_x28;
    lVar6 = 0x230;
    if (bVar4) {
      lVar6 = 0x130;
    }
    lVar8 = 0x238;
    if (bVar4) {
      lVar8 = 0x138;
    }
  }
  else {
    lVar6 = 0x1f0;
    lVar8 = 0x1f8;
  }
  uVar7 = *(undefined8 *)(unaff_x25 + lVar8);
  *(undefined8 *)(unaff_x29 + -200) = *(undefined8 *)(unaff_x25 + lVar6);
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar7;
  puVar1 = &
           __ZN91__LT__RF_clap_builder__builder__styled_str__StyledStr_u20_as_u20_core__default__Default_GT_7default7DEFAULT17hc66677ed422a1d9dE
  ;
  if (*(long *)(unaff_x25 + 0x158) != unaff_x28) {
    puVar1 = (undefined *)(unaff_x25 + 0x158);
  }
  if (*(long *)(unaff_x25 + 0x140) != unaff_x28) {
    puVar1 = (undefined *)(unaff_x25 + 0x140);
  }
  *(undefined **)(unaff_x29 + -0xb8) = puVar1;
  *(undefined1 **)(unaff_x29 + -0xb0) = &stack0x00000068;
  *(undefined **)(unaff_x29 + -0xa8) = &DAT_1003d2e10;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -200;
  *(undefined **)(unaff_x29 + -0x98) = &DAT_1003d2d1c;
  __ZN4core3fmt5write17h64810b21425781ecE();
  if (*(long *)(*(long *)(unaff_x29 + -0xb8) + 0x10) != 0) goto code_r0x0001003b5d58;
  goto LAB_1003b5d88;
LAB_1003b5e9c:
  if (lVar10 == *(long *)(unaff_x29 + -0xb0)) {
    thunk_FUN_1087e3480(unaff_x29 + -0xb0,lVar10,1,8,8);
    plVar5 = *(long **)(unaff_x29 + -0xa8);
  }
  plVar5[lVar10] = lVar6 + -0x280;
  lVar10 = lVar10 + 1;
  *(long *)(unaff_x29 + -0xa0) = lVar10;
  if (lVar6 == lVar8) goto LAB_1003b5ee0;
  goto LAB_1003b5e3c;
LAB_1003b5ee0:
  lVar6 = *(long *)(unaff_x29 + -0xb0);
  plVar5 = *(long **)(unaff_x29 + -0xa8);
  lVar8 = unaff_x24[2];
  if (*unaff_x24 != lVar8) goto LAB_1003b5f20;
  goto LAB_1003b5fb4;
code_r0x0001003b5d58:
  *(long *)(unaff_x29 + -0xb0) = unaff_x29 + -0xb8;
  *(undefined **)(unaff_x29 + -0xa8) = &DAT_1003d2d9c;
  goto code_r0x0001003b5d7c;
}

