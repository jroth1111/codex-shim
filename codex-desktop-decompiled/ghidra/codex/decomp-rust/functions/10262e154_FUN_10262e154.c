
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262e154(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong *puVar3;
  char *pcVar4;
  long *extraout_x1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar5;
  long lStack_70;
  char *pcStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  ulong uStack_48;
  
  if (*param_2 == -0x7ffffffffffffffd) {
    lVar1 = param_2[1];
    pcVar4 = (char *)param_2[2];
    if (lVar1 == -0x8000000000000000) goto LAB_10262e190;
    lVar5 = param_2[3];
    lStack_70 = lVar1;
    pcStack_68 = pcVar4;
    lStack_60 = lVar5;
    puVar3 = (ulong *)(*
                      ___ZN25codex_utils_absolute_path18ABSOLUTE_PATH_BASE29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h6a8b3a4c89e45a60E
                      )();
    if ((char)puVar3[4] == '\x01') {
LAB_10262e228:
      if (0x7ffffffffffffffe < *puVar3) {
        func_0x000108a07858(&UNK_10b27ebe0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10262e334);
        (*pcVar2)();
      }
      *puVar3 = *puVar3 + 1;
      if (puVar3[1] == 0x8000000000000000) {
        if ((lVar5 == 0) || (*pcVar4 != '/')) {
          lStack_50 = FUN_1088e6f00(&UNK_108d31d39,0x30);
          uStack_48 = *puVar3 - 1;
          *puVar3 = uStack_48;
          if (lVar1 != 0) {
            _free(pcVar4);
            uStack_48 = extraout_x8_00;
          }
          lStack_58 = -0x8000000000000000;
        }
        else {
          func_0x0001025c3f84(&lStack_58,&lStack_70);
          if (lStack_58 == -0x8000000000000000) {
            lStack_50 = func_0x0001088e6dc0(lStack_50);
            uStack_48 = extraout_x8;
          }
          *puVar3 = *puVar3 - 1;
        }
LAB_10262e304:
        *param_1 = lStack_58;
        param_1[1] = lStack_50;
        param_1[2] = uStack_48;
        return;
      }
      func_0x0001025c4054(&lStack_58,&lStack_70,puVar3[2],puVar3[3]);
      *puVar3 = *puVar3 - 1;
      if (lStack_58 != -0x7fffffffffffffff) goto LAB_10262e304;
    }
    else {
      if ((char)puVar3[4] != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (puVar3,&DAT_1025d8d94);
        *(undefined1 *)(puVar3 + 4) = 1;
        goto LAB_10262e228;
      }
      if (lVar1 != 0) {
        _free(pcVar4);
      }
    }
    func_0x000108a82a50(&UNK_10b27cef0);
    param_2 = extraout_x1;
  }
  pcVar4 = (char *)FUN_1088e6674(param_2,&lStack_58,&UNK_10b27a368);
  FUN_1025f6ad8(param_2);
LAB_10262e190:
  *param_1 = -0x8000000000000000;
  param_1[1] = (long)pcVar4;
  return;
}

