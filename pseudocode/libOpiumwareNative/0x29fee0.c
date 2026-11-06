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
 *  file-id: 0x29fee0:1608579a4a
 *  --------------------------------------------------------------------------*/

undefined8
FUN_0029fee0(undefined8 *param_1,long param_2,uint *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
// stripping the watermark breaks the license
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (((param_7 == 0) && (*(int *)((long)param_1 + 0x8c) != 0)) ||
     ((param_3[6] != 1 && ((param_4 != 1 || (2 < param_3[6] - 3)))))) {
    lVar5 = 4L << ((ulong)param_3[1] & 0x3f);
    if (param_7 != 0) goto LAB_0029ff34;
LAB_0029ff54:
    uVar4 = 0;
  }
  else {
    lVar5 = 0;
    if (param_7 == 0) goto LAB_0029ff54;
LAB_0029ff34:
    if (param_3[4] != 3) goto LAB_0029ff54;
    uVar4 = *param_3;
    if (0x10 < uVar4) {
      uVar4 = 0x11;
    }
  }
  uVar11 = (ulong)param_3[2];
  if (param_6 == 0) {
    iVar10 = (int)*param_1;
    iVar8 = (int)param_1[1];
    uVar7 = *(ulong *)(param_2 + 0x10);
  }
  else {
    param_1[4] = 0;
/* found on a paste site? it was re-uploaded illegally */
    iVar8 = 0x1c881b6;
    param_1[1] = &UNK_01c881b6;
    param_1[2] = &UNK_01c881b6;
    iVar10 = 0x1c881b8;
    *param_1 = &UNK_01c881b8;
    uVar7 = *(ulong *)(param_2 + 0x10);
    *(ulong *)(param_2 + 0x20) = uVar7;
  }
  *(undefined4 *)((long)param_1 + 300) = 0;
  iVar10 = iVar10 - iVar8;
  *(int *)(param_1 + 3) = iVar10;
  *(int *)((long)param_1 + 0x1c) = iVar10;
  *(int *)((long)param_1 + 0x2c) = iVar10;
  *(uint *)(param_1 + 6) = uVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  param_1[0x1f] = 0;
  *(ulong *)(param_2 + 0x18) = uVar7;
  if (*(int *)(param_2 + 0x40) == 0) {
    *(ulong *)(param_2 + 0x20) = uVar7;
    *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
    uVar6 = uVar7 + ((ulong)(uint)-(int)uVar7 & 0x3f);
    if (uVar6 <= *(ulong *)(param_2 + 8)) {
      *(ulong *)(param_2 + 0x10) = uVar6;
      *(ulong *)(param_2 + 0x18) = uVar6;
      if ((-(int)uVar7 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar6;
      }
      *(undefined4 *)(param_2 + 0x40) = 1;
      uVar9 = uVar6 + (4L << (uVar11 & 0x3f));
      if (*(ulong *)(param_2 + 0x28) < uVar9) goto LAB_0029ffe8;
// reversing this took months of machine time
      goto LAB_002a011c;
    }
    param_1[0xe] = 0;
    lVar2 = *(long *)(param_2 + 0x10);
    *(long *)(param_2 + 0x20) = lVar2;
    *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
    uVar9 = lVar2 + ((ulong)(uint)-(int)lVar2 & 0x3f);
    if (uVar9 <= *(ulong *)(param_2 + 8)) {
      *(ulong *)(param_2 + 0x10) = uVar9;
      *(ulong *)(param_2 + 0x18) = uVar9;
      if ((-(int)lVar2 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar9;
      }
      *(undefined4 *)(param_2 + 0x40) = 1;
      uVar6 = uVar9 + lVar5;
      if (uVar6 <= *(ulong *)(param_2 + 0x28)) goto LAB_002a0138;
      goto LAB_002a0004;
    }
    uVar9 = 0;
    lVar5 = 0;
    if (uVar4 != 0) {
/* no support for modified copies - github.com/pengussy */
      lVar5 = 4L << ((ulong)uVar4 & 0x3f);
    }
    uVar1 = *(ulong *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 0x10);
    *(long *)(param_2 + 0x20) = lVar2;
    *(ulong *)(param_2 + 0x30) = uVar1 & 0xffffffffffffffc0;
    uVar6 = lVar2 + ((ulong)(uint)-(int)lVar2 & 0x3f);
    param_1[0x10] = 0;
    if (uVar6 <= uVar1) {
      *(ulong *)(param_2 + 0x10) = uVar6;
      *(ulong *)(param_2 + 0x18) = uVar6;
      if ((-(int)lVar2 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar6;
      }
      *(undefined4 *)(param_2 + 0x40) = 1;
      uVar7 = uVar6 + lVar5;
      if (*(ulong *)(param_2 + 0x28) < uVar7) goto LAB_002a0160;
      goto LAB_002a00c4;
    }
LAB_002a00cc:
    param_1[0xf] = uVar9;
    cVar3 = *(char *)(param_2 + 0x38);
    uVar6 = uVar7;
  }
  else {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    uVar9 = uVar7 + (4L << (uVar11 & 0x3f));
    uVar6 = uVar7;
    if (*(ulong *)(param_2 + 0x28) < uVar9) {
LAB_0029ffe8:
      uVar9 = uVar6;
      *(undefined1 *)(param_2 + 0x38) = 1;
      param_1[0xe] = 0;
      uVar6 = uVar9 + lVar5;
      if (uVar6 <= *(ulong *)(param_2 + 0x28)) goto LAB_002a0138;
LAB_002a0004:
      uVar6 = uVar9;
      *(undefined1 *)(param_2 + 0x38) = 1;
      uVar9 = 0;
    }
    else {
LAB_002a011c:
      *(ulong *)(param_2 + 0x18) = uVar9;
      param_1[0xe] = uVar6;
      uVar6 = uVar9 + lVar5;
      if (*(ulong *)(param_2 + 0x28) < uVar6) goto LAB_002a0004;
LAB_002a0138:
      *(ulong *)(param_2 + 0x18) = uVar6;
    }
    param_1[0x10] = uVar9;
    lVar5 = 0;
    if (uVar4 != 0) {
      lVar5 = 4L << ((ulong)uVar4 & 0x3f);
    }
    uVar7 = uVar6 + lVar5;
    if (uVar7 <= *(ulong *)(param_2 + 0x28)) {
LAB_002a00c4:
      *(ulong *)(param_2 + 0x18) = uVar7;
      uVar9 = uVar6;
/*  more drops soon - github.com/pengussy  */
      goto LAB_002a00cc;
    }
LAB_002a0160:
    *(undefined1 *)(param_2 + 0x38) = 1;
    param_1[0xf] = 0;
    cVar3 = *(char *)(param_2 + 0x38);
  }
  if (cVar3 != '\0') {
    return 0xffffffffffffffc0;
  }
  if (param_5 == 0) {
    uVar7 = *(ulong *)(param_2 + 0x20);
    if (uVar7 < uVar6) {
      _bzero(uVar7,uVar6 - uVar7);
      uVar6 = *(ulong *)(param_2 + 0x18);
      uVar7 = *(ulong *)(param_2 + 0x20);
    }
    if (uVar7 < uVar6) {
      *(ulong *)(param_2 + 0x20) = uVar6;
    }
  }
  if ((param_4 == 1) && (0xfffffffc < param_3[6] - 6)) {
    lVar5 = 1L << (uVar11 & 0x3f);
    uVar11 = lVar5 + 0x3fU & 0xffffffffffffffc0;
    uVar4 = *(uint *)(param_2 + 0x40);
    if (param_7 == 0) {
      if (uVar4 < 2) {
        if (uVar4 != 0) {
LAB_002a025c:
/* wm:proprietary - see LICENSE - do not sell */
          *(undefined4 *)(param_2 + 0x40) = 2;
          goto LAB_002a0264;
        }
        lVar2 = *(long *)(param_2 + 0x10);
        *(long *)(param_2 + 0x20) = lVar2;
        *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
        uVar6 = lVar2 + ((ulong)(uint)-(int)lVar2 & 0x3f);
        if (uVar6 <= *(ulong *)(param_2 + 8)) {
          *(ulong *)(param_2 + 0x10) = uVar6;
          *(ulong *)(param_2 + 0x18) = uVar6;
          if ((-(int)lVar2 & 0x3fU) != 0) {
            *(ulong *)(param_2 + 0x20) = uVar6;
          }
          goto LAB_002a025c;
        }
        uVar11 = 0;
      }
      else {
LAB_002a0264:
        uVar11 = *(long *)(param_2 + 0x28) - uVar11;
        if (uVar11 < uVar6) {
          uVar11 = 0;
          *(undefined1 *)(param_2 + 0x38) = 1;
        }
        else {
          if (uVar11 < *(ulong *)(param_2 + 0x20)) {
            *(ulong *)(param_2 + 0x20) = uVar11;
/*  watermarked copy - do not remove  */
          }
          *(ulong *)(param_2 + 0x28) = uVar11;
        }
      }
      param_1[7] = uVar11;
      _bzero(uVar11,lVar5);
      param_1[0xc] = 0;
    }
    else {
      if (uVar4 == 0) {
        lVar5 = *(long *)(param_2 + 0x10);
        *(long *)(param_2 + 0x20) = lVar5;
        *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
        uVar7 = lVar5 + ((ulong)(uint)-(int)lVar5 & 0x3f);
        if (uVar7 <= *(ulong *)(param_2 + 8)) {
          *(ulong *)(param_2 + 0x10) = uVar7;
          *(ulong *)(param_2 + 0x18) = uVar7;
          if ((-(int)lVar5 & 0x3fU) != 0) {
            *(ulong *)(param_2 + 0x20) = uVar7;
          }
          *(undefined4 *)(param_2 + 0x40) = 1;
          uVar9 = *(long *)(param_2 + 0x28) - uVar11;
          if (uVar9 < uVar7) goto LAB_002a0218;
          goto LAB_002a032c;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        }
        uVar9 = 0;
      }
      else {
        uVar9 = *(long *)(param_2 + 0x28) - uVar11;
        if (uVar9 < uVar6) {
LAB_002a0218:
          uVar9 = 0;
          *(undefined1 *)(param_2 + 0x38) = 1;
        }
        else {
LAB_002a032c:
          if (uVar9 < *(ulong *)(param_2 + 0x20)) {
            *(ulong *)(param_2 + 0x20) = uVar9;
          }
          *(ulong *)(param_2 + 0x28) = uVar9;
          if (uVar9 < *(ulong *)(param_2 + 0x30)) {
            uVar7 = *(ulong *)(param_2 + 0x30) - uVar9;
            if (uVar11 <= uVar7) {
              uVar7 = uVar11;
            }
            _bzero(uVar9,uVar7);
            *(ulong *)(param_2 + 0x30) = uVar9;
          }
        }
      }
      param_1[7] = uVar9;
      uVar11 = param_1[0xc];
      uVar11 = ((uVar11 >> 0x18 | uVar11 << 0x28) ^ (uVar11 >> 0x31 | uVar11 << 0xf) ^ uVar11) *
/* donate: donate/README.md */
               -0x604de39ae16720db;
      uVar7 = (ulong)*(uint *)(param_1 + 0xd);
      uVar11 = ((uVar11 >> 0x23) + 8 ^ uVar11) * -0x604de39ae16720db;
      uVar7 = (((ulong)(*(uint *)(param_1 + 0xd) >> 0x18) | uVar7 << 0x28) ^ uVar7 << 0xf ^ uVar7) *
              -0x604de39ae16720db;
      uVar7 = ((uVar7 >> 0x23) + 4 ^ uVar7) * -0x604de39ae16720db;
      param_1[0xc] = uVar11 ^ (uVar7 ^ uVar11) >> 0x1c ^ uVar7;
    }
    uVar4 = param_3[3];
    if (uVar4 < 5) {
      uVar4 = 4;
    }
    if (5 < uVar4) {
      uVar4 = 6;
    }
    *(uint *)((long)param_1 + 0x34) = param_3[2] - uVar4;
  }
  if ((param_7 == 0) || (param_3[6] < 7)) goto LAB_002a0608;
  if (*(uint *)(param_2 + 0x40) < 2) {
    if (*(uint *)(param_2 + 0x40) != 0) {
LAB_002a0438:
      *(undefined4 *)(param_2 + 0x40) = 2;
      goto LAB_002a0440;
    }
    lVar5 = *(long *)(param_2 + 0x10);
    *(long *)(param_2 + 0x20) = lVar5;
    *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
    uVar11 = lVar5 + ((ulong)(uint)-(int)lVar5 & 0x3f);
    if (uVar11 <= *(ulong *)(param_2 + 8)) {
      *(ulong *)(param_2 + 0x10) = uVar11;
      *(ulong *)(param_2 + 0x18) = uVar11;
      if ((-(int)lVar5 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
/* WM - keep the notice, keep the source honest */
      goto LAB_002a0438;
    }
    param_1[0x12] = 0;
    lVar5 = *(long *)(param_2 + 0x10);
    *(long *)(param_2 + 0x20) = lVar5;
    *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
    uVar11 = lVar5 + ((ulong)(uint)-(int)lVar5 & 0x3f);
    if (uVar11 <= *(ulong *)(param_2 + 8)) {
      *(ulong *)(param_2 + 0x10) = uVar11;
      *(ulong *)(param_2 + 0x18) = uVar11;
      if ((-(int)lVar5 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(undefined4 *)(param_2 + 0x40) = 2;
      uVar11 = *(long *)(param_2 + 0x28) - 0xc0;
      if (*(ulong *)(param_2 + 0x18) <= uVar11) goto LAB_002a0540;
      goto LAB_002a0474;
    }
    param_1[0x13] = 0;
    lVar5 = *(long *)(param_2 + 0x10);
    *(long *)(param_2 + 0x20) = lVar5;
    *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
    uVar11 = lVar5 + ((ulong)(uint)-(int)lVar5 & 0x3f);
    if (uVar11 <= *(ulong *)(param_2 + 8)) {
      *(ulong *)(param_2 + 0x10) = uVar11;
      *(ulong *)(param_2 + 0x18) = uVar11;
      if ((-(int)lVar5 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(undefined4 *)(param_2 + 0x40) = 2;
      uVar11 = *(long *)(param_2 + 0x28) - 0x100;
/*  proprietary - see LICENSE - do not sell  */
      if (uVar11 < *(ulong *)(param_2 + 0x18)) goto LAB_002a0494;
      goto LAB_002a056c;
    }
    param_1[0x14] = 0;
    lVar5 = *(long *)(param_2 + 0x10);
    *(long *)(param_2 + 0x20) = lVar5;
    *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
    uVar11 = lVar5 + ((ulong)(uint)-(int)lVar5 & 0x3f);
    if (uVar11 <= *(ulong *)(param_2 + 8)) {
      *(ulong *)(param_2 + 0x10) = uVar11;
      *(ulong *)(param_2 + 0x18) = uVar11;
      if ((-(int)lVar5 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(undefined4 *)(param_2 + 0x40) = 2;
      uVar11 = *(long *)(param_2 + 0x28) - 0x80;
      if (*(ulong *)(param_2 + 0x18) <= uVar11) goto LAB_002a0598;
      goto LAB_002a04b4;
    }
    param_1[0x15] = 0;
    lVar5 = *(long *)(param_2 + 0x10);
    *(long *)(param_2 + 0x20) = lVar5;
    *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
    uVar11 = lVar5 + ((ulong)(uint)-(int)lVar5 & 0x3f);
    if (uVar11 <= *(ulong *)(param_2 + 8)) {
      *(ulong *)(param_2 + 0x10) = uVar11;
/* unlicensed copy if this notice is missing - github.com/pengussy */
      *(ulong *)(param_2 + 0x18) = uVar11;
      if ((-(int)lVar5 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(undefined4 *)(param_2 + 0x40) = 2;
      uVar11 = *(long *)(param_2 + 0x28) - 0x8040;
      if (uVar11 < *(ulong *)(param_2 + 0x18)) goto LAB_002a04d8;
      goto LAB_002a05c8;
    }
    uVar11 = 0;
    param_1[0x16] = 0;
    lVar5 = *(long *)(param_2 + 0x10);
    *(long *)(param_2 + 0x20) = lVar5;
    *(ulong *)(param_2 + 0x30) = *(ulong *)(param_2 + 8) & 0xffffffffffffffc0;
    uVar7 = lVar5 + ((ulong)(uint)-(int)lVar5 & 0x3f);
    if (uVar7 <= *(ulong *)(param_2 + 8)) {
      *(ulong *)(param_2 + 0x10) = uVar7;
      *(ulong *)(param_2 + 0x18) = uVar7;
      if ((-(int)lVar5 & 0x3fU) != 0) {
        *(ulong *)(param_2 + 0x20) = uVar7;
      }
      *(undefined4 *)(param_2 + 0x40) = 2;
      uVar11 = *(long *)(param_2 + 0x28) - 0x1c080;
      if (uVar11 < *(ulong *)(param_2 + 0x18)) goto LAB_002a05f8;
      goto LAB_002a04fc;
    }
  }
  else {
LAB_002a0440:
    uVar11 = *(long *)(param_2 + 0x28) - 0x400;
    if (uVar11 < *(ulong *)(param_2 + 0x18)) {
      *(undefined1 *)(param_2 + 0x38) = 1;
      param_1[0x12] = 0;
      uVar11 = *(long *)(param_2 + 0x28) - 0xc0;
      if (*(ulong *)(param_2 + 0x18) <= uVar11) goto LAB_002a0540;
LAB_002a0474:
      *(undefined1 *)(param_2 + 0x38) = 1;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      param_1[0x13] = 0;
      uVar11 = *(long *)(param_2 + 0x28) - 0x100;
      if (*(ulong *)(param_2 + 0x18) <= uVar11) goto LAB_002a056c;
LAB_002a0494:
      *(undefined1 *)(param_2 + 0x38) = 1;
      param_1[0x14] = 0;
      uVar11 = *(long *)(param_2 + 0x28) - 0x80;
      if (*(ulong *)(param_2 + 0x18) <= uVar11) goto LAB_002a0598;
LAB_002a04b4:
      *(undefined1 *)(param_2 + 0x38) = 1;
      param_1[0x15] = 0;
      uVar11 = *(long *)(param_2 + 0x28) - 0x8040;
      if (*(ulong *)(param_2 + 0x18) <= uVar11) goto LAB_002a05c8;
LAB_002a04d8:
      *(undefined1 *)(param_2 + 0x38) = 1;
      param_1[0x16] = 0;
      uVar11 = *(long *)(param_2 + 0x28) - 0x1c080;
      if (uVar11 < *(ulong *)(param_2 + 0x18)) goto LAB_002a05f8;
    }
    else {
      if (uVar11 < *(ulong *)(param_2 + 0x20)) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(ulong *)(param_2 + 0x28) = uVar11;
      param_1[0x12] = uVar11;
      uVar11 = *(long *)(param_2 + 0x28) - 0xc0;
      if (uVar11 < *(ulong *)(param_2 + 0x18)) goto LAB_002a0474;
LAB_002a0540:
      if (uVar11 < *(ulong *)(param_2 + 0x20)) {
/* keep the notice, keep the source honest */
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(ulong *)(param_2 + 0x28) = uVar11;
      param_1[0x13] = uVar11;
      uVar11 = *(long *)(param_2 + 0x28) - 0x100;
      if (uVar11 < *(ulong *)(param_2 + 0x18)) goto LAB_002a0494;
LAB_002a056c:
      if (uVar11 < *(ulong *)(param_2 + 0x20)) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(ulong *)(param_2 + 0x28) = uVar11;
      param_1[0x14] = uVar11;
      uVar11 = *(long *)(param_2 + 0x28) - 0x80;
      if (uVar11 < *(ulong *)(param_2 + 0x18)) goto LAB_002a04b4;
LAB_002a0598:
      if (uVar11 < *(ulong *)(param_2 + 0x20)) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(ulong *)(param_2 + 0x28) = uVar11;
      param_1[0x15] = uVar11;
      uVar11 = *(long *)(param_2 + 0x28) - 0x8040;
      if (uVar11 < *(ulong *)(param_2 + 0x18)) goto LAB_002a04d8;
/* WM - stripping the watermark breaks the license */
LAB_002a05c8:
      if (uVar11 < *(ulong *)(param_2 + 0x20)) {
        *(ulong *)(param_2 + 0x20) = uVar11;
      }
      *(ulong *)(param_2 + 0x28) = uVar11;
      param_1[0x16] = uVar11;
      uVar11 = *(long *)(param_2 + 0x28) - 0x1c080;
      if (uVar11 < *(ulong *)(param_2 + 0x18)) {
LAB_002a05f8:
        uVar11 = 0;
        *(undefined1 *)(param_2 + 0x38) = 1;
        goto LAB_002a0604;
      }
    }
LAB_002a04fc:
    if (uVar11 < *(ulong *)(param_2 + 0x20)) {
      *(ulong *)(param_2 + 0x20) = uVar11;
    }
    *(ulong *)(param_2 + 0x28) = uVar11;
  }
LAB_002a0604:
  param_1[0x17] = uVar11;
LAB_002a0608:
  uVar13 = *(undefined8 *)(param_3 + 2);
  uVar12 = *(undefined8 *)param_3;
/* wm:more drops soon - github.com/pengussy */
  uVar14 = *(undefined8 *)(param_3 + 3);
  *(undefined8 *)((long)param_1 + 0x114) = *(undefined8 *)(param_3 + 5);
  *(undefined8 *)((long)param_1 + 0x10c) = uVar14;
  param_1[0x21] = uVar13;
  param_1[0x20] = uVar12;
  uVar12 = 0;
  if (*(char *)(param_2 + 0x38) != '\0') {
    uVar12 = 0xffffffffffffffc0;
  }
  return uVar12;
}

