
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039a7668(ulong *param_1,undefined8 *param_2,char *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  code *pcVar7;
  char cVar8;
  int iVar10;
  undefined1 uVar9;
  ulong *puVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined1 auVar19 [16];
  ulong uStack_d8;
  ulong uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  ulong uStack_80;
  char *pcStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  lVar18 = param_2[4];
  if ((param_4 == 0) || (*param_3 != '/')) {
    __ZN3std3env11current_dir17he7f55ba519818f7aE(&uStack_80);
    pcVar13 = pcStack_78;
    uVar14 = uStack_80;
    if (uStack_80 == 0x8000000000000000) {
      *param_1 = (ulong)pcStack_78;
      *(undefined1 *)(param_1 + 2) = 2;
      return;
    }
    __ZN3std4path4Path5_join17ha8f408dfc5576c3eE(&uStack_80,pcStack_78,uStack_70,param_3,param_4);
    param_4 = uStack_70;
    param_3 = pcStack_78;
    uStack_d8 = uStack_80;
    if (uVar14 != 0) {
      _free(pcVar13);
    }
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  puVar11 = (ulong *)(*
                     ___ZN8fastrand10global_rng3RNG29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h753d596d401857fdE
                     )();
  if ((char)puVar11[1] == '\x01') {
    uVar14 = *puVar11;
  }
  else {
    auVar19 = __ZN8fastrand10global_rng11random_seed17h2daf4f93b047e8e5E();
    uVar14 = auVar19._8_8_;
    if ((auVar19._0_8_ & 1) == 0) {
      uVar14 = 0xef6f79ed30ba75a;
    }
    *(undefined1 *)(puVar11 + 1) = 1;
  }
  uVar14 = uVar14 + 0x2d358dccaa6c78a5;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar14 ^ 0x8bb84b93962eacc9;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar14;
  uStack_a8 = SUB168(auVar19 * auVar5,8) ^ (uVar14 ^ 0x8bb84b93962eacc9) * uVar14;
  *puVar11 = uVar14;
  lVar1 = (long)param_2 + 0x2a;
  if (*(short *)(param_2 + 5) == 0) {
    lVar1 = 0;
  }
  uVar9 = *(undefined1 *)((long)param_2 + 0x2d);
  iVar16 = 0x10000;
  do {
    while( true ) {
      if (iVar16 == 0xfffd) {
        iVar10 = _getentropy(&uStack_80,8);
        if (iVar10 == 0) {
          uStack_a8 = uStack_80;
        }
        else {
          ___error();
        }
      }
      __ZN8tempfile4util7tmpname17h89c33fc93fa01fe9E
                (&uStack_80,&uStack_a8,uVar12,uVar3,uVar2,uVar4,lVar18);
      pcVar13 = pcStack_78;
      __ZN3std4path4Path5_join17ha8f408dfc5576c3eE(auStack_a0,param_3,param_4,pcStack_78,uStack_70);
      if (uStack_80 != 0) {
        _free(pcVar13);
      }
      __ZN8tempfile3dir6create17h23253b454d7ef783E(&uStack_80,auStack_a0,lVar1,uVar9);
      uVar14 = uStack_80;
      if (((char)uStack_70 != '\x02') ||
         (((cVar8 = FUN_103922950(uStack_80), lVar18 == 0 || (cVar8 != '\f')) &&
          ((cVar8 = FUN_103922950(uVar14), lVar18 == 0 || (cVar8 != '\b')))))) {
        param_1[1] = (ulong)pcStack_78;
        *param_1 = uStack_80;
        param_1[2] = uStack_70;
        if (uStack_d8 == 0) {
          bVar6 = true;
        }
        if (bVar6) {
          return;
        }
        goto LAB_1039a78e4;
      }
      if ((uVar14 & 3) != 1) break;
      uVar15 = *(undefined8 *)(uVar14 - 1);
      puVar17 = *(undefined8 **)(uVar14 + 7);
      pcVar7 = (code *)*puVar17;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar15);
      }
      if (puVar17[1] != 0) {
        _free(uVar15);
      }
      _free((undefined8 *)(uVar14 - 1));
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) goto LAB_1039a790c;
    }
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
LAB_1039a790c:
  uVar12 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0xc,&UNK_108d9bc7d,0x1e);
  uStack_88 = uVar12;
  uVar9 = FUN_103922950();
  if (param_4 == 0) {
    pcVar13 = (char *)0x1;
  }
  else {
    pcVar13 = (char *)_malloc(param_4);
    if (pcVar13 == (char *)0x0) {
      func_0x0001087c9084(1,param_4);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1039a7954);
      (*pcVar7)();
    }
  }
  _memcpy(pcVar13,param_3,param_4);
  uStack_80 = param_4;
  pcStack_78 = pcVar13;
  uStack_70 = param_4;
  uStack_68 = uVar12;
  uVar14 = __ZN3std2io5error5Error3new17h3b39fda1efed87d8E(uVar9,&uStack_80);
  *param_1 = uVar14;
  *(undefined1 *)(param_1 + 2) = 2;
  if (uStack_d8 == 0) {
    bVar6 = true;
  }
  if (!bVar6) {
LAB_1039a78e4:
    _free(param_3);
  }
  return;
}

