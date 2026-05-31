
void __ZN19codex_network_proxy4mitm23apply_mitm_hook_actions17h125a0115d5686b3dE
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 in_x5;
  long in_x6;
  undefined8 in_x7;
  undefined8 *extraout_x8;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined6 uStack_196;
  long lStack_110;
  undefined1 auStack_f8 [24];
  long lStack_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  long lStack_c0;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined1 uStack_a0;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  char cStack_70;
  undefined1 uStack_61;
  
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      lVar13 = *(long *)(param_2 + 8);
      lVar14 = *(long *)(param_2 + 0x10) << 5;
      do {
        FUN_1047ec944(&lStack_90,param_1,lVar13);
        if (cStack_70 != '\x02') {
          (**(code **)(lStack_90 + 0x20))
                    (&uStack_78,CONCAT71(uStack_87,uStack_88),CONCAT71(uStack_7f,uStack_80));
        }
        lVar13 = lVar13 + 0x20;
        lVar14 = lVar14 + -0x20;
      } while (lVar14 != 0);
    }
    lVar13 = *(long *)(param_2 + 0x28);
    if (lVar13 != 0) {
      lVar14 = 0;
      lVar12 = *(long *)(param_2 + 0x20);
      do {
        lVar1 = lVar12 + lVar14;
        if (*(undefined8 **)(lVar1 + 0x48) == (undefined8 *)0x0) {
          uStack_d8 = *(undefined1 *)(lVar1 + 0x50);
          lStack_e0 = 0;
        }
        else {
          (*(code *)**(undefined8 **)(lVar1 + 0x48))
                    (&lStack_90,lVar1 + 0x60,*(undefined8 *)(lVar1 + 0x50),
                     *(undefined8 *)(lVar1 + 0x58));
          lStack_c0 = CONCAT17(uStack_80,uStack_87);
          uStack_b8 = uStack_7f;
          uStack_b1 = uStack_78;
          uStack_b0 = uStack_77;
          lStack_e0 = lStack_90;
          uStack_d8 = uStack_88;
        }
        uStack_cf = uStack_b8;
        uStack_d7 = (undefined7)lStack_c0;
        uStack_d0 = (undefined1)((ulong)lStack_c0 >> 0x38);
        uStack_c8 = uStack_b1;
        uStack_c7 = uStack_b0;
        lVar1 = lVar12 + lVar14;
        (*(code *)**(undefined8 **)(lVar1 + 0x20))
                  (&lStack_90,lVar1 + 0x38,*(undefined8 *)(lVar1 + 0x28),
                   *(undefined8 *)(lVar1 + 0x30));
        uStack_a0 = *(undefined1 *)(lVar1 + 0x40);
        uStack_b8 = (undefined7)CONCAT71(uStack_87,uStack_88);
        uStack_b1 = (undefined1)((uint7)uStack_87 >> 0x30);
        lStack_c0 = lStack_90;
        uStack_b0 = (undefined7)CONCAT71(uStack_7f,uStack_80);
        uStack_a9 = (undefined1)((uint7)uStack_7f >> 0x30);
        func_0x0001047eb8e4(&lStack_90,param_1,&lStack_e0,&lStack_c0);
        lVar1 = lStack_90;
        if (cStack_70 == '\x03') {
          puVar10 = &UNK_10b332fc0;
          puVar11 = &UNK_10b32f9a8;
          puVar9 = &uStack_61;
          uVar4 = func_0x000108a07a3c(&UNK_108e471ea,0x17,puVar9,&UNK_10b332fc0);
          if (lStack_e0 != 0) {
            puVar9 = (undefined1 *)CONCAT71(uStack_cf,uStack_d0);
            (**(code **)(lStack_e0 + 0x20))(&uStack_c8,CONCAT71(uStack_d7,uStack_d8));
          }
          __Unwind_Resume(uVar4);
          auVar17 = func_0x000108a07bc4();
          puVar5 = auVar17._0_8_;
          if ((auVar17._8_8_ & 1) == 0) {
            uVar4 = puVar5[0xc];
            uVar16 = puVar5[0xf];
            uVar15 = puVar5[0xe];
            extraout_x8[0xd] = puVar5[0xd];
            extraout_x8[0xc] = uVar4;
            extraout_x8[0xf] = uVar16;
            extraout_x8[0xe] = uVar15;
            uVar4 = puVar5[0x10];
            extraout_x8[0x11] = puVar5[0x11];
            extraout_x8[0x10] = uVar4;
            uVar4 = puVar5[4];
            uVar16 = puVar5[7];
            uVar15 = puVar5[6];
            extraout_x8[5] = puVar5[5];
            extraout_x8[4] = uVar4;
            extraout_x8[7] = uVar16;
            extraout_x8[6] = uVar15;
            uVar16 = puVar5[8];
            uVar15 = puVar5[0xb];
            uVar4 = puVar5[10];
            extraout_x8[9] = puVar5[9];
            extraout_x8[8] = uVar16;
            extraout_x8[0xb] = uVar15;
            extraout_x8[10] = uVar4;
            uVar16 = *puVar5;
            uVar15 = puVar5[3];
            uVar4 = puVar5[2];
            extraout_x8[1] = puVar5[1];
            *extraout_x8 = uVar16;
            extraout_x8[3] = uVar15;
            extraout_x8[2] = uVar4;
            return;
          }
          uVar4 = puVar5[0x10];
          uVar15 = puVar5[0x11];
          if (lStack_110 == 0) {
            lVar13 = 1;
            _memcpy(1,in_x7,0);
            if (puVar11 != (undefined *)0x0) goto LAB_1047a3e70;
LAB_1047a3ef8:
            lVar14 = 1;
            _memcpy(1,puVar10,puVar11);
            if (in_x6 != 0) goto LAB_1047a3e94;
LAB_1047a3f10:
            lVar12 = 1;
          }
          else {
            lVar13 = _malloc(lStack_110);
            if (lVar13 == 0) {
              func_0x0001087c9084(1,lStack_110);
              goto LAB_1047a4030;
            }
            _memcpy(lVar13,in_x7,lStack_110);
            if (puVar11 == (undefined *)0x0) goto LAB_1047a3ef8;
LAB_1047a3e70:
            lVar14 = _malloc(puVar11);
            if (lVar14 == 0) {
              func_0x0001087c9084(1,puVar11);
              goto LAB_1047a4030;
            }
            _memcpy(lVar14,puVar10,puVar11);
            if (in_x6 == 0) goto LAB_1047a3f10;
LAB_1047a3e94:
            lVar12 = _malloc(in_x6);
            if (lVar12 == 0) {
              func_0x0001087c9084(1,in_x6);
              goto LAB_1047a4030;
            }
          }
          _memcpy(lVar12,in_x5,in_x6);
          uVar2 = *(undefined2 *)(puVar5 + 0xf);
          puVar6 = (undefined8 *)_malloc(0x10);
          if (puVar6 == (undefined8 *)0x0) {
            func_0x0001087c906c(8,0x10);
          }
          else {
            *puVar6 = uVar4;
            puVar6[1] = uVar15;
            plVar7 = (long *)_malloc(0x50);
            if (plVar7 == (long *)0x0) {
              func_0x0001087c906c(8,0x50);
            }
            else {
              plVar7[5] = (long)puVar11;
              plVar7[4] = lVar14;
              plVar7[7] = lVar12;
              plVar7[6] = in_x6;
              plVar7[9] = CONCAT62(uStack_196,uVar2);
              plVar7[8] = in_x6;
              plVar7[1] = lVar13;
              *plVar7 = lStack_110;
              plVar7[3] = (long)puVar11;
              plVar7[2] = lStack_110;
              puVar8 = (undefined8 *)_malloc(0x20);
              if (puVar8 != (undefined8 *)0x0) {
                puVar8[1] = plVar7;
                *puVar8 = puVar6;
                puVar8[3] = puVar9;
                puVar8[2] = 0;
                uVar4 = puVar5[8];
                uVar16 = puVar5[0xb];
                uVar15 = puVar5[10];
                extraout_x8[9] = puVar5[9];
                extraout_x8[8] = uVar4;
                extraout_x8[0xb] = uVar16;
                extraout_x8[10] = uVar15;
                uVar4 = puVar5[0xc];
                uVar16 = puVar5[0xf];
                uVar15 = puVar5[0xe];
                extraout_x8[0xd] = puVar5[0xd];
                extraout_x8[0xc] = uVar4;
                extraout_x8[0xf] = uVar16;
                extraout_x8[0xe] = uVar15;
                uVar4 = *puVar5;
                uVar16 = puVar5[3];
                uVar15 = puVar5[2];
                extraout_x8[1] = puVar5[1];
                *extraout_x8 = uVar4;
                extraout_x8[3] = uVar16;
                extraout_x8[2] = uVar15;
                uVar4 = puVar5[4];
                uVar16 = puVar5[7];
                uVar15 = puVar5[6];
                extraout_x8[5] = puVar5[5];
                extraout_x8[4] = uVar4;
                extraout_x8[7] = uVar16;
                extraout_x8[6] = uVar15;
                extraout_x8[0x10] = puVar8;
                extraout_x8[0x11] = &UNK_10b32fc40;
                return;
              }
              func_0x0001087c906c(8,0x20);
            }
          }
LAB_1047a4030:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1047a4034);
          (*pcVar3)();
        }
        if (cStack_70 != '\x02') {
          (**(code **)(lStack_90 + 0x20))
                    (auStack_f8,CONCAT71(uStack_87,uStack_88),CONCAT71(uStack_7f,uStack_80));
        }
        lStack_110 = lVar1;
        lVar14 = lVar14 + 0x68;
      } while (lVar13 * 0x68 - lVar14 != 0);
    }
  }
  return;
}

