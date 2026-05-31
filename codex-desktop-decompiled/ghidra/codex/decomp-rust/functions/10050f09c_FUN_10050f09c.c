
void FUN_10050f09c(void)

{
  long lVar1;
  long unaff_x19;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x000004a0,s_4ephemeral_thread_does_not_suppo_108abfffc,&stack0x00000098);
  lVar1 = **(long **)(unaff_x19 + 0x568);
  **(long **)(unaff_x19 + 0x568) = lVar1 + -1;
  LORelease();
  if (lVar1 == 1) {
    DataMemoryBarrier(2,1);
    __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hcd04f3b9a9b01d51E(unaff_x19 + 0x568);
  }
  if (*(long *)(unaff_x19 + 0x4d0) != -0x7fffffffffffffe0) {
    FUN_100df5738(unaff_x19 + 0x4d0);
  }
  if ((*(byte *)(unaff_x19 + 0x573) & 1) != 0) {
    FUN_100e21f20(unaff_x19 + 0x280);
  }
  *(undefined1 *)(unaff_x19 + 0x573) = 0;
  _memcpy();
  *(undefined1 *)(unaff_x19 + 0x571) = 1;
  return;
}

