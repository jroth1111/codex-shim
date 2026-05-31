
long * FUN_101769cfc(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long *plVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined *puVar9;
  ulong uVar10;
  char *pcVar11;
  short *psVar12;
  long lVar13;
  long lVar14;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  long lStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  undefined1 uStack_41;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  uVar10 = *(ulong *)(param_2 + 0x28);
  if (uVar10 < uVar2) {
    lVar13 = *(long *)(param_2 + 0x18);
    do {
      bVar4 = *(byte *)(lVar13 + uVar10);
      if (0x20 < bVar4 || (1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
        if (bVar4 != 0x6e) goto LAB_101769de0;
        uVar1 = uVar10 + 1;
        *(ulong *)(param_2 + 0x28) = uVar1;
        bVar5 = uVar1 < uVar2;
        if (uVar2 < uVar1) {
          uVar2 = uVar10 + 1;
        }
        if (bVar5) {
          cVar3 = *(char *)(lVar13 + uVar10 + 1);
          *(ulong *)(param_2 + 0x28) = uVar10 + 2;
          if (cVar3 == 'u') {
            if (uVar10 + 2 == uVar2) goto LAB_101769ee8;
            cVar3 = *(char *)(lVar13 + uVar10 + 2);
            *(ulong *)(param_2 + 0x28) = uVar10 + 3;
            if (cVar3 == 'l') {
              if (uVar10 + 3 == uVar2) goto LAB_101769ee8;
              cVar3 = *(char *)(lVar13 + uVar10 + 3);
              *(ulong *)(param_2 + 0x28) = uVar10 + 4;
              if (cVar3 == 'l') {
                lVar13 = -0x8000000000000000;
                plVar6 = param_1;
                goto LAB_101769e74;
              }
            }
          }
          lStack_60 = 9;
        }
        else {
LAB_101769ee8:
          lStack_60 = 5;
        }
        plVar6 = (long *)func_0x000108875ac8(param_2,&lStack_60);
        lVar13 = -0x7fffffffffffffff;
        param_1[1] = (long)plVar6;
        goto LAB_101769e74;
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(param_2 + 0x28) = uVar10;
    } while (uVar2 != uVar10);
  }
  else {
LAB_101769de0:
    if (uVar10 < uVar2) {
      do {
        bVar4 = *(byte *)(*(long *)(param_2 + 0x18) + uVar10);
        if (0x22 < bVar4) {
LAB_101769f08:
          lVar13 = FUN_1088757ac(param_2,&uStack_41,&UNK_10b256518);
LAB_101769f20:
          plVar6 = (long *)FUN_108875b20(lVar13,param_2);
          plStack_58 = plVar6;
          goto LAB_101769e6c;
        }
        if ((1L << ((ulong)bVar4 & 0x3f) & 0x100002600U) == 0) {
          if ((ulong)bVar4 != 0x22) goto LAB_101769f08;
          *(ulong *)(param_2 + 0x28) = uVar10 + 1;
          *(undefined8 *)(param_2 + 0x10) = 0;
          plVar6 = (long *)__ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17h6b23184da41e050cE
                                     (&lStack_60,(long *)(param_2 + 0x18),param_2);
          if (lStack_60 != 2) {
            if (lStack_50 == 0) {
              lVar13 = 1;
              plVar6 = (long *)_memcpy(1,plStack_58,0);
              lStack_50 = 0;
LAB_101769ec8:
              *param_1 = lStack_50;
              param_1[1] = lVar13;
              param_1[2] = lStack_50;
              return plVar6;
            }
            lVar13 = _malloc(lStack_50);
            if (lVar13 == 0) {
              pbVar7 = (byte *)func_0x0001087c9084(1,lStack_50);
              uStack_68 = 0x101769f44;
              bVar4 = *pbVar7;
              lStack_80 = param_2;
              plStack_78 = param_1;
              puStack_70 = &stack0xfffffffffffffff0;
              if (bVar4 - 0xc < 2) {
                pbVar8 = (byte *)0x0;
              }
              else {
                if (bVar4 != 0x15) {
                  func_0x000108876058(&uStack_a0,pbVar7);
                  plVar6 = (long *)func_0x000108a4a50c(&uStack_a0,&UNK_10b2564e8,&UNK_10b2564c8);
                  return plVar6;
                }
                if (*(long *)(pbVar7 + 0x18) != 1) {
                  uStack_a0 = 0xb;
                  puVar9 = &UNK_10b2564b8;
                  goto LAB_10176a0e8;
                }
                pbVar7 = *(byte **)(pbVar7 + 0x10);
                pbVar8 = pbVar7 + 0x20;
                bVar4 = *pbVar7;
              }
              if (bVar4 < 0xd) {
                if (bVar4 == 1) {
                  uStack_98 = (ulong)pbVar7[1];
                }
                else {
                  if (bVar4 != 4) {
                    if (bVar4 != 0xc) {
LAB_10176a14c:
                      puVar9 = &UNK_10b256698;
                      goto LAB_10176a15c;
                    }
                    psVar12 = *(short **)(pbVar7 + 0x10);
                    lVar13 = *(long *)(pbVar7 + 0x18);
                    goto LAB_10176a090;
                  }
                  uStack_98 = *(ulong *)(pbVar7 + 8);
                }
                if (uStack_98 != 0) {
                  uStack_a0 = 1;
                  puVar9 = &UNK_10b2573e0;
LAB_10176a0e8:
                  plVar6 = (long *)__ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_13invalid_value17h60b1f9f2e2975d54E
                                             (&uStack_a0,puVar9,&UNK_10b2564c8);
                  return plVar6;
                }
              }
              else if (bVar4 == 0xd) {
                psVar12 = *(short **)(pbVar7 + 8);
                lVar13 = *(long *)(pbVar7 + 0x10);
LAB_10176a090:
                if ((lVar13 != 3) || (*psVar12 != 0x5352 || (char)psVar12[1] != 'A')) {
                  plVar6 = (long *)FUN_1088755e4(psVar12,lVar13,&UNK_10b256aa8,1);
                  return plVar6;
                }
              }
              else {
                if (bVar4 == 0xe) {
                  lVar14 = 0x18;
                  lVar13 = 0x10;
                }
                else {
                  if (bVar4 != 0xf) goto LAB_10176a14c;
                  lVar14 = 0x10;
                  lVar13 = 8;
                }
                pcVar11 = *(char **)(pbVar7 + lVar13);
                if ((((*(long *)(pbVar7 + lVar14) != 3) || (*pcVar11 != 'R')) || (pcVar11[1] != 'S')
                    ) || (pcVar11[2] != 'A')) {
                  __ZN5alloc6string6String15from_utf8_lossy17hfb27054e23a2c9beE(&uStack_a0,pcVar11);
                  plVar6 = (long *)FUN_1088755e4(uStack_98,uStack_90,&UNK_10b256aa8,1);
                  if ((CONCAT71(uStack_9f,uStack_a0) & 0x7fffffffffffffff) == 0) {
                    return plVar6;
                  }
                  _free(uStack_98);
                  return plVar6;
                }
              }
              if (pbVar8 == (byte *)0x0) {
                return (long *)0x0;
              }
              if (*pbVar8 == 0x12) {
                return (long *)0x0;
              }
              puVar9 = &UNK_10b2564f8;
              pbVar7 = pbVar8;
LAB_10176a15c:
              plVar6 = (long *)FUN_108876268(pbVar7,&uStack_81,puVar9);
              return plVar6;
            }
            plVar6 = (long *)_memcpy(lVar13,plStack_58,lStack_50);
            if (lStack_50 != -0x8000000000000000) goto LAB_101769ec8;
            goto LAB_101769f20;
          }
          goto LAB_101769e6c;
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(param_2 + 0x28) = uVar10;
      } while (uVar2 != uVar10);
    }
  }
  lStack_60 = 5;
  plVar6 = (long *)FUN_10887574c(param_2,&lStack_60);
  plStack_58 = plVar6;
LAB_101769e6c:
  lVar13 = -0x7fffffffffffffff;
  param_1[1] = (long)plStack_58;
LAB_101769e74:
  *param_1 = lVar13;
  return plVar6;
}

