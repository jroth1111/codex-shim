
void FUN_105dc8e24(long *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  uVar5 = *(ulong *)(param_2 + 0x28);
  if (uVar5 < uVar1) {
    do {
      bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar5);
      if (0x3a < bVar2) {
LAB_105dc8f90:
        uStack_48 = 6;
        goto LAB_105dc8edc;
      }
      if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
        if ((ulong)bVar2 != 0x3a) goto LAB_105dc8f90;
        uVar5 = uVar5 + 1;
        *(ulong *)(param_2 + 0x28) = uVar5;
        if (uVar1 <= uVar5) goto LAB_105dc8ed8;
        goto LAB_105dc8eb0;
      }
      uVar5 = uVar5 + 1;
      *(ulong *)(param_2 + 0x28) = uVar5;
    } while (uVar1 != uVar5);
  }
  uStack_48 = 3;
  goto LAB_105dc8edc;
joined_r0x000105dc8f3c:
  if (lVar3 != 0) goto LAB_105dc8f68;
  func_0x0001087c9084(1,lStack_38);
LAB_105dc8f4c:
  if (lStack_38 == 0) goto LAB_105dc8f64;
  lVar3 = _malloc(lStack_38);
  goto joined_r0x000105dc8f3c;
LAB_105dc8f64:
  lVar3 = 1;
LAB_105dc8f68:
  _memcpy(lVar3,lStack_40,lStack_38);
  *param_1 = lVar3;
  param_1[1] = lStack_38;
  return;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(ulong *)(param_2 + 0x28) = uVar5;
    if (uVar1 == uVar5) break;
LAB_105dc8eb0:
    bVar2 = *(byte *)(*(long *)(param_2 + 0x18) + uVar5);
    if (0x22 < bVar2) {
LAB_105dc8f98:
      uVar4 = func_0x000108a49304(param_2,&uStack_48);
      lVar3 = func_0x000108a4a02c(uVar4,param_2);
      goto LAB_105dc8eec;
    }
    if ((1L << ((ulong)bVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)bVar2 != 0x22) goto LAB_105dc8f98;
      *(ulong *)(param_2 + 0x28) = uVar5 + 1;
      *(undefined8 *)(param_2 + 0x10) = 0;
      __ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_9parse_str17ha2d4764bf8c46c27E
                (&uStack_48);
      if (uStack_48 == 2) {
        param_1[1] = lStack_40;
        goto LAB_105dc8f20;
      }
      if ((uStack_48 & 1) == 0) goto LAB_105dc8f4c;
      if (lStack_38 == 0) goto LAB_105dc8f64;
      lVar3 = _malloc(lStack_38);
      goto joined_r0x000105dc8f3c;
    }
  }
LAB_105dc8ed8:
  uStack_48 = 5;
LAB_105dc8edc:
  lVar3 = func_0x000108a492a4(param_2,&uStack_48);
LAB_105dc8eec:
  param_1[1] = lVar3;
LAB_105dc8f20:
  *param_1 = 0;
  return;
}

