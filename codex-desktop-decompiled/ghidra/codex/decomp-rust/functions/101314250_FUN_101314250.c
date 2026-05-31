
void FUN_101314250(undefined1 *param_1,byte *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  bVar3 = *param_2;
  if (bVar3 < 0xd) {
    if (bVar3 == 1) {
      bVar3 = param_2[1];
      if (2 < bVar3) {
        bVar3 = 3;
      }
      goto LAB_101314480;
    }
    if (bVar3 != 4) {
      if (bVar3 != 0xc) goto LAB_1013144c4;
      lVar8 = *(long *)(param_2 + 8);
      plVar7 = *(long **)(param_2 + 0x10);
      lVar6 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0xc) {
        if (*plVar7 != 0x5f6e695f646e6966 || (int)plVar7[1] != 0x65676170) goto LAB_1013143fc;
        param_1[1] = 2;
        *param_1 = 0;
      }
      else if (lVar6 == 9) {
        if (*plVar7 == 0x6761705f6e65706f && (char)plVar7[1] == 'e') {
          param_1[1] = 1;
          *param_1 = 0;
        }
        else {
LAB_1013143fc:
          param_1[1] = 3;
          *param_1 = 0;
        }
      }
      else {
        if ((lVar6 != 6) || ((int)*plVar7 != 0x72616573 || *(short *)((long)plVar7 + 4) != 0x6863))
        goto LAB_1013143fc;
        param_1[1] = 0;
        *param_1 = 0;
      }
joined_r0x0001013142d0:
      if (lVar8 == 0) {
        return;
      }
      goto _free;
    }
    uVar5 = *(ulong *)(param_2 + 8);
    if (2 < uVar5) {
      uVar5 = 3;
    }
    param_1[1] = (char)uVar5;
LAB_101314484:
    *param_1 = 0;
  }
  else {
    if (bVar3 == 0xd) {
      plVar7 = *(long **)(param_2 + 8);
      lVar8 = *(long *)(param_2 + 0x10);
      if (lVar8 == 0xc) {
        if (*plVar7 != 0x5f6e695f646e6966 || (int)plVar7[1] != 0x65676170) goto LAB_10131447c;
        bVar3 = 2;
      }
      else if (lVar8 == 9) {
        if (*plVar7 != 0x6761705f6e65706f || (char)plVar7[1] != 'e') goto LAB_10131447c;
        bVar3 = 1;
      }
      else if ((lVar8 == 6) &&
              ((int)*plVar7 == 0x72616573 && *(short *)((long)plVar7 + 4) == 0x6863)) {
        bVar3 = 0;
      }
      else {
LAB_10131447c:
        bVar3 = 3;
      }
LAB_101314480:
      param_1[1] = bVar3;
      goto LAB_101314484;
    }
    if (bVar3 == 0xe) {
      lVar8 = *(long *)(param_2 + 8);
      plVar7 = *(long **)(param_2 + 0x10);
      func_0x000100adaca4(param_1,plVar7,*(undefined8 *)(param_2 + 0x18));
      goto joined_r0x0001013142d0;
    }
    if (bVar3 != 0xf) {
LAB_1013144c4:
      uVar2 = FUN_108855b04(param_2,&stack0xffffffffffffffdf,&UNK_10b20db00);
      *(undefined8 *)(param_1 + 8) = uVar2;
      *param_1 = 1;
      return;
    }
    func_0x000100adaca4(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  bVar3 = *param_2;
  uVar4 = (uint)bVar3;
  if (bVar3 < 0xd) {
    if (bVar3 < 0xc) {
      return;
    }
    if (uVar4 == 0xc) {
LAB_100e07840:
      if (*(long *)(param_2 + 8) == 0) {
        return;
      }
      plVar7 = *(long **)(param_2 + 0x10);
      goto _free;
    }
LAB_100e078c0:
    plVar7 = *(long **)(param_2 + 0x10);
    plVar1 = plVar7;
    for (lVar8 = *(long *)(param_2 + 0x18); lVar8 != 0; lVar8 = lVar8 + -1) {
      FUN_100e077ec(plVar1);
      FUN_100e077ec(plVar1 + 4);
      plVar1 = plVar1 + 8;
    }
  }
  else {
    if (bVar3 < 0x11) {
      if (uVar4 - 0xf < 2 || uVar4 == 0xd) {
        return;
      }
      if (uVar4 == 0xe) goto LAB_100e07840;
      goto LAB_100e078c0;
    }
    if (uVar4 < 0x13) {
      if (uVar4 == 0x11) {
        plVar7 = *(long **)(param_2 + 8);
        FUN_100e077ec(plVar7);
        goto _free;
      }
      if (uVar4 == 0x12) {
        return;
      }
      goto LAB_100e078c0;
    }
    if (uVar4 == 0x13) {
      plVar7 = *(long **)(param_2 + 8);
      FUN_100e077ec(plVar7);
      goto _free;
    }
    if (uVar4 != 0x14) goto LAB_100e078c0;
    plVar7 = *(long **)(param_2 + 0x10);
    lVar8 = *(long *)(param_2 + 0x18) + 1;
    plVar1 = plVar7;
    while (lVar8 = lVar8 + -1, lVar8 != 0) {
      FUN_100e077ec(plVar1);
      plVar1 = plVar1 + 4;
    }
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
_free:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_10b61b0a8)(plVar7);
  return;
}

