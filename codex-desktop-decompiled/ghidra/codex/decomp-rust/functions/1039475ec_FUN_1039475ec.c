
long * FUN_1039475ec(long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  undefined *puVar8;
  ulong unaff_x22;
  long *plVar9;
  ulong unaff_x23;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_48;
  
  lVar11 = param_2[1];
  if (lVar11 == 0) {
    lVar10 = 0;
    lVar12 = 0;
    puVar8 = &UNK_108d961a0;
    lVar3 = param_1[1];
    plVar4 = param_1;
    if (lVar3 == 0 || lVar3 * 9 == -0x11) goto LAB_10394768c;
  }
  else {
    if (lVar11 + 1U >> 0x3d == 0) {
      unaff_x22 = (lVar11 + 1U) * 8;
      unaff_x23 = lVar11 + 9;
      uVar6 = unaff_x22 + unaff_x23;
      if ((CARRY8(unaff_x22,unaff_x23)) || (0x7ffffffffffffff8 < uVar6)) goto LAB_1039476ac;
      unaff_x20 = param_2;
      if (uVar6 == 0) goto LAB_1039476c4;
      if (uVar6 < 8) {
        lStack_48 = 0;
        iVar2 = _posix_memalign(&lStack_48,8,uVar6);
        lVar3 = lStack_48;
        if (iVar2 != 0) goto LAB_10394779c;
      }
      else {
        lVar3 = _malloc(uVar6);
      }
      if (lVar3 == 0) {
LAB_10394779c:
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,uVar6);
        return (long *)&UNK_108d9b05b;
      }
    }
    else {
LAB_1039476ac:
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108d9bfdd,0x39,&UNK_10b2dc928);
LAB_1039476c4:
      lVar3 = 8;
    }
    puVar8 = (undefined *)(lVar3 + unaff_x22);
    plVar9 = (long *)*unaff_x20;
    plVar4 = (long *)_memcpy(puVar8,plVar9,unaff_x23);
    lVar10 = unaff_x20[3];
    if (lVar10 != 0) {
      plVar5 = plVar9 + 1;
      lVar3 = *plVar9;
      uVar6 = CONCAT17(-(-1 < lVar3),
                       CONCAT16(-(-1 < (char)((ulong)lVar3 >> 0x30)),
                                CONCAT15(-(-1 < (char)((ulong)lVar3 >> 0x28)),
                                         CONCAT14(-(-1 < (char)((ulong)lVar3 >> 0x20)),
                                                  CONCAT13(-(-1 < (char)((ulong)lVar3 >> 0x18)),
                                                           CONCAT12(-(-1 < (char)((ulong)lVar3 >>
                                                                                 0x10)),
                                                                    CONCAT11(-(-1 < (char)((ulong)
                                                  lVar3 >> 8)),-(-1 < (char)lVar3)))))))) &
              0x8080808080808080;
      plVar1 = plVar9;
      lVar3 = lVar10;
      do {
        while (uVar6 == 0) {
          lVar12 = *plVar5;
          plVar5 = plVar5 + 1;
          plVar1 = plVar1 + -8;
          uVar6 = CONCAT17(-(-1 < lVar12),
                           CONCAT16(-(-1 < (char)((ulong)lVar12 >> 0x30)),
                                    CONCAT15(-(-1 < (char)((ulong)lVar12 >> 0x28)),
                                             CONCAT14(-(-1 < (char)((ulong)lVar12 >> 0x20)),
                                                      CONCAT13(-(-1 < (char)((ulong)lVar12 >> 0x18))
                                                               ,CONCAT12(-(-1 < (char)((ulong)lVar12
                                                                                      >> 0x10)),
                                                                         CONCAT11(-(-1 < (char)((
                                                  ulong)lVar12 >> 8)),-(-1 < (char)lVar12)))))))) &
                  0x8080808080808080;
        }
        uVar7 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 - 1 & uVar6;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) & 0x78;
        *(undefined8 *)((long)plVar1 + (long)(puVar8 + (-(long)plVar9 - uVar7) + -8)) =
             *(undefined8 *)((long)plVar1 + (-8 - uVar7));
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar12 = unaff_x20[2];
    lVar3 = param_1[1];
    if (lVar3 == 0 || lVar3 * 9 == -0x11) goto LAB_10394768c;
  }
  plVar4 = (long *)_free(*param_1 + lVar3 * -8 + -8);
LAB_10394768c:
  *param_1 = (long)puVar8;
  param_1[1] = lVar11;
  param_1[2] = lVar12;
  param_1[3] = lVar10;
  return plVar4;
}

