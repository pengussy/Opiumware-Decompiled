/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3758c:8f61951875
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00037918) */
/* WARNING: Removing unreachable block (ram,0x0003790c) */
/* WARNING: Removing unreachable block (ram,0x000378d0) */
/* WARNING: Removing unreachable block (ram,0x00037884) */
/* WARNING: Removing unreachable block (ram,0x00037874) */
/* WARNING: Removing unreachable block (ram,0x000378e0) */
/* WARNING: Removing unreachable block (ram,0x000378fc) */
/* WARNING: Removing unreachable block (ram,0x00037928) */

void FUN_0003758c(undefined8 *param_1,undefined2 *param_2)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 *puVar4;
  undefined1 *puStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 ****ppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  __ZNSt3__19to_stringEi(auStack_c8,*param_2);
/* donate: donate/README.md */
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                     (auStack_c8,0,"Version(");
  uStack_a8 = puVar4[1];
  uStack_b0 = *puVar4;
  lStack_a0 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (&uStack_b0,".");
  uStack_88 = puVar4[1];
  uStack_90 = *puVar4;
  lStack_80 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  __ZNSt3__19to_stringEi(&puStack_e0,param_2[1]);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  ppuVar2 = (undefined1 **)puStack_e0;
  if (-1 < (char)bStack_c9) {
    uStack_d8 = (ulong)bStack_c9;
    ppuVar2 = &puStack_e0;
  }
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                     (&uStack_90,ppuVar2,uStack_d8);
  uStack_68 = puVar4[1];
  uStack_70 = *puVar4;
  uStack_60 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (&uStack_70,&UNK_01c87a9a);
  uStack_48 = puVar4[1];
  ppppuStack_50 = (undefined8 ****)*puVar4;
  uStack_40 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = uStack_48;
  ppppuVar3 = ppppuStack_50;
  if (-1 < (long)uStack_40) {
    uVar1 = uStack_40 >> 0x38;
    ppppuVar3 = &ppppuStack_50;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,ppppuVar3,uVar1);
/* donate: donate/README.md - github.com/pengussy */
  if ((char)bStack_c9 < '\0') {
    __ZdlPv(puStack_e0);
  }
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  if (lStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  __ZNSt3__19to_stringEj(&uStack_90,*(undefined4 *)(param_2 + 4));
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                     (&uStack_90,0,"commits(");
  uStack_68 = puVar4[1];
  uStack_70 = *puVar4;
  uStack_60 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (&uStack_70,&UNK_01c87a9a);
  uStack_48 = puVar4[1];
  ppppuStack_50 = (undefined8 ****)*puVar4;
  uStack_40 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = uStack_48;
  ppppuVar3 = ppppuStack_50;
/* WM - stripping the watermark breaks the license */
  if (-1 < (long)uStack_40) {
    uVar1 = uStack_40 >> 0x38;
    ppppuVar3 = &ppppuStack_50;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,ppppuVar3,uVar1);
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
  }
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_70,"sha(",param_2 + 8);
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (&uStack_70,&UNK_01c87a9a);
  uStack_48 = puVar4[1];
  ppppuStack_50 = (undefined8 ****)*puVar4;
  uStack_40 = puVar4[2];
/* WM - chat: discord.gg/sdkhDjTex */
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = uStack_48;
  ppppuVar3 = ppppuStack_50;
  if (-1 < (long)uStack_40) {
    uVar1 = uStack_40 >> 0x38;
    ppppuVar3 = &ppppuStack_50;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,ppppuVar3,uVar1);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (&uStack_70,"version string: \"",param_2 + 0x14);
  puVar4 = (undefined8 *)
           __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                     (&uStack_70,"\"");
  uStack_48 = puVar4[1];
  ppppuStack_50 = (undefined8 ****)*puVar4;
  uStack_40 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  uVar1 = uStack_48;
  ppppuVar3 = ppppuStack_50;
  if (-1 < (long)uStack_40) {
    uVar1 = uStack_40 >> 0x38;
    ppppuVar3 = &ppppuStack_50;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,ppppuVar3,uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc(param_1,"\n");
  return;
}

