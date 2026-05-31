
/* WARNING: Removing unreachable block (ram,0x0001017c5860) */
/* WARNING: Removing unreachable block (ram,0x0001017c5864) */

void FUN_1017c5d1c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  uVar2 = FUN_108880790(s_duplicate_field_____108ac2973,&stack0x00000030);
  *(char *)(unaff_x20 + 0x48) = *(char *)(unaff_x20 + 0x48) + '\x01';
  lVar1 = FUN_10177b538();
  if (lVar1 != 0) {
    FUN_1017a4f34();
    _free(lVar1);
  }
  uVar2 = FUN_10887f554(uVar2);
  unaff_x19[1] = uVar2;
  *unaff_x19 = 3;
  return;
}

