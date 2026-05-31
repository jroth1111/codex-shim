
undefined8 FUN_1006f3f84(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong extraout_x1;
  byte *pbVar5;
  ulong uVar6;
  byte bVar7;
  long unaff_x19;
  byte *unaff_x21;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 unaff_x25;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined1 auVar10 [16];
  byte bStack0000000000000090;
  undefined7 uStack0000000000000091;
  long lStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  
  *(char **)(unaff_x29 + -0x90) = s__write_socks5_server_reply_w___l_108ac43a3;
  *(long *)(unaff_x29 + -0x88) = unaff_x29 + -0x80;
  *(long *)(unaff_x29 + -0xa0) = unaff_x29 + -0x90;
  *(undefined **)(unaff_x29 + -0x98) = &UNK_10b208fd0;
  lStack0000000000000098 = unaff_x29 + -0xa0;
  _bStack0000000000000090 = 1;
  uStack00000000000000a0 = 1;
  uStack00000000000000a8 = param_1;
  FUN_1006f48f0(&stack0x00000090);
  uVar8 = *(ulong *)(unaff_x19 + 0x10);
  if ((long)uVar8 < 0) {
    uVar9 = 0;
LAB_1006f3fc8:
    FUN_107c03c64(uVar9,uVar8);
LAB_1006f431c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f4320);
    (*pcVar2)();
  }
  if (uVar8 == 0) {
    lVar4 = 1;
  }
  else {
    uVar9 = 1;
    lVar4 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(uVar8,1);
    if (lVar4 == 0) goto LAB_1006f3fc8;
  }
  uVar6 = 0x40 - LZCOUNT(uVar8 >> 10);
  if (6 < uVar6) {
    uVar6 = 7;
  }
  *(long *)(unaff_x19 + 0x38) = lVar4;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(ulong *)(unaff_x19 + 0x48) = uVar8;
  *(ulong *)(unaff_x19 + 0x50) = uVar6 << 2 | 1;
  bVar7 = unaff_x21[0x23];
  if (unaff_x21[0x22] == 0) {
    bVar7 = 5;
  }
  bStack0000000000000090 = bVar7;
  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
            (unaff_x19 + 0x38,&stack0x00000090,1);
  bStack0000000000000090 = unaff_x21[0x20];
  if (8 < bStack0000000000000090) {
    bStack0000000000000090 = unaff_x21[0x21];
  }
  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
            (unaff_x19 + 0x38,&stack0x00000090,1);
  bStack0000000000000090 = 0;
  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
            (unaff_x19 + 0x38,&stack0x00000090,1);
  bVar7 = *unaff_x21;
  uVar8 = (ulong)bVar7;
  if (bVar7 == 0x1a) {
    if ((unaff_x21[1] & 1) == 0) {
      _bStack0000000000000090 = CONCAT71(uStack0000000000000091,1);
      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                (unaff_x19 + 0x38,&stack0x00000090,1);
      _bStack0000000000000090 =
           CONCAT44(uStack0000000000000091._3_4_,*(undefined4 *)(unaff_x21 + 2));
      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                (unaff_x19 + 0x38,&stack0x00000090,4);
    }
    else {
      _bStack0000000000000090 = CONCAT71(uStack0000000000000091,4);
      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                (unaff_x19 + 0x38,&stack0x00000090,1);
      uVar9 = *(undefined8 *)(unaff_x21 + 2);
      unaff_x27[1] = *(undefined8 *)(unaff_x21 + 10);
      *unaff_x27 = uVar9;
      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                (unaff_x19 + 0x38,&stack0x00000090,0x10);
    }
  }
  else {
    bStack0000000000000090 = 3;
    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
              (unaff_x19 + 0x38,&stack0x00000090,1);
    lVar4 = uVar8 - 0x17;
    if (bVar7 < 0x18) {
      lVar4 = 0;
    }
    if (lVar4 == 0) {
      _bStack0000000000000090 = CONCAT71(uStack0000000000000091,bVar7);
      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                (unaff_x19 + 0x38,&stack0x00000090,1);
      pbVar5 = unaff_x21 + 1;
    }
    else if (lVar4 == 1) {
      uVar8 = *(ulong *)(unaff_x21 + 0x10);
      _bStack0000000000000090 = CONCAT71(uStack0000000000000091,(char)uVar8);
      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                (unaff_x19 + 0x38,&stack0x00000090,1);
      pbVar5 = *(byte **)(unaff_x21 + 8);
    }
    else {
      uVar8 = *(ulong *)(unaff_x21 + 0x10);
      _bStack0000000000000090 = CONCAT71(uStack0000000000000091,(char)uVar8);
      __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
                (unaff_x19 + 0x38,&stack0x00000090,1);
      pbVar5 = (byte *)(*(long *)(unaff_x21 + 8) + 0x10);
    }
    __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
              (unaff_x19 + 0x38,pbVar5,uVar8);
  }
  _bStack0000000000000090 =
       CONCAT62(uStack0000000000000091._1_6_,
                *(ushort *)(unaff_x21 + 0x18) >> 8 | *(ushort *)(unaff_x21 + 0x18) << 8);
  __ZN74__LT_bytes__bytes_mut__BytesMut_u20_as_u20_bytes__buf__buf_mut__BufMut_GT_9put_slice17h53b7363a759550cdE
            (unaff_x19 + 0x38,&stack0x00000090,2);
  lVar4 = *(long *)(unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x20) = unaff_x25;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x19 + 0x38);
  *(long *)(unaff_x19 + 0x30) = lVar4;
  do {
    if (lVar4 == 0) {
      uVar8 = 0;
      plVar3 = *(long **)(unaff_x19 + 0x50);
      goto joined_r0x0001006f3938;
    }
    auVar10 = func_0x0001060f8f1c(*(undefined8 *)(unaff_x19 + 0x20));
    uVar8 = auVar10._8_8_;
    if (auVar10._0_8_ == 2) {
      *(undefined1 *)(unaff_x19 + 0x18) = 6;
      return 1;
    }
    if ((auVar10._0_8_ & 1) != 0) goto LAB_1006f3594;
    lVar1 = *(long *)(unaff_x19 + 0x28);
    uVar6 = *(ulong *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x28) = 1;
    *(undefined8 *)(unaff_x19 + 0x30) = 0;
    lVar4 = uVar6 - uVar8;
    if (uVar6 < uVar8) {
      __ZN4core9panicking9panic_fmt17h6f8816b337451651E(&UNK_108cc4086,0x13,&UNK_10b24e568);
      goto LAB_1006f431c;
    }
    *(ulong *)(unaff_x19 + 0x28) = lVar1 + uVar8;
    *(long *)(unaff_x19 + 0x30) = lVar4;
  } while (uVar8 != 0);
  uVar8 = 0x1700000003;
LAB_1006f3594:
  plVar3 = *(long **)(unaff_x19 + 0x50);
joined_r0x0001006f3938:
  if (((ulong)plVar3 & 1) == 0) {
    lVar4 = plVar3[4];
    plVar3[4] = lVar4 + -1;
    LORelease();
    if (lVar4 != 1) goto LAB_1006f397c;
    if (*plVar3 != 0) {
      _free(plVar3[1],uVar8);
      uVar8 = extraout_x1;
    }
  }
  else {
    if (*(long *)(unaff_x19 + 0x48) + ((ulong)plVar3 >> 5) == 0) goto LAB_1006f397c;
    plVar3 = (long *)(*(long *)(unaff_x19 + 0x38) - ((ulong)plVar3 >> 5));
  }
  _free(plVar3,uVar8);
LAB_1006f397c:
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  return 0;
}

