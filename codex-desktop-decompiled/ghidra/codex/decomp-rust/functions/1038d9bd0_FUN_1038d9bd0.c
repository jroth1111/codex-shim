
void FUN_1038d9bd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  short sVar6;
  code *pcVar7;
  long lVar8;
  undefined1 auVar9 [16];
  long *plStack_910;
  char cStack_908;
  undefined2 uStack_900;
  undefined1 uStack_8fe;
  undefined1 uStack_8fd;
  undefined4 uStack_8fc;
  char cStack_8f8;
  undefined7 uStack_8f7;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  ulong uStack_8e0;
  undefined8 uStack_8d8;
  undefined1 auStack_8d0 [1016];
  long *plStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [1016];
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ushort uStack_88;
  ushort uStack_86;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_900 = 0x1ff;
  uStack_8fe = 1;
  lVar8 = __ZN3std2fs10DirBuilder7_create17h88524462c4c2be57E(&uStack_900,param_4,param_5);
  if (lVar8 == 0) {
    __ZN3std3sys2fs8read_dir17h302bd5d3caaeb353E(&uStack_900,param_2,param_3);
    plStack_910 = (long *)CONCAT44(uStack_8fc,CONCAT13(uStack_8fd,CONCAT12(uStack_8fe,uStack_900)));
    if (cStack_8f8 == '\x02') {
      *param_1 = 0;
      param_1[1] = &UNK_108d97f82;
      *(undefined1 *)(param_1 + 2) = 0x26;
      *(undefined1 *)((long)param_1 + 0x17) = 0;
      *(undefined2 *)((long)param_1 + 0x15) = 0;
      *(undefined4 *)((long)param_1 + 0x11) = 0;
      param_1[3] = plStack_910;
    }
    else {
      cStack_908 = cStack_8f8;
      while (__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha39b25c774f1f642E
                       (&uStack_900,&plStack_910), uVar5 = uStack_8d8, uVar4 = uStack_8e0,
            uVar3 = uStack_8e8, uVar2 = uStack_8f0,
            CONCAT13(uStack_8fd,CONCAT12(uStack_8fe,uStack_900)) == 1) {
        plVar1 = (long *)CONCAT71(uStack_8f7,cStack_8f8);
        if (plVar1 == (long *)0x0) {
          *param_1 = 0;
          param_1[1] = &UNK_108d97fa8;
          param_1[2] = 0x21;
          param_1[3] = uStack_8f0;
          goto LAB_1038d9ee0;
        }
        _memcpy(auStack_4b0,auStack_8d0,0x3f8);
        uStack_4c8 = uVar3;
        uStack_4d0 = uVar2;
        uStack_4c0 = uVar4;
        uStack_4b8 = uVar5;
        plStack_4d8 = plVar1;
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE
                  (&lStack_b8,plVar1[3],plVar1[4],(long)&uStack_4c0 + 5,uVar4 >> 0x10 & 0xffff);
        sVar6 = uStack_4c0._2_2_;
        if (uStack_4c0._2_2_ == 0) {
          lVar8 = 1;
        }
        else {
          lVar8 = _malloc(uStack_4c0._2_2_);
          if (lVar8 == 0) {
            func_0x0001087c9084(1,sVar6);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1038d9f30);
            (*pcVar7)();
          }
        }
        _memcpy(lVar8,(long)&uStack_4c0 + 5,sVar6);
        __ZN3std4path4Path5_join17ha8f408dfc5576c3eE(&lStack_a0,param_4,param_5,lVar8,sVar6);
        if (sVar6 != 0) {
          _free(lVar8);
        }
        __ZN3std2fs8DirEntry9file_type17he7528247956b7510E(&uStack_88,&plStack_4d8);
        if ((uStack_88 & 1) != 0) {
          *param_1 = 0;
          *(undefined2 *)(param_1 + 1) = 0x7fc9;
          *(undefined2 *)((long)param_1 + 0xe) = 0;
          *(undefined4 *)((long)param_1 + 10) = 0x108d9;
          param_1[2] = 0x25;
          param_1[3] = uStack_80;
LAB_1038d9ea0:
          if (lStack_a0 != 0) {
            _free(uStack_98);
          }
          if (lStack_b8 != 0) {
            _free(uStack_b0);
          }
          lVar8 = *plStack_4d8;
          *plStack_4d8 = lVar8 + -1;
          LORelease();
          if (lVar8 == 1) {
            DataMemoryBarrier(2,1);
            func_0x00010604ce90(&plStack_4d8);
          }
LAB_1038d9ee0:
          lVar8 = *plStack_910;
          *plStack_910 = lVar8 + -1;
          LORelease();
          if (lVar8 != 1) {
            return;
          }
          DataMemoryBarrier(2,1);
          func_0x00010604ce90(&plStack_910);
          return;
        }
        if ((uStack_86 & 0xf000) == 0x4000) {
          FUN_1038d9bd0(&uStack_88,uStack_b0,uStack_a8,uStack_98,uStack_90);
          if (CONCAT44(uStack_84,CONCAT22(uStack_86,uStack_88)) != 2) {
            param_1[1] = uStack_80;
            *param_1 = CONCAT44(uStack_84,CONCAT22(uStack_86,uStack_88));
            param_1[3] = uStack_70;
            param_1[2] = uStack_78;
            goto LAB_1038d9ea0;
          }
        }
        else if ((short)uStack_86 < -0x7000) {
          auVar9 = func_0x00010602dcbc(uStack_b0,uStack_a8,uStack_98,uStack_90);
          if ((auVar9._0_8_ & 1) != 0) {
            *param_1 = 0;
            param_1[1] = &UNK_108d97fee;
            param_1[2] = 0x1a;
            param_1[3] = auVar9._8_8_;
            goto LAB_1038d9ea0;
          }
        }
        if (lStack_a0 != 0) {
          _free(uStack_98);
        }
        if (lStack_b8 != 0) {
          _free(uStack_b0);
        }
        lVar8 = *plStack_4d8;
        *plStack_4d8 = lVar8 + -1;
        LORelease();
        if (lVar8 == 1) {
          DataMemoryBarrier(2,1);
          func_0x00010604ce90(&plStack_4d8);
        }
      }
      lVar8 = *plStack_910;
      *plStack_910 = lVar8 + -1;
      LORelease();
      if (lVar8 == 1) {
        DataMemoryBarrier(2,1);
        func_0x00010604ce90(&plStack_910);
      }
      *param_1 = 2;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = &UNK_108d97f5a;
    param_1[2] = 0x28;
    param_1[3] = lVar8;
  }
  return;
}

