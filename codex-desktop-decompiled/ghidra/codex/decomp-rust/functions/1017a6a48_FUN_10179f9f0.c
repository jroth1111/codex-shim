
/* WARNING: Possible PIC construction at 0x00010179fa00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017a6b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001017a6af0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001017a6b48) */
/* WARNING: Removing unreachable block (ram,0x00010179fa04) */
/* WARNING: Removing unreachable block (ram,0x0001017a6af4) */

void FUN_10179f9f0(byte *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte *unaff_x20;
  long unaff_x21;
  byte *unaff_x22;
  long unaff_x23;
  byte *unaff_x24;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  puVar5 = &stack0xfffffffffffffff0;
  uVar6 = 0x10179fa04;
  puVar2 = &stack0xffffffffffffffe0;
  pbVar3 = param_1;
SUB_1017a6a48:
  do {
    *(byte **)(puVar2 + -0x40) = unaff_x24;
    *(long *)(puVar2 + -0x38) = unaff_x23;
    *(byte **)(puVar2 + -0x30) = unaff_x22;
    *(long *)(puVar2 + -0x28) = unaff_x21;
    *(byte **)(puVar2 + -0x20) = unaff_x20;
    *(byte **)(puVar2 + -0x18) = param_1;
    *(undefined1 **)(puVar2 + -0x10) = puVar5;
    *(undefined8 *)(puVar2 + -8) = uVar6;
    puVar5 = puVar2 + -0x10;
    bVar1 = *pbVar3;
    uVar4 = (uint)bVar1;
    unaff_x20 = pbVar3;
    if (bVar1 < 0xd) {
      if (bVar1 < 0xc) {
        return;
      }
      if (uVar4 == 0xc) {
LAB_1017a6a9c:
        if (*(long *)(pbVar3 + 8) == 0) {
          return;
        }
        param_1 = *(byte **)(pbVar3 + 0x10);
        goto LAB_1017a6b54;
      }
    }
    else if (bVar1 < 0x11) {
      if (uVar4 - 0xf < 2 || uVar4 == 0xd) {
        return;
      }
      if (uVar4 == 0xe) goto LAB_1017a6a9c;
    }
    else if (uVar4 < 0x13) {
      if (uVar4 == 0x11) {
        param_1 = *(byte **)(pbVar3 + 8);
        func_0x0001017a6a48(param_1);
        goto LAB_1017a6b54;
      }
      if (uVar4 == 0x12) {
        return;
      }
    }
    else {
      if (uVar4 == 0x13) {
        param_1 = *(byte **)(pbVar3 + 8);
        func_0x0001017a6a48(param_1);
        goto LAB_1017a6b54;
      }
      if (uVar4 == 0x14) {
        param_1 = *(byte **)(pbVar3 + 0x10);
        unaff_x23 = *(long *)(pbVar3 + 0x18);
        if (unaff_x23 == 0) {
LAB_1017a6b4c:
          if (*(long *)(pbVar3 + 8) == 0) {
            return;
          }
LAB_1017a6b54:
                    /* WARNING: Could not recover jumptable at 0x000108aa97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__free_10b61b0a8)(param_1);
          return;
        }
        unaff_x22 = param_1 + 0x20;
        uVar6 = 0x1017a6af4;
        puVar2 = puVar2 + -0x40;
        pbVar3 = param_1;
        goto SUB_1017a6a48;
      }
    }
    param_1 = *(byte **)(pbVar3 + 0x10);
    unaff_x23 = *(long *)(pbVar3 + 0x18);
    if (unaff_x23 == 0) goto LAB_1017a6b4c;
    func_0x0001017a6a48(param_1);
    unaff_x21 = unaff_x23 + -1;
    unaff_x24 = param_1 + 0x40;
    uVar6 = 0x1017a6b48;
    puVar2 = puVar2 + -0x40;
    pbVar3 = param_1 + 0x20;
    unaff_x22 = param_1;
  } while( true );
}

