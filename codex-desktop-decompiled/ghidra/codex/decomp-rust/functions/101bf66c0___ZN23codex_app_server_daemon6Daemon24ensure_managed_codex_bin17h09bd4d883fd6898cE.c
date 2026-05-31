
undefined8
__ZN23codex_app_server_daemon6Daemon24ensure_managed_codex_bin17h09bd4d883fd6898cE(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = __ZN3std4path4Path7is_file17h96e282191c162e03E(uVar3,uVar1);
  if ((uVar2 & 1) == 0) {
    puStack_28 = &
                 __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
    ;
    uStack_40 = uVar3;
    uStack_38 = uVar1;
    puStack_30 = (undefined1 *)&uStack_40;
    uVar3 = FUN_1088c708c(s__managed_standalone_Codex_instal_108ade67a,&puStack_30);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

