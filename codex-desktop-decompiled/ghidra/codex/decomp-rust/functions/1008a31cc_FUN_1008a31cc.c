
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008a31cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  code *pcVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined1 uVar15;
  long *plVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *unaff_x25;
  long lVar21;
  long lVar22;
  undefined1 *unaff_x28;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  long in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long *in_stack_000000d0;
  ulong in_stack_000000d8;
  long in_stack_000000e0;
  undefined8 in_stack_000000f0;
  long *in_stack_000000f8;
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
  undefined8 uVar23;
  undefined8 in_stack_00011180;
  undefined8 in_stack_00011188;
  undefined8 in_stack_00011190;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00011180,s___108acb8fa,&stack0x00000380);
  *(undefined8 *)(unaff_x19 + 0x668) = in_stack_00011190;
  *(undefined8 *)(unaff_x19 + 0x660) = in_stack_00011188;
  *(undefined8 *)(unaff_x19 + 0x658) = in_stack_00011180;
  *unaff_x28 = 1;
  plVar16 = *(long **)(unaff_x19 + 0x600);
  if (*(long *)(unaff_x19 + 0x608) == 0xd) {
    if (*plVar16 == 0x61622d7865646f63 && *(long *)((long)plVar16 + 5) == 0x646e656b6361622d)
    goto LAB_1008a32d4;
LAB_1008a326c:
    bVar3 = false;
    uVar17 = *(undefined8 *)(in_stack_000000d0[1] + 0x1c10);
    lVar21 = *(long *)(in_stack_000000d0[1] + 0x1c18);
    if (lVar21 == 0) goto LAB_1008a32ec;
LAB_1008a3284:
    lVar9 = _malloc(lVar21);
    if (lVar9 == 0) {
      func_0x0001087c9084(1,lVar21);
      goto LAB_1008a58ec;
    }
  }
  else {
    if ((*(long *)(unaff_x19 + 0x608) != 0x17) ||
       ((*plVar16 != 0x70615f7865646f63 || plVar16[1] != 0x7265767265735f70) ||
        *(long *)((long)plVar16 + 0xf) != 0x6e6f6d6561645f72)) goto LAB_1008a326c;
LAB_1008a32d4:
    bVar3 = true;
    uVar17 = *(undefined8 *)(in_stack_000000d0[1] + 0x1c10);
    lVar21 = *(long *)(in_stack_000000d0[1] + 0x1c18);
    if (lVar21 != 0) goto LAB_1008a3284;
LAB_1008a32ec:
    lVar9 = 1;
  }
  _memcpy(lVar9,uVar17,lVar21);
  unaff_x25[10] = 1;
  unaff_x25[0xd] = 0;
  FUN_100e9029c(&stack0x00011180,&stack0x00011420);
  uVar17 = *(undefined8 *)(unaff_x19 + 0x600);
  lVar22 = *(long *)(unaff_x19 + 0x608);
  if (lVar22 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = _malloc(lVar22);
    if (lVar10 == 0) {
      func_0x0001087c9084(1,lVar22);
      goto LAB_1008a58ec;
    }
  }
  _memcpy(lVar10,uVar17,lVar22);
  unaff_x25[0xc] = 0;
  uVar11 = __ZN16codex_app_server17message_processor22ConnectionSessionState10initialize17he165e9030784be0fE
                     ();
  if ((uVar11 & 1) == 0) {
    if (!bVar3) {
      uVar17 = *(undefined8 *)(unaff_x19 + 0x648);
      lVar22 = *(long *)(unaff_x19 + 0x650);
      if (lVar22 == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = _malloc(lVar22);
        if (lVar10 == 0) {
          func_0x0001087c9084(1,lVar22);
          goto LAB_1008a58ec;
        }
      }
      _memcpy(lVar10,uVar17,lVar22);
      bVar5 = __ZN11codex_login4auth14default_client22set_default_originator17h6d68550bbaa50dadE
                        (&stack0x00000380);
      if ((bVar5 != 2) && ((bVar5 & 1) == 0)) {
        if ((___ZN12tracing_core8metadata9MAX_LEVEL17h02c7742de62f64c3E < 4) &&
           (((bRam000000010b627c30 - 1 < 2 ||
             ((bRam000000010b627c30 != 0 &&
              (cVar6 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                                 (&
                                  __ZN16codex_app_server18request_processors20initialize_processor26InitializeRequestProcessor10initialize28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd917001d5bed42c5E
                                 ), cVar6 != '\0')))) &&
            (uVar11 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                                (
                                ___ZN16codex_app_server18request_processors20initialize_processor26InitializeRequestProcessor10initialize28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd917001d5bed42c5E
                                ), (uVar11 & 1) != 0)))) {
          FUN_10093d800(&stack0x00011180);
        }
        else {
          uVar17 = 
          ___ZN16codex_app_server18request_processors20initialize_processor26InitializeRequestProcessor10initialize28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hd917001d5bed42c5E
          ;
          if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
             (1 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
            puVar1 = puRam000000010b634c20;
            if (lRam000000010b66fd20 != 2) {
              puVar1 = &UNK_10b3c24c8;
            }
            puVar2 = puRam000000010b634c18;
            if (lRam000000010b66fd20 != 2) {
              puVar2 = &UNK_109adfc03;
            }
            iVar7 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00010fd0);
            if (iVar7 != 0) {
              __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                        (uVar17,puVar2,puVar1,&stack0x00011420,&stack0x00011180);
            }
          }
        }
      }
    }
    unaff_x25[0xe] = 0;
    unaff_x25[0xb] = 0;
    FUN_10172ea80(&stack0x00011180);
    uVar23 = in_stack_00000108;
    uVar17 = in_stack_00000100;
    uVar11 = 0x800000000000000b;
    FUN_101725e54(in_stack_000000d0[3],&stack0x00000380);
    __ZN11codex_login4auth14default_client40set_default_client_residency_requirement17h4620080bb8df219dE
              (*(undefined1 *)(in_stack_000000d0[1] + 0x2410));
    if (!bVar3) {
      if (___ZN11codex_login4auth14default_client17USER_AGENT_SUFFIX17h9dc1dc07ad4683cbE != 0) {
        __ZN3std3sys4sync4once5queue4Once4call17h3e41a5ec638e0eddE
                  (&__ZN11codex_login4auth14default_client17USER_AGENT_SUFFIX17h9dc1dc07ad4683cbE,1,
                   &stack0x00011180,&UNK_10b234360,&UNK_10b2340c8);
      }
      if (lRam000000010b62d4a0 == 0) {
        FUN_108854158(0x10b62d4a0);
      }
      iVar7 = _pthread_mutex_lock();
      if (iVar7 != 0) {
        thunk_FUN_108a81ad4();
        goto LAB_1008a58ec;
      }
      if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
          0x7fffffffffffffff) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_107c05e34();
        uVar8 = uVar8 ^ 1;
      }
      uVar11 = (ulong)(cRam000000010b62d4a8 != '\0');
      uVar23 = CONCAT71((int7)((ulong)uVar23 >> 8),(char)uVar8);
      uVar17 = 0x10b62d4a0;
      if (cRam000000010b62d4a8 == '\0') {
        *unaff_x28 = 0;
        lVar22 = *(long *)(unaff_x19 + 0x658);
        uVar19 = *(undefined8 *)(unaff_x19 + 0x660);
        uVar20 = *(undefined8 *)(unaff_x19 + 0x668);
        if ((lRam000000010b62d4b0 != -0x8000000000000000) && (lRam000000010b62d4b0 != 0)) {
          _free(uRam000000010b62d4b8);
        }
        lRam000000010b62d4b0 = lVar22;
        uRam000000010b62d4b8 = uVar19;
        uRam000000010b62d4c0 = uVar20;
        FUN_100cd2f20(uVar8);
      }
      else {
        FUN_100db8c40(&stack0x00000380);
      }
    }
    __ZN11codex_login4auth14default_client20get_codex_user_agent17hcb75fa4136ccd59eE
              (&stack0x00000380);
    unaff_x25[10] = 0;
    puVar13 = (undefined4 *)_malloc(4);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,4);
LAB_1008a58ec:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a58f0);
      (*pcVar4)();
    }
    *puVar13 = 0x78696e75;
    puVar14 = (undefined4 *)_malloc(5);
    if (puVar14 == (undefined4 *)0x0) {
      func_0x0001087c9084(1,5);
      goto LAB_1008a58ec;
    }
    unaff_x25[0x14] = 1;
    lVar22 = *in_stack_000000d0;
    *(long *)(unaff_x19 + 0x698) = lVar21;
    *(long *)(unaff_x19 + 0x690) = lVar9;
    *(undefined8 *)(unaff_x19 + 0x678) = uVar17;
    *(ulong *)(unaff_x19 + 0x670) = uVar11;
    *(long *)(unaff_x19 + 0x688) = lVar21;
    *(undefined8 *)(unaff_x19 + 0x680) = uVar23;
    *(undefined4 **)(unaff_x19 + 0x6a8) = puVar13;
    *(undefined8 *)(unaff_x19 + 0x6a0) = 4;
    *(undefined8 *)(unaff_x19 + 0x6b8) = 5;
    *(undefined8 *)(unaff_x19 + 0x6b0) = 4;
    *(undefined1 *)(puVar14 + 1) = 0x73;
    *puVar14 = 0x6f63616d;
    unaff_x25[0xf] = 0;
    unaff_x25[0x14] = 0;
    *(undefined8 *)(unaff_x19 + 0x6c8) = 5;
    *(undefined4 **)(unaff_x19 + 0x6c0) = puVar14;
    *(ulong *)(unaff_x19 + 0x6d0) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0x6d8) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0x6e0) = in_stack_000000a0;
    *(undefined8 *)(unaff_x19 + 0x6e8) = in_stack_00000098;
    *(long *)(unaff_x19 + 0x6f0) = lVar22 + 0x10;
    *unaff_x25 = 0;
    *(undefined8 *)(unaff_x19 + 0x710) = *(undefined8 *)(unaff_x19 + 0x6e8);
    *(undefined8 *)(unaff_x19 + 0x708) = *(undefined8 *)(unaff_x19 + 0x6e0);
    *(undefined8 *)(unaff_x19 + 0x748) = *(undefined8 *)(unaff_x19 + 0x698);
    *(undefined8 *)(unaff_x19 + 0x740) = *(undefined8 *)(unaff_x19 + 0x690);
    *(undefined8 *)(unaff_x19 + 0x758) = *(undefined8 *)(unaff_x19 + 0x6a8);
    *(undefined8 *)(unaff_x19 + 0x750) = *(undefined8 *)(unaff_x19 + 0x6a0);
    *(undefined8 *)(unaff_x19 + 0x768) = *(undefined8 *)(unaff_x19 + 0x6b8);
    *(undefined8 *)(unaff_x19 + 0x760) = *(undefined8 *)(unaff_x19 + 0x6b0);
    *(undefined8 *)(unaff_x19 + 0x778) = *(undefined8 *)(unaff_x19 + 0x6c8);
    *(undefined8 *)(unaff_x19 + 0x770) = *(undefined8 *)(unaff_x19 + 0x6c0);
    *(undefined8 *)(unaff_x19 + 0x728) = *(undefined8 *)(unaff_x19 + 0x678);
    *(undefined8 *)(unaff_x19 + 0x720) = *(undefined8 *)(unaff_x19 + 0x670);
    *(ulong *)(unaff_x19 + 0x6f8) = in_stack_000000d8;
    *(undefined8 *)(unaff_x19 + 0x700) = in_stack_000000c8;
    *(undefined8 *)(unaff_x19 + 0x718) = 0x8000000000000000;
    *(undefined8 *)(unaff_x19 + 0x738) = *(undefined8 *)(unaff_x19 + 0x688);
    *(undefined8 *)(unaff_x19 + 0x730) = *(undefined8 *)(unaff_x19 + 0x680);
    *(long *)(unaff_x19 + 0xad0) = lVar22 + 0x10;
    *(undefined1 *)(unaff_x19 + 0xb68) = 0;
    uVar11 = FUN_100892e70(unaff_x19 + 0x6f8,in_stack_000000e0);
    if ((uVar11 & 1) == 0) {
      FUN_100cf6de0(unaff_x19 + 0x6f8);
      *unaff_x25 = 1;
      FUN_100d89500((undefined8 *)(unaff_x19 + 0x670));
      if (*(undefined4 **)(unaff_x19 + 0x5f0) != (undefined4 *)0x0) {
        puVar12 = (undefined8 *)0x1;
        **(undefined4 **)(unaff_x19 + 0x5f0) = 1;
        unaff_x25[0x14] = 0;
        lVar22 = -0x8000000000000000;
        goto joined_r0x0001008a47ec;
      }
      unaff_x25[0x14] = 0;
      unaff_x25[10] = 0;
      if (((unaff_x25[9] & 1) != 0) && (*(long *)(unaff_x19 + 0x658) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x660));
      }
      unaff_x25[9] = 0;
      *(undefined2 *)(unaff_x25 + 0xb) = 0;
      if ((*(long *)(unaff_x19 + 0x610) != -0x8000000000000000) &&
         (*(long *)(unaff_x19 + 0x610) != 0)) {
        _free(*(undefined8 *)(unaff_x19 + 0x618));
      }
      if (*(long *)(unaff_x19 + 0x5f8) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x600));
      }
      puVar12 = (undefined8 *)0x0;
      unaff_x25[0xd] = 0;
      *(undefined4 *)(unaff_x19 + 0x1506) = 0;
      *(undefined2 *)(unaff_x19 + 0x150a) = 0;
      unaff_x25[8] = 1;
      lVar22 = -0x8000000000000000;
      lVar21 = in_stack_000000e0;
      goto LAB_1008a4a80;
    }
    *unaff_x25 = 3;
    unaff_x25[8] = 3;
  }
  else {
    puVar12 = (undefined8 *)_malloc(0x13);
    if (puVar12 == (undefined8 *)0x0) {
      func_0x0001087c9084(1,0x13);
      goto LAB_1008a58ec;
    }
    *(undefined4 *)((long)puVar12 + 0xf) = 0x64657a69;
    puVar12[1] = 0x696c616974696e69;
    *puVar12 = 0x2079646165726c41;
    in_stack_000000d0 = (long *)((ulong)puVar12 >> 8);
    lVar22 = 0x13;
joined_r0x0001008a47ec:
    if ((lVar21 != 0) && ((unaff_x25[10] & 1) != 0)) {
      _free(lVar9);
    }
    unaff_x25[10] = 0;
    if (((unaff_x25[9] & 1) != 0) && (*(long *)(unaff_x19 + 0x658) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x660));
    }
    unaff_x25[9] = 0;
    if (((unaff_x25[0xb] & 1) != 0) && (*(long *)(unaff_x19 + 0x640) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x648));
    }
    unaff_x25[0xb] = 0;
    if (((unaff_x25[0xc] & 1) != 0) && (*(long *)(unaff_x19 + 0x628) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x630));
    }
    unaff_x25[0xc] = 0;
    if ((*(long *)(unaff_x19 + 0x610) != -0x8000000000000000) && (*(long *)(unaff_x19 + 0x610) != 0)
       ) {
      _free(*(undefined8 *)(unaff_x19 + 0x618));
    }
    if (*(long *)(unaff_x19 + 0x5f8) != 0) {
      _free(*(undefined8 *)(unaff_x19 + 0x600));
    }
    if ((unaff_x25[0xd] & 1) != 0) {
      if (unaff_x20 != 0) {
        puVar18 = (undefined8 *)(in_stack_000000c0 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          unaff_x20 = unaff_x20 + -1;
        } while (unaff_x20 != 0);
      }
      if (in_stack_000000b8 != 0) {
        _free(in_stack_000000c0);
      }
    }
    unaff_x25[0xd] = 0;
    if ((unaff_x25[0xe] & 1) != 0) {
      FUN_100e427f4(&stack0x00000100);
    }
    unaff_x25[0xe] = 0;
    if (((unaff_x25[0xf] & 1) == 0) || ((in_stack_000000d8 & 0x7fffffffffffffff) == 0)) {
      unaff_x25[0xf] = 0;
      bVar5 = unaff_x25[0x12];
    }
    else {
      _free(in_stack_000000c8);
      unaff_x25[0xf] = 0;
      bVar5 = unaff_x25[0x12];
    }
    if (((bVar5 & 1) != 0) && (*(long *)(unaff_x19 + 0x588) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x590));
    }
    if ((((unaff_x25[0x11] & 1) != 0) && (*(long *)(unaff_x19 + 0x5b8) != -0x8000000000000000)) &&
       (*(long *)(unaff_x19 + 0x5b8) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x5c0));
    }
    if (((unaff_x25[0x10] & 1) != 0) && (*(long *)(unaff_x19 + 0x5a0) != 0)) {
      _free(*(undefined8 *)(unaff_x19 + 0x5a8));
    }
    lVar21 = *(long *)(unaff_x19 + 0x5d0);
    if (((lVar21 != -0x7fffffffffffffff) && (unaff_x25[0x13] == '\x01')) &&
       (lVar21 != -0x8000000000000000)) {
      lVar10 = *(long *)(unaff_x19 + 0x5d8);
      lVar9 = *(long *)(unaff_x19 + 0x5e0);
      if (lVar9 != 0) {
        puVar18 = (undefined8 *)(lVar10 + 8);
        do {
          if (puVar18[-1] != 0) {
            _free(*puVar18);
          }
          puVar18 = puVar18 + 3;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (lVar21 != 0) {
        _free(lVar10);
      }
    }
    *(undefined4 *)(unaff_x25 + 0x10) = 0;
    unaff_x25[8] = 1;
    lVar21 = 0x13;
    if (lVar22 != -0x7fffffffffffffff) {
LAB_1008a4a80:
      FUN_100d411d4(in_stack_000000f0);
      if (lVar22 == -0x8000000000000000) {
        if (((ulong)puVar12 & 1) != 0) {
          lVar21 = **(long **)(unaff_x19 + 0x270);
          if (*(long *)(*(long *)(unaff_x19 + 0x458) + 0x18) == 0) {
            bVar5 = *(byte *)(*(long *)(unaff_x19 + 0x458) + 0x81);
          }
          else {
            bVar5 = 0;
          }
          *(undefined8 *)(unaff_x19 + 0x4e8) = *(undefined8 *)(unaff_x19 + 0x4d8);
          *(long *)(unaff_x19 + 0x588) = lVar21 + 0xe90;
          *(undefined1 *)(unaff_x19 + 0x590) = 0;
          *(byte *)(unaff_x19 + 0x591) = bVar5 & 1;
          iVar7 = FUN_1009100fc(unaff_x19 + 0x4e8,in_stack_000000e0);
          if (iVar7 != 0) {
            *in_stack_000000f8 = -0x7fffffffffffffff;
            uVar15 = 4;
            goto LAB_1008a50e0;
          }
          lVar21 = in_stack_000000e0;
          if ((((*(char *)(unaff_x19 + 0x590) == '\x03') && (*(char *)(unaff_x19 + 0x581) == '\x03')
               ) && (*(char *)(unaff_x19 + 0x570) == '\x03')) &&
             ((*(char *)(unaff_x19 + 0x568) == '\x03' && (*(char *)(unaff_x19 + 0x520) == '\x04'))))
          {
            __ZN79__LT_tokio__sync__batch_semaphore__Acquire_u20_as_u20_core__ops__drop__Drop_GT_4drop17h3c921db99f3540f0E
                      (unaff_x19 + 0x528);
            if (*(long *)(unaff_x19 + 0x530) != 0) {
              (**(code **)(*(long *)(unaff_x19 + 0x530) + 0x18))(*(undefined8 *)(unaff_x19 + 0x538))
              ;
            }
          }
        }
        lVar22 = -0x8000000000000000;
      }
      else {
        puVar12 = (undefined8 *)((ulong)puVar12 & 0xff | (long)in_stack_000000d0 << 8);
      }
      *(undefined1 *)(unaff_x19 + 0x4e5) = 0;
      *(undefined1 *)(unaff_x19 + 0x4e6) = 0;
      func_0x000100e2ce28(unaff_x19 + 0x460);
      *(undefined1 *)(unaff_x19 + 0x4e1) = 0;
      lVar9 = **(long **)(unaff_x19 + 0x458);
      **(long **)(unaff_x19 + 0x458) = lVar9 + -1;
      LORelease();
      if (lVar9 == 1) {
        DataMemoryBarrier(2,1);
        __ZN5alloc4sync16Arc_LT_T_C_A_GT_9drop_slow17hd521f1a6e8e18d1fE(unaff_x19 + 0x458);
      }
      *(undefined1 *)(unaff_x19 + 0x4e2) = 0;
      if (*(long *)(unaff_x19 + 0x298) != -0x8000000000000000) {
        FUN_100e44f40(unaff_x19 + 0x298);
      }
      *(undefined1 *)(unaff_x19 + 0x4e3) = 0;
      if ((*(ulong *)(unaff_x19 + 0x278) & 0x7fffffffffffffff) != 0) {
        _free(*(undefined8 *)(unaff_x19 + 0x280));
      }
      *(undefined1 *)(unaff_x19 + 0x4e4) = 0;
      *in_stack_000000f8 = lVar22;
      in_stack_000000f8[1] = (long)puVar12;
      in_stack_000000f8[2] = lVar21;
      in_stack_000000f8[3] = -0x7ffffffffffffffb;
      uVar15 = 1;
      in_stack_000000f8[0xc] = -0x7f58;
      goto LAB_1008a50e0;
    }
  }
  *in_stack_000000f8 = -0x7fffffffffffffff;
  uVar15 = 3;
LAB_1008a50e0:
  *(undefined1 *)(unaff_x19 + 0x4e0) = uVar15;
  return;
}

