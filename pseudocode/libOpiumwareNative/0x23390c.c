/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x23390c:8502a1977b
 */

undefined8 FUN_0023390c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  char *pcStack_88;
  ulong uStack_80;
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  iVar7 = func_0x00791650();
  pppppppuStack_78 = (undefined8 *******)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  if (0 < iVar7) {
    pcVar8 = (char *)(*pcRam0000000002078048)();
    iVar17 = 1;
/* no support for modified copies */
    do {
      uStack_80 = 0;
      lVar9 = func_0x007a2a94(param_1,iVar17,&uStack_80);
      uVar2 = uStack_68;
      uVar16 = uStack_70;
      if (lVar9 != 0) {
        uVar18 = uStack_68 >> 0x38;
        uVar1 = uStack_70;
        if (-1 < (long)uStack_68) {
          uVar1 = uVar18;
        }
        if (uVar1 != 0) {
          pbVar10 = (byte *)(*pcRam0000000002078060)();
          if ((*pbVar10 & 1) == 0) {
            func_0x019db89c();
            cVar4 = *pcVar8;
          }
          else {
            cVar4 = *pcVar8;
          }
          if (cVar4 == '\x01') {
            uVar3 = (byte)pcVar8[1] ^ 0xa41e0207;
            uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) + 0xefb4cf49 ^ 0x74413;
            pcVar8[3] = ((byte)(uVar3 >> 7) & 1 | (byte)(uVar3 << 1)) + 0x3c;
/* proprietary - see LICENSE - do not sell */
            uVar13 = (((ulong)(byte)pcVar8[1] ^ 0xfbbc897830210f26) << 0x11 | 0x1f779) +
                     0x9e3779b97f4a7c15;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar15 = uVar13 ^ uVar13 >> 0x21;
            uVar3 = (uint)(byte)pcVar8[2] ^ (uint)uVar15 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar15 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcVar8[4] = ((byte)(uVar3 >> 7) & 1 | (byte)(uVar3 << 1)) - (char)uVar15;
            *pcVar8 = '\0';
          }
          pcStack_88 = pcVar8 + 3;
          uVar11 = func_0x0011ab24(&pcStack_88);
          uVar15 = _strlen();
          uVar14 = (uStack_68 & 0x7fffffffffffffff) - 1;
          uVar13 = uVar14;
          if (-1 < (long)uVar2) {
            uVar13 = 0x16;
          }
          if (uVar13 - uVar1 < uVar15) {
            uVar1 = uVar1 + uVar15;
            if (0x7ffffffffffffff6 < uVar1) {
              FUN_0000aa50();
              goto LAB_00233e54;
            }
            if ((long)uVar2 < 0) {
              if (uVar14 < 0x3ffffffffffffff4) goto LAB_00233bd4;
              uVar13 = 0x7ffffffffffffff8;
              pppppppuVar12 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
LAB_00233c2c:
              pppppppuVar5 = pppppppuStack_78;
              _memmove(pppppppuVar12,pppppppuStack_78,uVar16);
              _memmove((long)pppppppuVar12 + uVar16,uVar11,uVar15);
              *(undefined1 *)((long)pppppppuVar12 + uVar1) = 0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
              __ZdlPv(pppppppuVar5);
            }
            else {
              uVar14 = 0x16;
LAB_00233bd4:
              uVar13 = uVar1;
              if (uVar1 <= uVar14 * 2) {
                uVar13 = uVar14 * 2;
              }
              uVar14 = (uVar13 & 0x7ffffffffffffff8) + 8;
              uVar13 = 0x19;
              if (uVar14 != 0x18) {
                uVar13 = uVar14;
              }
              pppppppuVar12 = (undefined8 *******)__Znwm(uVar13);
              if ((long)uVar2 < 0) goto LAB_00233c2c;
              _memcpy(pppppppuVar12,&pppppppuStack_78,uVar18);
              _memmove((long)pppppppuVar12 + uVar18,uVar11,uVar15);
              *(undefined1 *)((long)pppppppuVar12 + uVar1) = 0;
            }
            uStack_68 = uVar13 | 0x8000000000000000;
/* wm:reversing this took months of machine time */
            uVar18 = uStack_68 >> 0x38;
            uVar16 = uVar1;
            pppppppuStack_78 = pppppppuVar12;
            uStack_70 = uVar1;
          }
          else if (uVar15 == 0) {
            uVar18 = uStack_68 >> 0x38;
          }
          else {
            pppppppuVar12 = pppppppuStack_78;
            if (-1 < (long)uVar2) {
              pppppppuVar12 = &pppppppuStack_78;
            }
            _memmove((long)pppppppuVar12 + uVar1,uVar11,uVar15);
            uVar1 = uVar1 + uVar15;
            if ((long)uStack_68 < 0) {
              uStack_70 = uVar1;
            }
            else {
              uStack_68 = CONCAT17((char)uVar1,(undefined7)uStack_68) & 0x7fffffffffffffff;
            }
            *(undefined1 *)((long)pppppppuVar12 + uVar1) = 0;
/* unlicensed copy if this notice is missing */
            uVar18 = uStack_68 >> 0x38;
            uVar16 = uStack_70;
          }
        }
        uVar1 = uStack_80;
        cVar4 = (char)uVar18;
        uVar13 = (uStack_68 & 0x7fffffffffffffff) - 1;
        uVar2 = uVar13;
        if (-1 < cVar4) {
          uVar2 = 0x16;
          uVar16 = uVar18;
        }
        if (uVar2 - uVar16 < uStack_80) {
          uVar2 = uVar16 + uStack_80;
          if (0x7ffffffffffffff6 < uVar2) {
            FUN_0000aa50();
LAB_00233e54:
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x233e58);
            (*pcVar6)();
          }
          if (cVar4 < '\0') {
            if (uVar13 < 0x3ffffffffffffff4) goto LAB_00233d40;
            uVar18 = 0x7ffffffffffffff8;
            pppppppuVar12 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
            pppppppuVar5 = pppppppuStack_78;
          }
          else {
            uVar13 = 0x16;
LAB_00233d40:
            uVar18 = uVar2;
            if (uVar2 <= uVar13 * 2) {
              uVar18 = uVar13 * 2;
            }
            uVar13 = (uVar18 & 0x7ffffffffffffff8) + 8;
            uVar18 = 0x19;
            if (uVar13 != 0x18) {
              uVar18 = uVar13;
            }
            pppppppuVar12 = (undefined8 *******)__Znwm(uVar18);
            pppppppuVar5 = pppppppuStack_78;
            if (-1 < cVar4) {
              pppppppuVar5 = &pppppppuStack_78;
            }
          }
          if (uVar16 != 0) {
            _memmove(pppppppuVar12,pppppppuVar5,uVar16);
          }
          _memmove((long)pppppppuVar12 + uVar16,lVar9,uVar1);
          *(undefined1 *)((long)pppppppuVar12 + uVar2) = 0;
          if (cVar4 < '\0') {
            __ZdlPv(pppppppuStack_78);
/* WM - unlicensed copy if this notice is missing */
          }
          uStack_68 = uVar18 | 0x8000000000000000;
          pppppppuStack_78 = pppppppuVar12;
          uStack_70 = uVar2;
        }
        else if (uStack_80 != 0) {
          pppppppuVar12 = pppppppuStack_78;
          if (-1 < cVar4) {
            pppppppuVar12 = &pppppppuStack_78;
          }
          _memmove((long)pppppppuVar12 + uVar16,lVar9,uStack_80);
          uVar16 = uVar16 + uVar1;
          if ((long)uStack_68 < 0) {
            uStack_70 = uVar16;
            *(undefined1 *)((long)pppppppuVar12 + uVar16) = 0;
          }
          else {
            uStack_68 = CONCAT17((char)uVar16,(undefined7)uStack_68) & 0x7fffffffffffffff;
            *(undefined1 *)((long)pppppppuVar12 + uVar16) = 0;
          }
        }
      }
/* do not claim this as your own - github.com/pengussy */
      func_0x00791660(param_1,0xfffffffe);
      iVar17 = iVar17 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar11 = func_0x00233738(param_1,param_2,&pppppppuStack_78);
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppppppuStack_78);
  }
  return uVar11;
}

