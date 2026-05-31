
void FUN_1006c1cac(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined1 *unaff_x27;
  long in_stack_00000000;
  long in_stack_00000008;
  int iStack0000000000000010;
  undefined4 uStack0000000000000014;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined1 *in_stack_00000078;
  undefined *in_stack_00000080;
  
  do {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    FUN_1011e0db8(&stack0x00000010,unaff_x20 + 0x18);
    if (iStack0000000000000010 != 1) {
      if ((*(byte *)(unaff_x20 + 0x49) & 1) == 0) {
        *(undefined1 *)(unaff_x20 + 0x49) = 1;
        lVar4 = *(long *)(unaff_x20 + 8);
        if (((*(byte *)(unaff_x20 + 0x48) & 1) != 0) || (*(long *)(unaff_x20 + 0x10) != lVar4)) {
          lVar3 = *(long *)(unaff_x20 + 0x10) - lVar4;
          lVar4 = *(long *)(unaff_x20 + 0x18) + lVar4;
          goto joined_r0x0001006c1d28;
        }
      }
      lVar4 = 6;
      break;
    }
    lVar3 = in_stack_00000018 - *(long *)(unaff_x20 + 8);
    lVar4 = lVar4 + *(long *)(unaff_x20 + 8);
    *(undefined8 *)(unaff_x20 + 8) = in_stack_00000020;
joined_r0x0001006c1d28:
    if (lVar3 != 0) {
      in_stack_00000000 = lVar4;
      in_stack_00000008 = lVar3;
      __ZN18tracing_subscriber6filter3env9directive9Directive5parse17h80e53e44a81d3f1fE
                (&stack0x00000010,lVar4,lVar3,*(undefined1 *)(*unaff_x25 + 0x68));
      lVar4 = CONCAT44(uStack0000000000000014,iStack0000000000000010);
      if (lVar4 != 6) {
        lVar3 = *(long *)(unaff_x24 + 0x18);
        unaff_x19[4] = *(long *)(unaff_x24 + 0x20);
        unaff_x19[3] = lVar3;
        lVar3 = *(long *)(unaff_x24 + 0x28);
        unaff_x19[6] = *(long *)(unaff_x24 + 0x30);
        unaff_x19[5] = lVar3;
        lVar3 = *(long *)(unaff_x24 + 0x38);
        unaff_x19[8] = *(long *)(unaff_x24 + 0x40);
        unaff_x19[7] = lVar3;
        unaff_x19[9] = *(long *)(unaff_x24 + 0x48);
        lVar3 = *(long *)(unaff_x24 + 8);
        unaff_x19[2] = *(long *)(unaff_x24 + 0x10);
        unaff_x19[1] = lVar3;
        break;
      }
      in_stack_00000068 = *(undefined8 *)(unaff_x24 + 0x10);
      in_stack_00000060 = *(long *)(unaff_x24 + 8);
      in_stack_00000070 = *(undefined8 **)(unaff_x24 + 0x18);
      in_stack_00000080 = &DAT_100c7b3a0;
      in_stack_00000078 = unaff_x27;
      __ZN3std2io5stdio7_eprint17heb74b67280cb307dE(s_ignoring______108acfa71,&stack0x00000078);
      puVar2 = in_stack_00000070;
      uVar1 = in_stack_00000068;
      if (in_stack_00000060 == 0) {
        if ((code *)*in_stack_00000070 != (code *)0x0) {
          (*(code *)*in_stack_00000070)(in_stack_00000068);
        }
        unaff_x27 = (undefined1 *)register0x00000008;
        if (puVar2[1] != 0) {
          _free(uVar1);
        }
      }
    }
    lVar4 = unaff_x23;
  } while ((*(byte *)(unaff_x20 + 0x49) & 1) == 0);
  *unaff_x19 = lVar4;
  return;
}

