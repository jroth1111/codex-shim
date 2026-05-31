
long __ZN5tokio7runtime9scheduler12multi_thread6handle140__LT_impl_u20_tokio__runtime__task__Schedule_u20_for_u20_alloc__sync__Arc_LT_tokio__runtime__scheduler__multi_thread__handle__Handle_GT__GT_7release17h09afe580e8e60df2E
               (long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
               )

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  char *unaff_x19;
  long lVar5;
  char in_wzr;
  undefined1 auVar6 [16];
  long lStack_38;
  
  lVar1 = *param_2;
  lStack_38 = *(long *)(lVar1 + 0x18);
  if (lStack_38 == 0) {
    return 0;
  }
  lVar5 = *param_1;
  if (lStack_38 == *(long *)(lVar5 + 0xb0)) {
    unaff_x19 = (char *)(*(long *)(lVar5 + 0x88) +
                        (*(ulong *)(lVar5 + 0xa8) &
                        *(ulong *)(lVar1 + *(long *)(*(long *)(lVar1 + 0x10) + 0x48))) * 0x18);
    if (*unaff_x19 != '\0') goto LAB_10610dd10;
    *unaff_x19 = '\x01';
    lVar2 = *(long *)(*(long *)(lVar1 + 0x10) + 0x38);
    plVar3 = (long *)(lVar1 + lVar2);
    lVar4 = *plVar3;
    if (lVar4 != 0) goto LAB_10610dc78;
LAB_10610dd3c:
    if (*(long *)(unaff_x19 + 8) != lVar1) {
LAB_10610dd60:
      lVar1 = 0;
      if (*unaff_x19 == '\x01') {
        *unaff_x19 = in_wzr;
        return 0;
      }
      goto LAB_10610dd94;
    }
    lVar4 = plVar3[1];
    *(long *)(unaff_x19 + 8) = lVar4;
    if (lVar4 != 0) goto LAB_10610dca0;
LAB_10610dd54:
    if (*(long *)(unaff_x19 + 0x10) != lVar1) goto LAB_10610dd60;
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(lVar1 + lVar2);
  }
  else {
    auVar6 = func_0x000108a8aed0(0,&lStack_38,lVar5 + 0xb0,0,param_5,&UNK_10b4cdc70);
    param_2 = auVar6._8_8_;
    lVar1 = auVar6._0_8_;
LAB_10610dd10:
    __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E(unaff_x19,param_2,1000000000)
    ;
    lVar2 = *(long *)(*(long *)(lVar1 + 0x10) + 0x38);
    plVar3 = (long *)(lVar1 + lVar2);
    lVar4 = *plVar3;
    if (lVar4 == 0) goto LAB_10610dd3c;
LAB_10610dc78:
    *(long *)(lVar4 + *(long *)(*(long *)(lVar4 + 0x10) + 0x38) + 8) = plVar3[1];
    lVar2 = *(long *)(*(long *)(lVar1 + 0x10) + 0x38);
    lVar4 = *(long *)(lVar1 + lVar2 + 8);
    if (lVar4 == 0) goto LAB_10610dd54;
LAB_10610dca0:
    *(undefined8 *)(lVar4 + *(long *)(*(long *)(lVar4 + 0x10) + 0x38)) =
         *(undefined8 *)(lVar1 + lVar2);
    lVar2 = *(long *)(*(long *)(lVar1 + 0x10) + 0x38);
  }
  *(undefined8 *)(lVar1 + lVar2 + 8) = 0;
  *(undefined8 *)(lVar1 + *(long *)(*(long *)(lVar1 + 0x10) + 0x38)) = 0;
  *(long *)(lVar5 + 0xa0) = *(long *)(lVar5 + 0xa0) + -1;
  if (*unaff_x19 == '\x01') {
    *unaff_x19 = in_wzr;
    return lVar1;
  }
LAB_10610dd94:
  __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(unaff_x19,0);
  return lVar1;
}

