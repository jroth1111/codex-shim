
/* WARNING: Removing unreachable block (ram,0x000105477210) */
/* WARNING: Removing unreachable block (ram,0x000105477224) */

undefined8 *
__ZN9codex_tui12multi_agents29format_agent_picker_item_name17h4ddd0ba5bf3f65eeE
          (ulong *param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,uint param_6)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  ulong unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auStack_9c [8];
  undefined1 uStack_94;
  ulong uStack_90;
  ulong *puStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [16];
  
  if ((param_6 & 1) == 0) {
    if (param_2 == 0) {
      lVar7 = 0;
      bVar2 = true;
      if (param_4 == 0) goto LAB_10547721c;
LAB_1054771c0:
      auStack_40 = FUN_1051bb28c(param_4,param_5);
      bVar3 = auStack_40._0_8_ == 0 || auStack_40._8_8_ == 0;
      auVar8 = auStack_40;
      if (bVar2) goto LAB_1054771dc;
LAB_105477230:
      auStack_40 = auVar8;
      if (bVar3) {
        uVar6 = _malloc(unaff_x20);
        if (uVar6 != 0) {
          puVar4 = (undefined8 *)_memcpy(uVar6,lVar7,unaff_x20);
          *param_1 = unaff_x20;
          param_1[1] = uVar6;
          param_1[2] = unaff_x20;
          return puVar4;
        }
        goto LAB_1054772dc;
      }
      puStack_50 = auStack_40;
      puStack_48 = &DAT_105150c8c;
      pcVar5 = s_____108b0bfc4;
      lStack_70 = lVar7;
      uStack_68 = unaff_x20;
      puStack_60 = &lStack_70;
    }
    else {
      auVar8 = FUN_1051bb28c();
      param_3 = auVar8._8_8_;
      lVar7 = auVar8._0_8_;
      bVar2 = lVar7 == 0 || param_3 == 0;
      unaff_x20 = param_3;
      if (param_4 != 0) goto LAB_1054771c0;
LAB_10547721c:
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = param_3;
      auStack_40 = auVar8 << 0x40;
      bVar3 = true;
      auVar8 = auVar1 << 0x40;
      if (!bVar2) goto LAB_105477230;
LAB_1054771dc:
      if (bVar3) {
        puVar4 = (undefined8 *)_malloc(5);
        if (puVar4 == (undefined8 *)0x0) goto LAB_1054772d0;
        *(undefined1 *)((long)puVar4 + 4) = 0x74;
        *(undefined4 *)puVar4 = 0x6e656741;
        uVar6 = 5;
        goto LAB_105477184;
      }
      pcVar5 = s_____108abe4dd;
      puStack_60 = (undefined8 *)auStack_40;
    }
    puStack_58 = &DAT_105150c8c;
    puVar4 = (undefined8 *)
             __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,pcVar5,&puStack_60);
  }
  else {
    puVar4 = (undefined8 *)_malloc(0xe);
    if (puVar4 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0xe);
LAB_1054772d0:
      func_0x0001087c9084(1,5);
LAB_1054772dc:
      auVar9 = func_0x0001087c9084(1,unaff_x20);
      pcVar5 = auVar9._0_8_;
      uStack_78 = 0x1054772e8;
      auStack_9c[0] = 2;
      uStack_94 = 4;
      uStack_90 = unaff_x20;
      puStack_88 = param_1;
      puStack_80 = &stack0xfffffffffffffff0;
      puVar4 = (undefined8 *)
               __ZN9codex_tui8key_hint10KeyBinding8is_press17h88a38af21f148edbE(auStack_9c,pcVar5);
      if ((((ulong)puVar4 & 1) == 0) && (auVar9._8_4_ != 0)) {
        puVar4 = (undefined8 *)
                 (ulong)(((pcVar5[8] == '\x04' && *pcVar5 == '\x0f') && *(int *)(pcVar5 + 4) == 0x62
                         ) && (byte)pcVar5[10] < 2);
      }
      return puVar4;
    }
    *puVar4 = 0x65645b206e69614d;
    *(undefined8 *)((long)puVar4 + 6) = 0x5d746c7561666564;
    uVar6 = 0xe;
LAB_105477184:
    *param_1 = uVar6;
    param_1[1] = (ulong)puVar4;
    param_1[2] = uVar6;
  }
  return puVar4;
}

