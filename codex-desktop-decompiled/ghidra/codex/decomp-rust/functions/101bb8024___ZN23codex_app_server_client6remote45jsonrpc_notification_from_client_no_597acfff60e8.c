
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN23codex_app_server_client6remote45jsonrpc_notification_from_client_notification17hb7a79451c9a48ad0E
               (undefined8 *param_1)

{
  long ******pppppplVar1;
  code *pcVar2;
  undefined1 (*pauVar3) [16];
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  int iVar10;
  ulong uVar11;
  long *******ppppppplVar12;
  long *******extraout_x10;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long lVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  undefined1 auVar19 [16];
  long *******ppppppplStack_2e0;
  long *******ppppppplStack_2d8;
  long *******ppppppplStack_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2b8;
  long *******ppppppplStack_2b0;
  long *******ppppppplStack_2a8;
  long *******ppppppplStack_2a0;
  long *******ppppppplStack_298;
  long *******ppppppplStack_290;
  long *******ppppppplStack_288;
  long *******ppppppplStack_280;
  long *******ppppppplStack_278;
  long *******ppppppplStack_270;
  long *******ppppppplStack_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  long *******ppppppplStack_250;
  long *******ppppppplStack_248;
  long *******ppppppplStack_240;
  long *******ppppppplStack_238;
  long *******ppppppplStack_230;
  long *******ppppppplStack_228;
  long *******ppppppplStack_220;
  long *******ppppppplStack_218;
  long *******ppppppplStack_210;
  long *******ppppppplStack_208;
  long *******ppppppplStack_200;
  long *******ppppppplStack_1f8;
  long *******ppppppplStack_1f0;
  long *******ppppppplStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  long *******ppppppplStack_1b0;
  long *******ppppppplStack_1a0;
  long *******ppppppplStack_198;
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  long *******ppppppplStack_180;
  long *******ppppppplStack_178;
  long *******ppppppplStack_170;
  long *******ppppppplStack_168;
  long *******ppppppplStack_160;
  long *******ppppppplStack_158;
  long *******ppppppplStack_150;
  long *******ppppppplStack_148;
  long *******ppppppplStack_140;
  long *******ppppppplStack_138;
  long *******ppppppplStack_130;
  long *******ppppppplStack_128;
  long *******ppppppplStack_120;
  long *******ppppppplStack_118;
  long *******ppppppplStack_110;
  long *******ppppppplStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f0;
  long *******ppppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b0;
  long *******ppppppplStack_a8;
  long *******ppppppplStack_a0;
  long *******ppppppplStack_98;
  long *******ppppppplStack_90;
  long *******ppppppplStack_88;
  long *******ppppppplStack_80;
  long *******ppppppplStack_78;
  
  pauVar3 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar3[1][0] == '\x01') {
    auVar19 = *pauVar3;
  }
  else {
    auVar19 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar3 + 8) = auVar19._8_8_;
    pauVar3[1][0] = 1;
  }
  *(long *)*pauVar3 = auVar19._0_8_ + 1;
  FUN_105dc99f8(&ppppppplStack_210,1,auVar19._0_8_,auVar19._8_8_);
  ppppppplStack_1c8 = (long *******)0x8000000000000000;
  ppppppplVar4 = ppppppplStack_208;
  if (ppppppplStack_210 != (long *******)0x8000000000000001) {
    ppppppplStack_168 = ppppppplStack_1d8;
    ppppppplStack_170 = ppppppplStack_1e0;
    ppppppplStack_158 = (long *******)0x8000000000000000;
    ppppppplStack_160 = ppppppplStack_1d0;
    ppppppplStack_148 = ppppppplStack_1b8;
    ppppppplStack_150 = ppppppplStack_1c0;
    ppppppplStack_188 = ppppppplStack_1f8;
    ppppppplStack_190 = ppppppplStack_200;
    ppppppplStack_178 = ppppppplStack_1e8;
    ppppppplStack_180 = ppppppplStack_1f0;
    ppppppplStack_1a0 = ppppppplStack_210;
    ppppppplStack_198 = ppppppplStack_208;
    if (ppppppplStack_210 != (long *******)0x8000000000000000) {
      ppppppplVar4 = (long *******)_malloc(6);
      if (ppppppplVar4 == (long *******)0x0) {
        func_0x0001087c9084(1,6);
        goto LAB_101bb81fc;
      }
      *(undefined2 *)((long)ppppppplVar4 + 4) = 0x646f;
      *(undefined4 *)ppppppplVar4 = 0x6874656d;
      if (((ulong)ppppppplStack_158 & 0x7fffffffffffffff) != 0) {
        _free(ppppppplStack_150);
      }
      ppppppplStack_148 = (long *******)0x6;
      ppppppplStack_158 = (long *******)0x8000000000000000;
      ppppppplStack_a0 = (long *******)0x6;
      ppppppplStack_b0 = (long *******)0x6;
      ppppppplStack_150 = ppppppplVar4;
      ppppppplStack_a8 = ppppppplVar4;
      ppppppplVar4 = (long *******)_malloc(0xb);
      if (ppppppplVar4 == (long *******)0x0) {
        func_0x0001087c9084(1,0xb);
        goto LAB_101bb81fc;
      }
      *(undefined4 *)((long)ppppppplVar4 + 7) = 0x64657a69;
      *ppppppplVar4 = (long ******)0x696c616974696e69;
      ppppppplStack_268 = (long *******)0xb;
      ppppppplStack_270 = (long *******)0x8000000000000003;
      ppppppplStack_258 = (long *******)0xb;
      ppppppplStack_260 = ppppppplVar4;
      FUN_101bf09d4(&ppppppplStack_210,&ppppppplStack_1a0,&ppppppplStack_b0,&ppppppplStack_270);
      ppppppplStack_138 = ppppppplStack_200;
      ppppppplStack_140 = ppppppplStack_208;
      ppppppplStack_128 = ppppppplStack_1f0;
      ppppppplStack_130 = ppppppplStack_1f8;
      ppppppplStack_118 = ppppppplStack_1e0;
      ppppppplStack_120 = ppppppplStack_1e8;
      ppppppplStack_108 = ppppppplStack_1d0;
      ppppppplStack_110 = ppppppplStack_1d8;
      ppppppplStack_100 = ppppppplStack_1c8;
      if (ppppppplStack_208 != (long *******)0x8000000000000005) {
        func_0x000101bbf344(&ppppppplStack_140);
      }
      ppppppplVar17 = ppppppplStack_160;
      ppppppplVar5 = ppppppplStack_168;
      ppppppplVar13 = ppppppplStack_170;
      ppppppplVar6 = ppppppplStack_178;
      ppppppplVar8 = ppppppplStack_180;
      ppppppplVar14 = ppppppplStack_188;
      ppppppplVar7 = ppppppplStack_190;
      ppppppplVar4 = ppppppplStack_198;
      ppppppplVar16 = ppppppplStack_1a0;
      if (ppppppplStack_1a0 == (long *******)0x8000000000000000) {
        ppppppplVar8 = ppppppplStack_178;
        ppppppplVar18 = ppppppplStack_168;
        ppppppplVar17 = ppppppplStack_158;
        ppppppplVar7 = ppppppplStack_188;
        ppppppplVar5 = ppppppplStack_160;
        ppppppplVar14 = ppppppplStack_180;
        ppppppplVar6 = ppppppplStack_170;
        ppppppplVar9 = ppppppplStack_198;
        ppppppplVar4 = ppppppplStack_190;
        if (ppppppplStack_198 != (long *******)0x8000000000000005) goto LAB_101bb786c;
        func_0x000108a079f0(&UNK_109b9f7c8,0x19,&UNK_10b46a510);
LAB_101bb80d4:
        ppppppplStack_268 =
             (long *******)FUN_1088c6060(&ppppppplStack_2b8,&ppppppplStack_270,&UNK_10b26a970);
        ppppppplStack_270 = (long *******)0x8000000000000000;
      }
      else {
        if (((ulong)ppppppplStack_158 & 0x7fffffffffffffff) != 0) {
          _free(ppppppplStack_150);
        }
        ppppppplVar18 = ppppppplVar13;
        ppppppplVar9 = ppppppplVar16;
        if (ppppppplVar16 == (long *******)0x8000000000000005) goto LAB_101bb81b0;
LAB_101bb786c:
        ppppppplVar13 = (long *******)0x8000000000000005;
        uVar11 = (ulong)ppppppplVar9 ^ 0x8000000000000000;
        ppppppplVar12 = (long *******)0x5;
        if (-1 < (long)ppppppplVar9) {
          uVar11 = 5;
        }
        ppppppplVar16 = ppppppplVar9;
        ppppppplStack_2b8 = ppppppplVar9;
        ppppppplStack_2b0 = ppppppplVar4;
        ppppppplStack_2a8 = ppppppplVar7;
        ppppppplStack_2a0 = ppppppplVar14;
        ppppppplStack_298 = ppppppplVar8;
        ppppppplStack_290 = ppppppplVar6;
        ppppppplStack_288 = ppppppplVar18;
        ppppppplStack_280 = ppppppplVar5;
        ppppppplStack_278 = ppppppplVar17;
        if (uVar11 == 4) {
          ppppppplVar8 = ppppppplVar7 + (long)ppppppplVar14 * 9;
          ppppppplVar13 = ppppppplVar7;
          ppppppplStack_b0 = ppppppplVar7;
          ppppppplStack_a0 = ppppppplVar4;
          ppppppplStack_98 = ppppppplVar8;
          if (ppppppplVar14 == (long *******)0x0) {
LAB_101bb7930:
            ppppppplStack_a8 = ppppppplVar13;
            ppppppplVar5 = (long *******)FUN_1088c5bd8(0,&UNK_10b26aa18);
LAB_101bb7944:
            ppppppplStack_270 = (long *******)0x8000000000000000;
            ppppppplStack_268 = ppppppplVar5;
            ppppppplVar6 = ppppppplStack_210;
          }
          else {
            ppppppplVar13 = ppppppplVar7 + 9;
            ppppppplVar6 = (long *******)*ppppppplVar7;
            if (ppppppplVar6 == (long *******)0x8000000000000005) goto LAB_101bb7930;
            ppppppplVar5 = (long *******)ppppppplVar7[2];
            ppppppplVar17 = (long *******)ppppppplVar7[1];
            ppppppplStack_1f0 = (long *******)ppppppplVar7[4];
            ppppppplVar18 = (long *******)ppppppplVar7[3];
            ppppppplStack_1e0 = (long *******)ppppppplVar7[6];
            ppppppplStack_1e8 = (long *******)ppppppplVar7[5];
            ppppppplStack_1d0 = (long *******)ppppppplVar7[8];
            ppppppplStack_1d8 = (long *******)ppppppplVar7[7];
            ppppppplStack_210 = ppppppplVar6;
            ppppppplStack_1f8 = ppppppplVar18;
            ppppppplStack_208 = ppppppplVar17;
            ppppppplStack_200 = ppppppplVar5;
            ppppppplStack_a8 = ppppppplVar13;
            if (ppppppplVar6 != (long *******)0x8000000000000003) {
              ppppppplVar5 = (long *******)
                             FUN_1088c6060(&ppppppplStack_210,&ppppppplStack_270,&UNK_10b26a8b0);
              func_0x000101bbf344(&ppppppplStack_210);
              goto LAB_101bb7944;
            }
            if ((ppppppplVar17 == (long *******)0x8000000000000000) ||
               (ppppppplVar17 == (long *******)0x8000000000000001)) goto LAB_101bb7944;
            if (ppppppplVar14 == (long *******)0x1) {
              ppppppplStack_210 = (long *******)0x8000000000000005;
              ppppppplVar9 = ppppppplVar8;
LAB_101bb7f48:
              ppppppplStack_240 = ppppppplStack_138;
              ppppppplStack_248 = ppppppplStack_140;
              ppppppplStack_218 = ppppppplStack_110;
              ppppppplStack_220 = ppppppplStack_118;
              ppppppplStack_228 = ppppppplStack_120;
              ppppppplStack_230 = ppppppplStack_128;
              ppppppplStack_238 = ppppppplStack_130;
              ppppppplStack_1c8 = ppppppplStack_120;
              ppppppplStack_1d0 = ppppppplStack_128;
              ppppppplStack_1b8 = ppppppplStack_110;
              ppppppplStack_1c0 = ppppppplStack_118;
              ppppppplStack_1e8 = ppppppplStack_140;
              ppppppplStack_1d8 = ppppppplStack_130;
              ppppppplStack_1e0 = ppppppplStack_138;
              ppppppplStack_270 = ppppppplVar17;
              ppppppplStack_268 = ppppppplVar5;
              ppppppplStack_260 = ppppppplVar18;
              ppppppplStack_258 = ppppppplStack_210;
              ppppppplStack_250 = ppppppplVar12;
              ppppppplVar6 = ppppppplVar17;
              ppppppplStack_208 = ppppppplVar5;
              ppppppplStack_200 = ppppppplVar18;
              ppppppplStack_1f8 = ppppppplStack_210;
              ppppppplStack_1f0 = ppppppplVar12;
              if (ppppppplVar8 != ppppppplVar9) {
                ppppppplStack_210 = ppppppplVar17;
                ppppppplStack_268 = (long *******)FUN_1088c5bd8(ppppppplVar14,&UNK_10b26a8d0);
                ppppppplStack_270 = (long *******)0x8000000000000000;
                FUN_101bc36a0(&ppppppplStack_210);
                ppppppplVar6 = ppppppplStack_210;
              }
            }
            else {
              ppppppplVar13 = ppppppplVar7 + 0x12;
              ppppppplVar6 = (long *******)ppppppplVar7[9];
              ppppppplVar9 = ppppppplVar13;
              ppppppplStack_a8 = ppppppplVar13;
              if (ppppppplVar6 == (long *******)0x8000000000000005) {
                ppppppplStack_210 = (long *******)0x8000000000000005;
                goto LAB_101bb7f48;
              }
              ppppppplStack_190 = (long *******)ppppppplVar7[0xb];
              ppppppplStack_198 = (long *******)ppppppplVar7[10];
              ppppppplStack_180 = (long *******)ppppppplVar7[0xd];
              ppppppplStack_188 = (long *******)ppppppplVar7[0xc];
              ppppppplStack_170 = (long *******)ppppppplVar7[0xf];
              ppppppplStack_178 = (long *******)ppppppplVar7[0xe];
              ppppppplStack_160 = (long *******)ppppppplVar7[0x11];
              ppppppplStack_168 = (long *******)ppppppplVar7[0x10];
              ppppppplStack_1a0 = ppppppplVar6;
              if (ppppppplVar6 == (long *******)0x8000000000000000) {
                func_0x000101bbf344(&ppppppplStack_1a0);
                ppppppplStack_210 = (long *******)0x8000000000000005;
                ppppppplVar12 = extraout_x10;
                goto LAB_101bb7f48;
              }
              FUN_101bb0b38(&ppppppplStack_210,&ppppppplStack_1a0);
              if (ppppppplStack_210 != (long *******)0x8000000000000005) {
                ppppppplStack_138 = ppppppplStack_1f8;
                ppppppplStack_140 = ppppppplStack_200;
                ppppppplStack_128 = ppppppplStack_1e8;
                ppppppplStack_130 = ppppppplStack_1f0;
                ppppppplStack_118 = ppppppplStack_1d8;
                ppppppplStack_120 = ppppppplStack_1e0;
                ppppppplStack_110 = ppppppplStack_1d0;
                ppppppplVar12 = ppppppplStack_208;
                goto LAB_101bb7f48;
              }
              ppppppplStack_270 = (long *******)0x8000000000000000;
              ppppppplStack_268 = ppppppplStack_208;
              ppppppplVar6 = ppppppplStack_210;
              if (ppppppplVar17 != (long *******)0x0) {
                _free(ppppppplVar5);
                ppppppplVar6 = ppppppplStack_210;
              }
            }
          }
          ppppppplStack_210 = ppppppplVar6;
          lVar15 = ((ulong)((long)ppppppplVar8 - (long)ppppppplVar13) >> 3) * -0x71c71c71c71c71c7 +
                   1;
          while (lVar15 = lVar15 + -1, lVar15 != 0) {
            func_0x000101bbf344(ppppppplVar13);
            ppppppplVar13 = ppppppplVar13 + 9;
          }
          if (ppppppplVar4 != (long *******)0x0) {
            _free(ppppppplVar7);
          }
        }
        else {
          if (uVar11 != 5) goto LAB_101bb80d4;
          if ((ppppppplVar8 != (long *******)0x0) && ((long)ppppppplVar8 * 9 != -0x11)) {
            _free(ppppppplVar14 + (-1 - (long)ppppppplVar8));
          }
          ppppppplVar13 = ppppppplVar4 + (long)ppppppplVar7 * 0xd;
          ppppppplStack_210 = (long *******)0x8000000000000005;
          ppppppplStack_1c8 = ppppppplVar4;
          ppppppplStack_1c0 = ppppppplVar4;
          ppppppplStack_1b8 = ppppppplVar9;
          ppppppplStack_1b0 = ppppppplVar13;
          if (ppppppplVar7 == (long *******)0x0) {
            ppppppplVar7 = (long *******)0x8000000000000006;
            ppppppplStack_140 = (long *******)0x8000000000000006;
            ppppppplStack_2d0 = ppppppplVar18;
LAB_101bb7c9c:
            ppppppplStack_270 = (long *******)&UNK_108cf32c0;
            ppppppplStack_268 = (long *******)0x6;
            ppppppplStack_1a0 = (long *******)&ppppppplStack_270;
            ppppppplStack_198 = (long *******)&DAT_101bbc878;
            ppppppplVar14 = (long *******)0x0;
            ppppppplStack_268 =
                 (long *******)FUN_1088c6670(s_missing_field_____108ac28f7,&ppppppplStack_1a0);
joined_r0x000101bb7e7c:
            ppppppplStack_270 = (long *******)0x8000000000000000;
            if ((undefined *)0x1 < (ulong)((long)ppppppplVar7 + 0x7ffffffffffffffb)) {
              ppppppplStack_270 = (long *******)0x8000000000000000;
              func_0x000101bbf344(&ppppppplStack_140);
            }
LAB_101bb7cf0:
            if (((ulong)ppppppplVar14 & 0x7fffffffffffffff) != 0) {
              _free(ppppppplStack_2d0);
            }
          }
          else {
            ppppppplVar7 = (long *******)0x8000000000000006;
            ppppppplVar14 = (long *******)0x8000000000000000;
            ppppppplStack_2c8 = (long *******)0x8000000000000006;
            do {
              ppppppplVar6 = ppppppplVar4 + 0xd;
              ppppppplVar8 = ppppppplVar6;
              if (*ppppppplVar4 == (long ******)0x8000000000000000) break;
              pppppplVar1 = ppppppplVar4[1];
              ppppppplStack_208 = (long *******)ppppppplVar4[4];
              ppppppplStack_210 = (long *******)ppppppplVar4[3];
              ppppppplStack_1f8 = (long *******)ppppppplVar4[6];
              ppppppplStack_200 = (long *******)ppppppplVar4[5];
              ppppppplStack_1e8 = (long *******)ppppppplVar4[8];
              ppppppplStack_1f0 = (long *******)ppppppplVar4[7];
              ppppppplStack_1d8 = (long *******)ppppppplVar4[10];
              ppppppplStack_1e0 = (long *******)ppppppplVar4[9];
              ppppppplStack_1d0 = (long *******)ppppppplVar4[0xb];
              if (ppppppplVar4[2] == (long ******)0x6) {
                if (*(int *)pppppplVar1 == 0x6874656d && *(short *)((long)pppppplVar1 + 4) == 0x646f
                   ) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = 1;
                  if (*(int *)pppppplVar1 != 0x61726170 ||
                      *(short *)((long)pppppplVar1 + 4) != 0x736d) {
                    iVar10 = 2;
                  }
                }
              }
              else {
                iVar10 = 2;
              }
              if (*ppppppplVar4 != (long ******)0x0) {
                _free();
              }
              ppppppplVar4 = ppppppplStack_210;
              if (iVar10 == 0) {
                if (ppppppplVar14 != (long *******)0x8000000000000000) {
                  ppppppplStack_140 = ppppppplStack_2c8;
                  ppppppplStack_138 = ppppppplStack_2e0;
                  ppppppplStack_270 = (long *******)&UNK_108cf32c0;
                  ppppppplStack_268 = (long *******)0x6;
                  ppppppplStack_1a0 = (long *******)&ppppppplStack_270;
                  ppppppplStack_198 = (long *******)&DAT_101bbc878;
                  ppppppplStack_1c0 = ppppppplVar6;
                  ppppppplStack_268 =
                       (long *******)
                       FUN_1088c6670(s_duplicate_field_____108ac2973,&ppppppplStack_1a0);
                  goto joined_r0x000101bb7e7c;
                }
                ppppppplStack_210 = (long *******)0x8000000000000005;
                if (ppppppplVar4 == (long *******)0x8000000000000005) {
                  ppppppplVar14 = (long *******)0x0;
                  ppppppplStack_140 = ppppppplStack_2c8;
                  ppppppplStack_138 = ppppppplStack_2e0;
                  ppppppplStack_1c0 = ppppppplVar6;
                  ppppppplStack_268 = (long *******)func_0x0001088c66fc(&UNK_108cde170,0x10);
                  goto joined_r0x000101bb7e7c;
                }
                ppppppplStack_1a0 = ppppppplVar4;
                ppppppplStack_190 = ppppppplStack_200;
                ppppppplStack_198 = ppppppplStack_208;
                ppppppplStack_180 = ppppppplStack_1f0;
                ppppppplStack_188 = ppppppplStack_1f8;
                ppppppplStack_170 = ppppppplStack_1e0;
                ppppppplStack_178 = ppppppplStack_1e8;
                ppppppplStack_160 = ppppppplStack_1d0;
                ppppppplStack_168 = ppppppplStack_1d8;
                if (ppppppplVar4 != (long *******)0x8000000000000003) {
                  ppppppplStack_140 = ppppppplStack_2c8;
                  ppppppplStack_138 = ppppppplStack_2e0;
                  ppppppplStack_1c0 = ppppppplVar6;
                  ppppppplVar4 = (long *******)
                                 FUN_1088c6060(&ppppppplStack_1a0,&ppppppplStack_270,&UNK_10b26a8b0)
                  ;
                  ppppppplVar14 = (long *******)0x0;
                  func_0x000101bbf344(&ppppppplStack_1a0);
                  ppppppplStack_268 = ppppppplVar4;
                  goto joined_r0x000101bb7e7c;
                }
                if (ppppppplStack_208 == (long *******)0x8000000000000000) {
                  ppppppplVar14 = (long *******)0x0;
                  ppppppplStack_138 = ppppppplStack_2e0;
                  ppppppplStack_140 = ppppppplStack_2c8;
                  ppppppplStack_1c0 = ppppppplVar6;
                  ppppppplStack_190 = ppppppplStack_200;
                  ppppppplStack_198 = ppppppplStack_208;
                  ppppppplStack_180 = ppppppplStack_1f0;
                  ppppppplStack_188 = ppppppplStack_1f8;
                  ppppppplStack_170 = ppppppplStack_1e0;
                  ppppppplStack_178 = ppppppplStack_1e8;
                  ppppppplStack_160 = ppppppplStack_1d0;
                  ppppppplStack_168 = ppppppplStack_1d8;
                  ppppppplStack_268 = ppppppplStack_200;
                  goto joined_r0x000101bb7e7c;
                }
                ppppppplStack_2d8 = ppppppplStack_1f8;
                ppppppplVar14 = ppppppplStack_208;
                ppppppplStack_2d0 = ppppppplStack_200;
                ppppppplStack_1a0 = ppppppplVar4;
              }
              else if (iVar10 == 1) {
                if (ppppppplVar7 != (long *******)0x8000000000000006) {
                  ppppppplStack_140 = ppppppplStack_2c8;
                  ppppppplStack_138 = ppppppplStack_2e0;
                  ppppppplStack_270 = (long *******)&UNK_108cf32c6;
                  ppppppplStack_268 = (long *******)0x6;
                  ppppppplStack_1a0 = (long *******)&ppppppplStack_270;
                  ppppppplStack_198 = (long *******)&DAT_101bbc878;
                  ppppppplStack_1c0 = ppppppplVar6;
                  ppppppplStack_268 =
                       (long *******)
                       FUN_1088c6670(s_duplicate_field_____108ac2973,&ppppppplStack_1a0);
                  goto joined_r0x000101bb7e7c;
                }
                ppppppplStack_210 = (long *******)0x8000000000000005;
                if (ppppppplVar4 == (long *******)0x8000000000000005) {
                  ppppppplStack_140 = ppppppplStack_2c8;
                  ppppppplStack_138 = ppppppplStack_2e0;
                  ppppppplStack_1c0 = ppppppplVar6;
                  ppppppplStack_268 = (long *******)func_0x0001088c66fc(&UNK_108cde170,0x10);
LAB_101bb7ea8:
                  ppppppplStack_270 = (long *******)0x8000000000000000;
                  goto LAB_101bb7cf0;
                }
                ppppppplStack_270 = ppppppplVar4;
                ppppppplStack_260 = ppppppplStack_200;
                ppppppplStack_268 = ppppppplStack_208;
                ppppppplStack_250 = ppppppplStack_1f0;
                ppppppplStack_258 = ppppppplStack_1f8;
                ppppppplStack_240 = ppppppplStack_1e0;
                ppppppplStack_248 = ppppppplStack_1e8;
                ppppppplStack_230 = ppppppplStack_1d0;
                ppppppplStack_238 = ppppppplStack_1d8;
                if (ppppppplVar4 == (long *******)0x8000000000000000) {
                  ppppppplStack_270 = ppppppplVar4;
                  func_0x000101bbf344(&ppppppplStack_270);
                  ppppppplVar7 = (long *******)0x8000000000000005;
                }
                else {
                  FUN_101bb0b38(&ppppppplStack_1a0,&ppppppplStack_270);
                  if (ppppppplStack_1a0 == (long *******)0x8000000000000005) {
                    ppppppplStack_140 = ppppppplStack_2c8;
                    ppppppplStack_138 = ppppppplStack_2e0;
                    ppppppplStack_268 = ppppppplStack_198;
                    ppppppplStack_1c0 = ppppppplVar6;
                    goto LAB_101bb7ea8;
                  }
                  ppppppplStack_2e0 = ppppppplStack_198;
                  ppppppplStack_e8 = ppppppplStack_188;
                  ppppppplStack_f0 = ppppppplStack_190;
                  ppppppplStack_d8 = ppppppplStack_178;
                  ppppppplStack_e0 = ppppppplStack_180;
                  ppppppplStack_c8 = ppppppplStack_168;
                  ppppppplStack_d0 = ppppppplStack_170;
                  ppppppplStack_c0 = ppppppplStack_160;
                  ppppppplVar7 = ppppppplStack_1a0;
                }
                ppppppplStack_128 = ppppppplStack_e8;
                ppppppplStack_130 = ppppppplStack_f0;
                ppppppplStack_118 = ppppppplStack_d8;
                ppppppplStack_120 = ppppppplStack_e0;
                ppppppplStack_108 = ppppppplStack_c8;
                ppppppplStack_110 = ppppppplStack_d0;
                ppppppplStack_100 = ppppppplStack_c0;
                ppppppplStack_2c8 = ppppppplVar7;
              }
              else {
                ppppppplStack_210 = (long *******)0x8000000000000005;
                if (ppppppplVar4 == (long *******)0x8000000000000005) {
                  ppppppplStack_140 = ppppppplStack_2c8;
                  ppppppplStack_138 = ppppppplStack_2e0;
                  ppppppplStack_1c0 = ppppppplVar6;
                  ppppppplStack_268 = (long *******)func_0x0001088c66fc(&UNK_108cde170,0x10);
                  goto joined_r0x000101bb7e7c;
                }
                ppppppplStack_1a0 = ppppppplVar4;
                ppppppplStack_190 = ppppppplStack_200;
                ppppppplStack_198 = ppppppplStack_208;
                ppppppplStack_180 = ppppppplStack_1f0;
                ppppppplStack_188 = ppppppplStack_1f8;
                ppppppplStack_170 = ppppppplStack_1e0;
                ppppppplStack_178 = ppppppplStack_1e8;
                ppppppplStack_160 = ppppppplStack_1d0;
                ppppppplStack_168 = ppppppplStack_1d8;
                func_0x000101bbf344(&ppppppplStack_1a0);
              }
              ppppppplVar8 = ppppppplVar13;
              ppppppplVar4 = ppppppplVar6;
            } while (ppppppplVar6 != ppppppplVar13);
            ppppppplStack_140 = ppppppplStack_2c8;
            ppppppplStack_138 = ppppppplStack_2e0;
            ppppppplStack_1c0 = ppppppplVar6;
            if (ppppppplVar14 == (long *******)0x8000000000000000) goto LAB_101bb7c9c;
            ppppppplStack_258 = (long *******)0x8000000000000005;
            if (ppppppplVar7 != (long *******)0x8000000000000006) {
              ppppppplStack_a8 = ppppppplStack_130;
              ppppppplStack_b0 = ppppppplStack_2e0;
              ppppppplStack_98 = ppppppplStack_120;
              ppppppplStack_a0 = ppppppplStack_128;
              ppppppplStack_88 = ppppppplStack_110;
              ppppppplStack_90 = ppppppplStack_118;
              ppppppplStack_78 = ppppppplStack_100;
              ppppppplStack_80 = ppppppplStack_108;
              ppppppplStack_258 = ppppppplVar7;
            }
            ppppppplStack_268 = ppppppplStack_2d0;
            ppppppplStack_260 = ppppppplStack_2d8;
            ppppppplStack_248 = ppppppplStack_a8;
            ppppppplStack_250 = ppppppplStack_b0;
            ppppppplStack_238 = ppppppplStack_98;
            ppppppplStack_240 = ppppppplStack_a0;
            ppppppplStack_228 = ppppppplStack_88;
            ppppppplStack_230 = ppppppplStack_90;
            ppppppplStack_218 = ppppppplStack_78;
            ppppppplStack_220 = ppppppplStack_80;
            ppppppplStack_158 = ppppppplStack_88;
            ppppppplStack_160 = ppppppplStack_90;
            ppppppplStack_148 = ppppppplStack_78;
            ppppppplStack_150 = ppppppplStack_80;
            ppppppplStack_178 = ppppppplStack_a8;
            ppppppplStack_180 = ppppppplStack_b0;
            ppppppplStack_168 = ppppppplStack_98;
            ppppppplStack_170 = ppppppplStack_a0;
            ppppppplStack_198 = ppppppplStack_2d0;
            ppppppplStack_190 = ppppppplStack_2d8;
            ppppppplStack_270 = ppppppplVar14;
            ppppppplStack_1a0 = ppppppplVar14;
            ppppppplStack_188 = ppppppplStack_258;
            if (ppppppplVar13 != ppppppplVar8) {
              ppppppplStack_268 = (long *******)FUN_1088c5bd8(ppppppplVar18,&UNK_10b26a900);
              ppppppplStack_270 = (long *******)0x8000000000000000;
              FUN_101bc36a0(&ppppppplStack_1a0);
            }
          }
          FUN_101bc013c(&ppppppplStack_210);
        }
        ppppppplVar13 = (long *******)0x8000000000000005;
      }
      if (((long)ppppppplVar16 < 0) &&
         ((undefined *)((ulong)ppppppplVar16 & 0xfffffffffffffffe) !=
          (undefined *)((long)ppppppplVar13 + -1))) {
        func_0x000101bbf344(&ppppppplStack_2b8);
      }
      if (ppppppplStack_270 != (long *******)0x8000000000000000) {
        param_1[5] = ppppppplStack_248;
        param_1[4] = ppppppplStack_250;
        param_1[7] = ppppppplStack_238;
        param_1[6] = ppppppplStack_240;
        param_1[9] = ppppppplStack_228;
        param_1[8] = ppppppplStack_230;
        param_1[0xb] = ppppppplStack_218;
        param_1[10] = ppppppplStack_220;
        param_1[1] = ppppppplStack_268;
        *param_1 = ppppppplStack_270;
        param_1[3] = ppppppplStack_258;
        param_1[2] = ppppppplStack_260;
        return;
      }
      ppppppplStack_1a0 = ppppppplStack_268;
      ppppppplStack_210 = (long *******)&ppppppplStack_1a0;
      ppppppplStack_208 =
           (long *******)
           __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
      ;
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                (s_<client_notification_should_enco_108ade586,&ppppppplStack_210,&UNK_10b26ae80);
      goto LAB_101bb81fc;
    }
    ppppppplStack_210 = (long *******)0xa;
    ppppppplVar4 = (long *******)func_0x000108a4a0f8(&ppppppplStack_210,0,0);
    if (ppppppplStack_208 != (long *******)0x8000000000000005) {
      func_0x000101bbf344(&ppppppplStack_198);
    }
  }
LAB_101bb81b0:
  ppppppplStack_210 = (long *******)&ppppppplStack_1a0;
  ppppppplStack_208 =
       (long *******)
       __ZN63__LT_serde_json__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17hb9af4dacd6e28db6E
  ;
  ppppppplStack_1a0 = ppppppplVar4;
  __ZN4core9panicking9panic_fmt17h6f8816b337451651E
            (s__client_notification_should_seri_108ade5c5,&ppppppplStack_210,&UNK_10b26ae98);
LAB_101bb81fc:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb8200);
  (*pcVar2)();
}

