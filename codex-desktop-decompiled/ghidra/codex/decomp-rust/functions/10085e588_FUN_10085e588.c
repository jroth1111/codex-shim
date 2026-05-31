
/* WARNING: Removing unreachable block (ram,0x0001008600fc) */
/* WARNING: Removing unreachable block (ram,0x00010086012c) */
/* WARNING: Removing unreachable block (ram,0x000100860150) */
/* WARNING: Removing unreachable block (ram,0x000100860154) */
/* WARNING: Removing unreachable block (ram,0x0001008602c0) */
/* WARNING: Removing unreachable block (ram,0x0001008602f0) */
/* WARNING: Removing unreachable block (ram,0x000100860314) */
/* WARNING: Removing unreachable block (ram,0x000100860318) */
/* WARNING: Removing unreachable block (ram,0x000100860324) */
/* WARNING: Removing unreachable block (ram,0x000100860338) */
/* WARNING: Removing unreachable block (ram,0x000100860344) */
/* WARNING: Removing unreachable block (ram,0x000100860354) */
/* WARNING: Removing unreachable block (ram,0x000100860368) */
/* WARNING: Removing unreachable block (ram,0x000100860374) */
/* WARNING: Removing unreachable block (ram,0x00010086037c) */
/* WARNING: Removing unreachable block (ram,0x000100860384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1  [16] FUN_10085e588(void)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  ulong *puVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  bool bVar20;
  long *plVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  long unaff_x19;
  long lVar25;
  code *unaff_x23;
  ulong uVar26;
  long lVar27;
  undefined1 *puVar28;
  long *plVar29;
  undefined8 unaff_x27;
  undefined1 *unaff_x28;
  undefined1 auVar30 [16];
  long lStack0000000000000050;
  undefined1 *in_stack_00000078;
  code *in_stack_00000080;
  code *in_stack_00000088;
  undefined1 *in_stack_00000090;
  undefined *in_stack_00000098;
  undefined1 *in_stack_000000a0;
  code *in_stack_000000a8;
  long in_stack_000000b0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  long in_stack_00000168;
  code *in_stack_00000480;
  code *pcVar31;
  code *in_stack_00000488;
  code *pcVar32;
  code *in_stack_00000490;
  code *pcVar33;
  code *in_stack_00000498;
  undefined1 *in_stack_000004a0;
  undefined *in_stack_000004a8;
  undefined4 in_stack_000004b0;
  undefined4 in_stack_000004b4;
  undefined4 in_stack_000004b8;
  undefined4 in_stack_000004bc;
  undefined4 in_stack_000004c0;
  undefined4 in_stack_000004c4;
  undefined4 in_stack_000004c8;
  undefined4 in_stack_000004cc;
  int in_stack_000004d0;
  undefined4 in_stack_000004d4;
  int in_stack_000004d8;
  undefined4 in_stack_000004dc;
  undefined4 in_stack_000004e0;
  undefined4 in_stack_000004e4;
  undefined4 in_stack_000004e8;
  undefined4 in_stack_000004ec;
  undefined4 in_stack_000004f0;
  undefined4 in_stack_000004f4;
  undefined4 in_stack_000004f8;
  undefined4 in_stack_000004fc;
  undefined4 in_stack_00000500;
  undefined4 in_stack_00000504;
  undefined4 in_stack_00000588;
  undefined4 in_stack_0000058c;
  undefined8 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008e8;
  undefined8 in_stack_000008f0;
  undefined8 in_stack_000008f8;
  undefined8 in_stack_00000900;
  undefined8 in_stack_00000908;
  undefined8 in_stack_00000910;
  undefined8 in_stack_00000918;
  undefined8 in_stack_00000920;
  undefined8 in_stack_00000928;
  undefined8 in_stack_00000930;
  undefined8 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000948;
  undefined8 in_stack_00000950;
  undefined8 in_stack_00000958;
  undefined8 in_stack_00000960;
  undefined8 in_stack_00000968;
  undefined8 in_stack_00000970;
  undefined8 in_stack_00000978;
  undefined8 in_stack_00000980;
  uint7 in_stack_00000989;
  code *pcVar34;
  undefined8 in_stack_00000b90;
  code *pcVar35;
  undefined8 in_stack_00000b98;
  code *in_stack_00000ba0;
  code *in_stack_00000db0;
  ulong in_stack_00000db8;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000b90,s_Server_returned_error__108ac77c8,&stack0x00000480);
  puVar11 = (undefined8 *)_malloc(0x18);
  if (puVar11 == (undefined8 *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    goto LAB_100861774;
  }
  *puVar11 = in_stack_00000b90;
  puVar11[1] = in_stack_00000b98;
  puVar11[2] = in_stack_00000ba0;
  pcVar12 = (code *)func_0x000106029c30(0x28,puVar11,&UNK_10b209118);
  FUN_100e0d524(&stack0x00000080);
  if (*(long *)(unaff_x19 + 0xb0) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0xb8));
  }
  *(undefined1 *)(unaff_x19 + 0xd8) = 1;
  if (pcVar12 == (code *)0x0) {
    lVar4 = *(long *)(unaff_x19 + 0x88);
    pcVar12 = *(code **)(unaff_x19 + 0x90);
    in_stack_000008a8 = *(undefined8 *)(unaff_x19 + 0xa0);
    in_stack_000008a0 = *(undefined8 *)(unaff_x19 + 0x98);
    *(undefined1 *)(unaff_x19 + 0xe0) = 1;
    if (lVar4 != -0x7fffffffffffffff) goto LAB_10085d140;
    *in_stack_00000078 = 3;
    bVar20 = true;
    goto LAB_100860398;
  }
  lVar4 = **(long **)(unaff_x19 + 0xa0);
  **(long **)(unaff_x19 + 0xa0) = lVar4 + -1;
  LORelease();
  if (lVar4 == 1) {
    DataMemoryBarrier(2,1);
    func_0x000105c30fe4();
  }
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x90));
  }
  *unaff_x28 = 1;
  lVar4 = -0x8000000000000000;
LAB_10085d140:
  FUN_100cb9a84();
  if (lVar4 != -0x8000000000000000) {
    *(long *)(unaff_x19 + 0x40) = lVar4;
    *(code **)(unaff_x19 + 0x48) = pcVar12;
    *(undefined8 *)(unaff_x19 + 0x58) = in_stack_000008a8;
    *(undefined8 *)(unaff_x19 + 0x50) = in_stack_000008a0;
    *(long **)(unaff_x19 + 0x98) = (long *)(unaff_x19 + 0x40);
    puVar28 = (undefined1 *)(unaff_x19 + 0xa1);
    *puVar28 = 0;
    *(undefined1 *)(unaff_x19 + 0xa0) = 0;
    lVar4 = *(long *)(unaff_x19 + 0x50);
    do {
      if (lVar4 == 0) break;
      lVar4 = *(long *)(unaff_x19 + 0x48) + lVar4;
      pbVar23 = (byte *)(lVar4 + -1);
      uVar22 = (uint)(char)*pbVar23;
      if ((int)uVar22 < 0) {
        pbVar23 = (byte *)(lVar4 + -2);
        bVar2 = *pbVar23;
        if ((char)bVar2 < -0x40) {
          pbVar23 = (byte *)(lVar4 + -3);
          bVar3 = *pbVar23;
          if ((char)bVar3 < -0x40) {
            pbVar23 = (byte *)(lVar4 + -4);
            uVar24 = bVar3 & 0x3f | (*pbVar23 & 7) << 6;
          }
          else {
            uVar24 = (int)(char)bVar3 & 0xf;
          }
          uVar24 = bVar2 & 0x3f | uVar24 << 6;
        }
        else {
          uVar24 = (int)(char)bVar2 & 0x1f;
        }
        uVar22 = uVar22 & 0x3f | uVar24 << 6;
      }
      lVar4 = (long)pbVar23 - *(long *)(unaff_x19 + 0x48);
    } while (uVar22 == 0x2f);
    pcVar35 = (code *)&DAT_100c7b3a0;
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x00000480,s__models_108ac77be,&stack0x00000b90);
    *(code **)(unaff_x19 + 0x88) = in_stack_00000488;
    *(undefined8 *)(unaff_x19 + 0x80) = in_stack_00000480;
    *(code **)(unaff_x19 + 0x90) = in_stack_00000490;
    FUN_1011d51fc(&stack0x00000480,*(undefined8 *)(unaff_x19 + 0x58),&UNK_108ca1660,
                  *(undefined8 *)(unaff_x19 + 0x88),*(undefined8 *)(unaff_x19 + 0x90));
    if (in_stack_00000480 == (code *)0x2) {
      uVar26 = 1;
      lVar4 = *(long *)CONCAT44(in_stack_0000058c,in_stack_00000588);
      *(long *)CONCAT44(in_stack_0000058c,in_stack_00000588) = lVar4 + -1;
      LORelease();
      unaff_x23 = in_stack_00000488;
    }
    else {
      plVar29 = (long *)CONCAT44(in_stack_0000058c,in_stack_00000588);
      auVar30 = FUN_105c4eee0(plVar29,&stack0x00000480);
      uVar26 = auVar30._0_8_;
      lVar4 = *plVar29;
      *plVar29 = lVar4 + -1;
      LORelease();
      unaff_x23 = auVar30._8_8_;
    }
    if (lVar4 == 1) {
      DataMemoryBarrier(2,1);
      func_0x000105c30fe4(&stack0x00000588);
    }
    *(ulong *)(unaff_x19 + 0xa8) = uVar26;
    *(code **)(unaff_x19 + 0xb0) = unaff_x23;
    if ((uVar26 & 1) != 0) {
      *(undefined8 *)(unaff_x19 + 0xb0) = 0;
      if (unaff_x23 == (code *)0x0) {
        FUN_107c05cac(&UNK_109b89f1c,0x23,&UNK_10b43e3b0);
        goto LAB_100861774;
      }
      uVar18 = 0;
      uVar8 = 1;
      pcVar12 = (code *)0x3;
LAB_10085d3f4:
      in_stack_000000c8 = CONCAT44(in_stack_000004dc,in_stack_000004d8);
      in_stack_000000c0 = CONCAT44(in_stack_000004d4,in_stack_000004d0);
      in_stack_000000d8 = CONCAT44(in_stack_000004ec,in_stack_000004e8);
      in_stack_000000d0 = CONCAT44(in_stack_000004e4,in_stack_000004e0);
      in_stack_000000e8 = CONCAT44(in_stack_000004fc,in_stack_000004f8);
      in_stack_000000e0 = CONCAT44(in_stack_000004f4,in_stack_000004f0);
      in_stack_000000f0 = CONCAT44(in_stack_00000504,in_stack_00000500);
      in_stack_000000a8 = (code *)CONCAT44(in_stack_000004bc,in_stack_000004b8);
      in_stack_000000a0 = (undefined1 *)CONCAT44(in_stack_000004b4,in_stack_000004b0);
      in_stack_000000b8 = CONCAT44(in_stack_000004cc,in_stack_000004c8);
      in_stack_000000b0 = CONCAT44(in_stack_000004c4,in_stack_000004c0);
      in_stack_00000080 = in_stack_00000490;
      in_stack_00000088 = in_stack_00000498;
      in_stack_00000090 = in_stack_000004a0;
      in_stack_00000098 = in_stack_000004a8;
      FUN_100e03d7c(uVar8,uVar18);
      if (pcVar12 == (code *)0x3) {
        pcVar35 = 
        __ZN60__LT_reqwest__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h1453dc0f9d6c5a37E;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (&stack0x00000480,s_Request_failed__108ac77ab,&stack0x00000b90);
        puVar11 = (undefined8 *)_malloc(0x18);
        if (puVar11 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_100861774;
        }
        *puVar11 = in_stack_00000480;
        puVar11[1] = in_stack_00000488;
        puVar11[2] = in_stack_00000490;
        puVar9 = (undefined8 *)_malloc(0x18);
        if (puVar9 == (undefined8 *)0x0) {
          __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
          goto LAB_100861774;
        }
        *puVar9 = puVar11;
        puVar9[1] = &UNK_10b209118;
        *(undefined1 *)(puVar9 + 2) = 0x28;
        FUN_100de20f8(unaff_x23);
        pcVar10 = (code *)((long)puVar9 + 1);
LAB_10085d4b8:
        _free(unaff_x23);
        pcVar34 = (code *)&stack0x00000990;
      }
      else {
        *(undefined8 *)(unaff_x19 + 0x100) = in_stack_000000c8;
        *(long *)(unaff_x19 + 0xf8) = in_stack_000000c0;
        *(code **)(unaff_x19 + 0xc0) = in_stack_00000088;
        *(code **)(unaff_x19 + 0xb8) = in_stack_00000080;
        *(undefined **)(unaff_x19 + 0xd0) = in_stack_00000098;
        *(undefined1 **)(unaff_x19 + 200) = in_stack_00000090;
        *(code **)(unaff_x19 + 0xe0) = in_stack_000000a8;
        *(undefined1 **)(unaff_x19 + 0xd8) = in_stack_000000a0;
        *(undefined1 *)(unaff_x19 + 0xa0) = 1;
        *(code **)(unaff_x19 + 0xa8) = pcVar12;
        *(code **)(unaff_x19 + 0xb0) = unaff_x23;
        *(undefined8 *)(unaff_x19 + 0x128) = in_stack_000000f0;
        *(long *)(unaff_x19 + 0xf0) = in_stack_000000b8;
        *(long *)(unaff_x19 + 0xe8) = in_stack_000000b0;
        *(undefined8 *)(unaff_x19 + 0x110) = in_stack_000000d8;
        *(undefined8 *)(unaff_x19 + 0x108) = in_stack_000000d0;
        *(undefined8 *)(unaff_x19 + 0x120) = in_stack_000000e8;
        *(undefined8 *)(unaff_x19 + 0x118) = in_stack_000000e0;
        pcVar31 = in_stack_00000480;
        pcVar32 = in_stack_00000488;
        pcVar33 = in_stack_00000490;
        if (99 < *(ushort *)(unaff_x19 + 0x110) - 200) {
          pcVar34 = (code *)&stack0x00000990;
          pcVar35 = (code *)&
                            __ZN63__LT_http__status__StatusCode_u20_as_u20_core__fmt__Display_GT_3fmt17he0383041cfc0321eE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000480,s_Failed_to_fetch_models__108ac77e5,&stack0x00000b90);
          puVar11 = (undefined8 *)_malloc(0x18);
          if (puVar11 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_100861774;
          }
          *puVar11 = in_stack_00000480;
          puVar11[1] = in_stack_00000488;
          puVar11[2] = in_stack_00000490;
          pcVar10 = (code *)func_0x000106029c30(0x28,puVar11,&UNK_10b209118);
          pcVar12 = (code *)0x8000000000000000;
          unaff_x23 = in_stack_00000488;
          goto LAB_10085d8fc;
        }
        *(undefined1 *)(unaff_x19 + 0xa0) = 0;
        *(undefined8 *)(unaff_x19 + 0x198) = *(undefined8 *)(unaff_x19 + 0x110);
        *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x19 + 0x108);
        *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x19 + 0x120);
        *(undefined8 *)(unaff_x19 + 0x1a0) = *(undefined8 *)(unaff_x19 + 0x118);
        *(undefined8 *)(unaff_x19 + 0x1b0) = *(undefined8 *)(unaff_x19 + 0x128);
        *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0xd0);
        *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 200);
        *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0xe0);
        *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0xd8);
        *(undefined8 *)(unaff_x19 + 0x178) = *(undefined8 *)(unaff_x19 + 0xf0);
        *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x19 + 0xe8);
        *(undefined8 *)(unaff_x19 + 0x188) = *(undefined8 *)(unaff_x19 + 0x100);
        *(undefined8 *)(unaff_x19 + 0x180) = *(undefined8 *)(unaff_x19 + 0xf8);
        *(undefined8 *)(unaff_x19 + 0x138) = *(undefined8 *)(unaff_x19 + 0xb0);
        *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x19 + 0xa8);
        *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0xc0);
        *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x19 + 0xb8);
        *(undefined1 *)(unaff_x19 + 0x360) = 0;
        FUN_1011d682c(&stack0x00000480,unaff_x19 + 0x130);
        unaff_x23 = in_stack_00000480;
        if (in_stack_00000480 == (code *)0x8000000000000006) {
          uVar19 = 4;
          goto LAB_10085d584;
        }
        FUN_100cfddd4(unaff_x19 + 0x130);
        if (in_stack_00000480 == (code *)0x8000000000000005) {
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000480,s_JSON_parse_error__108ac7800,&stack0x00000990);
          pcVar10 = (code *)__ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x00000480);
          FUN_100de20f8(in_stack_00000488);
          unaff_x23 = in_stack_00000488;
          in_stack_00000db0 = in_stack_00000488;
          goto LAB_10085d4b8;
        }
        plVar13 = (long *)__ZN55__LT_str_u20_as_u20_serde_json__value__index__Index_GT_10index_into17he3efbc695c30971dE
                                    (&UNK_108c61024,4,&stack0x00000b90);
        plVar29 = (long *)&
                          __ZN10serde_json5value5index87__LT_impl_u20_core__ops__index__Index_LT_I_GT__u20_for_u20_serde_json__value__Value_GT_5index4NULL17hc40f032799b3e535E
        ;
        if (plVar13 != (long *)0x0) {
          plVar29 = plVar13;
        }
        pcVar34 = in_stack_00000480;
        pcVar35 = in_stack_00000488;
        in_stack_00000ba0 = in_stack_00000490;
        if (*plVar29 == -0x7ffffffffffffffc) {
          lVar4 = plVar29[3];
          if (lVar4 == 0) {
LAB_10085eeb0:
            pcVar12 = (code *)0x0;
            unaff_x23 = (code *)0x0;
            pcVar10 = (code *)0x8;
          }
          else {
            plVar13 = (long *)plVar29[2];
            lVar25 = lVar4 * 0x48;
            pcVar10 = (code *)0x8;
            plVar29 = plVar13;
            do {
              if (*plVar29 < 0) {
LAB_10085e728:
                plVar21 = (long *)0x0;
              }
              else {
                auVar30 = FUN_105dc9750(plVar29,&UNK_108ca26b0,2);
                uVar26 = auVar30._8_8_;
                if ((auVar30._0_8_ & 1) == 0) goto LAB_10085e728;
                if ((ulong)plVar29[2] <= uVar26) {
                  FUN_107c05cd0(uVar26,plVar29[2],&UNK_10b46a548);
                  goto LAB_100861774;
                }
                plVar21 = (long *)(plVar29[1] + uVar26 * 0x68 + 0x18);
              }
              plVar17 = (long *)&
                                __ZN10serde_json5value5index87__LT_impl_u20_core__ops__index__Index_LT_I_GT__u20_for_u20_serde_json__value__Value_GT_5index4NULL17hc40f032799b3e535E
              ;
              if (plVar21 != (long *)0x0) {
                plVar17 = plVar21;
              }
              if (*plVar17 == -0x7ffffffffffffffd) {
                lVar5 = plVar17[3];
                if (lVar5 == 0) {
                  lVar14 = 1;
                }
                else {
                  lVar27 = plVar17[2];
                  lVar14 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar5,1);
                  if (lVar14 == 0) {
                    func_0x0001087c9084(1,lVar5);
                    goto LAB_100861774;
                  }
                  _memcpy(lVar14,lVar27,lVar5);
                  if (lVar5 == -0x8000000000000000) goto LAB_10085eeb0;
                }
                pcVar10 = (code *)_malloc(0x60);
                if (pcVar10 == (code *)0x0) {
                  func_0x0001087c9084(8,0x60);
                  goto LAB_100861774;
                }
                *(long *)pcVar10 = lVar5;
                *(long *)(pcVar10 + 8) = lVar14;
                *(long *)(pcVar10 + 0x10) = lVar5;
                pcVar12 = (code *)0x4;
                unaff_x23 = (code *)0x1;
                pcVar33 = (code *)0x1;
                pcVar31 = pcVar12;
                pcVar32 = pcVar10;
                if (lVar25 == 0x48) goto LAB_10085f3e0;
                plVar29 = plVar29 + 9;
                unaff_x23 = (code *)0x1;
                goto LAB_10085f300;
              }
              lVar25 = lVar25 + -0x48;
              plVar29 = plVar29 + 9;
            } while (lVar25 != 0);
            pcVar12 = (code *)0x0;
            unaff_x23 = (code *)0x0;
          }
          goto LAB_10085f3e0;
        }
        pcVar10 = (code *)__ZN3std2io5error5Error3new17h949302c01fe11b24E(0x15,&UNK_108cad83d,0x1b);
        FUN_100de6690(&stack0x00000b90);
      }
      *(undefined1 *)(unaff_x19 + 0xa0) = 0;
      pcVar12 = (code *)0x8000000000000000;
      if (*(long *)(unaff_x19 + 0x80) != 0) goto LAB_10085d918;
      *(undefined1 *)(unaff_x19 + 0xa1) = 1;
      *(undefined8 *)(unaff_x19 + 0x60) = 0x8000000000000000;
      *(code **)(unaff_x19 + 0x68) = pcVar10;
      goto LAB_10085d9cc;
    }
    __ZN92__LT_reqwest__async_impl__client__PendingRequest_u20_as_u20_core__future__future__Future_GT_4poll17haa7277af0321eec2E
              (&stack0x00000480,unaff_x23);
    pcVar12 = in_stack_00000480;
    if (in_stack_00000480 != (code *)0x4) {
      uVar8 = *(undefined8 *)(unaff_x19 + 0xa8);
      uVar18 = *(undefined8 *)(unaff_x19 + 0xb0);
      unaff_x23 = in_stack_00000488;
      goto LAB_10085d3f4;
    }
    uVar19 = 3;
LAB_10085d584:
    *puVar28 = uVar19;
    goto LAB_10085d934;
  }
LAB_100860388:
  bVar20 = false;
  *in_stack_00000078 = 1;
  goto LAB_100860398;
LAB_10085f300:
  do {
    plVar17 = (long *)__ZN55__LT_str_u20_as_u20_serde_json__value__index__Index_GT_10index_into17he3efbc695c30971dE
                                (&UNK_108ca26b0,2,plVar29);
    plVar21 = (long *)&
                      __ZN10serde_json5value5index87__LT_impl_u20_core__ops__index__Index_LT_I_GT__u20_for_u20_serde_json__value__Value_GT_5index4NULL17hc40f032799b3e535E
    ;
    if (plVar17 != (long *)0x0) {
      plVar21 = plVar17;
    }
    if (*plVar21 == -0x7ffffffffffffffd) {
      lVar25 = plVar21[3];
      if (lVar25 == 0) {
        lStack0000000000000050 = 1;
      }
      else {
        lVar5 = plVar21[2];
        lStack0000000000000050 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar25,1);
        if (lStack0000000000000050 == 0) {
          func_0x0001087c9084(1,lVar25);
          goto LAB_100861774;
        }
        _memcpy(lStack0000000000000050,lVar5,lVar25);
        if (lVar25 == -0x8000000000000000) break;
      }
      if (unaff_x23 == (code *)0x4) {
        FUN_108855060(&stack0x00000480,4,1,8,0x18);
      }
      pcVar33 = pcVar10 + (long)unaff_x23 * 0x18;
      *(long *)pcVar33 = lVar25;
      *(long *)(pcVar33 + 8) = lStack0000000000000050;
      *(long *)(pcVar33 + 0x10) = lVar25;
      unaff_x23 = unaff_x23 + 1;
      pcVar33 = unaff_x23;
    }
    plVar29 = plVar29 + 9;
  } while (plVar29 != plVar13 + lVar4 * 9);
LAB_10085f3e0:
  FUN_100de6690(&stack0x00000b90);
LAB_10085d8fc:
  if ((*(byte *)(unaff_x19 + 0xa0) & 1) != 0) {
    FUN_100e0d524(unaff_x19 + 0xa8);
  }
  *(undefined1 *)(unaff_x19 + 0xa0) = 0;
  in_stack_00000480 = pcVar31;
  in_stack_00000488 = pcVar32;
  in_stack_00000490 = pcVar33;
  if (*(long *)(unaff_x19 + 0x80) != 0) {
LAB_10085d918:
    _free(*(undefined8 *)(unaff_x19 + 0x88));
    pcVar31 = in_stack_00000480;
    pcVar32 = in_stack_00000488;
  }
  *puVar28 = 1;
  in_stack_00000480 = pcVar31;
  in_stack_00000488 = pcVar32;
  if (pcVar12 != (code *)0x8000000000000001) {
    *(undefined8 *)(unaff_x19 + 0x60) = pcVar12;
    *(code **)(unaff_x19 + 0x68) = pcVar10;
    *(code **)(unaff_x19 + 0x70) = unaff_x23;
    if (pcVar12 != (code *)0x8000000000000000) {
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x70);
      *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x68);
      *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x60);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
      lVar4 = *(long *)(unaff_x19 + 0x38);
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        lVar25 = *(long *)(unaff_x19 + 0x90) * 0x18;
        plVar29 = (long *)(*(long *)(unaff_x19 + 0x88) + 0x10);
        do {
          if ((*plVar29 == lVar4) && (iVar7 = _memcmp(plVar29[-1],uVar8,lVar4), iVar7 == 0))
          goto LAB_10085f0c8;
          plVar29 = plVar29 + 3;
          lVar25 = lVar25 + -0x18;
          unaff_x23 = (code *)0x0;
        } while (lVar25 != 0);
      }
      *(long *)(unaff_x19 + 0x98) = unaff_x19 + 0x40;
      *(undefined8 *)(unaff_x19 + 0xa0) = uVar8;
      *(long *)(unaff_x19 + 0xa8) = lVar4;
      *(undefined1 *)(unaff_x19 + 0xb0) = 0;
      __ZN14codex_lmstudio6client14LMStudioClient8find_lms17h3772315219558536E(&stack0x00000480);
      if (pcVar31 == (code *)0x8000000000000000) {
        *(undefined1 *)(unaff_x19 + 0xb0) = 1;
        pcVar12 = pcVar32;
        if (pcVar32 == (code *)0x0) {
LAB_10085f0c8:
          pcVar12 = *(code **)(unaff_x19 + 0x88);
          lVar4 = *(long *)(unaff_x19 + 0x90);
          if (lVar4 != 0) {
            pcVar35 = pcVar12 + 8;
            do {
              if (*(long *)(pcVar35 + -8) != 0) {
                _free(*(undefined8 *)pcVar35);
              }
              pcVar35 = pcVar35 + 0x18;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
          }
          if (*(long *)(unaff_x19 + 0x80) != 0) goto LAB_10085f104;
          goto LAB_10085f108;
        }
      }
      else {
        in_stack_00000480 = (code *)&stack0x00000cf0;
        in_stack_00000488 = (code *)&DAT_100c7b3a0;
        __ZN3std2io5stdio7_eprint17heb74b67280cb307dE
                  (s_Downloading_model__108ac7815,&stack0x00000480);
        __ZN3std3sys7process4unix6common7Command3new17h3172692053ff4dc3E
                  (&stack0x00000480,pcVar32,in_stack_00000490);
        __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                  (&stack0x00000480,&UNK_108cad858,3);
        __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                  (&stack0x00000480,&UNK_108cad85b,5);
        __ZN3std3sys7process4unix6common7Command3arg17h0f76fc7c7ba03c31E
                  (&stack0x00000480,uVar8,lVar4);
        if (in_stack_000004d0 == 3) {
          _close(in_stack_000004d4);
        }
        if (in_stack_000004d8 == 3) {
          _close(in_stack_000004dc);
        }
        __ZN3std7process7Command6status17h906b62e017c47bb7E(&stack0x00000db0,&stack0x00000480);
        if ((int)in_stack_00000db0 == 1) {
          in_stack_00000080 = (code *)&stack0x00000990;
          in_stack_00000088 = (code *)&DAT_10112965c;
          in_stack_00000090 = &stack0x00000cf0;
          in_stack_00000098 = &DAT_100c7b3a0;
          in_stack_000000a0 = &stack0x00000ac0;
          in_stack_000000a8 =
               __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000b90,s_Failed_to_execute___get___yes____108ac787a,&stack0x00000080)
          ;
          puVar11 = (undefined8 *)_malloc(0x18);
          if (puVar11 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_100861774;
          }
          *puVar11 = pcVar34;
          puVar11[1] = pcVar35;
          puVar11[2] = in_stack_00000ba0;
          pcVar12 = (code *)func_0x000106029c30(0x28,puVar11,&UNK_10b209118);
          if ((in_stack_00000db8 & 3) == 1) {
            unaff_x23 = *(code **)(in_stack_00000db8 - 1);
            puVar11 = *(undefined8 **)(in_stack_00000db8 + 7);
            pcVar35 = (code *)*puVar11;
            if (pcVar35 != (code *)0x0) {
              (*pcVar35)(unaff_x23);
            }
            if (puVar11[1] != 0) {
              _free(unaff_x23);
            }
            _free((undefined8 *)(in_stack_00000db8 - 1));
          }
          FUN_100de2268(&stack0x00000480);
        }
        else {
          FUN_100de2268(&stack0x00000480);
          if ((int)((ulong)in_stack_00000db0 >> 0x20) == 0) {
            if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 3) &&
               (((bRam000000010b62d408 - 1 < 2 ||
                 ((bRam000000010b62d408 != 0 &&
                  (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                     (&
                                      __ZN14codex_lmstudio6client14LMStudioClient14download_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08d52b2b40495e97E
                                     ), cVar6 != '\0')))) &&
                (uVar26 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                    (
                                    ___ZN14codex_lmstudio6client14LMStudioClient14download_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08d52b2b40495e97E
                                    ), (uVar26 & 1) != 0)))) {
              in_stack_00000080 = (code *)&stack0x00000cf0;
              in_stack_00000088 = (code *)&DAT_100c7b3a0;
              FUN_100789fdc(&stack0x00000480);
            }
            else {
              uVar8 = 
              ___ZN14codex_lmstudio6client14LMStudioClient14download_model28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h08d52b2b40495e97E
              ;
              if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
                 (2 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
                puVar15 = puRam000000010b634c20;
                if (lRam000000010b66fd20 != 2) {
                  puVar15 = &UNK_10b3c24c8;
                }
                puVar1 = puRam000000010b634c18;
                if (lRam000000010b66fd20 != 2) {
                  puVar1 = &UNK_109adfc03;
                }
                iVar7 = (**(code **)(puVar15 + 0x18))(puVar1,&stack0x000008a0);
                if (iVar7 != 0) {
                  in_stack_00000080 = (code *)&stack0x00000cf0;
                  in_stack_00000088 = (code *)&DAT_100c7b3a0;
                  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                            (uVar8,puVar1,puVar15,&stack0x000008a0,&stack0x00000480);
                }
              }
            }
            if (pcVar31 != (code *)0x0) {
              _free(pcVar32);
            }
            *(undefined1 *)(unaff_x19 + 0xb0) = 1;
            goto LAB_10085f0c8;
          }
          in_stack_00000080 = (code *)&stack0x00000b90;
          in_stack_00000088 =
               (code *)&
                       __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17hc1020c4dffdb8fa5E
          ;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (&stack0x00000480,s__Model_download_failed_with_exit_108ac782d,&stack0x00000080)
          ;
          puVar11 = (undefined8 *)_malloc(0x18);
          if (puVar11 == (undefined8 *)0x0) {
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
            goto LAB_100861774;
          }
          *puVar11 = in_stack_00000480;
          puVar11[1] = &DAT_100c7b3a0;
          puVar11[2] = in_stack_00000490;
          pcVar12 = (code *)func_0x000106029c30(0x28,puVar11,&UNK_10b209118);
        }
        if (pcVar31 != (code *)0x0) {
          _free(pcVar32);
        }
        *(undefined1 *)(unaff_x19 + 0xb0) = 1;
      }
      lVar4 = *(long *)(unaff_x19 + 0x88);
      lVar25 = *(long *)(unaff_x19 + 0x90);
      if (lVar25 != 0) {
        unaff_x23 = (code *)(lVar4 + 8);
        do {
          if (*(long *)(unaff_x23 + -8) != 0) {
            _free(*(long *)unaff_x23);
          }
          unaff_x23 = unaff_x23 + 0x18;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      if (*(long *)(unaff_x19 + 0x80) != 0) {
        _free(lVar4);
      }
      lVar4 = **(long **)(unaff_x19 + 0x58);
      **(long **)(unaff_x19 + 0x58) = lVar4 + -1;
      LORelease();
      if (lVar4 == 1) {
        DataMemoryBarrier(2,1);
        func_0x000105c30fe4();
      }
      if (*(long *)(unaff_x19 + 0x40) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x48));
      }
      goto LAB_100860388;
    }
LAB_10085d9cc:
    if (((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
        ((bRam000000010b62d3c0 - 1 < 2 ||
         ((bRam000000010b62d3c0 != 0 &&
          (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                             (&
                              __ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h290d81332c1eb95eE
                             ), cVar6 != '\0')))))) &&
       (uVar26 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                           (
                           ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h290d81332c1eb95eE
                           ), (uVar26 & 1) != 0)) {
      in_stack_00000080 = (code *)&stack0x00000db0;
      in_stack_00000088 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      FUN_100788ebc(&stack0x00000480);
    }
    else {
      lVar4 = 
      ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h290d81332c1eb95eE
      ;
      if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
         (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
        pcVar12 = *(code **)(
                            ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h290d81332c1eb95eE
                            + 0x20);
        puVar28 = *(undefined1 **)
                   (
                   ___ZN14codex_lmstudio16ensure_oss_ready28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17h290d81332c1eb95eE
                   + 0x28);
        puVar15 = puRam000000010b634c20;
        if (lRam000000010b66fd20 != 2) {
          puVar15 = &UNK_10b3c24c8;
        }
        puVar1 = puRam000000010b634c18;
        if (lRam000000010b66fd20 != 2) {
          puVar1 = &UNK_109adfc03;
        }
        iVar7 = (**(code **)(puVar15 + 0x18))(puVar1,&stack0x00000d40);
        if (iVar7 != 0) {
          in_stack_00000080 = (code *)0x2;
          in_stack_00000088 = pcVar12;
          in_stack_00000090 = puVar28;
          __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                    (lVar4,puVar1,puVar15,&stack0x00000080,&stack0x00000480);
        }
      }
    }
    if (((ulong)pcVar10 & 3) == 1) {
      pcVar12 = pcVar10 + -1;
      uVar8 = *(undefined8 *)pcVar12;
      puVar11 = *(undefined8 **)(pcVar10 + 7);
      pcVar35 = (code *)*puVar11;
      if (pcVar35 != (code *)0x0) {
        (*pcVar35)(uVar8);
      }
      if (puVar11[1] != 0) {
        _free(uVar8);
      }
LAB_10085f104:
      _free(pcVar12);
    }
LAB_10085f108:
    pcVar12 = *(code **)(unaff_x19 + 0x58);
    lVar4 = *(long *)pcVar12;
    *(long *)pcVar12 = lVar4 + 1;
    if (lVar4 < 0) goto LAB_100861774;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
    puVar28 = *(undefined1 **)(unaff_x19 + 0x50);
    in_stack_00000080 = pcVar12;
    if (puVar28 == (undefined1 *)0x0) {
      puVar15 = (undefined *)0x1;
    }
    else {
      puVar15 = (undefined *)_malloc(puVar28);
      if (puVar15 == (undefined *)0x0) {
        func_0x0001087c9084(1,puVar28);
        goto LAB_100861774;
      }
    }
    _memcpy(puVar15,uVar8,puVar28);
    uVar8 = *(undefined8 *)(unaff_x19 + 0x30);
    lVar4 = *(long *)(unaff_x19 + 0x38);
    if (lVar4 == 0) {
      lVar25 = 1;
    }
    else {
      lVar25 = _malloc(lVar4);
      if (lVar25 == 0) {
        func_0x0001087c9084(1,lVar4);
        goto LAB_100861774;
      }
    }
    _memcpy(lVar25,uVar8,lVar4);
    do {
      lVar5 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
      bVar20 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
      ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar5;
    } while (bVar20);
    puVar16 = (ulong *)(*
                       ___ZN5tokio7runtime7context7CONTEXT29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h182128323827de43E
                       )();
    if ((char)puVar16[9] == '\x01') {
LAB_10085fe48:
      if (0x7ffffffffffffffe < *puVar16) {
        FUN_107c05c9c(&UNK_10b2435a0);
        goto LAB_100861774;
      }
      *puVar16 = *puVar16 + 1;
      in_stack_00000168 = (ulong)in_stack_00000989 << 8;
      in_stack_00000080 = (code *)&stack0x00000ac0;
      in_stack_00000088 = (code *)&stack0x00000d90;
      in_stack_00000090 = puVar28;
      in_stack_00000098 = puVar15;
      in_stack_000000a0 = puVar28;
      in_stack_000000a8 = pcVar12;
      in_stack_000000b0 = lVar4;
      in_stack_000000b8 = lVar25;
      in_stack_000000c0 = lVar4;
      in_stack_000000c8 = in_stack_000008e8;
      in_stack_000000d0 = in_stack_000008f0;
      in_stack_000000d8 = in_stack_000008f8;
      in_stack_000000e0 = in_stack_00000900;
      in_stack_000000e8 = in_stack_00000908;
      in_stack_000000f0 = in_stack_00000910;
      in_stack_000000f8 = in_stack_00000918;
      in_stack_00000100 = in_stack_00000920;
      in_stack_00000108 = in_stack_00000928;
      in_stack_00000110 = in_stack_00000930;
      in_stack_00000118 = in_stack_00000938;
      in_stack_00000120 = in_stack_00000940;
      in_stack_00000128 = in_stack_00000948;
      in_stack_00000130 = in_stack_00000950;
      in_stack_00000138 = in_stack_00000958;
      in_stack_00000140 = in_stack_00000960;
      in_stack_00000148 = in_stack_00000968;
      in_stack_00000150 = in_stack_00000970;
      in_stack_00000158 = in_stack_00000978;
      in_stack_00000160 = in_stack_00000980;
      if (puVar16[1] != 2) {
        if ((puVar16[1] & 1) == 0) {
          plVar29 = (long *)puVar16[2];
          lVar4 = *plVar29;
          *plVar29 = lVar4 + 1;
          if ((-1 < lVar4) &&
             ((plVar29 = (long *)plVar29[0x5e], plVar29 == (long *)0x0 ||
              (lVar4 = *plVar29, *plVar29 = lVar4 + 1, -1 < lVar4)))) {
            _posix_memalign(&stack0x00000cf0,0x80,0x180);
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x180);
          }
        }
        else {
          plVar29 = (long *)puVar16[2];
          lVar4 = *plVar29;
          *plVar29 = lVar4 + 1;
          if ((-1 < lVar4) &&
             ((plVar29 = (long *)plVar29[0x4a], plVar29 == (long *)0x0 ||
              (lVar4 = *plVar29, *plVar29 = lVar4 + 1, -1 < lVar4)))) {
            _posix_memalign(&stack0x00000cf0,0x80,0x180);
            __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(0x80,0x180);
          }
        }
        goto LAB_100861774;
      }
      FUN_100cc87e8(&stack0x00000090);
      uVar19 = 0;
      *puVar16 = *puVar16 - 1;
    }
    else {
      if ((char)puVar16[9] != '\x02') {
        __ZN3std3sys12thread_local11destructors4list8register17ha25af605773d94bcE
                  (puVar16,&DAT_100c35d48);
        *(undefined1 *)(puVar16 + 9) = 1;
        goto LAB_10085fe48;
      }
      FUN_100cc87e8(&stack0x000008b0);
      uVar19 = 1;
    }
    in_stack_00000080 = (code *)CONCAT71(in_stack_00000080._1_7_,uVar19);
    __ZN4core9panicking9panic_fmt17h6f8816b337451651E(s__108b1bd74,&stack0x00000480,&UNK_10b222150);
    goto LAB_100861774;
  }
LAB_10085d934:
  *in_stack_00000078 = 4;
  bVar20 = true;
LAB_100860398:
  if (bVar20) {
    *(undefined1 *)(unaff_x19 + 0x20) = 3;
    uVar8 = 1;
  }
  else {
    func_0x000100e4d670(unaff_x27);
    if (pcVar12 == (code *)0x0) {
      unaff_x23 = (code *)0x0;
    }
    else {
      in_stack_00000080 = (code *)&stack0x00000b90;
      in_stack_00000088 =
           __ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h548d231ec88e79ebE
      ;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (&stack0x00000480,s_OSS_setup_failed__108ac23ca,&stack0x00000080);
      puVar11 = (undefined8 *)_malloc(0x18);
      if (puVar11 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_100861774:
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100861778);
        (*pcVar12)();
      }
      *puVar11 = in_stack_00000480;
      puVar11[1] = in_stack_00000488;
      puVar11[2] = in_stack_00000490;
      puVar9 = (undefined8 *)_malloc(0x18);
      if (puVar9 == (undefined8 *)0x0) {
        __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
        goto LAB_100861774;
      }
      *puVar9 = puVar11;
      puVar9[1] = &UNK_10b209118;
      *(undefined1 *)(puVar9 + 2) = 0x28;
      if (((ulong)pcVar12 & 3) == 1) {
        uVar8 = *(undefined8 *)(pcVar12 + -1);
        puVar11 = *(undefined8 **)(pcVar12 + 7);
        pcVar35 = (code *)*puVar11;
        if (pcVar35 != (code *)0x0) {
          (*pcVar35)(uVar8);
        }
        if (puVar11[1] != 0) {
          _free(uVar8);
        }
        _free(pcVar12 + -1);
      }
      unaff_x23 = (code *)((long)puVar9 + 1);
    }
    uVar8 = 0;
    *(undefined1 *)(unaff_x19 + 0x20) = 1;
  }
  auVar30._8_8_ = unaff_x23;
  auVar30._0_8_ = uVar8;
  return auVar30;
}

