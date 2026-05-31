
/* WARNING: Removing unreachable block (ram,0x0001003e2e38) */
/* WARNING: Removing unreachable block (ram,0x0001003e2e78) */
/* WARNING: Removing unreachable block (ram,0x0001003e2e84) */
/* WARNING: Removing unreachable block (ram,0x0001003e2e44) */
/* WARNING: Removing unreachable block (ram,0x0001003e2e88) */
/* WARNING: Removing unreachable block (ram,0x0001003e2e54) */
/* WARNING: Removing unreachable block (ram,0x0001003e2e74) */
/* WARNING: Removing unreachable block (ram,0x0001003e2e9c) */
/* WARNING: Removing unreachable block (ram,0x0001003e2eac) */
/* WARNING: Removing unreachable block (ram,0x0001003e2eb4) */
/* WARNING: Removing unreachable block (ram,0x0001003e2ea4) */

void FUN_1003e2b44(undefined8 *param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long unaff_x25;
  long unaff_x26;
  long unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 uVar12;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  undefined8 *in_stack_000000c0;
  undefined8 *in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  undefined8 *in_stack_000000e0;
  undefined8 *in_stack_000000e8;
  undefined8 *in_stack_000000f0;
  undefined8 *in_stack_00000150;
  undefined8 *in_stack_00000158;
  
  while (iVar4 = __ZN4core3fmt5write17h64810b21425781ecE(param_1,param_2,s__108ac988c,param_4),
        iVar4 == 0) {
    while( true ) {
      do {
        lVar5 = unaff_x25;
        if (lVar5 == unaff_x26) {
          __ZN13clap_complete3aot9generator5utils11subcommands17h8504c4bbedf1a4b1E
                    (unaff_x29 + -0xd8,in_stack_00000010);
          lVar5 = *(long *)(unaff_x29 + -0xd8);
          puVar1 = *(undefined8 **)(unaff_x29 + -0xd0);
          lVar6 = *(long *)(unaff_x29 + -200);
          puVar7 = puVar1 + lVar6 * 6;
          *(undefined8 **)(unaff_x29 + -0xd8) = puVar1;
          *(long *)(unaff_x29 + -200) = lVar5;
          *(undefined8 **)(unaff_x29 + -0xc0) = puVar7;
          puVar10 = puVar1;
          if (lVar6 == 0) goto LAB_1003e2d74;
          puVar2 = puVar1;
          goto LAB_1003e2d00;
        }
        unaff_x25 = lVar5 + 0x280;
      } while ((*(long *)(lVar5 + 0x250) != 0) || (*(int *)(lVar5 + 0x270) != 0x110000));
      in_stack_000000b8 = lVar5;
      __ZN13clap_complete3aot9generator5utils15possible_values17h06c83c29f478b9a9E(&stack0x000000c0)
      ;
      puVar1 = in_stack_000000c8;
      puVar10 = in_stack_000000c0;
      if (in_stack_000000c0 == unaff_x28) break;
      puVar8 = in_stack_000000c8 + in_stack_000000d0 * 9;
      in_stack_000000d8 = in_stack_000000c8;
      in_stack_000000e8 = in_stack_000000c0;
      puVar7 = in_stack_000000c8;
      puVar2 = in_stack_000000c8;
      in_stack_000000f0 = puVar8;
      if (in_stack_000000d0 == 0) {
LAB_1003e2c24:
        in_stack_000000e0 = puVar7;
        if ((long)puVar8 - (long)puVar7 != 0) {
          uVar9 = (ulong)((long)puVar8 - (long)puVar7) / 0x48;
          puVar7 = puVar7 + 4;
          do {
            if ((puVar7[-1] & 0x7fffffffffffffff) == 0) {
              lVar5 = puVar7[-4];
            }
            else {
              _free(*puVar7);
              lVar5 = puVar7[-4];
            }
            if (lVar5 != 0) {
              _free(puVar7[-3]);
            }
            puVar7 = puVar7 + 9;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else {
        do {
          puVar7 = puVar2 + 9;
          puVar11 = (undefined8 *)*puVar2;
          if (puVar11 == unaff_x28) goto LAB_1003e2c24;
          *(undefined8 **)(unaff_x29 + -0xd8) = puVar11;
          uVar12 = puVar2[7];
          *(undefined8 *)(unaff_x27 + 0x40) = puVar2[8];
          *(undefined8 *)(unaff_x27 + 0x38) = uVar12;
          uVar12 = puVar2[5];
          *(undefined8 *)(unaff_x27 + 0x30) = puVar2[6];
          *(undefined8 *)(unaff_x27 + 0x28) = uVar12;
          uVar12 = puVar2[1];
          *(undefined8 *)(unaff_x27 + 0x10) = puVar2[2];
          *(undefined8 *)(unaff_x27 + 8) = uVar12;
          uVar12 = puVar2[3];
          *(undefined8 *)(unaff_x27 + 0x20) = puVar2[4];
          *(undefined8 *)(unaff_x27 + 0x18) = uVar12;
          *(undefined8 *)(unaff_x29 + -0x90) = *(undefined8 *)(unaff_x29 + -0xa8);
          *(undefined8 *)(unaff_x29 + -0x88) = *(undefined8 *)(unaff_x29 + -0xa0);
          *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x90;
          *(undefined **)(unaff_x29 + -0x78) = &DAT_1003e926c;
          iVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                            (&stack0x000000a0,&UNK_10b2087d8,s__108ac988c,unaff_x29 + -0x80);
          if (iVar4 != 0) {
            in_stack_000000e0 = puVar7;
            FUN_107c05cb4(&UNK_108c9734c,0x1f,unaff_x29 + -0x61,&UNK_10b208ad8,&UNK_10b2088e0);
            goto LAB_1003e2f8c;
          }
          if ((*(ulong *)(unaff_x29 + -0xc0) & 0x7fffffffffffffff) != 0) {
            _free(*(undefined8 *)(unaff_x29 + -0xb8));
          }
          if (puVar11 != (undefined8 *)0x0) {
            _free(*(undefined8 *)(unaff_x29 + -0xd0));
          }
          puVar2 = puVar7;
        } while (puVar7 != puVar8);
      }
      if (puVar10 != (undefined8 *)0x0) {
        _free(puVar1);
      }
    }
    *(long **)(unaff_x29 + -0xd8) = &stack0x000000b8;
    *(undefined **)(unaff_x29 + -0xd0) = &DAT_1003e9290;
    param_1 = &stack0x000000a0;
    param_4 = unaff_x29 + -0xd8;
    param_2 = &UNK_10b2087d8;
  }
  FUN_107c05cb4(&UNK_108c9734c,0x1f,unaff_x29 + -0x61,&UNK_10b208ad8,&UNK_10b2088f8);
LAB_1003e2f8c:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003e2f90);
  (*pcVar3)();
LAB_1003e2d74:
  *(undefined8 **)(unaff_x29 + -0xd0) = puVar10;
  if ((long)puVar7 - (long)puVar10 != 0) {
    uVar9 = (ulong)((long)puVar7 - (long)puVar10) / 0x30;
    puVar10 = puVar10 + 4;
    do {
      if (puVar10[-4] != 0) {
        _free(puVar10[-3]);
      }
      if (puVar10[-1] != 0) {
        _free(*puVar10);
      }
      puVar10 = puVar10 + 6;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  goto LAB_1003e2dd4;
  while( true ) {
    lVar6 = puVar2[3];
    uVar12 = puVar2[4];
    in_stack_000000c8 = (undefined8 *)&DAT_1003edd84;
    in_stack_000000c0 = &stack0x000000d8;
    in_stack_000000d8 = (undefined8 *)*puVar2;
    in_stack_000000e0 = in_stack_00000150;
    in_stack_000000e8 = in_stack_00000158;
    iVar4 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&stack0x000000a0,&UNK_10b2087d8,s__108ac988c,&stack0x000000c0);
    if (iVar4 != 0) {
      *(undefined8 **)(unaff_x29 + -0xd0) = puVar10;
      FUN_107c05cb4(&UNK_108c9734c,0x1f,unaff_x29 + -0x61,&UNK_10b208ad8,&UNK_10b2088c8);
      goto LAB_1003e2f8c;
    }
    if (in_stack_000000d8 != (undefined8 *)0x0) {
      _free(in_stack_000000e0);
    }
    if (lVar6 != 0) {
      _free(uVar12);
    }
    puVar2 = puVar10;
    if (puVar10 == puVar7) break;
LAB_1003e2d00:
    puVar10 = puVar2 + 6;
    in_stack_00000158 = (undefined8 *)puVar2[2];
    in_stack_00000150 = (undefined8 *)puVar2[1];
    if ((undefined8 *)*puVar2 == (undefined8 *)0x8000000000000000) goto LAB_1003e2d74;
  }
LAB_1003e2dd4:
  if (lVar5 != 0) {
    _free(puVar1);
  }
  if (in_stack_000000b0 != 0) {
    in_stack_000000b0 = in_stack_000000b0 + -1;
  }
  in_stack_00000008[1] = in_stack_000000a8;
  *in_stack_00000008 = in_stack_000000a0;
  in_stack_00000008[2] = in_stack_000000b0;
  return;
}

