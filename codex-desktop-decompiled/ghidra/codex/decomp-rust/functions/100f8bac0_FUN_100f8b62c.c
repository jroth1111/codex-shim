
void FUN_100f8b62c(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong unaff_x20;
  byte *pbVar17;
  long unaff_x22;
  undefined *unaff_x26;
  uint uVar18;
  long unaff_x29;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000030;
  byte *in_stack_00000038;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  long in_stack_00000050;
  ulong in_stack_00000058;
  byte *in_stack_00000060;
  byte *in_stack_00000068;
  undefined8 *in_stack_00000070;
  undefined *in_stack_00000078;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000060,s___108ac93c7,unaff_x29 + -0x88);
  uVar13 = (ulong)in_stack_00000070;
  puVar6 = in_stack_00000068;
  lVar5 = (long)in_stack_00000060;
  lVar11 = unaff_x20 - (long)in_stack_00000070;
  if ((unaff_x20 < in_stack_00000070) || (iVar9 = _memcmp(in_stack_00000068), iVar9 != 0)) {
    if (unaff_x20 == 0) {
      in_stack_00000038 = (byte *)0x1;
    }
    else {
      in_stack_00000038 = (byte *)_malloc();
      if (in_stack_00000038 == (byte *)0x0) {
        func_0x0001087c9084(1);
        goto LAB_100f8bdf0;
      }
    }
    _memcpy(in_stack_00000038);
    in_stack_00000030 = unaff_x20;
    in_stack_00000040 = unaff_x20;
  }
  else {
    *(ulong *)(unaff_x29 + -0x88) = unaff_x22 + uVar13;
    *(long *)(unaff_x29 + -0x80) = lVar11;
    in_stack_00000060 = (byte *)(unaff_x29 + -0x88);
    in_stack_00000068 = &DAT_100c7b3a0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000030,s____108ad59e7,&stack0x00000060);
  }
  if (lVar5 != 0) {
    _free(puVar6);
  }
  if (*(long *)(unaff_x29 + -0x70) != 0) {
    _free(*(undefined8 *)(unaff_x29 + -0x68));
  }
  if (in_stack_00000040 < 0x20) {
    if (in_stack_00000040 != 0) {
      if (in_stack_00000040 < 8) {
        uVar13 = 0;
        uVar10 = 0;
      }
      else {
        uVar13 = in_stack_00000040 & 0x18;
        uVar19 = *(undefined8 *)in_stack_00000038;
        uVar10 = (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 0x30)) & 1);
        uVar15 = (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 0x38)) & 1);
        uVar20 = (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 0x20)) & 1);
        uVar21 = (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 0x28)) & 1);
        uVar22 = (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 0x10)) & 1);
        uVar23 = (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 0x18)) & 1);
        uVar24 = (ulong)(-(-0x41 < (char)uVar19) & 1);
        uVar25 = (ulong)(-(-0x41 < (char)((ulong)uVar19 >> 8)) & 1);
        if (uVar13 != 8) {
          uVar19 = *(undefined8 *)(in_stack_00000038 + 8);
          uVar10 = uVar10 + (-(-0x41 < (char)((ulong)uVar19 >> 0x30)) & 1);
          uVar15 = uVar15 + (-(-0x41 < (char)((ulong)uVar19 >> 0x38)) & 1);
          uVar20 = uVar20 + (-(-0x41 < (char)((ulong)uVar19 >> 0x20)) & 1);
          uVar21 = uVar21 + (-(-0x41 < (char)((ulong)uVar19 >> 0x28)) & 1);
          uVar22 = uVar22 + (-(-0x41 < (char)((ulong)uVar19 >> 0x10)) & 1);
          uVar23 = uVar23 + (-(-0x41 < (char)((ulong)uVar19 >> 0x18)) & 1);
          uVar24 = uVar24 + (-(-0x41 < (char)uVar19) & 1);
          uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar19 >> 8)) & 1);
          if (uVar13 != 0x10) {
            uVar19 = *(undefined8 *)(in_stack_00000038 + 0x10);
            uVar10 = uVar10 + (-(-0x41 < (char)((ulong)uVar19 >> 0x30)) & 1);
            uVar15 = uVar15 + (-(-0x41 < (char)((ulong)uVar19 >> 0x38)) & 1);
            uVar20 = uVar20 + (-(-0x41 < (char)((ulong)uVar19 >> 0x20)) & 1);
            uVar21 = uVar21 + (-(-0x41 < (char)((ulong)uVar19 >> 0x28)) & 1);
            uVar22 = uVar22 + (-(-0x41 < (char)((ulong)uVar19 >> 0x10)) & 1);
            uVar23 = uVar23 + (-(-0x41 < (char)((ulong)uVar19 >> 0x18)) & 1);
            uVar24 = uVar24 + (-(-0x41 < (char)uVar19) & 1);
            uVar25 = uVar25 + (-(-0x41 < (char)((ulong)uVar19 >> 8)) & 1);
          }
        }
        uVar10 = uVar24 + uVar20 + uVar22 + uVar10 + uVar25 + uVar21 + uVar23 + uVar15;
        if (in_stack_00000040 == uVar13) goto LAB_100f8b80c;
      }
      lVar11 = in_stack_00000040 - uVar13;
      pbVar16 = in_stack_00000038 + uVar13;
      do {
        if (-0x41 < (char)*pbVar16) {
          uVar10 = uVar10 + 1;
        }
        lVar11 = lVar11 + -1;
        pbVar16 = pbVar16 + 1;
      } while (lVar11 != 0);
      goto LAB_100f8b80c;
    }
    lVar11 = 1;
  }
  else {
    uVar10 = __ZN4core3str5count14do_count_chars17haf03aa108601295cE
                       (in_stack_00000038,in_stack_00000040);
LAB_100f8b80c:
    if (0x30 < uVar10) {
      in_stack_00000060 = in_stack_00000038;
      in_stack_00000070 = (undefined8 *)0x18;
      in_stack_00000068 = in_stack_00000038 + in_stack_00000040;
      FUN_101509234(unaff_x29 + -0x88,&stack0x00000060);
      in_stack_00000060 = (byte *)0x0;
      in_stack_00000068 = (byte *)0x1;
      in_stack_00000070 = (undefined8 *)0x0;
      uVar13 = in_stack_00000040 >> 2;
      if ((in_stack_00000040 & 3) != 0) {
        uVar13 = uVar13 + 1;
      }
      if (0x16 < uVar13) {
        uVar13 = 0x17;
      }
      FUN_108855060(&stack0x00000060,0,uVar13,1,1);
      lVar11 = -0x17;
      pbVar16 = in_stack_00000038 + in_stack_00000040;
      do {
        uVar13 = (ulong)in_stack_00000070;
        pbVar17 = in_stack_00000068;
        uVar10 = (ulong)in_stack_00000060;
        if (in_stack_00000038 == pbVar16) {
LAB_100f8ba34:
          in_stack_00000060 = (byte *)0x0;
          in_stack_00000068 = (byte *)0x1;
          in_stack_00000070 = (undefined8 *)0x0;
          if (uVar13 != 0) {
            pbVar16 = pbVar17 + uVar13;
            goto LAB_100f8bb38;
          }
          *(undefined8 *)(unaff_x29 + -0x68) = 1;
          *(undefined8 *)(unaff_x29 + -0x70) = 0;
          *(undefined8 *)(unaff_x29 + -0x60) = 0;
          goto joined_r0x000100f8ba60;
        }
        pbVar14 = pbVar16 + -1;
        bVar1 = *pbVar14;
        uVar18 = (uint)(char)bVar1;
        if ((char)bVar1 < 0) {
          pbVar14 = pbVar16 + -2;
          bVar3 = *pbVar14;
          if ((char)bVar3 < -0x40) {
            pbVar14 = pbVar16 + -3;
            bVar2 = *pbVar14;
            if ((char)bVar2 < -0x40) {
              pbVar14 = pbVar16 + -4;
              uVar18 = bVar2 & 0x3f | (*pbVar14 & 7) << 6;
            }
            else {
              uVar18 = (int)(char)bVar2 & 0xf;
            }
            uVar12 = bVar3 & 0x3f | uVar18 << 6;
          }
          else {
            uVar12 = (int)(char)bVar3 & 0x1f;
          }
          uVar18 = (int)(char)bVar1 & 0x3fU | uVar12 << 6;
          if (uVar18 == 0x110000) goto LAB_100f8ba34;
          uVar10 = 3;
          if (0x3ff < uVar12) {
            uVar10 = 4;
          }
          uVar15 = 2;
          if (0x1f < uVar12) {
            uVar15 = uVar10;
          }
          bVar8 = uVar12 < 2;
          uVar10 = 1;
          if (!bVar8) {
            uVar10 = uVar15;
          }
          bVar4 = bVar8;
          if (uVar10 <= (ulong)((long)in_stack_00000060 - (long)in_stack_00000070))
          goto LAB_100f8b8ec;
LAB_100f8ba08:
          FUN_108855060(&stack0x00000060,in_stack_00000070,uVar10,1,1);
          pbVar16 = in_stack_00000068 + (long)in_stack_00000070;
          if (!bVar4) goto LAB_100f8b8f8;
LAB_100f8b8a0:
          *pbVar16 = (byte)uVar18;
        }
        else {
          bVar8 = true;
          uVar10 = 1;
          bVar4 = true;
          if (in_stack_00000060 == (byte *)in_stack_00000070) goto LAB_100f8ba08;
LAB_100f8b8ec:
          pbVar16 = in_stack_00000068 + (long)in_stack_00000070;
          if (bVar8) goto LAB_100f8b8a0;
LAB_100f8b8f8:
          bVar1 = (byte)uVar18 & 0x3f | 0x80;
          if (uVar18 < 0x800) {
            *pbVar16 = (byte)(uVar18 >> 6) | 0xc0;
            pbVar16[1] = bVar1;
          }
          else {
            bVar3 = (byte)(uVar18 >> 6) & 0x3f | 0x80;
            if (uVar18 < 0x10000) {
              *pbVar16 = (byte)(uVar18 >> 0xc) | 0xe0;
              pbVar16[1] = bVar3;
              pbVar16[2] = bVar1;
            }
            else {
              *pbVar16 = (byte)(uVar18 >> 0x12) | 0xf0;
              pbVar16[1] = (byte)(uVar18 >> 0xc) & 0x3f | 0x80;
              pbVar16[2] = bVar3;
              pbVar16[3] = bVar1;
            }
          }
        }
        uVar13 = uVar10 + uVar13;
        bVar8 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        pbVar16 = pbVar14;
        in_stack_00000070 = (undefined8 *)uVar13;
      } while (bVar8);
      pbVar16 = in_stack_00000068 + uVar13;
      uVar10 = (ulong)in_stack_00000060;
      pbVar17 = in_stack_00000068;
LAB_100f8bb38:
      in_stack_00000070 = (undefined8 *)0x0;
      in_stack_00000068 = (byte *)0x1;
      in_stack_00000060 = (byte *)0x0;
      uVar15 = uVar13 >> 2;
      if ((uVar13 & 3) != 0) {
        uVar15 = uVar15 + 1;
      }
      FUN_108855060(&stack0x00000060,0,uVar15,1,1);
      do {
        lVar11 = (long)in_stack_00000070;
        pbVar14 = pbVar16 + -1;
        bVar1 = *pbVar14;
        uVar18 = (uint)(char)bVar1;
        if ((char)bVar1 < 0) {
          pbVar14 = pbVar16 + -2;
          bVar3 = *pbVar14;
          if ((char)bVar3 < -0x40) {
            pbVar14 = pbVar16 + -3;
            bVar2 = *pbVar14;
            if ((char)bVar2 < -0x40) {
              pbVar14 = pbVar16 + -4;
              uVar18 = bVar2 & 0x3f | (*pbVar14 & 7) << 6;
            }
            else {
              uVar18 = (int)(char)bVar2 & 0xf;
            }
            uVar12 = bVar3 & 0x3f | uVar18 << 6;
          }
          else {
            uVar12 = (int)(char)bVar3 & 0x1f;
          }
          uVar18 = (int)(char)bVar1 & 0x3fU | uVar12 << 6;
          if (uVar18 == 0x110000) break;
          uVar13 = 3;
          if (0x3ff < uVar12) {
            uVar13 = 4;
          }
          uVar15 = 2;
          if (0x1f < uVar12) {
            uVar15 = uVar13;
          }
          bVar8 = uVar12 < 2;
          uVar13 = 1;
          if (!bVar8) {
            uVar13 = uVar15;
          }
          bVar4 = bVar8;
          if (uVar13 <= (ulong)((long)in_stack_00000060 - (long)in_stack_00000070))
          goto LAB_100f8bbb0;
LAB_100f8bcc4:
          FUN_108855060(&stack0x00000060,in_stack_00000070,uVar13,1,1);
          pbVar16 = (byte *)((long)in_stack_00000068 + (long)in_stack_00000070);
          if (!bVar4) goto LAB_100f8bbbc;
LAB_100f8bb6c:
          *pbVar16 = (byte)uVar18;
        }
        else {
          bVar8 = true;
          uVar13 = 1;
          bVar4 = true;
          if (in_stack_00000060 == (byte *)in_stack_00000070) goto LAB_100f8bcc4;
LAB_100f8bbb0:
          pbVar16 = (byte *)((long)in_stack_00000068 + (long)in_stack_00000070);
          if (bVar8) goto LAB_100f8bb6c;
LAB_100f8bbbc:
          bVar1 = (byte)uVar18 & 0x3f | 0x80;
          if (uVar18 < 0x800) {
            *pbVar16 = (byte)(uVar18 >> 6) | 0xc0;
            pbVar16[1] = bVar1;
          }
          else {
            bVar3 = (byte)(uVar18 >> 6) & 0x3f | 0x80;
            if (uVar18 < 0x10000) {
              *pbVar16 = (byte)(uVar18 >> 0xc) | 0xe0;
              pbVar16[1] = bVar3;
              pbVar16[2] = bVar1;
            }
            else {
              *pbVar16 = (byte)(uVar18 >> 0x12) | 0xf0;
              pbVar16[1] = (byte)(uVar18 >> 0xc) & 0x3f | 0x80;
              pbVar16[2] = bVar3;
              pbVar16[3] = bVar1;
            }
          }
        }
        in_stack_00000070 = (undefined8 *)(uVar13 + lVar11);
        pbVar16 = pbVar14;
      } while (pbVar17 != pbVar14);
      *(byte **)(unaff_x29 + -0x68) = in_stack_00000068;
      *(byte **)(unaff_x29 + -0x70) = in_stack_00000060;
      *(undefined8 **)(unaff_x29 + -0x60) = in_stack_00000070;
joined_r0x000100f8ba60:
      if (uVar10 != 0) {
        _free(pbVar17);
      }
      unaff_x26 = &DAT_10112965c;
      in_stack_00000060 = (byte *)(unaff_x29 + -0x88);
      in_stack_00000068 = &DAT_10112965c;
      in_stack_00000070 = (undefined8 *)(unaff_x29 + -0x70);
      in_stack_00000078 = &DAT_10112965c;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000048,s__108ad5982,&stack0x00000060);
      if (*(long *)(unaff_x29 + -0x70) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x68));
      }
      if (*(long *)(unaff_x29 + -0x88) != 0) {
        _free(*(undefined8 *)(unaff_x29 + -0x80));
      }
      goto LAB_100f8bab0;
    }
    lVar11 = _malloc(in_stack_00000040);
    if (lVar11 == 0) {
      func_0x0001087c9084(1,in_stack_00000040);
LAB_100f8bdf0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100f8bdf4);
      (*pcVar7)();
    }
  }
  _memcpy(lVar11,in_stack_00000038,in_stack_00000040);
  in_stack_00000048 = in_stack_00000040;
  in_stack_00000058 = in_stack_00000040;
  in_stack_00000050 = lVar11;
LAB_100f8bab0:
  in_stack_00000060 = (byte *)&stack0x00000048;
  in_stack_00000070 = &stack0x00000010;
  in_stack_00000068 = unaff_x26;
  in_stack_00000078 = unaff_x26;
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(s__108ac1772,&stack0x00000060);
  if (in_stack_00000048 != 0) {
    _free(in_stack_00000050);
  }
  if (in_stack_00000030 != 0) {
    _free(in_stack_00000038);
  }
  if (in_stack_00000010 != 0) {
    _free(in_stack_00000018);
  }
  return;
}

