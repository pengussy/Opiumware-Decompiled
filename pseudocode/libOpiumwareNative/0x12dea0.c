/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x12dea0:a5668fa153
 */

/* WARNING: Removing unreachable block (ram,0x00791680) */
/* WARNING: Removing unreachable block (ram,0x007916a8) */
/* WARNING: Removing unreachable block (ram,0x007916b8) */
/* WARNING: Removing unreachable block (ram,0x007916bc) */
/* WARNING: Removing unreachable block (ram,0x007916c0) */
/* WARNING: Removing unreachable block (ram,0x007916c8) */
/* WARNING: Removing unreachable block (ram,0x007916dc) */
/* WARNING: Removing unreachable block (ram,0x007917dc) */
/* WARNING: Removing unreachable block (ram,0x0079182c) */
/* WARNING: Removing unreachable block (ram,0x00791848) */
/* WARNING: Removing unreachable block (ram,0x00791838) */
/* WARNING: Removing unreachable block (ram,0x00791808) */
/* WARNING: Removing unreachable block (ram,0x00791820) */
/* WARNING: Removing unreachable block (ram,0x00791874) */
/* WARNING: Removing unreachable block (ram,0x00791864) */
/* WARNING: Removing unreachable block (ram,0x0079187c) */
/* WARNING: Removing unreachable block (ram,0x00791700) */
/* WARNING: Removing unreachable block (ram,0x0079170c) */
/* WARNING: Removing unreachable block (ram,0x00791718) */
/* WARNING: Removing unreachable block (ram,0x0079171c) */
/* WARNING: Removing unreachable block (ram,0x0079172c) */
/* WARNING: Removing unreachable block (ram,0x0079173c) */
/* WARNING: Removing unreachable block (ram,0x00791778) */
/* WARNING: Removing unreachable block (ram,0x00791790) */
/* WARNING: Removing unreachable block (ram,0x007917ac) */
/* WARNING: Removing unreachable block (ram,0x00791750) */
/* WARNING: Removing unreachable block (ram,0x007917b4) */
/* WARNING: Removing unreachable block (ram,0x007917c4) */

void FUN_0012dea0(byte *param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
/* unlicensed copy if this notice is missing */
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b0 [128];
  
  pbVar2 = (byte *)(*pcRam0000000002063270)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019ca3dc();
  }
  pcVar3 = (char *)(*pcRam0000000002063258)();
  if (*pcVar3 == '\x01') {
    uVar1 = (byte)pcVar3[1] ^ 0x494f0eea;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xf53a9293 ^ 0x4802b1;
    pcVar3[4] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - 0x29;
    uVar5 = (((ulong)(byte)pcVar3[1] ^ 0xe1842a41bc4c5121) << 0x11 | 0x1c308) + 0x9e3779b97f4a7c15;
    uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
    pcVar3[5] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcVar3[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcVar3[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
    *pcVar3 = '\0';
  }
  uVar4 = func_0x0011ab24(auStack_b0 + 0x88);
  FUN_0006be60(param_1,0x208ecd1,uVar4);
  func_0x007911b0(param_1,1);
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x48);
  *puVar6 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)((long)puVar6 + 0xc) = 10;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  func_0x00792a48(param_1);
  func_0x00794428(param_1,0xfffffffd);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return;
}

