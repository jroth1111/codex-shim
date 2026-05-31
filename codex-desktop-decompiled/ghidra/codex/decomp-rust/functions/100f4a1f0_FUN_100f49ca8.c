
/* WARNING: Removing unreachable block (ram,0x000100f49f7c) */
/* WARNING: Removing unreachable block (ram,0x000100f49fe8) */
/* WARNING: Removing unreachable block (ram,0x000100f4a1dc) */
/* WARNING: Removing unreachable block (ram,0x000100f49fec) */
/* WARNING: Removing unreachable block (ram,0x000100f4a01c) */
/* WARNING: Removing unreachable block (ram,0x000100f4a030) */
/* WARNING: Removing unreachable block (ram,0x000100f49ff4) */
/* WARNING: Removing unreachable block (ram,0x000100f4a008) */
/* WARNING: Removing unreachable block (ram,0x000100f4a040) */
/* WARNING: Removing unreachable block (ram,0x000100f4a05c) */
/* WARNING: Removing unreachable block (ram,0x000100f4a098) */
/* WARNING: Removing unreachable block (ram,0x000100f4a0b4) */
/* WARNING: Removing unreachable block (ram,0x000100f4a0c0) */
/* WARNING: Removing unreachable block (ram,0x000100f4a0cc) */
/* WARNING: Removing unreachable block (ram,0x000100f4a134) */
/* WARNING: Removing unreachable block (ram,0x000100f4a16c) */
/* WARNING: Removing unreachable block (ram,0x000100f4a0d4) */
/* WARNING: Removing unreachable block (ram,0x000100f4a0f4) */
/* WARNING: Removing unreachable block (ram,0x000100f4a100) */
/* WARNING: Removing unreachable block (ram,0x000100f4a108) */
/* WARNING: Removing unreachable block (ram,0x000100f4a110) */
/* WARNING: Removing unreachable block (ram,0x000100f4a118) */
/* WARNING: Removing unreachable block (ram,0x000100f4a130) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f49ca8(void)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 uVar10;
  long *plVar11;
  undefined8 *unaff_x19;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *unaff_x28;
  char in_wzr;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  char cStack0000000000000080;
  undefined *in_stack_00000088;
  undefined8 *in_stack_00000090;
  undefined *in_stack_00000098;
  undefined8 in_stack_000000a0;
  long *in_stack_000000a8;
  long *in_stack_000000b0;
  long *in_stack_000000b8;
  long in_stack_000000c0;
  undefined4 uStack00000000000000c8;
  undefined4 uStack00000000000000cc;
  undefined4 uStack00000000000000d0;
  undefined4 uStack00000000000000d4;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  undefined4 uStack00000000000000e0;
  undefined4 uStack00000000000000e4;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 uStack00000000000000f8;
  undefined4 uStack00000000000000fc;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long *in_stack_00000120;
  long *in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined4 uStack00000000000001c0;
  undefined4 uStack00000000000001c4;
  undefined4 uStack00000000000001c8;
  undefined4 uStack00000000000001cc;
  undefined4 uStack00000000000001d0;
  undefined4 uStack00000000000001d4;
  undefined4 uStack00000000000001d8;
  undefined4 uStack00000000000001dc;
  undefined4 uStack00000000000001e0;
  undefined4 uStack00000000000001e4;
  undefined4 uStack00000000000001e8;
  undefined4 uStack00000000000001ec;
  undefined4 in_stack_000001f0;
  
  do {
    __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
              (&stack0x000001c0,s______bak_108ad4611,&stack0x00000080);
    lVar13 = CONCAT44(uStack00000000000001c4,uStack00000000000001c0);
    uVar12 = CONCAT44(uStack00000000000001cc,uStack00000000000001c8);
    uVar3 = CONCAT44(uStack00000000000001d4,uStack00000000000001d0);
    lVar14 = unaff_x19[0xc];
    if ((ulong)(unaff_x19[10] - lVar14) < uVar3) {
      FUN_108855060(unaff_x19 + 10,lVar14,uVar3,1,1);
      lVar14 = unaff_x19[0xc];
    }
    _memcpy(unaff_x19[0xb] + lVar14,uVar12,uVar3);
    lVar14 = lVar14 + uVar3;
    unaff_x19[0xc] = lVar14;
    if (lVar13 != 0) {
      _free(uVar12);
      lVar14 = unaff_x19[0xc];
    }
    uVar12 = *unaff_x19;
    puVar2 = (undefined8 *)unaff_x19[1];
    *(undefined1 *)((long)unaff_x19 + 0x85) = 0;
    puVar15 = (undefined *)0x1;
    lVar13 = unaff_x19[10];
    uVar17 = unaff_x19[0xb];
    if ((puVar2 != (undefined8 *)0x0) &&
       (puVar15 = (undefined *)_malloc(puVar2), puVar15 == (undefined *)0x0)) {
      func_0x0001087c9084(1,puVar2);
      uVar12 = in_stack_000000a0;
      plVar8 = in_stack_000000b0;
      plVar4 = in_stack_000000b8;
      uVar5 = uStack00000000000000cc;
      goto LAB_100f49b5c;
    }
    _memcpy(puVar15,uVar12,puVar2);
    _cStack0000000000000080 = puVar2;
    in_stack_00000088 = puVar15;
    in_stack_00000090 = puVar2;
    func_0x000106038030(&stack0x00000080,uVar17,lVar14);
    unaff_x19[0xe] = in_stack_00000088;
    unaff_x19[0xd] = _cStack0000000000000080;
    unaff_x19[0xf] = in_stack_00000090;
    if (lVar13 != 0) {
      _free(uVar17);
    }
    *(undefined1 *)((long)unaff_x19 + 0x84) = 1;
    unaff_x19[0x11] = unaff_x19[0xe];
    unaff_x19[0x12] = unaff_x19[0xf];
    *(undefined1 *)(unaff_x19 + 0x1a) = 0;
    FUN_100fbd034(&stack0x00000080,unaff_x19 + 0x11);
    puVar15 = in_stack_00000088;
    puVar2 = _cStack0000000000000080;
    if (cStack0000000000000080 == '\x02') {
      *unaff_x28 = 0x8000000000000001;
      uVar10 = 3;
LAB_100f4a074:
      *(undefined1 *)((long)unaff_x19 + 0x86) = uVar10;
      return;
    }
    if (*(char *)(unaff_x19 + 0x1a) == '\x03') {
      if (*(char *)(unaff_x19 + 0x19) == '\x03') {
        plVar8 = (long *)unaff_x19[0x18];
        if (*plVar8 == 0xcc) {
          *plVar8 = 0x84;
        }
        else {
          (**(code **)(plVar8[2] + 0x20))();
        }
      }
      else if ((*(char *)(unaff_x19 + 0x19) == '\0') && (unaff_x19[0x15] != 0)) {
        _free(unaff_x19[0x16]);
      }
    }
    if (((ulong)puVar2 & 1) != 0) {
      if (((*(byte *)((long)unaff_x19 + 0x84) & 1) == 0) || (unaff_x19[0xd] == 0)) {
        *(undefined2 *)((long)unaff_x19 + 0x84) = 0;
      }
      else {
        _free(unaff_x19[0xe]);
        *(undefined2 *)((long)unaff_x19 + 0x84) = 0;
      }
      *unaff_x28 = 0x8000000000000000;
      unaff_x28[1] = puVar15;
      uVar10 = 1;
      unaff_x28[2] = unaff_x19 + 0x11;
      goto LAB_100f4a074;
    }
    if (((ulong)puVar2 & 0x100) == 0) {
      uVar12 = *unaff_x19;
      lVar14 = unaff_x19[1];
      unaff_x19[0x11] = uVar12;
      unaff_x19[0x12] = lVar14;
      unaff_x19[0x13] = unaff_x19[0xe];
      unaff_x19[0x14] = unaff_x19[0xf];
      *(undefined1 *)(unaff_x19 + 0x21) = 0;
      unaff_x19[0x15] = uVar12;
      unaff_x19[0x16] = lVar14;
      unaff_x19[0x17] = unaff_x19[0xe];
      unaff_x19[0x18] = unaff_x19[0xf];
      if (lVar14 == 0) {
        lVar13 = 1;
        _memcpy(1,uVar12,0);
        uVar12 = unaff_x19[0x17];
        lVar7 = unaff_x19[0x18];
        if (lVar7 == 0) goto LAB_100f49dd8;
LAB_100f49920:
        lVar16 = _malloc(lVar7);
        if (lVar16 == 0) {
          func_0x0001087c9084(1,lVar7);
          uVar12 = in_stack_000000a0;
          plVar8 = in_stack_000000b0;
          plVar4 = in_stack_000000b8;
          uVar5 = uStack00000000000000cc;
          goto LAB_100f49b5c;
        }
      }
      else {
        lVar13 = _malloc(lVar14);
        if (lVar13 == 0) {
          func_0x0001087c9084(1,lVar14);
          uVar12 = in_stack_000000a0;
          plVar8 = in_stack_000000b0;
          plVar4 = in_stack_000000b8;
          uVar5 = uStack00000000000000cc;
          goto LAB_100f49b5c;
        }
        _memcpy(lVar13,uVar12,lVar14);
        uVar12 = unaff_x19[0x17];
        lVar7 = unaff_x19[0x18];
        if (lVar7 != 0) goto LAB_100f49920;
LAB_100f49dd8:
        lVar16 = 1;
      }
      _memcpy(lVar16,uVar12,lVar7);
      unaff_x19[0x19] = lVar14;
      unaff_x19[0x1a] = lVar13;
      unaff_x19[0x1b] = lVar14;
      unaff_x19[0x1c] = lVar7;
      unaff_x19[0x1d] = lVar16;
      unaff_x19[0x1e] = lVar7;
      *(undefined1 *)(unaff_x19 + 0x20) = 0;
      uVar18 = unaff_x19[0x1a];
      lVar14 = unaff_x19[0x19];
      uVar21 = unaff_x19[0x1c];
      uVar20 = unaff_x19[0x1b];
      uVar19 = unaff_x19[0x1e];
      uVar17 = unaff_x19[0x1d];
      auVar22 = __ZN5tokio7runtime9scheduler6Handle7current17hf4db12f69375e750E(&UNK_10b23a3d0);
      plVar9 = auVar22._8_8_;
      do {
        lVar13 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE;
        lVar7 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE + 1;
        bVar1 = ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE == 0;
        ___ZN5tokio7runtime4task2id2Id4next7NEXT_ID17h2bddb4a9c434075aE = lVar7;
      } while (bVar1);
      if ((auVar22._0_8_ & 1) == 0) {
        plVar8 = plVar9 + 0x4c;
        if ((char)*plVar8 == '\0') {
          *(char *)plVar8 = '\x01';
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                    (plVar8,plVar9,1000000000);
        }
        plVar9[0x51] = plVar9[0x51] + 1;
        if ((char)*plVar8 == '\x01') {
          *(char *)plVar8 = in_wzr;
        }
        else {
          __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(plVar8,0);
        }
        lVar7 = *plVar9;
        *plVar9 = lVar7 + 1;
        uVar12 = in_stack_000000a0;
        plVar8 = in_stack_000000b0;
        plVar4 = in_stack_000000b8;
        uVar5 = uStack00000000000000cc;
        if (lVar7 < 0) goto LAB_100f49b5c;
        plVar11 = (long *)plVar9[0x5e];
        in_stack_000000a0 = 0;
        in_stack_000000b8 = plVar9 + 0x5c;
        uStack00000000000000cc = uStack00000000000001c0;
      }
      else {
        lVar7 = *plVar9;
        *plVar9 = lVar7 + 1;
        uVar12 = in_stack_000000a0;
        plVar8 = in_stack_000000b0;
        plVar4 = in_stack_000000b8;
        uVar5 = uStack00000000000000cc;
        if (lVar7 < 0) goto LAB_100f49b5c;
        plVar11 = (long *)plVar9[0x4a];
        in_stack_000000a0 = 1;
        in_stack_000000b8 = plVar9 + 0x48;
        uStack00000000000000cc = uStack00000000000001c0;
      }
      in_stack_000000b0 = (long *)0x0;
      uStack00000000000001c0 = uStack00000000000000cc;
      if (plVar11 != (long *)0x0) {
        lVar7 = *plVar11;
        *plVar11 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_100f49b5c;
        in_stack_000000b0 = (long *)in_stack_000000b8[2];
        in_stack_000000b8 = (long *)in_stack_000000b8[3];
        lVar7 = *in_stack_000000b0;
        *in_stack_000000b0 = lVar7 + 1;
        if (lVar7 < 0) goto LAB_100f49b5c;
      }
      uStack00000000000001cc = (undefined4)uVar18;
      uStack00000000000001d0 = (undefined4)((ulong)uVar18 >> 0x20);
      uStack00000000000001c4 = (undefined4)lVar14;
      uStack00000000000001c8 = (undefined4)((ulong)lVar14 >> 0x20);
      uStack00000000000001dc = (undefined4)uVar21;
      uStack00000000000001e0 = (undefined4)((ulong)uVar21 >> 0x20);
      uStack00000000000001d4 = (undefined4)uVar20;
      uStack00000000000001d8 = (undefined4)((ulong)uVar20 >> 0x20);
      uStack00000000000001ec = (undefined4)uVar19;
      in_stack_000001f0 = (undefined4)((ulong)uVar19 >> 0x20);
      uStack00000000000001e4 = (undefined4)uVar17;
      uStack00000000000001e8 = (undefined4)((ulong)uVar17 >> 0x20);
      _cStack0000000000000080 = (undefined8 *)0xcc;
      in_stack_00000088 = (undefined *)0x0;
      in_stack_00000090 = (undefined8 *)&UNK_10b23e7f0;
      in_stack_00000098 = (undefined *)0x0;
      in_stack_000000c0 = lVar13;
      uStack00000000000000c8 = 0;
      uStack00000000000000fc = in_stack_000001f0;
      uStack00000000000000f4 = uStack00000000000001e8;
      uStack00000000000000f8 = uStack00000000000001ec;
      uStack00000000000000ec = uStack00000000000001e0;
      uStack00000000000000f0 = uStack00000000000001e4;
      uStack00000000000000e4 = uStack00000000000001d8;
      uStack00000000000000e8 = uStack00000000000001dc;
      uStack00000000000000dc = uStack00000000000001d0;
      uStack00000000000000e0 = uStack00000000000001d4;
      uStack00000000000000d4 = uStack00000000000001c8;
      uStack00000000000000d8 = uStack00000000000001cc;
      uStack00000000000000d0 = uStack00000000000001c4;
      in_stack_00000100 = 0;
      in_stack_00000108 = 0;
      in_stack_00000110 = 0;
      in_stack_000000a8 = plVar9;
      in_stack_00000120 = in_stack_000000b0;
      in_stack_00000128 = in_stack_000000b8;
      _posix_memalign(&stack0x000001f8,0x80,0x100);
      func_0x0001087c906c(0x80,0x100);
      uVar12 = in_stack_000000a0;
      plVar8 = in_stack_000000b0;
      plVar4 = in_stack_000000b8;
      uVar5 = uStack00000000000000cc;
      goto LAB_100f49b5c;
    }
    *(int *)(unaff_x19 + 0x10) = *(int *)(unaff_x19 + 0x10) + 1;
    if (unaff_x19[0xd] != 0) {
      _free(unaff_x19[0xe]);
    }
    *(undefined2 *)((long)unaff_x19 + 0x84) = 0;
    uVar12 = unaff_x19[4];
    lVar14 = unaff_x19[5];
    lVar13 = 1;
    if ((lVar14 != 0) && (lVar13 = _malloc(lVar14), lVar13 == 0)) {
      func_0x0001087c9084(1,lVar14);
      uVar12 = in_stack_000000a0;
      plVar8 = in_stack_000000b0;
      plVar4 = in_stack_000000b8;
      uVar5 = uStack00000000000000cc;
LAB_100f49b5c:
      uStack00000000000000cc = uVar5;
      in_stack_000000b8 = plVar4;
      in_stack_000000b0 = plVar8;
      in_stack_000000a0 = uVar12;
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100f49b60);
      (*pcVar6)();
    }
    _memcpy(lVar13,uVar12,lVar14);
    unaff_x19[10] = lVar14;
    unaff_x19[0xb] = lVar13;
    unaff_x19[0xc] = lVar14;
    *(undefined1 *)((long)unaff_x19 + 0x85) = 1;
    _cStack0000000000000080 = unaff_x19 + 2;
    in_stack_00000090 = unaff_x19 + 0x10;
    in_stack_00000088 = &DAT_100c7b3a0;
    in_stack_00000098 =
         &
         __ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17hc1020c4dffdb8fa5E
    ;
  } while( true );
}

