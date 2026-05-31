
undefined8 FUN_1002ea3c0(void)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x22;
  code *unaff_x23;
  bool bVar4;
  int unaff_w24;
  bool bVar5;
  
  uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (unaff_w24 < 2) {
    if (unaff_w24 == 0) {
      bVar5 = false;
      uVar2 = (*unaff_x23)();
joined_r0x0001002ea4dc:
      bVar4 = false;
    }
    else {
      bVar4 = false;
      bVar5 = true;
      uVar2 = (*unaff_x23)();
    }
  }
  else {
    if (unaff_w24 != 2) {
      bVar5 = true;
      uVar2 = (*unaff_x23)();
      goto joined_r0x0001002ea4dc;
    }
    bVar5 = false;
    bVar4 = true;
    uVar2 = (*unaff_x23)();
  }
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (unaff_x22 != 1) {
    uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    bVar1 = *(byte *)(unaff_x19 + 0x38);
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        bVar5 = true;
      }
    }
    else if (bVar1 == 2) {
      bVar4 = true;
    }
    else {
      bVar5 = true;
    }
    uVar2 = (*unaff_x23)();
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (unaff_x22 != 2) {
      uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      bVar1 = *(byte *)(unaff_x19 + 0x58);
      if (bVar1 < 2) {
        if (bVar1 != 0) {
          bVar5 = true;
        }
      }
      else if (bVar1 == 2) {
        bVar4 = true;
      }
      else {
        bVar5 = true;
      }
      uVar2 = (*unaff_x23)();
      if ((uVar2 & 1) != 0) {
        return 1;
      }
      if (unaff_x22 != 3) {
        uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        bVar1 = *(byte *)(unaff_x19 + 0x78);
        if (bVar1 < 2) {
          if (bVar1 != 0) {
            bVar5 = true;
          }
        }
        else if (bVar1 == 2) {
          bVar4 = true;
        }
        else {
          bVar5 = true;
        }
        uVar2 = (*unaff_x23)();
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        if (unaff_x22 != 4) {
          uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          bVar1 = *(byte *)(unaff_x19 + 0x98);
          if (bVar1 < 2) {
            if (bVar1 != 0) {
              bVar5 = true;
            }
          }
          else if (bVar1 == 2) {
            bVar4 = true;
          }
          else {
            bVar5 = true;
          }
          uVar2 = (*unaff_x23)();
          if ((uVar2 & 1) != 0) {
            return 1;
          }
          if (unaff_x22 != 5) {
            uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            bVar1 = *(byte *)(unaff_x19 + 0xb8);
            if (bVar1 < 2) {
              if (bVar1 != 0) {
                bVar5 = true;
              }
            }
            else if (bVar1 == 2) {
              bVar4 = true;
            }
            else {
              bVar5 = true;
            }
            uVar2 = (*unaff_x23)();
            if ((uVar2 & 1) != 0) {
              return 1;
            }
            if (unaff_x22 != 6) {
              uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
              if ((uVar2 & 1) != 0) {
                return 1;
              }
              bVar1 = *(byte *)(unaff_x19 + 0xd8);
              if (bVar1 < 2) {
                if (bVar1 != 0) {
                  bVar5 = true;
                }
              }
              else if (bVar1 == 2) {
                bVar4 = true;
              }
              else {
                bVar5 = true;
              }
              uVar2 = (*unaff_x23)();
              if ((uVar2 & 1) != 0) {
                return 1;
              }
              if (unaff_x22 != 7) {
                uVar2 = __ZN4core3fmt5write17h64810b21425781ecE();
                if ((uVar2 & 1) != 0) {
                  return 1;
                }
                bVar1 = *(byte *)(unaff_x19 + 0xf8);
                if (bVar1 < 2) {
                  if (bVar1 != 0) {
                    bVar5 = true;
                  }
                }
                else if (bVar1 == 2) {
                  bVar4 = true;
                }
                else {
                  bVar5 = true;
                }
                uVar2 = (*unaff_x23)();
                if ((uVar2 & 1) != 0) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if (bVar4) {
    uVar2 = (*unaff_x23)();
  }
  else {
    if (!bVar5) goto LAB_1002ea988;
    uVar2 = (*unaff_x23)();
  }
  if ((uVar2 & 1) != 0) {
    return 1;
  }
LAB_1002ea988:
  if (*(char *)(unaff_x19 + 0x108) != '\x01') {
    return 0;
  }
  uVar3 = (*unaff_x23)();
  return uVar3;
}

