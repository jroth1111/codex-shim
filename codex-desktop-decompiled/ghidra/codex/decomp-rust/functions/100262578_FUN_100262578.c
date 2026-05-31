
void FUN_100262578(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x21;
  long *unaff_x22;
  ulong unaff_x24;
  long lVar9;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_00000350;
  undefined8 in_stack_00000358;
  long in_stack_00000380;
  byte in_stack_00000388;
  undefined7 in_stack_00000389;
  byte bVar10;
  long in_stack_00000440;
  long in_stack_00000448;
  long in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000458,s_Credential______SignedHeaders____108ab87a6,unaff_x29 + -0xb0);
  if (*(long *)(unaff_x29 + -0xd8) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0xd0));
  }
  if (in_stack_00000380 == 1) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h5aae89eacda0ed27E(&stack0x00000380);
    unaff_x24 = CONCAT71(in_stack_00000389,in_stack_00000388);
  }
  lVar6 = in_stack_000001a0;
  uVar2 = in_stack_00000198;
  *(undefined8 *)(unaff_x24 + 0x30) = in_stack_00000458;
  *(undefined8 *)(unaff_x24 + 0x38) = in_stack_00000460;
  *(undefined8 *)(unaff_x24 + 0x40) = in_stack_00000468;
  *(undefined **)(unaff_x24 + 0x48) = &UNK_108c72829;
  *(undefined8 *)(unaff_x24 + 0x50) = 0xd;
  *(undefined1 *)(unaff_x24 + 0x58) = 0;
  lVar9 = 2;
  bVar10 = 2;
  if (*(char *)(unaff_x21 + 0x39) == '\0') {
    if (in_stack_000001a0 == 0) {
      lVar9 = 1;
    }
    else {
      lVar9 = _malloc(in_stack_000001a0);
      if (lVar9 == 0) goto LAB_100262988;
    }
    _memcpy(lVar9,uVar2,lVar6);
    if (in_stack_00000380 == 2) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h5aae89eacda0ed27E(&stack0x00000380);
      unaff_x24 = CONCAT71(in_stack_00000389,in_stack_00000388);
    }
    *(long *)(unaff_x24 + 0x60) = lVar6;
    *(long *)(unaff_x24 + 0x68) = lVar9;
    *(long *)(unaff_x24 + 0x70) = lVar6;
    *(undefined **)(unaff_x24 + 0x78) = &UNK_108c731c1;
    *(undefined8 *)(unaff_x24 + 0x80) = 0x14;
    *(undefined1 *)(unaff_x24 + 0x88) = 0;
    lVar9 = 3;
    bVar10 = 3;
    lVar6 = *unaff_x22;
    lVar8 = *(long *)(lVar6 + 0x40);
  }
  else {
    lVar6 = *unaff_x22;
    lVar8 = *(long *)(lVar6 + 0x40);
  }
  if (lVar8 != -0x8000000000000000) {
    uVar2 = *(undefined8 *)(lVar6 + 0x48);
    lVar6 = *(long *)(lVar6 + 0x50);
    puVar3 = *(undefined **)(unaff_x21 + 0x28);
    lVar8 = 0x14;
    if (puVar3 != (undefined *)0x0) {
      lVar8 = *(long *)(unaff_x21 + 0x30);
    }
    puVar1 = &UNK_108c731ad;
    if (puVar3 != (undefined *)0x0) {
      puVar1 = puVar3;
    }
    if (lVar6 == 0) {
      lVar5 = 1;
    }
    else {
      lVar5 = _malloc(lVar6);
      if (lVar5 == 0) {
LAB_100262988:
        FUN_107c03c64(1,lVar6);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100262c5c);
        (*pcVar4)();
      }
    }
    _memcpy(lVar5,uVar2,lVar6);
    if (lVar9 == in_stack_00000380) {
      __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h5aae89eacda0ed27E(&stack0x00000380);
      unaff_x24 = CONCAT71(in_stack_00000389,in_stack_00000388);
    }
    plVar7 = (long *)(unaff_x24 + lVar9 * 0x30);
    *plVar7 = lVar6;
    plVar7[1] = lVar5;
    plVar7[2] = lVar6;
    plVar7[3] = (long)puVar1;
    plVar7[4] = lVar8;
    *(undefined1 *)(plVar7 + 5) = 1;
    bVar10 = (char)lVar9 + 1;
    unaff_x24 = (ulong)in_stack_00000388;
  }
  if (in_stack_00000350 != 0) {
    _free(in_stack_00000358);
  }
  FUN_100256a70(&stack0x000000b0);
  if (in_stack_00000380 == -0x8000000000000000) {
    *(char *)(unaff_x28 + 1) = (char)unaff_x24;
    *unaff_x28 = -0x8000000000000000;
  }
  else {
    *(ulong *)((long)unaff_x28 + 9) = CONCAT17(bVar10,in_stack_00000389);
    unaff_x28[7] = in_stack_00000448;
    unaff_x28[6] = in_stack_00000440;
    unaff_x28[8] = in_stack_00000450;
    *unaff_x28 = in_stack_00000380;
    *(char *)(unaff_x28 + 1) = (char)unaff_x24;
    unaff_x28[2] = (ulong)bVar10;
    unaff_x28[3] = 0;
    unaff_x28[4] = 8;
    unaff_x28[5] = 0;
  }
  FUN_1002564fc(unaff_x27 + 6);
  if (*unaff_x27 != 0) {
    _free(unaff_x27[1]);
  }
  if (0 < unaff_x27[3]) {
    _free(unaff_x27[4]);
  }
  return;
}

