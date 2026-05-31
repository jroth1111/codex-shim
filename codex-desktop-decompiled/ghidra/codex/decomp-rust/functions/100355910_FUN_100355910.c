
void FUN_100355910(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  ulong uVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long *in_stack_00000018;
  ulong in_stack_00000020;
  ulong in_stack_00000028;
  long *in_stack_00000030;
  ulong in_stack_00000038;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000018,s__108ac1772,&stack0x00000030);
  uVar2 = in_stack_00000028;
  uVar14 = in_stack_00000020;
  if (0x7fffffffffffffe8 < in_stack_00000028) {
    FUN_107c05cb4(&UNK_108c518a8,0x2b,&stack0x00000030,&UNK_10b1d2480,&UNK_10b1d2530);
LAB_1003559ec:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1003559f0);
    (*pcVar7)();
  }
  uVar10 = in_stack_00000028 + 0x17;
  plVar5 = (long *)_malloc(uVar10 & 0x7ffffffffffffff8);
  if (plVar5 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,uVar10 & 0x7ffffffffffffff8);
    goto LAB_1003559ec;
  }
  plVar5[1] = 1;
  *plVar5 = 1;
  _memcpy(plVar5 + 2,uVar14,uVar2);
  if (in_stack_00000018 != (long *)0x0) {
    _free(uVar14);
  }
  in_stack_00000018 = plVar5;
  if ((uVar2 < 0x23) ||
     ((((*(long *)((long)plVar5 + (uVar2 - 0x13)) != 0x6972705f5f2a7b2f ||
        *(long *)((long)plVar5 + (uVar2 - 0xb)) != 0x78615f5f65746176) ||
       *(long *)((long)plVar5 + (uVar2 - 3)) != 0x5f7473656e5f6d75) ||
      *(long *)((long)plVar5 + uVar2 + 5) != 0x7261705f6c696174) ||
      *(long *)((long)plVar5 + uVar2 + 8) != 0x7d6d617261705f6c)) {
    in_stack_00000020 = uVar2;
    if (unaff_x20 == (undefined8 *)0x0) {
      unaff_x20 = (undefined8 *)_malloc(0x20);
      if (unaff_x20 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
        goto LAB_1003559ec;
      }
      unaff_x20[1] = 0;
      *unaff_x20 = &UNK_108c56c70;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      *unaff_x19 = unaff_x20;
    }
    in_stack_00000038 = uVar2;
    in_stack_00000030 = plVar5;
    puVar4 = (undefined8 *)_malloc(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
      goto LAB_1003559ec;
    }
    *puVar4 = plVar5;
    puVar4[1] = uVar2;
    auVar17 = FUN_1003631fc(unaff_x20,&UNK_108c84180,puVar4,&UNK_10b2034f0);
    if (auVar17._0_8_ != 0) {
      auVar17 = (**(code **)(auVar17._8_8_ + 0x38))();
      puVar6 = auVar17._8_8_;
      puVar12 = auVar17._0_8_;
      (*(code *)puVar6[3])(&stack0x00000030);
      puVar4 = puVar12;
      if (in_stack_00000030 != (long *)0x80efeaa617a73b69 || in_stack_00000038 != 0xef7485dd83a5b07b
         ) {
        puVar4 = (undefined8 *)0x0;
        if ((code *)*puVar6 != (code *)0x0) {
          (*(code *)*puVar6)(puVar12);
        }
        if (puVar6[1] != 0) {
          _free(puVar12);
        }
      }
      if (puVar4 != (undefined8 *)0x0) {
        plVar5 = (long *)*puVar12;
        uVar14 = puVar12[1];
        _free(puVar4);
        lVar3 = *plVar5;
        *plVar5 = lVar3 + -1;
        LORelease();
        in_stack_00000030 = plVar5;
        in_stack_00000038 = uVar14;
        if (lVar3 == 1) {
          DataMemoryBarrier(2,1);
          __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1dba8bcdd57a8876E(&stack0x00000030);
        }
      }
    }
    plVar5 = (long *)*unaff_x19;
    if (plVar5 == (long *)0x0) {
      return;
    }
    lVar3 = 0;
    lVar1 = *plVar5;
    uVar2 = plVar5[1];
    uVar10 = uVar2 & 0x1b9d9c24a3fe825a;
    uVar16 = *(undefined8 *)(lVar1 + uVar10);
    uVar14 = CONCAT17(-((char)((ulong)uVar16 >> 0x38) == '\r'),
                      CONCAT16(-((char)((ulong)uVar16 >> 0x30) == '\r'),
                               CONCAT15(-((char)((ulong)uVar16 >> 0x28) == '\r'),
                                        CONCAT14(-((char)((ulong)uVar16 >> 0x20) == '\r'),
                                                 CONCAT13(-((char)((ulong)uVar16 >> 0x18) == '\r'),
                                                          CONCAT12(-((char)((ulong)uVar16 >> 0x10)
                                                                    == '\r'),
                                                                   CONCAT11(-((char)((ulong)uVar16
                                                                                    >> 8) == '\r'),
                                                                            -((char)uVar16 == '\r'))
                                                                  )))))) & 0x8080808080808080;
    while( true ) {
      while (uVar14 == 0) {
        bVar15 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == -1),
                                     CONCAT16(-((char)((ulong)uVar16 >> 0x30) == -1),
                                              CONCAT15(-((char)((ulong)uVar16 >> 0x28) == -1),
                                                       CONCAT14(-((char)((ulong)uVar16 >> 0x20) ==
                                                                 -1),CONCAT13(-((char)((ulong)uVar16
                                                                                      >> 0x18) == -1
                                                                               ),CONCAT12(-((char)((
                                                  ulong)uVar16 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) == -1),
                                                           -((char)uVar16 == -1)))))))),1);
        if ((bVar15 & 1) != 0) {
          return;
        }
        lVar3 = lVar3 + 8;
        uVar10 = uVar10 + lVar3 & uVar2;
        uVar16 = *(undefined8 *)(lVar1 + uVar10);
        uVar14 = CONCAT17(-((char)((ulong)uVar16 >> 0x38) == '\r'),
                          CONCAT16(-((char)((ulong)uVar16 >> 0x30) == '\r'),
                                   CONCAT15(-((char)((ulong)uVar16 >> 0x28) == '\r'),
                                            CONCAT14(-((char)((ulong)uVar16 >> 0x20) == '\r'),
                                                     CONCAT13(-((char)((ulong)uVar16 >> 0x18) ==
                                                               '\r'),CONCAT12(-((char)((ulong)uVar16
                                                                                      >> 0x10) ==
                                                                               '\r'),CONCAT11(-((
                                                  char)((ulong)uVar16 >> 8) == '\r'),
                                                  -((char)uVar16 == '\r')))))))) &
                 0x8080808080808080;
      }
      uVar9 = (uVar14 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar14 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar10 + ((ulong)LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) >> 3) & uVar2;
      plVar11 = (long *)(lVar1 + -0x20 + uVar9 * -0x20);
      if (plVar11[1] == 0x1b9d9c24a3fe825a && *plVar11 == -0x75cf03a6c3289701) break;
      uVar14 = uVar14 - 1 & uVar14;
    }
    lVar3 = lVar1 + uVar9 * -0x20;
    puVar4 = (undefined8 *)(lVar1 + (uVar9 - 8 & uVar2));
    uVar16 = *puVar4;
    uVar13 = *(undefined8 *)(lVar1 + uVar9);
    uVar14 = CONCAT17(-((char)((ulong)uVar13 >> 0x38) == -1),
                      CONCAT16(-((char)((ulong)uVar13 >> 0x30) == -1),
                               CONCAT15(-((char)((ulong)uVar13 >> 0x28) == -1),
                                        CONCAT14(-((char)((ulong)uVar13 >> 0x20) == -1),
                                                 CONCAT13(-((char)((ulong)uVar13 >> 0x18) == -1),
                                                          CONCAT12(-((char)((ulong)uVar13 >> 0x10)
                                                                    == -1),CONCAT11(-((char)((ulong)
                                                  uVar13 >> 8) == -1),-((char)uVar13 == -1))))))));
    uVar14 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    if (((ulong)LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) >> 3) +
        ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar16 >> 0x38) == -1),
                                 CONCAT16(-((char)((ulong)uVar16 >> 0x30) == -1),
                                          CONCAT15(-((char)((ulong)uVar16 >> 0x28) == -1),
                                                   CONCAT14(-((char)((ulong)uVar16 >> 0x20) == -1),
                                                            CONCAT13(-((char)((ulong)uVar16 >> 0x18)
                                                                      == -1),CONCAT12(-((char)((
                                                  ulong)uVar16 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar16 >> 8) == -1),
                                                           -((char)uVar16 == -1))))))))) >> 3) < 8)
    {
      plVar5[2] = plVar5[2] + 1;
      uVar8 = 0xff;
    }
    else {
      uVar8 = 0x80;
    }
    *(undefined1 *)(lVar1 + uVar9) = uVar8;
    *(undefined1 *)(puVar4 + 1) = uVar8;
    plVar5[3] = plVar5[3] + -1;
    if (*(long *)(lVar3 + -0x10) == 0) {
      return;
    }
    auVar17 = (**(code **)(*(long *)(lVar3 + -8) + 0x38))();
    puVar12 = auVar17._0_8_;
    (*(code *)auVar17._8_8_[3])(&stack0x00000030);
    puVar4 = puVar12;
    if (in_stack_00000030 == (long *)0x8a30fc593cd768ff && in_stack_00000038 == 0x1b9d9c24a3fe825a)
    goto LAB_10035588c;
    pcVar7 = (code *)*auVar17._8_8_;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(puVar12);
    }
  }
  else {
    in_stack_00000020 = uVar2;
    if (unaff_x20 == (undefined8 *)0x0) {
      unaff_x20 = (undefined8 *)_malloc(0x20);
      if (unaff_x20 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x20);
        goto LAB_1003559ec;
      }
      unaff_x20[1] = 0;
      *unaff_x20 = &UNK_108c56c70;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      *unaff_x19 = unaff_x20;
    }
    in_stack_00000038 = uVar2;
    in_stack_00000030 = plVar5;
    puVar4 = (undefined8 *)_malloc(0x10);
    if (puVar4 == (undefined8 *)0x0) {
      __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x10);
      goto LAB_1003559ec;
    }
    *puVar4 = plVar5;
    puVar4[1] = uVar2;
    auVar17 = FUN_1003631fc(unaff_x20,&UNK_108c84190,puVar4,&UNK_10b203460);
    if (auVar17._0_8_ == 0) {
      return;
    }
    auVar17 = (**(code **)(auVar17._8_8_ + 0x38))();
    puVar12 = auVar17._0_8_;
    (*(code *)auVar17._8_8_[3])(&stack0x00000030);
    puVar4 = puVar12;
    if (in_stack_00000030 == (long *)0x8a30fc593cd768ff && in_stack_00000038 == 0x1b9d9c24a3fe825a)
    goto LAB_10035588c;
    pcVar7 = (code *)*auVar17._8_8_;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(puVar12);
    }
  }
  puVar12 = auVar17._0_8_;
  puVar4 = (undefined8 *)0x0;
  if (*(long *)(auVar17._8_8_ + 8) != 0) {
    _free(puVar12);
  }
LAB_10035588c:
  if (puVar4 != (undefined8 *)0x0) {
    plVar5 = (long *)*puVar12;
    uVar16 = puVar12[1];
    _free(puVar4);
    lVar3 = *plVar5;
    *plVar5 = lVar3 + -1;
    LORelease();
    if (lVar3 == 1) {
      DataMemoryBarrier(2,1);
      in_stack_00000030 = plVar5;
      in_stack_00000038 = uVar16;
      __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17h1dba8bcdd57a8876E(&stack0x00000030);
    }
  }
  return;
}

