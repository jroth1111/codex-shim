
/* WARNING: Removing unreachable block (ram,0x000103d8aff4) */

void FUN_103d8ae48(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  undefined1 auStack_1d [3];
  undefined1 auStack_1a [2];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined1 auStack_14 [3];
  undefined1 uStack_11;
  
  puVar8 = (ushort *)*param_1;
  if ((*(uint *)(param_2 + 0x10) >> 0x19 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x10) >> 0x1a & 1) == 0) {
      uVar1 = *puVar8;
      uVar6 = (uint)uVar1;
      uVar7 = (uint)uVar1;
      if (uVar1 < 1000) {
        if (9 < uVar7) {
          lVar10 = 3;
          uVar12 = uVar6;
          uVar6 = (uVar1 >> 2) / 0x19;
          goto LAB_103d8af68;
        }
        lVar10 = 5;
LAB_103d8af98:
        lVar11 = lVar10 + -1;
        auStack_1a[lVar10] = (&UNK_108f58836)[(uVar6 & 0xf) << 1];
      }
      else {
        uVar6 = (uVar1 >> 4) / 0x271;
        uVar12 = uVar7 + uVar6 * -10000;
        uStack_18 = *(undefined2 *)(&UNK_108f58835 + (ulong)((uVar12 >> 2 & 0x3fff) / 0x19) * 2);
        lVar10 = 1;
LAB_103d8af68:
        uStack_16 = *(undefined2 *)
                     (&UNK_108f58835 +
                     ((ulong)(uVar12 + ((uVar12 >> 2 & 0x3fff) / 0x19) * -100) & 0xffff) * 2);
        lVar11 = lVar10;
        if (uVar7 == 0 || uVar6 != 0) goto LAB_103d8af98;
      }
      lVar5 = 5 - lVar11;
      puVar4 = auStack_1a + lVar11 + 1;
      puVar2 = (undefined *)0x1;
      uVar3 = 0;
      goto LAB_103d8afd0;
    }
    lVar10 = 0;
    uVar9 = (ulong)*puVar8;
    do {
      (&uStack_11)[lVar10] = (&UNK_108f58919)[uVar9 & 0xf];
      lVar10 = lVar10 + -1;
      uVar6 = (uint)uVar9;
      uVar9 = uVar9 >> 4;
    } while (0xf < uVar6);
    puVar4 = auStack_14;
  }
  else {
    lVar10 = 0;
    uVar9 = (ulong)*puVar8;
    do {
      auStack_1a[lVar10] = (&UNK_108f58907)[uVar9 & 0xf];
      lVar10 = lVar10 + -1;
      uVar6 = (uint)uVar9;
      uVar9 = uVar9 >> 4;
    } while (0xf < uVar6);
    puVar4 = auStack_1d;
  }
  lVar5 = -lVar10;
  puVar2 = &UNK_108f58917;
  puVar4 = puVar4 + lVar10 + 4;
  uVar3 = 2;
LAB_103d8afd0:
  __ZN4core3fmt9Formatter12pad_integral17h3ce8c974c7a8a604E(param_2,1,puVar2,uVar3,puVar4,lVar5);
  return;
}

