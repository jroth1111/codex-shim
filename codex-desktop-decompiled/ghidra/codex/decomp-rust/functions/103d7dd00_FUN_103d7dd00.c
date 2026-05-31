
void FUN_103d7dd00(undefined8 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000103d7dd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))
            (*param_2,*(undefined8 *)(&UNK_10b300df0 + (ulong)*(byte *)*param_1 * 8),
             *(undefined8 *)(&UNK_108dc7878 + (ulong)*(byte *)*param_1 * 8));
  return;
}

