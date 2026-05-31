
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10603ab98(undefined8 *param_1,code *param_2,code *param_3,code *param_4,code *param_5)

{
  code cVar1;
  char cVar2;
  uint uVar3;
  code **ppcVar4;
  code **ppcVar5;
  code **ppcVar6;
  code **ppcVar7;
  code **ppcVar8;
  code **ppcVar9;
  code **ppcVar10;
  code **ppcVar11;
  code **ppcVar12;
  code **ppcVar13;
  code **ppcVar14;
  code **ppcVar15;
  code *pcVar16;
  code **ppcVar17;
  code **ppcVar18;
  code **ppcVar19;
  code **ppcVar20;
  code **ppcVar21;
  code **ppcVar22;
  code **ppcVar23;
  code **ppcVar24;
  code **ppcVar25;
  code **ppcVar26;
  code **ppcVar27;
  code **ppcVar28;
  code **ppcVar29;
  code **ppcVar30;
  code **ppcVar31;
  code **ppcVar32;
  code **ppcVar33;
  code **ppcVar34;
  code **ppcVar35;
  code **ppcVar36;
  code **ppcVar37;
  code **ppcVar38;
  code **ppcVar39;
  code **ppcVar40;
  code **ppcVar41;
  code **ppcVar42;
  code **ppcVar43;
  code **ppcVar44;
  code **ppcVar45;
  code **ppcVar46;
  code **ppcVar47;
  code **ppcVar48;
  code **ppcVar49;
  code **ppcVar50;
  code **ppcVar51;
  code **ppcVar52;
  code **ppcVar53;
  code **ppcVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  ulong *puVar57;
  code *pcVar58;
  code *pcVar59;
  long lVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined1 *puVar63;
  code *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *puVar64;
  ulong uVar65;
  code *pcVar66;
  code *pcVar67;
  code *extraout_x8;
  undefined8 extraout_x8_00;
  code *pcVar68;
  long unaff_x23;
  int unaff_w24;
  ulong unaff_x25;
  char unaff_w26;
  ulong unaff_x27;
  code *unaff_x28;
  undefined8 *******pppppppuVar69;
  code *pcVar70;
  undefined4 in_wzr;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar71 [16];
  undefined1 auStack_120 [72];
  char acStack_d8 [24];
  undefined8 *******pppppppuStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  long lStack_38;
  
  ppcVar20 = &pcStack_60;
  ppcVar17 = &pcStack_60;
  ppcVar30 = &pcStack_60;
  ppcVar35 = &pcStack_60;
  pcVar16 = param_3;
  func_0x000106036268();
  uStack_58 = param_1[1];
  pcStack_60 = (code *)*param_1;
  pcStack_50 = param_2;
  pcStack_48 = param_3;
  puVar57 = (ulong *)(*___ZN3std6thread7current7CURRENT17h98c70d55395456b6E)();
  uVar65 = *puVar57;
  uVar56 = uVar65 == 2;
  if (uVar65 < 3) {
    pcVar70 = (code *)0x10603ac0c;
    pcVar58 = (code *)FUN_106039040(&pcStack_60,0);
    puVar64 = extraout_x1_01;
    uVar62 = extraout_d0_00;
    uVar61 = extraout_var_00;
  }
  else {
    lStack_38 = uVar65 - 0x10;
    pcVar70 = (code *)0x10603abfc;
    pcVar58 = (code *)FUN_106039040(&pcStack_60,&lStack_38);
    puVar64 = extraout_x1_00;
    uVar62 = extraout_d0;
    uVar61 = extraout_var;
  }
  auVar71._8_8_ = puVar64;
  auVar71._0_8_ = pcVar58;
  pcVar66 = (code *)(ulong)*(byte *)param_1[2];
  pcVar68 = (code *)&UNK_109bd516a;
  ppcVar36 = &pcStack_60;
  ppcVar37 = &pcStack_60;
  ppcVar38 = &pcStack_60;
  ppcVar39 = &pcStack_60;
  ppcVar40 = &pcStack_60;
  ppcVar42 = &pcStack_60;
  ppcVar4 = &pcStack_60;
  ppcVar41 = &pcStack_60;
  ppcVar53 = &pcStack_60;
  ppcVar54 = &pcStack_60;
  ppcVar43 = &pcStack_60;
  ppcVar44 = &pcStack_60;
  ppcVar45 = &pcStack_60;
  ppcVar5 = &pcStack_60;
  ppcVar6 = &pcStack_60;
  ppcVar51 = &pcStack_60;
  ppcVar7 = &pcStack_60;
  ppcVar46 = &pcStack_60;
  ppcVar50 = &pcStack_60;
  ppcVar47 = &pcStack_60;
  ppcVar48 = &pcStack_60;
  ppcVar49 = &pcStack_60;
  ppcVar8 = &pcStack_60;
  ppcVar9 = &pcStack_60;
  ppcVar10 = &pcStack_60;
  ppcVar11 = &pcStack_60;
  ppcVar52 = &pcStack_60;
  ppcVar12 = &pcStack_60;
  ppcVar13 = &pcStack_60;
  ppcVar14 = &pcStack_60;
  ppcVar15 = &pcStack_60;
  ppcVar31 = &pcStack_60;
  ppcVar32 = &pcStack_60;
  ppcVar33 = &pcStack_60;
  ppcVar34 = &pcStack_60;
  ppcVar18 = &pcStack_60;
  ppcVar19 = &pcStack_60;
  ppcVar21 = &pcStack_60;
  ppcVar22 = &pcStack_60;
  ppcVar23 = &pcStack_60;
  ppcVar24 = &pcStack_60;
  ppcVar25 = &pcStack_60;
  ppcVar26 = &pcStack_60;
  ppcVar27 = &pcStack_60;
  ppcVar28 = &pcStack_60;
  ppcVar29 = &pcStack_60;
  uVar55 = uVar56;
  pcVar67 = pcVar66;
  pcVar59 = extraout_x1;
  pppppppuVar69 = (undefined8 *******)&stack0xfffffffffffffff0;
  switch(*(byte *)param_1[2]) {
  default:
    pcVar66 = *(code **)(param_3 + 0x48);
  case 0x3e:
  case 0x3f:
  case 0x43:
  case 0x47:
  case 0x51:
  case 0x73:
  case 0x83:
  case 0x8f:
  case 0x97:
  case 0x9b:
  case 0x9f:
  case 0xa1:
  case 0xa7:
  case 0xa9:
  case 0xab:
  case 0xad:
  case 0xb1:
  case 0xb3:
  case 0xb5:
  case 0xb7:
  case 0xb9:
  case 0xbd:
  case 0xc3:
  case 0xc5:
  case 0xcd:
  case 0xdb:
  case 0xe1:
    lStack_38 = (ulong)lStack_38._1_7_ << 8;
code_r0x00010603ac34:
    func_0x00010605d840(pcVar66);
code_r0x00010603ac38:
    pcVar58 = (code *)func_0x00010605d6a4();
code_r0x00010603ac3c:
    pcStack_60 = pcVar58;
    func_0x00010605d768();
    break;
  case 1:
  case 0x42:
    lStack_38 = CONCAT71(lStack_38._1_7_,1);
    func_0x00010605d840(*(long *)(param_3 + 0x48));
    pcVar58 = (code *)func_0x00010605d6a4();
  case 0xba:
    pcStack_60 = pcVar58;
    func_0x00010605d768();
    break;
  case 2:
  case 0x7e:
    pcVar66 = (code *)0x10b63d000;
  case 4:
  case 9:
  case 10:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x2b:
  case 0x30:
  case 0x31:
    cVar1 = pcVar66[0x148];
    pcVar66[0x148] = SUB41(in_wzr,0);
    if (cVar1 != (code)0x0) {
code_r0x00010603ac78:
      pcVar66 = *(code **)(param_3 + 0x48);
      puVar64 = (undefined8 *)&UNK_109bd662b;
code_r0x00010603ac84:
      pcVar58 = param_2;
code_r0x00010603ac8c:
      pcStack_60 = (code *)(*pcVar66)(pcVar58,puVar64);
      func_0x00010605d768();
    }
    break;
  case 3:
    break;
  case 5:
  case 0xc:
  case 0x23:
  case 0xac:
    goto code_r0x00010603ac84;
  case 7:
  case 0x2a:
    goto code_r0x00010603ac8c;
  case 8:
    goto code_r0x00010603aca0;
  case 0x32:
    ppcVar35 = (code **)auStack_120;
    pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
    pcStack_68 = pcVar70;
  case 0xec:
    ppcVar36 = ppcVar35;
    param_2 = param_5;
code_r0x00010603ae40:
    *ppcVar36 = pcVar58;
    ppcVar36[1] = (code *)puVar64;
    ppcVar36[2] = pcVar16;
    pcVar70 = (code *)0x10603ae5c;
    pcVar58 = (code *)func_0x00010603a9a8(1);
    ppcVar37 = ppcVar36;
    pcVar59 = param_4;
    param_1 = puVar64;
code_r0x00010603ae5c:
    pcVar66 = (code *)(ulong)((uint)pcVar58 & 0xff);
    ppcVar38 = ppcVar37;
code_r0x00010603ae60:
    uVar56 = (int)pcVar66 == 2;
    if (!(bool)uVar56) goto LAB_10603b0a4;
    unaff_x23 = 0x10b66f000;
    ppcVar39 = ppcVar38;
    pcVar66 = ___ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
code_r0x00010603ae70:
    param_3 = (code *)&__ZN3std9panicking4HOOK17hfdbcb9267e8ad931E;
    ppcVar40 = ppcVar39;
LAB_10603ae78:
    do {
      if (((code *)0xffffffffffffffef < pcVar66 || pcVar66 == (code *)0x1) ||
          ((ulong)pcVar66 & 2) != 0) {
        unaff_x27 = 0;
        param_1 = (undefined8 *)((long)ppcVar40 + 0x30);
        ppcVar42 = ppcVar40;
        goto code_r0x00010603aeb4;
      }
      pcVar68 = (code *)(((ulong)pcVar66 | 1) + 0x10);
      ppcVar4 = ppcVar40;
      pcVar67 = pcVar66;
code_r0x00010603ae94:
      ppcVar40 = ppcVar4;
      pcVar66 = *(code **)param_3;
      if (pcVar66 == pcVar67) {
        *(code **)param_3 = pcVar68;
      }
      uVar56 = pcVar66 == pcVar67;
      ppcVar41 = ppcVar40;
    } while (!(bool)uVar56);
code_r0x00010603aea8:
    goto LAB_10603b010;
  case 0x36:
    goto code_r0x00010603af78;
  case 0x38:
  case 0xb8:
    goto code_r0x00010603afb0;
  case 0x3a:
    goto code_r0x00010603af18;
  case 0x3c:
  case 0x9c:
    goto code_r0x00010603b01c;
  case 0x40:
    goto code_r0x00010603b004;
  case 0x44:
    goto LAB_10603af6c;
  case 0x46:
    goto code_r0x00010603ac3c;
  case 0x48:
    goto code_r0x00010603aec4;
  case 0x4c:
    goto LAB_10603af60;
  case 0x4e:
code_r0x00010603aeb4:
    *(undefined2 *)((long)ppcVar42 + 0x50) = 0;
    uVar62 = 0;
    uVar61 = 0;
    ppcVar43 = ppcVar42;
  case 0xc2:
    *(undefined8 *)((long)ppcVar43 + 0x38) = uVar61;
    *(undefined8 *)((long)ppcVar43 + 0x30) = uVar62;
    *(undefined8 *)((long)ppcVar43 + 0x48) = uVar61;
    *(undefined8 *)((long)ppcVar43 + 0x40) = uVar62;
    ppcVar44 = ppcVar43;
    unaff_x28 = *(code **)(unaff_x23 + 0xec8);
code_r0x00010603aec4:
    pcVar66 = unaff_x28;
    unaff_w24 = 1;
    unaff_x25 = 9;
    unaff_w26 = -1;
    while( true ) {
      while( true ) {
        uVar56 = false;
        ppcVar45 = ppcVar44;
        unaff_x28 = pcVar66;
        if (pcVar66 != (code *)0x1 && pcVar66 < (code *)0xffffffffffffffef ||
            pcVar66 == (code *)0xffffffffffffffef) {
          uVar56 = ((ulong)pcVar66 & 2) == 0;
        }
code_r0x00010603aee0:
        if ((bool)uVar56) break;
        if ((((uint)unaff_x28 >> 1 & 1) == 0) && (ppcVar51 = ppcVar45, unaff_x27 < 7)) {
LAB_10603af68:
          pcVar66 = (code *)(ulong)(uint)(unaff_w24 << (ulong)((uint)unaff_x27 & 0x1f));
          ppcVar52 = ppcVar51;
LAB_10603af6c:
          do {
            InstructionSynchronizationBarrier();
            ppcVar12 = ppcVar52;
code_r0x00010603af70:
            ppcVar52 = ppcVar12;
            uVar3 = (int)pcVar66 - 1;
            pcVar66 = (code *)(ulong)uVar3;
            ppcVar13 = ppcVar52;
          } while (uVar3 != 0);
code_r0x00010603af78:
          ppcVar44 = ppcVar13;
          pcVar66 = *(code **)(unaff_x23 + 0xec8);
          unaff_x27 = unaff_x27 + 1;
        }
        else {
          if (*(long *)((long)ppcVar45 + 0x48) == 0) {
            pcVar70 = (code *)0x10603afe0;
            FUN_108a84b14(param_1 + 3);
            ppcVar7 = ppcVar45;
code_r0x00010603afe0:
            ppcVar45 = ppcVar7;
          }
          *(undefined1 *)((long)ppcVar45 + 0x50) = 0;
          pcVar66 = (code *)((ulong)unaff_x28 & 0xfffffffffffffff0);
          ppcVar46 = ppcVar45;
code_r0x00010603af00:
          *(code **)((long)ppcVar46 + 0x30) = pcVar66;
          *(undefined8 *)((long)ppcVar46 + 0x38) = 0;
          uVar65 = (ulong)param_1 | (ulong)unaff_x28 & unaff_x25;
          if (((uint)unaff_x28 >> 1 & 1) == 0) {
            pcVar68 = (code *)(uVar65 + 2);
            ppcVar47 = ppcVar46;
code_r0x00010603af14:
            *(undefined8 **)((long)ppcVar47 + 0x40) = param_1;
            ppcVar48 = ppcVar47;
code_r0x00010603af18:
            pcVar66 = *(code **)param_3;
            ppcVar49 = ppcVar48;
            if (pcVar66 != unaff_x28) {
code_r0x00010603af28:
              ppcVar6 = ppcVar49;
              goto LAB_10603af60;
            }
            *(code **)param_3 = pcVar68;
            ppcVar50 = ppcVar48;
          }
          else {
            *(undefined8 *)((long)ppcVar46 + 0x40) = 0;
            pcVar66 = *(code **)param_3;
            ppcVar50 = ppcVar46;
            if (pcVar66 == unaff_x28) {
              *(ulong *)param_3 = uVar65 + 6;
            }
code_r0x00010603af58:
            pcVar58 = param_3;
            ppcVar6 = ppcVar50;
            param_3 = pcVar58;
            if (pcVar66 != unaff_x28) goto LAB_10603af60;
            ppcVar11 = ppcVar50;
            if (((uint)unaff_x28 >> 2 & 1) == 0) {
code_r0x00010603af8c:
              ppcVar50 = ppcVar11;
              pcVar70 = (code *)0x10603af90;
              FUN_106032bec(pcVar58);
            }
          }
          while (ppcVar8 = ppcVar50, *(char *)((long)ppcVar50 + 0x50) == '\0') {
            unaff_x27 = *(ulong *)((long)ppcVar50 + 0x48);
            ppcVar9 = ppcVar50;
            if (unaff_x27 == 0) {
              pcVar58 = (code *)&UNK_10b4ad000;
              goto code_r0x00010603afe8;
            }
code_r0x00010603af9c:
            ppcVar50 = ppcVar9;
            LOAcquire();
            cVar2 = *(char *)(unaff_x27 + 0x30);
            *(char *)(unaff_x27 + 0x30) = cVar2 + unaff_w26;
            if (cVar2 != '\x01') {
              do {
                pcVar58 = *(code **)(unaff_x27 + 0x28);
                ppcVar10 = ppcVar50;
code_r0x00010603afb0:
                ppcVar50 = ppcVar10;
                pcVar70 = (code *)0x10603afb8;
                lVar60 = _dispatch_semaphore_wait(pcVar58,0xffffffffffffffff);
              } while (lVar60 != 0);
              LOAcquire();
              *(char *)(unaff_x27 + 0x30) = (char)in_wzr;
            }
          }
code_r0x00010603afcc:
          ppcVar44 = ppcVar8;
          unaff_x27 = 0;
          pcVar66 = *(code **)(unaff_x23 + 0xec8);
        }
      }
      pcVar66 = *(code **)param_3;
      ppcVar6 = ppcVar45;
      if (pcVar66 == unaff_x28) break;
LAB_10603af60:
      ppcVar44 = ppcVar6;
    }
    *(ulong *)param_3 = ((ulong)unaff_x28 | 1) + 0x10;
    pcVar66 = *(code **)((long)ppcVar45 + 0x48);
    uVar56 = 1;
    ppcVar5 = ppcVar45;
code_r0x00010603aff8:
    ppcVar41 = ppcVar5;
    if (pcVar66 != (code *)0x0) {
      FUN_10605d7e0(pcVar70);
      ppcVar14 = ppcVar41;
code_r0x00010603b004:
      ppcVar41 = ppcVar14;
      ppcVar15 = ppcVar41;
      if ((bool)uVar56) {
code_r0x00010603b00c:
        ppcVar41 = ppcVar15;
        FUN_10605d788();
      }
    }
LAB_10603b010:
    pcVar68 = *(code **)(param_3 + 8);
    *(code **)((long)ppcVar41 + 0x20) = param_3 + 8;
    *(code **)((long)ppcVar41 + 0x28) = param_3;
    ppcVar53 = ppcVar41;
code_r0x00010603b01c:
    ppcVar54 = ppcVar53;
    if (pcVar68 == (code *)0x0) {
code_r0x00010603b020:
      uVar62 = *ppcVar54;
      param_1 = (undefined8 *)ppcVar54[1];
      auVar71 = FUN_10605d7cc(param_1[5]);
      *(undefined1 (*) [16])(ppcVar54 + 6) = auVar71;
      ppcVar54[8] = ppcVar54[2];
      *(char *)(ppcVar54 + 9) = (char)pcVar59;
      *(char *)((long)ppcVar54 + 0x49) = (char)param_2;
      __ZN3std9panicking12default_hook17h7aae5c8c53b8a669E(ppcVar54 + 6);
      ppcVar38 = ppcVar54;
    }
    else {
      uVar62 = *ppcVar53;
      param_1 = (undefined8 *)ppcVar53[1];
      auVar71 = FUN_10605d7cc(param_1[5]);
      *(undefined1 (*) [16])(ppcVar53 + 6) = auVar71;
      ppcVar53[8] = ppcVar53[2];
      *(char *)(ppcVar53 + 9) = (char)pcVar59;
      *(char *)((long)ppcVar53 + 0x49) = (char)param_2;
      (**(code **)(lRam000000010b66fed8 + 0x28))(uRam000000010b66fed0,ppcVar53 + 6);
      ppcVar38 = ppcVar53;
    }
    FUN_10603f748((undefined1 *)((long)ppcVar38 + 0x20));
    lVar60 = FUN_10605d620();
    *(undefined1 *)(lVar60 + 8) = 0;
    if (((ulong)pcVar59 & 1) == 0) goto LAB_10603b138;
    pcVar58 = (code *)__RNvCshXwFllX56pT_7___rustc10rust_panic(uVar62,param_1);
    pcVar66 = extraout_x8;
LAB_10603b0a4:
    if (((ulong)pcVar66 & 1) == 0) {
      *(undefined1 **)((long)ppcVar38 + 0x30) = (undefined1 *)((long)ppcVar38 + 0x10);
      *(undefined **)((long)ppcVar38 + 0x38) = &DAT_10603be64;
      *(code ***)((long)ppcVar38 + 0x40) = ppcVar38;
      *(undefined **)((long)ppcVar38 + 0x48) = &DAT_10604802c;
      uVar62 = FUN_10605d770(pcVar58,s_aborting_due_to_panic_at___108b34d5d);
      *(undefined8 *)((long)ppcVar38 + 0x20) = uVar62;
      puVar63 = (undefined1 *)((long)ppcVar38 + 0x20);
    }
    else {
      auVar71 = FUN_10605d7cc(param_1[6]);
      uVar61 = FUN_10605d6c0(auVar71._0_8_,auVar71._8_8_,0x10603b0b0);
      uVar62 = uVar61;
      if ((bool)uVar56) {
        uVar62 = 1;
      }
      *(undefined8 *)((long)ppcVar38 + 0x20) = uVar62;
      *(undefined8 *)((long)ppcVar38 + 0x28) = extraout_x8_00;
      *(undefined1 **)((long)ppcVar38 + 0x30) = (undefined1 *)((long)ppcVar38 + 0x10);
      *(undefined **)((long)ppcVar38 + 0x38) = &DAT_10603be64;
      *(undefined1 **)((long)ppcVar38 + 0x40) = (undefined1 *)((long)ppcVar38 + 0x20);
      *(undefined **)((long)ppcVar38 + 0x48) = &DAT_10603bec4;
      uVar62 = FUN_10605d770(uVar61,s_panicked_at___3_thread_panicked_w_108b34d7f);
      *(undefined8 *)((long)ppcVar38 + 0x18) = uVar62;
      puVar63 = (undefined1 *)((long)ppcVar38 + 0x18);
    }
    do {
      FUN_10603f834(puVar63);
      __ZN3std7process5abort17hdc01e45e25b715e8E();
LAB_10603b138:
      uVar62 = FUN_10602995c((undefined1 *)((long)ppcVar38 + 0x20),&UNK_109bd683d,0x5b);
      *(undefined8 *)((long)ppcVar38 + 0x30) = uVar62;
      puVar63 = (undefined1 *)((long)ppcVar38 + 0x30);
    } while( true );
  case 0x50:
    goto code_r0x00010603ac78;
  case 0x52:
    goto code_r0x00010603af14;
  case 0x54:
    goto code_r0x00010603aee0;
  case 0x56:
    goto code_r0x00010603b020;
  case 0x58:
    goto code_r0x00010603af9c;
  case 0x5a:
    goto code_r0x00010603aff8;
  case 0x5c:
    goto code_r0x00010603add8;
  case 0x5e:
    goto code_r0x00010603ada4;
  case 0x60:
    goto code_r0x00010603ae70;
  case 0x62:
    goto code_r0x00010603ae08;
  case 100:
  case 0x66:
  case 0x68:
  case 0x6a:
  case 0x6c:
  case 0x6e:
  case 0x70:
  case 0x74:
  case 0x76:
  case 0x7a:
  case 0x7c:
  case 0x84:
  case 0x86:
  case 0x88:
  case 0x8a:
  case 0x8c:
    goto code_r0x00010603ad08;
  case 0x72:
    goto code_r0x00010603ad28;
  case 0x78:
    goto code_r0x00010603acac;
  case 0x80:
    goto code_r0x00010603ad78;
  case 0x82:
    goto code_r0x00010603ace4;
  case 0x8e:
    goto code_r0x00010603aca4;
  case 0x90:
    goto code_r0x00010603afcc;
  case 0x92:
    goto code_r0x00010603ad18;
  case 0x94:
    goto code_r0x00010603ad4c;
  case 0x96:
    goto code_r0x00010603ad44;
  case 0x98:
    goto code_r0x00010603ae94;
  case 0x99:
  case 0xbb:
  case 199:
  case 0xd1:
  case 0xd3:
  case 0xd7:
  case 0xd9:
  case 0xdd:
  case 0xe7:
  case 0xeb:
    goto code_r0x00010603ac34;
  case 0x9a:
    goto code_r0x00010603ae40;
  case 0x9e:
    goto code_r0x00010603ad1c;
  case 0xa0:
  case 200:
    func_0x00010605d604();
    puVar64 = (undefined8 *)func_0x00010605d7bc();
    ppcVar20 = (code **)&stack0xffffffffffffff60;
    ppcVar17 = (code **)&stack0xffffffffffffff60;
    pcStack_68 = FUN_10603acbc;
    pppppppuVar69 = &pppppppuStack_70;
    pcVar68 = (code *)((undefined8 *)*puVar64)[1];
    if (((ulong)pcVar68 & 1) == 0) {
      pcVar66 = (code *)0x8000000000000000;
      pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
      goto code_r0x00010603ace0;
    }
    pcVar66 = *(code **)*puVar64;
    param_2 = pcVar58;
    pppppppuStack_70 = (undefined8 *******)&stack0xfffffffffffffff0;
    goto code_r0x00010603ad08;
  case 0xa2:
    goto code_r0x00010603af58;
  case 0xa4:
  case 0xbc:
    goto code_r0x00010603af28;
  case 0xa6:
    goto code_r0x00010603ad9c;
  case 0xa8:
    goto code_r0x00010603ad0c;
  case 0xaa:
    goto code_r0x00010603af8c;
  case 0xae:
    goto code_r0x00010603afe0;
  case 0xb0:
    goto LAB_10603ae78;
  case 0xb2:
    goto code_r0x00010603ade8;
  case 0xb4:
    goto code_r0x00010603af70;
  case 0xb6:
code_r0x00010603afe8:
    func_0x000108a07a20(pcVar58 + 0xdb0);
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10603b1a0);
    (*pcVar16)();
  case 0xbe:
    goto code_r0x00010603aea8;
  case 0xc4:
    goto code_r0x00010603b00c;
  case 0xc6:
code_r0x00010603ace0:
    *ppcVar17 = pcVar66;
    ppcVar18 = ppcVar17;
    goto code_r0x00010603ace4;
  case 0xca:
  case 0xd8:
    goto code_r0x00010603ad64;
  case 0xcc:
  case 0xe4:
    goto code_r0x00010603af00;
  case 0xce:
    goto code_r0x00010603ad20;
  case 0xd0:
    goto code_r0x00010603acf8;
  case 0xd2:
    goto code_r0x00010603ac9c;
  case 0xd4:
    goto code_r0x00010603ae60;
  case 0xd6:
    goto code_r0x00010603ad14;
  case 0xdc:
    goto code_r0x00010603ae5c;
  case 0xde:
    goto code_r0x00010603ae14;
  case 0xe0:
    goto code_r0x00010603ad74;
  case 0xe2:
    goto code_r0x00010603ade4;
  case 0xe6:
    goto code_r0x00010603adf0;
  case 0xe8:
    goto code_r0x00010603adbc;
  case 0xea:
    goto code_r0x00010603ad34;
  case 0xee:
  case 0xfc:
    goto LAB_10603af68;
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf2:
  case 0xf3:
  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xf8:
  case 0xf9:
  case 0xfa:
  case 0xfb:
  case 0xfd:
  case 0xfe:
  case 0xff:
    goto code_r0x00010603ac38;
  }
  pcVar58 = (code *)func_0x00010605d604();
code_r0x00010603ac9c:
code_r0x00010603aca0:
  goto code_r0x00010603aca4;
code_r0x00010603ace4:
  puVar64 = (undefined8 *)&UNK_10b4ae460;
  ppcVar19 = ppcVar18;
code_r0x00010603acf8:
  __ZN3std9panicking15panic_with_hook17hb885411bb59bebf4E(ppcVar19,puVar64);
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10603ad04);
  (*pcVar16)();
code_r0x00010603aca4:
code_r0x00010603acac:
  return pcVar58;
code_r0x00010603ad08:
  pcVar68 = (code *)((ulong)pcVar68 >> 1);
  ppcVar21 = ppcVar20;
code_r0x00010603ad0c:
  *ppcVar21 = pcVar66;
  ppcVar21[1] = pcVar68;
  ppcVar22 = ppcVar21;
code_r0x00010603ad14:
  ppcVar23 = ppcVar22;
code_r0x00010603ad18:
  ppcVar24 = ppcVar23;
code_r0x00010603ad1c:
  puVar64 = (undefined8 *)&UNK_10b4ae000;
  ppcVar25 = ppcVar24;
code_r0x00010603ad20:
  puVar64 = puVar64 + 0x93;
  ppcVar26 = ppcVar25;
  pcVar58 = (code *)ppcVar25;
code_r0x00010603ad28:
  pcVar58 = (code *)__ZN3std9panicking15panic_with_hook17hb885411bb59bebf4E(pcVar58,puVar64);
  uVar56 = ((ulong)*ppcVar26 & 0x7fffffffffffffff) == 0;
  ppcVar27 = ppcVar26;
code_r0x00010603ad34:
  if ((bool)uVar56) {
    pcVar58 = (code *)__Unwind_Resume();
  }
  pcVar66 = *(code **)((long)ppcVar27 + 8);
  ppcVar28 = ppcVar27;
  pcVar59 = pcVar58;
code_r0x00010603ad44:
  _free(pcVar66);
  ppcVar29 = ppcVar28;
code_r0x00010603ad4c:
  auVar71 = __Unwind_Resume(pcVar59);
  ppcVar30 = (code **)((long)ppcVar29 + -0x30);
  *(code **)((long)ppcVar29 + -0x20) = param_2;
  *(code **)((long)ppcVar29 + -0x18) = pcVar59;
  *(undefined8 ********)((long)ppcVar29 + -0x10) = pppppppuVar69;
  *(undefined8 *)((long)ppcVar29 + -8) = 0x10603ad54;
code_r0x00010603ad64:
  pcVar59 = auVar71._0_8_;
  param_2 = *(code **)(auVar71._8_8_ + 0x18);
  (*param_2)(ppcVar30);
  ppcVar31 = ppcVar30;
code_r0x00010603ad74:
  pcVar66 = *ppcVar31;
  pcVar68 = ppcVar31[1];
  ppcVar32 = ppcVar31;
code_r0x00010603ad78:
  uVar56 = pcVar68 == (code *)0xb98b1b7157a64178;
  pcVar68 = (code *)0x63eb502cd6cb5d6d;
  ppcVar33 = ppcVar32;
code_r0x00010603ad9c:
  if ((bool)uVar56 && pcVar66 == pcVar68) {
code_r0x00010603ada4:
    pcVar68 = pcVar59;
  }
  else {
    (*param_2)(ppcVar33,pcVar59);
    ppcVar34 = ppcVar33;
code_r0x00010603adbc:
    pcVar66 = *ppcVar34;
    uVar56 = ppcVar34[1] == (code *)0xc562e3f3b820908e;
    pcVar68 = (code *)0xab51;
code_r0x00010603add8:
    pcVar68 = (code *)((ulong)pcVar68 & 0xffff00000000ffff | 0xc16fcd3706a60000);
    uVar55 = uVar56;
code_r0x00010603ade4:
    uVar56 = false;
    if ((bool)uVar55) {
      uVar56 = pcVar66 == pcVar68;
    }
code_r0x00010603ade8:
    if (!(bool)uVar56) {
      pcVar58 = (code *)&UNK_109bd6831;
code_r0x00010603ae08:
      return pcVar58;
    }
    pcVar68 = pcVar59 + 8;
code_r0x00010603adf0:
  }
  pcVar58 = *(code **)pcVar68;
code_r0x00010603ae14:
  return pcVar58;
}

