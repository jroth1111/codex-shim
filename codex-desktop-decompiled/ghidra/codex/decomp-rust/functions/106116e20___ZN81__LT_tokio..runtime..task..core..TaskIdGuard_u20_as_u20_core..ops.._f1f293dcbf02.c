
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN81__LT_tokio__runtime__task__core__TaskIdGuard_u20_as_u20_core__ops__drop__Drop_GT_4drop17h56887509cd521dc8E
               (undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  lVar1 = (*
          ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
          )();
  if (*(char *)(lVar1 + 0x48) != '\x01') {
    if (*(char *)(lVar1 + 0x48) == '\x02') {
      return;
    }
    __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE(lVar1,&DAT_1060edbcc);
    *(undefined1 *)(lVar1 + 0x48) = 1;
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  return;
}

