
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f119e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x24;
  long unaff_x25;
  char *unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00005070;
  
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  in_stack_00000028 = *(undefined8 *)(unaff_x25 + 0x78);
  in_stack_00000020 = *(undefined8 *)(unaff_x25 + 0x70);
  in_stack_00000038 = *(undefined8 *)(unaff_x25 + 0x88);
  in_stack_00000030 = *(undefined8 *)(unaff_x25 + 0x80);
  in_stack_00000048 = *(undefined8 *)(unaff_x25 + 0x98);
  in_stack_00000040 = *(undefined8 *)(unaff_x25 + 0x90);
  in_stack_00000008 = *(undefined8 *)(unaff_x25 + 0x58);
  in_stack_00000000 = *(undefined8 *)(unaff_x25 + 0x50);
  in_stack_00000018 = *(undefined8 *)(unaff_x25 + 0x68);
  in_stack_00000010 = *(undefined8 *)(unaff_x25 + 0x60);
  if (in_stack_00005070 == unaff_x27) {
    if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 2) &&
       (((bRam000000010b63a2c8 - 1 < 2 ||
         ((bRam000000010b63a2c8 != 0 &&
          (cVar3 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN4rmcp9transport6worker24WorkerTransport_LT_W_GT_13spawn_with_ct28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9536c72aba0be190E
                             ), cVar3 != '\0')))) &&
        (iVar4 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN4rmcp9transport6worker24WorkerTransport_LT_W_GT_13spawn_with_ct28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9536c72aba0be190E
                           ), iVar4 != 0)))) {
      __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                (___ZN4rmcp9transport6worker24WorkerTransport_LT_W_GT_13spawn_with_ct28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9536c72aba0be190E
                 ,&stack0x00001af0);
      uVar5 = 
      ___ZN4rmcp9transport6worker24WorkerTransport_LT_W_GT_13spawn_with_ct28__u7b__u7b_closure_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h9536c72aba0be190E
      ;
      if ((*unaff_x26 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        puVar1 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_10b3c24c8;
        }
        puVar2 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar2 = &UNK_109adfc03;
        }
        iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00003590);
        if (iVar4 != 0) {
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (uVar5,puVar2,puVar1,&stack0x00003590,&stack0x00001af0);
        }
      }
    }
    else if ((*unaff_x26 == '\0') && (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
      puVar1 = puRam000000010b634c20;
      if (lRam000000010b66fd20 != 2) {
        puVar1 = &UNK_10b3c24c8;
      }
      puVar2 = puRam000000010b634c18;
      if (lRam000000010b66fd20 != 2) {
        puVar2 = &UNK_109adfc03;
      }
      iVar4 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00005028);
      if (iVar4 != 0) {
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108cc5476;
        *(undefined8 *)(unaff_x29 + -0x68) = 0x17;
        *(long *)(unaff_x29 + -0x80) = unaff_x29 + -0x70;
        *(undefined **)(unaff_x29 + -0x78) = &UNK_10b208fd0;
        *(undefined1 *)(unaff_x25 + 0x30) = 1;
        (**(code **)(puVar1 + 0x20))(puVar2,&stack0x00001af0);
      }
    }
  }
  else {
    register0x00000008 = (BADSPACEBASE *)((ulong)&stack0x00005070 | 8);
    unaff_x27 = in_stack_00005070;
  }
  uVar5 = *(undefined8 *)((long)register0x00000008 + 0x20);
  uVar9 = *(undefined8 *)((long)register0x00000008 + 0x38);
  uVar7 = *(undefined8 *)((long)register0x00000008 + 0x30);
  *(undefined8 *)(unaff_x29 + -0xb8) = *(undefined8 *)((long)register0x00000008 + 0x28);
  *(undefined8 *)(unaff_x29 + -0xc0) = uVar5;
  *(undefined8 *)(unaff_x29 + -0xa8) = uVar9;
  *(undefined8 *)(unaff_x29 + -0xb0) = uVar7;
  uVar5 = *(undefined8 *)((long)register0x00000008 + 0x40);
  *(undefined8 *)(unaff_x29 + -0x98) = *(undefined8 *)((long)register0x00000008 + 0x48);
  *(undefined8 *)(unaff_x29 + -0xa0) = uVar5;
  uVar9 = *(undefined8 *)register0x00000008;
  uVar7 = *(undefined8 *)((long)register0x00000008 + 0x18);
  uVar5 = *(undefined8 *)((long)register0x00000008 + 0x10);
  *(undefined8 *)(unaff_x29 + -0xd8) = *(undefined8 *)((long)register0x00000008 + 8);
  *(undefined8 *)(unaff_x29 + -0xe0) = uVar9;
  *(undefined8 *)(unaff_x29 + -200) = uVar7;
  *(undefined8 *)(unaff_x29 + -0xd0) = uVar5;
  if ((*(long *)(unaff_x19 + 200) != -0x8000000000000000) && (*(long *)(unaff_x19 + 200) != 0)) {
    _free(*(undefined8 *)(unaff_x19 + 0xd0));
  }
  *unaff_x20 = unaff_x27;
  lVar10 = *(long *)(unaff_x29 + -0xd8);
  lVar8 = *(long *)(unaff_x29 + -0xe0);
  lVar6 = *(long *)(unaff_x29 + -0xd0);
  unaff_x20[4] = *(long *)(unaff_x29 + -200);
  unaff_x20[3] = lVar6;
  lVar6 = *(long *)(unaff_x29 + -0xc0);
  lVar12 = *(long *)(unaff_x29 + -0xa8);
  lVar11 = *(long *)(unaff_x29 + -0xb0);
  unaff_x20[6] = *(long *)(unaff_x29 + -0xb8);
  unaff_x20[5] = lVar6;
  unaff_x20[8] = lVar12;
  unaff_x20[7] = lVar11;
  lVar6 = *(long *)(unaff_x29 + -0xa0);
  unaff_x20[10] = *(long *)(unaff_x29 + -0x98);
  unaff_x20[9] = lVar6;
  unaff_x20[2] = lVar10;
  unaff_x20[1] = lVar8;
  *(undefined1 *)(unaff_x19 + unaff_x24) = 1;
  return;
}

