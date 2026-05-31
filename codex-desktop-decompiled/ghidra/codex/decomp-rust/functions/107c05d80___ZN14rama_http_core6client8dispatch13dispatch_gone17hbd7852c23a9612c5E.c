
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * __ZN14rama_http_core6client8dispatch13dispatch_gone17hbd7852c23a9612c5E(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  plVar3 = (long *)_malloc(0x18);
  if (plVar3 == (long *)0x0) {
    __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
  }
  else {
    *plVar3 = 0;
    *(undefined2 *)(plVar3 + 2) = 0x501;
    puVar1 = &UNK_109b15333;
    if ((___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
        0x7fffffffffffffff) == 0) {
      uVar7 = 0x21;
      lVar4 = _malloc(0x21);
    }
    else {
      iVar2 = func_0x000108a82c0c();
      uVar7 = 0x21;
      if (iVar2 == 0) {
        uVar7 = 0x12;
      }
      if (iVar2 == 0) {
        puVar1 = &UNK_109b15321;
      }
      lVar4 = _malloc(uVar7);
    }
    if (lVar4 == 0) {
      func_0x0001087c9084(1,uVar7);
      goto LAB_108a32288;
    }
    _memcpy(lVar4,puVar1,uVar7);
    puVar5 = (undefined8 *)_malloc(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = uVar7;
      puVar5[1] = lVar4;
      puVar5[2] = uVar7;
      lVar4 = *plVar3;
      if (lVar4 != 0) {
        puVar8 = (undefined8 *)plVar3[1];
        pcVar6 = (code *)*puVar8;
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(lVar4);
        }
        if (puVar8[1] != 0) {
          _free(lVar4);
        }
      }
      *plVar3 = (long)puVar5;
      plVar3[1] = (long)&UNK_10b406cc0;
      return plVar3;
    }
  }
  __ZN5alloc5alloc18handle_alloc_error17h77990a064974ed31E(8,0x18);
LAB_108a32288:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x108a3228c);
  (*pcVar6)();
}

