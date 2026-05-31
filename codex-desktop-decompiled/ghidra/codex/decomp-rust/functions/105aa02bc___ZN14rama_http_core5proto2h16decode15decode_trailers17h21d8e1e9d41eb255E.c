
/* WARNING: Type propagation algorithm not settling */

void __ZN14rama_http_core5proto2h16decode15decode_trailers17h21d8e1e9d41eb255E
               (undefined8 *param_1,long *param_2,undefined8 *******param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 ******ppppppuVar4;
  undefined8 uVar5;
  undefined8 *****pppppuVar6;
  undefined8 ******ppppppuVar7;
  long lVar8;
  undefined8 ******ppppppuVar9;
  ulong uVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined8 ******ppppppuStack_170;
  undefined1 auStack_168 [24];
  undefined8 uStack_150;
  undefined8 *******pppppppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined *puStack_118;
  ulong uStack_110;
  undefined8 *****pppppuStack_108;
  ulong uStack_100;
  undefined1 uStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 auStack_d8 [3];
  undefined8 ******ppppppuStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *******pppppppuStack_98;
  undefined8 ******ppppppuStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 uStack_80;
  char cStack_78;
  undefined7 uStack_77;
  undefined1 auStack_69 [9];
  
  uVar5 = 0;
  uStack_178 = 0;
  uStack_1b0 = 8;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 8;
  uStack_188 = 2;
  uStack_180 = 0;
  uStack_190 = 0;
  uVar10 = (long)param_3 * 0x20;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  if (((ulong)param_3 >> 0x3b != 0) || (0x7ffffffffffffff8 < uVar10)) {
LAB_105aa0680:
    func_0x0001087c9084(uVar5,uVar10);
LAB_105aa069c:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x105aa06a0);
    (*pcVar2)();
  }
  if (uVar10 == 0) {
    pppppppuVar13 = (undefined8 *******)0x0;
    ppppppuVar4 = (undefined8 ******)0x8;
    ppppppuVar9 = ppppppuVar4;
    if ((undefined8 *******)0x1 < param_3) goto LAB_105aa0358;
LAB_105aa038c:
    ppppppuVar9 = ppppppuVar4;
    if (param_3 == (undefined8 *******)0x0) goto LAB_105aa039c;
  }
  else {
    ppppppuVar4 = (undefined8 ******)_malloc(uVar10);
    if (ppppppuVar4 == (undefined8 ******)0x0) {
      uVar5 = 8;
      goto LAB_105aa0680;
    }
    ppppppuVar9 = ppppppuVar4;
    pppppppuVar13 = param_3;
    if (param_3 < (undefined8 *******)0x2) goto LAB_105aa038c;
LAB_105aa0358:
    lVar8 = (long)param_3 + -1;
    ppppppuVar7 = ppppppuVar9;
    do {
      ppppppuVar4 = ppppppuVar7 + 4;
      ppppppuVar7[1] = (undefined8 *****)0x0;
      *ppppppuVar7 = (undefined8 *****)0x1;
      ppppppuVar7[3] = (undefined8 *****)0x0;
      ppppppuVar7[2] = (undefined8 *****)0x1;
      lVar8 = lVar8 + -1;
      ppppppuVar7 = ppppppuVar4;
    } while (lVar8 != 0);
  }
  ppppppuVar4[1] = (undefined8 *****)0x0;
  *ppppppuVar4 = (undefined8 *****)0x1;
  ppppppuVar4[3] = (undefined8 *****)0x0;
  ppppppuVar4[2] = (undefined8 *****)0x1;
  ppppppuVar4 = ppppppuVar9;
LAB_105aa039c:
  pppppppuStack_98 = (undefined8 *******)*param_2;
  ppppppuStack_90 = (undefined8 ******)((long)pppppppuStack_98 + param_2[1]);
  uStack_150 = (undefined8 ******)((ulong)uStack_150._4_4_ << 0x20);
  ppppppuStack_c0 = ppppppuVar4;
  pppppppuStack_b8 = param_3;
  pppppppuStack_88 = pppppppuStack_98;
  FUN_10579e380(&pppppppuStack_f0,&ppppppuStack_c0,&pppppppuStack_98,&uStack_150);
  if (pppppppuStack_f0 == (undefined8 *******)0x2) {
    uVar5 = func_0x000105aa7f70(0x14,(ulong)ppppppuStack_e8 & 0xff);
  }
  else {
    if (((ulong)pppppppuStack_f0 & 1) == 0) {
      if (pppppppuStack_b8 != (undefined8 *******)0x0) {
        ppppppuVar7 = ppppppuStack_c0 + (long)pppppppuStack_b8 * 4;
        ppppppuVar9 = ppppppuStack_c0;
        do {
          ppppppuStack_170 = ppppppuVar9;
          __ZN4http6header4name10HeaderName10from_bytes17h99cd8f22dc0ad085E
                    (&pppppppuStack_98,*ppppppuVar9,ppppppuVar9[1]);
          if ((int)pppppppuStack_98 == 1) {
            pppppppuStack_f0 = &ppppppuStack_170;
            pppppppuStack_98 = &pppppppuStack_f0;
            ppppppuStack_90 = (undefined8 ******)&DAT_105aa9b28;
            __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                      (auStack_168,s_Invalid_header_name__108b1971c,&pppppppuStack_98);
            uVar5 = __ZN3std2io5error5Error3new17h29bf53227769a2d6E(0x14,auStack_168);
            goto LAB_105aa03fc;
          }
          uStack_138 = CONCAT71(uStack_77,cStack_78);
          pppppppuStack_148 = pppppppuStack_88;
          uStack_150 = ppppppuStack_90;
          uStack_140 = uStack_80;
          pppppuVar11 = ppppppuStack_170[3];
          if (pppppuVar11 == (undefined8 *****)0x0) {
            uStack_100 = 0;
            uVar10 = 1;
            puStack_118 = &UNK_10b205a90;
          }
          else {
            pppppuVar6 = (undefined8 *****)0x0;
            pppppuVar12 = ppppppuStack_170[2];
            do {
              bVar1 = *(byte *)((long)pppppuVar12 + (long)pppppuVar6);
              if (bVar1 < 0x20) {
                if (bVar1 != 9) {
LAB_105aa058c:
                  pppppppuStack_f0 = &ppppppuStack_170;
                  pppppppuStack_98 = &pppppppuStack_f0;
                  ppppppuStack_90 = (undefined8 ******)&DAT_105aa9b28;
                  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
                            (auStack_130,s_Invalid_header_value__108b19703,&pppppppuStack_98);
                  uVar5 = __ZN3std2io5error5Error3new17h29bf53227769a2d6E(0x14,auStack_130);
                  *param_1 = 3;
                  param_1[1] = uVar5;
                  if (uStack_150 != (undefined8 ******)0x0) {
                    (*(code *)uStack_150[4])(&uStack_138,pppppppuStack_148,uStack_140);
                  }
                  goto joined_r0x000105aa05e8;
                }
              }
              else if (bVar1 == 0x7f) goto LAB_105aa058c;
              pppppuVar6 = (undefined8 *****)((long)pppppuVar6 + 1);
            } while (pppppuVar11 != pppppuVar6);
            uVar10 = _malloc(pppppuVar11);
            if (uVar10 == 0) {
              func_0x0001087c9084(1,pppppuVar11);
              goto LAB_105aa069c;
            }
            _memcpy(uVar10,pppppuVar12,pppppuVar11);
            bVar3 = (uVar10 & 1) == 0;
            uStack_100 = uVar10;
            if (bVar3) {
              uStack_100 = uVar10 | 1;
            }
            puStack_118 = &__ZN5bytes5bytes21PROMOTABLE_ODD_VTABLE17h3bbe6c2b6e01dcc1E;
            if (bVar3) {
              puStack_118 = &__ZN5bytes5bytes22PROMOTABLE_EVEN_VTABLE17ha50ac4583b900c48E;
            }
          }
          uStack_f8 = 0;
          pppppppuStack_b8 = pppppppuStack_148;
          ppppppuStack_c0 = uStack_150;
          uStack_a8 = uStack_138;
          uStack_b0 = uStack_140;
          uStack_110 = uVar10;
          pppppuStack_108 = pppppuVar11;
          func_0x000105ab10dc(&pppppppuStack_98,&uStack_1d0,&ppppppuStack_c0,&puStack_118);
          if (cStack_78 == '\x03') {
            func_0x000108a07a3c(&UNK_109b11fdd,0x17,auStack_69,&UNK_10b406248,&UNK_10b4032e8);
            goto LAB_105aa069c;
          }
          ppppppuStack_e8 = ppppppuStack_90;
          pppppppuStack_f0 = pppppppuStack_98;
          auStack_d8[0] = uStack_80;
          pppppppuStack_e0 = pppppppuStack_88;
          if (cStack_78 != '\x02') {
            (*(code *)pppppppuStack_98[4])(auStack_d8,ppppppuStack_90,pppppppuStack_88);
          }
          ppppppuVar9 = ppppppuVar9 + 4;
        } while (ppppppuVar9 != ppppppuVar7);
      }
      param_1[5] = uStack_1a8;
      param_1[4] = uStack_1b0;
      param_1[7] = uStack_198;
      param_1[6] = uStack_1a0;
      param_1[9] = uStack_188;
      param_1[8] = uStack_190;
      param_1[0xb] = CONCAT62(uStack_176,uStack_178);
      param_1[10] = uStack_180;
      param_1[1] = uStack_1c8;
      *param_1 = uStack_1d0;
      param_1[3] = uStack_1b8;
      param_1[2] = uStack_1c0;
      if (pppppppuVar13 == (undefined8 *******)0x0) {
        return;
      }
      _free(ppppppuVar4);
      return;
    }
    uVar5 = __ZN3std2io5error5Error3new17h949302c01fe11b24E(0x14,&UNK_109b12e10,0xe);
  }
LAB_105aa03fc:
  *param_1 = 3;
  param_1[1] = uVar5;
joined_r0x000105aa05e8:
  if (pppppppuVar13 != (undefined8 *******)0x0) {
    _free(ppppppuVar4);
  }
  func_0x000105aaddc8(&uStack_1d0);
  return;
}

