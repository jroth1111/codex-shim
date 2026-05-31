
ulong FUN_10612b0d8(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  param_3 = param_3 & param_2;
  lVar2 = *(long *)((long)param_1 + param_3);
  uVar1 = CONCAT17(-(lVar2 < 0),
                   CONCAT16(-((char)((ulong)lVar2 >> 0x30) < '\0'),
                            CONCAT15(-((char)((ulong)lVar2 >> 0x28) < '\0'),
                                     CONCAT14(-((char)((ulong)lVar2 >> 0x20) < '\0'),
                                              CONCAT13(-((char)((ulong)lVar2 >> 0x18) < '\0'),
                                                       CONCAT12(-((char)((ulong)lVar2 >> 0x10) <
                                                                 '\0'),CONCAT11(-((char)((ulong)
                                                  lVar2 >> 8) < '\0'),-((char)lVar2 < '\0'))))))));
  if (uVar1 == 0) {
    lVar2 = 8;
    do {
      param_3 = param_3 + lVar2 & param_2;
      lVar3 = *(long *)((long)param_1 + param_3);
      uVar1 = CONCAT17(-(lVar3 < 0),
                       CONCAT16(-((char)((ulong)lVar3 >> 0x30) < '\0'),
                                CONCAT15(-((char)((ulong)lVar3 >> 0x28) < '\0'),
                                         CONCAT14(-((char)((ulong)lVar3 >> 0x20) < '\0'),
                                                  CONCAT13(-((char)((ulong)lVar3 >> 0x18) < '\0'),
                                                           CONCAT12(-((char)((ulong)lVar3 >> 0x10) <
                                                                     '\0'),CONCAT11(-((char)((ulong)
                                                  lVar3 >> 8) < '\0'),-((char)lVar3 < '\0'))))))));
      lVar2 = lVar2 + 8;
    } while (uVar1 == 0);
  }
  uVar1 = (uVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar1 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  param_2 = param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
  if (-1 < *(char *)((long)param_1 + param_2)) {
    lVar2 = *param_1;
    uVar1 = CONCAT17(-(lVar2 < 0),
                     CONCAT16(-((char)((ulong)lVar2 >> 0x30) < '\0'),
                              CONCAT15(-((char)((ulong)lVar2 >> 0x28) < '\0'),
                                       CONCAT14(-((char)((ulong)lVar2 >> 0x20) < '\0'),
                                                CONCAT13(-((char)((ulong)lVar2 >> 0x18) < '\0'),
                                                         CONCAT12(-((char)((ulong)lVar2 >> 0x10) <
                                                                   '\0'),CONCAT11(-((char)((ulong)
                                                  lVar2 >> 8) < '\0'),-((char)lVar2 < '\0'))))))));
    uVar1 = (uVar1 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar1 & 0x5555555555555555) << 1;
    uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
    uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    return (ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3;
  }
  return param_2;
}

