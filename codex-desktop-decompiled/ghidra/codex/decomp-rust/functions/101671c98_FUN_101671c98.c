
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101671c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x29;
  undefined8 uVar5;
  undefined8 *in_stack_00000000;
  
  *(char **)(unaff_x29 + -200) = s_5Failed_to_read_fork_parent_meta_108ada513;
  *(long *)(unaff_x29 + -0xc0) = unaff_x29 + -0xb8;
  *(long *)(unaff_x29 + -0xd8) = unaff_x29 + -200;
  *(undefined **)(unaff_x29 + -0xd0) = &UNK_10b208fd0;
  *(undefined8 *)(unaff_x29 + -0xf8) = 1;
  *(long *)(unaff_x29 + -0xf0) = unaff_x29 + -0xd8;
  *(undefined8 *)(unaff_x29 + -0xe8) = 1;
  *(undefined8 *)(unaff_x29 + -0xe0) = param_1;
  __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE(param_2,unaff_x29 + -0xf8);
  if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
     (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
    uVar5 = *(undefined8 *)(*unaff_x21 + 0x20);
    uVar3 = *(undefined8 *)(*unaff_x21 + 0x28);
    *(undefined8 *)(unaff_x29 + -0x80) = 2;
    *(undefined8 *)(unaff_x29 + -0x78) = uVar5;
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
      *(long *)(unaff_x29 + -0x60) = unaff_x29 + -0xf8;
      *(undefined1 *)(unaff_x29 + -0x58) = 1;
      *(long *)(unaff_x29 + -0x50) = unaff_x29 + -0x60;
      *(undefined **)(unaff_x29 + -0x48) = &DAT_1061c2098;
      (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00000b30);
    }
  }
  (**(code **)*in_stack_00000000)();
  *unaff_x20 = 0x8000000000000000;
  uVar5 = *(undefined8 *)(unaff_x29 + -0x90);
  unaff_x20[2] = *(undefined8 *)(unaff_x29 + -0x88);
  unaff_x20[1] = uVar5;
  *(undefined1 *)(unaff_x19 + 0x938) = 1;
  return;
}

