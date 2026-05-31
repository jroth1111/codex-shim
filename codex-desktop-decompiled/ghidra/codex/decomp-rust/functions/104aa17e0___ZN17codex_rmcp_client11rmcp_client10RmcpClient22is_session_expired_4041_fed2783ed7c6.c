
bool __ZN17codex_rmcp_client11rmcp_client10RmcpClient22is_session_expired_40417h844604da26d87a73E
               (ulong *param_1)

{
  short *psVar1;
  bool bVar2;
  ulong uVar3;
  long lStack_30;
  long lStack_28;
  
  uVar3 = *param_1;
  if (uVar3 != 0x8000000000000006) {
    if (uVar3 < 0x8000000000000001) {
      uVar3 = 0;
    }
    if ((uVar3 & 0x7fffffffffffffff) == 1) {
      psVar1 = (short *)param_1[4];
      (**(code **)(param_1[5] + 0x38))(&lStack_30,psVar1);
      if (lStack_28 == 0x6c0ae5a07eaffde9 && lStack_30 == -0x403b3494c1c35256) {
        bVar2 = *psVar1 == 0xe;
      }
      else {
        bVar2 = false;
      }
      return bVar2;
    }
  }
  return false;
}

