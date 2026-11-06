/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x100002440:2e35d2f82d
 */

undefined1 _insert_dylib(FILE *param_1,off_t param_2,char *param_3,undefined8 param_4)

{
  size_t sVar1;
  char *pcVar2;
  off_t oVar3;
  FILE *pFVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  __uint32_t _Var10;
  undefined8 uStack_150;
  undefined1 auStack_148 [11];
  undefined1 local_13d;
  __uint32_t local_13c;
  __uint32_t local_138;
  __uint32_t local_134;
  __uint32_t local_130;
  __uint32_t local_12c;
  __uint32_t local_128;
  __uint32_t local_124;
  ulong local_120;
  undefined1 *local_118;
  uint local_110;
  __uint32_t local_10c;
  undefined4 *local_108;
  bool local_f9;
  __uint32_t local_f8;
  __uint32_t local_f4;
// WM - keep the notice, keep the source honest
  __uint32_t *local_f0;
  __uint32_t local_e8;
  __uint32_t local_e4;
  __uint32_t *local_e0;
  long local_d8;
  bool local_c9;
  void *local_c8;
  undefined4 local_bc;
  uint local_b8;
  char local_b1;
  ulong local_b0;
  undefined1 *local_a8;
  __uint32_t local_a0;
  __uint32_t local_9c;
  __uint32_t local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  __uint32_t local_84;
  size_t local_80;
  size_t local_78;
  long local_70;
  byte local_61;
/* unlicensed copy if this notice is missing */
  long local_60;
  uint local_54 [4];
  __uint32_t local_44;
  __uint32_t local_40;
  undefined8 local_38;
  char *local_30;
  off_t local_28;
  FILE *local_20;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_100004000;
  uStack_150 = 0x100002478;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  local_20 = param_1;
  _fseeko(param_1,param_2,0);
  uStack_150 = 0x10000248f;
  _fread(local_54,0x1c,1,local_20);
  if ((((local_54[0] != 0xfeedfacf) && (local_54[0] != 0xcffaedfe)) && (local_54[0] != 0xfeedface))
     && (local_54[0] != 0xcefaedfe)) {
    uStack_150 = 0x1000024d4;
    _printf("Unknown magic: 0x%x\n",local_54[0]);
    local_11 = 0;
    puVar9 = auStack_148;
    goto LAB_100002aae;
  }
  local_d8 = local_28;
  local_c9 = local_54[0] == 0xfeedfacf || local_54[0] == 0xcffaedfe;
  local_60 = 0x1c;
  if (local_54[0] == 0xfeedfacf || local_54[0] == 0xcffaedfe) {
    local_60 = 0x20;
/* wm:donate: donate/README.md */
  }
  local_60 = local_28 + local_60;
  uStack_150 = 0x100002551;
  local_61 = _check_load_commands(local_20,local_54,local_28,local_60,local_30,local_38);
  local_61 = local_61 & 1;
  if (local_61 == 0) {
    local_11 = 1;
    puVar9 = auStack_148;
    goto LAB_100002aae;
  }
  local_70 = 8;
  uStack_150 = 0x10000257a;
  local_78 = _strlen(local_30);
  local_80 = (local_78 & (local_70 - 1U ^ 0xffffffffffffffff)) + local_70;
  local_84 = (int)local_80 + 0x18;
  local_e0 = &local_9c;
  if (((local_54[0] == 0xbebafeca) || (local_54[0] == 0xcffaedfe)) || (local_54[0] == 0xcefaedfe)) {
    _Var10 = 0xc;
    if (_weak_flag != 0) {
      _Var10 = 0x80000018;
    }
    uStack_150 = 0x1000025f4;
    local_e8 = __OSSwapInt32(_Var10);
    local_e4 = local_e8;
  }
  else {
    local_e8 = 0xc;
    if (_weak_flag != 0) {
      local_e8 = 0x80000018;
    }
  }
  *local_e0 = local_e8;
  local_f0 = &local_98;
  if (((local_54[0] == 0xbebafeca) || (local_54[0] == 0xcffaedfe)) || (local_54[0] == 0xcefaedfe)) {
    uStack_150 = 0x100002677;
    local_f8 = __OSSwapInt32(local_84);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    local_f4 = local_f8;
  }
  else {
    local_f8 = local_84;
  }
  *local_f0 = local_f8;
  local_108 = &local_94;
  local_f9 = true;
  if ((local_54[0] != 0xbebafeca) && (local_f9 = true, local_54[0] != 0xcffaedfe)) {
    local_f9 = local_54[0] == 0xcefaedfe;
  }
  local_94 = 0x18;
  if (local_f9 != false) {
    local_94 = 0x18000000;
  }
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  if (((local_54[0] == 0xbebafeca) || (local_54[0] == 0xcffaedfe)) || (local_54[0] == 0xcefaedfe)) {
    uStack_150 = 0x100002758;
    local_110 = __OSSwapInt32(local_40);
    local_10c = local_110;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  }
  else {
    local_110 = local_40;
  }
  local_a0 = local_110;
  uStack_150 = 0x10000279c;
  _fseeko(local_20,local_60 + (ulong)local_110,0);
  local_a8 = auStack_148;
  local_120 = (ulong)local_84;
  uStack_150 = 0x1000027b5;
  lVar5 = ____chkstk_darwin();
  pFVar4 = local_20;
  lVar5 = -(lVar5 + 0xfU & 0xfffffffffffffff0);
  local_118 = auStack_148 + lVar5;
  local_b0 = local_120;
  uVar6 = (ulong)local_84;
  *(undefined8 *)(auStack_148 + lVar5 + -8) = 0x1000027eb;
  _fread(auStack_148 + lVar5,uVar6,1,pFVar4);
  puVar8 = auStack_148 + lVar5;
  local_b1 = '\x01';
  for (local_b8 = 0; local_b8 < local_84; local_b8 = local_b8 + 1) {
    if (local_118[(int)local_b8] != '\0') {
      local_b1 = '\0';
      break;
    }
  }
  if (local_b1 == '\0') {
    *(undefined8 *)(auStack_148 + lVar5 + -8) = 0x100002866;
    uVar6 = _ask("It doesn\'t seem like there is enough empty space. Continue anyway?");
    puVar8 = auStack_148 + lVar5;
    if ((uVar6 & 1) != 0) goto LAB_100002886;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    local_11 = 0;
  }
  else {
LAB_100002886:
    pFVar4 = local_20;
    uVar6 = (ulong)local_84;
    *(undefined8 *)(puVar8 + -8) = 0x10000289e;
    _fseeko(pFVar4,-uVar6,1);
    sVar1 = local_80;
    *(undefined8 *)(puVar8 + -8) = 0x1000028ac;
    pvVar7 = _calloc(sVar1,1);
    pcVar2 = local_30;
    sVar1 = local_78;
    local_c8 = pvVar7;
    *(undefined8 *)(puVar8 + -8) = 0x1000028ce;
    ___memcpy_chk(pvVar7,pcVar2,sVar1,0xffffffffffffffff);
    pFVar4 = local_20;
    *(undefined8 *)(puVar8 + -8) = 0x1000028e8;
    _fwrite(&local_9c,0x18,1,pFVar4);
    pFVar4 = local_20;
    sVar1 = local_80;
    pvVar7 = local_c8;
    *(undefined8 *)(puVar8 + -8) = 0x100002901;
    _fwrite(pvVar7,sVar1,1,pFVar4);
    pvVar7 = local_c8;
    *(undefined8 *)(puVar8 + -8) = 0x10000290d;
    _free(pvVar7);
    if (((local_54[0] == 0xbebafeca) || (local_54[0] == 0xcffaedfe)) || (local_54[0] == 0xcefaedfe))
    {
      if (((local_54[0] == 0xbebafeca) || (local_54[0] == 0xcffaedfe)) ||
         (local_54[0] == 0xcefaedfe)) {
        *(undefined8 *)(puVar8 + -8) = 0x100002963;
        local_128 = __OSSwapInt32(local_44);
/* donate: donate/README.md - github.com/pengussy */
        local_124 = local_128;
      }
      else {
        local_128 = local_44;
      }
      _Var10 = local_128 + 1;
      *(undefined8 *)(puVar8 + -8) = 0x100002991;
      local_12c = __OSSwapInt32(_Var10);
    }
    else {
      if (((local_54[0] == 0xbebafeca) || (local_54[0] == 0xcffaedfe)) ||
         (local_54[0] == 0xcefaedfe)) {
        *(undefined8 *)(puVar8 + -8) = 0x1000029cb;
        local_134 = __OSSwapInt32(local_44);
        local_130 = local_134;
      }
      else {
        local_134 = local_44;
      }
      local_12c = local_134 + 1;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    }
    local_44 = local_12c;
    _Var10 = local_84 + local_a0;
    local_a0 = _Var10;
    if (((local_54[0] == 0xbebafeca) || (local_54[0] == 0xcffaedfe)) || (local_54[0] == 0xcefaedfe))
    {
      *(undefined8 *)(puVar8 + -8) = 0x100002a44;
      local_138 = __OSSwapInt32(_Var10);
      local_13c = local_138;
    }
    else {
      local_13c = _Var10;
    }
    pFVar4 = local_20;
    oVar3 = local_28;
    local_40 = local_13c;
/* WM - keep the notice, keep the source honest */
    *(undefined8 *)(puVar8 + -8) = 0x100002a7f;
    _fseeko(pFVar4,oVar3,0);
    pFVar4 = local_20;
    *(undefined8 *)(puVar8 + -8) = 0x100002a96;
    _fwrite(local_54,0x1c,1,pFVar4);
    local_11 = 1;
  }
  local_bc = 1;
  puVar9 = local_a8;
LAB_100002aae:
  local_13d = local_11;
  if (*(long *)PTR____stack_chk_guard_100004000 != local_10) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -8) = &UNK_100002ae3;
    ___stack_chk_fail();
  }
  return local_11;
}
