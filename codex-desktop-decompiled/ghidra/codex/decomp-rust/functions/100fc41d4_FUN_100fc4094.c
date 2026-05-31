
void FUN_100fc4094(int *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  char cStack_e7;
  undefined6 uStack_e6;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  bVar2 = *(byte *)(param_2 + 7);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uStack_88 = param_2[1];
      uStack_90 = *param_2;
      uStack_80 = param_2[2];
      __ZN5tokio3net4addr95__LT_impl_u20_tokio__net__addr__sealed__ToSocketAddrsPriv_u20_for_u20__LP__RF_str_C_u16_RP__GT_15to_socket_addrs17hd245392d8bda99ccE
                (&uStack_50,&uStack_90);
      uStack_68 = uStack_48;
      uStack_70 = uStack_50;
      uStack_58 = uStack_38;
      uStack_60 = uStack_40;
      param_2[4] = uStack_48;
      param_2[3] = uStack_50;
      param_2[6] = uStack_38;
      param_2[5] = uStack_40;
LAB_100fc40fc:
      __ZN85__LT_tokio__net__addr__sealed__MaybeReady_u20_as_u20_core__future__future__Future_GT_4poll17h1a3da82d40572efbE
                (param_1,param_2 + 3,param_3);
      iVar4 = *param_1;
      if (iVar4 != 3) {
        if (*(short *)(param_2 + 3) == 3) {
          plVar5 = (long *)param_2[4];
          if (*plVar5 == 0xcc) {
            *plVar5 = 0x84;
          }
          else {
            (**(code **)(plVar5[2] + 0x20))();
          }
        }
        iVar4 = 1;
      }
      *(char *)(param_2 + 7) = (char)iVar4;
      return;
    }
    func_0x000108a07af4(&UNK_10b23a580);
  }
  else if (bVar2 == 3) goto LAB_100fc40fc;
  func_0x000108a07b10(&UNK_10b23a580);
  *(undefined1 *)(param_2 + 7) = 2;
  uVar6 = __Unwind_Resume();
  if (*(short *)(param_2 + 3) == 3) {
    plVar5 = (long *)param_2[4];
    if (*plVar5 == 0xcc) {
      *plVar5 = 0x84;
    }
    else {
      (**(code **)(plVar5[2] + 0x20))();
    }
  }
  *(undefined1 *)(param_2 + 7) = 2;
  __Unwind_Resume(uVar6);
  auVar13 = func_0x000108a07bc4();
  puVar9 = auVar13._8_8_;
  plVar5 = auVar13._0_8_;
  bVar2 = *(byte *)(puVar9 + 10);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      func_0x000108a07af4(&UNK_10b23a5b0);
LAB_100fc43bc:
      func_0x000108a07b10(&UNK_10b23a5b0);
LAB_100fc43c8:
      func_0x000108a07af4(&UNK_10b23a598);
LAB_100fc43e4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100fc43e8);
      (*pcVar3)();
    }
    uStack_138 = puVar9[1];
    uStack_140 = *puVar9;
    uStack_128 = puVar9[3];
    uStack_130 = puVar9[2];
    __ZN3mio3net3tcp6stream9TcpStream7connect17h6b254999cc05dd0bE(&uStack_f0,&uStack_140);
    if ((uStack_f0 & 1) == 0) {
      *(undefined1 *)((long)puVar9 + 0x4c) = 0;
      *(undefined4 *)(puVar9 + 9) = uStack_ec;
      uVar1 = uStack_ec;
LAB_100fc427c:
      puVar7 = puVar9 + 4;
      FUN_1060f7d54(&uStack_f0,uVar1,&UNK_10b4cd2d0);
      uVar12 = CONCAT62(uStack_e6,CONCAT11(cStack_e7,uStack_e8));
      if (CONCAT44(uStack_ec,uStack_f0) != 2) {
        uStack_f8 = uStack_d8;
        uStack_100 = uStack_e0;
        puVar9[4] = CONCAT44(uStack_ec,uStack_f0);
        puVar9[5] = uVar12;
        puVar9[7] = uStack_d8;
        puVar9[6] = uStack_e0;
        puVar9[8] = puVar7;
        goto LAB_100fc42b0;
      }
LAB_100fc4360:
      *(undefined1 *)((long)puVar9 + 0x4c) = 1;
      lVar11 = 2;
      goto LAB_100fc436c;
    }
    uVar12 = CONCAT62(uStack_e6,CONCAT11(cStack_e7,uStack_e8));
    lVar11 = 2;
  }
  else {
    if (bVar2 != 3) goto LAB_100fc43bc;
    bVar2 = *(byte *)((long)puVar9 + 0x4c);
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        uVar1 = *(undefined4 *)(puVar9 + 9);
        goto LAB_100fc427c;
      }
      goto LAB_100fc43c8;
    }
    if (bVar2 != 3) {
      func_0x000108a07b10(&UNK_10b23a598);
      goto LAB_100fc43e4;
    }
    puVar7 = (undefined8 *)puVar9[8];
LAB_100fc42b0:
    __ZN5tokio7runtime2io12registration12Registration10poll_ready17hed3d476e59e79c4fE
              (&uStack_f0,puVar7,param_3,1);
    if (cStack_e7 == '\x03') {
      *(undefined1 *)((long)puVar9 + 0x4c) = 3;
LAB_100fc42d0:
      uVar10 = 3;
      *plVar5 = 3;
      goto LAB_100fc4384;
    }
    if (cStack_e7 == '\x02') {
      uVar12 = CONCAT44(uStack_ec,uStack_f0);
LAB_100fc4358:
      FUN_100deb62c(puVar9 + 4);
      goto LAB_100fc4360;
    }
    if (*(int *)(puVar9 + 7) == -1) {
      func_0x000108a07a20(&UNK_10b23a610);
      goto LAB_100fc43e4;
    }
    uStack_100 = uStack_100 & 0xffffffff00000000;
    uStack_f0 = 4;
    iVar4 = _getsockopt(*(int *)(puVar9 + 7),0xffff,0x1007,&uStack_100,&uStack_f0);
    if (iVar4 == -1) {
      puVar8 = (uint *)___error();
      uVar12 = (ulong)*puVar8;
LAB_100fc4350:
      uVar12 = uVar12 << 0x20 | 2;
      goto LAB_100fc4358;
    }
    uVar12 = (ulong)(int)uStack_100;
    if ((int)uStack_100 != 0) goto LAB_100fc4350;
    lVar11 = puVar9[4];
    uVar12 = puVar9[5];
    lStack_118 = puVar9[7];
    lStack_120 = puVar9[6];
    *(undefined1 *)((long)puVar9 + 0x4c) = 1;
    if (lVar11 == 3) goto LAB_100fc42d0;
LAB_100fc436c:
    lStack_108 = lStack_118;
    lStack_110 = lStack_120;
  }
  *plVar5 = lVar11;
  plVar5[1] = uVar12;
  plVar5[3] = lStack_108;
  plVar5[2] = lStack_110;
  uVar10 = 1;
LAB_100fc4384:
  *(undefined1 *)(puVar9 + 10) = uVar10;
  return;
}

