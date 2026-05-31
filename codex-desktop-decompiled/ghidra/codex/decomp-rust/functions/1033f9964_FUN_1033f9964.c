
void FUN_1033f9964(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  ulong uStack_58;
  long *plStack_50;
  ulong uStack_48;
  
  puVar1 = (ulong *)param_2[1];
  uVar2 = param_2[2];
  cVar5 = __ZN17codex_core_skills9injection18tool_kind_for_path17h3bfd9ca2a9242447E(puVar1,uVar2);
  if (cVar5 != '\x02') {
    if (*param_2 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(puVar1);
    return;
  }
  lVar7 = *param_2;
  uVar6 = uVar2;
  if (8 < uVar2) {
    uVar6 = (*puVar1 & 0xff00ff00ff00ff00) >> 8 | (*puVar1 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
    if (uVar6 == 0x706c7567696e3a2f) {
      iVar3 = 0x2f - (uint)(byte)puVar1[1];
      if (uVar2 == 9) {
        uVar6 = 0;
      }
      else {
LAB_1033f9a70:
        uVar6 = uVar2 - 9;
        if (iVar3 == 0) {
          param_2 = (long *)_malloc(uVar6);
          if (param_2 == (long *)0x0) {
            func_0x0001087c9084(1,uVar6);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1033f9aac);
            (*pcVar4)();
          }
          _memcpy(param_2,(long)puVar1 + 9,uVar6);
          uStack_58 = uVar6;
          goto joined_r0x0001033f9a94;
        }
      }
    }
    else {
      iVar3 = 1;
      if (0x706c7567696e3a2f < uVar6) {
        iVar3 = -1;
      }
      uVar6 = 0;
      if (uVar2 != 9) goto LAB_1033f9a70;
    }
  }
  uStack_58 = 0x8000000000000000;
joined_r0x0001033f9a94:
  if (lVar7 != 0) {
    _free(puVar1);
  }
  if (uStack_58 != 0x8000000000000000) {
    plStack_50 = param_2;
    uStack_48 = uVar6;
    FUN_103875978(param_1,&uStack_58);
  }
  return;
}

