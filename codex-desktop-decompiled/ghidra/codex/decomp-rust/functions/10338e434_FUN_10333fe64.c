
/* WARNING: Possible PIC construction at 0x00010333ff00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103397430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103382c00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103397434) */
/* WARNING: Removing unreachable block (ram,0x000103382c04) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10333fe64(long param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  ulong *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 unaff_x20;
  long *plVar13;
  undefined8 unaff_x21;
  undefined8 *puVar14;
  undefined8 unaff_x22;
  ulong *puVar15;
  undefined8 unaff_x23;
  long lVar16;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined1 *puVar17;
  undefined8 unaff_x30;
  undefined *puVar18;
  
  puVar17 = &stack0xfffffffffffffff0;
  if (*(char *)(param_1 + 0x219) != '\0') {
    if (*(char *)(param_1 + 0x219) != '\x03') {
      return;
    }
    if ((*(char *)(param_1 + 0x78) == '\x03') && (*(char *)(param_1 + 0x30) == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_1 + 0x38);
      if (*(long *)(param_1 + 0x40) != 0) {
        (**(code **)(*(long *)(param_1 + 0x40) + 0x18))(*(undefined8 *)(param_1 + 0x48));
      }
    }
    pcVar3 = (char *)(param_1 + 0x80);
    if (*pcVar3 == '\x0e') {
      FUN_10338d31c(param_1 + 0x88);
      *(undefined1 *)(param_1 + 0x218) = 0;
      return;
    }
    unaff_x30 = 0x10333ff04;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar17;
SUB_10338e434:
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    switch(*pcVar3) {
    case '\0':
    case '\x04':
    case '\x05':
    case '\v':
      break;
    case '\x01':
    case '\x02':
      *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      puVar17 = (undefined1 *)((long)register0x00000008 + -0x10);
      uVar9 = *(ulong *)(pcVar3 + 8);
      lVar12 = 2;
      if (1 < uVar9) {
        lVar12 = uVar9 - 2;
      }
      switch(lVar12) {
      case 0:
        if (*(long *)(pcVar3 + 0x40) != -0x8000000000000000 && *(long *)(pcVar3 + 0x40) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x48));
        }
        if (*(long *)(pcVar3 + 0x10) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x18));
        }
        puVar5 = *(ulong **)(pcVar3 + 0x30);
        puVar15 = puVar5;
        for (lVar12 = *(long *)(pcVar3 + 0x38); lVar12 != 0; lVar12 = lVar12 + -1) {
          uVar6 = *puVar15;
          uVar9 = uVar6 ^ 0x8000000000000000;
          if (-1 < (long)uVar6) {
            uVar9 = 1;
          }
          if ((uVar9 == 0) || (uVar9 != 1)) {
            if (puVar15[1] != 0) {
              lVar8 = 0x10;
              goto code_r0x000103397068;
            }
          }
          else if (uVar6 != 0) {
            lVar8 = 8;
code_r0x000103397068:
            _free(*(undefined8 *)((long)puVar15 + lVar8));
          }
          puVar15 = puVar15 + 4;
        }
        lVar12 = *(long *)(pcVar3 + 0x28);
        goto joined_r0x000103397440;
      case 1:
        if (*(long *)(pcVar3 + 0x10) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x18));
        }
        lVar12 = *(long *)(pcVar3 + 0x30);
        lVar8 = *(long *)(pcVar3 + 0x38);
        if (lVar8 != 0) {
          puVar14 = (undefined8 *)(lVar12 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (*(long *)(pcVar3 + 0x28) != 0) {
          _free(lVar12);
        }
        lVar12 = *(long *)(pcVar3 + 0x40);
        if (lVar12 != -0x8000000000000000) {
          lVar8 = *(long *)(pcVar3 + 0x48);
          lVar16 = *(long *)(pcVar3 + 0x50);
          if (lVar16 != 0) {
            puVar14 = (undefined8 *)(lVar8 + 0x10);
            do {
              if (puVar14[-1] != 0) {
                _free(*puVar14);
              }
              puVar14 = puVar14 + 4;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          if (lVar12 != 0) {
            _free(lVar8);
          }
        }
        if (*(long *)(pcVar3 + 0x58) == -0x8000000000000000 || *(long *)(pcVar3 + 0x58) == 0) {
          return;
        }
        puVar5 = *(ulong **)(pcVar3 + 0x60);
        break;
      case 2:
        if (*(long *)(pcVar3 + 0x90) != -0x8000000000000000 && *(long *)(pcVar3 + 0x90) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x98));
        }
        if (*(long *)(pcVar3 + 0xa8) != -0x8000000000000000 && *(long *)(pcVar3 + 0xa8) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0xb0));
        }
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        lVar12 = *(long *)(pcVar3 + 0x20);
        lVar8 = *(long *)(pcVar3 + 0x28);
        if (lVar8 != 0) {
          puVar14 = (undefined8 *)(lVar12 + 8);
          do {
            if (puVar14[-1] != 0) {
              _free(*puVar14);
            }
            puVar14 = puVar14 + 3;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (*(long *)(pcVar3 + 0x18) != 0) {
          _free(lVar12);
        }
        if (*(long *)(pcVar3 + 0x30) == -0x8000000000000000 || *(long *)(pcVar3 + 0x30) == 0) {
          lVar12 = *(long *)(pcVar3 + 0x60);
        }
        else {
          _free(*(undefined8 *)(pcVar3 + 0x38));
          lVar12 = *(long *)(pcVar3 + 0x60);
        }
        if (lVar12 != 0) {
          FUN_1032b5104();
        }
        if ((*(long *)(pcVar3 + 0x48) == -0x8000000000000000) || (*(long *)(pcVar3 + 0x48) == 0)) {
          return;
        }
        puVar5 = *(ulong **)(pcVar3 + 0x50);
        break;
      case 3:
        if (*(long *)(pcVar3 + 0x58) != -0x8000000000000000 && *(long *)(pcVar3 + 0x58) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x60));
        }
        if (*(long *)(pcVar3 + 0x10) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x18));
        }
        if ((*(long *)(pcVar3 + 0x70) != -0x8000000000000000) && (*(long *)(pcVar3 + 0x70) != 0)) {
          uVar11 = *(undefined8 *)(pcVar3 + 0x78);
code_r0x0001033974fc:
          _free(uVar11);
        }
        goto code_r0x000103397500;
      case 4:
        if (*(long *)(pcVar3 + 0x28) == -0x8000000000000000 || *(long *)(pcVar3 + 0x28) == 0) {
          if (*(long *)(pcVar3 + 0x40) == -0x8000000000000000 || *(long *)(pcVar3 + 0x40) == 0)
          goto code_r0x000103397108;
code_r0x000103397484:
          _free(*(undefined8 *)(pcVar3 + 0x48));
          lVar12 = *(long *)(pcVar3 + 0x58);
        }
        else {
          _free(*(undefined8 *)(pcVar3 + 0x30));
          if (*(long *)(pcVar3 + 0x40) != -0x8000000000000000 && *(long *)(pcVar3 + 0x40) != 0)
          goto code_r0x000103397484;
code_r0x000103397108:
          lVar12 = *(long *)(pcVar3 + 0x58);
        }
        if ((lVar12 != -0x8000000000000000) && (lVar12 != 0)) {
          _free(*(undefined8 *)(pcVar3 + 0x60));
        }
        if (*(long *)(pcVar3 + 0x10) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x18));
        }
        puVar17 = *(undefined1 **)((long)register0x00000008 + -0x10);
        puVar18 = *(undefined **)((long)register0x00000008 + -8);
        puVar5 = *(ulong **)((long)register0x00000008 + -0x20);
        puVar15 = *(ulong **)((long)register0x00000008 + -0x30);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x28);
        unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0x40);
        uVar9 = *(ulong *)((long)register0x00000008 + -0x38);
        puVar2 = (undefined1 *)register0x00000008;
        puVar1 = (ulong *)(pcVar3 + 0x70);
        puVar10 = *(ulong **)((long)register0x00000008 + -0x18);
SUB_103382b94:
        while( true ) {
          puVar4 = puVar1;
          *(undefined8 *)(puVar2 + -0x40) = unaff_x24;
          *(ulong *)(puVar2 + -0x38) = uVar9;
          *(ulong **)(puVar2 + -0x30) = puVar15;
          *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
          *(ulong **)(puVar2 + -0x20) = puVar5;
          *(ulong **)(puVar2 + -0x18) = puVar10;
          *(undefined1 **)(puVar2 + -0x10) = puVar17;
          *(undefined **)(puVar2 + -8) = puVar18;
          puVar17 = puVar2 + -0x10;
          uVar6 = *puVar4;
          uVar9 = uVar6 ^ 0x8000000000000000;
          if (-1 < (long)uVar6) {
            uVar9 = 5;
          }
          if (uVar9 < 3) {
            return;
          }
          if (uVar9 == 3) {
            if (puVar4[1] == 0) {
              return;
            }
            puVar5 = (ulong *)puVar4[2];
            goto code_r0x000108aa97c4;
          }
          if (uVar9 != 4) {
            uVar9 = puVar4[4];
            if ((uVar9 != 0) && (uVar9 * 9 != -0x11)) {
              _free(puVar4[3] + uVar9 * -8 + -8);
            }
            puVar5 = (ulong *)puVar4[1];
            FUN_1032aa3b0(puVar5,puVar4[2]);
            goto joined_r0x000103382c50;
          }
          puVar5 = (ulong *)puVar4[2];
          uVar9 = puVar4[3];
          if (uVar9 == 0) break;
          puVar15 = puVar5 + 9;
          puVar18 = (undefined *)0x103382c04;
          puVar2 = puVar2 + -0x40;
          puVar1 = puVar5;
          puVar10 = puVar4;
        }
        uVar6 = puVar4[1];
joined_r0x000103382c50:
        if (uVar6 == 0) {
          return;
        }
        break;
      case 5:
        if (*(long *)(pcVar3 + 0x38) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x40));
        }
        if (*(long *)(pcVar3 + 0x10) != 0) {
          puVar5 = *(ulong **)(pcVar3 + 0x20);
          puVar15 = puVar5;
          for (lVar12 = *(long *)(pcVar3 + 0x28); lVar12 != 0; lVar12 = lVar12 + -1) {
            uVar6 = *puVar15;
            uVar9 = uVar6 ^ 0x8000000000000000;
            if (-1 < (long)uVar6) {
              uVar9 = 1;
            }
            if ((uVar9 == 0) || (uVar9 != 1)) {
              if (puVar15[1] != 0) {
                lVar8 = 0x10;
                goto code_r0x00010339715c;
              }
            }
            else if (uVar6 != 0) {
              lVar8 = 8;
code_r0x00010339715c:
              _free(*(undefined8 *)((long)puVar15 + lVar8));
            }
            puVar15 = puVar15 + 4;
          }
code_r0x00010339739c:
          if (*(long *)(pcVar3 + 0x18) == 0) {
            return;
          }
          break;
        }
        goto code_r0x000103397530;
      case 6:
        if (*(long *)(pcVar3 + 0x58) == -0x8000000000000000 || *(long *)(pcVar3 + 0x58) == 0) {
          if (*(long *)(pcVar3 + 0x70) == -0x8000000000000000 || *(long *)(pcVar3 + 0x70) == 0)
          goto code_r0x00010339730c;
code_r0x0001033974e8:
          _free(*(undefined8 *)(pcVar3 + 0x78));
          lVar12 = *(long *)(pcVar3 + 0x10);
        }
        else {
          _free(*(undefined8 *)(pcVar3 + 0x60));
          if (*(long *)(pcVar3 + 0x70) != -0x8000000000000000 && *(long *)(pcVar3 + 0x70) != 0)
          goto code_r0x0001033974e8;
code_r0x00010339730c:
          lVar12 = *(long *)(pcVar3 + 0x10);
        }
        if (lVar12 != 0) {
          uVar11 = *(undefined8 *)(pcVar3 + 0x18);
          goto code_r0x0001033974fc;
        }
code_r0x000103397500:
        if (*(long *)(pcVar3 + 0x28) != 0) {
          uVar11 = *(undefined8 *)(pcVar3 + 0x30);
code_r0x00010339750c:
          _free(uVar11);
        }
code_r0x000103397510:
        if (*(long *)(pcVar3 + 0x40) == 0) {
          return;
        }
        puVar5 = *(ulong **)(pcVar3 + 0x48);
        break;
      case 7:
        if (*(long *)(pcVar3 + 0x38) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x40));
        }
        if (*(long *)(pcVar3 + 0x50) == -0x8000000000000000 || *(long *)(pcVar3 + 0x50) == 0) {
          lVar12 = *(long *)(pcVar3 + 0x10);
        }
        else {
          _free(*(undefined8 *)(pcVar3 + 0x58));
          lVar12 = *(long *)(pcVar3 + 0x10);
        }
        if (lVar12 != 0) {
          puVar5 = *(ulong **)(pcVar3 + 0x20);
          puVar15 = puVar5;
          for (lVar12 = *(long *)(pcVar3 + 0x28); lVar12 != 0; lVar12 = lVar12 + -1) {
            uVar6 = *puVar15;
            uVar9 = uVar6 ^ 0x8000000000000000;
            if (-1 < (long)uVar6) {
              uVar9 = 1;
            }
            if ((uVar9 == 0) || (uVar9 != 1)) {
              if (puVar15[1] != 0) {
                lVar8 = 0x10;
                goto code_r0x00010339735c;
              }
            }
            else if (uVar6 != 0) {
              lVar8 = 8;
code_r0x00010339735c:
              _free(*(undefined8 *)((long)puVar15 + lVar8));
            }
            puVar15 = puVar15 + 4;
          }
          goto code_r0x00010339739c;
        }
code_r0x000103397530:
        if (*(long *)(pcVar3 + 0x18) == 0) {
          return;
        }
        puVar5 = *(ulong **)(pcVar3 + 0x20);
        break;
      case 8:
        if (*(long *)(pcVar3 + 0x58) != -0x8000000000000000 && *(long *)(pcVar3 + 0x58) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x60));
        }
        if (*(long *)(pcVar3 + 0x10) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x18));
        }
        if (*(long *)(pcVar3 + 0x28) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x30));
        }
        puVar5 = *(ulong **)(pcVar3 + 0x48);
        uVar9 = *(ulong *)(pcVar3 + 0x50);
        if (uVar9 != 0) {
          puVar15 = puVar5 + 9;
          puVar18 = &UNK_103397434;
          puVar2 = (undefined1 *)((long)register0x00000008 + -0x40);
          puVar1 = puVar5;
          puVar10 = (ulong *)(pcVar3 + 8);
          goto SUB_103382b94;
        }
        lVar12 = *(long *)(pcVar3 + 0x40);
joined_r0x000103397440:
        if (lVar12 == 0) {
LAB_103397580:
          return;
        }
        break;
      case 9:
        if (*(long *)(pcVar3 + 0x48) == -0x8000000000000000 || *(long *)(pcVar3 + 0x48) == 0) {
          if (*(long *)(pcVar3 + 0x60) == -0x8000000000000000 || *(long *)(pcVar3 + 0x60) == 0)
          goto code_r0x0001033973cc;
code_r0x00010339756c:
          _free(*(undefined8 *)(pcVar3 + 0x68));
          lVar12 = *(long *)(pcVar3 + 0x10);
        }
        else {
          _free(*(undefined8 *)(pcVar3 + 0x50));
          if (*(long *)(pcVar3 + 0x60) != -0x8000000000000000 && *(long *)(pcVar3 + 0x60) != 0)
          goto code_r0x00010339756c;
code_r0x0001033973cc:
          lVar12 = *(long *)(pcVar3 + 0x10);
        }
        if (lVar12 == 4) {
          return;
        }
        *(undefined8 *)((long)register0x00000008 + -0x30) =
             *(undefined8 *)((long)register0x00000008 + -0x30);
        *(undefined8 *)((long)register0x00000008 + -0x28) =
             *(undefined8 *)((long)register0x00000008 + -0x28);
        *(undefined8 *)((long)register0x00000008 + -0x20) =
             *(undefined8 *)((long)register0x00000008 + -0x20);
        *(undefined8 *)((long)register0x00000008 + -0x18) =
             *(undefined8 *)((long)register0x00000008 + -0x18);
        *(undefined8 *)((long)register0x00000008 + -0x10) =
             *(undefined8 *)((long)register0x00000008 + -0x10);
        *(undefined8 *)((long)register0x00000008 + -8) =
             *(undefined8 *)((long)register0x00000008 + -8);
        lVar12 = *(long *)(pcVar3 + 0x10);
        if (lVar12 < 2) {
          if (lVar12 == 0) {
            if (*(long *)(pcVar3 + 0x18) == -0x8000000000000000 || *(long *)(pcVar3 + 0x18) == 0) {
              lVar12 = *(long *)(pcVar3 + 0x30);
            }
            else {
              _free(*(undefined8 *)(pcVar3 + 0x20));
              lVar12 = *(long *)(pcVar3 + 0x30);
            }
            if (lVar12 != -0x8000000000000000) {
              puVar5 = *(ulong **)(pcVar3 + 0x38);
              lVar8 = *(long *)(pcVar3 + 0x40);
              if (lVar8 != 0) {
                puVar15 = puVar5 + 1;
                do {
                  if (puVar15[-1] != 0) {
                    _free(*puVar15);
                  }
                  puVar15 = puVar15 + 3;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
              }
              if (lVar12 != 0) break;
            }
          }
          else if ((*(ulong *)(pcVar3 + 0x18) & 0x7fffffffffffffff) != 0) {
            puVar5 = *(ulong **)(pcVar3 + 0x20);
            break;
          }
        }
        else if (lVar12 == 2) {
          if (*(long *)(pcVar3 + 0x18) == -0x8000000000000000 || *(long *)(pcVar3 + 0x18) == 0) {
            uVar9 = *(ulong *)(pcVar3 + 0x30);
          }
          else {
            _free(*(undefined8 *)(pcVar3 + 0x20));
            uVar9 = *(ulong *)(pcVar3 + 0x30);
          }
          if ((uVar9 & 0x7fffffffffffffff) != 0) {
            puVar5 = *(ulong **)(pcVar3 + 0x38);
            break;
          }
        }
        return;
      case 10:
        if (*(long *)(pcVar3 + 0x10) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x18));
        }
        if (*(long *)(pcVar3 + 0x28) != 0) {
          _free(*(undefined8 *)(pcVar3 + 0x30));
        }
        if (*(long *)(pcVar3 + 0x58) != -0x8000000000000000 && *(long *)(pcVar3 + 0x58) != 0) {
          uVar11 = *(undefined8 *)(pcVar3 + 0x60);
          goto code_r0x00010339750c;
        }
        goto code_r0x000103397510;
      case 0xb:
        if (*(long *)(pcVar3 + 0x10) == 0) {
          return;
        }
        goto code_r0x0001033971b0;
      default:
        goto LAB_103397580;
      case 0xd:
        if (*(long *)(pcVar3 + 0x10) == -0x8000000000000000 || *(long *)(pcVar3 + 0x10) == 0) {
          return;
        }
code_r0x0001033971b0:
        puVar5 = *(ulong **)(pcVar3 + 0x18);
      }
      goto code_r0x000108aa97c4;
    default:
      if (*(long *)(pcVar3 + 8) != 0) {
        puVar5 = *(ulong **)(pcVar3 + 0x10);
        goto code_r0x000108aa97c4;
      }
      break;
    case '\b':
      if (*(long *)(pcVar3 + 0x20) != 0) {
        _free(*(undefined8 *)(pcVar3 + 0x28));
      }
      if (*(long *)(pcVar3 + 8) == -0x8000000000000000 || *(long *)(pcVar3 + 8) == 0) {
        lVar12 = *(long *)(pcVar3 + 0x38);
      }
      else {
        _free(*(undefined8 *)(pcVar3 + 0x10));
        lVar12 = *(long *)(pcVar3 + 0x38);
      }
      if (lVar12 != 0) {
        puVar5 = *(ulong **)(pcVar3 + 0x40);
        goto code_r0x000108aa97c4;
      }
      break;
    case '\t':
    case '\n':
      if (*(long *)(pcVar3 + 0x10) != 0) {
        puVar5 = *(ulong **)(pcVar3 + 0x18);
        goto code_r0x000108aa97c4;
      }
      break;
    case '\f':
      if (*(long *)(pcVar3 + 0x58) == -0x8000000000000000 || *(long *)(pcVar3 + 0x58) == 0) {
        if (*(long *)(pcVar3 + 0x70) == -0x8000000000000000 || *(long *)(pcVar3 + 0x70) == 0)
        goto code_r0x00010338e4b8;
code_r0x00010338e530:
        _free(*(undefined8 *)(pcVar3 + 0x78));
        lVar12 = *(long *)(pcVar3 + 0x88);
      }
      else {
        _free(*(undefined8 *)(pcVar3 + 0x60));
        if (*(long *)(pcVar3 + 0x70) != -0x8000000000000000 && *(long *)(pcVar3 + 0x70) != 0)
        goto code_r0x00010338e530;
code_r0x00010338e4b8:
        lVar12 = *(long *)(pcVar3 + 0x88);
      }
      if ((-0x7fffffffffffffff < lVar12) && (lVar12 != 0)) {
        puVar5 = *(ulong **)(pcVar3 + 0x90);
        goto code_r0x000108aa97c4;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0x150) != '\x0e') {
    pcVar3 = (char *)(param_1 + 0x150);
    goto SUB_10338e434;
  }
  uVar6 = *(ulong *)(param_1 + 0x158);
  uVar9 = uVar6 ^ 0x8000000000000000;
  if (-1 < (long)uVar6) {
    uVar9 = 10;
  }
  switch(uVar9) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xc:
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x18:
    break;
  case 1:
  case 0xb:
  case 0xf:
  case 0x19:
  case 0x1a:
  case 0x1b:
    uVar9 = *(ulong *)(param_1 + 0x160);
    goto joined_r0x00010338d638;
  case 10:
    if (uVar6 != 0) {
      _free(*(undefined8 *)(param_1 + 0x160));
    }
    if (*(long *)(param_1 + 0x170) != -0x8000000000000000 && *(long *)(param_1 + 0x170) != 0) {
      _free(*(undefined8 *)(param_1 + 0x178));
    }
    if ((*(long *)(param_1 + 0x188) != -0x8000000000000000) && (*(long *)(param_1 + 0x188) != 0)) {
      _free(*(undefined8 *)(param_1 + 400));
    }
    if ((*(long *)(param_1 + 0x1a0) != -0x8000000000000000) && (*(long *)(param_1 + 0x1a0) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x1a8));
    }
    if ((*(long *)(param_1 + 0x1b8) != -0x8000000000000000) && (*(long *)(param_1 + 0x1b8) != 0)) {
      _free(*(undefined8 *)(param_1 + 0x1c0));
    }
    if ((*(long *)(param_1 + 0x1d0) != -0x8000000000000000) && (*(long *)(param_1 + 0x1d0) != 0)) {
      puVar5 = *(ulong **)(param_1 + 0x1d8);
      goto code_r0x000108aa97c4;
    }
    break;
  case 0xd:
    if (-0x7fffffffffffffff < *(long *)(param_1 + 0x178) && *(long *)(param_1 + 0x178) != 0) {
      _free(*(undefined8 *)(param_1 + 0x180));
    }
    lVar12 = *(long *)(param_1 + 400);
    if (lVar12 != 0) {
      if (*(long *)(lVar12 + 0x50) != -0x8000000000000000 && *(long *)(lVar12 + 0x50) != 0) {
        _free(*(undefined8 *)(lVar12 + 0x58));
      }
      if (*(long *)(lVar12 + 0x68) != -0x8000000000000000 && *(long *)(lVar12 + 0x68) != 0) {
        _free(*(undefined8 *)(lVar12 + 0x70));
      }
      if (-0x7fffffffffffffff < *(long *)(lVar12 + 0x80) && *(long *)(lVar12 + 0x80) != 0) {
        _free(*(undefined8 *)(lVar12 + 0x88));
      }
      _free(lVar12);
    }
    if (*(long *)(param_1 + 0x160) == -0x8000000000000000) {
      return;
    }
    if (*(long *)(param_1 + 0x160) == 0) {
      return;
    }
    goto code_r0x00010338d378;
  case 0x10:
    uVar11 = *(undefined8 *)(param_1 + 0x178);
    func_0x00010337f4f4(uVar11);
    _free(uVar11);
    if (*(long *)(param_1 + 0x160) != -0x8000000000000000 && *(long *)(param_1 + 0x160) != 0) {
      puVar5 = *(ulong **)(param_1 + 0x168);
      goto code_r0x000108aa97c4;
    }
    break;
  case 0x11:
    puVar5 = *(ulong **)(param_1 + 0x160);
    func_0x00010337f4f4(puVar5);
    goto code_r0x000108aa97c4;
  case 0x15:
    uVar9 = *(ulong *)(param_1 + 0x160) & 0x7fffffffffffffff;
joined_r0x00010338d638:
    if (uVar9 != 0) {
code_r0x00010338d378:
      puVar5 = *(ulong **)(param_1 + 0x168);
code_r0x000108aa97c4:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_10b61b0a8)(puVar5);
      return;
    }
    break;
  case 0x17:
    uVar9 = *(ulong *)(param_1 + 0x160);
    lVar12 = 0;
    if (0x8000000000000000 < uVar9) {
      lVar12 = uVar9 + 0x7fffffffffffffff;
    }
    if (lVar12 == 0) {
      plVar13 = *(long **)(param_1 + 0x198);
      if (*plVar13 != 0) {
        _free(plVar13[1]);
      }
      if (plVar13[4] != 0) {
        _free(plVar13[5]);
      }
      if (plVar13[8] != 0) {
        _free(plVar13[9]);
      }
      _free(plVar13);
      if (uVar9 != 0x8000000000000001) {
        if ((uVar9 != 0x8000000000000000) && (uVar9 != 0)) {
          _free(*(undefined8 *)(param_1 + 0x168));
        }
        if ((*(ulong *)(param_1 + 0x178) & 0x7fffffffffffffff) != 0) {
          puVar5 = *(ulong **)(param_1 + 0x180);
          goto code_r0x000108aa97c4;
        }
      }
    }
    else if (lVar12 == 1) {
      puVar5 = *(ulong **)(param_1 + 0x168);
      if (*puVar5 != 0) {
        _free(puVar5[1]);
      }
      if (puVar5[4] != 0) {
        _free(puVar5[5]);
      }
      if (puVar5[8] != 0) {
        _free(puVar5[9]);
      }
      goto code_r0x000108aa97c4;
    }
    return;
  case 0x1c:
    uVar9 = *(ulong *)(param_1 + 0x160);
    if ((uVar9 & 3) == 1) {
      puVar5 = (ulong *)(uVar9 - 1);
      uVar6 = *puVar5;
      puVar14 = *(undefined8 **)(uVar9 + 7);
      pcVar7 = (code *)*puVar14;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar6);
      }
      if (puVar14[1] != 0) {
        _free(uVar6);
      }
      goto code_r0x000108aa97c4;
    }
    break;
  case 0x1d:
    puVar5 = *(ulong **)(param_1 + 0x160);
    if (*puVar5 == 1) {
      FUN_10337f5d0(puVar5 + 1);
    }
    else if ((*puVar5 == 0) && (puVar5[2] != 0)) {
      _free(puVar5[1]);
    }
    goto code_r0x000108aa97c4;
  case 0x1e:
    puVar5 = *(ulong **)(param_1 + 0x168);
    if (puVar5 != (ulong *)0x0) {
      puVar14 = *(undefined8 **)(param_1 + 0x170);
      pcVar7 = (code *)*puVar14;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(puVar5);
      }
      if (puVar14[1] != 0) goto code_r0x000108aa97c4;
    }
    break;
  default:
    if (*(long *)(param_1 + 0x160) != 0) {
      _free(*(undefined8 *)(param_1 + 0x168));
    }
    if (*(long *)(param_1 + 0x178) != -0x8000000000000000 && *(long *)(param_1 + 0x178) != 0) {
      puVar5 = *(ulong **)(param_1 + 0x180);
      goto code_r0x000108aa97c4;
    }
  }
  return;
}

