
void FUN_10604efe4(undefined2 *param_1,long *param_2,uint param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  
  if (param_5 != 0) {
    uVar9 = 0;
    lVar1 = param_4 + param_5 * 0x10;
    uVar2 = param_3;
    if ((param_3 & 0xffff0000) != 0x20000) {
      uVar2 = param_3 >> 8;
    }
    pcVar7 = (char *)*param_2;
    uVar6 = param_2[1];
    do {
      uVar3 = *(ushort *)(param_4 + 10);
      uVar11 = 1;
      switch((uint)uVar3) {
      case 1:
        uVar11 = param_3;
      case 0xb:
      case 0xc:
      case 0x11:
      case 0x25:
      case 0x29:
        uVar9 = uVar9 + (uVar11 & 0xff);
        break;
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 10:
      case 0xd:
      case 0xf:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x1a:
      case 0x1b:
      case 0x22:
      case 0x23:
        goto LAB_10604f09c;
      case 5:
      case 0x12:
      case 0x26:
      case 0x2a:
        uVar9 = uVar9 + 2;
        break;
      case 6:
      case 0x13:
      case 0x1c:
      case 0x28:
      case 0x2c:
        uVar9 = uVar9 + 4;
        break;
      case 7:
      case 0x14:
      case 0x20:
      case 0x24:
        uVar9 = uVar9 + 8;
        break;
      case 0xe:
      case 0x17:
      case 0x1d:
      case 0x1f:
code_r0x00010604f080:
        uVar9 = uVar9 + (param_3 >> 8 & 0xff);
        break;
      case 0x10:
        uVar9 = uVar9 + (uVar2 & 0xff);
        break;
      case 0x19:
      case 0x21:
        break;
      case 0x1e:
        uVar9 = uVar9 + 0x10;
        break;
      case 0x27:
      case 0x2b:
        uVar9 = uVar9 + 3;
        break;
      default:
        if (uVar3 - 0x1f20 < 2) goto code_r0x00010604f080;
LAB_10604f09c:
        uVar11 = (uint)uVar3;
        if (uVar9 != 0) {
          bVar5 = uVar6 < uVar9;
          uVar6 = uVar6 - uVar9;
          if (bVar5) goto LAB_10604f47c;
          pcVar7 = pcVar7 + uVar9;
          *param_2 = (long)pcVar7;
          param_2[1] = uVar6;
        }
        if (uVar11 - 3 < 0x21) {
                    /* WARNING: Could not recover jumptable at 0x00010604f0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_10604f0cc +
                    (ulong)*(ushort *)(&UNK_109bd53ec + (ulong)(uVar11 - 3) * 2) * 4))();
          return;
        }
        pcVar10 = pcVar7;
        if (1 < uVar11 - 0x1f01) {
          *(undefined1 *)param_1 = 0xc;
          param_1[1] = uVar3;
          return;
        }
        do {
          if (uVar6 == 0) {
            *param_1 = 0x13;
            param_1[3] = 0;
            *(undefined4 *)(param_1 + 1) = 0;
            *(char **)(param_1 + 4) = pcVar10;
            return;
          }
          pcVar8 = pcVar7 + 1;
          cVar4 = *pcVar7;
          uVar6 = uVar6 - 1;
          *param_2 = (long)pcVar8;
          param_2[1] = uVar6;
          pcVar7 = pcVar8;
          pcVar10 = pcVar10 + 1;
        } while (cVar4 < '\0');
        uVar9 = 0;
      }
      param_4 = param_4 + 0x10;
    } while (param_4 != lVar1);
    if (uVar9 != 0) {
      if (uVar6 < uVar9) {
LAB_10604f47c:
        *(undefined1 *)param_1 = 0x13;
        *(char **)(param_1 + 4) = pcVar7;
        return;
      }
      *param_2 = (long)(pcVar7 + uVar9);
      param_2[1] = uVar6 - uVar9;
    }
  }
  *(undefined1 *)param_1 = 0x52;
  return;
}

