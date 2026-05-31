
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10084e4f4(undefined8 param_1,long param_2,long *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  ulong extraout_x8;
  char cVar6;
  char cVar7;
  undefined1 auVar8 [16];
  
  lVar3 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )(param_1);
  if ((extraout_x8 & 1) == 0) {
    if (*(char *)(lVar3 + 0x48) == '\x01') {
LAB_10084e748:
      cVar7 = *(char *)(lVar3 + 0x44);
      cVar6 = *(char *)(lVar3 + 0x45);
      cVar4 = cVar6;
      if (cVar7 == '\x01') {
        if (cVar6 == '\0') goto LAB_10084e784;
        cVar4 = cVar6 + -1;
      }
      *(char *)(lVar3 + 0x45) = cVar4;
    }
    else {
      if (*(char *)(lVar3 + 0x48) != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (lVar3,&DAT_100c35d48);
        *(undefined1 *)(lVar3 + 0x48) = 1;
        goto LAB_10084e748;
      }
      cVar7 = '\0';
      cVar6 = '\0';
    }
    if (param_2 == 0) {
      FUN_107c05cb0(&UNK_10b23a910);
      goto LAB_10084e780;
    }
    uVar5 = (uint)*(undefined8 *)(param_2 + 0x30);
    if ((uVar5 >> 2 & 1) != 0) {
      return 0;
    }
    if ((uVar5 >> 3 & 1) != 0) {
      if ((*(long *)(param_2 + 0x18) == ((long *)*param_3)[1]) &&
         (*(long *)(param_2 + 0x10) == *(long *)*param_3)) goto LAB_10084e670;
      LOAcquire();
      uVar2 = *(ulong *)(param_2 + 0x30);
      *(ulong *)(param_2 + 0x30) = uVar2 & 0xfffffffffffffff7;
      LORelease();
      if (((uint)uVar2 >> 2 & 1) != 0) goto LAB_10084e6bc;
      (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
    }
    auVar8 = (*(code *)**(undefined8 **)*param_3)(((undefined8 *)*param_3)[1]);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar8;
    LOAcquire();
    uVar2 = *(ulong *)(param_2 + 0x30);
    *(ulong *)(param_2 + 0x30) = uVar2 | 8;
    LORelease();
    uVar5 = (uint)uVar2;
  }
  else {
    if (*(char *)(lVar3 + 0x48) == '\x01') {
LAB_10084e6ec:
      cVar7 = *(char *)(lVar3 + 0x44);
      cVar6 = *(char *)(lVar3 + 0x45);
      cVar4 = cVar6;
      if (cVar7 == '\x01') {
        if (cVar6 == '\0') {
LAB_10084e784:
          FUN_10610bbb4(*(undefined8 *)*param_3,((undefined8 *)*param_3)[1]);
          return 1;
        }
        cVar4 = cVar6 + -1;
      }
      *(char *)(lVar3 + 0x45) = cVar4;
    }
    else {
      if (*(char *)(lVar3 + 0x48) != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (lVar3,&DAT_100c35d48);
        *(undefined1 *)(lVar3 + 0x48) = 1;
        goto LAB_10084e6ec;
      }
      cVar7 = '\0';
      cVar6 = '\0';
    }
    if (param_2 == 0) {
      FUN_107c05cb0(&UNK_10b23a910);
LAB_10084e780:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10084e784);
      (*pcVar1)();
    }
    uVar5 = (uint)*(undefined8 *)(param_2 + 0x30);
    if ((uVar5 >> 2 & 1) != 0) {
      return 0;
    }
    if ((uVar5 >> 3 & 1) != 0) {
      if ((*(long *)(param_2 + 0x18) == ((long *)*param_3)[1]) &&
         (*(long *)(param_2 + 0x10) == *(long *)*param_3)) goto LAB_10084e670;
      LOAcquire();
      uVar2 = *(ulong *)(param_2 + 0x30);
      *(ulong *)(param_2 + 0x30) = uVar2 & 0xfffffffffffffff7;
      LORelease();
      if (((uint)uVar2 >> 2 & 1) != 0) {
LAB_10084e6bc:
        LOAcquire();
        *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 0x30) | 8;
        LORelease();
        return 0;
      }
      (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(*(undefined8 *)(param_2 + 0x18));
    }
    auVar8 = (*(code *)**(undefined8 **)*param_3)(((undefined8 *)*param_3)[1]);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar8;
    LOAcquire();
    uVar2 = *(ulong *)(param_2 + 0x30);
    *(ulong *)(param_2 + 0x30) = uVar2 | 8;
    LORelease();
    uVar5 = (uint)uVar2;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    return 0;
  }
LAB_10084e670:
  if (cVar7 == '\0') {
    return 1;
  }
  if (*(char *)(lVar3 + 0x48) != '\x01') {
    if (*(char *)(lVar3 + 0x48) == '\x02') {
      return 1;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar3,&DAT_1060edbcc);
    *(undefined1 *)(lVar3 + 0x48) = 1;
  }
  *(undefined1 *)(lVar3 + 0x44) = 1;
  *(char *)(lVar3 + 0x45) = cVar6;
  return 1;
}

