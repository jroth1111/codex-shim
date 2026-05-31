
void FUN_10199665c(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong in_xzr;
  undefined1 auVar15 [16];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 auStack_2c8 [520];
  
  uVar11 = param_2 & 0xffffffffffffffe0;
  lVar4 = *param_1;
  uVar5 = uVar11 - *(long *)(lVar4 + 0x4200);
  if (uVar5 == 0) {
    return;
  }
  plVar13 = (long *)(lVar4 + 0x4200);
  bVar3 = (param_2 & 0x1f) < uVar5 >> 5;
  do {
    lVar14 = *(long *)(lVar4 + 0x4208);
    if (*(long *)(lVar4 + 0x4208) == 0) {
      lVar14 = *plVar13;
      lVar7 = _malloc(0x4220);
      if (lVar7 == 0) {
        auVar15 = __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x4220);
        lVar4 = auVar15._8_8_;
        puVar8 = auVar15._0_8_;
        bVar6 = *(byte *)(lVar4 + 0x4a8);
        if (bVar6 < 2) {
          if (bVar6 == 0) {
            plVar13 = *(long **)(lVar4 + 0x210);
            *(undefined1 *)(lVar4 + 0x4a9) = 1;
            _memcpy(lVar4 + 0x218,lVar4,0x210);
            *(long **)(lVar4 + 0x428) = plVar13;
            *(undefined1 *)(lVar4 + 0x4a0) = 0;
LAB_101996874:
            *(long **)(lVar4 + 0x430) = plVar13;
            *(long **)(lVar4 + 0x438) = plVar13;
            uVar5 = 1;
            *(undefined8 *)(lVar4 + 0x440) = 1;
            *(undefined1 *)(lVar4 + 0x458) = 0;
LAB_101996890:
            *(long **)(lVar4 + 0x448) = plVar13;
            *(ulong *)(lVar4 + 0x450) = uVar5;
            lVar14 = *plVar13;
            if (*(ulong *)(lVar14 + 0x1e8) < uVar5) {
LAB_1019968a8:
              *(undefined1 *)(lVar4 + 0x458) = 1;
LAB_101996970:
              *(undefined1 *)(lVar4 + 0x4a0) = 1;
              *(undefined1 *)(lVar4 + 0x4a9) = 0;
              uVar12 = *(undefined8 *)(lVar4 + 0x218);
              _memcpy(auStack_2c8,lVar4 + 0x220,0x208);
            }
            else {
LAB_1019968f0:
              uStack_4d0 = 0;
              uStack_4c8 = 0;
              *(long *)(lVar4 + 0x460) = lVar14 + 0x1c0;
              *(undefined8 *)(lVar4 + 0x468) = 0;
              *(undefined8 *)(lVar4 + 0x480) = 0;
              *(undefined8 *)(lVar4 + 0x478) = 0;
              *(undefined8 *)(lVar4 + 0x470) = uStack_4d8;
              *(ulong *)(lVar4 + 0x488) = uVar5;
              *(ulong *)(lVar4 + 0x490) = uVar5;
              *(undefined1 *)(lVar4 + 0x498) = 0;
LAB_101996918:
              bVar6 = __ZN86__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__future__future__Future_GT_4poll17hce2eecb908eeef19E
                                (lVar4 + 0x460,param_3);
              if (bVar6 == 2) {
                *(undefined1 *)(lVar4 + 0x458) = 4;
                uVar9 = 3;
                *(undefined1 *)(lVar4 + 0x4a0) = 3;
                *puVar8 = 4;
                goto LAB_1019969ac;
              }
              __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                        (lVar4 + 0x460);
              if (*(long *)(lVar4 + 0x468) != 0) {
                (**(code **)(*(long *)(lVar4 + 0x468) + 0x18))(*(undefined8 *)(lVar4 + 0x470));
              }
              *(undefined1 *)(lVar4 + 0x458) = 1;
              if ((bVar6 & 1) != 0) goto LAB_101996970;
              plVar13 = *(long **)(lVar4 + 0x430);
              *(undefined1 *)(lVar4 + 0x4a0) = 1;
              *(undefined1 *)(lVar4 + 0x4a9) = 0;
              _memcpy(&uStack_4d8,lVar4 + 0x218,0x210);
              lVar7 = *plVar13;
              LOAcquire();
              uVar5 = *(ulong *)(lVar7 + 0x88);
              *(ulong *)(lVar7 + 0x88) = uVar5 + 1;
              lVar14 = FUN_10199665c(lVar7 + 0x80,uVar5);
              _memcpy(lVar14 + (uVar5 & 0x1f) * 0x210,&uStack_4d8,0x210);
              *(ulong *)(lVar14 + 0x4210) = *(ulong *)(lVar14 + 0x4210) | 1L << (uVar5 & 0x1f);
              LORelease();
              puVar1 = (ulong *)(lVar7 + 0x110);
              LOAcquire();
              uVar5 = *puVar1;
              *puVar1 = uVar5 | 2;
              LORelease();
              if (uVar5 == 0) {
                lVar14 = *(long *)(lVar7 + 0x100);
                *(undefined8 *)(lVar7 + 0x100) = 0;
                *puVar1 = in_xzr;
                LORelease();
                if (lVar14 != 0) {
                  (**(code **)(lVar14 + 8))(*(undefined8 *)(lVar7 + 0x108));
                }
              }
              uVar12 = 3;
            }
            *(undefined1 *)(lVar4 + 0x4a9) = 0;
            *puVar8 = uVar12;
            _memcpy(puVar8 + 1,auStack_2c8,0x208);
            uVar9 = 1;
LAB_1019969ac:
            *(undefined1 *)(lVar4 + 0x4a8) = uVar9;
            return;
          }
          func_0x000108a07af4(&UNK_10b269370);
LAB_101996a80:
          func_0x000108a07b10(&UNK_10b269370);
        }
        else {
          if (bVar6 != 3) goto LAB_101996a80;
          bVar6 = *(byte *)(lVar4 + 0x4a0);
          if (1 < bVar6) {
            if (bVar6 != 3) {
              func_0x000108a07b10(&UNK_10b269388);
              goto LAB_101996ad0;
            }
            bVar6 = *(byte *)(lVar4 + 0x458);
            if (bVar6 < 3) {
              if (bVar6 != 0) {
                if (bVar6 == 1) {
                  func_0x000108a07af4(&UNK_10b269358);
                }
                else {
                  func_0x000108a07b10(&UNK_10b269358);
                }
                goto LAB_101996ad0;
              }
              plVar13 = *(long **)(lVar4 + 0x438);
              uVar5 = *(ulong *)(lVar4 + 0x440);
              goto LAB_101996890;
            }
            if (bVar6 != 3) goto LAB_101996918;
            uVar5 = *(ulong *)(lVar4 + 0x450);
            lVar14 = **(long **)(lVar4 + 0x448);
            if (uVar5 <= *(ulong *)(lVar14 + 0x1e8)) goto LAB_1019968f0;
            goto LAB_1019968a8;
          }
          if (bVar6 == 0) {
            plVar13 = *(long **)(lVar4 + 0x428);
            goto LAB_101996874;
          }
        }
        func_0x000108a07af4(&UNK_10b269388);
LAB_101996ad0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101996ad4);
        (*pcVar2)();
      }
      *(long *)(lVar7 + 0x4200) = lVar14 + 0x20;
      *(undefined8 *)(lVar7 + 0x4208) = 0;
      *(undefined8 *)(lVar7 + 0x4218) = 0;
      *(undefined8 *)(lVar7 + 0x4210) = 0;
      lVar14 = *(long *)(lVar4 + 0x4208);
      if (lVar14 == 0) {
        *(long *)(lVar4 + 0x4208) = lVar7;
        lVar14 = lVar7;
      }
      else {
        *(long *)(lVar7 + 0x4200) = *(long *)(lVar14 + 0x4200) + 0x20;
        lVar10 = *(long *)(lVar14 + 0x4208);
        if (lVar10 == 0) {
          *(long *)(lVar14 + 0x4208) = lVar7;
        }
        else {
          do {
            InstructionSynchronizationBarrier();
            *(long *)(lVar7 + 0x4200) = *(long *)(lVar10 + 0x4200) + 0x20;
            plVar13 = (long *)(lVar10 + 0x4208);
            lVar10 = *plVar13;
          } while (lVar10 != 0);
          *plVar13 = lVar7;
        }
      }
    }
    if (((bool)(bVar3 & (int)*(undefined8 *)(lVar4 + 0x4210) == -1)) && (*param_1 == lVar4)) {
      *param_1 = lVar14;
      uVar5 = param_1[1];
      param_1[1] = uVar5 | in_xzr;
      LORelease();
      *(ulong *)(lVar4 + 0x4218) = uVar5;
      *(ulong *)(lVar4 + 0x4210) = *(ulong *)(lVar4 + 0x4210) | 0x100000000;
      LORelease();
      bVar3 = true;
      InstructionSynchronizationBarrier();
      plVar13 = (long *)(lVar14 + 0x4200);
      lVar4 = lVar14;
      if (*(ulong *)(lVar14 + 0x4200) == uVar11) {
        return;
      }
    }
    else {
      bVar3 = false;
      InstructionSynchronizationBarrier();
      plVar13 = (long *)(lVar14 + 0x4200);
      lVar4 = lVar14;
      if (*(ulong *)(lVar14 + 0x4200) == uVar11) {
        return;
      }
    }
  } while( true );
}

