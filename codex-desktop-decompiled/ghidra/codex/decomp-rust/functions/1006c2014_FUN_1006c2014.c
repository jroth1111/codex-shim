
void FUN_1006c2014(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  long lVar12;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar1 = param_2[1];
  lVar3 = *param_2;
  do {
    while( true ) {
      while( true ) {
        if (lVar3 == lVar1) {
          *param_1 = -0x8000000000000000;
          return;
        }
        lVar12 = lVar3 + 0xc0;
        *param_2 = lVar12;
        __ZN10codex_core13event_mapping15parse_turn_item17h72e5b9e25cfa0563E(&lStack_220,lVar3);
        lVar7 = lStack_1f0;
        lVar6 = lStack_1f8;
        lVar5 = lStack_200;
        uVar4 = uStack_210;
        lVar9 = lStack_218;
        lVar3 = lVar12;
        if (lStack_220 != -0x7ffffffffffffff5) break;
        *param_1 = -0x8000000000000000;
      }
      if (lStack_220 == -0x8000000000000000) break;
      *param_1 = -0x8000000000000000;
      FUN_100df5b9c(&lStack_220);
    }
    func_0x00010491957c(&lStack_80,&lStack_218);
    param_1[1] = lStack_78;
    *param_1 = lStack_80;
    param_1[2] = lStack_70;
    if (lVar9 != 0) {
      _free(uVar4);
    }
    if (lVar7 != 0) {
      lVar12 = 0;
      do {
        pbVar10 = (byte *)(lVar6 + lVar12 * 0x38);
        bVar2 = *pbVar10;
        if (bVar2 < 2) {
          if (bVar2 == 0) {
            if (*(long *)(pbVar10 + 8) != 0) {
              _free(*(undefined8 *)(pbVar10 + 0x10));
            }
            lVar9 = *(long *)(pbVar10 + 0x28);
            lVar8 = *(long *)(pbVar10 + 0x30);
            if (lVar8 != 0) {
              puVar11 = (undefined8 *)(lVar9 + 8);
              do {
                if ((puVar11[-1] & 0x7fffffffffffffff) != 0) {
                  _free(*puVar11);
                }
                puVar11 = puVar11 + 5;
                lVar8 = lVar8 + -1;
              } while (lVar8 != 0);
            }
            if (*(long *)(pbVar10 + 0x20) != 0) goto LAB_1006c20ec;
          }
          else {
            if (bVar2 == 1) goto LAB_1006c2150;
LAB_1006c212c:
            if (*(long *)(pbVar10 + 8) != 0) {
              _free(*(undefined8 *)(pbVar10 + 0x10));
            }
            if (*(long *)(pbVar10 + 0x20) != 0) {
              lVar9 = *(long *)(pbVar10 + 0x28);
              goto LAB_1006c20ec;
            }
          }
        }
        else {
          if (bVar2 != 2) goto LAB_1006c212c;
LAB_1006c2150:
          if (*(long *)(pbVar10 + 8) == 0) goto LAB_1006c20f4;
          lVar9 = *(long *)(pbVar10 + 0x10);
LAB_1006c20ec:
          _free(lVar9);
        }
LAB_1006c20f4:
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar7);
    }
    if (lVar5 != 0) {
      _free(lVar6);
    }
    if (*param_1 != -0x8000000000000000) {
      return;
    }
  } while( true );
}

