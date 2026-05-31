
void __ZN9codex_tui10chatwidget10ChatWidget11thread_name17hfc0fe09e4013fce3E
               (long *param_1,long param_2)

{
  long lVar1;
  long *extraout_x8;
  long lVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 0x4e40) == -0x8000000000000000) {
    *param_1 = -0x8000000000000000;
    return;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x4e48);
  lVar2 = *(long *)(param_2 + 0x4e50);
  if (lVar2 == 0) {
    lVar1 = 1;
LAB_10533bc2c:
    _memcpy(lVar1,uVar3,lVar2);
    *param_1 = lVar2;
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    return;
  }
  lVar1 = _malloc(lVar2);
  if (lVar1 != 0) goto LAB_10533bc2c;
  lVar2 = func_0x0001087c9084(1,lVar2);
  if (*(long *)(lVar2 + 0x4e88) == -0x8000000000000000) {
    *extraout_x8 = -0x8000000000000000;
    return;
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x4e90);
  lVar2 = *(long *)(lVar2 + 0x4e98);
  if (lVar2 != 0) {
    lVar1 = _malloc(lVar2);
    if (lVar1 != 0) goto LAB_10533bcb8;
    func_0x0001087c9084(1,lVar2);
  }
  lVar1 = 1;
LAB_10533bcb8:
  _memcpy(lVar1,uVar3,lVar2);
  *extraout_x8 = lVar2;
  extraout_x8[1] = lVar1;
  extraout_x8[2] = lVar2;
  return;
}

