
/* WARNING: Removing unreachable block (ram,0x000100a39ad0) */
/* WARNING: Removing unreachable block (ram,0x000100a39c2c) */
/* WARNING: Removing unreachable block (ram,0x000100a39b08) */
/* WARNING: Removing unreachable block (ram,0x000100a39b14) */
/* WARNING: Removing unreachable block (ram,0x000100a39b20) */
/* WARNING: Removing unreachable block (ram,0x000100a39b2c) */
/* WARNING: Removing unreachable block (ram,0x000100a39b3c) */
/* WARNING: Removing unreachable block (ram,0x000100a39b48) */
/* WARNING: Removing unreachable block (ram,0x000100a39b5c) */
/* WARNING: Removing unreachable block (ram,0x000100a39b78) */
/* WARNING: Removing unreachable block (ram,0x000100a39f80) */
/* WARNING: Removing unreachable block (ram,0x000100a39b84) */
/* WARNING: Removing unreachable block (ram,0x000100a39b9c) */
/* WARNING: Removing unreachable block (ram,0x000100a39bac) */
/* WARNING: Removing unreachable block (ram,0x000100a39bb8) */
/* WARNING: Removing unreachable block (ram,0x000100a39bd0) */
/* WARNING: Removing unreachable block (ram,0x000100a39bdc) */
/* WARNING: Removing unreachable block (ram,0x000100a39c34) */
/* WARNING: Removing unreachable block (ram,0x000100a39c44) */
/* WARNING: Removing unreachable block (ram,0x000100a3a128) */
/* WARNING: Removing unreachable block (ram,0x000100a39c50) */
/* WARNING: Removing unreachable block (ram,0x000100a39c70) */
/* WARNING: Removing unreachable block (ram,0x000100a39f94) */
/* WARNING: Removing unreachable block (ram,0x000100a39c7c) */
/* WARNING: Removing unreachable block (ram,0x000100a39c94) */
/* WARNING: Removing unreachable block (ram,0x000100a39cb8) */
/* WARNING: Removing unreachable block (ram,0x000100a39cbc) */
/* WARNING: Removing unreachable block (ram,0x000100a39cc8) */
/* WARNING: Removing unreachable block (ram,0x000100a39cd8) */
/* WARNING: Removing unreachable block (ram,0x000100a39cf0) */
/* WARNING: Removing unreachable block (ram,0x000100a39d84) */
/* WARNING: Removing unreachable block (ram,0x000100a3a03c) */
/* WARNING: Removing unreachable block (ram,0x000100a3a054) */
/* WARNING: Removing unreachable block (ram,0x000100a39d08) */
/* WARNING: Removing unreachable block (ram,0x000100a39d88) */
/* WARNING: Removing unreachable block (ram,0x000100a39d98) */
/* WARNING: Removing unreachable block (ram,0x000100a39dac) */
/* WARNING: Removing unreachable block (ram,0x000100a39df4) */
/* WARNING: Removing unreachable block (ram,0x000100a39e00) */
/* WARNING: Removing unreachable block (ram,0x000100a39e18) */
/* WARNING: Removing unreachable block (ram,0x000100a39d14) */
/* WARNING: Removing unreachable block (ram,0x000100a39ea8) */
/* WARNING: Removing unreachable block (ram,0x000100a39eb8) */
/* WARNING: Removing unreachable block (ram,0x000100a39ecc) */
/* WARNING: Removing unreachable block (ram,0x000100a39ed8) */
/* WARNING: Removing unreachable block (ram,0x000100a39ee4) */
/* WARNING: Removing unreachable block (ram,0x000100a39ef0) */
/* WARNING: Removing unreachable block (ram,0x000100a39f6c) */
/* WARNING: Removing unreachable block (ram,0x000100a39efc) */
/* WARNING: Removing unreachable block (ram,0x000100a39f0c) */

undefined1  [16] FUN_100a39954(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x19;
  char *pcVar7;
  
  uVar4 = FUN_108858fa8(s__timed_out_handshaking_with_MCP_s_108ace7d8,&stack0x000006b0);
  plVar6 = *(long **)(unaff_x19 + 0x840);
  if (plVar6 != (long *)0x0) {
    lVar3 = *plVar6;
    *plVar6 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000103e32944(unaff_x19 + 0x840);
    }
  }
  *(undefined2 *)(unaff_x19 + 0x848) = 1;
  FUN_100ce192c();
  *(undefined1 *)(unaff_x19 + 0x39b) = 0;
  uVar5 = extraout_x1;
  if ((*(byte *)(unaff_x19 + 0x398) & 1) != 0) {
    func_0x000100e70b00();
    uVar5 = extraout_x1_00;
  }
  *(undefined1 *)(unaff_x19 + 0x398) = 0;
  iVar1 = *(int *)(unaff_x19 + 0x368);
  if (iVar1 != 0) {
    pcVar7 = *(char **)(unaff_x19 + 0x360);
    if (*pcVar7 == '\0') {
      *pcVar7 = '\x01';
    }
    else {
      __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(pcVar7,uVar5,1000000000);
    }
    FUN_1060fa678(pcVar7,iVar1,pcVar7);
  }
  *(undefined1 *)(unaff_x19 + 0x39c) = 1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  return auVar2 << 0x40;
}

