
void __ZN9codex_mcp10codex_apps39normalize_codex_apps_callable_namespace17h56e6987540615178E
               (undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long **pplStack_40;
  undefined *puStack_38;
  long *plStack_30;
  undefined *puStack_28;
  
  plStack_68 = param_2;
  lStack_60 = param_3;
  if (((param_3 == 10) && (param_4 != 0)) &&
     (*param_2 == 0x70615f7865646f63 && (short)param_2[1] == 0x7370)) {
    func_0x00010558a730(&lStack_58,param_4,param_5);
    pplStack_40 = &plStack_68;
    puStack_38 = &DAT_103d8be04;
    puStack_28 = &DAT_103e63590;
    plStack_30 = &lStack_58;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (param_1,s_mcp______108aff999,&pplStack_40);
    if (lStack_58 != 0) {
      _free(uStack_50);
    }
  }
  else {
    pplStack_40 = &plStack_68;
    puStack_38 = &DAT_103d8be04;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s_mcp______108aff9a5,&pplStack_40);
  }
  return;
}

