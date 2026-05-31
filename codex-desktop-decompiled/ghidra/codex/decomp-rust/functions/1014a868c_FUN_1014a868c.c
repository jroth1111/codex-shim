
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014a868c(long *param_1)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  char *extraout_x8;
  char *extraout_x8_00;
  char *pcVar4;
  char *pcVar5;
  long lStack_70;
  char *pcStack_68;
  char *pcStack_60;
  long lStack_58;
  char *pcStack_50;
  char *pcStack_48;
  
  FUN_1004b64d4(&lStack_58);
  pcVar5 = pcStack_48;
  pcVar4 = pcStack_50;
  lVar1 = lStack_58;
  if (lStack_58 == -0x8000000000000000) {
    *param_1 = -0x8000000000000000;
    param_1[1] = (long)pcStack_50;
  }
  else {
    lStack_70 = lStack_58;
    pcStack_68 = pcStack_50;
    pcStack_60 = pcStack_48;
    puVar3 = (ulong *)(*
                      ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                      )();
    if ((char)puVar3[4] == '\x01') goto LAB_1014a872c;
    if ((char)puVar3[4] != '\x02') goto LAB_1014a8714;
    if (lVar1 != 0) {
      _free(pcVar4);
    }
    while( true ) {
      func_0x000108a82a50(&UNK_10b234430);
LAB_1014a8714:
      __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                (puVar3,&DAT_100c35cd4);
      *(undefined1 *)(puVar3 + 4) = 1;
LAB_1014a872c:
      if (0x7ffffffffffffffe < *puVar3) {
        func_0x000108a07858(&UNK_10b24de60);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014a8838);
        (*pcVar2)();
      }
      *puVar3 = *puVar3 + 1;
      if (puVar3[1] == 0x8000000000000000) break;
      FUN_100bdc6e8(&lStack_58,&lStack_70,puVar3[2],puVar3[3]);
      *puVar3 = *puVar3 - 1;
      if (lStack_58 != -0x7fffffffffffffff) goto LAB_1014a8808;
      pcVar4 = (char *)0x8000000000000001;
      pcVar5 = pcStack_50;
    }
    if ((pcVar5 == (char *)0x0) || (*pcVar4 != '/')) {
      pcStack_50 = (char *)FUN_1088561c0(&UNK_108cd61aa,0x30);
      pcStack_48 = (char *)(*puVar3 - 1);
      *puVar3 = (ulong)pcStack_48;
      if (lVar1 != 0) {
        _free(pcVar4);
        pcStack_48 = extraout_x8_00;
      }
      lStack_58 = -0x8000000000000000;
    }
    else {
      FUN_100bdc488(&lStack_58,&lStack_70);
      if (lStack_58 == -0x8000000000000000) {
        pcStack_50 = (char *)FUN_1088562f8(pcStack_50);
        pcStack_48 = extraout_x8;
      }
      *puVar3 = *puVar3 - 1;
    }
LAB_1014a8808:
    *param_1 = lStack_58;
    param_1[1] = (long)pcStack_50;
    param_1[2] = (long)pcStack_48;
  }
  return;
}

