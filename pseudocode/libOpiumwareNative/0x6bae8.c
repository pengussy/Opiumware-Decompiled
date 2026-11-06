/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x6bae8:28357754f6
 */

/* WARNING: Possible PIC construction at 0x0006bd7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0006bcdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0006bd80) */
/* WARNING: Removing unreachable block (ram,0x0006bd84) */
/* WARNING: Removing unreachable block (ram,0x0006bd94) */
/* WARNING: Removing unreachable block (ram,0x0006bdb4) */
/* WARNING: Removing unreachable block (ram,0x0006bdd4) */
/* WARNING: Removing unreachable block (ram,0x0006bdd8) */
/* WARNING: Removing unreachable block (ram,0x0006bde4) */
/* WARNING: Removing unreachable block (ram,0x0006bce0) */
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
/*  reversing this took months of machine time  */
/* WARNING: Removing unreachable block (ram,0x00791790) */
/* WARNING: Removing unreachable block (ram,0x007917ac) */
/* WARNING: Removing unreachable block (ram,0x00791750) */
/* WARNING: Removing unreachable block (ram,0x007917b4) */
/* WARNING: Removing unreachable block (ram,0x007917c4) */

void FUN_0006bae8(long param_1)

{
  uint uVar1;
  char **ppcVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined *unaff_x22;
  char **unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_70 [8];
  char *apcStack_68 [3];
  
  ppcVar2 = apcStack_68;
  pbVar4 = (byte *)(*pcRam00000000020636c0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019bc7a4();
  }
  apcStack_68[0] = (char *)(*pcRam00000000020636a8)();
  if (*apcStack_68[0] == '\x01') {
    uVar1 = (byte)apcStack_68[0][1] ^ 0x95c89724;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xf4bfbb2c ^ 0x1f02d1;
/* wm:do not claim this as your own */
    apcStack_68[0][3] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x19;
    uVar7 = (((ulong)(byte)apcStack_68[0][1] ^ 0xbf13ad6e065892b0) << 0x11 | 0x17e27) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)apcStack_68[0][2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
    apcStack_68[0][4] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar9;
    *apcStack_68[0] = '\0';
  }
  apcStack_68[0] = apcStack_68[0] + 3;
  uVar5 = func_0x0011ab24(apcStack_68);
  FUN_0006be60(param_1,0x208ecd8,uVar5);
  uVar5 = func_0x00791624(param_1,0xffffffff);
  func_0x00792a48(param_1);
  iVar3 = func_0x00795158(param_1,uVar5);
// no support for modified copies
  if (iVar3 != 0) {
    unaff_x22 = &DAT_0006d39c;
    iVar3 = func_0x00791be4(param_1,0xfffffffe);
    unaff_x19 = param_1;
    unaff_x20 = uVar5;
    unaff_x29 = ppcVar2 + 0xb;
    if ((iVar3 == 8) && (iVar3 = func_0x00791be4(param_1,0xffffffff), iVar3 == 7)) {
      func_0x00793928(param_1,0xffffffff,3);
      plVar6 = (long *)func_0x00790f58(param_1,0xffffffff);
      if ((*(int *)((long)plVar6 + 0xc) == 9) &&
         (((lVar8 = *plVar6, *(char *)(lVar8 + 3) == -0x80 && (*(int *)(lVar8 + 4) == 0x18)) &&
          (*(undefined **)(lVar8 + 0x20) == &DAT_0006d39c)))) {
        unaff_x21 = *(long *)(lVar8 + 0x18);
        if (unaff_x21 != 0) {
          *(long *)(unaff_x21 + 8) = *(long *)(unaff_x21 + 8) + 1;
        }
      }
      else {
        unaff_x21 = 0;
      }
      unaff_x30 = 0x6bd80;
      register0x00000008 = (BADSPACEBASE *)auStack_70;
    }
    else {
      unaff_x30 = 0x6bce0;
      register0x00000008 = (BADSPACEBASE *)auStack_70;
    }
  }
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(char ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
/* wm:unlicensed copy if this notice is missing */
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return;
}

