
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_106021688(long *param_1,undefined8 *****param_2,long *param_3,long *param_4,ulong param_5,
             undefined4 param_6,ulong param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *****pppppuStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 *******pppppppuStack_78;
  undefined *puStack_70;
  undefined4 uStack_64;
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = param_1[1];
  if ((param_2 == (undefined8 *****)0x0) && ((*(byte *)(puVar1 + 4) & 1) == 0)) {
LAB_1060216bc:
    uVar5 = 0;
    param_1[1] = lVar2 + 1;
  }
  else {
    puVar4 = (undefined8 *)*puVar1;
    pppppuStack_d8 = param_2;
    if (lVar2 == 0) {
      pppppppuStack_d0 = (undefined8 *******)(puVar1 + 3);
      puStack_c8 = &
                   __ZN4core3fmt3num3imp54__LT_impl_u20_core__fmt__Display_u20_for_u20_usize_GT_3fmt17hca40c34e7163f081E
      ;
      uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                        (*puVar4,puVar4[1],&UNK_109bd57a5,&pppppppuStack_d0);
      if ((uVar3 & 1) == 0) {
        if (*(char *)(puVar1 + 4) == '\x01') {
          pppppppuStack_d0 = (undefined8 *******)&pppppuStack_d8;
          puStack_c8 = &DAT_106047c80;
          lStack_c0 = 0;
          lStack_b8 = CONCAT62(lStack_b8._2_6_,0x12);
          uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                            (*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],&UNK_109bd57b0,
                             &pppppppuStack_d0);
          goto joined_r0x0001060217c0;
        }
        goto LAB_1060217c4;
      }
    }
    else {
      uVar3 = (**(code **)(puVar4[1] + 0x18))(*puVar4,&UNK_109bd579f,6);
      if ((uVar3 & 1) == 0) {
        if (*(char *)(puVar1 + 4) == '\x01') {
          pppppppuStack_d0 = (undefined8 *******)&UNK_108c57020;
          puStack_c8 = &DAT_10603bec4;
          lStack_c0 = 0;
          lStack_b8 = CONCAT62(lStack_b8._2_6_,0x15);
          uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                            (*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],&UNK_108c967e0,
                             &pppppppuStack_d0);
joined_r0x0001060217c0:
          if ((uVar3 & 1) != 0) goto LAB_1060218a8;
        }
LAB_1060217c4:
        if (*param_3 == 3) {
          uVar3 = (**(code **)(((undefined8 *)*puVar1)[1] + 0x18))
                            (*(undefined8 *)*puVar1,&UNK_109bd57bc,9);
        }
        else if ((*(byte *)(puVar1 + 4) & 1) == 0) {
          lStack_a8 = param_3[5];
          lStack_b0 = param_3[4];
          lStack_98 = param_3[7];
          lStack_a0 = param_3[6];
          lStack_88 = param_3[9];
          lStack_90 = param_3[8];
          puStack_c8 = (undefined1 *)param_3[1];
          pppppppuStack_d0 = (undefined8 *******)*param_3;
          lStack_b8 = param_3[3];
          lStack_c0 = param_3[2];
          pppppppuStack_78 = &pppppppuStack_d0;
          puStack_70 = &
                       __ZN79__LT_std__backtrace_rs__symbolize__SymbolName_u20_as_u20_core__fmt__Display_GT_3fmt17hf60cd64a13bb79e7E
          ;
          uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                            (*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],&UNK_109bd57c5,
                             &pppppppuStack_78);
        }
        else {
          lStack_a8 = param_3[5];
          lStack_b0 = param_3[4];
          lStack_98 = param_3[7];
          lStack_a0 = param_3[6];
          lStack_88 = param_3[9];
          lStack_90 = param_3[8];
          puStack_c8 = (undefined1 *)param_3[1];
          pppppppuStack_d0 = (undefined8 *******)*param_3;
          lStack_b8 = param_3[3];
          lStack_c0 = param_3[2];
          pppppppuStack_78 = &pppppppuStack_d0;
          puStack_70 = &
                       __ZN79__LT_std__backtrace_rs__symbolize__SymbolName_u20_as_u20_core__fmt__Display_GT_3fmt17hf60cd64a13bb79e7E
          ;
          uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                            (*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],s__108b1bd74,
                             &pppppppuStack_78);
        }
        if (((uVar3 & 1) == 0) &&
           (uVar3 = (**(code **)(((undefined8 *)*puVar1)[1] + 0x18))
                              (*(undefined8 *)*puVar1,&UNK_109bd579e,1), (uVar3 & 1) == 0)) {
          if ((*param_4 == 2) || ((param_5 & 1) == 0)) goto LAB_1060216bc;
          uStack_64 = param_6;
          if (*(char *)(puVar1 + 4) == '\x01') {
            pppppppuStack_d0 = (undefined8 *******)&UNK_108c57020;
            puStack_c8 = &DAT_10603bec4;
            lStack_c0 = 0;
            lStack_b8 = CONCAT62(lStack_b8._2_6_,0x12);
            uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                              (*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],&UNK_108c967e0,
                               &pppppppuStack_d0);
            if ((uVar3 & 1) != 0) goto LAB_1060218a8;
          }
          uVar3 = (**(code **)(((undefined8 *)*puVar1)[1] + 0x18))
                            (*(undefined8 *)*puVar1,&UNK_109bd77b0,0x10);
          if ((uVar3 & 1) == 0) {
            pppppppuStack_d0 = (undefined8 *******)*puVar1;
            lStack_c0 = param_4[1];
            puStack_c8 = (undefined1 *)*param_4;
            lStack_b8 = param_4[2];
            uVar3 = (**(code **)(puVar1[2] + 0x20))(puVar1[1],pppppppuStack_d0,&puStack_c8);
            if ((uVar3 & 1) == 0) {
              pppppppuStack_d0 = (undefined8 *******)&uStack_64;
              puStack_c8 = &
                           __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
              ;
              uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                                (*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],s___108abe99e,
                                 &pppppppuStack_d0);
              if ((uVar3 & 1) == 0) {
                if ((param_7 & 1) != 0) {
                  pppppppuStack_78 = (undefined8 *******)CONCAT44(pppppppuStack_78._4_4_,param_8);
                  pppppppuStack_d0 = &pppppppuStack_78;
                  puStack_c8 = &
                               __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hb2a64ebb0d1cc5d2E
                  ;
                  uVar3 = __ZN4core3fmt5write17h64810b21425781ecE
                                    (*(undefined8 *)*puVar1,((undefined8 *)*puVar1)[1],s___108abe99e
                                     ,&pppppppuStack_d0);
                  if ((uVar3 & 1) != 0) goto LAB_1060218a8;
                }
                uVar3 = (**(code **)(((undefined8 *)*puVar1)[1] + 0x18))
                                  (*(undefined8 *)*puVar1,&UNK_109bd579e,1);
                if ((uVar3 & 1) != 0) {
                  return 1;
                }
                goto LAB_1060216bc;
              }
            }
          }
        }
      }
    }
LAB_1060218a8:
    uVar5 = 1;
  }
  return uVar5;
}

