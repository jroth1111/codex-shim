
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ******* FUN_10146c9ac(long *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined1 (*pauVar5) [16];
  uint *******pppppppuVar6;
  uint *******extraout_x1;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  undefined8 uVar10;
  uint *******unaff_x22;
  uint *******unaff_x23;
  uint unaff_w25;
  uint *******unaff_x26;
  uint *******pppppppuVar11;
  uint ******ppppppuVar12;
  uint ******ppppppuVar13;
  uint ******ppppppuVar14;
  uint ******ppppppuVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  uint *******pppppppuStack_1d0;
  uint *******pppppppuStack_1c8;
  uint ******ppppppuStack_1c0;
  uint ******ppppppuStack_1b8;
  uint ******ppppppuStack_1b0;
  uint *******pppppppuStack_1a8;
  uint ******ppppppuStack_1a0;
  uint ******ppppppuStack_198;
  uint *******pppppppuStack_190;
  uint *******pppppppuStack_188;
  uint *******pppppppuStack_180;
  uint *******pppppppuStack_178;
  uint *******pppppppuStack_170;
  uint *******pppppppuStack_168;
  uint ******ppppppuStack_160;
  uint ******ppppppuStack_158;
  uint ******ppppppuStack_150;
  uint *******pppppppuStack_148;
  uint ******ppppppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  uint *******pppppppuStack_128;
  uint *******pppppppuStack_120;
  uint *******pppppppuStack_118;
  uint *******pppppppuStack_110;
  uint ******ppppppuStack_108;
  uint ******ppppppuStack_100;
  uint ******ppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint ******ppppppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint *******pppppppuStack_d0;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  uint *******pppppppuStack_b0;
  uint *******pppppppuStack_a8;
  uint *******pppppppuStack_a0;
  uint *******pppppppuStack_98;
  uint *******pppppppuStack_90;
  
  if (*param_1 == -0x8000000000000000) {
    pppppppuStack_170 = (uint *******)0xa;
code_r0x00010146cbf4:
    pppppppuVar6 = (uint *******)&pppppppuStack_170;
    pppppppuVar7 = (uint *******)0x0;
code_r0x00010146cbfc:
    pppppppuVar6 = (uint *******)func_0x000108a4a0f8(pppppppuVar6,pppppppuVar7,0);
    return pppppppuVar6;
  }
  puVar4 = (undefined2 *)_malloc(3);
  if (puVar4 == (undefined2 *)0x0) {
    func_0x0001087c9084(1,3);
    goto code_r0x00010146d1d4;
  }
  *(undefined1 *)(puVar4 + 1) = 0x6e;
  *puVar4 = 0x7572;
  if (param_1[9] != -0x8000000000000000 && param_1[9] != 0) {
    _free(param_1[10]);
  }
  param_1[10] = (long)puVar4;
  param_1[0xb] = 3;
  param_1[9] = -0x8000000000000000;
  lStack_1d8 = param_1[0xb];
  lStack_1e0 = param_1[10];
  uStack_1e8 = 3;
  pauVar5 = (undefined1 (*) [16])
            (*
            ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
            )();
  if (pauVar5[1][0] == '\x01') {
    auVar16 = *pauVar5;
  }
  else {
    auVar16 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar5 + 8) = auVar16._8_8_;
    pauVar5[1][0] = 1;
  }
  *(long *)*pauVar5 = auVar16._0_8_ + 1;
  FUN_105dc99f8(&pppppppuStack_170,0xe,auVar16._0_8_,auVar16._8_8_);
  pppppppuStack_128 = (uint *******)0x8000000000000000;
  pppppppuVar6 = pppppppuStack_168;
  if (pppppppuStack_170 == (uint *******)0x8000000000000001) goto LAB_10146cb00;
  unaff_x22 = (uint *******)&pppppppuStack_170;
  ppppppuStack_198 = (uint ******)uStack_138;
  ppppppuStack_1a0 = ppppppuStack_140;
  pppppppuStack_188 = (uint *******)0x8000000000000000;
  pppppppuStack_190 = (uint *******)uStack_130;
  pppppppuStack_178 = pppppppuStack_118;
  pppppppuStack_180 = pppppppuStack_120;
  ppppppuStack_1b8 = ppppppuStack_158;
  ppppppuStack_1c0 = ppppppuStack_160;
  pppppppuStack_1a8 = pppppppuStack_148;
  ppppppuStack_1b0 = ppppppuStack_150;
  pppppppuStack_1d0 = pppppppuStack_170;
  pppppppuStack_1c8 = pppppppuStack_168;
  if (pppppppuStack_170 == (uint *******)0x8000000000000000) goto LAB_10146cab8;
  ppppppuVar14 = ppppppuStack_160;
  ppppppuVar15 = ppppppuStack_158;
  pppppppuVar6 = (uint *******)
                 FUN_10063fe00(&pppppppuStack_1d0,&UNK_108ca26b0,2,param_2[5],param_2[6]);
  if (pppppppuVar6 != (uint *******)0x0) goto LAB_10146caf8;
  if (pppppppuStack_1d0 == (uint *******)0x8000000000000000) goto LAB_10146cab8;
  bVar1 = *(byte *)((long)param_2 + 0x94);
  unaff_x23 = (uint *******)(ulong)bVar1;
  uVar10 = 10;
  auVar16 = _malloc(10);
  pppppppuVar7 = auVar16._8_8_;
  pppppppuVar6 = auVar16._0_8_;
  if (pppppppuVar6 == (uint *******)0x0) goto LAB_10146d224;
  *(undefined2 *)(pppppppuVar6 + 1) = 0x656d;
  *pppppppuVar6 = (uint ******)0x616e5f746e657665;
  uVar10 = 0x8000000000000000;
  uVar3 = pppppppuStack_188 == (uint *******)0x8000000000000000;
  if ((!(bool)uVar3) && (pppppppuStack_188 != (uint *******)0x0)) {
    _free(pppppppuStack_180);
    pppppppuVar7 = extraout_x1;
  }
  pppppppuStack_178 = (uint *******)0xa;
  pppppppuStack_188 = (uint *******)0x8000000000000000;
  ppppppuVar12 = (uint ******)0xa;
  pppppppuStack_b0 = (uint *******)0xa;
  pppppppuStack_c0 = (uint *******)0xa;
  pppppppuVar8 = (uint *******)&UNK_108ca088b;
  pppppppuVar9 = (uint *******)
                 (&UNK_10146cbc4 + (ulong)*(byte *)((long)unaff_x23 + 0x108ca088b) * 4);
  pppppppuVar11 = pppppppuVar6;
  ppppppuVar13 = ppppppuVar12;
  pppppppuStack_180 = pppppppuVar6;
  pppppppuStack_b8 = pppppppuVar6;
  switch(bVar1) {
  case 1:
  case 0x51:
    uVar10 = 0x12;
    pppppppuVar6 = (uint *******)0x12;
  case 0xf:
    pppppppuVar6 = (uint *******)_malloc(pppppppuVar6);
    if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00010146d234;
    pppppppuVar8 = (uint *******)0x7473;
code_r0x00010146ccf8:
    *(short *)(pppppppuVar6 + 2) = (short)pppppppuVar8;
code_r0x00010146ccfc:
    pppppppuVar8 = (uint *******)&UNK_108cafd71;
code_r0x00010146cd04:
code_r0x00010146cd44:
    ppppppuVar12 = pppppppuVar8[1];
    pppppppuVar11 = (uint *******)*pppppppuVar8;
code_r0x00010146cd48:
    pppppppuVar6[1] = ppppppuVar12;
    *pppppppuVar6 = (uint ******)pppppppuVar11;
    pppppppuVar8 = (uint *******)0x12;
    goto code_r0x00010146cd80;
  case 2:
  case 0xcf:
    uVar10 = 0xd;
  case 0x5d:
  case 0x75:
    pppppppuVar6 = (uint *******)0xd;
code_r0x00010146cc6c:
    pppppppuVar6 = (uint *******)_malloc(pppppppuVar6);
code_r0x00010146cc70:
    if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00010146d234;
    pppppppuVar8 = (uint *******)&UNK_108caf000;
code_r0x00010146cc78:
    pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 0xd83);
code_r0x00010146cc7c:
code_r0x00010146cd6c:
    pppppppuVar9 = (uint *******)*pppppppuVar8;
code_r0x00010146cd70:
    *pppppppuVar6 = (uint ******)pppppppuVar9;
code_r0x00010146cd74:
    *(undefined8 *)((long)pppppppuVar6 + 5) = *(undefined8 *)((long)pppppppuVar8 + 5);
    pppppppuVar8 = (uint *******)0xd;
    goto code_r0x00010146cd80;
  case 3:
    uVar10 = 0xb;
    pppppppuVar6 = (uint *******)0xb;
  case 0xfb:
    pppppppuVar6 = (uint *******)_malloc(pppppppuVar6);
code_r0x00010146cc8c:
    if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00010146d234;
    pppppppuVar8 = (uint *******)0x6170;
code_r0x00010146cc94:
    pppppppuVar8 = (uint *******)(ulong)((uint)pppppppuVar8 & 0xffff | 0x74630000);
code_r0x00010146cc98:
    *(int *)((long)pppppppuVar6 + 7) = (int)pppppppuVar8;
    pppppppuVar8 = (uint *******)&UNK_108caf000;
code_r0x00010146cca0:
    *pppppppuVar6 = pppppppuVar8[0x1b2];
    pppppppuVar8 = (uint *******)0xb;
    goto code_r0x00010146cd80;
  case 4:
    uVar10 = 0xc;
  case 0xa0:
    pppppppuVar6 = (uint *******)_malloc(0xc);
code_r0x00010146cc18:
    if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00010146d234;
code_r0x00010146cc1c:
    pppppppuVar8 = (uint *******)0x74636170;
code_r0x00010146cc24:
    *(uint *)(pppppppuVar6 + 1) = (uint)pppppppuVar8;
code_r0x00010146cc28:
    pppppppuVar8 = (uint *******)&UNK_108caf000;
code_r0x00010146cc2c:
    pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 0xd9b);
    goto code_r0x00010146cc30;
  case 5:
  case 0x98:
  case 0xd9:
    uVar10 = 0xd;
  case 0x4f:
    pppppppuVar6 = (uint *******)_malloc(0xd);
code_r0x00010146cd14:
    if (pppppppuVar6 != (uint *******)0x0) {
code_r0x00010146cd18:
      pppppppuVar8 = (uint *******)&UNK_108cafda7;
code_r0x00010146cd20:
      goto code_r0x00010146cd6c;
    }
    goto code_r0x00010146d234;
  case 6:
    uVar10 = 0x12;
  case 0x67:
  case 0xf9:
    pppppppuVar6 = (uint *******)_malloc(0x12);
    if (pppppppuVar6 != (uint *******)0x0) {
code_r0x00010146cd34:
      pppppppuVar8 = (uint *******)0x7469;
code_r0x00010146cd38:
      *(short *)(pppppppuVar6 + 2) = (short)pppppppuVar8;
code_r0x00010146cd3c:
      pppppppuVar8 = (uint *******)&UNK_108cafdb4;
      goto code_r0x00010146cd44;
    }
    goto code_r0x00010146d234;
  case 7:
    uVar10 = 0xe;
  case 0x81:
    pppppppuVar6 = (uint *******)_malloc(0xe);
    if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00010146d234;
    pppppppuVar8 = (uint *******)&UNK_108caf000;
code_r0x00010146ccc8:
    pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 0xdc6);
code_r0x00010146cccc:
    *pppppppuVar6 = *pppppppuVar8;
code_r0x00010146ccd4:
    pppppppuVar8 = *(uint ********)((long)pppppppuVar8 + 6);
code_r0x00010146ccd8:
    *(uint ********)((long)pppppppuVar6 + 6) = pppppppuVar8;
    pppppppuVar8 = (uint *******)0xe;
code_r0x00010146cce0:
    goto code_r0x00010146cd80;
  case 8:
    uVar10 = 0xd;
    pppppppuVar6 = (uint *******)_malloc(0xd);
  case 0xa5:
  case 0xe4:
    if (pppppppuVar6 != (uint *******)0x0) {
code_r0x00010146cd64:
      pppppppuVar8 = (uint *******)&UNK_108caf000;
code_r0x00010146cd68:
      pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 0xdd4);
      goto code_r0x00010146cd6c;
    }
    goto code_r0x00010146d234;
  case 9:
  case 0xc:
  case 0x49:
  case 0x99:
    uVar10 = 4;
    pppppppuVar6 = (uint *******)_malloc(4);
    if (pppppppuVar6 != (uint *******)0x0) {
      pppppppuVar8 = (uint *******)0x7473;
      goto code_r0x00010146cc54;
    }
    goto code_r0x00010146d234;
  case 0xb:
    goto code_r0x00010146ccc8;
  case 0xd:
    goto code_r0x00010146cc70;
  case 0xe:
    goto code_r0x00010146cbe8;
  case 0x10:
    goto code_r0x00010146cd18;
  case 0x11:
  case 0xed:
    goto code_r0x00010146cc98;
  case 0x12:
  case 0x61:
  case 0x91:
    goto code_r0x00010146cd48;
  case 0x13:
    goto code_r0x00010146cc18;
  case 0x17:
    goto code_r0x00010146ccd4;
  case 0x18:
  case 0x1a:
  case 0x1c:
  case 0x20:
  case 0x22:
  case 0x24:
  case 0x28:
  case 0x2a:
  case 0x30:
  case 0x4a:
  case 0x52:
  case 0x54:
  case 0x58:
  case 0x5c:
  case 0x62:
  case 0x6a:
  case 0x6c:
  case 0x6e:
  case 0x74:
  case 0x7a:
  case 0x7c:
  case 0x7e:
  case 0x86:
  case 0xb0:
  case 0xb4:
  case 0xc6:
  case 0xd4:
  case 0xf4:
  case 0xfc:
  case 0xfe:
    goto code_r0x00010146cbc8;
  case 0x19:
    goto code_r0x00010146cc30;
  case 0x1b:
    goto code_r0x00010146cc6c;
  case 0x1d:
    goto code_r0x00010146cdb8;
  case 0x1f:
  case 0xb3:
    goto code_r0x00010146cd14;
  case 0x21:
    goto code_r0x00010146ce98;
  case 0x23:
  case 0x36:
  case 0x40:
    goto code_r0x00010146cc94;
  case 0x25:
  case 0x31:
    goto code_r0x00010146cc1c;
  case 0x26:
  case 0x70:
  case 0x82:
  case 0x84:
  case 0x8c:
  case 0x92:
  case 0xa4:
  case 0xa6:
  case 0xd6:
  case 0xd8:
  case 0xda:
    goto code_r0x00010146cbcc;
  case 0x27:
  case 0x37:
  case 0x41:
  case 0xc3:
    goto code_r0x00010146cbf4;
  case 0x29:
    goto code_r0x00010146ced4;
  case 0x2b:
code_r0x00010146cc54:
    *(uint *)pppppppuVar6 = (uint)pppppppuVar8 & 0xffff | 0x706f0000;
  case 0x35:
  case 0x3f:
    pppppppuVar8 = (uint *******)0x4;
    goto code_r0x00010146cd80;
  case 0x2d:
    goto code_r0x00010146cf00;
  case 0x2f:
    goto code_r0x00010146ce5c;
  case 0x34:
  case 0x3e:
  case 0xb5:
    goto code_r0x00010146cd04;
  case 0x38:
  case 0x42:
  case 0xf0:
    goto code_r0x00010146cd3c;
  case 0x39:
    goto code_r0x00010146cd6c;
  case 0x3a:
  case 0x44:
    goto code_r0x00010146cccc;
  case 0x3b:
    goto code_r0x00010146cda4;
  case 0x3c:
  case 0xc5:
    goto code_r0x00010146cc24;
  case 0x43:
    goto code_r0x00010146cd74;
  case 0x45:
    goto code_r0x00010146cdac;
  case 0x46:
  case 0xa7:
    goto code_r0x00010146cc2c;
  case 0x4b:
    goto code_r0x00010146ce54;
  case 0x4d:
    goto code_r0x00010146cef8;
  case 0x53:
    goto code_r0x00010146cd88;
  case 0x55:
    goto code_r0x00010146cf9c;
  case 0x57:
    goto code_r0x00010146ced0;
  case 0x59:
    goto code_r0x00010146cdb0;
  case 0x5b:
  case 0xb7:
    goto code_r0x00010146ce2c;
  case 99:
  case 0xd7:
    goto code_r0x00010146ce78;
  case 0x65:
  case 0x8f:
    goto code_r0x00010146cf1c;
  case 0x69:
    goto code_r0x00010146cdec;
  case 0x6b:
    goto code_r0x00010146ce94;
  case 0x6d:
  case 0xc9:
    goto code_r0x00010146cca0;
  case 0x6f:
  case 200:
  case 0xef:
    goto code_r0x00010146cbe0;
  case 0x71:
  case 0x9a:
  case 0xab:
    goto code_r0x00010146cdd0;
  case 0x73:
  case 0xb1:
    goto code_r0x00010146cf38;
  case 0x79:
    goto code_r0x00010146cf04;
  case 0x7b:
  case 0xec:
    goto code_r0x00010146cc28;
  case 0x7d:
    goto code_r0x00010146cd44;
  case 0x7f:
    goto code_r0x00010146cdf0;
  case 0x83:
  case 0xe6:
    goto code_r0x00010146cde4;
  case 0x85:
    goto code_r0x00010146ce44;
  case 0x87:
  case 0xb8:
  case 0xba:
  case 0xcc:
  case 0xcd:
  case 0xce:
    goto code_r0x00010146cbe4;
  case 0x88:
    goto code_r0x00010146cbd0;
  case 0x89:
    goto code_r0x00010146cf88;
  case 0x8b:
    goto code_r0x00010146cee4;
  case 0x8d:
    goto code_r0x00010146cd64;
  case 0x93:
    goto code_r0x00010146ccf8;
  case 0x96:
    goto code_r0x00010146cd84;
  case 0x97:
    goto code_r0x00010146ccd8;
  case 0x9b:
    goto code_r0x00010146ce1c;
  case 0x9c:
  case 0xdf:
    goto code_r0x00010146cd38;
  case 0x9d:
    goto code_r0x00010146ced8;
  case 0x9e:
    goto code_r0x00010146cc8c;
  case 0x9f:
    goto code_r0x00010146ce68;
  case 0xa3:
    goto code_r0x00010146cd70;
  case 0xa9:
    goto code_r0x00010146cd20;
  case 0xad:
    goto code_r0x00010146ce74;
  case 0xaf:
    goto code_r0x00010146cdf4;
  case 0xb9:
    goto code_r0x00010146ce14;
  case 0xbd:
    goto code_r0x00010146cf10;
  case 0xbf:
    goto code_r0x00010146cc78;
  case 0xc0:
  case 0xf3:
    goto code_r0x00010146cbd4;
  case 0xc1:
    goto code_r0x00010146cd34;
  case 0xc2:
    goto code_r0x00010146cbd8;
  case 0xc4:
    goto code_r0x00010146cbdc;
  case 199:
    goto code_r0x00010146ce0c;
  case 0xcb:
    goto code_r0x00010146cbfc;
  case 0xd1:
    goto code_r0x00010146cee8;
  case 0xd3:
    goto code_r0x00010146cde0;
  case 0xdd:
    goto code_r0x00010146ce58;
  case 0xe2:
    goto code_r0x00010146cdc4;
  case 0xe3:
    goto code_r0x00010146ccfc;
  case 0xe5:
    goto code_r0x00010146cc7c;
  case 0xe7:
    goto code_r0x00010146ce48;
  case 0xe8:
    goto code_r0x00010146cda8;
  case 0xe9:
    goto code_r0x00010146cea4;
  case 0xea:
    goto code_r0x00010146cce0;
  case 0xeb:
    goto code_r0x00010146ce64;
  case 0xee:
    goto code_r0x00010146ce00;
  case 0xf5:
    goto code_r0x00010146ce4c;
  case 0xf7:
    goto code_r0x00010146cf0c;
  case 0xfd:
    goto code_r0x00010146cd68;
  case 0xff:
    goto code_r0x00010146cf68;
  }
  uVar10 = 0xc;
code_r0x00010146cbc8:
  pppppppuVar6 = (uint *******)0xc;
code_r0x00010146cbcc:
  pppppppuVar6 = (uint *******)_malloc(pppppppuVar6);
code_r0x00010146cbd0:
  if (pppppppuVar6 == (uint *******)0x0) {
code_r0x00010146d234:
    func_0x0001087c9084(1,uVar10);
    goto LAB_10146d260;
  }
code_r0x00010146cbd4:
  pppppppuVar8 = (uint *******)0x755f;
code_r0x00010146cbd8:
  pppppppuVar8 = (uint *******)(ulong)((uint)pppppppuVar8 & 0xffff | 0x65730000);
code_r0x00010146cbdc:
  *(uint *)(pppppppuVar6 + 1) = (uint)pppppppuVar8;
code_r0x00010146cbe0:
  pppppppuVar8 = (uint *******)&UNK_108caf000;
code_r0x00010146cbe4:
  pppppppuVar8 = (uint *******)((long)pppppppuVar8 + 0xd65);
code_r0x00010146cbe8:
code_r0x00010146cc30:
  *pppppppuVar6 = *pppppppuVar8;
  pppppppuVar8 = (uint *******)0xc;
code_r0x00010146cd80:
  pppppppuVar9 = (uint *******)0x8000000000000003;
code_r0x00010146cd84:
  pppppppuStack_a8 = pppppppuVar9;
  pppppppuStack_a0 = pppppppuVar8;
code_r0x00010146cd88:
  pppppppuStack_98 = pppppppuVar6;
  pppppppuStack_90 = pppppppuVar8;
  FUN_101497a9c(&pppppppuStack_170,&pppppppuStack_1d0,&pppppppuStack_c0,&pppppppuStack_a8);
  unaff_x23 = (uint *******)0x5;
code_r0x00010146cda4:
  unaff_x23 = (uint *******)((ulong)unaff_x23 | 0x8000000000000000);
code_r0x00010146cda8:
  pppppppuVar6 = pppppppuStack_168;
  ppppppuVar12 = ppppppuStack_160;
code_r0x00010146cdac:
  ppppppuVar14 = ppppppuStack_158;
  ppppppuVar15 = ppppppuStack_150;
code_r0x00010146cdb0:
  pppppppuVar11 = pppppppuStack_148;
  ppppppuVar13 = ppppppuStack_140;
  pppppppuStack_110 = pppppppuVar6;
  ppppppuStack_108 = ppppppuVar12;
  ppppppuStack_100 = ppppppuVar14;
  ppppppuStack_f8 = ppppppuVar15;
code_r0x00010146cdb8:
  uStack_d8 = uStack_130;
  uStack_e0 = uStack_138;
  pppppppuVar8 = pppppppuStack_128;
  pppppppuStack_f0 = pppppppuVar11;
  ppppppuStack_e8 = ppppppuVar13;
code_r0x00010146cdc4:
  uVar3 = pppppppuStack_110 == unaff_x23;
  pppppppuStack_d0 = pppppppuVar8;
code_r0x00010146cdd0:
  pppppppuVar8 = pppppppuStack_1d0;
  if (!(bool)uVar3) {
    FUN_100de6690(&pppppppuStack_110);
    pppppppuVar8 = pppppppuStack_1d0;
  }
code_r0x00010146cde0:
  pppppppuVar9 = (uint *******)0x8000000000000000;
code_r0x00010146cde4:
  if (pppppppuVar8 == pppppppuVar9) {
LAB_10146cab8:
    pppppppuStack_170 = (uint *******)0xa;
    pppppppuVar6 = (uint *******)func_0x000108a4a0f8(&pppppppuStack_170,0,0);
  }
  else {
code_r0x00010146cdec:
    unaff_w25 = (uint)*(byte *)((long)param_2 + 0x92);
code_r0x00010146cdf0:
    uVar10 = 0xc;
code_r0x00010146cdf4:
    pppppppuVar6 = (uint *******)_malloc(0xc);
    if (pppppppuVar6 == (uint *******)0x0) {
LAB_10146d224:
      func_0x0001087c9084(1,uVar10);
LAB_10146d260:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10146d264);
      (*pcVar2)();
    }
code_r0x00010146ce00:
    pppppppuVar8 = (uint *******)0x65707974;
    pppppppuVar9 = (uint *******)&UNK_108cb0000;
code_r0x00010146ce0c:
    pppppppuVar9 = pppppppuVar9 + 0x29;
    *(uint *)(pppppppuVar6 + 1) = (uint)pppppppuVar8;
code_r0x00010146ce14:
    *pppppppuVar6 = *pppppppuVar9;
code_r0x00010146ce1c:
    pppppppuVar8 = pppppppuStack_188;
    if (pppppppuStack_188 != (uint *******)0x8000000000000000) {
code_r0x00010146ce2c:
      if (pppppppuVar8 != (uint *******)0x0) {
        _free(pppppppuStack_180);
      }
    }
code_r0x00010146ce44:
    pppppppuVar8 = (uint *******)0xc;
code_r0x00010146ce48:
    pppppppuStack_180 = pppppppuVar6;
    pppppppuStack_178 = pppppppuVar8;
code_r0x00010146ce4c:
code_r0x00010146ce54:
    pppppppuStack_b8 = pppppppuStack_180;
    pppppppuStack_b0 = pppppppuStack_178;
code_r0x00010146ce58:
    pppppppuStack_c0 = pppppppuVar8;
code_r0x00010146ce5c:
    if (unaff_w25 == 0) {
code_r0x00010146ce94:
      uVar10 = 7;
code_r0x00010146ce98:
      pppppppuStack_188 = (uint *******)0x8000000000000000;
      pppppppuStack_180 = pppppppuStack_b8;
      pppppppuStack_178 = pppppppuStack_b0;
      pppppppuVar6 = (uint *******)_malloc(7);
      if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00010146d244;
code_r0x00010146cea4:
      *(undefined4 *)((long)pppppppuVar6 + 3) = 0x646e616d;
      *(uint *)pppppppuVar6 = 0x6d6d6f63;
      pppppppuStack_a0 = (uint *******)0x7;
    }
    else {
      uVar3 = unaff_w25 == 1;
code_r0x00010146ce64:
      pppppppuStack_188 = (uint *******)0x8000000000000000;
      if ((bool)uVar3) {
code_r0x00010146ce68:
        pppppppuStack_188 = (uint *******)0x8000000000000000;
        uVar10 = 6;
        pppppppuStack_180 = pppppppuStack_b8;
        pppppppuStack_178 = pppppppuStack_b0;
        pppppppuVar6 = (uint *******)_malloc(6);
code_r0x00010146ce74:
        if (pppppppuVar6 == (uint *******)0x0) {
code_r0x00010146d244:
          func_0x0001087c9084(1,uVar10);
          goto LAB_10146d260;
        }
code_r0x00010146ce78:
        *(undefined2 *)((long)pppppppuVar6 + 4) = 0x7470;
        *(uint *)pppppppuVar6 = 0x6d6f7270;
        pppppppuStack_a0 = (uint *******)0x6;
      }
      else {
        uVar10 = 5;
        pppppppuStack_180 = pppppppuStack_b8;
        pppppppuStack_178 = pppppppuStack_b0;
        pppppppuVar6 = (uint *******)_malloc(5);
code_r0x00010146ced0:
        if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00010146d244;
code_r0x00010146ced4:
        pppppppuVar8 = (uint *******)0x74;
code_r0x00010146ced8:
        *(char *)((long)pppppppuVar6 + 4) = (char)pppppppuVar8;
        pppppppuVar8 = (uint *******)0x6e656761;
code_r0x00010146cee4:
        *(uint *)pppppppuVar6 = (uint)pppppppuVar8;
code_r0x00010146cee8:
        pppppppuStack_a0 = (uint *******)0x5;
      }
    }
    pppppppuStack_a8 = (uint *******)0x8000000000000003;
    pppppppuStack_98 = pppppppuVar6;
    pppppppuStack_90 = pppppppuStack_a0;
code_r0x00010146cef8:
    pppppppuVar6 = (uint *******)&pppppppuStack_170;
    pppppppuVar7 = (uint *******)&pppppppuStack_1d0;
code_r0x00010146cf00:
code_r0x00010146cf04:
    FUN_101497a9c(pppppppuVar6,pppppppuVar7);
code_r0x00010146cf0c:
    pppppppuVar11 = pppppppuStack_168;
    ppppppuVar13 = ppppppuStack_160;
code_r0x00010146cf10:
    ppppppuStack_f8 = ppppppuStack_150;
    ppppppuStack_100 = ppppppuStack_158;
    pppppppuVar6 = pppppppuStack_148;
    ppppppuVar12 = ppppppuStack_140;
    pppppppuStack_110 = pppppppuVar11;
    ppppppuStack_108 = ppppppuVar13;
code_r0x00010146cf1c:
    uStack_d8 = uStack_130;
    uStack_e0 = uStack_138;
    pppppppuStack_d0 = pppppppuStack_128;
    pppppppuStack_f0 = pppppppuVar6;
    ppppppuStack_e8 = ppppppuVar12;
    if (pppppppuStack_110 != unaff_x23) {
code_r0x00010146cf38:
      FUN_100de6690(&pppppppuStack_110);
    }
    if (pppppppuStack_1d0 == (uint *******)0x8000000000000000) goto LAB_10146cab8;
    unaff_w25 = (uint)*(byte *)(param_2 + 0x12);
    uVar10 = 0xe;
    pppppppuVar6 = (uint *******)_malloc(0xe);
    if (pppppppuVar6 == (uint *******)0x0) goto LAB_10146d224;
    pppppppuVar8 = (uint *******)&UNK_108cb0000;
code_r0x00010146cf68:
    *pppppppuVar6 = *(uint *******)((long)pppppppuVar8 + 0x154);
    *(undefined8 *)((long)pppppppuVar6 + 6) = *(undefined8 *)((long)pppppppuVar8 + 0x15a);
    uVar3 = pppppppuStack_188 == (uint *******)0x8000000000000000;
    pppppppuVar8 = pppppppuStack_188;
code_r0x00010146cf88:
    if ((!(bool)uVar3) && (unaff_x26 = pppppppuVar6, pppppppuVar8 != (uint *******)0x0)) {
code_r0x00010146cf9c:
      pppppppuVar6 = unaff_x26;
      _free(pppppppuStack_180);
    }
    pppppppuStack_178 = (uint *******)0xe;
    pppppppuStack_188 = (uint *******)0x8000000000000000;
    pppppppuStack_b0 = (uint *******)0xe;
    pppppppuStack_c0 = (uint *******)0xe;
    pppppppuStack_180 = pppppppuVar6;
    pppppppuStack_b8 = pppppppuVar6;
    if ((unaff_w25 & 1) == 0) {
      uVar10 = 4;
      pppppppuVar6 = (uint *******)_malloc(4);
      if (pppppppuVar6 == (uint *******)0x0) goto code_r0x00010146d254;
      *(uint *)pppppppuVar6 = 0x636e7973;
      pppppppuStack_a0 = (uint *******)0x4;
    }
    else {
      uVar10 = 5;
      pppppppuVar6 = (uint *******)_malloc(5);
      if (pppppppuVar6 == (uint *******)0x0) {
code_r0x00010146d254:
        func_0x0001087c9084(1,uVar10);
        goto LAB_10146d260;
      }
      *(undefined1 *)((long)pppppppuVar6 + 4) = 99;
      *(uint *)pppppppuVar6 = 0x6e797361;
      pppppppuStack_a0 = (uint *******)0x5;
    }
    pppppppuStack_a8 = (uint *******)0x8000000000000003;
    pppppppuStack_98 = pppppppuVar6;
    pppppppuStack_90 = pppppppuStack_a0;
    FUN_101497a9c(&pppppppuStack_170,&pppppppuStack_1d0,&pppppppuStack_c0,&pppppppuStack_a8);
    ppppppuStack_108 = ppppppuStack_160;
    pppppppuStack_110 = pppppppuStack_168;
    ppppppuStack_f8 = ppppppuStack_150;
    ppppppuStack_100 = ppppppuStack_158;
    ppppppuStack_e8 = ppppppuStack_140;
    pppppppuStack_f0 = pppppppuStack_148;
    uStack_d8 = uStack_130;
    uStack_e0 = uStack_138;
    pppppppuStack_d0 = pppppppuStack_128;
    if (pppppppuStack_168 != unaff_x23) {
      FUN_100de6690(&pppppppuStack_110);
    }
    pppppppuVar6 = (uint *******)
                   func_0x000101479e70(&pppppppuStack_1d0,*(undefined1 *)((long)param_2 + 0x91));
    if ((((((pppppppuVar6 == (uint *******)0x0) &&
           (pppppppuVar6 = (uint *******)
                           FUN_10149283c(&pppppppuStack_1d0,&UNK_108cb0162,0xb,param_2[8],param_2[9]
                                        ), pppppppuVar6 == (uint *******)0x0)) &&
          (pppppppuVar6 = (uint *******)
                          func_0x00010147a41c(&pppppppuStack_1d0,
                                              *(undefined1 *)((long)param_2 + 0x95)),
          pppppppuVar6 == (uint *******)0x0)) &&
         ((pppppppuVar6 = (uint *******)
                          func_0x00010147d91c(&pppppppuStack_1d0,&UNK_108cb016d,0xd,param_2[0x10]),
          pppppppuVar6 == (uint *******)0x0 &&
          (pppppppuVar6 = (uint *******)
                          func_0x00010148c2f0(&pppppppuStack_1d0,
                                              *(undefined1 *)((long)param_2 + 0x93)),
          pppppppuVar6 == (uint *******)0x0)))) &&
        ((pppppppuVar6 = (uint *******)
                         FUN_10147d38c(&pppppppuStack_1d0,&UNK_108cb017a,0xe,param_2 + 0xd),
         pppppppuVar6 == (uint *******)0x0 &&
         ((pppppppuVar6 = (uint *******)
                          func_0x00010147d91c(&pppppppuStack_1d0,&UNK_108cae6c5,10,param_2[0x11]),
          pppppppuVar6 == (uint *******)0x0 &&
          (pppppppuVar6 = (uint *******)
                          func_0x00010147c3f4(&pppppppuStack_1d0,&UNK_108cae6ae,0xc,*param_2,
                                              param_2[1]), pppppppuVar6 == (uint *******)0x0))))))
       && ((pppppppuVar6 = (uint *******)
                           func_0x00010147c3f4(&pppppppuStack_1d0,&UNK_108cae6ba,0xb,param_2[2],
                                               param_2[3]), pppppppuVar6 == (uint *******)0x0 &&
           (pppppppuVar6 = (uint *******)
                           func_0x000101489724(&pppppppuStack_1d0,param_2[0xb],param_2[0xc]),
           pppppppuVar6 == (uint *******)0x0)))) {
      uStack_138 = ppppppuStack_198;
      ppppppuStack_140 = ppppppuStack_1a0;
      pppppppuStack_128 = pppppppuStack_188;
      uStack_130 = pppppppuStack_190;
      pppppppuStack_118 = pppppppuStack_178;
      pppppppuStack_120 = pppppppuStack_180;
      pppppppuStack_168 = pppppppuStack_1c8;
      pppppppuStack_170 = pppppppuStack_1d0;
      ppppppuStack_158 = ppppppuStack_1b8;
      ppppppuStack_160 = ppppppuStack_1c0;
      pppppppuStack_148 = pppppppuStack_1a8;
      ppppppuStack_150 = ppppppuStack_1b0;
      __ZN89__LT_serde_json__value__ser__SerializeMap_u20_as_u20_serde_core__ser__SerializeStruct_GT_3end17hed20b8c026e3b1dbE
                (&pppppppuStack_a8,&pppppppuStack_170);
      pppppppuVar6 = pppppppuStack_a0;
      if (pppppppuStack_a8 != unaff_x23) {
code_r0x00010146d1d4:
        FUN_101497a9c(&pppppppuStack_170,param_1,&uStack_1e8,&pppppppuStack_a8);
        pppppppuStack_1c8 = (uint *******)unaff_x22[2];
        pppppppuStack_1d0 = (uint *******)unaff_x22[1];
        ppppppuStack_1b8 = unaff_x22[4];
        ppppppuStack_1c0 = unaff_x22[3];
        pppppppuStack_1a8 = (uint *******)unaff_x22[6];
        ppppppuStack_1b0 = unaff_x22[5];
        ppppppuStack_198 = unaff_x22[8];
        ppppppuStack_1a0 = unaff_x22[7];
        pppppppuStack_190 = pppppppuStack_128;
        if (pppppppuStack_1d0 != unaff_x23) {
          FUN_100de6690(&pppppppuStack_1d0);
        }
        return (uint *******)0x0;
      }
      goto LAB_10146cb00;
    }
  }
LAB_10146caf8:
  FUN_100e040f0(&pppppppuStack_1d0);
LAB_10146cb00:
  _free(lStack_1e0);
  return pppppppuVar6;
}

