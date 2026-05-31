
void __ZN10codex_core12codex_thread20ThreadConfigSnapshot14sandbox_policy17h0b4046ceb6115857E
               (undefined8 param_1,long param_2)

{
  ulong *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_70 [16];
  long lStack_60;
  ulong *puStack_58;
  long lStack_50;
  
  func_0x00010492284c(auStack_70,param_2 + 0x100);
  uVar3 = *(ulong *)(param_2 + 0x100);
  if (uVar3 < 0x8000000000000001) {
    uVar3 = 0;
  }
  if ((uVar3 & 0x7fffffffffffffff) == 0) {
    lVar4 = 0x120;
  }
  else {
    bVar2 = 1;
    if ((uVar3 & 0x7fffffffffffffff) == 1) goto LAB_102ce5d18;
    lVar4 = 0x108;
  }
  bVar2 = *(byte *)(param_2 + lVar4);
LAB_102ce5d18:
  __ZN16codex_sandboxing7manager51compatibility_sandbox_policy_for_permission_profile17h1a4b6222c894c3f8E
            (param_1,param_2 + 0x100,auStack_70,bVar2 & 1,*(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(param_2 + 0x40));
  puVar1 = puStack_58;
  lVar4 = lStack_50;
  do {
    if (lVar4 == 0) {
      if (lStack_60 != 0) {
        _free(puStack_58);
      }
      return;
    }
    uVar3 = *puVar1;
    lVar5 = uVar3 + 0x7ffffffffffffffb;
    if (uVar3 < 0x8000000000000005) {
      lVar5 = 2;
    }
    if ((lVar5 == 0) || (lVar5 == 1)) {
      uVar3 = puVar1[1];
joined_r0x000102ce5d54:
      if (uVar3 != 0) {
        lVar5 = 0x10;
LAB_102ce5d5c:
        _free(*(undefined8 *)((long)puVar1 + lVar5));
      }
    }
    else {
      uVar6 = uVar3 ^ 0x8000000000000000;
      if (-1 < (long)uVar3) {
        uVar6 = 5;
      }
      if (uVar6 < 5) {
        if (uVar6 == 2) {
          uVar3 = puVar1[1] & 0x7fffffffffffffff;
          goto joined_r0x000102ce5d54;
        }
      }
      else {
        if (uVar3 != 0) {
          _free(puVar1[1]);
        }
        if ((puVar1[3] & 0x7fffffffffffffff) != 0) {
          lVar5 = 0x20;
          goto LAB_102ce5d5c;
        }
      }
    }
    puVar1 = puVar1 + 7;
    lVar4 = lVar4 + -1;
  } while( true );
}

