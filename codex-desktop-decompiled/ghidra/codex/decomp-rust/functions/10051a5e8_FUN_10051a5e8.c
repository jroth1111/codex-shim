
void FUN_10051a5e8(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar7;
  long unaff_x26;
  long unaff_x27;
  undefined1 *puVar8;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack0000000000000028;
  
  *(char **)(unaff_x29 + -0x70) = s_ToolCall__108ac0494;
  *(undefined1 **)(unaff_x29 + -0x68) = &stack0x00000040;
  lStack0000000000000028 = **(long **)(unaff_x19 + 0x260) + 0x790;
  FUN_10051ae48(&stack0x00000ce0);
  lVar1 = **(long **)(unaff_x19 + 0x260) + 0x10;
  lVar6 = (*(long **)(unaff_x19 + 0x260))[1] + 0x10;
  *(long *)(unaff_x19 + 0x890) = lVar1;
  *(long *)(unaff_x19 + 0x898) = lVar6;
  *(long *)(unaff_x19 + 0x8a0) = unaff_x19;
  puVar8 = (undefined1 *)(unaff_x27 + 0xf0);
  *puVar8 = 0;
  *(long *)(unaff_x19 + 0x8a8) = lVar1;
  *(long *)(unaff_x19 + 0x8b0) = lVar6;
  *(long *)(unaff_x19 + 0x8b8) = unaff_x19;
  *(undefined8 *)(unaff_x19 + 0x8c0) = 0;
  *(undefined1 *)(unaff_x19 + 0x8e8) = 0;
  uVar2 = FUN_10051e198(unaff_x19 + 0x8a8);
  if ((uVar2 & 1) != 0) {
    *puVar8 = 3;
    *unaff_x20 = unaff_x26;
    uVar4 = 4;
LAB_10051a7f0:
    *(undefined1 *)(unaff_x19 + 0x870) = uVar4;
    return;
  }
  FUN_100d12094(unaff_x19 + 0x8a8);
  *puVar8 = 1;
  uVar3 = __ZN10tokio_util4sync18cancellation_token17CancellationToken11child_token17hbb1a1ff9d9cc5a86E
                    (*(long *)(unaff_x19 + 0x260) + 0x40);
  lVar6 = *(long *)(unaff_x19 + 0x260);
  lVar1 = **(long **)(lVar6 + 0x18);
  **(long **)(lVar6 + 0x18) = lVar1 + 1;
  if (-1 < lVar1) {
    lVar1 = **(long **)(lVar6 + 0x20);
    **(long **)(lVar6 + 0x20) = lVar1 + 1;
    if (-1 < lVar1) {
      lVar1 = **(long **)(lVar6 + 0x28);
      **(long **)(lVar6 + 0x28) = lVar1 + 1;
      if (-1 < lVar1) {
        lVar1 = **(long **)(lVar6 + 0x30);
        **(long **)(lVar6 + 0x30) = lVar1 + 1;
        if (-1 < lVar1) {
          lVar1 = **(long **)(lVar6 + 0x38);
          **(long **)(lVar6 + 0x38) = lVar1 + 1;
          if (-1 < lVar1) {
            *(undefined1 *)(unaff_x19 + 0x877) = 0;
            __ZN10codex_core5tools8parallel15ToolCallRuntime16handle_tool_call17h4d0a1aa58f00dbb4E
                      (&stack0x00000040,&stack0x00000ce0,&stack0x00000d10,uVar3);
            lVar1 = _malloc(0xca0);
            if (lVar1 != 0) {
              _memcpy(lVar1,&stack0x00000040,0xca0);
              *(undefined1 *)(unaff_x19 + 0x290) = 1;
              lVar6 = *(long *)(unaff_x19 + 0x280);
              if (lVar6 != 0) {
                puVar7 = *(undefined8 **)(unaff_x19 + 0x288);
                pcVar5 = (code *)*puVar7;
                if (pcVar5 != (code *)0x0) {
                  (*pcVar5)(lVar6);
                }
                if (puVar7[1] != 0) {
                  _free(lVar6);
                }
              }
              *(long *)(unaff_x19 + 0x280) = lVar1;
              *(undefined **)(unaff_x19 + 0x288) = &UNK_10b2163c8;
              if (*(long *)(unaff_x19 + 0x878) != 0) {
                _free(*(undefined8 *)(unaff_x19 + 0x880));
              }
              *(undefined1 *)(unaff_x19 + 0x877) = 0;
              if (*(long *)(unaff_x19 + 0x298) == 6) {
                *(undefined1 *)(unaff_x19 + 0x872) = 0;
              }
              else {
                *(undefined1 *)(unaff_x19 + 0x871) = 0;
              }
              *(undefined2 *)(unaff_x19 + 0x871) = 0;
              uVar3 = *(undefined8 *)(unaff_x19 + 0x268);
              uVar10 = *(undefined8 *)(unaff_x19 + 0x280);
              uVar9 = *(undefined8 *)(unaff_x19 + 0x278);
              *(undefined8 *)(unaff_x29 + -0xf8) = *(undefined8 *)(unaff_x19 + 0x270);
              *(undefined8 *)(unaff_x29 + -0x100) = uVar3;
              *(undefined8 *)(unaff_x29 + -0xe8) = uVar10;
              *(undefined8 *)(unaff_x29 + -0xf0) = uVar9;
              uVar3 = *(undefined8 *)(unaff_x19 + 0x288);
              *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)(unaff_x19 + 0x290);
              *(undefined8 *)(unaff_x29 + -0xe0) = uVar3;
              FUN_100e02a24();
              if (*(long *)(unaff_x19 + 0xc0) != unaff_x26 + -0x16) {
                FUN_100df5b9c();
              }
              lVar11 = *(long *)(unaff_x29 + -0xb8);
              lVar6 = *(long *)(unaff_x29 + -0xc0);
              lVar1 = *(long *)(unaff_x29 + -0xb0);
              unaff_x20[0xc] = *(long *)(unaff_x29 + -0xa8);
              unaff_x20[0xb] = lVar1;
              lVar1 = *(long *)(unaff_x29 + -0xa0);
              lVar13 = *(long *)(unaff_x29 + -0x88);
              lVar12 = *(long *)(unaff_x29 + -0x90);
              unaff_x20[0xe] = *(long *)(unaff_x29 + -0x98);
              unaff_x20[0xd] = lVar1;
              unaff_x20[0x10] = lVar13;
              unaff_x20[0xf] = lVar12;
              lVar1 = *(long *)(unaff_x29 + -0x80);
              unaff_x20[0x12] = *(long *)(unaff_x29 + -0x78);
              unaff_x20[0x11] = lVar1;
              lVar13 = *(long *)(unaff_x29 + -0xf8);
              lVar12 = *(long *)(unaff_x29 + -0x100);
              lVar1 = *(long *)(unaff_x29 + -0xf0);
              unaff_x20[4] = *(long *)(unaff_x29 + -0xe8);
              unaff_x20[3] = lVar1;
              lVar1 = *(long *)(unaff_x29 + -0xe0);
              lVar15 = *(long *)(unaff_x29 + -200);
              lVar14 = *(long *)(unaff_x29 + -0xd0);
              unaff_x20[6] = *(long *)(unaff_x29 + -0xd8);
              unaff_x20[5] = lVar1;
              unaff_x20[8] = lVar15;
              unaff_x20[7] = lVar14;
              unaff_x20[10] = lVar11;
              unaff_x20[9] = lVar6;
              *unaff_x20 = unaff_x26 + -1;
              uVar4 = 1;
              unaff_x20[2] = lVar13;
              unaff_x20[1] = lVar12;
              goto LAB_10051a7f0;
            }
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0xca0);
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10051aa54);
  (*pcVar5)();
}

