
void FUN_100f24408(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined1 uVar8;
  int *piVar9;
  char *pcVar10;
  byte extraout_w9;
  byte extraout_w9_00;
  byte bVar11;
  int *unaff_x19;
  int *unaff_x20;
  undefined1 auVar12 [16];
  undefined1 uStack_51;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  pbVar2 = (byte *)*param_2;
  if (pbVar2 == (byte *)param_2[1]) {
    *param_1 = 0x17;
    return;
  }
  *param_2 = (long)(pbVar2 + 0x40);
  param_2[2] = (long)(pbVar2 + 0x20);
  param_2[3] = param_2[3] + 1;
  bVar11 = *pbVar2;
  if (0xc < bVar11) {
    if (bVar11 == 0xd) {
      unaff_x19 = *(int **)(pbVar2 + 8);
      unaff_x20 = *(int **)(pbVar2 + 0x10);
      if ((unaff_x20 != (int *)0x5) ||
         (bVar11 = *(byte *)(unaff_x19 + 1), *unaff_x19 != 0x74656d5f || bVar11 != 0x61)) {
        uVar8 = 0xd;
        goto LAB_100f24644;
      }
    }
    else {
      if (bVar11 == 0xe) {
        pcVar10 = *(char **)(pbVar2 + 0x10);
        unaff_x19 = *(int **)(pbVar2 + 0x18);
        if (unaff_x19 == (int *)0x0) {
          unaff_x20 = (int *)0x1;
        }
        else {
          if ((((unaff_x19 == (int *)0x5) && (*pcVar10 == '_')) && (pcVar10[1] == 'm')) &&
             (((pcVar10[2] == 'e' && (pcVar10[3] == 't')) && (pcVar10[4] == 'a'))))
          goto LAB_100f245e0;
          unaff_x20 = (int *)_malloc(unaff_x19);
          if (unaff_x20 == (int *)0x0) {
LAB_100f24690:
            func_0x0001087c9084(1,unaff_x19);
LAB_100f2469c:
            auVar12 = func_0x0001087c9084(1,5);
            plVar7 = auVar12._8_8_;
            puVar5 = auVar12._0_8_;
            pbVar2 = (byte *)*plVar7;
            if (pbVar2 == (byte *)plVar7[1]) {
              puVar5[1] = 3;
              *puVar5 = 0;
              return;
            }
            *plVar7 = (long)(pbVar2 + 0x40);
            plVar7[2] = (long)(pbVar2 + 0x20);
            plVar7[3] = plVar7[3] + 1;
            bVar11 = *pbVar2;
            if (bVar11 < 0xd) {
              if (bVar11 == 1) {
                uVar8 = 1;
                if (pbVar2[1] != 1) {
                  uVar8 = 2;
                }
                uVar1 = 0;
                if (pbVar2[1] != 0) {
                  uVar1 = uVar8;
                }
                puVar5[1] = uVar1;
                *puVar5 = 0;
                return;
              }
              if (bVar11 == 4) {
                uVar8 = 1;
                if (*(long *)(pbVar2 + 8) != 1) {
                  uVar8 = 2;
                }
                uVar1 = 0;
                if (*(long *)(pbVar2 + 8) != 0) {
                  uVar1 = uVar8;
                }
                puVar5[1] = uVar1;
                *puVar5 = 0;
                return;
              }
              if (bVar11 != 0xc) {
LAB_100f24920:
                uStack_48 = 0x100f246a8;
                puStack_50 = &stack0xfffffffffffffff0;
                uVar6 = FUN_108855c40(pbVar2,&uStack_51,&UNK_10b2146e8);
                *(undefined8 *)(puVar5 + 8) = uVar6;
                *puVar5 = 1;
                return;
              }
              if (*(long *)(pbVar2 + 0x18) != 6) goto LAB_100f2490c;
              piVar9 = *(int **)(pbVar2 + 0x10);
            }
            else {
              if (bVar11 != 0xd) {
                if (bVar11 == 0xe) {
                  if (*(long *)(pbVar2 + 0x18) != 6) goto LAB_100f2490c;
                  pcVar10 = *(char **)(pbVar2 + 0x10);
                  cVar4 = *pcVar10;
                  if (cVar4 == 'p') {
                    if (((pcVar10[1] != 'a') || (pcVar10[2] != 'r')) ||
                       ((pcVar10[3] != 'a' || (pcVar10[4] != 'm')))) goto LAB_100f2490c;
                    cVar4 = pcVar10[5];
joined_r0x000100f248f4:
                    if (cVar4 == 's') {
                      puVar5[1] = 1;
                      *puVar5 = 0;
                      return;
                    }
                    goto LAB_100f2490c;
                  }
                }
                else {
                  if (bVar11 != 0xf) goto LAB_100f24920;
                  if (*(long *)(pbVar2 + 0x10) != 6) goto LAB_100f2490c;
                  pcVar10 = *(char **)(pbVar2 + 8);
                  cVar4 = *pcVar10;
                  if (cVar4 == 'p') {
                    if (((pcVar10[1] != 'a') || (pcVar10[2] != 'r')) ||
                       ((pcVar10[3] != 'a' || (pcVar10[4] != 'm')))) goto LAB_100f2490c;
                    cVar4 = pcVar10[5];
                    goto joined_r0x000100f248f4;
                  }
                }
                if (((((cVar4 != 'm') || (pcVar10[1] != 'e')) || (pcVar10[2] != 't')) ||
                    ((pcVar10[3] != 'h' || (pcVar10[4] != 'o')))) || (pcVar10[5] != 'd')) {
LAB_100f2490c:
                  puVar5[1] = 2;
                  *puVar5 = 0;
                  return;
                }
                goto LAB_100f248a8;
              }
              if (*(long *)(pbVar2 + 0x10) != 6) goto LAB_100f2490c;
              piVar9 = *(int **)(pbVar2 + 8);
            }
            if (*piVar9 != 0x6874656d || (short)piVar9[1] != 0x646f) {
              uVar8 = 1;
              if (*piVar9 != 0x61726170 || (short)piVar9[1] != 0x736d) {
                uVar8 = 2;
              }
              puVar5[1] = uVar8;
              *puVar5 = 0;
              return;
            }
LAB_100f248a8:
            puVar5[1] = 0;
            *puVar5 = 0;
            return;
          }
        }
        _memcpy(unaff_x20,pcVar10,unaff_x19);
        uVar8 = 0xe;
        bVar11 = extraout_w9;
        goto LAB_100f24644;
      }
      if (bVar11 != 0xf) goto LAB_100f24668;
      unaff_x19 = *(int **)(pbVar2 + 8);
      unaff_x20 = *(int **)(pbVar2 + 0x10);
      if (((unaff_x20 != (int *)0x5) || ((char)*unaff_x19 != '_')) ||
         ((*(char *)((long)unaff_x19 + 1) != 'm' ||
          (((*(char *)((long)unaff_x19 + 2) != 'e' || (*(char *)((long)unaff_x19 + 3) != 't')) ||
           ((char)unaff_x19[1] != 'a')))))) {
        uVar8 = 0xf;
        goto LAB_100f24644;
      }
    }
LAB_100f245e0:
    uVar8 = 0x16;
    goto LAB_100f24644;
  }
  if (bVar11 == 1) {
    bVar11 = pbVar2[1];
    uVar8 = 1;
    goto LAB_100f24644;
  }
  if (bVar11 == 4) {
    unaff_x19 = *(int **)(pbVar2 + 8);
    uVar8 = 4;
    goto LAB_100f24644;
  }
  if (bVar11 != 0xc) {
LAB_100f24668:
    uVar6 = FUN_108855c40(pbVar2,&uStack_31,&UNK_10b215208);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *param_1 = 0x18;
    return;
  }
  piVar9 = *(int **)(pbVar2 + 0x10);
  unaff_x19 = *(int **)(pbVar2 + 0x18);
  if (unaff_x19 == (int *)0x0) {
    unaff_x20 = (int *)0x1;
LAB_100f2462c:
    _memcpy(unaff_x20,piVar9,unaff_x19);
    bVar11 = extraout_w9_00;
  }
  else {
    if (unaff_x19 != (int *)0x5) {
      unaff_x20 = (int *)_malloc(unaff_x19);
      if (unaff_x20 == (int *)0x0) goto LAB_100f24690;
      goto LAB_100f2462c;
    }
    bVar11 = *(byte *)(piVar9 + 1);
    if (*piVar9 == 0x74656d5f && bVar11 == 0x61) goto LAB_100f245e0;
    unaff_x20 = (int *)_malloc(5);
    if (unaff_x20 == (int *)0x0) goto LAB_100f2469c;
    iVar3 = *piVar9;
    bVar11 = *(byte *)(piVar9 + 1);
    *(byte *)(unaff_x20 + 1) = bVar11;
    *unaff_x20 = iVar3;
  }
  uVar8 = 0xc;
LAB_100f24644:
  *param_1 = uVar8;
  param_1[1] = bVar11;
  *(int **)(param_1 + 8) = unaff_x19;
  *(int **)(param_1 + 0x10) = unaff_x20;
  *(int **)(param_1 + 0x18) = unaff_x19;
  return;
}

