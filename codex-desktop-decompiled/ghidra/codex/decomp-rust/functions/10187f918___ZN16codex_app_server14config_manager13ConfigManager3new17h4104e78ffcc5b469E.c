
void __ZN16codex_app_server14config_manager13ConfigManager3new17h4104e78ffcc5b469E
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
               undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint7 uStack_c8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar9 = param_2[2];
  uVar11 = param_3[1];
  uVar10 = *param_3;
  uVar8 = param_3[2];
  puVar4 = (undefined8 *)_malloc(0x38);
  if (puVar4 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
  }
  else {
    puVar4[1] = 1;
    *puVar4 = 1;
    puVar4[3] = (ulong)uStack_c8 << 8;
    puVar4[2] = 0;
    puVar4[5] = uVar11;
    puVar4[4] = uVar10;
    puVar4[6] = uVar8;
    puVar5 = (undefined8 *)_malloc(0x38);
    if (puVar5 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x38);
    }
    else {
      puVar5[1] = 1;
      *puVar5 = 1;
      puVar5[3] = (ulong)uStack_c8 << 8;
      puVar5[2] = 0;
      puVar5[5] = uVar11;
      puVar5[4] = 0;
      puVar5[6] = 0;
      puVar6 = (undefined8 *)_malloc(0x30);
      if (puVar6 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
      }
      else {
        puVar6[1] = 1;
        *puVar6 = 1;
        puVar6[3] = (ulong)uStack_c8 << 8;
        puVar6[2] = 0;
        puVar6[5] = param_7;
        puVar6[4] = param_6;
        puVar7 = (undefined8 *)_malloc(0x30);
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[1] = 1;
          *puVar7 = 1;
          puVar7[3] = (ulong)uStack_c8 << 8;
          puVar7[2] = 0;
          puVar7[5] = param_10;
          puVar7[4] = param_9;
          uVar11 = param_4[0xd];
          uVar10 = param_4[0xc];
          uVar8 = param_4[0xe];
          param_1[0x12] = param_4[0xf];
          param_1[0x11] = uVar8;
          uVar8 = param_4[0x10];
          uVar13 = param_4[0x13];
          uVar12 = param_4[0x12];
          param_1[0x14] = param_4[0x11];
          param_1[0x13] = uVar8;
          param_1[0x16] = uVar13;
          param_1[0x15] = uVar12;
          uVar8 = param_4[0x14];
          param_1[0x18] = param_4[0x15];
          param_1[0x17] = uVar8;
          uVar13 = param_4[5];
          uVar12 = param_4[4];
          uVar8 = param_4[6];
          param_1[10] = param_4[7];
          param_1[9] = uVar8;
          uVar8 = param_4[8];
          uVar15 = param_4[0xb];
          uVar14 = param_4[10];
          param_1[0xc] = param_4[9];
          param_1[0xb] = uVar8;
          param_1[0xe] = uVar15;
          param_1[0xd] = uVar14;
          param_1[0x10] = uVar11;
          param_1[0xf] = uVar10;
          uVar8 = *param_4;
          uVar11 = param_4[3];
          uVar10 = param_4[2];
          param_1[4] = param_4[1];
          param_1[3] = uVar8;
          param_1[6] = uVar11;
          param_1[5] = uVar10;
          param_1[8] = uVar13;
          param_1[7] = uVar12;
          uVar11 = param_8[1];
          uVar10 = *param_8;
          uVar8 = param_8[2];
          param_1[0x1c] = param_8[3];
          param_1[0x1b] = uVar8;
          uVar8 = param_8[4];
          uVar13 = param_8[7];
          uVar12 = param_8[6];
          param_1[0x1e] = param_8[5];
          param_1[0x1d] = uVar8;
          param_1[0x20] = uVar13;
          param_1[0x1f] = uVar12;
          *param_1 = uVar1;
          param_1[1] = uVar2;
          param_1[2] = uVar9;
          *(undefined1 *)(param_1 + 0x26) = param_5;
          param_1[0x23] = puVar5;
          param_1[0x24] = puVar6;
          param_1[0x21] = param_8[8];
          param_1[0x22] = puVar4;
          param_1[0x1a] = uVar11;
          param_1[0x19] = uVar10;
          param_1[0x25] = puVar7;
          return;
        }
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x30);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10187fb7c);
  (*pcVar3)();
}

