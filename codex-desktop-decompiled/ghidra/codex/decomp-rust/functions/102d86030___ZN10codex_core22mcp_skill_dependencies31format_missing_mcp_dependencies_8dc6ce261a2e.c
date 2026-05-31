
void __ZN10codex_core22mcp_skill_dependencies31format_missing_mcp_dependencies17h0a38aecc36ee3eb9E
               (undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long *plStack_70;
  ulong uStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plStack_70 = (long *)*param_2;
  lStack_58 = (long)plStack_70 + param_2[1] + 1;
  plStack_60 = plStack_70 + 1;
  lVar3 = *plStack_70;
  uStack_68 = CONCAT17(-(-1 < lVar3),
                       CONCAT16(-(-1 < (char)((ulong)lVar3 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar3 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar3 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar3 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar3 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar3 >> 8)),-(-1 < (char)lVar3)))))))) &
              0x8080808080808080;
  lStack_50 = param_2[3];
  func_0x000102f7ec2c(&lStack_88,&plStack_70);
  if (1 < uStack_78) {
    if (uStack_78 < 0x15) {
      FUN_103403884(lStack_80,uStack_78);
    }
    else {
      __ZN4core5slice4sort6stable14driftsort_main17h4ffe93e4230e1abbE
                (lStack_80,uStack_78,&uStack_48);
    }
  }
  FUN_1034c1c4c(&uStack_48,lStack_80,uStack_78,&UNK_108d5811e,2);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  if (uStack_78 != 0) {
    puVar2 = (undefined8 *)(lStack_80 + 8);
    uVar1 = uStack_78;
    do {
      if (puVar2[-1] != 0) {
        _free(*puVar2);
      }
      puVar2 = puVar2 + 3;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if (lStack_88 != 0) {
    _free(lStack_80);
  }
  return;
}

