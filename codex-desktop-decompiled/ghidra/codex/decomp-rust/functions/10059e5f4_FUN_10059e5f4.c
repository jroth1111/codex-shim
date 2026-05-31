
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10059e5f4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char *pcStack_60;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined *puStack_38;
  
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
            (___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
             ,param_1);
  lVar3 = 
  ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
  ;
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uStack_c0 = *(undefined8 *)
                 (
                 ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                 + 0x20);
    uStack_b8 = *(undefined8 *)
                 (
                 ___ZN10codex_core7session4turn8run_turn28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hb9bda62e5dad5c68E
                 + 0x28);
    uStack_c8 = 3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&uStack_c8);
    if (iVar4 != 0) {
      lStack_90 = *(long *)(lVar3 + 0x60);
      uStack_88 = *(undefined8 *)(lVar3 + 0x68);
      lStack_a8 = *(long *)(lVar3 + 0x50);
      uStack_a0 = *(undefined8 *)(lVar3 + 0x58);
      uStack_b0 = 1;
      if (lStack_a8 == 0) {
        uStack_b0 = 2;
      }
      uStack_68 = *(undefined4 *)(lVar3 + 8);
      uStack_64 = *(undefined4 *)(lVar3 + 0xc);
      uStack_48 = 1;
      puStack_40 = &uStack_50;
      puStack_38 = &DAT_1061c2098;
      uStack_98 = 1;
      if (lStack_90 == 0) {
        uStack_98 = 2;
      }
      uStack_78 = uStack_c0;
      uStack_80 = uStack_c8;
      uStack_70 = uStack_b8;
      ppuStack_58 = &puStack_40;
      pcStack_60 = s__108b39f4f;
      uStack_50 = param_1;
      (**(code **)(puVar1 + 0x20))(puVar2,&uStack_b0);
    }
  }
  return;
}

