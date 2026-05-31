
/* WARNING: Removing unreachable block (ram,0x00010022364c) */
/* WARNING: Removing unreachable block (ram,0x000100223398) */
/* WARNING: Removing unreachable block (ram,0x000100223184) */
/* WARNING: Removing unreachable block (ram,0x0001002231bc) */
/* WARNING: Removing unreachable block (ram,0x00010022340c) */
/* WARNING: Removing unreachable block (ram,0x000100223688) */

void FUN_100222f38(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *unaff_x21;
  long lVar5;
  undefined *unaff_x22;
  long unaff_x23;
  long lVar6;
  long lVar7;
  long unaff_x27;
  long lVar8;
  undefined *unaff_x28;
  long unaff_x29;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *in_stack_00000058;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined *in_stack_00000068;
  long in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  long in_stack_000000f0;
  long in_stack_000000f8;
  long in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  long in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  long in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  long in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  long in_stack_00000160;
  long in_stack_00000168;
  long in_stack_00000170;
  uint in_stack_00000178;
  long in_stack_00000180;
  undefined1 uStack0000000000000188;
  undefined1 uStack0000000000000189;
  undefined6 uStack000000000000018a;
  undefined2 uStack0000000000000190;
  undefined6 uStack0000000000000192;
  undefined2 uStack0000000000000198;
  undefined6 uStack000000000000019a;
  undefined2 uStack00000000000001a0;
  undefined6 uStack00000000000001a2;
  undefined2 uStack00000000000001a8;
  undefined6 uStack00000000000001aa;
  undefined2 uStack00000000000001b0;
  undefined6 uStack00000000000001b2;
  undefined2 uStack00000000000001b8;
  undefined6 uStack00000000000001ba;
  undefined2 uStack00000000000001c0;
  undefined6 uStack00000000000001c2;
  undefined2 uStack00000000000001c8;
  undefined6 uStack00000000000001ca;
  undefined2 uStack00000000000001d0;
  undefined6 uStack00000000000001d2;
  undefined2 in_stack_000001d8;
  undefined2 in_stack_000001e0;
  undefined2 in_stack_000001e8;
  undefined2 in_stack_000001f0;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined2 in_stack_000005b8;
  undefined2 in_stack_000005c0;
  undefined2 in_stack_000005c8;
  undefined2 in_stack_000005d0;
  long in_stack_000006b8;
  undefined8 in_stack_000006c0;
  ulong in_stack_00000730;
  undefined *in_stack_00000738;
  undefined *in_stack_00000740;
  undefined *in_stack_00000748;
  long in_stack_00000750;
  undefined8 in_stack_00000758;
  long in_stack_00000760;
  byte in_stack_00000768;
  uint7 in_stack_00000769;
  
  do {
    puVar4 = unaff_x22;
    if ((in_stack_00000768 & 1) == 0) {
      if (in_stack_00000750 == 0) {
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x90,s__member__108aba6b4,&stack0x000003e0);
      }
      else {
        *(long *)(unaff_x29 + -0xb0) = in_stack_00000750;
        *(undefined8 *)(unaff_x29 + -0xa8) = in_stack_00000758;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x90,s_____108aba6c0,&stack0x000003e0);
        puVar4 = (undefined *)(unaff_x29 + -0xb0);
      }
    }
    else {
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x90,s___108aba6c8,&stack0x000003e0);
    }
    in_stack_00000760 = in_stack_00000760 + 1;
    FUN_100216644(&stack0x000003e0,&stack0x000006d0,unaff_x23);
    if (unaff_x21 != (undefined *)0x8000000000000002) {
      if ((in_stack_00000730 & 0x7fffffffffffffff) != 0) {
        _free(in_stack_00000738);
      }
      if (in_stack_000006b8 != 0) {
        _free(in_stack_000006c0);
      }
      goto LAB_100223934;
    }
    unaff_x23 = unaff_x23 + 0x18;
    unaff_x27 = unaff_x27 + -0x18;
  } while (unaff_x27 != 0);
  lVar5 = CONCAT71(in_stack_00000769,in_stack_00000768);
  __ZN16aws_smithy_query15QueryListWriter6finish17h313fff9157063243E(&stack0x000003e0);
  unaff_x21 = in_stack_00000738;
  unaff_x28 = in_stack_00000740;
  if (in_stack_000000b8 != -0x8000000000000000) {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c70718;
    unaff_x28 = (undefined *)0x6;
    __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
              (&stack0x000003e0,in_stack_000000c0,in_stack_000000c8);
    in_stack_00000748 = in_stack_00000068;
  }
  if ((in_stack_00000178 & 1) != 0) {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c7071e;
    unaff_x28 = (undefined *)0xf;
    __ZN16aws_smithy_query16QueryValueWriter6number17ha02e422c9cf88a10E
              (&stack0x000003e0,&stack0x00000730);
    in_stack_00000748 = in_stack_00000068;
  }
  if (in_stack_000000d0 != -0x8000000000000000) {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c72510;
    in_stack_00000760 = 1;
    if (in_stack_000000e0 != 0) {
      lVar5 = in_stack_000000e0 * 0x30;
      puVar2 = (undefined8 *)(in_stack_000000d8 + 0x28);
      do {
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x90,s__member__108aba6b4,&stack0x000003e0);
        in_stack_00000760 = in_stack_00000760 + 1;
        uVar10 = *(undefined8 *)(unaff_x29 + -0x88);
        uVar9 = *(ulong *)(unaff_x29 + -0x90);
        *(undefined **)(unaff_x29 + -0x90) = &UNK_108c70804;
        *(undefined8 *)(unaff_x29 + -0x88) = 3;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0xb0,s___108aba6c8,&stack0x000003e0);
        *(undefined **)(unaff_x29 + -0x98) = in_stack_00000068;
        __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
                  (unaff_x29 + -0xb0,puVar2[-4],puVar2[-3]);
        *(undefined **)(unaff_x29 + -0x70) = &UNK_108c70807;
        *(undefined8 *)(unaff_x29 + -0x68) = 5;
        __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                  (unaff_x29 + -0x90,s___108aba6c8,&stack0x000003e0);
        *(undefined **)(unaff_x29 + -0x78) = in_stack_00000068;
        __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
                  (unaff_x29 + -0x90,puVar2[-1],*puVar2);
        if ((uVar9 & 0x7fffffffffffffff) != 0) {
          _free(uVar10);
        }
        puVar2 = puVar2 + 6;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
    }
    unaff_x28 = (undefined *)0x4;
    lVar5 = (ulong)in_stack_00000769 << 8;
    in_stack_00000750 = 0;
    __ZN16aws_smithy_query15QueryListWriter6finish17h313fff9157063243E(&stack0x000003e0);
    in_stack_00000748 = in_stack_00000068;
  }
  if (in_stack_000000e8 != -0x8000000000000000) {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c7072d;
    unaff_x28 = (undefined *)0x11;
    in_stack_00000750 = 0;
    in_stack_00000760 = 1;
    lVar8 = in_stack_000000f0 + in_stack_000000f8 * 0x18;
    for (lVar5 = in_stack_000000f0; lVar5 != lVar8; lVar5 = lVar5 + 0x18) {
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                (unaff_x29 + -0x90,s__member__108aba6b4,&stack0x000003e0);
      in_stack_00000760 = in_stack_00000760 + 1;
      __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
                (&stack0x00000710,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    }
    lVar5 = (ulong)in_stack_00000769 << 8;
    __ZN16aws_smithy_query15QueryListWriter6finish17h313fff9157063243E(&stack0x000003e0);
    in_stack_00000748 = in_stack_00000068;
  }
  if (in_stack_00000100 != -0x8000000000000000) {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c7073e;
    unaff_x28 = (undefined *)0xa;
    __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
              (&stack0x000003e0,in_stack_00000108,in_stack_00000110);
    in_stack_00000748 = in_stack_00000068;
  }
  if (in_stack_00000118 != -0x8000000000000000) {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c70748;
    unaff_x28 = (undefined *)0xc;
    __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
              (&stack0x000003e0,in_stack_00000120,in_stack_00000128);
    in_stack_00000748 = in_stack_00000068;
  }
  if (in_stack_00000130 != -0x8000000000000000) {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c70754;
    unaff_x28 = (undefined *)0x9;
    __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
              (&stack0x000003e0,in_stack_00000138,in_stack_00000140);
    in_stack_00000748 = in_stack_00000068;
  }
  if (in_stack_00000148 != -0x8000000000000000) {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c705fb;
    unaff_x28 = (undefined *)0xe;
    __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
              (&stack0x000003e0,in_stack_00000150,in_stack_00000158);
    in_stack_00000748 = in_stack_00000068;
  }
  if (in_stack_00000160 == -0x8000000000000000) {
    __ZN100__LT_aws_smithy_types__body__SdkBody_u20_as_u20_core__convert__From_LT_alloc__string__String_GT__GT_4from17ha496c0af3f3542c5E
              (&stack0x000003e0,&stack0x00000730);
    puVar4 = in_stack_00000748;
  }
  else {
    in_stack_00000730 = 0x8000000000000000;
    unaff_x21 = &UNK_108c6e810;
    in_stack_00000760 = 1;
    if (in_stack_00000170 != 0) {
      lVar5 = in_stack_00000170 * 0x30;
      puVar2 = (undefined8 *)(in_stack_00000168 + 0x20);
      do {
        while( true ) {
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0x90,s__member__108aba6b4,&stack0x000003e0);
          in_stack_00000760 = in_stack_00000760 + 1;
          uVar10 = *(undefined8 *)(unaff_x29 + -0x88);
          uVar9 = *(ulong *)(unaff_x29 + -0x90);
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108c706d9;
          *(undefined8 *)(unaff_x29 + -0x88) = 0xb;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xf0,s___108aba6c8,&stack0x000003e0);
          *(undefined **)(unaff_x29 + -0xd8) = in_stack_00000068;
          lVar8 = puVar2[-4];
          if (lVar8 != -0x8000000000000000) {
            __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
                      (unaff_x29 + -0xf0,puVar2[-3],puVar2[-2]);
          }
          *(undefined **)(unaff_x29 + -0x90) = &UNK_108c6e800;
          *(undefined8 *)(unaff_x29 + -0x88) = 0x10;
          __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                    (unaff_x29 + -0xd0,s___108aba6c8,&stack0x000003e0);
          *(undefined **)(unaff_x29 + -0xb8) = in_stack_00000068;
          if (puVar2[-1] == -0x8000000000000000) {
            if ((*(ulong *)(unaff_x29 + -0xd0) & 0x7fffffffffffffff) != 0) {
              _free(*(undefined8 *)(unaff_x29 + -200));
            }
          }
          else {
            __ZN16aws_smithy_query16QueryValueWriter6string17hd03c64dc34cb609fE
                      (unaff_x29 + -0xd0,*puVar2,puVar2[1]);
          }
          if ((lVar8 == -0x8000000000000000) &&
             ((*(ulong *)(unaff_x29 + -0xf0) & 0x7fffffffffffffff) != 0)) {
            _free(*(undefined8 *)(unaff_x29 + -0xe8));
          }
          if ((uVar9 & 0x7fffffffffffffff) != 0) break;
          puVar2 = puVar2 + 6;
          lVar5 = lVar5 + -0x30;
          if (lVar5 == 0) goto LAB_100223818;
        }
        _free(uVar10);
        puVar2 = puVar2 + 6;
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
    }
LAB_100223818:
    unaff_x28 = (undefined *)0x10;
    lVar5 = (ulong)in_stack_00000769 << 8;
    in_stack_00000750 = 0;
    __ZN16aws_smithy_query15QueryListWriter6finish17h313fff9157063243E(&stack0x000003e0);
    __ZN100__LT_aws_smithy_types__body__SdkBody_u20_as_u20_core__convert__From_LT_alloc__string__String_GT__GT_4from17ha496c0af3f3542c5E
              (&stack0x000003e0,&stack0x00000730);
    puVar4 = in_stack_00000068;
  }
  if (in_stack_00000730 == 3) {
LAB_100223934:
    puVar2 = (undefined8 *)_malloc(0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = unaff_x21;
      puVar2[1] = unaff_x28;
      puVar2[2] = puVar4;
      in_stack_00000058[1] = puVar2;
      in_stack_00000058[2] = &UNK_10b1ef400;
      *in_stack_00000058 = 2;
      if (in_stack_00000180 != 3) {
        FUN_100248434(&stack0x00000180);
      }
      goto LAB_100223bf8;
    }
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
    goto LAB_100223d1c;
  }
  if (in_stack_00000730 == 0) {
    puVar3 = (undefined *)0x0;
    if (unaff_x21 != (undefined *)0x0) {
      puVar3 = puVar4;
    }
LAB_1002239b4:
    lVar8 = FUN_1055b41a0(puVar3,&stack0x000003e0,0x14);
    lVar7 = 0x14 - lVar8;
    if (lVar8 == 0x14) {
      lVar6 = 1;
    }
    else {
      lVar6 = _malloc(lVar7);
      if (lVar6 == 0) {
        FUN_107c03c64(1,lVar7);
        goto LAB_100223d1c;
      }
    }
    _memcpy(lVar6,&stack0x000003e0 + lVar8,lVar7);
    FUN_100216c84(&stack0x00000560,uStack0000000000000060,uStack0000000000000064,&stack0x000003e0,
                  &UNK_108c70810,lVar6,lVar7);
    uStack00000000000001a8 = (undefined2)in_stack_00000428;
    uStack00000000000001aa = (undefined6)((ulong)in_stack_00000428 >> 0x10);
    uStack00000000000001a0 = (undefined2)in_stack_00000420;
    uStack00000000000001a2 = (undefined6)((ulong)in_stack_00000420 >> 0x10);
    uStack00000000000001b8 = (undefined2)in_stack_00000438;
    uStack00000000000001ba = (undefined6)((ulong)in_stack_00000438 >> 0x10);
    uStack00000000000001b0 = (undefined2)in_stack_00000430;
    uStack00000000000001b2 = (undefined6)((ulong)in_stack_00000430 >> 0x10);
    uStack00000000000001c8 = (undefined2)in_stack_00000448;
    uStack00000000000001ca = (undefined6)((ulong)in_stack_00000448 >> 0x10);
    uStack00000000000001c0 = (undefined2)in_stack_00000440;
    uStack00000000000001c2 = (undefined6)((ulong)in_stack_00000440 >> 0x10);
    uStack00000000000001d0 = (undefined2)in_stack_00000450;
    uStack00000000000001d2 = (undefined6)((ulong)in_stack_00000450 >> 0x10);
    uStack0000000000000188 = (undefined1)in_stack_00000758;
    uStack0000000000000189 = (undefined1)((ulong)in_stack_00000758 >> 8);
    uStack000000000000018a = (undefined6)((ulong)in_stack_00000758 >> 0x10);
    uStack0000000000000198 = (undefined2)lVar5;
    uStack000000000000019a = (undefined6)((ulong)lVar5 >> 0x10);
    uStack0000000000000190 = (undefined2)in_stack_00000760;
    uStack0000000000000192 = (undefined6)((ulong)in_stack_00000760 >> 0x10);
    in_stack_00000180 = in_stack_00000750;
    in_stack_000001d8 = in_stack_000005b8;
    in_stack_000001e0 = in_stack_000005c0;
    in_stack_000001e8 = in_stack_000005c8;
    in_stack_000001f0 = in_stack_000005d0;
    if (lVar8 != 0x14) {
      _free(lVar6);
    }
  }
  else {
    if (in_stack_00000730 != 1) {
      puVar3 = (undefined *)0x0;
      goto LAB_1002239b4;
    }
    if (((ulong)unaff_x21 & 1) == 0) {
      (**(code **)(puVar4 + 0x30))(&stack0x000003e0,unaff_x28);
    }
    else {
      (**(code **)(puVar4 + 0x28))(&stack0x000003e0,unaff_x28);
    }
    puVar3 = unaff_x21;
    if (unaff_x28 == unaff_x21) goto LAB_1002239b4;
  }
  if (in_stack_00000180 == 3) {
    FUN_100248a54(&stack0x000003e0);
    FUN_107c05cb4(&UNK_108c7144c,0xd,&stack0x000003e0,&UNK_10b1f13d0,&UNK_10b1ef3b0);
  }
  else {
    FUN_1002226f8(&stack0x000003e0,&stack0x00000560);
    if (in_stack_00000730 != 2) {
      _memcpy(in_stack_00000058,&stack0x000003e0,0x178);
LAB_100223bf8:
      FUN_10024b0fc(&stack0x00000070);
      return;
    }
    FUN_107c05cb4(&UNK_108c71860,0x2b,&stack0x00000560,&UNK_10b1f1410,&UNK_10b1ef3c8);
  }
LAB_100223d1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100223d20);
  (*pcVar1)();
}

