
void FUN_10030214c(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong extraout_x8;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar8 = param_1[2];
  uVar7 = *(uint *)(param_1 + 3);
  bVar4 = param_2 == lVar8;
  bVar2 = uVar7 <= param_3;
  if (!bVar4) {
    bVar2 = lVar8 <= param_2;
  }
  if (bVar2) {
    plVar1 = param_1 + 4;
    lVar9 = *param_1;
    lVar3 = param_1[1];
    do {
      bVar4 = SCARRY8(lVar8,lVar9);
      lVar8 = lVar8 + lVar9;
      if (lVar9 < 0 != bVar4) {
LAB_100302290:
        FUN_107c05cac(&UNK_109bd7235,0x28,&UNK_10b4aef48);
        goto LAB_1003022a8;
      }
      uVar7 = uVar7 + (int)lVar3;
      if (999999999 < uVar7) {
        bVar4 = SCARRY8(lVar8,1);
        lVar8 = lVar8 + 1;
        if (bVar4) goto LAB_100302290;
        uVar7 = uVar7 + 0xc4653600;
      }
      param_1[2] = lVar8;
      *(uint *)(param_1 + 3) = uVar7;
      uVar6 = param_1[0x18];
      if (uVar6 == 10) {
        lVar11 = param_1[5];
        lVar10 = *plVar1;
        lVar13 = param_1[9];
        lVar12 = param_1[8];
        param_1[9] = param_1[0xb];
        param_1[8] = param_1[10];
        param_1[0xb] = param_1[0xd];
        param_1[10] = param_1[0xc];
        param_1[0xd] = param_1[0xf];
        param_1[0xc] = param_1[0xe];
        param_1[0xf] = param_1[0x11];
        param_1[0xe] = param_1[0x10];
        param_1[0x11] = param_1[0x13];
        param_1[0x10] = param_1[0x12];
        param_1[0x13] = param_1[0x15];
        param_1[0x12] = param_1[0x14];
        param_1[0x15] = param_1[0x17];
        param_1[0x14] = param_1[0x16];
        param_1[5] = param_1[7];
        *plVar1 = param_1[6];
        param_1[7] = lVar13;
        param_1[6] = lVar12;
        param_1[0x17] = lVar11;
        param_1[0x16] = lVar10;
        param_1[0x16] = 0;
        *(undefined1 *)(param_1 + 0x17) = 0;
      }
      else {
        if (9 < uVar6) goto LAB_1003022c0;
        plVar1[uVar6 * 2] = 0;
        *(undefined1 *)(plVar1 + uVar6 * 2 + 1) = 0;
        param_1[0x18] = param_1[0x18] + 1;
      }
      bVar4 = param_2 == lVar8;
      bVar2 = uVar7 <= param_3;
      if (!bVar4) {
        bVar2 = lVar8 <= param_2;
      }
    } while (bVar2);
  }
  bVar2 = param_3 <= uVar7;
  if (!bVar4) {
    bVar2 = param_2 <= lVar8;
  }
  if (bVar2) {
    return;
  }
LAB_1003022a8:
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108c7e575,0x2a,&UNK_10b1fdea8);
  uVar6 = extraout_x8;
LAB_1003022c0:
  puVar5 = (undefined8 *)FUN_107c05cd0(uVar6,10,&UNK_10b1fdec0);
  lVar8 = puVar5[0x14];
  if (lVar8 != 0) {
    if (*(char *)(puVar5 + 1) == '\0') {
      *puVar5 = 0;
      *(undefined1 *)(puVar5 + 1) = 1;
    }
    if (lVar8 != 1) {
      if (*(char *)(puVar5 + 3) == '\0') {
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 1;
      }
      if (lVar8 != 2) {
        if (*(char *)(puVar5 + 5) == '\0') {
          puVar5[4] = 0;
          *(undefined1 *)(puVar5 + 5) = 1;
        }
        if (lVar8 != 3) {
          if (*(char *)(puVar5 + 7) == '\0') {
            puVar5[6] = 0;
            *(undefined1 *)(puVar5 + 7) = 1;
          }
          if (lVar8 != 4) {
            if (*(char *)(puVar5 + 9) == '\0') {
              puVar5[8] = 0;
              *(undefined1 *)(puVar5 + 9) = 1;
            }
            if (lVar8 != 5) {
              if (*(char *)(puVar5 + 0xb) == '\0') {
                puVar5[10] = 0;
                *(undefined1 *)(puVar5 + 0xb) = 1;
              }
              if (lVar8 != 6) {
                if (*(char *)(puVar5 + 0xd) == '\0') {
                  puVar5[0xc] = 0;
                  *(undefined1 *)(puVar5 + 0xd) = 1;
                }
                if (lVar8 != 7) {
                  if (*(char *)(puVar5 + 0xf) == '\0') {
                    puVar5[0xe] = 0;
                    *(undefined1 *)(puVar5 + 0xf) = 1;
                  }
                  if (lVar8 != 8) {
                    if (*(char *)(puVar5 + 0x11) == '\0') {
                      puVar5[0x10] = 0;
                      *(undefined1 *)(puVar5 + 0x11) = 1;
                    }
                    if ((lVar8 != 9) && (*(char *)(puVar5 + 0x13) == '\0')) {
                      puVar5[0x12] = 0;
                      *(undefined1 *)(puVar5 + 0x13) = 1;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

