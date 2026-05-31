
void __ZN10codex_core10connectors23with_app_plugin_sources17hf53f474b673723dfE
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  long lStack_78;
  long lStack_70;
  
  if (param_2[2] != 0) {
    lVar11 = param_2[1];
    lVar6 = lVar11 + param_2[2] * 0x270;
    do {
      auVar13 = func_0x000103ed7e14(param_3,*(undefined8 *)(lVar11 + 8),
                                    *(undefined8 *)(lVar11 + 0x10));
      lVar4 = auVar13._8_8_;
      lVar10 = auVar13._0_8_;
      if (lVar4 == 0) {
        lStack_78 = 0;
        lStack_70 = 8;
      }
      else {
        lVar9 = lVar4 * 0x18;
        lStack_70 = _malloc(lVar9);
        if (lStack_70 == 0) {
          func_0x0001087c9084(8,lVar9);
LAB_102cd7b1c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd7b20);
          (*pcVar2)();
        }
        lVar5 = 0;
        plVar7 = (long *)(lStack_70 + 0x10);
        do {
          lStack_78 = lVar4;
          if (lVar9 == 0) break;
          uVar12 = *(undefined8 *)(lVar10 + 8);
          lVar1 = *(long *)(lVar10 + 0x10);
          if (lVar1 == 0) {
            lVar3 = 1;
          }
          else {
            lVar3 = _malloc(lVar1);
            if (lVar3 == 0) {
              func_0x0001087c9084(1,lVar1);
              goto LAB_102cd7b1c;
            }
          }
          _memcpy(lVar3,uVar12,lVar1);
          lVar5 = lVar5 + 1;
          lVar10 = lVar10 + 0x18;
          plVar7[-2] = lVar1;
          plVar7[-1] = lVar3;
          *plVar7 = lVar1;
          lVar9 = lVar9 + -0x18;
          plVar7 = plVar7 + 3;
        } while (lVar4 != lVar5);
      }
      lVar10 = *(long *)(lVar11 + 0x38);
      lVar9 = *(long *)(lVar11 + 0x40);
      if (lVar9 != 0) {
        puVar8 = (undefined8 *)(lVar10 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (*(long *)(lVar11 + 0x30) != 0) {
        _free(lVar10);
      }
      *(long *)(lVar11 + 0x38) = lStack_70;
      *(long *)(lVar11 + 0x30) = lStack_78;
      *(long *)(lVar11 + 0x40) = lVar4;
      lVar11 = lVar11 + 0x270;
    } while (lVar11 != lVar6);
  }
  uVar12 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[2] = param_2[2];
  return;
}

