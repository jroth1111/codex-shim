
void __ZN9codex_mcp10codex_apps39write_cached_codex_apps_tools_if_needed17h860d1f6e25d46543E
               (long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  long **pplVar14;
  char cVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  bool bVar20;
  undefined1 uVar21;
  uint uVar22;
  code *pcVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined8 *puStack_190;
  long lStack_188;
  long *plStack_180;
  undefined *puStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  ushort auStack_140 [4];
  long **pplStack_138;
  ushort auStack_130 [4];
  long **pplStack_128;
  ushort auStack_120 [4];
  long **pplStack_118;
  ushort auStack_110 [4];
  long **pplStack_108;
  long *plStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  long lStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined1 uStack_a8;
  ulong uStack_88;
  long **pplStack_80;
  
  if (param_2 != 10) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (*param_1 != 0x70615f7865646f63 || (short)param_1[1] != 0x7370) {
    return;
  }
  auVar35 = func_0x000106032954(8);
  func_0x000103ec8b5c(&lStack_188,param_3);
  if (puStack_178 == (undefined *)0x0) {
    uStack_c6 = false;
  }
  else {
    uStack_c6 = (char)*plStack_180 == '/';
  }
  plStack_100 = plStack_180;
  puStack_f8 = puStack_178;
  uStack_f0 = CONCAT71(uStack_f0._1_7_,6);
  uStack_c8 = 0x201;
  __ZN95__LT_std__path__Components_u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h5b30f64461d1ff12E
            (&lStack_c0,&plStack_100);
  if (2 < (byte)lStack_c0 - 7) {
LAB_103eca5a4:
    func_0x000103ea61ac(&plStack_100,param_4,param_5);
    __ZN9codex_mcp10codex_apps34filter_disallowed_codex_apps_tools17hbaab08184557f9b2E
              (&lStack_170,&plStack_100);
    uStack_a8 = 2;
    puStack_b8 = puStack_168;
    lStack_c0 = lStack_170;
    lStack_b0 = lStack_160;
    plVar17 = (long *)_malloc(0x80);
    if (plVar17 == (long *)0x0) {
      func_0x0001087c9084(1,0x80);
      goto LAB_103ecbd44;
    }
    lStack_158 = 0x80;
    plStack_100 = &lStack_158;
    puStack_f8 = &UNK_108dc14f0;
    uStack_e8 = 1;
    uStack_f0 = 2;
    uStack_e0 = 0;
    *(undefined1 *)plVar17 = 0x7b;
    uStack_148 = 1;
    auStack_140[0] = 0x100;
    pplStack_138 = &plStack_100;
    plStack_150 = plVar17;
    func_0x000103ea7d88(auStack_140,&UNK_108dc25d2,0xe);
    pplVar11 = pplStack_138;
    if ((auStack_140[0] & 1) == 0) {
      plVar17 = *pplStack_138;
      lVar18 = plVar17[2];
      if ((ulong)(*plVar17 - lVar18) < 2) {
        func_0x00010897c4d0(plVar17,lVar18,2,1,1);
        lVar18 = plVar17[2];
      }
      *(undefined2 *)(plVar17[1] + lVar18) = 0x203a;
      plVar17[2] = lVar18 + 2;
      plVar17 = *pplVar11;
      lVar18 = plVar17[2];
      if (*plVar17 == lVar18) {
        func_0x00010897c4d0(plVar17,lVar18,1,1,1);
        lVar18 = plVar17[2];
      }
      *(undefined1 *)(plVar17[1] + lVar18) = 0x32;
      plVar17[2] = lVar18 + 1;
      *(undefined1 *)(pplVar11 + 4) = 1;
      lVar18 = lStack_b0;
      puVar28 = puStack_b8;
      puStack_190 = puStack_b8;
      func_0x000103ea7d88(auStack_140,&UNK_108dc1a54,5);
      pplVar11 = pplStack_138;
      if ((auStack_140[0] & 1) == 0) {
        plVar17 = *pplStack_138;
        lVar19 = plVar17[2];
        if ((ulong)(*plVar17 - lVar19) < 2) {
          func_0x00010897c4d0(plVar17,lVar19,2,1,1);
          lVar19 = plVar17[2];
        }
        *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
        plVar17[2] = lVar19 + 2;
        plVar17 = *pplVar11;
        plVar29 = pplVar11[3];
        pplVar11[3] = (long *)((long)plVar29 + 1);
        *(undefined1 *)(pplVar11 + 4) = 0;
        lVar19 = plVar17[2];
        if (*plVar17 == lVar19) {
          func_0x00010897c4d0(plVar17,lVar19,1,1,1);
          lVar19 = plVar17[2];
          *(undefined1 *)(plVar17[1] + lVar19) = 0x5b;
          lVar19 = lVar19 + 1;
          plVar17[2] = lVar19;
          if (lVar18 != 0) goto LAB_103eca744;
LAB_103ecbad8:
          pplVar11[3] = plVar29;
          if (*plVar17 == lVar19) {
            func_0x00010897c4d0(plVar17,lVar19,1,1,1);
            lVar19 = plVar17[2];
          }
          uVar21 = 0;
          *(undefined1 *)(plVar17[1] + lVar19) = 0x5d;
          plVar17[2] = lVar19 + 1;
        }
        else {
          *(undefined1 *)(plVar17[1] + lVar19) = 0x5b;
          lVar19 = lVar19 + 1;
          plVar17[2] = lVar19;
          if (lVar18 == 0) goto LAB_103ecbad8;
LAB_103eca744:
          bVar20 = true;
          do {
            plVar17 = *pplVar11;
            if (bVar20) {
              lVar19 = plVar17[2];
              if (*plVar17 == lVar19) {
                func_0x00010897c4d0(plVar17,lVar19,1,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined1 *)(plVar17[1] + lVar19) = 10;
              lVar19 = lVar19 + 1;
              plVar17[2] = lVar19;
              plVar29 = pplVar11[3];
              if (plVar29 == (long *)0x0) goto LAB_103eca830;
LAB_103eca790:
              plVar3 = pplVar11[1];
              plVar4 = pplVar11[2];
              do {
                if ((long *)(*plVar17 - lVar19) < plVar4) {
                  func_0x00010897c4d0(plVar17,lVar19,plVar4,1,1);
                  lVar19 = plVar17[2];
                }
                _memcpy(lVar19 + plVar17[1],plVar3,plVar4);
                lVar19 = lVar19 + (long)plVar4;
                plVar17[2] = lVar19;
                plVar29 = (long *)((long)plVar29 + -1);
              } while (plVar29 != (long *)0x0);
              plVar17 = (long *)((long)pplVar11[3] + 1);
            }
            else {
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 2) {
                func_0x00010897c4d0(plVar17,lVar19,2,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined2 *)(plVar17[1] + lVar19) = 0xa2c;
              lVar19 = lVar19 + 2;
              plVar17[2] = lVar19;
              plVar29 = pplVar11[3];
              if (plVar29 != (long *)0x0) goto LAB_103eca790;
LAB_103eca830:
              plVar17 = (long *)0x1;
            }
            plVar29 = *pplVar11;
            pplVar11[3] = plVar17;
            *(undefined1 *)(pplVar11 + 4) = 0;
            lVar19 = plVar29[2];
            if (*plVar29 == lVar19) {
              func_0x00010897c4d0(plVar29,lVar19,1,1,1);
              lVar19 = plVar29[2];
            }
            *(undefined1 *)(plVar29[1] + lVar19) = 0x7b;
            plVar29[2] = lVar19 + 1;
            auStack_130[0] = 0x100;
            pplStack_128 = pplVar11;
            uVar27 = puStack_190[1];
            uVar5 = puStack_190[2];
            func_0x000103ea7d88(auStack_130,&UNK_108dc1cea,0xb);
            pplVar12 = pplStack_128;
            if ((auStack_130[0] & 1) != 0) goto LAB_103ecba3c;
            plVar17 = *pplStack_128;
            lVar19 = plVar17[2];
            if ((ulong)(*plVar17 - lVar19) < 2) {
              func_0x00010897c4d0(plVar17,lVar19,2,1,1);
              lVar19 = plVar17[2];
            }
            *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
            plVar17[2] = lVar19 + 2;
            func_0x000103d1d504(*pplVar12,uVar27,uVar5);
            *(undefined1 *)(pplVar12 + 4) = 1;
            bVar6 = *(byte *)(puStack_190 + 0x34);
            func_0x000103ea7d88(auStack_130,&UNK_108dc1cf5,0x1c);
            pplVar12 = pplStack_128;
            if ((auStack_130[0] & 1) != 0) goto LAB_103ecba3c;
            plVar17 = *pplStack_128;
            lVar19 = plVar17[2];
            if ((ulong)(*plVar17 - lVar19) < 2) {
              func_0x00010897c4d0(plVar17,lVar19,2,1,1);
              lVar19 = plVar17[2];
            }
            *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
            plVar17[2] = lVar19 + 2;
            plVar17 = *pplVar12;
            if ((bVar6 & 1) == 0) {
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 5) {
                func_0x00010897c4d0(plVar17,lVar19,5,1,1);
                lVar19 = plVar17[2];
              }
              lVar24 = plVar17[1];
              *(undefined4 *)(lVar24 + lVar19) = 0x736c6166;
              *(undefined1 *)((undefined4 *)(lVar24 + lVar19) + 1) = 0x65;
              lVar19 = lVar19 + 5;
            }
            else {
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 4) {
                func_0x00010897c4d0(plVar17,lVar19,4,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined4 *)(plVar17[1] + lVar19) = 0x65757274;
              lVar19 = lVar19 + 4;
            }
            plVar17[2] = lVar19;
            *(undefined1 *)(pplVar12 + 4) = 1;
            plVar17 = (long *)func_0x000103ebf6ec(auStack_130,&UNK_108dc1d11,0xd,puStack_190 + 0xc);
            if (plVar17 != (long *)0x0) {
LAB_103ecba28:
              if (lStack_158 != 0) {
                _free(plStack_150);
              }
              goto LAB_103ecbb3c;
            }
            if ((auStack_130[0] & 1) != 0) {
LAB_103ecb9cc:
              uStack_88 = 10;
              plVar17 = (long *)func_0x000108a4a0f8(&uStack_88,0,0);
              goto LAB_103ecba28;
            }
            uVar27 = puStack_190[4];
            uVar5 = puStack_190[5];
            func_0x000103ea7d88(auStack_130,&UNK_108dc1d1e,9);
            pplVar12 = pplStack_128;
            if ((auStack_130[0] & 1) != 0) goto LAB_103ecba3c;
            plVar17 = *pplStack_128;
            lVar19 = plVar17[2];
            if ((ulong)(*plVar17 - lVar19) < 2) {
              func_0x00010897c4d0(plVar17,lVar19,2,1,1);
              lVar19 = plVar17[2];
            }
            *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
            plVar17[2] = lVar19 + 2;
            func_0x000103d1d504(*pplVar12,uVar27,uVar5);
            *(undefined1 *)(pplVar12 + 4) = 1;
            uVar27 = puStack_190[7];
            uVar5 = puStack_190[8];
            func_0x000103ea7d88(auStack_130,&UNK_108dc1d27,0xe);
            pplVar12 = pplStack_128;
            if ((auStack_130[0] & 1) != 0) goto LAB_103ecba3c;
            plVar17 = *pplStack_128;
            lVar19 = plVar17[2];
            if ((ulong)(*plVar17 - lVar19) < 2) {
              func_0x00010897c4d0(plVar17,lVar19,2,1,1);
              lVar19 = plVar17[2];
            }
            *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
            plVar17[2] = lVar19 + 2;
            func_0x000103d1d504(*pplVar12,uVar27,uVar5);
            *(undefined1 *)(pplVar12 + 4) = 1;
            plVar17 = (long *)func_0x000103ebf6ec(auStack_130,&UNK_108dc1d35,0x15,puStack_190 + 0xf)
            ;
            if (plVar17 != (long *)0x0) goto LAB_103ecba28;
            if ((auStack_130[0] & 1) != 0) goto LAB_103ecb9cc;
            func_0x000103ea7d88(auStack_130,&UNK_108cde3ec,4);
            pplVar12 = pplStack_128;
            if ((auStack_130[0] & 1) != 0) goto LAB_103ecba3c;
            plVar17 = *pplStack_128;
            lVar19 = plVar17[2];
            if ((ulong)(*plVar17 - lVar19) < 2) {
              func_0x00010897c4d0(plVar17,lVar19,2,1,1);
              lVar19 = plVar17[2];
            }
            *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
            plVar17[2] = lVar19 + 2;
            lVar32 = puStack_190[0x15];
            lVar33 = puStack_190[0x24];
            lVar31 = puStack_190[0x2c];
            lVar24 = puStack_190[0x27];
            uVar22 = (uint)*(byte *)(puStack_190 + 0x2d);
            lVar26 = puStack_190[0x18];
            lVar25 = puStack_190[0x1b];
            plVar17 = *pplVar12;
            pplVar12[3] = (long *)((long)pplVar12[3] + 1);
            *(undefined1 *)(pplVar12 + 4) = 0;
            lVar19 = plVar17[2];
            if (*plVar17 == lVar19) {
              func_0x00010897c4d0(plVar17,lVar19,1,1,1);
              lVar19 = plVar17[2];
            }
            *(undefined1 *)(plVar17[1] + lVar19) = 0x7b;
            plVar17[2] = lVar19 + 1;
            auStack_120[0] = 0x100;
            pplStack_118 = pplVar12;
            uVar27 = puStack_190[0x13];
            uVar5 = puStack_190[0x14];
            func_0x000103ea7d88(auStack_120,&UNK_108c61018,4);
            pplVar13 = pplStack_118;
            if ((auStack_120[0] & 1) != 0) goto LAB_103ecba3c;
            plVar17 = *pplStack_118;
            lVar19 = plVar17[2];
            if ((ulong)(*plVar17 - lVar19) < 2) {
              func_0x00010897c4d0(plVar17,lVar19,2,1,1);
              lVar19 = plVar17[2];
            }
            *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
            plVar17[2] = lVar19 + 2;
            func_0x000103d1d504(*pplVar13,uVar27,uVar5);
            *(undefined1 *)(pplVar13 + 4) = 1;
            if (lVar32 != -0x8000000000000000) {
              plVar17 = (long *)func_0x000103ebf6ec(auStack_120,&UNK_108dc114b,5,puStack_190 + 0x15)
              ;
              if (plVar17 == (long *)0x0) {
                if (lVar33 == -0x7fffffffffffffff) {
                  if ((auStack_120[0] & 1) == 0) goto LAB_103ecacc8;
                }
                else if ((auStack_120[0] & 1) == 0) goto LAB_103ecac64;
                uStack_88 = 10;
                plVar17 = (long *)func_0x000108a4a0f8(&uStack_88,0,0);
              }
              goto LAB_103ecba28;
            }
            if (lVar33 != -0x7fffffffffffffff) {
LAB_103ecac64:
              func_0x000103ea7d88(auStack_120,&UNK_108dc1150,0xb);
              pplVar13 = pplStack_118;
              if ((auStack_120[0] & 1) != 0) goto LAB_103ecba3c;
              plVar17 = *pplStack_118;
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 2) {
                func_0x00010897c4d0(plVar17,lVar19,2,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
              plVar17[2] = lVar19 + 2;
              func_0x000103d1d504(*pplVar13,puStack_190[0x25],puStack_190[0x26]);
              *(undefined1 *)(pplVar13 + 4) = 1;
            }
LAB_103ecacc8:
            lVar19 = puStack_190[0x2b];
            func_0x000103ea7d88(auStack_120,&UNK_108dc1bcc,0xb);
            pplVar13 = pplStack_118;
            if ((auStack_120[0] & 1) != 0) goto LAB_103ecba3c;
            plVar17 = *pplStack_118;
            lVar32 = plVar17[2];
            if ((ulong)(*plVar17 - lVar32) < 2) {
              func_0x00010897c4d0(plVar17,lVar32,2,1,1);
              lVar32 = plVar17[2];
            }
            *(undefined2 *)(plVar17[1] + lVar32) = 0x203a;
            plVar17[2] = lVar32 + 2;
            func_0x000103d4245c(lVar19 + 0x10,pplVar13);
            *(undefined1 *)(pplVar13 + 4) = 1;
            if (lVar31 != 0) {
              func_0x000103ea7d88(auStack_120,&UNK_108dc1bd7,0xc);
              pplVar13 = pplStack_118;
              if ((auStack_120[0] & 1) != 0) goto LAB_103ecba3c;
              plVar17 = *pplStack_118;
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 2) {
                func_0x00010897c4d0(plVar17,lVar19,2,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
              plVar17[2] = lVar19 + 2;
              func_0x000103d4245c(lVar31 + 0x10,pplVar13);
              *(undefined1 *)(pplVar13 + 4) = 1;
            }
            if (lVar24 != -0x7fffffffffffffff) {
              func_0x000103ea7d88(auStack_120,&UNK_108dc1be3,0xb);
              pplVar13 = pplStack_118;
              if ((auStack_120[0] & 1) != 0) goto LAB_103ecba3c;
              plVar17 = *pplStack_118;
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 2) {
                func_0x00010897c4d0(plVar17,lVar19,2,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
              plVar17[2] = lVar19 + 2;
              cVar7 = *(char *)(puStack_190 + 0x2a);
              cVar15 = cVar7 != '\x02';
              if (lVar24 != -0x8000000000000000) {
                cVar15 = cVar15 + '\x01';
              }
              cVar8 = *(char *)((long)puStack_190 + 0x151);
              if (cVar8 != '\x02') {
                cVar15 = cVar15 + '\x01';
              }
              cVar9 = *(char *)((long)puStack_190 + 0x152);
              if (cVar9 != '\x02') {
                cVar15 = cVar15 + '\x01';
              }
              cVar10 = *(char *)((long)puStack_190 + 0x153);
              plVar17 = *pplVar13;
              plVar29 = pplVar13[3];
              pplVar13[3] = (long *)((long)plVar29 + 1);
              *(undefined1 *)(pplVar13 + 4) = 0;
              lVar19 = plVar17[2];
              if (*plVar17 == lVar19) {
                func_0x00010897c4d0(plVar17,lVar19,1,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined1 *)(plVar17[1] + lVar19) = 0x7b;
              lVar19 = lVar19 + 1;
              plVar17[2] = lVar19;
              if (cVar15 == '\0' && cVar10 == '\x02') {
                pplVar13[3] = plVar29;
                if (*plVar17 == lVar19) {
                  func_0x00010897c4d0(plVar17,lVar19,1,1,1);
                  lVar19 = plVar17[2];
                }
                *(undefined1 *)(plVar17[1] + lVar19) = 0x7d;
                plVar17[2] = lVar19 + 1;
                uStack_88 = uStack_88 & 0xffffffffffff0000;
              }
              else {
                uStack_88 = CONCAT62((int6)(uStack_88 >> 0x10),0x100);
              }
              pplStack_80 = pplVar13;
              if (lVar24 != -0x8000000000000000) {
                plVar17 = (long *)func_0x000103ebf6ec(&uStack_88,&UNK_108dc114b,5,puStack_190 + 0x27
                                                     );
                if (plVar17 != (long *)0x0) goto LAB_103ecba28;
              }
              if (((((cVar7 != '\x02') &&
                    (plVar17 = (long *)func_0x000103ebfbf8(&uStack_88,&UNK_108dc21cc,0xc,cVar7),
                    plVar17 != (long *)0x0)) ||
                   ((cVar8 != '\x02' &&
                    (plVar17 = (long *)func_0x000103ebfbf8(&uStack_88,&UNK_108dc21d8,0xf,cVar8),
                    plVar17 != (long *)0x0)))) ||
                  ((cVar9 != '\x02' &&
                   (plVar17 = (long *)func_0x000103ebfbf8(&uStack_88,&UNK_108dc21e7,0xe,cVar9),
                   plVar17 != (long *)0x0)))) ||
                 ((cVar10 != '\x02' &&
                  (plVar17 = (long *)func_0x000103ebfbf8(&uStack_88,&UNK_108dc21f5,0xd,cVar10),
                  plVar17 != (long *)0x0)))) goto LAB_103ecba28;
              if ((uStack_88 & 1) == 0) {
                func_0x000103ea823c(&uStack_88);
              }
              *(undefined1 *)(pplVar13 + 4) = 1;
            }
            if (uVar22 != 4) {
              func_0x000103ea7d88(auStack_120,&UNK_108dc1bee,9);
              pplVar13 = pplStack_118;
              if ((auStack_120[0] & 1) != 0) goto LAB_103ecba3c;
              plVar17 = *pplStack_118;
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 2) {
                func_0x00010897c4d0(plVar17,lVar19,2,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
              plVar17[2] = lVar19 + 2;
              if (uVar22 == 3) {
                plVar17 = *pplVar13;
                plVar29 = pplVar13[3];
                pplVar13[3] = (long *)((long)plVar29 + 1);
                *(undefined1 *)(pplVar13 + 4) = 0;
                lVar19 = plVar17[2];
                if (*plVar17 == lVar19) {
                  func_0x00010897c4d0(plVar17,lVar19,1,1,1);
                  lVar19 = plVar17[2];
                }
                *(undefined1 *)(plVar17[1] + lVar19) = 0x7b;
                lVar19 = lVar19 + 1;
                plVar17[2] = lVar19;
                pplVar13[3] = plVar29;
                if (*plVar17 == lVar19) {
                  func_0x00010897c4d0(plVar17,lVar19,1,1,1);
                  lVar19 = plVar17[2];
                }
                *(undefined1 *)(plVar17[1] + lVar19) = 0x7d;
                plVar17[2] = lVar19 + 1;
                uStack_88 = uStack_88 & 0xffffffffffff0000;
                pplStack_80 = pplVar13;
              }
              else {
                plVar17 = *pplVar13;
                pplVar13[3] = (long *)((long)pplVar13[3] + 1);
                *(undefined1 *)(pplVar13 + 4) = 0;
                lVar19 = plVar17[2];
                if (*plVar17 == lVar19) {
                  func_0x00010897c4d0(plVar17,lVar19,1,1,1);
                  lVar19 = plVar17[2];
                }
                *(undefined1 *)(plVar17[1] + lVar19) = 0x7b;
                plVar17[2] = lVar19 + 1;
                uStack_88 = CONCAT62(uStack_88._2_6_,0x100);
                pplStack_80 = pplVar13;
                func_0x000103ea7d88(&uStack_88,&UNK_108dc1f03,0xb);
                pplVar14 = pplStack_80;
                if ((uStack_88 & 1) != 0) goto LAB_103ecba3c;
                plVar17 = *pplStack_80;
                lVar19 = plVar17[2];
                if ((ulong)(*plVar17 - lVar19) < 2) {
                  func_0x00010897c4d0(plVar17,lVar19,2,1,1);
                  lVar19 = plVar17[2];
                }
                *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
                plVar17[2] = lVar19 + 2;
                func_0x000103d1d504(*pplVar14,*(undefined8 *)(&UNK_10b301280 + (ulong)uVar22 * 8),
                                    *(undefined8 *)(&UNK_108dc7cd0 + (ulong)uVar22 * 8));
                *(undefined1 *)(pplVar14 + 4) = 1;
              }
              func_0x000103ea823c(&uStack_88);
              *(undefined1 *)(pplVar13 + 4) = 1;
            }
            if (lVar26 != -0x8000000000000000) {
              func_0x000103ea7d88(auStack_120,&UNK_108dc19c0,5);
              pplVar13 = pplStack_118;
              if ((auStack_120[0] & 1) != 0) goto LAB_103ecba3c;
              plVar17 = *pplStack_118;
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 2) {
                func_0x00010897c4d0(plVar17,lVar19,2,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
              plVar17[2] = lVar19 + 2;
              lVar24 = puStack_190[0x19];
              lVar26 = puStack_190[0x1a];
              plVar17 = *pplVar13;
              plVar29 = pplVar13[3];
              pplVar13[3] = (long *)((long)plVar29 + 1);
              *(undefined1 *)(pplVar13 + 4) = 0;
              lVar19 = plVar17[2];
              if (*plVar17 == lVar19) {
                func_0x00010897c4d0(plVar17,lVar19,1,1,1);
                lVar19 = plVar17[2];
                *(undefined1 *)(plVar17[1] + lVar19) = 0x5b;
                lVar19 = lVar19 + 1;
                plVar17[2] = lVar19;
                if (lVar26 != 0) goto LAB_103ecb1e8;
LAB_103ecb734:
                pplVar13[3] = plVar29;
                if (*plVar17 == lVar19) {
                  func_0x00010897c4d0(plVar17,lVar19,1,1,1);
                  lVar19 = plVar17[2];
                }
                uVar21 = 0;
                *(undefined1 *)(plVar17[1] + lVar19) = 0x5d;
                plVar17[2] = lVar19 + 1;
              }
              else {
                *(undefined1 *)(plVar17[1] + lVar19) = 0x5b;
                lVar19 = lVar19 + 1;
                plVar17[2] = lVar19;
                if (lVar26 == 0) goto LAB_103ecb734;
LAB_103ecb1e8:
                lVar19 = lVar24 + lVar26 * 0x48;
                bVar20 = true;
                do {
                  plVar17 = *pplVar13;
                  if (bVar20) {
                    lVar26 = plVar17[2];
                    if (*plVar17 == lVar26) {
                      func_0x00010897c4d0(plVar17,lVar26,1,1,1);
                      lVar26 = plVar17[2];
                    }
                    *(undefined1 *)(plVar17[1] + lVar26) = 10;
                    lVar26 = lVar26 + 1;
                    plVar17[2] = lVar26;
                    plVar29 = pplVar13[3];
                    if (plVar29 == (long *)0x0) goto LAB_103ecb2e4;
LAB_103ecb24c:
                    plVar3 = pplVar13[1];
                    plVar4 = pplVar13[2];
                    do {
                      if ((long *)(*plVar17 - lVar26) < plVar4) {
                        func_0x00010897c4d0(plVar17,lVar26,plVar4,1,1);
                        lVar26 = plVar17[2];
                      }
                      _memcpy(lVar26 + plVar17[1],plVar3,plVar4);
                      lVar26 = lVar26 + (long)plVar4;
                      plVar17[2] = lVar26;
                      plVar29 = (long *)((long)plVar29 + -1);
                    } while (plVar29 != (long *)0x0);
                    plVar17 = (long *)((long)pplVar13[3] + 1);
                  }
                  else {
                    lVar26 = plVar17[2];
                    if ((ulong)(*plVar17 - lVar26) < 2) {
                      func_0x00010897c4d0(plVar17,lVar26,2,1,1);
                      lVar26 = plVar17[2];
                    }
                    *(undefined2 *)(plVar17[1] + lVar26) = 0xa2c;
                    lVar26 = lVar26 + 2;
                    plVar17[2] = lVar26;
                    plVar29 = pplVar13[3];
                    if (plVar29 != (long *)0x0) goto LAB_103ecb24c;
LAB_103ecb2e4:
                    plVar17 = (long *)0x1;
                  }
                  lVar32 = *(long *)(lVar24 + 0x18);
                  lVar31 = *(long *)(lVar24 + 0x30);
                  plVar29 = *pplVar13;
                  pplVar13[3] = plVar17;
                  *(undefined1 *)(pplVar13 + 4) = 0;
                  lVar26 = plVar29[2];
                  if (*plVar29 == lVar26) {
                    func_0x00010897c4d0(plVar29,lVar26,1,1,1);
                    lVar26 = plVar29[2];
                  }
                  *(undefined1 *)(plVar29[1] + lVar26) = 0x7b;
                  plVar29[2] = lVar26 + 1;
                  auStack_110[0] = 0x100;
                  pplStack_108 = pplVar13;
                  uVar27 = *(undefined8 *)(lVar24 + 8);
                  uVar5 = *(undefined8 *)(lVar24 + 0x10);
                  func_0x000103ea7d88(auStack_110,&UNK_108dc1882,3);
                  pplVar14 = pplStack_108;
                  if ((auStack_110[0] & 1) != 0) goto LAB_103ecba3c;
                  plVar17 = *pplStack_108;
                  lVar26 = plVar17[2];
                  if ((ulong)(*plVar17 - lVar26) < 2) {
                    func_0x00010897c4d0(plVar17,lVar26,2,1,1);
                    lVar26 = plVar17[2];
                  }
                  *(undefined2 *)(plVar17[1] + lVar26) = 0x203a;
                  plVar17[2] = lVar26 + 2;
                  func_0x000103d1d504(*pplVar14,uVar27,uVar5);
                  *(undefined1 *)(pplVar14 + 4) = 1;
                  if (lVar32 == -0x8000000000000000) {
                    if (lVar31 != -0x8000000000000000) {
LAB_103ecb3ec:
                      func_0x000103ea7d88(auStack_110,&UNK_108dc1885,5);
                      pplVar14 = pplStack_108;
                      if ((auStack_110[0] & 1) != 0) goto LAB_103ecba3c;
                      plVar17 = *pplStack_108;
                      lVar26 = plVar17[2];
                      if ((ulong)(*plVar17 - lVar26) < 2) {
                        func_0x00010897c4d0(plVar17,lVar26,2,1,1);
                        lVar26 = plVar17[2];
                      }
                      *(undefined2 *)(plVar17[1] + lVar26) = 0x203a;
                      plVar17[2] = lVar26 + 2;
                      func_0x000103d3571c(*(undefined8 *)(lVar24 + 0x38),
                                          *(undefined8 *)(lVar24 + 0x40),pplVar14);
                      *(undefined1 *)(pplVar14 + 4) = 1;
                    }
LAB_103ecb1f8:
                    func_0x000103ea823c(auStack_110);
                  }
                  else {
                    plVar17 = (long *)func_0x000103ebf6ec(auStack_110,&UNK_108c98350,8,
                                                          (long *)(lVar24 + 0x18));
                    if (plVar17 != (long *)0x0) goto LAB_103ecba28;
                    if (lVar31 != -0x8000000000000000) {
                      if ((auStack_110[0] & 1) == 0) goto LAB_103ecb3ec;
                      uStack_88 = 10;
                      plVar17 = (long *)func_0x000108a4a0f8(&uStack_88,0,0);
                      goto LAB_103ecba28;
                    }
                    if ((auStack_110[0] & 1) == 0) goto LAB_103ecb1f8;
                  }
                  bVar20 = false;
                  lVar24 = lVar24 + 0x48;
                  *(undefined1 *)(pplVar13 + 4) = 1;
                } while (lVar24 != lVar19);
                uVar21 = 2;
              }
              uStack_88 = (ulong)CONCAT61((int6)(uStack_88 >> 0x10),uVar21) << 8;
              pplStack_80 = pplVar13;
              func_0x000103ea83a4(&uStack_88);
              *(undefined1 *)(pplVar13 + 4) = 1;
            }
            if (lVar25 != -0x8000000000000000) {
              func_0x000103ea7d88(auStack_120,&UNK_108dc1a4f,5);
              pplVar13 = pplStack_118;
              if ((auStack_120[0] & 1) != 0) goto LAB_103ecba3c;
              plVar17 = *pplStack_118;
              lVar19 = plVar17[2];
              if ((ulong)(*plVar17 - lVar19) < 2) {
                func_0x00010897c4d0(plVar17,lVar19,2,1,1);
                lVar19 = plVar17[2];
              }
              *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
              plVar17[2] = lVar19 + 2;
              func_0x000103d4245c(puStack_190 + 0x1b,pplVar13);
              *(undefined1 *)(pplVar13 + 4) = 1;
            }
            func_0x000103ea823c(auStack_120);
            *(undefined1 *)(pplVar12 + 4) = 1;
            plVar17 = (long *)func_0x000103ebf6ec(auStack_130,&UNK_108dc1d4a,0xc,puStack_190 + 0x2e)
            ;
            if ((plVar17 != (long *)0x0) ||
               (plVar17 = (long *)func_0x000103ebf6ec(auStack_130,&UNK_108dc1d56,0xe,
                                                      puStack_190 + 0x31), plVar17 != (long *)0x0))
            goto LAB_103ecba28;
            if ((auStack_130[0] & 1) != 0) goto LAB_103ecb9cc;
            uVar27 = puStack_190[10];
            uVar5 = puStack_190[0xb];
            func_0x000103ea7d88(auStack_130,&UNK_108dc1d64,0x14);
            pplVar12 = pplStack_128;
            if ((char)auStack_130[0] == '\x01') goto LAB_103ecba3c;
            plVar17 = *pplStack_128;
            lVar19 = plVar17[2];
            if ((ulong)(*plVar17 - lVar19) < 2) {
              func_0x00010897c4d0(plVar17,lVar19,2,1,1);
              lVar19 = plVar17[2];
            }
            *(undefined2 *)(plVar17[1] + lVar19) = 0x203a;
            plVar17[2] = lVar19 + 2;
            func_0x000103d3571c(uVar27,uVar5,pplVar12);
            *(undefined1 *)(pplVar12 + 4) = 1;
            func_0x000103ea823c(auStack_130);
            bVar20 = false;
            puStack_190 = puStack_190 + 0x35;
            *(undefined1 *)(pplVar11 + 4) = 1;
          } while (puStack_190 != puVar28 + lVar18 * 0x35);
          uVar21 = 2;
        }
        uStack_88 = (ulong)CONCAT61((int6)(uStack_88 >> 0x10),uVar21) << 8;
        pplStack_80 = pplVar11;
        func_0x000103ea83a4(&uStack_88);
        *(undefined1 *)(pplVar11 + 4) = 1;
        func_0x000103ea823c(auStack_140);
        puVar28 = puStack_b8;
        uVar27 = uStack_148;
        plVar17 = plStack_150;
        lVar18 = lStack_158;
        if (lStack_158 == -0x8000000000000000) {
LAB_103ecbb3c:
          if (*plVar17 == 1) {
            uVar16 = plVar17[1];
            if ((uVar16 & 3) == 1) {
              puVar28 = (undefined8 *)(uVar16 - 1);
              uVar27 = *puVar28;
              puVar30 = *(undefined8 **)(uVar16 + 7);
              pcVar23 = (code *)*puVar30;
              if (pcVar23 != (code *)0x0) {
                (*pcVar23)(uVar27);
              }
              if (puVar30[1] != 0) {
                _free(uVar27);
              }
              goto LAB_103ecbb58;
            }
          }
          else if ((*plVar17 == 0) && (plVar17[2] != 0)) {
            puVar28 = (undefined8 *)plVar17[1];
LAB_103ecbb58:
            _free(puVar28);
          }
          _free(plVar17);
          puVar28 = puStack_b8;
          lVar18 = lStack_b0 + 1;
          puVar30 = puStack_b8;
          while (lVar18 = lVar18 + -1, lVar18 != 0) {
            FUN_103dac280(puVar30);
            puVar30 = puVar30 + 0x35;
          }
          if (lStack_c0 != 0) goto LAB_103ecbbac;
          goto LAB_103ecbbb0;
        }
        lVar19 = lStack_b0 + 1;
        puVar30 = puStack_b8;
        while (lVar19 = lVar19 + -1, lVar19 != 0) {
          FUN_103dac280(puVar30);
          puVar30 = puVar30 + 0x35;
        }
        if (lStack_c0 != 0) {
          _free(puVar28);
        }
        uVar16 = __ZN3std2fs5write5inner17h0d420be84ec93412E(plStack_180,puStack_178,plVar17,uVar27)
        ;
        if (lVar18 != 0) {
          _free(plVar17);
        }
        if (lStack_188 != 0) {
          _free(plStack_180);
        }
        if ((uVar16 & 3) != 1) goto LAB_103ecbc40;
        plVar17 = (long *)(uVar16 - 1);
        lVar18 = *plVar17;
        puVar28 = *(undefined8 **)(uVar16 + 7);
        pcVar23 = (code *)*puVar28;
        if (pcVar23 != (code *)0x0) {
          (*pcVar23)(lVar18);
        }
        plStack_180 = plVar17;
        if (puVar28[1] != 0) {
          _free(lVar18);
        }
        goto LAB_103ecbbbc;
      }
    }
LAB_103ecba3c:
    __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108dc1167,0x28,&UNK_10b2fff50);
LAB_103ecbd44:
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x103ecbd48);
    (*pcVar23)();
  }
  auVar34 = __ZN3std4path10Components7as_path17h6e58b97ab90cc3e2E(&plStack_100);
  if (auVar34._0_8_ == 0) goto LAB_103eca5a4;
  plStack_100 = (long *)CONCAT53(plStack_100._3_5_,0x101ff);
  uVar16 = __ZN3std2fs10DirBuilder7_create17h88524462c4c2be57E
                     (&plStack_100,auVar34._0_8_,auVar34._8_8_);
  if (uVar16 == 0) goto LAB_103eca5a4;
  if ((uVar16 & 3) == 1) {
    puVar28 = (undefined8 *)(uVar16 - 1);
    uVar27 = *puVar28;
    puVar30 = *(undefined8 **)(uVar16 + 7);
    pcVar23 = (code *)*puVar30;
    if (pcVar23 != (code *)0x0) {
      (*pcVar23)(uVar27);
    }
    if (puVar30[1] != 0) {
      _free(uVar27);
    }
LAB_103ecbbac:
    _free(puVar28);
  }
LAB_103ecbbb0:
  if (lStack_188 == 0) goto LAB_103ecbc40;
LAB_103ecbbbc:
  _free(plStack_180);
LAB_103ecbc40:
  auVar36 = func_0x000106032954(8);
  uStack_88 = auVar36._0_8_;
  pplStack_80 = (long **)CONCAT44(pplStack_80._4_4_,auVar36._8_4_);
  puStack_b8 = (undefined8 *)CONCAT44(puStack_b8._4_4_,auVar35._8_4_);
  lStack_c0 = auVar35._0_8_;
  func_0x000106032878(&plStack_100,&uStack_88,&lStack_c0);
  uVar1 = 0;
  if ((int)plStack_100 == 0) {
    uVar1 = (undefined4)uStack_f0;
  }
  puVar2 = (undefined *)0x0;
  if ((int)plStack_100 == 0) {
    puVar2 = puStack_f8;
  }
  func_0x000103edf294(&UNK_108dc6fda,0x27,puVar2,uVar1,8,0);
  return;
}

