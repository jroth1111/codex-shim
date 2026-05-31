
bool FUN_1046d16a0(long param_1,ulong param_2)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  short *psVar4;
  code *pcVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  short *psVar15;
  short *psVar16;
  short *psVar17;
  ulong uVar18;
  ulong uVar19;
  int aiStack_58 [2];
  undefined8 uStack_50;
  long lStack_48;
  
  if (0x8000 < param_2) goto LAB_1046d187c;
  psVar17 = *(short **)(param_1 + 0x48);
  uVar18 = *(ulong *)(param_1 + 0x50);
  if (uVar18 != 0) {
    uVar19 = 0;
    lVar7 = uVar18 << 2;
    puVar11 = (ushort *)(psVar17 + 1);
    do {
      if ((puVar11[-1] != 0xffff) &&
         (((int)uVar19 - (uint)(*puVar11 & *(ushort *)(param_1 + 0x58)) &
          (uint)*(ushort *)(param_1 + 0x58)) == 0)) goto joined_r0x0001046d1710;
      puVar11 = puVar11 + 2;
      uVar19 = uVar19 + 1;
      lVar7 = lVar7 + -4;
    } while (lVar7 != 0);
  }
  uVar19 = 0;
joined_r0x0001046d1710:
  if (param_2 != 0) {
    puVar6 = (undefined4 *)_malloc(param_2 << 2);
    if (puVar6 != (undefined4 *)0x0) {
      uVar18 = param_2 - 1;
      puVar9 = puVar6;
      if (uVar18 != 0) {
        if (param_2 < 0x21) {
          uVar12 = 1;
        }
        else {
          uVar13 = uVar18 & 0xffffffffffffffe0;
          puVar9 = puVar6 + uVar13;
          uVar12 = uVar13 | 1;
          puVar14 = (undefined8 *)(puVar6 + 0x10);
          uVar10 = uVar13;
          do {
            puVar14[-7] = 0xffff0000ffff;
            puVar14[-8] = 0xffff0000ffff;
            puVar14[-5] = 0xffff0000ffff;
            puVar14[-6] = 0xffff0000ffff;
            puVar14[-3] = 0xffff0000ffff;
            puVar14[-4] = 0xffff0000ffff;
            puVar14[-1] = 0xffff0000ffff;
            puVar14[-2] = 0xffff0000ffff;
            puVar14[1] = 0xffff0000ffff;
            *puVar14 = 0xffff0000ffff;
            puVar14[3] = 0xffff0000ffff;
            puVar14[2] = 0xffff0000ffff;
            puVar14[5] = 0xffff0000ffff;
            puVar14[4] = 0xffff0000ffff;
            puVar14[7] = 0xffff0000ffff;
            puVar14[6] = 0xffff0000ffff;
            puVar14 = puVar14 + 0x10;
            uVar10 = uVar10 - 0x20;
          } while (uVar10 != 0);
          if (uVar18 == uVar13) goto LAB_1046d17b0;
        }
        lVar7 = param_2 - uVar12;
        puVar8 = puVar9;
        do {
          puVar9 = puVar8 + 1;
          *puVar8 = 0xffff;
          lVar7 = lVar7 + -1;
          puVar8 = puVar9;
        } while (lVar7 != 0);
      }
LAB_1046d17b0:
      *puVar9 = 0xffff;
      psVar17 = *(short **)(param_1 + 0x48);
      uVar18 = *(ulong *)(param_1 + 0x50);
      goto LAB_1046d17bc;
    }
    func_0x0001087c9084(2,param_2 << 2);
    goto LAB_1046d1974;
  }
  puVar6 = (undefined4 *)0x2;
LAB_1046d17bc:
  *(undefined4 **)(param_1 + 0x48) = puVar6;
  *(ulong *)(param_1 + 0x50) = param_2;
  uVar3 = (int)param_2 - 1;
  *(short *)(param_1 + 0x58) = (short)uVar3;
  if (uVar18 < uVar19) {
    __ZN4core5slice5index16slice_index_fail17h29aa2edd8429fa12E(uVar19,uVar18,uVar18,&UNK_10b32d088)
    ;
    goto LAB_1046d1978;
  }
  psVar1 = psVar17 + uVar19 * 2;
  if (uVar19 != uVar18) {
    psVar4 = psVar1 + 2;
    psVar16 = psVar1;
    do {
      psVar15 = psVar4;
      if (*psVar16 != -1) {
        uVar2 = psVar16[1];
        uVar10 = (ulong)(uVar2 & uVar3);
        while( true ) {
          do {
            uVar12 = uVar10;
            uVar10 = 0;
          } while (param_2 <= uVar12);
          if (*(short *)(puVar6 + uVar12) == -1) break;
          uVar10 = uVar12 + 1;
        }
        *(short *)(puVar6 + uVar12) = *psVar16;
        *(ushort *)((long)(puVar6 + uVar12) + 2) = uVar2;
      }
      lVar7 = 0;
      if (psVar15 != psVar17 + uVar18 * 2) {
        lVar7 = 4;
      }
      psVar4 = (short *)((long)psVar15 + lVar7);
      psVar16 = psVar15;
    } while (psVar15 != psVar17 + uVar18 * 2);
  }
  if (uVar19 != 0) {
    psVar4 = psVar17 + 2;
    psVar16 = psVar17;
    do {
      psVar15 = psVar4;
      if (*psVar16 != -1) {
        uVar2 = psVar16[1];
        uVar19 = (ulong)(uVar2 & uVar3);
        while( true ) {
          do {
            uVar10 = uVar19;
            uVar19 = 0;
          } while (param_2 <= uVar10);
          if (*(short *)(puVar6 + uVar10) == -1) break;
          uVar19 = uVar10 + 1;
        }
        *(short *)(puVar6 + uVar10) = *psVar16;
        *(ushort *)((long)(puVar6 + uVar10) + 2) = uVar2;
      }
      lVar7 = 0;
      if (psVar15 != psVar1) {
        lVar7 = 4;
      }
      psVar4 = (short *)((long)psVar15 + lVar7);
      psVar16 = psVar15;
    } while (psVar15 != psVar1);
  }
  uVar19 = *(ulong *)(param_1 + 0x28);
  uVar10 = param_2 - (uVar19 + (param_2 >> 2));
  lVar7 = *(long *)(param_1 + 0x18);
  if (lVar7 - uVar19 < uVar10) {
    if (CARRY8(uVar10,uVar19)) {
      uStack_50 = 0;
      lStack_48 = lVar7;
    }
    else {
      func_0x00010899c92c(aiStack_58,lVar7,*(undefined8 *)(param_1 + 0x20),uVar10 + uVar19,8,0x68);
      if (aiStack_58[0] != 1) {
        *(ulong *)(param_1 + 0x18) = uVar10 + uVar19;
        *(undefined8 *)(param_1 + 0x20) = uStack_50;
        goto joined_r0x0001046d194c;
      }
    }
LAB_1046d1974:
    func_0x0001087c9084(uStack_50,lStack_48);
LAB_1046d1978:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1046d197c);
    (*pcVar5)();
  }
joined_r0x0001046d194c:
  if (uVar18 != 0) {
    _free(psVar17);
  }
LAB_1046d187c:
  return 0x8000 < param_2;
}

