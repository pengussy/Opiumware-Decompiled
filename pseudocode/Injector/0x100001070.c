/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x100001070:dfb7b4453b
   =========================================================================== */

undefined8
_ask(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
    undefined8 param_6,undefined8 param_7,undefined8 param_8,char *param_9,undefined8 param_10,
    undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,
    undefined1 param_15)

{
  char cVar1;
  char in_AL;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
/* WM - reversing this took months of machine time */
  size_t local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_18;
  long local_10;
  
  if (in_AL != '\0') {
    local_d8 = param_1;
    local_c8 = param_2;
    local_b8 = param_3;
    local_a8 = param_4;
    local_98 = param_5;
    local_88 = param_6;
    local_78 = param_7;
    local_68 = param_8;
  }
  local_10 = *(long *)PTR____stack_chk_guard_100004000;
  local_100 = param_10;
  local_f8 = param_11;
  local_f0 = param_12;
  local_e8 = param_13;
/* thanks for reading - discord.gg/sdkhDjTex */
  local_e0 = param_14;
  local_38 = param_9;
  _asprintf(&local_40,"%s [y/n] ",param_9);
  local_18 = local_108;
  local_20 = &param_15;
  local_24 = 0x30;
  local_28 = 8;
  _vprintf(local_40,&local_28);
  _free(local_40);
  do {
    local_48 = (char *)0x0;
    if (_yes_flag == 0) {
      _getline(&local_48,&local_50,*(FILE **)PTR____stdinp_100004010);
    }
    else {
      _puts("y");
      local_48 = "y";
    }
    cVar1 = *local_48;
    if (cVar1 == 'N') {
LAB_1000011e3:
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      local_29 = 0;
      goto LAB_1000011ff;
    }
    if (cVar1 == 'Y') {
LAB_1000011da:
      local_29 = 1;
LAB_1000011ff:
      if (*(long *)PTR____stack_chk_guard_100004000 != local_10) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return CONCAT71((int7)((ulong)*(long *)PTR____stack_chk_guard_100004000 >> 8),local_29);
    }
    if (cVar1 == 'n') goto LAB_1000011e3;
    if (cVar1 == 'y') goto LAB_1000011da;
    _printf("Please enter y or n: ");
  } while( true );
}
