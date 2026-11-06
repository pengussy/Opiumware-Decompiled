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
 *  file-id: 0x2900cc:82e38bda76
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

char * FUN_002900cc(char *param_1,long param_2,char *param_3,char *param_4,ulong param_5)

{
  char cVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *******pppppppuStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar11 = (ulong)param_1[0x17];
  if ((long)uVar11 < 0) {
    pcVar12 = *(char **)param_1;
    uVar10 = param_2 - (long)pcVar12;
    if (param_5 == 0) goto LAB_00290214;
    uVar9 = *(ulong *)(param_1 + 8);
    if (param_3 < pcVar12 || pcVar12 + uVar9 + 1 <= param_3) {
      lVar3 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
      if (param_5 <= lVar3 - uVar9) goto LAB_002901ac;
LAB_00290134:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,lVar3,(uVar9 + param_5) - lVar3,uVar9,uVar10,0,param_5);
      *(ulong *)(param_1 + 8) = uVar9 + param_5;
      pcVar12 = *(char **)param_1;
      cVar1 = param_1[0x17];
joined_r0x002902e0:
      lVar3 = uVar9 + param_5;
      if (cVar1 < '\0') goto LAB_002902e4;
LAB_002901c0:
      param_1[0x17] = (byte)lVar3 & 0x7f;
      pcVar12[lVar3] = '\0';
      goto joined_r0x002901d0;
    }
  }
  else {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar10 = param_2 - (long)param_1;
    pcVar12 = param_1;
    if (param_5 == 0) {
LAB_00290214:
      return pcVar12 + uVar10;
    }
    if ((param_3 < param_1) || (param_1 + uVar11 + 1 <= param_3)) {
      lVar3 = 0x16;
      uVar9 = uVar11;
      if (0x16 - uVar11 < param_5) goto LAB_00290134;
LAB_002901ac:
      if (uVar9 - uVar10 != 0) {
        _memmove(pcVar12 + uVar10 + param_5,pcVar12 + uVar10,uVar9 - uVar10);
        cVar1 = param_1[0x17];
        goto joined_r0x002902e0;
      }
      lVar3 = uVar10 + param_5;
      if (-1 < param_1[0x17]) goto LAB_002901c0;
LAB_002902e4:
      *(long *)(param_1 + 8) = lVar3;
      pcVar12[lVar3] = '\0';
joined_r0x002901d0:
      if (param_3 == param_4) goto LAB_0029043c;
      pcVar4 = pcVar12 + uVar10;
      uVar11 = (long)param_4 - (long)param_3;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      if (uVar11 < 8) {
        pcVar6 = param_3;
      }
      else if (pcVar12 + (uVar10 - (long)param_3) < "") {
        pcVar6 = param_3;
      }
      else {
        if (uVar11 < 0x40) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar11 & 0xffffffffffffffc0;
          pcVar6 = pcVar12 + uVar10 + 0x20;
          pcVar8 = param_3 + 0x20;
          uVar9 = uVar7;
          do {
            uVar13 = *(undefined8 *)(pcVar8 + -0x20);
            uVar15 = *(undefined8 *)(pcVar8 + -8);
            uVar14 = *(undefined8 *)(pcVar8 + -0x10);
            uVar17 = *(undefined8 *)(pcVar8 + 8);
            uVar16 = *(undefined8 *)pcVar8;
            uVar19 = *(undefined8 *)(pcVar8 + 0x18);
            uVar18 = *(undefined8 *)(pcVar8 + 0x10);
            *(undefined8 *)(pcVar6 + -0x18) = *(undefined8 *)(pcVar8 + -0x18);
            *(undefined8 *)(pcVar6 + -0x20) = uVar13;
            *(undefined8 *)(pcVar6 + -8) = uVar15;
            *(undefined8 *)(pcVar6 + -0x10) = uVar14;
            *(undefined8 *)(pcVar6 + 8) = uVar17;
            *(undefined8 *)pcVar6 = uVar16;
            *(undefined8 *)(pcVar6 + 0x18) = uVar19;
            *(undefined8 *)(pcVar6 + 0x10) = uVar18;
            uVar9 = uVar9 - 0x40;
            pcVar6 = pcVar6 + 0x40;
            pcVar8 = pcVar8 + 0x40;
          } while (uVar9 != 0);
          if (uVar11 == uVar7) goto LAB_0029043c;
          if ((uVar11 & 0x38) == 0) {
/* WM - watermarked copy - do not remove */
            pcVar4 = pcVar4 + uVar7;
            pcVar6 = param_3 + uVar7;
            goto LAB_0029042c;
          }
        }
        uVar9 = uVar11 & 0xfffffffffffffff8;
        pcVar4 = pcVar4 + uVar9;
        pcVar6 = param_3 + uVar9;
        lVar3 = uVar7 - uVar9;
        pcVar12 = pcVar12 + uVar10 + uVar7;
        pcVar8 = param_3 + uVar7;
        do {
          *(undefined8 *)pcVar12 = *(undefined8 *)pcVar8;
          lVar3 = lVar3 + 8;
          pcVar12 = pcVar12 + 8;
          pcVar8 = pcVar8 + 8;
        } while (lVar3 != 0);
        if (uVar11 == uVar9) goto LAB_0029043c;
      }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
LAB_0029042c:
      do {
        pcVar12 = pcVar6 + 1;
        *pcVar4 = *pcVar6;
        pcVar4 = pcVar4 + 1;
        pcVar6 = pcVar12;
      } while (pcVar12 != param_4);
LAB_0029043c:
      if (param_1[0x17] < '\0') {
        param_1 = *(char **)param_1;
      }
      return param_1 + uVar10;
    }
  }
  pppppppuStack_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_3 == param_4) {
    uVar5 = 0;
  }
  else {
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (&pppppppuStack_68,(long)*param_3);
      param_3 = param_3 + 1;
    } while (param_3 != param_4);
    uVar5 = (uint)uStack_58._7_1_;
    uVar11 = (ulong)(byte)param_1[0x17];
  }
  uVar9 = uStack_60;
  pppppppuVar2 = pppppppuStack_68;
  if (-1 < (char)uVar5) {
    uVar9 = (ulong)uVar5;
// unlicensed copy if this notice is missing
    pppppppuVar2 = &pppppppuStack_68;
  }
  if (((uint)uVar11 >> 7 & 1) == 0) {
    uVar11 = uVar11 & 0xff;
    lVar3 = 0x16;
    if (0x16 - uVar11 < param_5) goto LAB_0029028c;
    lVar3 = uVar11 - uVar10;
    pcVar12 = param_1;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 8);
    lVar3 = (*(ulong *)(param_1 + 0x10) & 0x7fffffffffffffff) - 1;
    if (lVar3 - uVar11 < param_5) {
LAB_0029028c:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                (param_1,lVar3,(uVar11 + param_5) - lVar3,uVar11,uVar10,0,param_5);
      *(ulong *)(param_1 + 8) = uVar11 + param_5;
      pcVar12 = *(char **)param_1;
/* wm:origin: github.com/pengussy */
      cVar1 = param_1[0x17];
      goto joined_r0x00290344;
    }
    lVar3 = uVar11 - uVar10;
    pcVar12 = *(char **)param_1;
  }
  if (lVar3 == 0) {
    cVar1 = param_1[0x17];
    uVar11 = uVar10;
  }
  else {
    _memmove((char *)((long)pcVar12 + uVar10) + param_5,(char *)((long)pcVar12 + uVar10),lVar3);
    cVar1 = param_1[0x17];
  }
joined_r0x00290344:
  uVar13 = uVar11 + param_5;
  if (cVar1 < '\0') {
    *(undefined8 *)(param_1 + 8) = uVar13;
  }
  else {
    param_1[0x17] = (byte)uVar13 & 0x7f;
  }
  *(char *)((long)pcVar12 + uVar13) = '\0';
  _memmove((char *)((long)pcVar12 + uVar10),pppppppuVar2,uVar9);
  if (param_1[0x17] < '\0') {
    param_1 = *(char **)param_1;
  }
  if (uStack_58 < 0) {
    __ZdlPv(pppppppuStack_68);
    return param_1 + uVar10;
  }
/*  no support for modified copies  */
  return param_1 + uVar10;
}

