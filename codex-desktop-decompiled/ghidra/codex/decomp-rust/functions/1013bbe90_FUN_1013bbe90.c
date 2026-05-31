
/* WARNING: Type propagation algorithm not settling */

void FUN_1013bbe90(ulong *param_1,char *param_2)

{
  char *pcVar1;
  byte *pbVar2;
  ulong uVar3;
  long *plVar4;
  byte bVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  byte **ppbVar10;
  ulong *puVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  char *pcVar16;
  long lVar17;
  byte **extraout_x10;
  byte **extraout_x10_00;
  byte **extraout_x10_01;
  byte **extraout_x10_02;
  byte **extraout_x10_03;
  byte **ppbVar18;
  byte **ppbVar19;
  byte **extraout_x10_04;
  byte **extraout_x10_05;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong uVar20;
  ulong extraout_x11_04;
  ulong extraout_x11_05;
  byte **ppbVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long unaff_x22;
  ulong uVar26;
  ulong uVar27;
  byte *pbVar28;
  long unaff_x24;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  ulong uVar32;
  ulong unaff_x26;
  ulong uVar33;
  byte *pbVar34;
  byte *pbVar35;
  ulong unaff_x28;
  undefined1 auVar36 [16];
  undefined1 uStack_2e1;
  long lStack_2a8;
  undefined8 uStack_290;
  undefined8 uStack_288;
  ulong uStack_280;
  byte *pbStack_278;
  undefined8 uStack_268;
  byte **ppbStack_260;
  byte *pbStack_258;
  undefined8 uStack_240;
  byte **ppbStack_238;
  ulong uStack_230;
  byte **ppbStack_228;
  byte *pbStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c0;
  byte *pbStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  byte *pbStack_158;
  byte bStack_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  byte *pbStack_c8;
  byte bStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
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
  ulong uStack_78;
  
  if (*param_2 != '\x14') {
    FUN_108855bf0(param_1,param_2,&lStack_100,&UNK_10b213648);
    return;
  }
  pcVar16 = *(char **)(param_2 + 0x10);
  ppbVar19 = *(byte ***)(param_2 + 0x18);
  ppbVar21 = (byte **)((long)ppbVar19 * 0x20);
  pcVar1 = pcVar16 + (long)ppbVar21;
  ppbVar18 = ppbVar19;
  if ((byte **)0x2aa9 < ppbVar19) {
    ppbVar18 = (byte **)0x2aaa;
  }
  if (ppbVar19 == (byte **)0x0) {
    ppbStack_238 = (byte **)0x0;
    uStack_230 = 8;
    ppbStack_228 = (byte **)0x0;
    uVar32 = 0;
  }
  else {
    lVar23 = (long)ppbVar18 * 0x60;
    uStack_230 = _malloc(lVar23);
    if (uStack_230 == 0) {
      uVar22 = func_0x0001087c9084(8,lVar23);
      func_0x000100cace3c(lVar23);
      uVar22 = __Unwind_Resume(uVar22);
      FUN_100e4d1c8(&uStack_160);
      func_0x000100cace3c(&ppbStack_238);
      uVar22 = __Unwind_Resume(uVar22);
      func_0x000100cace3c(&ppbStack_238);
      uVar22 = __Unwind_Resume(uVar22);
      if ((-0x7fffffffffffffff < unaff_x22) && (unaff_x22 != 0)) {
        _free(pbStack_278);
      }
      if ((-0x7fffffffffffffff < unaff_x24) && (unaff_x24 != 0)) {
        _free(uStack_268);
      }
      if ((-0x7fffffffffffffff < (long)pcVar16) && (pcVar16 != (char *)0x0)) {
        _free(ppbStack_260);
      }
      if ((unaff_x26 & 0x7fffffffffffffff) != 0) {
        _free(pbStack_258);
      }
      func_0x000100cace3c(&ppbStack_238);
      auVar36 = __Unwind_Resume(uVar22);
      plVar25 = auVar36._8_8_;
      puVar7 = auVar36._0_8_;
      if (*plVar25 != -0x7ffffffffffffffd) {
        uVar22 = FUN_108832ea0(plVar25,&uStack_2e1,&UNK_10b21cf00);
        *(undefined8 *)(puVar7 + 8) = uVar22;
        *puVar7 = 1;
        FUN_100de6690(plVar25);
        return;
      }
      lVar23 = plVar25[1];
      plVar4 = (long *)plVar25[2];
      switch(plVar25[3]) {
      case 7:
        if ((int)*plVar4 != 0x632f7366 || *(int *)((long)plVar4 + 3) != 0x79706f63)
        goto LAB_1013bd804;
        uVar15 = 0x31;
        break;
      case 8:
        if (*plVar4 == 0x7473696c2f707061) {
          uVar15 = 0x2a;
        }
        else {
          if (*plVar4 != 0x68637461772f7366) goto LAB_1013bd804;
          uVar15 = 0x32;
        }
        break;
      case 9:
        if (*plVar4 != 0x766f6d65722f7366 || (char)plVar4[1] != 'e') goto LAB_1013bd804;
        uVar15 = 0x30;
        break;
      case 10:
        if (*plVar4 == 0x696c616974696e69 && (short)plVar4[1] == 0x657a) {
          uVar8 = 0;
          puVar7[1] = 0;
          goto LAB_1013bf294;
        }
        if (*plVar4 == 0x696c2f736b6f6f68 && (short)plVar4[1] == 0x7473) {
          uVar15 = 0x1d;
        }
        else if (*plVar4 == 0x7461776e752f7366 && (short)plVar4[1] == 0x6863) {
          uVar15 = 0x33;
        }
        else if (*plVar4 == 0x6174732f6e727574 && (short)plVar4[1] == 0x7472) {
          uVar15 = 0x37;
        }
        else if (*plVar4 == 0x6574732f6e727574 && (short)plVar4[1] == 0x7265) {
          uVar15 = 0x38;
        }
        else {
          if (*plVar4 != 0x696c2f6c65646f6d || (short)plVar4[1] != 0x7473) goto LAB_1013bd804;
          uVar15 = 0x40;
        }
        break;
      case 0xb:
        if (*plVar4 == 0x662f646165726874 && *(long *)((long)plVar4 + 3) == 0x6b726f662f646165) {
          uVar15 = 3;
        }
        else if (*plVar4 == 0x6c2f646165726874 && *(long *)((long)plVar4 + 3) == 0x7473696c2f646165)
        {
          uVar15 = 0x16;
        }
        else if (*plVar4 == 0x722f646165726874 && *(long *)((long)plVar4 + 3) == 0x646165722f646165)
        {
          uVar15 = 0x18;
        }
        else if (*plVar4 == 0x6c2f736c6c696b73 && *(long *)((long)plVar4 + 3) == 0x7473696c2f736c6c)
        {
          uVar15 = 0x1c;
        }
        else if (*plVar4 == 0x6c2f6e6967756c70 && *(long *)((long)plVar4 + 3) == 0x7473696c2f6e6967)
        {
          uVar15 = 0x21;
        }
        else if (*plVar4 == 0x722f6e6967756c70 && *(long *)((long)plVar4 + 3) == 0x646165722f6e6967)
        {
          uVar15 = 0x23;
        }
        else if (*plVar4 == 0x46646165722f7366 && *(long *)((long)plVar4 + 3) == 0x656c694664616572)
        {
          uVar15 = 0x2b;
        }
        else {
          if (*plVar4 != 0x722f6769666e6f63 || *(long *)((long)plVar4 + 3) != 0x646165722f676966)
          goto LAB_1013bd804;
          uVar15 = 0x60;
        }
        break;
      case 0xc:
        if (*plVar4 == 0x732f646165726874 && (int)plVar4[1] == 0x74726174) {
          uVar15 = 1;
        }
        else if (*plVar4 == 0x722f79726f6d656d && (int)plVar4[1] == 0x74657365) {
          uVar15 = 0xf;
        }
        else if (*plVar4 == 0x65746972772f7366 && (int)plVar4[1] == 0x656c6946) {
          uVar15 = 0x2c;
        }
        else if (*plVar4 == 0x732f776569766572 && (int)plVar4[1] == 0x74726174) {
          uVar15 = 0x3f;
        }
        else if (*plVar4 == 0x2f646e616d6d6f63 && (int)plVar4[1] == 0x63657865) {
          uVar15 = 0x58;
        }
        else if (*plVar4 == 0x2f737365636f7270 && (int)plVar4[1] == 0x6c6c696b) {
          uVar15 = 0x5e;
        }
        else {
          if (*plVar4 != 0x2f746e756f636361 || (int)plVar4[1] != 0x64616572) goto LAB_1013bd804;
          uVar15 = 0x66;
        }
        break;
      case 0xd:
        if (*plVar4 == 0x722f646165726874 && *(long *)((long)plVar4 + 5) == 0x656d757365722f64) {
          uVar15 = 2;
        }
        else if (*plVar4 == 0x2f737365636f7270 && *(long *)((long)plVar4 + 5) == 0x6e776170732f7373)
        {
          uVar15 = 0x5c;
        }
        else {
          if (*plVar4 != 0x5368747541746567 || *(long *)((long)plVar4 + 5) != 0x7375746174536874)
          goto LAB_1013bd804;
          uVar15 = 0x69;
        }
        break;
      case 0xe:
        if (*plVar4 == 0x612f646165726874 && *(long *)((long)plVar4 + 6) == 0x657669686372612f) {
          uVar15 = 4;
        }
        else if (*plVar4 == 0x654d7465672f7366 && *(long *)((long)plVar4 + 6) == 0x617461646174654d)
        {
          uVar15 = 0x2e;
        }
        else if (*plVar4 == 0x692f6e6967756c70 && *(long *)((long)plVar4 + 6) == 0x6c6c6174736e692f)
        {
          uVar15 = 0x35;
        }
        else if (*plVar4 == 0x746e692f6e727574 && *(long *)((long)plVar4 + 6) == 0x747075727265746e)
        {
          uVar15 = 0x39;
        }
        else {
          if (*plVar4 != 0x2f746e756f636361 || *(long *)((long)plVar4 + 6) != 0x74756f676f6c2f74)
          goto LAB_1013bd804;
          uVar15 = 0x54;
        }
        break;
      case 0xf:
        if (*plVar4 == 0x6e2f646165726874 && *(long *)((long)plVar4 + 7) == 0x7465732f656d616e) {
          uVar15 = 8;
        }
        else if (*plVar4 == 0x672f646165726874 && *(long *)((long)plVar4 + 7) == 0x7465732f6c616f67)
        {
          uVar15 = 9;
        }
        else if (*plVar4 == 0x672f646165726874 && *(long *)((long)plVar4 + 7) == 0x7465672f6c616f67)
        {
          uVar15 = 10;
        }
        else if (*plVar4 == 0x722f646165726874 && *(long *)((long)plVar4 + 7) == 0x6b6361626c6c6f72)
        {
          uVar15 = 0x15;
        }
        else if (*plVar4 == 0x6c7074656b72616d && *(long *)((long)plVar4 + 7) == 0x6464612f6563616c)
        {
          uVar15 = 0x1e;
        }
        else if (*plVar4 == 0x6d6e6f7269766e65 && *(long *)((long)plVar4 + 7) == 0x6464612f746e656d)
        {
          uVar15 = 0x4a;
        }
        else if (*plVar4 == 0x6b63616264656566 && *(long *)((long)plVar4 + 7) == 0x64616f6c70752f6b)
        {
          uVar15 = 0x57;
        }
        else if (*plVar4 == 0x5466666944746967 && *(long *)((long)plVar4 + 7) == 0x65746f6d65526f54)
        {
          uVar15 = 0x68;
        }
        else {
          if (*plVar4 != 0x6c6946797a7a7566 || *(long *)((long)plVar4 + 7) != 0x686372616553656c)
          goto LAB_1013bd804;
          uVar15 = 0x6a;
        }
        break;
      case 0x10:
        if (*plVar4 == 0x752f646165726874 && plVar4[1] == 0x657669686372616e) {
          uVar15 = 0x10;
        }
        else if (*plVar4 == 0x692f6e6967756c70 && plVar4[1] == 0x64656c6c6174736e) {
          uVar15 = 0x22;
        }
        else if (*plVar4 == 0x44646165722f7366 && plVar4[1] == 0x79726f7463657269) {
          uVar15 = 0x2f;
        }
        else {
          if (*plVar4 != 0x752f6e6967756c70 || plVar4[1] != 0x6c6c6174736e696e) goto LAB_1013bd804;
          uVar15 = 0x36;
        }
        break;
      case 0x11:
        if ((*plVar4 == 0x672f646165726874 && plVar4[1] == 0x61656c632f6c616f) &&
            (char)plVar4[2] == 'r') {
          uVar15 = 0xb;
        }
        else if ((*plVar4 == 0x742f646165726874 && plVar4[1] == 0x73696c2f736e7275) &&
                 (char)plVar4[2] == 't') {
          uVar15 = 0x19;
        }
        else if ((*plVar4 == 0x732f6e6967756c70 && plVar4[1] == 0x6165722f6c6c696b) &&
                 (char)plVar4[2] == 'd') {
          uVar15 = 0x24;
        }
        else if ((*plVar4 == 0x732f6e6967756c70 && plVar4[1] == 0x7661732f65726168) &&
                 (char)plVar4[2] == 'e') {
          uVar15 = 0x25;
        }
        else if ((*plVar4 == 0x732f6e6967756c70 && plVar4[1] == 0x73696c2f65726168) &&
                 (char)plVar4[2] == 't') {
          uVar15 = 0x27;
        }
        else if ((*plVar4 == 0x2f737365636f7270 && plVar4[1] == 0x7450657a69736572) &&
                 (char)plVar4[2] == 'y') {
          uVar15 = 0x5f;
        }
        else {
          if ((*plVar4 != 0x622f6769666e6f63 || plVar4[1] != 0x7469725768637461) ||
              (char)plVar4[2] != 'e') goto LAB_1013bd804;
          uVar15 = 100;
        }
        break;
      case 0x12:
        if ((*plVar4 == 0x752f646165726874 && plVar4[1] == 0x697263736275736e) &&
            (short)plVar4[2] == 0x6562) {
          uVar15 = 5;
        }
        else if ((*plVar4 == 0x6c2f646165726874 && plVar4[1] == 0x696c2f646564616f) &&
                 (short)plVar4[2] == 0x7473) {
          uVar15 = 0x17;
        }
        else if ((*plVar4 == 0x6c7074656b72616d && plVar4[1] == 0x6f6d65722f656361) &&
                 (short)plVar4[2] == 0x6576) {
          uVar15 = 0x1f;
        }
        else if ((*plVar4 == 0x74616572632f7366 && plVar4[1] == 0x6f74636572694465) &&
                 (short)plVar4[2] == 0x7972) {
          uVar15 = 0x2d;
        }
        else if ((*plVar4 == 0x2f646e616d6d6f63 && plVar4[1] == 0x6972772f63657865) &&
                 (short)plVar4[2] == 0x6574) {
          uVar15 = 0x59;
        }
        else if ((*plVar4 == 0x2f737365636f7270 && plVar4[1] == 0x6474536574697277) &&
                 (short)plVar4[2] == 0x6e69) {
          uVar15 = 0x5d;
        }
        else {
          if ((*plVar4 != 0x762f6769666e6f63 || plVar4[1] != 0x6972772f65756c61) ||
              (short)plVar4[2] != 0x6574) goto LAB_1013bd804;
          uVar15 = 99;
        }
        break;
      case 0x13:
        if ((*plVar4 == 0x732f646165726874 && plVar4[1] == 0x6d6d6f436c6c6568) &&
            *(long *)((long)plVar4 + 0xb) == 0x646e616d6d6f436c) {
          uVar15 = 0x12;
        }
        else if ((*plVar4 == 0x692f646165726874 && plVar4[1] == 0x74695f7463656a6e) &&
                 *(long *)((long)plVar4 + 0xb) == 0x736d6574695f7463) {
          uVar15 = 0x1b;
        }
        else if ((*plVar4 == 0x6c7074656b72616d && plVar4[1] == 0x726770752f656361) &&
                 *(long *)((long)plVar4 + 0xb) == 0x656461726770752f) {
          uVar15 = 0x20;
        }
        else if ((*plVar4 == 0x732f6e6967756c70 && plVar4[1] == 0x6c65642f65726168) &&
                 *(long *)((long)plVar4 + 0xb) == 0x6574656c65642f65) {
          uVar15 = 0x29;
        }
        else if ((*plVar4 == 0x632f736c6c696b73 && plVar4[1] == 0x72772f6769666e6f) &&
                 *(long *)((long)plVar4 + 0xb) == 0x65746972772f6769) {
          uVar15 = 0x34;
        }
        else if ((*plVar4 == 0x657672655370636d && plVar4[1] == 0x632f6c6f6f742f72) &&
                 *(long *)((long)plVar4 + 0xb) == 0x6c6c61632f6c6f6f) {
          uVar15 = 0x4f;
        }
        else if ((*plVar4 == 0x2f746e756f636361 && plVar4[1] == 0x74732f6e69676f6c) &&
                 *(long *)((long)plVar4 + 0xb) == 0x74726174732f6e69) {
          uVar15 = 0x52;
        }
        else {
          if ((*plVar4 != 0x2f646e616d6d6f63 || plVar4[1] != 0x7365722f63657865) ||
              *(long *)((long)plVar4 + 0xb) != 0x657a697365722f63) goto LAB_1013bd804;
          uVar15 = 0x5b;
        }
        break;
      case 0x14:
        if ((*plVar4 == 0x632f646165726874 && plVar4[1] == 0x732f746361706d6f) &&
            (int)plVar4[2] == 0x74726174) {
          uVar15 = 0x11;
        }
        else if ((*plVar4 == 0x722f646165726874 && plVar4[1] == 0x2f656d69746c6165) &&
                 (int)plVar4[2] == 0x706f7473) {
          uVar15 = 0x3d;
        }
        else if ((*plVar4 == 0x6f4365746f6d6572 && plVar4[1] == 0x6e652f6c6f72746e) &&
                 (int)plVar4[2] == 0x656c6261) {
          uVar15 = 0x45;
        }
        else if ((*plVar4 == 0x657672655370636d && plVar4[1] == 0x2f73757461745372) &&
                 (int)plVar4[2] == 0x7473696c) {
          uVar15 = 0x4d;
        }
        else {
          if ((*plVar4 != 0x2f746e756f636361 || plVar4[1] != 0x61632f6e69676f6c) ||
              (int)plVar4[2] != 0x6c65636e) goto LAB_1013bd804;
          uVar15 = 0x53;
        }
        break;
      case 0x15:
        if ((*plVar4 == 0x6d2f646165726874 && plVar4[1] == 0x646f4d79726f6d65) &&
            *(long *)((long)plVar4 + 0xd) == 0x7465732f65646f4d) {
          uVar15 = 0xe;
        }
        else if ((*plVar4 == 0x732f6e6967756c70 && plVar4[1] == 0x6568632f65726168) &&
                 *(long *)((long)plVar4 + 0xd) == 0x74756f6b63656863) {
          uVar15 = 0x28;
        }
        else if ((*plVar4 == 0x722f646165726874 && plVar4[1] == 0x2f656d69746c6165) &&
                 *(long *)((long)plVar4 + 0xd) == 0x74726174732f656d) {
          uVar15 = 0x3a;
        }
        else if ((*plVar4 == 0x6f4365746f6d6572 && plVar4[1] == 0x69642f6c6f72746e) &&
                 *(long *)((long)plVar4 + 0xd) == 0x656c62617369642f) {
          uVar15 = 0x46;
        }
        else {
          if ((*plVar4 != 0x657672655370636d || plVar4[1] != 0x2f687475616f2f72) ||
              *(long *)((long)plVar4 + 0xd) != 0x6e69676f6c2f6874) goto LAB_1013bd804;
          uVar15 = 0x4b;
        }
        break;
      case 0x16:
        if ((*plVar4 == 0x6d2f646165726874 && plVar4[1] == 0x2f61746164617465) &&
            *(long *)((long)plVar4 + 0xe) == 0x6574616470752f61) {
          uVar15 = 0xc;
        }
        else if ((*plVar4 == 0x732f646165726874 && plVar4[1] == 0x2f73676e69747465) &&
                 *(long *)((long)plVar4 + 0xe) == 0x6574616470752f73) {
          uVar15 = 0xd;
        }
        else if ((*plVar4 == 0x697373696d726570 && plVar4[1] == 0x6c69666f72506e6f) &&
                 *(long *)((long)plVar4 + 0xe) == 0x7473696c2f656c69) {
          uVar15 = 0x43;
        }
        else if ((*plVar4 == 0x726f62616c6c6f63 && plVar4[1] == 0x646f4d6e6f697461) &&
                 *(long *)((long)plVar4 + 0xe) == 0x7473696c2f65646f) {
          uVar15 = 0x48;
        }
        else if ((*plVar4 == 0x2f646e616d6d6f63 && plVar4[1] == 0x7265742f63657865) &&
                 *(long *)((long)plVar4 + 0xe) == 0x6574616e696d7265) {
          uVar15 = 0x5a;
        }
        else {
          if ((*plVar4 != 0x65766e6f43746567 || plVar4[1] != 0x536e6f6974617372) ||
              *(long *)((long)plVar4 + 0xe) != 0x7972616d6d75536e) goto LAB_1013bd804;
          uVar15 = 0x67;
        }
        break;
      case 0x17:
        if ((*plVar4 == 0x742f646165726874 && plVar4[1] == 0x6574692f736e7275) &&
            *(long *)((long)plVar4 + 0xf) == 0x7473696c2f736d65) {
          uVar15 = 0x1a;
        }
        else if ((*plVar4 == 0x7078652f6b636f6d && plVar4[1] == 0x61746e656d697265) &&
                 *(long *)((long)plVar4 + 0xf) == 0x646f6874654d6c61) {
          uVar15 = 0x49;
        }
        else if ((*plVar4 == 0x6d2f6769666e6f63 && plVar4[1] == 0x7265767265537063) &&
                 *(long *)((long)plVar4 + 0xf) == 0x64616f6c65722f72) {
          uVar15 = 0x4c;
        }
        else if ((*plVar4 == 0x657672655370636d && plVar4[1] == 0x72756f7365722f72) &&
                 *(long *)((long)plVar4 + 0xf) == 0x646165722f656372) {
          uVar15 = 0x4e;
        }
        else if ((*plVar4 == 0x2f746e756f636361 && plVar4[1] == 0x696d694c65746172) &&
                 *(long *)((long)plVar4 + 0xf) == 0x646165722f737469) {
          uVar15 = 0x55;
        }
        else {
          if ((*plVar4 != 0x65526769666e6f63 || plVar4[1] != 0x6e656d6572697571) ||
              *(long *)((long)plVar4 + 0xf) != 0x646165722f73746e) goto LAB_1013bd804;
          uVar15 = 0x65;
        }
        break;
      case 0x18:
        if ((*plVar4 == 0x656d697265707865 && plVar4[1] == 0x746165466c61746e) &&
            plVar4[2] == 0x7473696c2f657275) {
          uVar15 = 0x42;
        }
        else {
          if ((*plVar4 != 0x5373776f646e6977 || plVar4[1] != 0x722f786f62646e61) ||
              plVar4[2] != 0x7373656e69646165) goto LAB_1013bd804;
          uVar15 = 0x51;
        }
        break;
      case 0x19:
        if (((*plVar4 == 0x6f4365746f6d6572 && plVar4[1] == 0x74732f6c6f72746e) &&
            plVar4[2] == 0x6165722f73757461) && (char)plVar4[3] == 'd') {
          uVar15 = 0x47;
        }
        else {
          if (((*plVar4 != 0x5373776f646e6977 || plVar4[1] != 0x732f786f62646e61) ||
              plVar4[2] != 0x7261745370757465) || (char)plVar4[3] != 't') goto LAB_1013bd804;
          uVar15 = 0x50;
        }
        break;
      case 0x1a:
        if (((*plVar4 == 0x732f6e6967756c70 && plVar4[1] == 0x6470752f65726168) &&
            plVar4[2] == 0x6567726154657461) && (short)plVar4[3] == 0x7374) {
          uVar15 = 0x26;
        }
        else if (((*plVar4 == 0x722f646165726874 && plVar4[1] == 0x2f656d69746c6165) &&
                 plVar4[2] == 0x6554646e65707061) && (short)plVar4[3] == 0x7478) {
          uVar15 = 0x3c;
        }
        else if (((*plVar4 == 0x722f646165726874 && plVar4[1] == 0x2f656d69746c6165) &&
                 plVar4[2] == 0x63696f567473696c) && (short)plVar4[3] == 0x7365) {
          uVar15 = 0x3e;
        }
        else if (((*plVar4 == 0x6c616e7265747865 && plVar4[1] == 0x6e6f43746e656741) &&
                 plVar4[2] == 0x657465642f676966) && (short)plVar4[3] == 0x7463) {
          uVar15 = 0x61;
        }
        else {
          if (((*plVar4 != 0x6c616e7265747865 || plVar4[1] != 0x6e6f43746e656741) ||
              plVar4[2] != 0x6f706d692f676966) || (short)plVar4[3] != 0x7472) goto LAB_1013bd804;
          uVar15 = 0x62;
        }
        break;
      case 0x1b:
        if (((*plVar4 == 0x722f646165726874 && plVar4[1] == 0x2f656d69746c6165) &&
            plVar4[2] == 0x7541646e65707061) && *(long *)((long)plVar4 + 0x13) == 0x6f69647541646e65
           ) {
          uVar15 = 0x3b;
        }
        else {
          if (((*plVar4 != 0x6c6946797a7a7566 || plVar4[1] != 0x2f68637261655365) ||
              plVar4[2] != 0x536e6f6973736573) ||
              *(long *)((long)plVar4 + 0x13) != 0x706f74536e6f6973) goto LAB_1013bd804;
          uVar15 = 0x6d;
        }
        break;
      case 0x1c:
        if (((*plVar4 == 0x692f646165726874 && plVar4[1] == 0x746e656d6572636e) &&
            plVar4[2] == 0x61746963696c655f) && (int)plVar4[3] == 0x6e6f6974) {
          uVar15 = 6;
        }
        else if (((*plVar4 == 0x642f646165726874 && plVar4[1] == 0x746e656d65726365) &&
                 plVar4[2] == 0x61746963696c655f) && (int)plVar4[3] == 0x6e6f6974) {
          uVar15 = 7;
        }
        else {
          if (((*plVar4 != 0x6c6946797a7a7566 || plVar4[1] != 0x2f68637261655365) ||
              plVar4[2] != 0x536e6f6973736573) || (int)plVar4[3] != 0x74726174) goto LAB_1013bd804;
          uVar15 = 0x6b;
        }
        break;
      case 0x1d:
        if (((*plVar4 != 0x6c6946797a7a7566 || plVar4[1] != 0x2f68637261655365) ||
            plVar4[2] != 0x556e6f6973736573) || *(long *)((long)plVar4 + 0x15) != 0x6574616470556e6f
           ) goto LAB_1013bd804;
        uVar15 = 0x6c;
        break;
      default:
LAB_1013bd804:
        uVar22 = FUN_1087e4494(plVar4,plVar25[3],&UNK_10b22fe58,0x6e);
        *(undefined8 *)(puVar7 + 8) = uVar22;
        uVar8 = 1;
        goto LAB_1013bf294;
      case 0x1f:
        if (((*plVar4 != 0x6f72506c65646f6d || plVar4[1] != 0x61632f7265646976) ||
            plVar4[2] != 0x6974696c69626170) || *(long *)((long)plVar4 + 0x17) != 0x646165722f736569
           ) goto LAB_1013bd804;
        uVar15 = 0x41;
        break;
      case 0x20:
        if (((*plVar4 == 0x622f646165726874 && plVar4[1] == 0x6e756f72676b6361) &&
            plVar4[2] == 0x616e696d72655464) && plVar4[3] == 0x6e61656c632f736c) {
          uVar15 = 0x14;
        }
        else {
          if (((*plVar4 != 0x2f746e756f636361 || plVar4[1] != 0x43646441646e6573) ||
              plVar4[2] != 0x754e737469646572) || plVar4[3] != 0x6c69616d45656764)
          goto LAB_1013bd804;
          uVar15 = 0x56;
        }
        break;
      case 0x22:
        if ((((*plVar4 == 0x612f646165726874 && plVar4[1] == 0x754765766f727070) &&
             plVar4[2] == 0x65446e6169647261) && plVar4[3] == 0x697463416465696e) &&
            (short)plVar4[4] == 0x6e6f) {
          uVar15 = 0x13;
        }
        else {
          if ((((*plVar4 != 0x656d697265707865 || plVar4[1] != 0x746165466c61746e) ||
               plVar4[2] != 0x62616e652f657275) || plVar4[3] != 0x732f746e656d656c) ||
              (short)plVar4[4] != 0x7465) goto LAB_1013bd804;
          uVar15 = 0x44;
        }
      }
      uVar8 = 0;
      puVar7[1] = uVar15;
LAB_1013bf294:
      *puVar7 = uVar8;
      if (lVar23 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(plVar4);
      return;
    }
    uVar30 = 0;
    ppbStack_228 = (byte **)0x0;
    ppbVar10 = ppbVar21 + -4;
    pcVar12 = pcVar16;
    ppbVar19 = extraout_x10;
    uVar20 = extraout_x11;
    ppbStack_238 = ppbVar18;
    do {
      pcVar16 = pcVar12 + 0x20;
      uVar30 = uVar30 + 1;
      uVar32 = uVar30;
      if (*pcVar12 == '\x14') {
        pbVar2 = *(byte **)(pcVar12 + 0x10);
        lVar23 = *(long *)(pcVar12 + 0x18);
        if (lVar23 == 0) {
          lVar24 = 0;
          uVar22 = 0;
          uVar33 = 0;
          pbVar28 = (byte *)0x1;
          uVar14 = 0x14;
          pbVar34 = pbVar2;
          pbVar35 = pbVar2;
          goto LAB_1013bc738;
        }
        func_0x0001004e0914(&pbStack_c8,pbVar2);
        uVar33 = CONCAT71(uStack_bf,bStack_c0);
        pbVar28 = (byte *)CONCAT71(uStack_b7,uStack_b8);
        uVar22 = CONCAT71(uStack_af,uStack_b0);
        if (pbStack_c8 != (byte *)0x2) {
          uStack_130 = uStack_a0;
          uStack_12f = uStack_9f;
          uStack_138 = uStack_a8;
          uStack_137 = uStack_a7;
          uStack_120 = uStack_90;
          uStack_11f = uStack_8f;
          uStack_128 = uStack_98;
          uStack_127 = uStack_97;
          uStack_110 = uStack_80;
          uStack_10f = uStack_7f;
          uStack_118 = uStack_88;
          uStack_117 = uStack_87;
          uStack_108 = uStack_78;
          pbStack_158 = pbStack_c8;
          bStack_150 = bStack_c0;
          uStack_14f = uStack_bf;
          uStack_148 = uStack_b8;
          uStack_147 = uStack_b7;
          uStack_140 = uStack_b0;
          uStack_13f = uStack_af;
          goto LAB_1013bcbe8;
        }
        pbVar34 = pbVar2 + 0x20;
        uVar14 = 0x8000000000000000;
        ppbVar19 = extraout_x10_00;
        uVar20 = extraout_x11_00;
        if (uVar33 == 0x8000000000000000) {
          uVar22 = 0;
          uVar33 = 0;
          lVar24 = 1;
          pbVar28 = (byte *)0x1;
          pbVar35 = pbVar2 + lVar23 * 0x20;
          if (pbVar34 == pbVar35) goto LAB_1013bc738;
LAB_1013bc64c:
          bVar5 = *pbVar34;
          uVar14 = (ulong)bVar5;
          if (bVar5 == 0x10) {
LAB_1013bc7a0:
            uVar26 = 0x8000000000000000;
LAB_1013bc7a4:
            if (pbVar2 + 0x40 == pbVar35) {
              lVar24 = 2;
              goto LAB_1013bc7e0;
            }
            bVar5 = pbVar2[0x40];
            uVar14 = (ulong)bVar5;
            if (bVar5 != 0x10) {
              if (bVar5 == 0x11) {
                func_0x0001004e0914(&pbStack_c8,*(undefined8 *)(pbVar2 + 0x48));
              }
              else {
                if (bVar5 == 0x12) goto LAB_1013bc844;
                func_0x0001004e0914(&pbStack_c8,pbVar2 + 0x40);
              }
              if (pbStack_c8 != (byte *)0x2) {
                uStack_f8 = CONCAT71(uStack_9f,uStack_a0);
                lStack_100 = CONCAT71(uStack_a7,uStack_a8);
                uStack_e8 = CONCAT71(uStack_8f,uStack_90);
                uStack_f0 = CONCAT71(uStack_97,uStack_98);
                uStack_d8 = CONCAT71(uStack_7f,uStack_80);
                uStack_e0 = CONCAT71(uStack_87,uStack_88);
                uStack_d0 = uStack_78;
              }
              uVar29 = CONCAT71(uStack_bf,bStack_c0);
              ppbStack_260 = (byte **)CONCAT71(uStack_b7,uStack_b8);
              unaff_x28 = CONCAT71(uStack_af,uStack_b0);
              if (pbStack_c8 == (byte *)0x2) {
                uVar14 = 0x8000000000000001;
                uVar20 = unaff_x28;
                if (uVar29 == 0x8000000000000001) goto LAB_1013bc844;
                goto LAB_1013bc848;
              }
              uStack_130 = (undefined1)uStack_f8;
              uStack_12f = (undefined7)((ulong)uStack_f8 >> 8);
              uStack_138 = (undefined1)lStack_100;
              uStack_137 = (undefined7)((ulong)lStack_100 >> 8);
              uStack_120 = (undefined1)uStack_e8;
              uStack_11f = (undefined7)((ulong)uStack_e8 >> 8);
              uStack_128 = (undefined1)uStack_f0;
              uStack_127 = (undefined7)((ulong)uStack_f0 >> 8);
              uStack_110 = (undefined1)uStack_d8;
              uStack_10f = (undefined7)((ulong)uStack_d8 >> 8);
              uStack_118 = (undefined1)uStack_e0;
              uStack_117 = (undefined7)((ulong)uStack_e0 >> 8);
              uStack_108 = uStack_d0;
              bStack_150 = bStack_c0;
              uStack_14f = uStack_bf;
              uStack_148 = uStack_b8;
              uStack_147 = uStack_b7;
              uStack_140 = uStack_b0;
              uStack_13f = uStack_af;
              uStack_160 = 0x8000000000000000;
              pbStack_158 = pbStack_c8;
LAB_1013bce28:
              pbStack_278 = pbVar28;
              if ((uVar26 & 0x7fffffffffffffff) != 0) {
                _free(uStack_240);
              }
              goto joined_r0x0001013bca48;
            }
LAB_1013bc844:
            uVar29 = 0x8000000000000000;
            uVar20 = unaff_x28;
LAB_1013bc848:
            ppbVar18 = ppbStack_260;
            if (pbVar2 + 0x60 == pbVar35) {
              lVar24 = 3;
              unaff_x28 = 0x8000000000000000;
              pbVar31 = pbVar35;
            }
            else {
              lVar24 = 4;
              bVar5 = pbVar2[0x60];
              uVar14 = (ulong)bVar5;
              pbVar31 = pbVar2 + 0x80;
              if (bVar5 != 0x10) {
                if (bVar5 == 0x11) {
                  func_0x0001004e0914(&pbStack_c8,*(undefined8 *)(pbVar2 + 0x68));
                }
                else {
                  if (bVar5 == 0x12) goto LAB_1013bc8f8;
                  func_0x0001004e0914(&pbStack_c8);
                }
                if (pbStack_c8 != (byte *)0x2) {
                  uStack_f8 = CONCAT71(uStack_9f,uStack_a0);
                  lStack_100 = CONCAT71(uStack_a7,uStack_a8);
                  uStack_e8 = CONCAT71(uStack_8f,uStack_90);
                  uStack_f0 = CONCAT71(uStack_97,uStack_98);
                  uStack_d8 = CONCAT71(uStack_7f,uStack_80);
                  uStack_e0 = CONCAT71(uStack_87,uStack_88);
                  uStack_d0 = uStack_78;
                }
                unaff_x28 = CONCAT71(uStack_bf,bStack_c0);
                pbVar34 = (byte *)CONCAT71(uStack_b7,uStack_b8);
                uVar14 = CONCAT71(uStack_af,uStack_b0);
                if (pbStack_c8 != (byte *)0x2) {
                  uStack_130 = (undefined1)uStack_f8;
                  uStack_12f = (undefined7)((ulong)uStack_f8 >> 8);
                  uStack_138 = (undefined1)lStack_100;
                  uStack_137 = (undefined7)((ulong)lStack_100 >> 8);
                  uStack_120 = (undefined1)uStack_e8;
                  uStack_11f = (undefined7)((ulong)uStack_e8 >> 8);
                  uStack_128 = (undefined1)uStack_f0;
                  uStack_127 = (undefined7)((ulong)uStack_f0 >> 8);
                  uStack_110 = (undefined1)uStack_d8;
                  uStack_10f = (undefined7)((ulong)uStack_d8 >> 8);
                  uStack_118 = (undefined1)uStack_e0;
                  uStack_117 = (undefined7)((ulong)uStack_e0 >> 8);
                  uStack_108 = uStack_d0;
                  bStack_150 = bStack_c0;
                  uStack_14f = uStack_bf;
                  uStack_148 = uStack_b8;
                  uStack_147 = uStack_b7;
                  uStack_140 = uStack_b0;
                  uStack_13f = uStack_af;
                  uStack_160 = 0x8000000000000000;
                  pbStack_158 = pbStack_c8;
                  if ((uVar29 & 0x7fffffffffffffff) != 0) {
                    _free(ppbStack_260);
                  }
                  goto LAB_1013bce28;
                }
                if (unaff_x28 != 0x8000000000000001) goto LAB_1013bc900;
              }
LAB_1013bc8f8:
              unaff_x28 = 0x8000000000000000;
            }
            goto LAB_1013bc900;
          }
          if (bVar5 == 0x11) {
            func_0x0001004e0914(&pbStack_c8,*(undefined8 *)(pbVar2 + 0x28));
            ppbVar19 = extraout_x10_03;
            uVar20 = extraout_x11_03;
          }
          else {
            if (bVar5 == 0x12) goto LAB_1013bc7a0;
            func_0x0001004e0914(&pbStack_c8,pbVar34);
            ppbVar19 = extraout_x10_01;
            uVar20 = extraout_x11_01;
          }
          if (pbStack_c8 != (byte *)0x2) {
            ppbVar19 = &pbStack_c8;
            uStack_f8 = CONCAT71(uStack_9f,uStack_a0);
            lStack_100 = CONCAT71(uStack_a7,uStack_a8);
            uStack_e8 = CONCAT71(uStack_8f,uStack_90);
            uStack_f0 = CONCAT71(uStack_97,uStack_98);
            uStack_d8 = CONCAT71(uStack_7f,uStack_80);
            uStack_e0 = CONCAT71(uStack_87,uStack_88);
            uStack_d0 = uStack_78;
          }
          uVar26 = CONCAT71(uStack_bf,bStack_c0);
          uStack_240 = CONCAT71(uStack_b7,uStack_b8);
          pbStack_258 = (byte *)CONCAT71(uStack_af,uStack_b0);
          if (pbStack_c8 == (byte *)0x2) {
            uVar14 = 0x8000000000000001;
            if (uVar26 == 0x8000000000000001) goto LAB_1013bc7a0;
            goto LAB_1013bc7a4;
          }
          uStack_130 = (undefined1)uStack_f8;
          uStack_12f = (undefined7)((ulong)uStack_f8 >> 8);
          uStack_138 = (undefined1)lStack_100;
          uStack_137 = (undefined7)((ulong)lStack_100 >> 8);
          uStack_120 = (undefined1)uStack_e8;
          uStack_11f = (undefined7)((ulong)uStack_e8 >> 8);
          uStack_128 = (undefined1)uStack_f0;
          uStack_127 = (undefined7)((ulong)uStack_f0 >> 8);
          uStack_110 = (undefined1)uStack_d8;
          uStack_10f = (undefined7)((ulong)uStack_d8 >> 8);
          uStack_118 = (undefined1)uStack_e0;
          uStack_117 = (undefined7)((ulong)uStack_e0 >> 8);
          pbStack_278 = pbVar28;
          pbStack_158 = pbStack_c8;
          bStack_150 = bStack_c0;
          uStack_14f = uStack_bf;
          uStack_148 = uStack_b8;
          uStack_147 = uStack_b7;
          uStack_140 = uStack_b0;
          uStack_13f = uStack_af;
          uStack_108 = uStack_d0;
        }
        else {
          lVar24 = 1;
          pbVar35 = pbVar2 + lVar23 * 0x20;
          if (pbVar34 != pbVar35) goto LAB_1013bc64c;
LAB_1013bc738:
          uVar26 = 0x8000000000000000;
LAB_1013bc7e0:
          uVar29 = 0x8000000000000000;
          unaff_x28 = 0x8000000000000000;
          ppbVar18 = ppbVar19;
          pbVar31 = pbVar35;
LAB_1013bc900:
          bStack_150 = (byte)uVar22;
          uStack_14f = (undefined7)((ulong)uVar22 >> 8);
          uStack_148 = (undefined1)uVar26;
          uStack_147 = (undefined7)(uVar26 >> 8);
          uStack_140 = (undefined1)uStack_240;
          uStack_13f = (undefined7)((ulong)uStack_240 >> 8);
          uStack_138 = SUB81(pbStack_258,0);
          uStack_137 = (undefined7)((ulong)pbStack_258 >> 8);
          uStack_130 = (undefined1)uVar29;
          uStack_12f = (undefined7)(uVar29 >> 8);
          uStack_128 = SUB81(ppbVar18,0);
          uStack_127 = (undefined7)((ulong)ppbVar18 >> 8);
          uStack_120 = (undefined1)uVar20;
          uStack_11f = (undefined7)(uVar20 >> 8);
          uStack_118 = (undefined1)unaff_x28;
          uStack_117 = (undefined7)(unaff_x28 >> 8);
          uStack_110 = SUB81(pbVar34,0);
          uStack_10f = (undefined7)((ulong)pbVar34 >> 8);
          ppbVar19 = ppbVar18;
          uStack_160 = uVar33;
          pbStack_158 = pbVar28;
          uStack_108 = uVar14;
          if (((long)pbVar35 - (long)pbVar31 == 0) ||
             (lStack_100 = lVar24,
             FUN_1087e427c(&pbStack_c8,lVar24 + ((ulong)((long)pbVar35 - (long)pbVar31) >> 5),
                           &lStack_100,&UNK_10b23a1b0), ppbVar19 = extraout_x10_05,
             uVar20 = extraout_x11_05, pbStack_c8 == (byte *)0x2)) goto LAB_1013bc92c;
          uStack_130 = uStack_a0;
          uStack_12f = uStack_9f;
          uStack_138 = uStack_a8;
          uStack_137 = uStack_a7;
          uStack_120 = uStack_90;
          uStack_11f = uStack_8f;
          uStack_128 = uStack_98;
          uStack_127 = uStack_97;
          uStack_110 = uStack_80;
          uStack_10f = uStack_7f;
          uStack_118 = uStack_88;
          uStack_117 = uStack_87;
          uStack_108 = uStack_78;
          bStack_150 = bStack_c0;
          uStack_14f = uStack_bf;
          pbStack_158 = pbStack_c8;
          uStack_140 = uStack_b0;
          uStack_13f = uStack_af;
          uStack_148 = uStack_b8;
          uStack_147 = uStack_b7;
          uStack_160 = 0x8000000000000000;
          if (uVar33 != 0) {
            _free(pbVar28);
          }
          if ((uVar26 & 0x7fffffffffffffff) != 0) {
            _free(uStack_240);
          }
          if ((uVar29 & 0x7fffffffffffffff) != 0) {
            _free(ppbVar18);
          }
          uVar33 = unaff_x28 & 0x7fffffffffffffff;
          pbStack_278 = pbVar34;
        }
joined_r0x0001013bca48:
        if (uVar33 != 0) {
LAB_1013bcbe4:
          _free(pbStack_278);
        }
LAB_1013bcbe8:
        uStack_1f8 = CONCAT71(uStack_12f,uStack_130);
        uStack_200 = CONCAT71(uStack_137,uStack_138);
        uStack_1e8 = CONCAT71(uStack_11f,uStack_120);
        uStack_1f0 = CONCAT71(uStack_127,uStack_128);
        uStack_1d8 = CONCAT71(uStack_10f,uStack_110);
        uStack_1e0 = CONCAT71(uStack_117,uStack_118);
        uStack_218 = CONCAT71(uStack_14f,bStack_150);
        uStack_208 = CONCAT71(uStack_13f,uStack_140);
        uStack_210 = CONCAT71(uStack_147,uStack_148);
LAB_1013bcc18:
        uVar30 = uStack_230;
        param_1[5] = uStack_1f8;
        param_1[4] = uStack_200;
        param_1[7] = uStack_1e8;
        param_1[6] = uStack_1f0;
        param_1[9] = uStack_1d8;
        param_1[8] = uStack_1e0;
        param_1[10] = uStack_108;
        param_1[1] = uStack_218;
        *param_1 = (ulong)pbStack_158;
        param_1[3] = uStack_208;
        param_1[2] = uStack_210;
        pbStack_220 = pbStack_158;
        uStack_1d0 = uStack_108;
        if (ppbStack_228 == (byte **)0x0) goto LAB_1013bcce4;
        plVar25 = (long *)(uStack_230 + 0x30);
        ppbVar18 = ppbStack_228;
        goto LAB_1013bcc74;
      }
      if (*pcVar12 != '\x15') {
        FUN_108855bf0(&pbStack_c8,pcVar12,&lStack_100,&UNK_10b2142e8);
        uStack_130 = uStack_a0;
        uStack_12f = uStack_9f;
        uStack_138 = uStack_a8;
        uStack_137 = uStack_a7;
        uStack_120 = uStack_90;
        uStack_11f = uStack_8f;
        uStack_128 = uStack_98;
        uStack_127 = uStack_97;
        uStack_110 = uStack_80;
        uStack_10f = uStack_7f;
        uStack_118 = uStack_88;
        uStack_117 = uStack_87;
        uStack_108 = uStack_78;
        pbStack_158 = pbStack_c8;
        bStack_150 = bStack_c0;
        uStack_14f = uStack_bf;
        uStack_140 = uStack_b0;
        uStack_13f = uStack_af;
        uStack_148 = uStack_b8;
        uStack_147 = uStack_b7;
        goto LAB_1013bcbe8;
      }
      uVar14 = *(ulong *)(pcVar12 + 0x10);
      lVar23 = *(long *)(pcVar12 + 0x18) * 0x40;
      uVar20 = uVar14 + lVar23;
      if (*(long *)(pcVar12 + 0x18) == 0) {
        lStack_2a8 = 0;
        uVar33 = 0x8000000000000000;
        uVar26 = 0x8000000000000001;
        uVar29 = 0x8000000000000001;
        uVar27 = 0x8000000000000001;
        uVar13 = uVar14;
      }
      else {
        lVar24 = 0;
        lStack_2a8 = (lVar23 - 0x40U >> 6) + 1;
        uVar27 = 0x8000000000000001;
        uVar33 = 0x8000000000000000;
        uVar29 = 0x8000000000000001;
        uVar26 = 0x8000000000000001;
        do {
          pbVar2 = (byte *)(uVar14 + lVar24);
          pbVar34 = pbVar2 + 0x20;
          bVar5 = *pbVar2;
          if (0xc < bVar5) {
            if (bVar5 == 0xd) {
              plVar25 = *(long **)(uVar14 + lVar24 + 8);
              lVar17 = *(long *)(uVar14 + lVar24 + 0x10);
joined_r0x0001013bc02c:
              if (lVar17 < 0xb) {
                if (lVar17 == 4) {
                  if (*(int *)plVar25 != 0x656d616e) goto LAB_1013bc38c;
LAB_1013bc234:
                  uVar9 = 0;
                }
                else {
                  if ((lVar17 != 6) ||
                     (*(int *)plVar25 != 0x66657270 || *(short *)((long)plVar25 + 4) != 0x7869))
                  goto LAB_1013bc38c;
LAB_1013bc060:
                  uVar9 = 3;
                }
              }
              else if (lVar17 == 0xb) {
                if (*plVar25 != 0x665f746572636573 ||
                    *(long *)((long)plVar25 + 3) != 0x656c69665f746572) goto LAB_1013bc38c;
LAB_1013bc59c:
                uVar9 = 2;
              }
              else {
                if ((lVar17 != 0xe) ||
                   (*plVar25 != 0x655f746572636573 ||
                    *(long *)((long)plVar25 + 6) != 0x7261765f766e655f)) goto LAB_1013bc38c;
LAB_1013bc294:
                uVar9 = 1;
              }
              goto LAB_1013bc390;
            }
            if (bVar5 == 0xe) {
              pcVar12 = *(char **)(uVar14 + 0x10 + lVar24);
              lVar17 = *(long *)(uVar14 + 0x18 + lVar24);
joined_r0x0001013bc190:
              if (lVar17 < 0xb) {
                if (lVar17 == 4) {
                  if ((((*pcVar12 == 'n') && (pcVar12[1] == 'a')) && (pcVar12[2] == 'm')) &&
                     (pcVar12[3] == 'e')) goto LAB_1013bc234;
                }
                else if (((((lVar17 == 6) && (*pcVar12 == 'p')) &&
                          ((pcVar12[1] == 'r' && ((pcVar12[2] == 'e' && (pcVar12[3] == 'f')))))) &&
                         (pcVar12[4] == 'i')) && (pcVar12[5] == 'x')) goto LAB_1013bc060;
              }
              else if (lVar17 == 0xb) {
                if (((((*pcVar12 == 's') && (pcVar12[1] == 'e')) && (pcVar12[2] == 'c')) &&
                    ((pcVar12[3] == 'r' && (pcVar12[4] == 'e')))) &&
                   (((pcVar12[5] == 't' && ((pcVar12[6] == '_' && (pcVar12[7] == 'f')))) &&
                    ((pcVar12[8] == 'i' && ((pcVar12[9] == 'l' && (pcVar12[10] == 'e'))))))))
                goto LAB_1013bc59c;
              }
              else if ((((lVar17 == 0xe) &&
                        (((*pcVar12 == 's' && (pcVar12[1] == 'e')) && (pcVar12[2] == 'c')))) &&
                       (((pcVar12[3] == 'r' && (pcVar12[4] == 'e')) && (pcVar12[5] == 't')))) &&
                      (((pcVar12[6] == '_' && (pcVar12[7] == 'e')) &&
                       ((pcVar12[8] == 'n' &&
                        ((((pcVar12[9] == 'v' && (pcVar12[10] == '_')) && (pcVar12[0xb] == 'v')) &&
                         ((pcVar12[0xc] == 'a' && (pcVar12[0xd] == 'r')))))))))) goto LAB_1013bc294;
LAB_1013bc38c:
              uVar9 = 4;
              goto LAB_1013bc390;
            }
            if (bVar5 == 0xf) {
              pcVar12 = *(char **)(uVar14 + 8 + lVar24);
              lVar17 = *(long *)(uVar14 + 0x10 + lVar24);
              goto joined_r0x0001013bc190;
            }
LAB_1013bc5a4:
            FUN_108855bf0(&pbStack_c8,pbVar2,&lStack_100,&UNK_10b214d68);
            uVar9 = (uint)bStack_c0;
            if (pbStack_c8 == (byte *)0x2) goto LAB_1013bc390;
            uStack_137 = uStack_a7;
            uStack_130 = uStack_a0;
            uStack_13f = uStack_af;
            uStack_138 = uStack_a8;
            uStack_127 = uStack_97;
            uStack_120 = uStack_90;
            uStack_12f = uStack_9f;
            uStack_128 = uStack_98;
            uStack_117 = uStack_87;
            uStack_11f = uStack_8f;
            uStack_118 = uStack_88;
            uStack_108 = uStack_78;
            uStack_110 = uStack_80;
            uStack_10f = uStack_7f;
            uStack_147 = uStack_b7;
            uStack_140 = uStack_b0;
            uStack_14f = uStack_bf;
            uStack_148 = uStack_b8;
            pbStack_158 = pbStack_c8;
            bStack_150 = bStack_c0;
LAB_1013bcb88:
            uStack_160 = 0x8000000000000000;
            if (-0x7fffffffffffffff < (long)uVar26) {
joined_r0x0001013bce9c:
              uStack_160 = 0x8000000000000000;
              if (uVar26 != 0) {
                uStack_160 = 0x8000000000000000;
                _free(pbStack_278);
              }
            }
LAB_1013bcba8:
            if ((-0x7fffffffffffffff < (long)uVar29) && (uVar29 != 0)) {
              _free(uStack_268);
            }
            if ((-0x7fffffffffffffff < (long)uVar27) && (uVar27 != 0)) {
              _free(ppbStack_260);
            }
            uVar33 = uVar33 & 0x7fffffffffffffff;
            pbStack_278 = pbStack_258;
            goto joined_r0x0001013bca48;
          }
          if (bVar5 == 1) {
            uVar9 = (uint)*(byte *)(uVar14 + lVar24 + 1);
            if (3 < uVar9) {
              uVar9 = 4;
            }
          }
          else {
            if (bVar5 != 4) {
              if (bVar5 != 0xc) goto LAB_1013bc5a4;
              plVar25 = *(long **)(uVar14 + lVar24 + 0x10);
              lVar17 = *(long *)(uVar14 + lVar24 + 0x18);
              goto joined_r0x0001013bc02c;
            }
            uVar13 = *(ulong *)(uVar14 + lVar24 + 8);
            if (3 < uVar13) {
              uVar13 = 4;
            }
            uVar9 = (uint)uVar13;
          }
LAB_1013bc390:
          uVar9 = uVar9 & 0xff;
          ppbVar18 = ppbStack_260;
          pbVar2 = pbStack_258;
          if (uVar9 < 2) {
            if (uVar9 == 0) {
              if (uVar33 == 0x8000000000000000) {
                func_0x0001004e0914(&pbStack_c8,pbVar34);
                uVar33 = CONCAT71(uStack_bf,bStack_c0);
                unaff_x28 = CONCAT71(uStack_af,uStack_b0);
                pbVar2 = (byte *)CONCAT71(uStack_b7,uStack_b8);
                if (pbStack_c8 != (byte *)0x2) {
                  uStack_130 = uStack_a0;
                  uStack_12f = uStack_9f;
                  uStack_138 = uStack_a8;
                  uStack_137 = uStack_a7;
                  uStack_120 = uStack_90;
                  uStack_11f = uStack_8f;
                  uStack_128 = uStack_98;
                  uStack_127 = uStack_97;
                  uStack_110 = uStack_80;
                  uStack_10f = uStack_7f;
                  uStack_118 = uStack_88;
                  uStack_117 = uStack_87;
                  uStack_108 = uStack_78;
                  bStack_150 = bStack_c0;
                  uStack_14f = uStack_bf;
                  uStack_148 = uStack_b8;
                  uStack_147 = uStack_b7;
                  uStack_140 = uStack_b0;
                  uStack_13f = uStack_af;
                  uVar33 = 0;
                  pbStack_158 = pbStack_c8;
                  goto LAB_1013bcb88;
                }
                goto LAB_1013bbfe8;
              }
              FUN_1087e4364(&pbStack_c8,&UNK_108c61018,4);
            }
            else {
              if (uVar27 == 0x8000000000000001) {
                bVar5 = *pbVar34;
                uVar27 = 0x8000000000000000;
                ppbVar18 = ppbVar21;
                if (bVar5 != 0x10) {
                  if (bVar5 == 0x11) {
                    func_0x0001004e0914(&pbStack_c8,*(undefined8 *)(uVar14 + lVar24 + 0x28));
                  }
                  else {
                    if (bVar5 == 0x12) goto LAB_1013bbfe8;
                    func_0x0001004e0914(&pbStack_c8,pbVar34);
                  }
                  if (pbStack_c8 != (byte *)0x2) {
                    uStack_f8 = CONCAT71(uStack_9f,uStack_a0);
                    lStack_100 = CONCAT71(uStack_a7,uStack_a8);
                    uStack_e8 = CONCAT71(uStack_8f,uStack_90);
                    uStack_f0 = CONCAT71(uStack_97,uStack_98);
                    uStack_d8 = CONCAT71(uStack_7f,uStack_80);
                    uStack_e0 = CONCAT71(uStack_87,uStack_88);
                    uStack_d0 = uStack_78;
                  }
                  uVar27 = CONCAT71(uStack_bf,bStack_c0);
                  ppbVar21 = (byte **)CONCAT71(uStack_b7,uStack_b8);
                  uStack_290 = CONCAT71(uStack_af,uStack_b0);
                  ppbVar18 = ppbVar21;
                  if (pbStack_c8 != (byte *)0x2) {
                    uStack_130 = (undefined1)uStack_f8;
                    uStack_12f = (undefined7)((ulong)uStack_f8 >> 8);
                    uStack_138 = (undefined1)lStack_100;
                    uStack_137 = (undefined7)((ulong)lStack_100 >> 8);
                    uStack_120 = (undefined1)uStack_e8;
                    uStack_11f = (undefined7)((ulong)uStack_e8 >> 8);
                    uStack_128 = (undefined1)uStack_f0;
                    uStack_127 = (undefined7)((ulong)uStack_f0 >> 8);
                    uStack_110 = (undefined1)uStack_d8;
                    uStack_10f = (undefined7)((ulong)uStack_d8 >> 8);
                    uStack_118 = (undefined1)uStack_e0;
                    uStack_117 = (undefined7)((ulong)uStack_e0 >> 8);
                    bStack_150 = bStack_c0;
                    uStack_14f = uStack_bf;
                    uStack_148 = uStack_b8;
                    uStack_147 = uStack_b7;
                    uStack_140 = uStack_b0;
                    uStack_13f = uStack_af;
                    uVar27 = 0x8000000000000001;
                    pbStack_158 = pbStack_c8;
                    uStack_108 = uStack_d0;
                    goto LAB_1013bcb88;
                  }
                }
                goto LAB_1013bbfe8;
              }
              FUN_1087e4364(&pbStack_c8,&UNK_108cac08a,0xe);
            }
LAB_1013bcee8:
            uStack_130 = uStack_a0;
            uStack_12f = uStack_9f;
            uStack_138 = uStack_a8;
            uStack_137 = uStack_a7;
            uStack_120 = uStack_90;
            uStack_11f = uStack_8f;
            uStack_128 = uStack_98;
            uStack_127 = uStack_97;
            uStack_110 = uStack_80;
            uStack_10f = uStack_7f;
            uStack_118 = uStack_88;
            uStack_117 = uStack_87;
            uStack_108 = uStack_78;
            bStack_150 = bStack_c0;
            uStack_14f = uStack_bf;
            pbStack_158 = pbStack_c8;
            uStack_140 = uStack_b0;
            uStack_13f = uStack_af;
            uStack_148 = uStack_b8;
            uStack_147 = uStack_b7;
            goto LAB_1013bcb88;
          }
          if (uVar9 != 2) {
            if (uVar9 != 3) goto LAB_1013bbfe8;
            if (uVar26 != 0x8000000000000001) {
              FUN_1087e4364(&pbStack_c8,&UNK_108cac0a3,6);
              uVar26 = uVar26 & 0x7fffffffffffffff;
              uStack_108 = uStack_78;
              pbStack_158 = pbStack_c8;
              bStack_150 = bStack_c0;
              uStack_14f = uStack_bf;
              uStack_148 = uStack_b8;
              uStack_147 = uStack_b7;
              uStack_140 = uStack_b0;
              uStack_13f = uStack_af;
              uStack_138 = uStack_a8;
              uStack_137 = uStack_a7;
              uStack_130 = uStack_a0;
              uStack_12f = uStack_9f;
              uStack_128 = uStack_98;
              uStack_127 = uStack_97;
              uStack_120 = uStack_90;
              uStack_11f = uStack_8f;
              uStack_118 = uStack_88;
              uStack_117 = uStack_87;
              uStack_110 = uStack_80;
              uStack_10f = uStack_7f;
              goto joined_r0x0001013bce9c;
            }
            bVar5 = *pbVar34;
            uVar26 = 0x8000000000000000;
            if (bVar5 == 0x10) goto LAB_1013bbfe8;
            if (bVar5 == 0x11) {
              func_0x0001004e0914(&pbStack_c8,*(undefined8 *)(uVar14 + lVar24 + 0x28));
            }
            else {
              if (bVar5 == 0x12) goto LAB_1013bbfe8;
              func_0x0001004e0914(&pbStack_c8,pbVar34);
            }
            if (pbStack_c8 != (byte *)0x2) {
              uStack_f8 = CONCAT71(uStack_9f,uStack_a0);
              lStack_100 = CONCAT71(uStack_a7,uStack_a8);
              uStack_e8 = CONCAT71(uStack_8f,uStack_90);
              uStack_f0 = CONCAT71(uStack_97,uStack_98);
              uStack_d8 = CONCAT71(uStack_7f,uStack_80);
              uStack_e0 = CONCAT71(uStack_87,uStack_88);
              uStack_d0 = uStack_78;
            }
            uVar26 = CONCAT71(uStack_bf,bStack_c0);
            pbStack_278 = (byte *)CONCAT71(uStack_b7,uStack_b8);
            uStack_280 = CONCAT71(uStack_af,uStack_b0);
            if (pbStack_c8 == (byte *)0x2) goto LAB_1013bbfe8;
            uStack_130 = (undefined1)uStack_f8;
            uStack_12f = (undefined7)((ulong)uStack_f8 >> 8);
            uStack_138 = (undefined1)lStack_100;
            uStack_137 = (undefined7)((ulong)lStack_100 >> 8);
            uStack_120 = (undefined1)uStack_e8;
            uStack_11f = (undefined7)((ulong)uStack_e8 >> 8);
            uStack_128 = (undefined1)uStack_f0;
            uStack_127 = (undefined7)((ulong)uStack_f0 >> 8);
            uStack_110 = (undefined1)uStack_d8;
            uStack_10f = (undefined7)((ulong)uStack_d8 >> 8);
            uStack_118 = (undefined1)uStack_e0;
            uStack_117 = (undefined7)((ulong)uStack_e0 >> 8);
            uStack_108 = uStack_d0;
            bStack_150 = bStack_c0;
            uStack_14f = uStack_bf;
            uStack_148 = uStack_b8;
            uStack_147 = uStack_b7;
            uStack_140 = uStack_b0;
            uStack_13f = uStack_af;
            uStack_160 = 0x8000000000000000;
            pbStack_158 = pbStack_c8;
            goto LAB_1013bcba8;
          }
          if (uVar29 != 0x8000000000000001) {
            FUN_1087e4364(&pbStack_c8,&UNK_108cac098,0xb);
            goto LAB_1013bcee8;
          }
          bVar5 = *pbVar34;
          uVar29 = 0x8000000000000000;
          if (bVar5 != 0x10) {
            if (bVar5 == 0x11) {
              func_0x0001004e0914(&pbStack_c8,*(undefined8 *)(uVar14 + lVar24 + 0x28));
            }
            else {
              if (bVar5 == 0x12) goto LAB_1013bbfe0;
              func_0x0001004e0914(&pbStack_c8,pbVar34);
            }
            if (pbStack_c8 != (byte *)0x2) {
              uStack_f8 = CONCAT71(uStack_9f,uStack_a0);
              lStack_100 = CONCAT71(uStack_a7,uStack_a8);
              uStack_e8 = CONCAT71(uStack_8f,uStack_90);
              uStack_f0 = CONCAT71(uStack_97,uStack_98);
              uStack_d8 = CONCAT71(uStack_7f,uStack_80);
              uStack_e0 = CONCAT71(uStack_87,uStack_88);
              uStack_d0 = uStack_78;
            }
            uVar29 = CONCAT71(uStack_bf,bStack_c0);
            uStack_240 = CONCAT71(uStack_b7,uStack_b8);
            uStack_288 = CONCAT71(uStack_af,uStack_b0);
            if (pbStack_c8 != (byte *)0x2) {
              uStack_130 = (undefined1)uStack_f8;
              uStack_12f = (undefined7)((ulong)uStack_f8 >> 8);
              uStack_138 = (undefined1)lStack_100;
              uStack_137 = (undefined7)((ulong)lStack_100 >> 8);
              uStack_120 = (undefined1)uStack_e8;
              uStack_11f = (undefined7)((ulong)uStack_e8 >> 8);
              uStack_128 = (undefined1)uStack_f0;
              uStack_127 = (undefined7)((ulong)uStack_f0 >> 8);
              uStack_110 = (undefined1)uStack_d8;
              uStack_10f = (undefined7)((ulong)uStack_d8 >> 8);
              uStack_118 = (undefined1)uStack_e0;
              uStack_117 = (undefined7)((ulong)uStack_e0 >> 8);
              bStack_150 = bStack_c0;
              uStack_14f = uStack_bf;
              uStack_148 = uStack_b8;
              uStack_147 = uStack_b7;
              uStack_140 = uStack_b0;
              uStack_13f = uStack_af;
              uVar29 = 0x8000000000000001;
              pbStack_158 = pbStack_c8;
              uStack_108 = uStack_d0;
              goto LAB_1013bcb88;
            }
          }
LAB_1013bbfe0:
          uStack_268 = uStack_240;
LAB_1013bbfe8:
          pbStack_258 = pbVar2;
          ppbStack_260 = ppbVar18;
          lVar24 = lVar24 + 0x40;
          uVar13 = uVar20;
        } while (lVar23 - lVar24 != 0);
      }
      bVar6 = uVar33 != 0x8000000000000000;
      pbVar2 = pbStack_258;
      if (!bVar6) {
        pbVar2 = (byte *)0x1;
        uVar33 = 0;
      }
      uVar14 = 0;
      if (bVar6) {
        uVar14 = unaff_x28;
      }
      uVar3 = 0x8000000000000000;
      if (uVar27 != 0x8000000000000001) {
        uVar3 = uVar27;
      }
      bStack_150 = (byte)uVar14;
      uStack_14f = (undefined7)(uVar14 >> 8);
      uStack_148 = (undefined1)uVar3;
      uStack_147 = (undefined7)(uVar3 >> 8);
      uVar14 = 0x8000000000000000;
      if (uVar29 != 0x8000000000000001) {
        uVar14 = uVar29;
      }
      uVar29 = 0x8000000000000000;
      if (uVar26 != 0x8000000000000001) {
        uVar29 = uVar26;
      }
      uStack_140 = SUB81(ppbStack_260,0);
      uStack_13f = (undefined7)((ulong)ppbStack_260 >> 8);
      uStack_138 = (undefined1)uStack_290;
      uStack_137 = (undefined7)((ulong)uStack_290 >> 8);
      uStack_130 = (undefined1)uVar14;
      uStack_12f = (undefined7)(uVar14 >> 8);
      uStack_128 = (undefined1)uStack_268;
      uStack_127 = (undefined7)((ulong)uStack_268 >> 8);
      uStack_120 = (undefined1)uStack_288;
      uStack_11f = (undefined7)((ulong)uStack_288 >> 8);
      uStack_118 = (undefined1)uVar29;
      uStack_117 = (undefined7)(uVar29 >> 8);
      uStack_110 = SUB81(pbStack_278,0);
      uStack_10f = (undefined7)((ulong)pbStack_278 >> 8);
      uStack_108 = uStack_280;
      ppbVar19 = (byte **)0x8000000000000000;
      uStack_160 = uVar33;
      pbStack_158 = pbVar2;
      if (uVar20 - uVar13 != 0) {
        lStack_100 = lStack_2a8;
        FUN_1087e427c(&pbStack_c8,lStack_2a8 + (uVar20 - uVar13 >> 6),&lStack_100,&UNK_10b23a190);
        ppbVar19 = extraout_x10_02;
        uVar20 = extraout_x11_02;
        if (pbStack_c8 != (byte *)0x2) {
          uStack_130 = uStack_a0;
          uStack_12f = uStack_9f;
          uStack_138 = uStack_a8;
          uStack_137 = uStack_a7;
          uStack_120 = uStack_90;
          uStack_11f = uStack_8f;
          uStack_128 = uStack_98;
          uStack_127 = uStack_97;
          uStack_110 = uStack_80;
          uStack_10f = uStack_7f;
          uStack_118 = uStack_88;
          uStack_117 = uStack_87;
          uStack_108 = uStack_78;
          bStack_150 = bStack_c0;
          uStack_14f = uStack_bf;
          pbStack_158 = pbStack_c8;
          uStack_140 = uStack_b0;
          uStack_13f = uStack_af;
          uStack_148 = uStack_b8;
          uStack_147 = uStack_b7;
          uStack_160 = 0x8000000000000000;
          if (uVar33 != 0) {
            _free(pbVar2);
          }
          if ((uVar3 & 0x7fffffffffffffff) != 0) {
            _free(ppbStack_260);
          }
          if ((uVar14 & 0x7fffffffffffffff) != 0) {
            _free(uStack_268);
          }
          if ((uVar29 & 0x7fffffffffffffff) == 0) goto LAB_1013bcbe8;
          goto LAB_1013bcbe4;
        }
      }
LAB_1013bc92c:
      ppbVar21 = ppbStack_228;
      uStack_1f8 = CONCAT71(uStack_12f,uStack_130);
      uStack_200 = CONCAT71(uStack_137,uStack_138);
      uStack_1e8 = CONCAT71(uStack_11f,uStack_120);
      uStack_1f0 = CONCAT71(uStack_127,uStack_128);
      uStack_1d8 = CONCAT71(uStack_10f,uStack_110);
      uStack_1e0 = CONCAT71(uStack_117,uStack_118);
      uStack_1d0 = uStack_108;
      uStack_218 = CONCAT71(uStack_14f,bStack_150);
      pbStack_220 = pbStack_158;
      uStack_208 = CONCAT71(uStack_13f,uStack_140);
      uStack_210 = CONCAT71(uStack_147,uStack_148);
      if (uVar33 == 0x8000000000000000) break;
      if (uVar33 == 0x8000000000000001) goto LAB_1013bcc18;
      pbStack_1b8 = pbStack_158;
      uStack_168 = uStack_108;
      uStack_1c0 = uVar33;
      uStack_1b0 = uStack_218;
      uStack_1a8 = uStack_210;
      uStack_1a0 = uStack_208;
      uStack_198 = uStack_200;
      uStack_190 = uStack_1f8;
      uStack_188 = uStack_1f0;
      uStack_180 = uStack_1e8;
      uStack_178 = uStack_1e0;
      uStack_170 = uStack_1d8;
      if (ppbStack_228 == ppbStack_238) {
        func_0x000108919d14(&ppbStack_238);
        ppbVar19 = extraout_x10_04;
        uVar20 = extraout_x11_04;
      }
      puVar11 = (ulong *)(uStack_230 + (long)ppbVar21 * 0x60);
      puVar11[1] = (ulong)pbStack_1b8;
      *puVar11 = uStack_1c0;
      puVar11[5] = uStack_198;
      puVar11[4] = uStack_1a0;
      puVar11[7] = uStack_188;
      puVar11[6] = uStack_190;
      puVar11[9] = uStack_178;
      puVar11[8] = uStack_180;
      puVar11[0xb] = uStack_168;
      puVar11[10] = uStack_170;
      puVar11[3] = uStack_1a8;
      puVar11[2] = uStack_1b0;
      ppbStack_228 = (byte **)((long)ppbVar21 + 1);
      bVar6 = pcVar16 != pcVar1;
      pcVar12 = pcVar16;
      pcVar16 = pcVar1;
      uVar32 = ((ulong)ppbVar10 >> 5) + 1;
    } while (bVar6);
  }
  param_1[2] = uStack_230;
  param_1[1] = (ulong)ppbStack_238;
  param_1[3] = (ulong)ppbStack_228;
  *param_1 = 2;
LAB_1013bcd08:
  if ((long)pcVar1 - (long)pcVar16 != 0) {
    uVar30 = param_1[1];
    uVar20 = param_1[2];
    uVar33 = param_1[3];
    uStack_1c0 = uVar32;
    FUN_1087e427c(&uStack_160,uVar32 + ((ulong)((long)pcVar1 - (long)pcVar16) >> 5),&uStack_1c0,
                  &UNK_10b23a1b0);
    if (uStack_160 != 2) {
      param_1[5] = CONCAT71(uStack_137,uStack_138);
      param_1[4] = CONCAT71(uStack_13f,uStack_140);
      param_1[7] = CONCAT71(uStack_127,uStack_128);
      param_1[6] = CONCAT71(uStack_12f,uStack_130);
      param_1[9] = CONCAT71(uStack_117,uStack_118);
      param_1[8] = CONCAT71(uStack_11f,uStack_120);
      param_1[10] = CONCAT71(uStack_10f,uStack_110);
      param_1[1] = (ulong)pbStack_158;
      *param_1 = uStack_160;
      param_1[3] = CONCAT71(uStack_147,uStack_148);
      param_1[2] = CONCAT71(uStack_14f,bStack_150);
      uVar32 = uVar20;
      for (; uVar33 != 0; uVar33 = uVar33 - 1) {
        FUN_100e4d1c8(uVar32);
        uVar32 = uVar32 + 0x60;
      }
      if (uVar30 == 0) {
        return;
      }
      _free(uVar20);
      return;
    }
  }
  *param_1 = 2;
  return;
LAB_1013bcc74:
  do {
    if (plVar25[-6] != 0) {
      _free(plVar25[-5]);
    }
    if (plVar25[-3] == -0x8000000000000000 || plVar25[-3] == 0) {
      if (*plVar25 != -0x8000000000000000 && *plVar25 != 0) goto LAB_1013bcc50;
LAB_1013bccc0:
      if (plVar25[3] != -0x8000000000000000 && plVar25[3] != 0) goto LAB_1013bccd0;
LAB_1013bcc68:
      plVar25 = plVar25 + 0xc;
      ppbVar18 = (byte **)((long)ppbVar18 - 1);
      if (ppbVar18 == (byte **)0x0) break;
      goto LAB_1013bcc74;
    }
    _free(plVar25[-2]);
    if (*plVar25 == -0x8000000000000000 || *plVar25 == 0) goto LAB_1013bccc0;
LAB_1013bcc50:
    _free(plVar25[1]);
    if (plVar25[3] == -0x8000000000000000 || plVar25[3] == 0) goto LAB_1013bcc68;
LAB_1013bccd0:
    _free(plVar25[4]);
    plVar25 = plVar25 + 0xc;
    ppbVar18 = (byte **)((long)ppbVar18 - 1);
  } while (ppbVar18 != (byte **)0x0);
LAB_1013bcce4:
  if (ppbStack_238 != (byte **)0x0) {
    _free(uVar30);
  }
  if (*param_1 != 2) {
    return;
  }
  goto LAB_1013bcd08;
}

