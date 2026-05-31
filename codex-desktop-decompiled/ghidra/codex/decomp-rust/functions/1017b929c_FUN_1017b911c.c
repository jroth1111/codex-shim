
ulong * FUN_1017b911c(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    puVar2 = (ulong *)0x1;
  }
  else {
    uVar6 = param_3;
    if (param_3 == 0x1e) {
      if (((*param_2 == 0x6a5f656472657324 && param_2[1] == 0x6972703a3a6e6f73) &&
          param_2[2] == 0x61523a3a65746176) && *(long *)((long)param_2 + 0x16) == 0x65756c6156776152
         ) {
        *param_1 = 0x8000000000000000;
        return param_1;
      }
      puVar1 = (ulong *)_malloc(0x1e);
      if (puVar1 == (ulong *)0x0) {
LAB_1017b9224:
        auVar9 = func_0x0001087c9084(1,0x1e);
        uStack_60 = auVar9._8_8_;
        uStack_38 = 0x1017b9230;
        uStack_50 = 0;
        uStack_58 = uVar6;
        uStack_48 = uVar6;
        puStack_40 = &stack0xfffffffffffffff0;
        auVar9 = FUN_1060f8cbc(*auVar9._0_8_,auVar9._0_8_[1],&uStack_60);
        if ((auVar9._0_8_ & 1) == 0) {
          if (auVar9._8_8_ == 0) {
            if (uStack_58 < uStack_50) {
              puVar3 = (undefined8 *)
                       __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E
                                 (0,uStack_50,uStack_58,&UNK_10b2594d0);
              lVar4 = func_0x000101797d1c(*puVar3);
              if (lVar4 != 0) {
                uVar6 = puVar3[1];
                if ((uVar6 & 3) == 1) {
                  uVar7 = *(undefined8 *)(uVar6 - 1);
                  puVar8 = *(undefined8 **)(uVar6 + 7);
                  pcVar5 = (code *)*puVar8;
                  if (pcVar5 != (code *)0x0) {
                    (*pcVar5)(uVar7);
                  }
                  if (puVar8[1] != 0) {
                    _free(uVar7);
                  }
                  _free((undefined8 *)(uVar6 - 1));
                }
                puVar3[1] = lVar4;
              }
              return (ulong *)(ulong)(lVar4 != 0);
            }
            puVar2 = (ulong *)0x0;
          }
          else {
            puVar2 = (ulong *)0x1;
          }
        }
        else {
          puVar2 = (ulong *)0x1;
        }
        return puVar2;
      }
      uVar6 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar6;
      uVar7 = *(undefined8 *)((long)param_2 + 0xe);
      *(undefined8 *)((long)puVar1 + 0x16) = *(undefined8 *)((long)param_2 + 0x16);
      *(undefined8 *)((long)puVar1 + 0xe) = uVar7;
      puVar2 = puVar1;
      goto LAB_1017b91f4;
    }
    puVar2 = (ulong *)_malloc(param_3);
    if (puVar2 == (ulong *)0x0) {
      func_0x0001087c9084(1,param_3);
      goto LAB_1017b9224;
    }
  }
  puVar1 = (ulong *)_memcpy(puVar2,param_2,param_3);
LAB_1017b91f4:
  *param_1 = param_3;
  param_1[1] = (ulong)puVar2;
  param_1[2] = param_3;
  return puVar1;
}

