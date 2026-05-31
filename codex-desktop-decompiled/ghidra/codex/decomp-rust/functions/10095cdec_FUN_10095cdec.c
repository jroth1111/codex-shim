
/* WARNING: Removing unreachable block (ram,0x00010095d75c) */

void FUN_10095cdec(void)

{
  char cVar1;
  ulong uVar2;
  code *pcVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 uVar17;
  code *pcVar18;
  code *pcVar19;
  code *pcVar20;
  int iVar21;
  uint uVar22;
  code *pcVar23;
  byte *pbVar24;
  code *pcVar25;
  uint uVar26;
  code *pcVar27;
  code *pcVar28;
  code *pcVar29;
  long unaff_x20;
  code *unaff_x21;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  ulong uVar33;
  code *pcVar34;
  code *pcVar35;
  code *pcVar36;
  undefined8 unaff_x23;
  code *pcVar37;
  ulong uVar38;
  code *pcVar39;
  ulong uVar40;
  code *pcVar41;
  code *pcVar42;
  code *pcVar43;
  long lVar44;
  code *pcVar45;
  long lVar46;
  code *pcVar47;
  long lStack0000000000000008;
  code *pcStack0000000000000010;
  code *in_stack_00000030;
  undefined1 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined1 *in_stack_00000068;
  code *in_stack_00000070;
  undefined1 *in_stack_00000078;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  int iStack0000000000000140;
  code *in_stack_00000148;
  code *in_stack_00000150;
  code *in_stack_00000158;
  code *in_stack_00000160;
  code *in_stack_00000168;
  short sStack0000000000000170;
  code *in_stack_00000178;
  code *in_stack_00000180;
  code *pcVar48;
  undefined8 in_stack_00004cd0;
  undefined8 in_stack_00004cd8;
  undefined8 in_stack_00004ce0;
  undefined8 in_stack_00004ce8;
  undefined8 in_stack_00004cf0;
  undefined8 in_stack_00004cf8;
  undefined8 in_stack_00004d00;
  undefined8 in_stack_00004d08;
  long in_stack_00004d18;
  code *in_stack_00005020;
  code *in_stack_00005028;
  code *in_stack_00005030;
  code *in_stack_00005300;
  code *in_stack_00005308;
  code *in_stack_00005310;
  long in_stack_00005360;
  long in_stack_000053d8;
  code *in_stack_000055f8;
  code *in_stack_00005600;
  code *in_stack_00005608;
  code *in_stack_00005610;
  code *in_stack_000056b8;
  code *in_stack_000056c0;
  code *in_stack_000056c8;
  code *in_stack_000056d0;
  code *pcVar49;
  code *in_stack_000056d8;
  code *in_stack_000056e0;
  code *in_stack_000056e8;
  code *in_stack_000056f0;
  code *in_stack_000056f8;
  code *in_stack_00005700;
  code *in_stack_00005708;
  long in_stack_00005730;
  long in_stack_000057a8;
  long in_stack_000059a8;
  long in_stack_000059b0;
  long in_stack_000059b8;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000140,s__ps_plugins_workspace_created_108acf544,&stack0x000056d0);
    *(code **)(unaff_x20 + 0x2688) = in_stack_00000150;
    *(code **)(unaff_x20 + 0x2680) = in_stack_00000148;
    *(code **)(unaff_x20 + 0x2678) = _iStack0000000000000140;
    uVar11 = __ZN11codex_login4auth14default_client20build_reqwest_client17he41481ad98749143E();
    *(undefined8 *)(unaff_x20 + 0x2690) = uVar11;
    FUN_1011d51fc(&stack0x00000140,uVar11,&UNK_108ca1660,*(undefined8 *)(unaff_x20 + 0x2680),
                  *(undefined8 *)(unaff_x20 + 0x2688));
    __ZN18codex_core_plugins6remote21authenticated_request17h250c66f122829838E
              (&stack0x000056d0,&stack0x00000140,unaff_x23);
    if (in_stack_000056d0 == (code *)0x3) {
      in_stack_00000078[0x5e0] = 0;
      lVar10 = **(long **)(unaff_x20 + 0x2690);
      **(long **)(unaff_x20 + 0x2690) = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(unaff_x20 + 0x2690);
      }
      pcVar34 = in_stack_00005708;
      pcVar37 = in_stack_000056e0;
      pcVar39 = in_stack_000056f0;
      pcVar43 = in_stack_000056d8;
      pcVar13 = in_stack_000056f8;
      pcVar9 = in_stack_00005700;
      pcVar45 = in_stack_000056e8;
      in_stack_000056d0 = in_stack_00005300;
      in_stack_000056d8 = in_stack_00005308;
      if (*(long *)(unaff_x20 + 0x2678) != 0) {
LAB_10095d0b0:
        _free(*(undefined8 *)(unaff_x20 + 0x2680));
        in_stack_00005300 = in_stack_000056d0;
        in_stack_00005308 = in_stack_000056d8;
      }
      *in_stack_00000070 = (code)0x1;
      pcVar27 = in_stack_00000070;
      if (pcVar43 == (code *)0x8000000000000015) {
LAB_10095d31c:
        uVar17 = 3;
        *in_stack_00000030 = (code)0x3;
        goto LAB_10095d328;
      }
    }
    else {
      in_stack_00000078[0x5e0] = 0;
      _memcpy(&stack0x00000140,&stack0x00005300,0x110);
      FUN_1011d604c(&stack0x000056d0,&stack0x00000140);
      in_stack_00000078[0x5e0] = 1;
      _memcpy(&stack0x00005300,&stack0x000056d0,0x110);
      if (unaff_x21 != (code *)0x0) {
        in_stack_00000078[0x5e0] = 0;
        _memcpy(&stack0x00000140,&stack0x00005300,0x110);
        in_stack_00005020 = (code *)&UNK_108cb6ab4;
        in_stack_00005028 = (code *)0x9;
        FUN_1011d5dc4(&stack0x000056d0,&stack0x00000140,&stack0x00005020);
        in_stack_00000078[0x5e0] = 1;
        _memcpy(&stack0x00005300,&stack0x000056d0,0x110);
        in_stack_00005030 = unaff_x21;
      }
      in_stack_00000078[0x5e0] = 0;
      uVar11 = *(undefined8 *)(unaff_x20 + 0x2680);
      uVar30 = *(undefined8 *)(unaff_x20 + 0x2688);
      _memcpy(unaff_x20 + 0x2698,&stack0x00005300,0x110);
      *(undefined8 *)(unaff_x20 + 0x27a8) = uVar11;
      *(undefined8 *)(unaff_x20 + 0x27b0) = uVar30;
      in_stack_00000078[0x178] = 0;
      pcVar27 = (code *)0x2698;
      func_0x000100a6f910(&stack0x00000140,unaff_x20 + 0x2698,in_stack_00000048);
      pcVar34 = _sStack0000000000000170;
      pcVar9 = in_stack_00000168;
      pcVar13 = in_stack_00000160;
      pcVar39 = in_stack_00000158;
      pcVar45 = in_stack_00000150;
      pcVar37 = in_stack_00000148;
      pcVar43 = _iStack0000000000000140;
      if (_iStack0000000000000140 == (code *)0x8000000000000015) {
        *in_stack_00000070 = (code)0x3;
        goto LAB_10095d31c;
      }
      FUN_100d534e0(unaff_x20 + 0x2698);
      in_stack_00000078[0x5e0] = 0;
      lVar10 = **(long **)(unaff_x20 + 0x2690);
      **(long **)(unaff_x20 + 0x2690) = lVar10 + -1;
      LORelease();
      if (lVar10 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4(unaff_x20 + 0x2690);
      }
      in_stack_00005310 = in_stack_000056e0;
      in_stack_00005360 = in_stack_00005730;
      in_stack_000053d8 = in_stack_000057a8;
      if (*(long *)(unaff_x20 + 0x2678) != 0) goto LAB_10095d0b0;
      *in_stack_00000070 = (code)0x1;
      in_stack_00005300 = in_stack_000056d0;
      in_stack_00005308 = in_stack_000056d8;
    }
    FUN_100cc5410(in_stack_00000058);
    if (pcVar43 != (code *)0x8000000000000014) {
      if ((*(long *)(unaff_x20 + 0x2c60) != -0x8000000000000000) &&
         (*(long *)(unaff_x20 + 0x2c60) != 0)) {
        _free(*(undefined8 *)(unaff_x20 + 0x2c68));
      }
      pcVar42 = *(code **)(unaff_x20 + 0x2c50);
      lVar10 = *(long *)(unaff_x20 + 0x2c58) + 1;
      pcVar12 = pcVar42;
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        pcVar12 = pcVar12 + 0x2c0;
        FUN_100e38a40();
        pcVar27 = pcVar12;
      }
      if (*(long *)(unaff_x20 + 0x2c48) != 0) {
        _free(pcVar42);
      }
      in_stack_00000078[0x638] = 0;
      goto LAB_10095d220;
    }
    in_stack_00000158 = pcVar45 + (long)pcVar39 * 0x2c0;
    lVar10 = *(long *)(unaff_x20 + 0x2c58);
    _iStack0000000000000140 = pcVar45;
    in_stack_00000148 = pcVar45;
    in_stack_00000150 = pcVar37;
    if ((code *)(*(long *)(unaff_x20 + 0x2c48) - lVar10) < pcVar39) {
      FUN_108855060(unaff_x20 + 0x2c48,lVar10,pcVar39,8,0x2c0);
      lVar10 = *(long *)(unaff_x20 + 0x2c58);
    }
    _memcpy(*(long *)(unaff_x20 + 0x2c50) + lVar10 * 0x2c0,pcVar45,(long)pcVar39 * 0x2c0);
    *(code **)(unaff_x20 + 0x2c58) = pcVar39 + lVar10;
    in_stack_00000158 = pcVar45;
    if (pcVar37 != (code *)0x0) {
      _free(pcVar45);
    }
    if (pcVar13 == (code *)0x8000000000000000) goto LAB_10095d1ec;
    if ((*(long *)(unaff_x20 + 0x2c60) != -0x8000000000000000) &&
       (*(long *)(unaff_x20 + 0x2c60) != 0)) {
      _free(*(undefined8 *)(unaff_x20 + 0x2c68));
    }
    *(code **)(unaff_x20 + 0x2c60) = pcVar13;
    *(code **)(unaff_x20 + 0x2c68) = pcVar9;
    *(code **)(unaff_x20 + 0x2c70) = pcVar34;
    lVar10 = *(long *)(unaff_x20 + 0x2c38);
    unaff_x23 = *(undefined8 *)(unaff_x20 + 0x2c40);
    unaff_x21 = (code *)0x0;
    if (pcVar13 != (code *)0x8000000000000000) {
      unaff_x21 = pcVar9;
    }
    *(code **)(unaff_x20 + 0x2658) = unaff_x21;
    *(code **)(unaff_x20 + 0x2660) = pcVar34;
    *(long *)(unaff_x20 + 0x2c20) = lVar10;
    *(undefined8 *)(unaff_x20 + 0x2c28) = unaff_x23;
    in_stack_00000070 = (code *)(in_stack_00000078 + 0x5e1);
    in_stack_00000078[0x5e1] = 0;
    in_stack_00000078[0x5e0] = 0;
    lVar44 = *(long *)(lVar10 + 8);
    lVar10 = *(long *)(lVar10 + 0x10);
    do {
      lVar46 = lVar10;
      if (lVar46 == 0) break;
      lVar10 = lVar44 + lVar46;
      pbVar24 = (byte *)(lVar10 + -1);
      uVar22 = (uint)(char)*pbVar24;
      if ((int)uVar22 < 0) {
        pbVar24 = (byte *)(lVar10 + -2);
        bVar6 = *pbVar24;
        if ((char)bVar6 < -0x40) {
          pbVar24 = (byte *)(lVar10 + -3);
          bVar7 = *pbVar24;
          if ((char)bVar7 < -0x40) {
            pbVar24 = (byte *)(lVar10 + -4);
            uVar26 = bVar7 & 0x3f | (*pbVar24 & 7) << 6;
          }
          else {
            uVar26 = (int)(char)bVar7 & 0xf;
          }
          uVar26 = bVar6 & 0x3f | uVar26 << 6;
        }
        else {
          uVar26 = (int)(char)bVar6 & 0x1f;
        }
        uVar22 = uVar22 & 0x3f | uVar26 << 6;
      }
      lVar10 = (long)pbVar24 - lVar44;
    } while (uVar22 == 0x2f);
    in_stack_000056d0 = (code *)(unaff_x20 + 0x2668);
    *(long *)(unaff_x20 + 0x2668) = lVar44;
    *(long *)(unaff_x20 + 0x2670) = lVar46;
    in_stack_000056d8 = (code *)&DAT_100c7b3a0;
  } while( true );
LAB_10095e1cc:
  lVar44 = -0x8000000000000000;
LAB_10095e138:
  _memcpy(&stack0x00005020,&stack0x00005328,0x270);
  FUN_100e38a40(&stack0x00000140);
  *(code **)pcVar28 = pcVar37;
  *(code **)(pcVar28 + 8) = pcVar12;
  *(code **)(pcVar28 + 0x18) = in_stack_000056e8;
  *(code **)(pcVar28 + 0x10) = pcVar45;
  *(code **)(pcVar28 + 0x20) = in_stack_000056f0;
  *(code **)(pcVar28 + 0x30) = in_stack_00005028;
  *(code **)(pcVar28 + 0x28) = in_stack_00005020;
  *(code **)(pcVar28 + 0x38) = in_stack_00005030;
  _memcpy(pcVar28 + 0x40,&stack0x00005038,600);
  *(long *)(pcVar28 + 0x298) = lVar44;
  *(code **)(pcVar28 + 0x2a0) = pcVar41;
  *(long *)(pcVar28 + 0x2a8) = lVar44;
  pcVar28 = pcVar28 + 0x2b0;
  pcVar29 = pcVar35;
  in_stack_00000070 = pcVar45;
  if (pcVar27 == pcVar35) goto LAB_10095e2c4;
  goto LAB_10095deb4;
LAB_10095d1ec:
  in_stack_00000078[0x638] = 0;
  pcVar37 = *(code **)(unaff_x20 + 0x2c48);
  pcVar45 = *(code **)(unaff_x20 + 0x2c50);
  pcVar39 = *(code **)(unaff_x20 + 0x2c58);
  if ((*(long *)(unaff_x20 + 0x2c60) != -0x8000000000000000) && (*(long *)(unaff_x20 + 0x2c60) != 0)
     ) {
    _free(*(undefined8 *)(unaff_x20 + 0x2c68));
  }
  in_stack_00000078[0x638] = 0;
LAB_10095d220:
  *in_stack_00000030 = (code)0x1;
  FUN_100cbd18c(in_stack_00000058);
  in_stack_00000070 = pcVar45;
  if (pcVar43 == (code *)0x8000000000000014) {
    *in_stack_00000078 = 1;
    *(code **)(unaff_x20 + 0x2658) = pcVar37;
    *(code **)(unaff_x20 + 0x2660) = pcVar45;
    *(code **)(unaff_x20 + 0x2668) = pcVar39;
    if (pcVar39 == (code *)0x0) {
      lVar10 = 0;
      pcVar37 = (code *)0x0;
      in_stack_00000070 = (code *)0x8;
      pcVar43 = (code *)0x8000000000000014;
LAB_10095d360:
      lVar10 = lVar10 + 1;
      pcVar12 = pcVar45;
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        pcVar12 = pcVar12 + 0x2c0;
        FUN_100e38a40();
        pcVar27 = pcVar12;
      }
      if (*(long *)(unaff_x20 + 0x2658) != 0) {
        _free(pcVar45);
      }
      goto LAB_10095d394;
    }
    *(undefined8 *)(unaff_x20 + 0x2ca8) = *(undefined8 *)(unaff_x20 + 0x2638);
    *(undefined8 *)(unaff_x20 + 0x2cb0) = *(undefined8 *)(unaff_x20 + 0x2640);
    *(undefined2 *)(in_stack_00000078 + 0x668) = 0x100;
    pcVar27 = (code *)0x2670;
    FUN_100a73bd0(&stack0x00000140,unaff_x20 + 0x2670,in_stack_00000048);
    pcVar34 = _sStack0000000000000170;
    pcVar9 = in_stack_00000168;
    pcVar13 = in_stack_00000160;
    pcVar39 = in_stack_00000158;
    in_stack_00000070 = in_stack_00000150;
    pcVar37 = in_stack_00000148;
    pcVar43 = _iStack0000000000000140;
    if (_iStack0000000000000140 != (code *)0x8000000000000015) {
      if (in_stack_00000078[0x668] == '\x03') {
        FUN_100d0391c(unaff_x20 + 0x2670);
      }
      if (pcVar43 != (code *)0x8000000000000014) {
LAB_10095d33c:
        pcVar45 = *(code **)(unaff_x20 + 0x2660);
        lVar10 = *(long *)(unaff_x20 + 0x2668);
        goto LAB_10095d360;
      }
      if ((code *)0x2b1da46102b1da < pcVar39) {
        uVar11 = 0;
LAB_10095d300:
        func_0x0001087c9084(uVar11,pcVar27);
        goto LAB_10095e61c;
      }
      if (pcVar39 == (code *)0x0) {
        pcVar45 = (code *)0x0;
        pcVar39 = (code *)0x0;
        pcVar12 = (code *)0x8;
      }
      else {
        pcVar27 = (code *)((long)pcVar39 * 0x2f8);
        uVar11 = 8;
        pcVar12 = (code *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(pcVar27,8);
        if (pcVar12 == (code *)0x0) goto LAB_10095d300;
        pcVar45 = (code *)0x0;
        _iStack0000000000000140 = in_stack_00000070;
        in_stack_00000150 = pcVar37;
        pcVar9 = pcVar12 + 0x10;
        pcVar34 = in_stack_00000070;
        in_stack_00000158 = in_stack_00000070 + (long)pcVar39 * 0x2e0;
        do {
          _memcpy(&stack0x00004d40,pcVar34,0x2e0);
          pcVar27 = *(code **)(pcVar34 + 8);
          lVar10 = *(long *)(pcVar34 + 0x10);
          if (lVar10 == 0) {
            pcVar13 = (code *)0x1;
          }
          else {
            pcVar13 = (code *)_malloc(lVar10);
            if (pcVar13 == (code *)0x0) {
              func_0x0001087c9084(1,lVar10);
              goto LAB_10095e61c;
            }
          }
          _memcpy(pcVar13,pcVar27,lVar10);
          *(long *)(pcVar9 + -0x10) = lVar10;
          *(code **)(pcVar9 + -8) = pcVar13;
          *(long *)pcVar9 = lVar10;
          _memcpy(pcVar9 + 8,&stack0x00004d40,0x2e0);
          pcVar45 = pcVar45 + 1;
          pcVar9 = pcVar9 + 0x2f8;
          pcVar34 = pcVar34 + 0x2e0;
        } while (pcVar34 != in_stack_00000070 + (long)pcVar39 * 0x2e0);
      }
      if (pcVar37 != (code *)0x0) {
        _free(in_stack_00000070);
      }
      if (pcVar45 == (code *)0x0) {
        pcStack0000000000000010 = (code *)0x0;
        pcVar34 = (code *)0x0;
        pcVar37 = pcVar39;
        if (pcVar39 != (code *)0x0) {
          _free(pcVar12);
        }
      }
      else {
        _iStack0000000000000140 = (code *)&stack0x000056d0;
        if (pcVar45 != (code *)0x1) {
          if (pcVar45 < (code *)0x15) {
            FUN_100e9672c(pcVar12,pcVar45);
          }
          else {
            __ZN4core5slice4sort6stable14driftsort_main17h8136f49820dd4986E
                      (pcVar12,pcVar45,&stack0x00000140);
          }
        }
        pcVar27 = (code *)_malloc(0x20b8);
        if (pcVar27 == (code *)0x0) {
          func_0x0001087c906c(8,0x20b8);
          goto LAB_10095e61c;
        }
        lStack0000000000000008 = 0;
        *(undefined2 *)(pcVar27 + 0x20b2) = 0;
        *(long *)(pcVar27 + 0x1fa0) = 0;
        _iStack0000000000000140 = (code *)0x8000000000000001;
        pcVar34 = pcVar12;
        pcStack0000000000000010 = pcVar27;
        while (pcVar37 = pcVar39, pcVar34 != pcVar12 + (long)pcVar45 * 0x2f8) {
          pcVar43 = pcVar34 + 0x2f8;
          pcVar20 = pcVar34 + 8;
          pcVar42 = *(code **)pcVar34;
          pcVar48 = pcVar43;
          do {
            pcVar39 = pcVar42;
            if (pcVar39 == (code *)0x8000000000000000) goto LAB_10095da8c;
            _memcpy(&stack0x000056d8,pcVar20,0x2f0);
            if (pcVar43 == pcVar12 + (long)pcVar45 * 0x2f8) {
LAB_10095d83c:
              _iStack0000000000000140 = (code *)0x8000000000000000;
              pcVar9 = pcVar43;
              pcVar42 = _iStack0000000000000140;
LAB_10095d84c:
              _iStack0000000000000140 = pcVar42;
              pcVar42 = _iStack0000000000000140;
              _memcpy(&stack0x00005020,&stack0x000056e8,0x2e0);
              uVar4 = *(ushort *)(pcVar27 + 0x20b2);
              if (uVar4 < 0xb) {
                _memcpy(&stack0x000056d0,&stack0x00005020,0x2e0);
                *(ushort *)(pcVar27 + 0x20b2) = uVar4 + 1;
                *(code **)(pcVar27 + ((ulong)uVar4 * 3 + 0x3f5) * 8) = pcVar39;
                *(code **)(pcVar27 + ((ulong)uVar4 * 3 + 0x3f6) * 8) = pcVar12;
                *(code **)(pcVar27 + ((ulong)uVar4 * 3 + 0x3f7) * 8) = pcVar45;
                _memcpy(pcVar27 + (ulong)uVar4 * 0x2e0,&stack0x000056d0,0x2e0);
                pcVar43 = pcVar48;
                pcVar42 = _iStack0000000000000140;
              }
              else {
                lVar10 = 0;
                do {
                  pcVar27 = *(code **)(pcVar27 + 0x1fa0);
                  if (pcVar27 == (code *)0x0) {
                    pcVar27 = (code *)_malloc(0x2118);
                    if (pcVar27 == (code *)0x0) {
                      func_0x0001087c906c(8,0x2118);
                      goto LAB_10095e61c;
                    }
                    *(long *)(pcVar27 + 0x1fa0) = 0;
                    *(undefined2 *)(pcVar27 + 0x20b2) = 0;
                    *(code **)(pcVar27 + 0x20b8) = pcStack0000000000000010;
                    lVar10 = lStack0000000000000008 + 1;
                    if (lStack0000000000000008 == -1) {
                      FUN_107c05cb0(&UNK_10b238148);
                      goto LAB_10095e61c;
                    }
                    *(code **)(pcStack0000000000000010 + 0x1fa0) = pcVar27;
                    *(undefined2 *)(pcStack0000000000000010 + 0x20b0) = 0;
                    lStack0000000000000008 = lVar10;
                    in_stack_00000030 = pcVar27;
                    goto LAB_10095d93c;
                  }
                  lVar10 = lVar10 + 1;
                } while (10 < *(ushort *)(pcVar27 + 0x20b2));
                in_stack_00000030 = pcStack0000000000000010;
LAB_10095d93c:
                lVar44 = _malloc(0x20b8);
                if (lVar44 == 0) {
                  func_0x0001087c906c(8,0x20b8);
                  goto LAB_10095e61c;
                }
                *(undefined8 *)(lVar44 + 0x1fa0) = 0;
                *(undefined2 *)(lVar44 + 0x20b2) = 0;
                lVar46 = lVar10;
                while (lVar46 = lVar46 + -1, lVar46 != 0) {
                  lVar14 = _malloc(0x2118);
                  if (lVar14 == 0) {
                    func_0x0001087c906c(8,0x2118);
                    goto LAB_10095e61c;
                  }
                  *(undefined8 *)(lVar14 + 0x1fa0) = 0;
                  *(undefined2 *)(lVar14 + 0x20b2) = 0;
                  *(long *)(lVar14 + 0x20b8) = lVar44;
                  *(long *)(lVar44 + 0x1fa0) = lVar14;
                  *(undefined2 *)(lVar44 + 0x20b0) = 0;
                  lVar44 = lVar14;
                }
                uVar4 = *(ushort *)(pcVar27 + 0x20b2);
                uVar31 = (ulong)uVar4;
                if (10 < uVar4) {
                  __ZN4core9panicking5panic17h30f5ec71e3af4326E(&UNK_108cc5f19,0x20,&UNK_10b238130);
                  goto LAB_10095e61c;
                }
                *(ushort *)(pcVar27 + 0x20b2) = uVar4 + 1;
                *(code **)(pcVar27 + (uVar31 * 3 + 0x3f5) * 8) = pcVar39;
                *(code **)(pcVar27 + (uVar31 * 3 + 0x3f6) * 8) = pcVar12;
                *(code **)(pcVar27 + (uVar31 * 3 + 0x3f7) * 8) = pcVar45;
                _memcpy(pcVar27 + (ulong)uVar4 * 0x2e0,&stack0x00005020,0x2e0);
                *(long *)(pcVar27 + (uVar31 + 0x418) * 8) = lVar44;
                *(code **)(lVar44 + 0x1fa0) = pcVar27;
                *(ushort *)(lVar44 + 0x20b0) = uVar4 + 1;
                for (; pcVar43 = pcVar9, pcStack0000000000000010 = in_stack_00000030, lVar10 != 0;
                    lVar10 = lVar10 + -1) {
                  pcVar27 = *(code **)(pcVar27 + ((ulong)*(ushort *)(pcVar27 + 0x20b2) + 0x417) * 8)
                  ;
                }
              }
            }
            else {
              pcVar9 = pcVar43 + 0x2f8;
              pcVar42 = *(code **)pcVar43;
              _memmove(&stack0x00000148,pcVar43 + 8,0x2f0);
              pcVar43 = pcVar9;
              pcVar48 = pcVar9;
              if (pcVar42 == (code *)0x8000000000000000) goto LAB_10095d83c;
              if ((pcVar45 != in_stack_00000150) ||
                 (iVar21 = _memcmp(pcVar12,in_stack_00000148,pcVar45), iVar21 != 0))
              goto LAB_10095d84c;
              if (pcVar39 != (code *)0x0) {
                _free(pcVar12);
              }
              FUN_100e38a40(&stack0x000056e8);
              if (in_stack_000059b8 != 0) {
                puVar32 = (undefined8 *)(in_stack_000059b0 + 8);
                lVar10 = in_stack_000059b8;
                do {
                  if (puVar32[-1] != 0) {
                    _free(*puVar32);
                  }
                  puVar32 = puVar32 + 3;
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
              }
              if (in_stack_000059a8 != 0) {
                _free(in_stack_000059b0);
              }
            }
            pcVar34 = pcVar43;
            pcVar20 = (code *)&stack0x00000148;
            pcVar13 = pcVar12;
            pcVar9 = pcVar45;
            pcVar37 = pcVar39;
          } while (pcVar42 != (code *)0x8000000000000001);
        }
LAB_10095da8c:
        pcVar34 = (code *)&stack0x000056d0;
        pcVar27 = (code *)0x8000000000000000;
        _iStack0000000000000140 = (code *)0x8000000000000001;
        FUN_100dc13f8(&stack0x00000140);
        pcVar43 = pcStack0000000000000010;
        for (lVar10 = lStack0000000000000008; in_stack_00004d18 = lStack0000000000000008,
            lVar10 != 0; lVar10 = lVar10 + -1) {
          uVar4 = *(ushort *)(pcVar43 + 0x20b2);
          if (uVar4 == 0) {
            puVar15 = &UNK_108cc5f00;
            puVar16 = &UNK_10b2380d0;
            uVar11 = 0x19;
LAB_10095e558:
            __ZN4core9panicking5panic17h30f5ec71e3af4326E(puVar15,uVar11,puVar16);
            goto LAB_10095e61c;
          }
          iVar21 = uVar4 - 1;
          pcVar27 = *(code **)(pcVar43 + ((ulong)uVar4 + 0x417) * 8);
          uVar5 = *(ushort *)(pcVar27 + 0x20b2);
          uVar31 = (ulong)uVar5;
          if (uVar5 < 5) {
            lVar44 = *(long *)(pcVar43 + ((ulong)uVar4 + 0x416) * 8);
            uVar4 = *(ushort *)(lVar44 + 0x20b2);
            uVar40 = -uVar31 + 5;
            if ((uint)uVar4 < (uint)uVar40) {
              puVar15 = &UNK_108cc6057;
              uVar11 = 0x27;
              puVar16 = &UNK_10b238208;
            }
            else {
              uVar33 = uVar4 - uVar40;
              *(short *)(lVar44 + 0x20b2) = (short)uVar33;
              *(undefined2 *)(pcVar27 + 0x20b2) = 5;
              pcVar9 = pcVar27 + 0x1fa8;
              _memmove(pcVar9 + (uVar40 & 0xffffffff) * 0x18,pcVar9,uVar31 * 0x18);
              _memmove(pcVar27 + (uVar40 & 0xffffffff) * 0x2e0,pcVar27,(uint)uVar5 * 0x2e0);
              uVar2 = uVar33 + 1;
              uVar38 = uVar4 - uVar2;
              if (uVar38 == -uVar31 + 4) {
                _memcpy(pcVar9,lVar44 + 0x1fa8 + (uVar2 & 0xffffffff) * 0x18);
                _memcpy(pcVar27,lVar44 + (uVar2 & 0xffffffff) * 0x2e0,(uVar38 & 0xffffffff) * 0x2e0)
                ;
                pcVar13 = (code *)0x18;
                puVar32 = (undefined8 *)(lVar44 + 0x1fa8 + (uVar33 & 0xffffffff) * 0x18);
                _memcpy(&stack0x00005300,lVar44 + (uVar33 & 0xffffffff) * 0x2e0,0x2e0);
                pcVar34 = (code *)0x2e0;
                in_stack_00000148 = *(code **)(pcVar43 + ((long)iVar21 * 3 + 0x3f6) * 8);
                _iStack0000000000000140 = *(code **)(pcVar43 + ((long)iVar21 * 3 + 0x3f5) * 8);
                in_stack_00000150 = *(code **)(pcVar43 + ((long)iVar21 * 3 + 0x3f7) * 8);
                uVar11 = puVar32[2];
                uVar30 = *puVar32;
                *(undefined8 *)(pcVar43 + ((long)iVar21 * 3 + 0x3f6) * 8) = puVar32[1];
                *(undefined8 *)(pcVar43 + ((long)iVar21 * 3 + 0x3f5) * 8) = uVar30;
                *(undefined8 *)(pcVar43 + ((long)iVar21 * 3 + 0x3f7) * 8) = uVar11;
                _memcpy(&stack0x00000158,pcVar43 + (long)iVar21 * 0x2e0,0x2e0);
                _memcpy(pcVar43 + (long)iVar21 * 0x2e0,&stack0x00005300,0x2e0);
                pcVar42 = in_stack_00000150;
                pcVar39 = in_stack_00000148;
                pcVar43 = _iStack0000000000000140;
                _memcpy(&stack0x000056d0,&stack0x00000158,0x2e0);
                pcVar9 = pcVar9 + uVar38 * 0x18;
                *(code **)(pcVar9 + 8) = pcVar39;
                *(code **)pcVar9 = pcVar43;
                *(code **)(pcVar9 + 0x10) = pcVar42;
                _memcpy(pcVar27 + (uVar38 & 0xffffffff) * 0x2e0,&stack0x000056d0,0x2e0);
                if (lVar10 != 1) {
                  pcVar34 = (code *)0x20b8;
                  pcVar9 = pcVar27 + 0x20b8;
                  _memmove(pcVar9 + uVar40 * 8,pcVar9,uVar31 * 8 + 8);
                  _memcpy(pcVar9,lVar44 + uVar2 * 8 + 0x20b8,uVar40 * 8);
                  lVar44 = *(long *)(pcVar27 + 0x20b8);
                  *(code **)(lVar44 + 0x1fa0) = pcVar27;
                  *(undefined2 *)(lVar44 + 0x20b0) = 0;
                  lVar44 = *(long *)(pcVar27 + 0x20c0);
                  *(code **)(lVar44 + 0x1fa0) = pcVar27;
                  *(undefined2 *)(lVar44 + 0x20b0) = 1;
                  lVar44 = *(long *)(pcVar27 + 0x20c8);
                  *(code **)(lVar44 + 0x1fa0) = pcVar27;
                  *(undefined2 *)(lVar44 + 0x20b0) = 2;
                  lVar44 = *(long *)(pcVar27 + 0x20d0);
                  *(code **)(lVar44 + 0x1fa0) = pcVar27;
                  *(undefined2 *)(lVar44 + 0x20b0) = 3;
                  lVar44 = *(long *)(pcVar27 + 0x20d8);
                  *(code **)(lVar44 + 0x1fa0) = pcVar27;
                  *(undefined2 *)(lVar44 + 0x20b0) = 4;
                  lVar44 = *(long *)(pcVar27 + 0x20e0);
                  *(code **)(lVar44 + 0x1fa0) = pcVar27;
                  *(undefined2 *)(lVar44 + 0x20b0) = 5;
                }
                goto LAB_10095dac8;
              }
              puVar15 = &UNK_108cc5fc7;
              uVar11 = 0x28;
              puVar16 = &UNK_10b238190;
            }
            goto LAB_10095e558;
          }
LAB_10095dac8:
          pcVar9 = pcVar27;
          pcVar43 = pcVar27;
        }
      }
      __ZN18codex_core_plugins6remote5share11local_paths29load_plugin_share_local_paths17hc56465c7457e9543E
                (&stack0x00000140,*(undefined8 *)(unaff_x20 + 0x2610),
                 *(undefined8 *)(unaff_x20 + 0x2618));
      pcVar20 = in_stack_00000158;
      pcVar48 = in_stack_00000150;
      pcVar42 = in_stack_00000148;
      if (iStack0000000000000140 == 1) {
        in_stack_00005300 = (code *)&stack0x00005020;
        in_stack_00005308 =
             __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
        ;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x000056d0,s_0failed_to_load_plugin_share_loc_108acf438,&stack0x00005300);
        if (((ulong)pcVar42 & 3) == 1) {
          pcVar27 = *(code **)(pcVar42 + -1);
          pcVar34 = *(code **)(pcVar42 + 7);
          if (*(code **)pcVar34 != (code *)0x0) {
            (**(code **)pcVar34)(pcVar27);
          }
          if (*(long *)(pcVar34 + 8) != 0) {
            _free(pcVar27);
          }
          _free(pcVar42 + -1);
        }
        FUN_100d371ec(&stack0x00004d10);
        pcVar43 = (code *)0x8000000000000012;
        pcVar39 = pcVar45;
        in_stack_00000070 = pcVar12;
        goto LAB_10095d33c;
      }
      *(undefined1 *)(unaff_x20 + 0x2650) = 0;
      pcVar23 = *(code **)(unaff_x20 + 0x2658);
      pcVar25 = *(code **)(unaff_x20 + 0x2660);
      pcVar35 = pcVar25 + *(long *)(unaff_x20 + 0x2668) * 0x2c0;
      pcVar43 = (code *)0x8000000000000014;
      pcVar28 = pcVar25;
      pcVar29 = pcVar25;
      pcVar27 = pcVar25;
      pcVar36 = pcVar9;
      in_stack_00000070 = pcVar45;
      pcVar39 = in_stack_000055f8;
      pcVar13 = in_stack_00005600;
      pcVar9 = in_stack_00005608;
      pcVar34 = in_stack_00005610;
      pcVar49 = pcVar37;
      if (*(long *)(unaff_x20 + 0x2668) != 0) {
LAB_10095deb4:
        _memcpy(&stack0x00000140,pcVar27,0x2c0);
        pcVar8 = in_stack_00000150;
        pcVar29 = in_stack_00000148;
        pcVar36 = pcStack0000000000000010;
        in_stack_00000070 = (code *)in_stack_00004d18;
        if (pcStack0000000000000010 != (code *)0x0) {
          do {
            uVar4 = *(ushort *)(pcVar36 + 0x20b2);
            lVar10 = (ulong)uVar4 * 0x18;
            pcVar41 = pcVar36 + -0x2e0;
            uVar31 = 0xffffffffffffffff;
            pcVar18 = pcVar36 + 0x1fa8;
            do {
              uVar40 = (ulong)uVar4;
              if (lVar10 == 0) goto LAB_10095df6c;
              pcVar47 = *(code **)(pcVar18 + 0x10);
              pcVar19 = pcVar8;
              if (pcVar47 <= pcVar8) {
                pcVar19 = pcVar47;
              }
              iVar21 = _memcmp(pcVar29,*(long *)(pcVar18 + 8),pcVar19);
              lVar44 = (long)pcVar8 - (long)pcVar47;
              if (iVar21 != 0) {
                lVar44 = (long)iVar21;
              }
              cVar1 = 0 < lVar44;
              if (lVar44 < 0) {
                cVar1 = -1;
              }
              lVar10 = lVar10 + -0x18;
              pcVar41 = pcVar41 + 0x2e0;
              uVar31 = uVar31 + 1;
              pcVar18 = pcVar18 + 0x18;
            } while (cVar1 == '\x01');
            uVar40 = uVar31;
            if (cVar1 == '\0') goto LAB_10095df8c;
LAB_10095df6c:
            if (in_stack_00000070 == (code *)0x0) break;
            pcVar36 = *(code **)(pcVar36 + (uVar40 + 0x417) * 8);
            in_stack_00000070 = (code *)((long)in_stack_00000070 + -1);
          } while( true );
        }
        pcVar41 = (code *)0x0;
LAB_10095df8c:
        pcVar27 = pcVar27 + 0x2c0;
        __ZN18codex_core_plugins6remote27build_remote_plugin_summary17h12fbecf117ebddb8E
                  (&stack0x000056d0,&stack0x00000140,pcVar41);
        pcVar41 = pcVar45;
        pcVar36 = pcVar37;
        if (pcVar37 != (code *)0x8000000000000000) {
          _memcpy(&stack0x00005340,&stack0x00005710,600);
          in_stack_00005300 = pcVar37;
          in_stack_00005308 = pcVar12;
          in_stack_00005310 = pcVar45;
          if ((in_stack_00005360 == -0x8000000000000000) ||
             (in_stack_000053d8 == -0x8000000000000000)) {
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (&stack0x000056b8,s_created_workspace_plugin______di_108acf46b,
                       &stack0x000056d0);
            FUN_100e24378(&stack0x00005300);
            pcVar12 = (code *)0x8000000000000012;
            in_stack_000056f8 = in_stack_00005020;
            in_stack_00005700 = in_stack_00005028;
            in_stack_00005708 = in_stack_00005030;
            pcVar41 = in_stack_000056b8;
            in_stack_000056e8 = in_stack_000056c0;
            in_stack_000056f0 = in_stack_000056c8;
            pcVar49 = (code *)&stack0x00000140;
            goto LAB_10095e284;
          }
          pcVar41 = pcVar42;
          in_stack_00000070 = pcVar48;
          if (pcVar42 != (code *)0x0) {
            do {
              uVar40 = (ulong)*(ushort *)(pcVar41 + 0x21a);
              lVar10 = uVar40 * 0x18;
              uVar31 = 0xffffffffffffffff;
              pcVar19 = pcVar41 + 8;
              pcVar18 = pcVar41 + 0x108;
              do {
                pcVar47 = pcVar18;
                if (lVar10 == 0) goto LAB_10095e0c0;
                pcVar3 = *(code **)(pcVar19 + 0x10);
                pcVar18 = pcVar8;
                if (pcVar3 <= pcVar8) {
                  pcVar18 = pcVar3;
                }
                iVar21 = _memcmp(pcVar29,*(long *)(pcVar19 + 8),pcVar18);
                lVar44 = (long)pcVar8 - (long)pcVar3;
                if (iVar21 != 0) {
                  lVar44 = (long)iVar21;
                }
                cVar1 = 0 < lVar44;
                if (lVar44 < 0) {
                  cVar1 = -1;
                }
                lVar10 = lVar10 + -0x18;
                pcVar18 = pcVar47 + 0x18;
                uVar31 = uVar31 + 1;
                pcVar19 = pcVar19 + 0x18;
              } while (cVar1 == '\x01');
              uVar40 = uVar31;
              if (cVar1 == '\0') {
                lVar10 = *(long *)(pcVar47 + 0x10);
                lVar44 = *(long *)pcVar18;
                if (lVar44 == 0) {
                  pcVar41 = (code *)0x1;
                }
                else {
                  pcVar41 = (code *)__RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar44,1);
                  if (pcVar41 == (code *)0x0) {
                    func_0x0001087c9084(1,lVar44);
                    goto LAB_10095e61c;
                  }
                }
                _memcpy(pcVar41,lVar10,lVar44);
                goto LAB_10095e138;
              }
LAB_10095e0c0:
              if (in_stack_00000070 == (code *)0x0) goto LAB_10095e1cc;
              pcVar41 = *(code **)(pcVar41 + (uVar40 + 0x44) * 8);
              in_stack_00000070 = in_stack_00000070 + -1;
            } while( true );
          }
          lVar44 = -0x8000000000000000;
          goto LAB_10095e138;
        }
LAB_10095e284:
        FUN_100e38a40(&stack0x00000140);
        pcVar29 = pcVar27;
        pcVar43 = pcVar12;
        pcVar12 = pcVar41;
        in_stack_00000070 = in_stack_000056e8;
        pcVar39 = in_stack_000056f0;
        pcVar13 = in_stack_000056f8;
        pcVar9 = in_stack_00005700;
        pcVar34 = in_stack_00005708;
      }
LAB_10095e2c4:
      pcVar37 = pcVar12;
      uVar31 = (long)pcVar23 * 0x2c0;
      pcVar27 = (code *)((ulong)((long)pcVar28 - (long)pcVar25) / 0x2b0);
      lVar10 = ((ulong)((long)pcVar35 - (long)pcVar29) >> 6) * 0x2e8ba2e8ba2e8ba3 + 1;
      _iStack0000000000000140 = pcVar25;
      in_stack_00000148 = pcVar27;
      in_stack_00000150 = pcVar23;
      while (lVar10 = lVar10 + -1, lVar10 != 0) {
        FUN_100e38a40(pcVar29);
        pcVar29 = pcVar29 + 0x2c0;
      }
      pcVar12 = pcVar25;
      if ((pcVar23 != (code *)0x0) && (lVar10 = (long)(uVar31 / 0x2b0) * 0x2b0, uVar31 % 0x2b0 != 0)
         ) {
        if (uVar31 < 0x2b0) {
          if (uVar31 != 0) {
            _free();
          }
          pcVar12 = (code *)0x8;
        }
        else {
          pcVar12 = (code *)__RNvCshXwFllX56pT_7___rustc14___rust_realloc(pcVar25,uVar31,8,lVar10);
          if (pcVar12 == (code *)0x0) {
            func_0x0001087c906c(8,lVar10);
            goto LAB_10095e61c;
          }
        }
      }
      FUN_100ccd214(&stack0x00005620);
      if (pcVar43 == (code *)0x8000000000000014) {
        pcVar34 = (code *)0x0;
        pcVar37 = (code *)(uVar31 / 0x2b0);
        pcVar39 = pcVar27;
        pcVar13 = pcVar28;
        pcVar9 = pcVar36;
        in_stack_00000070 = pcVar12;
      }
      else {
        pcVar29 = pcVar12;
        if (pcVar28 != pcVar25) {
          do {
            FUN_100e24378(pcVar29);
            if ((*(ulong *)(pcVar29 + 0x298) & 0x7fffffffffffffff) != 0) {
              _free(*(long *)(pcVar29 + 0x2a0));
            }
            pcVar27 = pcVar27 + -1;
            pcVar29 = pcVar29 + 0x2b0;
          } while (pcVar27 != (code *)0x0);
        }
        if (0x2af < uVar31) {
          _free(pcVar12);
        }
      }
      if (pcVar42 == (code *)0x0) {
        pcVar20 = (code *)0x0;
      }
      else {
        in_stack_00000148 = (code *)0x0;
        in_stack_00000168 = (code *)0x0;
        in_stack_00000150 = pcVar42;
        in_stack_00000158 = pcVar48;
        _sStack0000000000000170 = pcVar42;
        in_stack_00000178 = pcVar48;
      }
      _iStack0000000000000140 = (code *)(ulong)(pcVar42 != (code *)0x0);
      pcVar27 = (code *)0x18;
      in_stack_00000160 = _iStack0000000000000140;
      in_stack_00000180 = pcVar20;
      while (FUN_100f3a3c8(&stack0x000056d0,&stack0x00000140), pcVar49 != (code *)0x0) {
        if (*(long *)(pcVar49 + ((long)pcVar45 * 3 + 1) * 8) != 0) {
          _free(*(undefined8 *)(pcVar49 + ((long)pcVar45 * 3 + 2) * 8));
        }
        if (*(long *)(pcVar49 + ((long)pcVar45 * 3 + 0x22) * 8) != 0) {
          _free(*(undefined8 *)(pcVar49 + ((long)pcVar45 * 3 + 0x23) * 8));
        }
      }
      FUN_100d371ec(&stack0x00004d10);
      *(undefined1 *)(unaff_x20 + 0x2650) = 0;
      goto LAB_10095d39c;
    }
    uVar17 = 4;
LAB_10095d328:
    *in_stack_00000040 = uVar17;
    *in_stack_00000068 = 4;
LAB_10095cb88:
    *in_stack_00000060 = 0x8000000000000071;
    uVar17 = 3;
  }
  else {
LAB_10095d394:
    *in_stack_00000078 = 0;
LAB_10095d39c:
    *in_stack_00000040 = 1;
    if (pcVar43 == (code *)0x8000000000000014) {
      if ((code *)0x288df0cac5b3f5 < pcVar39) {
        uVar11 = 0;
LAB_10095e600:
        func_0x0001087c9084(uVar11,pcVar27);
LAB_10095e61c:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10095e620);
        (*pcVar9)();
      }
      pcVar34 = in_stack_00000070 + (long)pcVar39 * 0x2b0;
      if (pcVar39 == (code *)0x0) {
        pcVar9 = (code *)0x0;
        in_stack_00005310 = (code *)0x8;
      }
      else {
        pcVar27 = (code *)((long)pcVar39 * 0x328);
        in_stack_00005310 = (code *)_malloc(pcVar27);
        if (in_stack_00005310 == (code *)0x0) {
          uVar11 = 8;
          goto LAB_10095e600;
        }
        pcVar9 = (code *)0x0;
        pcVar13 = in_stack_00000070;
        pcVar27 = in_stack_00005310;
        do {
          _memcpy(&stack0x00005300,pcVar13,0x298);
          lVar44 = *(long *)(pcVar13 + 0x298);
          lVar46 = *(long *)(pcVar13 + 0x2a0);
          lVar10 = *(long *)(pcVar13 + 0x2a8);
          __ZN16codex_app_server18request_processors7plugins29remote_plugin_summary_to_info17hc3b521c2662afb58E
                    (&stack0x00000140,&stack0x00005300);
          _memcpy(&stack0x000056d0,&stack0x00000140,0x310);
          _memcpy(pcVar27,&stack0x000056d0,0x310);
          *(long *)(pcVar27 + 0x310) = lVar44;
          *(long *)(pcVar27 + 0x318) = lVar46;
          *(long *)(pcVar27 + 800) = lVar10;
          pcVar9 = pcVar9 + 1;
          pcVar27 = pcVar27 + 0x328;
          pcVar13 = pcVar13 + 0x2b0;
        } while (pcVar13 != pcVar34);
      }
      if (pcVar37 != (code *)0x0) {
        _free(in_stack_00000070);
      }
      if (*(long *)(unaff_x20 + 0x25f8) != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x2600));
      }
      if (*(long *)(unaff_x20 + 0x2560) != -0x7ffffffffffffffd) {
        FUN_100e0609c(unaff_x20 + 0x2560);
      }
      FUN_100de93d0(unaff_x20 + 0x18);
      *in_stack_00000068 = 1;
      in_stack_00005300 = (code *)0x8000000000000000;
      in_stack_00005308 = pcVar39;
    }
    else {
      _iStack0000000000000140 = pcVar43;
      in_stack_00000148 = pcVar37;
      in_stack_00000150 = in_stack_00000070;
      in_stack_00000158 = pcVar39;
      in_stack_00000160 = pcVar13;
      in_stack_00000168 = pcVar9;
      _sStack0000000000000170 = pcVar34;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00005300,s___108add0c1,&stack0x000056d0);
      pcVar9 = _iStack0000000000000140;
      if (-1 < (long)_iStack0000000000000140) {
        pcVar9 = (code *)0x4;
      }
      pcVar34 = (code *)0xffffffffffff80a8;
      if (((1L << ((ulong)pcVar9 & 0x3f) & 0xeceecU) != 0) ||
         (((1L << ((ulong)pcVar9 & 0x3f) & 0x13103U) == 0 && (sStack0000000000000170 != 0x194)))) {
        pcVar34 = (code *)0xffffffffffff80a5;
      }
      FUN_101960064(&stack0x00000140);
      if (*(long *)(unaff_x20 + 0x25f8) != 0) {
        _free(*(undefined8 *)(unaff_x20 + 0x2600));
      }
      if (*(long *)(unaff_x20 + 0x2560) != -0x7ffffffffffffffd) {
        FUN_100e0609c(unaff_x20 + 0x2560);
      }
      FUN_100de93d0(unaff_x20 + 0x18);
      pcVar9 = (code *)0x8000000000000005;
      *in_stack_00000068 = 1;
      if (in_stack_00005300 == (code *)0x8000000000000001) goto LAB_10095cb88;
    }
    FUN_100d3a48c(in_stack_00000050);
    if (in_stack_00005300 == (code *)0x8000000000000000) {
      uVar11 = 0x8000000000000027;
      pcVar27 = pcVar9;
      in_stack_00005300 = in_stack_00005308;
      in_stack_00005308 = in_stack_00005310;
    }
    else {
      uVar11 = 0x8000000000000070;
      pcVar27 = in_stack_00005310;
      in_stack_00000100 = in_stack_00004cd0;
      in_stack_00000108 = in_stack_00004cd8;
      in_stack_00000110 = in_stack_00004ce0;
      in_stack_00000118 = in_stack_00004ce8;
      in_stack_00000120 = in_stack_00004cf0;
      in_stack_00000128 = in_stack_00004cf8;
      in_stack_00000130 = in_stack_00004d00;
      in_stack_00000138 = in_stack_00004d08;
    }
    in_stack_00000060[6] = in_stack_00000108;
    in_stack_00000060[5] = in_stack_00000100;
    in_stack_00000060[8] = in_stack_00000118;
    in_stack_00000060[7] = in_stack_00000110;
    in_stack_00000060[10] = in_stack_00000128;
    in_stack_00000060[9] = in_stack_00000120;
    *in_stack_00000060 = uVar11;
    in_stack_00000060[1] = in_stack_00005300;
    in_stack_00000060[2] = in_stack_00005308;
    in_stack_00000060[3] = pcVar27;
    in_stack_00000060[4] = pcVar9;
    in_stack_00000060[0xc] = in_stack_00000138;
    in_stack_00000060[0xb] = in_stack_00000130;
    uVar17 = 1;
    in_stack_00000060[0xd] = pcVar34;
  }
  in_stack_00000078[0xeb0] = uVar17;
  return;
}

