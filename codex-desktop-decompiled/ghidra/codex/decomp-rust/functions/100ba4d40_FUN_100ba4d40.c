
/* WARNING: Switch with 1 destination removed at 0x000100ba525c */
/* WARNING: Type propagation algorithm not settling */

void FUN_100ba4d40(undefined2 *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 uVar3;
  long unaff_x23;
  long lVar4;
  long lVar5;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  
  lVar1 = *param_2;
  plVar2 = (long *)param_2[1];
  lVar4 = param_2[3];
  switch(param_2[2]) {
  case 5:
    if ((int)*plVar2 == 0x6568746f && *(char *)((long)plVar2 + 4) == 'r') {
      uVar3 = false;
      lVar5 = 0xe;
      goto joined_r0x000100ba52cc;
    }
    break;
  case 10:
    if (*plVar2 == 0x6575716552646162 && (short)plVar2[1] == 0x7473) {
      lVar5 = 8;
joined_r0x000100ba52cc:
      uVar3 = false;
      goto joined_r0x000100ba52cc;
    }
    break;
  case 0xb:
    if (*plVar2 == 0x6c6f507265627963 && *(long *)((long)plVar2 + 3) == 0x7963696c6f507265) {
      lVar5 = 3;
      goto joined_r0x000100ba52cc;
    }
    break;
  case 0xc:
    if (*plVar2 == 0x726f687475616e75 && (int)plVar2[1] == 0x64657a69) {
      lVar5 = 7;
    }
    else {
      if (*plVar2 != 0x45786f62646e6173 || (int)plVar2[1] != 0x726f7272) break;
      lVar5 = 10;
    }
joined_r0x000100ba52bc:
    uVar3 = false;
    goto joined_r0x000100ba52cc;
  case 0x10:
    if (*plVar2 == 0x764f726576726573 && plVar2[1] == 0x646564616f6c7265) {
      lVar5 = 2;
      goto joined_r0x000100ba52bc;
    }
    break;
  case 0x12:
    if ((*plVar2 == 0x6d694c6567617375 && plVar2[1] == 0x6465656378457469) &&
        (short)plVar2[2] == 0x6465) {
      lVar5 = 1;
      goto joined_r0x000100ba52bc;
    }
    break;
  case 0x13:
    if ((*plVar2 == 0x6c616e7265746e69 && plVar2[1] == 0x7245726576726553) &&
        *(long *)((long)plVar2 + 0xb) == 0x726f727245726576) {
      lVar5 = 6;
      goto joined_r0x000100ba52bc;
    }
    break;
  case 0x14:
    if ((*plVar2 == 0x6e6e6f4370747468 && plVar2[1] == 0x61466e6f69746365) &&
        (int)plVar2[2] == 0x64656c69) {
      lVar5 = 4;
    }
    else {
      if ((*plVar2 != 0x6f52646165726874 || plVar2[1] != 0x61466b6361626c6c) ||
          (int)plVar2[2] != 0x64656c69) break;
      lVar5 = 9;
    }
joined_r0x000100ba4f50:
    uVar3 = false;
    goto joined_r0x000100ba52cc;
  case 0x15:
    if ((*plVar2 == 0x57747865746e6f63 && plVar2[1] == 0x637845776f646e69) &&
        *(long *)((long)plVar2 + 0xd) == 0x6465646565637845) {
      lVar5 = 0;
      goto joined_r0x000100ba4f50;
    }
    break;
  case 0x16:
    if ((*plVar2 == 0x7554657669746361 && plVar2[1] == 0x657453746f4e6e72) &&
        *(long *)((long)plVar2 + 0xe) == 0x656c626172656574) {
      lVar5 = 0xd;
      goto joined_r0x000100ba4f50;
    }
    break;
  case 0x1a:
    if (((*plVar2 == 0x65736e6f70736572 && plVar2[1] == 0x69446d6165727453) &&
        plVar2[2] == 0x7463656e6e6f6373) && (short)plVar2[3] == 0x6465) {
      lVar5 = 0xb;
joined_r0x000100ba5198:
      uVar3 = false;
      goto joined_r0x000100ba52cc;
    }
    break;
  case 0x1d:
    if (((*plVar2 == 0x65736e6f70736572 && plVar2[1] == 0x46796e614d6f6f54) &&
        plVar2[2] == 0x74744164656c6961) && *(long *)((long)plVar2 + 0x15) == 0x7374706d65747441) {
      lVar5 = 0xc;
      goto joined_r0x000100ba5198;
    }
    break;
  case 0x1e:
    if (((*plVar2 == 0x65736e6f70736572 && plVar2[1] == 0x6f436d6165727453) &&
        plVar2[2] == 0x6e6f697463656e6e) && *(long *)((long)plVar2 + 0x16) == 0x64656c6961466e6f) {
      uVar3 = false;
      lVar5 = 5;
      goto joined_r0x000100ba52cc;
    }
  }
  unaff_x23 = FUN_1087e4494(plVar2,param_2[2],&UNK_10b231c48,0xf);
  lVar5 = 0;
  uVar3 = true;
joined_r0x000100ba52cc:
  if (lVar1 != 0) {
    _free(plVar2);
  }
  if ((bool)uVar3) {
    lVar5 = unaff_x23;
    if (lVar4 != -0x7ffffffffffffffb) {
      FUN_100de6690(param_2 + 3);
    }
  }
  else if (lVar4 != -0x7ffffffffffffffa) {
    lStack_238 = param_2[5];
    lStack_240 = param_2[4];
    lStack_228 = param_2[7];
    lStack_230 = param_2[6];
    lStack_218 = param_2[9];
    lStack_220 = param_2[8];
    lStack_208 = param_2[0xb];
    lStack_210 = param_2[10];
    lStack_248 = lVar4;
    lVar5 = func_0x000105dc9ddc(&lStack_248);
    if (lVar5 == 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 0;
      return;
    }
  }
  *(long *)(param_1 + 4) = lVar5;
  *param_1 = 1;
  return;
}

