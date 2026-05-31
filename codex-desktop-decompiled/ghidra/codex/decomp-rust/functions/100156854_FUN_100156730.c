
void FUN_100156730(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined *in_stack_00000030;
  
  iVar2 = __ZN4core3fmt5write17h64810b21425781ecE
                    (&stack0x00000008,param_2,s__108ac988c,&stack0x00000028);
  if (iVar2 == 0) {
    in_stack_00000020 = unaff_x20 + 0x26;
    in_stack_00000028 = &stack0x00000020;
    in_stack_00000030 = &DAT_10015fa70;
    uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                      (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
    if ((uVar3 & 1) == 0) {
      in_stack_00000020 = unaff_x20 + 0x10;
      in_stack_00000028 = &stack0x00000020;
      in_stack_00000030 = &DAT_10015fb44;
      uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                        (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
      if ((uVar3 & 1) == 0) {
        in_stack_00000020 = unaff_x20 + 0x15;
        in_stack_00000028 = &stack0x00000020;
        in_stack_00000030 = &DAT_10015fb90;
        uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                          (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
        if ((uVar3 & 1) == 0) {
          in_stack_00000028 = &stack0x00000020;
          in_stack_00000030 = &DAT_10015faf0;
          in_stack_00000020 = unaff_x20;
          uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                            (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
          if ((uVar3 & 1) == 0) {
            in_stack_00000020 = unaff_x20 + 0x19;
            if (*in_stack_00000020 != -0x8000000000000000) {
              in_stack_00000028 = &stack0x00000020;
              in_stack_00000030 = &DAT_10015fd04;
              uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                                (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
              if ((uVar3 & 1) != 0) {
                puVar4 = &UNK_10b1e28a0;
                goto LAB_100156ab0;
              }
            }
            if (unaff_x20[9] != 0) {
              in_stack_00000020 = unaff_x20 + 7;
              in_stack_00000028 = &stack0x00000020;
              in_stack_00000030 = &DAT_10015fae8;
              uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                                (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
              if ((uVar3 & 1) != 0) {
                puVar4 = &UNK_10b1e28b8;
                goto LAB_100156ab0;
              }
            }
            if (unaff_x20[0xc] != 0) {
              lVar5 = unaff_x20[0xc] * 0x48;
              plVar6 = (long *)unaff_x20[0xb];
              puVar4 = &UNK_10b1e2918;
              do {
                in_stack_00000030 = &DAT_10015f9bc;
                in_stack_00000020 = plVar6;
                in_stack_00000028 = &stack0x00000020;
                uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                                  (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
                if ((uVar3 & 1) != 0) goto LAB_100156ab0;
                plVar6 = plVar6 + 9;
                lVar5 = lVar5 + -0x48;
              } while (lVar5 != 0);
            }
            if (unaff_x20[0xf] != 0) {
              plVar6 = (long *)unaff_x20[0xe];
              lVar5 = unaff_x20[0xf] * 0x18;
              puVar4 = &UNK_10b1e2900;
              do {
                in_stack_00000030 = &DAT_10015fd48;
                in_stack_00000020 = plVar6;
                in_stack_00000028 = &stack0x00000020;
                uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                                  (&stack0x00000008,&UNK_10b1e27f8,s__108ac988c,&stack0x00000028);
                if ((uVar3 & 1) != 0) goto LAB_100156ab0;
                plVar6 = plVar6 + 3;
                lVar5 = lVar5 + -0x18;
              } while (lVar5 != 0);
            }
            in_stack_00000020 = unaff_x20 + 0x1c;
            if (*in_stack_00000020 != -0x7fffffffffffffff) {
              in_stack_00000028 = &stack0x00000020;
              in_stack_00000030 = &DAT_10015faac;
              uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                                (&stack0x00000008,&UNK_10b1e27f8,s_app__108ab763d,&stack0x00000028);
              if ((uVar3 & 1) != 0) {
                puVar4 = &UNK_10b1e28d0;
                goto LAB_100156ab0;
              }
            }
            in_stack_00000020 = unaff_x20 + 0x1f;
            if (*in_stack_00000020 != -0x7fffffffffffffff) {
              in_stack_00000028 = &stack0x00000020;
              in_stack_00000030 = &DAT_10015fd48;
              uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                                (&stack0x00000008,&UNK_10b1e27f8,s__108b1bd74,&stack0x00000028);
              if ((uVar3 & 1) != 0) {
                puVar4 = &UNK_10b1e28e8;
                goto LAB_100156ab0;
              }
            }
            if ((in_stack_00000018 != 0) &&
               (*(char *)(in_stack_00000010 + in_stack_00000018 + -1) == ' ')) {
              in_stack_00000018 = in_stack_00000018 + -1;
            }
            unaff_x19[1] = in_stack_00000010;
            *unaff_x19 = in_stack_00000008;
            unaff_x19[2] = in_stack_00000018;
            return;
          }
          puVar4 = &UNK_10b1e2888;
        }
        else {
          puVar4 = &UNK_10b1e2870;
        }
      }
      else {
        puVar4 = &UNK_10b1e2858;
      }
    }
    else {
      puVar4 = &UNK_10b1e2840;
    }
  }
  else {
    puVar4 = &UNK_10b1e2828;
  }
LAB_100156ab0:
  FUN_107c05cb4(&UNK_108c633e8,0x2b,&stack0x0000003f,&UNK_10b1e32a8,puVar4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100156ad4);
  (*pcVar1)();
}

