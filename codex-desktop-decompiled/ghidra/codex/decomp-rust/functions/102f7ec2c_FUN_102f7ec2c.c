
void FUN_102f7ec2c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uStack_78;
  long *plStack_70;
  ulong uStack_68;
  
  uVar11 = param_2[4];
  if (uVar11 == 0) {
LAB_102f7ecec:
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return;
  }
  lVar12 = *param_2;
  uVar5 = param_2[1];
  if (uVar5 == 0) {
    plVar3 = (long *)param_2[2];
    do {
      plVar9 = plVar3 + 1;
      lVar13 = *plVar3;
      lVar12 = lVar12 + -0xe40;
      uVar5 = CONCAT17(-(-1 < lVar13),
                       CONCAT16(-(-1 < (char)((ulong)lVar13 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar13 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar13 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar13 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar13 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar13 >> 8)),-(-1 < (char)lVar13)))))))) &
              0x8080808080808080;
      plVar3 = plVar9;
    } while (uVar5 == 0);
    param_2[2] = (long)plVar9;
    *param_2 = lVar12;
  }
  uVar4 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
  uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar5 = uVar5 - 1 & uVar5;
  param_2[1] = uVar5;
  lVar13 = lVar12 + (long)-(int)((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) * 0x1c8;
  lVar7 = uVar11 - 1;
  param_2[4] = lVar7;
  lVar10 = *(long *)(lVar13 + -0x1b8);
  if (lVar10 == 0) {
    lVar13 = 1;
LAB_102f7ed00:
    uVar1 = uVar11;
    if (uVar11 < 5) {
      uVar1 = 4;
    }
    uVar4 = uVar1 * 0x18;
    if (0x555555555555555 < uVar11) {
      uVar8 = 0;
      goto LAB_102f7ed30;
    }
    if (uVar4 == 0) {
      uStack_78 = 0;
      plStack_70 = (long *)0x8;
      lRam0000000000000008 = lVar10;
      lRam0000000000000018 = lVar10;
      lRam0000000000000010 = lVar13;
joined_r0x000102f7ed88:
      uStack_68 = 1;
      if (lVar7 != 0) {
        uStack_68 = 1;
        plVar3 = (long *)param_2[2];
        plVar9 = plStack_70;
        do {
          while (uVar11 = uStack_68, uVar5 == 0) {
            lVar13 = *plVar3;
            lVar12 = lVar12 + -0xe40;
            plVar3 = plVar3 + 1;
            uVar5 = CONCAT17(-(-1 < lVar13),
                             CONCAT16(-(-1 < (char)((ulong)lVar13 >> 0x30)),
                                      CONCAT15(-(-1 < (char)((ulong)lVar13 >> 0x28)),
                                               CONCAT14(-(-1 < (char)((ulong)lVar13 >> 0x20)),
                                                        CONCAT13(-(-1 < (char)((ulong)lVar13 >> 0x18
                                                                              )),
                                                                 CONCAT12(-(-1 < (char)((ulong)
                                                  lVar13 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar13 >> 8)),
                                                           -(-1 < (char)lVar13)))))))) &
                    0x8080808080808080;
          }
          uVar4 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
          uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
          uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
          lVar13 = lVar12 + (long)-(int)((ulong)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) >> 3) * 0x1c8
          ;
          lVar10 = *(long *)(lVar13 + -0x1b8);
          if (lVar10 == 0) {
            lVar13 = 1;
          }
          else {
            uVar8 = *(undefined8 *)(lVar13 + -0x1c0);
            lVar13 = _malloc(lVar10);
            if (lVar13 == 0) {
              func_0x0001087c9084(1,lVar10);
              goto LAB_102f7eea8;
            }
            _memcpy(lVar13,uVar8,lVar10);
            if (lVar10 == -0x8000000000000000) break;
          }
          if (uVar11 == uStack_78) {
            FUN_10893e30c(&uStack_78,uVar11,lVar7,8,0x18);
            plVar9 = plStack_70;
          }
          uVar5 = uVar5 - 1 & uVar5;
          plVar6 = plVar9 + uVar11 * 3;
          *plVar6 = lVar10;
          plVar6[1] = lVar13;
          plVar6[2] = lVar10;
          uStack_68 = uVar11 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      param_1[1] = (ulong)plStack_70;
      *param_1 = uStack_78;
      param_1[2] = uStack_68;
      return;
    }
    plVar3 = (long *)_malloc(uVar4);
    if (plVar3 != (long *)0x0) {
      *plVar3 = lVar10;
      plVar3[1] = lVar13;
      plVar3[2] = lVar10;
      uStack_78 = uVar1;
      plStack_70 = plVar3;
      goto joined_r0x000102f7ed88;
    }
  }
  else {
    uVar8 = *(undefined8 *)(lVar13 + -0x1c0);
    lVar13 = _malloc(lVar10);
    if (lVar13 != 0) {
      _memcpy(lVar13,uVar8,lVar10);
      if (lVar10 == -0x8000000000000000) goto LAB_102f7ecec;
      goto LAB_102f7ed00;
    }
    func_0x0001087c9084(1,lVar10);
    uVar4 = uVar11;
  }
  uVar8 = 8;
LAB_102f7ed30:
  func_0x0001087c9084(uVar8,uVar4);
LAB_102f7eea8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102f7eeac);
  (*pcVar2)();
}

