
void FUN_100f1c750(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lStack_918;
  long lStack_910;
  long lStack_908;
  long lStack_900;
  long lStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  long lStack_8e0;
  long lStack_8d8;
  long lStack_8d0;
  long lStack_8c8;
  long lStack_8c0;
  long lStack_8b8;
  long lStack_8b0;
  long lStack_8a8;
  long lStack_8a0;
  undefined8 *puStack_898;
  long lStack_890;
  long lStack_888;
  long *plStack_880;
  long lStack_878;
  long lStack_870;
  long lStack_868;
  long lStack_710;
  undefined1 auStack_708 [424];
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  long lStack_538;
  long lStack_530;
  long *plStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  undefined8 *puStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long *plStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  undefined1 auStack_4a8 [488];
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  long lStack_290;
  long *plStack_288;
  long *plStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined1 auStack_260 [512];
  
  FUN_1011ae894(&lStack_918);
  if (lStack_918 == 2) {
    if (lStack_910 != -0x8000000000000000) {
      lVar5 = *param_2;
      lVar1 = param_2[1];
      lVar6 = param_2[2];
      *param_2 = -0x8000000000000000;
      if (lVar5 == -0x8000000000000000) {
        puStack_898 = (undefined8 *)_malloc(0x10);
        if (puStack_898 == (undefined8 *)0x0) {
          func_0x0001087c9084(1,0x10);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100f1ca80);
          (*pcVar4)();
        }
        puStack_898[1] = 0x676e697373696d20;
        *puStack_898 = 0x73692065756c6176;
        lStack_8b8 = 0;
        lStack_8a0 = 0x10;
        lStack_888 = 0;
        lStack_890 = 0x10;
        plStack_880 = (long *)0x8;
        lStack_878 = 0;
        lStack_870 = 0;
      }
      else {
        func_0x0001011718f4(&lStack_508,param_2 + 3);
        lStack_538 = lStack_4d8;
        puStack_540 = puStack_4e0;
        plStack_528 = plStack_4c8;
        lStack_530 = lStack_4d0;
        lStack_518 = lStack_4b8;
        lStack_520 = lStack_4c0;
        lStack_510 = lStack_4b0;
        lStack_558 = lStack_4f8;
        lStack_560 = lStack_500;
        lStack_548 = lStack_4e8;
        lStack_550 = lStack_4f0;
        if (lStack_508 == 2) {
          lStack_890 = lStack_4d8;
          puStack_898 = puStack_4e0;
          plStack_880 = plStack_4c8;
          lStack_888 = lStack_4d0;
          lStack_870 = lStack_4b8;
          lStack_878 = lStack_4c0;
          lStack_868 = lStack_4b0;
          lStack_8b0 = lStack_4f8;
          lStack_8b8 = lStack_500;
          lStack_8a0 = lStack_4e8;
          lStack_8a8 = lStack_4f0;
        }
        else {
          _memcpy(auStack_260,auStack_4a8,0x1e8);
          lStack_290 = lStack_538;
          puStack_298 = puStack_540;
          plStack_280 = plStack_528;
          plStack_288 = (long *)lStack_530;
          lStack_270 = lStack_518;
          lStack_278 = lStack_520;
          lStack_2c0 = lStack_508;
          lStack_268 = lStack_510;
          lStack_2b0 = lStack_558;
          lStack_2b8 = lStack_560;
          puStack_2a0 = (undefined8 *)lStack_548;
          lStack_2a8 = lStack_550;
          __ZN134__LT_codex_config__mcp_types__McpServerConfig_u20_as_u20_core__convert__TryFrom_LT_codex_config__mcp_types__RawMcpServerConfig_GT__GT_8try_from17h7d311a2c35e272e5E
                    (&lStack_710,&lStack_2c0);
          if (lStack_710 == 2) {
            FUN_10112ce54(&lStack_8b8,auStack_708);
          }
          else {
            _memcpy(&lStack_8c0,&lStack_710,0x1b0);
            if (lStack_8c0 != 2) {
              if (lVar5 != 0) {
                _free(lVar1);
              }
              _memcpy(param_1 + 3,&lStack_8c0,0x1b0);
              *param_1 = lStack_910;
              param_1[1] = lStack_908;
              param_1[2] = lStack_900;
              return;
            }
          }
        }
        lVar2 = lStack_878;
        plStack_288 = plStack_880;
        lStack_290 = lStack_888;
        lStack_278 = lStack_870;
        plStack_280 = (long *)lStack_878;
        lStack_270 = lStack_868;
        lStack_2b8 = lStack_8b0;
        lStack_2c0 = lStack_8b8;
        lStack_2a8 = lStack_8a0;
        lStack_2b0 = lStack_8a8;
        puStack_298 = (undefined8 *)lStack_890;
        puStack_2a0 = puStack_898;
        if (lStack_878 == lStack_888) {
          __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(&lStack_290);
        }
        plVar3 = plStack_288;
        if (lVar2 != 0) {
          _memmove(plStack_288 + 3,plStack_288,lVar2 * 0x18);
        }
        *plVar3 = lVar5;
        plVar3[1] = lVar1;
        plVar3[2] = lVar6;
        lStack_890 = (long)puStack_298;
        puStack_898 = puStack_2a0;
        plStack_880 = plStack_288;
        lStack_888 = lStack_290;
        lStack_8b0 = lStack_2b8;
        lStack_8b8 = lStack_2c0;
        lStack_878 = lVar2 + 1;
        lStack_868 = lStack_270;
        lStack_8a0 = lStack_2a8;
        lStack_8a8 = lStack_2b0;
        lStack_870 = lStack_278;
        plStack_280 = (long *)lStack_878;
      }
      param_1[9] = lStack_890;
      param_1[8] = (long)puStack_898;
      param_1[0xb] = (long)plStack_880;
      param_1[10] = lStack_888;
      param_1[0xd] = lStack_870;
      param_1[0xc] = lStack_878;
      param_1[0xe] = lStack_868;
      param_1[5] = lStack_8b0;
      param_1[4] = lStack_8b8;
      param_1[7] = lStack_8a0;
      param_1[6] = lStack_8a8;
      param_1[3] = 3;
      if (lStack_910 == 0) {
        return;
      }
      _free(lStack_908);
      return;
    }
    lVar5 = 2;
  }
  else {
    param_1[9] = lStack_8f0;
    param_1[8] = lStack_8f8;
    param_1[0xb] = lStack_8e0;
    param_1[10] = lStack_8e8;
    param_1[0xd] = lStack_8d0;
    param_1[0xc] = lStack_8d8;
    param_1[0xe] = lStack_8c8;
    param_1[5] = lStack_910;
    param_1[4] = lStack_918;
    param_1[7] = lStack_900;
    param_1[6] = lStack_908;
    lVar5 = 3;
  }
  param_1[3] = lVar5;
  return;
}

