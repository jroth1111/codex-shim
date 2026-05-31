
void __ZN25codex_utils_stream_parser14assistant_text25AssistantTextStreamParser3new17hea6d596492bead3eE
               (undefined8 *param_1,undefined1 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = (undefined8 *)_malloc(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
  }
  else {
    *puVar2 = &UNK_108f56ce8;
    puVar2[1] = 0x12;
    puVar2[2] = &UNK_108f56cfa;
    puVar2[3] = 0x13;
    puVar3 = (undefined8 *)_malloc(0x20);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &UNK_108f56cc9;
      puVar3[1] = 0xf;
      puVar3[2] = &UNK_108f56cd8;
      puVar3[3] = 0x10;
      param_1[5] = 0;
      param_1[4] = 1;
      param_1[7] = uStack_40;
      param_1[6] = 0x8000000000000000;
      param_1[9] = uStack_30;
      param_1[8] = uStack_38;
      param_1[1] = puVar2;
      *param_1 = 1;
      param_1[3] = 0;
      param_1[2] = 1;
      *(undefined1 *)(param_1 + 0x12) = param_2;
      param_1[10] = uStack_28;
      param_1[0xb] = 1;
      param_1[0xc] = puVar3;
      param_1[0xe] = 0;
      param_1[0xd] = 1;
      param_1[0xf] = 1;
      param_1[0x10] = 0;
      *(undefined2 *)(param_1 + 0x11) = 0x100;
      return;
    }
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x105596154);
  (*pcVar1)();
}

