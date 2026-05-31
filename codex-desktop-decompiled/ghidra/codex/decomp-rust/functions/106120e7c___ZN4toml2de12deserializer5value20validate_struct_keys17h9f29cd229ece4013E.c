
void __ZN4toml2de12deserializer5value20validate_struct_keys17h9f29cd229ece4013E
               (undefined8 *param_1,long param_2,undefined8 ****param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  long lVar11;
  undefined8 ***pppuVar12;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 ***pppuStack_e0;
  undefined8 ***pppuStack_d8;
  undefined8 ***pppuStack_d0;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 **ppuStack_78;
  
  pppuStack_118 = *(undefined8 ****)(param_2 + 8);
  pppuStack_110 = pppuStack_118 + *(long *)(param_2 + 0x10) * 0x12;
  pppuStack_108 = param_3;
  uStack_100 = param_4;
  func_0x00010611e640(&pppuStack_98,&pppuStack_118);
  pppuVar2 = pppuStack_90;
  pppuVar1 = pppuStack_98;
  if ((undefined8 ****)pppuStack_98 == (undefined8 ****)0x8000000000000001) {
    pppuStack_130 = (undefined8 ****)0x0;
    ppppuVar8 = (undefined8 ****)0x8;
LAB_106120fec:
    *param_1 = 2;
    goto LAB_106120ff4;
  }
  ppppuVar4 = (undefined8 ****)_malloc(0xa0);
  if (ppppuVar4 == (undefined8 ****)0x0) {
    func_0x0001087c9084(8,0xa0);
    goto LAB_1061211ec;
  }
  lVar10 = 0;
  ppppuVar4[3] = (undefined8 ***)ppuStack_80;
  ppppuVar4[2] = pppuStack_88;
  ppppuVar4[4] = (undefined8 ***)ppuStack_78;
  *ppppuVar4 = pppuVar1;
  ppppuVar4[1] = pppuVar2;
  pppuStack_e0 = (undefined8 ****)0x4;
  pppuStack_d0 = (undefined8 ****)0x1;
  pppuStack_b8 = pppuStack_110;
  pppuStack_c0 = pppuStack_118;
  uStack_a8 = uStack_100;
  pppuStack_b0 = pppuStack_108;
  pppuStack_d8 = ppppuVar4;
  while (pppuVar1 = pppuStack_d0, func_0x00010611e640(&pppuStack_98,&pppuStack_c0),
        pppuVar12 = pppuStack_90, pppuVar2 = pppuStack_98, ppppuVar9 = (undefined8 ****)pppuStack_d0
        , ppppuVar8 = (undefined8 ****)pppuStack_d8,
        (undefined8 ****)pppuStack_98 != (undefined8 ****)0x8000000000000001) {
    if (pppuVar1 == pppuStack_e0) {
      FUN_108a8c380(&pppuStack_e0,pppuVar1,1,8,0x28);
      ppppuVar4 = (undefined8 ****)pppuStack_d8;
    }
    *(undefined8 ****)((long)ppppuVar4 + lVar10 + 0x28) = pppuVar2;
    *(undefined8 ****)((long)ppppuVar4 + lVar10 + 0x30) = pppuVar12;
    *(undefined8 ***)((long)ppppuVar4 + lVar10 + 0x48) = ppuStack_78;
    *(undefined8 ***)((long)ppppuVar4 + lVar10 + 0x40) = ppuStack_80;
    *(undefined8 ****)((long)ppppuVar4 + lVar10 + 0x38) = pppuStack_88;
    pppuStack_d0 = (undefined8 ***)((long)pppuVar1 + 1);
    lVar10 = lVar10 + 0x28;
  }
  pppuStack_130 = pppuStack_e0;
  if ((undefined8 ****)pppuStack_d0 == (undefined8 ****)0x0) goto LAB_106120fec;
  lVar11 = (long)pppuStack_d0 << 4;
  lVar10 = _malloc(lVar11);
  if (lVar10 == 0) {
    func_0x0001087c9084(8,lVar11);
    goto LAB_1061211ec;
  }
  if (ppppuVar9 == (undefined8 ****)0x1) {
    ppppuVar5 = (undefined8 ****)0x0;
LAB_10612105c:
    lVar11 = (long)ppppuVar9 - (long)ppppuVar5;
    puVar6 = (undefined8 *)(lVar10 + (long)ppppuVar5 * 0x10 + 8);
    ppppuVar4 = ppppuVar8 + (long)ppppuVar5 * 5 + 2;
    do {
      pppuVar1 = *ppppuVar4;
      puVar6[-1] = ppppuVar4[-1];
      *puVar6 = pppuVar1;
      puVar6 = puVar6 + 2;
      ppppuVar4 = ppppuVar4 + 5;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    ppppuVar5 = (undefined8 ****)((ulong)ppppuVar9 & 0x3fffffffffffffe);
    ppppuVar4 = ppppuVar8 + 7;
    puVar6 = (undefined8 *)(lVar10 + 0x10);
    ppppuVar7 = ppppuVar5;
    do {
      pppuVar12 = ppppuVar4[-6];
      pppuVar1 = ppppuVar4[-1];
      pppuVar2 = *ppppuVar4;
      puVar6[-1] = ppppuVar4[-5];
      puVar6[-2] = pppuVar12;
      *puVar6 = pppuVar1;
      puVar6[1] = pppuVar2;
      ppppuVar4 = ppppuVar4 + 10;
      ppppuVar7 = (undefined8 ****)((long)ppppuVar7 + -2);
      puVar6 = puVar6 + 4;
    } while (ppppuVar7 != (undefined8 ****)0x0);
    if (ppppuVar9 != ppppuVar5) goto LAB_10612105c;
  }
  func_0x0001061267c4(&pppuStack_98,lVar10,ppppuVar9);
  pppuStack_d8 = pppuStack_90;
  pppuStack_e0 = pppuStack_98;
  pppuStack_d0 = pppuStack_88;
  func_0x0001061267c4(&pppuStack_98,param_3,param_4);
  pppuStack_b8 = pppuStack_90;
  pppuStack_c0 = pppuStack_98;
  pppuStack_b0 = pppuStack_88;
  pppuStack_98 = &pppuStack_e0;
  pppuStack_90 = (undefined8 ***)&DAT_1061269e4;
  pppuStack_88 = &pppuStack_c0;
  ppuStack_80 = (undefined8 **)&DAT_1061269e4;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&lStack_f8,s_unexpected_keys_in_table____avai_108b385d9,&pppuStack_98);
  if ((undefined8 ****)pppuStack_c0 != (undefined8 ****)0x0) {
    _free(pppuStack_b8);
  }
  if ((undefined8 ****)pppuStack_e0 != (undefined8 ****)0x0) {
    _free(pppuStack_d8);
  }
  _free(lVar10);
  pppuVar1 = ppppuVar8[3];
  pppuVar2 = ppppuVar8[4];
  if (lStack_e8 == 0) {
    lVar10 = 1;
    _memcpy(1,uStack_f0,0);
  }
  else {
    lVar10 = _malloc(lStack_e8);
    if (lVar10 == 0) {
      func_0x0001087c9084(1,lStack_e8);
LAB_1061211ec:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1061211f0);
      (*pcVar3)();
    }
    _memcpy(lVar10,uStack_f0,lStack_e8);
  }
  if (lStack_f8 != 0) {
    _free(uStack_f0);
  }
  *param_1 = 1;
  param_1[1] = pppuVar1;
  param_1[2] = pppuVar2;
  param_1[3] = lStack_e8;
  param_1[4] = lVar10;
  param_1[5] = lStack_e8;
  param_1[6] = 0;
  param_1[7] = 8;
  ppppuVar4 = ppppuVar8 + 1;
  param_1[8] = 0;
  param_1[9] = 0;
  do {
    if (((ulong)ppppuVar4[-1] & 0x7fffffffffffffff) != 0) {
      _free(*ppppuVar4);
    }
    ppppuVar4 = ppppuVar4 + 5;
    ppppuVar9 = (undefined8 ****)((long)ppppuVar9 + -1);
  } while (ppppuVar9 != (undefined8 ****)0x0);
LAB_106120ff4:
  if ((undefined8 ****)pppuStack_130 != (undefined8 ****)0x0) {
    _free(ppppuVar8);
  }
  return;
}

