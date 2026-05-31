
void FUN_1015243bc(ulong *param_1,long param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  long alStack_78 [2];
  long lStack_68;
  
  uStack_138 = 0;
  uStack_128 = 0;
  pcVar7 = (char *)(param_2 + 0x20);
  for (param_3 = param_3 << 6; param_3 != 0; param_3 = param_3 + -0x40) {
    if (pcVar7[-0x20] != '\x16') {
      func_0x0001004e0914(&uStack_d0);
      uVar3 = uStack_b8;
      uVar2 = uStack_c0;
      uVar4 = uStack_c8;
      if (uStack_d0 != 2) {
        uStack_118 = CONCAT17(uStack_a0,uStack_a7);
        uStack_120 = CONCAT17(uStack_a8,uStack_af);
        uStack_108 = CONCAT17(uStack_90,uStack_97);
        uStack_110 = CONCAT17(uStack_98,uStack_9f);
        uStack_100 = CONCAT17(uStack_88,uStack_8f);
        uStack_f8 = uStack_87;
        uStack_f1 = uStack_80;
        uStack_f0 = uStack_7f;
        uVar6 = uStack_c0;
        uVar8 = uStack_b8;
        uVar9 = uStack_c8;
LAB_1015244e0:
        *param_1 = uStack_d0;
        param_1[1] = uVar9;
        param_1[2] = uVar6;
        param_1[3] = uVar8;
        *(undefined1 *)(param_1 + 4) = uStack_b0;
        *(undefined8 *)((long)param_1 + 0x29) = uStack_118;
        *(undefined8 *)((long)param_1 + 0x21) = uStack_120;
        *(undefined8 *)((long)param_1 + 0x39) = uStack_108;
        *(undefined8 *)((long)param_1 + 0x31) = uStack_110;
        *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_f1,uStack_f8);
        *(undefined8 *)((long)param_1 + 0x41) = uStack_100;
        param_1[10] = CONCAT71(uStack_f0,uStack_f1);
        if (uStack_138 == 0) {
          uVar4 = 0;
        }
        else {
          uStack_c8 = 0;
          uStack_c0 = uStack_138;
          uStack_b8 = uStack_130;
          uStack_a8 = 0;
          uStack_a7 = 0;
          uStack_a0 = (undefined1)uStack_138;
          uStack_9f = (undefined7)(uStack_138 >> 8);
          uStack_98 = (undefined1)uStack_130;
          uStack_97 = (undefined7)(uStack_130 >> 8);
          uVar4 = uStack_128;
        }
        uStack_b0 = uStack_138 != 0;
        uStack_d0 = (ulong)(byte)uStack_b0;
        uStack_af = 0;
        uStack_90 = (undefined1)uVar4;
        uStack_8f = (undefined7)(uVar4 >> 8);
        FUN_100f3a554(alStack_78,&uStack_d0);
        while (alStack_78[0] != 0) {
          lVar5 = alStack_78[0] + lStack_68 * 0x18;
          if (*(long *)(lVar5 + 8) != 0) {
            _free(*(undefined8 *)(lVar5 + 0x10));
          }
          FUN_100f3a554(alStack_78,&uStack_d0);
        }
        return;
      }
      if (uStack_c8 == 0x8000000000000000) break;
      if (*pcVar7 == '\0') {
        cVar1 = pcVar7[1];
      }
      else {
        FUN_108855bf0(&uStack_d0,pcVar7,&uStack_120,&UNK_10b20a560);
        uVar8 = uStack_b8;
        uVar6 = uStack_c0;
        uVar9 = uStack_c8;
        if (uStack_d0 != 2) {
          uStack_118 = CONCAT17(uStack_a0,uStack_a7);
          uStack_120 = CONCAT17(uStack_a8,uStack_af);
          uStack_108 = CONCAT17(uStack_90,uStack_97);
          uStack_110 = CONCAT17(uStack_98,uStack_9f);
          uStack_100 = CONCAT17(uStack_88,uStack_8f);
          uStack_f8 = uStack_87;
          uStack_f1 = uStack_80;
          uStack_f0 = uStack_7f;
          if (uVar4 != 0) {
            _free(uVar2);
          }
          goto LAB_1015244e0;
        }
        cVar1 = (char)uStack_c8;
      }
      uStack_e8 = uVar4;
      uStack_e0 = uVar2;
      uStack_d8 = uVar3;
      func_0x000100f32b40(&uStack_138,&uStack_e8,cVar1);
    }
    pcVar7 = pcVar7 + 0x40;
  }
  param_1[2] = uStack_130;
  param_1[1] = uStack_138;
  param_1[3] = uStack_128;
  *param_1 = 2;
  return;
}

