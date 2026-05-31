
/* WARNING: Type propagation algorithm not settling */

void FUN_10179fd88(char *param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (*param_1 == '\x0e') {
    puVar1 = (ulong *)(param_1 + 8);
    lVar3 = 0;
    if (6 < *puVar1) {
      lVar3 = *puVar1 - 7;
    }
    if (lVar3 < 6) {
      if (lVar3 == 0) {
        uVar6 = *puVar1;
        lVar3 = 0;
        if (2 < uVar6) {
          lVar3 = uVar6 - 3;
        }
        if (lVar3 - 1U < 2) {
          return;
        }
        if (lVar3 == 0) {
          if (*(long *)(param_1 + 0x68) != -0x8000000000000000 && *(long *)(param_1 + 0x68) != 0) {
            _free(*(undefined8 *)(param_1 + 0x70));
          }
          if (uVar6 != 3) {
            FUN_1017a4dc4(puVar1);
          }
          if ((*(ulong *)(param_1 + 0x80) & 0x7fffffffffffffff) == 0) {
            return;
          }
          lVar3 = 0x80;
        }
        else {
          if (*(long *)(param_1 + 0x10) == 0) {
            return;
          }
          lVar3 = 0x10;
        }
        puVar1 = *(ulong **)((long)puVar1 + lVar3);
      }
      else if (lVar3 == 1) {
        if (*(long *)(param_1 + 0x10) == 0) {
          return;
        }
        puVar1 = *(ulong **)(param_1 + 0x18);
      }
      else {
        if ((lVar3 != 2) || (*(long *)(param_1 + 0x10) == 0)) {
          return;
        }
        puVar1 = *(ulong **)(param_1 + 0x18);
      }
    }
    else if (lVar3 < 8) {
      if (lVar3 == 6) {
        if (*(long *)(param_1 + 0x10) == 0) {
          return;
        }
        puVar1 = *(ulong **)(param_1 + 0x18);
      }
      else {
        if (lVar3 != 7) {
          return;
        }
        if (*(long *)(param_1 + 0x10) == 0) {
          return;
        }
        puVar1 = *(ulong **)(param_1 + 0x18);
      }
    }
    else if (lVar3 == 8) {
      if (*(long *)(param_1 + 0x10) == 0) {
        return;
      }
      puVar1 = *(ulong **)(param_1 + 0x18);
    }
    else {
      if (lVar3 != 9) {
        return;
      }
      if (*(long *)(param_1 + 0x10) == 0) {
        return;
      }
      puVar1 = *(ulong **)(param_1 + 0x18);
    }
    goto code_r0x000108aa97c4;
  }
  switch(*param_1) {
  case '\0':
  case '\x04':
  case '\x05':
  case '\v':
    break;
  case '\x01':
  case '\x02':
    lVar3 = 2;
    if (1 < *(ulong *)(param_1 + 8)) {
      lVar3 = *(ulong *)(param_1 + 8) - 2;
    }
    switch(lVar3) {
    case 0:
      if (*(long *)(param_1 + 0x40) != -0x8000000000000000 && *(long *)(param_1 + 0x40) != 0) {
        _free(*(undefined8 *)(param_1 + 0x48));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      puVar1 = *(ulong **)(param_1 + 0x30);
      puVar7 = puVar1;
      for (lVar3 = *(long *)(param_1 + 0x38); lVar3 != 0; lVar3 = lVar3 + -1) {
        uVar4 = *puVar7;
        uVar6 = uVar4 ^ 0x8000000000000000;
        if (-1 < (long)uVar4) {
          uVar6 = 1;
        }
        if ((uVar6 == 0) || (uVar6 != 1)) {
          if (puVar7[1] != 0) {
            lVar5 = 0x10;
            goto code_r0x0001017a632c;
          }
        }
        else if (uVar4 != 0) {
          lVar5 = 8;
code_r0x0001017a632c:
          _free(*(undefined8 *)((long)puVar7 + lVar5));
        }
        puVar7 = puVar7 + 4;
      }
      lVar3 = *(long *)(param_1 + 0x28);
      goto joined_r0x0001017a66f8;
    case 1:
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar5 = *(long *)(param_1 + 0x38);
      if (lVar5 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        _free(lVar3);
      }
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 != -0x8000000000000000) {
        lVar5 = *(long *)(param_1 + 0x48);
        lVar9 = *(long *)(param_1 + 0x50);
        if (lVar9 != 0) {
          puVar8 = (undefined8 *)(lVar5 + 0x10);
          do {
            if (puVar8[-1] != 0) {
              _free(*puVar8);
            }
            puVar8 = puVar8 + 4;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (lVar3 != 0) {
          _free(lVar5);
        }
      }
      if (*(long *)(param_1 + 0x58) == -0x8000000000000000 || *(long *)(param_1 + 0x58) == 0) {
        return;
      }
      puVar1 = *(ulong **)(param_1 + 0x60);
      break;
    case 2:
      if (*(long *)(param_1 + 0x90) != -0x8000000000000000 && *(long *)(param_1 + 0x90) != 0) {
        _free(*(undefined8 *)(param_1 + 0x98));
      }
      if (*(long *)(param_1 + 0xa8) != -0x8000000000000000 && *(long *)(param_1 + 0xa8) != 0) {
        _free(*(undefined8 *)(param_1 + 0xb0));
      }
      lVar3 = *(long *)(param_1 + 0x20);
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 8);
        do {
          if (puVar8[-1] != 0) {
            _free(*puVar8);
          }
          puVar8 = puVar8 + 3;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        _free(lVar3);
      }
      if (*(long *)(param_1 + 0x30) == -0x8000000000000000 || *(long *)(param_1 + 0x30) == 0) {
        lVar3 = *(long *)(param_1 + 0x60);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x38));
        lVar3 = *(long *)(param_1 + 0x60);
      }
      if (lVar3 != 0) {
        FUN_10179fa2c();
      }
      if ((*(long *)(param_1 + 0x48) == -0x8000000000000000) || (*(long *)(param_1 + 0x48) == 0)) {
        return;
      }
      puVar1 = *(ulong **)(param_1 + 0x50);
      break;
    case 3:
      if (*(long *)(param_1 + 0x58) != -0x8000000000000000 && *(long *)(param_1 + 0x58) != 0) {
        _free(*(undefined8 *)(param_1 + 0x60));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if ((*(long *)(param_1 + 0x70) != -0x8000000000000000) && (*(long *)(param_1 + 0x70) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x78);
code_r0x0001017a67b4:
        _free(uVar2);
      }
      goto code_r0x0001017a67b8;
    case 4:
      if (*(long *)(param_1 + 0x28) == -0x8000000000000000 || *(long *)(param_1 + 0x28) == 0) {
        if (*(long *)(param_1 + 0x40) == -0x8000000000000000 || *(long *)(param_1 + 0x40) == 0)
        goto code_r0x0001017a63d8;
code_r0x0001017a673c:
        _free(*(undefined8 *)(param_1 + 0x48));
        lVar3 = *(long *)(param_1 + 0x58);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x30));
        if (*(long *)(param_1 + 0x40) != -0x8000000000000000 && *(long *)(param_1 + 0x40) != 0)
        goto code_r0x0001017a673c;
code_r0x0001017a63d8:
        lVar3 = *(long *)(param_1 + 0x58);
      }
      if ((lVar3 != -0x8000000000000000) && (lVar3 != 0)) {
        _free(*(undefined8 *)(param_1 + 0x60));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      uVar4 = *(ulong *)(param_1 + 0x70);
      uVar6 = uVar4 ^ 0x8000000000000000;
      if (-1 < (long)uVar4) {
        uVar6 = 5;
      }
      if (uVar6 < 3) {
        return;
      }
      if (uVar6 == 3) {
        if (*(long *)(param_1 + 0x78) == 0) {
          return;
        }
        puVar1 = *(ulong **)(param_1 + 0x80);
      }
      else if (uVar6 == 4) {
        puVar1 = *(ulong **)(param_1 + 0x80);
        FUN_1017a5c10(puVar1,*(undefined8 *)(param_1 + 0x88));
        if (*(long *)(param_1 + 0x78) == 0) {
          return;
        }
      }
      else {
        lVar3 = *(long *)(param_1 + 0x90);
        if ((lVar3 != 0) && (lVar3 * 9 != -0x11)) {
          _free(*(long *)(param_1 + 0x88) + lVar3 * -8 + -8);
        }
        puVar1 = *(ulong **)(param_1 + 0x78);
        lVar3 = *(long *)(param_1 + 0x80) + 1;
        puVar7 = puVar1;
        while (lVar3 = lVar3 + -1, lVar3 != 0) {
          if (*puVar7 != 0) {
            _free(puVar7[1]);
          }
          FUN_1017a4698(puVar7 + 3);
          puVar7 = puVar7 + 0xd;
        }
        if (*(ulong *)(param_1 + 0x70) == 0) {
          return;
        }
      }
      break;
    case 5:
      if (*(long *)(param_1 + 0x38) != 0) {
        _free(*(undefined8 *)(param_1 + 0x40));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        puVar1 = *(ulong **)(param_1 + 0x20);
        puVar7 = puVar1;
        for (lVar3 = *(long *)(param_1 + 0x28); lVar3 != 0; lVar3 = lVar3 + -1) {
          uVar4 = *puVar7;
          uVar6 = uVar4 ^ 0x8000000000000000;
          if (-1 < (long)uVar4) {
            uVar6 = 1;
          }
          if ((uVar6 == 0) || (uVar6 != 1)) {
            if (puVar7[1] != 0) {
              lVar5 = 0x10;
              goto code_r0x0001017a642c;
            }
          }
          else if (uVar4 != 0) {
            lVar5 = 8;
code_r0x0001017a642c:
            _free(*(undefined8 *)((long)puVar7 + lVar5));
          }
          puVar7 = puVar7 + 4;
        }
code_r0x0001017a666c:
        if (*(long *)(param_1 + 0x18) == 0) {
          return;
        }
        break;
      }
      goto code_r0x0001017a67e8;
    case 6:
      if (*(long *)(param_1 + 0x58) == -0x8000000000000000 || *(long *)(param_1 + 0x58) == 0) {
        if (*(long *)(param_1 + 0x70) == -0x8000000000000000 || *(long *)(param_1 + 0x70) == 0)
        goto code_r0x0001017a65dc;
code_r0x0001017a67a0:
        _free(*(undefined8 *)(param_1 + 0x78));
        lVar3 = *(long *)(param_1 + 0x10);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x60));
        if (*(long *)(param_1 + 0x70) != -0x8000000000000000 && *(long *)(param_1 + 0x70) != 0)
        goto code_r0x0001017a67a0;
code_r0x0001017a65dc:
        lVar3 = *(long *)(param_1 + 0x10);
      }
      if (lVar3 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        goto code_r0x0001017a67b4;
      }
code_r0x0001017a67b8:
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x30);
code_r0x0001017a67c4:
        _free(uVar2);
      }
code_r0x0001017a67c8:
      if (*(long *)(param_1 + 0x40) == 0) {
        return;
      }
      puVar1 = *(ulong **)(param_1 + 0x48);
      break;
    case 7:
      if (*(long *)(param_1 + 0x38) != 0) {
        _free(*(undefined8 *)(param_1 + 0x40));
      }
      if (*(long *)(param_1 + 0x50) == -0x8000000000000000 || *(long *)(param_1 + 0x50) == 0) {
        lVar3 = *(long *)(param_1 + 0x10);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x58));
        lVar3 = *(long *)(param_1 + 0x10);
      }
      if (lVar3 != 0) {
        puVar1 = *(ulong **)(param_1 + 0x20);
        puVar7 = puVar1;
        for (lVar3 = *(long *)(param_1 + 0x28); lVar3 != 0; lVar3 = lVar3 + -1) {
          uVar4 = *puVar7;
          uVar6 = uVar4 ^ 0x8000000000000000;
          if (-1 < (long)uVar4) {
            uVar6 = 1;
          }
          if ((uVar6 == 0) || (uVar6 != 1)) {
            if (puVar7[1] != 0) {
              lVar5 = 0x10;
              goto code_r0x0001017a6630;
            }
          }
          else if (uVar4 != 0) {
            lVar5 = 8;
code_r0x0001017a6630:
            _free(*(undefined8 *)((long)puVar7 + lVar5));
          }
          puVar7 = puVar7 + 4;
        }
        goto code_r0x0001017a666c;
      }
code_r0x0001017a67e8:
      if (*(long *)(param_1 + 0x18) == 0) {
        return;
      }
      puVar1 = *(ulong **)(param_1 + 0x20);
      break;
    case 8:
      if (*(long *)(param_1 + 0x58) != -0x8000000000000000 && *(long *)(param_1 + 0x58) != 0) {
        _free(*(undefined8 *)(param_1 + 0x60));
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        _free(*(undefined8 *)(param_1 + 0x30));
      }
      puVar1 = *(ulong **)(param_1 + 0x48);
      FUN_1017a5c10(puVar1,*(undefined8 *)(param_1 + 0x50));
      lVar3 = *(long *)(param_1 + 0x40);
joined_r0x0001017a66f8:
      if (lVar3 == 0) {
LAB_1017a6838:
        return;
      }
      break;
    case 9:
      if (*(long *)(param_1 + 0x48) == -0x8000000000000000 || *(long *)(param_1 + 0x48) == 0) {
        if (*(long *)(param_1 + 0x60) == -0x8000000000000000 || *(long *)(param_1 + 0x60) == 0)
        goto code_r0x0001017a669c;
code_r0x0001017a6824:
        _free(*(undefined8 *)(param_1 + 0x68));
        lVar3 = *(long *)(param_1 + 0x10);
      }
      else {
        _free(*(undefined8 *)(param_1 + 0x50));
        if (*(long *)(param_1 + 0x60) != -0x8000000000000000 && *(long *)(param_1 + 0x60) != 0)
        goto code_r0x0001017a6824;
code_r0x0001017a669c:
        lVar3 = *(long *)(param_1 + 0x10);
      }
      if (lVar3 == 4) {
        return;
      }
      lVar3 = *(long *)(param_1 + 0x10);
      if (1 < lVar3) {
        if (lVar3 == 2) {
          if (*(long *)(param_1 + 0x18) == -0x8000000000000000 || *(long *)(param_1 + 0x18) == 0) {
            uVar6 = *(ulong *)(param_1 + 0x30);
          }
          else {
            _free(*(undefined8 *)(param_1 + 0x20));
            uVar6 = *(ulong *)(param_1 + 0x30);
          }
          if ((uVar6 & 0x7fffffffffffffff) != 0) {
            puVar1 = *(ulong **)(param_1 + 0x38);
            break;
          }
        }
        return;
      }
      if (lVar3 == 0) {
        if (*(long *)(param_1 + 0x18) == -0x8000000000000000 || *(long *)(param_1 + 0x18) == 0) {
          lVar3 = *(long *)(param_1 + 0x30);
        }
        else {
          _free(*(undefined8 *)(param_1 + 0x20));
          lVar3 = *(long *)(param_1 + 0x30);
        }
        if (lVar3 == -0x8000000000000000) {
          return;
        }
        puVar1 = *(ulong **)(param_1 + 0x38);
        lVar5 = *(long *)(param_1 + 0x40);
        if (lVar5 != 0) {
          puVar7 = puVar1 + 1;
          do {
            if (puVar7[-1] != 0) {
              _free(*puVar7);
            }
            puVar7 = puVar7 + 3;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar3 == 0) {
          return;
        }
      }
      else {
        if ((*(ulong *)(param_1 + 0x18) & 0x7fffffffffffffff) == 0) {
          return;
        }
        puVar1 = *(ulong **)(param_1 + 0x20);
      }
      break;
    case 10:
      if (*(long *)(param_1 + 0x10) != 0) {
        _free(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        _free(*(undefined8 *)(param_1 + 0x30));
      }
      if (*(long *)(param_1 + 0x58) != -0x8000000000000000 && *(long *)(param_1 + 0x58) != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x60);
        goto code_r0x0001017a67c4;
      }
      goto code_r0x0001017a67c8;
    case 0xb:
      if (*(long *)(param_1 + 0x10) == 0) {
        return;
      }
      goto code_r0x0001017a6480;
    default:
      goto LAB_1017a6838;
    case 0xd:
      if (*(long *)(param_1 + 0x10) == -0x8000000000000000 || *(long *)(param_1 + 0x10) == 0) {
        return;
      }
code_r0x0001017a6480:
      puVar1 = *(ulong **)(param_1 + 0x18);
    }
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_10b61b0a8)(puVar1);
    return;
  default:
    if (*(long *)(param_1 + 8) != 0) {
      puVar1 = *(ulong **)(param_1 + 0x10);
      goto code_r0x000108aa97c4;
    }
    break;
  case '\b':
    if (*(long *)(param_1 + 0x20) != 0) {
      _free(*(undefined8 *)(param_1 + 0x28));
    }
    if (*(long *)(param_1 + 8) != -0x8000000000000000 && *(long *)(param_1 + 8) != 0) {
      _free(*(undefined8 *)(param_1 + 0x10));
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      puVar1 = *(ulong **)(param_1 + 0x40);
      goto code_r0x000108aa97c4;
    }
    break;
  case '\t':
  case '\n':
    if (*(long *)(param_1 + 0x10) != 0) {
      puVar1 = *(ulong **)(param_1 + 0x18);
      goto code_r0x000108aa97c4;
    }
    break;
  case '\f':
    if (*(long *)(param_1 + 0x58) != -0x8000000000000000 && *(long *)(param_1 + 0x58) != 0) {
      _free(*(undefined8 *)(param_1 + 0x60));
    }
    if ((*(long *)(param_1 + 0x70) != -0x8000000000000000) && (*(long *)(param_1 + 0x70) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x78));
    }
    if ((-0x7fffffffffffffff < *(long *)(param_1 + 0x88)) && (*(long *)(param_1 + 0x88) != 0)) {
      puVar1 = *(ulong **)(param_1 + 0x90);
      goto code_r0x000108aa97c4;
    }
  }
  return;
}

