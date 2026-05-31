
void FUN_100f78120(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x29;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000030;
  undefined8 *in_stack_00000038;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 *in_stack_00000080;
  undefined *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined *in_stack_00000098;
  
code_r0x000100f78120:
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1,s___108ac1f1a,param_3);
  lVar11 = in_stack_00000030[2];
  if (lVar11 == *in_stack_00000030) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(in_stack_00000030);
  }
  puVar8 = (undefined8 *)(in_stack_00000030[1] + lVar11 * 0x18);
  puVar8[1] = in_stack_00000070;
  *puVar8 = in_stack_00000068;
  uVar10 = in_stack_00000078;
LAB_100f78028:
  puVar8[2] = uVar10;
  in_stack_00000030[2] = lVar11 + 1;
LAB_100f78034:
  do {
    in_stack_00000050 = in_stack_00000048 + 2;
    if (in_stack_00000050 == in_stack_00000038) {
      return;
    }
    uVar10 = *in_stack_00000050;
    uVar4 = in_stack_00000048[3];
    lVar11 = in_stack_00000040;
    lVar14 = in_stack_00000020;
    in_stack_00000048 = in_stack_00000050;
    if (in_stack_00000040 != 0) {
      do {
        uVar6 = *(ushort *)(lVar11 + 0x21a);
        lVar12 = (ulong)uVar6 * 0x18;
        uVar15 = 0xffffffffffffffff;
        lVar9 = lVar11 + 8;
        puVar8 = (undefined8 *)(lVar11 + 0x108);
        do {
          puVar13 = puVar8;
          uVar2 = (ulong)uVar6;
          if (lVar12 == 0) goto joined_r0x000100f780d8;
          uVar5 = *(ulong *)(lVar9 + 0x10);
          uVar2 = uVar4;
          if (uVar5 <= uVar4) {
            uVar2 = uVar5;
          }
          iVar7 = _memcmp(uVar10,*(undefined8 *)(lVar9 + 8),uVar2);
          lVar3 = uVar4 - uVar5;
          if (iVar7 != 0) {
            lVar3 = (long)iVar7;
          }
          cVar1 = 0 < lVar3;
          if (lVar3 < 0) {
            cVar1 = -1;
          }
          lVar12 = lVar12 + -0x18;
          puVar8 = puVar13 + 3;
          uVar15 = uVar15 + 1;
          lVar9 = lVar9 + 0x18;
        } while (cVar1 == '\x01');
        uVar2 = uVar15;
        if (cVar1 == '\0') {
          in_stack_00000058 = puVar13[2];
          in_stack_00000060 = *puVar8;
          in_stack_00000080 = &stack0x00000050;
          in_stack_00000090 = &stack0x00000058;
          in_stack_00000088 = &DAT_100c7b420;
          in_stack_00000098 = &DAT_100c7b3a0;
          param_1 = &stack0x00000068;
          param_3 = &stack0x00000080;
          goto code_r0x000100f78120;
        }
joined_r0x000100f780d8:
        if (lVar14 == 0) break;
        lVar11 = *(long *)(lVar11 + uVar2 * 8 + 0x220);
        lVar14 = lVar14 + -1;
      } while( true );
    }
    lVar11 = in_stack_00000018;
    lVar14 = in_stack_00000028;
  } while (in_stack_00000028 == 0);
  do {
    uVar6 = *(ushort *)(lVar14 + 0x112);
    lVar12 = (ulong)uVar6 * 0x18;
    uVar15 = 0xffffffffffffffff;
    lVar9 = lVar14 + 8;
    do {
      uVar2 = (ulong)uVar6;
      if (lVar12 == 0) goto joined_r0x000100f781cc;
      uVar5 = *(ulong *)(lVar9 + 0x10);
      uVar2 = uVar4;
      if (uVar5 <= uVar4) {
        uVar2 = uVar5;
      }
      iVar7 = _memcmp(uVar10,*(undefined8 *)(lVar9 + 8),uVar2);
      lVar3 = uVar4 - uVar5;
      if (iVar7 != 0) {
        lVar3 = (long)iVar7;
      }
      cVar1 = 0 < lVar3;
      if (lVar3 < 0) {
        cVar1 = -1;
      }
      lVar12 = lVar12 + -0x18;
      uVar15 = uVar15 + 1;
      lVar9 = lVar9 + 0x18;
    } while (cVar1 == '\x01');
    uVar2 = uVar15;
    if (cVar1 == '\0') {
      in_stack_00000080 = &stack0x00000050;
      in_stack_00000088 = &DAT_100c7b420;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x70,s___present_108ad52a2,&stack0x00000080);
      lVar11 = in_stack_00000030[2];
      if (lVar11 == *in_stack_00000030) {
        __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(in_stack_00000030);
      }
      puVar8 = (undefined8 *)(in_stack_00000030[1] + lVar11 * 0x18);
      uVar10 = *(undefined8 *)(unaff_x29 + -0x70);
      puVar8[1] = *(undefined8 *)(unaff_x29 + -0x68);
      *puVar8 = uVar10;
      uVar10 = *(undefined8 *)(unaff_x29 + -0x60);
      goto LAB_100f78028;
    }
joined_r0x000100f781cc:
    if (lVar11 == 0) goto LAB_100f78034;
    lVar11 = lVar11 + -1;
    lVar14 = *(long *)(lVar14 + uVar2 * 8 + 0x118);
  } while( true );
}

