
void FUN_100575bc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long unaff_x23;
  undefined8 uVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined7 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [12];
  
  bVar7 = *(byte *)((long)param_5 + 0xac);
  if (bVar7 < 2) {
    if (bVar7 != 0) {
      FUN_107c05cc0(&UNK_10b2178a0);
LAB_100575de0:
      FUN_107c05cc4(&UNK_10b2178a0);
      goto LAB_100575dec;
    }
    param_1 = param_5[0x13];
    param_5[1] = param_5[0x14];
    *param_5 = param_1;
    uVar10 = *(undefined4 *)((long)param_5 + 0xad);
    bVar7 = (byte)((uint)uVar10 >> 8);
    uVar8 = (undefined1)((uint)uVar10 >> 0x10);
    uVar9 = (undefined1)((uint)uVar10 >> 0x18);
    uVar11 = CONCAT16(uVar9,(uint6)CONCAT14(uVar8,(uint)bVar7 << 0x10));
    uVar12 = CONCAT17(uVar9,CONCAT16(uVar9,CONCAT15(uVar8,(int5)CONCAT34((int3)((uint7)uVar11 >>
                                                                               0x20),
                                                                         CONCAT13(bVar7,(int3)
                                                  CONCAT52((int5)((uint7)uVar11 >> 0x10),
                                                           CONCAT11((char)uVar10,(char)uVar10)))))))
    ;
    param_3 = NEON_ext(uVar12,uVar12,4,1);
    uVar10 = CONCAT13((char)((ulong)param_3 >> 0x30),
                      CONCAT12(uVar9,CONCAT11((char)((ulong)param_3 >> 0x20),uVar8)));
    param_2 = CONCAT17((char)((ulong)param_1 >> 0x30),
                       CONCAT16((char)((ulong)param_1 >> 0x20),
                                CONCAT15((char)((ulong)param_1 >> 0x10),
                                         CONCAT14((char)param_1,uVar10))));
    *(undefined4 *)(param_5 + 0x15) = uVar10;
    param_5[2] = param_1;
    *(undefined1 *)(param_5 + 0x12) = 0;
  }
  else if (bVar7 != 3) goto LAB_100575de0;
  auVar13 = FUN_1005ab94c(param_1,param_2,param_3,param_5 + 2,param_6);
  if ((auVar13._0_8_ & 1) == 0) {
    if (((((char)param_5[0x12] == '\x03') && ((char)param_5[0x11] == '\x03')) &&
        ((char)param_5[0x10] == '\x03')) && ((char)param_5[7] == '\x04')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (param_5 + 8);
      if (param_5[9] != 0) {
        (**(code **)(param_5[9] + 0x18))(param_5[10]);
      }
    }
    uStack_c0 = 0;
    uStack_b8 = 1;
    lStack_b0 = 0;
    FUN_10624142c(&uStack_a8,*param_5 + 0x780,0);
    thunk_FUN_108855060(&uStack_c0,0,0x24,1,1);
    lVar3 = lStack_b0;
    uVar2 = uStack_b8;
    uVar12 = uStack_c0;
    puVar1 = (undefined8 *)(uStack_b8 + lStack_b0);
    puVar1[1] = uStack_a0;
    *puVar1 = uStack_a8;
    puVar1[3] = uStack_90;
    puVar1[2] = uStack_98;
    *(undefined4 *)(puVar1 + 4) = uStack_88;
    uVar6 = *(undefined8 *)(param_5[1] + 0x238);
    unaff_x23 = *(long *)(param_5[1] + 0x240);
    if (unaff_x23 == 0) {
      lVar5 = 1;
    }
    else {
      lVar5 = _malloc(unaff_x23);
      if (lVar5 == 0) {
LAB_100575dec:
        FUN_107c03c64(1,unaff_x23);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100575dfc);
        (*pcVar4)();
      }
    }
    _memcpy(lVar5,uVar6,unaff_x23);
    uVar10 = (undefined4)param_5[0x15];
    auStack_80 = func_0x000106032954(0);
    uStack_c0 = 0;
    uStack_b8 = uStack_b8 & 0xffffffff00000000;
    func_0x000106032878(&uStack_a8,auStack_80,&uStack_c0);
    auVar14 = func_0x000106032954(8);
    uVar8 = (undefined1)((uint)uVar10 >> 0x10);
    uVar6 = 0;
    if ((int)uStack_a8 == 0) {
      uVar6 = uStack_a0;
    }
    param_4[4] = lVar5;
    param_4[5] = unaff_x23;
    *param_4 = uVar12;
    param_4[1] = uVar2;
    param_4[2] = lVar3 + 0x24;
    param_4[3] = unaff_x23;
    *(undefined1 (*) [12])(param_4 + 6) = auVar14;
    param_4[8] = auVar13._8_8_;
    param_4[9] = uVar6;
    uVar12 = NEON_rev32((ulong)CONCAT16((char)((uint)uVar10 >> 0x18),
                                        (uint6)CONCAT14(uVar8,(uint)CONCAT12((char)((uint)uVar10 >>
                                                                                   8),(ushort)(byte)
                                                  uVar10))),2);
    *(uint *)(param_4 + 10) =
         CONCAT13((char)((ulong)uVar12 >> 0x20),CONCAT12((char)uVar12,CONCAT11(uVar8,(byte)uVar10)))
    ;
    uVar8 = 1;
  }
  else {
    *param_4 = 0x8000000000000000;
    uVar8 = 3;
  }
  *(undefined1 *)((long)param_5 + 0xac) = uVar8;
  return;
}

