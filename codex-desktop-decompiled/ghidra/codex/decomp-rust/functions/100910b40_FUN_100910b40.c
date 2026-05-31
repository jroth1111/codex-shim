
/* WARNING: Removing unreachable block (ram,0x000100911464) */
/* WARNING: Removing unreachable block (ram,0x0001009114ec) */
/* WARNING: Removing unreachable block (ram,0x0001009114f4) */
/* WARNING: Removing unreachable block (ram,0x000100911520) */
/* WARNING: Removing unreachable block (ram,0x00010091152c) */
/* WARNING: Removing unreachable block (ram,0x000100911110) */
/* WARNING: Removing unreachable block (ram,0x0001009116ec) */
/* WARNING: Removing unreachable block (ram,0x00010091116c) */
/* WARNING: Removing unreachable block (ram,0x00010091117c) */
/* WARNING: Removing unreachable block (ram,0x000100911afc) */
/* WARNING: Removing unreachable block (ram,0x000100911188) */
/* WARNING: Removing unreachable block (ram,0x0001009111ac) */
/* WARNING: Removing unreachable block (ram,0x0001009111dc) */
/* WARNING: Removing unreachable block (ram,0x0001009116f8) */
/* WARNING: Removing unreachable block (ram,0x0001009111f0) */
/* WARNING: Removing unreachable block (ram,0x000100911700) */
/* WARNING: Removing unreachable block (ram,0x0001009111b0) */
/* WARNING: Removing unreachable block (ram,0x000100911708) */
/* WARNING: Removing unreachable block (ram,0x000100911718) */
/* WARNING: Removing unreachable block (ram,0x00010091172c) */
/* WARNING: Removing unreachable block (ram,0x000100911730) */
/* WARNING: Removing unreachable block (ram,0x000100911738) */
/* WARNING: Removing unreachable block (ram,0x000100910f70) */
/* WARNING: Removing unreachable block (ram,0x000100911750) */
/* WARNING: Removing unreachable block (ram,0x000100911764) */
/* WARNING: Removing unreachable block (ram,0x000100911768) */
/* WARNING: Removing unreachable block (ram,0x000100910fa8) */
/* WARNING: Removing unreachable block (ram,0x000100911770) */
/* WARNING: Removing unreachable block (ram,0x000100910ef4) */
/* WARNING: Removing unreachable block (ram,0x00010091108c) */
/* WARNING: Removing unreachable block (ram,0x0001009113d0) */
/* WARNING: Removing unreachable block (ram,0x000100910efc) */
/* WARNING: Removing unreachable block (ram,0x000100910f2c) */
/* WARNING: Removing unreachable block (ram,0x000100911790) */
/* WARNING: Removing unreachable block (ram,0x0001009117a0) */
/* WARNING: Removing unreachable block (ram,0x0001009117ac) */
/* WARNING: Removing unreachable block (ram,0x0001009117b0) */
/* WARNING: Removing unreachable block (ram,0x0001009115f4) */

void FUN_100910b40(void)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x10;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar11;
  undefined8 unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  ulong uVar12;
  undefined8 *puVar13;
  long unaff_x27;
  undefined8 uVar14;
  char *pcVar15;
  long unaff_x29;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 *in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *puStack0000000000000068;
  undefined8 *puStack0000000000000088;
  undefined8 *puStack0000000000000090;
  undefined8 *puStack00000000000000a8;
  undefined1 *in_stack_000000b0;
  long in_stack_00000748;
  long in_stack_00000750;
  long in_stack_00000758;
  undefined8 *in_stack_00000c40;
  undefined8 *in_stack_00000c48;
  undefined4 in_stack_00000c50;
  uint in_stack_00000c54;
  undefined8 in_stack_00000c58;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00000c40,s_invalid_thread_id__108aca2c9,unaff_x29 + -0x88);
  uVar4 = CONCAT44(in_stack_00000c54,in_stack_00000c50);
  if (in_stack_00000c40 == (undefined8 *)0x8000000000000000) {
    *(undefined8 **)(unaff_x19 + 0x138) = in_stack_00000c48;
    *(ulong *)(unaff_x19 + 0x140) = uVar4;
    if (*(long *)(unaff_x19 + 0xf0) == unaff_x23) {
      puStack00000000000000a8 = (undefined8 *)_malloc(0x27);
      if (puStack00000000000000a8 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x27);
LAB_100911b7c:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100911b80);
        (*pcVar3)();
      }
      uVar12 = 0;
      puStack00000000000000a8[1] = 0x636e69207473756d;
      *puStack00000000000000a8 = 0x206f666e49746967;
      puStack00000000000000a8[3] = 0x6e6f20747361656c;
      puStack00000000000000a8[2] = 0x207461206564756c;
      *(undefined8 *)((long)puStack00000000000000a8 + 0x1f) = 0x646c65696620656e;
      in_stack_00000c40 = (undefined8 *)0x27;
      uVar4 = 0x27;
      goto LAB_100911854;
    }
    *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x19 + 0xf8);
    *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x19 + 0xf0);
    *(undefined8 *)(unaff_x19 + 0x158) = *(undefined8 *)(unaff_x19 + 0x100);
    *(undefined2 *)(unaff_x19 + 0x3a0) = 0;
    *(undefined8 *)(unaff_x19 + 0x170) = *(undefined8 *)(unaff_x19 + 0x118);
    *(undefined8 *)(unaff_x19 + 0x168) = *(undefined8 *)(unaff_x19 + 0x110);
    *(undefined8 *)(unaff_x19 + 0x160) = *(undefined8 *)(unaff_x19 + 0x108);
    *(undefined4 *)(unaff_x19 + 0x39c) = 0x10101;
    plVar1 = (long *)(unaff_x19 + 0x178);
    *(undefined8 *)(unaff_x19 + 0x180) = *(undefined8 *)(unaff_x19 + 0x128);
    *plVar1 = *(long *)(unaff_x19 + 0x120);
    *(undefined8 *)(unaff_x19 + 0x188) = *(undefined8 *)(unaff_x19 + 0x130);
    if (((*(long *)(unaff_x19 + 0x148) == -0x7fffffffffffffff) &&
        (*(long *)(unaff_x19 + 0x160) == -0x7fffffffffffffff)) && (*plVar1 == -0x7fffffffffffffff))
    {
      puStack00000000000000a8 = (undefined8 *)_malloc(0x27);
      if (puStack00000000000000a8 == (undefined8 *)0x0) {
        func_0x0001087c9084(1,0x27);
        goto LAB_100911b7c;
      }
      puStack00000000000000a8[1] = 0x636e69207473756d;
      *puStack00000000000000a8 = 0x206f666e49746967;
      puStack00000000000000a8[3] = 0x6e6f20747361656c;
      puStack00000000000000a8[2] = 0x207461206564756c;
      *(undefined8 *)((long)puStack00000000000000a8 + 0x1f) = 0x646c65696620656e;
      in_stack_00000c40 = (undefined8 *)0x27;
      uVar12 = 0;
      uVar4 = 0x27;
      *(undefined1 *)(unaff_x19 + 0x39c) = 0;
      if ((((*(byte *)(unaff_x19 + 0x39d) & 1) != 0) &&
          (lVar6 = *(long *)(unaff_x19 + 0x160), lVar6 != -0x7fffffffffffffff)) &&
         ((lVar6 != -0x8000000000000000 && (lVar6 != 0)))) {
        _free(*(undefined8 *)(unaff_x19 + 0x168));
      }
      *(undefined1 *)(unaff_x19 + 0x39d) = 0;
      if ((((*(byte *)(unaff_x19 + 0x39e) & 1) != 0) &&
          (lVar6 = *(long *)(unaff_x19 + 0x148), lVar6 != -0x7fffffffffffffff)) &&
         ((lVar6 != -0x8000000000000000 && (lVar6 != 0)))) {
        _free(*(undefined8 *)(unaff_x19 + 0x150));
      }
      *(undefined1 *)(unaff_x19 + 0x39e) = 0;
      goto LAB_100911854;
    }
    *(undefined1 *)(unaff_x19 + 0x39e) = 0;
    lVar6 = *(long *)(unaff_x19 + 0xf0);
    unaff_x20[1] = *(long *)(unaff_x19 + 0xf8);
    *unaff_x20 = lVar6;
    __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor35normalize_thread_metadata_git_field17h0087086d64aae4c2E
              (&stack0x00000c40,&stack0x00000550,&UNK_108cb2ac7,0xb);
    *(undefined1 *)(unaff_x19 + 0x39b) = 1;
    *(undefined1 *)(unaff_x19 + 0x39d) = 0;
    lVar6 = *(long *)(unaff_x19 + 0x160);
    unaff_x20[1] = *(long *)(unaff_x19 + 0x168);
    *unaff_x20 = lVar6;
    __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor35normalize_thread_metadata_git_field17h0087086d64aae4c2E
              (&stack0x00000c40,&stack0x00000550,&UNK_108cb2ad2,0xe);
    *(undefined1 *)(unaff_x19 + 0x39a) = 1;
    *(undefined1 *)(unaff_x19 + 0x39c) = 0;
    lVar6 = *plVar1;
    unaff_x20[1] = *(long *)(unaff_x19 + 0x180);
    *unaff_x20 = lVar6;
    __ZN16codex_app_server18request_processors16thread_processor22ThreadRequestProcessor35normalize_thread_metadata_git_field17h0087086d64aae4c2E
              (&stack0x00000c40,&stack0x00000550,&UNK_108cb2ae0,0x11);
    *(undefined1 *)(unaff_x19 + 0x39b) = 0;
    *(undefined1 *)(unaff_x19 + 0x3a2) = 0;
    *(undefined2 *)(unaff_x19 + 0x399) = 1;
    *(undefined8 *)(unaff_x19 + 0x518) = 0x8000000000000001;
    *(undefined8 *)(unaff_x19 + 0x440) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x458) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x470) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x488) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x4a0) = 0x8000000000000000;
    *(undefined4 *)(unaff_x19 + 0x640) = 0;
    *(undefined4 *)(unaff_x19 + 0x64c) = 0;
    *(undefined8 *)(unaff_x19 + 0x5e0) = 0x800000000000000e;
    *(undefined8 *)(unaff_x19 + 0x530) = 0x8000000000000001;
    *(undefined8 *)(unaff_x19 + 0x548) = 0x8000000000000001;
    *(undefined8 *)(unaff_x19 + 0x560) = 0x8000000000000001;
    *(undefined8 *)(unaff_x19 + 0x4b8) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x4d0) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x5c0) = 0x8000000000000003;
    *(undefined8 *)(unaff_x19 + 0x410) = 0;
    *(undefined8 *)(unaff_x19 + 0x4e8) = 0x8000000000000000;
    *(undefined8 **)(unaff_x19 + 0x578) = in_stack_00000c48;
    *(ulong *)(unaff_x19 + 0x580) = CONCAT44(in_stack_00000c54,in_stack_00000c50);
    *(undefined8 *)(unaff_x19 + 0x588) = in_stack_00000c58;
    *(undefined8 **)(unaff_x19 + 0x590) = in_stack_00000c48;
    *(ulong *)(unaff_x19 + 0x598) = CONCAT44(in_stack_00000c54,in_stack_00000c50);
    *(undefined8 *)(unaff_x19 + 0x5a0) = in_stack_00000c58;
    *(undefined8 **)(unaff_x19 + 0x5a8) = in_stack_00000c48;
    *(ulong *)(unaff_x19 + 0x5b0) = CONCAT44(in_stack_00000c54,in_stack_00000c50);
    *(undefined8 *)(unaff_x19 + 0x5b8) = in_stack_00000c58;
    *(undefined4 *)(unaff_x19 + 0x658) = 0x7060402;
    *(undefined8 *)(unaff_x19 + 0x500) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0xd0);
    *(undefined1 *)(unaff_x19 + 0x408) = 0;
    FUN_100918408(&stack0x00000c40,unaff_x19 + 0x3a8);
    if ((*(char *)(unaff_x19 + 0x408) == '\x03') && (*(char *)(unaff_x19 + 0x400) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x3c0);
      if (*(long *)(unaff_x19 + 0x3c8) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x3c8) + 0x18))(*(undefined8 *)(unaff_x19 + 0x3d0));
      }
    }
    *(undefined8 **)(unaff_x19 + 400) = in_stack_00000c48;
    *(undefined4 *)(unaff_x19 + 0x198) = in_stack_00000c50;
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0xd0) + 0x188);
    *(undefined1 *)(unaff_x19 + 0x399) = 0;
    _memmove(unaff_x19 + 0x3a8,unaff_x19 + 0x410,0x250);
    *(long *)(unaff_x19 + 0x5f8) = lVar6 + 0x10;
    *(undefined8 *)(unaff_x19 + 0x608) = *(undefined8 *)(unaff_x19 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x600) = *(undefined8 *)(unaff_x19 + 0x138);
    *(undefined2 *)(unaff_x19 + 0x918) = 1;
    FUN_10050ee40(&stack0x00000c40,unaff_x19 + 0x3a8);
    lVar6 = unaff_x25[0xd];
    unaff_x20[0x97] = unaff_x25[0xe];
    unaff_x20[0x96] = lVar6;
    lVar6 = unaff_x25[0xf];
    unaff_x20[0x99] = unaff_x25[0x10];
    unaff_x20[0x98] = lVar6;
    lVar6 = unaff_x25[0x11];
    unaff_x20[0x9b] = unaff_x25[0x12];
    unaff_x20[0x9a] = lVar6;
    lVar6 = unaff_x25[5];
    unaff_x20[0x8f] = unaff_x25[6];
    unaff_x20[0x8e] = lVar6;
    lVar6 = unaff_x25[7];
    unaff_x20[0x91] = unaff_x25[8];
    unaff_x20[0x90] = lVar6;
    lVar6 = unaff_x25[9];
    unaff_x20[0x93] = unaff_x25[10];
    unaff_x20[0x92] = lVar6;
    lVar6 = unaff_x25[0xb];
    unaff_x20[0x95] = unaff_x25[0xc];
    unaff_x20[0x94] = lVar6;
    lVar6 = unaff_x25[1];
    unaff_x20[0x8b] = unaff_x25[2];
    unaff_x20[0x8a] = lVar6;
    lVar6 = unaff_x25[3];
    unaff_x20[0x8d] = unaff_x25[4];
    unaff_x20[0x8c] = lVar6;
    _memcpy(&stack0x000007c8,&stack0x00000ce0,0x1d8);
    FUN_100cd475c(unaff_x19 + 0x3a8);
    unaff_x20[0xe] = unaff_x20[0x97];
    unaff_x20[0xd] = unaff_x20[0x96];
    unaff_x20[0x10] = unaff_x20[0x99];
    unaff_x20[0xf] = unaff_x20[0x98];
    unaff_x20[0x12] = unaff_x20[0x9b];
    unaff_x20[0x11] = unaff_x20[0x9a];
    unaff_x20[6] = unaff_x20[0x8f];
    unaff_x20[5] = unaff_x20[0x8e];
    unaff_x20[8] = unaff_x20[0x91];
    unaff_x20[7] = unaff_x20[0x90];
    unaff_x20[10] = unaff_x20[0x93];
    unaff_x20[9] = unaff_x20[0x92];
    unaff_x20[0xc] = unaff_x20[0x95];
    unaff_x20[0xb] = unaff_x20[0x94];
    unaff_x20[2] = unaff_x20[0x8b];
    unaff_x20[1] = unaff_x20[0x8a];
    unaff_x20[4] = unaff_x20[0x8d];
    unaff_x20[3] = unaff_x20[0x8c];
    _memcpy(&stack0x000005f0,&stack0x000007c8,0x1d8);
    lVar17 = unaff_x20[2];
    lVar6 = unaff_x20[1];
    lVar18 = unaff_x20[4];
    lVar16 = unaff_x20[3];
    _memcpy(&stack0x00000a38,&stack0x000005c0,0x208);
    iVar2 = *(int *)(unaff_x19 + 0x198);
    if (iVar2 != 0) {
      pcVar15 = *(char **)(unaff_x19 + 400);
      if (*pcVar15 == '\0') {
        *pcVar15 = '\x01';
      }
      else {
        __ZN11parking_lot9raw_mutex8RawMutex9lock_slow17ha3330f5b4a61e218E
                  (pcVar15,extraout_x1,1000000000);
      }
      FUN_1060fa678(pcVar15,iVar2,pcVar15);
    }
    unaff_x25[2] = lVar17;
    unaff_x25[1] = lVar6;
    unaff_x25[4] = lVar18;
    unaff_x25[3] = lVar16;
    lVar6 = unaff_x20[0x8e];
    unaff_x25[6] = unaff_x20[0x8f];
    unaff_x25[5] = lVar6;
    lVar6 = unaff_x20[0x90];
    unaff_x25[8] = unaff_x20[0x91];
    unaff_x25[7] = lVar6;
    lVar6 = unaff_x20[0x92];
    unaff_x25[10] = unaff_x20[0x93];
    unaff_x25[9] = lVar6;
    lVar6 = unaff_x20[0x94];
    unaff_x25[0xc] = unaff_x20[0x95];
    unaff_x25[0xb] = lVar6;
    _memcpy(&stack0x00000cb0,&stack0x00000a38,0x208);
    lVar6 = *(long *)(*(long *)(unaff_x19 + 0xd0) + 0x198);
    __ZN16codex_app_server18request_processors16thread_processor25thread_from_stored_thread17h9999c464848c4bd4E
              (&stack0x00000550,&stack0x00000c40,*(undefined8 *)(lVar6 + 0x1b98),
               *(undefined8 *)(lVar6 + 0x1ba0),lVar6 + 0x1bc0);
    _memcpy(unaff_x19 + 0x1a0,&stack0x00000550,0x1f8);
    if (in_stack_00000748 != -0x8000000000000000) {
      lVar6 = in_stack_00000758 + 1;
      lVar16 = in_stack_00000750;
      while (lVar6 = lVar6 + -1, lVar6 != 0) {
        FUN_100e068b8(lVar16);
        lVar16 = lVar16 + 0x1e0;
      }
      if (in_stack_00000748 != 0) {
        _free(in_stack_00000750);
      }
    }
    *(long *)(unaff_x19 + 0x3a8) = *(long *)(*(long *)(unaff_x19 + 0xd0) + 0x188) + 0x10;
    *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x19 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x3b0) = *(undefined8 *)(unaff_x19 + 0x138);
    *(undefined1 *)(unaff_x19 + 0x450) = 0;
    unaff_x23 = -0x7ffffffffffffffe;
    FUN_10050e55c(&stack0x00000c40,unaff_x19 + 0x3a8);
    lVar6 = unaff_x25[0xc];
    lVar17 = unaff_x25[0xf];
    lVar16 = unaff_x25[0xe];
    unaff_x20[0xd] = unaff_x25[0xd];
    unaff_x20[0xc] = lVar6;
    unaff_x20[0xf] = lVar17;
    unaff_x20[0xe] = lVar16;
    lVar6 = unaff_x25[0x10];
    unaff_x20[0x11] = unaff_x25[0x11];
    unaff_x20[0x10] = lVar6;
    lVar6 = unaff_x25[4];
    lVar17 = unaff_x25[7];
    lVar16 = unaff_x25[6];
    unaff_x20[5] = unaff_x25[5];
    unaff_x20[4] = lVar6;
    unaff_x20[7] = lVar17;
    unaff_x20[6] = lVar16;
    lVar6 = unaff_x25[8];
    lVar17 = unaff_x25[0xb];
    lVar16 = unaff_x25[10];
    unaff_x20[9] = unaff_x25[9];
    unaff_x20[8] = lVar6;
    unaff_x20[0xb] = lVar17;
    unaff_x20[10] = lVar16;
    lVar6 = *unaff_x25;
    lVar17 = unaff_x25[3];
    lVar16 = unaff_x25[2];
    unaff_x20[1] = unaff_x25[1];
    *unaff_x20 = lVar6;
    unaff_x20[3] = lVar17;
    unaff_x20[2] = lVar16;
    if ((((*(char *)(unaff_x19 + 0x450) == '\x03') && (*(char *)(unaff_x19 + 0x448) == '\x03')) &&
        (*(char *)(unaff_x19 + 0x440) == '\x03')) && (*(char *)(unaff_x19 + 0x438) == '\x03')) {
      __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                (unaff_x19 + 0x3f8);
      if (*(long *)(unaff_x19 + 0x400) != 0) {
        (**(code **)(*(long *)(unaff_x19 + 0x400) + 0x18))(*(undefined8 *)(unaff_x19 + 0x408));
      }
    }
    FUN_100df5738(&stack0x00000550);
    *(undefined8 *)(unaff_x19 + 0x3a8) = *(undefined8 *)(unaff_x19 + 0xd0);
    *(long *)(unaff_x19 + 0x3b0) = unaff_x19 + 0x1a0;
    *(undefined8 *)(unaff_x19 + 0x3c0) = *(undefined8 *)(unaff_x19 + 0x140);
    *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x19 + 0x138);
    *(undefined1 *)(unaff_x19 + 0x3e0) = 0;
    uVar4 = FUN_10090196c(unaff_x19 + 0x3a8);
    if ((uVar4 & 1) == 0) {
      if (*(char *)(unaff_x19 + 0x3e0) == '\x03') {
        uVar14 = *(undefined8 *)(unaff_x19 + 0x3d0);
        puVar13 = *(undefined8 **)(unaff_x19 + 0x3d8);
        pcVar3 = (code *)*puVar13;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(uVar14);
        }
        if (puVar13[1] != 0) {
          _free(uVar14);
        }
      }
      *(long *)(unaff_x19 + 0x3a8) = *(long *)(unaff_x19 + 0xd0) + 0x1c0;
      *(undefined8 *)(unaff_x19 + 0x3b0) = *(undefined8 *)(unaff_x19 + 0x1a8);
      *(undefined8 *)(unaff_x19 + 0x3b8) = *(undefined8 *)(unaff_x19 + 0x1b0);
      *(undefined1 *)(unaff_x19 + 0x448) = 0;
      unaff_x27 = 0x17e8;
      FUN_10088f808(&stack0x00000c40,unaff_x19 + 0x3a8);
      unaff_x25[0x55] = unaff_x25[2];
      unaff_x25[0x54] = unaff_x25[1];
      if (((*(char *)(unaff_x19 + 0x448) == '\x03') && (*(char *)(unaff_x19 + 0x440) == '\x03')) &&
         ((*(char *)(unaff_x19 + 0x438) == '\x03' && (*(char *)(unaff_x19 + 0x3f0) == '\x04')))) {
        __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                  (unaff_x19 + 0x3f8);
        if (*(long *)(unaff_x19 + 0x400) != 0) {
          (**(code **)(*(long *)(unaff_x19 + 0x400) + 0x18))(*(undefined8 *)(unaff_x19 + 0x408));
        }
      }
      if ((-0x7ffffffffffffffe < *(long *)(unaff_x19 + 0x308)) &&
         (*(long *)(unaff_x19 + 0x308) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x310));
      }
      *(undefined8 *)(unaff_x19 + 0x308) = 0x8000000000000000;
      lVar6 = unaff_x25[0x54];
      *(long *)(unaff_x19 + 0x318) = unaff_x25[0x55];
      *(long *)(unaff_x19 + 0x310) = lVar6;
      puVar13 = *(undefined8 **)(unaff_x19 + 0x1a0);
      in_stack_00000c40 = *(undefined8 **)(unaff_x19 + 0x1a8);
      puStack00000000000000a8 = *(undefined8 **)(unaff_x19 + 0x1b0);
      uVar12 = (ulong)*(uint *)(unaff_x19 + 0x1bc);
      uVar4 = (ulong)*(uint *)(unaff_x19 + 0x1b8);
      puStack0000000000000088 = *(undefined8 **)(unaff_x19 + 0x1c0);
      in_stack_00000048 = *(undefined8 **)(unaff_x19 + 0x1f0);
      in_stack_00000040 = *(undefined8 **)(unaff_x19 + 0x1e8);
      in_stack_00000058 = *(undefined8 **)(unaff_x19 + 0x200);
      in_stack_00000050 = *(undefined8 **)(unaff_x19 + 0x1f8);
      in_stack_00000028 = *(undefined8 **)(unaff_x19 + 0x1d0);
      in_stack_00000020 = *(undefined8 **)(unaff_x19 + 0x1c8);
      in_stack_00000038 = *(undefined8 **)(unaff_x19 + 0x1e0);
      in_stack_00000030 = *(undefined8 **)(unaff_x19 + 0x1d8);
      puStack0000000000000090 = *(undefined8 **)(unaff_x19 + 0x208);
      _memcpy(&stack0x00000ef8,unaff_x19 + 0x210,0x188);
      *(undefined8 *)(unaff_x19 + 0x399) = 0;
      *(undefined2 *)(unaff_x19 + 0x3a1) = 0;
      if (*(long *)(unaff_x19 + 0xd8) != 0) goto LAB_100911938;
      goto LAB_100911940;
    }
    unaff_x27 = 0x17e8;
    unaff_x23 = -0x7ffffffffffffffe;
    *in_stack_000000b0 = 6;
LAB_100911968:
    *unaff_x22 = unaff_x23 + 0x6f;
    uVar5 = 3;
  }
  else {
    in_stack_00000048 = (undefined8 *)unaff_x25[9];
    in_stack_00000040 = (undefined8 *)unaff_x25[8];
    in_stack_00000058 = (undefined8 *)unaff_x25[0xb];
    in_stack_00000050 = (undefined8 *)unaff_x25[10];
    uVar12 = (ulong)in_stack_00000c54;
    in_stack_00000028 = (undefined8 *)unaff_x25[5];
    in_stack_00000020 = (undefined8 *)unaff_x25[4];
    in_stack_00000038 = (undefined8 *)unaff_x25[7];
    in_stack_00000030 = (undefined8 *)unaff_x25[6];
    puStack00000000000000a8 = in_stack_00000c48;
LAB_100911854:
    puStack0000000000000088 = (undefined8 *)(unaff_x23 + 3);
    puStack0000000000000090 = (undefined8 *)0xffffffffffff80a8;
    lVar6 = *(long *)(unaff_x19 + 0xf0);
    if (lVar6 != unaff_x23) {
      if (((((*(byte *)(unaff_x19 + 0x3a1) & 1) != 0) && (lVar6 != -0x7fffffffffffffff)) &&
          (lVar6 != -0x8000000000000000)) && (lVar6 != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0xf8));
      }
      if ((((*(byte *)(unaff_x19 + 0x3a0) & 1) != 0) &&
          (lVar6 = *(long *)(unaff_x19 + 0x108), lVar6 != -0x7fffffffffffffff)) &&
         ((lVar6 != -0x8000000000000000 && (lVar6 != 0)))) {
        _free(*(undefined8 *)(unaff_x19 + 0x110));
      }
      if ((((*(byte *)(unaff_x19 + 0x39f) & 1) != 0) &&
          (lVar6 = *(long *)(unaff_x19 + 0x120), lVar6 != -0x7fffffffffffffff)) &&
         ((lVar6 != -0x8000000000000000 && (lVar6 != 0)))) {
        _free(*(undefined8 *)(unaff_x19 + 0x128));
      }
    }
    *(undefined2 *)(unaff_x19 + 0x39f) = 0;
    *(undefined1 *)(unaff_x19 + 0x3a1) = 0;
    if (*(long *)(unaff_x19 + 0xd8) == 0) {
      puStack0000000000000068 = (undefined8 *)(uVar4 & 0xffffffff | uVar12 << 0x20);
      _memcpy(&stack0x000000b8,&stack0x00000ef8,0x188);
      *in_stack_000000b0 = 1;
      puVar13 = (undefined8 *)0x8000000000000000;
    }
    else {
      puVar13 = (undefined8 *)0x8000000000000000;
LAB_100911938:
      _free(*(undefined8 *)(unaff_x19 + 0xe0));
LAB_100911940:
      _memcpy(&stack0x000000b8,&stack0x00000ef8,0x188);
      *in_stack_000000b0 = 1;
      if (puVar13 == (undefined8 *)0x8000000000000001) goto LAB_100911968;
      puStack0000000000000068 = (undefined8 *)(uVar4 & 0xffffffff | uVar12 << 0x20);
    }
    _memcpy(&stack0x00000240,&stack0x000000b8,0x188);
    FUN_100d72bdc(unaff_x21);
    if (puVar13 == (undefined8 *)0x8000000000000000) {
      lVar6 = -0x7fffffffffffff90;
      puVar7 = in_stack_00000040;
      puVar8 = extraout_x10;
      puVar9 = puStack00000000000000a8;
      puVar10 = puStack0000000000000088;
      puVar11 = in_stack_00000050;
      in_stack_00000050 = in_stack_00000058;
      puVar13 = in_stack_00000c40;
    }
    else {
      _memcpy(&stack0x000003c8,&stack0x00000240,0x188);
      lVar6 = -0x7ffffffffffffff4;
      puVar7 = in_stack_00000038;
      puVar8 = puStack0000000000000090;
      puVar9 = in_stack_00000c40;
      puVar10 = puStack0000000000000068;
      puStack0000000000000068 = puStack00000000000000a8;
      in_stack_00000038 = in_stack_00000030;
      puVar11 = in_stack_00000048;
      in_stack_00000048 = in_stack_00000040;
      in_stack_00000030 = in_stack_00000028;
      in_stack_00000028 = in_stack_00000020;
      in_stack_00000020 = puStack0000000000000088;
      puStack0000000000000090 = in_stack_00000058;
    }
    *unaff_x22 = lVar6;
    unaff_x22[1] = (long)puVar13;
    unaff_x22[2] = (long)puVar9;
    unaff_x22[3] = (long)puStack0000000000000068;
    unaff_x22[4] = (long)puVar10;
    unaff_x22[5] = (long)in_stack_00000020;
    unaff_x22[6] = (long)in_stack_00000028;
    unaff_x22[7] = (long)in_stack_00000030;
    unaff_x22[8] = (long)in_stack_00000038;
    unaff_x22[9] = (long)puVar7;
    unaff_x22[10] = (long)in_stack_00000048;
    unaff_x22[0xb] = (long)puVar11;
    unaff_x22[0xc] = (long)in_stack_00000050;
    unaff_x22[0xd] = (long)puStack0000000000000090;
    unaff_x22[0xe] = (long)puVar8;
    _memcpy(unaff_x22 + 0xf,&stack0x000003c8,0x188);
    uVar5 = 1;
    unaff_x27 = 0x17e8;
  }
  *(undefined1 *)(unaff_x19 + unaff_x27) = uVar5;
  return;
}

