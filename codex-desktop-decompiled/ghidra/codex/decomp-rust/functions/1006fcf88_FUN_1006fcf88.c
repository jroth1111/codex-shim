
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1006fcf88(void)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  char *extraout_x1;
  char *pcVar6;
  ulong uVar7;
  bool bVar8;
  undefined *puVar9;
  long *unaff_x19;
  ulong unaff_x20;
  long lVar10;
  byte *unaff_x21;
  long lVar11;
  long unaff_x22;
  char *pcVar12;
  uint uVar13;
  undefined *unaff_x28;
  long unaff_x29;
  undefined1 auVar14 [16];
  byte *in_stack_00000028;
  ulong in_stack_00000030;
  undefined *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  
  pcVar12 = s__108ac1772;
  do {
    uVar7 = 0;
    do {
      bVar2 = unaff_x21[uVar7];
      if (bVar2 < 0xc) {
        if (bVar2 == 8) {
          puVar9 = &UNK_108caa869;
joined_r0x0001006fd07c:
          bVar8 = true;
        }
        else if (bVar2 == 9) {
          bVar8 = true;
          puVar9 = &UNK_108caa86b;
        }
        else {
          if (bVar2 != 10) goto LAB_1006fcff0;
          bVar8 = true;
          puVar9 = &UNK_108caa86d;
        }
joined_r0x0001006fd054:
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else if (uVar7 < unaff_x20) {
          if ((char)unaff_x21[uVar7] < -0x40) goto LAB_1006fd248;
        }
        else {
          bVar3 = unaff_x20 != uVar7;
          uVar7 = unaff_x20;
          if (bVar3) goto LAB_1006fd248;
        }
        uVar13 = (uint)unaff_x28;
        in_stack_00000038 = puVar9;
        if (!bVar8) {
          uVar13 = 0;
          in_stack_00000038 = unaff_x28;
        }
        in_stack_00000040 = 2;
        if (!bVar8) {
          in_stack_00000040 = 0;
        }
        uVar1 = uVar7 + uVar13;
        in_stack_00000030 = uVar7;
        goto joined_r0x0001006fd108;
      }
      if (bVar2 < 0x22) {
        if (bVar2 == 0xc) {
          bVar8 = true;
          puVar9 = &UNK_108caa86f;
        }
        else {
          if (bVar2 != 0xd) goto LAB_1006fcff0;
          bVar8 = true;
          puVar9 = &UNK_108caa871;
        }
        goto joined_r0x0001006fd054;
      }
      if (bVar2 == 0x22) {
        bVar8 = true;
        puVar9 = &UNK_108caa875;
        goto joined_r0x0001006fd054;
      }
      if (bVar2 == 0x5c) {
        puVar9 = &UNK_108caa873;
        goto joined_r0x0001006fd07c;
      }
LAB_1006fcff0:
      puVar9 = (undefined *)0x0;
      bVar8 = false;
      if ((bVar2 < 0x20) || (bVar2 == 0x7f)) goto joined_r0x0001006fd054;
      uVar7 = uVar7 + 1;
    } while (unaff_x20 != uVar7);
    uVar13 = 0;
    in_stack_00000038 = (undefined *)0x1;
    in_stack_00000040 = 0;
    uVar1 = unaff_x20;
    in_stack_00000030 = unaff_x20;
joined_r0x0001006fd108:
    in_stack_00000028 = unaff_x21;
    if (uVar1 != 0) {
      if (unaff_x20 <= uVar1) {
        if (unaff_x20 != uVar1) goto LAB_1006fd22c;
        goto LAB_1006fd128;
      }
      if (-0x41 < (char)unaff_x21[uVar1]) goto LAB_1006fd128;
LAB_1006fd22c:
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                (unaff_x21,unaff_x20,uVar1,unaff_x20,&UNK_10b21ede0);
LAB_1006fd248:
      __ZN4core3str16slice_error_fail17h7d5f7302866db666E(unaff_x21,unaff_x20,0);
LAB_1006fd260:
      auVar14 = __ZN4core3str16slice_error_fail17h7d5f7302866db666E
                          (unaff_x21,unaff_x20,1,unaff_x20,&UNK_10b21edf8);
      plVar5 = auVar14._0_8_;
      uVar7 = plVar5[2];
      uVar1 = plVar5[3];
      lVar10 = uVar7 - uVar1;
      if (uVar7 < uVar1) {
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,uVar1,uVar7,&UNK_10b238358);
        pcVar6 = extraout_x1;
LAB_1006fd368:
        __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(0,pcVar6,0x1000,&UNK_10b21ee10);
      }
      else {
        plVar5[2] = 0;
        lVar11 = plVar5[1];
        if (uVar1 == 0) {
          if (uVar7 == 0) goto LAB_1006fd2dc;
LAB_1006fd2d4:
          plVar5[2] = lVar10;
        }
        else {
          if (uVar7 != uVar1) {
            _memmove(lVar11,lVar11 + uVar1,lVar10);
            goto LAB_1006fd2d4;
          }
LAB_1006fd2dc:
          lVar10 = 0;
        }
        plVar5[3] = 0;
        unaff_x22 = plVar5[4];
        auVar14 = FUN_1011c97f4(auVar14._8_8_,unaff_x22,0x1000);
        pcVar6 = auVar14._8_8_;
        if ((auVar14._0_8_ & 1) != 0) {
          return 1;
        }
        unaff_x19 = plVar5;
        if ((char *)0x1000 < pcVar6) goto LAB_1006fd368;
        pcVar12 = pcVar6;
        if (pcVar6 <= (char *)(*plVar5 - lVar10)) goto LAB_1006fd320;
      }
      thunk_FUN_108855060(unaff_x19,lVar10,pcVar12,1,1);
      lVar11 = unaff_x19[1];
      lVar10 = unaff_x19[2];
LAB_1006fd320:
      _memcpy(lVar11 + lVar10,unaff_x22,pcVar12);
      unaff_x19[2] = (long)(pcVar12 + lVar10);
      return 0;
    }
LAB_1006fd128:
    in_stack_00000048 = &stack0x00000028;
    uVar7 = __ZN4core3fmt5write17h64810b21425781ecE();
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    unaff_x20 = unaff_x20 - uVar1;
    unaff_x21 = unaff_x21 + uVar1;
    if (uVar13 == 0) {
      if (unaff_x20 == 0) break;
      *(uint *)(unaff_x29 + -0x54) = (uint)*unaff_x21;
      in_stack_00000048 = (undefined8 *)(unaff_x29 + -0x54);
      uVar7 = __ZN4core3fmt5write17h64810b21425781ecE();
      if ((uVar7 & 1) != 0) {
        return 1;
      }
      if ((unaff_x20 - 1 != 0) && ((char)unaff_x21[1] < -0x40)) goto LAB_1006fd260;
      unaff_x21 = unaff_x21 + 1;
      unaff_x20 = unaff_x20 - 1;
    }
  } while (unaff_x20 != 0);
  in_stack_00000048 = (undefined8 *)&stack0x00000018;
  uVar4 = __ZN4core3fmt5write17h64810b21425781ecE();
  return uVar4;
}

