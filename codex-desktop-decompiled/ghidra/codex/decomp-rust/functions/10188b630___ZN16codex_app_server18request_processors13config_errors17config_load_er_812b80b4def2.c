
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN16codex_app_server18request_processors13config_errors17config_load_error17h72e1af5fc7807553E
               (undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  ulong **ppuVar2;
  ulong *puVar3;
  code *pcVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  long *plVar11;
  undefined4 *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  ulong *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong **ppuStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined1 auStack_180 [16];
  ulong *puStack_170;
  ulong *puStack_168;
  ulong *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  ulong **ppuStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [16];
  ulong **ppuStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  puStack_1d8 = param_2;
  if ((*param_2 & 3) == 1) {
    auVar15 = *(undefined1 (*) [16])(*param_2 - 1);
    do {
      puVar13 = auVar15._0_8_;
      (**(code **)(auVar15._8_8_ + 0x38))(&ppuStack_c0,puVar13);
      if (puStack_b8 == (ulong *)0xf35ace3d65e603ab && ppuStack_c0 == (ulong **)0xd74f5a6f0dad856a)
      {
        pauVar6 = (undefined1 (*) [16])
                  (*
                  ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
                  )();
        if (pauVar6[1][0] == '\x01') {
          auStack_180 = *pauVar6;
        }
        else {
          auStack_180 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
          *(long *)(*pauVar6 + 8) = auStack_180._8_8_;
          pauVar6[1][0] = 1;
        }
        *(long *)*pauVar6 = auStack_180._0_8_ + 1;
        ppuStack_1b8 = (ulong **)0x0;
        puStack_1b0 = (ulong *)0x8;
        puStack_1a8 = (ulong *)0x0;
        lStack_198 = 0;
        puStack_1a0 = (ulong *)&UNK_108cea360;
        lStack_188 = 0;
        lStack_190 = 0;
        uVar14 = 6;
        puVar7 = (undefined8 *)_malloc(6);
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined2 *)((long)puVar7 + 4) = 0x6e6f;
          *(undefined4 *)puVar7 = 0x73616572;
          uStack_128 = 6;
          uStack_118 = 6;
          puStack_120 = puVar7;
          puVar8 = (ulong *)_malloc(0x11);
          if (puVar8 == (ulong *)0x0) {
            func_0x0001087c9084(1,0x11);
            goto LAB_10188bb98;
          }
          *(undefined1 *)(puVar8 + 2) = 0x73;
          puVar8[1] = 0x746e656d65726975;
          *puVar8 = 0x71655264756f6c63;
          puStack_108 = (ulong *)0x11;
          ppuStack_110 = (ulong **)0x8000000000000003;
          puStack_f8 = (ulong *)0x11;
          puStack_100 = puVar8;
          FUN_101aa29a0(&ppuStack_c0,&ppuStack_1b8,&uStack_128,&ppuStack_110);
          puStack_168 = puStack_b0;
          puStack_170 = puStack_b8;
          lStack_158 = lStack_a0;
          puStack_160 = puStack_a8;
          lStack_148 = lStack_90;
          lStack_150 = lStack_98;
          lStack_138 = lStack_80;
          lStack_140 = lStack_88;
          uStack_130 = uStack_78;
          if (puStack_b8 != (ulong *)0x8000000000000005) {
            func_0x00010194dc28(&puStack_170);
          }
          uVar14 = 9;
          puVar7 = (undefined8 *)_malloc(9);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined1 *)(puVar7 + 1) = 0x65;
            *puVar7 = 0x646f43726f727265;
            uStack_128 = 9;
            uStack_118 = 9;
            cVar1 = *(char *)((long)puVar13 + 0x1c);
            puStack_170 = (ulong *)CONCAT71(puStack_170._1_7_,cVar1);
            ppuStack_110 = &puStack_170;
            puStack_108 = (ulong *)&DAT_1017f3e2c;
            puStack_120 = puVar7;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&ppuStack_c0,s__108add0bf,&ppuStack_110);
            puVar3 = puStack_b0;
            puVar8 = puStack_b8;
            ppuVar2 = ppuStack_c0;
            if (puStack_b0 == (ulong *)0x0) {
              puVar9 = (ulong *)0x1;
            }
            else {
              puVar9 = (ulong *)_malloc(puStack_b0);
              if (puVar9 == (ulong *)0x0) {
                func_0x0001087c9084(1,puVar3);
                goto LAB_10188bb98;
              }
            }
            _memcpy(puVar9,puVar8,puVar3);
            ppuStack_110 = (ulong **)0x8000000000000003;
            puStack_108 = puVar3;
            puStack_f8 = puVar3;
            puStack_100 = puVar9;
            FUN_101aa29a0(&ppuStack_c0,&ppuStack_1b8,&uStack_128,&ppuStack_110);
            puStack_168 = puStack_b0;
            puStack_170 = puStack_b8;
            lStack_158 = lStack_a0;
            puStack_160 = puStack_a8;
            lStack_148 = lStack_90;
            lStack_150 = lStack_98;
            lStack_138 = lStack_80;
            lStack_140 = lStack_88;
            uStack_130 = uStack_78;
            if (puStack_b8 != (ulong *)0x8000000000000005) {
              func_0x00010194dc28(&puStack_170);
            }
            if (ppuVar2 != (ulong **)0x0) {
              _free(puVar8);
            }
            uVar14 = 6;
            puVar7 = (undefined8 *)_malloc(6);
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined2 *)((long)puVar7 + 4) = 0x6c69;
              *(undefined4 *)puVar7 = 0x61746564;
              uStack_128 = 6;
              uStack_118 = 6;
              ppuStack_c0 = (ulong **)0x0;
              puStack_b8 = (ulong *)0x1;
              puStack_b0 = (ulong *)0x0;
              ppuStack_110 = &puStack_170;
              puStack_108 = (ulong *)&DAT_102a025ac;
              puStack_170 = puVar13;
              puStack_120 = puVar7;
              iVar5 = __ZN4core3fmt5write17h64810b21425781ecE
                                (&ppuStack_c0,&UNK_10b25d2c0,s__108af0050,&ppuStack_110);
              puVar3 = puStack_b0;
              puVar8 = puStack_b8;
              ppuVar2 = ppuStack_c0;
              if (iVar5 != 0) {
                func_0x000108a07a3c(&UNK_108cf1f7a,0x37,&ppuStack_110,&UNK_10b268ec0,&UNK_10b268df0)
                ;
                goto LAB_10188bb98;
              }
              if (puStack_b0 == (ulong *)0x0) {
                lVar10 = 1;
              }
              else {
                lVar10 = _malloc(puStack_b0);
                if (lVar10 == 0) {
                  func_0x0001087c9084(1,puVar3);
                  goto LAB_10188bb98;
                }
              }
              _memcpy(lVar10,puVar8,puVar3);
              ppuStack_110 = (ulong **)0x8000000000000003;
              puStack_108 = puVar3;
              puStack_f8 = puVar3;
              puStack_100 = (ulong *)lVar10;
              FUN_101aa29a0(&ppuStack_c0,&ppuStack_1b8,&uStack_128,&ppuStack_110);
              puStack_168 = puStack_b0;
              puStack_170 = puStack_b8;
              lStack_158 = lStack_a0;
              puStack_160 = puStack_a8;
              lStack_148 = lStack_90;
              lStack_150 = lStack_98;
              lStack_138 = lStack_80;
              lStack_140 = lStack_88;
              uStack_130 = uStack_78;
              if (puStack_b8 != (ulong *)0x8000000000000005) {
                func_0x00010194dc28(&puStack_170);
              }
              if (ppuVar2 != (ulong **)0x0) {
                _free(puVar8);
              }
              lStack_e8 = lStack_190;
              lStack_f0 = lStack_198;
              lStack_e0 = lStack_188;
              puStack_108 = puStack_1b0;
              ppuStack_110 = ppuStack_1b8;
              puStack_f8 = puStack_1a0;
              puStack_100 = puStack_1a8;
              auStack_d8 = auStack_180;
              if ((puVar13[3] & 1) != 0) {
                puStack_b0 = (ulong *)(ulong)*(ushort *)((long)puVar13 + 0x1a);
                puStack_b8 = (ulong *)0x0;
                ppuStack_c0 = (ulong **)0x8000000000000002;
                plVar11 = (long *)func_0x000105dc7340(&UNK_108cedcd3,10,&ppuStack_110);
                func_0x00010194dc28();
                plVar11[3] = (long)puStack_a8;
                plVar11[2] = (long)puStack_b0;
                plVar11[5] = lStack_98;
                plVar11[4] = lStack_a0;
                plVar11[7] = lStack_88;
                plVar11[6] = lStack_90;
                plVar11[8] = lStack_80;
                plVar11[1] = (long)puStack_b8;
                *plVar11 = (long)ppuStack_c0;
              }
              if (cVar1 == '\0') {
                puVar12 = (undefined4 *)_malloc(7);
                if (puVar12 == (undefined4 *)0x0) {
                  func_0x0001087c9084(1,7);
                  goto LAB_10188bb98;
                }
                *(undefined4 *)((long)puVar12 + 3) = 0x6e69676f;
                *puVar12 = 0x6f6c6572;
                puStack_b8 = (ulong *)0x7;
                ppuStack_c0 = (ulong **)0x8000000000000003;
                puStack_a8 = (ulong *)0x7;
                puStack_b0 = (ulong *)puVar12;
                puVar7 = (undefined8 *)func_0x000105dc7340(&UNK_108ceae04,6,&ppuStack_110);
                func_0x00010194dc28();
                puVar7[3] = puStack_a8;
                puVar7[2] = puStack_b0;
                puVar7[5] = lStack_98;
                puVar7[4] = lStack_a0;
                puVar7[7] = lStack_88;
                puVar7[6] = lStack_90;
                puVar7[8] = lStack_80;
                puVar7[1] = puStack_b8;
                *puVar7 = ppuStack_c0;
              }
              lStack_98 = lStack_e8;
              lStack_a0 = lStack_f0;
              lStack_88 = auStack_d8._0_8_;
              lStack_90 = lStack_e0;
              lStack_80 = auStack_d8._8_8_;
              puStack_b8 = puStack_108;
              ppuStack_c0 = ppuStack_110;
              puStack_a8 = puStack_f8;
              puStack_b0 = puStack_100;
              goto LAB_10188b620;
            }
          }
        }
        func_0x0001087c9084(1,uVar14);
LAB_10188bb98:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10188bb9c);
        (*pcVar4)();
      }
      auVar15 = (**(code **)(auVar15._8_8_ + 0x30))(puVar13);
    } while (auVar15._0_8_ != 0);
  }
  ppuStack_c0 = (ulong **)0x8000000000000005;
LAB_10188b620:
  ppuStack_110 = &puStack_1d8;
  puStack_108 = (ulong *)&DAT_10192d978;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&uStack_1d0,s_failed_to_load_configuration__108add62d,&ppuStack_110);
  param_1[1] = uStack_1c8;
  *param_1 = uStack_1d0;
  param_1[5] = puStack_b0;
  param_1[4] = puStack_b8;
  param_1[7] = lStack_a0;
  param_1[6] = puStack_a8;
  param_1[9] = lStack_90;
  param_1[8] = lStack_98;
  param_1[0xb] = lStack_80;
  param_1[10] = lStack_88;
  param_1[2] = uStack_1c0;
  param_1[3] = ppuStack_c0;
  param_1[0xc] = 0xffffffffffff80a8;
  return;
}

