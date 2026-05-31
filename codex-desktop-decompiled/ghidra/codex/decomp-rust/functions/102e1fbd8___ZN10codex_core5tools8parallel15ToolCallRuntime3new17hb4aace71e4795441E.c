
void __ZN10codex_core5tools8parallel15ToolCallRuntime3new17hb4aace71e4795441E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)_malloc(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 1;
    *puVar2 = 1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[2] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    puVar2[6] = 0x3ffffffe;
    *(undefined4 *)(puVar2 + 7) = 0x1fffffff;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[4] = puVar2;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x40);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1fc74);
  (*pcVar1)();
}

