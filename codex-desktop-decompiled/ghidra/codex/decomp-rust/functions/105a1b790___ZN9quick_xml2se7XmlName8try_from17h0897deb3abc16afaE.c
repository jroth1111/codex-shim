
/* WARNING: Type propagation algorithm not settling */

void __ZN9quick_xml2se7XmlName8try_from17h0897deb3abc16afaE
               (undefined8 *param_1,byte *param_2,long param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  char cVar9;
  uint3 uVar10;
  ushort uVar11;
  byte *pbStack_60;
  long lStack_58;
  byte *pbStack_50;
  long lStack_48;
  byte **ppbStack_40;
  undefined1 *puStack_38;
  byte **ppbStack_30;
  undefined1 *puStack_28;
  
  if (param_3 != 0) {
    uVar4 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      if (uVar4 < 0xe0) {
        uVar4 = param_2[1] & 0x3f | (uVar4 & 0x1f) << 6;
      }
      else {
        uVar1 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (uVar4 < 0xf0) {
          uVar4 = uVar1 | (uVar4 & 0x1f) << 0xc;
        }
        else {
          uVar4 = param_2[3] & 0x3f | uVar1 << 6 | (uVar4 & 7) << 0x12;
        }
      }
    }
    if ((((uVar4 != 0x5f) && (uVar4 != 0x3a)) &&
        (cVar9 = -(uVar4 - 0xc0 < 0x17),
        uVar10 = CONCAT12(cVar9,CONCAT11(cVar9,-((uVar4 & 0x1fffdf) - 0x41 < 0x1a))) & 0xff00ff,
        bVar8 = NEON_umaxv(CONCAT17(-((char)((uVar4 - 0x2c00 < 0x3f0) * -0x80) < '\0'),
                                    CONCAT16(-((char)((uVar4 - 0x2070 < 0x120) * -0x80) < '\0'),
                                             CONCAT15(-((char)((uVar4 - 0x37f < 0x1c81) * -0x80) <
                                                       '\0'),CONCAT14(-((char)((uVar4 - 0x370 < 0xe)
                                                                              * -0x80) < '\0'),
                                                                      CONCAT13(-((char)((-(uVar4 - 
                                                  0xf8 < 0x208) | -(uVar4 - 0x10000 < 0xe0000)) << 7
                                                  ) < '\0'),
                                                  CONCAT12(-((char)((-(uVar4 - 0xd8 < 0x1f) |
                                                                    -(uVar4 - 0xfdf0 < 0x20e)) << 7)
                                                            < '\0'),CONCAT11(-((char)(((byte)(uVar10
                                                                                             >> 0x10
                                                  ) | -(uVar4 - 0xf900 < 0x4d0)) << 7) < '\0'),
                                                  -((char)(((byte)uVar10 |
                                                           -(uVar4 - 0x3001 < 0xa7ff)) << 7) < '\0')
                                                  ))))))),1), (bVar8 & 1) == 0)) &&
       ((uVar4 & 0x1ffffe) != 0x200c)) {
      pbStack_50 = (byte *)CONCAT44(pbStack_50._4_4_,uVar4);
      puStack_38 = &__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hccc65653b32ebe4fE;
      pcVar3 = s_character______is_not_allowed_at_108b222d8;
LAB_105a1baa0:
      ppbStack_30 = &pbStack_60;
      ppbStack_40 = &pbStack_50;
      puStack_28 = &LAB_105a19ed4;
      pbStack_60 = param_2;
      lStack_58 = param_3;
      __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E(param_1 + 1,pcVar3,&ppbStack_40);
      *param_1 = 3;
      return;
    }
    lVar5 = 0;
    pbVar6 = param_2;
    do {
      pbVar7 = pbVar6 + 1;
      uVar4 = (uint)*pbVar6;
      if ((char)*pbVar6 < '\0') {
        if (uVar4 < 0xe0) {
          pbVar7 = pbVar6 + 2;
          uVar4 = pbVar6[1] & 0x3f | (uVar4 & 0x1f) << 6;
          goto LAB_105a1b8dc;
        }
        uVar1 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
        if (uVar4 < 0xf0) {
          uVar4 = uVar1 | (uVar4 & 0x1f) << 0xc;
          lStack_48 = (long)(pbVar6 + 3) - (long)pbVar6;
          pbVar6 = pbVar6 + 3;
        }
        else {
          uVar4 = pbVar6[3] & 0x3f | uVar1 << 6 | (uVar4 & 7) << 0x12;
          lStack_48 = (long)(pbVar6 + 4) - (long)pbVar6;
          pbVar6 = pbVar6 + 4;
        }
      }
      else {
LAB_105a1b8dc:
        lStack_48 = (long)pbVar7 - (long)pbVar6;
        pbVar6 = pbVar7;
      }
      if (((((1 < uVar4 - 0x2d) && (uVar4 != 0xb7)) &&
           ((9 < uVar4 - 0x30 && ((0x6f < uVar4 - 0x300 && 1 < uVar4 - 0x203f && (uVar4 != 0x3a)))))
           ) && (uVar4 != 0x5f)) &&
         (((auVar2._2_2_ = -(ushort)(uVar4 - 0xc0 < 0x17),
           auVar2._0_2_ = -(ushort)((uVar4 & 0x1fffdf) - 0x41 < 0x1a),
           auVar2._4_2_ = -(ushort)(uVar4 - 0xd8 < 0x1f),
           auVar2._6_2_ = -(ushort)(uVar4 - 0x370 < 0xe),
           auVar2._8_2_ = -(ushort)(uVar4 - 0x37f < 0x1c81),
           auVar2._10_2_ = -(ushort)(uVar4 - 0x2070 < 0x120),
           auVar2._12_2_ = -(ushort)(uVar4 - 0x2c00 < 0x3f0),
           auVar2._14_2_ = -(ushort)(uVar4 - 0x3001 < 0xa7ff), uVar11 = NEON_umaxv(auVar2,2),
           ((0x4cf < uVar4 - 0xf900 && 0x20d < uVar4 - 0xfdf0) && (uVar11 & 1) == 0) &&
           0xdffff < uVar4 - 0x10000 && ((uVar4 & 0x1ffffe) != 0x200c)) &&
          (uVar4 - 0x300 < 0xfffffdf8)))) {
        pbStack_50 = param_2 + lVar5;
        puStack_38 = &LAB_105a19ed4;
        pcVar3 = s_character______is_not_allowed_in_108b22318;
        goto LAB_105a1baa0;
      }
      lVar5 = lStack_48 + lVar5;
    } while (pbVar6 != param_2 + param_3);
  }
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 5;
  return;
}

