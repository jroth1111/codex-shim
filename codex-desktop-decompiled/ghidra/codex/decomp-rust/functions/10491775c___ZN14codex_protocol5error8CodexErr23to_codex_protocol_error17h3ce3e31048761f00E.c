
ulong __ZN14codex_protocol5error8CodexErr23to_codex_protocol_error17h3ce3e31048761f00E
                (ulong *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar3 = *param_1 ^ 0x8000000000000000;
  if (-1 < (long)*param_1) {
    uVar3 = 10;
  }
  uVar1 = 0xe;
  iVar2 = (int)uVar3 + -2;
  puVar5 = &UNK_108e51c92;
  puVar4 = (undefined *)0xa;
  switch(uVar3) {
  case 2:
    return (ulong)(uint)(iVar2 * 0x10000) | 0x8e51c9200000000;
  case 3:
  case 4:
  case 0x19:
    uVar1 = 8;
    puVar4 = puVar5;
  default:
    return (ulong)(uint)(iVar2 * 0x10000) | (long)puVar4 << 0x20 | uVar1;
  case 5:
  case 0x14:
  case 0x16:
    return (ulong)(uint)(iVar2 * 0x10000) | 0x8e51c9200000006;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x18:
    goto code_r0x0001049177fc;
  case 0xd:
  case 0x12:
  case 0x13:
    return (ulong)(uint)(iVar2 * 0x10000) | 0x8e51c9200000001;
  case 0xe:
    return (ulong)(uint)(iVar2 * 0x10000) | 0x8e51c9200000002;
  case 0xf:
    return (ulong)(uint)(iVar2 * 0x10000) | 0x8e51c9200000003;
  case 0x10:
    if (*(short *)(param_1[4] + 0x58) != 3) {
      return 5;
    }
    puVar5 = (undefined *)(ulong)*(ushort *)(param_1[4] + 0x5a);
    uVar1 = 5;
    iVar2 = 1;
code_r0x0001049177fc:
    return (ulong)(uint)(iVar2 << 0x10) | (long)puVar5 << 0x20 | uVar1;
  case 0x11:
    if (*(short *)(param_1[1] + 0x58) != 3) {
      return 4;
    }
    return (ulong)CONCAT24(*(undefined2 *)(param_1[1] + 0x5a),0x10000) | 4;
  case 0x15:
    return (ulong)CONCAT24((short)param_1[4],0x10000) | 0xb;
  case 0x17:
    return (ulong)(uint)(iVar2 * 0x10000) | 0x8e51c9200000009;
  case 0x1a:
    return (ulong)(uint)(iVar2 * 0x10000) | 0x8e51c9200000007;
  }
}

