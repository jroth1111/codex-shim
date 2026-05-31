
void FUN_10150d790(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_3 == 0) {
    puVar6 = (undefined8 *)_malloc(0x430);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
      *(undefined2 *)((long)puVar6 + 0x42a) = 0;
      if (*(short *)((long)param_2 + 0x42a) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        plVar15 = param_2 + 0x29;
        plVar16 = param_2;
        do {
          lVar1 = plVar16[2];
          lVar17 = plVar16[3];
          if (lVar17 == 0) {
            lVar7 = 1;
          }
          else {
            lVar7 = _malloc(lVar17);
            if (lVar7 == 0) {
              func_0x0001087c9084(1,lVar17);
              goto LAB_10150dbe0;
            }
          }
          _memcpy(lVar7,lVar1,lVar17);
          uStack_88 = 0;
          puStack_90 = &UNK_108c56c70;
          uStack_78 = 0;
          uStack_80 = 0;
          puStack_a8 = (undefined8 *)0x0;
          lStack_a0 = 8;
          lStack_98 = 0;
          FUN_1011a27dc(&puStack_a8,plVar15 + -7);
          lStack_158 = lStack_a0;
          puStack_160 = puStack_a8;
          puStack_148 = puStack_90;
          lStack_150 = lStack_98;
          uStack_138 = uStack_80;
          uStack_140 = uStack_88;
          uStack_130 = uStack_78;
          lStack_120 = plVar15[1];
          lStack_128 = *plVar15;
          uVar2 = *(ushort *)((long)puVar6 + 0x42a);
          if (10 < uVar2) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f19,0x20,&UNK_10b238100);
            goto LAB_10150dbe0;
          }
          *(ushort *)((long)puVar6 + 0x42a) = uVar2 + 1;
          uVar14 = uVar14 + 1;
          plVar13 = puVar6 + (ulong)uVar2 * 3 + 1;
          *plVar13 = lVar17;
          plVar13[1] = lVar7;
          plVar13[2] = lVar17;
          puVar4 = puVar6 + (ulong)uVar2 * 9 + 0x22;
          puVar4[5] = uStack_80;
          puVar4[4] = uStack_88;
          puVar4[7] = lStack_128;
          puVar4[6] = uStack_78;
          puVar4[8] = lStack_120;
          puVar4[1] = lStack_a0;
          *puVar4 = puStack_a8;
          puVar4[3] = puStack_90;
          puVar4[2] = lStack_98;
          plVar15 = plVar15 + 9;
          plVar16 = plVar16 + 3;
        } while (uVar14 < *(ushort *)((long)param_2 + 0x42a));
      }
      param_1[1] = 0;
      *param_1 = puVar6;
      param_1[2] = uVar14;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x430);
    plVar16 = param_2;
LAB_10150dbc4:
    func_0x0001087c9084(1,plVar16);
  }
  else {
    FUN_10150d790(&puStack_a8,param_2[0x86]);
    lVar1 = lStack_a0;
    puVar6 = puStack_a8;
    if (puStack_a8 == (undefined8 *)0x0) {
      func_0x000108a07a20(&UNK_10b24e788);
    }
    else {
      puVar4 = (undefined8 *)_malloc(0x490);
      if (puVar4 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x490);
      }
      else {
        *puVar4 = 0;
        *(undefined2 *)((long)puVar4 + 0x42a) = 0;
        puVar4[0x86] = puVar6;
        if (lVar1 != -1) {
          *puVar6 = puVar4;
          *(undefined2 *)(puVar6 + 0x85) = 0;
          puStack_a8 = puVar4;
          lStack_a0 = lVar1 + 1;
          lVar17 = lStack_98;
          if (*(short *)((long)param_2 + 0x42a) != 0) {
            uVar14 = 0;
            plVar15 = param_2 + 0x29;
            plVar13 = param_2;
            do {
              lVar7 = plVar13[2];
              plVar16 = (long *)plVar13[3];
              if (plVar16 == (long *)0x0) {
                lVar5 = 1;
              }
              else {
                lVar5 = _malloc(plVar16);
                if (lVar5 == 0) goto LAB_10150dbc4;
              }
              _memcpy(lVar5,lVar7,plVar16);
              uStack_140 = 0;
              puStack_148 = &UNK_108c56c70;
              uStack_130 = 0;
              uStack_138 = 0;
              puStack_160 = (undefined8 *)0x0;
              lStack_158 = 8;
              lStack_150 = 0;
              FUN_1011a27dc(&puStack_160,plVar15 + -7);
              lStack_108 = lStack_158;
              puStack_110 = puStack_160;
              puStack_f8 = puStack_148;
              lStack_100 = lStack_150;
              uStack_e8 = uStack_138;
              uStack_f0 = uStack_140;
              uStack_e0 = uStack_130;
              lStack_d0 = plVar15[1];
              lStack_d8 = *plVar15;
              FUN_10150d790(&puStack_c0,param_2[uVar14 + 0x87],param_3 + -1);
              lVar7 = lStack_b0;
              if (puStack_c0 != (undefined8 *)0x0) {
                puVar6 = puStack_c0;
                if (lStack_b8 == lVar1) goto LAB_10150d920;
LAB_10150db1c:
                puVar10 = &UNK_10b238118;
                puVar8 = &UNK_108cc5f39;
                uVar9 = 0x30;
LAB_10150db48:
                lStack_98 = lVar17;
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar8,uVar9,puVar10);
                goto LAB_10150dbe0;
              }
              puVar6 = (undefined8 *)_malloc(0x430);
              if (puVar6 == (undefined8 *)0x0) {
                lStack_98 = lVar17;
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x430);
                goto LAB_10150dbe0;
              }
              *puVar6 = 0;
              *(undefined2 *)((long)puVar6 + 0x42a) = 0;
              if (lVar1 != 0) goto LAB_10150db1c;
LAB_10150d920:
              uVar2 = *(ushort *)((long)puVar4 + 0x42a);
              if (10 < uVar2) {
                puVar8 = &UNK_108cc5f19;
                uVar9 = 0x20;
                puVar10 = &UNK_10b238130;
                goto LAB_10150db48;
              }
              uVar14 = uVar14 + 1;
              *(ushort *)((long)puVar4 + 0x42a) = uVar2 + 1;
              plVar11 = puVar4 + (ulong)uVar2 * 3 + 1;
              *plVar11 = (long)plVar16;
              plVar11[1] = lVar5;
              plVar11[2] = (long)plVar16;
              puVar12 = puVar4 + (ulong)uVar2 * 9 + 0x22;
              puVar12[5] = uStack_e8;
              puVar12[4] = uStack_f0;
              puVar12[7] = lStack_d8;
              puVar12[6] = uStack_e0;
              puVar12[8] = lStack_d0;
              puVar12[1] = lStack_108;
              *puVar12 = puStack_110;
              puVar12[3] = puStack_f8;
              puVar12[2] = lStack_100;
              puVar4[(ulong)uVar2 + 0x87] = puVar6;
              *puVar6 = puVar4;
              *(ushort *)(puVar6 + 0x85) = uVar2 + 1;
              lVar17 = lVar17 + lVar7 + 1;
              plVar15 = plVar15 + 9;
              plVar13 = plVar13 + 3;
            } while (uVar14 < *(ushort *)((long)param_2 + 0x42a));
          }
          lStack_98 = lVar17;
          param_1[1] = lStack_a0;
          *param_1 = puStack_a8;
          param_1[2] = lStack_98;
          return;
        }
        func_0x000108a07a20(&UNK_10b238148);
      }
    }
  }
LAB_10150dbe0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10150dbe4);
  (*pcVar3)();
}

