
/* WARNING: Removing unreachable block (ram,0x0001007f9108) */
/* WARNING: Removing unreachable block (ram,0x0001007f9120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007f8cb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  char *unaff_x20;
  long unaff_x26;
  int unaff_w27;
  ulong *unaff_x28;
  char in_wzr;
  undefined8 uVar9;
  undefined8 uVar10;
  char *in_stack_00000010;
  undefined4 *in_stack_00000018;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  byte in_stack_00000cf4;
  long in_stack_00000cf8;
  undefined8 in_stack_00000d00;
  
  puVar12 = &stack0x00000a20;
  lVar11 = 1;
  uVar13 = 1;
  __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E();
  lVar6 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                    (&stack0x00000860);
  bVar3 = *(byte *)(lVar6 + 0x68) - 7;
  if (*(byte *)(lVar6 + 0x68) < 7) {
    bVar3 = 6;
  }
  if (bVar3 < 3) {
    if ((bVar3 != 0) && (bVar3 != 2)) goto LAB_1007f8ed8;
LAB_1007f9024:
    _memcpy(&stack0x00000a40,&stack0x00000ba0,0x158);
    func_0x000105a85b30(&stack0x000008c0,in_stack_00000cf8,&stack0x00000a40,&stack0x00000860,
                        unaff_x20 + 8);
    _memcpy(&stack0x00000a48,&stack0x000008c8,0x150);
    func_0x00010080a640(in_stack_00000cf8 + 0xd8,&stack0x00000a40,in_stack_00000d00,&stack0x00000860
                        ,unaff_x20[0x60],in_stack_00000cf8 + 200);
    func_0x000105a91b30(in_stack_00000cf8 + 0xd8,&stack0x00000860,1,unaff_x20 + 8,
                        in_stack_00000cf8 + 200);
    func_0x000105a8c434(in_stack_00000cf8,&stack0x00000860,unaff_x20 + 8);
  }
  else {
    if (bVar3 == 3) {
      lVar8 = 0x6a;
    }
    else {
      if (bVar3 != 4) goto LAB_1007f8ed8;
      lVar8 = 0x69;
    }
    if (*(char *)(lVar6 + lVar8) != '\x01') goto LAB_1007f9024;
LAB_1007f8ed8:
    if ((in_stack_00000cf4 & 1) == 0) {
      uVar7 = (undefined4)((ulong)puVar12 >> 0x20);
      if ((*unaff_x28 < 2) &&
         (((bRam000000010b636ff0 - 1 < 2 ||
           ((bRam000000010b636ff0 != 0 &&
            (cVar4 = __ZN12tracing_core8callsite15DefaultCallsite8register17hd8a0d35d4a8f8e8bE
                               (&
                                __ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                               ), cVar4 != '\0')))) &&
          (iVar5 = __ZN7tracing15__macro_support12__is_enabled17h508af3f20e7344eeE
                             (
                             ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                             ), iVar5 != 0)))) {
        __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                  (&stack0x00000860);
        __ZN12tracing_core5event5Event8dispatch17h50a390618bcffa4fE
                  (___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                   ,&stack0x00000a40);
        lVar6 = 
        ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          uVar7 = (undefined4)
                  ((ulong)*(undefined8 *)
                           (
                           ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                           + 0x20) >> 0x20);
          uVar13 = *(undefined8 *)
                    (
                    ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
                    + 0x28);
          lVar11 = 0;
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x000008c0);
          if (iVar5 != 0) {
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar6,puVar2,puVar1,&stack0x000008c0,&stack0x00000a40);
          }
        }
      }
      else {
        lVar6 = 
        ___ZN14rama_http_core2h25proto7streams7streams5Inner12recv_headers28__u7b__u7b_closure_u7d__u7d_10__CALLSITE17hccacef5b81102c0bE
        ;
        if ((__ZN12tracing_core10dispatcher6EXISTS17h9b1f5f531bc653aaE == '\0') &&
           (3 < ___ZN3log20MAX_LOG_LEVEL_FILTER17h2019f7c33388e688E)) {
          puVar1 = puRam000000010b634c20;
          if (lRam000000010b66fd20 != 2) {
            puVar1 = &UNK_10b3c24c8;
          }
          puVar2 = puRam000000010b634c18;
          if (lRam000000010b66fd20 != 2) {
            puVar2 = &UNK_109adfc03;
          }
          iVar5 = (**(code **)(puVar1 + 0x18))(puVar2,&stack0x00000890);
          if (iVar5 != 0) {
            lVar11 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                               (&stack0x00000860);
            lVar11 = lVar11 + 0x13c;
            uVar7 = 1;
            __ZN7tracing15__macro_support13__tracing_log17h72768b16bee39960E
                      (lVar6,puVar2,puVar1,&stack0x00000890,&stack0x00000a40);
          }
        }
      }
      lVar6 = __ZN90__LT_rama_http_core__h2__proto__streams__store__Ptr_u20_as_u20_core__ops__deref__Deref_GT_5deref17h53b0513d4d94fba8E
                        (&stack0x00000860);
      lVar11 = CONCAT44(*(undefined4 *)(lVar6 + 0x13c),
                        (int)CONCAT62((int6)((ulong)lVar11 >> 0x10),0x100));
      puVar12 = (undefined1 *)CONCAT44(uVar7,1);
      FUN_100e3fdac(&stack0x00000ba0);
      goto LAB_1007f9160;
    }
    _memcpy(&stack0x00000a40,&stack0x00000ba0,0x158);
    __ZN14rama_http_core2h25proto7streams4recv4Recv13recv_trailers17hf750379813cea8faE
              (&stack0x00000890,in_stack_00000cf8,&stack0x00000a40,&stack0x00000860);
  }
  FUN_100811c18(&stack0x000008c0,in_stack_00000cf8,in_stack_00000d00,&stack0x00000860,unaff_x20 + 8,
                &stack0x00000890);
LAB_1007f9160:
  __ZN14rama_http_core2h25proto7streams6counts6Counts16transition_after17ha1da6b7002dcf5f5E
            (unaff_x20 + 8,&stack0x00000ba0,unaff_w27 != 1000000000);
  uVar10 = *(undefined8 *)(unaff_x26 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x26 + 0x60);
  if (*in_stack_00000010 == '\x01') {
    *in_stack_00000010 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E(in_stack_00000010,0);
  }
  if (*unaff_x20 == '\x01') {
    *unaff_x20 = in_wzr;
  }
  else {
    __ZN11parking_lot9raw_mutex8RawMutex11unlock_slow17h37f4fcce25a32539E();
  }
  if ((char)lVar11 == '\x04') {
    uVar7 = 2;
  }
  else {
    *(undefined8 *)(in_stack_00000018 + 10) = uVar10;
    *(undefined8 *)(in_stack_00000018 + 8) = uVar9;
    *(char *)(in_stack_00000018 + 2) = (char)lVar11;
    *(char *)((long)in_stack_00000018 + 9) = (char)((ulong)lVar11 >> 8);
    *(short *)((long)in_stack_00000018 + 10) = (short)((ulong)lVar11 >> 0x10);
    in_stack_00000018[3] = (int)((ulong)lVar11 >> 0x20);
    *(undefined1 **)(in_stack_00000018 + 4) = puVar12;
    *(undefined8 *)(in_stack_00000018 + 6) = uVar13;
    uVar7 = 4;
  }
  *in_stack_00000018 = uVar7;
  return;
}

