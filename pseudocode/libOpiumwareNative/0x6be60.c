/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x6be60:4631fe52dc
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0006c248: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0006c24c) */
/* WARNING: Removing unreachable block (ram,0x007945e4) */
/* WARNING: Removing unreachable block (ram,0x00794620) */
/* WARNING: Removing unreachable block (ram,0x00794638) */
/* WARNING: Removing unreachable block (ram,0x0079462c) */
/* WARNING: Removing unreachable block (ram,0x00794600) */
/* WARNING: Removing unreachable block (ram,0x00794618) */
/* WARNING: Removing unreachable block (ram,0x00794654) */
/* WARNING: Removing unreachable block (ram,0x007946c4) */
/* WARNING: Removing unreachable block (ram,0x00794660) */
/* WARNING: Removing unreachable block (ram,0x00794684) */
/* WARNING: Removing unreachable block (ram,0x00794690) */
/* WARNING: Removing unreachable block (ram,0x007946a0) */
/* WARNING: Removing unreachable block (ram,0x007946ac) */
/* WARNING: Removing unreachable block (ram,0x00794768) */
/* WARNING: Removing unreachable block (ram,0x007946e0) */
/* WARNING: Removing unreachable block (ram,0x007946f8) */
/* WARNING: Removing unreachable block (ram,0x00794704) */

undefined8 FUN_0006be60(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  char *pcStack_38;
  
  func_0x00793a78(param_1,0xffffd8f0,param_2,0);
  uVar2 = func_0x00791be4(param_1,0xffffffff);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if ((int)uVar2 == 7) {
    return uVar2;
  }
  func_0x00791660(param_1,0xfffffffe);
  func_0x00793bd0(param_1,0,0);
  func_0x00793bd0(param_1,0,0);
  func_0x00792f00(param_1,param_3);
  pbVar3 = (byte *)(*pcRam0000000002063690)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019bc7e0();
  }
  pcStack_38 = (char *)(*pcRam0000000002063678)();
  if (*pcStack_38 == '\x01') {
    uVar1 = (byte)pcStack_38[1] ^ 0xa7ead062;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xa1402b50 ^ 0x5397af;
    pcStack_38[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x5f;
    uVar5 = (((ulong)(byte)pcStack_38[1] ^ 0x9440431cfc295ed5) << 0x11 | 0x12880) +
            0x9e3779b97f4a7c15;
    uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
/* if you paid for this, you were scammed */
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_38[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_38[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    pcStack_38[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_38[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[6] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_38[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar10;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[7] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_38[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
    *pcStack_38 = '\0';
  }
  pcStack_38 = pcStack_38 + 8;
/* wm:chat: discord.gg/sdkhDjTex */
  uVar2 = func_0x0011ab24(&pcStack_38);
  func_0x00794324(param_1,0xfffffffe,uVar2);
  lVar8 = *(long *)(param_1 + 0x48);
  plVar6 = (long *)(lVar8 + -0x20);
  if (*(int *)(lVar8 + -4) == 0) {
    pbVar3 = (byte *)0x0;
    iVar4 = *(int *)(lVar8 + -0x14);
    if (iVar4 != 9) goto code_r0x00794734;
code_r0x00794794:
    *(long *)(*plVar6 + 8) = (*plVar6 + 8) - (long)pbVar3;
  }
  else {
    pbVar3 = *(byte **)(lVar8 + -0x10);
    iVar4 = *(int *)(lVar8 + -0x14);
    if (iVar4 == 9) goto code_r0x00794794;
code_r0x00794734:
    if (iVar4 != 7) {
      *(byte **)(*(long *)(param_1 + 0x38) + (long)iVar4 * 8 + 0x438) = pbVar3;
      goto code_r0x007947cc;
    }
    if (*(char *)(*plVar6 + 5) != '\0') {
      auVar11 = func_0x007f57c4();
/* reversing this took months of machine time - github.com/pengussy */
      lVar8 = auVar11._0_8_;
      iVar4 = auVar11._8_4_;
      if (iVar4 < 1) {
        if (iVar4 < -9999) {
          plVar6 = (long *)func_0x00796924(lVar8);
          iVar4 = *(int *)((long)plVar6 + 0xc);
        }
        else {
          plVar6 = (long *)(*(long *)(lVar8 + 0x48) + (long)iVar4 * 0x10);
          iVar4 = *(int *)((long)plVar6 + 0xc);
        }
      }
      else {
        plVar6 = (long *)(*(long *)(lVar8 + 0x50) + (auVar11._8_8_ & 0xffffffff) * 0x10 + -0x10);
        if (*(long **)(lVar8 + 0x48) <= plVar6) {
          plVar6 = plRam0000000001f26850;
        }
        iVar4 = *(int *)((long)plVar6 + 0xc);
      }
      if (iVar4 == 8) {
        lVar7 = 0x10;
      }
      else {
        if (iVar4 != 10) {
          *(long *)(lVar8 + 0x48) = *(long *)(lVar8 + 0x48) + -0x10;
          return 0;
        }
        lVar7 = 0x80;
      }
      pbVar3 = *(byte **)(*(long *)(lVar8 + 0x48) + -0x10);
      *(byte **)(*plVar6 + lVar7) = pbVar3;
      if (((*(byte *)*plVar6 >> 2 & 1) != 0) && ((*pbVar3 & 3) != 0)) {
        func_0x0081b3dc(lVar8);
      }
      *(long *)(lVar8 + 0x48) = *(long *)(lVar8 + 0x48) + -0x10;
// found on a paste site? it was re-uploaded illegally
      return 1;
    }
    *(byte **)(*plVar6 + 0x10) = pbVar3;
  }
  if (((pbVar3 != (byte *)0x0) && ((*(byte *)*plVar6 >> 2 & 1) != 0)) && ((*pbVar3 & 3) != 0)) {
    func_0x0081b3dc();
  }
code_r0x007947cc:
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return 1;
}

