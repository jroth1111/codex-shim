
void FUN_101213294(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 != 0) {
    lVar6 = _malloc(lVar2);
    if (lVar6 != 0) goto LAB_1012132e4;
    func_0x0001087c9084(1,lVar2);
  }
  lVar6 = 1;
LAB_1012132e4:
  _memcpy(lVar6,uVar1,lVar2);
  plVar9 = *(long **)(param_2 + 0x110);
  lVar5 = *plVar9;
  *plVar9 = lVar5 + 1;
  if (-1 < lVar5) {
    plVar8 = *(long **)(param_2 + 0x118);
    lVar5 = *plVar8;
    *plVar8 = lVar5 + 1;
    if (-1 < lVar5) {
      FUN_1011b4ddc(&lStack_160,param_2 + 0x18);
      uVar3 = *(undefined1 *)(param_2 + 0x130);
      plVar10 = *(long **)(param_2 + 0x120);
      lVar5 = *plVar10;
      *plVar10 = lVar5 + 1;
      if (-1 < lVar5) {
        plStack_b0 = plVar10;
        FUN_101177074(&lStack_a8,param_2 + 200);
        plVar7 = *(long **)(param_2 + 0x128);
        lVar5 = *plVar7;
        *plVar7 = lVar5 + 1;
        if (-1 < lVar5) {
          param_1[0x12] = lStack_e8;
          param_1[0x11] = lStack_f0;
          param_1[0x14] = lStack_d8;
          param_1[0x13] = lStack_e0;
          param_1[0x16] = lStack_c8;
          param_1[0x15] = lStack_d0;
          param_1[0x18] = lStack_b8;
          param_1[0x17] = lStack_c0;
          param_1[10] = lStack_128;
          param_1[9] = lStack_130;
          param_1[0xc] = lStack_118;
          param_1[0xb] = lStack_120;
          param_1[0xe] = lStack_108;
          param_1[0xd] = lStack_110;
          param_1[0x10] = lStack_f8;
          param_1[0xf] = lStack_100;
          param_1[4] = lStack_158;
          param_1[3] = lStack_160;
          param_1[6] = lStack_148;
          param_1[5] = lStack_150;
          param_1[8] = lStack_138;
          param_1[7] = lStack_140;
          param_1[0x1c] = lStack_90;
          param_1[0x1b] = lStack_98;
          param_1[0x1e] = lStack_80;
          param_1[0x1d] = lStack_88;
          param_1[0x20] = lStack_70;
          param_1[0x1f] = lStack_78;
          *param_1 = lVar2;
          param_1[1] = lVar6;
          param_1[2] = lVar2;
          *(undefined1 *)(param_1 + 0x26) = uVar3;
          param_1[0x23] = (long)plVar8;
          param_1[0x24] = (long)plVar10;
          param_1[0x21] = lStack_68;
          param_1[0x22] = (long)plVar9;
          param_1[0x1a] = lStack_a0;
          param_1[0x19] = lStack_a8;
          param_1[0x25] = (long)plVar7;
          return;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1012133fc);
  (*pcVar4)();
}

