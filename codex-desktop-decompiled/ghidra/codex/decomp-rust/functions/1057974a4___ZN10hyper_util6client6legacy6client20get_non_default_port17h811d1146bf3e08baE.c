
/* WARNING: Possible PIC construction at 0x0001057be1f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001057be1f4) */
/* WARNING: Removing unreachable block (ram,0x0001057be1fc) */
/* WARNING: Removing unreachable block (ram,0x0001057be208) */
/* WARNING: Removing unreachable block (ram,0x0001057be22c) */
/* WARNING: Removing unreachable block (ram,0x0001057be234) */
/* WARNING: Removing unreachable block (ram,0x0001057be210) */
/* WARNING: Removing unreachable block (ram,0x0001057be284) */
/* WARNING: Removing unreachable block (ram,0x0001057be298) */
/* WARNING: Removing unreachable block (ram,0x0001057be29c) */
/* WARNING: Removing unreachable block (ram,0x0001057be220) */
/* WARNING: Removing unreachable block (ram,0x0001057be23c) */
/* WARNING: Removing unreachable block (ram,0x0001057be254) */
/* WARNING: Removing unreachable block (ram,0x0001057be258) */
/* WARNING: Removing unreachable block (ram,0x0001057be2a0) */
/* WARNING: Removing unreachable block (ram,0x0001057be228) */
/* WARNING: Removing unreachable block (ram,0x0001057be25c) */

void __ZN10hyper_util6client6legacy6client20get_non_default_port17h811d1146bf3e08baE
               (long *param_1,long param_2)

{
  undefined1 *puVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined2 uVar12;
  uint uVar14;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_78 [64];
  long alStack_38 [3];
  int iVar13;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(long *)(param_2 + 0x20) == 0) {
    plVar9 = param_1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    puVar6 = auStack_78;
    unaff_x30 = 0x1057be1f4;
    register0x00000008 = (BADSPACEBASE *)(auStack_78 + 0x38);
    plVar9 = (long *)(puVar6 + 0x40);
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  lVar3 = *(long *)(param_2 + 0x18);
  uVar11 = *(ulong *)(param_2 + 0x20);
  *(long *)((long)register0x00000008 + -0x60) = lVar3;
  *(ulong *)((long)register0x00000008 + -0x58) = uVar11;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  *(ulong *)((long)register0x00000008 + -0x48) = uVar11;
  *(undefined1 *)((long)register0x00000008 + -0x38) = 1;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0x3a0000003a;
  func_0x00010579da00((undefined1 *)((long)register0x00000008 + -0x78),
                      (undefined1 *)((long)register0x00000008 + -0x60));
  if (*(int *)((long)register0x00000008 + -0x78) == 1) {
    uVar8 = *(long *)((long)register0x00000008 + -0x70) + 1;
    if (*(long *)((long)register0x00000008 + -0x70) != -1) {
      uVar7 = uVar11 == uVar8;
      if (uVar11 <= uVar8) goto LAB_105797528;
      uVar7 = *(char *)(lVar3 + uVar8) == -0x40;
      if (*(char *)(lVar3 + uVar8) < -0x40) {
        do {
          __ZN4core3str16slice_error_fail17h7d5f7302866db666E(lVar3,uVar11);
LAB_105797528:
        } while (!(bool)uVar7);
      }
    }
    lVar5 = uVar11 - uVar8;
    if (lVar5 != 0) {
      pbVar2 = (byte *)(lVar3 + uVar8);
      pbVar10 = pbVar2;
      if (lVar5 == 1) {
        bVar4 = *pbVar2;
        if ((bVar4 == 0x2b) || (bVar4 == 0x2d)) goto LAB_1057975f8;
        uVar11 = (ulong)(bVar4 != 0x2b);
        if (bVar4 == 0x2b) {
          pbVar10 = pbVar2 + 1;
        }
      }
      else {
        if (*pbVar2 == 0x2b) {
          pbVar10 = pbVar2 + 1;
        }
        uVar11 = lVar5 - (ulong)(*pbVar2 == 0x2b);
      }
      if (uVar11 < 5) {
        iVar13 = 0;
        uVar12 = 0;
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          if (9 < *pbVar10 - 0x30) goto LAB_1057975f8;
          iVar13 = (*pbVar10 - 0x30) + iVar13 * 10;
          uVar12 = (undefined2)iVar13;
          pbVar10 = pbVar10 + 1;
        }
LAB_105797594:
        *plVar9 = (long)pbVar2;
        plVar9[1] = lVar5;
        *(undefined2 *)(plVar9 + 2) = uVar12;
        return;
      }
      uVar14 = 0;
      do {
        uVar12 = (undefined2)uVar14;
        if (uVar11 == 0) goto LAB_105797594;
        uVar14 = ((uVar14 & 0xffff) + (uVar14 & 0xffff) * 4) * 2;
        if ((uVar14 & 0xf0000) != 0 || 9 < *pbVar10 - 0x30) break;
        uVar11 = uVar11 - 1;
        uVar14 = (uVar14 & 0xffff) + (*pbVar10 - 0x30 & 0xffff);
        pbVar10 = pbVar10 + 1;
      } while (uVar14 >> 0x10 == 0);
    }
  }
LAB_1057975f8:
  *plVar9 = 0;
  return;
}

