
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc6340(long param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined1 auStack_290 [256];
  long lStack_190;
  undefined1 auStack_170 [256];
  long lStack_70;
  
  lVar3 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar3 + 0x48) == '\x01') {
LAB_100fc63b4:
    cVar8 = *(char *)(lVar3 + 0x44);
    cVar7 = *(char *)(lVar3 + 0x45);
    cVar6 = cVar7;
    if (cVar8 == '\x01') {
      if (cVar7 == '\0') {
        FUN_10610bbb4(*param_3,param_3[1]);
        *(undefined8 *)(param_1 + 0x100) = 3;
        return;
      }
      cVar6 = cVar7 + -1;
    }
    *(char *)(lVar3 + 0x45) = cVar6;
  }
  else {
    if (*(char *)(lVar3 + 0x48) != '\x02') {
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (lVar3,&DAT_100c35d48);
      *(undefined1 *)(lVar3 + 0x48) = 1;
      goto LAB_100fc63b4;
    }
    cVar8 = '\0';
    cVar7 = '\0';
  }
  func_0x000100fca014(auStack_290,param_2 + 0x1a0,param_2 + 0x80);
  if (lStack_190 == 2) {
    if (*(ulong *)(param_2 + 0x1c0) < 2) goto LAB_100fc64e0;
    puVar5 = &UNK_10b23a6d0;
    goto LAB_100fc654c;
  }
  if (lStack_190 == 3) {
    __ZN5tokio4sync4task12atomic_waker11AtomicWaker15register_by_ref17hcd4ebf00ca3cf4d6E
              (param_2 + 0x100,param_3);
    func_0x000100fca014(auStack_170,param_2 + 0x1a0,param_2 + 0x80);
    if (lStack_70 != 2) {
      if (lStack_70 == 3) {
        if ((*(char *)(param_2 + 0x1b8) != '\x01') || (1 < *(ulong *)(param_2 + 0x1c0))) {
          *(undefined8 *)(param_1 + 0x100) = 3;
          if (cVar8 == '\0') {
            return;
          }
          if (*(char *)(lVar3 + 0x48) != '\x01') {
            if (*(char *)(lVar3 + 0x48) == '\x02') {
              return;
            }
            __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                      (lVar3,&DAT_1060edbcc);
            *(undefined1 *)(lVar3 + 0x48) = 1;
          }
          *(undefined1 *)(lVar3 + 0x44) = 1;
          *(char *)(lVar3 + 0x45) = cVar7;
          return;
        }
LAB_100fc64e0:
        *(undefined8 *)(param_1 + 0x100) = 2;
        return;
      }
      uVar2 = *(ulong *)(param_2 + 0x1c0);
      *(ulong *)(param_2 + 0x1c0) = uVar2 - 2;
      LORelease();
      if (1 < uVar2) {
        puVar4 = auStack_170;
        goto LAB_100fc6504;
      }
      goto LAB_100fc6540;
    }
    if (*(ulong *)(param_2 + 0x1c0) < 2) goto LAB_100fc64e0;
  }
  else {
    uVar2 = *(ulong *)(param_2 + 0x1c0);
    *(ulong *)(param_2 + 0x1c0) = uVar2 - 2;
    LORelease();
    if (1 < uVar2) {
      puVar4 = auStack_290;
LAB_100fc6504:
      _memcpy(param_1,puVar4,0x120);
      return;
    }
LAB_100fc6540:
    __ZN3std7process5abort17hdc01e45e25b715e8E();
  }
  puVar5 = &UNK_10b23a6b8;
LAB_100fc654c:
  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc99a2,0x30,puVar5);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fc6560);
  (*pcVar1)();
}

