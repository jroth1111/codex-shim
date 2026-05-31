
void __ZN9codex_api8endpoint19responses_websocket28ResponsesWebsocketConnection3new17h2790581a3980c500E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
               undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
               undefined8 param_9)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint7 uStack_77;
  
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar3 = param_2[2];
  puVar2 = (undefined8 *)_malloc(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[5] = (ulong)uStack_77 << 8;
    puVar2[4] = 0;
    puVar2[7] = uVar4;
    puVar2[6] = 2;
    puVar2[9] = uVar3;
    puVar2[8] = uVar5;
    puVar2[1] = 1;
    *puVar2 = 1;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(param_1 + 7) = param_4;
    *(undefined1 *)(param_1 + 0xb) = param_5;
    uVar3 = *param_6;
    param_1[1] = param_6[1];
    *param_1 = uVar3;
    param_1[2] = param_6[2];
    uVar3 = *param_7;
    param_1[4] = param_7[1];
    param_1[3] = uVar3;
    param_1[5] = param_7[2];
    param_1[6] = param_3;
    param_1[8] = puVar2;
    param_1[9] = param_8;
    param_1[10] = param_9;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x50);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1017eeb64);
  (*pcVar1)();
}

