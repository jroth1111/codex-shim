
void __ZN23codex_app_server_daemon11update_loop22reexec_managed_updater17h8771f6e5e1a0cbdbE
               (undefined8 **param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 **ppuStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  __ZN3std3sys7process4unix6common7Command3new17h3172692053ff4dc3E(&ppuStack_150);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E(&ppuStack_150,&UNK_108cf47bb,10);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E(&ppuStack_150,&UNK_108cf47c5,6);
  __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E(&ppuStack_150,&UNK_108cf47cb,0xf)
  ;
  uVar1 = __ZN76__LT_std__process__Command_u20_as_u20_std__os__unix__process__CommandExt_GT_4exec17h4d5d1172f062bb96E
                    (&ppuStack_150);
  FUN_101bf7a94(&ppuStack_150);
  ppuStack_150 = &ppuStack_60;
  puStack_148 = &
                __ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hd3197a5a14e07c8dE
  ;
  uStack_88 = uVar1;
  ppuStack_60 = param_1;
  puStack_58 = (undefined *)param_2;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&puStack_80,s_4failed_to_replace_updater_with_m_108ade643,&ppuStack_150);
  uStack_68 = uVar1;
  __ZN3std9backtrace9Backtrace7capture17h7a467701db5babacE(&ppuStack_150);
  puStack_58 = puStack_148;
  ppuStack_60 = ppuStack_150;
  uStack_48 = uStack_138;
  uStack_50 = uStack_140;
  uStack_38 = uStack_128;
  uStack_40 = uStack_130;
  puStack_148 = (undefined *)uStack_78;
  ppuStack_150 = (undefined8 **)puStack_80;
  uStack_140 = uStack_70;
  uStack_138 = uVar1;
  FUN_1088c6db8(&ppuStack_150,&ppuStack_60);
  return;
}

