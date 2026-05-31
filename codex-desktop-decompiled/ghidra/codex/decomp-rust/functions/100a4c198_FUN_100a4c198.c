
void FUN_100a4c198(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  undefined1 *unaff_x27;
  long in_xzr;
  undefined1 auVar10 [16];
  undefined1 in_stack_000000d0;
  long in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000310;
  
  puVar1 = puRam000000010b634c20;
  if (lRam000000010b66fd20 != 2) {
    puVar1 = &UNK_10b3c24c8;
  }
  puVar2 = puRam000000010b634c18;
  if (lRam000000010b66fd20 != 2) {
    puVar2 = &UNK_109adfc03;
  }
  (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000310);
  puVar5 = (undefined8 *)_malloc(0x40);
  if (puVar5 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
    goto LAB_100a4c570;
  }
  puVar5[1] = 1;
  *puVar5 = 1;
  puVar5[2] = 0;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[3] = in_stack_00000310;
  puVar5[7] = 0;
  puVar6 = (undefined8 *)_malloc(0x40);
  lVar3 = in_stack_000000d8;
  if (puVar6 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
    goto LAB_100a4c570;
  }
  puVar6[1] = 1;
  *puVar6 = 1;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[3] = in_stack_00000310;
  puVar6[7] = 0;
  lVar7 = puVar5[4];
  if (lVar7 == 0) {
    puVar5[4] = 1;
  }
  if (lVar7 == 2) {
    lVar8 = unaff_x22[1];
    puVar5 = (undefined8 *)(*unaff_x22 + 0x10);
LAB_100a4c354:
    (*(code *)*puVar5)(lVar8);
LAB_100a4c35c:
    lVar7 = puVar6[4];
    if (lVar7 == 0) {
      puVar6[4] = 1;
    }
    if (lVar7 == 2) {
      lVar7 = unaff_x22[1];
      puVar5 = (undefined8 *)(*unaff_x22 + 0x10);
    }
    else {
      if (lVar7 != 0) goto LAB_100a4c420;
      if ((undefined8 *)puVar6[2] == (undefined8 *)0x0) {
        lVar7 = unaff_x22[1];
LAB_100a4c3c4:
        auVar10 = (**(code **)*unaff_x22)(lVar7);
        if (puVar6[2] != 0) {
          (**(code **)(puVar6[2] + 0x18))(puVar6[3]);
        }
        *(undefined1 (*) [16])(puVar6 + 2) = auVar10;
        if (puVar6[4] == 1) {
          puVar6[4] = in_xzr;
          goto LAB_100a4c420;
        }
      }
      else {
        lVar7 = unaff_x22[1];
        if (((undefined8 *)puVar6[2] != (undefined8 *)*unaff_x22) || (puVar6[3] != lVar7))
        goto LAB_100a4c3c4;
        if (puVar6[4] == 1) {
          puVar6[4] = in_xzr;
          goto LAB_100a4c420;
        }
      }
      lVar8 = puVar6[2];
      lVar7 = puVar6[3];
      puVar6[2] = 0;
      if (lVar8 == 0) goto LAB_100a4c52c;
      LOAcquire();
      puVar6[4] = in_xzr;
      LORelease();
      puVar5 = (undefined8 *)(lVar8 + 8);
    }
    (*(code *)*puVar5)(lVar7);
LAB_100a4c420:
    __ZN11tungstenite8protocol16WebSocketContext3new17h0f6c674ed1b2c0d4E
              (&stack0x00000310,in_stack_000000d0,&stack0x00000088);
    _memcpy(&stack0x00000108,&stack0x00000318,0x148);
    if (lVar3 == 2) {
      uVar9 = 3;
      *unaff_x27 = 3;
      *unaff_x21 = 2;
    }
    else {
      if (*(long *)(unaff_x19 + 0xf8) != 3) {
        FUN_100de6460(unaff_x19 + 0x148);
      }
      _memcpy(unaff_x21 + 1,&stack0x00000108,0x188);
      *unaff_x21 = lVar3;
      *(undefined2 *)(unaff_x21 + 0x32) = 0;
      uVar9 = 1;
      *(undefined1 *)((long)unaff_x21 + 0x192) = 1;
      *unaff_x27 = 1;
    }
    *(undefined1 *)(unaff_x19 + 0x181) = uVar9;
    return;
  }
  if (lVar7 != 0) goto LAB_100a4c35c;
  if ((undefined8 *)puVar5[2] == (undefined8 *)0x0) {
    lVar7 = unaff_x22[1];
LAB_100a4c300:
    auVar10 = (**(code **)*unaff_x22)(lVar7);
    if (puVar5[2] != 0) {
      (**(code **)(puVar5[2] + 0x18))(puVar5[3]);
    }
    *(undefined1 (*) [16])(puVar5 + 2) = auVar10;
    if (puVar5[4] == 1) {
      puVar5[4] = in_xzr;
      goto LAB_100a4c35c;
    }
  }
  else {
    lVar7 = unaff_x22[1];
    if (((undefined8 *)puVar5[2] != (undefined8 *)*unaff_x22) || (puVar5[3] != lVar7))
    goto LAB_100a4c300;
    if (puVar5[4] == 1) {
      puVar5[4] = in_xzr;
      goto LAB_100a4c35c;
    }
  }
  lVar7 = puVar5[2];
  lVar8 = puVar5[3];
  puVar5[2] = 0;
  if (lVar7 != 0) {
    LOAcquire();
    puVar5[4] = in_xzr;
    LORelease();
    puVar5 = (undefined8 *)(lVar7 + 8);
    goto LAB_100a4c354;
  }
LAB_100a4c52c:
  func_0x000108a07a20(&UNK_10b398268);
LAB_100a4c570:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100a4c574);
  (*pcVar4)();
}

