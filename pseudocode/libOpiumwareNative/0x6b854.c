/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x6b854:58fe4c4232
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
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
/* WARNING: Removing unreachable block (ram,0x0079173c) */
/* WARNING: Removing unreachable block (ram,0x00791778) */
/* WARNING: Removing unreachable block (ram,0x00791790) */
/* WARNING: Removing unreachable block (ram,0x007917ac) */
/* WARNING: Removing unreachable block (ram,0x00791750) */
/* WARNING: Removing unreachable block (ram,0x007917b4) */
/* WARNING: Removing unreachable block (ram,0x007917c4) */

void FUN_0006b854(byte *param_1,long param_2,long *param_3)

{
  uint uVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 auStack_b0 [128];
  
  if ((((*(char *)(*param_3 + 0x10) == '\x01') && (*(long *)(*param_3 + 8) == lRam0000000001f26d30))
      || (*(char *)(param_2 + 3) == '\0')) || (*(code **)(param_2 + 0x18) != FUN_00069a3c)) {
    return;
  }
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)*param_3;
  if (pcRam000000000208f7f8 != (code *)0x0) {
    (*pcRam000000000208f7f8)(param_1,param_2,0);
  }
  pbVar2 = (byte *)(*pcRam0000000002063660)();
  if ((*pbVar2 & 1) == 0) {
    func_0x019bc768();
  }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  pcVar3 = (char *)(*pcRam0000000002063648)();
  if (*pcVar3 == '\x01') {
    uVar1 = (byte)pcVar3[1] ^ 0x1c593cee;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xea226639 ^ 0x218577;
    pcVar3[3] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - 0x2d;
    uVar5 = (((ulong)(byte)pcVar3[1] ^ 0x947ee49aff30a072) << 0x11 | 0x128fd) + 0x9e3779b97f4a7c15;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcVar3[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcVar3[4] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
    *pcVar3 = '\0';
  }
  uVar4 = func_0x0011ab24(auStack_b0 + 0x88);
  FUN_0006be60(param_1,0x208ecd8,uVar4);
  func_0x007911b0(param_1,1);
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  plVar6 = *(long **)(param_1 + 0x48);
  *plVar6 = param_2;
  *(undefined4 *)((long)plVar6 + 0xc) = 8;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  func_0x00792a48(param_1);
  func_0x00794428(param_1,0xfffffffd);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return;
}

