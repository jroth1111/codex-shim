
void FUN_1011c4c18(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x27;
  ulong *puStack_b58;
  undefined1 auStack_b50 [552];
  undefined1 auStack_928 [560];
  undefined1 auStack_6f8 [560];
  undefined1 auStack_4c8 [560];
  undefined1 auStack_298 [568];
  
  puVar8 = (ulong *)*param_2;
  _memcpy(auStack_298,param_2 + 1,0x228);
  *param_2 = -0x8000000000000000;
  if (puVar8 != (ulong *)0x8000000000000000) {
    do {
      puStack_b58 = puVar8;
      _memcpy(auStack_b50,auStack_298,0x228);
      unaff_x27 = *(long *)param_2[0x46];
      if (*(long *)(unaff_x27 + 0x80) == 0) {
        puVar8 = (ulong *)(unaff_x27 + 0x2b8);
        uVar11 = *puVar8;
        if (uVar11 == 0) {
          *puVar8 = 3;
          goto LAB_1011c50c0;
        }
        _memcpy(auStack_6f8,&puStack_b58,0x230);
        if (((uint)uVar11 >> 2 & 1) != 0) goto LAB_1011c5064;
      }
      else {
        if (*(long *)(unaff_x27 + 0x80) == 1) {
          uVar9 = *(ulong *)(unaff_x27 + 0x180);
          uVar3 = *(ulong *)(unaff_x27 + 0x208);
          uVar11 = uVar3 & uVar9;
joined_r0x0001011c4cac:
          if (uVar11 == 0) {
            do {
              uVar11 = uVar3 - 1 & uVar9;
              uVar3 = *(ulong *)(unaff_x27 + 0x218);
              if (uVar11 + 1 < uVar3) {
                uVar4 = uVar9 + 1;
              }
              else {
                uVar4 = (uVar9 & -*(long *)(unaff_x27 + 0x200)) + *(long *)(unaff_x27 + 0x200);
              }
              if (uVar3 <= uVar11) {
                func_0x000108a07bdc(uVar11,uVar3,&UNK_10b229bf8);
                goto LAB_1011c5174;
              }
              lVar5 = *(long *)(unaff_x27 + 0x210) + uVar11 * 0x238;
              if (uVar9 == *(ulong *)(lVar5 + 0x230)) {
                uVar11 = *(ulong *)(unaff_x27 + 0x180);
                if (uVar11 == uVar9) {
                  *(ulong *)(unaff_x27 + 0x180) = uVar4;
                  _memcpy(lVar5,&puStack_b58,0x230);
                  *(ulong *)(lVar5 + 0x230) = uVar9 + 1;
                  uVar11 = 2;
                  goto LAB_1011c4f0c;
                }
                uVar3 = *(ulong *)(unaff_x27 + 0x208);
                uVar4 = uVar3 & uVar11;
                uVar9 = uVar11;
              }
              else {
                if (*(long *)(unaff_x27 + 0x200) + *(ulong *)(lVar5 + 0x230) == uVar9 + 1)
                goto code_r0x0001011c4d50;
                _sched_yield();
                uVar9 = *(ulong *)(unaff_x27 + 0x180);
                uVar3 = *(ulong *)(unaff_x27 + 0x208);
                uVar4 = uVar3 & uVar9;
              }
              if (uVar4 != 0) break;
            } while( true );
          }
          _memcpy(auStack_6f8,&puStack_b58,0x230);
          uVar11 = 1;
          goto LAB_1011c4f0c;
        }
        plVar2 = *(long **)(unaff_x27 + 0x188);
        plVar10 = (long *)0x0;
        uVar11 = *(ulong *)(unaff_x27 + 0x180);
        while ((uVar11 & 1) == 0) {
          uVar9 = uVar11 >> 1 & 0x1f;
          if (uVar9 == 0x1f) {
            _sched_yield();
            uVar3 = *(ulong *)(unaff_x27 + 0x180);
          }
          else {
            if (((uVar9 == 0x1e) && (plVar10 == (long *)0x0)) &&
               (plVar10 = (long *)_calloc(0x44d0,1), plVar10 == (long *)0x0)) {
              __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x44d0);
              goto LAB_1011c5174;
            }
            if (plVar2 == (long *)0x0) {
              plVar2 = (long *)_calloc(0x44d0,1);
              if (plVar2 == (long *)0x0) {
                __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x44d0);
                goto LAB_1011c5174;
              }
              if (*(long *)(unaff_x27 + 0x188) == 0) {
                *(long *)(unaff_x27 + 0x188) = (long)plVar2;
                *(long **)(unaff_x27 + 0x108) = plVar2;
                uVar3 = *(ulong *)(unaff_x27 + 0x180);
                if (uVar3 == uVar11) {
                  *(ulong *)(unaff_x27 + 0x180) = uVar11 + 2;
                  goto LAB_1011c5008;
                }
              }
              else {
                if (plVar10 != (long *)0x0) {
                  _free(plVar10);
                }
                uVar3 = *(ulong *)(unaff_x27 + 0x180);
                plVar10 = plVar2;
              }
            }
            else {
              uVar3 = *(ulong *)(unaff_x27 + 0x180);
              if (uVar3 == uVar11) {
                *(ulong *)(unaff_x27 + 0x180) = uVar11 + 2;
LAB_1011c5008:
                if (uVar9 != 0x1e) {
                  _memmove(plVar2 + uVar9 * 0x47 + 1,&puStack_b58,0x230);
                  plVar2[uVar9 * 0x47 + 0x47] = plVar2[uVar9 * 0x47 + 0x47] | 1;
                  LORelease();
                  uVar11 = 2;
                  goto joined_r0x0001011c5038;
                }
                if (plVar10 == (long *)0x0) {
                  func_0x000108a07a20(&UNK_10b229c28);
LAB_1011c5174:
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c5178);
                  (*pcVar1)();
                }
                *(long **)(unaff_x27 + 0x188) = plVar10;
                *(long *)(unaff_x27 + 0x180) = *(long *)(unaff_x27 + 0x180) + 2;
                LORelease();
                *plVar2 = (long)plVar10;
                _memcpy(plVar2 + 0x853,&puStack_b58,0x230);
                plVar2[0x899] = plVar2[0x899] | 1;
                LORelease();
                goto LAB_1011c50d8;
              }
            }
          }
          plVar2 = *(long **)(unaff_x27 + 0x188);
          uVar11 = uVar3;
        }
        _memcpy(auStack_6f8,&puStack_b58,0x230);
        uVar11 = 1;
joined_r0x0001011c5038:
        if (plVar10 != (long *)0x0) {
          _free(plVar10);
        }
LAB_1011c4f0c:
        if (uVar11 == 2) goto LAB_1011c50d8;
        if ((uVar11 & 1) != 0) {
LAB_1011c5064:
          _memcpy(auStack_928,auStack_6f8,0x230);
          _memcpy(param_1,auStack_928,0x230);
          return;
        }
      }
      _memcpy(auStack_928,auStack_6f8,0x230);
      if (*param_2 != -0x8000000000000000) {
        if (*param_2 != 0) {
          _free(param_2[1]);
        }
        FUN_100def028(param_2 + 9);
        lVar5 = param_2[3];
        if (lVar5 != -0x7fffffffffffffff) {
          if ((lVar5 != -0x8000000000000000) && (lVar5 != 0)) {
            _free(param_2[4]);
          }
          if ((param_2[6] != -0x8000000000000000) && (param_2[6] != 0)) {
            _free(param_2[7]);
          }
        }
      }
      _memcpy(param_2,auStack_928,0x230);
      if (param_2[0x47] == 0) {
        lVar5 = FUN_108833c8c(*(long *)param_2[0x46] + 0x300);
        FUN_100ded75c(param_2[0x47]);
        param_2[0x47] = lVar5;
      }
      else {
        uVar11 = FUN_1014a8880(param_2 + 0x47,param_3);
        if ((uVar11 & 1) != 0) {
          uVar6 = 0x8000000000000001;
          goto LAB_1011c508c;
        }
      }
      puVar8 = (ulong *)*param_2;
      _memcpy(auStack_298,param_2 + 1,0x228);
      *param_2 = -0x8000000000000000;
    } while (puVar8 != (ulong *)0x8000000000000000);
    puVar8 = (ulong *)0x8000000000000000;
  }
  func_0x000108a07a20(&UNK_10b24f3f0);
LAB_1011c50c0:
  _memcpy(unaff_x27 + 0x88,&puStack_b58,0x230);
  *puVar8 = *puVar8 & 0xfffffffffffffffe;
  LORelease();
LAB_1011c50d8:
  FUN_108834028(unaff_x27 + 0x308,1);
  FUN_108833f44(unaff_x27 + 0x310);
  uVar6 = 0x8000000000000000;
LAB_1011c508c:
  *param_1 = uVar6;
  return;
code_r0x0001011c4d50:
  DataMemoryBarrier(2,3);
  _memcpy(auStack_298,&puStack_b58,0x230);
  lVar5 = *(long *)(unaff_x27 + 0x100);
  lVar7 = *(long *)(unaff_x27 + 0x200);
  _memcpy(auStack_4c8,auStack_298,0x230);
  if (lVar7 + lVar5 == uVar9) {
    _memcpy(auStack_6f8,auStack_4c8,0x230);
    uVar11 = 0;
    goto LAB_1011c4f0c;
  }
  _memcpy(&puStack_b58,auStack_4c8,0x230);
  uVar9 = *(ulong *)(unaff_x27 + 0x180);
  uVar3 = *(ulong *)(unaff_x27 + 0x208);
  uVar11 = uVar3 & uVar9;
  goto joined_r0x0001011c4cac;
}

