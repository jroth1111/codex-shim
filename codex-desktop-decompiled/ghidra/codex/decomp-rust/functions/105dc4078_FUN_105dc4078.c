
void FUN_105dc4078(ulong *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_38;
  ulong uStack_30;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  uVar5 = *(ulong *)(param_2 + 0x28);
  if (uVar5 < uVar1) {
    lVar7 = *(long *)(param_2 + 0x18);
    bVar2 = *(byte *)(lVar7 + uVar5);
    uVar5 = uVar5 + 1;
    *(ulong *)(param_2 + 0x28) = uVar5;
    uVar4 = bVar2 - 0x30;
    if (uVar4 == 0) {
      if (uVar1 <= uVar5) {
LAB_105dc427c:
        uStack_30 = 0;
        if ((int)param_3 == 0) {
          uStack_30 = 0x8000000000000000;
        }
        param_3 = param_3 & 0xffffffff;
        goto LAB_105dc428c;
      }
      bVar2 = *(byte *)(lVar7 + uVar5);
      if (bVar2 - 0x30 < 10) {
        uStack_38 = 0xd;
        uVar5 = func_0x000108a492a4(param_2,&uStack_38);
        goto LAB_105dc4208;
      }
      if (bVar2 == 0x2e) {
        func_0x000105dc3e80(&uStack_38,param_2,param_3,0,0);
      }
      else {
        if ((bVar2 != 0x45) && (bVar2 != 0x65)) goto LAB_105dc427c;
        func_0x000105dc42c8(&uStack_38,param_2,param_3,0,0);
      }
      if (((uint)uStack_38 & 1) == 0) {
        param_3 = 0;
        goto LAB_105dc428c;
      }
LAB_105dc4228:
      param_3 = 3;
LAB_105dc428c:
      *param_1 = param_3;
      param_1[1] = uStack_30;
      return;
    }
    if (bVar2 - 0x31 < 9) {
      uVar6 = (ulong)uVar4 & 0xff;
      if (uVar5 < uVar1) {
        do {
          uVar4 = *(byte *)(lVar7 + uVar5) - 0x30;
          if (9 < uVar4) goto LAB_105dc4184;
          if ((0x1999999999999998 < uVar6) &&
             ((uVar6 != 0x1999999999999999 || (5 < (uVar4 & 0xff))))) {
            __ZN10serde_json2de21Deserializer_LT_R_GT_18parse_long_integer17h692384e8931ecee4E
                      (&uStack_38,param_2,param_3,uVar6);
            if ((uint)uStack_38 != 1) {
              param_1[1] = uStack_30;
              *param_1 = 0;
              return;
            }
            goto LAB_105dc4228;
          }
          uVar5 = uVar5 + 1;
          *(ulong *)(param_2 + 0x28) = uVar5;
          uVar6 = ((ulong)uVar4 & 0xff) + uVar6 * 10;
        } while (uVar1 != uVar5);
      }
      else {
LAB_105dc4184:
        if (uVar5 < uVar1) {
          cVar3 = *(char *)(lVar7 + uVar5);
          if (cVar3 == '.') {
            func_0x000105dc3e80(&uStack_38);
          }
          else {
            if ((cVar3 != 'E') && (cVar3 != 'e')) goto LAB_105dc41c0;
            func_0x000105dc42c8(&uStack_38);
          }
          if (((uint)uStack_38 & 1) == 0) {
            uVar5 = 0;
            goto LAB_105dc423c;
          }
          goto LAB_105dc4228;
        }
      }
LAB_105dc41c0:
      if ((param_3 & 1) == 0) {
        uStack_30 = -uVar6;
        if ((long)uStack_30 < 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 0;
          uStack_30 = (ulong)(double)uVar6 | 0x8000000000000000;
        }
      }
      else {
        uVar5 = 1;
        uStack_30 = uVar6;
      }
LAB_105dc423c:
      *param_1 = uVar5;
      param_1[1] = uStack_30;
      return;
    }
    uStack_38 = 0xd;
  }
  else {
    uStack_38 = 5;
  }
  uVar5 = func_0x000108a499a0(param_2,&uStack_38);
LAB_105dc4208:
  *param_1 = 3;
  param_1[1] = uVar5;
  return;
}

