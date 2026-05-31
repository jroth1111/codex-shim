
/* WARNING: Removing unreachable block (ram,0x000100b79308) */
/* WARNING: Removing unreachable block (ram,0x000100b79328) */
/* WARNING: Removing unreachable block (ram,0x000100b7953c) */
/* WARNING: Removing unreachable block (ram,0x000100b79334) */
/* WARNING: Removing unreachable block (ram,0x000100b7933c) */
/* WARNING: Removing unreachable block (ram,0x000100b79588) */
/* WARNING: Removing unreachable block (ram,0x000100b79348) */
/* WARNING: Removing unreachable block (ram,0x000100b793cc) */
/* WARNING: Removing unreachable block (ram,0x000100b7952c) */
/* WARNING: Removing unreachable block (ram,0x000100b793d4) */
/* WARNING: Removing unreachable block (ram,0x000100b793f0) */
/* WARNING: Removing unreachable block (ram,0x000100b79438) */
/* WARNING: Removing unreachable block (ram,0x000100b79440) */
/* WARNING: Removing unreachable block (ram,0x000100b7949c) */
/* WARNING: Removing unreachable block (ram,0x000100b795a8) */
/* WARNING: Removing unreachable block (ram,0x000100b795c4) */
/* WARNING: Removing unreachable block (ram,0x000100b798cc) */
/* WARNING: Removing unreachable block (ram,0x000100b795e8) */
/* WARNING: Removing unreachable block (ram,0x000100b79618) */
/* WARNING: Removing unreachable block (ram,0x000100b79650) */
/* WARNING: Removing unreachable block (ram,0x000100b79660) */
/* WARNING: Removing unreachable block (ram,0x000100b79788) */
/* WARNING: Removing unreachable block (ram,0x000100b79668) */
/* WARNING: Removing unreachable block (ram,0x000100b79674) */
/* WARNING: Removing unreachable block (ram,0x000100b7978c) */
/* WARNING: Removing unreachable block (ram,0x000100b79820) */
/* WARNING: Removing unreachable block (ram,0x000100b7990c) */
/* WARNING: Removing unreachable block (ram,0x000100b79828) */
/* WARNING: Removing unreachable block (ram,0x000100b79858) */
/* WARNING: Removing unreachable block (ram,0x000100b7987c) */
/* WARNING: Removing unreachable block (ram,0x000100b79880) */
/* WARNING: Removing unreachable block (ram,0x000100b79624) */
/* WARNING: Removing unreachable block (ram,0x000100b79634) */
/* WARNING: Removing unreachable block (ram,0x000100b7967c) */
/* WARNING: Removing unreachable block (ram,0x000100b7963c) */
/* WARNING: Removing unreachable block (ram,0x000100b79648) */
/* WARNING: Removing unreachable block (ram,0x000100b79680) */
/* WARNING: Removing unreachable block (ram,0x000100b79714) */
/* WARNING: Removing unreachable block (ram,0x000100b798fc) */
/* WARNING: Removing unreachable block (ram,0x000100b7971c) */
/* WARNING: Removing unreachable block (ram,0x000100b7974c) */
/* WARNING: Removing unreachable block (ram,0x000100b79770) */
/* WARNING: Removing unreachable block (ram,0x000100b79774) */
/* WARNING: Removing unreachable block (ram,0x000100b7988c) */
/* WARNING: Removing unreachable block (ram,0x000100b7997c) */
/* WARNING: Removing unreachable block (ram,0x000100b794ac) */
/* WARNING: Removing unreachable block (ram,0x000100b794b8) */
/* WARNING: Removing unreachable block (ram,0x000100b79554) */
/* WARNING: Removing unreachable block (ram,0x000100b79580) */
/* WARNING: Removing unreachable block (ram,0x000100b79b7c) */

void FUN_100b7923c(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x26;
  undefined1 *unaff_x28;
  
  __ZN5alloc3fmt6format12format_inner17h63985d1d6aa0fe33E
            (&stack0x00005000,s_in_process_initialize_failed__108ac9a6f,&stack0x00002080);
  uVar1 = __ZN3std2io5error5Error3new17h002dced88496ea8bE(0x15,&stack0x00003840);
  if (*(long *)(unaff_x19 + 0x798) != -0x7ffffffffffffffb) {
    FUN_100de6690(unaff_x19 + 0x798);
  }
  if (*unaff_x20 != 0) {
    _free(*(undefined8 *)(unaff_x19 + 0x788));
  }
  if (*(long *)(unaff_x19 + 0x718) == -0x8000000000000000) {
    FUN_100de6690(unaff_x19 + 0x720);
  }
  *(undefined1 *)(unaff_x19 + 0x713) = 0;
  if ((*(byte *)(unaff_x19 + 0x711) & 1) != 0) {
    FUN_100e2fdcc(unaff_x19 + 0x6f8);
  }
  *(undefined1 *)(unaff_x19 + 0x711) = 0;
  if ((*(byte *)(unaff_x19 + 0x712) & 1) != 0) {
    FUN_100e427f4(unaff_x19 + 0x718);
  }
  *(undefined1 *)(unaff_x19 + 0x712) = 0;
  *(undefined1 *)(unaff_x19 + 0x714) = 0;
  *unaff_x28 = 1;
  FUN_100e54a94();
  *(undefined1 *)(unaff_x19 + 0xcc1) = 0;
  unaff_x26[2] = uVar1;
  unaff_x26[3] = &stack0x00005000;
  *unaff_x26 = 0;
  unaff_x26[1] = 0;
  *(undefined1 *)(unaff_x19 + 0xcc0) = 1;
  return;
}

