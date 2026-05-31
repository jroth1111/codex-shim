
undefined1  [16]
__ZN10codex_core6client18ModelClientSession25build_websocket_telemetry17h19306b55fd233218E
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 *param_5)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_398 [304];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [408];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  FUN_103811ce0(&uStack_200,param_1);
  _memcpy(auStack_398,&uStack_200,0x130);
  uStack_220 = param_2[5];
  uStack_228 = param_2[4];
  uStack_210 = param_2[7];
  uStack_218 = param_2[6];
  uStack_208 = param_2[8];
  uStack_240 = param_2[1];
  uStack_248 = *param_2;
  uStack_230 = param_2[3];
  uStack_238 = param_2[2];
  uStack_260 = param_5[1];
  uStack_268 = *param_5;
  uStack_250 = param_5[3];
  uStack_258 = param_5[2];
  uStack_1f8 = 1;
  uStack_200 = 1;
  _memcpy(auStack_1f0,auStack_398,0x198);
  uStack_58 = param_3;
  uStack_50 = param_4;
  auVar2._0_8_ = _malloc(0x1b8);
  if (auVar2._0_8_ != 0) {
    _memcpy(auVar2._0_8_,&uStack_200,0x1b8);
    auVar2._8_8_ = &UNK_10b2adfd0;
    return auVar2;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1b8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e47390);
  (*pcVar1)();
}

