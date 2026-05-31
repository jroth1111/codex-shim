
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101671a38(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar5;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  char *in_stack_00000080;
  long in_stack_00000088;
  
  *(char **)(unaff_x29 + -200) = s_7Failed_to_parse_fork_parent_thr_108ada4d9;
  *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xb8;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -200;
  *(undefined **)(unaff_x29 + -0xd0) = &UNK_10b208fd0;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_1,&stack0x00000b30);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    lVar5 = *unaff_x21;
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar3 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x80) = 2;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar6;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar3;
    puVar1 = puRam000000010b634c20;
    if (lRam000000010b66fd20 != 2) {
      puVar1 = &UNK_10b3c24c8;
    }
    puVar2 = puRam000000010b634c18;
    if (lRam000000010b66fd20 != 2) {
      puVar2 = &UNK_109adfc03;
    }
    iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,unaff_x29 + -0x80);
    if (iVar4 != 0) {
      in_stack_00000050 = *(long *)(lVar5 + 0x60);
      in_stack_00000058 = *(undefined8 *)(lVar5 + 0x68);
      in_stack_00000038 = *(long *)(lVar5 + 0x50);
      in_stack_00000040 = *(undefined8 *)(lVar5 + 0x58);
      in_stack_00000030 = 1;
      if (in_stack_00000038 == 0) {
        in_stack_00000030 = 2;
      }
      in_stack_00000078 = *(undefined4 *)(lVar5 + 8);
      uStack000000000000007c = *(undefined4 *)(lVar5 + 0xc);
      *(undefined1 **)(unaff_x29 + -0x60) = &stack0x00000b30;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      in_stack_00000048 = 1;
      if (in_stack_00000050 == 0) {
        in_stack_00000048 = 2;
      }
      in_stack_00000068 = *(undefined8 *)(unaff_x29 + -0x78);
      in_stack_00000060 = *(undefined8 *)(unaff_x29 + -0x80);
      in_stack_00000070 = *(undefined8 *)(unaff_x29 + -0x70);
      in_stack_00000088 = unaff_x29 + -0x50;
      in_stack_00000080 = s__108b39f4f;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000030);
    }
  }
  *unaff_x20 = 0x8000000000000000;
  uVar6 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x20[2] = *(undefined8 *)(unaff_x29 + -0x88);
  unaff_x20[1] = uVar6;
  *(undefined1 *)(unaff_x19 + 0x938) = 1;
  return;
}

