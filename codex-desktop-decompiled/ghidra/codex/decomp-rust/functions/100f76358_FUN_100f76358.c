
void FUN_100f76358(void)

{
  undefined8 *puVar1;
  long *unaff_x19;
  long lVar2;
  long unaff_x29;
  undefined8 uVar3;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (unaff_x29 + -0x38,s___none_108ad4c5f,&stack0x00000038);
  lVar2 = unaff_x19[2];
  if (lVar2 == *unaff_x19) {
    __ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_8grow_one17h04f561b8f2dea13fE(unaff_x29 + -0x38);
  }
  puVar1 = (undefined8 *)(unaff_x19[1] + lVar2 * 0x18);
  uVar3 = *(undefined8 *)(unaff_x29 + -0x38);
  puVar1[1] = *(undefined8 *)(unaff_x29 + -0x30);
  *puVar1 = uVar3;
  puVar1[2] = *(undefined8 *)(unaff_x29 + -0x28);
  unaff_x19[2] = lVar2 + 1;
  return;
}

