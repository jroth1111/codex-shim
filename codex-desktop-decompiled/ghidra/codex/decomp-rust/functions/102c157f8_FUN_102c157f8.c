
void FUN_102c157f8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  undefined1 auStack_230 [432];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if (param_3 == 0) {
    lVar7 = _malloc(0x13a8);
    if (lVar7 != 0) {
      *(undefined8 *)(lVar7 + 0x1290) = 0;
      *(undefined2 *)(lVar7 + 0x13a2) = 0;
      if (*(short *)(param_2 + 0x13a2) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        plVar14 = (long *)(param_2 + 0x12a8);
        lVar16 = param_2;
        do {
          lVar4 = plVar14[-1];
          lVar15 = *plVar14;
          if (lVar15 == 0) {
            lVar8 = 1;
          }
          else {
            lVar8 = _malloc(lVar15);
            if (lVar8 == 0) {
              func_0x0001087c9084(1,lVar15);
              goto LAB_102c15ba4;
            }
          }
          _memcpy(lVar8,lVar4,lVar15);
          func_0x000102ae0a80(&lStack_3e0,lVar16);
          uVar2 = *(ushort *)(lVar7 + 0x13a2);
          if (10 < uVar2) {
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108d4c55e,0x20,&UNK_10b297a98);
            goto LAB_102c15ba4;
          }
          uVar13 = uVar13 + 1;
          plVar14 = plVar14 + 3;
          *(ushort *)(lVar7 + 0x13a2) = uVar2 + 1;
          plVar12 = (long *)(lVar7 + 0x1298 + (ulong)uVar2 * 0x18);
          *plVar12 = lVar15;
          plVar12[1] = lVar8;
          plVar12[2] = lVar15;
          _memcpy(lVar7 + (ulong)uVar2 * 0x1b0,&lStack_3e0,0x1b0);
          lVar16 = lVar16 + 0x1b0;
        } while (uVar13 < *(ushort *)(param_2 + 0x13a2));
      }
      param_1[1] = 0;
      *param_1 = lVar7;
      param_1[2] = uVar13;
      return;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x13a8);
    lVar7 = param_2;
LAB_102c15b88:
    func_0x0001087c9084(1,lVar7);
  }
  else {
    FUN_102c157f8(&lStack_3e0,*(undefined8 *)(param_2 + 0x13a8));
    lVar16 = lStack_3d8;
    lVar7 = lStack_3e0;
    if (lStack_3e0 == 0) {
      func_0x000108a07a20(&UNK_10b2996b0);
    }
    else {
      lVar4 = _malloc(0x1408);
      if (lVar4 == 0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x1408);
      }
      else {
        *(undefined8 *)(lVar4 + 0x1290) = 0;
        *(undefined2 *)(lVar4 + 0x13a2) = 0;
        *(long *)(lVar4 + 0x13a8) = lVar7;
        if (lVar16 != -1) {
          *(long *)(lVar7 + 0x1290) = lVar4;
          *(undefined2 *)(lVar7 + 0x13a0) = 0;
          lStack_3e0 = lVar4;
          lStack_3d8 = lVar16 + 1;
          lVar15 = lStack_3d0;
          if (*(short *)(param_2 + 0x13a2) != 0) {
            uVar13 = 0;
            plVar14 = (long *)(param_2 + 0x12a8);
            lVar8 = param_2;
            do {
              lVar1 = plVar14[-1];
              lVar7 = *plVar14;
              if (lVar7 == 0) {
                lVar5 = 1;
              }
              else {
                lVar5 = _malloc(lVar7);
                if (lVar5 == 0) goto LAB_102c15b88;
              }
              _memcpy(lVar5,lVar1,lVar7);
              func_0x000102ae0a80(auStack_230,lVar8);
              FUN_102c157f8(&lStack_80,*(undefined8 *)(param_2 + 0x13b0 + uVar13 * 8),param_3 + -1);
              lVar1 = lStack_70;
              if (lStack_80 != 0) {
                lVar6 = lStack_80;
                if (lStack_78 == lVar16) goto LAB_102c15944;
LAB_102c15adc:
                puVar11 = &UNK_10b297ab0;
                puVar9 = &UNK_108d4c57e;
                uVar10 = 0x30;
LAB_102c15b0c:
                lStack_3d0 = lVar15;
                __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar9,uVar10,puVar11);
                goto LAB_102c15ba4;
              }
              lVar6 = _malloc(0x13a8);
              if (lVar6 == 0) {
                lStack_3d0 = lVar15;
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x13a8);
                goto LAB_102c15ba4;
              }
              *(undefined8 *)(lVar6 + 0x1290) = 0;
              *(undefined2 *)(lVar6 + 0x13a2) = 0;
              if (lVar16 != 0) goto LAB_102c15adc;
LAB_102c15944:
              uVar2 = *(ushort *)(lVar4 + 0x13a2);
              if (10 < uVar2) {
                puVar9 = &UNK_108d4c55e;
                uVar10 = 0x20;
                puVar11 = &UNK_10b297ac8;
                goto LAB_102c15b0c;
              }
              uVar13 = uVar13 + 1;
              plVar14 = plVar14 + 3;
              *(ushort *)(lVar4 + 0x13a2) = uVar2 + 1;
              plVar12 = (long *)(lVar4 + 0x1298 + (ulong)uVar2 * 0x18);
              *plVar12 = lVar7;
              plVar12[1] = lVar5;
              plVar12[2] = lVar7;
              _memcpy(lVar4 + (ulong)uVar2 * 0x1b0,auStack_230,0x1b0);
              lVar7 = (ulong)uVar2 + 1;
              *(long *)(lVar4 + 0x13a8 + lVar7 * 8) = lVar6;
              *(long *)(lVar6 + 0x1290) = lVar4;
              *(short *)(lVar6 + 0x13a0) = (short)lVar7;
              lVar15 = lVar15 + lVar1 + 1;
              lVar8 = lVar8 + 0x1b0;
            } while (uVar13 < *(ushort *)(param_2 + 0x13a2));
          }
          lStack_3d0 = lVar15;
          param_1[1] = lStack_3d8;
          *param_1 = lStack_3e0;
          param_1[2] = lStack_3d0;
          return;
        }
        func_0x000108a07a20(&UNK_10b297ae0);
      }
    }
  }
LAB_102c15ba4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102c15ba8);
  (*pcVar3)();
}

