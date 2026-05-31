
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a6dd7c(undefined8 param_1)

{
  code *pcVar1;
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  uint7 uStack_af;
  ulong uStack_98;
  
  uStack_98 = uStack_98 & 0xffffffffffffff00;
  pauVar2 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar2[1][0] == '\x01') {
    auVar4 = *pauVar2;
  }
  else {
    auVar4 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar2 + 8) = auVar4._8_8_;
    pauVar2[1][0] = 1;
  }
  *(long *)*pauVar2 = auVar4._0_8_ + 1;
  puVar3 = (undefined8 *)_malloc(0x80);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[9] = 2;
    puVar3[8] = (ulong)uStack_af << 8;
    puVar3[0xb] = 0;
    puVar3[10] = &UNK_108da0bb0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    *(undefined1 (*) [16])(puVar3 + 0xe) = auVar4;
    puVar3[1] = 1;
    *puVar3 = 1;
    puVar3[3] = uStack_98;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = param_1;
    puVar3[7] = 0;
    puVar3[6] = 0;
    return;
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x80);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a6de60);
  (*pcVar1)();
}

