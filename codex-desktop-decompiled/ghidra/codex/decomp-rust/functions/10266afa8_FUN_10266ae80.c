
void FUN_10266ae80(char *param_1,byte *param_2,long param_3,byte *param_4,long param_5)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte *pbVar5;
  long extraout_x1;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  byte *unaff_x21;
  undefined *unaff_x22;
  undefined1 auVar12 [16];
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (*param_1 != '\x01') {
    puVar7 = *(undefined8 **)(param_1 + 8);
    if (param_1[1] != '\x01') {
      *(long *)*puVar7 = *(long *)*puVar7 + 1;
    }
    param_1[1] = '\x02';
    plVar8 = (long *)*puVar7;
    lVar9 = *plVar8 + 1;
    do {
      lVar11 = 1 - lVar9;
      pbVar5 = param_2;
      lVar10 = param_3;
      do {
        if (lVar10 == 0) {
          *plVar8 = lVar9 + param_3 + 1;
          *(long *)*puVar7 = *(long *)*puVar7 + 1;
          plVar8 = (long *)*puVar7;
          lVar9 = *plVar8 + 1;
          do {
            lVar11 = 1 - lVar9;
            pbVar5 = param_4;
            lVar10 = param_5;
            do {
              if (lVar10 == 0) {
                *plVar8 = lVar9 + param_5 + 1;
                return;
              }
              param_4 = pbVar5 + 1;
              bVar2 = *pbVar5;
              lVar10 = lVar10 + -1;
              lVar11 = lVar11 + -1;
              pbVar5 = param_4;
            } while ((&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar2] == '\0');
            lVar9 = 6;
            if ((&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar2] != 'u') {
              lVar9 = 2;
            }
            lVar9 = lVar9 - lVar11;
            *plVar8 = lVar9;
            param_5 = lVar10;
          } while( true );
        }
        param_2 = pbVar5 + 1;
        bVar2 = *pbVar5;
        lVar10 = lVar10 + -1;
        lVar11 = lVar11 + -1;
        pbVar5 = param_2;
      } while ((&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar2] == '\0');
      lVar9 = 6;
      if ((&__ZN10serde_json3ser6ESCAPE17hfe5a33e4f869c410E)[bVar2] != 'u') {
        lVar9 = 2;
      }
      lVar9 = lVar9 - lVar11;
      *plVar8 = lVar9;
      param_3 = lVar10;
    } while( true );
  }
  puVar6 = &UNK_10b283158;
  auVar12 = __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d330d4,0x28);
  plVar8 = auVar12._0_8_;
  if (*plVar8 == -0x8000000000000000) {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d330d4,0x28,&UNK_10b283110);
    pbVar5 = param_4;
  }
  else {
    pbVar5 = param_4;
    lVar9 = _malloc(puVar6);
    unaff_x21 = param_4;
    unaff_x22 = puVar6;
    if (lVar9 != 0) {
      _memcpy(lVar9,auVar12._8_8_,puVar6);
      if ((plVar8[9] & 0x7fffffffffffffffU) != 0) {
        _free(plVar8[10]);
      }
      plVar8[10] = lVar9;
      plVar8[0xb] = (long)puVar6;
      plVar8[9] = -0x8000000000000000;
      lStack_100 = plVar8[0xb];
      lStack_108 = plVar8[10];
      puStack_110 = puVar6;
      if (param_5 == 0) {
        lStack_e8 = 1;
      }
      else {
        lStack_e8 = _malloc(param_5);
        if (lStack_e8 == 0) {
          func_0x0001087c9084(1,param_5);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10266b054);
          (*pcVar3)();
        }
      }
      _memcpy(lStack_e8,param_4,param_5);
      uStack_f8 = 0x8000000000000003;
      lStack_f0 = param_5;
      lStack_e0 = param_5;
      func_0x0001026ea188(auStack_b0,plVar8,&puStack_110,&uStack_f8);
      uStack_158 = uStack_a0;
      lStack_160 = lStack_a8;
      uStack_148 = uStack_90;
      uStack_150 = uStack_98;
      uStack_138 = uStack_80;
      uStack_140 = uStack_88;
      uStack_128 = uStack_70;
      uStack_130 = uStack_78;
      uStack_120 = uStack_68;
      if (lStack_a8 != -0x7ffffffffffffffb) {
        func_0x0001026a9020(&lStack_160);
      }
      return;
    }
  }
  uVar4 = func_0x0001087c9084(1,unaff_x22);
  _free(lStack_108);
  plVar8 = (long *)__Unwind_Resume(uVar4);
  FUN_1026bbe6c();
  if ((char)*plVar8 == '\x01') {
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d330d4,0x28,&UNK_10b283170);
    lVar9 = extraout_x1;
  }
  else {
    unaff_x21 = (byte *)plVar8[1];
    plVar8 = *(long **)unaff_x21;
    lVar9 = plVar8[2];
    if (*plVar8 != lVar9) goto LAB_10266b15c;
  }
  FUN_1088e879c(plVar8,lVar9,1,1,1);
  lVar9 = plVar8[2];
LAB_10266b15c:
  *(undefined1 *)(plVar8[1] + lVar9) = 0x3a;
  plVar8[2] = lVar9 + 1;
  plVar8 = *(long **)unaff_x21;
  if (*(long *)pbVar5 == -0x8000000000000000) {
    lVar9 = plVar8[2];
    if ((ulong)(*plVar8 - lVar9) < 4) {
      FUN_1088e879c(plVar8,lVar9,4,1,1);
      lVar9 = plVar8[2];
    }
    *(undefined4 *)(plVar8[1] + lVar9) = 0x6c6c756e;
    lVar9 = lVar9 + 4;
  }
  else {
    uVar4 = *(undefined8 *)(pbVar5 + 8);
    uVar1 = *(undefined8 *)(pbVar5 + 0x10);
    lVar9 = plVar8[2];
    if (*plVar8 == lVar9) {
      FUN_1088e879c(plVar8,lVar9,1,1,1);
      lVar9 = plVar8[2];
    }
    *(undefined1 *)(plVar8[1] + lVar9) = 0x22;
    plVar8[2] = lVar9 + 1;
    FUN_102670a0c(plVar8,uVar4,uVar1);
    lVar9 = plVar8[2];
    if (*plVar8 == lVar9) {
      FUN_1088e879c(plVar8,lVar9,1,1,1);
      lVar9 = plVar8[2];
    }
    *(undefined1 *)(plVar8[1] + lVar9) = 0x22;
    lVar9 = lVar9 + 1;
  }
  plVar8[2] = lVar9;
  return;
}

