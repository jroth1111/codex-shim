
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __ZN4bm2517default_tokenizer23DefaultTokenizerBuilder5build17he9239693c1878d08E
               (undefined8 *param_1,undefined1 param_2 [16],undefined1 param_3 [16],ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [8];
  code *pcVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  int iVar24;
  undefined1 (*pauVar27) [16];
  long *plVar28;
  uint uVar25;
  uint uVar26;
  ulong extraout_x1;
  undefined *puVar29;
  ulong uVar30;
  byte *pbVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [16];
  undefined *puVar34;
  ulong uVar35;
  long lVar36;
  byte *pbVar37;
  byte bVar38;
  undefined1 (*pauVar39) [16];
  long *extraout_x11;
  long *plVar40;
  undefined1 (*pauVar41) [16];
  long lVar42;
  bool bVar43;
  ulong uVar44;
  long *plVar45;
  long *plVar46;
  undefined1 (*unaff_x24) [16];
  ulong *puVar47;
  ulong *puVar48;
  ulong uVar49;
  uint uVar50;
  long *plVar52;
  long *plVar53;
  long *plVar54;
  undefined8 uVar55;
  long lVar56;
  undefined1 auVar57 [16];
  byte bVar58;
  undefined8 uVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  ulong uStack_178;
  long lStack_158;
  long *plStack_150;
  uint uStack_144;
  undefined1 (*pauStack_140) [16];
  long *plStack_138;
  ulong *puStack_130;
  undefined1 auStack_120 [16];
  long lStack_110;
  long lStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined1 auStack_a0 [16];
  long lStack_90;
  long *plVar51;
  
  lVar42 = param_3._8_8_;
  lVar36 = param_3._0_8_;
  plVar45 = (long *)(param_4 >> 0x18 & 0xff);
  uVar26 = 0x10000;
  if ((param_4 & 1) == 0) {
    uVar26 = 0;
  }
  uVar49 = (ulong)uVar26;
  uVar3 = uVar26 | (uint)(param_4 >> 8) & 0x100;
  uVar44 = (ulong)uVar3;
  if (((uint)param_4 >> 8 & 1) == 0) {
    puVar47 = (ulong *)0x0;
  }
  else {
    puVar47 = *(ulong **)(&UNK_10b205488 + (long)plVar45 * 8);
  }
  if ((param_4 & 0x10000) == 0) {
    uVar50 = uVar26 >> 0x10;
    pauVar27 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    if (pauVar27[1][0] == '\x01') {
      auVar68 = *pauVar27;
    }
    else {
      auVar68 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar27 + 8) = auVar68._8_8_;
      pauVar27[1][0] = 1;
    }
    *(long *)*pauVar27 = auVar68._0_8_ + 1;
    uStack_e8 = (undefined *)0x0;
    auStack_f0 = (undefined1  [8])&UNK_108c56c70;
    lStack_d8 = 0;
    lStack_e0 = 0;
    goto LAB_100383920;
  }
  uVar50 = uVar26 >> 0x10;
  plVar51 = (long *)(ulong)uVar50;
  uVar22 = 1 < uRam000000010b626980;
  uVar23 = uRam000000010b626980 == 2;
  if ((bool)uVar23) {
    if (lRam000000010b626990 != 0) goto LAB_100382df0;
LAB_1003839cc:
    func_0x000107c040d8();
    iVar24 = _pthread_mutex_lock();
    if (iVar24 != 0) goto LAB_1003839d8;
LAB_100382df8:
    puVar48 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
    uVar23 = (___ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE &
             0x7fffffffffffffff) == 0;
    uVar22 = 0;
    puStack_130 = puVar47;
    if (!(bool)uVar23) goto LAB_1003839dc;
    plVar46 = (long *)0x0;
  }
  else {
    func_0x000107c040f8();
    if (lRam000000010b626990 == 0) goto LAB_1003839cc;
LAB_100382df0:
    iVar24 = _pthread_mutex_lock();
    if (iVar24 == 0) goto LAB_100382df8;
LAB_1003839d8:
    thunk_FUN_108a81ad4();
    puVar48 = puVar47;
LAB_1003839dc:
    uVar25 = FUN_107c05e34();
    plVar46 = (long *)(ulong)(uVar25 ^ 1);
    puVar47 = puStack_130;
  }
  if (cRam000000010b626998 != '\0') {
    auStack_c0 = (undefined1  [8])0x10b626990;
    auStack_b8._1_7_ = (undefined7)((ulong)auStack_b8._0_8_ >> 8);
    auStack_b8[0] = (char)plVar46;
    FUN_107c05cb4(&UNK_108c89f03,0x2b,auStack_c0,&UNK_10b205230,&UNK_10b2051f8);
    goto LAB_100383fd4;
  }
  plVar53 = (long *)0x10b626000;
  plVar52 = (long *)0x10b6269d8;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uRam000000010b6269e0 ^ (ulong)plVar45;
  uVar32 = SUB168(auVar4 * ZEXT816(0x5851f42d4c957f2d),8) ^
           (uRam000000010b6269e0 ^ (ulong)plVar45) * 0x5851f42d4c957f2d ^ (ulong)plVar51;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar32;
  uVar32 = SUB168(auVar5 * ZEXT816(0x5851f42d4c957f2d),8) ^ uVar32 * 0x5851f42d4c957f2d;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar32;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = puRam000000010b6269d8;
  uVar35 = SUB168(auVar6 * auVar13,8) ^ uVar32 * (long)puRam000000010b6269d8;
  uVar32 = (ulong)(uint)-(int)uVar32 & 0x3f;
  auVar68 = func_0x000100384928(uVar35 >> uVar32 | uVar35 << 0x40 - uVar32,plVar45);
  pauVar27 = pauRam000000010b6269b0;
  uVar32 = uRam000000010b6269a8;
  pauVar33 = auVar68._8_8_;
  if ((auVar68._0_8_ & 1) != 0) {
    if (pauVar33 < pauRam000000010b6269b0) {
      lVar36 = uRam000000010b6269a8 + (long)pauVar33 * 0x48;
      if (*(char *)(lVar36 + 1) == '\x02') {
        FUN_107c05cac(&UNK_108c89f97,0xd,&UNK_10b205348);
        goto LAB_100383fd4;
      }
      pauVar39 = *(undefined1 (**) [16])(lVar36 + 0x40);
      if (pauVar39 < pauRam000000010b6269b0) {
        pauVar41 = *(undefined1 (**) [16])(lVar36 + 0x38);
        *(undefined1 (**) [16])(uRam000000010b6269a8 + (long)pauVar39 * 0x48 + 0x38) = pauVar41;
        if (pauVar41 < pauVar27) {
          *(undefined1 (**) [16])(uVar32 + (long)pauVar41 * 0x48 + 0x40) = pauVar39;
          if (pauVar27 < (undefined1 (*) [16])0x2) {
            puVar29 = &UNK_10b2052b8;
            pauVar39 = (undefined1 (*) [16])0x1;
          }
          else {
            pauVar39 = *(undefined1 (**) [16])(uVar32 + 0x80);
            lVar42 = uVar32 + (long)pauVar33 * 0x48;
            *(undefined1 (**) [16])(lVar42 + 0x38) = pauVar39;
            *(undefined8 *)(lVar42 + 0x40) = 1;
            *(undefined1 (**) [16])(uVar32 + 0x80) = pauVar33;
            if (pauVar39 < pauVar27) {
              *(undefined1 (**) [16])(uVar32 + (long)pauVar39 * 0x48 + 0x40) = pauVar33;
              lRam000000010b626a00 = lRam000000010b626a00 + 1;
              func_0x000100384c8c(auStack_c0,lVar36 + 8);
              auVar68._8_8_ = auStack_a0._8_8_;
              auVar68._0_8_ = auStack_a0._0_8_;
              uStack_e8 = (undefined *)auStack_b8._0_8_;
              auStack_f0 = auStack_c0;
              lStack_d8 = lStack_a8;
              lStack_e0 = auStack_b8._8_8_;
              if (((((ulong)plVar46 & 1) == 0) && ((*puVar48 & 0x7fffffffffffffff) != 0)) &&
                 (uVar49 = FUN_107c05e34(), (uVar49 & 1) == 0)) {
                cRam000000010b626998 = '\x01';
              }
              _pthread_mutex_unlock(lRam000000010b626990);
              goto LAB_100383920;
            }
            puVar29 = &UNK_10b2052d0;
          }
        }
        else {
          puVar29 = &UNK_10b2053a8;
          pauVar39 = pauVar41;
        }
      }
      else {
        puVar29 = &UNK_10b205390;
      }
    }
    else {
      puVar29 = &UNK_10b205330;
      pauVar39 = pauVar33;
    }
    FUN_107c05cd0(pauVar39,pauVar27,puVar29);
    goto LAB_100383fd4;
  }
  lRam000000010b626a08 = lRam000000010b626a08 + 1;
  if (((ulong)plVar46 & 1) == 0) {
    uVar23 = (*puVar48 & 0x7fffffffffffffff) == 0;
    uVar22 = 0;
    if ((!(bool)uVar23) && (uVar32 = FUN_107c05e34(), (uVar32 & 1) == 0)) {
      cRam000000010b626998 = '\x01';
    }
  }
  auVar57 = _pthread_mutex_unlock(lRam000000010b626990);
  auVar19._8_8_ = lStack_90;
  auVar19._0_8_ = auStack_a0._8_8_;
  auVar18._8_8_ = auStack_b8._8_8_;
  auVar18._0_8_ = auStack_b8._0_8_;
  pauVar27 = (undefined1 (*) [16])&UNK_109bd7838;
  auVar67._8_8_ = extraout_x1;
  auVar67._0_8_ = &UNK_109bd7838;
  pauVar33 = (undefined1 (*) [16])&UNK_108c88283;
  auVar69._8_8_ = extraout_x1;
  auVar69._0_8_ = &UNK_108c88283;
  pauVar39 = (undefined1 (*) [16])(ulong)(byte)(&UNK_108c88283)[(long)plVar45];
  puVar29 = &UNK_100382fac + (long)pauVar39 * 4;
  uVar32 = extraout_x1;
  plVar40 = extraout_x11;
  plVar28 = plVar46;
  pauVar41 = unaff_x24;
  plVar54 = plVar53;
  auVar68 = _auStack_c0;
  switch(plVar45) {
  case (long *)0x0:
    break;
  default:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd783c;
    break;
  case (long *)0x2:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7000;
  case (long *)0xe2:
  case (long *)0xe6:
    pauVar27 = (undefined1 (*) [16])(pauVar27[0x83] + 0xe);
    break;
  case (long *)0x3:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7840;
    break;
  case (long *)0x4:
  case (long *)0x8a:
  case (long *)0x8e:
  case (long *)0x92:
  case (long *)0x96:
  case (long *)0x9a:
  case (long *)0x9e:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7000;
  case (long *)0xa2:
  case (long *)0xa6:
  case (long *)0xaa:
  case (long *)0xae:
  case (long *)0xb2:
  case (long *)0xb6:
    pauVar27 = (undefined1 (*) [16])(pauVar27[0x84] + 4);
code_r0x000100382fe4:
    break;
  case (long *)0x5:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7846;
  case (long *)0x11:
    break;
  case (long *)0x6:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7848;
  case (long *)0xcd:
    break;
  case (long *)0x7:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd784a;
    break;
  case (long *)0x8:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd784c;
    break;
  case (long *)0x9:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7000;
  case (long *)0xea:
  case (long *)0xee:
    pauVar27 = pauVar27 + 0x85;
code_r0x000100383008:
    break;
  case (long *)0xa:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7852;
  case (long *)0x15:
    break;
  case (long *)0xb:
  case (long *)0x4a:
  case (long *)0x4e:
  case (long *)0x52:
  case (long *)0x56:
  case (long *)0x5a:
  case (long *)0x5e:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7000;
  case (long *)0x62:
  case (long *)0x66:
  case (long *)0x6a:
  case (long *)0x6e:
    pauVar27 = (undefined1 (*) [16])(pauVar27[0x85] + 4);
code_r0x000100382fd8:
    break;
  case (long *)0xc:
  case (long *)0xca:
  case (long *)0xce:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7000;
  case (long *)0xd2:
  case (long *)0xd6:
  case (long *)0xda:
  case (long *)0xde:
    pauVar27 = (undefined1 (*) [16])(pauVar27[0x85] + 6);
    break;
  case (long *)0xd:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7858;
    break;
  case (long *)0xe:
  case (long *)0x32:
  case (long *)0x36:
  case (long *)0x3a:
  case (long *)0x3e:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd7000;
  case (long *)0x42:
  case (long *)0x46:
    pauVar27 = (undefined1 (*) [16])(pauVar27[0x85] + 10);
    break;
  case (long *)0xf:
    pauVar27 = (undefined1 (*) [16])
               &
               __ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
    ;
  case (long *)0xc9:
    pauVar27 = (undefined1 (*) [16])(**(code **)*pauVar27)();
    if (pauVar27[1][0] == '\x01') {
      auVar69 = *pauVar27;
    }
    else {
      auVar69 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
      *(long *)(*pauVar27 + 8) = auVar69._8_8_;
      pauVar27[1][0] = 1;
    }
    auVar57._8_8_ = auStack_b8._0_8_;
    auVar57._0_8_ = auStack_c0;
    *(long *)*pauVar27 = auVar69._0_8_ + 1;
    auStack_120._8_8_ = 0;
    auStack_120._0_8_ = &UNK_108c56c70;
    lStack_108 = 0;
    lStack_110 = 0;
    goto code_r0x000100383108;
  case (long *)0x10:
    pauVar27 = (undefined1 (*) [16])&UNK_109bd785c;
    break;
  case (long *)0x19:
    goto code_r0x000100383274;
  case (long *)0x1d:
    goto code_r0x000100383278;
  case (long *)0x21:
  case (long *)0x25:
    goto code_r0x000100383290;
  case (long *)0x29:
    goto code_r0x00010038329c;
  case (long *)0x2d:
    goto code_r0x0001003832a4;
  case (long *)0x31:
    goto code_r0x00010038312c;
  case (long *)0x35:
  case (long *)0xe1:
    goto code_r0x000100383150;
  case (long *)0x39:
  case (long *)0xed:
  case (long *)0xf9:
    goto code_r0x00010038336c;
  case (long *)0x3d:
  case (long *)0x5d:
  case (long *)0xfd:
    goto code_r0x000100383390;
  case (long *)0x41:
    goto code_r0x0001003832ac;
  case (long *)0x45:
    goto code_r0x0001003832d0;
  case (long *)0x49:
  case (long *)0x61:
  case (long *)0x71:
  case (long *)0x89:
  case (long *)0xa9:
    goto code_r0x000100383144;
  case (long *)0x4d:
  case (long *)0x65:
  case (long *)0x75:
  case (long *)0x8d:
    goto code_r0x000100383168;
  case (long *)0x51:
  case (long *)0x69:
  case (long *)0x81:
  case (long *)0x99:
  case (long *)0xb1:
    goto code_r0x000100383344;
  case (long *)0x55:
  case (long *)0x6d:
  case (long *)0x9d:
  case (long *)0xb5:
    goto code_r0x000100383368;
  case (long *)0x59:
    goto code_r0x00010038337c;
  case (long *)0x72:
  case (long *)0x76:
  case (long *)0x7a:
  case (long *)0x7e:
  case (long *)0x82:
  case (long *)0x86:
    goto code_r0x000100382fd8;
  case (long *)0x79:
    goto code_r0x000100383174;
  case (long *)0x7d:
    goto code_r0x000100383188;
  case (long *)0x85:
    goto code_r0x000100383374;
  case (long *)0x91:
  case (long *)0xad:
    goto code_r0x00010038318c;
  case (long *)0x95:
    goto code_r0x0001003831a4;
  case (long *)0xa1:
    goto code_r0x00010038310c;
  case (long *)0xa5:
    goto code_r0x000100383124;
  case (long *)0xb9:
    goto code_r0x0001003830ec;
  case (long *)0xba:
  case (long *)0xbe:
  case (long *)0xc2:
  case (long *)0xc6:
    goto code_r0x000100382fe4;
  case (long *)0xbd:
    goto code_r0x000100383110;
  case (long *)0xc1:
    goto code_r0x0001003832ec;
  case (long *)0xc5:
    goto code_r0x000100383310;
  case (long *)0xd1:
    goto code_r0x0001003830ac;
  case (long *)0xd5:
    goto code_r0x0001003830d0;
  case (long *)0xd9:
    goto code_r0x0001003831ec;
  case (long *)0xdd:
    goto code_r0x000100383210;
  case (long *)0xe5:
    goto code_r0x00010038319c;
  case (long *)0xe9:
    goto code_r0x000100383364;
  case (long *)0xf1:
    goto code_r0x00010038332c;
  case (long *)0xf2:
  case (long *)0xf6:
  case (long *)0xfa:
  case (long *)0xfe:
    goto code_r0x000100383008;
  case (long *)0xf5:
    goto code_r0x000100383350;
  }
  uStack_e8 = (undefined *)0x2;
  auStack_f0 = (undefined1  [8])pauVar27;
  auVar67 = func_0x00010605d868(pauVar27,2);
code_r0x0001003830ac:
  pauVar41 = auVar67._8_8_;
  plVar28 = auVar67._0_8_;
  if (plVar28 == (long *)0x0) {
    auStack_c0 = (undefined1  [8])auStack_f0;
    auStack_b8._0_8_ = &DAT_100382d14;
    pauVar27 = (undefined1 (*) [16])
               __ZN4core9panicking9panic_fmt17h6f8816b337451651E
                         (s_The______language_is_not_recogni_108abca2c,auStack_c0,&UNK_10b205178);
code_r0x000100383acc:
    auVar69 = __ZN3std3sys6random19hashmap_random_keys17haf8f62da18258996E();
    *(long *)(*pauVar27 + 8) = auVar69._8_8_;
    pauVar27[1][0] = 1;
  }
  else {
    pauVar27 = (undefined1 (*) [16])
               (*
               ___ZN3std4hash6random11RandomState3new4KEYS29__u7b__u7b_constant_u7d__u7d_28__u7b__u7b_closure_u7d__u7d_23__RUST_STD_INTERNAL_VAL17h0dec9515d2a4a3ffE
               )();
    uVar23 = pauVar27[1][0] == '\x01';
code_r0x0001003830d0:
    plVar46 = plVar28;
    unaff_x24 = pauVar41;
    if (!(bool)uVar23) goto code_r0x000100383acc;
    auVar69 = *pauVar27;
  }
  *(long *)*pauVar27 = auVar69._0_8_ + 1;
  auVar57._8_8_ = 0;
  auVar57._0_8_ = &UNK_108c56c70;
  lVar42 = 0;
  lVar36 = 0;
code_r0x0001003830ec:
  auStack_b8._8_8_ = lVar36;
  lStack_a8 = lVar42;
  if (unaff_x24 != (undefined1 (*) [16])0x0) {
    _auStack_c0 = auVar57;
    auStack_a0 = auVar69;
    func_0x000107c040f0(auStack_c0,unaff_x24,auStack_a0,1);
    pauVar27 = (undefined1 (*) [16])0x0;
    auVar57 = _auStack_c0;
    auVar69 = auStack_a0;
code_r0x000100383c7c:
    lVar36 = plVar46[(long)pauVar27 * 2];
    lVar42 = (plVar46 + (long)pauVar27 * 2)[1];
    _auStack_c0 = auVar57;
    auStack_a0 = auVar69;
    if (uVar26 == 0) {
      if (lVar42 == 0) {
        lVar56 = 1;
      }
      else {
        lVar56 = __RNvCshXwFllX56pT_7___rustc12___rust_alloc(lVar42,1);
        auVar57 = _auStack_c0;
        auVar69 = auStack_a0;
        if (lVar56 == 0) {
          FUN_107c03c64(1,lVar42);
          goto LAB_100383fd4;
        }
      }
      _auStack_c0 = auVar57;
      auStack_a0 = auVar69;
      _memcpy(lVar56,lVar36,lVar42);
      auStack_120._0_8_ = lVar42;
      auStack_120._8_8_ = lVar56;
      lStack_110 = lVar42;
    }
    else {
      func_0x0001055f2058(auStack_f0,lVar36,lVar42,&UNK_108c89f00,3);
      func_0x0001000261fc(auStack_120,auStack_f0);
    }
    lVar36 = lStack_110;
    uVar59 = auStack_120._8_8_;
    uVar44 = func_0x000100384800(auStack_a0._0_8_,auStack_a0._8_8_,auStack_120._8_8_,lStack_110);
    if (auStack_b8._8_8_ == 0) {
      func_0x000107c040f0(auStack_c0,1,auStack_a0,1);
    }
    uVar55 = auStack_b8._0_8_;
    auVar20 = auStack_c0;
    bVar43 = false;
    lVar42 = 0;
    bVar2 = (byte)(uVar44 >> 0x38);
    bVar38 = bVar2 >> 1;
    do {
      uVar44 = uVar44 & uVar55;
      lVar56 = *(long *)((long)auVar20 + uVar44);
      bVar58 = (byte)lVar56;
      bVar60 = (byte)((ulong)lVar56 >> 8);
      bVar61 = (byte)((ulong)lVar56 >> 0x10);
      bVar62 = (byte)((ulong)lVar56 >> 0x18);
      bVar63 = (byte)((ulong)lVar56 >> 0x20);
      bVar64 = (byte)((ulong)lVar56 >> 0x28);
      bVar65 = (byte)((ulong)lVar56 >> 0x30);
      bVar66 = (byte)((ulong)lVar56 >> 0x38);
      for (uVar49 = CONCAT17(-(bVar66 == bVar38),
                             CONCAT16(-(bVar65 == bVar38),
                                      CONCAT15(-(bVar64 == bVar38),
                                               CONCAT14(-(bVar63 == bVar38),
                                                        CONCAT13(-(bVar62 == bVar38),
                                                                 CONCAT12(-(bVar61 == bVar38),
                                                                          CONCAT11(-(bVar60 ==
                                                                                    bVar38),-(bVar58
                                                                                             == 
                                                  bVar38)))))))) & 0x8080808080808080; uVar49 != 0;
          uVar49 = uVar49 - 1 & uVar49) {
        uVar32 = (uVar49 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar49 >> 7 & 0xff00ff00ff00ff) << 8;
        uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
        uVar32 = uVar44 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3) & uVar55;
        if (lVar36 == *(long *)((long)auVar20 + (uVar32 * -3 + -1) * 8)) {
          iVar24 = _memcmp(uVar59,*(long *)((long)auVar20 + (uVar32 * -3 + -2) * 8));
          if (iVar24 == 0) {
            auVar57 = _auStack_c0;
            auVar69 = auStack_a0;
            if (auStack_120._0_8_ != 0) {
              _free(uVar59);
              auVar57 = _auStack_c0;
              auVar69 = auStack_a0;
            }
            goto code_r0x000100383c6c;
          }
        }
      }
      if (bVar43) {
code_r0x000100383bc0:
        bVar58 = NEON_umaxv(CONCAT17(-(bVar66 == 0xff),
                                     CONCAT16(-(bVar65 == 0xff),
                                              CONCAT15(-(bVar64 == 0xff),
                                                       CONCAT14(-(bVar63 == 0xff),
                                                                CONCAT13(-(bVar62 == 0xff),
                                                                         CONCAT12(-(bVar61 == 0xff),
                                                                                  CONCAT11(-(bVar60 
                                                  == 0xff),-(bVar58 == 0xff)))))))),1);
        if ((bVar58 & 1) != 0) goto code_r0x000100383c10;
        bVar43 = true;
      }
      else {
        uVar49 = CONCAT17(-(lVar56 < 0),
                          CONCAT16(-((char)bVar65 < '\0'),
                                   CONCAT15(-((char)bVar64 < '\0'),
                                            CONCAT14(-((char)bVar63 < '\0'),
                                                     CONCAT13(-((char)bVar62 < '\0'),
                                                              CONCAT12(-((char)bVar61 < '\0'),
                                                                       CONCAT11(-((char)bVar60 <
                                                                                 '\0'),-((char)
                                                  bVar58 < '\0'))))))));
        if (uVar49 != 0) {
          uVar49 = (uVar49 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar49 & 0x5555555555555555) << 1;
          uVar49 = (uVar49 & 0xcccccccccccccccc) >> 2 | (uVar49 & 0x3333333333333333) << 2;
          uVar49 = (uVar49 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar49 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar49 = (uVar49 & 0xff00ff00ff00ff00) >> 8 | (uVar49 & 0xff00ff00ff00ff) << 8;
          uVar49 = (uVar49 & 0xffff0000ffff0000) >> 0x10 | (uVar49 & 0xffff0000ffff) << 0x10;
          uStack_178 = uVar44 + ((ulong)LZCOUNT(uVar49 >> 0x20 | uVar49 << 0x20) >> 3) & uVar55;
          goto code_r0x000100383bc0;
        }
        bVar43 = false;
      }
      lVar42 = lVar42 + 8;
      uVar44 = lVar42 + uVar44;
    } while( true );
  }
code_r0x0001003830f8:
  lStack_108 = lStack_a8;
  lStack_110 = auStack_b8._8_8_;
  auStack_120 = auVar57;
  auStack_a0 = auVar69;
code_r0x000100383108:
  pauVar33 = (undefined1 (*) [16])0x10b626000;
  _auStack_c0 = auVar57;
  auStack_100 = auVar69;
code_r0x00010038310c:
  pauVar33 = pauVar33 + 0x98;
code_r0x000100383110:
  if (*(long *)*pauVar33 != 2) {
    func_0x000107c040f8();
  }
  pauVar33 = (undefined1 (*) [16])0x10b626990;
code_r0x000100383124:
  if (*(long *)*pauVar33 == 0) {
    func_0x000107c040d8();
  }
code_r0x00010038312c:
  iVar24 = _pthread_mutex_lock();
  if (iVar24 != 0) {
    thunk_FUN_108a81ad4();
    goto LAB_100383fd4;
  }
  if ((*puVar48 & 0x7fffffffffffffff) == 0) {
    plVar46 = (long *)0x0;
    auVar68 = _auStack_c0;
code_r0x000100383144:
    uVar23 = SUB81(plVar46,0);
  }
  else {
    uVar26 = FUN_107c05e34();
    uVar23 = (undefined1)(uVar26 ^ 1);
    plVar46 = (long *)(ulong)(uVar26 ^ 1);
    auVar68 = _auStack_c0;
  }
  if (cRam000000010b626998 != '\0') {
    auStack_c0 = (undefined1  [8])0x10b626990;
    auStack_b8._1_7_ = auVar68._9_7_;
    auStack_b8[0] = uVar23;
    FUN_107c05cb4(&UNK_108c89f03,0x2b,auStack_c0,&UNK_10b205230,&UNK_10b2051f8);
    goto LAB_100383fd4;
  }
  pauVar27 = (undefined1 (*) [16])auStack_c0;
code_r0x000100383150:
  _auStack_c0 = auVar68;
  func_0x000100384c8c(pauVar27,auStack_120);
  lStack_d8 = lStack_a8;
  lStack_e0 = auStack_b8._8_8_;
  _auStack_f0 = _auStack_c0;
  auStack_d0 = auStack_a0;
code_r0x000100383168:
  pauVar33 = (undefined1 (*) [16])(uRam000000010b6269e0 ^ (ulong)plVar45);
  plVar40 = (long *)0x7f2d;
  puVar29 = puRam000000010b6269d8;
code_r0x000100383174:
  plVar40 = (long *)((ulong)plVar40 & 0xffff | 0x5851f42d4c950000);
  pauVar39 = (undefined1 (*) [16])((long)pauVar33 * (long)plVar40);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = pauVar33;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = plVar40;
  pauVar33 = SUB168(auVar7 * auVar14,8);
code_r0x000100383188:
  pauVar33 = (undefined1 (*) [16])((ulong)pauVar33 ^ (ulong)pauVar39);
code_r0x00010038318c:
  pauVar39 = (undefined1 (*) [16])(((ulong)pauVar33 ^ (ulong)plVar51) * (long)plVar40);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)pauVar33 ^ (ulong)plVar51;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = plVar40;
  pauVar33 = SUB168(auVar8 * auVar15,8);
  plVar52 = plVar51;
code_r0x00010038319c:
  pauVar33 = (undefined1 (*) [16])((ulong)pauVar33 ^ (ulong)pauVar39);
  pauVar39 = (undefined1 (*) [16])((long)pauVar33 * (long)puVar29);
code_r0x0001003831a4:
  auVar9._8_8_ = 0;
  auVar9._0_8_ = pauVar33;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = puVar29;
  uVar49 = SUB168(auVar9 * auVar16,8) ^ (ulong)pauVar39;
  uVar44 = (ulong)(uint)-(int)pauVar33 & 0x3f;
  plStack_138 = (long *)(uVar49 >> uVar44 | uVar49 << 0x40 - uVar44);
  auVar68 = func_0x000100384928(plStack_138,plVar45,plVar52);
  uVar32 = auVar68._8_8_;
  uVar23 = (undefined1)(param_4 >> 0x18);
  auVar18 = _auStack_f0;
  auVar19 = auStack_d0;
  if ((auVar68._0_8_ & 1) == 0) {
    auStack_c0[1] = (char)plVar52;
    auStack_c0[0] = uVar23;
    auStack_a0._0_8_ = lStack_d8;
    lStack_a8 = lStack_e0;
    uVar44 = 0x10b626000;
    unaff_x24 = pauRam000000010b6269b0;
    uStack_144 = uVar3;
code_r0x000100383274:
    if (unaff_x24 == (undefined1 (*) [16])0x0) {
      puVar29 = &UNK_10b2052e8;
code_r0x000100383fb8:
      auStack_b8 = auVar18;
      unique0x10004505 = auVar19;
      FUN_107c05cd0(0,0,puVar29);
      goto LAB_100383fd4;
    }
code_r0x000100383278:
    plVar45 = (long *)0x10b626000;
    pauVar27 = *(undefined1 (**) [16])(uRam000000010b6269a8 + 0x38);
    uVar49 = uRam000000010b6269a8;
    if (pauVar27 == (undefined1 (*) [16])0x0) {
      uVar23 = unaff_x24 == pauRam000000010b6269a0;
code_r0x000100383344:
      auStack_b8 = auVar18;
      unique0x10004375 = auVar19;
      if ((bool)uVar23) {
        pauVar27 = (undefined1 (*) [16])0x10b6269a0;
code_r0x000100383350:
        auStack_b8 = auVar18;
        unique0x10004495 = auVar19;
        func_0x000107c040e8(pauVar27);
        uVar49 = *(ulong *)((long)plVar45 + 0x9a8);
      }
      puVar29 = (undefined *)(uVar49 + (long)unaff_x24 * 0x48);
      pauVar33 = (undefined1 (*) [16])0x2;
      auVar18 = auStack_b8;
      auVar19 = unique0x10002964;
code_r0x000100383364:
      puVar29[1] = (char)pauVar33;
code_r0x000100383368:
      uVar22 = (undefined1 (*) [16])0xfffffffffffffffe < unaff_x24;
      pauVar33 = (undefined1 (*) [16])(*unaff_x24 + 1);
code_r0x00010038336c:
      *(undefined8 *)(puVar29 + 0x38) = 0;
      *(undefined8 *)(puVar29 + 0x40) = 0;
      *(undefined1 (**) [16])(uVar44 + 0x9b0) = pauVar33;
code_r0x000100383374:
      plVar45 = plStack_138;
      if ((bool)uVar22) {
        puVar29 = &UNK_10b205300;
        goto code_r0x000100383fb8;
      }
code_r0x00010038337c:
      pauVar27 = unaff_x24;
      *(undefined1 (**) [16])(uVar49 + 0x38) = pauVar27;
      uVar44 = (ulong)uStack_144;
      uVar22 = pauVar33 <= pauVar27;
      unaff_x24 = pauVar33;
code_r0x000100383390:
      if ((bool)uVar22) goto code_r0x000100383394;
    }
    else {
      uVar44 = (ulong)uStack_144;
      plVar45 = plStack_138;
code_r0x000100383290:
      if (unaff_x24 <= pauVar27) {
code_r0x000100383394:
        auStack_b8 = auVar18;
        unique0x100044a5 = auVar19;
        FUN_107c05cd0(pauVar27,unaff_x24,&UNK_10b205318);
        goto LAB_100383fd4;
      }
    }
    pauVar33 = (undefined1 (*) [16])0x48;
code_r0x00010038329c:
    plVar52 = (long *)(uVar49 + (long)pauVar27 * (long)pauVar33);
    pauStack_140 = pauVar27;
code_r0x0001003832a4:
    uVar23 = *(char *)((long)plVar52 + 1) == '\x02';
code_r0x0001003832ac:
    auStack_b8 = auVar18;
    unique0x10004475 = auVar19;
    if ((!(bool)uVar23) && (lStack_158 = plVar52[2], lStack_158 != 0)) {
      puVar48 = (ulong *)plVar52[4];
      plStack_150 = plVar46;
      if (puVar48 != (ulong *)0x0) {
        plVar46 = (long *)plVar52[1];
        plVar53 = plVar46;
code_r0x0001003832d0:
        plVar54 = plVar53 + 1;
        lVar36 = *plVar53;
        plVar45 = (long *)(CONCAT17(-(-1 < lVar36),
                                    CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                                             CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                                      CONCAT14(-(-1 < (char)((ulong)lVar36 >> 0x20))
                                                               ,CONCAT13(-(-1 < (char)((ulong)lVar36
                                                                                      >> 0x18)),
                                                                         CONCAT12(-(-1 < (char)((
                                                  ulong)lVar36 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar36 >> 8)),
                                                           -(-1 < (char)lVar36)))))))) &
                          0x8080808080808080);
        uVar44 = 0x18;
        auStack_b8 = auVar18;
        unique0x10004575 = auVar19;
        do {
          while (auVar18 = auStack_b8, auVar19 = unique0x10002eb4, plVar45 == (long *)0x0) {
            plVar53 = plVar54 + 1;
            lVar36 = *plVar54;
            plVar46 = plVar46 + -0x18;
            plVar45 = (long *)(CONCAT17(-(-1 < lVar36),
                                        CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                                                 CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                                          CONCAT14(-(-1 < (char)((ulong)lVar36 >>
                                                                                0x20)),
                                                                   CONCAT13(-(-1 < (char)((ulong)
                                                  lVar36 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar36 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar36 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar36)))))))) &
                              0x8080808080808080);
code_r0x000100383310:
            plVar54 = plVar53;
            auStack_b8 = auVar18;
            unique0x10004565 = auVar19;
          }
          uVar32 = ((ulong)plVar45 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                   ((ulong)plVar45 & 0x5555555555555555) << 1;
          uVar35 = (uVar32 & 0xcccccccccccccccc) >> 2;
          uVar32 = uVar35 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar35 & 0xf00ff00ff00ff000) >> 0xc |
                   (uVar32 >> 4 & 0xff00ff00ff00ff | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          pauVar33 = (undefined1 (*) [16])
                     ((long)plVar46 +
                     (long)-(int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3) *
                     (long)(int)uVar44);
          if (*(long *)(pauVar33[-2] + 8) != 0) {
code_r0x00010038332c:
            auStack_b8 = auVar18;
            unique0x100046c5 = auVar19;
            _free(*(undefined8 *)pauVar33[-1]);
          }
          pauVar33 = (undefined1 (*) [16])((long)plVar45 - 1);
          auVar18 = auStack_b8;
          auVar19 = unique0x10002ef4;
code_r0x0001003832ec:
          unique0x10002fd4 = auVar19;
          auStack_b8 = auVar18;
          plVar45 = (long *)((ulong)pauVar33 & (ulong)plVar45);
          puVar48 = (ulong *)((long)puVar48 + -1);
        } while (puVar48 != (ulong *)0x0);
      }
      puVar48 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
      uVar44 = (ulong)uStack_144;
      plVar46 = (long *)((ulong)plStack_150 & 0xffffffff);
      plVar45 = plStack_138;
      if (lStack_158 * 0x19 != -0x21) {
        _free(plVar52[1] + lStack_158 * -0x18 + -0x18);
      }
    }
    plVar52[6] = lStack_90;
    plVar52[3] = lStack_a8;
    plVar52[2] = auStack_b8._8_8_;
    plVar52[5] = auStack_a0._8_8_;
    plVar52[4] = auStack_a0._0_8_;
    plVar52[1] = auStack_b8._0_8_;
    *plVar52 = (long)auStack_c0;
    pauVar27 = (undefined1 (*) [16])plVar52[8];
    if (pauVar27 < unaff_x24) {
      pauVar33 = (undefined1 (*) [16])plVar52[7];
      *(undefined1 (**) [16])(uVar49 + (long)pauVar27 * 0x48 + 0x38) = pauVar33;
      if (pauVar33 < unaff_x24) {
        *(undefined1 (**) [16])(uVar49 + (long)pauVar33 * 0x48 + 0x40) = pauVar27;
        pauVar27 = *(undefined1 (**) [16])(uVar49 + 0x80);
        lVar36 = uVar49 + (long)pauStack_140 * 0x48;
        *(undefined1 (**) [16])(lVar36 + 0x38) = pauVar27;
        *(undefined8 *)(lVar36 + 0x40) = 1;
        *(undefined1 (**) [16])(uVar49 + 0x80) = pauStack_140;
        if (pauVar27 < unaff_x24) {
          *(undefined1 (**) [16])(uVar49 + (long)pauVar27 * 0x48 + 0x40) = pauStack_140;
          plVar51 = plRam000000010b6269b8;
          uVar49 = uRam000000010b6269c0 & (ulong)plVar45;
          lVar36 = *(long *)((long)plRam000000010b6269b8 + uVar49);
          uVar32 = CONCAT17(-(lVar36 < 0),
                            CONCAT16(-((char)((ulong)lVar36 >> 0x30) < '\0'),
                                     CONCAT15(-((char)((ulong)lVar36 >> 0x28) < '\0'),
                                              CONCAT14(-((char)((ulong)lVar36 >> 0x20) < '\0'),
                                                       CONCAT13(-((char)((ulong)lVar36 >> 0x18) <
                                                                 '\0'),CONCAT12(-((char)((ulong)
                                                  lVar36 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar36 >> 8) < '\0'),
                                                           -((char)lVar36 < '\0'))))))));
          if (uVar32 == 0) {
            lVar36 = 8;
            do {
              uVar49 = uVar49 + lVar36 & uRam000000010b6269c0;
              lVar42 = *(long *)((long)plRam000000010b6269b8 + uVar49);
              uVar32 = CONCAT17(-(lVar42 < 0),
                                CONCAT16(-((char)((ulong)lVar42 >> 0x30) < '\0'),
                                         CONCAT15(-((char)((ulong)lVar42 >> 0x28) < '\0'),
                                                  CONCAT14(-((char)((ulong)lVar42 >> 0x20) < '\0'),
                                                           CONCAT13(-((char)((ulong)lVar42 >> 0x18)
                                                                     < '\0'),CONCAT12(-((char)((
                                                  ulong)lVar42 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar42 >> 8) < '\0'),
                                                           -((char)lVar42 < '\0'))))))));
              lVar36 = lVar36 + 8;
            } while (uVar32 == 0);
          }
          uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
          uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
          uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
          uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
          uVar49 = uVar49 + ((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3) &
                   uRam000000010b6269c0;
          bVar2 = *(byte *)((long)plRam000000010b6269b8 + uVar49);
          if ((char)bVar2 < '\0') {
            uVar26 = (uint)bVar2;
            if ((bVar2 & 1) == 0) goto code_r0x0001003834ac;
code_r0x0001003834a8:
            uVar26 = (uint)bVar2;
            if (lRam000000010b6269c8 != 0) goto code_r0x0001003834ac;
            func_0x000107c040f4(0x10b6269b8,1,0x10b6269d8,0x10b6269a0,1);
            uVar32 = uRam000000010b6269c0;
            plVar51 = plRam000000010b6269b8;
            uVar49 = func_0x00010038516c(plRam000000010b6269b8,uRam000000010b6269c0,plStack_138);
            lRam000000010b6269c8 =
                 lRam000000010b6269c8 - ((ulong)*(byte *)((long)plVar51 + uVar49) & 1);
            bVar2 = (byte)((ulong)plStack_138 >> 0x38);
            *(byte *)((long)plVar51 + uVar49) = bVar2 >> 1;
            lVar36 = (long)plVar51 + (uVar49 - 8 & uVar32);
            auVar18 = auStack_b8;
            auVar19 = stack0xffffffffffffff68;
          }
          else {
            lVar36 = *plRam000000010b6269b8;
            uVar49 = CONCAT17(-(lVar36 < 0),
                              CONCAT16(-((char)((ulong)lVar36 >> 0x30) < '\0'),
                                       CONCAT15(-((char)((ulong)lVar36 >> 0x28) < '\0'),
                                                CONCAT14(-((char)((ulong)lVar36 >> 0x20) < '\0'),
                                                         CONCAT13(-((char)((ulong)lVar36 >> 0x18) <
                                                                   '\0'),CONCAT12(-((char)((ulong)
                                                  lVar36 >> 0x10) < '\0'),
                                                  CONCAT11(-((char)((ulong)lVar36 >> 8) < '\0'),
                                                           -((char)lVar36 < '\0'))))))));
            uVar49 = (uVar49 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar49 & 0x5555555555555555) << 1;
            uVar49 = (uVar49 & 0xcccccccccccccccc) >> 2 | (uVar49 & 0x3333333333333333) << 2;
            uVar49 = (uVar49 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar49 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar49 = (uVar49 & 0xff00ff00ff00ff00) >> 8 | (uVar49 & 0xff00ff00ff00ff) << 8;
            uVar49 = (uVar49 & 0xffff0000ffff0000) >> 0x10 | (uVar49 & 0xffff0000ffff) << 0x10;
            uVar49 = (ulong)LZCOUNT(uVar49 >> 0x20 | uVar49 << 0x20) >> 3;
            bVar2 = *(byte *)((long)plRam000000010b6269b8 + uVar49);
            uVar26 = (uint)bVar2;
            if ((bVar2 & 1) != 0) goto code_r0x0001003834a8;
code_r0x0001003834ac:
            lRam000000010b6269c8 = lRam000000010b6269c8 - (ulong)(uVar26 & 1);
            bVar2 = (byte)((ulong)plVar45 >> 0x38);
            uVar32 = uVar49 - 8 & uRam000000010b6269c0;
            *(byte *)((long)plRam000000010b6269b8 + uVar49) = bVar2 >> 1;
            lVar36 = (long)plVar51 + uVar32;
            auVar18 = auStack_b8;
            auVar19 = unique0x10002c84;
          }
          plStack_138 = (long *)0x0;
          *(byte *)(lVar36 + 8) = bVar2 >> 1;
          uRam000000010b6269d0 = uRam000000010b6269d0 + 1;
          plVar51[-1 - uVar49] = (long)pauStack_140;
          uVar26 = uVar50;
          goto code_r0x0001003834f4;
        }
        puVar29 = &UNK_10b2052d0;
      }
      else {
        puVar29 = &UNK_10b2053a8;
        pauVar27 = pauVar33;
      }
    }
    else {
      puVar29 = &UNK_10b205390;
    }
    FUN_107c05cd0(pauVar27,unaff_x24,puVar29);
  }
  else {
    auStack_c0[1] = (char)plVar52;
    auStack_c0[0] = uVar23;
    auStack_a0._0_8_ = lStack_d8;
    lStack_a8 = lStack_e0;
    pauVar33 = (undefined1 (*) [16])0x10b626000;
code_r0x0001003831ec:
    if (*(ulong *)pauVar33[0x9b] <= uVar32) {
      auStack_b8 = auVar18;
      unique0x100042c5 = auVar19;
      FUN_107c05cd0(uVar32,*(ulong *)pauVar33[0x9b],&UNK_10b205360);
      goto LAB_100383fd4;
    }
    pauVar33 = (undefined1 (*) [16])(uRam000000010b6269a8 + uVar32 * 0x48);
    puVar29 = (undefined *)(ulong)(byte)(*pauVar33)[1];
    plVar40 = *(long **)(*pauVar33 + 8);
    pauVar39 = *(undefined1 (**) [16])pauVar33[1];
code_r0x000100383210:
    lStack_90 = auVar19._8_8_;
    auStack_a0._8_8_ = auVar19._0_8_;
    auStack_b8._8_8_ = auVar18._8_8_;
    auStack_b8._0_8_ = auVar18._0_8_;
    uVar44 = (ulong)uVar3;
    plVar51 = *(long **)pauVar33[2];
    *(long *)pauVar33[3] = lStack_90;
    *(undefined8 *)(*pauVar33 + 8) = auStack_b8._0_8_;
    *(undefined1 (*) [8])*pauVar33 = auStack_c0;
    *(long *)(pauVar33[1] + 8) = lStack_a8;
    *(undefined8 *)pauVar33[1] = auStack_b8._8_8_;
    *(undefined8 *)(pauVar33[2] + 8) = auStack_a0._8_8_;
    *(undefined8 *)pauVar33[2] = auStack_a0._0_8_;
    uVar26 = (uint)plVar52;
    pauStack_140 = pauVar39;
    plStack_138 = plVar40;
    if ((int)puVar29 == 2) {
      plStack_138 = (long *)0x0;
    }
code_r0x0001003834f4:
    pauVar27 = pauRam000000010b6269b0;
    uVar49 = uRam000000010b6269a8;
    auStack_b8 = auVar18;
    unique0x100043d5 = auVar19;
    if (uRam000000010b6269d0 <= uRam000000010b6269f8) {
code_r0x000100383828:
      auVar68 = auStack_100;
      if ((plStack_138 != (long *)0x0) && (pauStack_140 != (undefined1 (*) [16])0x0)) {
        if (plVar51 != (long *)0x0) {
          plVar52 = plStack_138 + 1;
          lVar36 = *plStack_138;
          uVar49 = CONCAT17(-(-1 < lVar36),
                            CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                                     CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                              CONCAT14(-(-1 < (char)((ulong)lVar36 >> 0x20)),
                                                       CONCAT13(-(-1 < (char)((ulong)lVar36 >> 0x18)
                                                                 ),CONCAT12(-(-1 < (char)((ulong)
                                                  lVar36 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar36 >> 8)),
                                                           -(-1 < (char)lVar36)))))))) &
                   0x8080808080808080;
          plVar45 = plStack_138;
          do {
            while (uVar49 == 0) {
              lVar36 = *plVar52;
              plVar45 = plVar45 + -0x18;
              plVar52 = plVar52 + 1;
              uVar49 = CONCAT17(-(-1 < lVar36),
                                CONCAT16(-(-1 < (char)((ulong)lVar36 >> 0x30)),
                                         CONCAT15(-(-1 < (char)((ulong)lVar36 >> 0x28)),
                                                  CONCAT14(-(-1 < (char)((ulong)lVar36 >> 0x20)),
                                                           CONCAT13(-(-1 < (char)((ulong)lVar36 >>
                                                                                 0x18)),
                                                                    CONCAT12(-(-1 < (char)((ulong)
                                                  lVar36 >> 0x10)),
                                                  CONCAT11(-(-1 < (char)((ulong)lVar36 >> 8)),
                                                           -(-1 < (char)lVar36)))))))) &
                       0x8080808080808080;
            }
            uVar32 = (uVar49 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar49 >> 7 & 0xff00ff00ff00ff) << 8
            ;
            uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
            iVar24 = (int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
            if (plVar45[(long)-iVar24 * 3 + -3] != 0) {
              _free(plVar45[(long)-iVar24 * 3 + -2]);
            }
            uVar49 = uVar49 - 1 & uVar49;
            plVar51 = (long *)((long)plVar51 + -1);
          } while (plVar51 != (long *)0x0);
        }
        uVar26 = uVar50;
        auVar68 = auStack_100;
        if ((long)pauStack_140 * 0x19 != -0x21) {
          _free(plStack_138 + (long)pauStack_140 * -3 + -3);
          auVar68 = auStack_100;
        }
      }
      uVar50 = uVar26;
      lStack_d8 = lStack_108;
      lStack_e0 = lStack_110;
      auStack_100 = auVar68;
      _auStack_f0 = auStack_120;
      if ((((ulong)plVar46 & 1) == 0) && ((*puVar48 & 0x7fffffffffffffff) != 0)) {
        uVar49 = FUN_107c05e34();
        if ((uVar49 & 1) == 0) {
          cRam000000010b626998 = '\x01';
        }
      }
      _pthread_mutex_unlock(lRam000000010b626990);
LAB_100383920:
      *(undefined1 (*) [16])(param_1 + 1) = _auStack_f0;
      puVar29 = &DAT_100384218;
      if (uVar50 == 0) {
        puVar29 = &DAT_100384480;
      }
      *param_1 = puVar29;
      param_1[4] = lStack_d8;
      param_1[3] = lStack_e0;
      *(undefined1 (*) [16])(param_1 + 5) = auVar68;
      param_1[7] = puVar47;
      *(byte *)(param_1 + 8) = (byte)(param_4 >> 8) & 1;
      *(char *)((long)param_1 + 0x41) = (char)(uVar44 >> 8);
      *(char *)((long)param_1 + 0x42) = (char)uVar50;
      return;
    }
    if (pauRam000000010b6269b0 < (undefined1 (*) [16])0x2) {
      puVar29 = &UNK_10b205288;
      pauVar33 = (undefined1 (*) [16])0x1;
    }
    else {
      pauVar39 = *(undefined1 (**) [16])(uRam000000010b6269a8 + 0x88);
      if (pauVar39 < pauRam000000010b6269b0) {
        pbVar37 = (byte *)(uRam000000010b6269a8 + (long)pauVar39 * 0x48);
        bVar2 = pbVar37[1];
        if (bVar2 == 2) {
          puVar34 = &UNK_10b205348;
code_r0x000100383e10:
          FUN_107c05cac(&UNK_108c89f97,0xd,puVar34);
        }
        else {
          lVar36 = 0;
          uVar32 = uRam000000010b6269e0 ^ *pbVar37;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar32;
          uVar32 = SUB168(auVar10 * ZEXT816(0x5851f42d4c957f2d),8) ^ uVar32 * 0x5851f42d4c957f2d ^
                   (ulong)bVar2;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar32;
          uVar32 = SUB168(auVar11 * ZEXT816(0x5851f42d4c957f2d),8) ^ uVar32 * 0x5851f42d4c957f2d;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar32;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = puRam000000010b6269d8;
          uVar35 = SUB168(auVar12 * auVar17,8) ^ uVar32 * (long)puRam000000010b6269d8;
          uVar32 = (ulong)(uint)-(int)uVar32 & 0x3f;
          uVar35 = uVar35 >> uVar32 | uVar35 << 0x40 - uVar32;
          bVar38 = (byte)(uVar35 >> 0x39);
          puVar29 = &UNK_10b205330;
          puVar34 = &UNK_10b205348;
          uVar35 = uVar35 & uRam000000010b6269c0;
          uVar59 = *(undefined8 *)((long)plRam000000010b6269b8 + uVar35);
          uVar32 = CONCAT17(-((byte)((ulong)uVar59 >> 0x38) == bVar38),
                            CONCAT16(-((byte)((ulong)uVar59 >> 0x30) == bVar38),
                                     CONCAT15(-((byte)((ulong)uVar59 >> 0x28) == bVar38),
                                              CONCAT14(-((byte)((ulong)uVar59 >> 0x20) == bVar38),
                                                       CONCAT13(-((byte)((ulong)uVar59 >> 0x18) ==
                                                                 bVar38),CONCAT12(-((byte)((ulong)
                                                  uVar59 >> 0x10) == bVar38),
                                                  CONCAT11(-((byte)((ulong)uVar59 >> 8) == bVar38),
                                                           -((byte)uVar59 == bVar38)))))))) &
                   0x8080808080808080;
          while( true ) {
            for (; uVar32 != 0; uVar32 = uVar32 - 1 & uVar32) {
              uVar30 = (uVar32 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                       (uVar32 >> 7 & 0xff00ff00ff00ff) << 8;
              uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
              uVar30 = uVar35 + ((ulong)LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) >> 3) &
                       uRam000000010b6269c0;
              pauVar33 = (undefined1 (*) [16])plRam000000010b6269b8[-1 - uVar30];
              if (pauRam000000010b6269b0 <= pauVar33) goto code_r0x000100383fa8;
              pbVar31 = (byte *)(uRam000000010b6269a8 + (long)pauVar33 * 0x48);
              bVar58 = pbVar31[1];
              if (bVar58 == 2) goto code_r0x000100383e10;
              if (bVar2 == bVar58 && *pbVar37 == *pbVar31) {
                puVar1 = (undefined8 *)
                         ((long)plRam000000010b6269b8 + (uVar30 - 8 & uRam000000010b6269c0));
                uVar59 = *puVar1;
                uVar55 = *(undefined8 *)((long)plRam000000010b6269b8 + uVar30);
                uVar32 = CONCAT17(-((char)((ulong)uVar55 >> 0x38) == -1),
                                  CONCAT16(-((char)((ulong)uVar55 >> 0x30) == -1),
                                           CONCAT15(-((char)((ulong)uVar55 >> 0x28) == -1),
                                                    CONCAT14(-((char)((ulong)uVar55 >> 0x20) == -1),
                                                             CONCAT13(-((char)((ulong)uVar55 >> 0x18
                                                                              ) == -1),
                                                                      CONCAT12(-((char)((ulong)
                                                  uVar55 >> 0x10) == -1),
                                                  CONCAT11(-((char)((ulong)uVar55 >> 8) == -1),
                                                           -((char)uVar55 == -1))))))));
                uVar32 = (uVar32 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar32 & 0x5555555555555555) << 1;
                uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
                uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
                uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
                if (((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3) +
                    ((ulong)LZCOUNT(CONCAT17(-((char)((ulong)uVar59 >> 0x38) == -1),
                                             CONCAT16(-((char)((ulong)uVar59 >> 0x30) == -1),
                                                      CONCAT15(-((char)((ulong)uVar59 >> 0x28) == -1
                                                                ),CONCAT14(-((char)((ulong)uVar59 >>
                                                                                   0x20) == -1),
                                                                           CONCAT13(-((char)((ulong)
                                                  uVar59 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar59 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar59 >> 8) ==
                                                                     -1),-((char)uVar59 == -1)))))))
                                            )) >> 3) < 8) {
                  lRam000000010b6269c8 = lRam000000010b6269c8 + 1;
                  uVar23 = 0xff;
                }
                else {
                  uVar23 = 0x80;
                }
                *(undefined1 *)((long)plRam000000010b6269b8 + uVar30) = uVar23;
                *(undefined1 *)(puVar1 + 1) = uVar23;
                uRam000000010b6269d0 = uRam000000010b6269d0 - 1;
                pauVar33 = *(undefined1 (**) [16])(pbVar37 + 0x40);
                if (pauVar27 <= pauVar33) {
                  puVar29 = &UNK_10b205390;
                  goto code_r0x000100383fa8;
                }
                pauVar41 = *(undefined1 (**) [16])(pbVar37 + 0x38);
                *(undefined1 (**) [16])(uVar49 + (long)pauVar33 * 0x48 + 0x38) = pauVar41;
                if (pauVar27 <= pauVar41) {
                  puVar29 = &UNK_10b2053a8;
                  pauVar33 = pauVar41;
                  goto code_r0x000100383fa8;
                }
                *(undefined1 (**) [16])(uVar49 + (long)pauVar41 * 0x48 + 0x40) = pauVar33;
                pauVar33 = *(undefined1 (**) [16])(uVar49 + 0x38);
                lVar36 = uVar49 + (long)pauVar39 * 0x48;
                *(undefined1 (**) [16])(lVar36 + 0x38) = pauVar33;
                *(undefined8 *)(lVar36 + 0x40) = 0;
                *(undefined1 (**) [16])(uVar49 + 0x38) = pauVar39;
                if (pauVar27 <= pauVar33) {
                  puVar29 = &UNK_10b2052d0;
                  goto code_r0x000100383fa8;
                }
                *(undefined1 (**) [16])(uVar49 + (long)pauVar33 * 0x48 + 0x40) = pauVar39;
                bVar2 = pbVar37[1];
                pbVar37[1] = 2;
                if (bVar2 == 2) {
                  puVar34 = &UNK_10b205378;
                  goto code_r0x000100383e10;
                }
                lVar36 = *(long *)(pbVar37 + 0x10);
                if (lVar36 != 0) {
                  plVar45 = *(long **)(pbVar37 + 8);
                  lVar42 = *(long *)(pbVar37 + 0x20);
                  if (lVar42 != 0) {
                    plVar53 = plVar45 + 1;
                    lVar56 = *plVar45;
                    uVar49 = CONCAT17(-(-1 < lVar56),
                                      CONCAT16(-(-1 < (char)((ulong)lVar56 >> 0x30)),
                                               CONCAT15(-(-1 < (char)((ulong)lVar56 >> 0x28)),
                                                        CONCAT14(-(-1 < (char)((ulong)lVar56 >> 0x20
                                                                              )),
                                                                 CONCAT13(-(-1 < (char)((ulong)
                                                  lVar56 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar56 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar56 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar56)))))))) &
                             0x8080808080808080;
                    plVar52 = plVar45;
                    do {
                      while (uVar49 == 0) {
                        lVar56 = *plVar53;
                        plVar52 = plVar52 + -0x18;
                        plVar53 = plVar53 + 1;
                        uVar49 = CONCAT17(-(-1 < lVar56),
                                          CONCAT16(-(-1 < (char)((ulong)lVar56 >> 0x30)),
                                                   CONCAT15(-(-1 < (char)((ulong)lVar56 >> 0x28)),
                                                            CONCAT14(-(-1 < (char)((ulong)lVar56 >>
                                                                                  0x20)),
                                                                     CONCAT13(-(-1 < (char)((ulong)
                                                  lVar56 >> 0x18)),
                                                  CONCAT12(-(-1 < (char)((ulong)lVar56 >> 0x10)),
                                                           CONCAT11(-(-1 < (char)((ulong)lVar56 >> 8
                                                                                 )),
                                                                    -(-1 < (char)lVar56)))))))) &
                                 0x8080808080808080;
                      }
                      uVar32 = (uVar49 >> 7 & 0xff00ff00ff00ff00) >> 8 |
                               (uVar49 >> 7 & 0xff00ff00ff00ff) << 8;
                      uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 |
                               (uVar32 & 0xffff0000ffff) << 0x10;
                      iVar24 = (int)((ulong)LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) >> 3);
                      if (plVar52[(long)-iVar24 * 3 + -3] != 0) {
                        _free(plVar52[(long)-iVar24 * 3 + -2]);
                      }
                      uVar49 = uVar49 - 1 & uVar49;
                      lVar42 = lVar42 + -1;
                    } while (lVar42 != 0);
                  }
                  puVar48 = (ulong *)&
                                     __ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE
                  ;
                  uVar26 = uVar50;
                  if (lVar36 * 0x19 != -0x21) {
                    _free(plVar45 + lVar36 * -3 + -3);
                  }
                }
                goto code_r0x000100383828;
              }
            }
            bVar58 = NEON_umaxv(CONCAT17(-((char)((ulong)uVar59 >> 0x38) == -1),
                                         CONCAT16(-((char)((ulong)uVar59 >> 0x30) == -1),
                                                  CONCAT15(-((char)((ulong)uVar59 >> 0x28) == -1),
                                                           CONCAT14(-((char)((ulong)uVar59 >> 0x20)
                                                                     == -1),CONCAT13(-((char)((ulong
                                                  )uVar59 >> 0x18) == -1),
                                                  CONCAT12(-((char)((ulong)uVar59 >> 0x10) == -1),
                                                           CONCAT11(-((char)((ulong)uVar59 >> 8) ==
                                                                     -1),-((char)uVar59 == -1)))))))
                                        ),1);
            if ((bVar58 & 1) != 0) break;
            lVar36 = lVar36 + 8;
            uVar35 = uVar35 + lVar36 & uRam000000010b6269c0;
            uVar59 = *(undefined8 *)((long)plRam000000010b6269b8 + uVar35);
            uVar32 = CONCAT17(-((byte)((ulong)uVar59 >> 0x38) == bVar38),
                              CONCAT16(-((byte)((ulong)uVar59 >> 0x30) == bVar38),
                                       CONCAT15(-((byte)((ulong)uVar59 >> 0x28) == bVar38),
                                                CONCAT14(-((byte)((ulong)uVar59 >> 0x20) == bVar38),
                                                         CONCAT13(-((byte)((ulong)uVar59 >> 0x18) ==
                                                                   bVar38),CONCAT12(-((byte)((ulong)
                                                  uVar59 >> 0x10) == bVar38),
                                                  CONCAT11(-((byte)((ulong)uVar59 >> 8) == bVar38),
                                                           -((byte)uVar59 == bVar38)))))))) &
                     0x8080808080808080;
          }
          FUN_107c05e30(&UNK_108c89f68,0x2f,&UNK_10b2052a0);
        }
        goto LAB_100383fd4;
      }
      puVar29 = &UNK_10b205330;
      pauVar33 = pauVar39;
    }
code_r0x000100383fa8:
    FUN_107c05cd0(pauVar33,pauVar27,puVar29);
  }
LAB_100383fd4:
                    /* WARNING: Does not return */
  pcVar21 = (code *)SoftwareBreakpoint(1,0x100383fd8);
  (*pcVar21)();
code_r0x000100383c10:
  uVar49 = (ulong)*(char *)((long)auVar20 + uStack_178);
  uVar44 = uStack_178;
  if (-1 < *(char *)((long)auVar20 + uStack_178)) {
    lVar36 = *(long *)auVar20;
    uVar44 = CONCAT17(-(lVar36 < 0),
                      CONCAT16(-((char)((ulong)lVar36 >> 0x30) < '\0'),
                               CONCAT15(-((char)((ulong)lVar36 >> 0x28) < '\0'),
                                        CONCAT14(-((char)((ulong)lVar36 >> 0x20) < '\0'),
                                                 CONCAT13(-((char)((ulong)lVar36 >> 0x18) < '\0'),
                                                          CONCAT12(-((char)((ulong)lVar36 >> 0x10) <
                                                                    '\0'),CONCAT11(-((char)((ulong)
                                                  lVar36 >> 8) < '\0'),-((char)lVar36 < '\0'))))))))
    ;
    uVar44 = (uVar44 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar44 & 0x5555555555555555) << 1;
    uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2;
    uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
    uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
    uVar44 = (ulong)LZCOUNT(uVar44 >> 0x20 | uVar44 << 0x20) >> 3;
    uVar49 = (ulong)*(byte *)((long)auVar20 + uVar44);
  }
  bVar2 = bVar2 >> 1;
  *(byte *)((long)auVar20 + uVar44) = bVar2;
  *(byte *)((long)auVar20 + (uVar44 - 8 & uVar55) + 8) = bVar2;
  auStack_b8._8_8_ = auStack_b8._8_8_ - (uVar49 & 1);
  lStack_a8 = lStack_a8 + 1;
  *(undefined8 *)((long)auVar20 + (uVar44 * -3 + -2) * 8) = auStack_120._8_8_;
  *(undefined8 *)((long)auVar20 + (uVar44 * -3 + -3) * 8) = auStack_120._0_8_;
  *(long *)((long)auVar20 + (uVar44 * -3 + -1) * 8) = lStack_110;
  auVar57 = _auStack_c0;
  auVar69 = auStack_a0;
code_r0x000100383c6c:
  puVar48 = (ulong *)&__ZN3std9panicking11panic_count18GLOBAL_PANIC_COUNT17h62e5a1aa30f496cbE;
  pauVar27 = (undefined1 (*) [16])(*pauVar27 + 1);
  if (pauVar27 == unaff_x24) goto code_r0x0001003830f8;
  goto code_r0x000100383c7c;
}

